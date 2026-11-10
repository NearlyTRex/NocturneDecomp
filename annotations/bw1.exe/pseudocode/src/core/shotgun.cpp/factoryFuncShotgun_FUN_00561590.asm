; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_factoryFuncShotgun_FUN_00561590(void)
;
;
; Called Functions:
;   core_shotgun.cpp_CShotgun_ctor_FUN_005615c0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x584                          ; 00561590
        ;   Label: core_shotgun.cpp_factoryFuncShotgun_FUN_00561590
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00561595
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0056159a
    TEST EAX,EAX                        ; 0056159d
    JNZ 0x005615a2                      ; 0056159f
        ;   XREF to: 005615a2 (CONDITIONAL_JUMP)  ; LAB_005615a2
    RET                                 ; 005615a1
    PUSH EAX                            ; 005615a2
        ;   Label: LAB_005615a2
    CALL core_shotgun.cpp_CShotgun_ctor_FUN_005615c0 ; 005615a3
        ;   XREF to: 005615c0 (UNCONDITIONAL_CALL)  ; CShotgun * core_shotgun.cpp_CShotgun_ctor_FUN_005615c0(CShotgun * this_ptr)
    ADD ESP,0x4                         ; 005615a8
    RET                                 ; 005615ab

