; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004ce3b0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   unkafter_stranger.cpp_FUN_0045def0 at 0045defb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce3b0
        ;   Label: core_hero.cpp_FUN_004ce3b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ce3b4
    MOV dword ptr [EAX + 0x247e4],EDX   ; 004ce3b8
    MOV dword ptr [EAX + 0x2563c],EDX   ; 004ce3be
    RET                                 ; 004ce3c4

