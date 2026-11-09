; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_factoryFuncMelee_FUN_004ea880(void)
;
;
; Called Functions:
;   core_melee.cpp_CMelee_ctor_FUN_004ea8b0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x828                          ; 004ea880
        ;   Label: core_melee.cpp_factoryFuncMelee_FUN_004ea880
    CALL crt_unknown.c_FUN_005b8be2     ; 004ea885
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004ea88a
    TEST EAX,EAX                        ; 004ea88d
    JNZ 0x004ea892                      ; 004ea88f
        ;   XREF to: 004ea892 (CONDITIONAL_JUMP)  ; LAB_004ea892
    RET                                 ; 004ea891
    PUSH EAX                            ; 004ea892
        ;   Label: LAB_004ea892
    CALL core_melee.cpp_CMelee_ctor_FUN_004ea8b0 ; 004ea893
        ;   XREF to: 004ea8b0 (UNCONDITIONAL_CALL)  ; CMelee * core_melee.cpp_CMelee_ctor_FUN_004ea8b0(CMelee * this_ptr)
    ADD ESP,0x4                         ; 004ea898
    RET                                 ; 004ea89b

