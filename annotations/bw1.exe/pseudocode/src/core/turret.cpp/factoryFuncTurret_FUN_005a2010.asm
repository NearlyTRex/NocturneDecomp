; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_factoryFuncTurret_FUN_005a2010(void)
;
;
; Called Functions:
;   core_turret.cpp_CTurret_ctor_FUN_005a2040
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x8bc                          ; 005a2010
        ;   Label: core_turret.cpp_factoryFuncTurret_FUN_005a2010
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 005a2015
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 005a201a
    TEST EAX,EAX                        ; 005a201d
    JNZ 0x005a2022                      ; 005a201f
        ;   XREF to: 005a2022 (CONDITIONAL_JUMP)  ; LAB_005a2022
    RET                                 ; 005a2021
    PUSH EAX                            ; 005a2022
        ;   Label: LAB_005a2022
    CALL core_turret.cpp_CTurret_ctor_FUN_005a2040 ; 005a2023
        ;   XREF to: 005a2040 (UNCONDITIONAL_CALL)  ; CTurret * core_turret.cpp_CTurret_ctor_FUN_005a2040(CTurret * this_ptr)
    ADD ESP,0x4                         ; 005a2028
    RET                                 ; 005a202b

