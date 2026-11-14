; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_004f6df0(float *v0,float *v1)
;
; Parameters:
; float *          Stack[0x4]:4   v0
; float *          Stack[0x8]:4   v1
; Local Variables:
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
; XREF[2]:
;   engine_mini3d.cpp_fillPolygon_FUN_004f7a50 at 004f7ad0
;   engine_mini3d.cpp_rasterizeTriangle_FUN_004f7280 at 004f7747
;
; Referenced Globals:
;   undefined4 DAT_00618118
;   undefined4 DAT_0061811c
;   undefined4 DAT_00618120
;   undefined4 DAT_00618124
;   undefined4 DAT_00618128
;   undefined4 DAT_01d17ab4
;   undefined4 DAT_01d17ab8
;   undefined4 DAT_01d17ac0
;   undefined4 DAT_01d17ac4
;   undefined4 DAT_01d17ac8
;   undefined4 DAT_01d17ad0
;   undefined4 DAT_01d17ad4
;   undefined4 DAT_01d17ad8
;   undefined4 DAT_01d17adc
;   undefined4 DAT_01d17ae0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6df0
        ;   Label: engine_mini3d.cpp_setupScanEdge_FUN_004f6df0
    PUSH ESI                            ; 004f6df1
    PUSH EDI                            ; 004f6df2
    PUSH EBP                            ; 004f6df3
    SUB ESP,0x50                        ; 004f6df4
    MOV EDI,dword ptr [ESP + 0x64]      ; 004f6df7
    MOV EAX,[0x01d17ab4]                ; 004f6dfb | DAT_01d17ab4
    LEA EBP,[EAX*0x4 + 0x0]             ; 004f6e00
    ADD EBP,EAX                         ; 004f6e07
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6e09
    SHL EBP,0x4                         ; 004f6e0d
    FLD float ptr [EDI + 0x18]          ; 004f6e10
    ADD EBP,0x1d17ab8                   ; 004f6e13
    FCOMP float ptr [EAX + 0x18]        ; 004f6e19
    FNSTSW AX                           ; 004f6e1c
    SAHF                                ; 004f6e1e
    JBE 0x004f6e2b                      ; 004f6e1f
        ;   XREF to: 004f6e2b (CONDITIONAL_JUMP)  ; LAB_004f6e2b
    MOV EAX,EDI                         ; 004f6e21
    MOV EDI,dword ptr [ESP + 0x68]      ; 004f6e23
    MOV dword ptr [ESP + 0x68],EAX      ; 004f6e27
    LEA EBX,[EDI + 0x18]                ; 004f6e2b
        ;   Label: LAB_004f6e2b
    MOV EAX,EBP                         ; 004f6e2e
    FLD float ptr [EBX]                 ; 004f6e30
    FLD float ptr [0x00618118]          ; 004f6e32 | DAT_00618118
    FSUBP                               ; 004f6e38
    FISTP dword ptr [EAX]               ; 004f6e3a | DAT_01d17ab8
    MOV EBX,dword ptr [ESP + 0x68]      ; 004f6e3c
    LEA EAX,[EBP + 0x4]                 ; 004f6e40
    ADD EBX,0x18                        ; 004f6e43
    FLD float ptr [EBX]                 ; 004f6e46
    FLD float ptr [0x00618118]          ; 004f6e48 | DAT_00618118
    FSUBP                               ; 004f6e4e
    FISTP dword ptr [EAX]               ; 004f6e50
    MOV EAX,dword ptr [EBP]             ; 004f6e52 | DAT_01d17ab8
    CMP EAX,dword ptr [EBP + 0x4]       ; 004f6e55
    JZ 0x004f71ff                       ; 004f6e58
        ;   XREF to: 004f71ff (CONDITIONAL_JUMP)  ; LAB_004f71ff
    CMP EAX,dword ptr [0x01d17fb8]      ; 004f6e5e | DAT_01d17fb8
    JGE 0x004f6e6b                      ; 004f6e64
        ;   XREF to: 004f6e6b (CONDITIONAL_JUMP)  ; LAB_004f6e6b
    MOV [0x01d17fb8],EAX                ; 004f6e66 | DAT_01d17fb8
    MOV EBX,dword ptr [0x01d17fbc]      ; 004f6e6b | DAT_01d17fbc
        ;   Label: LAB_004f6e6b
    MOV EAX,dword ptr [EBP + 0x4]       ; 004f6e71
    CMP EAX,EBX                         ; 004f6e74
    JLE 0x004f6e7d                      ; 004f6e76
        ;   XREF to: 004f6e7d (CONDITIONAL_JUMP)  ; LAB_004f6e7d
    MOV [0x01d17fbc],EAX                ; 004f6e78 | DAT_01d17fbc
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6e7d
        ;   Label: LAB_004f6e7d
    FLD float ptr [EAX + 0x18]          ; 004f6e81
    FSUB float ptr [EDI + 0x18]         ; 004f6e84
    FSTP float ptr [ESP + 0x48]         ; 004f6e87
    CMP dword ptr [ESP + 0x48],0x3f800000 ; 004f6e8b
    JGE 0x004f7207                      ; 004f6e93
        ;   XREF to: 004f7207 (CONDITIONAL_JUMP)  ; LAB_004f7207
    XOR EAX,EAX                         ; 004f6e99
    MOV dword ptr [ESP + 0x48],EAX      ; 004f6e9b
    FLD1                                ; 004f6e9f
        ;   Label: LAB_004f6e9f
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6ea1
    FSUB float ptr [EDI + 0x18]         ; 004f6ea5
    FILD dword ptr [EBP]                ; 004f6ea8 | DAT_01d17ab8
    FLD float ptr [EAX + 0x14]          ; 004f6eab
    FSUB float ptr [EDI + 0x14]         ; 004f6eae
    FXCH                                ; 004f6eb1
    FADDP ST2,ST0                       ; 004f6eb3
    FMUL float ptr [ESP + 0x48]         ; 004f6eb5
    FXCH                                ; 004f6eb9
    FMUL float ptr [ESP + 0x48]         ; 004f6ebb
    LEA EBX,[ESP + 0x4]                 ; 004f6ebf
    LEA EAX,[EBP + 0xc]                 ; 004f6ec3
    FXCH                                ; 004f6ec6
    FSTP float ptr [ESP + 0x4]          ; 004f6ec8
    FSTP float ptr [ESP + 0x44]         ; 004f6ecc
    FLD float ptr [EBX]                 ; 004f6ed0
    FLD float ptr [0x00618120]          ; 004f6ed2 | DAT_00618120
    FMULP                               ; 004f6ed8
    FLD float ptr [0x00618118]          ; 004f6eda | DAT_00618118
    FSUBP                               ; 004f6ee0
    FISTP dword ptr [EAX]               ; 004f6ee2 | DAT_01d17ac4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6ee4
    FLD float ptr [EAX + 0x14]          ; 004f6ee8
    FSUB float ptr [EDI + 0x14]         ; 004f6eeb
    FMUL float ptr [ESP + 0x44]         ; 004f6eee
    LEA EBX,[ESP + 0x24]                ; 004f6ef2
    FADD float ptr [EDI + 0x14]         ; 004f6ef6
    LEA EAX,[EBP + 0x8]                 ; 004f6ef9
    FSTP float ptr [ESP + 0x24]         ; 004f6efc
    FLD float ptr [EBX]                 ; 004f6f00
    FLD float ptr [0x00618120]          ; 004f6f02 | DAT_00618120
    FMULP                               ; 004f6f08
    FLD float ptr [0x00618118]          ; 004f6f0a | DAT_00618118
    FSUBP                               ; 004f6f10
    FISTP dword ptr [EAX]               ; 004f6f12 | DAT_01d17ac0
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6f14
    FLD float ptr [EAX + 0x1c]          ; 004f6f18
    FSUB float ptr [EDI + 0x1c]         ; 004f6f1b
    FMUL float ptr [ESP + 0x48]         ; 004f6f1e
    LEA EBX,[ESP + 0x8]                 ; 004f6f22
    LEA EAX,[EBP + 0x1c]                ; 004f6f26
    FSTP float ptr [ESP + 0x8]          ; 004f6f29
    FLD float ptr [EBX]                 ; 004f6f2d
    FLD float ptr [0x00618124]          ; 004f6f2f | DAT_00618124
    FMULP                               ; 004f6f35
    FLD float ptr [0x00618118]          ; 004f6f37 | DAT_00618118
    FSUBP                               ; 004f6f3d
    FISTP dword ptr [EAX]               ; 004f6f3f | DAT_01d17ad4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6f41
    FLD float ptr [EAX + 0x1c]          ; 004f6f45
    FSUB float ptr [EDI + 0x1c]         ; 004f6f48
    FMUL float ptr [ESP + 0x44]         ; 004f6f4b
    LEA EBX,[ESP + 0x28]                ; 004f6f4f
    FADD float ptr [EDI + 0x1c]         ; 004f6f53
    LEA EAX,[EBP + 0x18]                ; 004f6f56
    FSTP float ptr [ESP + 0x28]         ; 004f6f59
    FLD float ptr [EBX]                 ; 004f6f5d
    FLD float ptr [0x00618124]          ; 004f6f5f | DAT_00618124
    FMULP                               ; 004f6f65
    FLD float ptr [0x00618118]          ; 004f6f67 | DAT_00618118
    FSUBP                               ; 004f6f6d
    FISTP dword ptr [EAX]               ; 004f6f6f | DAT_01d17ad0
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6f71
    FLD float ptr [EAX + 0x20]          ; 004f6f75
    FSUB float ptr [EDI + 0x20]         ; 004f6f78
    FMUL float ptr [ESP + 0x48]         ; 004f6f7b
    LEA EBX,[ESP + 0xc]                 ; 004f6f7f
    LEA EAX,[EBP + 0x24]                ; 004f6f83
    FSTP float ptr [ESP + 0xc]          ; 004f6f86
    FLD float ptr [EBX]                 ; 004f6f8a
    FLD float ptr [0x00618124]          ; 004f6f8c | DAT_00618124
    FMULP                               ; 004f6f92
    FLD float ptr [0x00618118]          ; 004f6f94 | DAT_00618118
    FSUBP                               ; 004f6f9a
    FISTP dword ptr [EAX]               ; 004f6f9c | DAT_01d17adc
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6f9e
    FLD float ptr [EAX + 0x20]          ; 004f6fa2
    FSUB float ptr [EDI + 0x20]         ; 004f6fa5
    FMUL float ptr [ESP + 0x44]         ; 004f6fa8
    LEA EBX,[ESP + 0x2c]                ; 004f6fac
    FADD float ptr [EDI + 0x20]         ; 004f6fb0
    LEA EAX,[EBP + 0x20]                ; 004f6fb3
    FSTP float ptr [ESP + 0x2c]         ; 004f6fb6
    FLD float ptr [EBX]                 ; 004f6fba
    FLD float ptr [0x00618124]          ; 004f6fbc | DAT_00618124
    FMULP                               ; 004f6fc2
    FLD float ptr [0x00618118]          ; 004f6fc4 | DAT_00618118
    FSUBP                               ; 004f6fca
    FISTP dword ptr [EAX]               ; 004f6fcc | DAT_01d17ad8
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6fce
    FLD float ptr [EAX + 0x2c]          ; 004f6fd2
    FSUB float ptr [EDI + 0x2c]         ; 004f6fd5
    FMUL float ptr [ESP + 0x48]         ; 004f6fd8
    LEA EBX,[ESP + 0x10]                ; 004f6fdc
    LEA EAX,[EBP + 0x14]                ; 004f6fe0
    FSTP float ptr [ESP + 0x10]         ; 004f6fe3
    FLD float ptr [EBX]                 ; 004f6fe7
    FLD float ptr [0x0061811c]          ; 004f6fe9 | DAT_0061811c
    FMULP                               ; 004f6fef
    FLD float ptr [0x00618118]          ; 004f6ff1 | DAT_00618118
    FSUBP                               ; 004f6ff7
    FISTP dword ptr [EAX]               ; 004f6ff9
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f6ffb
    FLD float ptr [EAX + 0x2c]          ; 004f6fff
    FSUB float ptr [EDI + 0x2c]         ; 004f7002
    FMUL float ptr [ESP + 0x44]         ; 004f7005
    LEA EBX,[ESP + 0x30]                ; 004f7009
    FADD float ptr [EDI + 0x2c]         ; 004f700d
    LEA EAX,[EBP + 0x10]                ; 004f7010
    FSTP float ptr [ESP + 0x30]         ; 004f7013
    FLD float ptr [EBX]                 ; 004f7017
    FLD float ptr [0x0061811c]          ; 004f7019 | DAT_0061811c
    FMULP                               ; 004f701f
    FLD float ptr [0x00618118]          ; 004f7021 | DAT_00618118
    FSUBP                               ; 004f7027
    FISTP dword ptr [EAX]               ; 004f7029 | DAT_01d17ac8
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f702b
    FLD float ptr [EAX + 0x34]          ; 004f702f
    FSUB float ptr [EDI + 0x34]         ; 004f7032
    FMUL float ptr [ESP + 0x48]         ; 004f7035
    LEA EBX,[ESP + 0x14]                ; 004f7039
    LEA EAX,[EBP + 0x34]                ; 004f703d
    FSTP float ptr [ESP + 0x14]         ; 004f7040
    FLD float ptr [EBX]                 ; 004f7044
    FLD float ptr [0x0061811c]          ; 004f7046 | DAT_0061811c
    FMULP                               ; 004f704c
    FLD float ptr [0x00618118]          ; 004f704e | DAT_00618118
    FSUBP                               ; 004f7054
    FISTP dword ptr [EAX]               ; 004f7056
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f7058
    FLD float ptr [EAX + 0x34]          ; 004f705c
    FSUB float ptr [EDI + 0x34]         ; 004f705f
    FMUL float ptr [ESP + 0x44]         ; 004f7062
    LEA EBX,[ESP + 0x34]                ; 004f7066
    FADD float ptr [EDI + 0x34]         ; 004f706a
    LEA EAX,[EBP + 0x30]                ; 004f706d
    FSTP float ptr [ESP + 0x34]         ; 004f7070
    FLD float ptr [EBX]                 ; 004f7074
    FLD float ptr [0x0061811c]          ; 004f7076 | DAT_0061811c
    FMULP                               ; 004f707c
    FLD float ptr [0x00618118]          ; 004f707e | DAT_00618118
    FSUBP                               ; 004f7084
    FISTP dword ptr [EAX]               ; 004f7086
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f7088
    FLD float ptr [EAX + 0x30]          ; 004f708c
    FSUB float ptr [EDI + 0x30]         ; 004f708f
    FMUL float ptr [ESP + 0x48]         ; 004f7092
    LEA EBX,[ESP + 0x18]                ; 004f7096
    LEA EAX,[EBP + 0x4c]                ; 004f709a
    FSTP float ptr [ESP + 0x18]         ; 004f709d
    FLD float ptr [EBX]                 ; 004f70a1
    FLD float ptr [0x0061811c]          ; 004f70a3 | DAT_0061811c
    FMULP                               ; 004f70a9
    FLD float ptr [0x00618118]          ; 004f70ab | DAT_00618118
    FSUBP                               ; 004f70b1
    FISTP dword ptr [EAX]               ; 004f70b3
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f70b5
    FLD float ptr [EAX + 0x30]          ; 004f70b9
    FSUB float ptr [EDI + 0x30]         ; 004f70bc
    FMUL float ptr [ESP + 0x44]         ; 004f70bf
    LEA EBX,[ESP + 0x38]                ; 004f70c3
    FADD float ptr [EDI + 0x30]         ; 004f70c7
    LEA EAX,[EBP + 0x48]                ; 004f70ca
    FSTP float ptr [ESP + 0x38]         ; 004f70cd
    FLD float ptr [EBX]                 ; 004f70d1
    FLD float ptr [0x0061811c]          ; 004f70d3 | DAT_0061811c
    FMULP                               ; 004f70d9
    FLD float ptr [0x00618118]          ; 004f70db | DAT_00618118
    FSUBP                               ; 004f70e1
    FISTP dword ptr [EAX]               ; 004f70e3
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f70e5
    FLD float ptr [EAX + 0xc]           ; 004f70e9
    FSUB float ptr [EDI + 0xc]          ; 004f70ec
    FMUL float ptr [ESP + 0x48]         ; 004f70ef
    LEA EBX,[ESP + 0x1c]                ; 004f70f3
    LEA EAX,[EBP + 0x2c]                ; 004f70f7
    FSTP float ptr [ESP + 0x1c]         ; 004f70fa
    FLD float ptr [EBX]                 ; 004f70fe
    FLD float ptr [0x00618128]          ; 004f7100 | DAT_00618128
    FMULP                               ; 004f7106
    FLD float ptr [0x00618118]          ; 004f7108 | DAT_00618118
    FSUBP                               ; 004f710e
    FISTP dword ptr [EAX]               ; 004f7110 | DAT_01d17ae4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f7112
    FLD float ptr [EAX + 0xc]           ; 004f7116
    FSUB float ptr [EDI + 0xc]          ; 004f7119
    FMUL float ptr [ESP + 0x44]         ; 004f711c
    LEA EBX,[ESP + 0x3c]                ; 004f7120
    FADD float ptr [EDI + 0xc]          ; 004f7124
    LEA EAX,[EBP + 0x28]                ; 004f7127
    FSTP float ptr [ESP + 0x3c]         ; 004f712a
    FLD float ptr [EBX]                 ; 004f712e
    FLD float ptr [0x00618128]          ; 004f7130 | DAT_00618128
    FMULP                               ; 004f7136
    FLD float ptr [0x00618118]          ; 004f7138 | DAT_00618118
    FSUBP                               ; 004f713e
    FISTP dword ptr [EAX]               ; 004f7140 | DAT_01d17ae0
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f7142
    FLD float ptr [EAX + 0x28]          ; 004f7146
    FSUB float ptr [EDI + 0x28]         ; 004f7149
    FMUL float ptr [ESP + 0x48]         ; 004f714c
    LEA EBX,[ESP + 0x4c]                ; 004f7150
    LEA EAX,[EBP + 0x3c]                ; 004f7154
    FSTP float ptr [ESP + 0x4c]         ; 004f7157
    FLD float ptr [EBX]                 ; 004f715b
    FLD float ptr [0x0061811c]          ; 004f715d | DAT_0061811c
    FMULP                               ; 004f7163
    FLD float ptr [0x00618118]          ; 004f7165 | DAT_00618118
    FSUBP                               ; 004f716b
    FISTP dword ptr [EAX]               ; 004f716d
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f716f
    FLD float ptr [EAX + 0x28]          ; 004f7173
    FSUB float ptr [EDI + 0x28]         ; 004f7176
    FMUL float ptr [ESP + 0x44]         ; 004f7179
    LEA EBX,[ESP + 0x40]                ; 004f717d
    FADD float ptr [EDI + 0x28]         ; 004f7181
    LEA EAX,[EBP + 0x38]                ; 004f7184
    FSTP float ptr [ESP + 0x40]         ; 004f7187
    FLD float ptr [EBX]                 ; 004f718b
    FLD float ptr [0x0061811c]          ; 004f718d | DAT_0061811c
    FMULP                               ; 004f7193
    FLD float ptr [0x00618118]          ; 004f7195 | DAT_00618118
    FSUBP                               ; 004f719b
    FISTP dword ptr [EAX]               ; 004f719d
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f719f
    FLD float ptr [EAX + 0x24]          ; 004f71a3
    FSUB float ptr [EDI + 0x24]         ; 004f71a6
    FMUL float ptr [ESP + 0x48]         ; 004f71a9
    LEA EBX,[ESP + 0x20]                ; 004f71ad
    LEA EAX,[EBP + 0x44]                ; 004f71b1
    FSTP float ptr [ESP + 0x20]         ; 004f71b4
    FLD float ptr [EBX]                 ; 004f71b8
    FLD float ptr [0x0061811c]          ; 004f71ba | DAT_0061811c
    FMULP                               ; 004f71c0
    FLD float ptr [0x00618118]          ; 004f71c2 | DAT_00618118
    FSUBP                               ; 004f71c8
    FISTP dword ptr [EAX]               ; 004f71ca
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f71cc
    FLD float ptr [EAX + 0x24]          ; 004f71d0
    FSUB float ptr [EDI + 0x24]         ; 004f71d3
    FMUL float ptr [ESP + 0x44]         ; 004f71d6
    MOV EBX,ESP                         ; 004f71da
    FADD float ptr [EDI + 0x24]         ; 004f71dc
    LEA EAX,[EBP + 0x40]                ; 004f71df
    FSTP float ptr [ESP]                ; 004f71e2
    FLD float ptr [EBX]                 ; 004f71e5
    FLD float ptr [0x0061811c]          ; 004f71e7 | DAT_0061811c
    FMULP                               ; 004f71ed
    FLD float ptr [0x00618118]          ; 004f71ef | DAT_00618118
    FSUBP                               ; 004f71f5
    FISTP dword ptr [EAX]               ; 004f71f7
    INC dword ptr [0x01d17ab4]          ; 004f71f9 | DAT_01d17ab4
    ADD ESP,0x50                        ; 004f71ff
        ;   Label: LAB_004f71ff
    POP EBP                             ; 004f7202
    POP EDI                             ; 004f7203
    POP ESI                             ; 004f7204
    POP EBX                             ; 004f7205
    RET                                 ; 004f7206
    FLD1                                ; 004f7207
        ;   Label: LAB_004f7207
    FDIV float ptr [ESP + 0x48]         ; 004f7209
    FSTP float ptr [ESP + 0x48]         ; 004f720d
    JMP 0x004f6e9f                      ; 004f7211
        ;   XREF to: 004f6e9f (UNCONDITIONAL_JUMP)  ; LAB_004f6e9f

