; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dpart.cpp_CDemonPart_load_FUN_00482490(CDemonPart * this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_dpart_cpp_00621781
;   TerminatedCString s_CDemonPart_load_is_no_lo_00621793
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x621781                    ; 00482490 | = "..\\core\\dpart.cpp" | s_core_dpart_cpp_00621781 = ..\core\dpart.cpp
        ;   Label: core_dpart.cpp_CDemonPart_load_FUN_00482490
    MOV ECX,0x128                       ; 00482495
    PUSH 0x621793                       ; 0048249a | = "CDemonPart::load is no longer needed" | s_CDemonPart_load_is_no_lo_00621793 = CDemonPart::load is no longer needed
    MOV dword ptr [0x02f0ca48],EDX      ; 0048249f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004824a5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004824ab | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004824b0
    RET                                 ; 004824b3

