; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_FUN_00463650(void)
;
;
; Called Functions:
;   core_dog.cpp_CDogForest_ctor_FUN_00463680
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd064                         ; 00463650
        ;   Label: core_dog.cpp_FUN_00463650
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00463655
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0046365a
    TEST EAX,EAX                        ; 0046365d
    JNZ 0x00463662                      ; 0046365f
        ;   XREF to: 00463662 (CONDITIONAL_JUMP)  ; LAB_00463662
    RET                                 ; 00463661
    PUSH EAX                            ; 00463662
        ;   Label: LAB_00463662
    CALL core_dog.cpp_CDogForest_ctor_FUN_00463680 ; 00463663
        ;   XREF to: 00463680 (UNCONDITIONAL_CALL)  ; CDogForest * core_dog.cpp_CDogForest_ctor_FUN_00463680(CDogForest * this_ptr)
    ADD ESP,0x4                         ; 00463668
    RET                                 ; 0046366b

