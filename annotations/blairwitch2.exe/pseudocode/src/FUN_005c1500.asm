; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005c1500(int param_1,uint param_2,int param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005ba300 at 005ba31f
;   FUN_005c43e0 at 005c44f3
;
; Referenced Globals:
;   undefined4 DAT_006013f4
;   undefined4 DAT_0060140e
;
; Called Functions:
;   FUN_005c1690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1500
        ;   Label: FUN_005c1500
    PUSH ESI                            ; 005c1501
    PUSH EDI                            ; 005c1502
    PUSH EBP                            ; 005c1503
    SUB ESP,0x4                         ; 005c1504
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c1507
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c150b
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c150f
    MOV EDI,dword ptr [ESP + 0x24]      ; 005c1513
    CMP EBX,0xa8c0                      ; 005c1517
    JNC 0x005c153b                      ; 005c151d
        ;   XREF to: 005c153b (CONDITIONAL_JUMP)  ; LAB_005c153b
    TEST EAX,EAX                        ; 005c151f
    JLE 0x005c153b                      ; 005c1521
        ;   XREF to: 005c153b (CONDITIONAL_JUMP)  ; LAB_005c153b
    ADD EBX,0x15180                     ; 005c1523
    MOV ESI,0x15180                     ; 005c1529
    SUB EBX,EAX                         ; 005c152e
    XOR EDX,EDX                         ; 005c1530
    MOV EAX,EBX                         ; 005c1532
    DIV ESI                             ; 005c1534
    ADD EBP,EAX                         ; 005c1536
    DEC EBP                             ; 005c1538
    JMP 0x005c154a                      ; 005c1539
        ;   XREF to: 005c154a (UNCONDITIONAL_JUMP)  ; LAB_005c154a
    MOV ESI,0x15180                     ; 005c153b
        ;   Label: LAB_005c153b
    SUB EBX,EAX                         ; 005c1540
    XOR EDX,EDX                         ; 005c1542
    MOV EAX,EBX                         ; 005c1544
    DIV ESI                             ; 005c1546
    ADD EBP,EAX                         ; 005c1548
    MOV ESI,0x15180                     ; 005c154a
        ;   Label: LAB_005c154a
    MOV EAX,EBX                         ; 005c154f
    XOR EDX,EDX                         ; 005c1551
    DIV ESI                             ; 005c1553
    MOV EBX,EDX                         ; 005c1555
    MOV ESI,0xe10                       ; 005c1557
    MOV EAX,EBX                         ; 005c155c
    XOR EDX,EDX                         ; 005c155e
    DIV ESI                             ; 005c1560
    XOR EDX,EDX                         ; 005c1562
    MOV dword ptr [EDI + 0x8],EAX       ; 005c1564
    MOV EAX,EBX                         ; 005c1567
    DIV ESI                             ; 005c1569
    MOV EBX,EDX                         ; 005c156b
    MOV ESI,0x3c                        ; 005c156d
    MOV EAX,EBX                         ; 005c1572
    XOR EDX,EDX                         ; 005c1574
    DIV ESI                             ; 005c1576
    XOR EDX,EDX                         ; 005c1578
    MOV dword ptr [EDI + 0x4],EAX       ; 005c157a
    MOV EAX,EBX                         ; 005c157d
    DIV ESI                             ; 005c157f
    MOV EBX,0x16e                       ; 005c1581
    MOV EAX,EBP                         ; 005c1586
    MOV dword ptr [EDI],EDX             ; 005c1588
    XOR EDX,EDX                         ; 005c158a
    DIV EBX                             ; 005c158c
    MOV ESI,EAX                         ; 005c158e
    SHL EAX,0x3                         ; 005c1590
    ADD EAX,ESI                         ; 005c1593
    SHL EAX,0x3                         ; 005c1595
    ADD EAX,ESI                         ; 005c1598
    MOV EBX,EAX                         ; 005c159a
    SHL EAX,0x2                         ; 005c159c
    ADD EAX,EBX                         ; 005c159f
    MOV EBX,EBP                         ; 005c15a1
    SUB EBX,EAX                         ; 005c15a3
    TEST ESI,ESI                        ; 005c15a5
    JBE 0x005c15b1                      ; 005c15a7
        ;   XREF to: 005c15b1 (CONDITIONAL_JUMP)  ; LAB_005c15b1
    LEA EAX,[ESI + -0x1]                ; 005c15a9
    SHR EAX,0x2                         ; 005c15ac
    SUB EBX,EAX                         ; 005c15af
    LEA EAX,[ESI + 0x76c]               ; 005c15b1
        ;   Label: LAB_005c15b1
    PUSH EAX                            ; 005c15b7
    CALL FUN_005c1690                   ; 005c15b8
        ;   XREF to: 005c1690 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1690()
    ADD EAX,0x16d                       ; 005c15bd
    ADD ESP,0x4                         ; 005c15c2
    CMP EBX,EAX                         ; 005c15c5
    JC 0x005c15d0                       ; 005c15c7
        ;   XREF to: 005c15d0 (CONDITIONAL_JUMP)  ; LAB_005c15d0
    SUB EBX,EAX                         ; 005c15c9
        ;   Label: LAB_005c15c9
    INC ESI                             ; 005c15cb
    CMP EBX,EAX                         ; 005c15cc
    JNC 0x005c15c9                      ; 005c15ce
        ;   XREF to: 005c15c9 (CONDITIONAL_JUMP)  ; LAB_005c15c9
    MOV dword ptr [EDI + 0x14],ESI      ; 005c15d0
        ;   Label: LAB_005c15d0
    ADD ESI,0x76c                       ; 005c15d3
    MOV EDX,0x6013f4                    ; 005c15d9 | DAT_006013f4
    PUSH ESI                            ; 005c15de
    MOV dword ptr [EDI + 0x1c],EBX      ; 005c15df
    MOV dword ptr [ESP + 0x4],EDX       ; 005c15e2 | DAT_006013f4
    CALL FUN_005c1690                   ; 005c15e6
        ;   XREF to: 005c1690 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1690()
    ADD ESP,0x4                         ; 005c15eb
    TEST EAX,EAX                        ; 005c15ee
    JZ 0x005c15f9                       ; 005c15f0
        ;   XREF to: 005c15f9 (CONDITIONAL_JUMP)  ; LAB_005c15f9
    MOV dword ptr [ESP],0x60140e        ; 005c15f2 | DAT_0060140e
    MOV ESI,0x1f                        ; 005c15f9
        ;   Label: LAB_005c15f9
    MOV EAX,EBX                         ; 005c15fe
    XOR EDX,EDX                         ; 005c1600
    DIV ESI                             ; 005c1602
    MOV EDX,dword ptr [ESP]             ; 005c1604
    LEA ESI,[EAX*0x2 + 0x0]             ; 005c1607
    ADD ESI,EDX                         ; 005c160e
    MOV ESI,dword ptr [ESI]             ; 005c1610 | DAT_0060140e | DAT_006013f4
    SAR ESI,0x10                        ; 005c1612
    CMP EBX,ESI                         ; 005c1615
    JC 0x005c161a                       ; 005c1617
        ;   XREF to: 005c161a (CONDITIONAL_JUMP)  ; LAB_005c161a
    INC EAX                             ; 005c1619
    MOV ECX,dword ptr [ESP]             ; 005c161a
        ;   Label: LAB_005c161a
    MOV dword ptr [EDI + 0x10],EAX      ; 005c161d
    ADD EAX,EAX                         ; 005c1620
    ADD EAX,ECX                         ; 005c1622
    MOVSX EAX,word ptr [EAX]            ; 005c1624 | DAT_0060140e | DAT_006013f4
    SUB EBX,EAX                         ; 005c1627
    XOR EDX,EDX                         ; 005c1629
    INC EBX                             ; 005c162b
    LEA EAX,[EBP + 0x1]                 ; 005c162c
    MOV dword ptr [EDI + 0xc],EBX       ; 005c162f
    MOV EBX,0x7                         ; 005c1632
    DIV EBX                             ; 005c1637
    MOV EAX,EDI                         ; 005c1639
    MOV dword ptr [EDI + 0x18],EDX      ; 005c163b
    ADD ESP,0x4                         ; 005c163e
    POP EBP                             ; 005c1641
    POP EDI                             ; 005c1642
    POP ESI                             ; 005c1643
    POP EBX                             ; 005c1644
    RET                                 ; 005c1645

