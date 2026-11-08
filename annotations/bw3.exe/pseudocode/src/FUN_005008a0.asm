; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005008a0(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
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
;
; XREF[1]:
;   FUN_00502d60 at 00503653
;
; Referenced Globals:
;   undefined4 DAT_006016c8
;   undefined4 DAT_006016cc
;   undefined4 DAT_006016d0
;   undefined4 DAT_006016d4
;   undefined4 DAT_006016d8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005008a0
        ;   Label: FUN_005008a0
    PUSH ESI                            ; 005008a1
    PUSH EDI                            ; 005008a2
    PUSH EBP                            ; 005008a3
    SUB ESP,0x58                        ; 005008a4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 005008a7
    MOV EDI,dword ptr [ESP + 0x70]      ; 005008ab
    MOV ECX,dword ptr [ESP + 0x78]      ; 005008af
    MOV ECX,dword ptr [ECX]             ; 005008b3
    MOV EDX,dword ptr [ECX]             ; 005008b5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005008b7
    SUB EAX,EDX                         ; 005008be
    MOV EDX,dword ptr [ECX + 0x10]      ; 005008c0
    LEA EBX,[EDI + 0x48]                ; 005008c3
    ADD EDX,EAX                         ; 005008c6
    XOR ECX,ECX                         ; 005008c8
    MOV dword ptr [ESP],EDX             ; 005008ca
    IMUL EAX,ECX,0x48                   ; 005008cd
        ;   Label: LAB_005008cd
    MOV EDX,EBX                         ; 005008d0
    ADD EAX,EDI                         ; 005008d2
    MOV dword ptr [EAX],0x0             ; 005008d4
        ;   Label: LAB_005008d4
    ADD EAX,0x4                         ; 005008da
    CMP EAX,EDX                         ; 005008dd
    JNZ 0x005008d4                      ; 005008df
        ;   XREF to: 005008d4 (CONDITIONAL_JUMP)  ; LAB_005008d4
    INC ECX                             ; 005008e1
    ADD EBX,0x48                        ; 005008e2
    CMP ECX,0x20                        ; 005008e5
    JL 0x005008cd                       ; 005008e8
        ;   XREF to: 005008cd (CONDITIONAL_JUMP)  ; LAB_005008cd
    MOV EAX,dword ptr [ESP + 0x74]      ; 005008ea
    CMP dword ptr [EAX + 0x10],0x0      ; 005008ee
    JZ 0x005008fa                       ; 005008f2
        ;   XREF to: 005008fa (CONDITIONAL_JUMP)  ; LAB_005008fa
    CMP dword ptr [EAX + 0x14],0x2      ; 005008f4
    JZ 0x0050093d                       ; 005008f8
        ;   XREF to: 0050093d (CONDITIONAL_JUMP)  ; LAB_0050093d
    LEA EBP,[ESI + 0x48]                ; 005008fa
        ;   Label: LAB_005008fa
    MOV dword ptr [ESP + 0x10],EDI      ; 005008fd
    XOR EBX,EBX                         ; 00500901
    MOV EDI,0x48                        ; 00500903
    IMUL EAX,EBX,0x48                   ; 00500908
        ;   Label: LAB_00500908
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050090b
    MOV ECX,EBP                         ; 0050090f
    ADD EAX,ESI                         ; 00500911
    ADD EDX,0x4                         ; 00500913
        ;   Label: LAB_00500913
    FLD float ptr [EAX]                 ; 00500916
    ADD EAX,0x4                         ; 00500918
    FSTP float ptr [EDX + -0x4]         ; 0050091b
    CMP EAX,ECX                         ; 0050091e
    JNZ 0x00500913                      ; 00500920
        ;   XREF to: 00500913 (CONDITIONAL_JUMP)  ; LAB_00500913
    MOV EAX,dword ptr [ESP + 0x10]      ; 00500922
    INC EBX                             ; 00500926
    ADD EAX,EDI                         ; 00500927
    ADD EBP,0x48                        ; 00500929
    MOV dword ptr [ESP + 0x10],EAX      ; 0050092c
    CMP EBX,0x20                        ; 00500930
    JL 0x00500908                       ; 00500933
        ;   XREF to: 00500908 (CONDITIONAL_JUMP)  ; LAB_00500908
    ADD ESP,0x58                        ; 00500935
        ;   Label: LAB_00500935
    POP EBP                             ; 00500938
    POP EDI                             ; 00500939
    POP ESI                             ; 0050093a
    POP EBX                             ; 0050093b
    RET                                 ; 0050093c
    CMP dword ptr [EAX + 0x18],0x0      ; 0050093d
        ;   Label: LAB_0050093d
    JZ 0x00500abb                       ; 00500941
        ;   XREF to: 00500abb (CONDITIONAL_JUMP)  ; LAB_00500abb
    MOV EBP,0x48                        ; 00500947
    LEA EAX,[ESI + 0x48]                ; 0050094c
    MOV dword ptr [ESP + 0x14],EDI      ; 0050094f
    XOR EBX,EBX                         ; 00500953
    MOV dword ptr [ESP + 0xc],EAX       ; 00500955
    IMUL EAX,EBX,0x48                   ; 00500959
        ;   Label: LAB_00500959
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050095c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00500960
    ADD EAX,ESI                         ; 00500964
    ADD EDX,0x4                         ; 00500966
        ;   Label: LAB_00500966
    FLD float ptr [EAX]                 ; 00500969
    ADD EAX,0x4                         ; 0050096b
    FSTP float ptr [EDX + -0x4]         ; 0050096e
    CMP EAX,ECX                         ; 00500971
    JNZ 0x00500966                      ; 00500973
        ;   XREF to: 00500966 (CONDITIONAL_JUMP)  ; LAB_00500966
    MOV ECX,dword ptr [ESP + 0x14]      ; 00500975
    MOV EDX,dword ptr [ESP + 0xc]       ; 00500979
    INC EBX                             ; 0050097d
    ADD ECX,EBP                         ; 0050097e
    ADD EDX,EBP                         ; 00500980
    MOV dword ptr [ESP + 0x14],ECX      ; 00500982
    MOV dword ptr [ESP + 0xc],EDX       ; 00500986
    CMP EBX,0x2                         ; 0050098a
    JL 0x00500959                       ; 0050098d
        ;   XREF to: 00500959 (CONDITIONAL_JUMP)  ; LAB_00500959
    MOV EDX,dword ptr [ESP]             ; 0050098f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00500992
    ADD EAX,EDX                         ; 00500999
    SHL EAX,0x2                         ; 0050099b
    ADD EAX,EDX                         ; 0050099e
    SHL EAX,0x2                         ; 005009a0
    MOV EDX,dword ptr [EAX + 0x6016d0]  ; 005009a3 | DAT_006016d0
    MOV ECX,dword ptr [EAX + 0x6016d4]  ; 005009a9 | DAT_006016d4
    SUB ECX,EDX                         ; 005009af
    MOV dword ptr [ESP + 0x34],ECX      ; 005009b1
    LEA ECX,[EAX + 0xc]                 ; 005009b5
    ADD EAX,0x34                        ; 005009b8
    MOV dword ptr [ESP + 0x18],ECX      ; 005009bb
    MOV dword ptr [ESP + 0x4],EAX       ; 005009bf
    XOR EAX,EAX                         ; 005009c3
        ;   Label: LAB_005009c3
    LEA EDX,[EDX + EDX*0x2]             ; 005009c5
    MOV dword ptr [ESP + 0x40],EAX      ; 005009c8
    MOV dword ptr [ESP + 0x2c],EDX      ; 005009cc
    MOV EAX,dword ptr [ESP + 0x34]      ; 005009d0
    MOV dword ptr [ESP + 0x38],EDX      ; 005009d4
    MOV dword ptr [ESP + 0x24],EAX      ; 005009d8
    MOV EDX,dword ptr [ESP + 0x34]      ; 005009dc
        ;   Label: LAB_005009dc
    TEST EDX,EDX                        ; 005009e0
    JLE 0x00500a72                      ; 005009e2
        ;   XREF to: 00500a72 (CONDITIONAL_JUMP)  ; LAB_00500a72
    MOV EAX,dword ptr [ESP + 0x40]      ; 005009e8
    IMUL EAX,EDX                        ; 005009ec
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005009ef
    MOV EDX,dword ptr [ESP + 0x24]      ; 005009f3
    ADD EAX,ECX                         ; 005009f7
    MOV EBX,dword ptr [ESP + 0x38]      ; 005009f9
    ADD EDX,EAX                         ; 005009fd
    MOV ECX,EAX                         ; 005009ff
    MOV dword ptr [ESP + 0x4c],EDX      ; 00500a01
    MOV EBP,0x12                        ; 00500a05
        ;   Label: LAB_00500a05
    MOV EDX,ECX                         ; 00500a0a
    MOV EAX,ECX                         ; 00500a0c
    SAR EDX,0x1f                        ; 00500a0e
    IDIV EBP                            ; 00500a11
    IMUL EAX,EAX,0x48                   ; 00500a13
    MOV EDX,ECX                         ; 00500a16
    MOV dword ptr [ESP + 0x54],0x12     ; 00500a18
    SAR EDX,0x1f                        ; 00500a20
    LEA EBP,[ESI + EAX*0x1]             ; 00500a23
    MOV EAX,ECX                         ; 00500a26
    IDIV dword ptr [ESP + 0x54]         ; 00500a28
    SHL EDX,0x2                         ; 00500a2c
    ADD EBP,EDX                         ; 00500a2f
    MOV EAX,EBX                         ; 00500a31
    MOV dword ptr [ESP + 0x50],EBP      ; 00500a33
    MOV EDX,EBX                         ; 00500a37
    MOV EBP,0x12                        ; 00500a39
    SAR EDX,0x1f                        ; 00500a3e
    IDIV EBP                            ; 00500a41
    IMUL EAX,EAX,0x48                   ; 00500a43
    MOV EDX,EBX                         ; 00500a46
    MOV dword ptr [ESP + 0x54],0x12     ; 00500a48
    SAR EDX,0x1f                        ; 00500a50
    LEA EBP,[EDI + EAX*0x1]             ; 00500a53
    MOV EAX,EBX                         ; 00500a56
    IDIV dword ptr [ESP + 0x54]         ; 00500a58
    MOV EAX,dword ptr [ESP + 0x50]      ; 00500a5c
    INC ECX                             ; 00500a60
    FLD float ptr [EAX]                 ; 00500a61
    FSTP float ptr [EBP + EDX*0x4]      ; 00500a63
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00500a67
    ADD EBX,0x3                         ; 00500a6b
    CMP ECX,EBP                         ; 00500a6e
    JL 0x00500a05                       ; 00500a70
        ;   XREF to: 00500a05 (CONDITIONAL_JUMP)  ; LAB_00500a05
    MOV EDX,dword ptr [ESP + 0x40]      ; 00500a72
        ;   Label: LAB_00500a72
    MOV EAX,dword ptr [ESP + 0x38]      ; 00500a76
    INC EDX                             ; 00500a7a
    INC EAX                             ; 00500a7b
    MOV dword ptr [ESP + 0x40],EDX      ; 00500a7c
    MOV dword ptr [ESP + 0x38],EAX      ; 00500a80
    CMP EDX,0x3                         ; 00500a84
    JL 0x005009dc                       ; 00500a87
        ;   XREF to: 005009dc (CONDITIONAL_JUMP)  ; LAB_005009dc
    MOV EBX,dword ptr [ESP + 0x18]      ; 00500a8d
    MOV EBP,dword ptr [ESP + 0x4]       ; 00500a91
    MOV EDX,dword ptr [EBX + 0x6016c8]  ; 00500a95 | DAT_006016d4
    MOV EAX,dword ptr [EBX + 0x6016cc]  ; 00500a9b | DAT_006016d8
    ADD EBX,0x4                         ; 00500aa1
    SUB EAX,EDX                         ; 00500aa4
    MOV dword ptr [ESP + 0x18],EBX      ; 00500aa6
    MOV dword ptr [ESP + 0x34],EAX      ; 00500aaa
    CMP EBX,EBP                         ; 00500aae
    JZ 0x00500935                       ; 00500ab0
        ;   XREF to: 00500935 (CONDITIONAL_JUMP)  ; LAB_00500935
    JMP 0x005009c3                      ; 00500ab6
        ;   XREF to: 005009c3 (UNCONDITIONAL_JUMP)  ; LAB_005009c3
    MOV ECX,dword ptr [ESP]             ; 00500abb
        ;   Label: LAB_00500abb
    LEA EAX,[ECX*0x8 + 0x0]             ; 00500abe
    ADD EAX,ECX                         ; 00500ac5
    SHL EAX,0x2                         ; 00500ac7
    ADD EAX,ECX                         ; 00500aca
    SHL EAX,0x2                         ; 00500acc
    XOR EDX,EDX                         ; 00500acf
    MOV dword ptr [ESP + 0x1c],EAX      ; 00500ad1
    MOV ECX,dword ptr [EAX + 0x6016c8]  ; 00500ad5 | DAT_006016c8
    ADD EAX,0x34                        ; 00500adb
    MOV dword ptr [ESP + 0x30],ECX      ; 00500ade
    MOV dword ptr [ESP + 0x8],EAX       ; 00500ae2
    MOV EAX,dword ptr [ESP + 0x30]      ; 00500ae6
        ;   Label: LAB_00500ae6
    LEA EDX,[EDX + EDX*0x2]             ; 00500aea
    XOR EBX,EBX                         ; 00500aed
    MOV dword ptr [ESP + 0x28],EDX      ; 00500aef
    MOV dword ptr [ESP + 0x3c],EDX      ; 00500af3
    MOV dword ptr [ESP + 0x20],EAX      ; 00500af7
    MOV dword ptr [ESP + 0x44],EBX      ; 00500afb
    MOV EBP,dword ptr [ESP + 0x30]      ; 00500aff
        ;   Label: LAB_00500aff
    TEST EBP,EBP                        ; 00500b03
    JLE 0x00500b95                      ; 00500b05
        ;   XREF to: 00500b95 (CONDITIONAL_JUMP)  ; LAB_00500b95
    MOV EAX,dword ptr [ESP + 0x44]      ; 00500b0b
    IMUL EAX,EBP                        ; 00500b0f
    MOV EBP,dword ptr [ESP + 0x28]      ; 00500b12
    MOV EDX,dword ptr [ESP + 0x20]      ; 00500b16
    ADD EAX,EBP                         ; 00500b1a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00500b1c
    ADD EDX,EAX                         ; 00500b20
    MOV ECX,EAX                         ; 00500b22
    MOV dword ptr [ESP + 0x48],EDX      ; 00500b24
    MOV EBP,0x12                        ; 00500b28
        ;   Label: LAB_00500b28
    MOV EDX,ECX                         ; 00500b2d
    MOV EAX,ECX                         ; 00500b2f
    SAR EDX,0x1f                        ; 00500b31
    IDIV EBP                            ; 00500b34
    IMUL EAX,EAX,0x48                   ; 00500b36
    MOV EDX,ECX                         ; 00500b39
    MOV dword ptr [ESP + 0x54],0x12     ; 00500b3b
    SAR EDX,0x1f                        ; 00500b43
    LEA EBP,[ESI + EAX*0x1]             ; 00500b46
    MOV EAX,ECX                         ; 00500b49
    IDIV dword ptr [ESP + 0x54]         ; 00500b4b
    SHL EDX,0x2                         ; 00500b4f
    ADD EBP,EDX                         ; 00500b52
    MOV EAX,EBX                         ; 00500b54
    MOV dword ptr [ESP + 0x50],EBP      ; 00500b56
    MOV EDX,EBX                         ; 00500b5a
    MOV EBP,0x12                        ; 00500b5c
    SAR EDX,0x1f                        ; 00500b61
    IDIV EBP                            ; 00500b64
    IMUL EAX,EAX,0x48                   ; 00500b66
    MOV EDX,EBX                         ; 00500b69
    MOV dword ptr [ESP + 0x54],0x12     ; 00500b6b
    SAR EDX,0x1f                        ; 00500b73
    LEA EBP,[EDI + EAX*0x1]             ; 00500b76
    MOV EAX,EBX                         ; 00500b79
    IDIV dword ptr [ESP + 0x54]         ; 00500b7b
    MOV EAX,dword ptr [ESP + 0x50]      ; 00500b7f
    INC ECX                             ; 00500b83
    ADD EBX,0x3                         ; 00500b84
    FLD float ptr [EAX]                 ; 00500b87
    MOV EAX,dword ptr [ESP + 0x48]      ; 00500b89
    FSTP float ptr [EBP + EDX*0x4]      ; 00500b8d
    CMP ECX,EAX                         ; 00500b91
    JL 0x00500b28                       ; 00500b93
        ;   XREF to: 00500b28 (CONDITIONAL_JUMP)  ; LAB_00500b28
    MOV ECX,dword ptr [ESP + 0x44]      ; 00500b95
        ;   Label: LAB_00500b95
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00500b99
    INC ECX                             ; 00500b9d
    INC EDX                             ; 00500b9e
    MOV dword ptr [ESP + 0x44],ECX      ; 00500b9f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00500ba3
    CMP ECX,0x3                         ; 00500ba7
    JL 0x00500aff                       ; 00500baa
        ;   XREF to: 00500aff (CONDITIONAL_JUMP)  ; LAB_00500aff
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00500bb0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00500bb4
    MOV EDX,dword ptr [EBP + 0x6016c8]  ; 00500bb8 | DAT_006016c8
    MOV EAX,dword ptr [EBP + 0x6016cc]  ; 00500bbe | DAT_006016cc
    ADD EBP,0x4                         ; 00500bc4
    SUB EAX,EDX                         ; 00500bc7
    MOV dword ptr [ESP + 0x1c],EBP      ; 00500bc9
    MOV dword ptr [ESP + 0x30],EAX      ; 00500bcd
    CMP EBP,ECX                         ; 00500bd1
    JZ 0x00500935                       ; 00500bd3
        ;   XREF to: 00500935 (CONDITIONAL_JUMP)  ; LAB_00500935
    JMP 0x00500ae6                      ; 00500bd9
        ;   XREF to: 00500ae6 (UNCONDITIONAL_JUMP)  ; LAB_00500ae6

