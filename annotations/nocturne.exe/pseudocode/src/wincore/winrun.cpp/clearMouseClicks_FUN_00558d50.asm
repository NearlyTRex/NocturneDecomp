; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_00558d50(void)
;
;
; XREF[1]:
;   engine_2d.c_clearInputAndWait_FUN_00403f50 at 00403f55
;
; Referenced Globals:
;   undefined4 DAT_01bd1d94
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00558d50
        ;   Label: wincore_winrun.cpp_clearMouseClicks_FUN_00558d50
    MOV dword ptr [0x01bd1d94],EDX      ; 00558d52 | DAT_01bd1d94
    RET                                 ; 00558d58

