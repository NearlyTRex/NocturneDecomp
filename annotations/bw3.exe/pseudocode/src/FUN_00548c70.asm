; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548c70(int param_1,int param_2,byte *param_3,int *param_4,uint param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
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
;   FUN_0054e5a0 at 0054e5d9
;
; Referenced Globals:
;   undefined4 DAT_005d1b04
;   undefined4 DAT_005d1b0c
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d72644
;   undefined4 DAT_01d72648
;   undefined4 DAT_01d7264c
;   undefined4 DAT_01d72650
;   undefined4 DAT_01d72654
;   undefined4 DAT_01d72658
;   undefined4 DAT_01d7265c
;   undefined4 DAT_01d72660
;   undefined4 DAT_01d72664
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0046b2c0
;   FUN_0046d3d0
;   FUN_0046d460
;   FUN_0046d500
;   FUN_0046d540
;   FUN_0046e5e0
;   FUN_0053ac80
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548c70
        ;   Label: FUN_00548c70
    PUSH ESI                            ; 00548c71
    PUSH EDI                            ; 00548c72
    PUSH EBP                            ; 00548c73
    MOV EBP,ESP                         ; 00548c74
    SUB ESP,0x120                       ; 00548c76
    AND ESP,0xfffffff8                  ; 00548c7c
    MOV EDX,dword ptr [0x005f2afc]      ; 00548c7f | DAT_005f2afc
    PUSH EDX                            ; 00548c85 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 00548c86
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 00548c8b
    MOV dword ptr [ESP + 0xac],EAX      ; 00548c8e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00548c95
    MOV ECX,dword ptr [EBP + 0x14]      ; 00548c98
    SHL EAX,0x3                         ; 00548c9b
    ADD EAX,ECX                         ; 00548c9e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00548ca0
    MOV dword ptr [ESP + 0xb0],EAX      ; 00548ca3
    TEST EAX,EAX                        ; 00548caa
    JZ 0x00548cb2                       ; 00548cac
        ;   XREF to: 00548cb2 (CONDITIONAL_JUMP)  ; LAB_00548cb2
    AND byte ptr [EBP + 0x24],0xfe      ; 00548cae
    PUSH 0x1                            ; 00548cb2
        ;   Label: LAB_00548cb2
    MOV ESI,dword ptr [0x005f2afc]      ; 00548cb4 | DAT_005f2afc
    PUSH ESI                            ; 00548cba | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 00548cbb
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 00548cc0
    XOR EDI,EDI                         ; 00548cc3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00548cc5
    MOV dword ptr [ESP + 0x80],EDI      ; 00548cc8
    MOV EDX,dword ptr [EAX + 0xc00]     ; 00548ccf
    MOV dword ptr [ESP + 0x74],EDI      ; 00548cd5
    TEST EDX,EDX                        ; 00548cd9
    JLE 0x00548def                      ; 00548cdb
        ;   XREF to: 00548def (CONDITIONAL_JUMP)  ; LAB_00548def
    MOV EAX,dword ptr [EBP + 0x18]      ; 00548ce1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00548ce4
    SHL EAX,0x2                         ; 00548ce7
    ADD EDX,EAX                         ; 00548cea
    MOV EDI,dword ptr [EBP + 0x14]      ; 00548cec
    MOV dword ptr [ESP + 0xa0],EDX      ; 00548cef
    MOV EDX,dword ptr [EBP + 0x14]      ; 00548cf6
    ADD EAX,EDI                         ; 00548cf9
    ADD EDX,0xc0                        ; 00548cfb
    MOV dword ptr [ESP + 0x68],EAX      ; 00548d01
    MOV dword ptr [ESP + 0x9c],EDX      ; 00548d05
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00548d0c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00548d13
    MOV dword ptr [ESP + 0x90],EDX      ; 00548d16
    MOV dword ptr [ESP + 0x84],EDX      ; 00548d1d
    MOV dword ptr [ESP + 0x88],EDX      ; 00548d24
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00548d2b
    MOV dword ptr [ESP + 0x78],EAX      ; 00548d2e
    MOV dword ptr [ESP + 0x6c],EDX      ; 00548d32
    MOV EAX,dword ptr [ESP + 0x68]      ; 00548d36
        ;   Label: LAB_00548d36
    MOV EDI,dword ptr [ESP + 0x80]      ; 00548d3a
    MOV EDX,dword ptr [EAX + 0xc24]     ; 00548d41
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00548d47
    ADD EDI,EDX                         ; 00548d4b
    TEST byte ptr [EAX],0x1             ; 00548d4d
    JZ 0x00548dad                       ; 00548d50
        ;   XREF to: 00548dad (CONDITIONAL_JUMP)  ; LAB_00548dad
    CMP dword ptr [ESP + 0xac],0x0      ; 00548d52
    JZ 0x00548f6c                       ; 00548d5a
        ;   XREF to: 00548f6c (CONDITIONAL_JUMP)  ; LAB_00548f6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00548d60
        ;   Label: LAB_00548d60
    CMP dword ptr [EAX + 0xbc],0x1      ; 00548d63
    JNZ 0x0054943a                      ; 00548d6a
        ;   XREF to: 0054943a (CONDITIONAL_JUMP)  ; LAB_0054943a
    CMP dword ptr [ESP + 0xac],0x0      ; 00548d70
        ;   Label: LAB_00548d70
    JZ 0x00549543                       ; 00548d78
        ;   XREF to: 00549543 (CONDITIONAL_JUMP)  ; LAB_00549543
    MOV ESI,dword ptr [EBP + 0x24]      ; 00548d7e
        ;   Label: LAB_00548d7e
    MOV EDX,dword ptr [ESP + 0x80]      ; 00548d81
    MOV EAX,EDI                         ; 00548d88
    PUSH ESI                            ; 00548d8a
    SUB EAX,EDX                         ; 00548d8b
    PUSH EAX                            ; 00548d8d
    IMUL EAX,EDX,0x12                   ; 00548d8e
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00548d91
    MOV EDX,dword ptr [EDX + 0x7c]      ; 00548d98
    ADD EAX,EDX                         ; 00548d9b
    PUSH EAX                            ; 00548d9d
    MOV EBX,dword ptr [0x00603b28]      ; 00548d9e | DAT_00603b28
    PUSH EBX                            ; 00548da4 | DAT_01ed78c8
    CALL FUN_0053ac80                   ; 00548da5
        ;   XREF to: 0053ac80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ac80()
    ADD ESP,0x10                        ; 00548daa
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00548dad
        ;   Label: LAB_00548dad
    MOV EBX,dword ptr [ESP + 0x68]      ; 00548db1
    MOV ESI,dword ptr [ESP + 0x78]      ; 00548db5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00548db9
    MOV dword ptr [ESP + 0x80],EDI      ; 00548dbc
    MOV EDI,dword ptr [ESP + 0x74]      ; 00548dc3
    ADD ECX,0x4                         ; 00548dc7
    ADD EBX,0x60                        ; 00548dca
    ADD ESI,0x4                         ; 00548dcd
    MOV dword ptr [ESP + 0x6c],ECX      ; 00548dd0
    MOV dword ptr [ESP + 0x68],EBX      ; 00548dd4
    MOV dword ptr [ESP + 0x78],ESI      ; 00548dd8
    INC EDI                             ; 00548ddc
    MOV ECX,dword ptr [EDX + 0xc00]     ; 00548ddd
    MOV dword ptr [ESP + 0x74],EDI      ; 00548de3
    CMP EDI,ECX                         ; 00548de7
    JL 0x00548d36                       ; 00548de9
        ;   XREF to: 00548d36 (CONDITIONAL_JUMP)  ; LAB_00548d36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00548def
        ;   Label: LAB_00548def
    XOR EBX,EBX                         ; 00548df2
    MOV ESI,dword ptr [EAX + 0xc00]     ; 00548df4
    MOV dword ptr [ESP + 0x7c],EBX      ; 00548dfa
    TEST ESI,ESI                        ; 00548dfe
    JLE 0x00548f43                      ; 00548e00
        ;   XREF to: 00548f43 (CONDITIONAL_JUMP)  ; LAB_00548f43
    ADD EAX,0xc0                        ; 00548e06
    MOV ESI,dword ptr [EBP + 0x14]      ; 00548e0b
    MOV dword ptr [ESP + 0x8c],EAX      ; 00548e0e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00548e15
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00548e18
    SHL EAX,0x2                         ; 00548e1b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00548e1e
    ADD ESI,EAX                         ; 00548e21
    ADD EAX,EBX                         ; 00548e23
    MOV dword ptr [ESP + 0x64],EDX      ; 00548e25
    MOV dword ptr [ESP + 0x70],EAX      ; 00548e29
    MOV EDX,dword ptr [ESP + 0x70]      ; 00548e2d
        ;   Label: LAB_00548e2d
    MOV EAX,dword ptr [ESP + 0x80]      ; 00548e31
    MOV EDI,dword ptr [EDX + 0xc38]     ; 00548e38
    ADD EAX,EDI                         ; 00548e3e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00548e40
    MOV EAX,0xffffffff                  ; 00548e47
    MOV EDX,dword ptr [ESP + 0x64]      ; 00548e4c
    MOV dword ptr [ESP + 0xcc],EAX      ; 00548e50
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00548e57
    MOV BL,byte ptr [EDX]               ; 00548e5b
    SHL EAX,0x2                         ; 00548e5d
    TEST BL,0x1                         ; 00548e60
    JZ 0x00548f05                       ; 00548e63
        ;   XREF to: 00548f05 (CONDITIONAL_JUMP)  ; LAB_00548f05
    MOV ECX,dword ptr [ESP + 0xa8]      ; 00548e69
    MOV EBX,dword ptr [ESP + 0x80]      ; 00548e70
    CMP EBX,ECX                         ; 00548e77
    JGE 0x00548f05                      ; 00548e79
        ;   XREF to: 00548f05 (CONDITIONAL_JUMP)  ; LAB_00548f05
    MOV EDX,dword ptr [EBP + 0x20]      ; 00548e7f
    ADD EDX,EAX                         ; 00548e82
    IMUL EAX,EBX,0x12                   ; 00548e84
    MOV dword ptr [ESP + 0xe8],EAX      ; 00548e87
    LEA EAX,[EBX*0x4 + 0x0]             ; 00548e8e
    MOV dword ptr [ESP + 0x94],EDX      ; 00548e95
    MOV dword ptr [ESP + 0xe4],EAX      ; 00548e9c
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00548ea3
        ;   Label: LAB_00548ea3
    MOV EAX,dword ptr [ESI + 0x7c]      ; 00548eaa
    MOV EDI,dword ptr [ESI + 0x54]      ; 00548ead
    ADD EDX,EAX                         ; 00548eb0
    MOV EAX,EBX                         ; 00548eb2
    SUB EAX,EDI                         ; 00548eb4
    MOV EDI,dword ptr [ESI + 0xa4]      ; 00548eb6
    MOV dword ptr [ESP + 0xc4],EDX      ; 00548ebc
    MOV EAX,dword ptr [EDI + EAX*0x4]   ; 00548ec3
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00548ec6
    SHL EAX,0x2                         ; 00548ec9
    ADD EAX,EDX                         ; 00548ecc
    TEST byte ptr [EAX],0x1             ; 00548ece
    JZ 0x00549592                       ; 00548ed1
        ;   XREF to: 00549592 (CONDITIONAL_JUMP)  ; LAB_00549592
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00548ed7
        ;   Label: LAB_00548ed7
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00548ede
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00548ee5
    INC EBX                             ; 00548eec
    ADD EDI,0x12                        ; 00548eed
    ADD EAX,0x4                         ; 00548ef0
    MOV dword ptr [ESP + 0xe8],EDI      ; 00548ef3
    MOV dword ptr [ESP + 0xe4],EAX      ; 00548efa
    CMP EBX,EDX                         ; 00548f01
    JL 0x00548ea3                       ; 00548f03
        ;   XREF to: 00548ea3 (CONDITIONAL_JUMP)  ; LAB_00548ea3
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00548f05
        ;   Label: LAB_00548f05
    MOV EBX,dword ptr [ESP + 0x64]      ; 00548f0c
    MOV EDI,dword ptr [ESP + 0x70]      ; 00548f10
    MOV EDX,dword ptr [EBP + 0x14]      ; 00548f14
    MOV dword ptr [ESP + 0x80],EAX      ; 00548f17
    ADD EBX,0x4                         ; 00548f1e
    ADD EDI,0x60                        ; 00548f21
    MOV ECX,dword ptr [EDX + 0xc00]     ; 00548f24
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00548f2a
    MOV dword ptr [ESP + 0x64],EBX      ; 00548f2e
    INC EAX                             ; 00548f32
    MOV dword ptr [ESP + 0x70],EDI      ; 00548f33
    MOV dword ptr [ESP + 0x7c],EAX      ; 00548f37
    CMP EAX,ECX                         ; 00548f3b
    JL 0x00548e2d                       ; 00548f3d
        ;   XREF to: 00548e2d (CONDITIONAL_JUMP)  ; LAB_00548e2d
    PUSH 0x0                            ; 00548f43
        ;   Label: LAB_00548f43
    MOV EDX,dword ptr [0x005f2afc]      ; 00548f45 | DAT_005f2afc
    PUSH EDX                            ; 00548f4b | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 00548f4c
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 00548f51
    PUSH 0x1                            ; 00548f54
    MOV ECX,dword ptr [0x005f2afc]      ; 00548f56 | DAT_005f2afc
    PUSH ECX                            ; 00548f5c | DAT_01bdd7e4
    CALL FUN_0046d500                   ; 00548f5d
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d500()
    ADD ESP,0x8                         ; 00548f62
    MOV ESP,EBP                         ; 00548f65
    POP EBP                             ; 00548f67
    POP EDI                             ; 00548f68
    POP ESI                             ; 00548f69
    POP EBX                             ; 00548f6a
    RET                                 ; 00548f6b
    CMP dword ptr [ESP + 0xb0],0x0      ; 00548f6c
        ;   Label: LAB_00548f6c
    JZ 0x00548d60                       ; 00548f74
        ;   XREF to: 00548d60 (CONDITIONAL_JUMP)  ; LAB_00548d60
    PUSH 0x1                            ; 00548f7a
    MOV ESI,dword ptr [0x005f2afc]      ; 00548f7c | DAT_005f2afc
    PUSH ESI                            ; 00548f82 | DAT_01bdd7e4
    CALL FUN_0046d500                   ; 00548f83
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d500()
    ADD ESP,0x8                         ; 00548f88
    MOV EAX,dword ptr [ESP + 0x80]      ; 00548f8b
    CMP EDI,EAX                         ; 00548f92
    JLE 0x00548dad                      ; 00548f94
        ;   XREF to: 00548dad (CONDITIONAL_JUMP)  ; LAB_00548dad
    IMUL EAX,EAX,0x12                   ; 00548f9a
    MOV dword ptr [ESP + 0xec],EAX      ; 00548f9d
    IMUL EAX,EDI,0x12                   ; 00548fa4
    MOV dword ptr [ESP + 0xa4],EAX      ; 00548fa7
    MOV EAX,dword ptr [ESP + 0x88]      ; 00548fae
        ;   Label: LAB_00548fae
    MOV ESI,dword ptr [EAX + 0x7c]      ; 00548fb5
    ADD ESI,dword ptr [ESP + 0xec]      ; 00548fb8
    XOR ECX,ECX                         ; 00548fbf
    MOV CX,word ptr [ESI + 0x2]         ; 00548fc1
    IMUL ECX,ECX,0x30                   ; 00548fc5
    XOR EAX,EAX                         ; 00548fc8
    MOV AX,word ptr [ESI]               ; 00548fca
    IMUL EDX,EAX,0x30                   ; 00548fcd
    MOV EAX,[0x005f2afc]                ; 00548fd0 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 00548fd5 | DAT_01bdd7e4
    ADD EDX,EAX                         ; 00548fd7
    LEA EBX,[EAX + ECX*0x1]             ; 00548fd9
    XOR ECX,ECX                         ; 00548fdc
    MOV CX,word ptr [ESI + 0x4]         ; 00548fde
    IMUL ECX,ECX,0x30                   ; 00548fe2
    ADD EAX,ECX                         ; 00548fe5
    MOV ECX,dword ptr [EDX + 0x4]       ; 00548fe7
    IMUL ECX,dword ptr [0x01d72650]     ; 00548fea | DAT_01d72650
    MOV dword ptr [ESP + 0x100],ECX     ; 00548ff1
    MOV ECX,dword ptr [EDX]             ; 00548ff8
    IMUL ECX,dword ptr [0x01d72644]     ; 00548ffa | DAT_01d72644
    ADD ECX,dword ptr [ESP + 0x100]     ; 00549001
    MOV dword ptr [ESP + 0x104],ECX     ; 00549008
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054900f
    IMUL ECX,dword ptr [0x01d7265c]     ; 00549012 | DAT_01d7265c
    MOV dword ptr [ESP + 0x100],ECX     ; 00549019
    MOV ECX,dword ptr [ESP + 0x104]     ; 00549020
    ADD ECX,dword ptr [ESP + 0x100]     ; 00549027
    MOV dword ptr [ESP + 0x100],ECX     ; 0054902e
    MOV ECX,dword ptr [EDX + 0x4]       ; 00549035
    IMUL ECX,dword ptr [0x01d72654]     ; 00549038 | DAT_01d72654
    MOV dword ptr [ESP + 0x104],ECX     ; 0054903f
    MOV ECX,dword ptr [EDX]             ; 00549046
    IMUL ECX,dword ptr [0x01d72648]     ; 00549048 | DAT_01d72648
    ADD ECX,dword ptr [ESP + 0x104]     ; 0054904f
    MOV dword ptr [ESP + 0x108],ECX     ; 00549056
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054905d
    IMUL ECX,dword ptr [0x01d72660]     ; 00549060 | DAT_01d72660
    MOV dword ptr [ESP + 0x104],ECX     ; 00549067
    MOV ECX,dword ptr [ESP + 0x108]     ; 0054906e
    ADD ECX,dword ptr [ESP + 0x104]     ; 00549075
    MOV dword ptr [ESP + 0x104],ECX     ; 0054907c
    MOV ECX,dword ptr [EDX + 0x4]       ; 00549083
    IMUL ECX,dword ptr [0x01d72658]     ; 00549086 | DAT_01d72658
    MOV dword ptr [ESP + 0x108],ECX     ; 0054908d
    MOV ECX,dword ptr [EDX]             ; 00549094
    IMUL ECX,dword ptr [0x01d7264c]     ; 00549096 | DAT_01d7264c
    ADD ECX,dword ptr [ESP + 0x108]     ; 0054909d
    MOV EDX,dword ptr [EDX + 0x8]       ; 005490a4
    MOV dword ptr [ESP + 0x108],ECX     ; 005490a7
    IMUL EDX,dword ptr [0x01d72664]     ; 005490ae | DAT_01d72664
    ADD EDX,dword ptr [ESP + 0x108]     ; 005490b5
    MOV ECX,dword ptr [0x01d72650]      ; 005490bc | DAT_01d72650
    MOV dword ptr [ESP + 0x108],EDX     ; 005490c2
    IMUL ECX,dword ptr [EBX + 0x4]      ; 005490c9
    MOV EDX,dword ptr [EBX]             ; 005490cd
    IMUL EDX,dword ptr [0x01d72644]     ; 005490cf | DAT_01d72644
    ADD EDX,ECX                         ; 005490d6
    MOV ECX,dword ptr [0x01d7265c]      ; 005490d8 | DAT_01d7265c
    MOV dword ptr [ESP + 0x10c],EDX     ; 005490de
    MOV EDX,dword ptr [EBX + 0x8]       ; 005490e5
    IMUL EDX,ECX                        ; 005490e8
    ADD EDX,dword ptr [ESP + 0x10c]     ; 005490eb
    MOV ECX,dword ptr [0x01d72654]      ; 005490f2 | DAT_01d72654
    MOV dword ptr [ESP + 0x10c],EDX     ; 005490f8
    MOV EDX,dword ptr [EBX + 0x4]       ; 005490ff
    IMUL EDX,ECX                        ; 00549102
    MOV ECX,dword ptr [EBX]             ; 00549105
    IMUL ECX,dword ptr [0x01d72648]     ; 00549107 | DAT_01d72648
    ADD EDX,ECX                         ; 0054910e
    MOV ECX,dword ptr [EBX + 0x8]       ; 00549110
    IMUL ECX,dword ptr [0x01d72660]     ; 00549113 | DAT_01d72660
    ADD EDX,ECX                         ; 0054911a
    MOV ECX,dword ptr [0x01d72658]      ; 0054911c | DAT_01d72658
    MOV dword ptr [ESP + 0x110],EDX     ; 00549122
    MOV EDX,dword ptr [EBX + 0x4]       ; 00549129
    IMUL EDX,ECX                        ; 0054912c
    MOV ECX,dword ptr [EBX]             ; 0054912f
    IMUL ECX,dword ptr [0x01d7264c]     ; 00549131 | DAT_01d7264c
    ADD ECX,EDX                         ; 00549138
    MOV EDX,dword ptr [EBX + 0x8]       ; 0054913a
    IMUL EDX,dword ptr [0x01d72664]     ; 0054913d | DAT_01d72664
    ADD EDX,ECX                         ; 00549144
    MOV EBX,dword ptr [0x01d72650]      ; 00549146 | DAT_01d72650
    MOV dword ptr [ESP + 0x114],EDX     ; 0054914c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00549153
    IMUL EDX,EBX                        ; 00549156
    MOV ECX,dword ptr [0x01d72644]      ; 00549159 | DAT_01d72644
    MOV EBX,dword ptr [EAX]             ; 0054915f
    IMUL EBX,ECX                        ; 00549161
    MOV ECX,dword ptr [0x01d7265c]      ; 00549164 | DAT_01d7265c
    ADD EBX,EDX                         ; 0054916a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054916c
    IMUL EDX,ECX                        ; 0054916f
    ADD EDX,EBX                         ; 00549172
    MOV dword ptr [ESP + 0x118],EDX     ; 00549174
    MOV EBX,dword ptr [EAX + 0x4]       ; 0054917b
    IMUL EBX,dword ptr [0x01d72654]     ; 0054917e | DAT_01d72654
    MOV ECX,dword ptr [0x01d72648]      ; 00549185 | DAT_01d72648
    MOV EDX,dword ptr [EAX]             ; 0054918b
    IMUL EDX,ECX                        ; 0054918d
    MOV ECX,dword ptr [0x01d72660]      ; 00549190 | DAT_01d72660
    ADD EBX,EDX                         ; 00549196
    MOV EDX,dword ptr [EAX + 0x8]       ; 00549198
    IMUL EDX,ECX                        ; 0054919b
    ADD EBX,EDX                         ; 0054919e
    MOV EDX,dword ptr [0x01d72658]      ; 005491a0 | DAT_01d72658
    MOV dword ptr [ESP + 0x11c],EBX     ; 005491a6
    MOV EBX,dword ptr [EAX + 0x4]       ; 005491ad
    IMUL EBX,EDX                        ; 005491b0
    MOV ECX,dword ptr [0x01d7264c]      ; 005491b3 | DAT_01d7264c
    MOV EDX,dword ptr [EAX]             ; 005491b9
    IMUL EDX,ECX                        ; 005491bb
    MOV EAX,dword ptr [EAX + 0x8]       ; 005491be
    ADD EBX,EDX                         ; 005491c1
    IMUL EAX,dword ptr [0x01d72664]     ; 005491c3 | DAT_01d72664
    FILD dword ptr [ESP + 0x100]        ; 005491ca
    FILD dword ptr [ESP + 0x104]        ; 005491d1
    FILD dword ptr [ESP + 0x108]        ; 005491d8
    FSTP float ptr [ESP + 0xb8]         ; 005491df
    FILD dword ptr [ESP + 0x10c]        ; 005491e6
    FST float ptr [ESP + 0xdc]          ; 005491ed
    FSUBRP ST2,ST0                      ; 005491f4
    FILD dword ptr [ESP + 0x110]        ; 005491f6
    FST float ptr [ESP + 0xd0]          ; 005491fd
    FSUBRP                              ; 00549204
    FXCH                                ; 00549206
    FSTP float ptr [ESP + 0xe0]         ; 00549208
    FSTP float ptr [ESP + 0xd8]         ; 0054920f
    FILD dword ptr [ESP + 0x114]        ; 00549216
    FSTP float ptr [ESP + 0xd4]         ; 0054921d
    FILD dword ptr [ESP + 0x118]        ; 00549224
    FSTP float ptr [ESP + 0xb4]         ; 0054922b
    ADD EBX,EAX                         ; 00549232
    FILD dword ptr [ESP + 0x11c]        ; 00549234
    MOV dword ptr [ESP + 0x11c],EBX     ; 0054923b
    FSTP float ptr [ESP + 0xbc]         ; 00549242
    FILD dword ptr [ESP + 0x11c]        ; 00549249
    FSTP float ptr [ESP + 0xc0]         ; 00549250
    FLD float ptr [ESP + 0xd8]          ; 00549257
    FLD float ptr [ESP + 0xd4]          ; 0054925e
    FLD float ptr [ESP + 0xc0]          ; 00549265
    FSUB ST0,ST1                        ; 0054926c
    FSTP float ptr [ESP + 0x60]         ; 0054926e
    FXCH                                ; 00549272
    FMUL float ptr [ESP + 0x60]         ; 00549274
    FLD float ptr [ESP + 0xbc]          ; 00549278
    FSUB float ptr [ESP + 0xd0]         ; 0054927f
    FLD float ptr [ESP + 0xe0]          ; 00549286
    FMUL ST1                            ; 0054928d
    FLD float ptr [ESP + 0xb4]          ; 0054928f
    FXCH ST4                            ; 00549296
    FSUB float ptr [ESP + 0xb8]         ; 00549298
    FXCH ST4                            ; 0054929f
    FSUB float ptr [ESP + 0xdc]         ; 005492a1
    FLD ST0                             ; 005492a8
    FMUL ST5                            ; 005492aa
    FXCH ST3                            ; 005492ac
    FMULP ST5                           ; 005492ae
    FMUL float ptr [ESP + 0xd8]         ; 005492b0
    FLD float ptr [ESP + 0xe0]          ; 005492b7
    FXCH ST5                            ; 005492be
    FSUBP ST4,ST0                       ; 005492c0
    FXCH ST4                            ; 005492c2
    FMUL float ptr [ESP + 0x60]         ; 005492c4
    FXCH ST3                            ; 005492c8
    FSTP float ptr [ESP + 0xfc]         ; 005492ca
    FXCH ST2                            ; 005492d1
    FSUBP                               ; 005492d3
    FLD float ptr [ESP + 0xfc]          ; 005492d5
    FMUL ST0                            ; 005492dc
    FXCH                                ; 005492de
    FST float ptr [ESP + 0xf4]          ; 005492e0
    FMUL float ptr [ESP + 0xf4]         ; 005492e7
    FXCH ST3                            ; 005492ee
    FSUBP ST2,ST0                       ; 005492f0
    FADDP ST2,ST0                       ; 005492f2
    FST float ptr [ESP + 0xf8]          ; 005492f4
    FMUL float ptr [ESP + 0xf8]         ; 005492fb
    FADDP                               ; 00549302
    FLDZ                                ; 00549304
    FXCH                                ; 00549306
    FSTP float ptr [ESP]                ; 00549308
    FCOMP float ptr [ESP]               ; 0054930b
    FNSTSW AX                           ; 0054930e
    SAHF                                ; 00549310
    JNC 0x0054942e                      ; 00549311
        ;   XREF to: 0054942e (CONDITIONAL_JUMP)  ; LAB_0054942e
    FLD float ptr [ESP]                 ; 00549317
    FSQRT                               ; 0054931a
    FDIVR double ptr [0x005d1b0c]       ; 0054931c | DAT_005d1b0c
    FSTP float ptr [ESP]                ; 00549322
    FLD float ptr [ESP]                 ; 00549325
        ;   Label: LAB_00549325
    FLD float ptr [ESP + 0xfc]          ; 00549328
    FMUL ST1                            ; 0054932f
    FLD float ptr [ESP + 0xf4]          ; 00549331
    FMUL ST2                            ; 00549338
    FLD float ptr [ESP + 0xf8]          ; 0054933a
    FMULP ST3                           ; 00549341
    FXCH                                ; 00549343
    FSTP float ptr [ESP + 0xfc]         ; 00549345
    FSTP float ptr [ESP + 0xf4]         ; 0054934c
    FST float ptr [ESP + 0xf8]          ; 00549353
    FLD float ptr [ESP + 0xf4]          ; 0054935a
    FLD float ptr [ESP + 0xfc]          ; 00549361
    FXCH ST2                            ; 00549368
    FLD float ptr [0x005d1b04]          ; 0054936a | DAT_005d1b04
    FXCH                                ; 00549370
    FADD ST0,ST1                        ; 00549372
    FXCH ST2                            ; 00549374
    FADD ST0,ST1                        ; 00549376
    FXCH ST3                            ; 00549378
    FADDP                               ; 0054937a
    FXCH                                ; 0054937c
    CALL FUN_005a3120                   ; 0054937e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 00549383
    CALL FUN_005a3120                   ; 00549385
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 0054938a
    FISTP dword ptr [ESP + 0x104]       ; 0054938c
    FXCH                                ; 00549393
    FISTP dword ptr [ESP + 0x100]       ; 00549395
    MOV EAX,dword ptr [ESP + 0x104]     ; 0054939c
    MOV EDX,dword ptr [ESP + 0x100]     ; 005493a3
    PUSH EAX                            ; 005493aa
    CALL FUN_005a3120                   ; 005493ab
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH EDX                            ; 005493b0
    FISTP dword ptr [ESP + 0x108]       ; 005493b1
    MOV ECX,dword ptr [ESP + 0x108]     ; 005493b8
    PUSH ECX                            ; 005493bf
    MOV EBX,dword ptr [0x005f2afc]      ; 005493c0 | DAT_005f2afc
    PUSH EBX                            ; 005493c6 | DAT_01bdd7e4
    CALL FUN_0046d3d0                   ; 005493c7
        ;   XREF to: 0046d3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d3d0()
    MOV EAX,0x3                         ; 005493cc
    ADD ESP,0x10                        ; 005493d1
    MOV dword ptr [ESP + 0x8],EAX       ; 005493d4
    XOR EAX,EAX                         ; 005493d8
    MOV AX,word ptr [ESI]               ; 005493da
    MOV dword ptr [ESP + 0x1c],EAX      ; 005493dd
    XOR EAX,EAX                         ; 005493e1
    MOV AX,word ptr [ESI + 0x2]         ; 005493e3
    MOV dword ptr [ESP + 0x28],EAX      ; 005493e7
    XOR EAX,EAX                         ; 005493eb
    MOV AX,word ptr [ESI + 0x4]         ; 005493ed
    MOV dword ptr [ESP + 0x34],EAX      ; 005493f1
    LEA EAX,[ESP + 0x4]                 ; 005493f5
    PUSH EAX                            ; 005493f9
    MOV EDX,dword ptr [0x005f2afc]      ; 005493fa | DAT_005f2afc
    PUSH EDX                            ; 00549400 | DAT_01bdd7e4
    CALL FUN_0046b2c0                   ; 00549401
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2c0()
    ADD ESP,0x8                         ; 00549406
    MOV ECX,dword ptr [ESP + 0xec]      ; 00549409
    ADD ECX,0x12                        ; 00549410
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00549413
    MOV dword ptr [ESP + 0xec],ECX      ; 0054941a
    CMP ECX,EBX                         ; 00549421
    JGE 0x00548dad                      ; 00549423
        ;   XREF to: 00548dad (CONDITIONAL_JUMP)  ; LAB_00548dad
    JMP 0x00548fae                      ; 00549429
        ;   XREF to: 00548fae (UNCONDITIONAL_JUMP)  ; LAB_00548fae
    MOV dword ptr [ESP],0x42fe0000      ; 0054942e
        ;   Label: LAB_0054942e
    JMP 0x00549325                      ; 00549435
        ;   XREF to: 00549325 (UNCONDITIONAL_JUMP)  ; LAB_00549325
    CMP dword ptr [ESP + 0xac],0x0      ; 0054943a
        ;   Label: LAB_0054943a
    JNZ 0x00548d70                      ; 00549442
        ;   XREF to: 00548d70 (CONDITIONAL_JUMP)  ; LAB_00548d70
    CMP dword ptr [EBP + 0x28],0x0      ; 00549448
    JNZ 0x00548d70                      ; 0054944c
        ;   XREF to: 00548d70 (CONDITIONAL_JUMP)  ; LAB_00548d70
    CMP dword ptr [ESP + 0xb0],0x0      ; 00549452
    JNZ 0x00548d70                      ; 0054945a
        ;   XREF to: 00548d70 (CONDITIONAL_JUMP)  ; LAB_00548d70
    MOV dword ptr [ESP + 0xc8],0xffffffff ; 00549460
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054946b
    MOV dword ptr [ESP + 0xf0],EAX      ; 00549472
    CMP EDI,EAX                         ; 00549479
    JLE 0x00548dad                      ; 0054947b
        ;   XREF to: 00548dad (CONDITIONAL_JUMP)  ; LAB_00548dad
    MOV EAX,dword ptr [ESP + 0x78]      ; 00549481
    MOV dword ptr [ESP + 0x98],EAX      ; 00549485
    MOV EDX,dword ptr [ESP + 0x84]      ; 0054948c
        ;   Label: LAB_0054948c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00549493
    MOV EDX,dword ptr [EDX + 0x90]      ; 0054949a
    LEA EBX,[EAX + 0x1]                 ; 005494a0
    MOV ESI,dword ptr [EDX + EAX*0x4]   ; 005494a3
    CMP EBX,EDI                         ; 005494a6
    JGE 0x005494c8                      ; 005494a8
        ;   XREF to: 005494c8 (CONDITIONAL_JUMP)  ; LAB_005494c8
    MOV EDX,dword ptr [ESP + 0x90]      ; 005494aa
    LEA EAX,[EBX*0x4 + 0x0]             ; 005494b1
    MOV EDX,dword ptr [EDX + 0x90]      ; 005494b8
    ADD EAX,EDX                         ; 005494be
    CMP ESI,dword ptr [EAX]             ; 005494c0
        ;   Label: LAB_005494c0
    JZ 0x00549581                       ; 005494c2
        ;   XREF to: 00549581 (CONDITIONAL_JUMP)  ; LAB_00549581
    CMP ESI,dword ptr [ESP + 0xc8]      ; 005494c8
        ;   Label: LAB_005494c8
    JZ 0x00549500                       ; 005494cf
        ;   XREF to: 00549500 (CONDITIONAL_JUMP)  ; LAB_00549500
    MOV EAX,dword ptr [ESP + 0x98]      ; 005494d1
    IMUL EAX,dword ptr [EAX],0x240      ; 005494d8
    IMUL EDX,ESI,0x48                   ; 005494de
    ADD EAX,dword ptr [ESP + 0x9c]      ; 005494e1
    ADD EAX,EDX                         ; 005494e8
    PUSH EAX                            ; 005494ea
    MOV EAX,[0x005f2afc]                ; 005494eb | DAT_005f2afc
    PUSH EAX                            ; 005494f0 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 005494f1
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 005494f6
    MOV dword ptr [ESP + 0xc8],ESI      ; 005494f9
    MOV EAX,dword ptr [EBP + 0x24]      ; 00549500
        ;   Label: LAB_00549500
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00549503
    PUSH EAX                            ; 0054950a
    MOV EAX,EBX                         ; 0054950b
    SUB EAX,EDX                         ; 0054950d
    PUSH EAX                            ; 0054950f
    IMUL EAX,EDX,0x12                   ; 00549510
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00549513
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0054951a
    ADD EAX,EDX                         ; 0054951d
    PUSH EAX                            ; 0054951f
    MOV ESI,dword ptr [0x00603b28]      ; 00549520 | DAT_00603b28
    PUSH ESI                            ; 00549526 | DAT_01ed78c8
    CALL FUN_0053ac80                   ; 00549527
        ;   XREF to: 0053ac80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ac80()
    ADD ESP,0x10                        ; 0054952c
    MOV dword ptr [ESP + 0xf0],EBX      ; 0054952f
    CMP EBX,EDI                         ; 00549536
    JL 0x0054948c                       ; 00549538
        ;   XREF to: 0054948c (CONDITIONAL_JUMP)  ; LAB_0054948c
    JMP 0x00548dad                      ; 0054953e
        ;   XREF to: 00548dad (UNCONDITIONAL_JUMP)  ; LAB_00548dad
    CMP dword ptr [EBP + 0x28],0x0      ; 00549543
        ;   Label: LAB_00549543
    JNZ 0x00548d7e                      ; 00549547
        ;   XREF to: 00548d7e (CONDITIONAL_JUMP)  ; LAB_00548d7e
    CMP dword ptr [ESP + 0xb0],0x0      ; 0054954d
    JNZ 0x00548d7e                      ; 00549555
        ;   XREF to: 00548d7e (CONDITIONAL_JUMP)  ; LAB_00548d7e
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054955b
    IMUL EAX,dword ptr [EAX],0x240      ; 0054955f
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00549565
    PUSH EAX                            ; 0054956c
    MOV EBX,dword ptr [0x005f2afc]      ; 0054956d | DAT_005f2afc
    PUSH EBX                            ; 00549573 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 00549574
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 00549579
    JMP 0x00548d7e                      ; 0054957c
        ;   XREF to: 00548d7e (UNCONDITIONAL_JUMP)  ; LAB_00548d7e
    INC EBX                             ; 00549581
        ;   Label: LAB_00549581
    ADD EAX,0x4                         ; 00549582
    CMP EBX,EDI                         ; 00549585
    JL 0x005494c0                       ; 00549587
        ;   XREF to: 005494c0 (CONDITIONAL_JUMP)  ; LAB_005494c0
    JMP 0x005494c8                      ; 0054958d
        ;   XREF to: 005494c8 (UNCONDITIONAL_JUMP)  ; LAB_005494c8
    CMP dword ptr [ESP + 0xac],0x0      ; 00549592
        ;   Label: LAB_00549592
    JNZ 0x005495f7                      ; 0054959a
        ;   XREF to: 005495f7 (CONDITIONAL_JUMP)  ; LAB_005495f7
    CMP dword ptr [EBP + 0x28],0x0      ; 0054959c
    JNZ 0x005495f7                      ; 005495a0
        ;   XREF to: 005495f7 (CONDITIONAL_JUMP)  ; LAB_005495f7
    CMP dword ptr [ESP + 0xb0],0x0      ; 005495a2
    JNZ 0x005495f7                      ; 005495aa
        ;   XREF to: 005495f7 (CONDITIONAL_JUMP)  ; LAB_005495f7
    MOV EDX,dword ptr [ESP + 0xe4]      ; 005495ac
    MOV EAX,dword ptr [ESI + 0x90]      ; 005495b3
    ADD EAX,EDX                         ; 005495b9
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005495bb
    MOV EDI,dword ptr [EAX]             ; 005495c2
    CMP EDI,ECX                         ; 005495c4
    JZ 0x005495f7                       ; 005495c6
        ;   XREF to: 005495f7 (CONDITIONAL_JUMP)  ; LAB_005495f7
    MOV EAX,dword ptr [ESP + 0x94]      ; 005495c8
    IMUL EAX,dword ptr [EAX],0x240      ; 005495cf
    IMUL EDX,EDI,0x48                   ; 005495d5
    ADD EAX,dword ptr [ESP + 0x8c]      ; 005495d8
    ADD EAX,EDX                         ; 005495df
    PUSH EAX                            ; 005495e1
    MOV EAX,[0x005f2afc]                ; 005495e2 | DAT_005f2afc
    PUSH EAX                            ; 005495e7 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 005495e8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 005495ed
    MOV dword ptr [ESP + 0xcc],EDI      ; 005495f0
    MOV EDX,dword ptr [EBP + 0x24]      ; 005495f7
        ;   Label: LAB_005495f7
    PUSH EDX                            ; 005495fa
    PUSH 0x1                            ; 005495fb
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005495fd
    PUSH ECX                            ; 00549604
    MOV EDI,dword ptr [0x00603b28]      ; 00549605 | DAT_00603b28
    PUSH EDI                            ; 0054960b | DAT_01ed78c8
    CALL FUN_0053ac80                   ; 0054960c
        ;   XREF to: 0053ac80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ac80()
    ADD ESP,0x10                        ; 00549611
    JMP 0x00548ed7                      ; 00549614
        ;   XREF to: 00548ed7 (UNCONDITIONAL_JUMP)  ; LAB_00548ed7

