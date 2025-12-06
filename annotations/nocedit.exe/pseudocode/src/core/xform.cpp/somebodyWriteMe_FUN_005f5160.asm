; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_xform.cpp_somebodyWriteMe_FUN_005f5160(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_xform_cpp_006582c5
;   TerminatedCString s_Somebody_write_me_006582d7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x6582c5                    ; 005f5160 | = "..\\core\\xform.cpp" | s_core_xform_cpp_006582c5 = ..\core\xform.cpp
        ;   Label: core_xform.cpp_somebodyWriteMe_FUN_005f5160
    MOV ECX,0x7b                        ; 005f5165
    PUSH 0x6582d7                       ; 005f516a | = "Somebody write me!" | s_Somebody_write_me_006582d7 = Somebody write me!
    MOV dword ptr [0x02f0ca48],EDX      ; 005f516f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005f5175 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005f517b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f5180
    RET                                 ; 005f5183

