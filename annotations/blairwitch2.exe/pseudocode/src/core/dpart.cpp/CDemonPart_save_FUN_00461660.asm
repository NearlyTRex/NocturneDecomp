; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_save_FUN_00461660(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5d0dc0                    ; 00461660
        ;   Label: core_dpart.cpp_CDemonPart_save_FUN_00461660
    MOV ECX,0x132                       ; 00461665
    PUSH 0x5d0dd2                       ; 0046166a
    MOV dword ptr [0x01d046a0],EDX      ; 0046166f | g_CurrentFilename
    MOV dword ptr [0x01d046a4],ECX      ; 00461675 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0046167b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00461680
    RET                                 ; 00461683

