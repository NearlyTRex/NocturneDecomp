; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_00549470(void)
;
;
; Called Functions:
;   core_turret.cpp_CTurret_ctor_FUN_005494a0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x8b4                          ; 00549470
        ;   Label: core_turret.cpp_FUN_00549470
    CALL crt_unknown.c_FUN_0056497c     ; 00549475
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0054947a
    TEST EAX,EAX                        ; 0054947d
    JNZ 0x00549482                      ; 0054947f
        ;   XREF to: 00549482 (CONDITIONAL_JUMP)  ; LAB_00549482
    RET                                 ; 00549481
    PUSH EAX                            ; 00549482
        ;   Label: LAB_00549482
    CALL core_turret.cpp_CTurret_ctor_FUN_005494a0 ; 00549483
        ;   XREF to: 005494a0 (UNCONDITIONAL_CALL)  ; CTurret * core_turret.cpp_CTurret_ctor_FUN_005494a0(CTurret * this_ptr)
    ADD ESP,0x4                         ; 00549488
    RET                                 ; 0054948b

