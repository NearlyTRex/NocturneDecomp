; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_factoryFuncKeyActor_FUN_004de800(void)
;
;
; Called Functions:
;   core_keyactor.cpp_CKeyActor_ctor_FUN_004de830
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x31c                          ; 004de800
        ;   Label: core_keyactor.cpp_factoryFuncKeyActor_FUN_004de800
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004de805
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004de80a
    TEST EAX,EAX                        ; 004de80d
    JNZ 0x004de812                      ; 004de80f
        ;   XREF to: 004de812 (CONDITIONAL_JUMP)  ; LAB_004de812
    RET                                 ; 004de811
    PUSH EAX                            ; 004de812
        ;   Label: LAB_004de812
    CALL core_keyactor.cpp_CKeyActor_ctor_FUN_004de830 ; 004de813
        ;   XREF to: 004de830 (UNCONDITIONAL_CALL)  ; CKeyActor * core_keyactor.cpp_CKeyActor_ctor_FUN_004de830(CKeyActor * this_ptr)
    ADD ESP,0x4                         ; 004de818
    RET                                 ; 004de81b

