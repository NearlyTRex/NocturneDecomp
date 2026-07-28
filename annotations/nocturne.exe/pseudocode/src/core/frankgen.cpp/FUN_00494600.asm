; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_FUN_00494600(void)
;
;
; Called Functions:
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x494                          ; 00494600
        ;   Label: core_frankgen.cpp_FUN_00494600
    CALL crt_unknown.c_FUN_0056497c     ; 00494605
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0049460a
    TEST EAX,EAX                        ; 0049460d
    JNZ 0x00494612                      ; 0049460f
        ;   XREF to: 00494612 (CONDITIONAL_JUMP)  ; LAB_00494612
    RET                                 ; 00494611
    PUSH EAX                            ; 00494612
        ;   Label: LAB_00494612
    CALL core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630 ; 00494613
        ;   XREF to: 00494630 (UNCONDITIONAL_CALL)  ; CFrankenstienMachine * core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 00494618
    RET                                 ; 0049461b

