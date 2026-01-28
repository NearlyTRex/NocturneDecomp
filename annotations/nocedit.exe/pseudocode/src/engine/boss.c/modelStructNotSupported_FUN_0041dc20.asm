; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dc20(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
;
; XREF[1]:
;   engine_model.c_loadMRGLTextures_FUN_00528870 at 005288ca
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00616444
;   TerminatedCString s_modelStruct_not_supporte_00616455
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x616444                    ; 0041dc20 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported_FUN_0041dc20
    MOV ECX,0x49                        ; 0041dc25
    PUSH 0x616455                       ; 0041dc2a | = "modelStruct not supported"
    MOV dword ptr [0x02f0ca48],EDX      ; 0041dc2f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041dc35 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041dc3b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041dc40
    RET                                 ; 0041dc43

