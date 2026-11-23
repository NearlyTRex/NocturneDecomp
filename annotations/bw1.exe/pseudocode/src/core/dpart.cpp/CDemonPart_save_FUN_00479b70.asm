; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_save_FUN_00479b70(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5dabb9                    ; 00479b70
        ;   Label: core_dpart.cpp_CDemonPart_save_FUN_00479b70
    MOV ECX,0x132                       ; 00479b75
    PUSH 0x5dabcb                       ; 00479b7a
    MOV dword ptr [0x01d1d400],EDX      ; 00479b7f | g_CurrentFilename
    MOV dword ptr [0x01d1d404],ECX      ; 00479b85 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00479b8b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00479b90
    RET                                 ; 00479b93

