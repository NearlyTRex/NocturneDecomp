; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_staticInit_FUN_004f9430(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x5f22b0                       ; 004f9430
        ;   Label: core_mirror.cpp_staticInit_FUN_004f9430
    PUSH 0x20                           ; 004f9435
    PUSH 0x1d17fc4                      ; 004f9437
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004f943c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f9441
    PUSH 0x5f22b0                       ; 004f9444
    PUSH 0x20                           ; 004f9449
    PUSH 0x1d18148                      ; 004f944b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004f9450
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f9455
    RET                                 ; 004f9458

