; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b4d30(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f1434
;   undefined4 DAT_005f1438
;   undefined4 DAT_005f1440
;   undefined4 DAT_005f1448
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_00550b70
;   FUN_00551050
;   FUN_0055ae80
;   FUN_005b4860
;   FUN_005b4aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4d30
        ;   Label: FUN_005b4d30
    PUSH ESI                            ; 005b4d31
    PUSH EDI                            ; 005b4d32
    PUSH EBP                            ; 005b4d33
    MOV EBP,ESP                         ; 005b4d34
    SUB ESP,0x154                       ; 005b4d36
    AND ESP,0xfffffff8                  ; 005b4d3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b4d3f
    FLD float ptr [EBX + 0x56c]         ; 005b4d42
    FCOMP float ptr [0x005f1434]        ; 005b4d48 | DAT_005f1434
    FNSTSW AX                           ; 005b4d4e
    SAHF                                ; 005b4d50
    JC 0x005b4de3                       ; 005b4d51
        ;   XREF to: 005b4de3 (CONDITIONAL_JUMP)  ; LAB_005b4de3
    CMP dword ptr [EBX + 0x574],0x0     ; 005b4d57
        ;   Label: LAB_005b4d57
    JZ 0x005b4e10                       ; 005b4d5e
        ;   XREF to: 005b4e10 (CONDITIONAL_JUMP)  ; LAB_005b4e10
    XOR ECX,ECX                         ; 005b4d64
    LEA EDX,[EBX + 0x2b0]               ; 005b4d66
    MOV dword ptr [ESP + 0x4],ECX       ; 005b4d6c
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b4d70
        ;   Label: LAB_005b4d70
    DEC EAX                             ; 005b4d76
    CMP ECX,EAX                         ; 005b4d77
    JGE 0x005b4e10                      ; 005b4d79
        ;   XREF to: 005b4e10 (CONDITIONAL_JUMP)  ; LAB_005b4e10
    FLD float ptr [EDX + -0x24]         ; 005b4d7f
    FLD float ptr [EDX + -0x20]         ; 005b4d82
    FLD float ptr [EDX + -0x1c]         ; 005b4d85
    LEA EDI,[ESP + 0x2c]                ; 005b4d88
    LEA ESI,[ESP + 0xf8]                ; 005b4d8c
    FXCH ST2                            ; 005b4d93
    FSUB float ptr [EDX]                ; 005b4d95
    FXCH                                ; 005b4d97
    FSUB float ptr [EDX + 0x4]          ; 005b4d99
    FXCH ST2                            ; 005b4d9c
    FSUB float ptr [EDX + 0x8]          ; 005b4d9e
    FXCH                                ; 005b4da1
    FSTP float ptr [ESP + 0xf8]         ; 005b4da3
    FXCH                                ; 005b4daa
    FSTP float ptr [ESP + 0xfc]         ; 005b4dac
    FSTP float ptr [ESP + 0x100]        ; 005b4db3
    MOVSD ES:EDI,ESI                    ; 005b4dba
    MOVSD ES:EDI,ESI                    ; 005b4dbb
    MOVSD ES:EDI,ESI                    ; 005b4dbc
    FLD float ptr [ESP + 0x30]          ; 005b4dbd
    FMUL ST0                            ; 005b4dc1
    FLD float ptr [ESP + 0x2c]          ; 005b4dc3
    FMUL ST0                            ; 005b4dc7
    FADDP                               ; 005b4dc9
    FLD float ptr [ESP + 0x34]          ; 005b4dcb
    FMUL ST0                            ; 005b4dcf
    FADDP                               ; 005b4dd1
    FSQRT                               ; 005b4dd3
    ADD EDX,0x24                        ; 005b4dd5
    FADD float ptr [ESP + 0x4]          ; 005b4dd8
    INC ECX                             ; 005b4ddc
    FSTP float ptr [ESP + 0x4]          ; 005b4ddd
    JMP 0x005b4d70                      ; 005b4de1
        ;   XREF to: 005b4d70 (UNCONDITIONAL_JUMP)  ; LAB_005b4d70
    PUSH 0x0                            ; 005b4de3
        ;   Label: LAB_005b4de3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b4de5
    PUSH 0x3dcccccd                     ; 005b4deb
    PUSH EBX                            ; 005b4df0
    CALL dword ptr [EAX + 0x40]         ; 005b4df1
    MOV dword ptr [ESP + 0x15c],EAX     ; 005b4df4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005b4dfb
    MOV dword ptr [EBX + 0x56c],EAX     ; 005b4e02
    ADD ESP,0xc                         ; 005b4e08
    JMP 0x005b4d57                      ; 005b4e0b
        ;   XREF to: 005b4d57 (UNCONDITIONAL_JUMP)  ; LAB_005b4d57
    FLD float ptr [EBP + 0x18]          ; 005b4e10
        ;   Label: LAB_005b4e10
    FLD1                                ; 005b4e13
    FDIVRP                              ; 005b4e15
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b4e17
    LEA EDX,[EAX + -0x1]                ; 005b4e1d
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b4e20
    LEA EDI,[ESP + 0xe0]                ; 005b4e27
    ADD EAX,EDX                         ; 005b4e2e
    FSTP float ptr [EBX + 0x570]        ; 005b4e30
    LEA ESI,[EBX + EAX*0x4 + 0x28c]     ; 005b4e36
    MOVSD ES:EDI,ESI                    ; 005b4e3d
    MOVSD ES:EDI,ESI                    ; 005b4e3e
    MOVSD ES:EDI,ESI                    ; 005b4e3f
    PUSH EBX                            ; 005b4e40
    LEA ESI,[ESP + 0xd8]                ; 005b4e41
    LEA EDI,[ESP + 0x48]                ; 005b4e48
    CALL FUN_005b4860                   ; 005b4e4c
        ;   XREF to: 005b4860 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4860()
    LEA ESI,[ESP + 0xd8]                ; 005b4e51
    ADD ESP,0x4                         ; 005b4e58
    MOVSD ES:EDI,ESI                    ; 005b4e5b
    MOVSD ES:EDI,ESI                    ; 005b4e5c
    MOVSD ES:EDI,ESI                    ; 005b4e5d
    MOV EDX,dword ptr [EBX + 0x158]     ; 005b4e5e
    DEC EDX                             ; 005b4e64
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b4e65
    ADD EAX,EDX                         ; 005b4e6c
    SHL EAX,0x2                         ; 005b4e6e
    LEA EDX,[EBX + 0x28c]               ; 005b4e71
    ADD EDX,EAX                         ; 005b4e77
    LEA EAX,[ESP + 0x44]                ; 005b4e79
    CMP EDX,EAX                         ; 005b4e7d
    JZ 0x005b4e95                       ; 005b4e7f
        ;   XREF to: 005b4e95 (CONDITIONAL_JUMP)  ; LAB_005b4e95
    MOV EAX,dword ptr [ESP + 0x44]      ; 005b4e81
    MOV dword ptr [EDX],EAX             ; 005b4e85
    MOV EAX,dword ptr [ESP + 0x48]      ; 005b4e87
    MOV dword ptr [EDX + 0x4],EAX       ; 005b4e8b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005b4e8e
    MOV dword ptr [EDX + 0x8],EAX       ; 005b4e92
    MOV EDX,dword ptr [EBX + 0x158]     ; 005b4e95
        ;   Label: LAB_005b4e95
    DEC EDX                             ; 005b4e9b
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b4e9c
    ADD EAX,EDX                         ; 005b4ea3
    LEA EDX,[EBX + 0x28c]               ; 005b4ea5
    MOV dword ptr [EDX + EAX*0x4 + 0x14],0x0 ; 005b4eab
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x14] ; 005b4eb3
    MOV dword ptr [EDX + EAX*0x4 + 0x10],ECX ; 005b4eb7
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x10] ; 005b4ebb
    MOV dword ptr [EDX + EAX*0x4 + 0xc],ECX ; 005b4ebf
    LEA EAX,[EBX + 0x20]                ; 005b4ec3
    CMP EDX,EAX                         ; 005b4ec6
    JNZ 0x005b50c8                      ; 005b4ec8
        ;   XREF to: 005b50c8 (CONDITIONAL_JUMP)  ; LAB_005b50c8
    LEA EAX,[EBX + 0x298]               ; 005b4ece
        ;   Label: LAB_005b4ece
    MOV dword ptr [EAX + 0x8],0x0       ; 005b4ed4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b4edb
    MOV dword ptr [EAX + 0x4],EDX       ; 005b4ede
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b4ee1
    MOV dword ptr [EAX],EDX             ; 005b4ee4
    LEA EAX,[EBX + 0x28c]               ; 005b4ee6
    MOV dword ptr [ESP + 0x10c],EAX     ; 005b4eec
    LEA EAX,[EBX + 0x568]               ; 005b4ef3
    MOV dword ptr [ESP + 0x120],EAX     ; 005b4ef9
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005b4f00
    ADD EAX,0x30                        ; 005b4f07
    MOV dword ptr [ESP + 0x12c],EAX     ; 005b4f0a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005b4f11
    ADD EAX,0x48                        ; 005b4f18
    MOV ESI,0x1                         ; 005b4f1b
    MOV dword ptr [ESP + 0x118],EAX     ; 005b4f20
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005b4f27
    MOV dword ptr [ESP + 0x128],ESI     ; 005b4f2e
    MOV dword ptr [ESP + 0x11c],EAX     ; 005b4f35
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b4f3c
        ;   Label: LAB_005b4f3c
    MOV EDI,dword ptr [ESP + 0x128]     ; 005b4f42
    DEC EAX                             ; 005b4f49
    CMP EAX,EDI                         ; 005b4f4a
    JG 0x005b50dd                       ; 005b4f4c
        ;   XREF to: 005b50dd (CONDITIONAL_JUMP)  ; LAB_005b50dd
    XOR EAX,EAX                         ; 005b4f52
    MOV dword ptr [ESP + 0x124],EAX     ; 005b4f54
    LEA EAX,[EBX + 0x298]               ; 005b4f5b
    MOV dword ptr [ESP + 0x138],EAX     ; 005b4f61
    LEA EAX,[EBX + 0x28c]               ; 005b4f68
    MOV dword ptr [ESP + 0x13c],EAX     ; 005b4f6e
    LEA EAX,[EBX + 0x20]                ; 005b4f75
    MOV dword ptr [ESP + 0x130],EAX     ; 005b4f78
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005b4f7f
    ADD EAX,0x48                        ; 005b4f86
    MOV dword ptr [ESP + 0x104],EAX     ; 005b4f89
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005b4f90
    ADD EAX,0x24                        ; 005b4f97
    MOV dword ptr [ESP + 0x108],EAX     ; 005b4f9a
    PUSH EBX                            ; 005b4fa1
        ;   Label: LAB_005b4fa1
    LEA ESI,[ESP + 0x54]                ; 005b4fa2
    LEA EDI,[ESP + 0xa8]                ; 005b4fa6
    CALL FUN_005b4860                   ; 005b4fad
        ;   XREF to: 005b4860 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4860()
    LEA ESI,[ESP + 0x54]                ; 005b4fb2
    ADD ESP,0x4                         ; 005b4fb6
    MOVSD ES:EDI,ESI                    ; 005b4fb9
    MOVSD ES:EDI,ESI                    ; 005b4fba
    MOVSD ES:EDI,ESI                    ; 005b4fbb
    MOV EDX,dword ptr [EBX + 0x158]     ; 005b4fbc
    DEC EDX                             ; 005b4fc2
    IMUL EDX,EDX,0x24                   ; 005b4fc3
    MOV ESI,dword ptr [ESP + 0x13c]     ; 005b4fc6
    LEA EAX,[ESP + 0xa4]                ; 005b4fcd
    ADD EDX,ESI                         ; 005b4fd4
    CMP EDX,EAX                         ; 005b4fd6
    JZ 0x005b4ff7                       ; 005b4fd8
        ;   XREF to: 005b4ff7 (CONDITIONAL_JUMP)  ; LAB_005b4ff7
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005b4fda
    MOV dword ptr [EDX],EAX             ; 005b4fe1
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005b4fe3
    MOV dword ptr [EDX + 0x4],EAX       ; 005b4fea
    MOV EAX,dword ptr [ESP + 0xac]      ; 005b4fed
    MOV dword ptr [EDX + 0x8],EAX       ; 005b4ff4
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b4ff7
        ;   Label: LAB_005b4ff7
    DEC EAX                             ; 005b4ffd
    IMUL EAX,EAX,0x24                   ; 005b4ffe
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005b5001
    ADD EAX,EDI                         ; 005b5008
    MOV dword ptr [EAX + 0x14],0x0      ; 005b500a
    MOV EDX,dword ptr [ESP + 0x130]     ; 005b5011
    MOV ECX,dword ptr [EAX + 0x14]      ; 005b5018
    MOV dword ptr [EAX + 0x10],ECX      ; 005b501b
    MOV ECX,dword ptr [EAX + 0x10]      ; 005b501e
    MOV dword ptr [EAX + 0xc],ECX       ; 005b5021
    CMP EDI,EDX                         ; 005b5024
    JNZ 0x005b52e7                      ; 005b5026
        ;   XREF to: 005b52e7 (CONDITIONAL_JUMP)  ; LAB_005b52e7
    MOV EAX,dword ptr [ESP + 0x138]     ; 005b502c
        ;   Label: LAB_005b502c
    MOV dword ptr [EAX + 0x8],0x0       ; 005b5033
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b503a
    MOV dword ptr [EAX + 0x4],EDX       ; 005b503d
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b5040
    MOV dword ptr [EAX],EDX             ; 005b5043
    MOV EAX,dword ptr [ESP + 0x104]     ; 005b5045
    MOV EDI,0x1                         ; 005b504c
    MOV dword ptr [ESP + 0x140],EAX     ; 005b5051
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005b5058
    MOV ESI,dword ptr [ESP + 0x108]     ; 005b505f
    MOV dword ptr [ESP + 0x144],EAX     ; 005b5066
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b506d
        ;   Label: LAB_005b506d
    DEC EAX                             ; 005b5073
    CMP EDI,EAX                         ; 005b5074
    JGE 0x005b52fe                      ; 005b5076
        ;   XREF to: 005b52fe (CONDITIONAL_JUMP)  ; LAB_005b52fe
    MOV ECX,dword ptr [ESP + 0x144]     ; 005b507c
    PUSH ECX                            ; 005b5083
    PUSH ESI                            ; 005b5084
    PUSH EBX                            ; 005b5085
    CALL FUN_005b4aa0                   ; 005b5086
        ;   XREF to: 005b4aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4aa0()
    ADD ESP,0xc                         ; 005b508b
    MOV EAX,dword ptr [ESP + 0x140]     ; 005b508e
    PUSH EAX                            ; 005b5095
    PUSH ESI                            ; 005b5096
    PUSH EBX                            ; 005b5097
    INC EDI                             ; 005b5098
    CALL FUN_005b4aa0                   ; 005b5099
        ;   XREF to: 005b4aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4aa0()
    ADD ESP,0xc                         ; 005b509e
    ADD ESI,0x24                        ; 005b50a1
    MOV EDX,dword ptr [ESP + 0x140]     ; 005b50a4
    MOV ECX,dword ptr [ESP + 0x144]     ; 005b50ab
    ADD EDX,0x24                        ; 005b50b2
    ADD ECX,0x24                        ; 005b50b5
    MOV dword ptr [ESP + 0x140],EDX     ; 005b50b8
    MOV dword ptr [ESP + 0x144],ECX     ; 005b50bf
    JMP 0x005b506d                      ; 005b50c6
        ;   XREF to: 005b506d (UNCONDITIONAL_JUMP)  ; LAB_005b506d
    MOV ECX,dword ptr [EAX]             ; 005b50c8
        ;   Label: LAB_005b50c8
    MOV dword ptr [EDX],ECX             ; 005b50ca
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b50cc
    MOV dword ptr [EDX + 0x4],ECX       ; 005b50cf
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b50d2
    MOV dword ptr [EDX + 0x8],ECX       ; 005b50d5
    JMP 0x005b4ece                      ; 005b50d8
        ;   XREF to: 005b4ece (UNCONDITIONAL_JUMP)  ; LAB_005b4ece
    IMUL EAX,EDI,0x24                   ; 005b50dd
        ;   Label: LAB_005b50dd
    MOV EDX,dword ptr [ESP + 0x10c]     ; 005b50e0
    ADD EDX,EAX                         ; 005b50e7
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b50e9
    FLD float ptr [EAX]                 ; 005b50f0
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b50f2
    FMUL float ptr [EAX]                ; 005b50f9
    FSTP float ptr [EAX]                ; 005b50fb
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b50fd
    FLD float ptr [EAX]                 ; 005b5104
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b5106
    FMUL float ptr [EAX + 0x4]          ; 005b510d
    FSTP float ptr [EAX + 0x4]          ; 005b5110
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b5113
    FLD float ptr [EAX]                 ; 005b511a
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b511c
    FMUL float ptr [EAX + 0x8]          ; 005b5123
    FSTP float ptr [EAX + 0x8]          ; 005b5126
    FLD float ptr [EBX + 0x55c]         ; 005b5129
    FMUL double ptr [0x005f1438]        ; 005b512f | DAT_005f1438
    FLDZ                                ; 005b5135
    FLD1                                ; 005b5137
    XOR ECX,ECX                         ; 005b5139
    FLDZ                                ; 005b513b
    MOV dword ptr [ESP + 0x60],ECX      ; 005b513d
    FXCH ST2                            ; 005b5141
    FSUB float ptr [EBX + 0x55c]        ; 005b5143
    FXCH ST3                            ; 005b5149
    FSTP float ptr [ESP + 0x110]        ; 005b514b
    FDIV float ptr [ESP + 0x110]        ; 005b5152
    FXCH                                ; 005b5159
    FMUL ST1                            ; 005b515b
    FXCH ST2                            ; 005b515d
    FST float ptr [ESP + 0x60]          ; 005b515f
    FMULP                               ; 005b5163
    LEA ESI,[ESP + 0x8c]                ; 005b5165
    MOV dword ptr [ESP + 0x64],ECX      ; 005b516c
    MOV dword ptr [ESP + 0x5c],ECX      ; 005b5170
    LEA EDI,[ESP + 0x20]                ; 005b5174
    MOV dword ptr [ESP + 0x134],EDX     ; 005b5178
    LEA EDX,[ESP + 0x14]                ; 005b517f
    FXCH                                ; 005b5183
    FSTP float ptr [ESP + 0x8c]         ; 005b5185
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005b518c
    FSTP float ptr [ESP + 0x90]         ; 005b5193
    MOV dword ptr [ESP + 0x94],EAX      ; 005b519a
    LEA EAX,[ESP + 0x20]                ; 005b51a1
    MOVSD ES:EDI,ESI                    ; 005b51a5
    MOVSD ES:EDI,ESI                    ; 005b51a6
    MOVSD ES:EDI,ESI                    ; 005b51a7
    CMP EDX,EAX                         ; 005b51a8
    JZ 0x005b51c4                       ; 005b51aa
        ;   XREF to: 005b51c4 (CONDITIONAL_JUMP)  ; LAB_005b51c4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b51ac
    MOV dword ptr [ESP + 0x14],EAX      ; 005b51b0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b51b4
    MOV dword ptr [ESP + 0x18],EAX      ; 005b51b8
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b51bc
    MOV dword ptr [ESP + 0x1c],EAX      ; 005b51c0
    FLD float ptr [EBP + 0x18]          ; 005b51c4
        ;   Label: LAB_005b51c4
    FLD float ptr [ESP + 0x14]          ; 005b51c7
    FMUL ST1                            ; 005b51cb
    FLD float ptr [ESP + 0x18]          ; 005b51cd
    FMUL ST2                            ; 005b51d1
    FLD float ptr [ESP + 0x1c]          ; 005b51d3
    FMUL ST3                            ; 005b51d7
    LEA EDI,[ESP + 0xc8]                ; 005b51d9
    LEA ESI,[ESP + 0x8]                 ; 005b51e0
    MOV EAX,dword ptr [ESP + 0x134]     ; 005b51e4
    FXCH ST2                            ; 005b51eb
    FSTP float ptr [ESP + 0x8]          ; 005b51ed
    FSTP float ptr [ESP + 0xc]          ; 005b51f1
    FSTP float ptr [ESP + 0x10]         ; 005b51f5
    MOVSD ES:EDI,ESI                    ; 005b51f9
    MOVSD ES:EDI,ESI                    ; 005b51fa
    MOVSD ES:EDI,ESI                    ; 005b51fb
    FLD float ptr [EAX + 0xc]           ; 005b51fc
    FADD float ptr [ESP + 0xc8]         ; 005b51ff
    FST float ptr [EAX + 0xc]           ; 005b5206
    FMUL ST1                            ; 005b5209
    FLD float ptr [EAX + 0x14]          ; 005b520b
    FLD float ptr [EAX + 0x10]          ; 005b520e
    FADD float ptr [ESP + 0xcc]         ; 005b5211
    FXCH                                ; 005b5218
    FADD float ptr [ESP + 0xd0]         ; 005b521a
    FXCH                                ; 005b5221
    FST float ptr [EAX + 0x10]          ; 005b5223
    FMUL ST3                            ; 005b5226
    FXCH                                ; 005b5228
    FST float ptr [EAX + 0x14]          ; 005b522a
    FMULP ST3                           ; 005b522d
    LEA EDI,[ESP + 0x38]                ; 005b522f
    LEA ESI,[ESP + 0x68]                ; 005b5233
    FXCH                                ; 005b5237
    FSTP float ptr [ESP + 0x68]         ; 005b5239
    FSTP float ptr [ESP + 0x6c]         ; 005b523d
    FSTP float ptr [ESP + 0x70]         ; 005b5241
    MOVSD ES:EDI,ESI                    ; 005b5245
    MOVSD ES:EDI,ESI                    ; 005b5246
    MOVSD ES:EDI,ESI                    ; 005b5247
    FLD float ptr [EAX]                 ; 005b5248
    FLD float ptr [EAX + 0x4]           ; 005b524a
    FLD float ptr [EAX + 0x8]           ; 005b524d
    FXCH ST2                            ; 005b5250
    FADD float ptr [ESP + 0x38]         ; 005b5252
    FXCH                                ; 005b5256
    FADD float ptr [ESP + 0x3c]         ; 005b5258
    FXCH ST2                            ; 005b525c
    FADD float ptr [ESP + 0x40]         ; 005b525e
    FXCH                                ; 005b5262
    FSTP float ptr [EAX]                ; 005b5264
    FXCH                                ; 005b5266
    FSTP float ptr [EAX + 0x4]          ; 005b5268
    FSTP float ptr [EAX + 0x8]          ; 005b526b
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005b526e
    PUSH EAX                            ; 005b5275
    MOV EDX,dword ptr [ESP + 0x138]     ; 005b5276
    PUSH EDX                            ; 005b527d
    PUSH EBX                            ; 005b527e
    CALL FUN_005b4aa0                   ; 005b527f
        ;   XREF to: 005b4aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4aa0()
    ADD ESP,0xc                         ; 005b5284
    MOV ECX,dword ptr [ESP + 0x118]     ; 005b5287
    PUSH ECX                            ; 005b528e
    MOV ESI,dword ptr [ESP + 0x138]     ; 005b528f
    PUSH ESI                            ; 005b5296
    PUSH EBX                            ; 005b5297
    CALL FUN_005b4aa0                   ; 005b5298
        ;   XREF to: 005b4aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4aa0()
    ADD ESP,0xc                         ; 005b529d
    MOV EDI,dword ptr [ESP + 0x12c]     ; 005b52a0
    MOV EAX,dword ptr [ESP + 0x118]     ; 005b52a7
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005b52ae
    MOV ECX,dword ptr [ESP + 0x128]     ; 005b52b5
    ADD EDI,0x24                        ; 005b52bc
    ADD EAX,0x24                        ; 005b52bf
    ADD EDX,0x24                        ; 005b52c2
    INC ECX                             ; 005b52c5
    MOV dword ptr [ESP + 0x12c],EDI     ; 005b52c6
    MOV dword ptr [ESP + 0x118],EAX     ; 005b52cd
    MOV dword ptr [ESP + 0x11c],EDX     ; 005b52d4
    MOV dword ptr [ESP + 0x128],ECX     ; 005b52db
    JMP 0x005b4f3c                      ; 005b52e2
        ;   XREF to: 005b4f3c (UNCONDITIONAL_JUMP)  ; LAB_005b4f3c
    MOV EAX,EDX                         ; 005b52e7
        ;   Label: LAB_005b52e7
    MOV EDX,dword ptr [EAX]             ; 005b52e9
    MOV dword ptr [EDI],EDX             ; 005b52eb
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b52ed
    MOV dword ptr [EDI + 0x4],EDX       ; 005b52f0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b52f3
    MOV dword ptr [EDI + 0x8],EDX       ; 005b52f6
    JMP 0x005b502c                      ; 005b52f9
        ;   XREF to: 005b502c (UNCONDITIONAL_JUMP)  ; LAB_005b502c
    PUSH EBX                            ; 005b52fe
        ;   Label: LAB_005b52fe
    LEA ESI,[ESP + 0x84]                ; 005b52ff
    LEA EDI,[ESP + 0xc0]                ; 005b5306
    CALL FUN_005b4860                   ; 005b530d
        ;   XREF to: 005b4860 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4860()
    LEA ESI,[ESP + 0x84]                ; 005b5312
    ADD ESP,0x4                         ; 005b5319
    MOVSD ES:EDI,ESI                    ; 005b531c
    MOVSD ES:EDI,ESI                    ; 005b531d
    MOVSD ES:EDI,ESI                    ; 005b531e
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b531f
    DEC EAX                             ; 005b5325
    IMUL EAX,EAX,0x24                   ; 005b5326
    MOV EDX,dword ptr [ESP + 0x13c]     ; 005b5329
    ADD EDX,EAX                         ; 005b5330
    LEA EAX,[ESP + 0xbc]                ; 005b5332
    CMP EDX,EAX                         ; 005b5339
    JZ 0x005b535a                       ; 005b533b
        ;   XREF to: 005b535a (CONDITIONAL_JUMP)  ; LAB_005b535a
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005b533d
    MOV dword ptr [EDX],EAX             ; 005b5344
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005b5346
    MOV dword ptr [EDX + 0x4],EAX       ; 005b534d
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005b5350
    MOV dword ptr [EDX + 0x8],EAX       ; 005b5357
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b535a
        ;   Label: LAB_005b535a
    DEC EAX                             ; 005b5360
    IMUL EAX,EAX,0x24                   ; 005b5361
    MOV ECX,dword ptr [ESP + 0x13c]     ; 005b5364
    ADD EAX,ECX                         ; 005b536b
    MOV dword ptr [EAX + 0x14],0x0      ; 005b536d
    MOV ESI,dword ptr [ESP + 0x130]     ; 005b5374
    MOV EDX,dword ptr [EAX + 0x14]      ; 005b537b
    MOV dword ptr [EAX + 0x10],EDX      ; 005b537e
    MOV EDX,dword ptr [EAX + 0x10]      ; 005b5381
    MOV dword ptr [EAX + 0xc],EDX       ; 005b5384
    CMP ECX,ESI                         ; 005b5387
    JZ 0x005b539d                       ; 005b5389
        ;   XREF to: 005b539d (CONDITIONAL_JUMP)  ; LAB_005b539d
    MOV EAX,ESI                         ; 005b538b
    MOV EDX,dword ptr [EAX]             ; 005b538d
    MOV dword ptr [ECX],EDX             ; 005b538f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b5391
    MOV dword ptr [ECX + 0x4],EDX       ; 005b5394
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b5397
    MOV dword ptr [ECX + 0x8],EDX       ; 005b539a
    MOV EAX,dword ptr [ESP + 0x138]     ; 005b539d
        ;   Label: LAB_005b539d
    MOV EDI,dword ptr [ESP + 0x124]     ; 005b53a4
    MOV dword ptr [EAX + 0x8],0x0       ; 005b53ab
    INC EDI                             ; 005b53b2
    FLD float ptr [EAX + 0x8]           ; 005b53b3
    MOV dword ptr [ESP + 0x124],EDI     ; 005b53b6
    FST float ptr [EAX + 0x4]           ; 005b53bd
    FSTP float ptr [EAX]                ; 005b53c0
    CMP EDI,0x3                         ; 005b53c2
    JL 0x005b4fa1                       ; 005b53c5
        ;   XREF to: 005b4fa1 (CONDITIONAL_JUMP)  ; LAB_005b4fa1
    MOV EDX,dword ptr [EBX + 0x158]     ; 005b53cb
    XOR ESI,ESI                         ; 005b53d1
    TEST EDX,EDX                        ; 005b53d3
    JLE 0x005b540a                      ; 005b53d5
        ;   XREF to: 005b540a (CONDITIONAL_JUMP)  ; LAB_005b540a
    LEA ECX,[EBX + 0x28c]               ; 005b53d7
    LEA EDX,[EBX + 0x2a4]               ; 005b53dd
    IMUL EAX,ESI,0x24                   ; 005b53e3
        ;   Label: LAB_005b53e3
    ADD EAX,ECX                         ; 005b53e6
    CMP EDX,EAX                         ; 005b53e8
    JZ 0x005b53fc                       ; 005b53ea
        ;   XREF to: 005b53fc (CONDITIONAL_JUMP)  ; LAB_005b53fc
    MOV EDI,dword ptr [EAX]             ; 005b53ec
    MOV dword ptr [EDX],EDI             ; 005b53ee
    MOV EDI,dword ptr [EAX + 0x4]       ; 005b53f0
    MOV dword ptr [EDX + 0x4],EDI       ; 005b53f3
    MOV EDI,dword ptr [EAX + 0x8]       ; 005b53f6
    MOV dword ptr [EDX + 0x8],EDI       ; 005b53f9
    INC ESI                             ; 005b53fc
        ;   Label: LAB_005b53fc
    MOV EDI,dword ptr [EBX + 0x158]     ; 005b53fd
    ADD EDX,0x24                        ; 005b5403
    CMP ESI,EDI                         ; 005b5406
    JL 0x005b53e3                       ; 005b5408
        ;   XREF to: 005b53e3 (CONDITIONAL_JUMP)  ; LAB_005b53e3
    XOR EAX,EAX                         ; 005b540a
        ;   Label: LAB_005b540a
    MOV ECX,dword ptr [EBX + 0x574]     ; 005b540c
    MOV dword ptr [ESP + 0x114],EAX     ; 005b5412
    MOV dword ptr [ESP + 0x14c],EAX     ; 005b5419
    TEST ECX,ECX                        ; 005b5420
    JZ 0x005b5580                       ; 005b5422
        ;   XREF to: 005b5580 (CONDITIONAL_JUMP)  ; LAB_005b5580
    FLD float ptr [EBX + 0x15c]         ; 005b5428
    FMUL double ptr [0x005f1440]        ; 005b542e | DAT_005f1440
    FLD float ptr [ESP + 0x4]           ; 005b5434
    FCOMPP                              ; 005b5438
    FNSTSW AX                           ; 005b543a
    SAHF                                ; 005b543c
    JNC 0x005b54de                      ; 005b543d
        ;   XREF to: 005b54de (CONDITIONAL_JUMP)  ; LAB_005b54de
    LEA EDX,[EBX + 0x2b0]               ; 005b5443
    XOR ESI,ESI                         ; 005b5449
    XOR ECX,ECX                         ; 005b544b
    MOV dword ptr [ESP],ESI             ; 005b544d
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b5450
        ;   Label: LAB_005b5450
    DEC EAX                             ; 005b5456
    CMP ECX,EAX                         ; 005b5457
    JGE 0x005b54bd                      ; 005b5459
        ;   XREF to: 005b54bd (CONDITIONAL_JUMP)  ; LAB_005b54bd
    FLD float ptr [EDX + -0x24]         ; 005b545b
    FLD float ptr [EDX + -0x20]         ; 005b545e
    FLD float ptr [EDX + -0x1c]         ; 005b5461
    LEA EDI,[ESP + 0xec]                ; 005b5464
    LEA ESI,[ESP + 0x74]                ; 005b546b
    FXCH ST2                            ; 005b546f
    FSUB float ptr [EDX]                ; 005b5471
    FXCH                                ; 005b5473
    FSUB float ptr [EDX + 0x4]          ; 005b5475
    FXCH ST2                            ; 005b5478
    FSUB float ptr [EDX + 0x8]          ; 005b547a
    FXCH                                ; 005b547d
    FSTP float ptr [ESP + 0x74]         ; 005b547f
    FXCH                                ; 005b5483
    FSTP float ptr [ESP + 0x78]         ; 005b5485
    FSTP float ptr [ESP + 0x7c]         ; 005b5489
    MOVSD ES:EDI,ESI                    ; 005b548d
    MOVSD ES:EDI,ESI                    ; 005b548e
    MOVSD ES:EDI,ESI                    ; 005b548f
    FLD float ptr [ESP + 0xf0]          ; 005b5490
    FMUL ST0                            ; 005b5497
    FLD float ptr [ESP + 0xec]          ; 005b5499
    FMUL ST0                            ; 005b54a0
    FADDP                               ; 005b54a2
    FLD float ptr [ESP + 0xf4]          ; 005b54a4
    FMUL ST0                            ; 005b54ab
    FADDP                               ; 005b54ad
    FSQRT                               ; 005b54af
    ADD EDX,0x24                        ; 005b54b1
    FADD float ptr [ESP]                ; 005b54b4
    INC ECX                             ; 005b54b7
    FSTP float ptr [ESP]                ; 005b54b8
    JMP 0x005b5450                      ; 005b54bb
        ;   XREF to: 005b5450 (UNCONDITIONAL_JUMP)  ; LAB_005b5450
    FLD float ptr [EBX + 0x15c]         ; 005b54bd
        ;   Label: LAB_005b54bd
    FMUL double ptr [0x005f1440]        ; 005b54c3 | DAT_005f1440
    FLD float ptr [ESP]                 ; 005b54c9
    FCOMPP                              ; 005b54cc
    FNSTSW AX                           ; 005b54ce
    SAHF                                ; 005b54d0
    JBE 0x005b54de                      ; 005b54d1
        ;   XREF to: 005b54de (CONDITIONAL_JUMP)  ; LAB_005b54de
    MOV dword ptr [ESP + 0x14c],0x1     ; 005b54d3
    MOV EDX,dword ptr [EBX + 0x158]     ; 005b54de
        ;   Label: LAB_005b54de
    FLD float ptr [ESP + 0xe0]          ; 005b54e4
    DEC EDX                             ; 005b54eb
    FLD float ptr [ESP + 0xe4]          ; 005b54ec
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b54f3
    FLD float ptr [ESP + 0xe8]          ; 005b54fa
    ADD EAX,EDX                         ; 005b5501
    LEA EDX,[EBX + 0x28c]               ; 005b5503
    LEA EDI,[ESP + 0x98]                ; 005b5509
    LEA ESI,[ESP + 0xb0]                ; 005b5510
    FXCH ST2                            ; 005b5517
    FSUB float ptr [EDX + EAX*0x4]      ; 005b5519
    FXCH                                ; 005b551c
    FSUB float ptr [EDX + EAX*0x4 + 0x4] ; 005b551e
    FXCH ST2                            ; 005b5522
    FSUB float ptr [EDX + EAX*0x4 + 0x8] ; 005b5524
    FXCH                                ; 005b5528
    FSTP float ptr [ESP + 0xb0]         ; 005b552a
    FXCH                                ; 005b5531
    FSTP float ptr [ESP + 0xb4]         ; 005b5533
    FSTP float ptr [ESP + 0xb8]         ; 005b553a
    MOVSD ES:EDI,ESI                    ; 005b5541
    MOVSD ES:EDI,ESI                    ; 005b5542
    MOVSD ES:EDI,ESI                    ; 005b5543
    FLD float ptr [ESP + 0x9c]          ; 005b5544
    FMUL ST0                            ; 005b554b
    FLD float ptr [ESP + 0x98]          ; 005b554d
    FMUL ST0                            ; 005b5554
    FADDP                               ; 005b5556
    FLD float ptr [ESP + 0xa0]          ; 005b5558
    FMUL ST0                            ; 005b555f
    FADDP                               ; 005b5561
    FSQRT                               ; 005b5563
    FLD float ptr [EBP + 0x18]          ; 005b5565
    FMUL double ptr [0x005f1448]        ; 005b5568 | DAT_005f1448
    FCOMPP                              ; 005b556e
    FNSTSW AX                           ; 005b5570
    SAHF                                ; 005b5572
    JNC 0x005b5580                      ; 005b5573
        ;   XREF to: 005b5580 (CONDITIONAL_JUMP)  ; LAB_005b5580
    MOV dword ptr [ESP + 0x114],0x1     ; 005b5575
    CMP dword ptr [ESP + 0x14c],0x0     ; 005b5580
        ;   Label: LAB_005b5580
    JZ 0x005b55b5                       ; 005b5588
        ;   XREF to: 005b55b5 (CONDITIONAL_JUMP)  ; LAB_005b55b5
    CMP byte ptr [EBX + 0x1b4],0x0      ; 005b558a
    JZ 0x005b55b5                       ; 005b5591
        ;   XREF to: 005b55b5 (CONDITIONAL_JUMP)  ; LAB_005b55b5
    MOV ECX,dword ptr [EBX + 0x280]     ; 005b5593
    PUSH ECX                            ; 005b5599
    CALL FUN_00551050                   ; 005b559a
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 005b559f
    MOV ESI,dword ptr [EBX + 0x218]     ; 005b55a2
    PUSH ESI                            ; 005b55a8
    CALL FUN_00550b70                   ; 005b55a9
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 005b55ae
    TEST EAX,EAX                        ; 005b55b1
    JZ 0x005b55e9                       ; 005b55b3
        ;   XREF to: 005b55e9 (CONDITIONAL_JUMP)  ; LAB_005b55e9
    FLD float ptr [EBX + 0x284]         ; 005b55b5
        ;   Label: LAB_005b55b5
    FSUB float ptr [EBP + 0x18]         ; 005b55bb
    MOV EAX,dword ptr [ESP + 0x114]     ; 005b55be
    FSTP float ptr [EBX + 0x284]        ; 005b55c5
    TEST EAX,EAX                        ; 005b55cb
    JNZ 0x005b5624                      ; 005b55cd
        ;   XREF to: 005b5624 (CONDITIONAL_JUMP)  ; LAB_005b5624
    FLD float ptr [EBX + 0x284]         ; 005b55cf
    FLDZ                                ; 005b55d5
    FCOMPP                              ; 005b55d7
    FNSTSW AX                           ; 005b55d9
    SAHF                                ; 005b55db
    JA 0x005b5694                       ; 005b55dc
        ;   XREF to: 005b5694 (CONDITIONAL_JUMP)  ; LAB_005b5694
    MOV ESP,EBP                         ; 005b55e2
    POP EBP                             ; 005b55e4
    POP EDI                             ; 005b55e5
    POP ESI                             ; 005b55e6
    POP EBX                             ; 005b55e7
    RET                                 ; 005b55e8
    MOV EDX,dword ptr [EBX + 0x158]     ; 005b55e9
        ;   Label: LAB_005b55e9
    DEC EDX                             ; 005b55ef
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b55f0
    ADD EAX,EDX                         ; 005b55f7
    SHL EAX,0x2                         ; 005b55f9
    LEA EDX,[EBX + 0x28c]               ; 005b55fc
    ADD EAX,EDX                         ; 005b5602
    PUSH EAX                            ; 005b5604
    LEA EAX,[EBX + 0x1b4]               ; 005b5605
    PUSH EAX                            ; 005b560b
    PUSH EBX                            ; 005b560c
    MOV EDI,dword ptr [0x0061c068]      ; 005b560d | DAT_0061c068
    PUSH EDI                            ; 005b5613
    CALL FUN_0055ae80                   ; 005b5614
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae80()
    ADD ESP,0x10                        ; 005b5619
    MOV dword ptr [EBX + 0x280],EAX     ; 005b561c
    JMP 0x005b55b5                      ; 005b5622
        ;   XREF to: 005b55b5 (UNCONDITIONAL_JUMP)  ; LAB_005b55b5
    MOV ECX,dword ptr [EBX + 0x218]     ; 005b5624
        ;   Label: LAB_005b5624
    PUSH ECX                            ; 005b562a
    CALL FUN_00550b70                   ; 005b562b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 005b5630
    TEST EAX,EAX                        ; 005b5633
    JNZ 0x005b5683                      ; 005b5635
        ;   XREF to: 005b5683 (CONDITIONAL_JUMP)  ; LAB_005b5683
    MOV ESI,dword ptr [EBX + 0x280]     ; 005b5637
    PUSH ESI                            ; 005b563d
    CALL FUN_00550b70                   ; 005b563e
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 005b5643
    TEST EAX,EAX                        ; 005b5646
    JNZ 0x005b5683                      ; 005b5648
        ;   XREF to: 005b5683 (CONDITIONAL_JUMP)  ; LAB_005b5683
    MOV EDX,dword ptr [EBX + 0x158]     ; 005b564a
    DEC EDX                             ; 005b5650
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b5651
    ADD EDX,EAX                         ; 005b5658
    SHL EDX,0x2                         ; 005b565a
    LEA EAX,[EBX + 0x28c]               ; 005b565d
    ADD EAX,EDX                         ; 005b5663
    PUSH EAX                            ; 005b5665
    LEA EAX,[EBX + 0x21c]               ; 005b5666
    PUSH EAX                            ; 005b566c
    PUSH EBX                            ; 005b566d
    MOV EDI,dword ptr [0x0061c068]      ; 005b566e | DAT_0061c068
    PUSH EDI                            ; 005b5674
    CALL FUN_0055ae80                   ; 005b5675
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae80()
    ADD ESP,0x10                        ; 005b567a
    MOV dword ptr [EBX + 0x280],EAX     ; 005b567d
    MOV dword ptr [EBX + 0x284],0x3f000000 ; 005b5683
        ;   Label: LAB_005b5683
    MOV ESP,EBP                         ; 005b568d
    POP EBP                             ; 005b568f
    POP EDI                             ; 005b5690
    POP ESI                             ; 005b5691
    POP EBX                             ; 005b5692
    RET                                 ; 005b5693
    MOV EDX,dword ptr [EBX + 0x280]     ; 005b5694
        ;   Label: LAB_005b5694
    PUSH EDX                            ; 005b569a
    MOV dword ptr [EBX + 0x284],0x0     ; 005b569b
    CALL FUN_00551050                   ; 005b56a5
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 005b56aa
    MOV ESP,EBP                         ; 005b56ad
    POP EBP                             ; 005b56af
    POP EDI                             ; 005b56b0
    POP ESI                             ; 005b56b1
    POP EBX                             ; 005b56b2
    RET                                 ; 005b56b3

