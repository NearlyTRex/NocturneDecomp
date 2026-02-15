; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_quantize_cpp_showError_FUN_00556ce0(char *error)
;
; Parameters:
; char *           Stack[0x4]:4   error
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640a89
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556ce0
        ;   Label: shape_quantize.cpp_showError_FUN_00556ce0
    MOV EDX,0x640a89                    ; 00556ce1 | = "..\\shape\\quantize.cpp"
    MOV EBX,dword ptr [ESP + 0x8]       ; 00556ce6
    MOV ECX,0x67                        ; 00556cea
    PUSH EBX                            ; 00556cef
    MOV dword ptr [0x02f0ca48],EDX      ; 00556cf0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00556cf6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556cfc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556d01
    POP EBX                             ; 00556d04
    RET                                 ; 00556d05

