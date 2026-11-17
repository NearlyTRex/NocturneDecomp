; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_005b2de0(void)
;
;
; Referenced Globals:
;   HWND g_MainWindowHandle
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c9be68]      ; 005b2de0 | g_MainWindowHandle
        ;   Label: wincore_winrun.cpp_destroyMainWindow_FUN_005b2de0
    PUSH EDX                            ; 005b2de6
    CALL dword ptr CS:[0x5d04b0]        ; 005b2de7
    XOR ECX,ECX                         ; 005b2dee
    MOV dword ptr [0x02c9be68],ECX      ; 005b2df0 | g_MainWindowHandle
    RET                                 ; 005b2df6

