; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPryeMorph * __cdecl core_pryemorp_cpp_factoryFuncPryeMorph_FUN_00527380(void)
;
;
; Called Functions:
;   core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x21448                        ; 00527380
        ;   Label: core_pryemorp.cpp_factoryFuncPryeMorph_FUN_00527380
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00527385
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0052738a
    TEST EAX,EAX                        ; 0052738d
    JNZ 0x00527392                      ; 0052738f
        ;   XREF to: 00527392 (CONDITIONAL_JUMP)  ; LAB_00527392
    RET                                 ; 00527391
    PUSH EAX                            ; 00527392
        ;   Label: LAB_00527392
    CALL core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0 ; 00527393
        ;   XREF to: 005273b0 (UNCONDITIONAL_CALL)  ; CPryeMorph * core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0(CPryeMorph * this_ptr)
    ADD ESP,0x4                         ; 00527398
    RET                                 ; 0052739b

