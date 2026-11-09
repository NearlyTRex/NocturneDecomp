; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_blundrbs_cpp_factoryFuncBlunderbus_FUN_004103c0(void)
;
;
; Called Functions:
;   core_blundrbs.cpp_CBlunderbus_ctor_FUN_004103f0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x598                          ; 004103c0
        ;   Label: core_blundrbs.cpp_factoryFuncBlunderbus_FUN_004103c0
    CALL crt_unknown.c_FUN_005a3cb2     ; 004103c5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004103ca
    TEST EAX,EAX                        ; 004103cd
    JNZ 0x004103d2                      ; 004103cf
        ;   XREF to: 004103d2 (CONDITIONAL_JUMP)  ; LAB_004103d2
    RET                                 ; 004103d1
    PUSH EAX                            ; 004103d2
        ;   Label: LAB_004103d2
    CALL core_blundrbs.cpp_CBlunderbus_ctor_FUN_004103f0 ; 004103d3
        ;   XREF to: 004103f0 (UNCONDITIONAL_CALL)  ; CBlunderbus * core_blundrbs.cpp_CBlunderbus_ctor_FUN_004103f0(CBlunderbus * this_ptr)
    ADD ESP,0x4                         ; 004103d8
    RET                                 ; 004103db

