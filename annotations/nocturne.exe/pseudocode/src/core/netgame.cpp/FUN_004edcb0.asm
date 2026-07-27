; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_FUN_004edcb0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edcb0
        ;   Label: core_netgame.cpp_FUN_004edcb0
    MOV byte ptr [EAX + 0x4],0x3        ; 004edcb4
    MOV dword ptr [EAX],0x9             ; 004edcb8
    RET                                 ; 004edcbe

