; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_00518080(void)
;
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_005180b0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x884                          ; 00518080
        ;   Label: core_platfrm.cpp_factoryFuncPlatform_FUN_00518080
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00518085
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0051808a
    TEST EAX,EAX                        ; 0051808d
    JNZ 0x00518092                      ; 0051808f
        ;   XREF to: 00518092 (CONDITIONAL_JUMP)  ; LAB_00518092
    RET                                 ; 00518091
    PUSH EAX                            ; 00518092
        ;   Label: LAB_00518092
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_005180b0 ; 00518093
        ;   XREF to: 005180b0 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_005180b0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00518098
    RET                                 ; 0051809b

