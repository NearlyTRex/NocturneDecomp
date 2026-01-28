; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_netgame_cpp_FUN_00543e00(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543e00
        ;   Label: core_netgame.cpp_FUN_00543e00
    MOV ECX,dword ptr [ESP + 0x8]       ; 00543e04
    MOV EDX,dword ptr [ECX]             ; 00543e08
    MOV dword ptr [EAX],EDX             ; 00543e0a
    MOV DX,word ptr [ECX + 0x4]         ; 00543e0c
    MOV word ptr [EAX + 0x4],DX         ; 00543e10
    RET                                 ; 00543e14

