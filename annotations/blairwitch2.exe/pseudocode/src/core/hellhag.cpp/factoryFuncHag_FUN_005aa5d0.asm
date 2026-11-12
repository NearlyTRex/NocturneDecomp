; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hellhag_cpp_factoryFuncHag_FUN_005aa5d0(void)
;
;
; Called Functions:
;   core_hellhag.cpp_CHag_ctor_FUN_005aa600
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11860                        ; 005aa5d0
        ;   Label: core_hellhag.cpp_factoryFuncHag_FUN_005aa5d0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005aa5d5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005aa5da
    TEST EAX,EAX                        ; 005aa5dd
    JNZ 0x005aa5e2                      ; 005aa5df
        ;   XREF to: 005aa5e2 (CONDITIONAL_JUMP)  ; LAB_005aa5e2
    RET                                 ; 005aa5e1
    PUSH EAX                            ; 005aa5e2
        ;   Label: LAB_005aa5e2
    CALL core_hellhag.cpp_CHag_ctor_FUN_005aa600 ; 005aa5e3
        ;   XREF to: 005aa600 (UNCONDITIONAL_CALL)  ; CHag * core_hellhag.cpp_CHag_ctor_FUN_005aa600(CHag * this_ptr)
    ADD ESP,0x4                         ; 005aa5e8
    RET                                 ; 005aa5eb

