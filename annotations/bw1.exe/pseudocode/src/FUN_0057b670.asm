; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b670(void)
;
;
; Called Functions:
;   FUN_00499380
;   FUN_0057cb10
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x2c82a60                      ; 0057b670
        ;   Label: FUN_0057b670
    CALL FUN_0057cb10                   ; 0057b675
        ;   XREF to: 0057cb10 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cb10()
    ADD ESP,0x4                         ; 0057b67a
    PUSH 0x2c82c20                      ; 0057b67d
    CALL FUN_00499380                   ; 0057b682
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; undefined FUN_00499380()
    ADD ESP,0x4                         ; 0057b687
    PUSH 0x6236a0                       ; 0057b68a
    CALL FUN_005c1093                   ; 0057b68f
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 0057b694
    PUSH 0x605ca0                       ; 0057b697
    PUSH 0xa                            ; 0057b69c
    PUSH 0x2c832b4                      ; 0057b69e
    CALL FUN_005c0357                   ; 0057b6a3
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0057b6a8
    RET                                 ; 0057b6ab

