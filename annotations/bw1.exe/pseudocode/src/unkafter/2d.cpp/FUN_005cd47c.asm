; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005cd47c(void)
;
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005cd0f0
;   unkafter_zombie.cpp_FUN_005cd210
;   unkafter_zombie.cpp_FUN_005cd274
;
; *****************************************************************************

section .text

    CALL unkafter_zombie.cpp_FUN_005cd210 ; 005cd47c
        ;   XREF to: 005cd210 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cd210()
        ;   Label: unkafter_2d.cpp_FUN_005cd47c
    TEST EAX,EAX                        ; 005cd481
    JZ 0x005cd4a2                       ; 005cd483
        ;   XREF to: 005cd4a2 (CONDITIONAL_JUMP)  ; LAB_005cd4a2
    CALL unkafter_zombie.cpp_FUN_005cd274 ; 005cd485
        ;   XREF to: 005cd274 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cd274()
    PUSH 0x2                            ; 005cd48a
    PUSH 0x4                            ; 005cd48c
    CALL unkafter_zombie.cpp_FUN_005cd0f0 ; 005cd48e
        ;   XREF to: 005cd0f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cd0f0()
    ADD ESP,0x8                         ; 005cd493
    PUSH 0x2                            ; 005cd496
    PUSH 0x7                            ; 005cd498
    CALL unkafter_zombie.cpp_FUN_005cd0f0 ; 005cd49a
        ;   XREF to: 005cd0f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cd0f0()
    ADD ESP,0x8                         ; 005cd49f
    RET                                 ; 005cd4a2
        ;   Label: LAB_005cd4a2

