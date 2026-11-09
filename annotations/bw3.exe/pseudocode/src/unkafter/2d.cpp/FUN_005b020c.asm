; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005b020c(void)
;
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005afe80
;   unkafter_asgaya.cpp_FUN_005affa0
;   unkafter_asgaya.cpp_FUN_005b0004
;
; *****************************************************************************

section .text

    CALL unkafter_asgaya.cpp_FUN_005affa0 ; 005b020c
        ;   XREF to: 005affa0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005affa0()
        ;   Label: unkafter_2d.cpp_FUN_005b020c
    TEST EAX,EAX                        ; 005b0211
    JZ 0x005b0232                       ; 005b0213
        ;   XREF to: 005b0232 (CONDITIONAL_JUMP)  ; LAB_005b0232
    CALL unkafter_asgaya.cpp_FUN_005b0004 ; 005b0215
        ;   XREF to: 005b0004 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005b0004()
    PUSH 0x2                            ; 005b021a
    PUSH 0x4                            ; 005b021c
    CALL unkafter_asgaya.cpp_FUN_005afe80 ; 005b021e
        ;   XREF to: 005afe80 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afe80()
    ADD ESP,0x8                         ; 005b0223
    PUSH 0x2                            ; 005b0226
    PUSH 0x7                            ; 005b0228
    CALL unkafter_asgaya.cpp_FUN_005afe80 ; 005b022a
        ;   XREF to: 005afe80 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afe80()
    ADD ESP,0x8                         ; 005b022f
    RET                                 ; 005b0232
        ;   Label: LAB_005b0232

