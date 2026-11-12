; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_staticInit_FUN_00559710(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x6042a0                       ; 00559710
        ;   Label: core_setdir.cpp_staticInit_FUN_00559710
    PUSH 0x7d0                          ; 00559715
    PUSH 0x2690c2c                      ; 0055971a
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0055971f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00559724
    RET                                 ; 00559727

