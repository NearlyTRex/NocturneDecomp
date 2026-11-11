; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_0058ced0(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombieDemon_ctor_FUN_0058cf00
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd14c                         ; 0058ced0
        ;   Label: core_zombie.cpp_FUN_0058ced0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0058ced5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058ceda
    TEST EAX,EAX                        ; 0058cedd
    JNZ 0x0058cee2                      ; 0058cedf
        ;   XREF to: 0058cee2 (CONDITIONAL_JUMP)  ; LAB_0058cee2
    RET                                 ; 0058cee1
    PUSH EAX                            ; 0058cee2
        ;   Label: LAB_0058cee2
    CALL core_zombie.cpp_CZombieDemon_ctor_FUN_0058cf00 ; 0058cee3
        ;   XREF to: 0058cf00 (UNCONDITIONAL_CALL)  ; CZombieDemon * core_zombie.cpp_CZombieDemon_ctor_FUN_0058cf00(CZombieDemon * this_ptr)
    ADD ESP,0x4                         ; 0058cee8
    RET                                 ; 0058ceeb

