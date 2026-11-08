; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053fec0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 0053fec0
        ;   Label: FUN_0053fec0
    PUSH 0x1                            ; 0053fec5
    PUSH 0x622a88                       ; 0053fec7
    PUSH 0x53fef0                       ; 0053fecc
    PUSH 0x5edbff                       ; 0053fed1
    PUSH 0x1e7dfd8                      ; 0053fed6
    CALL FUN_0040c160                   ; 0053fedb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0053fee0
    RET                                 ; 0053fee3

