; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_factoryFuncBarrier_FUN_00410800(void)
;
;
; Called Functions:
;   core_barrier.cpp_CBarrier_ctor_FUN_00410830
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x230                          ; 00410800
        ;   Label: core_barrier.cpp_factoryFuncBarrier_FUN_00410800
    CALL crt_unknown.c_FUN_005c0f32     ; 00410805
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0041080a
    TEST EAX,EAX                        ; 0041080d
    JNZ 0x00410812                      ; 0041080f
        ;   XREF to: 00410812 (CONDITIONAL_JUMP)  ; LAB_00410812
    RET                                 ; 00410811
    PUSH EAX                            ; 00410812
        ;   Label: LAB_00410812
    CALL core_barrier.cpp_CBarrier_ctor_FUN_00410830 ; 00410813
        ;   XREF to: 00410830 (UNCONDITIONAL_CALL)  ; CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_00410830(CBarrier * this_ptr)
    ADD ESP,0x4                         ; 00410818
    RET                                 ; 0041081b

