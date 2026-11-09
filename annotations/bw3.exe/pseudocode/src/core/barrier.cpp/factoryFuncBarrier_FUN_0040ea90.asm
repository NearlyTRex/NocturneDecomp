; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_factoryFuncBarrier_FUN_0040ea90(void)
;
;
; Called Functions:
;   core_barrier.cpp_CBarrier_ctor_FUN_0040eac0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x230                          ; 0040ea90
        ;   Label: core_barrier.cpp_factoryFuncBarrier_FUN_0040ea90
    CALL crt_unknown.c_FUN_005a3cb2     ; 0040ea95
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040ea9a
    TEST EAX,EAX                        ; 0040ea9d
    JNZ 0x0040eaa2                      ; 0040ea9f
        ;   XREF to: 0040eaa2 (CONDITIONAL_JUMP)  ; LAB_0040eaa2
    RET                                 ; 0040eaa1
    PUSH EAX                            ; 0040eaa2
        ;   Label: LAB_0040eaa2
    CALL core_barrier.cpp_CBarrier_ctor_FUN_0040eac0 ; 0040eaa3
        ;   XREF to: 0040eac0 (UNCONDITIONAL_CALL)  ; CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_0040eac0(CBarrier * this_ptr)
    ADD ESP,0x4                         ; 0040eaa8
    RET                                 ; 0040eaab

