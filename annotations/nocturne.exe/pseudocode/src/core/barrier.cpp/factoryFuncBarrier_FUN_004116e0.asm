; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_004116e0(void)
;
;
; XREF[1]:
;   core_barrier.cpp_staticInit_FUN_004116b0 at 004116bc
;
; Called Functions:
;   core_barrier.cpp_CBarrier_ctor_FUN_00411710
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x228                          ; 004116e0
        ;   Label: core_barrier.cpp_factoryFuncBarrier_FUN_004116e0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004116e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004116ea
    TEST EAX,EAX                        ; 004116ed
    JNZ 0x004116f2                      ; 004116ef
        ;   XREF to: 004116f2 (CONDITIONAL_JUMP)  ; LAB_004116f2
    RET                                 ; 004116f1
    PUSH EAX                            ; 004116f2
        ;   Label: LAB_004116f2
    CALL core_barrier.cpp_CBarrier_ctor_FUN_00411710 ; 004116f3
        ;   XREF to: 00411710 (UNCONDITIONAL_CALL)  ; CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_00411710(CBarrier * this_ptr)
    ADD ESP,0x4                         ; 004116f8
    RET                                 ; 004116fb

