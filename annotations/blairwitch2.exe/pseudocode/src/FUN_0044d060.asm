; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d060(undefined4 param_1,undefined4 param_2,float param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
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
; undefined4       Stack[-0x40]:4  local_40
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
; XREF[5]:
;   FUN_00459d40 at 00459d8c
;   FUN_004e42a0 at 004e432a
;   FUN_00584a40 at 00584cd8
;   FUN_00598fa0 at 00599129
;   FUN_0059d040 at 0059d08e
;
; Referenced Globals:
;   undefined4 DAT_005cf557
;   undefined4 DAT_005cf55f
;   undefined4 DAT_005cf563
;   undefined4 DAT_005cf567
;   undefined4 DAT_005cf56f
;   undefined4 DAT_005cf577
;   undefined4 DAT_005f5050
;   undefined4 DAT_0060afc8
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0046a930
;   FUN_0046b2b0
;   FUN_0046b350
;   FUN_0046b8d0
;   FUN_0046b960
;   FUN_0046ca00
;   FUN_0055d723
;   FUN_005b7ff0
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d060
        ;   Label: FUN_0044d060
    PUSH ESI                            ; 0044d061
    PUSH EDI                            ; 0044d062
    PUSH EBP                            ; 0044d063
    MOV EBP,ESP                         ; 0044d064
    SUB ESP,0xac                        ; 0044d066
    AND ESP,0xfffffff8                  ; 0044d06c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044d06f
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d072
    MOV EDX,dword ptr [0x0060b280]      ; 0044d076 | DAT_0060b280
    PUSH EDX                            ; 0044d07c | DAT_01ba5c50
    CALL FUN_0046b960                   ; 0044d07d
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0044d082
    TEST EAX,EAX                        ; 0044d085
    JZ 0x0044d090                       ; 0044d087
        ;   XREF to: 0044d090 (CONDITIONAL_JUMP)  ; LAB_0044d090
    MOV ESP,EBP                         ; 0044d089
    POP EBP                             ; 0044d08b
    POP EDI                             ; 0044d08c
    POP ESI                             ; 0044d08d
    POP EBX                             ; 0044d08e
    RET                                 ; 0044d08f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044d090
        ;   Label: LAB_0044d090
    PUSH ECX                            ; 0044d093
    MOV EBX,dword ptr [0x0060b280]      ; 0044d094 | DAT_0060b280
    PUSH EBX                            ; 0044d09a | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 0044d09b
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 0044d0a0
    PUSH 0x0                            ; 0044d0a3
    MOV ESI,dword ptr [EBP + 0x18]      ; 0044d0a5
    PUSH ESI                            ; 0044d0a8
    MOV EDI,dword ptr [0x0060b280]      ; 0044d0a9 | DAT_0060b280
    PUSH EDI                            ; 0044d0af | DAT_01ba5c50
    CALL FUN_0046b350                   ; 0044d0b0
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 0044d0b5
    PUSH 0x60afc8                       ; 0044d0b8 | DAT_0060afc8
    MOV EAX,[0x0060b280]                ; 0044d0bd | DAT_0060b280
    PUSH EAX                            ; 0044d0c2 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 0044d0c3
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 0044d0c8
    PUSH 0x1                            ; 0044d0cb
    MOV EDX,dword ptr [0x0060b280]      ; 0044d0cd | DAT_0060b280
    PUSH EDX                            ; 0044d0d3 | DAT_01ba5c50
    CALL FUN_0046b8d0                   ; 0044d0d4
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 0044d0d9
    FLD1                                ; 0044d0dc
    FDIV float ptr [EBP + 0x20]         ; 0044d0de
    MOV EDI,0x1                         ; 0044d0e1
    FSTP float ptr [ESP + 0x90]         ; 0044d0e6
    FLD float ptr [ESP + 0x4]           ; 0044d0ed
        ;   Label: LAB_0044d0ed
    FDIVR double ptr [0x005cf577]       ; 0044d0f1 | DAT_005cf577
    MOV dword ptr [ESP + 0xa8],EDI      ; 0044d0f7
    FILD dword ptr [ESP + 0xa8]         ; 0044d0fe
    FMULP                               ; 0044d105
    FMUL double ptr [0x005cf557]        ; 0044d107 | DAT_005cf557
    FST float ptr [ESP]                 ; 0044d10d
    FLD1                                ; 0044d110
    FPATAN                              ; 0044d112
    FCOS                                ; 0044d114
    FMUL float ptr [EBP + 0x20]         ; 0044d116
    XOR EAX,EAX                         ; 0044d119
    FSTP float ptr [ESP + 0xa4]         ; 0044d11b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0044d122
        ;   Label: LAB_0044d122
    FLD float ptr [0x005cf55f]          ; 0044d129 | DAT_005cf55f
    FILD dword ptr [ESP + 0xa8]         ; 0044d12f
    FMUL ST1                            ; 0044d136
    FLD float ptr [0x005cf563]          ; 0044d138 | DAT_005cf563
    FXCH                                ; 0044d13e
    FMUL ST1                            ; 0044d140
    FLD double ptr [0x005cf567]         ; 0044d142 | DAT_005cf567
    FXCH                                ; 0044d148
    FMUL ST1                            ; 0044d14a
    LEA ESI,[EAX + 0x1]                 ; 0044d14c
    FLD ST0                             ; 0044d14f
    FSIN                                ; 0044d151
    MOV dword ptr [ESP + 0xa8],ESI      ; 0044d153
    FILD dword ptr [ESP + 0xa8]         ; 0044d15a
    FMULP ST5                           ; 0044d161
    FXCH ST4                            ; 0044d163
    FMULP ST3                           ; 0044d165
    FXCH ST2                            ; 0044d167
    FMULP                               ; 0044d169
    FLD ST0                             ; 0044d16b
    FSIN                                ; 0044d16d
    FXCH ST2                            ; 0044d16f
    FCOS                                ; 0044d171
    FXCH                                ; 0044d173
    FCOS                                ; 0044d175
    FLD float ptr [ESP]                 ; 0044d177
    FXCH ST4                            ; 0044d17a
    FMUL ST4                            ; 0044d17c
    FXCH ST2                            ; 0044d17e
    FMUL ST4                            ; 0044d180
    FXCH ST3                            ; 0044d182
    FMUL ST4                            ; 0044d184
    FXCH                                ; 0044d186
    FMULP ST4                           ; 0044d188
    FXCH                                ; 0044d18a
    FSTP float ptr [ESP + 0x94]         ; 0044d18c
    FXCH                                ; 0044d193
    FSTP float ptr [ESP + 0x98]         ; 0044d195
    FSTP float ptr [ESP + 0x9c]         ; 0044d19c
    FSTP float ptr [ESP + 0xa0]         ; 0044d1a3
    FLDZ                                ; 0044d1aa
    FLD float ptr [EBP + 0x20]          ; 0044d1ac
    FLD ST0                             ; 0044d1af
    FSUB float ptr [ESP + 0xa4]         ; 0044d1b1
    FXCH ST2                            ; 0044d1b8
    FMUL float ptr [ESP + 0xa4]         ; 0044d1ba
    FXCH ST2                            ; 0044d1c1
    FLD float ptr [ESP + 0x90]          ; 0044d1c3
    FXCH                                ; 0044d1ca
    FMUL ST1                            ; 0044d1cc
    FXCH ST3                            ; 0044d1ce
    FST float ptr [ESP + 0x80]          ; 0044d1d0
    FMUL float ptr [ESP + 0x94]         ; 0044d1d7
    FLD float ptr [ESP + 0x80]          ; 0044d1de
    FXCH ST3                            ; 0044d1e5
    FSUB float ptr [ESP + 0x80]         ; 0044d1e7
    FXCH ST3                            ; 0044d1ee
    FMUL float ptr [ESP + 0x98]         ; 0044d1f0
    FXCH ST3                            ; 0044d1f7
    FMULP ST2                           ; 0044d1f9
    FXCH ST3                            ; 0044d1fb
    FLD double ptr [0x005cf56f]         ; 0044d1fd | DAT_005cf56f
    FXCH                                ; 0044d203
    FMUL ST1                            ; 0044d205
    FXCH ST2                            ; 0044d207
    FMULP                               ; 0044d209
    LEA EBX,[ESP + 0x3c]                ; 0044d20b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0044d20f
    MOV EDX,dword ptr [0x0060b280]      ; 0044d216 | DAT_0060b280
    MOV dword ptr [ESP + 0x38],EAX      ; 0044d21c
    FXCH ST3                            ; 0044d220
    FSTP float ptr [ESP + 0x30]         ; 0044d222
    FXCH                                ; 0044d226
    FSTP float ptr [ESP + 0x34]         ; 0044d228
    LEA EAX,[ESP + 0x30]                ; 0044d22c
    CALL FUN_005b7ff0                   ; 0044d230
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8c]        ; 0044d235
    CALL FUN_005b7ff0                   ; 0044d23c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x88]        ; 0044d241
    FLD float ptr [EAX]                 ; 0044d248
    FMUL float ptr [0x005f5050]         ; 0044d24a | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044d250
    FLD float ptr [EAX + 0x4]           ; 0044d252
    FMUL float ptr [0x005f5050]         ; 0044d255 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044d25b
    FLD float ptr [EAX + 0x8]           ; 0044d25e
    FMUL float ptr [0x005f5050]         ; 0044d261 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044d267
    LEA EAX,[ESP + 0x3c]                ; 0044d26a
    PUSH EAX                            ; 0044d26e
    MOV EAX,dword ptr [EDX]             ; 0044d26f
    PUSH EAX                            ; 0044d271
    CALL FUN_0055d723                   ; 0044d272
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0044d277
    FLD float ptr [ESP + 0x80]          ; 0044d27a
    FMUL float ptr [ESP + 0x9c]         ; 0044d281
    FLD float ptr [ESP + 0x80]          ; 0044d288
    FMUL float ptr [ESP + 0xa0]         ; 0044d28f
    LEA EBX,[ESP + 0x48]                ; 0044d296
    MOV EAX,dword ptr [ESP + 0x80]      ; 0044d29a
    MOV EDX,dword ptr [0x0060b280]      ; 0044d2a1 | DAT_0060b280
    MOV dword ptr [ESP + 0x38],EAX      ; 0044d2a7
    FXCH                                ; 0044d2ab
    FSTP float ptr [ESP + 0x30]         ; 0044d2ad
    LEA EAX,[ESP + 0x30]                ; 0044d2b1
    FSTP float ptr [ESP + 0x34]         ; 0044d2b5
    FLD float ptr [EAX]                 ; 0044d2b9
    FMUL float ptr [0x005f5050]         ; 0044d2bb | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044d2c1
    FLD float ptr [EAX + 0x4]           ; 0044d2c3
    FMUL float ptr [0x005f5050]         ; 0044d2c6 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044d2cc
    FLD float ptr [EAX + 0x8]           ; 0044d2cf
    FMUL float ptr [0x005f5050]         ; 0044d2d2 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044d2d8
    LEA EAX,[ESP + 0x48]                ; 0044d2db
    PUSH EAX                            ; 0044d2df
    MOV EAX,dword ptr [EDX]             ; 0044d2e0 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0044d2e2
    PUSH EAX                            ; 0044d2e5
    CALL FUN_0055d723                   ; 0044d2e6
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0044d2eb
    FLD float ptr [ESP + 0xa4]          ; 0044d2ee
    FMUL float ptr [ESP + 0x9c]         ; 0044d2f5
    FLD float ptr [ESP + 0xa4]          ; 0044d2fc
    FMUL float ptr [ESP + 0xa0]         ; 0044d303
    LEA EBX,[ESP + 0x54]                ; 0044d30a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0044d30e
    MOV EDX,dword ptr [0x0060b280]      ; 0044d315 | DAT_0060b280
    MOV dword ptr [ESP + 0x38],EAX      ; 0044d31b
    FXCH                                ; 0044d31f
    FSTP float ptr [ESP + 0x30]         ; 0044d321
    LEA EAX,[ESP + 0x30]                ; 0044d325
    FSTP float ptr [ESP + 0x34]         ; 0044d329
    FLD float ptr [EAX]                 ; 0044d32d
    FMUL float ptr [0x005f5050]         ; 0044d32f | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044d335
    FLD float ptr [EAX + 0x4]           ; 0044d337
    FMUL float ptr [0x005f5050]         ; 0044d33a | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044d340
    FLD float ptr [EAX + 0x8]           ; 0044d343
    FMUL float ptr [0x005f5050]         ; 0044d346 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044d34c
    LEA EAX,[ESP + 0x54]                ; 0044d34f
    PUSH EAX                            ; 0044d353
    MOV EAX,dword ptr [EDX]             ; 0044d354 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0044d356
    PUSH EAX                            ; 0044d359
    CALL FUN_0055d723                   ; 0044d35a
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0044d35f
    FLD float ptr [ESP + 0xa4]          ; 0044d362
    FMUL float ptr [ESP + 0x94]         ; 0044d369
    FLD float ptr [ESP + 0xa4]          ; 0044d370
    FMUL float ptr [ESP + 0x98]         ; 0044d377
    LEA EBX,[ESP + 0x60]                ; 0044d37e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0044d382
    MOV EDX,dword ptr [0x0060b280]      ; 0044d389 | DAT_0060b280
    MOV dword ptr [ESP + 0x38],EAX      ; 0044d38f
    FXCH                                ; 0044d393
    FSTP float ptr [ESP + 0x30]         ; 0044d395
    LEA EAX,[ESP + 0x30]                ; 0044d399
    FSTP float ptr [ESP + 0x34]         ; 0044d39d
    FLD float ptr [EAX]                 ; 0044d3a1
    FMUL float ptr [0x005f5050]         ; 0044d3a3 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044d3a9
    FLD float ptr [EAX + 0x4]           ; 0044d3ab
    FMUL float ptr [0x005f5050]         ; 0044d3ae | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044d3b4
    FLD float ptr [EAX + 0x8]           ; 0044d3b7
    FMUL float ptr [0x005f5050]         ; 0044d3ba | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044d3c0
    LEA EAX,[ESP + 0x60]                ; 0044d3c3
    PUSH EAX                            ; 0044d3c7
    MOV EAX,dword ptr [EDX]             ; 0044d3c8 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0044d3ca
    PUSH EAX                            ; 0044d3cf
    CALL FUN_0055d723                   ; 0044d3d0
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0044d3d5
    MOV EDX,dword ptr [0x0060b280]      ; 0044d3d8 | DAT_0060b280
    MOV EBX,dword ptr [EDX]             ; 0044d3de | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044d3e0
    MOV dword ptr [EBX + 0x2c],EAX      ; 0044d3e7
    MOV EAX,dword ptr [EDX]             ; 0044d3ea | DAT_01ba5c50
    MOV dword ptr [EAX + 0x28],0xffff   ; 0044d3ec
    MOV EAX,dword ptr [EDX]             ; 0044d3f3 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x24],0xffff   ; 0044d3f5
    MOV EAX,dword ptr [EDX]             ; 0044d3fc | DAT_01ba5c50
    MOV dword ptr [EAX + 0x20],0xffff   ; 0044d3fe
    MOV EAX,dword ptr [EDX]             ; 0044d405 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0044d407
    MOV EAX,dword ptr [EDX]             ; 0044d40e | DAT_01ba5c50
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0044d410
    MOV EBX,dword ptr [EDX]             ; 0044d417 | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044d419
    MOV dword ptr [EBX + 0x5c],EAX      ; 0044d420
    MOV EAX,dword ptr [EDX]             ; 0044d423 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x58],0xffff   ; 0044d425
    MOV EAX,dword ptr [EDX]             ; 0044d42c | DAT_01ba5c50
    MOV dword ptr [EAX + 0x54],0xffff   ; 0044d42e
    MOV EAX,dword ptr [EDX]             ; 0044d435 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x50],0xffff   ; 0044d437
    MOV EAX,dword ptr [EDX]             ; 0044d43e | DAT_01ba5c50
    MOV dword ptr [EAX + 0x48],0x80000  ; 0044d440
    MOV EAX,dword ptr [EDX]             ; 0044d447 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0044d449
    MOV EBX,dword ptr [EDX]             ; 0044d450 | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0044d452
    MOV dword ptr [EBX + 0x8c],EAX      ; 0044d459
    MOV EAX,dword ptr [EDX]             ; 0044d45f | DAT_01ba5c50
    MOV dword ptr [EAX + 0x88],0xffff   ; 0044d461
    MOV EAX,dword ptr [EDX]             ; 0044d46b | DAT_01ba5c50
    MOV dword ptr [EAX + 0x84],0xffff   ; 0044d46d
    MOV EAX,dword ptr [EDX]             ; 0044d477 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x80],0xffff   ; 0044d479
    MOV EAX,dword ptr [EDX]             ; 0044d483 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x78],0x80000  ; 0044d485
    MOV EAX,dword ptr [EDX]             ; 0044d48c | DAT_01ba5c50
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0044d48e
    MOV EBX,dword ptr [EDX]             ; 0044d495 | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0044d497
    MOV dword ptr [EBX + 0xbc],EAX      ; 0044d49e
    MOV EAX,dword ptr [EDX]             ; 0044d4a4 | DAT_01ba5c50
    MOV dword ptr [EAX + 0xb8],0xffff   ; 0044d4a6
    MOV EAX,dword ptr [EDX]             ; 0044d4b0 | DAT_01ba5c50
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0044d4b2
    MOV EAX,dword ptr [EDX]             ; 0044d4bc | DAT_01ba5c50
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0044d4be
    MOV EAX,dword ptr [EDX]             ; 0044d4c8 | DAT_01ba5c50
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0044d4ca
    MOV EAX,dword ptr [EDX]             ; 0044d4d4 | DAT_01ba5c50
    MOV ECX,0x4                         ; 0044d4d6
    XOR EBX,EBX                         ; 0044d4db
    MOV dword ptr [EAX + 0xac],0x80000  ; 0044d4dd
    MOV EAX,0x3                         ; 0044d4e7
    MOV dword ptr [ESP + 0xc],ECX       ; 0044d4ec
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044d4f0
    MOV dword ptr [ESP + 0x18],EBX      ; 0044d4f4
    MOV dword ptr [ESP + 0x14],EBX      ; 0044d4f8
    MOV dword ptr [ESP + 0x10],EBX      ; 0044d4fc
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044d500
    LEA EAX,[ESP + 0x8]                 ; 0044d504
    MOV dword ptr [ESP + 0x20],EBX      ; 0044d508
    PUSH EAX                            ; 0044d50c
    MOV ECX,0x1                         ; 0044d50d
    MOV EBX,0x2                         ; 0044d512
    PUSH EDX                            ; 0044d517 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x2c],ECX      ; 0044d518
    MOV dword ptr [ESP + 0x30],EBX      ; 0044d51c
    CALL FUN_0046a930                   ; 0044d520
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a930()
    ADD ESP,0x8                         ; 0044d525
    MOV EAX,ESI                         ; 0044d528
    CMP ESI,0x8                         ; 0044d52a
    JL 0x0044d122                       ; 0044d52d
        ;   XREF to: 0044d122 (CONDITIONAL_JUMP)  ; LAB_0044d122
    INC EDI                             ; 0044d533
    CMP EDI,0x8                         ; 0044d534
    JL 0x0044d0ed                       ; 0044d537
        ;   XREF to: 0044d0ed (CONDITIONAL_JUMP)  ; LAB_0044d0ed
    MOV EDX,dword ptr [0x0060b280]      ; 0044d53d | DAT_0060b280
    PUSH EDX                            ; 0044d543 | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0044d544
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 0044d549
    PUSH 0x0                            ; 0044d54c
    MOV ECX,dword ptr [0x0060b280]      ; 0044d54e | DAT_0060b280
    PUSH ECX                            ; 0044d554 | DAT_01ba5c50
    CALL FUN_0046b8d0                   ; 0044d555
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 0044d55a
    MOV ESP,EBP                         ; 0044d55d
    POP EBP                             ; 0044d55f
    POP EDI                             ; 0044d560
    POP ESI                             ; 0044d561
    POP EBX                             ; 0044d562
    RET                                 ; 0044d563

