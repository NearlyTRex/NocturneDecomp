; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_0058cd20(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombieForest_ctor_FUN_0058cd50
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd14c                         ; 0058cd20
        ;   Label: core_zombie.cpp_FUN_0058cd20
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0058cd25
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058cd2a
    TEST EAX,EAX                        ; 0058cd2d
    JNZ 0x0058cd32                      ; 0058cd2f
        ;   XREF to: 0058cd32 (CONDITIONAL_JUMP)  ; LAB_0058cd32
    RET                                 ; 0058cd31
    PUSH EAX                            ; 0058cd32
        ;   Label: LAB_0058cd32
    CALL core_zombie.cpp_CZombieForest_ctor_FUN_0058cd50 ; 0058cd33
        ;   XREF to: 0058cd50 (UNCONDITIONAL_CALL)  ; CZombieForest * core_zombie.cpp_CZombieForest_ctor_FUN_0058cd50(CZombieForest * this_ptr)
    ADD ESP,0x4                         ; 0058cd38
    RET                                 ; 0058cd3b

