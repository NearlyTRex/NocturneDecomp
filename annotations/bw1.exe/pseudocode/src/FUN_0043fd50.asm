; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043fd50(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
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
; undefined        Stack[-0xc0]:1  local_c0
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
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
;   FUN_00440640 at 00441457
;
; Referenced Globals:
;   undefined4 DAT_005d68b0
;   undefined4 DAT_01cc804c
;   undefined4 DAT_01cc8050
;
; Called Functions:
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fd50
        ;   Label: FUN_0043fd50
    PUSH ESI                            ; 0043fd51
    PUSH EDI                            ; 0043fd52
    PUSH EBP                            ; 0043fd53
    MOV EBP,ESP                         ; 0043fd54
    SUB ESP,0x1d0                       ; 0043fd56
    AND ESP,0xfffffff8                  ; 0043fd5c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043fd5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043fd62
    FLD float ptr [EBX + 0x4]           ; 0043fd65
    FCOMP float ptr [EAX + 0x3ab04]     ; 0043fd68
    FNSTSW AX                           ; 0043fd6e
    SAHF                                ; 0043fd70
    JC 0x004405b1                       ; 0043fd71
        ;   XREF to: 004405b1 (CONDITIONAL_JUMP)  ; LAB_004405b1
    XOR EDX,EDX                         ; 0043fd77
        ;   Label: LAB_0043fd77
    MOV ECX,dword ptr [EBX + 0x30]      ; 0043fd79
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0043fd7c
    TEST ECX,ECX                        ; 0043fd83
    JLE 0x0044018c                      ; 0043fd85
        ;   XREF to: 0044018c (CONDITIONAL_JUMP)  ; LAB_0044018c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043fd8b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0043fd8e
    ADD EAX,0x37b24                     ; 0043fd91
    LEA EDX,[EBX + 0x24]                ; 0043fd96
    MOV dword ptr [ESP + 0x188],EAX     ; 0043fd99
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043fda0
    ADD ECX,0x3ab00                     ; 0043fda3
    ADD EAX,0x398                       ; 0043fda9
    MOV dword ptr [ESP + 0x1ac],EBX     ; 0043fdae
    MOV dword ptr [ESP + 0x19c],EAX     ; 0043fdb5
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0043fdbc
        ;   Label: LAB_0043fdbc
    IMUL EAX,dword ptr [EAX + 0x34],0x11c ; 0043fdc3
    FLD float ptr [EBX]                 ; 0043fdca
    FLD float ptr [EBX + 0x4]           ; 0043fdcc
    MOV EDI,dword ptr [ESP + 0x19c]     ; 0043fdcf
    FLD float ptr [EBX + 0x8]           ; 0043fdd6
    ADD EAX,EDI                         ; 0043fdd9
    LEA ESI,[ESP + 0x138]               ; 0043fddb
    LEA EDI,[ESP + 0x60]                ; 0043fde2
    FXCH ST2                            ; 0043fde6
    FSUB float ptr [EAX]                ; 0043fde8
    FXCH                                ; 0043fdea
    FSUB float ptr [EAX + 0x4]          ; 0043fdec
    FXCH ST2                            ; 0043fdef
    FSUB float ptr [EAX + 0x8]          ; 0043fdf1
    FXCH                                ; 0043fdf4
    FSTP float ptr [ESP + 0x138]        ; 0043fdf6
    FXCH                                ; 0043fdfd
    FSTP float ptr [ESP + 0x13c]        ; 0043fdff
    FSTP float ptr [ESP + 0x140]        ; 0043fe06
    MOVSD ES:EDI,ESI                    ; 0043fe0d
    MOVSD ES:EDI,ESI                    ; 0043fe0e
    MOVSD ES:EDI,ESI                    ; 0043fe0f
    LEA EAX,[ESP + 0x48]                ; 0043fe10
    LEA ESI,[ESP + 0x60]                ; 0043fe14
    CMP EAX,ESI                         ; 0043fe18
    JZ 0x0043fe34                       ; 0043fe1a
        ;   XREF to: 0043fe34 (CONDITIONAL_JUMP)  ; LAB_0043fe34
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043fe1c
    MOV dword ptr [ESP + 0x48],EAX      ; 0043fe20
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043fe24
    MOV dword ptr [ESP + 0x4c],EAX      ; 0043fe28
    MOV EAX,dword ptr [ESP + 0x68]      ; 0043fe2c
    MOV dword ptr [ESP + 0x50],EAX      ; 0043fe30
    FLD float ptr [ESP + 0x4c]          ; 0043fe34
        ;   Label: LAB_0043fe34
    FMUL ST0                            ; 0043fe38
    FLD float ptr [ESP + 0x48]          ; 0043fe3a
    FMUL ST0                            ; 0043fe3e
    FADDP                               ; 0043fe40
    FLD float ptr [ESP + 0x50]          ; 0043fe42
    FMUL ST0                            ; 0043fe46
    FADDP                               ; 0043fe48
    FSTP float ptr [ESP + 0x198]        ; 0043fe4a
    MOV EAX,dword ptr [ESP + 0x198]     ; 0043fe51
    MOV ESI,dword ptr [0x01cc804c]      ; 0043fe58 | DAT_01cc804c
    SAR EAX,0x1                         ; 0043fe5e
    ADD EAX,ESI                         ; 0043fe60
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0043fe62
    MOV dword ptr [ESP + 0x194],EAX     ; 0043fe69
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0043fe70
    MOV EAX,dword ptr [EAX + 0x78]      ; 0043fe77
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0043fe7a
    FLD float ptr [ESP + 0x1b0]         ; 0043fe81
    FCOMP float ptr [ESP + 0x1b4]       ; 0043fe88
    FNSTSW AX                           ; 0043fe8f
    SAHF                                ; 0043fe91
    JBE 0x0043ffcc                      ; 0043fe92
        ;   XREF to: 0043ffcc (CONDITIONAL_JUMP)  ; LAB_0043ffcc
    FLD float ptr [ESP + 0x1b0]         ; 0043fe98
    FLD ST0                             ; 0043fe9f
    FSUB float ptr [ESP + 0x1b4]        ; 0043fea1
    FLD float ptr [ESP + 0x48]          ; 0043fea8
    FXCH                                ; 0043feac
    FSTP float ptr [ESP + 0x1c4]        ; 0043feae
    FMUL float ptr [ESP + 0x1c4]        ; 0043feb5
    FLD float ptr [ESP + 0x4c]          ; 0043febc
    FMUL float ptr [ESP + 0x1c4]        ; 0043fec0
    FLD float ptr [ESP + 0x50]          ; 0043fec7
    FMUL float ptr [ESP + 0x1c4]        ; 0043fecb
    LEA EDI,[ESP + 0xe4]                ; 0043fed2
    LEA ESI,[ESP + 0xa8]                ; 0043fed9
    FXCH ST2                            ; 0043fee0
    FSTP float ptr [ESP + 0xa8]         ; 0043fee2
    FSTP float ptr [ESP + 0xac]         ; 0043fee9
    FSTP float ptr [ESP + 0xb0]         ; 0043fef0
    MOVSD ES:EDI,ESI                    ; 0043fef7
    MOVSD ES:EDI,ESI                    ; 0043fef8
    MOVSD ES:EDI,ESI                    ; 0043fef9
    FLD1                                ; 0043fefa
    FLD float ptr [ESP + 0xe4]          ; 0043fefc
    FXCH                                ; 0043ff03
    FDIVRP ST2,ST0                      ; 0043ff05
    FMUL ST1                            ; 0043ff07
    FLD float ptr [ESP + 0xe8]          ; 0043ff09
    FMUL ST2                            ; 0043ff10
    FLD float ptr [ESP + 0xec]          ; 0043ff12
    FMULP ST3                           ; 0043ff19
    LEA EDI,[ESP + 0x150]               ; 0043ff1b
    LEA ESI,[ESP + 0xcc]                ; 0043ff22
    FXCH                                ; 0043ff29
    FSTP float ptr [ESP + 0xcc]         ; 0043ff2b
    FSTP float ptr [ESP + 0xd0]         ; 0043ff32
    FSTP float ptr [ESP + 0xd4]         ; 0043ff39
    MOVSD ES:EDI,ESI                    ; 0043ff40
    MOVSD ES:EDI,ESI                    ; 0043ff41
    MOVSD ES:EDI,ESI                    ; 0043ff42
    FLD float ptr [ESP + 0x150]         ; 0043ff43
    FLD float ptr [EBX]                 ; 0043ff4a
    FLD float ptr [EBX + 0x4]           ; 0043ff4c
    FLD float ptr [EBX + 0x8]           ; 0043ff4f
    FXCH ST2                            ; 0043ff52
    FSUB float ptr [ESP + 0x150]        ; 0043ff54
    FXCH                                ; 0043ff5b
    FSUB float ptr [ESP + 0x154]        ; 0043ff5d
    FXCH ST2                            ; 0043ff64
    FSUB float ptr [ESP + 0x158]        ; 0043ff66
    FXCH                                ; 0043ff6d
    FSTP float ptr [EBX]                ; 0043ff6f
    FXCH                                ; 0043ff71
    FSTP float ptr [EBX + 0x4]          ; 0043ff73
    FSTP float ptr [EBX + 0x8]          ; 0043ff76
    FMUL float ptr [ECX]                ; 0043ff79
    FLD float ptr [ESP + 0x154]         ; 0043ff7b
    FMUL float ptr [ECX]                ; 0043ff82
    FLD float ptr [ESP + 0x158]         ; 0043ff84
    FMUL float ptr [ECX]                ; 0043ff8b
    LEA EDI,[ESP + 0x18]                ; 0043ff8d
    LEA ESI,[ESP + 0xc]                 ; 0043ff91
    FXCH ST2                            ; 0043ff95
    FSTP float ptr [ESP + 0xc]          ; 0043ff97
    FSTP float ptr [ESP + 0x10]         ; 0043ff9b
    FSTP float ptr [ESP + 0x14]         ; 0043ff9f
    MOVSD ES:EDI,ESI                    ; 0043ffa3
    MOVSD ES:EDI,ESI                    ; 0043ffa4
    MOVSD ES:EDI,ESI                    ; 0043ffa5
    FLD float ptr [EDX]                 ; 0043ffa6
    FLD float ptr [EDX + 0x4]           ; 0043ffa8
    FLD float ptr [EDX + 0x8]           ; 0043ffab
    FXCH ST2                            ; 0043ffae
    FSUB float ptr [ESP + 0x18]         ; 0043ffb0
    FXCH                                ; 0043ffb4
    FSUB float ptr [ESP + 0x1c]         ; 0043ffb6
    FXCH ST2                            ; 0043ffba
    FSUB float ptr [ESP + 0x20]         ; 0043ffbc
    FXCH                                ; 0043ffc0
    FSTP float ptr [EDX]                ; 0043ffc2
    FXCH                                ; 0043ffc4
    FSTP float ptr [EDX + 0x4]          ; 0043ffc6
    FSTP float ptr [EDX + 0x8]          ; 0043ffc9
    FLD float ptr [ESP + 0x194]         ; 0043ffcc
        ;   Label: LAB_0043ffcc
    FCOMP float ptr [ESP + 0x1b4]       ; 0043ffd3
    FNSTSW AX                           ; 0043ffda
    SAHF                                ; 0043ffdc
    JNC 0x00440161                      ; 0043ffdd
        ;   XREF to: 00440161 (CONDITIONAL_JUMP)  ; LAB_00440161
    FLD float ptr [ESP + 0x194]         ; 0043ffe3
    FLD float ptr [ESP + 0x1b4]         ; 0043ffea
    FSUB ST0,ST1                        ; 0043fff1
    FLD float ptr [ESP + 0x48]          ; 0043fff3
    FXCH                                ; 0043fff7
    FSTP float ptr [ESP + 0x1cc]        ; 0043fff9
    FMUL float ptr [ESP + 0x1cc]        ; 00440000
    FLD float ptr [ESP + 0x4c]          ; 00440007
    FMUL float ptr [ESP + 0x1cc]        ; 0044000b
    FLD float ptr [ESP + 0x50]          ; 00440012
    FMUL float ptr [ESP + 0x1cc]        ; 00440016
    LEA EDI,[ESP + 0x9c]                ; 0044001d
    LEA ESI,[ESP + 0x24]                ; 00440024
    FXCH ST2                            ; 00440028
    FSTP float ptr [ESP + 0x24]         ; 0044002a
    FSTP float ptr [ESP + 0x28]         ; 0044002e
    FSTP float ptr [ESP + 0x2c]         ; 00440032
    MOVSD ES:EDI,ESI                    ; 00440036
    MOVSD ES:EDI,ESI                    ; 00440037
    MOVSD ES:EDI,ESI                    ; 00440038
    FLD1                                ; 00440039
    FLD float ptr [ESP + 0x9c]          ; 0044003b
    FXCH                                ; 00440042
    FDIVRP ST2,ST0                      ; 00440044
    FMUL ST1                            ; 00440046
    FLD float ptr [ESP + 0xa0]          ; 00440048
    FMUL ST2                            ; 0044004f
    FLD float ptr [ESP + 0xa4]          ; 00440051
    FMULP ST3                           ; 00440058
    LEA EDI,[ESP + 0x3c]                ; 0044005a
    LEA ESI,[ESP + 0xfc]                ; 0044005e
    FXCH                                ; 00440065
    FSTP float ptr [ESP + 0xfc]         ; 00440067
    FSTP float ptr [ESP + 0x100]        ; 0044006e
    FSTP float ptr [ESP + 0x104]        ; 00440075
    MOVSD ES:EDI,ESI                    ; 0044007c
    MOVSD ES:EDI,ESI                    ; 0044007d
    MOVSD ES:EDI,ESI                    ; 0044007e
    MOV EAX,dword ptr [ESP + 0x188]     ; 0044007f
    FLD float ptr [ESP + 0x3c]          ; 00440086
    FMUL float ptr [EAX]                ; 0044008a
    FLD float ptr [ESP + 0x40]          ; 0044008c
    FMUL float ptr [EAX]                ; 00440090
    FLD float ptr [ESP + 0x44]          ; 00440092
    FMUL float ptr [EAX]                ; 00440096
    LEA EDI,[ESP + 0x144]               ; 00440098
    LEA ESI,[ESP + 0x84]                ; 0044009f
    FXCH ST2                            ; 004400a6
    FSTP float ptr [ESP + 0x84]         ; 004400a8
    FSTP float ptr [ESP + 0x88]         ; 004400af
    FSTP float ptr [ESP + 0x8c]         ; 004400b6
    MOVSD ES:EDI,ESI                    ; 004400bd
    MOVSD ES:EDI,ESI                    ; 004400be
    MOVSD ES:EDI,ESI                    ; 004400bf
    FLD float ptr [ESP + 0x144]         ; 004400c0
    FLD float ptr [EBX]                 ; 004400c7
    FLD float ptr [EBX + 0x4]           ; 004400c9
    FLD float ptr [EBX + 0x8]           ; 004400cc
    FXCH ST2                            ; 004400cf
    FADD float ptr [ESP + 0x144]        ; 004400d1
    FXCH                                ; 004400d8
    FADD float ptr [ESP + 0x148]        ; 004400da
    FXCH ST2                            ; 004400e1
    FADD float ptr [ESP + 0x14c]        ; 004400e3
    FXCH                                ; 004400ea
    FSTP float ptr [EBX]                ; 004400ec
    FXCH                                ; 004400ee
    FSTP float ptr [EBX + 0x4]          ; 004400f0
    FSTP float ptr [EBX + 0x8]          ; 004400f3
    FMUL float ptr [ECX]                ; 004400f6
    FLD float ptr [ESP + 0x148]         ; 004400f8
    FMUL float ptr [ECX]                ; 004400ff
    FLD float ptr [ESP + 0x14c]         ; 00440101
    FMUL float ptr [ECX]                ; 00440108
    LEA EDI,[ESP + 0xd8]                ; 0044010a
    LEA ESI,[ESP + 0x114]               ; 00440111
    FXCH ST2                            ; 00440118
    FSTP float ptr [ESP + 0x114]        ; 0044011a
    FSTP float ptr [ESP + 0x118]        ; 00440121
    FSTP float ptr [ESP + 0x11c]        ; 00440128
    MOVSD ES:EDI,ESI                    ; 0044012f
    MOVSD ES:EDI,ESI                    ; 00440130
    MOVSD ES:EDI,ESI                    ; 00440131
    FLD float ptr [EDX]                 ; 00440132
    FLD float ptr [EDX + 0x4]           ; 00440134
    FLD float ptr [EDX + 0x8]           ; 00440137
    FXCH ST2                            ; 0044013a
    FADD float ptr [ESP + 0xd8]         ; 0044013c
    FXCH                                ; 00440143
    FADD float ptr [ESP + 0xdc]         ; 00440145
    FXCH ST2                            ; 0044014c
    FADD float ptr [ESP + 0xe0]         ; 0044014e
    FXCH                                ; 00440155
    FSTP float ptr [EDX]                ; 00440157
    FXCH                                ; 00440159
    FSTP float ptr [EDX + 0x4]          ; 0044015b
    FSTP float ptr [EDX + 0x8]          ; 0044015e
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 00440161
        ;   Label: LAB_00440161
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 00440168
    ADD ESI,0x4                         ; 0044016f
    INC EDI                             ; 00440172
    MOV dword ptr [ESP + 0x1ac],ESI     ; 00440173
    MOV ESI,dword ptr [EBX + 0x30]      ; 0044017a
    MOV dword ptr [ESP + 0x1a4],EDI     ; 0044017d
    CMP EDI,ESI                         ; 00440184
    JL 0x0043fdbc                       ; 00440186
        ;   XREF to: 0043fdbc (CONDITIONAL_JUMP)  ; LAB_0043fdbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044018c
        ;   Label: LAB_0044018c
    XOR EDI,EDI                         ; 0044018f
    MOV EDX,dword ptr [EAX + 0x37b4c]   ; 00440191
    MOV dword ptr [ESP + 0x1a8],EDI     ; 00440197
    TEST EDX,EDX                        ; 0044019e
    JLE 0x004405aa                      ; 004401a0
        ;   XREF to: 004405aa (CONDITIONAL_JUMP)  ; LAB_004405aa
    ADD EAX,0x3ab00                     ; 004401a6
    MOV dword ptr [ESP + 0x18c],EAX     ; 004401ab
    LEA EAX,[EBX + 0x24]                ; 004401b2
    MOV dword ptr [ESP + 0x1bc],EAX     ; 004401b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004401bc
    ADD EAX,0x37b50                     ; 004401bf
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004401c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004401cb
    ADD EAX,0x37bf0                     ; 004401ce
    MOV dword ptr [ESP + 0x1b8],EAX     ; 004401d3
    IMUL EAX,dword ptr [ESP + 0x1a8],0xac ; 004401da
        ;   Label: LAB_004401da
    FLD float ptr [EBX]                 ; 004401e5
    FLD float ptr [EBX + 0x4]           ; 004401e7
    FLD float ptr [EBX + 0x8]           ; 004401ea
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 004401ed
    LEA EDI,[ESP + 0xf0]                ; 004401f4
    LEA ESI,[ESP + 0xc0]                ; 004401fb
    ADD EDX,EAX                         ; 00440202
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 00440204
    MOV dword ptr [ESP + 0x1c0],EDX     ; 0044020b
    LEA EDX,[ESP + 0x12c]               ; 00440212
    FXCH ST2                            ; 00440219
    FSUB float ptr [EAX]                ; 0044021b
    FXCH                                ; 0044021d
    FSUB float ptr [EAX + 0x4]          ; 0044021f
    FXCH ST2                            ; 00440222
    FSUB float ptr [EAX + 0x8]          ; 00440224
    FXCH                                ; 00440227
    FSTP float ptr [ESP + 0xc0]         ; 00440229
    FXCH                                ; 00440230
    FSTP float ptr [ESP + 0xc4]         ; 00440232
    FSTP float ptr [ESP + 0xc8]         ; 00440239
    LEA EAX,[ESP + 0xf0]                ; 00440240
    MOVSD ES:EDI,ESI                    ; 00440247
    MOVSD ES:EDI,ESI                    ; 00440248
    MOVSD ES:EDI,ESI                    ; 00440249
    CMP EDX,EAX                         ; 0044024a
    JNZ 0x004405d3                      ; 0044024c
        ;   XREF to: 004405d3 (CONDITIONAL_JUMP)  ; LAB_004405d3
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00440252
        ;   Label: LAB_00440252
    FLD float ptr [ESP + 0x130]         ; 00440259
    FMUL float ptr [EAX + 0x8c]         ; 00440260
    FLD float ptr [ESP + 0x12c]         ; 00440266
    FMUL float ptr [EAX + 0x80]         ; 0044026d
    FADDP                               ; 00440273
    FLD float ptr [ESP + 0x134]         ; 00440275
    FMUL float ptr [EAX + 0x98]         ; 0044027c
    FADDP                               ; 00440282
    FST float ptr [ESP + 0x8]           ; 00440284
    FLDZ                                ; 00440288
    FCOMPP                              ; 0044028a
    FNSTSW AX                           ; 0044028c
    SAHF                                ; 0044028e
    JA 0x00440576                       ; 0044028f
        ;   XREF to: 00440576 (CONDITIONAL_JUMP)  ; LAB_00440576
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00440295
    FLD float ptr [ESP + 0x8]           ; 0044029c
    FCOMP float ptr [EAX + 0x44]        ; 004402a0
    FNSTSW AX                           ; 004402a3
    SAHF                                ; 004402a5
    JA 0x00440576                       ; 004402a6
        ;   XREF to: 00440576 (CONDITIONAL_JUMP)  ; LAB_00440576
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004402ac
    FLD float ptr [ESP + 0x130]         ; 004402b3
    FMUL float ptr [EAX + 0x84]         ; 004402ba
    FLD float ptr [ESP + 0x130]         ; 004402c0
    FMUL float ptr [EAX + 0x88]         ; 004402c7
    FLD float ptr [ESP + 0x12c]         ; 004402cd
    FMUL float ptr [EAX + 0x78]         ; 004402d4
    FLD float ptr [ESP + 0x12c]         ; 004402d7
    FMUL float ptr [EAX + 0x7c]         ; 004402de
    FXCH                                ; 004402e1
    FADDP ST3,ST0                       ; 004402e3
    FADDP                               ; 004402e5
    FLD float ptr [ESP + 0x134]         ; 004402e7
    FMUL float ptr [EAX + 0x90]         ; 004402ee
    FLD float ptr [ESP + 0x134]         ; 004402f4
    FXCH                                ; 004402fb
    FADDP ST3,ST0                       ; 004402fd
    FMUL float ptr [EAX + 0x94]         ; 004402ff
    FXCH ST2                            ; 00440305
    FST float ptr [ESP]                 ; 00440307
    FMUL float ptr [EAX + 0x38]         ; 0044030a
    FXCH ST2                            ; 0044030d
    FADDP                               ; 0044030f
    FLD ST1                             ; 00440311
    FMULP ST2                           ; 00440313
    FST float ptr [ESP + 0x4]           ; 00440315
    FMUL float ptr [EAX + 0x3c]         ; 00440319
    FMUL ST0                            ; 0044031c
    FADDP                               ; 0044031e
    FSTP float ptr [ESP + 0x170]        ; 00440320
    MOV EAX,dword ptr [ESP + 0x170]     ; 00440327
    MOV EDI,dword ptr [0x01cc804c]      ; 0044032e | DAT_01cc804c
    SAR EAX,0x1                         ; 00440334
    ADD EAX,EDI                         ; 00440336
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00440338
    FLD float ptr [ESP + 0x1c8]         ; 0044033f
    FLD1                                ; 00440346
    FCOMPP                              ; 00440348
    FNSTSW AX                           ; 0044034a
    SAHF                                ; 0044034c
    JBE 0x00440576                      ; 0044034d
        ;   XREF to: 00440576 (CONDITIONAL_JUMP)  ; LAB_00440576
    FLD float ptr [ESP + 0x4]           ; 00440353
    MOV EAX,dword ptr [ESP]             ; 00440357
    FMUL float ptr [ESP + 0x4]          ; 0044035a
    MOV dword ptr [ESP + 0x30],EAX      ; 0044035e
    FLD float ptr [ESP]                 ; 00440362
    MOV EAX,dword ptr [ESP + 0x4]       ; 00440365
    FMUL float ptr [ESP]                ; 00440369
    MOV dword ptr [ESP + 0x34],EAX      ; 0044036c
    XOR EAX,EAX                         ; 00440370
    FADDP                               ; 00440372
    MOV dword ptr [ESP + 0x38],EAX      ; 00440374
    FSTP float ptr [ESP + 0x178]        ; 00440378
    MOV EAX,dword ptr [ESP + 0x178]     ; 0044037f
    MOV EDX,dword ptr [0x01cc8050]      ; 00440386 | DAT_01cc8050
    SAR EAX,0x1                         ; 0044038c
    SUB EDX,EAX                         ; 0044038e
    MOV dword ptr [ESP + 0x17c],EDX     ; 00440390
    FLD float ptr [ESP]                 ; 00440397
    FMUL float ptr [ESP + 0x17c]        ; 0044039a
    FLD float ptr [ESP + 0x4]           ; 004403a1
    FMUL float ptr [ESP + 0x17c]        ; 004403a5
    FLDZ                                ; 004403ac
    FMUL float ptr [ESP + 0x17c]        ; 004403ae
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004403b5
    FXCH ST2                            ; 004403bc
    FSTP float ptr [ESP + 0x30]         ; 004403be
    FSTP float ptr [ESP + 0x34]         ; 004403c2
    FSTP float ptr [ESP + 0x38]         ; 004403c6
    FLD double ptr [0x005d68b0]         ; 004403ca | DAT_005d68b0
    FLD float ptr [EAX + 0x14]          ; 004403d0
    FMUL ST1                            ; 004403d3
    FMUL float ptr [ESP + 0x30]         ; 004403d5
    FSTP float ptr [ESP + 0x30]         ; 004403d9
    FMUL float ptr [EAX + 0x18]         ; 004403dd
    MOV EAX,dword ptr [ESP + 0x8]       ; 004403e0
    FLD float ptr [ESP + 0x34]          ; 004403e4
    FXCH                                ; 004403e8
    FMUL ST1                            ; 004403ea
    MOV dword ptr [ESP + 0x38],EAX      ; 004403ec
    LEA EAX,[ESP + 0x30]                ; 004403f0
    LEA ESI,[ESP + 0x120]               ; 004403f4
    PUSH EAX                            ; 004403fb
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004403fc
    LEA EDI,[ESP + 0x160]               ; 00440403
    ADD EAX,0x78                        ; 0044040a
    FSTP ST1                            ; 0044040d
    PUSH EAX                            ; 0044040f
    FSTP float ptr [ESP + 0x3c]         ; 00440410
    CALL FUN_0045f690                   ; 00440414
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    ADD ESP,0x8                         ; 00440419
    LEA ESI,[ESP + 0x120]               ; 0044041c
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00440423
    MOVSD ES:EDI,ESI                    ; 0044042a
    MOVSD ES:EDI,ESI                    ; 0044042b
    MOVSD ES:EDI,ESI                    ; 0044042c
    LEA EDX,[ESP + 0x54]                ; 0044042d
    FLD float ptr [EAX + 0xa4]          ; 00440431
    FLD float ptr [EAX + 0xa8]          ; 00440437
    FLD float ptr [EAX + 0xa0]          ; 0044043d
    LEA EDI,[ESP + 0x54]                ; 00440443
    LEA ESI,[ESP + 0x6c]                ; 00440447
    LEA EAX,[ESP + 0x30]                ; 0044044b
    FADD float ptr [ESP + 0x15c]        ; 0044044f
    FXCH ST2                            ; 00440456
    FADD float ptr [ESP + 0x160]        ; 00440458
    FXCH                                ; 0044045f
    FADD float ptr [ESP + 0x164]        ; 00440461
    FXCH ST2                            ; 00440468
    FSTP float ptr [ESP + 0x6c]         ; 0044046a
    FSTP float ptr [ESP + 0x70]         ; 0044046e
    FSTP float ptr [ESP + 0x74]         ; 00440472
    MOVSD ES:EDI,ESI                    ; 00440476
    MOVSD ES:EDI,ESI                    ; 00440477
    MOVSD ES:EDI,ESI                    ; 00440478
    CMP EAX,EDX                         ; 00440479
    JZ 0x00440495                       ; 0044047b
        ;   XREF to: 00440495 (CONDITIONAL_JUMP)  ; LAB_00440495
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044047d
    MOV dword ptr [ESP + 0x30],EAX      ; 00440481
    MOV EAX,dword ptr [ESP + 0x58]      ; 00440485
    MOV dword ptr [ESP + 0x34],EAX      ; 00440489
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044048d
    MOV dword ptr [ESP + 0x38],EAX      ; 00440491
    FLD float ptr [ESP + 0x30]          ; 00440495
        ;   Label: LAB_00440495
    FLD float ptr [ESP + 0x34]          ; 00440499
    FLD float ptr [ESP + 0x38]          ; 0044049d
    LEA EDI,[ESP + 0x108]               ; 004404a1
    LEA ESI,[ESP + 0xb4]                ; 004404a8
    LEA EAX,[ESP + 0x30]                ; 004404af
    FXCH ST2                            ; 004404b3
    FSUB float ptr [EBX]                ; 004404b5
    FXCH                                ; 004404b7
    FSUB float ptr [EBX + 0x4]          ; 004404b9
    FXCH ST2                            ; 004404bc
    FSUB float ptr [EBX + 0x8]          ; 004404be
    FXCH ST2                            ; 004404c1
    FSTP float ptr [ESP + 0xb8]         ; 004404c3
    FXCH                                ; 004404ca
    FSTP float ptr [ESP + 0xbc]         ; 004404cc
    FSTP float ptr [ESP + 0xb4]         ; 004404d3
    MOVSD ES:EDI,ESI                    ; 004404da
    MOVSD ES:EDI,ESI                    ; 004404db
    MOVSD ES:EDI,ESI                    ; 004404dc
    CMP EBX,EAX                         ; 004404dd
    JZ 0x004404f5                       ; 004404df
        ;   XREF to: 004404f5 (CONDITIONAL_JUMP)  ; LAB_004404f5
    MOV EAX,dword ptr [ESP + 0x30]      ; 004404e1
    MOV dword ptr [EBX],EAX             ; 004404e5
    MOV EAX,dword ptr [ESP + 0x34]      ; 004404e7
    MOV dword ptr [EBX + 0x4],EAX       ; 004404eb
    MOV EAX,dword ptr [ESP + 0x38]      ; 004404ee
    MOV dword ptr [EBX + 0x8],EAX       ; 004404f2
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004404f5
        ;   Label: LAB_004404f5
    FLD float ptr [ESP + 0x108]         ; 004404fc
    FMUL float ptr [EAX]                ; 00440503
    FLD float ptr [ESP + 0x10c]         ; 00440505
    FMUL float ptr [EAX]                ; 0044050c
    FLD float ptr [ESP + 0x110]         ; 0044050e
    FMUL float ptr [EAX]                ; 00440515
    LEA EDI,[ESP + 0x78]                ; 00440517
    LEA ESI,[ESP + 0x90]                ; 0044051b
    FXCH ST2                            ; 00440522
    FSTP float ptr [ESP + 0x90]         ; 00440524
    FSTP float ptr [ESP + 0x94]         ; 0044052b
    FSTP float ptr [ESP + 0x98]         ; 00440532
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00440539
    MOVSD ES:EDI,ESI                    ; 00440540
    MOVSD ES:EDI,ESI                    ; 00440541
    MOVSD ES:EDI,ESI                    ; 00440542
    FLD float ptr [EAX]                 ; 00440543
    FLD float ptr [EAX + 0x4]           ; 00440545
    FLD float ptr [EAX + 0x8]           ; 00440548
    FXCH ST2                            ; 0044054b
    FADD float ptr [ESP + 0x78]         ; 0044054d
    FXCH                                ; 00440551
    FADD float ptr [ESP + 0x7c]         ; 00440553
    FXCH ST2                            ; 00440557
    FADD float ptr [ESP + 0x80]         ; 00440559
    FXCH                                ; 00440560
    FSTP float ptr [EAX]                ; 00440562
    FXCH                                ; 00440564
    FSTP float ptr [EAX + 0x4]          ; 00440566
    FSTP float ptr [EAX + 0x8]          ; 00440569
    MOV dword ptr [EBX + 0xb8],0x1      ; 0044056c
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 00440576
        ;   Label: LAB_00440576
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0044057d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440584
    ADD EDI,0xac                        ; 00440587
    INC EAX                             ; 0044058d
    MOV ECX,dword ptr [EDX + 0x37b4c]   ; 0044058e
    MOV dword ptr [ESP + 0x1b8],EDI     ; 00440594
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0044059b
    CMP EAX,ECX                         ; 004405a2
    JL 0x004401da                       ; 004405a4
        ;   XREF to: 004401da (CONDITIONAL_JUMP)  ; LAB_004401da
    MOV ESP,EBP                         ; 004405aa
        ;   Label: LAB_004405aa
    POP EBP                             ; 004405ac
    POP EDI                             ; 004405ad
    POP ESI                             ; 004405ae
    POP EBX                             ; 004405af
    RET                                 ; 004405b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004405b1
        ;   Label: LAB_004405b1
    MOV dword ptr [EBX + 0x28],0x0      ; 004405b4
    MOV EDX,dword ptr [EAX + 0x3ab04]   ; 004405bb
    MOV dword ptr [EBX + 0x4],EDX       ; 004405c1
    MOV dword ptr [EBX + 0xbc],0x1      ; 004405c4
    JMP 0x0043fd77                      ; 004405ce
        ;   XREF to: 0043fd77 (UNCONDITIONAL_JUMP)  ; LAB_0043fd77
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004405d3
        ;   Label: LAB_004405d3
    MOV dword ptr [ESP + 0x12c],EAX     ; 004405da
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004405e1
    MOV dword ptr [ESP + 0x130],EAX     ; 004405e8
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004405ef
    MOV dword ptr [ESP + 0x134],EAX     ; 004405f6
    JMP 0x00440252                      ; 004405fd
        ;   XREF to: 00440252 (UNCONDITIONAL_JUMP)  ; LAB_00440252

