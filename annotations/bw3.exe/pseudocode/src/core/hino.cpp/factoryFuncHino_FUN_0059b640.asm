; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHino * __cdecl core_hino_cpp_factoryFuncHino_FUN_0059b640(void)
;
;
; Called Functions:
;   core_hino.cpp_CHino_ctor_FUN_0059b670
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0b0                         ; 0059b640
        ;   Label: core_hino.cpp_factoryFuncHino_FUN_0059b640
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0059b645
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0059b64a
    TEST EAX,EAX                        ; 0059b64d
    JNZ 0x0059b652                      ; 0059b64f
        ;   XREF to: 0059b652 (CONDITIONAL_JUMP)  ; LAB_0059b652
    RET                                 ; 0059b651
    PUSH EAX                            ; 0059b652
        ;   Label: LAB_0059b652
    CALL core_hino.cpp_CHino_ctor_FUN_0059b670 ; 0059b653
        ;   XREF to: 0059b670 (UNCONDITIONAL_CALL)  ; CHino * core_hino.cpp_CHino_ctor_FUN_0059b670(CHino * this_ptr)
    ADD ESP,0x4                         ; 0059b658
    RET                                 ; 0059b65b

