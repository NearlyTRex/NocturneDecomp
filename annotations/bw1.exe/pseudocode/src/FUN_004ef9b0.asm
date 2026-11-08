; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ef9b0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 004ef9b0
        ;   Label: FUN_004ef9b0
    PUSH 0x1                            ; 004ef9b5
    PUSH 0x61efa0                       ; 004ef9b7
    PUSH 0x4ef9e0                       ; 004ef9bc
    PUSH 0x5e504a                       ; 004ef9c1
    PUSH 0x1d06bfc                      ; 004ef9c6
    CALL FUN_0040c160                   ; 004ef9cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004ef9d0
    RET                                 ; 004ef9d3

