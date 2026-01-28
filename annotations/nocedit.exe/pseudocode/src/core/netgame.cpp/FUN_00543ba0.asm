; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_netgame_cpp_FUN_00543ba0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543ba0
        ;   Label: core_netgame.cpp_FUN_00543ba0
    MOV byte ptr [EAX + 0x4],0xd        ; 00543ba4
    MOV dword ptr [EAX],0x9             ; 00543ba8
    RET                                 ; 00543bae

