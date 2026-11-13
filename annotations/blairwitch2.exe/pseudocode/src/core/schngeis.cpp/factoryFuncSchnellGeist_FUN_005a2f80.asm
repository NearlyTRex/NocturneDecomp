; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSchnellGeist * __cdecl core_schngeis_cpp_factoryFuncSchnellGeist_FUN_005a2f80(void)
;
;
; Called Functions:
;   core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11870                        ; 005a2f80
        ;   Label: core_schngeis.cpp_factoryFuncSchnellGeist_FUN_005a2f80
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a2f85
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a2f8a
    TEST EAX,EAX                        ; 005a2f8d
    JNZ 0x005a2f92                      ; 005a2f8f
        ;   XREF to: 005a2f92 (CONDITIONAL_JUMP)  ; LAB_005a2f92
    RET                                 ; 005a2f91
    PUSH EAX                            ; 005a2f92
        ;   Label: LAB_005a2f92
    CALL core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0 ; 005a2f93
        ;   XREF to: 005a2fb0 (UNCONDITIONAL_CALL)  ; CSchnellGeist * core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0(CSchnellGeist * this_ptr)
    ADD ESP,0x4                         ; 005a2f98
    RET                                 ; 005a2f9b

