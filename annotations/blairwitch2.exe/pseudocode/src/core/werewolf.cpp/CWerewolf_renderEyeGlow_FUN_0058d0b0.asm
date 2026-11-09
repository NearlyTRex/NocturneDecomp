; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0(CWerewolf *this_ptr,CVector3f *eye_position)
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
;   core_werewolf.cpp_FUN_0058d670 at 0058d764
;
; Referenced Globals:
;   undefined4 DAT_005fe0b0
;   undefined4 DAT_005fe0dc
;   undefined4 DAT_005fe0e0
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061e944
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d0b0
        ;   Label: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0
    PUSH ESI                            ; 0058d0b1
    PUSH EDI                            ; 0058d0b2
    PUSH EBP                            ; 0058d0b3
    SUB ESP,0x134                       ; 0058d0b4
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0058d0ba
    FLD float ptr [EBP]                 ; 0058d0c1
    FLD float ptr [EBP + 0x4]           ; 0058d0c4
    LEA EDI,[ESP + 0x10c]               ; 0058d0c7
    MOV EAX,[0x005fe0dc]                ; 0058d0ce | DAT_005fe0dc
    LEA ESI,[ESP + 0xf4]                ; 0058d0d3
    MOV dword ptr [ESP + 0x130],EAX     ; 0058d0da
    MOV EAX,[0x005fe0e0]                ; 0058d0e1 | DAT_005fe0e0
    FXCH                                ; 0058d0e6
    FADD float ptr [ESP + 0x130]        ; 0058d0e8
    MOV dword ptr [ESP + 0x128],EAX     ; 0058d0ef
    FSTP float ptr [ESP + 0xf4]         ; 0058d0f6
    MOV EAX,dword ptr [EBP + 0x8]       ; 0058d0fd
    FADD float ptr [ESP + 0x128]        ; 0058d100
    MOV dword ptr [ESP + 0xfc],EAX      ; 0058d107
    FSTP float ptr [ESP + 0xf8]         ; 0058d10e
    MOVSD ES:EDI,ESI                    ; 0058d115
    MOVSD ES:EDI,ESI                    ; 0058d116
    MOVSD ES:EDI,ESI                    ; 0058d117
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d118
    FLD float ptr [ESP + 0x10c]         ; 0058d11f
    FMUL float ptr [EAX + 0x2824]       ; 0058d126
    FLD float ptr [ESP + 0x110]         ; 0058d12c
    FMUL float ptr [EAX + 0x2824]       ; 0058d133
    FLD float ptr [ESP + 0x114]         ; 0058d139
    FMUL float ptr [EAX + 0x2824]       ; 0058d140
    LEA EDX,[ESP + 0x4c]                ; 0058d146
    LEA EDI,[ESP + 0x7c]                ; 0058d14a
    LEA ESI,[ESP + 0x70]                ; 0058d14e
    FXCH ST2                            ; 0058d152
    FSTP float ptr [ESP + 0x70]         ; 0058d154
    FSTP float ptr [ESP + 0x74]         ; 0058d158
    FSTP float ptr [ESP + 0x78]         ; 0058d15c
    LEA EAX,[ESP + 0x7c]                ; 0058d160
    MOVSD ES:EDI,ESI                    ; 0058d164
    MOVSD ES:EDI,ESI                    ; 0058d165
    MOVSD ES:EDI,ESI                    ; 0058d166
    CMP EDX,EAX                         ; 0058d167
    JZ 0x0058d189                       ; 0058d169
        ;   XREF to: 0058d189 (CONDITIONAL_JUMP)  ; LAB_0058d189
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0058d16b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0058d16f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0058d173
    MOV dword ptr [ESP + 0x50],EAX      ; 0058d17a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0058d17e
    MOV dword ptr [ESP + 0x54],EAX      ; 0058d185
    LEA EBX,[ESP + 0x34]                ; 0058d189
        ;   Label: LAB_0058d189
    LEA EAX,[ESP + 0x4c]                ; 0058d18d
    MOV EDX,dword ptr [0x0060b280]      ; 0058d191 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058d197
    FMUL float ptr [0x005fe0b0]         ; 0058d199 | DAT_005fe0b0
    FISTP dword ptr [EBX]               ; 0058d19f
    FLD float ptr [EAX + 0x4]           ; 0058d1a1
    FMUL float ptr [0x005fe0b0]         ; 0058d1a4 | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x4]         ; 0058d1aa
    FLD float ptr [EAX + 0x8]           ; 0058d1ad
    FMUL float ptr [0x005fe0b0]         ; 0058d1b0 | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x8]         ; 0058d1b6
    LEA EAX,[ESP + 0x34]                ; 0058d1b9
    PUSH EAX                            ; 0058d1bd
    MOV EAX,dword ptr [EDX]             ; 0058d1be | DAT_01ba5c50
    PUSH EAX                            ; 0058d1c0
    LEA EDI,[ESP + 0x48]                ; 0058d1c1
    LEA ESI,[ESP + 0x30]                ; 0058d1c5
    CALL engine_special.cpp_FUN_0055d723 ; 0058d1c9
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005fe0dc]          ; 0058d1ce | DAT_005fe0dc
    FLD float ptr [EBP]                 ; 0058d1d4
    FLD float ptr [EBP + 0x4]           ; 0058d1d7
    MOV EAX,[0x005fe0e0]                ; 0058d1da | DAT_005fe0e0
    ADD ESP,0x8                         ; 0058d1df
    FXCH ST2                            ; 0058d1e2
    FCHS                                ; 0058d1e4
    MOV dword ptr [ESP + 0x12c],EAX     ; 0058d1e6
    FADDP                               ; 0058d1ed
    MOV EAX,dword ptr [EBP + 0x8]       ; 0058d1ef
    FSTP float ptr [ESP + 0x28]         ; 0058d1f2
    FADD float ptr [ESP + 0x12c]        ; 0058d1f6
    MOV dword ptr [ESP + 0x30],EAX      ; 0058d1fd
    FSTP float ptr [ESP + 0x2c]         ; 0058d201
    MOVSD ES:EDI,ESI                    ; 0058d205
    MOVSD ES:EDI,ESI                    ; 0058d206
    MOVSD ES:EDI,ESI                    ; 0058d207
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d208
    FLD float ptr [ESP + 0x40]          ; 0058d20f
    FMUL float ptr [EAX + 0x2824]       ; 0058d213
    FLD float ptr [ESP + 0x44]          ; 0058d219
    FMUL float ptr [EAX + 0x2824]       ; 0058d21d
    FLD float ptr [ESP + 0x48]          ; 0058d223
    FMUL float ptr [EAX + 0x2824]       ; 0058d227
    LEA EDX,[ESP + 0x4c]                ; 0058d22d
    LEA EDI,[ESP + 0xa0]                ; 0058d231
    LEA ESI,[ESP + 0xb8]                ; 0058d238
    FXCH ST2                            ; 0058d23f
    FSTP float ptr [ESP + 0xb8]         ; 0058d241
    FSTP float ptr [ESP + 0xbc]         ; 0058d248
    FSTP float ptr [ESP + 0xc0]         ; 0058d24f
    LEA EAX,[ESP + 0xa0]                ; 0058d256
    MOVSD ES:EDI,ESI                    ; 0058d25d
    MOVSD ES:EDI,ESI                    ; 0058d25e
    MOVSD ES:EDI,ESI                    ; 0058d25f
    CMP EDX,EAX                         ; 0058d260
    JZ 0x0058d285                       ; 0058d262
        ;   XREF to: 0058d285 (CONDITIONAL_JUMP)  ; LAB_0058d285
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0058d264
    MOV dword ptr [ESP + 0x4c],EAX      ; 0058d26b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0058d26f
    MOV dword ptr [ESP + 0x50],EAX      ; 0058d276
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0058d27a
    MOV dword ptr [ESP + 0x54],EAX      ; 0058d281
    LEA EBX,[ESP + 0x118]               ; 0058d285
        ;   Label: LAB_0058d285
    LEA EAX,[ESP + 0x4c]                ; 0058d28c
    MOV EDX,dword ptr [0x0060b280]      ; 0058d290 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058d296
    FMUL float ptr [0x005fe0b0]         ; 0058d298 | DAT_005fe0b0
    FISTP dword ptr [EBX]               ; 0058d29e
    FLD float ptr [EAX + 0x4]           ; 0058d2a0
    FMUL float ptr [0x005fe0b0]         ; 0058d2a3 | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x4]         ; 0058d2a9
    FLD float ptr [EAX + 0x8]           ; 0058d2ac
    FMUL float ptr [0x005fe0b0]         ; 0058d2af | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x8]         ; 0058d2b5
    LEA EAX,[ESP + 0x118]               ; 0058d2b8
    PUSH EAX                            ; 0058d2bf
    MOV EAX,dword ptr [EDX]             ; 0058d2c0 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0058d2c2
    PUSH EAX                            ; 0058d2c5
    LEA EDI,[ESP + 0xcc]                ; 0058d2c6
    LEA ESI,[ESP + 0x9c]                ; 0058d2cd
    CALL engine_special.cpp_FUN_0055d723 ; 0058d2d4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005fe0e0]          ; 0058d2d9 | DAT_005fe0e0
    FLD float ptr [0x005fe0dc]          ; 0058d2df | DAT_005fe0dc
    FLD float ptr [EBP + 0x4]           ; 0058d2e5
    ADD ESP,0x8                         ; 0058d2e8
    FXCH ST2                            ; 0058d2eb
    FCHS                                ; 0058d2ed
    MOV EAX,dword ptr [EBP + 0x8]       ; 0058d2ef
    FXCH                                ; 0058d2f2
    FCHS                                ; 0058d2f4
    MOV dword ptr [ESP + 0x9c],EAX      ; 0058d2f6
    FADD float ptr [EBP]                ; 0058d2fd
    FXCH ST2                            ; 0058d300
    FADDP                               ; 0058d302
    FXCH                                ; 0058d304
    FSTP float ptr [ESP + 0x94]         ; 0058d306
    FSTP float ptr [ESP + 0x98]         ; 0058d30d
    MOVSD ES:EDI,ESI                    ; 0058d314
    MOVSD ES:EDI,ESI                    ; 0058d315
    MOVSD ES:EDI,ESI                    ; 0058d316
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d317
    FLD float ptr [ESP + 0xc4]          ; 0058d31e
    FMUL float ptr [EAX + 0x2824]       ; 0058d325
    FLD float ptr [ESP + 0xc8]          ; 0058d32b
    FMUL float ptr [EAX + 0x2824]       ; 0058d332
    FLD float ptr [ESP + 0xcc]          ; 0058d338
    FMUL float ptr [EAX + 0x2824]       ; 0058d33f
    LEA EDX,[ESP + 0x4c]                ; 0058d345
    LEA EDI,[ESP + 0xe8]                ; 0058d349
    LEA ESI,[ESP + 0xdc]                ; 0058d350
    FXCH ST2                            ; 0058d357
    FSTP float ptr [ESP + 0xdc]         ; 0058d359
    FSTP float ptr [ESP + 0xe0]         ; 0058d360
    FSTP float ptr [ESP + 0xe4]         ; 0058d367
    LEA EAX,[ESP + 0xe8]                ; 0058d36e
    MOVSD ES:EDI,ESI                    ; 0058d375
    MOVSD ES:EDI,ESI                    ; 0058d376
    MOVSD ES:EDI,ESI                    ; 0058d377
    CMP EDX,EAX                         ; 0058d378
    JZ 0x0058d39d                       ; 0058d37a
        ;   XREF to: 0058d39d (CONDITIONAL_JUMP)  ; LAB_0058d39d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0058d37c
    MOV dword ptr [ESP + 0x4c],EAX      ; 0058d383
    MOV EAX,dword ptr [ESP + 0xec]      ; 0058d387
    MOV dword ptr [ESP + 0x50],EAX      ; 0058d38e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0058d392
    MOV dword ptr [ESP + 0x54],EAX      ; 0058d399
    LEA EBX,[ESP + 0x58]                ; 0058d39d
        ;   Label: LAB_0058d39d
    LEA EAX,[ESP + 0x4c]                ; 0058d3a1
    MOV EDX,dword ptr [0x0060b280]      ; 0058d3a5 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058d3ab
    FMUL float ptr [0x005fe0b0]         ; 0058d3ad | DAT_005fe0b0
    FISTP dword ptr [EBX]               ; 0058d3b3
    FLD float ptr [EAX + 0x4]           ; 0058d3b5
    FMUL float ptr [0x005fe0b0]         ; 0058d3b8 | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x4]         ; 0058d3be
    FLD float ptr [EAX + 0x8]           ; 0058d3c1
    FMUL float ptr [0x005fe0b0]         ; 0058d3c4 | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x8]         ; 0058d3ca
    LEA EAX,[ESP + 0x58]                ; 0058d3cd
    PUSH EAX                            ; 0058d3d1
    MOV EAX,dword ptr [EDX]             ; 0058d3d2 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0058d3d4
    PUSH EAX                            ; 0058d3d7
    LEA EDI,[ESP + 0x90]                ; 0058d3d8
    LEA ESI,[ESP + 0x6c]                ; 0058d3df
    CALL engine_special.cpp_FUN_0055d723 ; 0058d3e3
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005fe0e0]          ; 0058d3e8 | DAT_005fe0e0
    FLD float ptr [0x005fe0dc]          ; 0058d3ee | DAT_005fe0dc
    FLD float ptr [EBP + 0x4]           ; 0058d3f4
    ADD ESP,0x8                         ; 0058d3f7
    MOV EAX,dword ptr [EBP + 0x8]       ; 0058d3fa
    FXCH ST2                            ; 0058d3fd
    FCHS                                ; 0058d3ff
    MOV dword ptr [ESP + 0x6c],EAX      ; 0058d401
    FXCH                                ; 0058d405
    FADD float ptr [EBP]                ; 0058d407
    FXCH ST2                            ; 0058d40a
    FADDP                               ; 0058d40c
    FXCH                                ; 0058d40e
    FSTP float ptr [ESP + 0x64]         ; 0058d410
    FSTP float ptr [ESP + 0x68]         ; 0058d414
    MOVSD ES:EDI,ESI                    ; 0058d418
    MOVSD ES:EDI,ESI                    ; 0058d419
    MOVSD ES:EDI,ESI                    ; 0058d41a
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d41b
    FLD float ptr [ESP + 0x88]          ; 0058d422
    FMUL float ptr [EAX + 0x2824]       ; 0058d429
    FLD float ptr [ESP + 0x8c]          ; 0058d42f
    FMUL float ptr [EAX + 0x2824]       ; 0058d436
    FLD float ptr [ESP + 0x90]          ; 0058d43c
    FMUL float ptr [EAX + 0x2824]       ; 0058d443
    LEA EBX,[ESP + 0x4c]                ; 0058d449
    LEA EDI,[ESP + 0x100]               ; 0058d44d
    LEA ESI,[ESP + 0xd0]                ; 0058d454
    FXCH ST2                            ; 0058d45b
    FSTP float ptr [ESP + 0xd0]         ; 0058d45d
    FSTP float ptr [ESP + 0xd4]         ; 0058d464
    FSTP float ptr [ESP + 0xd8]         ; 0058d46b
    LEA EAX,[ESP + 0x100]               ; 0058d472
    MOVSD ES:EDI,ESI                    ; 0058d479
    MOVSD ES:EDI,ESI                    ; 0058d47a
    MOVSD ES:EDI,ESI                    ; 0058d47b
    CMP EBX,EAX                         ; 0058d47c
    JZ 0x0058d4a1                       ; 0058d47e
        ;   XREF to: 0058d4a1 (CONDITIONAL_JUMP)  ; LAB_0058d4a1
    MOV EAX,dword ptr [ESP + 0x100]     ; 0058d480
    MOV dword ptr [ESP + 0x4c],EAX      ; 0058d487
    MOV EAX,dword ptr [ESP + 0x104]     ; 0058d48b
    MOV dword ptr [ESP + 0x50],EAX      ; 0058d492
    MOV EAX,dword ptr [ESP + 0x108]     ; 0058d496
    MOV dword ptr [ESP + 0x54],EAX      ; 0058d49d
    LEA EBX,[ESP + 0xac]                ; 0058d4a1
        ;   Label: LAB_0058d4a1
    LEA EAX,[ESP + 0x4c]                ; 0058d4a8
    MOV EBP,dword ptr [0x0060b280]      ; 0058d4ac | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058d4b2
    FMUL float ptr [0x005fe0b0]         ; 0058d4b4 | DAT_005fe0b0
    FISTP dword ptr [EBX]               ; 0058d4ba
    FLD float ptr [EAX + 0x4]           ; 0058d4bc
    FMUL float ptr [0x005fe0b0]         ; 0058d4bf | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x4]         ; 0058d4c5
    FLD float ptr [EAX + 0x8]           ; 0058d4c8
    FMUL float ptr [0x005fe0b0]         ; 0058d4cb | DAT_005fe0b0
    FISTP dword ptr [EBX + 0x8]         ; 0058d4d1
    LEA EAX,[ESP + 0xac]                ; 0058d4d4
    PUSH EAX                            ; 0058d4db
    MOV EAX,dword ptr [EBP]             ; 0058d4dc | DAT_01ba5c50
    ADD EAX,0x90                        ; 0058d4df
    PUSH EAX                            ; 0058d4e4
    CALL engine_special.cpp_FUN_0055d723 ; 0058d4e5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0058d4ea | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 0058d4ef | DAT_01ba5c50
    MOV dword ptr [EDX + 0x20],0xffff   ; 0058d4f1
    MOV EBX,dword ptr [EAX]             ; 0058d4f8 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x24],0x0      ; 0058d4fa
    MOV EBX,dword ptr [EAX]             ; 0058d501 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x28],0x0      ; 0058d503
    MOV EDX,dword ptr [EAX]             ; 0058d50a | DAT_01ba5c50
    MOV dword ptr [EDX + 0x50],0xffff   ; 0058d50c
    MOV EDX,dword ptr [EAX]             ; 0058d513 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x54],0x0      ; 0058d515
    MOV EBX,dword ptr [EAX]             ; 0058d51c | DAT_01ba5c50
    MOV dword ptr [EBX + 0x58],0x0      ; 0058d51e
    MOV EBX,dword ptr [EAX]             ; 0058d525 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x80],0xffff   ; 0058d527
    MOV EBX,dword ptr [EAX]             ; 0058d531 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x84],0x0      ; 0058d533
    MOV EBX,dword ptr [EAX]             ; 0058d53d | DAT_01ba5c50
    MOV dword ptr [EBX + 0x88],0x0      ; 0058d53f
    MOV EBX,dword ptr [EAX]             ; 0058d549 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0058d54b
    MOV EDX,dword ptr [EAX]             ; 0058d555 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xb4],0x0      ; 0058d557
    MOV EBX,dword ptr [EAX]             ; 0058d561 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb8],0x0      ; 0058d563
    MOV EBX,dword ptr [EAX]             ; 0058d56d | DAT_01ba5c50
    MOV dword ptr [EBX + 0x2c],0x4000   ; 0058d56f
    MOV EBX,dword ptr [EAX]             ; 0058d576 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x5c],0x4000   ; 0058d578
    MOV EBX,dword ptr [EAX]             ; 0058d57f | DAT_01ba5c50
    MOV dword ptr [EBX + 0x8c],0x4000   ; 0058d581
    MOV EDX,dword ptr [EAX]             ; 0058d58b | DAT_01ba5c50
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0058d58d
    MOV EBX,dword ptr [EAX]             ; 0058d597 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x18],0x80000  ; 0058d599
    MOV EDX,dword ptr [EAX]             ; 0058d5a0 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0058d5a2
    MOV EBX,dword ptr [EAX]             ; 0058d5a9 | DAT_01ba5c50
    ADD ESP,0x8                         ; 0058d5ab
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0058d5ae
    MOV EBX,dword ptr [EAX]             ; 0058d5b5 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0058d5b7
    MOV EBX,dword ptr [EAX]             ; 0058d5be | DAT_01ba5c50
    MOV dword ptr [EBX + 0x78],0xf80000 ; 0058d5c0
    MOV EBX,dword ptr [EAX]             ; 0058d5c7 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0058d5c9
    MOV EBX,dword ptr [EAX]             ; 0058d5d0 | DAT_01ba5c50
    MOV EDX,0x4                         ; 0058d5d2
    MOV dword ptr [EBX + 0xa8],0x80000  ; 0058d5d7
    PUSH 0x61e944                       ; 0058d5e1 | DAT_0061e944
    MOV EBX,dword ptr [EAX]             ; 0058d5e6 | DAT_01ba5c50
    XOR ECX,ECX                         ; 0058d5e8
    PUSH EAX                            ; 0058d5ea | DAT_01ba5c50
    MOV dword ptr [EBX + 0xac],0x80000  ; 0058d5eb
    MOV EBX,0x3                         ; 0058d5f5
    MOV dword ptr [ESP + 0xc],EDX       ; 0058d5fa
    MOV dword ptr [ESP + 0x1c],ECX      ; 0058d5fe
    MOV dword ptr [ESP + 0x18],ECX      ; 0058d602
    MOV dword ptr [ESP + 0x14],ECX      ; 0058d606
    MOV dword ptr [ESP + 0x10],ECX      ; 0058d60a
    MOV dword ptr [ESP + 0x20],ECX      ; 0058d60e
    MOV EDX,0x1                         ; 0058d612
    MOV ECX,0x2                         ; 0058d617
    MOV dword ptr [ESP + 0x2c],EBX      ; 0058d61c
    MOV dword ptr [ESP + 0x24],EDX      ; 0058d620
    MOV dword ptr [ESP + 0x28],ECX      ; 0058d624
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0058d628
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0058d62d
    PUSH 0x1                            ; 0058d630
    MOV ESI,dword ptr [0x0060b280]      ; 0058d632 | DAT_0060b280
    PUSH ESI                            ; 0058d638 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0058d639
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0058d63e
    MOV EAX,ESP                         ; 0058d641
    PUSH EAX                            ; 0058d643
    MOV EDI,dword ptr [0x0060b280]      ; 0058d644 | DAT_0060b280
    PUSH EDI                            ; 0058d64a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0058d64b
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0058d650
    XOR EBP,EBP                         ; 0058d653
    PUSH EBP                            ; 0058d655
    MOV EBP,dword ptr [0x0060b280]      ; 0058d656 | DAT_0060b280
    PUSH EBP                            ; 0058d65c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0058d65d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0058d662
    ADD ESP,0x134                       ; 0058d665
    POP EBP                             ; 0058d66b
    POP EDI                             ; 0058d66c
    POP ESI                             ; 0058d66d
    POP EBX                             ; 0058d66e
    RET                                 ; 0058d66f

