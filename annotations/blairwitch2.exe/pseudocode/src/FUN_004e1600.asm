; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1600(int *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[5]:
;   FUN_004fb490 at 004fb4c7
;   FUN_004fc350 at 004fc36e
;   FUN_004fce00 at 004fcec1
;   FUN_0052c0e0 at 0052c109
;   FUN_0052d980 at 0052d9a2
;
; Referenced Globals:
;   undefined4 DAT_005f945c
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01511cc0
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fc103c
;   undefined4 DAT_01fc1040
;   undefined4 DAT_01fc1044
;   undefined4 DAT_01fc1048
;   undefined4 DAT_01fc104c
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_004031c0
;   FUN_0046afb0
;   FUN_0046b030
;   FUN_0046b2b0
;   FUN_0046b4b0
;   FUN_0046b710
;   FUN_004a8df0
;   FUN_004aaf00
;   FUN_004e86b0
;   FUN_004e86f0
;   FUN_005344c0
;   FUN_0055d723
;   FUN_00589560
;   FUN_005b7ff0
;   thunk_FUN_004ea570
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e1600
        ;   Label: FUN_004e1600
    PUSH EBP                            ; 004e1601
    SUB ESP,0x5c                        ; 004e1602
    MOV ESI,dword ptr [ESP + 0x68]      ; 004e1605
    CMP dword ptr [ESI + 0xc],0x0       ; 004e1609
    JZ 0x004e1b47                       ; 004e160d
        ;   XREF to: 004e1b47 (CONDITIONAL_JUMP)  ; LAB_004e1b47
    CMP dword ptr [ESP + 0x70],0x0      ; 004e1613
    JNZ 0x004e1b4d                      ; 004e1618
        ;   XREF to: 004e1b4d (CONDITIONAL_JUMP)  ; LAB_004e1b4d
    PUSH EDI                            ; 004e161e
        ;   Label: LAB_004e161e
    PUSH EBX                            ; 004e161f
    FILD dword ptr [ESI + 0x4]          ; 004e1620
    FILD dword ptr [ESI]                ; 004e1623
    FDIVRP                              ; 004e1625
    PUSH 0x0                            ; 004e1627
    PUSH 0x14                           ; 004e1629
    MOV EBX,dword ptr [0x006141b8]      ; 004e162b | DAT_006141b8
    PUSH EBX                            ; 004e1631
    PUSH 0x0                            ; 004e1632
    PUSH 0x0                            ; 004e1634
    FSTP float ptr [ESP + 0x64]         ; 004e1636
    CALL FUN_004031c0                   ; 004e163a
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004e163f
    PUSH 0x0                            ; 004e1642
    MOV EAX,[0x006141b8]                ; 004e1644 | DAT_006141b8
    PUSH 0x13                           ; 004e1649
    DEC EAX                             ; 004e164b
    PUSH EAX                            ; 004e164c
    PUSH 0x1                            ; 004e164d
    PUSH 0x1                            ; 004e164f
    CALL FUN_004031c0                   ; 004e1651
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    MOV EAX,[0x006141b8]                ; 004e1656 | DAT_006141b8
    ADD ESP,0x14                        ; 004e165b
    SUB EAX,0x2                         ; 004e165e
    MOV dword ptr [ESP + 0x60],EAX      ; 004e1661
    PUSH 0x4                            ; 004e1665
    FILD dword ptr [ESP + 0x64]         ; 004e1667
    FMUL float ptr [ESP + 0x54]         ; 004e166b
    PUSH 0x12                           ; 004e166f
    CALL FUN_005b7ff0                   ; 004e1671
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x68]        ; 004e1676
    MOV EDI,dword ptr [ESP + 0x68]      ; 004e167a
    PUSH EDI                            ; 004e167e
    PUSH 0x2                            ; 004e167f
    PUSH 0x2                            ; 004e1681
    CALL FUN_004031c0                   ; 004e1683
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    MOV EBP,dword ptr [ESI + 0x110]     ; 004e1688
    ADD ESP,0x14                        ; 004e168e
    TEST EBP,EBP                        ; 004e1691
    JZ 0x004e16c0                       ; 004e1693
        ;   XREF to: 004e16c0 (CONDITIONAL_JUMP)  ; LAB_004e16c0
    MOV EAX,dword ptr [ESI + 0x120]     ; 004e1695
    PUSH EAX                            ; 004e169b
    MOV EDX,dword ptr [ESI + 0x11c]     ; 004e169c
    PUSH EDX                            ; 004e16a2
    MOV ECX,dword ptr [ESI + 0x118]     ; 004e16a3
    PUSH ECX                            ; 004e16a9
    MOV EBX,dword ptr [ESI + 0x114]     ; 004e16aa
    PUSH EBX                            ; 004e16b0
    MOV EDI,dword ptr [0x0060b280]      ; 004e16b1 | DAT_0060b280
    PUSH EDI                            ; 004e16b7 | DAT_01ba5c50
    CALL FUN_0046b710                   ; 004e16b8
        ;   XREF to: 0046b710 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b710()
    ADD ESP,0x14                        ; 004e16bd
    PUSH 0x265370c                      ; 004e16c0 | DAT_0265370c
        ;   Label: LAB_004e16c0
    MOV EBP,dword ptr [0x0060b280]      ; 004e16c5 | DAT_0060b280
    PUSH EBP                            ; 004e16cb | DAT_01ba5c50
    CALL FUN_0046afb0                   ; 004e16cc
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046afb0()
    MOV EAX,0x42600000                  ; 004e16d1
    ADD ESP,0x8                         ; 004e16d6
    MOV EDX,dword ptr [ESI + 0x110]     ; 004e16d9
    MOV dword ptr [ESP + 0x54],EAX      ; 004e16df
    TEST EDX,EDX                        ; 004e16e3
    JZ 0x004e16ef                       ; 004e16e5
        ;   XREF to: 004e16ef (CONDITIONAL_JUMP)  ; LAB_004e16ef
    MOV dword ptr [ESP + 0x54],0x42a80000 ; 004e16e7
    MOV EBX,dword ptr [0x0060b280]      ; 004e16ef | DAT_0060b280
        ;   Label: LAB_004e16ef
    PUSH dword ptr [ESP + 0x54]         ; 004e16f5
    PUSH EBX                            ; 004e16f9 | DAT_01ba5c50
    CALL FUN_0046b4b0                   ; 004e16fa
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b4b0()
    ADD ESP,0x8                         ; 004e16ff
    PUSH 0x265370c                      ; 004e1702 | DAT_0265370c
    MOV EDI,dword ptr [0x0060b280]      ; 004e1707 | DAT_0060b280
    PUSH EDI                            ; 004e170d | DAT_01ba5c50
    XOR EBP,EBP                         ; 004e170e
    CALL FUN_0046b030                   ; 004e1710
        ;   XREF to: 0046b030 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b030()
    ADD ESP,0x8                         ; 004e1715
    LEA EAX,[ESP + 0x2c]                ; 004e1718
    MOV EDX,0x42100000                  ; 004e171c
    PUSH EAX                            ; 004e1721
    MOV ECX,dword ptr [0x0060b280]      ; 004e1722 | DAT_0060b280
    MOV dword ptr [ESP + 0x30],EBP      ; 004e1728
    PUSH ECX                            ; 004e172c | DAT_01ba5c50
    MOV dword ptr [ESP + 0x38],EBP      ; 004e172d
    MOV dword ptr [ESP + 0x3c],EDX      ; 004e1731
    CALL FUN_0046b2b0                   ; 004e1735
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    MOV EAX,[0x0061b5a8]                ; 004e173a | DAT_0061b5a8
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004e173f | DAT_01fc103c
    MOV EDX,dword ptr [ESI]             ; 004e1749
    SHL EDX,0xf                         ; 004e174b
    MOV EBX,dword ptr [ESI + 0x4]       ; 004e174e
    MOV EAX,EDX                         ; 004e1751
    SAR EDX,0x1f                        ; 004e1753
    IDIV EBX                            ; 004e1756
    MOV EBX,0x8000                      ; 004e1758
    ADD ESP,0x8                         ; 004e175d
    SUB EBX,EAX                         ; 004e1760
    PUSH EBX                            ; 004e1762
    CALL FUN_004e86b0                   ; 004e1763
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86b0()
    ADD ESP,0x4                         ; 004e1768
    MOV EDX,EAX                         ; 004e176b
    MOV EAX,0x9088                      ; 004e176d
    IMUL EDX                            ; 004e1772
    SHRD EAX,EDX,0x10                   ; 004e1774
    MOV EDX,dword ptr [0x0061b5a8]      ; 004e1778 | DAT_0061b5a8
    MOV dword ptr [EDX + 0x15ae8c],0xffff6f78 ; 004e177e | DAT_01fc1044
    PUSH EBX                            ; 004e1788
    MOV dword ptr [EDX + 0x15ae88],EAX  ; 004e1789 | DAT_01fc1040
    CALL FUN_004e86f0                   ; 004e178f
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86f0()
    ADD ESP,0x4                         ; 004e1794
    MOV EDX,EAX                         ; 004e1797
    MOV EAX,0x9088                      ; 004e1799
    IMUL EDX                            ; 004e179e
    SHRD EAX,EDX,0x10                   ; 004e17a0
    MOV EDX,EAX                         ; 004e17a4
    MOV EAX,[0x0061b5a8]                ; 004e17a6 | DAT_0061b5a8
    MOV dword ptr [EAX + 0x15ae94],0x280 ; 004e17ab | DAT_01fc104c
    MOV dword ptr [EAX + 0x15ae90],EDX  ; 004e17b5 | DAT_01fc1048
    MOV EDX,dword ptr [ESI + 0x12c]     ; 004e17bb
    SHL EDX,0x8                         ; 004e17c1
    PUSH EDX                            ; 004e17c4
    MOV EDX,dword ptr [ESI + 0x128]     ; 004e17c5
    SHL EDX,0x8                         ; 004e17cb
    PUSH EDX                            ; 004e17ce
    MOV EDX,dword ptr [ESI + 0x124]     ; 004e17cf
    SHL EDX,0x8                         ; 004e17d5
    PUSH EDX                            ; 004e17d8
    PUSH EAX                            ; 004e17d9 | DAT_01e661b8
    CALL FUN_005344c0                   ; 004e17da
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005344c0()
    ADD ESP,0x10                        ; 004e17df
    MOV EDI,0x40e80000                  ; 004e17e2
    LEA EBX,[ESP + 0x14]                ; 004e17e7
    LEA EAX,[ESP + 0x44]                ; 004e17eb
    MOV EDX,dword ptr [0x0060b280]      ; 004e17ef | DAT_0060b280
    MOV dword ptr [ESP + 0x4c],EBP      ; 004e17f5
    MOV dword ptr [ESP + 0x44],EDI      ; 004e17f9
    MOV dword ptr [ESP + 0x48],EDI      ; 004e17fd
    FLD float ptr [EAX]                 ; 004e1801
    FMUL float ptr [0x005f945c]         ; 004e1803 | DAT_005f945c
    FISTP dword ptr [EBX]               ; 004e1809
    FLD float ptr [EAX + 0x4]           ; 004e180b
    FMUL float ptr [0x005f945c]         ; 004e180e | DAT_005f945c
    FISTP dword ptr [EBX + 0x4]         ; 004e1814
    FLD float ptr [EAX + 0x8]           ; 004e1817
    FMUL float ptr [0x005f945c]         ; 004e181a | DAT_005f945c
    FISTP dword ptr [EBX + 0x8]         ; 004e1820
    LEA EAX,[ESP + 0x14]                ; 004e1823
    PUSH EAX                            ; 004e1827
    MOV EAX,dword ptr [EDX]             ; 004e1828 | DAT_01ba5c50
    PUSH EAX                            ; 004e182a
    CALL FUN_0055d723                   ; 004e182b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 004e1830
    MOV AH,byte ptr [ESP + 0x47]        ; 004e1833
    XOR AH,0x80                         ; 004e1837
    LEA EBX,[ESP + 0x8]                 ; 004e183a
    MOV byte ptr [ESP + 0x47],AH        ; 004e183e
    LEA EAX,[ESP + 0x44]                ; 004e1842
    MOV EDX,dword ptr [0x0060b280]      ; 004e1846 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004e184c
    FMUL float ptr [0x005f945c]         ; 004e184e | DAT_005f945c
    FISTP dword ptr [EBX]               ; 004e1854
    FLD float ptr [EAX + 0x4]           ; 004e1856
    FMUL float ptr [0x005f945c]         ; 004e1859 | DAT_005f945c
    FISTP dword ptr [EBX + 0x4]         ; 004e185f
    FLD float ptr [EAX + 0x8]           ; 004e1862
    FMUL float ptr [0x005f945c]         ; 004e1865 | DAT_005f945c
    FISTP dword ptr [EBX + 0x8]         ; 004e186b
    LEA EAX,[ESP + 0x8]                 ; 004e186e
    PUSH EAX                            ; 004e1872
    MOV EAX,dword ptr [EDX]             ; 004e1873 | DAT_01ba5c50
    ADD EAX,0x30                        ; 004e1875
    PUSH EAX                            ; 004e1878
    CALL FUN_0055d723                   ; 004e1879
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 004e187e
    MOV DL,byte ptr [ESP + 0x4b]        ; 004e1881
    LEA EBX,[ESP + 0x38]                ; 004e1885
    XOR DL,0x80                         ; 004e1889
    LEA EAX,[ESP + 0x44]                ; 004e188c
    MOV byte ptr [ESP + 0x4b],DL        ; 004e1890
    MOV EDX,dword ptr [0x0060b280]      ; 004e1894 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004e189a
    FMUL float ptr [0x005f945c]         ; 004e189c | DAT_005f945c
    FISTP dword ptr [EBX]               ; 004e18a2
    FLD float ptr [EAX + 0x4]           ; 004e18a4
    FMUL float ptr [0x005f945c]         ; 004e18a7 | DAT_005f945c
    FISTP dword ptr [EBX + 0x4]         ; 004e18ad
    FLD float ptr [EAX + 0x8]           ; 004e18b0
    FMUL float ptr [0x005f945c]         ; 004e18b3 | DAT_005f945c
    FISTP dword ptr [EBX + 0x8]         ; 004e18b9
    LEA EAX,[ESP + 0x38]                ; 004e18bc
    PUSH EAX                            ; 004e18c0
    MOV EAX,dword ptr [EDX]             ; 004e18c1 | DAT_01ba5c50
    ADD EAX,0x60                        ; 004e18c3
    PUSH EAX                            ; 004e18c6
    CALL FUN_0055d723                   ; 004e18c7
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 004e18cc
    MOV DH,byte ptr [ESP + 0x47]        ; 004e18cf
    LEA EBX,[ESP + 0x20]                ; 004e18d3
    XOR DH,0x80                         ; 004e18d7
    LEA EAX,[ESP + 0x44]                ; 004e18da
    MOV byte ptr [ESP + 0x47],DH        ; 004e18de
    MOV EDX,dword ptr [0x0060b280]      ; 004e18e2 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004e18e8
    FMUL float ptr [0x005f945c]         ; 004e18ea | DAT_005f945c
    FISTP dword ptr [EBX]               ; 004e18f0
    FLD float ptr [EAX + 0x4]           ; 004e18f2
    FMUL float ptr [0x005f945c]         ; 004e18f5 | DAT_005f945c
    FISTP dword ptr [EBX + 0x4]         ; 004e18fb
    FLD float ptr [EAX + 0x8]           ; 004e18fe
    FMUL float ptr [0x005f945c]         ; 004e1901 | DAT_005f945c
    FISTP dword ptr [EBX + 0x8]         ; 004e1907
    LEA EAX,[ESP + 0x20]                ; 004e190a
    PUSH EAX                            ; 004e190e
    MOV EAX,dword ptr [EDX]             ; 004e190f | DAT_01ba5c50
    ADD EAX,0x90                        ; 004e1911
    PUSH EAX                            ; 004e1916
    CALL FUN_0055d723                   ; 004e1917
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV EAX,[0x0060b280]                ; 004e191c | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 004e1921 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x1000000 ; 004e1923
    MOV EDX,dword ptr [EAX]             ; 004e192a | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],EBP      ; 004e192c
    MOV EDX,dword ptr [EAX]             ; 004e192f | DAT_01ba5c50
    MOV dword ptr [EDX + 0x48],EBP      ; 004e1931
    MOV EDX,dword ptr [EAX]             ; 004e1934 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],EBP      ; 004e1936
    MOV EDX,dword ptr [EAX]             ; 004e1939 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],EBP      ; 004e193b
    MOV EDX,dword ptr [EAX]             ; 004e193e | DAT_01ba5c50
    MOV dword ptr [EDX + 0x7c],0x1000000 ; 004e1940
    MOV EDX,dword ptr [EAX]             ; 004e1947 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xa8],0x1000000 ; 004e1949
    MOV EAX,dword ptr [EAX]             ; 004e1953 | DAT_01ba5c50
    MOV dword ptr [EAX + 0xac],0x1000000 ; 004e1955
    MOV EDX,dword ptr [ESI]             ; 004e195f
    MOV EAX,EDX                         ; 004e1961
    SHL EAX,0x8                         ; 004e1963
    ADD EAX,EDX                         ; 004e1966
    MOV EDX,EAX                         ; 004e1968
    SHL EAX,0x8                         ; 004e196a
    SUB EAX,EDX                         ; 004e196d
    MOV EDX,EAX                         ; 004e196f
    MOV ECX,dword ptr [ESI + 0x4]       ; 004e1971
    SAR EDX,0x1f                        ; 004e1974
    IDIV ECX                            ; 004e1977
    ADD ESP,0x8                         ; 004e1979
    MOV EDX,EAX                         ; 004e197c
    CMP EAX,0xffff                      ; 004e197e
    JG 0x004e1b6e                       ; 004e1983
        ;   XREF to: 004e1b6e (CONDITIONAL_JUMP)  ; LAB_004e1b6e
    MOV EAX,[0x0060b280]                ; 004e1989 | DAT_0060b280
        ;   Label: LAB_004e1989
    MOV ECX,dword ptr [EAX]             ; 004e198e | DAT_01ba5c50
    MOV dword ptr [ECX + 0x2c],0x0      ; 004e1990
    MOV ECX,dword ptr [EAX]             ; 004e1997 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x5c],EDX      ; 004e1999
    MOV EDX,dword ptr [EAX]             ; 004e199c | DAT_01ba5c50
    MOV dword ptr [EDX + 0x8c],0x0      ; 004e199e
    MOV EAX,dword ptr [EAX]             ; 004e19a8 | DAT_01ba5c50
    MOV dword ptr [EAX + 0xbc],0x0      ; 004e19aa
    XOR EAX,EAX                         ; 004e19b4
    MOV EDX,dword ptr [0x0060b280]      ; 004e19b6 | DAT_0060b280
        ;   Label: LAB_004e19b6
    MOV EBX,dword ptr [ESI + 0x124]     ; 004e19bc
    MOV ECX,dword ptr [EDX]             ; 004e19c2 | DAT_01ba5c50
    SHL EBX,0x8                         ; 004e19c4
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 004e19c7
    MOV ECX,dword ptr [ESI + 0x128]     ; 004e19cb
    MOV EBX,dword ptr [EDX]             ; 004e19d1 | DAT_01ba5c50
    SHL ECX,0x8                         ; 004e19d3
    MOV dword ptr [EBX + EAX*0x1 + 0x24],ECX ; 004e19d6
    ADD EAX,0x30                        ; 004e19da
    MOV EBX,dword ptr [ESI + 0x12c]     ; 004e19dd
    MOV ECX,dword ptr [EDX]             ; 004e19e3 | DAT_01ba5c50
    SHL EBX,0x8                         ; 004e19e5
    MOV dword ptr [ECX + EAX*0x1 + -0x8],EBX ; 004e19e8
    CMP EAX,0xc0                        ; 004e19ec
    JNZ 0x004e19b6                      ; 004e19f1
        ;   XREF to: 004e19b6 (CONDITIONAL_JUMP)  ; LAB_004e19b6
    CMP dword ptr [ESI + 0x110],0x0     ; 004e19f3
    JZ 0x004e1a05                       ; 004e19fa
        ;   XREF to: 004e1a05 (CONDITIONAL_JUMP)  ; LAB_004e1a05
    PUSH EDX                            ; 004e19fc | DAT_01ba5c50
    CALL thunk_FUN_004ea570             ; 004e19fd
        ;   XREF to: 0046b740 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004ea570()
    ADD ESP,0x4                         ; 004e1a02
    MOV EAX,[0x0061b5a8]                ; 004e1a05 | DAT_0061b5a8
        ;   Label: LAB_004e1a05
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004e1a0a | DAT_01fc103c
    MOV EAX,[0x01511cc0]                ; 004e1a14 | DAT_01511cc0
    MOV EDX,dword ptr [0x006141b8]      ; 004e1a19 | DAT_006141b8
    MOV dword ptr [ESP + 0x58],EAX      ; 004e1a1f
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e1a23
    ADD EDX,EAX                         ; 004e1a2a
    SHL EDX,0x6                         ; 004e1a2c
    MOV ECX,0x280                       ; 004e1a2f
    MOV EAX,EDX                         ; 004e1a34
    SAR EDX,0x1f                        ; 004e1a36
    IDIV ECX                            ; 004e1a39
    MOV EDX,dword ptr [0x006141bc]      ; 004e1a3b | DAT_006141bc
    MOV EDI,EAX                         ; 004e1a41
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e1a43
    SUB EAX,EDX                         ; 004e1a4a
    LEA EDX,[EAX*0x8 + 0x0]             ; 004e1a4c
    MOV ECX,0x1e0                       ; 004e1a53
    MOV EAX,EDX                         ; 004e1a58
    SAR EDX,0x1f                        ; 004e1a5a
    IDIV ECX                            ; 004e1a5d
    MOV EDX,dword ptr [0x006141b8]      ; 004e1a5f | DAT_006141b8
    MOV ECX,0x280                       ; 004e1a65
    SHL EDX,0x5                         ; 004e1a6a
    MOV EBX,EAX                         ; 004e1a6d
    MOV EAX,EDX                         ; 004e1a6f
    SAR EDX,0x1f                        ; 004e1a71
    IDIV ECX                            ; 004e1a74
    MOV EBP,EAX                         ; 004e1a76
    MOV EAX,[0x006141bc]                ; 004e1a78 | DAT_006141bc
    SHL EAX,0x6                         ; 004e1a7d
    MOV EDX,EAX                         ; 004e1a80
    SHL EAX,0x3                         ; 004e1a82
    SUB EAX,EDX                         ; 004e1a85
    MOV EDX,EAX                         ; 004e1a87
    MOV ECX,0x1e0                       ; 004e1a89
    SAR EDX,0x1f                        ; 004e1a8e
    IDIV ECX                            ; 004e1a91
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e1a93
    MOV EAX,dword ptr [ESI]             ; 004e1a97
    INC EAX                             ; 004e1a99
    MOV EDX,dword ptr [ESI + 0x4]       ; 004e1a9a
    MOV dword ptr [ESI],EAX             ; 004e1a9d
    CMP EAX,EDX                         ; 004e1a9f
    JLE 0x004e1aa5                      ; 004e1aa1
        ;   XREF to: 004e1aa5 (CONDITIONAL_JUMP)  ; LAB_004e1aa5
    MOV dword ptr [ESI],EDX             ; 004e1aa3
    MOV ECX,dword ptr [ESI + 0x110]     ; 004e1aa5
        ;   Label: LAB_004e1aa5
    TEST ECX,ECX                        ; 004e1aab
    JNZ 0x004e1b40                      ; 004e1aad
        ;   XREF to: 004e1b40 (CONDITIONAL_JUMP)  ; LAB_004e1b40
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004e1ab3
    ADD EAX,EBX                         ; 004e1ab7
    PUSH ECX                            ; 004e1ab9
    INC EAX                             ; 004e1aba
    PUSH EAX                            ; 004e1abb
    LEA EAX,[EDI + EBP*0x1 + 0x1]       ; 004e1abc
    PUSH EAX                            ; 004e1ac0
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e1ac1
    DEC EAX                             ; 004e1ac5
    PUSH EAX                            ; 004e1ac6
    LEA EAX,[EBP + -0x1]                ; 004e1ac7
    PUSH EAX                            ; 004e1aca
    CALL FUN_004031c0                   ; 004e1acb
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004e1ad0
    MOV ESI,dword ptr [ESP + 0x74]      ; 004e1ad3
    TEST ESI,ESI                        ; 004e1ad7
    JZ 0x004e1b40                       ; 004e1ad9
        ;   XREF to: 004e1b40 (CONDITIONAL_JUMP)  ; LAB_004e1b40
    MOV EDX,EDI                         ; 004e1adb
    MOV EAX,EDI                         ; 004e1add
    SAR EDX,0x1f                        ; 004e1adf
    SUB EAX,EDX                         ; 004e1ae2
    SAR EAX,0x1                         ; 004e1ae4
    PUSH ESI                            ; 004e1ae6
    ADD EBP,EAX                         ; 004e1ae7
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004e1ae9
    PUSH EAX                            ; 004e1aed
    CALL FUN_004aaf00                   ; 004e1aee
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    MOV EDX,EAX                         ; 004e1af3
    SAR EDX,0x1f                        ; 004e1af5
    SUB EAX,EDX                         ; 004e1af8
    SAR EAX,0x1                         ; 004e1afa
    MOV ECX,EBP                         ; 004e1afc
    MOV EDX,EBX                         ; 004e1afe
    SUB ECX,EAX                         ; 004e1b00
    MOV EAX,EBX                         ; 004e1b02
    SAR EDX,0x1f                        ; 004e1b04
    SUB EAX,EDX                         ; 004e1b07
    SAR EAX,0x1                         ; 004e1b09
    ADD ESP,0x8                         ; 004e1b0b
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e1b0e
    MOV EBX,dword ptr [ESP + 0x5c]      ; 004e1b12
    MOV EDX,dword ptr [EDX + 0x41ec]    ; 004e1b16
    ADD EBX,EAX                         ; 004e1b1c
    MOV EAX,EDX                         ; 004e1b1e
    SAR EDX,0x1f                        ; 004e1b20
    SUB EAX,EDX                         ; 004e1b23
    SAR EAX,0x1                         ; 004e1b25
    PUSH -0x1                           ; 004e1b27
    PUSH 0xf8                           ; 004e1b29
    SUB EBX,EAX                         ; 004e1b2e
    PUSH EBX                            ; 004e1b30
    PUSH ECX                            ; 004e1b31
    PUSH ESI                            ; 004e1b32
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004e1b33
    PUSH ECX                            ; 004e1b37
    CALL FUN_004a8df0                   ; 004e1b38
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8df0()
    ADD ESP,0x18                        ; 004e1b3d
    CALL FUN_00589560                   ; 004e1b40
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
        ;   Label: LAB_004e1b40
    POP EBX                             ; 004e1b45
    POP EDI                             ; 004e1b46
    ADD ESP,0x5c                        ; 004e1b47
        ;   Label: LAB_004e1b47
    POP EBP                             ; 004e1b4a
    POP ESI                             ; 004e1b4b
    RET                                 ; 004e1b4c
    MOV EAX,[0x006141bc]                ; 004e1b4d | DAT_006141bc
        ;   Label: LAB_004e1b4d
    PUSH 0x0                            ; 004e1b52
    DEC EAX                             ; 004e1b54
    PUSH EAX                            ; 004e1b55
    MOV EAX,[0x006141b8]                ; 004e1b56 | DAT_006141b8
    DEC EAX                             ; 004e1b5b
    PUSH EAX                            ; 004e1b5c
    PUSH 0x0                            ; 004e1b5d
    PUSH 0x0                            ; 004e1b5f
    CALL FUN_004031c0                   ; 004e1b61
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004e1b66
    JMP 0x004e161e                      ; 004e1b69
        ;   XREF to: 004e161e (UNCONDITIONAL_JUMP)  ; LAB_004e161e
    MOV EDX,0xffff                      ; 004e1b6e
        ;   Label: LAB_004e1b6e
    JMP 0x004e1989                      ; 004e1b73
        ;   XREF to: 004e1989 (UNCONDITIONAL_JUMP)  ; LAB_004e1989

