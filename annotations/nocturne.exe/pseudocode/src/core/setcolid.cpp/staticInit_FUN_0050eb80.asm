; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_staticInit_FUN_0050eb80(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5a1a10                       ; 0050eb80
        ;   Label: core_setcolid.cpp_staticInit_FUN_0050eb80
    PUSH 0x5                            ; 0050eb85
    PUSH 0x20842d4                      ; 0050eb87
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0050eb8c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050eb91
    RET                                 ; 0050eb94

