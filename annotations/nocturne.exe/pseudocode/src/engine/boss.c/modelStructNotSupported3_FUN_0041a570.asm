; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_boss_c_modelStructNotSupported3_FUN_0041a570(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; XREF[1]:
;   engine_model.c_freeMRGLData_FUN_004dcee0 at 004dcefa
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005795cc
;   TerminatedCString s_modelStruct_not_supporte_005795dd
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x5795cc                    ; 0041a570 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported3_FUN_0041a570
    MOV ECX,0x3f                        ; 0041a575
    PUSH 0x5795dd                       ; 0041a57a | = "modelStruct not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 0041a57f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0041a585 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0041a58b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0041a590
    RET                                 ; 0041a593

