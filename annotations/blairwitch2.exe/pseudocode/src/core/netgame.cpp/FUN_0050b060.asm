; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_FUN_0050b060(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d34e4c
;   undefined4 DAT_01d51050
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0050b060
        ;   Label: core_netgame.cpp_FUN_0050b060
    MOV dword ptr [0x01d51050],EDX      ; 0050b062 | DAT_01d51050
    MOV dword ptr [0x01d34e4c],EDX      ; 0050b068 | DAT_01d34e4c
    RET                                 ; 0050b06e

