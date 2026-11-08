; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a1760(void)
;
;
; XREF[1]:
;   FUN_004bf4b0 at 004bf771
;
; Referenced Globals:
;   undefined4 DAT_01c74ea0
;   undefined4 DAT_01c74ecc
;   undefined4 DAT_01c8aea0
;   undefined4 DAT_01c8eea8
;   undefined4 DAT_01c8f108
;   undefined4 DAT_01c8f368
;   undefined4 DAT_01cb4ed8
;   undefined4 DAT_01cb4ef0
;   undefined4 DAT_01cb4f2c
;   undefined4 DAT_01cb4f44
;   undefined4 DAT_01cba2dc
;   undefined4 DAT_01cba2f4
;   undefined4 DAT_01cba338
;   undefined4 DAT_01cba350
;   undefined4 DAT_01cbb9bc
;   ... and 32 more
;
; Called Functions:
;   FUN_00496e00
;   FUN_00497540
;   FUN_00497e80
;   FUN_0049a450
;   FUN_0049ad00
;   FUN_0049c620
;   FUN_0049c890
;   FUN_0049d090
;   FUN_0049d8b0
;   FUN_0049de60
;   FUN_0049e390
;   FUN_0049f4e0
;   FUN_0049fdf0
;   FUN_004a0570
;   FUN_004a0630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1760
        ;   Label: FUN_004a1760
    PUSH ESI                            ; 004a1761
    PUSH EDI                            ; 004a1762
    PUSH EBP                            ; 004a1763
    MOV EBP,ESP                         ; 004a1764
    AND ESP,0xfffffff8                  ; 004a1766
    XOR EDX,EDX                         ; 004a1769
    MOV EBX,0x1c74ea0                   ; 004a176b
    MOV dword ptr [0x01cf5088],EDX      ; 004a1770 | DAT_01cf5088
    CALL FUN_0049c620                   ; 004a1776
        ;   XREF to: 0049c620 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c620()
    LEA ESI,[EBX + 0x16000]             ; 004a177b
    MOV EAX,dword ptr [EBX]             ; 004a1781 | DAT_01c74ea0 | DAT_01c74ecc
        ;   Label: LAB_004a1781
    TEST EAX,EAX                        ; 004a1783
    JNZ 0x004a1ab7                      ; 004a1785
        ;   XREF to: 004a1ab7 (CONDITIONAL_JUMP)  ; LAB_004a1ab7
    ADD EBX,0x2c                        ; 004a178b
        ;   Label: LAB_004a178b
    CMP EBX,ESI                         ; 004a178e
    JNZ 0x004a1781                      ; 004a1790
        ;   XREF to: 004a1781 (CONDITIONAL_JUMP)  ; LAB_004a1781
    MOV EBX,0x1cb4eb4                   ; 004a1792
    LEA ESI,[EBX + 0x5400]              ; 004a1797
    FLD float ptr [EBX + 0x24]          ; 004a179d | DAT_01cb4ed8 | DAT_01cb4f2c
        ;   Label: LAB_004a179d
    FLDZ                                ; 004a17a0
    FCOMPP                              ; 004a17a2
    FNSTSW AX                           ; 004a17a4
    SAHF                                ; 004a17a6
    JNC 0x004a17b3                      ; 004a17a7
        ;   XREF to: 004a17b3 (CONDITIONAL_JUMP)  ; LAB_004a17b3
    PUSH EBX                            ; 004a17a9
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a17aa | DAT_01cb4ef0 | DAT_01cb4f44
    CALL dword ptr [EAX + 0x4]          ; 004a17ad
    ADD ESP,0x4                         ; 004a17b0
    ADD EBX,0x54                        ; 004a17b3
        ;   Label: LAB_004a17b3
    CMP EBX,ESI                         ; 004a17b6
    JNZ 0x004a179d                      ; 004a17b8
        ;   XREF to: 004a179d (CONDITIONAL_JUMP)  ; LAB_004a179d
    MOV EBX,0x1cba2b8                   ; 004a17ba
    LEA ESI,[EBX + 0x1700]              ; 004a17bf
    FLD float ptr [EBX + 0x24]          ; 004a17c5 | DAT_01cba2dc | DAT_01cba338
        ;   Label: LAB_004a17c5
    FLDZ                                ; 004a17c8
    FCOMPP                              ; 004a17ca
    FNSTSW AX                           ; 004a17cc
    SAHF                                ; 004a17ce
    JNC 0x004a17db                      ; 004a17cf
        ;   XREF to: 004a17db (CONDITIONAL_JUMP)  ; LAB_004a17db
    PUSH EBX                            ; 004a17d1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a17d2 | DAT_01cba2f4 | DAT_01cba350
    CALL dword ptr [EAX + 0x4]          ; 004a17d5
    ADD ESP,0x4                         ; 004a17d8
    ADD EBX,0x5c                        ; 004a17db
        ;   Label: LAB_004a17db
    CMP EBX,ESI                         ; 004a17de
    JNZ 0x004a17c5                      ; 004a17e0
        ;   XREF to: 004a17c5 (CONDITIONAL_JUMP)  ; LAB_004a17c5
    MOV EBX,0x1cbb9bc                   ; 004a17e2
    LEA ESI,[EBX + 0x730]               ; 004a17e7
    MOV EAX,dword ptr [EBX]             ; 004a17ed | DAT_01cbb9bc | DAT_01cbba18
        ;   Label: LAB_004a17ed
    TEST EAX,EAX                        ; 004a17ef
    JZ 0x004a17fc                       ; 004a17f1
        ;   XREF to: 004a17fc (CONDITIONAL_JUMP)  ; LAB_004a17fc
    PUSH EBX                            ; 004a17f3 | DAT_01cbb9bc | DAT_01cbba18
    CALL FUN_0049a450                   ; 004a17f4
        ;   XREF to: 0049a450 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a450()
    ADD ESP,0x4                         ; 004a17f9
    ADD EBX,0x5c                        ; 004a17fc
        ;   Label: LAB_004a17fc
    CMP EBX,ESI                         ; 004a17ff
    JNZ 0x004a17ed                      ; 004a1801
        ;   XREF to: 004a17ed (CONDITIONAL_JUMP)  ; LAB_004a17ed
    MOV ECX,dword ptr [0x01c8eea8]      ; 004a1803 | DAT_01c8eea8
    XOR ESI,ESI                         ; 004a1809
    TEST ECX,ECX                        ; 004a180b
    JLE 0x004a1838                      ; 004a180d
        ;   XREF to: 004a1838 (CONDITIONAL_JUMP)  ; LAB_004a1838
    MOV EBX,0x1c8eeb0                   ; 004a180f
    MOV EAX,dword ptr [EBX + 0x258]     ; 004a1814 | DAT_01c8f108 | DAT_01c8f368
        ;   Label: LAB_004a1814
    TEST EAX,EAX                        ; 004a181a
    JZ 0x004a1827                       ; 004a181c
        ;   XREF to: 004a1827 (CONDITIONAL_JUMP)  ; LAB_004a1827
    PUSH EBX                            ; 004a181e
    CALL FUN_00497e80                   ; 004a181f
        ;   XREF to: 00497e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00497e80()
    ADD ESP,0x4                         ; 004a1824
    MOV EDI,dword ptr [0x01c8eea8]      ; 004a1827 | DAT_01c8eea8
        ;   Label: LAB_004a1827
    INC ESI                             ; 004a182d
    ADD EBX,0x260                       ; 004a182e
    CMP ESI,EDI                         ; 004a1834
    JL 0x004a1814                       ; 004a1836
        ;   XREF to: 004a1814 (CONDITIONAL_JUMP)  ; LAB_004a1814
    MOV EBX,0x1cbc0f0                   ; 004a1838
        ;   Label: LAB_004a1838
    LEA ESI,[EBX + 0x33c20]             ; 004a183d
    FLD float ptr [EBX + 0x24]          ; 004a1843 | DAT_01cbc114 | DAT_01cbc1e8
        ;   Label: LAB_004a1843
    FLDZ                                ; 004a1846
    FCOMPP                              ; 004a1848
    FNSTSW AX                           ; 004a184a
    SAHF                                ; 004a184c
    JNC 0x004a1859                      ; 004a184d
        ;   XREF to: 004a1859 (CONDITIONAL_JUMP)  ; LAB_004a1859
    PUSH EBX                            ; 004a184f
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1850 | DAT_01cbc12c | DAT_01cbc200
    CALL dword ptr [EAX + 0x4]          ; 004a1853
    ADD ESP,0x4                         ; 004a1856
    ADD EBX,0xd4                        ; 004a1859
        ;   Label: LAB_004a1859
    CMP EBX,ESI                         ; 004a185f
    JNZ 0x004a1843                      ; 004a1861
        ;   XREF to: 004a1843 (CONDITIONAL_JUMP)  ; LAB_004a1843
    MOV EBX,0x1cefd14                   ; 004a1863
    LEA ESI,[EBX + 0x168]               ; 004a1868
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a186e | DAT_01cefd34 | DAT_01cefd58
        ;   Label: LAB_004a186e
    TEST EAX,EAX                        ; 004a1871
    JZ 0x004a187e                       ; 004a1873
        ;   XREF to: 004a187e (CONDITIONAL_JUMP)  ; LAB_004a187e
    PUSH EBX                            ; 004a1875
    CALL FUN_0049ad00                   ; 004a1876
        ;   XREF to: 0049ad00 (UNCONDITIONAL_CALL)  ; undefined FUN_0049ad00()
    ADD ESP,0x4                         ; 004a187b
    ADD EBX,0x24                        ; 004a187e
        ;   Label: LAB_004a187e
    CMP EBX,ESI                         ; 004a1881
    JNZ 0x004a186e                      ; 004a1883
        ;   XREF to: 004a186e (CONDITIONAL_JUMP)  ; LAB_004a186e
    MOV EBX,0x1cefe80                   ; 004a1885
    LEA ESI,[EBX + 0x2900]              ; 004a188a
    FLD float ptr [EBX + 0x24]          ; 004a1890 | DAT_01cefea4 | DAT_01ceff48
        ;   Label: LAB_004a1890
    FLDZ                                ; 004a1893
    FCOMPP                              ; 004a1895
    FNSTSW AX                           ; 004a1897
    SAHF                                ; 004a1899
    JNC 0x004a18a6                      ; 004a189a
        ;   XREF to: 004a18a6 (CONDITIONAL_JUMP)  ; LAB_004a18a6
    PUSH EBX                            ; 004a189c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a189d | DAT_01cefebc | DAT_01ceff60
    CALL dword ptr [EAX + 0x4]          ; 004a18a0
    ADD ESP,0x4                         ; 004a18a3
    ADD EBX,0xa4                        ; 004a18a6
        ;   Label: LAB_004a18a6
    CMP EBX,ESI                         ; 004a18ac
    JNZ 0x004a1890                      ; 004a18ae
        ;   XREF to: 004a1890 (CONDITIONAL_JUMP)  ; LAB_004a1890
    MOV EBX,0x1cf2784                   ; 004a18b0
    LEA ESI,[EBX + 0x1400]              ; 004a18b5
    FLD float ptr [EBX + 0x24]          ; 004a18bb | DAT_01cf27a8 | DAT_01cf27f8
        ;   Label: LAB_004a18bb
    FLDZ                                ; 004a18be
    FCOMPP                              ; 004a18c0
    FNSTSW AX                           ; 004a18c2
    SAHF                                ; 004a18c4
    JNC 0x004a18d1                      ; 004a18c5
        ;   XREF to: 004a18d1 (CONDITIONAL_JUMP)  ; LAB_004a18d1
    PUSH EBX                            ; 004a18c7
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a18c8 | DAT_01cf27c0 | DAT_01cf2810
    CALL dword ptr [EAX + 0x4]          ; 004a18cb
    ADD ESP,0x4                         ; 004a18ce
    ADD EBX,0x50                        ; 004a18d1
        ;   Label: LAB_004a18d1
    CMP EBX,ESI                         ; 004a18d4
    JNZ 0x004a18bb                      ; 004a18d6
        ;   XREF to: 004a18bb (CONDITIONAL_JUMP)  ; LAB_004a18bb
    MOV EBX,0x1cf3b88                   ; 004a18d8
    LEA ESI,[EBX + 0x1500]              ; 004a18dd
    FLD float ptr [EBX + 0x24]          ; 004a18e3 | DAT_01cf3bac | DAT_01cf3c00
        ;   Label: LAB_004a18e3
    FLDZ                                ; 004a18e6
    FCOMPP                              ; 004a18e8
    FNSTSW AX                           ; 004a18ea
    SAHF                                ; 004a18ec
    JNC 0x004a18f9                      ; 004a18ed
        ;   XREF to: 004a18f9 (CONDITIONAL_JUMP)  ; LAB_004a18f9
    PUSH EBX                            ; 004a18ef
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a18f0 | DAT_01cf3bc4 | DAT_01cf3c18
    CALL dword ptr [EAX + 0x4]          ; 004a18f3
    ADD ESP,0x4                         ; 004a18f6
    ADD EBX,0x54                        ; 004a18f9
        ;   Label: LAB_004a18f9
    CMP EBX,ESI                         ; 004a18fc
    JNZ 0x004a18e3                      ; 004a18fe
        ;   XREF to: 004a18e3 (CONDITIONAL_JUMP)  ; LAB_004a18e3
    MOV EBX,0x1cba2b8                   ; 004a1900
    LEA ESI,[EBX + 0x1700]              ; 004a1905
    FLD float ptr [EBX + 0x24]          ; 004a190b | DAT_01cba2dc | DAT_01cba338
        ;   Label: LAB_004a190b
    FLDZ                                ; 004a190e
    FCOMPP                              ; 004a1910
    FNSTSW AX                           ; 004a1912
    SAHF                                ; 004a1914
    JNC 0x004a1921                      ; 004a1915
        ;   XREF to: 004a1921 (CONDITIONAL_JUMP)  ; LAB_004a1921
    PUSH EBX                            ; 004a1917
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1918 | DAT_01cba2f4 | DAT_01cba350
    CALL dword ptr [EAX + 0x4]          ; 004a191b
    ADD ESP,0x4                         ; 004a191e
    ADD EBX,0x5c                        ; 004a1921
        ;   Label: LAB_004a1921
    CMP EBX,ESI                         ; 004a1924
    JNZ 0x004a190b                      ; 004a1926
        ;   XREF to: 004a190b (CONDITIONAL_JUMP)  ; LAB_004a190b
    MOV EAX,[0x01c8aea0]                ; 004a1928 | DAT_01c8aea0
    XOR ESI,ESI                         ; 004a192d
    TEST EAX,EAX                        ; 004a192f
    JLE 0x004a1950                      ; 004a1931
        ;   XREF to: 004a1950 (CONDITIONAL_JUMP)  ; LAB_004a1950
    MOV EBX,0x1c8aea8                   ; 004a1933
    PUSH EBX                            ; 004a1938
        ;   Label: LAB_004a1938
    CALL FUN_00497540                   ; 004a1939
        ;   XREF to: 00497540 (UNCONDITIONAL_CALL)  ; undefined FUN_00497540()
    INC ESI                             ; 004a193e
    MOV EDX,dword ptr [0x01c8aea0]      ; 004a193f | DAT_01c8aea0
    ADD ESP,0x4                         ; 004a1945
    ADD EBX,0x40                        ; 004a1948
    CMP ESI,EDX                         ; 004a194b
    JL 0x004a1938                       ; 004a194d
        ;   XREF to: 004a1938 (CONDITIONAL_JUMP)  ; LAB_004a1938
    NOP                                 ; 004a194f
    MOV EBX,0x1cf6090                   ; 004a1950
        ;   Label: LAB_004a1950
    LEA ESI,[EBX + 0x140]               ; 004a1955
    PUSH EBX                            ; 004a195b
        ;   Label: LAB_004a195b
    CALL FUN_0049c890                   ; 004a195c
        ;   XREF to: 0049c890 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c890()
    ADD EBX,0x20                        ; 004a1961
    ADD ESP,0x4                         ; 004a1964
    CMP EBX,ESI                         ; 004a1967
    JNZ 0x004a195b                      ; 004a1969
        ;   XREF to: 004a195b (CONDITIONAL_JUMP)  ; LAB_004a195b
    MOV EBX,0x1cf61d4                   ; 004a196b
    LEA ESI,[EBX + 0x4e20]              ; 004a1970
    PUSH EBX                            ; 004a1976
        ;   Label: LAB_004a1976
    CALL FUN_0049d090                   ; 004a1977
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD EBX,0x3e8                       ; 004a197c
    ADD ESP,0x4                         ; 004a1982
    CMP EBX,ESI                         ; 004a1985
    JNZ 0x004a1976                      ; 004a1987
        ;   XREF to: 004a1976 (CONDITIONAL_JUMP)  ; LAB_004a1976
    MOV EBX,0x1cfaff8                   ; 004a1989
    LEA ESI,[EBX + 0x8c0]               ; 004a198e
    PUSH EBX                            ; 004a1994
        ;   Label: LAB_004a1994
    CALL FUN_0049d8b0                   ; 004a1995
        ;   XREF to: 0049d8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d8b0()
    ADD EBX,0x70                        ; 004a199a
    ADD ESP,0x4                         ; 004a199d
    CMP EBX,ESI                         ; 004a19a0
    JNZ 0x004a1994                      ; 004a19a2
        ;   XREF to: 004a1994 (CONDITIONAL_JUMP)  ; LAB_004a1994
    MOV EBX,0x1cfb8bc                   ; 004a19a4
    XOR ESI,ESI                         ; 004a19a9
    LEA EDI,[EBX + 0x55f0]              ; 004a19ab
    TEST dword ptr [EBX + 0xc],0x7fffffff ; 004a19b1 | DAT_01cfb8c8 | DAT_01cfb8f4
        ;   Label: LAB_004a19b1
    JZ 0x004a19d1                       ; 004a19b8
        ;   XREF to: 004a19d1 (CONDITIONAL_JUMP)  ; LAB_004a19d1
    TEST ESI,ESI                        ; 004a19ba
    JNZ 0x004a19c8                      ; 004a19bc
        ;   XREF to: 004a19c8 (CONDITIONAL_JUMP)  ; LAB_004a19c8
    CALL FUN_0049de60                   ; 004a19be
        ;   XREF to: 0049de60 (UNCONDITIONAL_CALL)  ; undefined FUN_0049de60()
    MOV ESI,0x1                         ; 004a19c3
    PUSH EBX                            ; 004a19c8
        ;   Label: LAB_004a19c8
    CALL FUN_0049e390                   ; 004a19c9
        ;   XREF to: 0049e390 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e390()
    ADD ESP,0x4                         ; 004a19ce
    ADD EBX,0x2c                        ; 004a19d1
        ;   Label: LAB_004a19d1
    CMP EBX,EDI                         ; 004a19d4
    JNZ 0x004a19b1                      ; 004a19d6
        ;   XREF to: 004a19b1 (CONDITIONAL_JUMP)  ; LAB_004a19b1
    MOV EBX,0x1d00eb0                   ; 004a19d8
    LEA ESI,[EBX + 0xc00]               ; 004a19dd
    PUSH EBX                            ; 004a19e3
        ;   Label: LAB_004a19e3
    CALL FUN_0049f4e0                   ; 004a19e4
        ;   XREF to: 0049f4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f4e0()
    ADD EBX,0x30                        ; 004a19e9
    ADD ESP,0x4                         ; 004a19ec
    CMP EBX,ESI                         ; 004a19ef
    JNZ 0x004a19e3                      ; 004a19f1
        ;   XREF to: 004a19e3 (CONDITIONAL_JUMP)  ; LAB_004a19e3
    MOV EBX,0x1d01ab4                   ; 004a19f3
    LEA ESI,[EBX + 0xe10]               ; 004a19f8
    PUSH EBX                            ; 004a19fe
        ;   Label: LAB_004a19fe
    CALL FUN_004a0630                   ; 004a19ff
        ;   XREF to: 004a0630 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0630()
    ADD EBX,0x24                        ; 004a1a04
    ADD ESP,0x4                         ; 004a1a07
    CMP EBX,ESI                         ; 004a1a0a
    JNZ 0x004a19fe                      ; 004a1a0c
        ;   XREF to: 004a19fe (CONDITIONAL_JUMP)  ; LAB_004a19fe
    MOV EBX,0x1d028c8                   ; 004a1a0e
    LEA ESI,[EBX + 0x12c0]              ; 004a1a13
    PUSH EBX                            ; 004a1a19
        ;   Label: LAB_004a1a19
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1a1a | DAT_01d02904 | DAT_01d02964
    CALL dword ptr [EAX + 0x4]          ; 004a1a1d
    ADD EBX,0x60                        ; 004a1a20
    ADD ESP,0x4                         ; 004a1a23
    CMP EBX,ESI                         ; 004a1a26
    JNZ 0x004a1a19                      ; 004a1a28
        ;   XREF to: 004a1a19 (CONDITIONAL_JUMP)  ; LAB_004a1a19
    MOV EBX,0x1d03b8c                   ; 004a1a2a
    LEA ESI,[EBX + 0x4000]              ; 004a1a2f
    FLD float ptr [EBX + 0x24]          ; 004a1a35 | DAT_01d03bb0 | DAT_01d03bf0
        ;   Label: LAB_004a1a35
    FLDZ                                ; 004a1a38
    FCOMPP                              ; 004a1a3a
    FNSTSW AX                           ; 004a1a3c
    SAHF                                ; 004a1a3e
    JNC 0x004a1a4b                      ; 004a1a3f
        ;   XREF to: 004a1a4b (CONDITIONAL_JUMP)  ; LAB_004a1a4b
    PUSH EBX                            ; 004a1a41
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1a42 | DAT_01d03bc8 | DAT_01d03c08
    CALL dword ptr [EAX + 0x4]          ; 004a1a45
    ADD ESP,0x4                         ; 004a1a48
    ADD EBX,0x40                        ; 004a1a4b
        ;   Label: LAB_004a1a4b
    CMP EBX,ESI                         ; 004a1a4e
    JNZ 0x004a1a35                      ; 004a1a50
        ;   XREF to: 004a1a35 (CONDITIONAL_JUMP)  ; LAB_004a1a35
    MOV EBX,0x1d07b90                   ; 004a1a52
    LEA ESI,[EBX + 0x4000]              ; 004a1a57
    FLD float ptr [EBX + 0x24]          ; 004a1a5d | DAT_01d07bb4 | DAT_01d07bf4
        ;   Label: LAB_004a1a5d
    FLDZ                                ; 004a1a60
    FCOMPP                              ; 004a1a62
    FNSTSW AX                           ; 004a1a64
    SAHF                                ; 004a1a66
    JNC 0x004a1a73                      ; 004a1a67
        ;   XREF to: 004a1a73 (CONDITIONAL_JUMP)  ; LAB_004a1a73
    PUSH EBX                            ; 004a1a69
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1a6a | DAT_01d07bcc | DAT_01d07c0c
    CALL dword ptr [EAX + 0x4]          ; 004a1a6d
    ADD ESP,0x4                         ; 004a1a70
    ADD EBX,0x40                        ; 004a1a73
        ;   Label: LAB_004a1a73
    CMP EBX,ESI                         ; 004a1a76
    JNZ 0x004a1a5d                      ; 004a1a78
        ;   XREF to: 004a1a5d (CONDITIONAL_JUMP)  ; LAB_004a1a5d
    MOV EBX,0x1d0bb94                   ; 004a1a7a
    LEA ESI,[EBX + 0x12e8]              ; 004a1a7f
    PUSH EBX                            ; 004a1a85
        ;   Label: LAB_004a1a85
    CALL FUN_0049fdf0                   ; 004a1a86
        ;   XREF to: 0049fdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049fdf0()
    ADD EBX,0x1e4                       ; 004a1a8b
    ADD ESP,0x4                         ; 004a1a91
    CMP EBX,ESI                         ; 004a1a94
    JNZ 0x004a1a85                      ; 004a1a96
        ;   XREF to: 004a1a85 (CONDITIONAL_JUMP)  ; LAB_004a1a85
    MOV EBX,0x1d0ce80                   ; 004a1a98
    LEA ESI,[EBX + 0x30]                ; 004a1a9d
    PUSH EBX                            ; 004a1aa0
        ;   Label: LAB_004a1aa0
    CALL FUN_004a0570                   ; 004a1aa1
        ;   XREF to: 004a0570 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0570()
    ADD EBX,0xc                         ; 004a1aa6
    ADD ESP,0x4                         ; 004a1aa9
    CMP EBX,ESI                         ; 004a1aac
    JNZ 0x004a1aa0                      ; 004a1aae
        ;   XREF to: 004a1aa0 (CONDITIONAL_JUMP)  ; LAB_004a1aa0
    MOV ESP,EBP                         ; 004a1ab0
    POP EBP                             ; 004a1ab2
    POP EDI                             ; 004a1ab3
    POP ESI                             ; 004a1ab4
    POP EBX                             ; 004a1ab5
    RET                                 ; 004a1ab6
    PUSH EBX                            ; 004a1ab7 | DAT_01c74ecc
        ;   Label: LAB_004a1ab7
    CALL FUN_00496e00                   ; 004a1ab8
        ;   XREF to: 00496e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00496e00()
    ADD ESP,0x4                         ; 004a1abd
    JMP 0x004a178b                      ; 004a1ac0
        ;   XREF to: 004a178b (UNCONDITIONAL_JUMP)  ; LAB_004a178b

