; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_factoryFuncZombie_FUN_00595a60(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombie_ctor_FUN_00595a90
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10be8                        ; 00595a60
        ;   Label: core_zombie.cpp_factoryFuncZombie_FUN_00595a60
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00595a65
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 00595a6a
    TEST EAX,EAX                        ; 00595a6d
    JNZ 0x00595a72                      ; 00595a6f
        ;   XREF to: 00595a72 (CONDITIONAL_JUMP)  ; LAB_00595a72
    RET                                 ; 00595a71
    PUSH EAX                            ; 00595a72
        ;   Label: LAB_00595a72
    CALL core_zombie.cpp_CZombie_ctor_FUN_00595a90 ; 00595a73
        ;   XREF to: 00595a90 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_00595a90(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00595a78
    RET                                 ; 00595a7b

