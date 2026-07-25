; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005524a0(void)
;
;
; Called Functions:
;   FUN_005524d0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x550                          ; 005524a0
        ;   Label: FUN_005524a0
    CALL FUN_0056497c                   ; 005524a5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 005524aa
    TEST EAX,EAX                        ; 005524ad
    JNZ 0x005524b2                      ; 005524af
        ;   XREF to: 005524b2 (CONDITIONAL_JUMP)  ; LAB_005524b2
    RET                                 ; 005524b1
    PUSH EAX                            ; 005524b2
        ;   Label: LAB_005524b2
    CALL FUN_005524d0                   ; 005524b3
        ;   XREF to: 005524d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005524d0()
    ADD ESP,0x4                         ; 005524b8
    RET                                 ; 005524bb

