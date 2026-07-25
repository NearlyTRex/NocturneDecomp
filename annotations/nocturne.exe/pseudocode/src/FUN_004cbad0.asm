; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cbad0(void)
;
;
; Called Functions:
;   FUN_004cbb00
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d0                          ; 004cbad0
        ;   Label: FUN_004cbad0
    CALL FUN_0056497c                   ; 004cbad5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004cbada
    TEST EAX,EAX                        ; 004cbadd
    JNZ 0x004cbae2                      ; 004cbadf
        ;   XREF to: 004cbae2 (CONDITIONAL_JUMP)  ; LAB_004cbae2
    RET                                 ; 004cbae1
    PUSH EAX                            ; 004cbae2
        ;   Label: LAB_004cbae2
    CALL FUN_004cbb00                   ; 004cbae3
        ;   XREF to: 004cbb00 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbb00()
    ADD ESP,0x4                         ; 004cbae8
    RET                                 ; 004cbaeb

