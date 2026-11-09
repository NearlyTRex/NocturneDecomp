; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_factoryFuncWerewolf_FUN_0057d520(void)
;
;
; Called Functions:
;   core_werewolf.cpp_CWerewolf_ctor_FUN_0057d550
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd09c                         ; 0057d520
        ;   Label: core_werewolf.cpp_factoryFuncWerewolf_FUN_0057d520
    CALL crt_unknown.c_FUN_005a3cb2     ; 0057d525
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0057d52a
    TEST EAX,EAX                        ; 0057d52d
    JNZ 0x0057d532                      ; 0057d52f
        ;   XREF to: 0057d532 (CONDITIONAL_JUMP)  ; LAB_0057d532
    RET                                 ; 0057d531
    PUSH EAX                            ; 0057d532
        ;   Label: LAB_0057d532
    CALL core_werewolf.cpp_CWerewolf_ctor_FUN_0057d550 ; 0057d533
        ;   XREF to: 0057d550 (UNCONDITIONAL_CALL)  ; CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_0057d550(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0057d538
    RET                                 ; 0057d53b

