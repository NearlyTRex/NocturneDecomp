; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_0058cc90(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombieCemetery_ctor_FUN_0058ccc0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd14c                         ; 0058cc90
        ;   Label: core_zombie.cpp_FUN_0058cc90
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0058cc95
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058cc9a
    TEST EAX,EAX                        ; 0058cc9d
    JNZ 0x0058cca2                      ; 0058cc9f
        ;   XREF to: 0058cca2 (CONDITIONAL_JUMP)  ; LAB_0058cca2
    RET                                 ; 0058cca1
    PUSH EAX                            ; 0058cca2
        ;   Label: LAB_0058cca2
    CALL core_zombie.cpp_CZombieCemetery_ctor_FUN_0058ccc0 ; 0058cca3
        ;   XREF to: 0058ccc0 (UNCONDITIONAL_CALL)  ; CZombieCemetery * core_zombie.cpp_CZombieCemetery_ctor_FUN_0058ccc0(CZombieCemetery * this_ptr)
    ADD ESP,0x4                         ; 0058cca8
    RET                                 ; 0058ccab

