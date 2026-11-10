; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_0057ee80(CWerewolf *this_ptr,CVector3f *eye_position)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   eye_position
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
;   core_werewolf.cpp_CWerewolf_renderTransparent_FUN_0057f440 at 0057f534
;
; Referenced Globals:
;   undefined4 DAT_005e6380
;   undefined4 DAT_005e63ac
;   undefined4 DAT_005e63b0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00607240
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ee80
        ;   Label: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0057ee80
    PUSH ESI                            ; 0057ee81
    PUSH EDI                            ; 0057ee82
    PUSH EBP                            ; 0057ee83
    SUB ESP,0x134                       ; 0057ee84
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0057ee8a
    FLD float ptr [EBP]                 ; 0057ee91
    FLD float ptr [EBP + 0x4]           ; 0057ee94
    LEA EDI,[ESP + 0x10c]               ; 0057ee97
    MOV EAX,[0x005e63ac]                ; 0057ee9e | DAT_005e63ac
    LEA ESI,[ESP + 0xf4]                ; 0057eea3
    MOV dword ptr [ESP + 0x130],EAX     ; 0057eeaa
    MOV EAX,[0x005e63b0]                ; 0057eeb1 | DAT_005e63b0
    FXCH                                ; 0057eeb6
    FADD float ptr [ESP + 0x130]        ; 0057eeb8
    MOV dword ptr [ESP + 0x128],EAX     ; 0057eebf
    FSTP float ptr [ESP + 0xf4]         ; 0057eec6
    MOV EAX,dword ptr [EBP + 0x8]       ; 0057eecd
    FADD float ptr [ESP + 0x128]        ; 0057eed0
    MOV dword ptr [ESP + 0xfc],EAX      ; 0057eed7
    FSTP float ptr [ESP + 0xf8]         ; 0057eede
    MOVSD ES:EDI,ESI                    ; 0057eee5
    MOVSD ES:EDI,ESI                    ; 0057eee6
    MOVSD ES:EDI,ESI                    ; 0057eee7
    MOV EAX,dword ptr [ESP + 0x148]     ; 0057eee8
    FLD float ptr [ESP + 0x10c]         ; 0057eeef
    FMUL float ptr [EAX + 0x27b8]       ; 0057eef6
    FLD float ptr [ESP + 0x110]         ; 0057eefc
    FMUL float ptr [EAX + 0x27b8]       ; 0057ef03
    FLD float ptr [ESP + 0x114]         ; 0057ef09
    FMUL float ptr [EAX + 0x27b8]       ; 0057ef10
    LEA EDX,[ESP + 0x4c]                ; 0057ef16
    LEA EDI,[ESP + 0x7c]                ; 0057ef1a
    LEA ESI,[ESP + 0x70]                ; 0057ef1e
    FXCH ST2                            ; 0057ef22
    FSTP float ptr [ESP + 0x70]         ; 0057ef24
    FSTP float ptr [ESP + 0x74]         ; 0057ef28
    FSTP float ptr [ESP + 0x78]         ; 0057ef2c
    LEA EAX,[ESP + 0x7c]                ; 0057ef30
    MOVSD ES:EDI,ESI                    ; 0057ef34
    MOVSD ES:EDI,ESI                    ; 0057ef35
    MOVSD ES:EDI,ESI                    ; 0057ef36
    CMP EDX,EAX                         ; 0057ef37
    JZ 0x0057ef59                       ; 0057ef39
        ;   XREF to: 0057ef59 (CONDITIONAL_JUMP)  ; LAB_0057ef59
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0057ef3b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057ef3f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0057ef43
    MOV dword ptr [ESP + 0x50],EAX      ; 0057ef4a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0057ef4e
    MOV dword ptr [ESP + 0x54],EAX      ; 0057ef55
    LEA EBX,[ESP + 0x34]                ; 0057ef59
        ;   Label: LAB_0057ef59
    LEA EAX,[ESP + 0x4c]                ; 0057ef5d
    MOV EDX,dword ptr [0x005f2afc]      ; 0057ef61 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057ef67
    FMUL float ptr [0x005e6380]         ; 0057ef69 | DAT_005e6380
    FISTP dword ptr [EBX]               ; 0057ef6f
    FLD float ptr [EAX + 0x4]           ; 0057ef71
    FMUL float ptr [0x005e6380]         ; 0057ef74 | DAT_005e6380
    FISTP dword ptr [EBX + 0x4]         ; 0057ef7a
    FLD float ptr [EAX + 0x8]           ; 0057ef7d
    FMUL float ptr [0x005e6380]         ; 0057ef80 | DAT_005e6380
    FISTP dword ptr [EBX + 0x8]         ; 0057ef86
    LEA EAX,[ESP + 0x34]                ; 0057ef89
    PUSH EAX                            ; 0057ef8d
    MOV EAX,dword ptr [EDX]             ; 0057ef8e | DAT_01bdd7e4
    PUSH EAX                            ; 0057ef90
    LEA EDI,[ESP + 0x48]                ; 0057ef91
    LEA ESI,[ESP + 0x30]                ; 0057ef95
    CALL engine_special.cpp_FUN_005632a3 ; 0057ef99
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e63ac]          ; 0057ef9e | DAT_005e63ac
    FLD float ptr [EBP]                 ; 0057efa4
    FLD float ptr [EBP + 0x4]           ; 0057efa7
    MOV EAX,[0x005e63b0]                ; 0057efaa | DAT_005e63b0
    ADD ESP,0x8                         ; 0057efaf
    FXCH ST2                            ; 0057efb2
    FCHS                                ; 0057efb4
    MOV dword ptr [ESP + 0x12c],EAX     ; 0057efb6
    FADDP                               ; 0057efbd
    MOV EAX,dword ptr [EBP + 0x8]       ; 0057efbf
    FSTP float ptr [ESP + 0x28]         ; 0057efc2
    FADD float ptr [ESP + 0x12c]        ; 0057efc6
    MOV dword ptr [ESP + 0x30],EAX      ; 0057efcd
    FSTP float ptr [ESP + 0x2c]         ; 0057efd1
    MOVSD ES:EDI,ESI                    ; 0057efd5
    MOVSD ES:EDI,ESI                    ; 0057efd6
    MOVSD ES:EDI,ESI                    ; 0057efd7
    MOV EAX,dword ptr [ESP + 0x148]     ; 0057efd8
    FLD float ptr [ESP + 0x40]          ; 0057efdf
    FMUL float ptr [EAX + 0x27b8]       ; 0057efe3
    FLD float ptr [ESP + 0x44]          ; 0057efe9
    FMUL float ptr [EAX + 0x27b8]       ; 0057efed
    FLD float ptr [ESP + 0x48]          ; 0057eff3
    FMUL float ptr [EAX + 0x27b8]       ; 0057eff7
    LEA EDX,[ESP + 0x4c]                ; 0057effd
    LEA EDI,[ESP + 0xa0]                ; 0057f001
    LEA ESI,[ESP + 0xb8]                ; 0057f008
    FXCH ST2                            ; 0057f00f
    FSTP float ptr [ESP + 0xb8]         ; 0057f011
    FSTP float ptr [ESP + 0xbc]         ; 0057f018
    FSTP float ptr [ESP + 0xc0]         ; 0057f01f
    LEA EAX,[ESP + 0xa0]                ; 0057f026
    MOVSD ES:EDI,ESI                    ; 0057f02d
    MOVSD ES:EDI,ESI                    ; 0057f02e
    MOVSD ES:EDI,ESI                    ; 0057f02f
    CMP EDX,EAX                         ; 0057f030
    JZ 0x0057f055                       ; 0057f032
        ;   XREF to: 0057f055 (CONDITIONAL_JUMP)  ; LAB_0057f055
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0057f034
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057f03b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057f03f
    MOV dword ptr [ESP + 0x50],EAX      ; 0057f046
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0057f04a
    MOV dword ptr [ESP + 0x54],EAX      ; 0057f051
    LEA EBX,[ESP + 0x118]               ; 0057f055
        ;   Label: LAB_0057f055
    LEA EAX,[ESP + 0x4c]                ; 0057f05c
    MOV EDX,dword ptr [0x005f2afc]      ; 0057f060 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057f066
    FMUL float ptr [0x005e6380]         ; 0057f068 | DAT_005e6380
    FISTP dword ptr [EBX]               ; 0057f06e
    FLD float ptr [EAX + 0x4]           ; 0057f070
    FMUL float ptr [0x005e6380]         ; 0057f073 | DAT_005e6380
    FISTP dword ptr [EBX + 0x4]         ; 0057f079
    FLD float ptr [EAX + 0x8]           ; 0057f07c
    FMUL float ptr [0x005e6380]         ; 0057f07f | DAT_005e6380
    FISTP dword ptr [EBX + 0x8]         ; 0057f085
    LEA EAX,[ESP + 0x118]               ; 0057f088
    PUSH EAX                            ; 0057f08f
    MOV EAX,dword ptr [EDX]             ; 0057f090 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0057f092
    PUSH EAX                            ; 0057f095
    LEA EDI,[ESP + 0xcc]                ; 0057f096
    LEA ESI,[ESP + 0x9c]                ; 0057f09d
    CALL engine_special.cpp_FUN_005632a3 ; 0057f0a4
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e63b0]          ; 0057f0a9 | DAT_005e63b0
    FLD float ptr [0x005e63ac]          ; 0057f0af | DAT_005e63ac
    FLD float ptr [EBP + 0x4]           ; 0057f0b5
    ADD ESP,0x8                         ; 0057f0b8
    FXCH ST2                            ; 0057f0bb
    FCHS                                ; 0057f0bd
    MOV EAX,dword ptr [EBP + 0x8]       ; 0057f0bf
    FXCH                                ; 0057f0c2
    FCHS                                ; 0057f0c4
    MOV dword ptr [ESP + 0x9c],EAX      ; 0057f0c6
    FADD float ptr [EBP]                ; 0057f0cd
    FXCH ST2                            ; 0057f0d0
    FADDP                               ; 0057f0d2
    FXCH                                ; 0057f0d4
    FSTP float ptr [ESP + 0x94]         ; 0057f0d6
    FSTP float ptr [ESP + 0x98]         ; 0057f0dd
    MOVSD ES:EDI,ESI                    ; 0057f0e4
    MOVSD ES:EDI,ESI                    ; 0057f0e5
    MOVSD ES:EDI,ESI                    ; 0057f0e6
    MOV EAX,dword ptr [ESP + 0x148]     ; 0057f0e7
    FLD float ptr [ESP + 0xc4]          ; 0057f0ee
    FMUL float ptr [EAX + 0x27b8]       ; 0057f0f5
    FLD float ptr [ESP + 0xc8]          ; 0057f0fb
    FMUL float ptr [EAX + 0x27b8]       ; 0057f102
    FLD float ptr [ESP + 0xcc]          ; 0057f108
    FMUL float ptr [EAX + 0x27b8]       ; 0057f10f
    LEA EDX,[ESP + 0x4c]                ; 0057f115
    LEA EDI,[ESP + 0xe8]                ; 0057f119
    LEA ESI,[ESP + 0xdc]                ; 0057f120
    FXCH ST2                            ; 0057f127
    FSTP float ptr [ESP + 0xdc]         ; 0057f129
    FSTP float ptr [ESP + 0xe0]         ; 0057f130
    FSTP float ptr [ESP + 0xe4]         ; 0057f137
    LEA EAX,[ESP + 0xe8]                ; 0057f13e
    MOVSD ES:EDI,ESI                    ; 0057f145
    MOVSD ES:EDI,ESI                    ; 0057f146
    MOVSD ES:EDI,ESI                    ; 0057f147
    CMP EDX,EAX                         ; 0057f148
    JZ 0x0057f16d                       ; 0057f14a
        ;   XREF to: 0057f16d (CONDITIONAL_JUMP)  ; LAB_0057f16d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0057f14c
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057f153
    MOV EAX,dword ptr [ESP + 0xec]      ; 0057f157
    MOV dword ptr [ESP + 0x50],EAX      ; 0057f15e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0057f162
    MOV dword ptr [ESP + 0x54],EAX      ; 0057f169
    LEA EBX,[ESP + 0x58]                ; 0057f16d
        ;   Label: LAB_0057f16d
    LEA EAX,[ESP + 0x4c]                ; 0057f171
    MOV EDX,dword ptr [0x005f2afc]      ; 0057f175 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057f17b
    FMUL float ptr [0x005e6380]         ; 0057f17d | DAT_005e6380
    FISTP dword ptr [EBX]               ; 0057f183
    FLD float ptr [EAX + 0x4]           ; 0057f185
    FMUL float ptr [0x005e6380]         ; 0057f188 | DAT_005e6380
    FISTP dword ptr [EBX + 0x4]         ; 0057f18e
    FLD float ptr [EAX + 0x8]           ; 0057f191
    FMUL float ptr [0x005e6380]         ; 0057f194 | DAT_005e6380
    FISTP dword ptr [EBX + 0x8]         ; 0057f19a
    LEA EAX,[ESP + 0x58]                ; 0057f19d
    PUSH EAX                            ; 0057f1a1
    MOV EAX,dword ptr [EDX]             ; 0057f1a2 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0057f1a4
    PUSH EAX                            ; 0057f1a7
    LEA EDI,[ESP + 0x90]                ; 0057f1a8
    LEA ESI,[ESP + 0x6c]                ; 0057f1af
    CALL engine_special.cpp_FUN_005632a3 ; 0057f1b3
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e63b0]          ; 0057f1b8 | DAT_005e63b0
    FLD float ptr [0x005e63ac]          ; 0057f1be | DAT_005e63ac
    FLD float ptr [EBP + 0x4]           ; 0057f1c4
    ADD ESP,0x8                         ; 0057f1c7
    MOV EAX,dword ptr [EBP + 0x8]       ; 0057f1ca
    FXCH ST2                            ; 0057f1cd
    FCHS                                ; 0057f1cf
    MOV dword ptr [ESP + 0x6c],EAX      ; 0057f1d1
    FXCH                                ; 0057f1d5
    FADD float ptr [EBP]                ; 0057f1d7
    FXCH ST2                            ; 0057f1da
    FADDP                               ; 0057f1dc
    FXCH                                ; 0057f1de
    FSTP float ptr [ESP + 0x64]         ; 0057f1e0
    FSTP float ptr [ESP + 0x68]         ; 0057f1e4
    MOVSD ES:EDI,ESI                    ; 0057f1e8
    MOVSD ES:EDI,ESI                    ; 0057f1e9
    MOVSD ES:EDI,ESI                    ; 0057f1ea
    MOV EAX,dword ptr [ESP + 0x148]     ; 0057f1eb
    FLD float ptr [ESP + 0x88]          ; 0057f1f2
    FMUL float ptr [EAX + 0x27b8]       ; 0057f1f9
    FLD float ptr [ESP + 0x8c]          ; 0057f1ff
    FMUL float ptr [EAX + 0x27b8]       ; 0057f206
    FLD float ptr [ESP + 0x90]          ; 0057f20c
    FMUL float ptr [EAX + 0x27b8]       ; 0057f213
    LEA EBX,[ESP + 0x4c]                ; 0057f219
    LEA EDI,[ESP + 0x100]               ; 0057f21d
    LEA ESI,[ESP + 0xd0]                ; 0057f224
    FXCH ST2                            ; 0057f22b
    FSTP float ptr [ESP + 0xd0]         ; 0057f22d
    FSTP float ptr [ESP + 0xd4]         ; 0057f234
    FSTP float ptr [ESP + 0xd8]         ; 0057f23b
    LEA EAX,[ESP + 0x100]               ; 0057f242
    MOVSD ES:EDI,ESI                    ; 0057f249
    MOVSD ES:EDI,ESI                    ; 0057f24a
    MOVSD ES:EDI,ESI                    ; 0057f24b
    CMP EBX,EAX                         ; 0057f24c
    JZ 0x0057f271                       ; 0057f24e
        ;   XREF to: 0057f271 (CONDITIONAL_JUMP)  ; LAB_0057f271
    MOV EAX,dword ptr [ESP + 0x100]     ; 0057f250
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057f257
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057f25b
    MOV dword ptr [ESP + 0x50],EAX      ; 0057f262
    MOV EAX,dword ptr [ESP + 0x108]     ; 0057f266
    MOV dword ptr [ESP + 0x54],EAX      ; 0057f26d
    LEA EBX,[ESP + 0xac]                ; 0057f271
        ;   Label: LAB_0057f271
    LEA EAX,[ESP + 0x4c]                ; 0057f278
    MOV EBP,dword ptr [0x005f2afc]      ; 0057f27c | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057f282
    FMUL float ptr [0x005e6380]         ; 0057f284 | DAT_005e6380
    FISTP dword ptr [EBX]               ; 0057f28a
    FLD float ptr [EAX + 0x4]           ; 0057f28c
    FMUL float ptr [0x005e6380]         ; 0057f28f | DAT_005e6380
    FISTP dword ptr [EBX + 0x4]         ; 0057f295
    FLD float ptr [EAX + 0x8]           ; 0057f298
    FMUL float ptr [0x005e6380]         ; 0057f29b | DAT_005e6380
    FISTP dword ptr [EBX + 0x8]         ; 0057f2a1
    LEA EAX,[ESP + 0xac]                ; 0057f2a4
    PUSH EAX                            ; 0057f2ab
    MOV EAX,dword ptr [EBP]             ; 0057f2ac | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0057f2af
    PUSH EAX                            ; 0057f2b4
    CALL engine_special.cpp_FUN_005632a3 ; 0057f2b5
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0057f2ba | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0057f2bf | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x20],0xffff   ; 0057f2c1
    MOV EBX,dword ptr [EAX]             ; 0057f2c8 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x24],0x0      ; 0057f2ca
    MOV EBX,dword ptr [EAX]             ; 0057f2d1 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x28],0x0      ; 0057f2d3
    MOV EDX,dword ptr [EAX]             ; 0057f2da | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x50],0xffff   ; 0057f2dc
    MOV EDX,dword ptr [EAX]             ; 0057f2e3 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x54],0x0      ; 0057f2e5
    MOV EBX,dword ptr [EAX]             ; 0057f2ec | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x58],0x0      ; 0057f2ee
    MOV EBX,dword ptr [EAX]             ; 0057f2f5 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x80],0xffff   ; 0057f2f7
    MOV EBX,dword ptr [EAX]             ; 0057f301 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x84],0x0      ; 0057f303
    MOV EBX,dword ptr [EAX]             ; 0057f30d | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x88],0x0      ; 0057f30f
    MOV EBX,dword ptr [EAX]             ; 0057f319 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0057f31b
    MOV EDX,dword ptr [EAX]             ; 0057f325 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xb4],0x0      ; 0057f327
    MOV EBX,dword ptr [EAX]             ; 0057f331 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb8],0x0      ; 0057f333
    MOV EBX,dword ptr [EAX]             ; 0057f33d | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x2c],0x4000   ; 0057f33f
    MOV EBX,dword ptr [EAX]             ; 0057f346 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x5c],0x4000   ; 0057f348
    MOV EBX,dword ptr [EAX]             ; 0057f34f | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x8c],0x4000   ; 0057f351
    MOV EDX,dword ptr [EAX]             ; 0057f35b | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0057f35d
    MOV EBX,dword ptr [EAX]             ; 0057f367 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x18],0x80000  ; 0057f369
    MOV EDX,dword ptr [EAX]             ; 0057f370 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0057f372
    MOV EBX,dword ptr [EAX]             ; 0057f379 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0057f37b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0057f37e
    MOV EBX,dword ptr [EAX]             ; 0057f385 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0057f387
    MOV EBX,dword ptr [EAX]             ; 0057f38e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x78],0xf80000 ; 0057f390
    MOV EBX,dword ptr [EAX]             ; 0057f397 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0057f399
    MOV EBX,dword ptr [EAX]             ; 0057f3a0 | DAT_01bdd7e4
    MOV EDX,0x4                         ; 0057f3a2
    MOV dword ptr [EBX + 0xa8],0x80000  ; 0057f3a7
    PUSH 0x607240                       ; 0057f3b1 | DAT_00607240
    MOV EBX,dword ptr [EAX]             ; 0057f3b6 | DAT_01bdd7e4
    XOR ECX,ECX                         ; 0057f3b8
    PUSH EAX                            ; 0057f3ba | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xac],0x80000  ; 0057f3bb
    MOV EBX,0x3                         ; 0057f3c5
    MOV dword ptr [ESP + 0xc],EDX       ; 0057f3ca
    MOV dword ptr [ESP + 0x1c],ECX      ; 0057f3ce
    MOV dword ptr [ESP + 0x18],ECX      ; 0057f3d2
    MOV dword ptr [ESP + 0x14],ECX      ; 0057f3d6
    MOV dword ptr [ESP + 0x10],ECX      ; 0057f3da
    MOV dword ptr [ESP + 0x20],ECX      ; 0057f3de
    MOV EDX,0x1                         ; 0057f3e2
    MOV ECX,0x2                         ; 0057f3e7
    MOV dword ptr [ESP + 0x2c],EBX      ; 0057f3ec
    MOV dword ptr [ESP + 0x24],EDX      ; 0057f3f0
    MOV dword ptr [ESP + 0x28],ECX      ; 0057f3f4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0057f3f8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0057f3fd
    PUSH 0x1                            ; 0057f400
    MOV ESI,dword ptr [0x005f2afc]      ; 0057f402 | DAT_005f2afc
    PUSH ESI                            ; 0057f408 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0057f409
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0057f40e
    MOV EAX,ESP                         ; 0057f411
    PUSH EAX                            ; 0057f413
    MOV EDI,dword ptr [0x005f2afc]      ; 0057f414 | DAT_005f2afc
    PUSH EDI                            ; 0057f41a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0057f41b
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0057f420
    XOR EBP,EBP                         ; 0057f423
    PUSH EBP                            ; 0057f425
    MOV EBP,dword ptr [0x005f2afc]      ; 0057f426 | DAT_005f2afc
    PUSH EBP                            ; 0057f42c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0057f42d
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0057f432
    ADD ESP,0x134                       ; 0057f435
    POP EBP                             ; 0057f43b
    POP EDI                             ; 0057f43c
    POP ESI                             ; 0057f43d
    POP EBX                             ; 0057f43e
    RET                                 ; 0057f43f

