; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_boss_c_modelStructNotSupported3_FUN_0041d950(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; XREF[1]:
;   engine_model.c_freeMRGLData_FUN_0051f8a0 at 0051f8ba
;
; Referenced Globals:
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d49c7                    ; 0041d950
        ;   Label: engine_boss.c_modelStructNotSupported3_FUN_0041d950
    MOV ECX,0x3f                        ; 0041d955
    PUSH 0x5d49d8                       ; 0041d95a
    MOV dword ptr [0x01d1d400],EDX      ; 0041d95f | g_CurrentFilename
    MOV dword ptr [0x01d1d404],ECX      ; 0041d965 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0041d96b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0041d970
    RET                                 ; 0041d973

