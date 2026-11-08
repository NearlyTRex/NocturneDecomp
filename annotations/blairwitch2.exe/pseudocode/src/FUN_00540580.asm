; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540580(void)
;
;
; Called Functions:
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x5fb9f0                       ; 00540580
        ;   Label: FUN_00540580
    PUSH 0x40                           ; 00540585
    PUSH 0x20ccff4                      ; 00540587
    CALL FUN_005b7f5f                   ; 0054058c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00540591
    PUSH 0x61bbdc                       ; 00540594
    CALL FUN_005b8d8c                   ; 00540599
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0054059e
    PUSH 0x5fba10                       ; 005405a1
    PUSH 0x28                           ; 005405a6
    PUSH 0x21780f4                      ; 005405a8
    CALL FUN_005b7f5f                   ; 005405ad
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 005405b2
    PUSH 0x61bbec                       ; 005405b5
    CALL FUN_005b8d8c                   ; 005405ba
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 005405bf
    RET                                 ; 005405c2

