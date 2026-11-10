; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_factoryFuncMineCar_FUN_004f2030(void)
;
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_005180b0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x888                          ; 004f2030
        ;   Label: core_mimic.cpp_factoryFuncMineCar_FUN_004f2030
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004f2035
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004f203a
    TEST EAX,EAX                        ; 004f203d
    JNZ 0x004f2042                      ; 004f203f
        ;   XREF to: 004f2042 (CONDITIONAL_JUMP)  ; LAB_004f2042
    RET                                 ; 004f2041
    PUSH EAX                            ; 004f2042
        ;   Label: LAB_004f2042
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_005180b0 ; 004f2043
        ;   XREF to: 005180b0 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_005180b0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 004f2048
    MOV dword ptr [EAX + 0x2b0],0x5fa034 ; 004f204b
    RET                                 ; 004f2055

