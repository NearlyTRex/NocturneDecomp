; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_construc_cpp_FUN_004445d0(void)
;
;
; Called Functions:
;   core_construc.cpp_CConstructRed_ctor_FUN_00444600
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd860                         ; 004445d0
        ;   Label: core_construc.cpp_FUN_004445d0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004445d5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004445da
    TEST EAX,EAX                        ; 004445dd
    JNZ 0x004445e2                      ; 004445df
        ;   XREF to: 004445e2 (CONDITIONAL_JUMP)  ; LAB_004445e2
    RET                                 ; 004445e1
    PUSH EAX                            ; 004445e2
        ;   Label: LAB_004445e2
    CALL core_construc.cpp_CConstructRed_ctor_FUN_00444600 ; 004445e3
        ;   XREF to: 00444600 (UNCONDITIONAL_CALL)  ; CConstructRed * core_construc.cpp_CConstructRed_ctor_FUN_00444600(CConstructRed * this_ptr)
    ADD ESP,0x4                         ; 004445e8
    RET                                 ; 004445eb

