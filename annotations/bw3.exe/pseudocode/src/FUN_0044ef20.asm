; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044ef20(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)
;
; Local Variables:
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005376e0 at 0053782a
;
; Referenced Globals:
;   undefined4 DAT_005b9f5e
;   undefined4 DAT_005ddfbc
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   undefined4 DAT_01c6e318
;   ... and 1 more
;
; Called Functions:
;   FUN_0046cf30
;   FUN_005632a3
;   FUN_005a3120
;   thunk_FUN_004e5df0
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ef20
        ;   Label: FUN_0044ef20
    PUSH ESI                            ; 0044ef21
    PUSH EDI                            ; 0044ef22
    PUSH EBP                            ; 0044ef23
    SUB ESP,0x120                       ; 0044ef24
    MOV EBX,dword ptr [ESP + 0x134]     ; 0044ef2a
    MOV EBP,dword ptr [ESP + 0x138]     ; 0044ef31
    MOV EDI,dword ptr [ESP + 0x140]     ; 0044ef38
    MOV ESI,dword ptr [ESP + 0x144]     ; 0044ef3f
    MOV EDX,dword ptr [0x005f2afc]      ; 0044ef46 | DAT_005f2afc
    PUSH EDX                            ; 0044ef4c | DAT_01bdd7e4
    CALL thunk_FUN_004e5df0             ; 0044ef4d
        ;   XREF to: 0046d070 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5df0()
    FLD float ptr [EBX + 0x4]           ; 0044ef52
    FSUB float ptr [EBP]                ; 0044ef55
    FLD double ptr [0x005b9f5e]         ; 0044ef58 | DAT_005b9f5e
    FXCH                                ; 0044ef5e
    FMUL ST1                            ; 0044ef60
    FLD float ptr [EBX + 0xc]           ; 0044ef62
    FLD float ptr [EBX + 0x8]           ; 0044ef65
    FSUB float ptr [EBP + 0x4]          ; 0044ef68
    FXCH                                ; 0044ef6b
    FSUB float ptr [EBP + 0x8]          ; 0044ef6d
    FXCH                                ; 0044ef70
    FMUL ST3                            ; 0044ef72
    FXCH                                ; 0044ef74
    FMULP ST3                           ; 0044ef76
    MOV EAX,dword ptr [EBX + 0x178]     ; 0044ef78
    ADD ESP,0x4                         ; 0044ef7e
    MOV [0x01c6e2fc],EAX                ; 0044ef81 | DAT_01c6e2fc
    MOV EAX,dword ptr [EBX + 0x17c]     ; 0044ef86
    PUSH 0x0                            ; 0044ef8c
    MOV [0x01c6e300],EAX                ; 0044ef8e | DAT_01c6e300
    MOV EAX,dword ptr [EBX + 0x180]     ; 0044ef93
    MOV ECX,dword ptr [ESP + 0x140]     ; 0044ef99
    MOV [0x01c6e304],EAX                ; 0044efa0 | DAT_01c6e304
    MOV EAX,dword ptr [EBX + 0x184]     ; 0044efa5
    PUSH ECX                            ; 0044efab
    MOV [0x01c6e308],EAX                ; 0044efac | DAT_01c6e308
    MOV EAX,dword ptr [EBX + 0x188]     ; 0044efb1
    FXCH                                ; 0044efb7
    CALL FUN_005a3120                   ; 0044efb9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV [0x01c6e30c],EAX                ; 0044efbe | DAT_01c6e30c
    MOV EAX,dword ptr [EBX + 0x18c]     ; 0044efc3
    FXCH                                ; 0044efc9
    CALL FUN_005a3120                   ; 0044efcb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV [0x01c6e310],EAX                ; 0044efd0 | DAT_01c6e310
    MOV EAX,dword ptr [EBX + 0x190]     ; 0044efd5
    FXCH ST2                            ; 0044efdb
    CALL FUN_005a3120                   ; 0044efdd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV [0x01c6e314],EAX                ; 0044efe2 | DAT_01c6e314
    MOV EAX,dword ptr [EBX + 0x194]     ; 0044efe7
    FXCH                                ; 0044efed
    FISTP dword ptr [0x01c6e2cc]        ; 0044efef | DAT_01c6e2cc
    MOV [0x01c6e318],EAX                ; 0044eff5 | DAT_01c6e318
    MOV EAX,dword ptr [EBX + 0x198]     ; 0044effa
    MOV EBX,dword ptr [0x005f2afc]      ; 0044f000 | DAT_005f2afc
    FXCH                                ; 0044f006
    FISTP dword ptr [0x01c6e2d0]        ; 0044f008 | DAT_01c6e2d0
    PUSH EBX                            ; 0044f00e | DAT_01bdd7e4
    FISTP dword ptr [0x01c6e2d4]        ; 0044f00f | DAT_01c6e2d4
    MOV [0x01c6e31c],EAX                ; 0044f015 | DAT_01c6e31c
    CALL FUN_0046cf30                   ; 0044f01a
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 0044f01f
    MOV EAX,dword ptr [ESI]             ; 0044f022
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044f024
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044f02b
    MOV dword ptr [ESP + 0xc8],EAX      ; 0044f02e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044f035
    MOV dword ptr [ESP + 0xdc],EAX      ; 0044f038
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0044f03f
    MOV dword ptr [ESP + 0x18],EAX      ; 0044f046
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0044f04a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044f051
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0044f055
    LEA EBX,[ESP + 0x48]                ; 0044f05c
    MOV dword ptr [ESP + 0x20],EAX      ; 0044f060
    LEA EAX,[ESP + 0x18]                ; 0044f064
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f068 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044f06e
    FMUL float ptr [0x005ddfbc]         ; 0044f070 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f076
    FLD float ptr [EAX + 0x4]           ; 0044f078
    FMUL float ptr [0x005ddfbc]         ; 0044f07b | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f081
    FLD float ptr [EAX + 0x8]           ; 0044f084
    FMUL float ptr [0x005ddfbc]         ; 0044f087 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f08d
    LEA EAX,[ESP + 0x48]                ; 0044f090
    PUSH EAX                            ; 0044f094
    MOV EAX,dword ptr [EDX]             ; 0044f095 | DAT_01bdd7e4
    ADD EAX,0x124e00                    ; 0044f097
    PUSH EAX                            ; 0044f09c
    CALL FUN_005632a3                   ; 0044f09d
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0044f0a2
    MOV EAX,dword ptr [EDI]             ; 0044f0a5
    MOV dword ptr [ESP + 0xc0],EAX      ; 0044f0a7
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044f0ae
    MOV dword ptr [ESP + 0xcc],EAX      ; 0044f0b1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044f0b8
    MOV dword ptr [ESP + 0xd0],EAX      ; 0044f0bb
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0044f0c2
    MOV dword ptr [ESP + 0x54],EAX      ; 0044f0c9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044f0cd
    MOV dword ptr [ESP + 0x58],EAX      ; 0044f0d4
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044f0d8
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f0df | DAT_005f2afc
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044f0e5
    LEA EBX,[ESP + 0x60]                ; 0044f0e9
    LEA EAX,[ESP + 0x54]                ; 0044f0ed
    FLD float ptr [EAX]                 ; 0044f0f1
    FMUL float ptr [0x005ddfbc]         ; 0044f0f3 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f0f9
    FLD float ptr [EAX + 0x4]           ; 0044f0fb
    FMUL float ptr [0x005ddfbc]         ; 0044f0fe | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f104
    FLD float ptr [EAX + 0x8]           ; 0044f107
    FMUL float ptr [0x005ddfbc]         ; 0044f10a | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f110
    LEA EAX,[ESP + 0x60]                ; 0044f113
    PUSH EAX                            ; 0044f117
    MOV EAX,dword ptr [EDX]             ; 0044f118 | DAT_01bdd7e4
    ADD EAX,0x124e30                    ; 0044f11a
    PUSH EAX                            ; 0044f11f
    CALL FUN_005632a3                   ; 0044f120
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0044f125
    MOV EAX,dword ptr [EDI]             ; 0044f128
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044f12a
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044f131
    MOV dword ptr [ESP + 0xe4],EAX      ; 0044f134
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044f13b
    MOV dword ptr [ESP + 0x108],EAX     ; 0044f13e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044f145
    MOV dword ptr [ESP + 0xa8],EAX      ; 0044f14c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0044f153
    MOV dword ptr [ESP + 0xac],EAX      ; 0044f15a
    MOV EAX,dword ptr [ESP + 0x108]     ; 0044f161
    LEA EBX,[ESP + 0x3c]                ; 0044f168
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044f16c
    LEA EAX,[ESP + 0xa8]                ; 0044f173
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f17a | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044f180
    FMUL float ptr [0x005ddfbc]         ; 0044f182 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f188
    FLD float ptr [EAX + 0x4]           ; 0044f18a
    FMUL float ptr [0x005ddfbc]         ; 0044f18d | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f193
    FLD float ptr [EAX + 0x8]           ; 0044f196
    FMUL float ptr [0x005ddfbc]         ; 0044f199 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f19f
    LEA EAX,[ESP + 0x3c]                ; 0044f1a2
    PUSH EAX                            ; 0044f1a6
    MOV EAX,dword ptr [EDX]             ; 0044f1a7 | DAT_01bdd7e4
    ADD EAX,0x124e60                    ; 0044f1a9
    PUSH EAX                            ; 0044f1ae
    CALL FUN_005632a3                   ; 0044f1af
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0044f1b4
    MOV EAX,dword ptr [ESI]             ; 0044f1b7
    MOV dword ptr [ESP + 0x118],EAX     ; 0044f1b9
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044f1c0
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044f1c3
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044f1ca
    MOV dword ptr [ESP + 0x11c],EAX     ; 0044f1cd
    MOV EAX,dword ptr [ESP + 0x118]     ; 0044f1d4
    MOV dword ptr [ESP + 0xc],EAX       ; 0044f1db
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0044f1df
    MOV dword ptr [ESP + 0x10],EAX      ; 0044f1e6
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0044f1ea
    LEA EBX,[ESP + 0x24]                ; 0044f1f1
    MOV dword ptr [ESP + 0x14],EAX      ; 0044f1f5
    LEA EAX,[ESP + 0xc]                 ; 0044f1f9
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f1fd | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044f203
    FMUL float ptr [0x005ddfbc]         ; 0044f205 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f20b
    FLD float ptr [EAX + 0x4]           ; 0044f20d
    FMUL float ptr [0x005ddfbc]         ; 0044f210 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f216
    FLD float ptr [EAX + 0x8]           ; 0044f219
    FMUL float ptr [0x005ddfbc]         ; 0044f21c | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f222
    LEA EAX,[ESP + 0x24]                ; 0044f225
    PUSH EAX                            ; 0044f229
    MOV EAX,dword ptr [EDX]             ; 0044f22a | DAT_01bdd7e4
    ADD EAX,0x124e90                    ; 0044f22c
    PUSH EAX                            ; 0044f231
    CALL FUN_005632a3                   ; 0044f232
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0044f237
    MOV EAX,dword ptr [ESI]             ; 0044f23a
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044f23c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044f243
    MOV dword ptr [ESP + 0xf8],EAX      ; 0044f246
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044f24d
    MOV dword ptr [ESP + 0xe0],EAX      ; 0044f250
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0044f257
    MOV dword ptr [ESP + 0x90],EAX      ; 0044f25e
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0044f265
    MOV dword ptr [ESP + 0x94],EAX      ; 0044f26c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0044f273
    MOV EBX,ESP                         ; 0044f27a
    MOV dword ptr [ESP + 0x98],EAX      ; 0044f27c
    LEA EAX,[ESP + 0x90]                ; 0044f283
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f28a | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044f290
    FMUL float ptr [0x005ddfbc]         ; 0044f292 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f298
    FLD float ptr [EAX + 0x4]           ; 0044f29a
    FMUL float ptr [0x005ddfbc]         ; 0044f29d | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f2a3
    FLD float ptr [EAX + 0x8]           ; 0044f2a6
    FMUL float ptr [0x005ddfbc]         ; 0044f2a9 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f2af
    MOV EAX,ESP                         ; 0044f2b2
    PUSH EAX                            ; 0044f2b4
    MOV EAX,dword ptr [EDX]             ; 0044f2b5 | DAT_01bdd7e4
    ADD EAX,0x124ec0                    ; 0044f2b7
    PUSH EAX                            ; 0044f2bc
    CALL FUN_005632a3                   ; 0044f2bd
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0044f2c2
    MOV EAX,dword ptr [EDI]             ; 0044f2c5
    MOV dword ptr [ESP + 0xe8],EAX      ; 0044f2c7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044f2ce
    MOV dword ptr [ESP + 0xec],EAX      ; 0044f2d1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044f2d8
    MOV dword ptr [ESP + 0xf0],EAX      ; 0044f2db
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0044f2e2
    MOV dword ptr [ESP + 0x9c],EAX      ; 0044f2e9
    MOV EAX,dword ptr [ESP + 0xec]      ; 0044f2f0
    MOV dword ptr [ESP + 0xa0],EAX      ; 0044f2f7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0044f2fe
    LEA EBX,[ESP + 0x84]                ; 0044f305
    MOV dword ptr [ESP + 0xa4],EAX      ; 0044f30c
    LEA EAX,[ESP + 0x9c]                ; 0044f313
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f31a | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044f320
    FMUL float ptr [0x005ddfbc]         ; 0044f322 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f328
    FLD float ptr [EAX + 0x4]           ; 0044f32a
    FMUL float ptr [0x005ddfbc]         ; 0044f32d | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f333
    FLD float ptr [EAX + 0x8]           ; 0044f336
    FMUL float ptr [0x005ddfbc]         ; 0044f339 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f33f
    LEA EAX,[ESP + 0x84]                ; 0044f342
    PUSH EAX                            ; 0044f349
    MOV EAX,dword ptr [EDX]             ; 0044f34a | DAT_01bdd7e4
    ADD EAX,0x124ef0                    ; 0044f34c
    PUSH EAX                            ; 0044f351
    CALL FUN_005632a3                   ; 0044f352
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0044f357
    MOV EAX,dword ptr [EDI]             ; 0044f35a
    MOV dword ptr [ESP + 0x10c],EAX     ; 0044f35c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044f363
    MOV dword ptr [ESP + 0x110],EAX     ; 0044f366
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044f36d
    MOV dword ptr [ESP + 0x114],EAX     ; 0044f370
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0044f377
    MOV dword ptr [ESP + 0x30],EAX      ; 0044f37e
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044f382
    MOV dword ptr [ESP + 0x34],EAX      ; 0044f389
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044f38d
    LEA EBX,[ESP + 0xb4]                ; 0044f394
    MOV dword ptr [ESP + 0x38],EAX      ; 0044f39b
    LEA EAX,[ESP + 0x30]                ; 0044f39f
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f3a3 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044f3a9
    FMUL float ptr [0x005ddfbc]         ; 0044f3ab | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f3b1
    FLD float ptr [EAX + 0x4]           ; 0044f3b3
    FMUL float ptr [0x005ddfbc]         ; 0044f3b6 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f3bc
    FLD float ptr [EAX + 0x8]           ; 0044f3bf
    FMUL float ptr [0x005ddfbc]         ; 0044f3c2 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f3c8
    LEA EAX,[ESP + 0xb4]                ; 0044f3cb
    PUSH EAX                            ; 0044f3d2
    MOV EAX,dword ptr [EDX]             ; 0044f3d3 | DAT_01bdd7e4
    ADD EAX,0x124f20                    ; 0044f3d5
    PUSH EAX                            ; 0044f3da
    CALL FUN_005632a3                   ; 0044f3db
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0044f3e0
    MOV EAX,dword ptr [ESI]             ; 0044f3e3
    MOV dword ptr [ESP + 0xfc],EAX      ; 0044f3e5
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044f3ec
    MOV dword ptr [ESP + 0x100],EAX     ; 0044f3ef
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044f3f6
    MOV dword ptr [ESP + 0x104],EAX     ; 0044f3f9
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0044f400
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044f407
    MOV EAX,dword ptr [ESP + 0x100]     ; 0044f40b
    MOV dword ptr [ESP + 0x70],EAX      ; 0044f412
    MOV EAX,dword ptr [ESP + 0x104]     ; 0044f416
    LEA EBX,[ESP + 0x78]                ; 0044f41d
    MOV dword ptr [ESP + 0x74],EAX      ; 0044f421
    LEA EAX,[ESP + 0x6c]                ; 0044f425
    MOV EDX,dword ptr [0x005f2afc]      ; 0044f429 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044f42f
    FMUL float ptr [0x005ddfbc]         ; 0044f431 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f437
    FLD float ptr [EAX + 0x4]           ; 0044f439
    FMUL float ptr [0x005ddfbc]         ; 0044f43c | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f442
    FLD float ptr [EAX + 0x8]           ; 0044f445
    FMUL float ptr [0x005ddfbc]         ; 0044f448 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f44e
    LEA EAX,[ESP + 0x78]                ; 0044f451
    PUSH EAX                            ; 0044f455
    MOV EAX,dword ptr [EDX]             ; 0044f456 | DAT_01bdd7e4
    ADD EAX,0x124f50                    ; 0044f458
    PUSH EAX                            ; 0044f45d
    CALL FUN_005632a3                   ; 0044f45e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV EDX,0xffffffff                  ; 0044f463
    MOV EAX,0x124e00                    ; 0044f468
    ADD ESP,0x8                         ; 0044f46d
    MOV ECX,dword ptr [0x005f2afc]      ; 0044f470 | DAT_005f2afc
        ;   Label: LAB_0044f470
    MOV ECX,dword ptr [ECX]             ; 0044f476 | DAT_01bdd7e4
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 0044f478
    ADD EAX,0x30                        ; 0044f47c
    AND EDX,ESI                         ; 0044f47f
    CMP EAX,0x124f80                    ; 0044f481
    JNZ 0x0044f470                      ; 0044f486
        ;   XREF to: 0044f470 (CONDITIONAL_JUMP)  ; LAB_0044f470
    MOV EBX,0x1                         ; 0044f488
    TEST EDX,0x80000000                 ; 0044f48d
    JZ 0x0044f49c                       ; 0044f493
        ;   XREF to: 0044f49c (CONDITIONAL_JUMP)  ; LAB_0044f49c
    TEST DL,0xff                        ; 0044f495
    JZ 0x0044f49c                       ; 0044f498
        ;   XREF to: 0044f49c (CONDITIONAL_JUMP)  ; LAB_0044f49c
    XOR EBX,EBX                         ; 0044f49a
    MOV EDI,dword ptr [0x005f2afc]      ; 0044f49c | DAT_005f2afc
        ;   Label: LAB_0044f49c
    PUSH EDI                            ; 0044f4a2 | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0044f4a3
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0044f4a8
    MOV EBP,dword ptr [0x005f2afc]      ; 0044f4ab | DAT_005f2afc
    PUSH EBP                            ; 0044f4b1 | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0044f4b2
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0044f4b7
    MOV EAX,EBX                         ; 0044f4ba
    ADD ESP,0x120                       ; 0044f4bc
    POP EBP                             ; 0044f4c2
    POP EDI                             ; 0044f4c3
    POP ESI                             ; 0044f4c4
    POP EBX                             ; 0044f4c5
    RET                                 ; 0044f4c6

