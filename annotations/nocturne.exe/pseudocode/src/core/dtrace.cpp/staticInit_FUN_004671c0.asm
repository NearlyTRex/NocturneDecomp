; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_staticInit_FUN_004671c0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004671c0
        ;   Label: core_dtrace.cpp_staticInit_FUN_004671c0
    PUSH 0x4e20                         ; 004671c5
    PUSH 0x1b8efcc                      ; 004671ca
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004671cf
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004671d4
    RET                                 ; 004671d7

