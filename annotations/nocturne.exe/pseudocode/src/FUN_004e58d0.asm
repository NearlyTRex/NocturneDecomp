; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e58d0(uint *param_1,float *param_2,int param_3,int param_4,int param_5,int *param_6)
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
;   FUN_004e85b0 at 004e90f2
;
; Referenced Globals:
;   undefined4 DAT_0058b898
;   undefined4 DAT_0058b8a0
;   undefined4 DAT_0058b8a8
;   undefined4 DAT_005bbbb4
;   undefined4 DAT_005bc0fc
;   undefined4 DAT_005bc100
;   undefined4 DAT_005bc10c
;   undefined4 DAT_005bc118
;   undefined4 DAT_005bc158
;   undefined4 DAT_005bc15c
;   undefined4 DAT_005bc160
;   undefined4 DAT_005bc164
;   undefined4 DAT_005bc168
;   undefined4 DAT_01cd6324
;
; Called Functions:
;   FUN_00565ad6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e58d0
        ;   Label: FUN_004e58d0
    PUSH ESI                            ; 004e58d1
    PUSH EDI                            ; 004e58d2
    PUSH EBP                            ; 004e58d3
    MOV EBP,ESP                         ; 004e58d4
    SUB ESP,0x68                        ; 004e58d6
    AND ESP,0xfffffff8                  ; 004e58d9
    MOV ECX,dword ptr [EBP + 0x20]      ; 004e58dc
    MOV EBX,dword ptr [EBP + 0x28]      ; 004e58df
    MOV EBX,dword ptr [EBX]             ; 004e58e2
    MOV EDX,dword ptr [EBX]             ; 004e58e4
    XOR ESI,ESI                         ; 004e58e6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e58e8
    MOV EDI,dword ptr [EBX + 0x10]      ; 004e58ef
    SUB EAX,EDX                         ; 004e58f2
    MOV EDX,dword ptr [ECX + 0x10]      ; 004e58f4
    ADD EDI,EAX                         ; 004e58f7
    TEST EDX,EDX                        ; 004e58f9
    JZ 0x004e5b2f                       ; 004e58fb
        ;   XREF to: 004e5b2f (CONDITIONAL_JUMP)  ; LAB_004e5b2f
    CMP dword ptr [ECX + 0x14],0x2      ; 004e5901
    JNZ 0x004e5b2f                      ; 004e5905
        ;   XREF to: 004e5b2f (CONDITIONAL_JUMP)  ; LAB_004e5b2f
    LEA EAX,[EDI*0x8 + 0x0]             ; 004e590b
    ADD EAX,EDI                         ; 004e5912
    SHL EAX,0x2                         ; 004e5914
    LEA EDX,[EDI + EAX*0x1]             ; 004e5917
    MOV EAX,dword ptr [ECX + 0x18]      ; 004e591a
    SHL EDX,0x2                         ; 004e591d
    TEST EAX,EAX                        ; 004e5920
    JZ 0x004e5b05                       ; 004e5922
        ;   XREF to: 004e5b05 (CONDITIONAL_JUMP)  ; LAB_004e5b05
    MOV EAX,dword ptr [EDX + 0x5bc0fc]  ; 004e5928 | DAT_005bc0fc
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e592e
        ;   Label: LAB_004e592e
    MOV EDX,dword ptr [0x01cd6324]      ; 004e5932 | DAT_01cd6324
        ;   Label: LAB_004e5932
    TEST EDX,EDX                        ; 004e5938
    JZ 0x004e5b49                       ; 004e593a
        ;   XREF to: 004e5b49 (CONDITIONAL_JUMP)  ; LAB_004e5b49
    XOR EAX,EAX                         ; 004e5940
        ;   Label: LAB_004e5940
    MOV dword ptr [ESP + 0x34],EAX      ; 004e5942
    MOV EAX,dword ptr [EBP + 0x24]      ; 004e5946
    SHL EAX,0x3                         ; 004e5949
    MOV EDX,EAX                         ; 004e594c
    SHL EAX,0x5                         ; 004e594e
    SUB EAX,EDX                         ; 004e5951
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004e5953
    ADD EDX,EAX                         ; 004e5956
    LEA EAX,[EDI*0x8 + 0x0]             ; 004e5958
    ADD EAX,EDI                         ; 004e595f
    SHL EAX,0x2                         ; 004e5961
    ADD EAX,EDI                         ; 004e5964
    SHL EAX,0x2                         ; 004e5966
    MOV dword ptr [ESP + 0x20],EDX      ; 004e5969
    MOV dword ptr [ESP + 0x54],EAX      ; 004e596d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e5971
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e5975
    MOV dword ptr [ESP + 0x18],EDX      ; 004e5978
    MOV dword ptr [ESP + 0x14],EAX      ; 004e597c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e5980
    XOR EDX,EDX                         ; 004e5983
    MOV dword ptr [ESP + 0x8],EAX       ; 004e5985
    MOV EAX,dword ptr [ESP + 0x54]      ; 004e5989
    MOV dword ptr [ESP + 0xc],EDX       ; 004e598d
    ADD EAX,0xc                         ; 004e5991
    MOV dword ptr [ESP + 0x10],EDX      ; 004e5994
    MOV dword ptr [ESP + 0x38],EAX      ; 004e5998
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e599c
        ;   Label: LAB_004e599c
    MOV dword ptr [ESP + 0x58],EAX      ; 004e59a0
    MOV dword ptr [ESP + 0x40],EAX      ; 004e59a4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e59a8
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e59ac
    MOV dword ptr [ESP + 0x44],EAX      ; 004e59b0
    MOV dword ptr [ESP + 0x60],EAX      ; 004e59b4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e59b8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e59bc
    MOV dword ptr [ESP + 0x48],EAX      ; 004e59c0
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e59c4
    ADD EAX,EDX                         ; 004e59c7
    MOV dword ptr [ESP + 0x30],EAX      ; 004e59c9
    MOV dword ptr [ESP + 0x28],EAX      ; 004e59cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e59d1
    ADD EAX,EDX                         ; 004e59d4
    XOR EDI,EDI                         ; 004e59d6
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e59d8
    MOV dword ptr [ESP + 0x24],EAX      ; 004e59dc
    MOV EAX,dword ptr [ESP + 0x58]      ; 004e59e0
        ;   Label: LAB_004e59e0
    CMP EAX,dword ptr [ESP + 0x5c]      ; 004e59e4
    JNZ 0x004e5a60                      ; 004e59e8
        ;   XREF to: 004e5a60 (CONDITIONAL_JUMP)  ; LAB_004e5a60
    CMP dword ptr [ECX + 0x10],0x0      ; 004e59ea
    JZ 0x004e5bf7                       ; 004e59ee
        ;   XREF to: 004e5bf7 (CONDITIONAL_JUMP)  ; LAB_004e5bf7
    CMP dword ptr [ECX + 0x14],0x2      ; 004e59f4
    JNZ 0x004e5bf7                      ; 004e59f8
        ;   XREF to: 004e5bf7 (CONDITIONAL_JUMP)  ; LAB_004e5bf7
    INC ESI                             ; 004e59fe
    MOV EAX,dword ptr [ESP + 0x54]      ; 004e59ff
    LEA EBX,[ESI*0x4 + 0x0]             ; 004e5a03
    MOV EDX,dword ptr [ECX + 0x18]      ; 004e5a0a
    ADD EBX,EAX                         ; 004e5a0d
    TEST EDX,EDX                        ; 004e5a0f
    JZ 0x004e5bd0                       ; 004e5a11
        ;   XREF to: 004e5bd0 (CONDITIONAL_JUMP)  ; LAB_004e5bd0
    MOV EDX,dword ptr [ESP + 0x54]      ; 004e5a17
    MOV EAX,dword ptr [ESP + 0x58]      ; 004e5a1b
    CMP EAX,dword ptr [EDX + 0x5bc118]  ; 004e5a1f | DAT_005bc118
    JNZ 0x004e5bbf                      ; 004e5a25
        ;   XREF to: 004e5bbf (CONDITIONAL_JUMP)  ; LAB_004e5bbf
    MOV EAX,dword ptr [EDX + 0x5bc164]  ; 004e5a2b | DAT_005bc164
    LEA EAX,[EAX + EAX*0x2]             ; 004e5a31
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e5a34
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e5a38
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e5a3c
    MOV EBX,dword ptr [EDX + 0x5bc154]  ; 004e5a40 | DAT_005bc160
    MOV EAX,dword ptr [EAX + 0x5bc158]  ; 004e5a46 | DAT_005bc164
    SUB EAX,EBX                         ; 004e5a4c
    MOV ESI,0x3                         ; 004e5a4e
    MOV dword ptr [ESP + 0x50],EAX      ; 004e5a53
    MOV EAX,EBX                         ; 004e5a57
    IMUL EAX,ESI                        ; 004e5a59
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e5a5c
        ;   Label: LAB_004e5a5c
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e5a60
        ;   Label: LAB_004e5a60
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 004e5a64
    TEST EDX,EDX                        ; 004e5a67
    JNZ 0x004e5c14                      ; 004e5a69
        ;   XREF to: 004e5c14 (CONDITIONAL_JUMP)  ; LAB_004e5c14
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e5a6f
    MOV dword ptr [EDI + EAX*0x1],EDX   ; 004e5a73
    MOV EAX,dword ptr [ESP + 0x58]      ; 004e5a76
        ;   Label: LAB_004e5a76
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e5a7a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004e5a7e
    ADD EDI,0x4                         ; 004e5a82
    INC EAX                             ; 004e5a85
    INC EDX                             ; 004e5a86
    ADD EBX,0x4                         ; 004e5a87
    MOV dword ptr [ESP + 0x58],EAX      ; 004e5a8a
    MOV dword ptr [ESP + 0x40],EDX      ; 004e5a8e
    MOV dword ptr [ESP + 0x3c],EBX      ; 004e5a92
    MOV EAX,dword ptr [ESP + 0x44]      ; 004e5a96
    MOV EDX,dword ptr [ESP + 0x60]      ; 004e5a9a
    MOV EBX,dword ptr [ESP + 0x48]      ; 004e5a9e
    ADD EAX,0x4                         ; 004e5aa2
    ADD EDX,0x4                         ; 004e5aa5
    ADD EBX,0x4                         ; 004e5aa8
    MOV dword ptr [ESP + 0x44],EAX      ; 004e5aab
    MOV dword ptr [ESP + 0x60],EDX      ; 004e5aaf
    MOV dword ptr [ESP + 0x48],EBX      ; 004e5ab3
    CMP EDI,0x48                        ; 004e5ab7
    JNZ 0x004e59e0                      ; 004e5aba
        ;   XREF to: 004e59e0 (CONDITIONAL_JUMP)  ; LAB_004e59e0
    MOV EDI,dword ptr [ESP + 0xc]       ; 004e5ac0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e5ac4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e5ac8
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e5acc
    ADD EDI,0x12                        ; 004e5ad0
    ADD EAX,0x48                        ; 004e5ad3
    ADD EDX,0x48                        ; 004e5ad6
    ADD EBX,0x48                        ; 004e5ad9
    MOV dword ptr [ESP + 0xc],EDI       ; 004e5adc
    MOV dword ptr [ESP + 0x10],EAX      ; 004e5ae0
    MOV EDI,dword ptr [ESP + 0x34]      ; 004e5ae4
    MOV dword ptr [ESP + 0x14],EDX      ; 004e5ae8
    INC EDI                             ; 004e5aec
    MOV dword ptr [ESP + 0x8],EBX       ; 004e5aed
    MOV dword ptr [ESP + 0x34],EDI      ; 004e5af1
    CMP EDI,0x20                        ; 004e5af5
    JL 0x004e599c                       ; 004e5af8
        ;   XREF to: 004e599c (CONDITIONAL_JUMP)  ; LAB_004e599c
    MOV ESP,EBP                         ; 004e5afe
    POP EBP                             ; 004e5b00
    POP EDI                             ; 004e5b01
    POP ESI                             ; 004e5b02
    POP EBX                             ; 004e5b03
    RET                                 ; 004e5b04
    MOV EAX,dword ptr [EDX + 0x5bc158]  ; 004e5b05 | DAT_005bc158
        ;   Label: LAB_004e5b05
    MOV dword ptr [ESP + 0x64],EAX      ; 004e5b0b
    MOV EBX,dword ptr [ESP + 0x64]      ; 004e5b0f
    SHL EAX,0x2                         ; 004e5b13
    SUB EAX,EBX                         ; 004e5b16
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e5b18
    MOV EAX,dword ptr [EDX + 0x5bc158]  ; 004e5b1c | DAT_005bc158
    MOV dword ptr [ESP + 0x4c],ESI      ; 004e5b22
    MOV dword ptr [ESP + 0x50],EAX      ; 004e5b26
    JMP 0x004e5932                      ; 004e5b2a
        ;   XREF to: 004e5932 (UNCONDITIONAL_JUMP)  ; LAB_004e5932
    LEA EAX,[EDI*0x8 + 0x0]             ; 004e5b2f
        ;   Label: LAB_004e5b2f
    ADD EAX,EDI                         ; 004e5b36
    SHL EAX,0x2                         ; 004e5b38
    ADD EAX,EDI                         ; 004e5b3b
    MOV EAX,dword ptr [EAX*0x4 + 0x5bc0fc] ; 004e5b3d | DAT_005bc0fc
    JMP 0x004e592e                      ; 004e5b44
        ;   XREF to: 004e592e (UNCONDITIONAL_JUMP)  ; LAB_004e592e
    XOR EBX,EBX                         ; 004e5b49
        ;   Label: LAB_004e5b49
    FLD double ptr [0x0058b8a0]         ; 004e5b4b | DAT_0058b8a0
    MOV dword ptr [ESP + 0x64],EDX      ; 004e5b51
        ;   Label: LAB_004e5b51
    FLD ST0                             ; 004e5b55
    FILD dword ptr [ESP + 0x64]         ; 004e5b57
    CALL FUN_00565ad6                   ; 004e5b5b
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined FUN_00565ad6()
    ADD EBX,0x8                         ; 004e5b60
    INC EDX                             ; 004e5b63
    FSTP double ptr [EBX + 0x1cd6320]   ; 004e5b64
    CMP EDX,0xc8                        ; 004e5b6a
    JL 0x004e5b51                       ; 004e5b70
        ;   XREF to: 004e5b51 (CONDITIONAL_JUMP)  ; LAB_004e5b51
    FSTP ST0                            ; 004e5b72
    XOR EDX,EDX                         ; 004e5b74
    XOR EBX,EBX                         ; 004e5b76
    FLD double ptr [0x0058b8a8]         ; 004e5b78 | DAT_0058b8a8
    FLD double ptr [0x0058b898]         ; 004e5b7e | DAT_0058b898
    MOV EAX,EDX                         ; 004e5b84
        ;   Label: LAB_004e5b84
    NEG EAX                             ; 004e5b86
    MOV dword ptr [ESP + 0x64],EAX      ; 004e5b88
    FILD dword ptr [ESP + 0x64]         ; 004e5b8c
    FMUL ST1                            ; 004e5b90
    FLD ST2                             ; 004e5b92
    CALL FUN_00565ad6                   ; 004e5b94
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined FUN_00565ad6()
    ADD EBX,0x8                         ; 004e5b99
    INC EDX                             ; 004e5b9c
    FSTP double ptr [EBX + 0x1cd6960]   ; 004e5b9d
    CMP EDX,0xc8                        ; 004e5ba3
    JL 0x004e5b84                       ; 004e5ba9
        ;   XREF to: 004e5b84 (CONDITIONAL_JUMP)  ; LAB_004e5b84
    FSTP ST0                            ; 004e5bab
    MOV EBX,0x1                         ; 004e5bad
    FSTP ST0                            ; 004e5bb2
    MOV dword ptr [0x01cd6324],EBX      ; 004e5bb4 | DAT_01cd6324
    JMP 0x004e5940                      ; 004e5bba
        ;   XREF to: 004e5940 (UNCONDITIONAL_JUMP)  ; LAB_004e5940
    JGE 0x004e5bd0                      ; 004e5bbf
        ;   XREF to: 004e5bd0 (CONDITIONAL_JUMP)  ; LAB_004e5bd0
        ;   Label: LAB_004e5bbf
    MOV EAX,dword ptr [EBX + 0x5bc0fc]  ; 004e5bc1 | DAT_005bc100
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e5bc7
    JMP 0x004e5a60                      ; 004e5bcb
        ;   XREF to: 004e5a60 (UNCONDITIONAL_JUMP)  ; LAB_004e5a60
    MOV EAX,dword ptr [EBX + 0x5bc158]  ; 004e5bd0 | DAT_005bc168 | DAT_005bc15c
        ;   Label: LAB_004e5bd0
    LEA EAX,[EAX + EAX*0x2]             ; 004e5bd6
    MOV EDX,dword ptr [EBX + 0x5bc154]  ; 004e5bd9 | DAT_005bc164 | DAT_005bc158
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e5bdf
    MOV EAX,dword ptr [EBX + 0x5bc158]  ; 004e5be3 | DAT_005bc168 | DAT_005bc15c
    SUB EAX,EDX                         ; 004e5be9
    MOV dword ptr [ESP + 0x50],EAX      ; 004e5beb
    LEA EAX,[EDX + EDX*0x2]             ; 004e5bef
    JMP 0x004e5a5c                      ; 004e5bf2
        ;   XREF to: 004e5a5c (UNCONDITIONAL_JUMP)  ; LAB_004e5a5c
    INC ESI                             ; 004e5bf7
        ;   Label: LAB_004e5bf7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e5bf8
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e5bfc
    ADD EAX,EDX                         ; 004e5c03
    MOV EAX,dword ptr [EAX + 0x5bc0fc]  ; 004e5c05 | DAT_005bc10c
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e5c0b
    JMP 0x004e5a60                      ; 004e5c0f
        ;   XREF to: 004e5a60 (UNCONDITIONAL_JUMP)  ; LAB_004e5a60
    MOV EBX,dword ptr [ECX + 0x8]       ; 004e5c14
        ;   Label: LAB_004e5c14
    MOV EAX,dword ptr [ECX + 0x10]      ; 004e5c17
    SUB EBX,0xd2                        ; 004e5c1a
    TEST EAX,EAX                        ; 004e5c20
    JZ 0x004e5d0e                       ; 004e5c22
        ;   XREF to: 004e5d0e (CONDITIONAL_JUMP)  ; LAB_004e5d0e
    CMP dword ptr [ECX + 0x14],0x2      ; 004e5c28
    JNZ 0x004e5cf7                      ; 004e5c2c
        ;   XREF to: 004e5cf7 (CONDITIONAL_JUMP)  ; LAB_004e5cf7
    CMP dword ptr [ECX + 0x18],0x0      ; 004e5c32
    JNZ 0x004e5cf7                      ; 004e5c36
        ;   XREF to: 004e5cf7 (CONDITIONAL_JUMP)  ; LAB_004e5cf7
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e5c3c
        ;   Label: LAB_004e5c3c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e5c40
    SUB EDX,EAX                         ; 004e5c44
    MOV EAX,EDX                         ; 004e5c46
    SAR EDX,0x1f                        ; 004e5c48
    IDIV dword ptr [ESP + 0x50]         ; 004e5c4b
    MOV dword ptr [ESP + 0x64],EAX      ; 004e5c4f
    MOV EAX,dword ptr [ECX + EAX*0x4 + 0x28] ; 004e5c53
    SHL EAX,0x3                         ; 004e5c57
    MOV EDX,dword ptr [ESP + 0x64]      ; 004e5c5a
    SUB EBX,EAX                         ; 004e5c5e
    IMUL EAX,EDX,0x34                   ; 004e5c60
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e5c63
    ADD EDX,EAX                         ; 004e5c67
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e5c69
    ADD EDX,EAX                         ; 004e5c70
    MOV EAX,dword ptr [ECX + 0x40]      ; 004e5c72
    INC EAX                             ; 004e5c75
    ADD EAX,EAX                         ; 004e5c76
    NEG EAX                             ; 004e5c78
    IMUL EAX,dword ptr [EDX + 0x5c]     ; 004e5c7a
    ADD EBX,EAX                         ; 004e5c7e
        ;   Label: LAB_004e5c7e
    TEST EBX,EBX                        ; 004e5c80
    JLE 0x004e5d47                      ; 004e5c82
        ;   XREF to: 004e5d47 (CONDITIONAL_JUMP)  ; LAB_004e5d47
    MOV dword ptr [ESP + 0x64],EBX      ; 004e5c88
        ;   Label: LAB_004e5c88
    FILD dword ptr [ESP + 0x64]         ; 004e5c8c
    FMUL double ptr [0x0058b898]        ; 004e5c90 | DAT_0058b898
    FLD double ptr [0x0058b8a8]         ; 004e5c96 | DAT_0058b8a8
    CALL FUN_00565ad6                   ; 004e5c9c
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined FUN_00565ad6()
    MOV EAX,dword ptr [ESP + 0x44]      ; 004e5ca1
    FSTP float ptr [EAX]                ; 004e5ca5
        ;   Label: LAB_004e5ca5
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e5ca7
    MOV EAX,dword ptr [EAX]             ; 004e5cab
    CDQ                                 ; 004e5cad
    XOR EAX,EDX                         ; 004e5cae
    SUB EAX,EDX                         ; 004e5cb0
    CMP EAX,0xc8                        ; 004e5cb2
    JL 0x004e5d65                       ; 004e5cb7
        ;   XREF to: 004e5d65 (CONDITIONAL_JUMP)  ; LAB_004e5d65
    MOV dword ptr [ESP + 0x64],EAX      ; 004e5cbd
    FLD double ptr [0x0058b8a0]         ; 004e5cc1 | DAT_0058b8a0
    FILD dword ptr [ESP + 0x64]         ; 004e5cc7
    CALL FUN_00565ad6                   ; 004e5ccb
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined FUN_00565ad6()
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e5cd0
    FMUL float ptr [EAX]                ; 004e5cd4
    FSTP float ptr [EAX]                ; 004e5cd6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e5cd8
        ;   Label: LAB_004e5cd8
    CMP dword ptr [EDI + EAX*0x1],0x0   ; 004e5cdc
    JGE 0x004e5a76                      ; 004e5ce0
        ;   XREF to: 004e5a76 (CONDITIONAL_JUMP)  ; LAB_004e5a76
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e5ce6
    FLD float ptr [EDI + EAX*0x1]       ; 004e5cea
    FCHS                                ; 004e5ced
    FSTP float ptr [EDI + EAX*0x1]      ; 004e5cef
    JMP 0x004e5a76                      ; 004e5cf2
        ;   XREF to: 004e5a76 (UNCONDITIONAL_JUMP)  ; LAB_004e5a76
    CMP dword ptr [ECX + 0x14],0x2      ; 004e5cf7
        ;   Label: LAB_004e5cf7
    JNZ 0x004e5d0e                      ; 004e5cfb
        ;   XREF to: 004e5d0e (CONDITIONAL_JUMP)  ; LAB_004e5d0e
    CMP dword ptr [ECX + 0x18],0x0      ; 004e5cfd
    JZ 0x004e5d0e                       ; 004e5d01
        ;   XREF to: 004e5d0e (CONDITIONAL_JUMP)  ; LAB_004e5d0e
    CMP dword ptr [ESP + 0x34],0x2      ; 004e5d03
    JGE 0x004e5c3c                      ; 004e5d08
        ;   XREF to: 004e5c3c (CONDITIONAL_JUMP)  ; LAB_004e5c3c
    MOV EDX,dword ptr [ECX + 0x3c]      ; 004e5d0e
        ;   Label: LAB_004e5d0e
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e5d11
    IMUL EDX,dword ptr [EAX + 0x5bbba4] ; 004e5d18 | DAT_005bbbb4
    MOV dword ptr [ESP + 0x64],EDX      ; 004e5d1f
    ADD EAX,dword ptr [ESP + 0x18]      ; 004e5d23
    MOV EDX,dword ptr [ESP + 0x64]      ; 004e5d27
    MOV EAX,dword ptr [EAX]             ; 004e5d2b
    ADD EAX,EDX                         ; 004e5d2d
    MOV dword ptr [ESP + 0x64],EAX      ; 004e5d2f
    MOV EAX,dword ptr [ECX + 0x40]      ; 004e5d33
    INC EAX                             ; 004e5d36
    ADD EAX,EAX                         ; 004e5d37
    MOV EDX,dword ptr [ESP + 0x64]      ; 004e5d39
    NEG EAX                             ; 004e5d3d
    IMUL EAX,EDX                        ; 004e5d3f
    JMP 0x004e5c7e                      ; 004e5d42
        ;   XREF to: 004e5c7e (UNCONDITIONAL_JUMP)  ; LAB_004e5c7e
    CMP EBX,0xffffff38                  ; 004e5d47
        ;   Label: LAB_004e5d47
    JLE 0x004e5c88                      ; 004e5d4d
        ;   XREF to: 004e5c88 (CONDITIONAL_JUMP)  ; LAB_004e5c88
    NEG EBX                             ; 004e5d53
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e5d55
    FLD double ptr [EBX*0x8 + 0x1cd6968] ; 004e5d59
    JMP 0x004e5ca5                      ; 004e5d60
        ;   XREF to: 004e5ca5 (UNCONDITIONAL_JUMP)  ; LAB_004e5ca5
    MOV EDX,dword ptr [ESP + 0x60]      ; 004e5d65
        ;   Label: LAB_004e5d65
    FLD float ptr [EDX]                 ; 004e5d69
    FLD ST0                             ; 004e5d6b
    FMUL double ptr [EAX*0x8 + 0x1cd6328] ; 004e5d6d
    FSTP ST1                            ; 004e5d74
    FSTP float ptr [EDX]                ; 004e5d76
    JMP 0x004e5cd8                      ; 004e5d78
        ;   XREF to: 004e5cd8 (UNCONDITIONAL_JUMP)  ; LAB_004e5cd8

