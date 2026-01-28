; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
;
; XREF[1]:
;   engine_model.c_freeMRGLData_FUN_005280b0 at 005280ca
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_006163ee
;   TerminatedCString s_modelStruct_not_supporte_006163ff
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x6163ee                    ; 0041dbb0 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported_FUN_0041dbb0
    MOV ECX,0x3f                        ; 0041dbb5
    PUSH 0x6163ff                       ; 0041dbba | = "modelStruct not supported"
    MOV dword ptr [0x02f0ca48],EDX      ; 0041dbbf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041dbc5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041dbcb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041dbd0
    RET                                 ; 0041dbd3

