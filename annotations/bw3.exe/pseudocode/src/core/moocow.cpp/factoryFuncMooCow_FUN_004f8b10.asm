; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMooCow * __cdecl core_moocow_cpp_factoryFuncMooCow_FUN_004f8b10(void)
;
;
; Called Functions:
;   core_moocow.cpp_CMooCow_ctor_FUN_004f8b40
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xcdf0                         ; 004f8b10
        ;   Label: core_moocow.cpp_factoryFuncMooCow_FUN_004f8b10
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004f8b15
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004f8b1a
    TEST EAX,EAX                        ; 004f8b1d
    JNZ 0x004f8b22                      ; 004f8b1f
        ;   XREF to: 004f8b22 (CONDITIONAL_JUMP)  ; LAB_004f8b22
    RET                                 ; 004f8b21
    PUSH EAX                            ; 004f8b22
        ;   Label: LAB_004f8b22
    CALL core_moocow.cpp_CMooCow_ctor_FUN_004f8b40 ; 004f8b23
        ;   XREF to: 004f8b40 (UNCONDITIONAL_CALL)  ; CMooCow * core_moocow.cpp_CMooCow_ctor_FUN_004f8b40(CMooCow * this_ptr)
    ADD ESP,0x4                         ; 004f8b28
    RET                                 ; 004f8b2b

