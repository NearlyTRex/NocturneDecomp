; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction7_FUN_00404690(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_0061345c
;   TerminatedCString s_old_func_0061346b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x61345c                    ; 00404690 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_oldFunction7_FUN_00404690
    MOV ECX,0x50c                       ; 00404695
    PUSH 0x61346b                       ; 0040469a | = "old func"
    MOV dword ptr [0x02f0ca48],EDX      ; 0040469f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004046a5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004046ab
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004046b0
    XOR EAX,EAX                         ; 004046b3
    RET                                 ; 004046b5

