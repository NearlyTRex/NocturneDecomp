; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_tawiscar_cpp_FUN_00595760(int param_1,float *param_2)
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
;   unkafter_tawiscar.cpp_FUN_00595d20 at 00595e14
;
; Referenced Globals:
;   undefined4 DAT_005e7500
;   undefined4 DAT_005e752c
;   undefined4 DAT_005e7530
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00607390
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

    PUSH EBX                            ; 00595760
        ;   Label: unkafter_tawiscar.cpp_FUN_00595760
    PUSH ESI                            ; 00595761
    PUSH EDI                            ; 00595762
    PUSH EBP                            ; 00595763
    SUB ESP,0x134                       ; 00595764
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0059576a
    FLD float ptr [EBP]                 ; 00595771
    FLD float ptr [EBP + 0x4]           ; 00595774
    LEA EDI,[ESP + 0x10c]               ; 00595777
    MOV EAX,[0x005e752c]                ; 0059577e | DAT_005e752c
    LEA ESI,[ESP + 0xf4]                ; 00595783
    MOV dword ptr [ESP + 0x130],EAX     ; 0059578a
    MOV EAX,[0x005e7530]                ; 00595791 | DAT_005e7530
    FXCH                                ; 00595796
    FADD float ptr [ESP + 0x130]        ; 00595798
    MOV dword ptr [ESP + 0x128],EAX     ; 0059579f
    FSTP float ptr [ESP + 0xf4]         ; 005957a6
    MOV EAX,dword ptr [EBP + 0x8]       ; 005957ad
    FADD float ptr [ESP + 0x128]        ; 005957b0
    MOV dword ptr [ESP + 0xfc],EAX      ; 005957b7
    FSTP float ptr [ESP + 0xf8]         ; 005957be
    MOVSD ES:EDI,ESI                    ; 005957c5
    MOVSD ES:EDI,ESI                    ; 005957c6
    MOVSD ES:EDI,ESI                    ; 005957c7
    MOV EAX,dword ptr [ESP + 0x148]     ; 005957c8
    FLD float ptr [ESP + 0x10c]         ; 005957cf
    FMUL float ptr [EAX + 0x27b8]       ; 005957d6
    FLD float ptr [ESP + 0x110]         ; 005957dc
    FMUL float ptr [EAX + 0x27b8]       ; 005957e3
    FLD float ptr [ESP + 0x114]         ; 005957e9
    FMUL float ptr [EAX + 0x27b8]       ; 005957f0
    LEA EDX,[ESP + 0x4c]                ; 005957f6
    LEA EDI,[ESP + 0x7c]                ; 005957fa
    LEA ESI,[ESP + 0x70]                ; 005957fe
    FXCH ST2                            ; 00595802
    FSTP float ptr [ESP + 0x70]         ; 00595804
    FSTP float ptr [ESP + 0x74]         ; 00595808
    FSTP float ptr [ESP + 0x78]         ; 0059580c
    LEA EAX,[ESP + 0x7c]                ; 00595810
    MOVSD ES:EDI,ESI                    ; 00595814
    MOVSD ES:EDI,ESI                    ; 00595815
    MOVSD ES:EDI,ESI                    ; 00595816
    CMP EDX,EAX                         ; 00595817
    JZ 0x00595839                       ; 00595819
        ;   XREF to: 00595839 (CONDITIONAL_JUMP)  ; LAB_00595839
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0059581b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0059581f
    MOV EAX,dword ptr [ESP + 0x80]      ; 00595823
    MOV dword ptr [ESP + 0x50],EAX      ; 0059582a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0059582e
    MOV dword ptr [ESP + 0x54],EAX      ; 00595835
    LEA EBX,[ESP + 0x34]                ; 00595839
        ;   Label: LAB_00595839
    LEA EAX,[ESP + 0x4c]                ; 0059583d
    MOV EDX,dword ptr [0x005f2afc]      ; 00595841 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00595847
    FMUL float ptr [0x005e7500]         ; 00595849 | DAT_005e7500
    FISTP dword ptr [EBX]               ; 0059584f
    FLD float ptr [EAX + 0x4]           ; 00595851
    FMUL float ptr [0x005e7500]         ; 00595854 | DAT_005e7500
    FISTP dword ptr [EBX + 0x4]         ; 0059585a
    FLD float ptr [EAX + 0x8]           ; 0059585d
    FMUL float ptr [0x005e7500]         ; 00595860 | DAT_005e7500
    FISTP dword ptr [EBX + 0x8]         ; 00595866
    LEA EAX,[ESP + 0x34]                ; 00595869
    PUSH EAX                            ; 0059586d
    MOV EAX,dword ptr [EDX]             ; 0059586e | DAT_01bdd7e4
    PUSH EAX                            ; 00595870
    LEA EDI,[ESP + 0x48]                ; 00595871
    LEA ESI,[ESP + 0x30]                ; 00595875
    CALL engine_special.cpp_FUN_005632a3 ; 00595879
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e752c]          ; 0059587e | DAT_005e752c
    FLD float ptr [EBP]                 ; 00595884
    FLD float ptr [EBP + 0x4]           ; 00595887
    MOV EAX,[0x005e7530]                ; 0059588a | DAT_005e7530
    ADD ESP,0x8                         ; 0059588f
    FXCH ST2                            ; 00595892
    FCHS                                ; 00595894
    MOV dword ptr [ESP + 0x12c],EAX     ; 00595896
    FADDP                               ; 0059589d
    MOV EAX,dword ptr [EBP + 0x8]       ; 0059589f
    FSTP float ptr [ESP + 0x28]         ; 005958a2
    FADD float ptr [ESP + 0x12c]        ; 005958a6
    MOV dword ptr [ESP + 0x30],EAX      ; 005958ad
    FSTP float ptr [ESP + 0x2c]         ; 005958b1
    MOVSD ES:EDI,ESI                    ; 005958b5
    MOVSD ES:EDI,ESI                    ; 005958b6
    MOVSD ES:EDI,ESI                    ; 005958b7
    MOV EAX,dword ptr [ESP + 0x148]     ; 005958b8
    FLD float ptr [ESP + 0x40]          ; 005958bf
    FMUL float ptr [EAX + 0x27b8]       ; 005958c3
    FLD float ptr [ESP + 0x44]          ; 005958c9
    FMUL float ptr [EAX + 0x27b8]       ; 005958cd
    FLD float ptr [ESP + 0x48]          ; 005958d3
    FMUL float ptr [EAX + 0x27b8]       ; 005958d7
    LEA EDX,[ESP + 0x4c]                ; 005958dd
    LEA EDI,[ESP + 0xa0]                ; 005958e1
    LEA ESI,[ESP + 0xb8]                ; 005958e8
    FXCH ST2                            ; 005958ef
    FSTP float ptr [ESP + 0xb8]         ; 005958f1
    FSTP float ptr [ESP + 0xbc]         ; 005958f8
    FSTP float ptr [ESP + 0xc0]         ; 005958ff
    LEA EAX,[ESP + 0xa0]                ; 00595906
    MOVSD ES:EDI,ESI                    ; 0059590d
    MOVSD ES:EDI,ESI                    ; 0059590e
    MOVSD ES:EDI,ESI                    ; 0059590f
    CMP EDX,EAX                         ; 00595910
    JZ 0x00595935                       ; 00595912
        ;   XREF to: 00595935 (CONDITIONAL_JUMP)  ; LAB_00595935
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00595914
    MOV dword ptr [ESP + 0x4c],EAX      ; 0059591b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059591f
    MOV dword ptr [ESP + 0x50],EAX      ; 00595926
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0059592a
    MOV dword ptr [ESP + 0x54],EAX      ; 00595931
    LEA EBX,[ESP + 0x118]               ; 00595935
        ;   Label: LAB_00595935
    LEA EAX,[ESP + 0x4c]                ; 0059593c
    MOV EDX,dword ptr [0x005f2afc]      ; 00595940 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00595946
    FMUL float ptr [0x005e7500]         ; 00595948 | DAT_005e7500
    FISTP dword ptr [EBX]               ; 0059594e
    FLD float ptr [EAX + 0x4]           ; 00595950
    FMUL float ptr [0x005e7500]         ; 00595953 | DAT_005e7500
    FISTP dword ptr [EBX + 0x4]         ; 00595959
    FLD float ptr [EAX + 0x8]           ; 0059595c
    FMUL float ptr [0x005e7500]         ; 0059595f | DAT_005e7500
    FISTP dword ptr [EBX + 0x8]         ; 00595965
    LEA EAX,[ESP + 0x118]               ; 00595968
    PUSH EAX                            ; 0059596f
    MOV EAX,dword ptr [EDX]             ; 00595970 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 00595972
    PUSH EAX                            ; 00595975
    LEA EDI,[ESP + 0xcc]                ; 00595976
    LEA ESI,[ESP + 0x9c]                ; 0059597d
    CALL engine_special.cpp_FUN_005632a3 ; 00595984
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e7530]          ; 00595989 | DAT_005e7530
    FLD float ptr [0x005e752c]          ; 0059598f | DAT_005e752c
    FLD float ptr [EBP + 0x4]           ; 00595995
    ADD ESP,0x8                         ; 00595998
    FXCH ST2                            ; 0059599b
    FCHS                                ; 0059599d
    MOV EAX,dword ptr [EBP + 0x8]       ; 0059599f
    FXCH                                ; 005959a2
    FCHS                                ; 005959a4
    MOV dword ptr [ESP + 0x9c],EAX      ; 005959a6
    FADD float ptr [EBP]                ; 005959ad
    FXCH ST2                            ; 005959b0
    FADDP                               ; 005959b2
    FXCH                                ; 005959b4
    FSTP float ptr [ESP + 0x94]         ; 005959b6
    FSTP float ptr [ESP + 0x98]         ; 005959bd
    MOVSD ES:EDI,ESI                    ; 005959c4
    MOVSD ES:EDI,ESI                    ; 005959c5
    MOVSD ES:EDI,ESI                    ; 005959c6
    MOV EAX,dword ptr [ESP + 0x148]     ; 005959c7
    FLD float ptr [ESP + 0xc4]          ; 005959ce
    FMUL float ptr [EAX + 0x27b8]       ; 005959d5
    FLD float ptr [ESP + 0xc8]          ; 005959db
    FMUL float ptr [EAX + 0x27b8]       ; 005959e2
    FLD float ptr [ESP + 0xcc]          ; 005959e8
    FMUL float ptr [EAX + 0x27b8]       ; 005959ef
    LEA EDX,[ESP + 0x4c]                ; 005959f5
    LEA EDI,[ESP + 0xe8]                ; 005959f9
    LEA ESI,[ESP + 0xdc]                ; 00595a00
    FXCH ST2                            ; 00595a07
    FSTP float ptr [ESP + 0xdc]         ; 00595a09
    FSTP float ptr [ESP + 0xe0]         ; 00595a10
    FSTP float ptr [ESP + 0xe4]         ; 00595a17
    LEA EAX,[ESP + 0xe8]                ; 00595a1e
    MOVSD ES:EDI,ESI                    ; 00595a25
    MOVSD ES:EDI,ESI                    ; 00595a26
    MOVSD ES:EDI,ESI                    ; 00595a27
    CMP EDX,EAX                         ; 00595a28
    JZ 0x00595a4d                       ; 00595a2a
        ;   XREF to: 00595a4d (CONDITIONAL_JUMP)  ; LAB_00595a4d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00595a2c
    MOV dword ptr [ESP + 0x4c],EAX      ; 00595a33
    MOV EAX,dword ptr [ESP + 0xec]      ; 00595a37
    MOV dword ptr [ESP + 0x50],EAX      ; 00595a3e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00595a42
    MOV dword ptr [ESP + 0x54],EAX      ; 00595a49
    LEA EBX,[ESP + 0x58]                ; 00595a4d
        ;   Label: LAB_00595a4d
    LEA EAX,[ESP + 0x4c]                ; 00595a51
    MOV EDX,dword ptr [0x005f2afc]      ; 00595a55 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00595a5b
    FMUL float ptr [0x005e7500]         ; 00595a5d | DAT_005e7500
    FISTP dword ptr [EBX]               ; 00595a63
    FLD float ptr [EAX + 0x4]           ; 00595a65
    FMUL float ptr [0x005e7500]         ; 00595a68 | DAT_005e7500
    FISTP dword ptr [EBX + 0x4]         ; 00595a6e
    FLD float ptr [EAX + 0x8]           ; 00595a71
    FMUL float ptr [0x005e7500]         ; 00595a74 | DAT_005e7500
    FISTP dword ptr [EBX + 0x8]         ; 00595a7a
    LEA EAX,[ESP + 0x58]                ; 00595a7d
    PUSH EAX                            ; 00595a81
    MOV EAX,dword ptr [EDX]             ; 00595a82 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 00595a84
    PUSH EAX                            ; 00595a87
    LEA EDI,[ESP + 0x90]                ; 00595a88
    LEA ESI,[ESP + 0x6c]                ; 00595a8f
    CALL engine_special.cpp_FUN_005632a3 ; 00595a93
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e7530]          ; 00595a98 | DAT_005e7530
    FLD float ptr [0x005e752c]          ; 00595a9e | DAT_005e752c
    FLD float ptr [EBP + 0x4]           ; 00595aa4
    ADD ESP,0x8                         ; 00595aa7
    MOV EAX,dword ptr [EBP + 0x8]       ; 00595aaa
    FXCH ST2                            ; 00595aad
    FCHS                                ; 00595aaf
    MOV dword ptr [ESP + 0x6c],EAX      ; 00595ab1
    FXCH                                ; 00595ab5
    FADD float ptr [EBP]                ; 00595ab7
    FXCH ST2                            ; 00595aba
    FADDP                               ; 00595abc
    FXCH                                ; 00595abe
    FSTP float ptr [ESP + 0x64]         ; 00595ac0
    FSTP float ptr [ESP + 0x68]         ; 00595ac4
    MOVSD ES:EDI,ESI                    ; 00595ac8
    MOVSD ES:EDI,ESI                    ; 00595ac9
    MOVSD ES:EDI,ESI                    ; 00595aca
    MOV EAX,dword ptr [ESP + 0x148]     ; 00595acb
    FLD float ptr [ESP + 0x88]          ; 00595ad2
    FMUL float ptr [EAX + 0x27b8]       ; 00595ad9
    FLD float ptr [ESP + 0x8c]          ; 00595adf
    FMUL float ptr [EAX + 0x27b8]       ; 00595ae6
    FLD float ptr [ESP + 0x90]          ; 00595aec
    FMUL float ptr [EAX + 0x27b8]       ; 00595af3
    LEA EBX,[ESP + 0x4c]                ; 00595af9
    LEA EDI,[ESP + 0x100]               ; 00595afd
    LEA ESI,[ESP + 0xd0]                ; 00595b04
    FXCH ST2                            ; 00595b0b
    FSTP float ptr [ESP + 0xd0]         ; 00595b0d
    FSTP float ptr [ESP + 0xd4]         ; 00595b14
    FSTP float ptr [ESP + 0xd8]         ; 00595b1b
    LEA EAX,[ESP + 0x100]               ; 00595b22
    MOVSD ES:EDI,ESI                    ; 00595b29
    MOVSD ES:EDI,ESI                    ; 00595b2a
    MOVSD ES:EDI,ESI                    ; 00595b2b
    CMP EBX,EAX                         ; 00595b2c
    JZ 0x00595b51                       ; 00595b2e
        ;   XREF to: 00595b51 (CONDITIONAL_JUMP)  ; LAB_00595b51
    MOV EAX,dword ptr [ESP + 0x100]     ; 00595b30
    MOV dword ptr [ESP + 0x4c],EAX      ; 00595b37
    MOV EAX,dword ptr [ESP + 0x104]     ; 00595b3b
    MOV dword ptr [ESP + 0x50],EAX      ; 00595b42
    MOV EAX,dword ptr [ESP + 0x108]     ; 00595b46
    MOV dword ptr [ESP + 0x54],EAX      ; 00595b4d
    LEA EBX,[ESP + 0xac]                ; 00595b51
        ;   Label: LAB_00595b51
    LEA EAX,[ESP + 0x4c]                ; 00595b58
    MOV EBP,dword ptr [0x005f2afc]      ; 00595b5c | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00595b62
    FMUL float ptr [0x005e7500]         ; 00595b64 | DAT_005e7500
    FISTP dword ptr [EBX]               ; 00595b6a
    FLD float ptr [EAX + 0x4]           ; 00595b6c
    FMUL float ptr [0x005e7500]         ; 00595b6f | DAT_005e7500
    FISTP dword ptr [EBX + 0x4]         ; 00595b75
    FLD float ptr [EAX + 0x8]           ; 00595b78
    FMUL float ptr [0x005e7500]         ; 00595b7b | DAT_005e7500
    FISTP dword ptr [EBX + 0x8]         ; 00595b81
    LEA EAX,[ESP + 0xac]                ; 00595b84
    PUSH EAX                            ; 00595b8b
    MOV EAX,dword ptr [EBP]             ; 00595b8c | DAT_01bdd7e4
    ADD EAX,0x90                        ; 00595b8f
    PUSH EAX                            ; 00595b94
    CALL engine_special.cpp_FUN_005632a3 ; 00595b95
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 00595b9a | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 00595b9f | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x20],0xffff   ; 00595ba1
    MOV EBX,dword ptr [EAX]             ; 00595ba8 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x24],0x0      ; 00595baa
    MOV EBX,dword ptr [EAX]             ; 00595bb1 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x28],0x0      ; 00595bb3
    MOV EDX,dword ptr [EAX]             ; 00595bba | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x50],0xffff   ; 00595bbc
    MOV EDX,dword ptr [EAX]             ; 00595bc3 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x54],0x0      ; 00595bc5
    MOV EBX,dword ptr [EAX]             ; 00595bcc | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x58],0x0      ; 00595bce
    MOV EBX,dword ptr [EAX]             ; 00595bd5 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x80],0xffff   ; 00595bd7
    MOV EBX,dword ptr [EAX]             ; 00595be1 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x84],0x0      ; 00595be3
    MOV EBX,dword ptr [EAX]             ; 00595bed | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x88],0x0      ; 00595bef
    MOV EBX,dword ptr [EAX]             ; 00595bf9 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb0],0xffff   ; 00595bfb
    MOV EDX,dword ptr [EAX]             ; 00595c05 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xb4],0x0      ; 00595c07
    MOV EBX,dword ptr [EAX]             ; 00595c11 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb8],0x0      ; 00595c13
    MOV EBX,dword ptr [EAX]             ; 00595c1d | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x2c],0x4000   ; 00595c1f
    MOV EBX,dword ptr [EAX]             ; 00595c26 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x5c],0x4000   ; 00595c28
    MOV EBX,dword ptr [EAX]             ; 00595c2f | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x8c],0x4000   ; 00595c31
    MOV EDX,dword ptr [EAX]             ; 00595c3b | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xbc],0x4000   ; 00595c3d
    MOV EBX,dword ptr [EAX]             ; 00595c47 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x18],0x80000  ; 00595c49
    MOV EDX,dword ptr [EAX]             ; 00595c50 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 00595c52
    MOV EBX,dword ptr [EAX]             ; 00595c59 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 00595c5b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 00595c5e
    MOV EBX,dword ptr [EAX]             ; 00595c65 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 00595c67
    MOV EBX,dword ptr [EAX]             ; 00595c6e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x78],0xf80000 ; 00595c70
    MOV EBX,dword ptr [EAX]             ; 00595c77 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x7c],0x80000  ; 00595c79
    MOV EBX,dword ptr [EAX]             ; 00595c80 | DAT_01bdd7e4
    MOV EDX,0x4                         ; 00595c82
    MOV dword ptr [EBX + 0xa8],0x80000  ; 00595c87
    PUSH 0x607390                       ; 00595c91 | DAT_00607390
    MOV EBX,dword ptr [EAX]             ; 00595c96 | DAT_01bdd7e4
    XOR ECX,ECX                         ; 00595c98
    PUSH EAX                            ; 00595c9a | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xac],0x80000  ; 00595c9b
    MOV EBX,0x3                         ; 00595ca5
    MOV dword ptr [ESP + 0xc],EDX       ; 00595caa
    MOV dword ptr [ESP + 0x1c],ECX      ; 00595cae
    MOV dword ptr [ESP + 0x18],ECX      ; 00595cb2
    MOV dword ptr [ESP + 0x14],ECX      ; 00595cb6
    MOV dword ptr [ESP + 0x10],ECX      ; 00595cba
    MOV dword ptr [ESP + 0x20],ECX      ; 00595cbe
    MOV EDX,0x1                         ; 00595cc2
    MOV ECX,0x2                         ; 00595cc7
    MOV dword ptr [ESP + 0x2c],EBX      ; 00595ccc
    MOV dword ptr [ESP + 0x24],EDX      ; 00595cd0
    MOV dword ptr [ESP + 0x28],ECX      ; 00595cd4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00595cd8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00595cdd
    PUSH 0x1                            ; 00595ce0
    MOV ESI,dword ptr [0x005f2afc]      ; 00595ce2 | DAT_005f2afc
    PUSH ESI                            ; 00595ce8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00595ce9
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00595cee
    MOV EAX,ESP                         ; 00595cf1
    PUSH EAX                            ; 00595cf3
    MOV EDI,dword ptr [0x005f2afc]      ; 00595cf4 | DAT_005f2afc
    PUSH EDI                            ; 00595cfa | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 00595cfb
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00595d00
    XOR EBP,EBP                         ; 00595d03
    PUSH EBP                            ; 00595d05
    MOV EBP,dword ptr [0x005f2afc]      ; 00595d06 | DAT_005f2afc
    PUSH EBP                            ; 00595d0c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00595d0d
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00595d12
    ADD ESP,0x134                       ; 00595d15
    POP EBP                             ; 00595d1b
    POP EDI                             ; 00595d1c
    POP ESI                             ; 00595d1d
    POP EBX                             ; 00595d1e
    RET                                 ; 00595d1f

