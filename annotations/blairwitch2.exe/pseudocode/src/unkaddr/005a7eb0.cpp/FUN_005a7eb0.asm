; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_005a7eb0_cpp_FUN_005a7eb0(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   unkaddr_005a7eb0.cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50
;
; *****************************************************************************

section .text

    PUSH 0x2000                         ; 005a7eb0
        ;   Label: unkaddr_005a7eb0.cpp_FUN_005a7eb0
    PUSH 0x26687b0                      ; 005a7eb5
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50 ; 005a7eba
        ;   XREF to: 005a7f50 (UNCONDITIONAL_CALL)  ; int unkaddr_005a7eb0.cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a7ebf
    PUSH 0x61ebec                       ; 005a7ec2
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 005a7ec7
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 005a7ecc
    RET                                 ; 005a7ecf

