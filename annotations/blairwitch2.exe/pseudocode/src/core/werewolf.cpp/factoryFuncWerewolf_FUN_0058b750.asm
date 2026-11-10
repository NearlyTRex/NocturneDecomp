; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_factoryFuncWerewolf_FUN_0058b750(void)
;
;
; Called Functions:
;   core_werewolf.cpp_CWerewolf_ctor_FUN_0058b780
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b40                        ; 0058b750
        ;   Label: core_werewolf.cpp_factoryFuncWerewolf_FUN_0058b750
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0058b755
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0058b75a
    TEST EAX,EAX                        ; 0058b75d
    JNZ 0x0058b762                      ; 0058b75f
        ;   XREF to: 0058b762 (CONDITIONAL_JUMP)  ; LAB_0058b762
    RET                                 ; 0058b761
    PUSH EAX                            ; 0058b762
        ;   Label: LAB_0058b762
    CALL core_werewolf.cpp_CWerewolf_ctor_FUN_0058b780 ; 0058b763
        ;   XREF to: 0058b780 (UNCONDITIONAL_CALL)  ; CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_0058b780(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0058b768
    RET                                 ; 0058b76b

