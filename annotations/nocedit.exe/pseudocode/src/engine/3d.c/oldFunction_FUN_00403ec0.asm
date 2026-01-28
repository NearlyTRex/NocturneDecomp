; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00403ec0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_00613414
;   TerminatedCString s_Old_func_00613423
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x613414                    ; 00403ec0 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_oldFunction_FUN_00403ec0
    MOV ECX,0x361                       ; 00403ec5
    PUSH 0x613423                       ; 00403eca | = "Old func"
    MOV dword ptr [0x02f0ca48],EDX      ; 00403ecf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00403ed5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00403edb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403ee0
    XOR EAX,EAX                         ; 00403ee3
    RET                                 ; 00403ee5

