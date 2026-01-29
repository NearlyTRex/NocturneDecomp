; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0(void)
;
;
; XREF[2]:
;   engine_2d.c_clearInputAndWait_FUN_00403260 at 00403265
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045c6d6
;
; Referenced Globals:
;   uint g_MouseButtonFlags
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005f30c0
        ;   Label: wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
    MOV dword ptr [0x02cf6a94],EDX      ; 005f30c2 | g_MouseButtonFlags
    RET                                 ; 005f30c8

