; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_factoryFuncElephantGun_FUN_00485970(void)
;
;
; Called Functions:
;   core_elephant.cpp_CElephantGun_ctor_FUN_004859a0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6e0                          ; 00485970
        ;   Label: core_elephant.cpp_factoryFuncElephantGun_FUN_00485970
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00485975
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0048597a
    TEST EAX,EAX                        ; 0048597d
    JNZ 0x00485982                      ; 0048597f
        ;   XREF to: 00485982 (CONDITIONAL_JUMP)  ; LAB_00485982
    RET                                 ; 00485981
    PUSH EAX                            ; 00485982
        ;   Label: LAB_00485982
    CALL core_elephant.cpp_CElephantGun_ctor_FUN_004859a0 ; 00485983
        ;   XREF to: 004859a0 (UNCONDITIONAL_CALL)  ; CElephantGun * core_elephant.cpp_CElephantGun_ctor_FUN_004859a0(CElephantGun * this_ptr)
    ADD ESP,0x4                         ; 00485988
    RET                                 ; 0048598b

