; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fefe0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004fefe0
        ;   Label: FUN_004fefe0
    PUSH 0x8                            ; 004fefe5
    PUSH 0x61f2fc                       ; 004fefe7
    PUSH 0x4ff010                       ; 004fefec
    PUSH 0x5e6d0a                       ; 004feff1
    PUSH 0x1d1c1e4                      ; 004feff6
    CALL FUN_0040c160                   ; 004feffb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004ff000
    RET                                 ; 004ff003

