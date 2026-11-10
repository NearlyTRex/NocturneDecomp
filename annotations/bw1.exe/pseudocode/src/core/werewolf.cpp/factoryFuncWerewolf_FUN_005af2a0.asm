; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_factoryFuncWerewolf_FUN_005af2a0(void)
;
;
; Called Functions:
;   core_werewolf.cpp_CWerewolf_ctor_FUN_005af2d0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2b0                         ; 005af2a0
        ;   Label: core_werewolf.cpp_factoryFuncWerewolf_FUN_005af2a0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 005af2a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 005af2aa
    TEST EAX,EAX                        ; 005af2ad
    JNZ 0x005af2b2                      ; 005af2af
        ;   XREF to: 005af2b2 (CONDITIONAL_JUMP)  ; LAB_005af2b2
    RET                                 ; 005af2b1
    PUSH EAX                            ; 005af2b2
        ;   Label: LAB_005af2b2
    CALL core_werewolf.cpp_CWerewolf_ctor_FUN_005af2d0 ; 005af2b3
        ;   XREF to: 005af2d0 (UNCONDITIONAL_CALL)  ; CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_005af2d0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005af2b8
    RET                                 ; 005af2bb

