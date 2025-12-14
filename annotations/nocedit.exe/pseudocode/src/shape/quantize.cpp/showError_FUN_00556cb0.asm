; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_quantize.cpp_showError_FUN_00556cb0(char * error)
;
; Parameters:
; char *           Stack[0x4]:4   error
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640a73
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556cb0
        ;   Label: shape_quantize.cpp_showError_FUN_00556cb0
    MOV EDX,0x640a73                    ; 00556cb1 | = "..\\shape\\quantize.cpp"
    MOV EBX,dword ptr [ESP + 0x8]       ; 00556cb6
    MOV ECX,0x61                        ; 00556cba
    PUSH EBX                            ; 00556cbf
    MOV dword ptr [0x02f0ca48],EDX      ; 00556cc0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00556cc6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556ccc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556cd1
    POP EBX                             ; 00556cd4
    RET                                 ; 00556cd5

