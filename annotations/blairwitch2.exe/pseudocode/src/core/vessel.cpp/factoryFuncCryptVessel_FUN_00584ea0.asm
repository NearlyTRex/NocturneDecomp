; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_factoryFuncCryptVessel_FUN_00584ea0(void)
;
;
; Called Functions:
;   core_vessel.cpp_CCryptVessel_ctor_FUN_00584ed0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0xaac                          ; 00584ea0
        ;   Label: core_vessel.cpp_factoryFuncCryptVessel_FUN_00584ea0
    CALL crt_unknown.c_FUN_005b8be2     ; 00584ea5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 00584eaa
    TEST EAX,EAX                        ; 00584ead
    JNZ 0x00584eb2                      ; 00584eaf
        ;   XREF to: 00584eb2 (CONDITIONAL_JUMP)  ; LAB_00584eb2
    RET                                 ; 00584eb1
    PUSH EAX                            ; 00584eb2
        ;   Label: LAB_00584eb2
    CALL core_vessel.cpp_CCryptVessel_ctor_FUN_00584ed0 ; 00584eb3
        ;   XREF to: 00584ed0 (UNCONDITIONAL_CALL)  ; CCryptVessel * core_vessel.cpp_CCryptVessel_ctor_FUN_00584ed0(CCryptVessel * this_ptr)
    ADD ESP,0x4                         ; 00584eb8
    RET                                 ; 00584ebb

