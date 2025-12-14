; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_FUN_0057a270()
;
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_006473de
;   TerminatedCString s_Import_set_from_demon_pa_006473f2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x6473de                    ; 0057a270 | = "..\\core\\setedit.cpp"
        ;   Label: core_setedit.cpp_FUN_0057a270
    MOV ECX,0x6c0                       ; 0057a275
    PUSH 0x6473f2                       ; 0057a27a | = "Import set from demon part is broken ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0057a27f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0057a285 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057a28b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057a290
    RET                                 ; 0057a293

