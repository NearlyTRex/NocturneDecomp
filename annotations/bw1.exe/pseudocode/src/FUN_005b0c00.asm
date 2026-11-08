; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b0c00(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005b11c0 at 005b12b4
;
; Referenced Globals:
;   undefined4 DAT_00607fb0
;   undefined4 DAT_00607fdc
;   undefined4 DAT_00607fe0
;   undefined4 DAT_00612560
;   undefined4 DAT_0062609c
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00482e30
;   FUN_00483dd0
;   FUN_00484f00
;   FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0c00
        ;   Label: FUN_005b0c00
    PUSH ESI                            ; 005b0c01
    PUSH EDI                            ; 005b0c02
    PUSH EBP                            ; 005b0c03
    SUB ESP,0x134                       ; 005b0c04
    MOV EBP,dword ptr [ESP + 0x14c]     ; 005b0c0a
    FLD float ptr [EBP]                 ; 005b0c11
    FLD float ptr [EBP + 0x4]           ; 005b0c14
    LEA EDI,[ESP + 0x10c]               ; 005b0c17
    MOV EAX,[0x00607fdc]                ; 005b0c1e | DAT_00607fdc
    LEA ESI,[ESP + 0xf4]                ; 005b0c23
    MOV dword ptr [ESP + 0x130],EAX     ; 005b0c2a
    MOV EAX,[0x00607fe0]                ; 005b0c31 | DAT_00607fe0
    FXCH                                ; 005b0c36
    FADD float ptr [ESP + 0x130]        ; 005b0c38
    MOV dword ptr [ESP + 0x128],EAX     ; 005b0c3f
    FSTP float ptr [ESP + 0xf4]         ; 005b0c46
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b0c4d
    FADD float ptr [ESP + 0x128]        ; 005b0c50
    MOV dword ptr [ESP + 0xfc],EAX      ; 005b0c57
    FSTP float ptr [ESP + 0xf8]         ; 005b0c5e
    MOVSD ES:EDI,ESI                    ; 005b0c65
    MOVSD ES:EDI,ESI                    ; 005b0c66
    MOVSD ES:EDI,ESI                    ; 005b0c67
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b0c68
    FLD float ptr [ESP + 0x10c]         ; 005b0c6f
    FMUL float ptr [EAX + 0x27b8]       ; 005b0c76
    FLD float ptr [ESP + 0x110]         ; 005b0c7c
    FMUL float ptr [EAX + 0x27b8]       ; 005b0c83
    FLD float ptr [ESP + 0x114]         ; 005b0c89
    FMUL float ptr [EAX + 0x27b8]       ; 005b0c90
    LEA EDX,[ESP + 0x4c]                ; 005b0c96
    LEA EDI,[ESP + 0x7c]                ; 005b0c9a
    LEA ESI,[ESP + 0x70]                ; 005b0c9e
    FXCH ST2                            ; 005b0ca2
    FSTP float ptr [ESP + 0x70]         ; 005b0ca4
    FSTP float ptr [ESP + 0x74]         ; 005b0ca8
    FSTP float ptr [ESP + 0x78]         ; 005b0cac
    LEA EAX,[ESP + 0x7c]                ; 005b0cb0
    MOVSD ES:EDI,ESI                    ; 005b0cb4
    MOVSD ES:EDI,ESI                    ; 005b0cb5
    MOVSD ES:EDI,ESI                    ; 005b0cb6
    CMP EDX,EAX                         ; 005b0cb7
    JZ 0x005b0cd9                       ; 005b0cb9
        ;   XREF to: 005b0cd9 (CONDITIONAL_JUMP)  ; LAB_005b0cd9
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005b0cbb
    MOV dword ptr [ESP + 0x4c],EAX      ; 005b0cbf
    MOV EAX,dword ptr [ESP + 0x80]      ; 005b0cc3
    MOV dword ptr [ESP + 0x50],EAX      ; 005b0cca
    MOV EAX,dword ptr [ESP + 0x84]      ; 005b0cce
    MOV dword ptr [ESP + 0x54],EAX      ; 005b0cd5
    LEA EBX,[ESP + 0x34]                ; 005b0cd9
        ;   Label: LAB_005b0cd9
    LEA EAX,[ESP + 0x4c]                ; 005b0cdd
    MOV EDX,dword ptr [0x00612560]      ; 005b0ce1 | DAT_00612560
    FLD float ptr [EAX]                 ; 005b0ce7
    FMUL float ptr [0x00607fb0]         ; 005b0ce9 | DAT_00607fb0
    FISTP dword ptr [EBX]               ; 005b0cef
    FLD float ptr [EAX + 0x4]           ; 005b0cf1
    FMUL float ptr [0x00607fb0]         ; 005b0cf4 | DAT_00607fb0
    FISTP dword ptr [EBX + 0x4]         ; 005b0cfa
    FLD float ptr [EAX + 0x8]           ; 005b0cfd
    FMUL float ptr [0x00607fb0]         ; 005b0d00 | DAT_00607fb0
    FISTP dword ptr [EBX + 0x8]         ; 005b0d06
    LEA EAX,[ESP + 0x34]                ; 005b0d09
    PUSH EAX                            ; 005b0d0d
    MOV EAX,dword ptr [EDX]             ; 005b0d0e | DAT_01bc120c
    PUSH EAX                            ; 005b0d10
    LEA EDI,[ESP + 0x48]                ; 005b0d11
    LEA ESI,[ESP + 0x30]                ; 005b0d15
    CALL FUN_00580173                   ; 005b0d19
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    FLD float ptr [0x00607fdc]          ; 005b0d1e | DAT_00607fdc
    FLD float ptr [EBP]                 ; 005b0d24
    FLD float ptr [EBP + 0x4]           ; 005b0d27
    MOV EAX,[0x00607fe0]                ; 005b0d2a | DAT_00607fe0
    ADD ESP,0x8                         ; 005b0d2f
    FXCH ST2                            ; 005b0d32
    FCHS                                ; 005b0d34
    MOV dword ptr [ESP + 0x12c],EAX     ; 005b0d36
    FADDP                               ; 005b0d3d
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b0d3f
    FSTP float ptr [ESP + 0x28]         ; 005b0d42
    FADD float ptr [ESP + 0x12c]        ; 005b0d46
    MOV dword ptr [ESP + 0x30],EAX      ; 005b0d4d
    FSTP float ptr [ESP + 0x2c]         ; 005b0d51
    MOVSD ES:EDI,ESI                    ; 005b0d55
    MOVSD ES:EDI,ESI                    ; 005b0d56
    MOVSD ES:EDI,ESI                    ; 005b0d57
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b0d58
    FLD float ptr [ESP + 0x40]          ; 005b0d5f
    FMUL float ptr [EAX + 0x27b8]       ; 005b0d63
    FLD float ptr [ESP + 0x44]          ; 005b0d69
    FMUL float ptr [EAX + 0x27b8]       ; 005b0d6d
    FLD float ptr [ESP + 0x48]          ; 005b0d73
    FMUL float ptr [EAX + 0x27b8]       ; 005b0d77
    LEA EDX,[ESP + 0x4c]                ; 005b0d7d
    LEA EDI,[ESP + 0xa0]                ; 005b0d81
    LEA ESI,[ESP + 0xb8]                ; 005b0d88
    FXCH ST2                            ; 005b0d8f
    FSTP float ptr [ESP + 0xb8]         ; 005b0d91
    FSTP float ptr [ESP + 0xbc]         ; 005b0d98
    FSTP float ptr [ESP + 0xc0]         ; 005b0d9f
    LEA EAX,[ESP + 0xa0]                ; 005b0da6
    MOVSD ES:EDI,ESI                    ; 005b0dad
    MOVSD ES:EDI,ESI                    ; 005b0dae
    MOVSD ES:EDI,ESI                    ; 005b0daf
    CMP EDX,EAX                         ; 005b0db0
    JZ 0x005b0dd5                       ; 005b0db2
        ;   XREF to: 005b0dd5 (CONDITIONAL_JUMP)  ; LAB_005b0dd5
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005b0db4
    MOV dword ptr [ESP + 0x4c],EAX      ; 005b0dbb
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005b0dbf
    MOV dword ptr [ESP + 0x50],EAX      ; 005b0dc6
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005b0dca
    MOV dword ptr [ESP + 0x54],EAX      ; 005b0dd1
    LEA EBX,[ESP + 0x118]               ; 005b0dd5
        ;   Label: LAB_005b0dd5
    LEA EAX,[ESP + 0x4c]                ; 005b0ddc
    MOV EDX,dword ptr [0x00612560]      ; 005b0de0 | DAT_00612560
    FLD float ptr [EAX]                 ; 005b0de6
    FMUL float ptr [0x00607fb0]         ; 005b0de8 | DAT_00607fb0
    FISTP dword ptr [EBX]               ; 005b0dee
    FLD float ptr [EAX + 0x4]           ; 005b0df0
    FMUL float ptr [0x00607fb0]         ; 005b0df3 | DAT_00607fb0
    FISTP dword ptr [EBX + 0x4]         ; 005b0df9
    FLD float ptr [EAX + 0x8]           ; 005b0dfc
    FMUL float ptr [0x00607fb0]         ; 005b0dff | DAT_00607fb0
    FISTP dword ptr [EBX + 0x8]         ; 005b0e05
    LEA EAX,[ESP + 0x118]               ; 005b0e08
    PUSH EAX                            ; 005b0e0f
    MOV EAX,dword ptr [EDX]             ; 005b0e10 | DAT_01bc120c
    ADD EAX,0x30                        ; 005b0e12
    PUSH EAX                            ; 005b0e15
    LEA EDI,[ESP + 0xcc]                ; 005b0e16
    LEA ESI,[ESP + 0x9c]                ; 005b0e1d
    CALL FUN_00580173                   ; 005b0e24
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    FLD float ptr [0x00607fe0]          ; 005b0e29 | DAT_00607fe0
    FLD float ptr [0x00607fdc]          ; 005b0e2f | DAT_00607fdc
    FLD float ptr [EBP + 0x4]           ; 005b0e35
    ADD ESP,0x8                         ; 005b0e38
    FXCH ST2                            ; 005b0e3b
    FCHS                                ; 005b0e3d
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b0e3f
    FXCH                                ; 005b0e42
    FCHS                                ; 005b0e44
    MOV dword ptr [ESP + 0x9c],EAX      ; 005b0e46
    FADD float ptr [EBP]                ; 005b0e4d
    FXCH ST2                            ; 005b0e50
    FADDP                               ; 005b0e52
    FXCH                                ; 005b0e54
    FSTP float ptr [ESP + 0x94]         ; 005b0e56
    FSTP float ptr [ESP + 0x98]         ; 005b0e5d
    MOVSD ES:EDI,ESI                    ; 005b0e64
    MOVSD ES:EDI,ESI                    ; 005b0e65
    MOVSD ES:EDI,ESI                    ; 005b0e66
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b0e67
    FLD float ptr [ESP + 0xc4]          ; 005b0e6e
    FMUL float ptr [EAX + 0x27b8]       ; 005b0e75
    FLD float ptr [ESP + 0xc8]          ; 005b0e7b
    FMUL float ptr [EAX + 0x27b8]       ; 005b0e82
    FLD float ptr [ESP + 0xcc]          ; 005b0e88
    FMUL float ptr [EAX + 0x27b8]       ; 005b0e8f
    LEA EDX,[ESP + 0x4c]                ; 005b0e95
    LEA EDI,[ESP + 0xe8]                ; 005b0e99
    LEA ESI,[ESP + 0xdc]                ; 005b0ea0
    FXCH ST2                            ; 005b0ea7
    FSTP float ptr [ESP + 0xdc]         ; 005b0ea9
    FSTP float ptr [ESP + 0xe0]         ; 005b0eb0
    FSTP float ptr [ESP + 0xe4]         ; 005b0eb7
    LEA EAX,[ESP + 0xe8]                ; 005b0ebe
    MOVSD ES:EDI,ESI                    ; 005b0ec5
    MOVSD ES:EDI,ESI                    ; 005b0ec6
    MOVSD ES:EDI,ESI                    ; 005b0ec7
    CMP EDX,EAX                         ; 005b0ec8
    JZ 0x005b0eed                       ; 005b0eca
        ;   XREF to: 005b0eed (CONDITIONAL_JUMP)  ; LAB_005b0eed
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005b0ecc
    MOV dword ptr [ESP + 0x4c],EAX      ; 005b0ed3
    MOV EAX,dword ptr [ESP + 0xec]      ; 005b0ed7
    MOV dword ptr [ESP + 0x50],EAX      ; 005b0ede
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005b0ee2
    MOV dword ptr [ESP + 0x54],EAX      ; 005b0ee9
    LEA EBX,[ESP + 0x58]                ; 005b0eed
        ;   Label: LAB_005b0eed
    LEA EAX,[ESP + 0x4c]                ; 005b0ef1
    MOV EDX,dword ptr [0x00612560]      ; 005b0ef5 | DAT_00612560
    FLD float ptr [EAX]                 ; 005b0efb
    FMUL float ptr [0x00607fb0]         ; 005b0efd | DAT_00607fb0
    FISTP dword ptr [EBX]               ; 005b0f03
    FLD float ptr [EAX + 0x4]           ; 005b0f05
    FMUL float ptr [0x00607fb0]         ; 005b0f08 | DAT_00607fb0
    FISTP dword ptr [EBX + 0x4]         ; 005b0f0e
    FLD float ptr [EAX + 0x8]           ; 005b0f11
    FMUL float ptr [0x00607fb0]         ; 005b0f14 | DAT_00607fb0
    FISTP dword ptr [EBX + 0x8]         ; 005b0f1a
    LEA EAX,[ESP + 0x58]                ; 005b0f1d
    PUSH EAX                            ; 005b0f21
    MOV EAX,dword ptr [EDX]             ; 005b0f22 | DAT_01bc120c
    ADD EAX,0x60                        ; 005b0f24
    PUSH EAX                            ; 005b0f27
    LEA EDI,[ESP + 0x90]                ; 005b0f28
    LEA ESI,[ESP + 0x6c]                ; 005b0f2f
    CALL FUN_00580173                   ; 005b0f33
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    FLD float ptr [0x00607fe0]          ; 005b0f38 | DAT_00607fe0
    FLD float ptr [0x00607fdc]          ; 005b0f3e | DAT_00607fdc
    FLD float ptr [EBP + 0x4]           ; 005b0f44
    ADD ESP,0x8                         ; 005b0f47
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b0f4a
    FXCH ST2                            ; 005b0f4d
    FCHS                                ; 005b0f4f
    MOV dword ptr [ESP + 0x6c],EAX      ; 005b0f51
    FXCH                                ; 005b0f55
    FADD float ptr [EBP]                ; 005b0f57
    FXCH ST2                            ; 005b0f5a
    FADDP                               ; 005b0f5c
    FXCH                                ; 005b0f5e
    FSTP float ptr [ESP + 0x64]         ; 005b0f60
    FSTP float ptr [ESP + 0x68]         ; 005b0f64
    MOVSD ES:EDI,ESI                    ; 005b0f68
    MOVSD ES:EDI,ESI                    ; 005b0f69
    MOVSD ES:EDI,ESI                    ; 005b0f6a
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b0f6b
    FLD float ptr [ESP + 0x88]          ; 005b0f72
    FMUL float ptr [EAX + 0x27b8]       ; 005b0f79
    FLD float ptr [ESP + 0x8c]          ; 005b0f7f
    FMUL float ptr [EAX + 0x27b8]       ; 005b0f86
    FLD float ptr [ESP + 0x90]          ; 005b0f8c
    FMUL float ptr [EAX + 0x27b8]       ; 005b0f93
    LEA EBX,[ESP + 0x4c]                ; 005b0f99
    LEA EDI,[ESP + 0x100]               ; 005b0f9d
    LEA ESI,[ESP + 0xd0]                ; 005b0fa4
    FXCH ST2                            ; 005b0fab
    FSTP float ptr [ESP + 0xd0]         ; 005b0fad
    FSTP float ptr [ESP + 0xd4]         ; 005b0fb4
    FSTP float ptr [ESP + 0xd8]         ; 005b0fbb
    LEA EAX,[ESP + 0x100]               ; 005b0fc2
    MOVSD ES:EDI,ESI                    ; 005b0fc9
    MOVSD ES:EDI,ESI                    ; 005b0fca
    MOVSD ES:EDI,ESI                    ; 005b0fcb
    CMP EBX,EAX                         ; 005b0fcc
    JZ 0x005b0ff1                       ; 005b0fce
        ;   XREF to: 005b0ff1 (CONDITIONAL_JUMP)  ; LAB_005b0ff1
    MOV EAX,dword ptr [ESP + 0x100]     ; 005b0fd0
    MOV dword ptr [ESP + 0x4c],EAX      ; 005b0fd7
    MOV EAX,dword ptr [ESP + 0x104]     ; 005b0fdb
    MOV dword ptr [ESP + 0x50],EAX      ; 005b0fe2
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b0fe6
    MOV dword ptr [ESP + 0x54],EAX      ; 005b0fed
    LEA EBX,[ESP + 0xac]                ; 005b0ff1
        ;   Label: LAB_005b0ff1
    LEA EAX,[ESP + 0x4c]                ; 005b0ff8
    MOV EBP,dword ptr [0x00612560]      ; 005b0ffc | DAT_00612560
    FLD float ptr [EAX]                 ; 005b1002
    FMUL float ptr [0x00607fb0]         ; 005b1004 | DAT_00607fb0
    FISTP dword ptr [EBX]               ; 005b100a
    FLD float ptr [EAX + 0x4]           ; 005b100c
    FMUL float ptr [0x00607fb0]         ; 005b100f | DAT_00607fb0
    FISTP dword ptr [EBX + 0x4]         ; 005b1015
    FLD float ptr [EAX + 0x8]           ; 005b1018
    FMUL float ptr [0x00607fb0]         ; 005b101b | DAT_00607fb0
    FISTP dword ptr [EBX + 0x8]         ; 005b1021
    LEA EAX,[ESP + 0xac]                ; 005b1024
    PUSH EAX                            ; 005b102b
    MOV EAX,dword ptr [EBP]             ; 005b102c | DAT_01bc120c
    ADD EAX,0x90                        ; 005b102f
    PUSH EAX                            ; 005b1034
    CALL FUN_00580173                   ; 005b1035
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EAX,[0x00612560]                ; 005b103a | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 005b103f | DAT_01bc120c
    MOV dword ptr [EDX + 0x20],0xffff   ; 005b1041
    MOV EBX,dword ptr [EAX]             ; 005b1048 | DAT_01bc120c
    MOV dword ptr [EBX + 0x24],0x0      ; 005b104a
    MOV EBX,dword ptr [EAX]             ; 005b1051 | DAT_01bc120c
    MOV dword ptr [EBX + 0x28],0x0      ; 005b1053
    MOV EDX,dword ptr [EAX]             ; 005b105a | DAT_01bc120c
    MOV dword ptr [EDX + 0x50],0xffff   ; 005b105c
    MOV EDX,dword ptr [EAX]             ; 005b1063 | DAT_01bc120c
    MOV dword ptr [EDX + 0x54],0x0      ; 005b1065
    MOV EBX,dword ptr [EAX]             ; 005b106c | DAT_01bc120c
    MOV dword ptr [EBX + 0x58],0x0      ; 005b106e
    MOV EBX,dword ptr [EAX]             ; 005b1075 | DAT_01bc120c
    MOV dword ptr [EBX + 0x80],0xffff   ; 005b1077
    MOV EBX,dword ptr [EAX]             ; 005b1081 | DAT_01bc120c
    MOV dword ptr [EBX + 0x84],0x0      ; 005b1083
    MOV EBX,dword ptr [EAX]             ; 005b108d | DAT_01bc120c
    MOV dword ptr [EBX + 0x88],0x0      ; 005b108f
    MOV EBX,dword ptr [EAX]             ; 005b1099 | DAT_01bc120c
    MOV dword ptr [EBX + 0xb0],0xffff   ; 005b109b
    MOV EDX,dword ptr [EAX]             ; 005b10a5 | DAT_01bc120c
    MOV dword ptr [EDX + 0xb4],0x0      ; 005b10a7
    MOV EBX,dword ptr [EAX]             ; 005b10b1 | DAT_01bc120c
    MOV dword ptr [EBX + 0xb8],0x0      ; 005b10b3
    MOV EBX,dword ptr [EAX]             ; 005b10bd | DAT_01bc120c
    MOV dword ptr [EBX + 0x2c],0x4000   ; 005b10bf
    MOV EBX,dword ptr [EAX]             ; 005b10c6 | DAT_01bc120c
    MOV dword ptr [EBX + 0x5c],0x4000   ; 005b10c8
    MOV EBX,dword ptr [EAX]             ; 005b10cf | DAT_01bc120c
    MOV dword ptr [EBX + 0x8c],0x4000   ; 005b10d1
    MOV EDX,dword ptr [EAX]             ; 005b10db | DAT_01bc120c
    MOV dword ptr [EDX + 0xbc],0x4000   ; 005b10dd
    MOV EBX,dword ptr [EAX]             ; 005b10e7 | DAT_01bc120c
    MOV dword ptr [EBX + 0x18],0x80000  ; 005b10e9
    MOV EDX,dword ptr [EAX]             ; 005b10f0 | DAT_01bc120c
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 005b10f2
    MOV EBX,dword ptr [EAX]             ; 005b10f9 | DAT_01bc120c
    ADD ESP,0x8                         ; 005b10fb
    MOV dword ptr [EBX + 0x48],0xf80000 ; 005b10fe
    MOV EBX,dword ptr [EAX]             ; 005b1105 | DAT_01bc120c
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 005b1107
    MOV EBX,dword ptr [EAX]             ; 005b110e | DAT_01bc120c
    MOV dword ptr [EBX + 0x78],0xf80000 ; 005b1110
    MOV EBX,dword ptr [EAX]             ; 005b1117 | DAT_01bc120c
    MOV dword ptr [EBX + 0x7c],0x80000  ; 005b1119
    MOV EBX,dword ptr [EAX]             ; 005b1120 | DAT_01bc120c
    MOV EDX,0x4                         ; 005b1122
    MOV dword ptr [EBX + 0xa8],0x80000  ; 005b1127
    PUSH 0x62609c                       ; 005b1131 | DAT_0062609c
    MOV EBX,dword ptr [EAX]             ; 005b1136 | DAT_01bc120c
    XOR ECX,ECX                         ; 005b1138
    PUSH EAX                            ; 005b113a | DAT_01bc120c
    MOV dword ptr [EBX + 0xac],0x80000  ; 005b113b
    MOV EBX,0x3                         ; 005b1145
    MOV dword ptr [ESP + 0xc],EDX       ; 005b114a
    MOV dword ptr [ESP + 0x1c],ECX      ; 005b114e
    MOV dword ptr [ESP + 0x18],ECX      ; 005b1152
    MOV dword ptr [ESP + 0x14],ECX      ; 005b1156
    MOV dword ptr [ESP + 0x10],ECX      ; 005b115a
    MOV dword ptr [ESP + 0x20],ECX      ; 005b115e
    MOV EDX,0x1                         ; 005b1162
    MOV ECX,0x2                         ; 005b1167
    MOV dword ptr [ESP + 0x2c],EBX      ; 005b116c
    MOV dword ptr [ESP + 0x24],EDX      ; 005b1170
    MOV dword ptr [ESP + 0x28],ECX      ; 005b1174
    CALL FUN_00484f00                   ; 005b1178
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 005b117d
    PUSH 0x1                            ; 005b1180
    MOV ESI,dword ptr [0x00612560]      ; 005b1182 | DAT_00612560
    PUSH ESI                            ; 005b1188 | DAT_01bc120c
    CALL FUN_00483dd0                   ; 005b1189
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    ADD ESP,0x8                         ; 005b118e
    MOV EAX,ESP                         ; 005b1191
    PUSH EAX                            ; 005b1193
    MOV EDI,dword ptr [0x00612560]      ; 005b1194 | DAT_00612560
    PUSH EDI                            ; 005b119a | DAT_01bc120c
    CALL FUN_00482e30                   ; 005b119b
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00482e30()
    ADD ESP,0x8                         ; 005b11a0
    XOR EBP,EBP                         ; 005b11a3
    PUSH EBP                            ; 005b11a5
    MOV EBP,dword ptr [0x00612560]      ; 005b11a6 | DAT_00612560
    PUSH EBP                            ; 005b11ac | DAT_01bc120c
    CALL FUN_00483dd0                   ; 005b11ad
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    ADD ESP,0x8                         ; 005b11b2
    ADD ESP,0x134                       ; 005b11b5
    POP EBP                             ; 005b11bb
    POP EDI                             ; 005b11bc
    POP ESI                             ; 005b11bd
    POP EBX                             ; 005b11be
    RET                                 ; 005b11bf

