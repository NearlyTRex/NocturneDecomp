; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550980(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4850
;   undefined4 DAT_005e4854
;   undefined4 DAT_02ce7210
;
; Called Functions:
;   FUN_005a30d7
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    FLD float ptr [0x005e4854]          ; 00550980 | DAT_005e4854
        ;   Label: FUN_00550980
    FDIV float ptr [0x005e4850]         ; 00550986 | DAT_005e4850
    PUSH 0x5e4860                       ; 0055098c
    PUSH 0x40                           ; 00550991
    PUSH 0x2ce721c                      ; 00550993
    FSTP float ptr [0x02ce7210]         ; 00550998 | DAT_02ce7210
    CALL FUN_005a30d7                   ; 0055099e
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 005509a3
    PUSH 0x5e4880                       ; 005509a6
    PUSH 0x8                            ; 005509ab
    PUSH 0x2ceb920                      ; 005509ad
    CALL FUN_005a30d7                   ; 005509b2
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 005509b7
    PUSH 0x5e48a0                       ; 005509ba
    PUSH 0x40                           ; 005509bf
    PUSH 0x2cebc24                      ; 005509c1
    CALL FUN_005a30d7                   ; 005509c6
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 005509cb
    PUSH 0x6041f0                       ; 005509ce
    CALL FUN_005a3e13                   ; 005509d3
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005509d8
    RET                                 ; 005509db

