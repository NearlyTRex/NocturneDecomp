; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_load_FUN_004570c0(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_dpart_cpp_0057d413
;   TerminatedCString s_CDemonPart_load_is_no_lo_0057d425
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x57d413                    ; 004570c0 | = "..\\core\\dpart.cpp"
        ;   Label: core_dpart.cpp_CDemonPart_load_FUN_004570c0
    MOV ECX,0x128                       ; 004570c5
    PUSH 0x57d425                       ; 004570ca | = "CDemonPart::load is no longer needed"
    MOV dword ptr [0x01cc4800],EDX      ; 004570cf | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004570d5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004570db
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004570e0
    RET                                 ; 004570e3

