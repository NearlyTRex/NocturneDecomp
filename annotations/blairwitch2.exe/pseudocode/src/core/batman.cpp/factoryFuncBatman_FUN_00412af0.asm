; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batman_cpp_factoryFuncBatman_FUN_00412af0(void)
;
;
; Called Functions:
;   core_batman.cpp_CBatman_ctor_FUN_00412b20
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10bb4                        ; 00412af0
        ;   Label: core_batman.cpp_factoryFuncBatman_FUN_00412af0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00412af5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00412afa
    TEST EAX,EAX                        ; 00412afd
    JNZ 0x00412b02                      ; 00412aff
        ;   XREF to: 00412b02 (CONDITIONAL_JUMP)  ; LAB_00412b02
    RET                                 ; 00412b01
    PUSH EAX                            ; 00412b02
        ;   Label: LAB_00412b02
    CALL core_batman.cpp_CBatman_ctor_FUN_00412b20 ; 00412b03
        ;   XREF to: 00412b20 (UNCONDITIONAL_CALL)  ; CBatman * core_batman.cpp_CBatman_ctor_FUN_00412b20(CBatman * this_ptr)
    ADD ESP,0x4                         ; 00412b08
    RET                                 ; 00412b0b

