; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_005a8ad0(void)
;
;
; Called Functions:
;   core_vessel.cpp_CCryptVessel_ctor_FUN_005a8b00
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x7f4                          ; 005a8ad0
        ;   Label: core_vessel.cpp_factoryFuncCryptVessel_FUN_005a8ad0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005a8ad5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005a8ada
    TEST EAX,EAX                        ; 005a8add
    JNZ 0x005a8ae2                      ; 005a8adf
        ;   XREF to: 005a8ae2 (CONDITIONAL_JUMP)  ; LAB_005a8ae2
    RET                                 ; 005a8ae1
    PUSH EAX                            ; 005a8ae2
        ;   Label: LAB_005a8ae2
    CALL core_vessel.cpp_CCryptVessel_ctor_FUN_005a8b00 ; 005a8ae3
        ;   XREF to: 005a8b00 (UNCONDITIONAL_CALL)  ; CCryptVessel * core_vessel.cpp_CCryptVessel_ctor_FUN_005a8b00(CCryptVessel * this_ptr)
    ADD ESP,0x4                         ; 005a8ae8
    RET                                 ; 005a8aeb

