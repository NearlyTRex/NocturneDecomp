; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0048b150(int param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5 )
;
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
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
; undefined8       Stack[-0x7c]:8  local_7c
; undefined4       Stack[-0x74]:4  local_74
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
;
; XREF[7]:
;   FUN_0041e130 at 0041e1cf
;   FUN_0048b040 at 0048b05d
;   FUN_004e56e0 at 004e57b7
;   FUN_00532250 at 005323c7
;   FUN_00557110 at 00557187
;   FUN_00557300 at 00557350
;   FUN_005a4260 at 005a4abb
;
; Referenced Globals:
;   undefined4 DAT_005db94c
;
; Called Functions:
;   FUN_00458210
;   FUN_0048afe0
;   FUN_005c03a0
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b150
        ;   Label: FUN_0048b150
    PUSH ESI                            ; 0048b151
    PUSH EDI                            ; 0048b152
    PUSH EBP                            ; 0048b153
    MOV EBP,ESP                         ; 0048b154
    SUB ESP,0xac                        ; 0048b156
    AND ESP,0xfffffff8                  ; 0048b15c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0048b15f
    MOV EBX,dword ptr [EBP + 0x20]      ; 0048b162
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b165
    FLD float ptr [EAX]                 ; 0048b168
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b16a
    FSUB float ptr [EAX + 0x10]         ; 0048b16d
    FDIV float ptr [EAX + 0x28]         ; 0048b170
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b173
    FLD float ptr [EAX + 0x4]           ; 0048b176
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b179
    FSUB float ptr [EAX + 0x14]         ; 0048b17c
    FDIV float ptr [EAX + 0x2c]         ; 0048b17f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b182
    FLD float ptr [EAX + 0x8]           ; 0048b185
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b188
    FSUB float ptr [EAX + 0x18]         ; 0048b18b
    FDIV float ptr [EAX + 0x30]         ; 0048b18e
    FXCH ST2                            ; 0048b191
    FST float ptr [ESP + 0xc]           ; 0048b193
    FXCH                                ; 0048b197
    FSTP float ptr [ESP + 0x10]         ; 0048b199
    FXCH                                ; 0048b19d
    FSTP float ptr [ESP + 0x8]          ; 0048b19f
    SUB ESP,0x8                         ; 0048b1a3
    FSTP double ptr [ESP]               ; 0048b1a6
    CALL FUN_005c0880                   ; 0048b1a9
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048b1ae
    MOV dword ptr [ESP + 0x50],EDX      ; 0048b1b2
    FLD double ptr [ESP + 0x4c]         ; 0048b1b6
    ADD ESP,0x8                         ; 0048b1ba
    CALL FUN_005c03a0                   ; 0048b1bd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FLD float ptr [ESP + 0x10]          ; 0048b1c2
    FXCH                                ; 0048b1c6
    FISTP dword ptr [ESP + 0x88]        ; 0048b1c8
    SUB ESP,0x8                         ; 0048b1cf
    FSTP double ptr [ESP]               ; 0048b1d2
    CALL FUN_005c0880                   ; 0048b1d5
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048b1da
    MOV dword ptr [ESP + 0x50],EDX      ; 0048b1de
    FLD double ptr [ESP + 0x4c]         ; 0048b1e2
    ADD ESP,0x8                         ; 0048b1e6
    CALL FUN_005c03a0                   ; 0048b1e9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FLD float ptr [ESP + 0x8]           ; 0048b1ee
    FXCH                                ; 0048b1f2
    FISTP dword ptr [ESP + 0x84]        ; 0048b1f4
    SUB ESP,0x8                         ; 0048b1fb
    FSTP double ptr [ESP]               ; 0048b1fe
    CALL FUN_005c0880                   ; 0048b201
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048b206
    MOV dword ptr [ESP + 0x50],EDX      ; 0048b20a
    FLD double ptr [ESP + 0x4c]         ; 0048b20e
    ADD ESP,0x8                         ; 0048b212
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b215
    FLD float ptr [ESI]                 ; 0048b218
    FSUB float ptr [EAX + 0x10]         ; 0048b21a
    FDIV float ptr [EAX + 0x28]         ; 0048b21d
    FLD float ptr [ESI + 0x4]           ; 0048b220
    FSUB float ptr [EAX + 0x14]         ; 0048b223
    FDIV float ptr [EAX + 0x2c]         ; 0048b226
    FLD float ptr [ESI + 0x8]           ; 0048b229
    FSUB float ptr [EAX + 0x18]         ; 0048b22c
    FDIV float ptr [EAX + 0x30]         ; 0048b22f
    FXCH ST3                            ; 0048b232
    CALL FUN_005c03a0                   ; 0048b234
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8c]        ; 0048b239
    FXCH                                ; 0048b240
    FSTP float ptr [ESP + 0x4]          ; 0048b242
    FSTP float ptr [ESP + 0x1c]         ; 0048b246
    FSTP float ptr [ESP + 0x14]         ; 0048b24a
    FLD float ptr [ESP + 0x4]           ; 0048b24e
    SUB ESP,0x8                         ; 0048b252
    FSTP double ptr [ESP]               ; 0048b255
    CALL FUN_005c0880                   ; 0048b258
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048b25d
    MOV dword ptr [ESP + 0x50],EDX      ; 0048b261
    FLD double ptr [ESP + 0x4c]         ; 0048b265
    ADD ESP,0x8                         ; 0048b269
    CALL FUN_005c03a0                   ; 0048b26c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FLD float ptr [ESP + 0x1c]          ; 0048b271
    FXCH                                ; 0048b275
    FISTP dword ptr [ESP + 0x64]        ; 0048b277
    SUB ESP,0x8                         ; 0048b27b
    FSTP double ptr [ESP]               ; 0048b27e
    CALL FUN_005c0880                   ; 0048b281
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048b286
    MOV dword ptr [ESP + 0x50],EDX      ; 0048b28a
    FLD double ptr [ESP + 0x4c]         ; 0048b28e
    ADD ESP,0x8                         ; 0048b292
    CALL FUN_005c03a0                   ; 0048b295
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FLD float ptr [ESP + 0x14]          ; 0048b29a
    FXCH                                ; 0048b29e
    FISTP dword ptr [ESP + 0x9c]        ; 0048b2a0
    SUB ESP,0x8                         ; 0048b2a7
    FSTP double ptr [ESP]               ; 0048b2aa
    CALL FUN_005c0880                   ; 0048b2ad
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048b2b2
    MOV dword ptr [ESP + 0x50],EDX      ; 0048b2b6
    FLD double ptr [ESP + 0x4c]         ; 0048b2ba
    ADD ESP,0x8                         ; 0048b2be
    CALL FUN_005c03a0                   ; 0048b2c1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    MOV EDX,dword ptr [ESP + 0x88]      ; 0048b2c6
    FISTP dword ptr [ESP + 0x60]        ; 0048b2cd
    TEST EDX,EDX                        ; 0048b2d1
    JL 0x0048b630                       ; 0048b2d3
        ;   XREF to: 0048b630 (CONDITIONAL_JUMP)  ; LAB_0048b630
    CMP dword ptr [ESP + 0x84],0x0      ; 0048b2d9
        ;   Label: LAB_0048b2d9
    JL 0x0048b64e                       ; 0048b2e1
        ;   XREF to: 0048b64e (CONDITIONAL_JUMP)  ; LAB_0048b64e
    CMP dword ptr [ESP + 0x8c],0x0      ; 0048b2e7
        ;   Label: LAB_0048b2e7
    JL 0x0048b66f                       ; 0048b2ef
        ;   XREF to: 0048b66f (CONDITIONAL_JUMP)  ; LAB_0048b66f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048b2f5
        ;   Label: LAB_0048b2f5
    MOV EAX,dword ptr [ESP + 0x88]      ; 0048b2f8
    MOV EDI,dword ptr [EDX + 0x40]      ; 0048b2ff
    CMP EAX,EDI                         ; 0048b302
    JL 0x0048b310                       ; 0048b304
        ;   XREF to: 0048b310 (CONDITIONAL_JUMP)  ; LAB_0048b310
    CMP EDI,dword ptr [ESP + 0x64]      ; 0048b306
    JLE 0x0048b63b                      ; 0048b30a
        ;   XREF to: 0048b63b (CONDITIONAL_JUMP)  ; LAB_0048b63b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048b310
        ;   Label: LAB_0048b310
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048b313
    MOV EDI,dword ptr [EDX + 0x44]      ; 0048b31a
    CMP EAX,EDI                         ; 0048b31d
    JL 0x0048b32e                       ; 0048b31f
        ;   XREF to: 0048b32e (CONDITIONAL_JUMP)  ; LAB_0048b32e
    CMP EDI,dword ptr [ESP + 0x9c]      ; 0048b321
    JLE 0x0048b63b                      ; 0048b328
        ;   XREF to: 0048b63b (CONDITIONAL_JUMP)  ; LAB_0048b63b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048b32e
        ;   Label: LAB_0048b32e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048b331
    MOV EDI,dword ptr [EDX + 0x48]      ; 0048b338
    CMP EAX,EDI                         ; 0048b33b
    JL 0x0048b349                       ; 0048b33d
        ;   XREF to: 0048b349 (CONDITIONAL_JUMP)  ; LAB_0048b349
    CMP EDI,dword ptr [ESP + 0x60]      ; 0048b33f
    JLE 0x0048b63b                      ; 0048b343
        ;   XREF to: 0048b63b (CONDITIONAL_JUMP)  ; LAB_0048b63b
    FLD float ptr [ESI + 0x4]           ; 0048b349
        ;   Label: LAB_0048b349
    FLD float ptr [ESI + 0x8]           ; 0048b34c
    FLD float ptr [ESI]                 ; 0048b34f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b351
    LEA EDI,[ESP + 0x38]                ; 0048b354
    LEA ESI,[ESP + 0x2c]                ; 0048b358
    FSUB float ptr [EAX]                ; 0048b35c
    FXCH ST2                            ; 0048b35e
    FSUB float ptr [EAX + 0x4]          ; 0048b360
    FXCH                                ; 0048b363
    FSUB float ptr [EAX + 0x8]          ; 0048b365
    FXCH                                ; 0048b368
    FSTP float ptr [ESP + 0x30]         ; 0048b36a
    FSTP float ptr [ESP + 0x34]         ; 0048b36e
    FSTP float ptr [ESP + 0x2c]         ; 0048b372
    MOVSD ES:EDI,ESI                    ; 0048b376
    MOVSD ES:EDI,ESI                    ; 0048b377
    MOVSD ES:EDI,ESI                    ; 0048b378
    MOV EAX,dword ptr [ESP + 0x88]      ; 0048b379
    MOV EDI,dword ptr [ESP + 0x64]      ; 0048b380
    MOV ESI,0x1                         ; 0048b384
    CMP EAX,EDI                         ; 0048b389
    JZ 0x0048b68d                       ; 0048b38b
        ;   XREF to: 0048b68d (CONDITIONAL_JUMP)  ; LAB_0048b68d
    FLD float ptr [ESP + 0x3c]          ; 0048b391
        ;   Label: LAB_0048b391
    FMUL ST0                            ; 0048b395
    FLD float ptr [ESP + 0x38]          ; 0048b397
    FMUL ST0                            ; 0048b39b
    FADDP                               ; 0048b39d
    FLD float ptr [ESP + 0x40]          ; 0048b39f
    FMUL ST0                            ; 0048b3a3
    FADDP                               ; 0048b3a5
    FSQRT                               ; 0048b3a7
    FST float ptr [ESP]                 ; 0048b3a9
    FLDZ                                ; 0048b3ac
    FCOMPP                              ; 0048b3ae
    FNSTSW AX                           ; 0048b3b0
    SAHF                                ; 0048b3b2
    JNC 0x0048b63b                      ; 0048b3b3
        ;   XREF to: 0048b63b (CONDITIONAL_JUMP)  ; LAB_0048b63b
    FLD float ptr [ESP + 0x4]           ; 0048b3b9
    FSUB float ptr [ESP + 0xc]          ; 0048b3bd
    FABS                                ; 0048b3c1
    FLD float ptr [ESP + 0x1c]          ; 0048b3c3
    FSUB float ptr [ESP + 0x10]         ; 0048b3c7
    FABS                                ; 0048b3cb
    FLD float ptr [ESP + 0x14]          ; 0048b3cd
    FSUB float ptr [ESP + 0x8]          ; 0048b3d1
    FABS                                ; 0048b3d5
    FLD float ptr [0x005db94c]          ; 0048b3d7 | DAT_005db94c
    FDIV float ptr [ESP]                ; 0048b3dd
    FXCH ST3                            ; 0048b3e0
    FMUL ST3                            ; 0048b3e2
    FXCH ST2                            ; 0048b3e4
    FMUL ST3                            ; 0048b3e6
    FXCH                                ; 0048b3e8
    FMULP ST3                           ; 0048b3ea
    FXCH                                ; 0048b3ec
    CALL FUN_005c03a0                   ; 0048b3ee
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x7c]        ; 0048b3f3
    FLD float ptr [ESP + 0x38]          ; 0048b3f7
    FXCH                                ; 0048b3fb
    CALL FUN_005c03a0                   ; 0048b3fd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x80]        ; 0048b402
    FLDZ                                ; 0048b409
    FXCH ST2                            ; 0048b40b
    CALL FUN_005c03a0                   ; 0048b40d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x78]        ; 0048b412
    FXCH                                ; 0048b416
    FCOMPP                              ; 0048b418
    FNSTSW AX                           ; 0048b41a
    SAHF                                ; 0048b41c
    JA 0x0048b6b7                       ; 0048b41d
        ;   XREF to: 0048b6b7 (CONDITIONAL_JUMP)  ; LAB_0048b6b7
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048b423
    MOV EDI,dword ptr [ESP + 0x88]      ; 0048b427
    SUB EAX,EDI                         ; 0048b42e
    MOV ECX,0x1                         ; 0048b430
    ADD ESI,EAX                         ; 0048b435
    LEA EAX,[EDI + ECX*0x1]             ; 0048b437
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b43a
    FILD dword ptr [ESP + 0xa8]         ; 0048b441
    FSUB float ptr [ESP + 0xc]          ; 0048b448
    MOV dword ptr [ESP + 0x6c],ECX      ; 0048b44c
    FSTP float ptr [ESP + 0x58]         ; 0048b450
        ;   Label: LAB_0048b450
    FLD float ptr [ESP + 0x3c]          ; 0048b454
    FLDZ                                ; 0048b458
    FCOMPP                              ; 0048b45a
    FNSTSW AX                           ; 0048b45c
    SAHF                                ; 0048b45e
    JA 0x0048b6eb                       ; 0048b45f
        ;   XREF to: 0048b6eb (CONDITIONAL_JUMP)  ; LAB_0048b6eb
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0048b465
    MOV EDI,dword ptr [ESP + 0x84]      ; 0048b46c
    SUB EAX,EDI                         ; 0048b473
    MOV ECX,0x1                         ; 0048b475
    ADD ESI,EAX                         ; 0048b47a
    LEA EAX,[EDI + ECX*0x1]             ; 0048b47c
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b47f
    FILD dword ptr [ESP + 0xa8]         ; 0048b486
    FSUB float ptr [ESP + 0x10]         ; 0048b48d
    MOV dword ptr [ESP + 0x70],ECX      ; 0048b491
    FSTP float ptr [ESP + 0x5c]         ; 0048b495
        ;   Label: LAB_0048b495
    FLD float ptr [ESP + 0x40]          ; 0048b499
    FLDZ                                ; 0048b49d
    FCOMPP                              ; 0048b49f
    FNSTSW AX                           ; 0048b4a1
    SAHF                                ; 0048b4a3
    JA 0x0048b724                       ; 0048b4a4
        ;   XREF to: 0048b724 (CONDITIONAL_JUMP)  ; LAB_0048b724
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048b4aa
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0048b4ae
    SUB EAX,EDI                         ; 0048b4b5
    MOV ECX,0x1                         ; 0048b4b7
    ADD ESI,EAX                         ; 0048b4bc
    LEA EAX,[EDI + ECX*0x1]             ; 0048b4be
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b4c1
    FILD dword ptr [ESP + 0xa8]         ; 0048b4c8
    FSUB float ptr [ESP + 0x8]          ; 0048b4cf
    MOV dword ptr [ESP + 0xa0],ECX      ; 0048b4d3
    FSTP float ptr [ESP + 0x74]         ; 0048b4da
        ;   Label: LAB_0048b4da
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048b4de
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b4e5
    FILD dword ptr [ESP + 0xa8]         ; 0048b4ec
    FLD ST0                             ; 0048b4f3
    FMUL float ptr [ESP + 0x58]         ; 0048b4f5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048b4f9
    FXCH                                ; 0048b4fd
    FLD float ptr [ESP + 0x74]          ; 0048b4ff
    FXCH                                ; 0048b503
    FMUL ST1                            ; 0048b505
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b507
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048b50e
    FILD dword ptr [ESP + 0xa8]         ; 0048b512
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b519
    FLD ST0                             ; 0048b520
    FMUL float ptr [ESP + 0x5c]         ; 0048b522
    FILD dword ptr [ESP + 0xa8]         ; 0048b526
    FLD ST0                             ; 0048b52d
    FMUL float ptr [ESP + 0x58]         ; 0048b52f
    FXCH                                ; 0048b533
    FMUL float ptr [ESP + 0x5c]         ; 0048b535
    FXCH ST2                            ; 0048b539
    FSUBP ST6,ST0                       ; 0048b53b
    FXCH ST2                            ; 0048b53d
    FMULP ST4                           ; 0048b53f
    FXCH ST4                            ; 0048b541
    CALL FUN_005c03a0                   ; 0048b543
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST4                            ; 0048b548
    FSUBP ST2,ST0                       ; 0048b54a
    FXCH ST3                            ; 0048b54c
    FISTP dword ptr [ESP + 0x90]        ; 0048b54e
    CALL FUN_005c03a0                   ; 0048b555
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048b55a
    FSUBP ST2,ST0                       ; 0048b55c
    FISTP dword ptr [ESP + 0x98]        ; 0048b55e
    CALL FUN_005c03a0                   ; 0048b565
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x94]        ; 0048b56a
    MOV dword ptr [ESP + 0x18],0x3f800347 ; 0048b571
        ;   Label: LAB_0048b571
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0048b579
        ;   Label: LAB_0048b579
    PUSH ECX                            ; 0048b580
    MOV EDI,dword ptr [ESP + 0x88]      ; 0048b581
    PUSH EDI                            ; 0048b588
    MOV EAX,dword ptr [ESP + 0x90]      ; 0048b589
    PUSH EAX                            ; 0048b590
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048b591
    PUSH EDX                            ; 0048b594
    CALL FUN_0048afe0                   ; 0048b595
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048afe0()
    ADD ESP,0x10                        ; 0048b59a
    TEST EAX,EAX                        ; 0048b59d
    JNZ 0x0048b75d                      ; 0048b59f
        ;   XREF to: 0048b75d (CONDITIONAL_JUMP)  ; LAB_0048b75d
    DEC ESI                             ; 0048b5a5
        ;   Label: LAB_0048b5a5
    TEST ESI,ESI                        ; 0048b5a6
    JLE 0x0048b853                      ; 0048b5a8
        ;   XREF to: 0048b853 (CONDITIONAL_JUMP)  ; LAB_0048b853
    MOV EDX,dword ptr [ESP + 0x98]      ; 0048b5ae
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048b5b5
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0048b5bc
    ADD EDX,EAX                         ; 0048b5c3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048b5c5
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0048b5cc
    ADD EAX,ECX                         ; 0048b5d0
    MOV ECX,dword ptr [ESP + 0x94]      ; 0048b5d2
    SUB ECX,EDI                         ; 0048b5d9
    CMP dword ptr [ESP + 0x90],0x0      ; 0048b5db
    JL 0x0048b7f3                       ; 0048b5e3
        ;   XREF to: 0048b7f3 (CONDITIONAL_JUMP)  ; LAB_0048b7f3
    MOV EDI,dword ptr [ESP + 0x98]      ; 0048b5e9
    TEST EDI,EDI                        ; 0048b5f0
    JL 0x0048b7fe                       ; 0048b5f2
        ;   XREF to: 0048b7fe (CONDITIONAL_JUMP)  ; LAB_0048b7fe
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048b5f8
    MOV EDX,dword ptr [ESP + 0x84]      ; 0048b5fc
    MOV ECX,dword ptr [ESP + 0x90]      ; 0048b603
    ADD EDX,EAX                         ; 0048b60a
    SUB ECX,dword ptr [ESP + 0x7c]      ; 0048b60c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048b610
    MOV dword ptr [ESP + 0x84],EDX      ; 0048b614
    SUB EDI,EAX                         ; 0048b61b
    MOV dword ptr [ESP + 0x90],ECX      ; 0048b61d
    MOV dword ptr [ESP + 0x98],EDI      ; 0048b624
    JMP 0x0048b579                      ; 0048b62b
        ;   XREF to: 0048b579 (UNCONDITIONAL_JUMP)  ; LAB_0048b579
    CMP dword ptr [ESP + 0x64],0x0      ; 0048b630
        ;   Label: LAB_0048b630
    JGE 0x0048b2d9                      ; 0048b635
        ;   XREF to: 0048b2d9 (CONDITIONAL_JUMP)  ; LAB_0048b2d9
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 0048b63b
        ;   Label: LAB_0048b63b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048b643
    MOV ESP,EBP                         ; 0048b647
    POP EBP                             ; 0048b649
    POP EDI                             ; 0048b64a
    POP ESI                             ; 0048b64b
    POP EBX                             ; 0048b64c
    RET                                 ; 0048b64d
    CMP dword ptr [ESP + 0x9c],0x0      ; 0048b64e
        ;   Label: LAB_0048b64e
    JGE 0x0048b2e7                      ; 0048b656
        ;   XREF to: 0048b2e7 (CONDITIONAL_JUMP)  ; LAB_0048b2e7
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 0048b65c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048b664
    MOV ESP,EBP                         ; 0048b668
    POP EBP                             ; 0048b66a
    POP EDI                             ; 0048b66b
    POP ESI                             ; 0048b66c
    POP EBX                             ; 0048b66d
    RET                                 ; 0048b66e
    CMP dword ptr [ESP + 0x60],0x0      ; 0048b66f
        ;   Label: LAB_0048b66f
    JGE 0x0048b2f5                      ; 0048b674
        ;   XREF to: 0048b2f5 (CONDITIONAL_JUMP)  ; LAB_0048b2f5
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 0048b67a
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048b682
    MOV ESP,EBP                         ; 0048b686
    POP EBP                             ; 0048b688
    POP EDI                             ; 0048b689
    POP ESI                             ; 0048b68a
    POP EBX                             ; 0048b68b
    RET                                 ; 0048b68c
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048b68d
        ;   Label: LAB_0048b68d
    CMP EAX,dword ptr [ESP + 0x9c]      ; 0048b694
    JNZ 0x0048b391                      ; 0048b69b
        ;   XREF to: 0048b391 (CONDITIONAL_JUMP)  ; LAB_0048b391
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048b6a1
    CMP EAX,dword ptr [ESP + 0x60]      ; 0048b6a8
    JNZ 0x0048b391                      ; 0048b6ac
        ;   XREF to: 0048b391 (CONDITIONAL_JUMP)  ; LAB_0048b391
    JMP 0x0048b571                      ; 0048b6b2
        ;   XREF to: 0048b571 (UNCONDITIONAL_JUMP)  ; LAB_0048b571
    MOV EAX,dword ptr [ESP + 0x88]      ; 0048b6b7
        ;   Label: LAB_0048b6b7
    SUB EAX,dword ptr [ESP + 0x64]      ; 0048b6be
    ADD ESI,EAX                         ; 0048b6c2
    MOV EAX,dword ptr [ESP + 0x88]      ; 0048b6c4
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b6cb
    MOV EDI,0xffffffff                  ; 0048b6d2
    FILD dword ptr [ESP + 0xa8]         ; 0048b6d7
    FSUBR float ptr [ESP + 0xc]         ; 0048b6de
    MOV dword ptr [ESP + 0x6c],EDI      ; 0048b6e2
    JMP 0x0048b450                      ; 0048b6e6
        ;   XREF to: 0048b450 (UNCONDITIONAL_JUMP)  ; LAB_0048b450
    MOV EAX,0xffffffff                  ; 0048b6eb
        ;   Label: LAB_0048b6eb
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0048b6f0
    MOV dword ptr [ESP + 0x70],EAX      ; 0048b6f7
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048b6fb
    SUB EAX,EDX                         ; 0048b702
    ADD ESI,EAX                         ; 0048b704
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048b706
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b70d
    FILD dword ptr [ESP + 0xa8]         ; 0048b714
    FSUBR float ptr [ESP + 0x10]        ; 0048b71b
    JMP 0x0048b495                      ; 0048b71f
        ;   XREF to: 0048b495 (UNCONDITIONAL_JUMP)  ; LAB_0048b495
    MOV EAX,0xffffffff                  ; 0048b724
        ;   Label: LAB_0048b724
    MOV EDX,dword ptr [ESP + 0x60]      ; 0048b729
    MOV dword ptr [ESP + 0xa0],EAX      ; 0048b72d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048b734
    SUB EAX,EDX                         ; 0048b73b
    ADD ESI,EAX                         ; 0048b73d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048b73f
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b746
    FILD dword ptr [ESP + 0xa8]         ; 0048b74d
    FSUBR float ptr [ESP + 0x8]         ; 0048b754
    JMP 0x0048b4da                      ; 0048b758
        ;   XREF to: 0048b4da (UNCONDITIONAL_JUMP)  ; LAB_0048b4da
    LEA EDX,[ESP + 0x4c]                ; 0048b75d
        ;   Label: LAB_0048b75d
    PUSH EDX                            ; 0048b761
    LEA EDX,[ESP + 0x24]                ; 0048b762
    PUSH EDX                            ; 0048b766
    LEA EDX,[ESP + 0x40]                ; 0048b767
    PUSH EDX                            ; 0048b76b
    MOV ECX,dword ptr [EBP + 0x18]      ; 0048b76c
    PUSH ECX                            ; 0048b76f
    PUSH EAX                            ; 0048b770
    CALL FUN_00458210                   ; 0048b771
        ;   XREF to: 00458210 (UNCONDITIONAL_CALL)  ; undefined FUN_00458210()
    MOV dword ptr [ESP + 0xbc],EAX      ; 0048b776
    FLD float ptr [ESP + 0xbc]          ; 0048b77d
    ADD ESP,0x14                        ; 0048b784
    FST float ptr [ESP + 0xa4]          ; 0048b787
    FCOMP float ptr [ESP + 0x18]        ; 0048b78e
    FNSTSW AX                           ; 0048b792
    SAHF                                ; 0048b794
    JNC 0x0048b7cf                      ; 0048b795
        ;   XREF to: 0048b7cf (CONDITIONAL_JUMP)  ; LAB_0048b7cf
    TEST EBX,EBX                        ; 0048b797
    JZ 0x0048b7b7                       ; 0048b799
        ;   XREF to: 0048b7b7 (CONDITIONAL_JUMP)  ; LAB_0048b7b7
    LEA EAX,[ESP + 0x20]                ; 0048b79b
    CMP EBX,EAX                         ; 0048b79f
    JZ 0x0048b7b7                       ; 0048b7a1
        ;   XREF to: 0048b7b7 (CONDITIONAL_JUMP)  ; LAB_0048b7b7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048b7a3
    MOV dword ptr [EBX],EAX             ; 0048b7a7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048b7a9
    MOV dword ptr [EBX + 0x4],EAX       ; 0048b7ad
    MOV EAX,dword ptr [ESP + 0x28]      ; 0048b7b0
    MOV dword ptr [EBX + 0x8],EAX       ; 0048b7b4
    MOV EDI,dword ptr [EBP + 0x24]      ; 0048b7b7
        ;   Label: LAB_0048b7b7
    TEST EDI,EDI                        ; 0048b7ba
    JZ 0x0048b7c4                       ; 0048b7bc
        ;   XREF to: 0048b7c4 (CONDITIONAL_JUMP)  ; LAB_0048b7c4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048b7be
    MOV dword ptr [EDI],EAX             ; 0048b7c2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0048b7c4
        ;   Label: LAB_0048b7c4
    MOV dword ptr [ESP + 0x18],EAX      ; 0048b7cb
    FLD float ptr [ESP + 0x18]          ; 0048b7cf
        ;   Label: LAB_0048b7cf
    FLD1                                ; 0048b7d3
    FCOMPP                              ; 0048b7d5
    FNSTSW AX                           ; 0048b7d7
    SAHF                                ; 0048b7d9
    JC 0x0048b5a5                       ; 0048b7da
        ;   XREF to: 0048b5a5 (CONDITIONAL_JUMP)  ; LAB_0048b5a5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048b7e0
    MOV dword ptr [ESP + 0x68],EAX      ; 0048b7e4
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048b7e8
    MOV ESP,EBP                         ; 0048b7ec
    POP EBP                             ; 0048b7ee
    POP EDI                             ; 0048b7ef
    POP ESI                             ; 0048b7f0
    POP EBX                             ; 0048b7f1
    RET                                 ; 0048b7f2
    MOV EDI,dword ptr [ESP + 0x94]      ; 0048b7f3
        ;   Label: LAB_0048b7f3
    TEST EDI,EDI                        ; 0048b7fa
    JL 0x0048b818                       ; 0048b7fc
        ;   XREF to: 0048b818 (CONDITIONAL_JUMP)  ; LAB_0048b818
    MOV dword ptr [ESP + 0x94],ECX      ; 0048b7fe
        ;   Label: LAB_0048b7fe
    MOV dword ptr [ESP + 0x98],EDX      ; 0048b805
    MOV dword ptr [ESP + 0x8c],EAX      ; 0048b80c
    JMP 0x0048b579                      ; 0048b813
        ;   XREF to: 0048b579 (UNCONDITIONAL_JUMP)  ; LAB_0048b579
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048b818
        ;   Label: LAB_0048b818
    MOV EDX,dword ptr [ESP + 0x88]      ; 0048b81c
    MOV ECX,dword ptr [ESP + 0x90]      ; 0048b823
    ADD EDX,EAX                         ; 0048b82a
    ADD ECX,dword ptr [ESP + 0x80]      ; 0048b82c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048b833
    MOV dword ptr [ESP + 0x88],EDX      ; 0048b837
    ADD EDI,EAX                         ; 0048b83e
    MOV dword ptr [ESP + 0x90],ECX      ; 0048b840
    MOV dword ptr [ESP + 0x94],EDI      ; 0048b847
    JMP 0x0048b579                      ; 0048b84e
        ;   XREF to: 0048b579 (UNCONDITIONAL_JUMP)  ; LAB_0048b579
    MOV EAX,dword ptr [EBP + 0x24]      ; 0048b853
        ;   Label: LAB_0048b853
    TEST EAX,EAX                        ; 0048b856
    JZ 0x0048b63b                       ; 0048b858
        ;   XREF to: 0048b63b (CONDITIONAL_JUMP)  ; LAB_0048b63b
    MOV dword ptr [EAX],0x1             ; 0048b85e
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 0048b864
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048b86c
    MOV ESP,EBP                         ; 0048b870
    POP EBP                             ; 0048b872
    POP EDI                             ; 0048b873
    POP ESI                             ; 0048b874
    POP EBX                             ; 0048b875
    RET                                 ; 0048b876

