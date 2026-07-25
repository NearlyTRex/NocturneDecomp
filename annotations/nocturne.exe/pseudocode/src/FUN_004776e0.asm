; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004776e0(void)
;
;
; Called Functions:
;   FUN_00477710
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x57c                          ; 004776e0
        ;   Label: FUN_004776e0
    CALL FUN_0056497c                   ; 004776e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004776ea
    TEST EAX,EAX                        ; 004776ed
    JNZ 0x004776f2                      ; 004776ef
        ;   XREF to: 004776f2 (CONDITIONAL_JUMP)  ; LAB_004776f2
    RET                                 ; 004776f1
    PUSH EAX                            ; 004776f2
        ;   Label: LAB_004776f2
    CALL FUN_00477710                   ; 004776f3
        ;   XREF to: 00477710 (UNCONDITIONAL_CALL)  ; undefined FUN_00477710()
    ADD ESP,0x4                         ; 004776f8
    RET                                 ; 004776fb

