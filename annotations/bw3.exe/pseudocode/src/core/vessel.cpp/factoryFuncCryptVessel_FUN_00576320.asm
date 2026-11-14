; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_00576320(void)
;
;
; Called Functions:
;   core_vessel.cpp_CCryptVessel_ctor_FUN_00576350
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x7f4                          ; 00576320
        ;   Label: core_vessel.cpp_factoryFuncCryptVessel_FUN_00576320
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00576325
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0057632a
    TEST EAX,EAX                        ; 0057632d
    JNZ 0x00576332                      ; 0057632f
        ;   XREF to: 00576332 (CONDITIONAL_JUMP)  ; LAB_00576332
    RET                                 ; 00576331
    PUSH EAX                            ; 00576332
        ;   Label: LAB_00576332
    CALL core_vessel.cpp_CCryptVessel_ctor_FUN_00576350 ; 00576333
        ;   XREF to: 00576350 (UNCONDITIONAL_CALL)  ; CCryptVessel * core_vessel.cpp_CCryptVessel_ctor_FUN_00576350(CCryptVessel * this_ptr)
    ADD ESP,0x4                         ; 00576338
    RET                                 ; 0057633b

