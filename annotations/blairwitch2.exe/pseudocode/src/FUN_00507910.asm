; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507910(uint *param_1,float *param_2,int param_3,int param_4,int param_5,int *param_6)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
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
;   FUN_0050a280 at 0050aa9f
;
; Referenced Globals:
;   undefined4 DAT_005e0213
;   undefined4 DAT_005e021b
;   undefined4 DAT_005e0223
;   undefined4 DAT_00618df4
;   undefined4 DAT_0061933c
;   undefined4 DAT_00619340
;   undefined4 DAT_0061934c
;   undefined4 DAT_00619358
;   undefined4 DAT_00619398
;   undefined4 DAT_0061939c
;   undefined4 DAT_006193a0
;   undefined4 DAT_006193a4
;   undefined4 DAT_006193a8
;   undefined4 DAT_01d1edd4
;
; Called Functions:
;   FUN_005b9484
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507910
        ;   Label: FUN_00507910
    PUSH ESI                            ; 00507911
    PUSH EDI                            ; 00507912
    PUSH EBP                            ; 00507913
    MOV EBP,ESP                         ; 00507914
    SUB ESP,0x68                        ; 00507916
    AND ESP,0xfffffff8                  ; 00507919
    MOV ECX,dword ptr [EBP + 0x20]      ; 0050791c
    MOV EBX,dword ptr [EBP + 0x28]      ; 0050791f
    MOV EBX,dword ptr [EBX]             ; 00507922
    MOV EDX,dword ptr [EBX]             ; 00507924
    XOR ESI,ESI                         ; 00507926
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507928
    MOV EDI,dword ptr [EBX + 0x10]      ; 0050792f
    SUB EAX,EDX                         ; 00507932
    MOV EDX,dword ptr [ECX + 0x10]      ; 00507934
    ADD EDI,EAX                         ; 00507937
    TEST EDX,EDX                        ; 00507939
    JZ 0x00507b6f                       ; 0050793b
        ;   XREF to: 00507b6f (CONDITIONAL_JUMP)  ; LAB_00507b6f
    CMP dword ptr [ECX + 0x14],0x2      ; 00507941
    JNZ 0x00507b6f                      ; 00507945
        ;   XREF to: 00507b6f (CONDITIONAL_JUMP)  ; LAB_00507b6f
    LEA EAX,[EDI*0x8 + 0x0]             ; 0050794b
    ADD EAX,EDI                         ; 00507952
    SHL EAX,0x2                         ; 00507954
    LEA EDX,[EDI + EAX*0x1]             ; 00507957
    MOV EAX,dword ptr [ECX + 0x18]      ; 0050795a
    SHL EDX,0x2                         ; 0050795d
    TEST EAX,EAX                        ; 00507960
    JZ 0x00507b45                       ; 00507962
        ;   XREF to: 00507b45 (CONDITIONAL_JUMP)  ; LAB_00507b45
    MOV EAX,dword ptr [EDX + 0x61933c]  ; 00507968 | DAT_0061933c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050796e
        ;   Label: LAB_0050796e
    MOV EDX,dword ptr [0x01d1edd4]      ; 00507972 | DAT_01d1edd4
        ;   Label: LAB_00507972
    TEST EDX,EDX                        ; 00507978
    JZ 0x00507b89                       ; 0050797a
        ;   XREF to: 00507b89 (CONDITIONAL_JUMP)  ; LAB_00507b89
    XOR EAX,EAX                         ; 00507980
        ;   Label: LAB_00507980
    MOV dword ptr [ESP + 0x34],EAX      ; 00507982
    MOV EAX,dword ptr [EBP + 0x24]      ; 00507986
    SHL EAX,0x3                         ; 00507989
    MOV EDX,EAX                         ; 0050798c
    SHL EAX,0x5                         ; 0050798e
    SUB EAX,EDX                         ; 00507991
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00507993
    ADD EDX,EAX                         ; 00507996
    LEA EAX,[EDI*0x8 + 0x0]             ; 00507998
    ADD EAX,EDI                         ; 0050799f
    SHL EAX,0x2                         ; 005079a1
    ADD EAX,EDI                         ; 005079a4
    SHL EAX,0x2                         ; 005079a6
    MOV dword ptr [ESP + 0x20],EDX      ; 005079a9
    MOV dword ptr [ESP + 0x54],EAX      ; 005079ad
    MOV dword ptr [ESP + 0x1c],EAX      ; 005079b1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005079b5
    MOV dword ptr [ESP + 0x18],EDX      ; 005079b8
    MOV dword ptr [ESP + 0x14],EAX      ; 005079bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005079c0
    XOR EDX,EDX                         ; 005079c3
    MOV dword ptr [ESP + 0x8],EAX       ; 005079c5
    MOV EAX,dword ptr [ESP + 0x54]      ; 005079c9
    MOV dword ptr [ESP + 0xc],EDX       ; 005079cd
    ADD EAX,0xc                         ; 005079d1
    MOV dword ptr [ESP + 0x10],EDX      ; 005079d4
    MOV dword ptr [ESP + 0x38],EAX      ; 005079d8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005079dc
        ;   Label: LAB_005079dc
    MOV dword ptr [ESP + 0x58],EAX      ; 005079e0
    MOV dword ptr [ESP + 0x40],EAX      ; 005079e4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005079e8
    MOV dword ptr [ESP + 0x3c],EAX      ; 005079ec
    MOV dword ptr [ESP + 0x44],EAX      ; 005079f0
    MOV dword ptr [ESP + 0x60],EAX      ; 005079f4
    MOV EAX,dword ptr [ESP + 0x8]       ; 005079f8
    MOV EDX,dword ptr [ESP + 0x10]      ; 005079fc
    MOV dword ptr [ESP + 0x48],EAX      ; 00507a00
    MOV EAX,dword ptr [EBP + 0x18]      ; 00507a04
    ADD EAX,EDX                         ; 00507a07
    MOV dword ptr [ESP + 0x30],EAX      ; 00507a09
    MOV dword ptr [ESP + 0x28],EAX      ; 00507a0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00507a11
    ADD EAX,EDX                         ; 00507a14
    XOR EDI,EDI                         ; 00507a16
    MOV dword ptr [ESP + 0x2c],EAX      ; 00507a18
    MOV dword ptr [ESP + 0x24],EAX      ; 00507a1c
    MOV EAX,dword ptr [ESP + 0x58]      ; 00507a20
        ;   Label: LAB_00507a20
    CMP EAX,dword ptr [ESP + 0x5c]      ; 00507a24
    JNZ 0x00507aa0                      ; 00507a28
        ;   XREF to: 00507aa0 (CONDITIONAL_JUMP)  ; LAB_00507aa0
    CMP dword ptr [ECX + 0x10],0x0      ; 00507a2a
    JZ 0x00507c37                       ; 00507a2e
        ;   XREF to: 00507c37 (CONDITIONAL_JUMP)  ; LAB_00507c37
    CMP dword ptr [ECX + 0x14],0x2      ; 00507a34
    JNZ 0x00507c37                      ; 00507a38
        ;   XREF to: 00507c37 (CONDITIONAL_JUMP)  ; LAB_00507c37
    INC ESI                             ; 00507a3e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00507a3f
    LEA EBX,[ESI*0x4 + 0x0]             ; 00507a43
    MOV EDX,dword ptr [ECX + 0x18]      ; 00507a4a
    ADD EBX,EAX                         ; 00507a4d
    TEST EDX,EDX                        ; 00507a4f
    JZ 0x00507c10                       ; 00507a51
        ;   XREF to: 00507c10 (CONDITIONAL_JUMP)  ; LAB_00507c10
    MOV EDX,dword ptr [ESP + 0x54]      ; 00507a57
    MOV EAX,dword ptr [ESP + 0x58]      ; 00507a5b
    CMP EAX,dword ptr [EDX + 0x619358]  ; 00507a5f | DAT_00619358
    JNZ 0x00507bff                      ; 00507a65
        ;   XREF to: 00507bff (CONDITIONAL_JUMP)  ; LAB_00507bff
    MOV EAX,dword ptr [EDX + 0x6193a4]  ; 00507a6b | DAT_006193a4
    LEA EAX,[EAX + EAX*0x2]             ; 00507a71
    MOV EDX,dword ptr [ESP + 0x38]      ; 00507a74
    MOV dword ptr [ESP + 0x5c],EAX      ; 00507a78
    MOV EAX,dword ptr [ESP + 0x38]      ; 00507a7c
    MOV EBX,dword ptr [EDX + 0x619394]  ; 00507a80 | DAT_006193a0
    MOV EAX,dword ptr [EAX + 0x619398]  ; 00507a86 | DAT_006193a4
    SUB EAX,EBX                         ; 00507a8c
    MOV ESI,0x3                         ; 00507a8e
    MOV dword ptr [ESP + 0x50],EAX      ; 00507a93
    MOV EAX,EBX                         ; 00507a97
    IMUL EAX,ESI                        ; 00507a99
    MOV dword ptr [ESP + 0x4c],EAX      ; 00507a9c
        ;   Label: LAB_00507a9c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00507aa0
        ;   Label: LAB_00507aa0
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 00507aa4
    TEST EDX,EDX                        ; 00507aa7
    JNZ 0x00507c54                      ; 00507aa9
        ;   XREF to: 00507c54 (CONDITIONAL_JUMP)  ; LAB_00507c54
    MOV EAX,dword ptr [ESP + 0x30]      ; 00507aaf
    MOV dword ptr [EDI + EAX*0x1],EDX   ; 00507ab3
    MOV EAX,dword ptr [ESP + 0x58]      ; 00507ab6
        ;   Label: LAB_00507ab6
    MOV EDX,dword ptr [ESP + 0x40]      ; 00507aba
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00507abe
    ADD EDI,0x4                         ; 00507ac2
    INC EAX                             ; 00507ac5
    INC EDX                             ; 00507ac6
    ADD EBX,0x4                         ; 00507ac7
    MOV dword ptr [ESP + 0x58],EAX      ; 00507aca
    MOV dword ptr [ESP + 0x40],EDX      ; 00507ace
    MOV dword ptr [ESP + 0x3c],EBX      ; 00507ad2
    MOV EAX,dword ptr [ESP + 0x44]      ; 00507ad6
    MOV EDX,dword ptr [ESP + 0x60]      ; 00507ada
    MOV EBX,dword ptr [ESP + 0x48]      ; 00507ade
    ADD EAX,0x4                         ; 00507ae2
    ADD EDX,0x4                         ; 00507ae5
    ADD EBX,0x4                         ; 00507ae8
    MOV dword ptr [ESP + 0x44],EAX      ; 00507aeb
    MOV dword ptr [ESP + 0x60],EDX      ; 00507aef
    MOV dword ptr [ESP + 0x48],EBX      ; 00507af3
    CMP EDI,0x48                        ; 00507af7
    JNZ 0x00507a20                      ; 00507afa
        ;   XREF to: 00507a20 (CONDITIONAL_JUMP)  ; LAB_00507a20
    MOV EDI,dword ptr [ESP + 0xc]       ; 00507b00
    MOV EAX,dword ptr [ESP + 0x10]      ; 00507b04
    MOV EDX,dword ptr [ESP + 0x14]      ; 00507b08
    MOV EBX,dword ptr [ESP + 0x8]       ; 00507b0c
    ADD EDI,0x12                        ; 00507b10
    ADD EAX,0x48                        ; 00507b13
    ADD EDX,0x48                        ; 00507b16
    ADD EBX,0x48                        ; 00507b19
    MOV dword ptr [ESP + 0xc],EDI       ; 00507b1c
    MOV dword ptr [ESP + 0x10],EAX      ; 00507b20
    MOV EDI,dword ptr [ESP + 0x34]      ; 00507b24
    MOV dword ptr [ESP + 0x14],EDX      ; 00507b28
    INC EDI                             ; 00507b2c
    MOV dword ptr [ESP + 0x8],EBX       ; 00507b2d
    MOV dword ptr [ESP + 0x34],EDI      ; 00507b31
    CMP EDI,0x20                        ; 00507b35
    JL 0x005079dc                       ; 00507b38
        ;   XREF to: 005079dc (CONDITIONAL_JUMP)  ; LAB_005079dc
    MOV ESP,EBP                         ; 00507b3e
    POP EBP                             ; 00507b40
    POP EDI                             ; 00507b41
    POP ESI                             ; 00507b42
    POP EBX                             ; 00507b43
    RET                                 ; 00507b44
    MOV EAX,dword ptr [EDX + 0x619398]  ; 00507b45 | DAT_00619398
        ;   Label: LAB_00507b45
    MOV dword ptr [ESP + 0x64],EAX      ; 00507b4b
    MOV EBX,dword ptr [ESP + 0x64]      ; 00507b4f
    SHL EAX,0x2                         ; 00507b53
    SUB EAX,EBX                         ; 00507b56
    MOV dword ptr [ESP + 0x5c],EAX      ; 00507b58
    MOV EAX,dword ptr [EDX + 0x619398]  ; 00507b5c | DAT_00619398
    MOV dword ptr [ESP + 0x4c],ESI      ; 00507b62
    MOV dword ptr [ESP + 0x50],EAX      ; 00507b66
    JMP 0x00507972                      ; 00507b6a
        ;   XREF to: 00507972 (UNCONDITIONAL_JUMP)  ; LAB_00507972
    LEA EAX,[EDI*0x8 + 0x0]             ; 00507b6f
        ;   Label: LAB_00507b6f
    ADD EAX,EDI                         ; 00507b76
    SHL EAX,0x2                         ; 00507b78
    ADD EAX,EDI                         ; 00507b7b
    MOV EAX,dword ptr [EAX*0x4 + 0x61933c] ; 00507b7d | DAT_0061933c
    JMP 0x0050796e                      ; 00507b84
        ;   XREF to: 0050796e (UNCONDITIONAL_JUMP)  ; LAB_0050796e
    XOR EBX,EBX                         ; 00507b89
        ;   Label: LAB_00507b89
    FLD double ptr [0x005e021b]         ; 00507b8b | DAT_005e021b
    MOV dword ptr [ESP + 0x64],EDX      ; 00507b91
        ;   Label: LAB_00507b91
    FLD ST0                             ; 00507b95
    FILD dword ptr [ESP + 0x64]         ; 00507b97
    CALL FUN_005b9484                   ; 00507b9b
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9484()
    ADD EBX,0x8                         ; 00507ba0
    INC EDX                             ; 00507ba3
    FSTP double ptr [EBX + 0x1d1edd0]   ; 00507ba4
    CMP EDX,0xc8                        ; 00507baa
    JL 0x00507b91                       ; 00507bb0
        ;   XREF to: 00507b91 (CONDITIONAL_JUMP)  ; LAB_00507b91
    FSTP ST0                            ; 00507bb2
    XOR EDX,EDX                         ; 00507bb4
    XOR EBX,EBX                         ; 00507bb6
    FLD double ptr [0x005e0223]         ; 00507bb8 | DAT_005e0223
    FLD double ptr [0x005e0213]         ; 00507bbe | DAT_005e0213
    MOV EAX,EDX                         ; 00507bc4
        ;   Label: LAB_00507bc4
    NEG EAX                             ; 00507bc6
    MOV dword ptr [ESP + 0x64],EAX      ; 00507bc8
    FILD dword ptr [ESP + 0x64]         ; 00507bcc
    FMUL ST1                            ; 00507bd0
    FLD ST2                             ; 00507bd2
    CALL FUN_005b9484                   ; 00507bd4
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9484()
    ADD EBX,0x8                         ; 00507bd9
    INC EDX                             ; 00507bdc
    FSTP double ptr [EBX + 0x1d1f410]   ; 00507bdd
    CMP EDX,0xc8                        ; 00507be3
    JL 0x00507bc4                       ; 00507be9
        ;   XREF to: 00507bc4 (CONDITIONAL_JUMP)  ; LAB_00507bc4
    FSTP ST0                            ; 00507beb
    MOV EBX,0x1                         ; 00507bed
    FSTP ST0                            ; 00507bf2
    MOV dword ptr [0x01d1edd4],EBX      ; 00507bf4 | DAT_01d1edd4
    JMP 0x00507980                      ; 00507bfa
        ;   XREF to: 00507980 (UNCONDITIONAL_JUMP)  ; LAB_00507980
    JGE 0x00507c10                      ; 00507bff
        ;   XREF to: 00507c10 (CONDITIONAL_JUMP)  ; LAB_00507c10
        ;   Label: LAB_00507bff
    MOV EAX,dword ptr [EBX + 0x61933c]  ; 00507c01 | DAT_00619340
    MOV dword ptr [ESP + 0x5c],EAX      ; 00507c07
    JMP 0x00507aa0                      ; 00507c0b
        ;   XREF to: 00507aa0 (UNCONDITIONAL_JUMP)  ; LAB_00507aa0
    MOV EAX,dword ptr [EBX + 0x619398]  ; 00507c10 | DAT_006193a8 | DAT_0061939c
        ;   Label: LAB_00507c10
    LEA EAX,[EAX + EAX*0x2]             ; 00507c16
    MOV EDX,dword ptr [EBX + 0x619394]  ; 00507c19 | DAT_006193a4 | DAT_00619398
    MOV dword ptr [ESP + 0x5c],EAX      ; 00507c1f
    MOV EAX,dword ptr [EBX + 0x619398]  ; 00507c23 | DAT_006193a8 | DAT_0061939c
    SUB EAX,EDX                         ; 00507c29
    MOV dword ptr [ESP + 0x50],EAX      ; 00507c2b
    LEA EAX,[EDX + EDX*0x2]             ; 00507c2f
    JMP 0x00507a9c                      ; 00507c32
        ;   XREF to: 00507a9c (UNCONDITIONAL_JUMP)  ; LAB_00507a9c
    INC ESI                             ; 00507c37
        ;   Label: LAB_00507c37
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00507c38
    LEA EAX,[ESI*0x4 + 0x0]             ; 00507c3c
    ADD EAX,EDX                         ; 00507c43
    MOV EAX,dword ptr [EAX + 0x61933c]  ; 00507c45 | DAT_0061934c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00507c4b
    JMP 0x00507aa0                      ; 00507c4f
        ;   XREF to: 00507aa0 (UNCONDITIONAL_JUMP)  ; LAB_00507aa0
    MOV EBX,dword ptr [ECX + 0x8]       ; 00507c54
        ;   Label: LAB_00507c54
    MOV EAX,dword ptr [ECX + 0x10]      ; 00507c57
    SUB EBX,0xd2                        ; 00507c5a
    TEST EAX,EAX                        ; 00507c60
    JZ 0x00507d4e                       ; 00507c62
        ;   XREF to: 00507d4e (CONDITIONAL_JUMP)  ; LAB_00507d4e
    CMP dword ptr [ECX + 0x14],0x2      ; 00507c68
    JNZ 0x00507d37                      ; 00507c6c
        ;   XREF to: 00507d37 (CONDITIONAL_JUMP)  ; LAB_00507d37
    CMP dword ptr [ECX + 0x18],0x0      ; 00507c72
    JNZ 0x00507d37                      ; 00507c76
        ;   XREF to: 00507d37 (CONDITIONAL_JUMP)  ; LAB_00507d37
    MOV EDX,dword ptr [ESP + 0x40]      ; 00507c7c
        ;   Label: LAB_00507c7c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00507c80
    SUB EDX,EAX                         ; 00507c84
    MOV EAX,EDX                         ; 00507c86
    SAR EDX,0x1f                        ; 00507c88
    IDIV dword ptr [ESP + 0x50]         ; 00507c8b
    MOV dword ptr [ESP + 0x64],EAX      ; 00507c8f
    MOV EAX,dword ptr [ECX + EAX*0x4 + 0x28] ; 00507c93
    SHL EAX,0x3                         ; 00507c97
    MOV EDX,dword ptr [ESP + 0x64]      ; 00507c9a
    SUB EBX,EAX                         ; 00507c9e
    IMUL EAX,EDX,0x34                   ; 00507ca0
    MOV EDX,dword ptr [ESP + 0x20]      ; 00507ca3
    ADD EDX,EAX                         ; 00507ca7
    LEA EAX,[ESI*0x4 + 0x0]             ; 00507ca9
    ADD EDX,EAX                         ; 00507cb0
    MOV EAX,dword ptr [ECX + 0x40]      ; 00507cb2
    INC EAX                             ; 00507cb5
    ADD EAX,EAX                         ; 00507cb6
    NEG EAX                             ; 00507cb8
    IMUL EAX,dword ptr [EDX + 0x5c]     ; 00507cba
    ADD EBX,EAX                         ; 00507cbe
        ;   Label: LAB_00507cbe
    TEST EBX,EBX                        ; 00507cc0
    JLE 0x00507d87                      ; 00507cc2
        ;   XREF to: 00507d87 (CONDITIONAL_JUMP)  ; LAB_00507d87
    MOV dword ptr [ESP + 0x64],EBX      ; 00507cc8
        ;   Label: LAB_00507cc8
    FILD dword ptr [ESP + 0x64]         ; 00507ccc
    FMUL double ptr [0x005e0213]        ; 00507cd0 | DAT_005e0213
    FLD double ptr [0x005e0223]         ; 00507cd6 | DAT_005e0223
    CALL FUN_005b9484                   ; 00507cdc
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9484()
    MOV EAX,dword ptr [ESP + 0x44]      ; 00507ce1
    FSTP float ptr [EAX]                ; 00507ce5
        ;   Label: LAB_00507ce5
    MOV EAX,dword ptr [ESP + 0x48]      ; 00507ce7
    MOV EAX,dword ptr [EAX]             ; 00507ceb
    CDQ                                 ; 00507ced
    XOR EAX,EDX                         ; 00507cee
    SUB EAX,EDX                         ; 00507cf0
    CMP EAX,0xc8                        ; 00507cf2
    JL 0x00507da5                       ; 00507cf7
        ;   XREF to: 00507da5 (CONDITIONAL_JUMP)  ; LAB_00507da5
    MOV dword ptr [ESP + 0x64],EAX      ; 00507cfd
    FLD double ptr [0x005e021b]         ; 00507d01 | DAT_005e021b
    FILD dword ptr [ESP + 0x64]         ; 00507d07
    CALL FUN_005b9484                   ; 00507d0b
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9484()
    MOV EAX,dword ptr [ESP + 0x60]      ; 00507d10
    FMUL float ptr [EAX]                ; 00507d14
    FSTP float ptr [EAX]                ; 00507d16
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00507d18
        ;   Label: LAB_00507d18
    CMP dword ptr [EDI + EAX*0x1],0x0   ; 00507d1c
    JGE 0x00507ab6                      ; 00507d20
        ;   XREF to: 00507ab6 (CONDITIONAL_JUMP)  ; LAB_00507ab6
    MOV EAX,dword ptr [ESP + 0x28]      ; 00507d26
    FLD float ptr [EDI + EAX*0x1]       ; 00507d2a
    FCHS                                ; 00507d2d
    FSTP float ptr [EDI + EAX*0x1]      ; 00507d2f
    JMP 0x00507ab6                      ; 00507d32
        ;   XREF to: 00507ab6 (UNCONDITIONAL_JUMP)  ; LAB_00507ab6
    CMP dword ptr [ECX + 0x14],0x2      ; 00507d37
        ;   Label: LAB_00507d37
    JNZ 0x00507d4e                      ; 00507d3b
        ;   XREF to: 00507d4e (CONDITIONAL_JUMP)  ; LAB_00507d4e
    CMP dword ptr [ECX + 0x18],0x0      ; 00507d3d
    JZ 0x00507d4e                       ; 00507d41
        ;   XREF to: 00507d4e (CONDITIONAL_JUMP)  ; LAB_00507d4e
    CMP dword ptr [ESP + 0x34],0x2      ; 00507d43
    JGE 0x00507c7c                      ; 00507d48
        ;   XREF to: 00507c7c (CONDITIONAL_JUMP)  ; LAB_00507c7c
    MOV EDX,dword ptr [ECX + 0x3c]      ; 00507d4e
        ;   Label: LAB_00507d4e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00507d51
    IMUL EDX,dword ptr [EAX + 0x618de4] ; 00507d58 | DAT_00618df4
    MOV dword ptr [ESP + 0x64],EDX      ; 00507d5f
    ADD EAX,dword ptr [ESP + 0x18]      ; 00507d63
    MOV EDX,dword ptr [ESP + 0x64]      ; 00507d67
    MOV EAX,dword ptr [EAX]             ; 00507d6b
    ADD EAX,EDX                         ; 00507d6d
    MOV dword ptr [ESP + 0x64],EAX      ; 00507d6f
    MOV EAX,dword ptr [ECX + 0x40]      ; 00507d73
    INC EAX                             ; 00507d76
    ADD EAX,EAX                         ; 00507d77
    MOV EDX,dword ptr [ESP + 0x64]      ; 00507d79
    NEG EAX                             ; 00507d7d
    IMUL EAX,EDX                        ; 00507d7f
    JMP 0x00507cbe                      ; 00507d82
        ;   XREF to: 00507cbe (UNCONDITIONAL_JUMP)  ; LAB_00507cbe
    CMP EBX,0xffffff38                  ; 00507d87
        ;   Label: LAB_00507d87
    JLE 0x00507cc8                      ; 00507d8d
        ;   XREF to: 00507cc8 (CONDITIONAL_JUMP)  ; LAB_00507cc8
    NEG EBX                             ; 00507d93
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00507d95
    FLD double ptr [EBX*0x8 + 0x1d1f418] ; 00507d99
    JMP 0x00507ce5                      ; 00507da0
        ;   XREF to: 00507ce5 (UNCONDITIONAL_JUMP)  ; LAB_00507ce5
    MOV EDX,dword ptr [ESP + 0x60]      ; 00507da5
        ;   Label: LAB_00507da5
    FLD float ptr [EDX]                 ; 00507da9
    FLD ST0                             ; 00507dab
    FMUL double ptr [EAX*0x8 + 0x1d1edd8] ; 00507dad
    FSTP ST1                            ; 00507db4
    FSTP float ptr [EDX]                ; 00507db6
    JMP 0x00507d18                      ; 00507db8
        ;   XREF to: 00507d18 (UNCONDITIONAL_JUMP)  ; LAB_00507d18

