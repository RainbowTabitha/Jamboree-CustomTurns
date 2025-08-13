#include <hk/hook/Trampoline.h>

#include "externals/bq/BoardWork.h"

HkTrampoline<void, bq::BoardWork*, int> BoardWorkMaxTurnHook = hk::hook::trampoline([](bq::BoardWork* board, int maxTurn){
    BoardWorkMaxTurnHook.orig(board, 50);
});

extern "C" void hkMain() {
    BoardWorkMaxTurnHook.installAtPtr(pun<void*>(&bq::BoardWork::SetTurnMax));
}
