; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_staticInit_FUN_00534da0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x5fb310                       ; 00534da0
        ;   Label: core_setcolid.cpp_staticInit_FUN_00534da0
    PUSH 0x5                            ; 00534da5
    PUSH 0x2093618                      ; 00534da7
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00534dac
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00534db1
    RET                                 ; 00534db4

