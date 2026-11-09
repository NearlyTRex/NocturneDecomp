; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gun_cpp_factoryFuncGun_FUN_004cbd20(void)
;
;
; Called Functions:
;   core_gun.cpp_CGun_ctor_FUN_004cbd50
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6d4                          ; 004cbd20
        ;   Label: core_gun.cpp_factoryFuncGun_FUN_004cbd20
    CALL crt_unknown.c_FUN_005b8be2     ; 004cbd25
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004cbd2a
    TEST EAX,EAX                        ; 004cbd2d
    JNZ 0x004cbd32                      ; 004cbd2f
        ;   XREF to: 004cbd32 (CONDITIONAL_JUMP)  ; LAB_004cbd32
    RET                                 ; 004cbd31
    PUSH EAX                            ; 004cbd32
        ;   Label: LAB_004cbd32
    CALL core_gun.cpp_CGun_ctor_FUN_004cbd50 ; 004cbd33
        ;   XREF to: 004cbd50 (UNCONDITIONAL_CALL)  ; CGun * core_gun.cpp_CGun_ctor_FUN_004cbd50(CGun * this_ptr)
    ADD ESP,0x4                         ; 004cbd38
    RET                                 ; 004cbd3b

