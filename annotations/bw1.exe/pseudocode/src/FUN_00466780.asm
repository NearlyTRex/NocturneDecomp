; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00466780(void)
;
;
; Called Functions:
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x5fec60                       ; 00466780
        ;   Label: FUN_00466780
    PUSH 0x100                          ; 00466785
    PUSH 0x1b2efe0                      ; 0046678a
    CALL FUN_005c0357                   ; 0046678f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00466794
    PUSH 0x6124a3                       ; 00466797
    CALL FUN_005c1093                   ; 0046679c
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 004667a1
    RET                                 ; 004667a4

