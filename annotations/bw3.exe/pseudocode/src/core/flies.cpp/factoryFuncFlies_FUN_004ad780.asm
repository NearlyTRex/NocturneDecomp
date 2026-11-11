; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_factoryFuncFlies_FUN_004ad780(void)
;
;
; Called Functions:
;   core_flies.cpp_CFlies_ctor_FUN_004ad7b0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2a20                         ; 004ad780
        ;   Label: core_flies.cpp_factoryFuncFlies_FUN_004ad780
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004ad785
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004ad78a
    TEST EAX,EAX                        ; 004ad78d
    JNZ 0x004ad792                      ; 004ad78f
        ;   XREF to: 004ad792 (CONDITIONAL_JUMP)  ; LAB_004ad792
    RET                                 ; 004ad791
    PUSH EAX                            ; 004ad792
        ;   Label: LAB_004ad792
    CALL core_flies.cpp_CFlies_ctor_FUN_004ad7b0 ; 004ad793
        ;   XREF to: 004ad7b0 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_CFlies_ctor_FUN_004ad7b0(CFlies * this_ptr)
    ADD ESP,0x4                         ; 004ad798
    RET                                 ; 004ad79b

