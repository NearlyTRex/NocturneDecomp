; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moocow_cpp_factoryFuncMooCow_FUN_005212d0(void)
;
;
; Called Functions:
;   core_moocow.cpp_CMooCow_ctor_FUN_00521300
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc1f4                         ; 005212d0
        ;   Label: core_moocow.cpp_factoryFuncMooCow_FUN_005212d0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 005212d5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 005212da
    TEST EAX,EAX                        ; 005212dd
    JNZ 0x005212e2                      ; 005212df
        ;   XREF to: 005212e2 (CONDITIONAL_JUMP)  ; LAB_005212e2
    RET                                 ; 005212e1
    PUSH EAX                            ; 005212e2
        ;   Label: LAB_005212e2
    CALL core_moocow.cpp_CMooCow_ctor_FUN_00521300 ; 005212e3
        ;   XREF to: 00521300 (UNCONDITIONAL_CALL)  ; CMooCow * core_moocow.cpp_CMooCow_ctor_FUN_00521300(CMooCow * this_ptr)
    ADD ESP,0x4                         ; 005212e8
    RET                                 ; 005212eb

