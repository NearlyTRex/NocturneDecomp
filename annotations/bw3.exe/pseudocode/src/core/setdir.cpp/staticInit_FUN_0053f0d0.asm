; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_staticInit_FUN_0053f0d0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5e2c40                       ; 0053f0d0
        ;   Label: core_setdir.cpp_staticInit_FUN_0053f0d0
    PUSH 0x7d0                          ; 0053f0d5
    PUSH 0x2703854                      ; 0053f0da
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0053f0df
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0053f0e4
    RET                                 ; 0053f0e7

