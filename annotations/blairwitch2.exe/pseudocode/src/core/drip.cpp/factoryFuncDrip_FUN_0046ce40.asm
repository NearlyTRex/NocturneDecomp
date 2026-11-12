; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_0046ce40(void)
;
;
; Called Functions:
;   core_drip.cpp_CDrip_ctor_FUN_0046ce70
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x498                          ; 0046ce40
        ;   Label: core_drip.cpp_factoryFuncDrip_FUN_0046ce40
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0046ce45
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0046ce4a
    TEST EAX,EAX                        ; 0046ce4d
    JNZ 0x0046ce52                      ; 0046ce4f
        ;   XREF to: 0046ce52 (CONDITIONAL_JUMP)  ; LAB_0046ce52
    RET                                 ; 0046ce51
    PUSH EAX                            ; 0046ce52
        ;   Label: LAB_0046ce52
    CALL core_drip.cpp_CDrip_ctor_FUN_0046ce70 ; 0046ce53
        ;   XREF to: 0046ce70 (UNCONDITIONAL_CALL)  ; CDrip * core_drip.cpp_CDrip_ctor_FUN_0046ce70(CDrip * this_ptr)
    ADD ESP,0x4                         ; 0046ce58
    RET                                 ; 0046ce5b

