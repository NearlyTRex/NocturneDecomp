; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041a510(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00579576
;   TerminatedCString s_modelStruct_not_supporte_00579587
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x579576                    ; 0041a510 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported1_FUN_0041a510
    MOV ECX,0x35                        ; 0041a515
    PUSH 0x579587                       ; 0041a51a | = "modelStruct not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 0041a51f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0041a525 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0041a52b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0041a530
    XOR EAX,EAX                         ; 0041a533
    RET                                 ; 0041a535

