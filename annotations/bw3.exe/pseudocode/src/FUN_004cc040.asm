; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc040(int param_1)
;
; Local Variables:
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
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
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
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[11]:
;   FUN_00409f60 at 0040a659
;   FUN_00410490 at 004113e9
;   FUN_00424550 at 00424d8d
;   FUN_00486d40 at 004874d2
;   FUN_0048b020 at 0048b50e
;   FUN_004ae850 at 004af370
;   FUN_004ca550 at 004ca589
;   FUN_004d0fc0 at 004d17b1
;   FUN_00527d70 at 00528431
;   FUN_005353e0 at 00535783
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 s_s_7YEARS_RAW_005c45bf+1
;   undefined4 s_s_7YEARS_RAW_005c45bf+2
;   undefined4 s_s_7YEARS_RAW_005c45bf+3
;   undefined4 s_s_7YEARS_RAW_005c45bf+4
;   TerminatedCString s_glass_1_wav_2_0_005c45cb
;   undefined4 DAT_005c45e0
;   undefined4 DAT_005db0f0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba28
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0045b800
;   FUN_0046e5e0
;   FUN_004caeb0
;   FUN_00534820
;   FUN_0053b0c0
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc040
        ;   Label: FUN_004cc040
    PUSH ESI                            ; 004cc041
    PUSH EDI                            ; 004cc042
    PUSH EBP                            ; 004cc043
    SUB ESP,0x11c                       ; 004cc044
    MOV EBX,dword ptr [ESP + 0x130]     ; 004cc04a
    CMP dword ptr [EBX + 0x1b0],0x0     ; 004cc051
    JNZ 0x004cc3d1                      ; 004cc058
        ;   XREF to: 004cc3d1 (CONDITIONAL_JUMP)  ; LAB_004cc3d1
    MOV ECX,dword ptr [EBX + 0x218]     ; 004cc05e
    MOV dword ptr [EBX + 0x1b0],0x1     ; 004cc064
    TEST ECX,ECX                        ; 004cc06e
    JNZ 0x004cc3dc                      ; 004cc070
        ;   XREF to: 004cc3dc (CONDITIONAL_JUMP)  ; LAB_004cc3dc
    PUSH 0x5db0f0                       ; 004cc076 | DAT_005db0f0
        ;   Label: LAB_004cc076
    PUSH 0x4                            ; 004cc07b
    LEA EAX,[ESP + 0x8]                 ; 004cc07d
    PUSH EAX                            ; 004cc081
    CALL FUN_005a30d7                   ; 004cc082
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    FLD float ptr [EBX + 0x158]         ; 004cc087
    FMUL double ptr [0x005c45e0]        ; 004cc08d | DAT_005c45e0
    LEA ESI,[ESP + 0xa4]                ; 004cc093
    XOR EDI,EDI                         ; 004cc09a
    ADD ESP,0xc                         ; 004cc09c
    LEA EAX,[ESP + 0xbc]                ; 004cc09f
    MOV dword ptr [ESP + 0xc0],EDI      ; 004cc0a6
    PUSH EAX                            ; 004cc0ad
    LEA EAX,[EBX + 0x3c]                ; 004cc0ae
    MOV dword ptr [ESP + 0xc8],EDI      ; 004cc0b1
    PUSH EAX                            ; 004cc0b8
    FSTP float ptr [ESP + 0xc4]         ; 004cc0b9
    LEA EDI,[ESP + 0x70]                ; 004cc0c0
    CALL FUN_0045b800                   ; 004cc0c4
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0xa0]                ; 004cc0c9
    ADD ESP,0x8                         ; 004cc0d0
    LEA EAX,[EBX + 0x20]                ; 004cc0d3
    MOVSD ES:EDI,ESI                    ; 004cc0d6
    MOVSD ES:EDI,ESI                    ; 004cc0d7
    MOVSD ES:EDI,ESI                    ; 004cc0d8
    FLD float ptr [EAX]                 ; 004cc0d9
    FLD float ptr [EAX + 0x4]           ; 004cc0db
    FLD float ptr [EAX + 0x8]           ; 004cc0de
    LEA EDI,[ESP + 0xf8]                ; 004cc0e1
    LEA ESI,[ESP + 0x80]                ; 004cc0e8
    FXCH ST2                            ; 004cc0ef
    FADD float ptr [ESP + 0x68]         ; 004cc0f1
    FXCH                                ; 004cc0f5
    FADD float ptr [ESP + 0x6c]         ; 004cc0f7
    FXCH ST2                            ; 004cc0fb
    FADD float ptr [ESP + 0x70]         ; 004cc0fd
    FXCH                                ; 004cc101
    FSTP float ptr [ESP + 0x80]         ; 004cc103
    FXCH                                ; 004cc10a
    FSTP float ptr [ESP + 0x84]         ; 004cc10c
    FSTP float ptr [ESP + 0x88]         ; 004cc113
    MOVSD ES:EDI,ESI                    ; 004cc11a
    MOVSD ES:EDI,ESI                    ; 004cc11b
    MOVSD ES:EDI,ESI                    ; 004cc11c
    LEA EAX,[ESP + 0xf8]                ; 004cc11d
    MOV ESI,ESP                         ; 004cc124
    CMP ESI,EAX                         ; 004cc126
    JZ 0x004cc14a                       ; 004cc128
        ;   XREF to: 004cc14a (CONDITIONAL_JUMP)  ; LAB_004cc14a
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004cc12a
    MOV dword ptr [ESP],EAX             ; 004cc131
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004cc134
    MOV dword ptr [ESP + 0x4],EAX       ; 004cc13b
    MOV EAX,dword ptr [ESP + 0x100]     ; 004cc13f
    MOV dword ptr [ESP + 0x8],EAX       ; 004cc146
    FLD float ptr [ESP + 0xc0]          ; 004cc14a
        ;   Label: LAB_004cc14a
    LEA EAX,[ESP + 0xbc]                ; 004cc151
    LEA ESI,[ESP + 0xa4]                ; 004cc158
    LEA EDI,[ESP + 0xd4]                ; 004cc15f
    PUSH EAX                            ; 004cc166
    LEA EAX,[EBX + 0x3c]                ; 004cc167
    FADD float ptr [EBX + 0x15c]        ; 004cc16a
    PUSH EAX                            ; 004cc170
    FSTP float ptr [ESP + 0xc8]         ; 004cc171
    CALL FUN_0045b800                   ; 004cc178
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0xac]                ; 004cc17d
    ADD ESP,0x8                         ; 004cc184
    LEA EAX,[EBX + 0x20]                ; 004cc187
    MOVSD ES:EDI,ESI                    ; 004cc18a
    MOVSD ES:EDI,ESI                    ; 004cc18b
    MOVSD ES:EDI,ESI                    ; 004cc18c
    FLD float ptr [EAX]                 ; 004cc18d
    FLD float ptr [EAX + 0x4]           ; 004cc18f
    FLD float ptr [EAX + 0x8]           ; 004cc192
    LEA EDI,[ESP + 0x5c]                ; 004cc195
    LEA ESI,[ESP + 0xc8]                ; 004cc199
    FXCH ST2                            ; 004cc1a0
    FADD float ptr [ESP + 0xd4]         ; 004cc1a2
    FXCH                                ; 004cc1a9
    FADD float ptr [ESP + 0xd8]         ; 004cc1ab
    FXCH ST2                            ; 004cc1b2
    FADD float ptr [ESP + 0xdc]         ; 004cc1b4
    FXCH                                ; 004cc1bb
    FSTP float ptr [ESP + 0xc8]         ; 004cc1bd
    FXCH                                ; 004cc1c4
    FSTP float ptr [ESP + 0xcc]         ; 004cc1c6
    FSTP float ptr [ESP + 0xd0]         ; 004cc1cd
    MOVSD ES:EDI,ESI                    ; 004cc1d4
    MOVSD ES:EDI,ESI                    ; 004cc1d5
    MOVSD ES:EDI,ESI                    ; 004cc1d6
    LEA EAX,[ESP + 0xc]                 ; 004cc1d7
    LEA ESI,[ESP + 0x5c]                ; 004cc1db
    CMP EAX,ESI                         ; 004cc1df
    JZ 0x004cc1fb                       ; 004cc1e1
        ;   XREF to: 004cc1fb (CONDITIONAL_JUMP)  ; LAB_004cc1fb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004cc1e3
    MOV dword ptr [ESP + 0xc],EAX       ; 004cc1e7
    MOV EAX,dword ptr [ESP + 0x60]      ; 004cc1eb
    MOV dword ptr [ESP + 0x10],EAX      ; 004cc1ef
    MOV EAX,dword ptr [ESP + 0x64]      ; 004cc1f3
    MOV dword ptr [ESP + 0x14],EAX      ; 004cc1f7
    XOR byte ptr [ESP + 0xbf],0x80      ; 004cc1fb
        ;   Label: LAB_004cc1fb
    LEA EAX,[ESP + 0xbc]                ; 004cc203
    PUSH EAX                            ; 004cc20a
    LEA EAX,[EBX + 0x3c]                ; 004cc20b
    PUSH EAX                            ; 004cc20e
    LEA ESI,[ESP + 0xf4]                ; 004cc20f
    LEA EDI,[ESP + 0x58]                ; 004cc216
    CALL FUN_0045b800                   ; 004cc21a
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0xf4]                ; 004cc21f
    ADD ESP,0x8                         ; 004cc226
    LEA EAX,[EBX + 0x20]                ; 004cc229
    MOVSD ES:EDI,ESI                    ; 004cc22c
    MOVSD ES:EDI,ESI                    ; 004cc22d
    MOVSD ES:EDI,ESI                    ; 004cc22e
    FLD float ptr [EAX]                 ; 004cc22f
    FLD float ptr [EAX + 0x4]           ; 004cc231
    FLD float ptr [EAX + 0x8]           ; 004cc234
    LEA EDI,[ESP + 0x8c]                ; 004cc237
    LEA ESI,[ESP + 0x74]                ; 004cc23e
    FXCH ST2                            ; 004cc242
    FADD float ptr [ESP + 0x50]         ; 004cc244
    FXCH                                ; 004cc248
    FADD float ptr [ESP + 0x54]         ; 004cc24a
    FXCH ST2                            ; 004cc24e
    FADD float ptr [ESP + 0x58]         ; 004cc250
    FXCH                                ; 004cc254
    FSTP float ptr [ESP + 0x74]         ; 004cc256
    FXCH                                ; 004cc25a
    FSTP float ptr [ESP + 0x78]         ; 004cc25c
    FSTP float ptr [ESP + 0x7c]         ; 004cc260
    MOVSD ES:EDI,ESI                    ; 004cc264
    MOVSD ES:EDI,ESI                    ; 004cc265
    MOVSD ES:EDI,ESI                    ; 004cc266
    LEA EAX,[ESP + 0x8c]                ; 004cc267
    LEA ESI,[ESP + 0x18]                ; 004cc26e
    CMP ESI,EAX                         ; 004cc272
    JZ 0x004cc297                       ; 004cc274
        ;   XREF to: 004cc297 (CONDITIONAL_JUMP)  ; LAB_004cc297
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004cc276
    MOV dword ptr [ESP + 0x18],EAX      ; 004cc27d
    MOV EAX,dword ptr [ESP + 0x90]      ; 004cc281
    MOV dword ptr [ESP + 0x1c],EAX      ; 004cc288
    MOV EAX,dword ptr [ESP + 0x94]      ; 004cc28c
    MOV dword ptr [ESP + 0x20],EAX      ; 004cc293
    XOR EAX,EAX                         ; 004cc297
        ;   Label: LAB_004cc297
    MOV dword ptr [ESP + 0xc0],EAX      ; 004cc299
    LEA EAX,[ESP + 0xbc]                ; 004cc2a0
    PUSH EAX                            ; 004cc2a7
    LEA EAX,[EBX + 0x3c]                ; 004cc2a8
    PUSH EAX                            ; 004cc2ab
    LEA ESI,[ESP + 0x118]               ; 004cc2ac
    LEA EDI,[ESP + 0xe8]                ; 004cc2b3
    CALL FUN_0045b800                   ; 004cc2ba
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x118]               ; 004cc2bf
    ADD ESP,0x8                         ; 004cc2c6
    LEA EAX,[EBX + 0x20]                ; 004cc2c9
    MOVSD ES:EDI,ESI                    ; 004cc2cc
    MOVSD ES:EDI,ESI                    ; 004cc2cd
    MOVSD ES:EDI,ESI                    ; 004cc2ce
    FLD float ptr [EAX]                 ; 004cc2cf
    FLD float ptr [EAX + 0x4]           ; 004cc2d1
    FLD float ptr [EAX + 0x8]           ; 004cc2d4
    LEA EDI,[ESP + 0x104]               ; 004cc2d7
    LEA ESI,[ESP + 0xb0]                ; 004cc2de
    FXCH ST2                            ; 004cc2e5
    FADD float ptr [ESP + 0xe0]         ; 004cc2e7
    FXCH                                ; 004cc2ee
    FADD float ptr [ESP + 0xe4]         ; 004cc2f0
    FXCH ST2                            ; 004cc2f7
    FADD float ptr [ESP + 0xe8]         ; 004cc2f9
    FXCH                                ; 004cc300
    FSTP float ptr [ESP + 0xb0]         ; 004cc302
    FXCH                                ; 004cc309
    FSTP float ptr [ESP + 0xb4]         ; 004cc30b
    FSTP float ptr [ESP + 0xb8]         ; 004cc312
    MOVSD ES:EDI,ESI                    ; 004cc319
    MOVSD ES:EDI,ESI                    ; 004cc31a
    MOVSD ES:EDI,ESI                    ; 004cc31b
    LEA EAX,[ESP + 0x104]               ; 004cc31c
    LEA ESI,[ESP + 0x24]                ; 004cc323
    CMP ESI,EAX                         ; 004cc327
    JZ 0x004cc34c                       ; 004cc329
        ;   XREF to: 004cc34c (CONDITIONAL_JUMP)  ; LAB_004cc34c
    MOV EAX,dword ptr [ESP + 0x104]     ; 004cc32b
    MOV dword ptr [ESP + 0x24],EAX      ; 004cc332
    MOV EAX,dword ptr [ESP + 0x108]     ; 004cc336
    MOV dword ptr [ESP + 0x28],EAX      ; 004cc33d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004cc341
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cc348
    LEA EAX,[EBX + 0x164]               ; 004cc34c
        ;   Label: LAB_004cc34c
    PUSH EAX                            ; 004cc352
    MOV EDX,dword ptr [0x005f2afc]      ; 004cc353 | DAT_005f2afc
    PUSH EDX                            ; 004cc359 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 004cc35a
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    MOV ECX,dword ptr [0x005fba28]      ; 004cc35f | DAT_005fba28
    ADD ESP,0x8                         ; 004cc365
    CMP ECX,0x40                        ; 004cc368
    JNZ 0x004cc41f                      ; 004cc36b
        ;   XREF to: 004cc41f (CONDITIONAL_JUMP)  ; LAB_004cc41f
    MOV EAX,0xf80000                    ; 004cc371
    MOV EBP,0x80000                     ; 004cc376
    MOV dword ptr [ESP + 0x30],EAX      ; 004cc37b
    MOV dword ptr [ESP + 0x44],EBP      ; 004cc37f
    MOV dword ptr [ESP + 0x34],EBP      ; 004cc383
    MOV dword ptr [ESP + 0x48],EAX      ; 004cc387
    MOV dword ptr [ESP + 0x38],EBP      ; 004cc38b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cc38f
    MOV dword ptr [ESP + 0x3c],EAX      ; 004cc393
    MOV dword ptr [ESP + 0x40],EBP      ; 004cc397
    PUSH 0x0                            ; 004cc39b
        ;   Label: LAB_004cc39b
    LEA EAX,[ESP + 0x34]                ; 004cc39d
    PUSH EAX                            ; 004cc3a1
    LEA EAX,[ESP + 0x48]                ; 004cc3a2
    PUSH EAX                            ; 004cc3a6
    LEA EAX,[ESP + 0xc]                 ; 004cc3a7
    PUSH EAX                            ; 004cc3ab
    PUSH EBX                            ; 004cc3ac
    CALL FUN_004caeb0                   ; 004cc3ad
        ;   XREF to: 004caeb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004caeb0()
    ADD ESP,0x14                        ; 004cc3b2
    PUSH 0x5c45cb                       ; 004cc3b5 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cc3ba
    PUSH EBX                            ; 004cc3c0
    CALL dword ptr [EAX + 0x2c]         ; 004cc3c1
    MOV EDX,dword ptr [EBX + 0x3a0]     ; 004cc3c4
    ADD ESP,0x8                         ; 004cc3ca
    TEST EDX,EDX                        ; 004cc3cd
    JNZ 0x004cc44e                      ; 004cc3cf
        ;   XREF to: 004cc44e (CONDITIONAL_JUMP)  ; LAB_004cc44e
    ADD ESP,0x11c                       ; 004cc3d1
        ;   Label: LAB_004cc3d1
    POP EBP                             ; 004cc3d7
    POP EDI                             ; 004cc3d8
    POP ESI                             ; 004cc3d9
    POP EBX                             ; 004cc3da
    RET                                 ; 004cc3db
    MOV ESI,0x5c45c0                    ; 004cc3dc | s_s_7YEARS_RAW_005c45bf+1
        ;   Label: LAB_004cc3dc
    LEA EDI,[EBX + 0x16c]               ; 004cc3e1
    MOV dword ptr [EBX + 0x1ac],0xffff  ; 004cc3e7
    PUSH EDI                            ; 004cc3f1
    MOV AL,byte ptr [ESI]               ; 004cc3f2 | s_s_7YEARS_RAW_005c45bf+1 | s_s_7YEARS_RAW_005c45bf+3
        ;   Label: LAB_004cc3f2
    MOV byte ptr [EDI],AL               ; 004cc3f4
    CMP AL,0x0                          ; 004cc3f6
    JZ 0x004cc40a                       ; 004cc3f8
        ;   XREF to: 004cc40a (CONDITIONAL_JUMP)  ; LAB_004cc40a
    MOV AL,byte ptr [ESI + 0x1]         ; 004cc3fa | s_s_7YEARS_RAW_005c45bf+2 | s_s_7YEARS_RAW_005c45bf+4
    ADD ESI,0x2                         ; 004cc3fd
    MOV byte ptr [EDI + 0x1],AL         ; 004cc400
    ADD EDI,0x2                         ; 004cc403
    CMP AL,0x0                          ; 004cc406
    JNZ 0x004cc3f2                      ; 004cc408
        ;   XREF to: 004cc3f2 (CONDITIONAL_JUMP)  ; LAB_004cc3f2
    POP EDI                             ; 004cc40a
        ;   Label: LAB_004cc40a
    MOV ESI,dword ptr [0x00603b28]      ; 004cc40b | DAT_00603b28
    PUSH ESI                            ; 004cc411 | DAT_01ed78c8
    CALL FUN_0053b0c0                   ; 004cc412
        ;   XREF to: 0053b0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b0c0()
    ADD ESP,0x4                         ; 004cc417
    JMP 0x004cc076                      ; 004cc41a
        ;   XREF to: 004cc076 (UNCONDITIONAL_JUMP)  ; LAB_004cc076
    MOV EDI,0xfe0000                    ; 004cc41f
        ;   Label: LAB_004cc41f
    MOV ESI,0x20000                     ; 004cc424
    MOV dword ptr [ESP + 0x30],EDI      ; 004cc429
    MOV dword ptr [ESP + 0x44],ESI      ; 004cc42d
    MOV dword ptr [ESP + 0x34],ESI      ; 004cc431
    MOV dword ptr [ESP + 0x48],EDI      ; 004cc435
    MOV dword ptr [ESP + 0x38],ESI      ; 004cc439
    MOV dword ptr [ESP + 0x4c],EDI      ; 004cc43d
    MOV dword ptr [ESP + 0x3c],EDI      ; 004cc441
    MOV dword ptr [ESP + 0x40],ESI      ; 004cc445
    JMP 0x004cc39b                      ; 004cc449
        ;   XREF to: 004cc39b (UNCONDITIONAL_JUMP)  ; LAB_004cc39b
    PUSH EBX                            ; 004cc44e
        ;   Label: LAB_004cc44e
    MOV ECX,dword ptr [0x00603b28]      ; 004cc44f | DAT_00603b28
    PUSH ECX                            ; 004cc455 | DAT_01ed78c8
    CALL FUN_00534820                   ; 004cc456
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; undefined FUN_00534820()
    ADD ESP,0x8                         ; 004cc45b
    MOV dword ptr [EBX + 0xb6c],0x1     ; 004cc45e
    ADD ESP,0x11c                       ; 004cc468
    POP EBP                             ; 004cc46e
    POP EDI                             ; 004cc46f
    POP ESI                             ; 004cc470
    POP EBX                             ; 004cc471
    RET                                 ; 004cc472

