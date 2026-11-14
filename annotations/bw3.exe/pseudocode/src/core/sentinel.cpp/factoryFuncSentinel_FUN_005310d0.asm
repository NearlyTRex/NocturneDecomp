; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_005310d0(void)
;
;
; Called Functions:
;   core_sentinel.cpp_CSentinel_ctor_FUN_00531100
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd05c                         ; 005310d0
        ;   Label: core_sentinel.cpp_factoryFuncSentinel_FUN_005310d0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 005310d5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005310da
    TEST EAX,EAX                        ; 005310dd
    JNZ 0x005310e2                      ; 005310df
        ;   XREF to: 005310e2 (CONDITIONAL_JUMP)  ; LAB_005310e2
    RET                                 ; 005310e1
    PUSH EAX                            ; 005310e2
        ;   Label: LAB_005310e2
    CALL core_sentinel.cpp_CSentinel_ctor_FUN_00531100 ; 005310e3
        ;   XREF to: 00531100 (UNCONDITIONAL_CALL)  ; CSentinel * core_sentinel.cpp_CSentinel_ctor_FUN_00531100(CSentinel * this_ptr)
    ADD ESP,0x4                         ; 005310e8
    RET                                 ; 005310eb

