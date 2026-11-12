; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_00410c80(void)
;
;
; Called Functions:
;   core_barrier.cpp_CBarrier_ctor_FUN_00410cb0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x38c                          ; 00410c80
        ;   Label: core_barrier.cpp_factoryFuncBarrier_FUN_00410c80
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00410c85
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00410c8a
    TEST EAX,EAX                        ; 00410c8d
    JNZ 0x00410c92                      ; 00410c8f
        ;   XREF to: 00410c92 (CONDITIONAL_JUMP)  ; LAB_00410c92
    RET                                 ; 00410c91
    PUSH EAX                            ; 00410c92
        ;   Label: LAB_00410c92
    CALL core_barrier.cpp_CBarrier_ctor_FUN_00410cb0 ; 00410c93
        ;   XREF to: 00410cb0 (UNCONDITIONAL_CALL)  ; CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_00410cb0(CBarrier * this_ptr)
    ADD ESP,0x4                         ; 00410c98
    RET                                 ; 00410c9b

