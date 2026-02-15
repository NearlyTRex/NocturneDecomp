; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
;
; XREF[1]:
;   engine_model.c_loadModelFile_FUN_00527ec0 at 00528093
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_006163c3
;   TerminatedCString s_modelStruct_not_supporte_006163d4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x6163c3                    ; 0041db80 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported_FUN_0041db80
    MOV ECX,0x3a                        ; 0041db85
    PUSH 0x6163d4                       ; 0041db8a | = "modelStruct not supported"
    MOV dword ptr [0x02f0ca48],EDX      ; 0041db8f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041db95 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041db9b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041dba0
    XOR EAX,EAX                         ; 0041dba3
    RET                                 ; 0041dba5

