; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gun_cpp_factoryFuncGun_FUN_004d0f30(void)
;
;
; Called Functions:
;   core_gun.cpp_CGun_ctor_FUN_004d0f60
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x594                          ; 004d0f30
        ;   Label: core_gun.cpp_factoryFuncGun_FUN_004d0f30
    CALL crt_unknown.c_FUN_005a3cb2     ; 004d0f35
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d0f3a
    TEST EAX,EAX                        ; 004d0f3d
    JNZ 0x004d0f42                      ; 004d0f3f
        ;   XREF to: 004d0f42 (CONDITIONAL_JUMP)  ; LAB_004d0f42
    RET                                 ; 004d0f41
    PUSH EAX                            ; 004d0f42
        ;   Label: LAB_004d0f42
    CALL core_gun.cpp_CGun_ctor_FUN_004d0f60 ; 004d0f43
        ;   XREF to: 004d0f60 (UNCONDITIONAL_CALL)  ; CGun * core_gun.cpp_CGun_ctor_FUN_004d0f60(CGun * this_ptr)
    ADD ESP,0x4                         ; 004d0f48
    RET                                 ; 004d0f4b

