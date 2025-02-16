add_library(headers INTERFACE)
target_include_directories(headers INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/game
    ${CMAKE_CURRENT_LIST_DIR}/al
    ${CMAKE_CURRENT_LIST_DIR}/agl
    ${CMAKE_CURRENT_LIST_DIR}/eui
    ${CMAKE_CURRENT_LIST_DIR}/sead
    ${CMAKE_CURRENT_LIST_DIR}/NintendoSDK
    ${CMAKE_CURRENT_LIST_DIR}/aarch64
)
