; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005809c0(void)
;
;
; XREF[1]:
;   engine_2d.c_clearInputAndWait_FUN_004032b0 at 004032b5
;
; Referenced Globals:
;   undefined4 DAT_01c5fae4
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005809c0
        ;   Label: wincore_winrun.cpp_clearMouseClicks_FUN_005809c0
    MOV dword ptr [0x01c5fae4],EDX      ; 005809c2 | DAT_01c5fae4
    RET                                 ; 005809c8

