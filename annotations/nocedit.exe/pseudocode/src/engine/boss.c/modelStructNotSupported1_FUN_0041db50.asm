; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041db50(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00616398
;   TerminatedCString s_modelStruct_not_supporte_006163a9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x616398                    ; 0041db50 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported1_FUN_0041db50
    MOV ECX,0x35                        ; 0041db55
    PUSH 0x6163a9                       ; 0041db5a | = "modelStruct not supported"
    MOV dword ptr [0x02f0ca48],EDX      ; 0041db5f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041db65 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041db6b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041db70
    XOR EAX,EAX                         ; 0041db73
    RET                                 ; 0041db75

