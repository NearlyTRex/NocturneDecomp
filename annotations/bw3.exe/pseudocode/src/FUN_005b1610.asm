; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b1610(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005b146c at 005b1508
;
; Referenced Globals:
;   undefined4 DAT_02d25920
;   undefined4 DAT_02d25924
;
; Called Functions:
;   FUN_005a3770
;   FUN_005a4120
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1610
        ;   Label: FUN_005b1610
    PUSH ESI                            ; 005b1611
    PUSH EDI                            ; 005b1612
    PUSH EBP                            ; 005b1613
    MOV EBP,dword ptr [0x02d25924]      ; 005b1614 | DAT_02d25924
    JMP 0x005b16f9                      ; 005b161a
        ;   XREF to: 005b16f9 (UNCONDITIONAL_JUMP)  ; LAB_005b16f9
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b161f
        ;   Label: LAB_005b161f
    CMP byte ptr [ESI],0x0              ; 005b1623
    JZ 0x005b16f6                       ; 005b1626
        ;   XREF to: 005b16f6 (CONDITIONAL_JUMP)  ; LAB_005b16f6
    XOR EAX,EAX                         ; 005b162c
        ;   Label: LAB_005b162c
    MOV AL,byte ptr [EBX]               ; 005b162e
    PUSH EAX                            ; 005b1630
    CALL FUN_005a4120                   ; 005b1631
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4120()
    MOV EDI,EAX                         ; 005b1636
    XOR EAX,EAX                         ; 005b1638
    ADD ESP,0x4                         ; 005b163a
    MOV AL,byte ptr [ESI]               ; 005b163d
    PUSH EAX                            ; 005b163f
    CALL FUN_005a4120                   ; 005b1640
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4120()
    ADD ESP,0x4                         ; 005b1645
    CMP EDI,EAX                         ; 005b1648
    JNZ 0x005b16f6                      ; 005b164a
        ;   XREF to: 005b16f6 (CONDITIONAL_JUMP)  ; LAB_005b16f6
    CMP byte ptr [EBX],0x3d             ; 005b1650
    JNZ 0x005b16e9                      ; 005b1653
        ;   XREF to: 005b16e9 (CONDITIONAL_JUMP)  ; LAB_005b16e9
    MOV EDX,dword ptr [0x02d25924]      ; 005b1659 | DAT_02d25924
    MOV ESI,EBP                         ; 005b165f
    SUB ESI,EDX                         ; 005b1661
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b1663
    SAR ESI,0x2                         ; 005b1667
    TEST EBX,EBX                        ; 005b166a
    JZ 0x005b16e1                       ; 005b166c
        ;   XREF to: 005b16e1 (CONDITIONAL_JUMP)  ; LAB_005b16e1
    MOV EDI,dword ptr [EBP]             ; 005b1672
    MOV EBX,EBP                         ; 005b1675
    TEST EDI,EDI                        ; 005b1677
    JZ 0x005b168a                       ; 005b1679
        ;   XREF to: 005b168a (CONDITIONAL_JUMP)  ; LAB_005b168a
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b167b
        ;   Label: LAB_005b167b
    MOV dword ptr [EBX],EAX             ; 005b167e
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b1680
    ADD EBX,0x4                         ; 005b1683
    TEST ECX,ECX                        ; 005b1686
    JNZ 0x005b167b                      ; 005b1688
        ;   XREF to: 005b167b (CONDITIONAL_JUMP)  ; LAB_005b167b
    MOV EBP,dword ptr [0x02d25920]      ; 005b168a | DAT_02d25920
        ;   Label: LAB_005b168a
    TEST EBP,EBP                        ; 005b1690
    JZ 0x005b16da                       ; 005b1692
        ;   XREF to: 005b16da (CONDITIONAL_JUMP)  ; LAB_005b16da
    MOV EAX,EBP                         ; 005b1694
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 005b1696
    JZ 0x005b16a5                       ; 005b169a
        ;   XREF to: 005b16a5 (CONDITIONAL_JUMP)  ; LAB_005b16a5
    PUSH EDI                            ; 005b169c
    CALL FUN_005a3770                   ; 005b169d
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005b16a2
    MOV EAX,[0x02d25924]                ; 005b16a5 | DAT_02d25924
        ;   Label: LAB_005b16a5
    MOV EDI,EBX                         ; 005b16aa
    SUB EDI,EAX                         ; 005b16ac
    SAR EDI,0x2                         ; 005b16ae
    PUSH EDI                            ; 005b16b1
    MOV EDX,dword ptr [0x02d25920]      ; 005b16b2 | DAT_02d25920
    PUSH EDX                            ; 005b16b8
    PUSH EBX                            ; 005b16b9
    CALL FUN_005a54c0                   ; 005b16ba
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 005b16bf
    MOV dword ptr [0x02d25920],EBX      ; 005b16c2 | DAT_02d25920
    CMP ESI,EDI                         ; 005b16c8
    JGE 0x005b16da                      ; 005b16ca
        ;   XREF to: 005b16da (CONDITIONAL_JUMP)  ; LAB_005b16da
    LEA EAX,[ESI + EBX*0x1]             ; 005b16cc
    INC EAX                             ; 005b16cf
        ;   Label: LAB_005b16cf
    MOV BL,byte ptr [EAX]               ; 005b16d0
    INC ESI                             ; 005b16d2
    MOV byte ptr [EAX + -0x1],BL        ; 005b16d3
    CMP ESI,EDI                         ; 005b16d6
    JL 0x005b16cf                       ; 005b16d8
        ;   XREF to: 005b16cf (CONDITIONAL_JUMP)  ; LAB_005b16cf
    XOR EAX,EAX                         ; 005b16da
        ;   Label: LAB_005b16da
    POP EBP                             ; 005b16dc
    POP EDI                             ; 005b16dd
    POP ESI                             ; 005b16de
    POP EBX                             ; 005b16df
    RET                                 ; 005b16e0
    LEA EAX,[ESI + 0x1]                 ; 005b16e1
        ;   Label: LAB_005b16e1
    POP EBP                             ; 005b16e4
    POP EDI                             ; 005b16e5
    POP ESI                             ; 005b16e6
    POP EBX                             ; 005b16e7
    RET                                 ; 005b16e8
    INC EBX                             ; 005b16e9
        ;   Label: LAB_005b16e9
    MOV DH,byte ptr [ESI + 0x1]         ; 005b16ea
    INC ESI                             ; 005b16ed
    TEST DH,DH                          ; 005b16ee
    JNZ 0x005b162c                      ; 005b16f0
        ;   XREF to: 005b162c (CONDITIONAL_JUMP)  ; LAB_005b162c
    ADD EBP,0x4                         ; 005b16f6
        ;   Label: LAB_005b16f6
    MOV EBX,dword ptr [EBP]             ; 005b16f9
        ;   Label: LAB_005b16f9
    TEST EBX,EBX                        ; 005b16fc
    JNZ 0x005b161f                      ; 005b16fe
        ;   XREF to: 005b161f (CONDITIONAL_JUMP)  ; LAB_005b161f
    MOV EAX,[0x02d25924]                ; 005b1704 | DAT_02d25924
    SUB EAX,EBP                         ; 005b1709
    SAR EAX,0x2                         ; 005b170b
    POP EBP                             ; 005b170e
    POP EDI                             ; 005b170f
    POP ESI                             ; 005b1710
    POP EBX                             ; 005b1711
    RET                                 ; 005b1712

