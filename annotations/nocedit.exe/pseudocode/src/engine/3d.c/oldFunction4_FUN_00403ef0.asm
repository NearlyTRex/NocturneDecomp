; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction4_FUN_00403ef0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_0061342c
;   TerminatedCString s_Old_func_0061343b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x61342c                    ; 00403ef0 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_oldFunction4_FUN_00403ef0
    MOV ECX,0x375                       ; 00403ef5
    PUSH 0x61343b                       ; 00403efa | = "Old func"
    MOV dword ptr [0x02f0ca48],EDX      ; 00403eff | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00403f05 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00403f0b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403f10
    XOR EAX,EAX                         ; 00403f13
    RET                                 ; 00403f15

