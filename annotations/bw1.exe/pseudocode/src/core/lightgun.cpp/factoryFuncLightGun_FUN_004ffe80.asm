; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightgun_cpp_factoryFuncLightGun_FUN_004ffe80(void)
;
;
; Called Functions:
;   core_lightgun.cpp_CLightGun_ctor_FUN_004ffeb0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x598                          ; 004ffe80
        ;   Label: core_lightgun.cpp_factoryFuncLightGun_FUN_004ffe80
    CALL crt_unknown.c_FUN_005c0f32     ; 004ffe85
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ffe8a
    TEST EAX,EAX                        ; 004ffe8d
    JNZ 0x004ffe92                      ; 004ffe8f
        ;   XREF to: 004ffe92 (CONDITIONAL_JUMP)  ; LAB_004ffe92
    RET                                 ; 004ffe91
    PUSH EAX                            ; 004ffe92
        ;   Label: LAB_004ffe92
    CALL core_lightgun.cpp_CLightGun_ctor_FUN_004ffeb0 ; 004ffe93
        ;   XREF to: 004ffeb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_lightgun.cpp_CLightGun_ctor_FUN_004ffeb0(CLightGun * this_ptr)
    ADD ESP,0x4                         ; 004ffe98
    RET                                 ; 004ffe9b

