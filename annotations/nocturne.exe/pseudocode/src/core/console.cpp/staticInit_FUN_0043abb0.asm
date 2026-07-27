; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_console_cpp_staticInit_FUN_0043abb0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_00564bb0
;   engine_console.cpp_CConsole_ctor_FUN_0043abe0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0043abb0
        ;   Label: core_console.cpp_staticInit_FUN_0043abb0
    PUSH 0x1                            ; 0043abb2
    PUSH 0x20                           ; 0043abb4
    PUSH 0x28                           ; 0043abb6
    PUSH 0x77ad0c                       ; 0043abb8
    CALL engine_console.cpp_CConsole_ctor_FUN_0043abe0 ; 0043abbd
        ;   XREF to: 0043abe0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_ctor_FUN_0043abe0()
    ADD ESP,0x14                        ; 0043abc2
    PUSH 0x5ad340                       ; 0043abc5
    CALL crt_unknown.c_FUN_00564bb0     ; 0043abca
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0043abcf
    RET                                 ; 0043abd2

