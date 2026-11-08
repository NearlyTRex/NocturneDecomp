; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4eb0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004e4eb0
        ;   Label: FUN_004e4eb0
    PUSH 0x3                            ; 004e4eb5
    PUSH 0x617ec0                       ; 004e4eb7
    PUSH 0x4e4f00                       ; 004e4ebc
    PUSH 0x5dc495                       ; 004e4ec1
    PUSH 0x1d046fc                      ; 004e4ec6
    CALL FUN_0040c450                   ; 004e4ecb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004e4ed0
    PUSH 0x7bbff8                       ; 004e4ed3
    PUSH 0x1                            ; 004e4ed8
    PUSH 0x617ec4                       ; 004e4eda
    PUSH 0x4e7780                       ; 004e4edf
    PUSH 0x5dc4aa                       ; 004e4ee4
    PUSH 0x1d04738                      ; 004e4ee9
    CALL FUN_0040c450                   ; 004e4eee
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004e4ef3
    RET                                 ; 004e4ef6

