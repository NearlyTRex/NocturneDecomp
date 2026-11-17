; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_load_FUN_00461630(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5d0d89                    ; 00461630
        ;   Label: core_dpart.cpp_CDemonPart_load_FUN_00461630
    MOV ECX,0x128                       ; 00461635
    PUSH 0x5d0d9b                       ; 0046163a
    MOV dword ptr [0x01d046a0],EDX      ; 0046163f | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00461645 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0046164b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00461650
    RET                                 ; 00461653

