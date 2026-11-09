; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_factoryFuncBoxActor_FUN_0041efb0(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x6e8                          ; 0041efb0
        ;   Label: core_boxactor.cpp_factoryFuncBoxActor_FUN_0041efb0
    CALL crt_unknown.c_FUN_005a3cb2     ; 0041efb5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0041efba
    TEST EAX,EAX                        ; 0041efbd
    JNZ 0x0041efc2                      ; 0041efbf
        ;   XREF to: 0041efc2 (CONDITIONAL_JUMP)  ; LAB_0041efc2
    RET                                 ; 0041efc1
    PUSH EAX                            ; 0041efc2
        ;   Label: LAB_0041efc2
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0 ; 0041efc3
        ;   XREF to: 0041efe0 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0041efc8
    RET                                 ; 0041efcb

