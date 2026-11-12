; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_staticInit_FUN_005561c0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x605100                       ; 005561c0
        ;   Label: core_setcolid.cpp_staticInit_FUN_005561c0
    PUSH 0x5                            ; 005561c5
    PUSH 0x20af5cc                      ; 005561c7
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005561cc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005561d1
    RET                                 ; 005561d4

