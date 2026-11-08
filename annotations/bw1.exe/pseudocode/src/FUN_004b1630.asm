; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1630(void)
;
;
; XREF[1]:
;   FUN_004b5ac0 at 004b5b25
;
; Referenced Globals:
;   TerminatedCString s_debris01_kfm_005df314
;   TerminatedCString s_debris02_kfm_005df321
;   TerminatedCString s_debris03_kfm_005df32e
;   TerminatedCString s_debris04_kfm_005df33b
;   TerminatedCString s_debris05_kfm_005df348
;
; Called Functions:
;   FUN_004688e0
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH 0x5df314                       ; 004b1630 | = "debris01.kfm"
        ;   Label: FUN_004b1630
    PUSH 0x1c57e1c                      ; 004b1635
    CALL FUN_00468950                   ; 004b163a
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004b163f
    PUSH 0x5df321                       ; 004b1642 | = "debris02.kfm"
    PUSH 0x1c57f98                      ; 004b1647
    CALL FUN_00468950                   ; 004b164c
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004b1651
    PUSH 0x5df32e                       ; 004b1654 | = "debris03.kfm"
    PUSH 0x1c58114                      ; 004b1659
    CALL FUN_00468950                   ; 004b165e
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004b1663
    PUSH 0x5df33b                       ; 004b1666 | = "debris04.kfm"
    PUSH 0x1c58290                      ; 004b166b
    CALL FUN_00468950                   ; 004b1670
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004b1675
    PUSH 0x5df348                       ; 004b1678 | = "debris05.kfm"
    PUSH 0x1c5840c                      ; 004b167d
    CALL FUN_00468950                   ; 004b1682
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004b1687
    PUSH 0x1c57e1c                      ; 004b168a
    CALL FUN_004688e0                   ; 004b168f
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004b1694
    PUSH 0x1c57f98                      ; 004b1697
    CALL FUN_004688e0                   ; 004b169c
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004b16a1
    PUSH 0x1c58114                      ; 004b16a4
    CALL FUN_004688e0                   ; 004b16a9
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004b16ae
    PUSH 0x1c58290                      ; 004b16b1
    CALL FUN_004688e0                   ; 004b16b6
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004b16bb
    PUSH 0x1c5840c                      ; 004b16be
    CALL FUN_004688e0                   ; 004b16c3
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004b16c8
    RET                                 ; 004b16cb

