; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_factoryFuncZombie_FUN_005888a0(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombie_ctor_FUN_005888d0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd14c                         ; 005888a0
        ;   Label: core_zombie.cpp_factoryFuncZombie_FUN_005888a0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 005888a5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005888aa
    TEST EAX,EAX                        ; 005888ad
    JNZ 0x005888b2                      ; 005888af
        ;   XREF to: 005888b2 (CONDITIONAL_JUMP)  ; LAB_005888b2
    RET                                 ; 005888b1
    PUSH EAX                            ; 005888b2
        ;   Label: LAB_005888b2
    CALL core_zombie.cpp_CZombie_ctor_FUN_005888d0 ; 005888b3
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_005888d0(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005888b8
    RET                                 ; 005888bb

