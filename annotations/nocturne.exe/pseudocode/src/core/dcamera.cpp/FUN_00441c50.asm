; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441c50(int param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
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
;
; XREF[1]:
;   FUN_005088f0 at 00508ffe
;
; Referenced Globals:
;   undefined4 s_movscrn.raw_0057b79a+1
;   string s_..\\core\\dcamera.cpp_0057b7a7
;   string s_CDemonCamera::precomputeLight_-_T_0057b7bb
;   undefined4 DAT_00b0e604
;   undefined4 DAT_01216608
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00441610
;   FUN_0044ec60
;   FUN_00451a60
;   FUN_004c8440
;   FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441c50
        ;   Label: FUN_00441c50
    PUSH ESI                            ; 00441c51
    PUSH EDI                            ; 00441c52
    PUSH EBP                            ; 00441c53
    MOV EBP,ESP                         ; 00441c54
    SUB ESP,0x6c                        ; 00441c56
    AND ESP,0xfffffff8                  ; 00441c59
    MOV EBX,dword ptr [EBP + 0x18]      ; 00441c5c
    MOV EDX,0x80                        ; 00441c5f
    PUSH 0x57b79b                       ; 00441c64 | s_movscrn.raw_0057b79a+1
    LEA EAX,[EBX + 0x1c74]              ; 00441c69
    XOR ECX,ECX                         ; 00441c6f
    PUSH EAX                            ; 00441c71
    MOV dword ptr [ESP + 0x4c],EDX      ; 00441c72
    MOV dword ptr [ESP + 0x48],ECX      ; 00441c76
    CALL FUN_005649c0                   ; 00441c7a
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005649c0()
    ADD ESP,0x8                         ; 00441c7f
    TEST EAX,EAX                        ; 00441c82
    JZ 0x00441f6b                       ; 00441c84
        ;   XREF to: 00441f6b (CONDITIONAL_JUMP)  ; LAB_00441f6b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00441c8a
        ;   Label: LAB_00441c8a
    TEST EAX,EAX                        ; 00441c8d
    JNZ 0x00441c9b                      ; 00441c8f
        ;   XREF to: 00441c9b (CONDITIONAL_JUMP)  ; LAB_00441c9b
    MOV [0x01216608],EAX                ; 00441c91 | DAT_01216608
    MOV [0x00b0e604],EAX                ; 00441c96 | DAT_00b0e604
    MOV ESI,dword ptr [0x00b0e604]      ; 00441c9b | DAT_00b0e604
        ;   Label: LAB_00441c9b
    LEA EAX,[ESI*0x4 + 0x0]             ; 00441ca1
    ADD EAX,ESI                         ; 00441ca8
    SHL EAX,0xc                         ; 00441caa
    MOV ESI,EAX                         ; 00441cad
    SHL EAX,0x4                         ; 00441caf
    SUB EAX,ESI                         ; 00441cb2
    MOV ESI,dword ptr [0x00b0e604]      ; 00441cb4 | DAT_00b0e604
    INC ESI                             ; 00441cba
    ADD EAX,0xb0e608                    ; 00441cbb
    MOV dword ptr [0x00b0e604],ESI      ; 00441cc0 | DAT_00b0e604
    CMP ESI,0x18                        ; 00441cc6
    JBE 0x00441ccd                      ; 00441cc9
        ;   XREF to: 00441ccd (CONDITIONAL_JUMP)  ; LAB_00441ccd
    XOR EAX,EAX                         ; 00441ccb
    MOV ESI,dword ptr [0x00b0e604]      ; 00441ccd | DAT_00b0e604
        ;   Label: LAB_00441ccd
    MOV dword ptr [EBX + 0x1c48],EAX    ; 00441cd3
    LEA EAX,[ESI*0x4 + 0x0]             ; 00441cd9
    ADD EAX,ESI                         ; 00441ce0
    SHL EAX,0xc                         ; 00441ce2
    MOV EDX,dword ptr [0x00b0e604]      ; 00441ce5 | DAT_00b0e604
    MOV ESI,EAX                         ; 00441ceb
    SHL EAX,0x4                         ; 00441ced
    INC EDX                             ; 00441cf0
    SUB EAX,ESI                         ; 00441cf1
    MOV dword ptr [0x00b0e604],EDX      ; 00441cf3 | DAT_00b0e604
    ADD EAX,0xb0e608                    ; 00441cf9
    CMP EDX,0x18                        ; 00441cfe
    JBE 0x00441d05                      ; 00441d01
        ;   XREF to: 00441d05 (CONDITIONAL_JUMP)  ; LAB_00441d05
    XOR EAX,EAX                         ; 00441d03
    MOV ESI,dword ptr [0x00b0e604]      ; 00441d05 | DAT_00b0e604
        ;   Label: LAB_00441d05
    MOV dword ptr [EBX + 0x1c4c],EAX    ; 00441d0b
    LEA EAX,[ESI*0x4 + 0x0]             ; 00441d11
    ADD EAX,ESI                         ; 00441d18
    SHL EAX,0xc                         ; 00441d1a
    MOV ESI,EAX                         ; 00441d1d
    SHL EAX,0x4                         ; 00441d1f
    SUB EAX,ESI                         ; 00441d22
    MOV ESI,dword ptr [0x00b0e604]      ; 00441d24 | DAT_00b0e604
    INC ESI                             ; 00441d2a
    ADD EAX,0xb0e608                    ; 00441d2b
    MOV dword ptr [0x00b0e604],ESI      ; 00441d30 | DAT_00b0e604
    CMP ESI,0x18                        ; 00441d36
    JBE 0x00441d3d                      ; 00441d39
        ;   XREF to: 00441d3d (CONDITIONAL_JUMP)  ; LAB_00441d3d
    XOR EAX,EAX                         ; 00441d3b
    MOV dword ptr [EBX + 0x1c50],EAX    ; 00441d3d
        ;   Label: LAB_00441d3d
    CMP dword ptr [EBX + 0x1c48],0x0    ; 00441d43
    JNZ 0x00441f82                      ; 00441d4a
        ;   XREF to: 00441f82 (CONDITIONAL_JUMP)  ; LAB_00441f82
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441d50
        ;   Label: LAB_00441d50
    PUSH EAX                            ; 00441d53
    MOV ESI,0x57b7a7                    ; 00441d54 | = "..\\core\\dcamera.cpp"
    MOV EDI,0x6ae                       ; 00441d59
    PUSH 0x57b7bb                       ; 00441d5e | = "CDemonCamera::precomputeLight - Too m..."
    MOV dword ptr [0x01cc4800],ESI      ; 00441d63 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00441d69 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00441d6f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00441d74
    PUSH EBX                            ; 00441d77
        ;   Label: LAB_00441d77
    CALL FUN_00451a60                   ; 00441d78
        ;   XREF to: 00451a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00451a60()
    ADD ESP,0x4                         ; 00441d7d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00441d80
    TEST EDX,EDX                        ; 00441d83
    JNZ 0x00441fa1                      ; 00441d85
        ;   XREF to: 00441fa1 (CONDITIONAL_JUMP)  ; LAB_00441fa1
    XOR EAX,EAX                         ; 00441d8b
        ;   Label: LAB_00441d8b
    MOV dword ptr [ESP + 0x8],EAX       ; 00441d8d
    MOV dword ptr [ESP],EAX             ; 00441d91
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441d94
    MOV EAX,dword ptr [EAX + 0x150]     ; 00441d97
    DEC EAX                             ; 00441d9d
    MOV dword ptr [ESP + 0x4],EAX       ; 00441d9e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441da2
    MOV EAX,dword ptr [EAX + 0x154]     ; 00441da5
    DEC EAX                             ; 00441dab
    MOV dword ptr [ESP + 0xc],EAX       ; 00441dac
    MOV EAX,dword ptr [ESP + 0x8]       ; 00441db0
        ;   Label: LAB_00441db0
    MOV ESI,dword ptr [ESP + 0xc]       ; 00441db4
    MOV dword ptr [ESP + 0x54],EAX      ; 00441db8
    CMP EAX,ESI                         ; 00441dbc
    JG 0x00441f64                       ; 00441dbe
        ;   XREF to: 00441f64 (CONDITIONAL_JUMP)  ; LAB_00441f64
    MOV ESI,dword ptr [ESP]             ; 00441dc4
    LEA EAX,[ESI*0x4 + 0x0]             ; 00441dc7
    SUB EAX,ESI                         ; 00441dce
    SHL EAX,0x2                         ; 00441dd0
    MOV dword ptr [ESP + 0x28],EAX      ; 00441dd3
    LEA EAX,[ESI*0x4 + 0x0]             ; 00441dd7
    MOV ESI,dword ptr [ESP + 0x8]       ; 00441dde
    MOV dword ptr [ESP + 0x30],EAX      ; 00441de2
    LEA EAX,[ESI*0x4 + 0x0]             ; 00441de6
    ADD EAX,ESI                         ; 00441ded
    SHL EAX,0x8                         ; 00441def
    SHL ESI,0x8                         ; 00441df2
    MOV dword ptr [ESP + 0x3c],EAX      ; 00441df5
    MOV EAX,ESI                         ; 00441df9
    SHL EAX,0x4                         ; 00441dfb
    SUB EAX,ESI                         ; 00441dfe
    MOV ESI,EAX                         ; 00441e00
    ADD EAX,0x7f7378                    ; 00441e02
    MOV dword ptr [ESP + 0x2c],EAX      ; 00441e07
    MOV EAX,dword ptr [ESP + 0x8]       ; 00441e0b
    SHL EAX,0x2                         ; 00441e0f
    ADD ESI,0x9bb178                    ; 00441e12
    ADD EAX,EBX                         ; 00441e18
    MOV dword ptr [ESP + 0x34],ESI      ; 00441e1a
    MOV dword ptr [ESP + 0x38],EAX      ; 00441e1e
    MOV EAX,0x3e7                       ; 00441e22
        ;   Label: LAB_00441e22
    MOV ECX,dword ptr [ESP + 0x28]      ; 00441e27
    MOV dword ptr [ESP + 0x48],EAX      ; 00441e2b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00441e2f
    ADD EAX,ECX                         ; 00441e33
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00441e35
    MOV dword ptr [ESP + 0x50],EAX      ; 00441e39
    MOV EAX,dword ptr [ESP + 0x34]      ; 00441e3d
    XOR EDX,EDX                         ; 00441e41
    ADD EAX,ECX                         ; 00441e43
    MOV dword ptr [ESP + 0x4c],EDX      ; 00441e45
    MOV dword ptr [ESP + 0x58],EAX      ; 00441e49
    MOV EAX,dword ptr [EBX + 0x1c48]    ; 00441e4d
    MOV EDX,dword ptr [ESP + 0x30]      ; 00441e53
    ADD EAX,EDI                         ; 00441e57
    ADD EDX,EAX                         ; 00441e59
    MOV dword ptr [ESP + 0x60],EDX      ; 00441e5b
    MOV EAX,dword ptr [EBX + 0x1c4c]    ; 00441e5f
    MOV EDX,dword ptr [ESP + 0x30]      ; 00441e65
    ADD EAX,EDI                         ; 00441e69
    ADD EDX,EAX                         ; 00441e6b
    MOV dword ptr [ESP + 0x64],EDX      ; 00441e6d
    MOV EAX,dword ptr [EBX + 0x1c50]    ; 00441e71
    MOV EDX,dword ptr [ESP + 0x30]      ; 00441e77
    ADD EAX,EDI                         ; 00441e7b
    MOV ESI,dword ptr [ESP + 0x4]       ; 00441e7d
    ADD EDX,EAX                         ; 00441e81
    MOV EAX,dword ptr [ESP]             ; 00441e83
    MOV dword ptr [ESP + 0x5c],EDX      ; 00441e86
    MOV dword ptr [ESP + 0x68],EAX      ; 00441e8a
    CMP EAX,ESI                         ; 00441e8e
    JG 0x00441f05                       ; 00441e90
        ;   XREF to: 00441f05 (CONDITIONAL_JUMP)  ; LAB_00441f05
    MOV ECX,dword ptr [ESP + 0x68]      ; 00441e92
        ;   Label: LAB_00441e92
    CMP ECX,0x1                         ; 00441e96
    JGE 0x00442037                      ; 00441e99
        ;   XREF to: 00442037 (CONDITIONAL_JUMP)  ; LAB_00442037
    MOV EAX,dword ptr [ESP + 0x60]      ; 00441e9f
        ;   Label: LAB_00441e9f
    MOV dword ptr [EAX],0x0             ; 00441ea3
    MOV EAX,dword ptr [ESP + 0x64]      ; 00441ea9
    MOV dword ptr [EAX],0x0             ; 00441ead
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00441eb3
    MOV dword ptr [EAX],0x0             ; 00441eb7
        ;   Label: LAB_00441eb7
    MOV EDI,dword ptr [ESP + 0x58]      ; 00441ebd
        ;   Label: LAB_00441ebd
    MOV EAX,dword ptr [ESP + 0x50]      ; 00441ec1
    MOV EDX,dword ptr [ESP + 0x60]      ; 00441ec5
    MOV ECX,dword ptr [ESP + 0x64]      ; 00441ec9
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00441ecd
    ADD EDI,0xc                         ; 00441ed1
    ADD EAX,0xc                         ; 00441ed4
    ADD EDX,0x4                         ; 00441ed7
    ADD ECX,0x4                         ; 00441eda
    ADD ESI,0x4                         ; 00441edd
    MOV dword ptr [ESP + 0x58],EDI      ; 00441ee0
    MOV dword ptr [ESP + 0x50],EAX      ; 00441ee4
    MOV dword ptr [ESP + 0x60],EDX      ; 00441ee8
    MOV dword ptr [ESP + 0x64],ECX      ; 00441eec
    MOV EDI,dword ptr [ESP + 0x68]      ; 00441ef0
    MOV dword ptr [ESP + 0x5c],ESI      ; 00441ef4
    INC EDI                             ; 00441ef8
    MOV EDX,dword ptr [ESP + 0x4]       ; 00441ef9
    MOV dword ptr [ESP + 0x68],EDI      ; 00441efd
    CMP EDI,EDX                         ; 00441f01
    JLE 0x00441e92                      ; 00441f03
        ;   XREF to: 00441e92 (CONDITIONAL_JUMP)  ; LAB_00441e92
    MOV EAX,dword ptr [ESP + 0x48]      ; 00441f05
        ;   Label: LAB_00441f05
    MOV EDX,dword ptr [ESP + 0x38]      ; 00441f09
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00441f0d
    MOV ESI,dword ptr [ESP + 0x54]      ; 00441f11
    MOV ECX,EDX                         ; 00441f15
    ADD EDI,0x500                       ; 00441f17
    INC ESI                             ; 00441f1d
    MOV dword ptr [EDX + 0x14c8],EAX    ; 00441f1e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00441f24
    MOV dword ptr [ESP + 0x3c],EDI      ; 00441f28
    ADD ECX,0x4                         ; 00441f2c
    MOV dword ptr [ESP + 0x54],ESI      ; 00441f2f
    MOV EDI,dword ptr [ESP + 0xc]       ; 00441f33
    MOV dword ptr [ESP + 0x38],ECX      ; 00441f37
    MOV dword ptr [EDX + 0x1888],EAX    ; 00441f3b
    MOV EAX,dword ptr [ESP + 0x34]      ; 00441f41
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00441f45
    ADD EAX,0xf00                       ; 00441f49
    ADD EDX,0xf00                       ; 00441f4e
    MOV dword ptr [ESP + 0x34],EAX      ; 00441f54
    MOV dword ptr [ESP + 0x2c],EDX      ; 00441f58
    CMP ESI,EDI                         ; 00441f5c
    JLE 0x00441e22                      ; 00441f5e
        ;   XREF to: 00441e22 (CONDITIONAL_JUMP)  ; LAB_00441e22
    MOV ESP,EBP                         ; 00441f64
        ;   Label: LAB_00441f64
    POP EBP                             ; 00441f66
    POP EDI                             ; 00441f67
    POP ESI                             ; 00441f68
    POP EBX                             ; 00441f69
    RET                                 ; 00441f6a
    MOV EDI,0x1                         ; 00441f6b
        ;   Label: LAB_00441f6b
    MOV ESI,0x100                       ; 00441f70
    MOV dword ptr [ESP + 0x40],EDI      ; 00441f75
    MOV dword ptr [ESP + 0x44],ESI      ; 00441f79
    JMP 0x00441c8a                      ; 00441f7d
        ;   XREF to: 00441c8a (UNCONDITIONAL_JUMP)  ; LAB_00441c8a
    CMP dword ptr [EBX + 0x1c4c],0x0    ; 00441f82
        ;   Label: LAB_00441f82
    JZ 0x00441d50                       ; 00441f89
        ;   XREF to: 00441d50 (CONDITIONAL_JUMP)  ; LAB_00441d50
    CMP dword ptr [EBX + 0x1c50],0x0    ; 00441f8f
    JZ 0x00441d50                       ; 00441f96
        ;   XREF to: 00441d50 (CONDITIONAL_JUMP)  ; LAB_00441d50
    JMP 0x00441d77                      ; 00441f9c
        ;   XREF to: 00441d77 (UNCONDITIONAL_JUMP)  ; LAB_00441d77
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441fa1
        ;   Label: LAB_00441fa1
    CMP dword ptr [EAX + 0x140],0x1e0   ; 00441fa4
    JNZ 0x00441d8b                      ; 00441fae
        ;   XREF to: 00441d8b (CONDITIONAL_JUMP)  ; LAB_00441d8b
    MOV EDI,ESP                         ; 00441fb4
    MOV ESI,EDX                         ; 00441fb6
    MOVSD ES:EDI,ESI                    ; 00441fb8
    MOVSD ES:EDI,ESI                    ; 00441fb9
    MOVSD ES:EDI,ESI                    ; 00441fba
    MOVSD ES:EDI,ESI                    ; 00441fbb
    MOV EDI,dword ptr [ESP + 0x8]       ; 00441fbc
    XOR ESI,ESI                         ; 00441fc0
    TEST EDI,EDI                        ; 00441fc2
    JLE 0x00441ff0                      ; 00441fc4
        ;   XREF to: 00441ff0 (CONDITIONAL_JUMP)  ; LAB_00441ff0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00441fc6
    MOV EAX,EBX                         ; 00441fca
    ADD EAX,0x4                         ; 00441fcc
        ;   Label: LAB_00441fcc
    MOV dword ptr [EAX + 0x14c4],0x3e7  ; 00441fcf
    INC ESI                             ; 00441fd9
    MOV dword ptr [EAX + 0x1884],0x0    ; 00441fda
    CMP ESI,ECX                         ; 00441fe4
    JL 0x00441fcc                       ; 00441fe6
        ;   XREF to: 00441fcc (CONDITIONAL_JUMP)  ; LAB_00441fcc
    LEA EAX,[EAX]                       ; 00441fe8
    MOV EDX,EDX                         ; 00441fee
    MOV ESI,dword ptr [ESP + 0xc]       ; 00441ff0
        ;   Label: LAB_00441ff0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441ff4
    INC ESI                             ; 00441ff7
    CMP ESI,dword ptr [EAX + 0x154]     ; 00441ff8
    JGE 0x00441db0                      ; 00441ffe
        ;   XREF to: 00441db0 (CONDITIONAL_JUMP)  ; LAB_00441db0
    LEA EAX,[ESI*0x4 + 0x0]             ; 00442004
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044200b
    ADD EAX,EBX                         ; 0044200e
    MOV dword ptr [EAX + 0x14c8],0x3e7  ; 00442010
        ;   Label: LAB_00442010
    MOV dword ptr [EAX + 0x1888],0x0    ; 0044201a
    INC ESI                             ; 00442024
    MOV ECX,dword ptr [EDX + 0x154]     ; 00442025
    ADD EAX,0x4                         ; 0044202b
    CMP ESI,ECX                         ; 0044202e
    JL 0x00442010                       ; 00442030
        ;   XREF to: 00442010 (CONDITIONAL_JUMP)  ; LAB_00442010
    JMP 0x00441db0                      ; 00442032
        ;   XREF to: 00441db0 (UNCONDITIONAL_JUMP)  ; LAB_00441db0
    CMP dword ptr [ESP + 0x54],0x1      ; 00442037
        ;   Label: LAB_00442037
    JL 0x00441e9f                       ; 0044203c
        ;   XREF to: 00441e9f (CONDITIONAL_JUMP)  ; LAB_00441e9f
    MOV ESI,dword ptr [EBP + 0x14]      ; 00442042
    MOV EAX,ECX                         ; 00442045
    IMUL EAX,dword ptr [ESI + 0x14c]    ; 00442047
    MOV ESI,dword ptr [ESI + 0x13c]     ; 0044204e
    SUB ESI,0x2                         ; 00442054
    CMP EAX,ESI                         ; 00442057
    JG 0x00441e9f                       ; 00442059
        ;   XREF to: 00441e9f (CONDITIONAL_JUMP)  ; LAB_00441e9f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044205f
    MOV ESI,dword ptr [ESP + 0x54]      ; 00442062
    IMUL ESI,dword ptr [EAX + 0x14c]    ; 00442066
    MOV EAX,dword ptr [EAX + 0x140]     ; 0044206d
    SUB EAX,0x2                         ; 00442073
    CMP ESI,EAX                         ; 00442076
    JG 0x00441e9f                       ; 00442078
        ;   XREF to: 00441e9f (CONDITIONAL_JUMP)  ; LAB_00441e9f
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044207e
    TEST ECX,ECX                        ; 00442082
    JZ 0x00442146                       ; 00442084
        ;   XREF to: 00442146 (CONDITIONAL_JUMP)  ; LAB_00442146
    MOV ESI,dword ptr [ESP + 0x50]      ; 0044208a
        ;   Label: LAB_0044208a
    PUSH ESI                            ; 0044208e
    PUSH EBX                            ; 0044208f
    LEA ESI,[ESP + 0x18]                ; 00442090
    LEA EDI,[ESP + 0x24]                ; 00442094
    CALL FUN_00441610                   ; 00442098
        ;   XREF to: 00441610 (UNCONDITIONAL_CALL)  ; undefined FUN_00441610()
    LEA ESI,[ESP + 0x18]                ; 0044209d
    ADD ESP,0x8                         ; 004420a1
    MOVSD ES:EDI,ESI                    ; 004420a4
    MOVSD ES:EDI,ESI                    ; 004420a5
    MOVSD ES:EDI,ESI                    ; 004420a6
    MOV EDI,dword ptr [ESP + 0x24]      ; 004420a7
    TEST EDI,EDI                        ; 004420ab
    JLE 0x00441e9f                      ; 004420ad
        ;   XREF to: 00441e9f (CONDITIONAL_JUMP)  ; LAB_00441e9f
    MOV EDX,dword ptr [ESP + 0x44]      ; 004420b3
    MOV ESI,dword ptr [ESP + 0x60]      ; 004420b7
    MOV EAX,EDI                         ; 004420bb
    MOV ECX,dword ptr [ESP + 0x54]      ; 004420bd
    SUB EAX,EDX                         ; 004420c1
    PUSH ECX                            ; 004420c3
    MOV dword ptr [ESI],EAX             ; 004420c4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004420c6
    PUSH ESI                            ; 004420ca
    LEA EAX,[ESP + 0x24]                ; 004420cb
    PUSH EAX                            ; 004420cf
    PUSH EBX                            ; 004420d0
    CALL FUN_0044ec60                   ; 004420d1
        ;   XREF to: 0044ec60 (UNCONDITIONAL_CALL)  ; undefined FUN_0044ec60()
    ADD ESP,0x10                        ; 004420d6
    MOV ESI,dword ptr [ESP + 0x64]      ; 004420d9
    MOV dword ptr [ESI],EAX             ; 004420dd
    TEST EAX,EAX                        ; 004420df
    JZ 0x0044218c                       ; 004420e1
        ;   XREF to: 0044218c (CONDITIONAL_JUMP)  ; LAB_0044218c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004420e7
    MOV CL,byte ptr [EBX + 0x1cc8]      ; 004420eb
    MOV EAX,dword ptr [EBX + 0x1c68]    ; 004420f1
    SAR ESI,CL                          ; 004420f7
    MOV CL,byte ptr [EBX + 0x1ccc]      ; 004420f9
    AND ESI,EAX                         ; 004420ff
    MOV EAX,dword ptr [ESP + 0x20]      ; 00442101
    MOV EDX,dword ptr [EBX + 0x1c68]    ; 00442105
    SAR EAX,CL                          ; 0044210b
    MOV CL,byte ptr [EBX + 0x1c60]      ; 0044210d
    AND EAX,EDX                         ; 00442113
    SHL EAX,CL                          ; 00442115
    ADD EAX,ESI                         ; 00442117
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00442119
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0044211d
    MOV dword ptr [ESI],EAX             ; 00442121
    MOV EAX,dword ptr [ESP + 0x68]      ; 00442123
    CMP EAX,ECX                         ; 00442127
    JLE 0x0044212f                      ; 00442129
        ;   XREF to: 0044212f (CONDITIONAL_JUMP)  ; LAB_0044212f
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044212b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044212f
        ;   Label: LAB_0044212f
    CMP EAX,dword ptr [ESP + 0x48]      ; 00442133
    JGE 0x00441ebd                      ; 00442137
        ;   XREF to: 00441ebd (CONDITIONAL_JUMP)  ; LAB_00441ebd
    MOV dword ptr [ESP + 0x48],EAX      ; 0044213d
    JMP 0x00441ebd                      ; 00442141
        ;   XREF to: 00441ebd (UNCONDITIONAL_JUMP)  ; LAB_00441ebd
    MOV EAX,dword ptr [ESP + 0x58]      ; 00442146
        ;   Label: LAB_00442146
    FLD float ptr [EAX + 0x4]           ; 0044214a
    FMUL float ptr [EBX + 0x124]        ; 0044214d
    FLD float ptr [EAX]                 ; 00442153
    FMUL float ptr [EBX + 0x118]        ; 00442155
    FADDP                               ; 0044215b
    FLD float ptr [EAX + 0x8]           ; 0044215d
    FMUL float ptr [EBX + 0x130]        ; 00442160
    FADDP                               ; 00442166
    FLDZ                                ; 00442168
    FCOMPP                              ; 0044216a
    FNSTSW AX                           ; 0044216c
    SAHF                                ; 0044216e
    JBE 0x0044208a                      ; 0044216f
        ;   XREF to: 0044208a (CONDITIONAL_JUMP)  ; LAB_0044208a
    MOV EAX,dword ptr [ESP + 0x60]      ; 00442175
    MOV dword ptr [EAX],ECX             ; 00442179
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044217b
    MOV dword ptr [EAX],ECX             ; 0044217f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00442181
    MOV dword ptr [EAX],ECX             ; 00442185
    JMP 0x00441ebd                      ; 00442187
        ;   XREF to: 00441ebd (UNCONDITIONAL_JUMP)  ; LAB_00441ebd
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044218c
        ;   Label: LAB_0044218c
    MOV dword ptr [EAX],0x0             ; 00442190
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00442196
    MOV dword ptr [ESI],0x0             ; 0044219a
    JMP 0x00441eb7                      ; 004421a0
        ;   XREF to: 00441eb7 (UNCONDITIONAL_JUMP)  ; LAB_00441eb7

