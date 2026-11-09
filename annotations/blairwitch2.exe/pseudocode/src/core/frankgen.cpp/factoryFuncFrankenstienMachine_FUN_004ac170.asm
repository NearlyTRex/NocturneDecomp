; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004ac170(void)
;
;
; Called Functions:
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004ac1a0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x5f8                          ; 004ac170
        ;   Label: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004ac170
    CALL crt_unknown.c_FUN_005b8be2     ; 004ac175
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004ac17a
    TEST EAX,EAX                        ; 004ac17d
    JNZ 0x004ac182                      ; 004ac17f
        ;   XREF to: 004ac182 (CONDITIONAL_JUMP)  ; LAB_004ac182
    RET                                 ; 004ac181
    PUSH EAX                            ; 004ac182
        ;   Label: LAB_004ac182
    CALL core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004ac1a0 ; 004ac183
        ;   XREF to: 004ac1a0 (UNCONDITIONAL_CALL)  ; CFrankenstienMachine * core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004ac1a0(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004ac188
    RET                                 ; 004ac18b

