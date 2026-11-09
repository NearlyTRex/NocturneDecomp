; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_factoryFuncLadder_FUN_004dff30(void)
;
;
; Called Functions:
;   core_ladder.cpp_CLadder_ctor_FUN_004dff60
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x45c                          ; 004dff30
        ;   Label: core_ladder.cpp_factoryFuncLadder_FUN_004dff30
    CALL crt_unknown.c_FUN_005b8be2     ; 004dff35
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004dff3a
    TEST EAX,EAX                        ; 004dff3d
    JNZ 0x004dff42                      ; 004dff3f
        ;   XREF to: 004dff42 (CONDITIONAL_JUMP)  ; LAB_004dff42
    RET                                 ; 004dff41
    PUSH EAX                            ; 004dff42
        ;   Label: LAB_004dff42
    CALL core_ladder.cpp_CLadder_ctor_FUN_004dff60 ; 004dff43
        ;   XREF to: 004dff60 (UNCONDITIONAL_CALL)  ; CLadder * core_ladder.cpp_CLadder_ctor_FUN_004dff60(CLadder * this_ptr)
    ADD ESP,0x4                         ; 004dff48
    RET                                 ; 004dff4b

