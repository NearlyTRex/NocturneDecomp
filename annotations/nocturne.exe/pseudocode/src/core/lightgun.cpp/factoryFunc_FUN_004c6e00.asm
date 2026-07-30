; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightGun * __cdecl core_lightgun_cpp_factoryFunc_FUN_004c6e00(void)
;
;
; Called Functions:
;   core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x588                          ; 004c6e00
        ;   Label: core_lightgun.cpp_factoryFunc_FUN_004c6e00
    CALL crt_unknown.c_FUN_0056497c     ; 004c6e05
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004c6e0a
    TEST EAX,EAX                        ; 004c6e0d
    JNZ 0x004c6e12                      ; 004c6e0f
        ;   XREF to: 004c6e12 (CONDITIONAL_JUMP)  ; LAB_004c6e12
    RET                                 ; 004c6e11
    PUSH EAX                            ; 004c6e12
        ;   Label: LAB_004c6e12
    CALL core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30 ; 004c6e13
        ;   XREF to: 004c6e30 (UNCONDITIONAL_CALL)  ; CLightGun * core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30(CLightGun * this_ptr)
    ADD ESP,0x4                         ; 004c6e18
    RET                                 ; 004c6e1b

