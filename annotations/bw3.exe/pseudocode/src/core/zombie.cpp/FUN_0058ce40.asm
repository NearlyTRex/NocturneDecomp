; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_0058ce40(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombieIndian_ctor_FUN_0058ce70
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd14c                         ; 0058ce40
        ;   Label: core_zombie.cpp_FUN_0058ce40
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0058ce45
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058ce4a
    TEST EAX,EAX                        ; 0058ce4d
    JNZ 0x0058ce52                      ; 0058ce4f
        ;   XREF to: 0058ce52 (CONDITIONAL_JUMP)  ; LAB_0058ce52
    RET                                 ; 0058ce51
    PUSH EAX                            ; 0058ce52
        ;   Label: LAB_0058ce52
    CALL core_zombie.cpp_CZombieIndian_ctor_FUN_0058ce70 ; 0058ce53
        ;   XREF to: 0058ce70 (UNCONDITIONAL_CALL)  ; CZombieIndian * core_zombie.cpp_CZombieIndian_ctor_FUN_0058ce70(CZombieIndian * this_ptr)
    ADD ESP,0x4                         ; 0058ce58
    RET                                 ; 0058ce5b

