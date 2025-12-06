; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00403e00(SMRGLHeaderExtended * primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_006133fc
;   TerminatedCString s_Old_func_0061340b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x6133fc                    ; 00403e00 | = "..\\engine\\3d.c" | s_engine_3d_c_006133fc = ..\engine\3d.c
        ;   Label: engine_3d.c_oldFunction_FUN_00403e00
    MOV ECX,0x335                       ; 00403e05
    PUSH 0x61340b                       ; 00403e0a | = "Old func" | s_Old_func_0061340b = Old func
    MOV dword ptr [0x02f0ca48],EDX      ; 00403e0f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00403e15 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00403e1b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00403e20
    XOR EAX,EAX                         ; 00403e23
    RET                                 ; 00403e25

