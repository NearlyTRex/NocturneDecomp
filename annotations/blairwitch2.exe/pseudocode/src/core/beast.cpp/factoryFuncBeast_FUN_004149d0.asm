; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_beast_cpp_factoryFuncBeast_FUN_004149d0(void)
;
;
; Called Functions:
;   core_beast.cpp_CBeast_ctor_FUN_00414a00
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10af8                        ; 004149d0
        ;   Label: core_beast.cpp_factoryFuncBeast_FUN_004149d0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004149d5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004149da
    TEST EAX,EAX                        ; 004149dd
    JNZ 0x004149e2                      ; 004149df
        ;   XREF to: 004149e2 (CONDITIONAL_JUMP)  ; LAB_004149e2
    RET                                 ; 004149e1
    PUSH EAX                            ; 004149e2
        ;   Label: LAB_004149e2
    CALL core_beast.cpp_CBeast_ctor_FUN_00414a00 ; 004149e3
        ;   XREF to: 00414a00 (UNCONDITIONAL_CALL)  ; CBeast * core_beast.cpp_CBeast_ctor_FUN_00414a00(CBeast * this_ptr)
    ADD ESP,0x4                         ; 004149e8
    RET                                 ; 004149eb

