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
;   _BIT_INTEGER32 g_MouseButtonFlags
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005b2740
        ;   Label: wincore_winrun.cpp_clearMouseClicks_FUN_005b2740
    MOV dword ptr [0x01c43544],EDX      ; 005b2742 | g_MouseButtonFlags
    RET                                 ; 005b2748

