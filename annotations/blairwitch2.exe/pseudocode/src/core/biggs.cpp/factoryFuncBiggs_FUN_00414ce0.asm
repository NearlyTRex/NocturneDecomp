; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBiggs * __cdecl core_biggs_cpp_factoryFuncBiggs_FUN_00414ce0(void)
;
;
; Called Functions:
;   core_biggs.cpp_CBiggs_ctor_FUN_00414d10
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x1190c                        ; 00414ce0
        ;   Label: core_biggs.cpp_factoryFuncBiggs_FUN_00414ce0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00414ce5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00414cea
    TEST EAX,EAX                        ; 00414ced
    JNZ 0x00414cf2                      ; 00414cef
        ;   XREF to: 00414cf2 (CONDITIONAL_JUMP)  ; LAB_00414cf2
    RET                                 ; 00414cf1
    PUSH EAX                            ; 00414cf2
        ;   Label: LAB_00414cf2
    CALL core_biggs.cpp_CBiggs_ctor_FUN_00414d10 ; 00414cf3
        ;   XREF to: 00414d10 (UNCONDITIONAL_CALL)  ; CBiggs * core_biggs.cpp_CBiggs_ctor_FUN_00414d10(CBiggs * this_ptr)
    ADD ESP,0x4                         ; 00414cf8
    RET                                 ; 00414cfb

