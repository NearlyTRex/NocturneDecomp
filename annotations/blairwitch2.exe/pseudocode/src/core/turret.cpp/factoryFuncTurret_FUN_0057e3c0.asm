; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_factoryFuncTurret_FUN_0057e3c0(void)
;
;
; Called Functions:
;   core_turret.cpp_CTurret_ctor_FUN_0057e3f0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0xa18                          ; 0057e3c0
        ;   Label: core_turret.cpp_factoryFuncTurret_FUN_0057e3c0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0057e3c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0057e3ca
    TEST EAX,EAX                        ; 0057e3cd
    JNZ 0x0057e3d2                      ; 0057e3cf
        ;   XREF to: 0057e3d2 (CONDITIONAL_JUMP)  ; LAB_0057e3d2
    RET                                 ; 0057e3d1
    PUSH EAX                            ; 0057e3d2
        ;   Label: LAB_0057e3d2
    CALL core_turret.cpp_CTurret_ctor_FUN_0057e3f0 ; 0057e3d3
        ;   XREF to: 0057e3f0 (UNCONDITIONAL_CALL)  ; CTurret * core_turret.cpp_CTurret_ctor_FUN_0057e3f0(CTurret * this_ptr)
    ADD ESP,0x4                         ; 0057e3d8
    RET                                 ; 0057e3db

