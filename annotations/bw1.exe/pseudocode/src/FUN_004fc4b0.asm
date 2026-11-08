; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc4b0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004fc4b0
        ;   Label: FUN_004fc4b0
    PUSH 0x3                            ; 004fc4b5
    PUSH 0x61f28c                       ; 004fc4b7
    PUSH 0x4fc4e0                       ; 004fc4bc
    PUSH 0x5e69b3                       ; 004fc4c1
    PUSH 0x1d1bc64                      ; 004fc4c6
    CALL FUN_0040c160                   ; 004fc4cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004fc4d0
    RET                                 ; 004fc4d3

