; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_staticInit_FUN_00466780(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x5fec60                       ; 00466780
        ;   Label: core_dmodel.cpp_staticInit_FUN_00466780
    PUSH 0x100                          ; 00466785
    PUSH 0x1b2efe0                      ; 0046678a
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0046678f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00466794
    PUSH 0x6124a3                       ; 00466797
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0046679c
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 004667a1
    RET                                 ; 004667a4

