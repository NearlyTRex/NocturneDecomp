; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghoul_cpp_factoryFuncGhoul_FUN_004ddd30(void)
;
;
; Called Functions:
;   core_ghoul.cpp_CGhoul_ctor_FUN_004ddd60
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2e4                         ; 004ddd30
        ;   Label: core_ghoul.cpp_factoryFuncGhoul_FUN_004ddd30
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004ddd35
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ddd3a
    TEST EAX,EAX                        ; 004ddd3d
    JNZ 0x004ddd42                      ; 004ddd3f
        ;   XREF to: 004ddd42 (CONDITIONAL_JUMP)  ; LAB_004ddd42
    RET                                 ; 004ddd41
    PUSH EAX                            ; 004ddd42
        ;   Label: LAB_004ddd42
    CALL core_ghoul.cpp_CGhoul_ctor_FUN_004ddd60 ; 004ddd43
        ;   XREF to: 004ddd60 (UNCONDITIONAL_CALL)  ; CGhoul * core_ghoul.cpp_CGhoul_ctor_FUN_004ddd60(CGhoul * this_ptr)
    ADD ESP,0x4                         ; 004ddd48
    RET                                 ; 004ddd4b

