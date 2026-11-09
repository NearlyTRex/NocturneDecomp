; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_staticInit_FUN_005382f0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x5fb370                       ; 005382f0
        ;   Label: core_setdir.cpp_staticInit_FUN_005382f0
    PUSH 0x5dc                          ; 005382f5
    PUSH 0x2093d34                      ; 005382fa
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005382ff
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00538304
    PUSH 0x61b96c                       ; 00538307
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0053830c
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 00538311
    PUSH 0x5fb390                       ; 00538314
    PUSH 0x7d0                          ; 00538319
    PUSH 0x20a46d8                      ; 0053831e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00538323
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00538328
    RET                                 ; 0053832b

