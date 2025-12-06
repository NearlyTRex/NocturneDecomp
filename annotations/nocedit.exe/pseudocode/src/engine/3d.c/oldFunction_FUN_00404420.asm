; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00404420(SMRGLHeaderExtended * primitive)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_00613444
;   TerminatedCString s_Old_func_00613453
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x613444                    ; 00404420 | = "..\\engine\\3d.c" | s_engine_3d_c_00613444 = ..\engine\3d.c
        ;   Label: engine_3d.c_oldFunction_FUN_00404420
    MOV ECX,0x434                       ; 00404425
    PUSH 0x613453                       ; 0040442a | = "Old func" | s_Old_func_00613453 = Old func
    MOV dword ptr [0x02f0ca48],EDX      ; 0040442f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00404435 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040443b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00404440
    XOR EAX,EAX                         ; 00404443
    RET                                 ; 00404445

