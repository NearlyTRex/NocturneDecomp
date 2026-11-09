; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_trstream_cpp_FUN_005a14f0(int *param_1,byte *param_2,int *param_3)
;
; Local Variables:
; undefined        Stack[-0x91c]:1  local_91c
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined1       Stack[-0x11a]:1  local_11a
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_trstream.cpp_FUN_005a14c0 at 005a14da
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a14f0
        ;   Label: support_trstream.cpp_FUN_005a14f0
    PUSH ESI                            ; 005a14f1
    PUSH EDI                            ; 005a14f2
    PUSH EBP                            ; 005a14f3
    SUB ESP,0x90c                       ; 005a14f4
    MOV ESI,dword ptr [ESP + 0x924]     ; 005a14fa
    MOV EBX,dword ptr [ESP + 0x928]     ; 005a1501
    XOR EDX,EDX                         ; 005a1508
    MOV AH,byte ptr [ESI]               ; 005a150a
    MOV dword ptr [ESP + 0x900],EDX     ; 005a150c
    TEST AH,AH                          ; 005a1513
    JZ 0x005a15b5                       ; 005a1515
        ;   XREF to: 005a15b5 (CONDITIONAL_JUMP)  ; LAB_005a15b5
    LEA EAX,[ESP + 0x800]               ; 005a151b
    INC EAX                             ; 005a1522
    MOV dword ptr [ESP + 0x908],EAX     ; 005a1523
    MOV DH,byte ptr [ESI]               ; 005a152a
        ;   Label: LAB_005a152a
    LEA EBP,[ESI + 0x1]                 ; 005a152c
    CMP DH,0x25                         ; 005a152f
    JNZ 0x005a15c7                      ; 005a1532
        ;   XREF to: 005a15c7 (CONDITIONAL_JUMP)  ; LAB_005a15c7
    MOV byte ptr [ESP + 0x800],DH       ; 005a1538
    MOV CL,0x20                         ; 005a153f
    MOV EAX,dword ptr [EBX]             ; 005a1541
    MOV EDI,dword ptr [ESP + 0x908]     ; 005a1543
    MOV dword ptr [ESP + 0x904],EAX     ; 005a154a
    MOV ESI,EBP                         ; 005a1551
    MOV CH,byte ptr [EBP]               ; 005a1553
    XOR EDX,EDX                         ; 005a1556
    TEST CH,CH                          ; 005a1558
    JZ 0x005a1564                       ; 005a155a
        ;   XREF to: 005a1564 (CONDITIONAL_JUMP)  ; LAB_005a1564
    TEST EDX,EDX                        ; 005a155c
        ;   Label: LAB_005a155c
    JZ 0x005a168e                       ; 005a155e
        ;   XREF to: 005a168e (CONDITIONAL_JUMP)  ; LAB_005a168e
    LEA EAX,[ESP + 0x904]               ; 005a1564
        ;   Label: LAB_005a1564
    PUSH EAX                            ; 005a156b
    LEA EAX,[ESP + 0x804]               ; 005a156c
    PUSH EAX                            ; 005a1573
    LEA EAX,[ESP + 0x8]                 ; 005a1574
    PUSH EAX                            ; 005a1578
    MOV byte ptr [EDI],0x0              ; 005a1579
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 005a157c
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 005a1581
    PUSH EAX                            ; 005a1584
    LEA EAX,[ESP + 0x4]                 ; 005a1585
    MOV EDX,dword ptr [ESP + 0x924]     ; 005a1589
    PUSH EAX                            ; 005a1590
    MOV EAX,dword ptr [ESP + 0x928]     ; 005a1591
    MOV EDX,dword ptr [EDX]             ; 005a1598
    PUSH EAX                            ; 005a159a
    CALL dword ptr [EDX + 0x8]          ; 005a159b
    ADD ESP,0xc                         ; 005a159e
    TEST EAX,EAX                        ; 005a15a1
    JL 0x005a15bc                       ; 005a15a3
        ;   XREF to: 005a15bc (CONDITIONAL_JUMP)  ; LAB_005a15bc
    ADD dword ptr [ESP + 0x900],EAX     ; 005a15a5
    CMP byte ptr [ESI],0x0              ; 005a15ac
        ;   Label: LAB_005a15ac
    JNZ 0x005a152a                      ; 005a15af
        ;   XREF to: 005a152a (CONDITIONAL_JUMP)  ; LAB_005a152a
    MOV EAX,dword ptr [ESP + 0x900]     ; 005a15b5
        ;   Label: LAB_005a15b5
    ADD ESP,0x90c                       ; 005a15bc
        ;   Label: LAB_005a15bc
    POP EBP                             ; 005a15c2
    POP EDI                             ; 005a15c3
    POP ESI                             ; 005a15c4
    POP EBX                             ; 005a15c5
    RET                                 ; 005a15c6
    XOR EDX,EDX                         ; 005a15c7
        ;   Label: LAB_005a15c7
    MOV DL,byte ptr [ESI]               ; 005a15c9
    MOV EAX,dword ptr [ESP + 0x920]     ; 005a15cb
    PUSH EDX                            ; 005a15d2
    MOV ECX,dword ptr [ESP + 0x924]     ; 005a15d3
    MOV EAX,dword ptr [EAX]             ; 005a15da
    PUSH ECX                            ; 005a15dc
    CALL dword ptr [EAX + 0x4]          ; 005a15dd
    ADD ESP,0x8                         ; 005a15e0
    TEST EAX,EAX                        ; 005a15e3
    JNZ 0x005a15bc                      ; 005a15e5
        ;   XREF to: 005a15bc (CONDITIONAL_JUMP)  ; LAB_005a15bc
    MOV EDI,dword ptr [ESP + 0x900]     ; 005a15e7
    INC EDI                             ; 005a15ee
    MOV ESI,EBP                         ; 005a15ef
    MOV dword ptr [ESP + 0x900],EDI     ; 005a15f1
    JMP 0x005a15ac                      ; 005a15f8
        ;   XREF to: 005a15ac (UNCONDITIONAL_JUMP)  ; LAB_005a15ac
    MOV CL,byte ptr [ESI]               ; 005a15fa
        ;   Label: LAB_005a15fa
    CMP byte ptr [ESI],0x0              ; 005a15fc
    JNZ 0x005a155c                      ; 005a15ff
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a1605
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    CMP CL,0x6c                         ; 005a160a
        ;   Label: LAB_005a160a
    JNZ 0x005a1614                      ; 005a160d
        ;   XREF to: 005a1614 (CONDITIONAL_JUMP)  ; LAB_005a1614
    ADD dword ptr [EBX],0x4             ; 005a160f
    JMP 0x005a1661                      ; 005a1612
        ;   XREF to: 005a1661 (UNCONDITIONAL_JUMP)  ; LAB_005a1661
    CMP CL,0x4c                         ; 005a1614
        ;   Label: LAB_005a1614
    ADD dword ptr [EBX],0x4             ; 005a1617
    MOV EDX,0x1                         ; 005a161a
    CMP byte ptr [ESI],0x0              ; 005a161f
    JNZ 0x005a155c                      ; 005a1622
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a1628
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    MOV EBP,dword ptr [EBX]             ; 005a162d
        ;   Label: LAB_005a162d
    ADD EBP,0x4                         ; 005a162f
    MOV EDX,0x1                         ; 005a1632
    MOV dword ptr [EBX],EBP             ; 005a1637
    CMP byte ptr [ESI],0x0              ; 005a1639
    JNZ 0x005a155c                      ; 005a163c
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a1642
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    MOV EDX,dword ptr [EBX]             ; 005a1647
        ;   Label: LAB_005a1647
    ADD EDX,0x4                         ; 005a1649
    MOV dword ptr [EBX],EDX             ; 005a164c
    MOV EAX,dword ptr [EDX + -0x4]      ; 005a164e
    MOV EDX,dword ptr [ESP + 0x900]     ; 005a1651
    LEA EDI,[ESP + 0x800]               ; 005a1658
    MOV dword ptr [EAX],EDX             ; 005a165f
    MOV EDX,0x1                         ; 005a1661
        ;   Label: LAB_005a1661
    CMP byte ptr [ESI],0x0              ; 005a1666
        ;   Label: LAB_005a1666
    JNZ 0x005a155c                      ; 005a1669
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a166f
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    MOV EAX,dword ptr [EBX]             ; 005a1674
        ;   Label: LAB_005a1674
    ADD EAX,0x4                         ; 005a1676
    MOV EDX,0x1                         ; 005a1679
    MOV dword ptr [EBX],EAX             ; 005a167e
    CMP byte ptr [ESI],0x0              ; 005a1680
    JNZ 0x005a155c                      ; 005a1683
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a1689
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    XOR EAX,EAX                         ; 005a168e
        ;   Label: LAB_005a168e
    INC EDI                             ; 005a1690
    MOV AL,byte ptr [ESI]               ; 005a1691
    INC ESI                             ; 005a1693
    MOV byte ptr [EDI + -0x1],AL        ; 005a1694
    CMP EAX,0x64                        ; 005a1697
    JNC 0x005a16c1                      ; 005a169a
        ;   XREF to: 005a16c1 (CONDITIONAL_JUMP)  ; LAB_005a16c1
    CMP EAX,0x46                        ; 005a169c
    JNC 0x005a1752                      ; 005a169f
        ;   XREF to: 005a1752 (CONDITIONAL_JUMP)  ; LAB_005a1752
    CMP EAX,0x43                        ; 005a16a5
    JNC 0x005a17a1                      ; 005a16a8
        ;   XREF to: 005a17a1 (CONDITIONAL_JUMP)  ; LAB_005a17a1
    CMP EAX,0x25                        ; 005a16ae
    JZ 0x005a1661                       ; 005a16b1
        ;   XREF to: 005a1661 (CONDITIONAL_JUMP)  ; LAB_005a1661
    CMP byte ptr [ESI],0x0              ; 005a16b3
    JNZ 0x005a155c                      ; 005a16b6
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a16bc
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    JBE 0x005a160a                      ; 005a16c1
        ;   XREF to: 005a160a (CONDITIONAL_JUMP)  ; LAB_005a160a
        ;   Label: LAB_005a16c1
    CMP EAX,0x6e                        ; 005a16c7
    JNC 0x005a16fb                      ; 005a16ca
        ;   XREF to: 005a16fb (CONDITIONAL_JUMP)  ; LAB_005a16fb
    CMP EAX,0x67                        ; 005a16cc
    JC 0x005a17b0                       ; 005a16cf
        ;   XREF to: 005a17b0 (CONDITIONAL_JUMP)  ; LAB_005a17b0
    JBE 0x005a17b0                      ; 005a16d5
        ;   XREF to: 005a17b0 (CONDITIONAL_JUMP)  ; LAB_005a17b0
    CMP EAX,0x68                        ; 005a16db
    JBE 0x005a15fa                      ; 005a16de
        ;   XREF to: 005a15fa (CONDITIONAL_JUMP)  ; LAB_005a15fa
    CMP EAX,0x6c                        ; 005a16e4
    JZ 0x005a15fa                       ; 005a16e7
        ;   XREF to: 005a15fa (CONDITIONAL_JUMP)  ; LAB_005a15fa
    CMP byte ptr [ESI],0x0              ; 005a16ed
    JNZ 0x005a155c                      ; 005a16f0
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a16f6
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    JBE 0x005a1647                      ; 005a16fb
        ;   XREF to: 005a1647 (CONDITIONAL_JUMP)  ; LAB_005a1647
        ;   Label: LAB_005a16fb
    CMP EAX,0x73                        ; 005a1701
    JNC 0x005a1726                      ; 005a1704
        ;   XREF to: 005a1726 (CONDITIONAL_JUMP)  ; LAB_005a1726
    CMP EAX,0x6f                        ; 005a1706
    JBE 0x005a160a                      ; 005a1709
        ;   XREF to: 005a160a (CONDITIONAL_JUMP)  ; LAB_005a160a
    CMP EAX,0x70                        ; 005a170f
    JZ 0x005a1674                       ; 005a1712
        ;   XREF to: 005a1674 (CONDITIONAL_JUMP)  ; LAB_005a1674
    CMP byte ptr [ESI],0x0              ; 005a1718
    JNZ 0x005a155c                      ; 005a171b
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a1721
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    JBE 0x005a162d                      ; 005a1726
        ;   XREF to: 005a162d (CONDITIONAL_JUMP)  ; LAB_005a162d
        ;   Label: LAB_005a1726
    CMP EAX,0x75                        ; 005a172c
    JC 0x005a1666                       ; 005a172f
        ;   XREF to: 005a1666 (CONDITIONAL_JUMP)  ; LAB_005a1666
    JBE 0x005a160a                      ; 005a1735
        ;   XREF to: 005a160a (CONDITIONAL_JUMP)  ; LAB_005a160a
    CMP EAX,0x78                        ; 005a173b
    JZ 0x005a160a                       ; 005a173e
        ;   XREF to: 005a160a (CONDITIONAL_JUMP)  ; LAB_005a160a
    CMP byte ptr [ESI],0x0              ; 005a1744
    JNZ 0x005a155c                      ; 005a1747
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a174d
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    JBE 0x005a17b0                      ; 005a1752
        ;   XREF to: 005a17b0 (CONDITIONAL_JUMP)  ; LAB_005a17b0
        ;   Label: LAB_005a1752
    CMP EAX,0x4f                        ; 005a1754
    JNC 0x005a1775                      ; 005a1757
        ;   XREF to: 005a1775 (CONDITIONAL_JUMP)  ; LAB_005a1775
    CMP EAX,0x47                        ; 005a1759
    JBE 0x005a17b0                      ; 005a175c
        ;   XREF to: 005a17b0 (CONDITIONAL_JUMP)  ; LAB_005a17b0
    CMP EAX,0x4c                        ; 005a175e
    JZ 0x005a15fa                       ; 005a1761
        ;   XREF to: 005a15fa (CONDITIONAL_JUMP)  ; LAB_005a15fa
    CMP byte ptr [ESI],0x0              ; 005a1767
    JNZ 0x005a155c                      ; 005a176a
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a1770
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    JBE 0x005a160a                      ; 005a1775
        ;   XREF to: 005a160a (CONDITIONAL_JUMP)  ; LAB_005a160a
        ;   Label: LAB_005a1775
    CMP EAX,0x58                        ; 005a177b
    JC 0x005a1666                       ; 005a177e
        ;   XREF to: 005a1666 (CONDITIONAL_JUMP)  ; LAB_005a1666
    JBE 0x005a160a                      ; 005a1784
        ;   XREF to: 005a160a (CONDITIONAL_JUMP)  ; LAB_005a160a
    CMP EAX,0x63                        ; 005a178a
    JZ 0x005a162d                       ; 005a178d
        ;   XREF to: 005a162d (CONDITIONAL_JUMP)  ; LAB_005a162d
    CMP byte ptr [ESI],0x0              ; 005a1793
    JNZ 0x005a155c                      ; 005a1796
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a179c
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564
    JBE 0x005a162d                      ; 005a17a1
        ;   XREF to: 005a162d (CONDITIONAL_JUMP)  ; LAB_005a162d
        ;   Label: LAB_005a17a1
    CMP EAX,0x44                        ; 005a17a7
    JBE 0x005a160a                      ; 005a17aa
        ;   XREF to: 005a160a (CONDITIONAL_JUMP)  ; LAB_005a160a
    CMP CL,0x4c                         ; 005a17b0
        ;   Label: LAB_005a17b0
    ADD dword ptr [EBX],0x8             ; 005a17b3
    MOV EDX,0x1                         ; 005a17b6
    CMP byte ptr [ESI],0x0              ; 005a17bb
    JNZ 0x005a155c                      ; 005a17be
        ;   XREF to: 005a155c (CONDITIONAL_JUMP)  ; LAB_005a155c
    JMP 0x005a1564                      ; 005a17c4
        ;   XREF to: 005a1564 (UNCONDITIONAL_JUMP)  ; LAB_005a1564

