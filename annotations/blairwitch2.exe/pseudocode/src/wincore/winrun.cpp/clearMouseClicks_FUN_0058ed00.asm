; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_0058ed00(void)
;
;
; XREF[1]:
;   engine_2d.c_clearInputAndWait_FUN_004032b0 at 004032b5
;
; Referenced Globals:
;   undefined4 DAT_01c2a384
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0058ed00
        ;   Label: wincore_winrun.cpp_clearMouseClicks_FUN_0058ed00
    MOV dword ptr [0x01c2a384],EDX      ; 0058ed02 | DAT_01c2a384
    RET                                 ; 0058ed08

