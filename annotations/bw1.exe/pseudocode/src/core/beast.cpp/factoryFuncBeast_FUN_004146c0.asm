; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBeast * __cdecl core_beast_cpp_factoryFuncBeast_FUN_004146c0(void)
;
;
; Called Functions:
;   core_beast.cpp_CBeast_ctor_FUN_004146f0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc268                         ; 004146c0
        ;   Label: core_beast.cpp_factoryFuncBeast_FUN_004146c0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004146c5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004146ca
    TEST EAX,EAX                        ; 004146cd
    JNZ 0x004146d2                      ; 004146cf
        ;   XREF to: 004146d2 (CONDITIONAL_JUMP)  ; LAB_004146d2
    RET                                 ; 004146d1
    PUSH EAX                            ; 004146d2
        ;   Label: LAB_004146d2
    CALL core_beast.cpp_CBeast_ctor_FUN_004146f0 ; 004146d3
        ;   XREF to: 004146f0 (UNCONDITIONAL_CALL)  ; CBeast * core_beast.cpp_CBeast_ctor_FUN_004146f0(CBeast * this_ptr)
    ADD ESP,0x4                         ; 004146d8
    RET                                 ; 004146db

