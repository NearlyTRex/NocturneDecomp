; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_0058eab0(void)
;
;
; XREF[3]:
;   engine_2d.c_clearInputAndWait_FUN_004032b0 at 004032b0
;   engine_keys.cpp_clearKeypresses_FUN_004dfe80 at 004dfe80
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0 at 0047ae2d
;
; Referenced Globals:
;   int g_InputReadIndex
;   int g_InputWriteIndex
;   int g_InputCountOld
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0058eab0
        ;   Label: wincore_winrun.cpp_clearKeypresses_FUN_0058eab0
    XOR EAX,EAX                         ; 0058eab2
    MOV dword ptr [0x02662ddc],EDX      ; 0058eab4 | g_InputWriteIndex
    MOV dword ptr [0x02662dd8],EDX      ; 0058eaba | g_InputReadIndex
    MOV dword ptr [0x02662de0],EDX      ; 0058eac0 | g_InputCountOld
    RET                                 ; 0058eac6

