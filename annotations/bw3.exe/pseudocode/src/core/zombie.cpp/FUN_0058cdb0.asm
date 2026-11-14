; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_0058cdb0(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombieSpirit_ctor_FUN_0058cde0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd14c                         ; 0058cdb0
        ;   Label: core_zombie.cpp_FUN_0058cdb0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0058cdb5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058cdba
    TEST EAX,EAX                        ; 0058cdbd
    JNZ 0x0058cdc2                      ; 0058cdbf
        ;   XREF to: 0058cdc2 (CONDITIONAL_JUMP)  ; LAB_0058cdc2
    RET                                 ; 0058cdc1
    PUSH EAX                            ; 0058cdc2
        ;   Label: LAB_0058cdc2
    CALL core_zombie.cpp_CZombieSpirit_ctor_FUN_0058cde0 ; 0058cdc3
        ;   XREF to: 0058cde0 (UNCONDITIONAL_CALL)  ; CZombieSpirit * core_zombie.cpp_CZombieSpirit_ctor_FUN_0058cde0(CZombieSpirit * this_ptr)
    ADD ESP,0x4                         ; 0058cdc8
    RET                                 ; 0058cdcb

