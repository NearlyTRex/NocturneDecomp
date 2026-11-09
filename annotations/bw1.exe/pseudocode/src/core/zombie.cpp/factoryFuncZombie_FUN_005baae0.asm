; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_factoryFuncZombie_FUN_005baae0(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombie_ctor_FUN_005bab10
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc358                         ; 005baae0
        ;   Label: core_zombie.cpp_factoryFuncZombie_FUN_005baae0
    CALL crt_unknown.c_FUN_005c0f32     ; 005baae5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 005baaea
    TEST EAX,EAX                        ; 005baaed
    JNZ 0x005baaf2                      ; 005baaef
        ;   XREF to: 005baaf2 (CONDITIONAL_JUMP)  ; LAB_005baaf2
    RET                                 ; 005baaf1
    PUSH EAX                            ; 005baaf2
        ;   Label: LAB_005baaf2
    CALL core_zombie.cpp_CZombie_ctor_FUN_005bab10 ; 005baaf3
        ;   XREF to: 005bab10 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_005bab10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005baaf8
    RET                                 ; 005baafb

