; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004c4870(void)
;
;
; Called Functions:
;   core_glass.cpp_CGlass_ctor_FUN_004c48a0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0xc9c                          ; 004c4870
        ;   Label: core_glass.cpp_factoryFuncGlass_FUN_004c4870
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004c4875
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004c487a
    TEST EAX,EAX                        ; 004c487d
    JNZ 0x004c4882                      ; 004c487f
        ;   XREF to: 004c4882 (CONDITIONAL_JUMP)  ; LAB_004c4882
    RET                                 ; 004c4881
    PUSH EAX                            ; 004c4882
        ;   Label: LAB_004c4882
    CALL core_glass.cpp_CGlass_ctor_FUN_004c48a0 ; 004c4883
        ;   XREF to: 004c48a0 (UNCONDITIONAL_CALL)  ; CGlass * core_glass.cpp_CGlass_ctor_FUN_004c48a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004c4888
    RET                                 ; 004c488b

