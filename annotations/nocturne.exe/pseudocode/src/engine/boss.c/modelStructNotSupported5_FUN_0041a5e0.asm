; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_boss_c_modelStructNotSupported5_FUN_0041a5e0(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; XREF[1]:
;   engine_model.c_loadMRGLTextures_FUN_004dd690 at 004dd6ea
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00579622
;   TerminatedCString s_modelStruct_not_supporte_00579633
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x579622                    ; 0041a5e0 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported5_FUN_0041a5e0
    MOV ECX,0x49                        ; 0041a5e5
    PUSH 0x579633                       ; 0041a5ea | = "modelStruct not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 0041a5ef | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0041a5f5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0041a5fb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0041a600
    RET                                 ; 0041a603

