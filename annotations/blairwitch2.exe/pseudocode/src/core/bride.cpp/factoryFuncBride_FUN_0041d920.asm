; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBride * __cdecl core_bride_cpp_factoryFuncBride_FUN_0041d920(void)
;
;
; Called Functions:
;   core_bride.cpp_CBride_ctor_FUN_0041d950
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b28                        ; 0041d920
        ;   Label: core_bride.cpp_factoryFuncBride_FUN_0041d920
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0041d925
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0041d92a
    TEST EAX,EAX                        ; 0041d92d
    JNZ 0x0041d932                      ; 0041d92f
        ;   XREF to: 0041d932 (CONDITIONAL_JUMP)  ; LAB_0041d932
    RET                                 ; 0041d931
    PUSH EAX                            ; 0041d932
        ;   Label: LAB_0041d932
    CALL core_bride.cpp_CBride_ctor_FUN_0041d950 ; 0041d933
        ;   XREF to: 0041d950 (UNCONDITIONAL_CALL)  ; CBride * core_bride.cpp_CBride_ctor_FUN_0041d950(CBride * this_ptr)
    ADD ESP,0x4                         ; 0041d938
    RET                                 ; 0041d93b

