; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005b2740(void)
;
;
; XREF[1]:
;   engine_2d.c_clearInputAndWait_FUN_004032b0 at 004032b5
;
; Referenced Globals:
;   undefined4 DAT_01c43544
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005b2740
        ;   Label: wincore_winrun.cpp_clearMouseClicks_FUN_005b2740
    MOV dword ptr [0x01c43544],EDX      ; 005b2742 | DAT_01c43544
    RET                                 ; 005b2748

