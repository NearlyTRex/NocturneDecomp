; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5080(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc4ed
;   undefined4 DAT_005dc4f5
;   undefined4 DAT_005dc4fd
;   undefined4 DAT_005dc505
;   undefined4 DAT_005dc50d
;   undefined4 DAT_005f98bc
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_00408a80
;   FUN_00449280
;   FUN_00449530
;   FUN_0044fd00
;   FUN_0044fd20
;   FUN_0046ca00
;   FUN_004779e0
;   FUN_004e6240
;   FUN_004e6a50
;   FUN_004e7600
;   FUN_00591530
;   FUN_005916b0
;   FUN_00591c10
;   FUN_00591de0
;   FUN_00592720
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5080
        ;   Label: FUN_004e5080
    PUSH ESI                            ; 004e5081
    PUSH EDI                            ; 004e5082
    PUSH EBP                            ; 004e5083
    MOV EBP,ESP                         ; 004e5084
    SUB ESP,0x1fc                       ; 004e5086
    SUB EBP,0x7e                        ; 004e508c
    MOV EDX,dword ptr [EBP + 0x92]      ; 004e508f
    PUSH EDX                            ; 004e5095
    MOV EBX,dword ptr [EBP + 0x92]      ; 004e5096
    CALL FUN_00408a80                   ; 004e509c
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004e50a1
    ADD EBX,0x2b4                       ; 004e50a4
    PUSH EBX                            ; 004e50aa
    CALL FUN_0044fd00                   ; 004e50ab
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e50b0
    ADD ESP,0x4                         ; 004e50b6
    ADD EAX,0x430                       ; 004e50b9
    PUSH EAX                            ; 004e50be
    CALL FUN_0044fd00                   ; 004e50bf
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e50c4
    ADD ESP,0x4                         ; 004e50ca
    ADD EAX,0x5ac                       ; 004e50cd
    PUSH EAX                            ; 004e50d2
    CALL FUN_0044fd00                   ; 004e50d3
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e50d8
    ADD ESP,0x4                         ; 004e50de
    ADD EAX,0x161c                      ; 004e50e1
    PUSH EAX                            ; 004e50e6
    MOV ECX,dword ptr [0x0060b280]      ; 004e50e7 | DAT_0060b280
    PUSH ECX                            ; 004e50ed
    CALL FUN_0046ca00                   ; 004e50ee
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 004e50f3
    PUSH EBX                            ; 004e50f6
    LEA EDI,[EBP + -0x66]               ; 004e50f7
    CALL FUN_0044fd20                   ; 004e50fa
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    LEA ESI,[EAX + 0x338]               ; 004e50ff
    MOV ECX,0x6                         ; 004e5105
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e510a
    MOVSD.REP ES:EDI,ESI                ; 004e5110
    MOV dword ptr [EAX + 0x1668],0x414239c1 ; 004e5112
    FLD float ptr [EAX + 0x1668]        ; 004e511c
    FADD float ptr [EBP + -0x52]        ; 004e5122
    FLD float ptr [0x005f98bc]          ; 004e5125 | DAT_005f98bc
    FMUL double ptr [0x005dc4ed]        ; 004e512b | DAT_005dc4ed
    FCOS                                ; 004e5131
    FDIVP                               ; 004e5133
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e5135
    FLD float ptr [EAX + 0x744]         ; 004e513b
    FMUL ST0                            ; 004e5141
    FLD float ptr [EAX + 0x740]         ; 004e5143
    FMUL ST0                            ; 004e5149
    FADDP                               ; 004e514b
    FLD float ptr [EAX + 0x748]         ; 004e514d
    FMUL ST0                            ; 004e5153
    FLD float ptr [EBP + -0x56]         ; 004e5155
    FSUB float ptr [EBP + -0x62]        ; 004e5158
    FXCH                                ; 004e515b
    FADDP ST2,ST0                       ; 004e515d
    FSTP float ptr [EAX + 0x166c]       ; 004e515f
    FXCH                                ; 004e5165
    FSTP float ptr [EAX + 0x1664]       ; 004e5167
    FSQRT                               ; 004e516d
    ADD ESP,0x4                         ; 004e516f
    FLDZ                                ; 004e5172
    FCOMPP                              ; 004e5174
    FNSTSW AX                           ; 004e5176
    SAHF                                ; 004e5178
    JZ 0x004e5663                       ; 004e5179
        ;   XREF to: 004e5663 (CONDITIONAL_JUMP)  ; LAB_004e5663
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e517f
        ;   Label: LAB_004e517f
    FLD float ptr [EAX + 0x72c]         ; 004e5185
    FMUL ST0                            ; 004e518b
    FLD float ptr [EAX + 0x728]         ; 004e518d
    FMUL ST0                            ; 004e5193
    FADDP                               ; 004e5195
    FLD float ptr [EAX + 0x730]         ; 004e5197
    FMUL ST0                            ; 004e519d
    FADDP                               ; 004e519f
    FSQRT                               ; 004e51a1
    FLDZ                                ; 004e51a3
    FCOMPP                              ; 004e51a5
    FNSTSW AX                           ; 004e51a7
    SAHF                                ; 004e51a9
    JNZ 0x004e51d0                      ; 004e51aa
        ;   XREF to: 004e51d0 (CONDITIONAL_JUMP)  ; LAB_004e51d0
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e51ac
    MOV dword ptr [EAX + 0x72c],0x40400000 ; 004e51b2
    MOV dword ptr [EAX + 0x730],0xbdcccccd ; 004e51bc
    MOV dword ptr [EAX + 0x728],0x0     ; 004e51c6
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e51d0
        ;   Label: LAB_004e51d0
    ADD EAX,0x734                       ; 004e51d6
    PUSH EAX                            ; 004e51db
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e51dc
    ADD EAX,0x728                       ; 004e51e2
    PUSH EAX                            ; 004e51e7
    LEA EAX,[EBP + 0xfffffee2]          ; 004e51e8
    PUSH EAX                            ; 004e51ee
    CALL FUN_00591c10                   ; 004e51ef
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e51f4
    ADD ESP,0xc                         ; 004e51fa
    ADD EAX,0x430                       ; 004e51fd
    PUSH EAX                            ; 004e5202
    CALL FUN_0044fd20                   ; 004e5203
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    LEA ESI,[EAX + 0x338]               ; 004e5208
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e520e
    ADD EAX,0xbfc                       ; 004e5214
    MOV dword ptr [EBP + 0x56],EAX      ; 004e5219
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e521c
    LEA EDI,[EBP + -0x4e]               ; 004e5222
    ADD EAX,0xc20                       ; 004e5225
    XOR EBX,EBX                         ; 004e522a
    MOV dword ptr [EBP + 0x62],EAX      ; 004e522c
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e522f
    MOV dword ptr [EBP + 0x66],EBX      ; 004e5235
    ADD EAX,0xc00                       ; 004e5238
    MOV ECX,0x6                         ; 004e523d
    MOV dword ptr [EBP + 0x5e],EAX      ; 004e5242
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e5245
    ADD ESP,0x4                         ; 004e524b
    ADD EAX,0xc04                       ; 004e524e
    MOVSD.REP ES:EDI,ESI                ; 004e5253
    MOV dword ptr [EBP + 0x5a],EAX      ; 004e5255
    MOV ESI,dword ptr [EBP + 0x66]      ; 004e5258
        ;   Label: LAB_004e5258
    PUSH ESI                            ; 004e525b
    MOV EDI,dword ptr [EBP + 0x92]      ; 004e525c
    PUSH EDI                            ; 004e5262
    CALL FUN_004e6240                   ; 004e5263
        ;   XREF to: 004e6240 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6240()
    MOV EDI,ESI                         ; 004e5268
    IMUL EAX,ESI,0xb8                   ; 004e526a
    MOV EBX,dword ptr [EBP + 0x56]      ; 004e5270
    ADD ESP,0x8                         ; 004e5273
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004e5276
    ADD EBX,EAX                         ; 004e5279
    PUSH ECX                            ; 004e527b
    MOV dword ptr [EBP + 0x6a],EBX      ; 004e527c
    MOV EBX,dword ptr [EBP + 0x5e]      ; 004e527f
    PUSH EBX                            ; 004e5282
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004e5283
    PUSH ESI                            ; 004e5286
    PUSH EDI                            ; 004e5287
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e5288
    PUSH EAX                            ; 004e528e
    CALL FUN_004e6a50                   ; 004e528f
        ;   XREF to: 004e6a50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6a50()
    MOV EAX,ESI                         ; 004e5294
    MOV dword ptr [ESI + 0x14],0x0      ; 004e5296
    MOV EDX,dword ptr [EAX + 0x14]      ; 004e529d
    MOV dword ptr [ESI + 0x10],EDX      ; 004e52a0
    FLD float ptr [EAX + 0x10]          ; 004e52a3
    MOV dword ptr [ESI + 0x20],0x0      ; 004e52a6
    FSTP float ptr [ESI + 0xc]          ; 004e52ad
    MOV EDX,dword ptr [EAX + 0x20]      ; 004e52b0
    MOV dword ptr [ESI + 0x1c],EDX      ; 004e52b3
    FLD float ptr [EAX + 0x1c]          ; 004e52b6
    MOV EAX,EDI                         ; 004e52b9
    MOV dword ptr [EBP + 0x7a],EAX      ; 004e52bb
    FILD dword ptr [EBP + 0x7a]         ; 004e52be
    FMUL float ptr [0x005f98bc]         ; 004e52c1 | DAT_005f98bc
    MOV dword ptr [ESI + 0xac],0x0      ; 004e52c7
    ADD ESP,0x14                        ; 004e52d1
    MOV dword ptr [ESI + 0xb0],0x0      ; 004e52d4
    XOR EDX,EDX                         ; 004e52de
    FXCH                                ; 004e52e0
    FSTP float ptr [ESI + 0x18]         ; 004e52e2
    MOV dword ptr [ESI + 0xb4],0x0      ; 004e52e5
    LEA EAX,[EBP + -0x6]                ; 004e52ef
    MOV dword ptr [EBP + -0x6],EDX      ; 004e52f2
    PUSH EAX                            ; 004e52f5
    LEA EAX,[EBP + 0xffffff72]          ; 004e52f6
    MOV dword ptr [EBP + 0x2],EDX       ; 004e52fc
    PUSH EAX                            ; 004e52ff
    FSTP float ptr [EBP + -0x2]         ; 004e5300
    CALL FUN_00449280                   ; 004e5303
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 004e5308
    LEA EAX,[EBP + -0x6]                ; 004e530b
    PUSH EAX                            ; 004e530e
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e530f
    MOV EAX,dword ptr [EAX + 0x1668]    ; 004e5315
    MOV dword ptr [EBP + -0x16],EAX     ; 004e531b
    LEA EAX,[EBP + -0x1e]               ; 004e531e
    XOR EBX,EBX                         ; 004e5321
    PUSH EAX                            ; 004e5323
    LEA EAX,[EBP + 0xffffff72]          ; 004e5324
    LEA ESI,[EBP + 0x36]                ; 004e532a
    PUSH EAX                            ; 004e532d
    MOV dword ptr [EBP + -0x1e],EBX     ; 004e532e
    MOV dword ptr [EBP + -0x1a],EBX     ; 004e5331
    CALL FUN_00449530                   ; 004e5334
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    ADD ESP,0x8                         ; 004e5339
    LEA EAX,[EBP + 0x2a]                ; 004e533c
    LEA EDI,[EBP + 0x2a]                ; 004e533f
    PUSH EAX                            ; 004e5342
    LEA EAX,[EBP + 0xfffffe82]          ; 004e5343
    LEA ESI,[EBP + 0x36]                ; 004e5349
    PUSH EAX                            ; 004e534c
    MOVSD ES:EDI,ESI                    ; 004e534d
    MOVSD ES:EDI,ESI                    ; 004e534e
    MOVSD ES:EDI,ESI                    ; 004e534f
    CALL FUN_00591c10                   ; 004e5350
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 004e5355
    LEA EAX,[EBP + 0xfffffe82]          ; 004e5358
    PUSH EAX                            ; 004e535e
    LEA EAX,[EBP + 0xfffffee2]          ; 004e535f
    PUSH EAX                            ; 004e5365
    LEA ESI,[EBP + 0xffffff12]          ; 004e5366
    LEA EDI,[EBP + 0xfffffeb2]          ; 004e536c
    CALL FUN_005916b0                   ; 004e5372
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 004e5377
    LEA ESI,[EBP + 0xffffff12]          ; 004e537c
    LEA EAX,[EBP + 0xfffffeb2]          ; 004e5382
    ADD ESP,0x8                         ; 004e5388
    MOVSD.REP ES:EDI,ESI                ; 004e538b
    PUSH EAX                            ; 004e538d
    LEA ESI,[EBP + 0x1e]                ; 004e538e
    LEA EDI,[EBP + 0x6]                 ; 004e5391
    CALL FUN_00592720                   ; 004e5394
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined FUN_00592720()
    LEA ESI,[EBP + 0x1e]                ; 004e5399
    MOVSD ES:EDI,ESI                    ; 004e539c
    MOVSD ES:EDI,ESI                    ; 004e539d
    MOVSD ES:EDI,ESI                    ; 004e539e
    LEA EAX,[EBP + 0x6]                 ; 004e539f
    MOV EDI,dword ptr [EBP + 0x62]      ; 004e53a2
    ADD ESP,0x4                         ; 004e53a5
    CMP EAX,EDI                         ; 004e53a8
    JZ 0x004e53bd                       ; 004e53aa
        ;   XREF to: 004e53bd (CONDITIONAL_JUMP)  ; LAB_004e53bd
    MOV EAX,dword ptr [EBP + 0x6]       ; 004e53ac
    MOV dword ptr [EDI],EAX             ; 004e53af
    MOV EAX,dword ptr [EBP + 0xa]       ; 004e53b1
    MOV dword ptr [EDI + 0x4],EAX       ; 004e53b4
    MOV EAX,dword ptr [EBP + 0xe]       ; 004e53b7
    MOV dword ptr [EDI + 0x8],EAX       ; 004e53ba
    LEA EAX,[EBP + 0xfffffeb2]          ; 004e53bd
        ;   Label: LAB_004e53bd
    LEA ESI,[EBP + 0x12]                ; 004e53c3
    PUSH EAX                            ; 004e53c6
    LEA EDI,[EBP + 0x42]                ; 004e53c7
    MOV EBX,dword ptr [EBP + 0x6a]      ; 004e53ca
    CALL FUN_00591de0                   ; 004e53cd
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    ADD EBX,0x30                        ; 004e53d2
    LEA ESI,[EBP + 0x12]                ; 004e53d5
    LEA EAX,[EBP + 0x42]                ; 004e53d8
    ADD ESP,0x4                         ; 004e53db
    MOVSD ES:EDI,ESI                    ; 004e53de
    MOVSD ES:EDI,ESI                    ; 004e53df
    MOVSD ES:EDI,ESI                    ; 004e53e0
    CMP EBX,EAX                         ; 004e53e1
    JNZ 0x004e5694                      ; 004e53e3
        ;   XREF to: 004e5694 (CONDITIONAL_JUMP)  ; LAB_004e5694
    PUSH 0x5f22b0                       ; 004e53e9
        ;   Label: LAB_004e53e9
    PUSH 0x4                            ; 004e53ee
    LEA EAX,[EBP + 0xffffff42]          ; 004e53f0
    PUSH EAX                            ; 004e53f6
    LEA EBX,[EBP + 0xffffff42]          ; 004e53f7
    CALL FUN_005b7f5f                   ; 004e53fd
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    XOR EAX,EAX                         ; 004e5402
    ADD ESP,0xc                         ; 004e5404
    MOV dword ptr [EBP + 0x76],EAX      ; 004e5407
    XOR EDX,EDX                         ; 004e540a
        ;   Label: LAB_004e540a
    MOV AH,byte ptr [EBP + 0x76]        ; 004e540c
    MOV dword ptr [EBP + -0x32],EDX     ; 004e540f
    TEST AH,0x1                         ; 004e5412
    JZ 0x004e56aa                       ; 004e5415
        ;   XREF to: 004e56aa (CONDITIONAL_JUMP)  ; LAB_004e56aa
    MOV EAX,dword ptr [EBP + -0x42]     ; 004e541b
    MOV dword ptr [EBP + 0x6e],EAX      ; 004e541e
        ;   Label: LAB_004e541e
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004e5421
    MOV DL,byte ptr [EBP + 0x76]        ; 004e5424
    MOV dword ptr [EBP + -0x36],EAX     ; 004e5427
    TEST DL,0x2                         ; 004e542a
    JZ 0x004e56b2                       ; 004e542d
        ;   XREF to: 004e56b2 (CONDITIONAL_JUMP)  ; LAB_004e56b2
    MOV EAX,dword ptr [EBP + -0x3a]     ; 004e5433
    MOV dword ptr [EBP + 0x72],EAX      ; 004e5436
        ;   Label: LAB_004e5436
    MOV EAX,dword ptr [EBP + 0x72]      ; 004e5439
    MOV dword ptr [EBP + -0x2e],EAX     ; 004e543c
    LEA EAX,[EBP + 0xfffffeb2]          ; 004e543f
    PUSH EAX                            ; 004e5445
    LEA EAX,[EBP + -0x36]               ; 004e5446
    PUSH EAX                            ; 004e5449
    LEA ESI,[EBP + -0x2a]               ; 004e544a
    LEA EDI,[EBP + -0x12]               ; 004e544d
    CALL FUN_00591530                   ; 004e5450
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + -0x2a]               ; 004e5455
    LEA EAX,[EBP + -0x12]               ; 004e5458
    ADD ESP,0x8                         ; 004e545b
    MOVSD ES:EDI,ESI                    ; 004e545e
    MOVSD ES:EDI,ESI                    ; 004e545f
    MOVSD ES:EDI,ESI                    ; 004e5460
    CMP EBX,EAX                         ; 004e5461
    JZ 0x004e5476                       ; 004e5463
        ;   XREF to: 004e5476 (CONDITIONAL_JUMP)  ; LAB_004e5476
    MOV EAX,dword ptr [EBP + -0x12]     ; 004e5465
    MOV dword ptr [EBX],EAX             ; 004e5468
    MOV EAX,dword ptr [EBP + -0xe]      ; 004e546a
    MOV dword ptr [EBX + 0x4],EAX       ; 004e546d
    MOV EAX,dword ptr [EBP + -0xa]      ; 004e5470
    MOV dword ptr [EBX + 0x8],EAX       ; 004e5473
    MOV ECX,dword ptr [EBP + 0x76]      ; 004e5476
        ;   Label: LAB_004e5476
    INC ECX                             ; 004e5479
    ADD EBX,0xc                         ; 004e547a
    MOV dword ptr [EBP + 0x76],ECX      ; 004e547d
    CMP ECX,0x4                         ; 004e5480
    JL 0x004e540a                       ; 004e5483
        ;   XREF to: 004e540a (CONDITIONAL_JUMP)  ; LAB_004e540a
    LEA EAX,[EBP + 0xffffff42]          ; 004e5485
    PUSH EAX                            ; 004e548b
    LEA EAX,[EBP + 0xffffff4e]          ; 004e548c
    PUSH EAX                            ; 004e5492
    LEA EAX,[EBP + 0xffffff5a]          ; 004e5493
    PUSH EAX                            ; 004e5499
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004e549a
    ADD EAX,0x3c                        ; 004e549d
    PUSH EAX                            ; 004e54a0
    CALL FUN_004779e0                   ; 004e54a1
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 004e54a6
    LEA EAX,[EBP + 0xffffff4e]          ; 004e54a9
    PUSH EAX                            ; 004e54af
    LEA EAX,[EBP + 0xffffff66]          ; 004e54b0
    PUSH EAX                            ; 004e54b6
    LEA EAX,[EBP + 0xffffff5a]          ; 004e54b7
    PUSH EAX                            ; 004e54bd
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004e54be
    MOV EDI,dword ptr [EBP + 0x62]      ; 004e54c1
    ADD EAX,0x74                        ; 004e54c4
    ADD EDI,0xb8                        ; 004e54c7
    PUSH EAX                            ; 004e54cd
    MOV dword ptr [EBP + 0x62],EDI      ; 004e54ce
    CALL FUN_004779e0                   ; 004e54d1
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004e54d6
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004e54d9
    MOV ECX,dword ptr [EBP + 0x66]      ; 004e54dc
    ADD ESP,0x10                        ; 004e54df
    ADD EAX,0xb8                        ; 004e54e2
    ADD EDX,0xb8                        ; 004e54e7
    INC ECX                             ; 004e54ed
    MOV dword ptr [EBP + 0x5e],EAX      ; 004e54ee
    MOV dword ptr [EBP + 0x5a],EDX      ; 004e54f1
    MOV dword ptr [EBP + 0x66],ECX      ; 004e54f4
    CMP ECX,0xc                         ; 004e54f7
    JL 0x004e5258                       ; 004e54fa
        ;   XREF to: 004e5258 (CONDITIONAL_JUMP)  ; LAB_004e5258
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e5500
    FLD float ptr [EAX + 0x1668]        ; 004e5506
    FLD float ptr [0x005f98bc]          ; 004e550c | DAT_005f98bc
    FLD ST0                             ; 004e5512
    FCOS                                ; 004e5514
    FXCH                                ; 004e5516
    FSIN                                ; 004e5518
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e551a
    FXCH                                ; 004e5520
    FMULP ST2                           ; 004e5522
    FLD float ptr [EAX + 0x72c]         ; 004e5524
    FMUL double ptr [0x005dc4fd]        ; 004e552a | DAT_005dc4fd
    FXCH ST2                            ; 004e5530
    FLD double ptr [0x005dc4ed]         ; 004e5532 | DAT_005dc4ed
    FXCH                                ; 004e5538
    FMUL ST1                            ; 004e553a
    FLD float ptr [EAX + 0x1668]        ; 004e553c
    LEA EBX,[EAX + 0x149c]              ; 004e5542
    FMULP ST3                           ; 004e5548
    ADD EAX,0x14a8                      ; 004e554a
    FXCH ST2                            ; 004e554f
    FMULP                               ; 004e5551
    FLD float ptr [EAX + 0xfffff29c]    ; 004e5553
    FMUL double ptr [0x005dc505]        ; 004e5559 | DAT_005dc505
    FXCH ST2                            ; 004e555f
    FSTP float ptr [EAX + 0x8]          ; 004e5561
    FXCH                                ; 004e5564
    FADDP ST2,ST0                       ; 004e5566
    FSTP float ptr [EAX]                ; 004e5568
    FSTP float ptr [EAX + 0x4]          ; 004e556a
    CMP EBX,EAX                         ; 004e556d
    JNZ 0x004e56ba                      ; 004e556f
        ;   XREF to: 004e56ba (CONDITIONAL_JUMP)  ; LAB_004e56ba
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e5575
        ;   Label: LAB_004e5575
    ADD EAX,0x14c4                      ; 004e557b
    MOV dword ptr [EAX],0xbda4de71      ; 004e5580
    MOV dword ptr [EAX + 0x8],0x0       ; 004e5586
    FLD float ptr [EAX + -0x24]         ; 004e558d
    MOV dword ptr [EAX + 0x4],0xbfc529dc ; 004e5590
    FADD float ptr [0x005dc50d]         ; 004e5597 | DAT_005dc50d
    PUSH EAX                            ; 004e559d
    FSTP float ptr [EAX + -0x24]        ; 004e559e
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e55a1
    ADD EAX,0x14d0                      ; 004e55a7
    PUSH EAX                            ; 004e55ac
    CALL FUN_00449280                   ; 004e55ad
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e55b2
    ADD ESP,0x8                         ; 004e55b8
    FLD float ptr [EAX + 0x14a0]        ; 004e55bb
    FLD float ptr [EAX + 0x149c]        ; 004e55c1
    FLD float ptr [EAX + 0x14a4]        ; 004e55c7
    FLD float ptr [EAX + 0x14ac]        ; 004e55cd
    FLD float ptr [EAX + 0x14a8]        ; 004e55d3
    FLD float ptr [EAX + 0x14b0]        ; 004e55d9
    FLD float ptr [EAX + 0x14c4]        ; 004e55df
    FXCH ST6                            ; 004e55e5
    FSTP float ptr [EAX + 0x1500]       ; 004e55e7
    FLD float ptr [EAX + 0x14cc]        ; 004e55ed
    FXCH ST5                            ; 004e55f3
    FCHS                                ; 004e55f5
    FXCH ST4                            ; 004e55f7
    FSTP float ptr [EAX + 0x1504]       ; 004e55f9
    FLD float ptr [EAX + 0x14c8]        ; 004e55ff
    FXCH ST2                            ; 004e5605
    FCHS                                ; 004e5607
    ADD EAX,0x1524                      ; 004e5609
    FXCH ST2                            ; 004e560e
    FCHS                                ; 004e5610
    FXCH ST3                            ; 004e5612
    FSTP float ptr [EAX + -0x18]        ; 004e5614
    FSTP float ptr [EAX + -0x14]        ; 004e5617
    FXCH ST4                            ; 004e561a
    FSTP float ptr [EAX]                ; 004e561c
    FXCH ST2                            ; 004e561e
    FSTP float ptr [EAX + 0x8]          ; 004e5620
    FSTP float ptr [EAX + -0x28]        ; 004e5623
    FXCH                                ; 004e5626
    FSTP float ptr [EAX + -0x1c]        ; 004e5628
    FSTP float ptr [EAX + 0x4]          ; 004e562b
    PUSH EAX                            ; 004e562e
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e562f
    ADD EAX,0x1530                      ; 004e5635
    PUSH EAX                            ; 004e563a
    MOV ESI,dword ptr [EBP + 0x92]      ; 004e563b
    XOR EBX,EBX                         ; 004e5641
    CALL FUN_00449280                   ; 004e5643
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 004e5648
    PUSH EBX                            ; 004e564b
        ;   Label: LAB_004e564b
    PUSH ESI                            ; 004e564c
    CALL FUN_004e7600                   ; 004e564d
        ;   XREF to: 004e7600 (UNCONDITIONAL_CALL)  ; undefined FUN_004e7600()
    INC EBX                             ; 004e5652
    ADD ESP,0x8                         ; 004e5653
    CMP EBX,0x2                         ; 004e5656
    JL 0x004e564b                       ; 004e5659
        ;   XREF to: 004e564b (CONDITIONAL_JUMP)  ; LAB_004e564b
    LEA ESP,[EBP + 0x7e]                ; 004e565b
    POP EBP                             ; 004e565e
    POP EDI                             ; 004e565f
    POP ESI                             ; 004e5660
    POP EBX                             ; 004e5661
    RET                                 ; 004e5662
    MOV EAX,dword ptr [EBP + 0x92]      ; 004e5663
        ;   Label: LAB_004e5663
    FLD float ptr [EAX + 0x166c]        ; 004e5669
    MOV dword ptr [EAX + 0x740],0x0     ; 004e566f
    FADD double ptr [0x005dc4f5]        ; 004e5679 | DAT_005dc4f5
    MOV dword ptr [EAX + 0x748],0xbf8ccccd ; 004e567f
    FSTP float ptr [EAX + 0x744]        ; 004e5689
    JMP 0x004e517f                      ; 004e568f
        ;   XREF to: 004e517f (UNCONDITIONAL_JUMP)  ; LAB_004e517f
    MOV EAX,dword ptr [EBP + 0x42]      ; 004e5694
        ;   Label: LAB_004e5694
    MOV dword ptr [EBX],EAX             ; 004e5697
    MOV EAX,dword ptr [EBP + 0x46]      ; 004e5699
    MOV dword ptr [EBX + 0x4],EAX       ; 004e569c
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004e569f
    MOV dword ptr [EBX + 0x8],EAX       ; 004e56a2
    JMP 0x004e53e9                      ; 004e56a5
        ;   XREF to: 004e53e9 (UNCONDITIONAL_JUMP)  ; LAB_004e53e9
    MOV EAX,dword ptr [EBP + -0x4e]     ; 004e56aa
        ;   Label: LAB_004e56aa
    JMP 0x004e541e                      ; 004e56ad
        ;   XREF to: 004e541e (UNCONDITIONAL_JUMP)  ; LAB_004e541e
    MOV EAX,dword ptr [EBP + -0x46]     ; 004e56b2
        ;   Label: LAB_004e56b2
    JMP 0x004e5436                      ; 004e56b5
        ;   XREF to: 004e5436 (UNCONDITIONAL_JUMP)  ; LAB_004e5436
    MOV EDX,dword ptr [EAX]             ; 004e56ba
        ;   Label: LAB_004e56ba
    MOV dword ptr [EBX],EDX             ; 004e56bc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e56be
    MOV dword ptr [EBX + 0x4],EDX       ; 004e56c1
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e56c4
    MOV dword ptr [EBX + 0x8],EDX       ; 004e56c7
    JMP 0x004e5575                      ; 004e56ca
        ;   XREF to: 004e5575 (UNCONDITIONAL_JUMP)  ; LAB_004e5575

