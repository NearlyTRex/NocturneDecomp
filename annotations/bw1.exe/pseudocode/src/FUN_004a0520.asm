; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0520(int param_1)
;
;
; XREF[35]:
;   FUN_0040ebe0 at 0040ebe7
;   FUN_00412110 at 00412117
;   FUN_00413b60 at 00413b67
;   FUN_00414800 at 00414807
;   FUN_00414f30 at 00414f37
;   FUN_0041d0d0 at 0041d0dc
;   FUN_00424840 at 00424846
;   FUN_004257f0 at 004257f9
;   FUN_0042b3c0 at 0042b3c7
;   FUN_00446e30 at 00446e3a
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_speed_005dcac5
;   TerminatedCString s_hitPoints_005dcacb
;   TerminatedCString s_poolMe_005dcad5
;   TerminatedCString s_speed_005dcadc
;   TerminatedCString s_poolMe_005dcae2
;   TerminatedCString s_randomizeMe_005dcae9
;   TerminatedCString s_scriptVictim_005dcaf5
;   TerminatedCString s_patrolNamePattern_005dcb02
;   TerminatedCString s_guardDistance_005dcb14
;   TerminatedCString s_victimHeight_005dcb22
;   TerminatedCString s_victim_005dcb2f
;   undefined4 DAT_0061b480
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040c040
;   FUN_0042c7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0520
        ;   Label: FUN_004a0520
    PUSH ESI                            ; 004a0521
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a0522
    MOV EDX,dword ptr [0x0061b480]      ; 004a0526 | DAT_0061b480
    LEA ESI,[EBX + 0xc1d0]              ; 004a052c
    CMP EDX,0x4                         ; 004a0532
    JGE 0x004a0590                      ; 004a0535
        ;   XREF to: 004a0590 (CONDITIONAL_JUMP)  ; LAB_004a0590
    PUSH EBX                            ; 004a0537
    CALL FUN_0040c040                   ; 004a0538
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    MOV ECX,dword ptr [0x0061b480]      ; 004a053d | DAT_0061b480
    ADD ESP,0x4                         ; 004a0543
    CMP ECX,0x2                         ; 004a0546
    JL 0x004a0559                       ; 004a0549
        ;   XREF to: 004a0559 (CONDITIONAL_JUMP)  ; LAB_004a0559
    PUSH 0x5dcac5                       ; 004a054b | = "speed"
    PUSH ESI                            ; 004a0550
    CALL FUN_0040b5f0                   ; 004a0551
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a0556
    CMP dword ptr [0x0061b480],0x3      ; 004a0559 | DAT_0061b480
        ;   Label: LAB_004a0559
    JGE 0x004a0565                      ; 004a0560
        ;   XREF to: 004a0565 (CONDITIONAL_JUMP)  ; LAB_004a0565
    POP ESI                             ; 004a0562
        ;   Label: LAB_004a0562
    POP EBX                             ; 004a0563
    RET                                 ; 004a0564
    PUSH 0x5dcacb                       ; 004a0565 | = "hitPoints"
        ;   Label: LAB_004a0565
    LEA ESI,[EBX + 0x2538]              ; 004a056a
    PUSH ESI                            ; 004a0570
    CALL FUN_0040b5f0                   ; 004a0571
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a0576
    PUSH 0x5dcad5                       ; 004a0579 | = "poolMe"
    ADD EBX,0xc1d4                      ; 004a057e
    PUSH EBX                            ; 004a0584
    CALL FUN_0040b670                   ; 004a0585
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004a058a
    POP ESI                             ; 004a058d
    POP EBX                             ; 004a058e
    RET                                 ; 004a058f
    PUSH EBX                            ; 004a0590
        ;   Label: LAB_004a0590
    CALL FUN_0042c7f0                   ; 004a0591
        ;   XREF to: 0042c7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c7f0()
    ADD ESP,0x4                         ; 004a0596
    PUSH 0x5dcadc                       ; 004a0599 | = "speed"
    PUSH ESI                            ; 004a059e
    CALL FUN_0040b5f0                   ; 004a059f
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a05a4
    PUSH 0x5dcae2                       ; 004a05a7 | = "poolMe"
    LEA ESI,[EBX + 0xc1d4]              ; 004a05ac
    PUSH ESI                            ; 004a05b2
    CALL FUN_0040b670                   ; 004a05b3
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV ECX,dword ptr [0x0061b480]      ; 004a05b8 | DAT_0061b480
    ADD ESP,0x8                         ; 004a05be
    CMP ECX,0x5                         ; 004a05c1
    JL 0x004a05da                       ; 004a05c4
        ;   XREF to: 004a05da (CONDITIONAL_JUMP)  ; LAB_004a05da
    PUSH 0x5dcae9                       ; 004a05c6 | = "randomizeMe"
    LEA ESI,[EBX + 0xc1d8]              ; 004a05cb
    PUSH ESI                            ; 004a05d1
    CALL FUN_0040b670                   ; 004a05d2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004a05d7
    CMP dword ptr [0x0061b480],0x6      ; 004a05da | DAT_0061b480
        ;   Label: LAB_004a05da
    JL 0x004a05f7                       ; 004a05e1
        ;   XREF to: 004a05f7 (CONDITIONAL_JUMP)  ; LAB_004a05f7
    PUSH 0x5dcaf5                       ; 004a05e3 | = "scriptVictim"
    LEA ESI,[EBX + 0xc260]              ; 004a05e8
    PUSH ESI                            ; 004a05ee
    CALL FUN_0040b6f0                   ; 004a05ef
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004a05f4
    CMP dword ptr [0x0061b480],0x7      ; 004a05f7 | DAT_0061b480
        ;   Label: LAB_004a05f7
    JL 0x004a0614                       ; 004a05fe
        ;   XREF to: 004a0614 (CONDITIONAL_JUMP)  ; LAB_004a0614
    PUSH 0x5dcb02                       ; 004a0600 | = "patrolNamePattern"
    LEA ESI,[EBX + 0xc1f4]              ; 004a0605
    PUSH ESI                            ; 004a060b
    CALL FUN_0040b440                   ; 004a060c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004a0611
    CMP dword ptr [0x0061b480],0x8      ; 004a0614 | DAT_0061b480
        ;   Label: LAB_004a0614
    JL 0x004a0631                       ; 004a061b
        ;   XREF to: 004a0631 (CONDITIONAL_JUMP)  ; LAB_004a0631
    PUSH 0x5dcb14                       ; 004a061d | = "guardDistance"
    LEA ESI,[EBX + 0xc1e0]              ; 004a0622
    PUSH ESI                            ; 004a0628
    CALL FUN_0040b5f0                   ; 004a0629
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a062e
    CMP dword ptr [0x0061b480],0x9      ; 004a0631 | DAT_0061b480
        ;   Label: LAB_004a0631
    JL 0x004a064e                       ; 004a0638
        ;   XREF to: 004a064e (CONDITIONAL_JUMP)  ; LAB_004a064e
    PUSH 0x5dcb22                       ; 004a063a | = "victimHeight"
    LEA ESI,[EBX + 0xc25c]              ; 004a063f
    PUSH ESI                            ; 004a0645
    CALL FUN_0040b5f0                   ; 004a0646
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a064b
    CMP dword ptr [0x0061b480],0xa      ; 004a064e | DAT_0061b480
        ;   Label: LAB_004a064e
    JL 0x004a0562                       ; 004a0655
        ;   XREF to: 004a0562 (CONDITIONAL_JUMP)  ; LAB_004a0562
    PUSH 0x5dcb2f                       ; 004a065b | = "victim"
    ADD EBX,0xc1e8                      ; 004a0660
    PUSH EBX                            ; 004a0666
    CALL FUN_0040b6f0                   ; 004a0667
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004a066c
    POP ESI                             ; 004a066f
    POP EBX                             ; 004a0670
    RET                                 ; 004a0671

