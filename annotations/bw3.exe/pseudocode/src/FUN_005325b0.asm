; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005325b0(void)
;
;
; Called Functions:
;   FUN_00448be0
;   FUN_00460490
;   FUN_00473470
;   FUN_005327c0
;   FUN_005a30d7
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1ed78c8                      ; 005325b0
        ;   Label: FUN_005325b0
    CALL FUN_005327c0                   ; 005325b5
        ;   XREF to: 005327c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005327c0()
    ADD ESP,0x4                         ; 005325ba
    PUSH 0x603ae8                       ; 005325bd
    CALL FUN_005a3e13                   ; 005325c2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005325c7
    PUSH 0x2038f4c                      ; 005325ca
    CALL FUN_00448be0                   ; 005325cf
        ;   XREF to: 00448be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00448be0()
    ADD ESP,0x4                         ; 005325d4
    PUSH 0x603af8                       ; 005325d7
    CALL FUN_005a3e13                   ; 005325dc
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005325e1
    PUSH 0x203b37c                      ; 005325e4
    CALL FUN_00473470                   ; 005325e9
        ;   XREF to: 00473470 (UNCONDITIONAL_CALL)  ; undefined FUN_00473470()
    ADD ESP,0x4                         ; 005325ee
    PUSH 0x603b08                       ; 005325f1
    CALL FUN_005a3e13                   ; 005325f6
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005325fb
    PUSH 0x203b70c                      ; 005325fe
    CALL FUN_00460490                   ; 00532603
        ;   XREF to: 00460490 (UNCONDITIONAL_CALL)  ; undefined FUN_00460490()
    ADD ESP,0x4                         ; 00532608
    PUSH 0x603b18                       ; 0053260b
    CALL FUN_005a3e13                   ; 00532610
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 00532615
    PUSH 0x5db0f0                       ; 00532618
    PUSH 0xfa0                          ; 0053261d
    PUSH 0x2080010                      ; 00532622
    CALL FUN_005a30d7                   ; 00532627
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 0053262c
    RET                                 ; 0053262f

