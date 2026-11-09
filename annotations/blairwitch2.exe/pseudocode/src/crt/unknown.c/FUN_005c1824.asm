; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005c1824(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_unknown.c_FUN_005ba300 at 005ba328
;   unkafter_morph.cpp_FUN_005c43e0 at 005c4510
;
; Referenced Globals:
;   undefined4 DAT_006013f2
;   undefined4 DAT_006013f4
;   undefined4 DAT_006013f6
;   undefined4 DAT_0060140c
;   undefined4 DAT_0060140e
;   undefined4 DAT_0061f4e4
;   undefined4 DAT_0061f4f0
;   undefined4 DAT_0061f4f4
;   undefined4 DAT_0061f4fc
;   undefined4 DAT_0061f500
;   undefined4 DAT_0061f504
;   undefined4 DAT_0061f508
;   undefined4 DAT_0061f514
;   undefined4 DAT_0061f518
;   undefined4 DAT_0061f520
;   ... and 4 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c1690
;   crt_unknown.c_FUN_005c17c8
;   crt_unknown.c_FUN_005c1af8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1824
        ;   Label: crt_unknown.c_FUN_005c1824
    PUSH ESI                            ; 005c1825
    PUSH EDI                            ; 005c1826
    PUSH EBP                            ; 005c1827
    SUB ESP,0x1c                        ; 005c1828
    MOV EBX,dword ptr [ESP + 0x30]      ; 005c182b
    MOV EAX,[0x0061f634]                ; 005c182f | PTR_DAT_0061f634
    MOV DL,byte ptr [EAX]               ; 005c1834 | DAT_0061f5ad
    XOR ESI,ESI                         ; 005c1836
    TEST DL,DL                          ; 005c1838
    JZ 0x005c1aeb                       ; 005c183a
        ;   XREF to: 005c1aeb (CONDITIONAL_JUMP)  ; LAB_005c1aeb
    MOV EDX,dword ptr [EBX + 0x14]      ; 005c1840
    PUSH EDX                            ; 005c1843
    PUSH 0x61f508                       ; 005c1844 | DAT_0061f508
    PUSH 0x61f4e4                       ; 005c1849 | DAT_0061f4e4
    CALL crt_unknown.c_FUN_005c17c8     ; 005c184e
        ;   XREF to: 005c17c8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c17c8()
    ADD ESP,0xc                         ; 005c1853
    MOV dword ptr [ESP + 0x10],EAX      ; 005c1856
    TEST EAX,EAX                        ; 005c185a
    JZ 0x005c186a                       ; 005c185c
        ;   XREF to: 005c186a (CONDITIONAL_JUMP)  ; LAB_005c186a
    MOV EBP,0x61f508                    ; 005c185e | DAT_0061f508
    MOV EDI,0x61f4e4                    ; 005c1863 | DAT_0061f4e4
    JMP 0x005c1874                      ; 005c1868
        ;   XREF to: 005c1874 (UNCONDITIONAL_JUMP)  ; LAB_005c1874
    MOV EBP,0x61f4e4                    ; 005c186a | DAT_0061f4e4
        ;   Label: LAB_005c186a
    MOV EDI,0x61f508                    ; 005c186f | DAT_0061f508
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c1874
        ;   Label: LAB_005c1874
    MOV dword ptr [ESP + 0x14],EAX      ; 005c1877
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c187b
    ADD EAX,0x76c                       ; 005c187e
    PUSH EAX                            ; 005c1883
    CALL crt_unknown.c_FUN_005c1690     ; 005c1884
        ;   XREF to: 005c1690 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1690()
    ADD ESP,0x4                         ; 005c1889
    MOV EDX,EAX                         ; 005c188c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c188e
    ADD EAX,EAX                         ; 005c1892
    TEST EDX,EDX                        ; 005c1894
    JZ 0x005c18a6                       ; 005c1896
        ;   XREF to: 005c18a6 (CONDITIONAL_JUMP)  ; LAB_005c18a6
    MOV EDX,dword ptr [EAX + 0x60140e]  ; 005c1898 | DAT_0060140e
    MOV EAX,dword ptr [EAX + 0x60140c]  ; 005c189e | DAT_0060140c
    JMP 0x005c18b2                      ; 005c18a4
        ;   XREF to: 005c18b2 (UNCONDITIONAL_JUMP)  ; LAB_005c18b2
    MOV EDX,dword ptr [EAX + 0x6013f4]  ; 005c18a6 | DAT_006013f4
        ;   Label: LAB_005c18a6
    MOV EAX,dword ptr [EAX + 0x6013f2]  ; 005c18ac | DAT_006013f2
    SAR EDX,0x10                        ; 005c18b2
        ;   Label: LAB_005c18b2
    SAR EAX,0x10                        ; 005c18b5
    SUB EDX,EAX                         ; 005c18b8
    MOV dword ptr [ESP + 0xc],EDX       ; 005c18ba
    XOR ECX,ECX                         ; 005c18be
    MOV EAX,dword ptr [EBP + 0x20]      ; 005c18c0 | DAT_0061f528
    MOV dword ptr [ESP + 0x4],ECX       ; 005c18c3
    TEST EAX,EAX                        ; 005c18c7
    JNZ 0x005c196d                      ; 005c18c9
        ;   XREF to: 005c196d (CONDITIONAL_JUMP)  ; LAB_005c196d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c18cf
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c18d3 | DAT_0061f518
    CMP EAX,ECX                         ; 005c18d6
    JLE 0x005c18e4                      ; 005c18d8
        ;   XREF to: 005c18e4 (CONDITIONAL_JUMP)  ; LAB_005c18e4
    MOV ESI,0x1                         ; 005c18da
    JMP 0x005c19be                      ; 005c18df
        ;   XREF to: 005c19be (UNCONDITIONAL_JUMP)  ; LAB_005c19be
    JNZ 0x005c19be                      ; 005c18e4
        ;   XREF to: 005c19be (CONDITIONAL_JUMP)  ; LAB_005c19be
        ;   Label: LAB_005c18e4
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c18ea
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c18ed | DAT_0061f520
    ADD EDX,0x7                         ; 005c18f0
    SUB EDX,ECX                         ; 005c18f3
    MOV ECX,0x7                         ; 005c18f5
    MOV EAX,EDX                         ; 005c18fa
    SAR EDX,0x1f                        ; 005c18fc
    IDIV ECX                            ; 005c18ff
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c1901
    SUB EAX,EDX                         ; 005c1904
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c1906
    MOV dword ptr [ESP + 0x8],EAX       ; 005c1909
    ADD EDX,0x6                         ; 005c190d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c1910 | DAT_0061f520
    SUB EDX,EAX                         ; 005c1913
    MOV EAX,EDX                         ; 005c1915
    SAR EDX,0x1f                        ; 005c1917
    IDIV ECX                            ; 005c191a
    MOV ECX,dword ptr [EBX + 0xc]       ; 005c191c
    DEC ECX                             ; 005c191f
    SUB ECX,EDX                         ; 005c1920
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c1922 | DAT_0061f514
    CMP EDX,0x5                         ; 005c1925
    JNZ 0x005c194f                      ; 005c1928
        ;   XREF to: 005c194f (CONDITIONAL_JUMP)  ; LAB_005c194f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c192a
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c192e
    SUB EAX,0x7                         ; 005c1932
    CMP EAX,EDX                         ; 005c1935
    JGE 0x005c19be                      ; 005c1937
        ;   XREF to: 005c19be (CONDITIONAL_JUMP)  ; LAB_005c19be
    MOV ESI,0x1                         ; 005c193d
    CMP ECX,EAX                         ; 005c1942
    JG 0x005c19be                       ; 005c1944
        ;   XREF to: 005c19be (CONDITIONAL_JUMP)  ; LAB_005c19be
    JMP 0x005c19c5                      ; 005c194a
        ;   XREF to: 005c19c5 (UNCONDITIONAL_JUMP)  ; LAB_005c19c5
    DEC EDX                             ; 005c194f
        ;   Label: LAB_005c194f
    LEA EAX,[EDX*0x8 + 0x0]             ; 005c1950
    SUB EAX,EDX                         ; 005c1957
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c1959
    INC EAX                             ; 005c195d
    CMP EAX,EDX                         ; 005c195e
    JG 0x005c19be                       ; 005c1960
        ;   XREF to: 005c19be (CONDITIONAL_JUMP)  ; LAB_005c19be
    MOV ESI,0x1                         ; 005c1962
    CMP ECX,EAX                         ; 005c1967
    JGE 0x005c19be                      ; 005c1969
        ;   XREF to: 005c19be (CONDITIONAL_JUMP)  ; LAB_005c19be
    JMP 0x005c19c5                      ; 005c196b
        ;   XREF to: 005c19c5 (UNCONDITIONAL_JUMP)  ; LAB_005c19c5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c196d | DAT_0061f524
        ;   Label: LAB_005c196d
    MOV EDX,dword ptr [EBP + 0x20]      ; 005c1970 | DAT_0061f528
    MOV dword ptr [ESP + 0x18],EAX      ; 005c1973
    CMP EDX,0x1                         ; 005c1977
    JNZ 0x005c19ac                      ; 005c197a
        ;   XREF to: 005c19ac (CONDITIONAL_JUMP)  ; LAB_005c19ac
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c197c
    ADD EAX,0x76c                       ; 005c197f
    PUSH EAX                            ; 005c1984
    CALL crt_unknown.c_FUN_005c1690     ; 005c1985
        ;   XREF to: 005c1690 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1690()
    ADD ESP,0x4                         ; 005c198a
    TEST EAX,EAX                        ; 005c198d
    JZ 0x005c19a8                       ; 005c198f
        ;   XREF to: 005c19a8 (CONDITIONAL_JUMP)  ; LAB_005c19a8
    MOV EAX,[0x006013f6]                ; 005c1991 | DAT_006013f6
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c1996
    SAR EAX,0x10                        ; 005c199a
    CMP EAX,ECX                         ; 005c199d
    JGE 0x005c19a8                      ; 005c199f
        ;   XREF to: 005c19a8 (CONDITIONAL_JUMP)  ; LAB_005c19a8
    LEA EAX,[ECX + 0x1]                 ; 005c19a1
    MOV dword ptr [ESP + 0x18],EAX      ; 005c19a4
    DEC dword ptr [ESP + 0x18]          ; 005c19a8
        ;   Label: LAB_005c19a8
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c19ac
        ;   Label: LAB_005c19ac
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c19b0
    CMP EAX,ECX                         ; 005c19b3
    JL 0x005c19be                       ; 005c19b5
        ;   XREF to: 005c19be (CONDITIONAL_JUMP)  ; LAB_005c19be
    MOV ESI,0x1                         ; 005c19b7
    JZ 0x005c19c5                       ; 005c19bc
        ;   XREF to: 005c19c5 (CONDITIONAL_JUMP)  ; LAB_005c19c5
    CMP dword ptr [ESP + 0x4],0x0       ; 005c19be
        ;   Label: LAB_005c19be
    JZ 0x005c19dc                       ; 005c19c3
        ;   XREF to: 005c19dc (CONDITIONAL_JUMP)  ; LAB_005c19dc
    PUSH EBP                            ; 005c19c5 | DAT_0061f508
        ;   Label: LAB_005c19c5
    PUSH EBX                            ; 005c19c6
    CALL crt_unknown.c_FUN_005c1af8     ; 005c19c7
        ;   XREF to: 005c1af8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1af8()
    ADD ESP,0x8                         ; 005c19cc
    TEST EAX,EAX                        ; 005c19cf
    SETZ AL                             ; 005c19d1
    MOV ESI,EAX                         ; 005c19d4
    AND ESI,0xff                        ; 005c19d6
    TEST ESI,ESI                        ; 005c19dc
        ;   Label: LAB_005c19dc
    JNZ 0x005c19f3                      ; 005c19de
        ;   XREF to: 005c19f3 (CONDITIONAL_JUMP)  ; LAB_005c19f3
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c19e0
    TEST EDX,EDX                        ; 005c19e4
    JZ 0x005c1aeb                       ; 005c19e6
        ;   XREF to: 005c1aeb (CONDITIONAL_JUMP)  ; LAB_005c1aeb
    MOV ESI,EDX                         ; 005c19ec
    JMP 0x005c1aeb                      ; 005c19ee
        ;   XREF to: 005c1aeb (UNCONDITIONAL_JUMP)  ; LAB_005c1aeb
    XOR EBP,EBP                         ; 005c19f3
        ;   Label: LAB_005c19f3
    MOV EAX,dword ptr [EDI + 0x20]      ; 005c19f5 | DAT_0061f504
    MOV dword ptr [ESP],EBP             ; 005c19f8
    TEST EAX,EAX                        ; 005c19fb
    JNZ 0x005c1a95                      ; 005c19fd
        ;   XREF to: 005c1a95 (CONDITIONAL_JUMP)  ; LAB_005c1a95
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c1a03
    MOV EDX,dword ptr [EDI + 0x10]      ; 005c1a07 | DAT_0061f4f4
    CMP EAX,EDX                         ; 005c1a0a
    JLE 0x005c1a15                      ; 005c1a0c
        ;   XREF to: 005c1a15 (CONDITIONAL_JUMP)  ; LAB_005c1a15
    XOR ESI,ESI                         ; 005c1a0e
    JMP 0x005c1acd                      ; 005c1a10
        ;   XREF to: 005c1acd (UNCONDITIONAL_JUMP)  ; LAB_005c1acd
    JNZ 0x005c1acd                      ; 005c1a15
        ;   XREF to: 005c1acd (CONDITIONAL_JUMP)  ; LAB_005c1acd
        ;   Label: LAB_005c1a15
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c1a1b
    MOV EBP,dword ptr [EDI + 0x18]      ; 005c1a1e | DAT_0061f4fc
    ADD EDX,0x7                         ; 005c1a21
    SUB EDX,EBP                         ; 005c1a24
    MOV ECX,0x7                         ; 005c1a26
    MOV EAX,EDX                         ; 005c1a2b
    SAR EDX,0x1f                        ; 005c1a2d
    IDIV ECX                            ; 005c1a30
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c1a32
    SUB EBP,EDX                         ; 005c1a35
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c1a37
    MOV EAX,dword ptr [EDI + 0x18]      ; 005c1a3a | DAT_0061f4fc
    ADD EDX,0x6                         ; 005c1a3d
    SUB EDX,EAX                         ; 005c1a40
    MOV EAX,EDX                         ; 005c1a42
    SAR EDX,0x1f                        ; 005c1a44
    IDIV ECX                            ; 005c1a47
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c1a49
    DEC EAX                             ; 005c1a4c
    XOR ESI,ESI                         ; 005c1a4d
    SUB EAX,EDX                         ; 005c1a4f
    MOV ECX,dword ptr [EDI + 0xc]       ; 005c1a51 | DAT_0061f4f0
    MOV EDX,EAX                         ; 005c1a54
    CMP ECX,0x5                         ; 005c1a56
    JNZ 0x005c1a79                      ; 005c1a59
        ;   XREF to: 005c1a79 (CONDITIONAL_JUMP)  ; LAB_005c1a79
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c1a5b
    SUB EAX,0x7                         ; 005c1a5f
    CMP EBP,EAX                         ; 005c1a62
    JG 0x005c1a70                       ; 005c1a64
        ;   XREF to: 005c1a70 (CONDITIONAL_JUMP)  ; LAB_005c1a70
    MOV ESI,0x1                         ; 005c1a66
    JMP 0x005c1acd                      ; 005c1a6b
        ;   XREF to: 005c1acd (UNCONDITIONAL_JUMP)  ; LAB_005c1acd
    CMP EDX,EAX                         ; 005c1a70
        ;   Label: LAB_005c1a70
    JG 0x005c1acd                       ; 005c1a72
        ;   XREF to: 005c1acd (CONDITIONAL_JUMP)  ; LAB_005c1acd
    JMP 0x005c1ad3                      ; 005c1a74
        ;   XREF to: 005c1ad3 (UNCONDITIONAL_JUMP)  ; LAB_005c1ad3
    DEC ECX                             ; 005c1a79
        ;   Label: LAB_005c1a79
    LEA EAX,[ECX*0x8 + 0x0]             ; 005c1a7a
    SUB EAX,ECX                         ; 005c1a81
    INC EAX                             ; 005c1a83
    CMP EBP,EAX                         ; 005c1a84
    JGE 0x005c1a8f                      ; 005c1a86
        ;   XREF to: 005c1a8f (CONDITIONAL_JUMP)  ; LAB_005c1a8f
    MOV ESI,0x1                         ; 005c1a88
    JMP 0x005c1acd                      ; 005c1a8d
        ;   XREF to: 005c1acd (UNCONDITIONAL_JUMP)  ; LAB_005c1acd
    CMP EDX,EAX                         ; 005c1a8f
        ;   Label: LAB_005c1a8f
    JGE 0x005c1acd                      ; 005c1a91
        ;   XREF to: 005c1acd (CONDITIONAL_JUMP)  ; LAB_005c1acd
    JMP 0x005c1ad3                      ; 005c1a93
        ;   XREF to: 005c1ad3 (UNCONDITIONAL_JUMP)  ; LAB_005c1ad3
    MOV EBP,dword ptr [EDI + 0x1c]      ; 005c1a95 | DAT_0061f500
        ;   Label: LAB_005c1a95
    CMP EAX,0x1                         ; 005c1a98
    JNZ 0x005c1ac0                      ; 005c1a9b
        ;   XREF to: 005c1ac0 (CONDITIONAL_JUMP)  ; LAB_005c1ac0
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c1a9d
    ADD EAX,0x76c                       ; 005c1aa0
    PUSH EAX                            ; 005c1aa5
    CALL crt_unknown.c_FUN_005c1690     ; 005c1aa6
        ;   XREF to: 005c1690 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1690()
    ADD ESP,0x4                         ; 005c1aab
    TEST EAX,EAX                        ; 005c1aae
    JZ 0x005c1abf                       ; 005c1ab0
        ;   XREF to: 005c1abf (CONDITIONAL_JUMP)  ; LAB_005c1abf
    MOV EAX,[0x006013f6]                ; 005c1ab2 | DAT_006013f6
    SAR EAX,0x10                        ; 005c1ab7
    CMP EBP,EAX                         ; 005c1aba
    JLE 0x005c1abf                      ; 005c1abc
        ;   XREF to: 005c1abf (CONDITIONAL_JUMP)  ; LAB_005c1abf
    INC EBP                             ; 005c1abe
    DEC EBP                             ; 005c1abf
        ;   Label: LAB_005c1abf
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005c1ac0
        ;   Label: LAB_005c1ac0
    CMP EBP,ECX                         ; 005c1ac3
    JG 0x005c1acd                       ; 005c1ac5
        ;   XREF to: 005c1acd (CONDITIONAL_JUMP)  ; LAB_005c1acd
    XOR ESI,ESI                         ; 005c1ac7
    CMP EBP,ECX                         ; 005c1ac9
    JZ 0x005c1ad3                       ; 005c1acb
        ;   XREF to: 005c1ad3 (CONDITIONAL_JUMP)  ; LAB_005c1ad3
    CMP dword ptr [ESP],0x0             ; 005c1acd
        ;   Label: LAB_005c1acd
    JZ 0x005c1adf                       ; 005c1ad1
        ;   XREF to: 005c1adf (CONDITIONAL_JUMP)  ; LAB_005c1adf
    PUSH EDI                            ; 005c1ad3 | DAT_0061f4e4
        ;   Label: LAB_005c1ad3
    PUSH EBX                            ; 005c1ad4
    CALL crt_unknown.c_FUN_005c1af8     ; 005c1ad5
        ;   XREF to: 005c1af8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1af8()
    ADD ESP,0x8                         ; 005c1ada
    MOV ESI,EAX                         ; 005c1add
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c1adf
        ;   Label: LAB_005c1adf
    TEST EAX,EAX                        ; 005c1ae3
    JZ 0x005c1aeb                       ; 005c1ae5
        ;   XREF to: 005c1aeb (CONDITIONAL_JUMP)  ; LAB_005c1aeb
    SUB EAX,ESI                         ; 005c1ae7
    MOV ESI,EAX                         ; 005c1ae9
    MOV EAX,ESI                         ; 005c1aeb
        ;   Label: LAB_005c1aeb
    MOV dword ptr [EBX + 0x20],ESI      ; 005c1aed
    ADD ESP,0x1c                        ; 005c1af0
    POP EBP                             ; 005c1af3
    POP EDI                             ; 005c1af4
    POP ESI                             ; 005c1af5
    POP EBX                             ; 005c1af6
    RET                                 ; 005c1af7

