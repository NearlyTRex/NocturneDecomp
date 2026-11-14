; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * __cdecl core_colonel_cpp_factoryFuncColonel_FUN_004355e0(void)
;
;
; Called Functions:
;   core_colonel.cpp_CColonel_ctor_FUN_00435610
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x25658                        ; 004355e0
        ;   Label: core_colonel.cpp_factoryFuncColonel_FUN_004355e0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004355e5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004355ea
    TEST EAX,EAX                        ; 004355ed
    JNZ 0x004355f2                      ; 004355ef
        ;   XREF to: 004355f2 (CONDITIONAL_JUMP)  ; LAB_004355f2
    RET                                 ; 004355f1
    PUSH EAX                            ; 004355f2
        ;   Label: LAB_004355f2
    CALL core_colonel.cpp_CColonel_ctor_FUN_00435610 ; 004355f3
        ;   XREF to: 00435610 (UNCONDITIONAL_CALL)  ; CColonel * core_colonel.cpp_CColonel_ctor_FUN_00435610(CColonel * this_ptr)
    ADD ESP,0x4                         ; 004355f8
    RET                                 ; 004355fb

