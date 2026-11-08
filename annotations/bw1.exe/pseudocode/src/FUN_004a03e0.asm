; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a03e0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c6344                       ; 004a03e0
        ;   Label: FUN_004a03e0
    PUSH 0xa                            ; 004a03e5
    PUSH 0x61b480                       ; 004a03e7
    PUSH 0x0                            ; 004a03ec
    PUSH 0x5dcaba                       ; 004a03ee
    PUSH 0x1c3f668                      ; 004a03f3
    CALL FUN_0040c160                   ; 004a03f8
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004a03fd
    RET                                 ; 004a0400

