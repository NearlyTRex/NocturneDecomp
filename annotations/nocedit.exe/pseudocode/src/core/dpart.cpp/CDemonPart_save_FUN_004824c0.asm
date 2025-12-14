; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dpart.cpp_CDemonPart_save_FUN_004824c0(CDemonPart * this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_dpart_cpp_006217b8
;   TerminatedCString s_CDemonPart_save_is_no_lo_006217ca
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x6217b8                    ; 004824c0 | = "..\\core\\dpart.cpp"
        ;   Label: core_dpart.cpp_CDemonPart_save_FUN_004824c0
    MOV ECX,0x132                       ; 004824c5
    PUSH 0x6217ca                       ; 004824ca | = "CDemonPart::save is no longer needed"
    MOV dword ptr [0x02f0ca48],EDX      ; 004824cf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004824d5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004824db
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004824e0
    RET                                 ; 004824e3

