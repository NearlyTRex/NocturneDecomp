; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494600(void)
;
;
; Called Functions:
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x494                          ; 00494600
        ;   Label: FUN_00494600
    CALL FUN_0056497c                   ; 00494605
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0049460a
    TEST EAX,EAX                        ; 0049460d
    JNZ 0x00494612                      ; 0049460f
        ;   XREF to: 00494612 (CONDITIONAL_JUMP)  ; LAB_00494612
    RET                                 ; 00494611
    PUSH EAX                            ; 00494612
        ;   Label: LAB_00494612
    CALL core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630 ; 00494613
        ;   XREF to: 00494630 (UNCONDITIONAL_CALL)  ; undefined core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630()
    ADD ESP,0x4                         ; 00494618
    RET                                 ; 0049461b

