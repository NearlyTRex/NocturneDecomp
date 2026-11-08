; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00459610(void)
;
;
; Called Functions:
;   FUN_00459690
;   FUN_00459ca0
;   FUN_005a30d7
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x5dcb50                       ; 00459610
        ;   Label: FUN_00459610
    PUSH 0x8                            ; 00459615
    PUSH 0x1548c00                      ; 00459617
    CALL FUN_005a30d7                   ; 0045961c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00459621
    PUSH 0x5f189c                       ; 00459624
    CALL FUN_005a3e13                   ; 00459629
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 0045962e
    PUSH 0x5dcb50                       ; 00459631
    PUSH 0x4                            ; 00459636
    PUSH 0x1548e60                      ; 00459638
    CALL FUN_005a30d7                   ; 0045963d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00459642
    PUSH 0x5f18ac                       ; 00459645
    CALL FUN_005a3e13                   ; 0045964a
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 0045964f
    PUSH 0x1548f90                      ; 00459652
    CALL FUN_00459690                   ; 00459657
        ;   XREF to: 00459690 (UNCONDITIONAL_CALL)  ; undefined FUN_00459690()
    ADD ESP,0x4                         ; 0045965c
    PUSH 0x5f18bc                       ; 0045965f
    CALL FUN_005a3e13                   ; 00459664
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 00459669
    PUSH 0x1549a94                      ; 0045966c
    CALL FUN_00459ca0                   ; 00459671
        ;   XREF to: 00459ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00459ca0()
    ADD ESP,0x4                         ; 00459676
    PUSH 0x5f18cc                       ; 00459679
    CALL FUN_005a3e13                   ; 0045967e
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 00459683
    RET                                 ; 00459686

