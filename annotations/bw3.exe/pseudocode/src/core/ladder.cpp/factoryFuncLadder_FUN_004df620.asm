; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_factoryFuncLadder_FUN_004df620(void)
;
;
; Called Functions:
;   core_ladder.cpp_CLadder_ctor_FUN_004df650
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x300                          ; 004df620
        ;   Label: core_ladder.cpp_factoryFuncLadder_FUN_004df620
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004df625
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004df62a
    TEST EAX,EAX                        ; 004df62d
    JNZ 0x004df632                      ; 004df62f
        ;   XREF to: 004df632 (CONDITIONAL_JUMP)  ; LAB_004df632
    RET                                 ; 004df631
    PUSH EAX                            ; 004df632
        ;   Label: LAB_004df632
    CALL core_ladder.cpp_CLadder_ctor_FUN_004df650 ; 004df633
        ;   XREF to: 004df650 (UNCONDITIONAL_CALL)  ; CLadder * core_ladder.cpp_CLadder_ctor_FUN_004df650(CLadder * this_ptr)
    ADD ESP,0x4                         ; 004df638
    RET                                 ; 004df63b

