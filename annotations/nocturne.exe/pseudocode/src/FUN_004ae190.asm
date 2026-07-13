; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ae190(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0xf8]:8  local_f8
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_00585088
;   undefined4 DAT_00585090
;   undefined4 DAT_00585098
;   undefined4 DAT_0059e4d4
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b96d4
;   undefined4 DAT_005be368
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c5064
;   ... and 12 more
;
; Called Functions:
;   FUN_00447670
;   FUN_004602a0
;   FUN_00460a00
;   FUN_00460a50
;   FUN_00461010
;   FUN_00461eb0
;   FUN_0050bb50
;   FUN_0053075c
;   FUN_00530a25
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae190
        ;   Label: FUN_004ae190
    PUSH ESI                            ; 004ae191
    PUSH EDI                            ; 004ae192
    PUSH EBP                            ; 004ae193
    MOV EBP,ESP                         ; 004ae194
    SUB ESP,0xe4                        ; 004ae196
    AND ESP,0xfffffff8                  ; 004ae19c
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ae19f
    MOV ESI,dword ptr [0x005ae704]      ; 004ae1a2 | DAT_005ae704
    LEA EBX,[ESP + 0x88]                ; 004ae1a8
    MOV EAX,EDI                         ; 004ae1af
    MOV ESI,dword ptr [ESI]             ; 004ae1b1 | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004ae1b3
    FMUL float ptr [0x0059e4d4]         ; 004ae1b5 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae1bb
    FLD float ptr [EAX + 0x4]           ; 004ae1bd
    FMUL float ptr [0x0059e4d4]         ; 004ae1c0 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae1c6
    FLD float ptr [EAX + 0x8]           ; 004ae1c9
    FMUL float ptr [0x0059e4d4]         ; 004ae1cc | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae1d2
    LEA EAX,[ESP + 0x88]                ; 004ae1d5
    PUSH EAX                            ; 004ae1dc
    PUSH ESI                            ; 004ae1dd
    CALL FUN_00530a25                   ; 004ae1de
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined FUN_00530a25()
    MOV AH,byte ptr [ESI + 0x13]        ; 004ae1e3
    ADD ESP,0x8                         ; 004ae1e6
    TEST AH,0x80                        ; 004ae1e9
    JZ 0x004ae1f5                       ; 004ae1ec
        ;   XREF to: 004ae1f5 (CONDITIONAL_JUMP)  ; LAB_004ae1f5
    MOV ESP,EBP                         ; 004ae1ee
        ;   Label: LAB_004ae1ee
    POP EBP                             ; 004ae1f0
    POP EDI                             ; 004ae1f1
    POP ESI                             ; 004ae1f2
    POP EBX                             ; 004ae1f3
    RET                                 ; 004ae1f4
    PUSH EDI                            ; 004ae1f5
        ;   Label: LAB_004ae1f5
    MOV EDX,dword ptr [0x005ae704]      ; 004ae1f6 | DAT_005ae704
    PUSH EDX                            ; 004ae1fc | DAT_01b4d738
    CALL FUN_00460a00                   ; 004ae1fd
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 004ae202
    PUSH 0x0                            ; 004ae205
    PUSH 0x1c78ca8                      ; 004ae207 | DAT_01c78ca8
    MOV ECX,dword ptr [0x005ae704]      ; 004ae20c | DAT_005ae704
    MOV EBX,0xbdcccccd                  ; 004ae212
    PUSH ECX                            ; 004ae217 | DAT_01b4d738
    MOV ESI,EBX                         ; 004ae218
    CALL FUN_00460a50                   ; 004ae21a
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a50()
    ADD ESP,0xc                         ; 004ae21f
    XOR EAX,EAX                         ; 004ae222
    MOV dword ptr [ESP + 0x4c],EBX      ; 004ae224
    MOV dword ptr [ESP + 0x50],EBX      ; 004ae228
    MOV dword ptr [ESP + 0x54],EAX      ; 004ae22c
    LEA EBX,[ESP + 0x10]                ; 004ae230
    LEA EAX,[ESP + 0x4c]                ; 004ae234
    MOV EDX,dword ptr [0x005ae704]      ; 004ae238 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004ae23e
    FMUL float ptr [0x0059e4d4]         ; 004ae240 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae246
    FLD float ptr [EAX + 0x4]           ; 004ae248
    FMUL float ptr [0x0059e4d4]         ; 004ae24b | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae251
    FLD float ptr [EAX + 0x8]           ; 004ae254
    FMUL float ptr [0x0059e4d4]         ; 004ae257 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae25d
    LEA EAX,[ESP + 0x10]                ; 004ae260
    PUSH EAX                            ; 004ae264
    MOV EAX,dword ptr [EDX]             ; 004ae265 | DAT_01b4d738
    PUSH EAX                            ; 004ae267
    CALL FUN_0053075c                   ; 004ae268
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    MOV EDX,0x3dcccccd                  ; 004ae26d
    LEA EAX,[ESP + 0x54]                ; 004ae272
    ADD ESP,0x8                         ; 004ae276
    MOV ECX,ESI                         ; 004ae279
    XOR EBX,EBX                         ; 004ae27b
    MOV dword ptr [ESP + 0x4c],EDX      ; 004ae27d
    MOV dword ptr [ESP + 0x50],ECX      ; 004ae281
    MOV dword ptr [ESP + 0x54],EBX      ; 004ae285
    LEA EBX,[ESP + 0x94]                ; 004ae289
    MOV EDX,dword ptr [0x005ae704]      ; 004ae290 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004ae296
    FMUL float ptr [0x0059e4d4]         ; 004ae298 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae29e
    FLD float ptr [EAX + 0x4]           ; 004ae2a0
    FMUL float ptr [0x0059e4d4]         ; 004ae2a3 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae2a9
    FLD float ptr [EAX + 0x8]           ; 004ae2ac
    FMUL float ptr [0x0059e4d4]         ; 004ae2af | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae2b5
    LEA EAX,[ESP + 0x94]                ; 004ae2b8
    PUSH EAX                            ; 004ae2bf
    MOV EAX,dword ptr [EDX]             ; 004ae2c0 | DAT_01b4d738
    ADD EAX,0x30                        ; 004ae2c2
    PUSH EAX                            ; 004ae2c5
    MOV ESI,0x3dcccccd                  ; 004ae2c6
    CALL FUN_0053075c                   ; 004ae2cb
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    LEA EBX,[ESP + 0x48]                ; 004ae2d0
    LEA EAX,[ESP + 0x54]                ; 004ae2d4
    ADD ESP,0x8                         ; 004ae2d8
    XOR EDX,EDX                         ; 004ae2db
    MOV dword ptr [ESP + 0x4c],ESI      ; 004ae2dd
    MOV dword ptr [ESP + 0x50],ESI      ; 004ae2e1
    MOV dword ptr [ESP + 0x54],EDX      ; 004ae2e5
    MOV EDX,dword ptr [0x005ae704]      ; 004ae2e9 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004ae2ef
    FMUL float ptr [0x0059e4d4]         ; 004ae2f1 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae2f7
    FLD float ptr [EAX + 0x4]           ; 004ae2f9
    FMUL float ptr [0x0059e4d4]         ; 004ae2fc | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae302
    FLD float ptr [EAX + 0x8]           ; 004ae305
    FMUL float ptr [0x0059e4d4]         ; 004ae308 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae30e
    LEA EAX,[ESP + 0x40]                ; 004ae311
    PUSH EAX                            ; 004ae315
    MOV EAX,dword ptr [EDX]             ; 004ae316 | DAT_01b4d738
    ADD EAX,0x60                        ; 004ae318
    PUSH EAX                            ; 004ae31b
    CALL FUN_0053075c                   ; 004ae31c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    MOV ECX,0xbdcccccd                  ; 004ae321
    LEA EBX,[ESP + 0x78]                ; 004ae326
    LEA EAX,[ESP + 0x54]                ; 004ae32a
    ADD ESP,0x8                         ; 004ae32e
    MOV EDX,dword ptr [0x005ae704]      ; 004ae331 | DAT_005ae704
    MOV dword ptr [ESP + 0x50],ESI      ; 004ae337
    XOR ESI,ESI                         ; 004ae33b
    MOV dword ptr [ESP + 0x4c],ECX      ; 004ae33d
    MOV dword ptr [ESP + 0x54],ESI      ; 004ae341
    FLD float ptr [EAX]                 ; 004ae345
    FMUL float ptr [0x0059e4d4]         ; 004ae347 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae34d
    FLD float ptr [EAX + 0x4]           ; 004ae34f
    FMUL float ptr [0x0059e4d4]         ; 004ae352 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae358
    FLD float ptr [EAX + 0x8]           ; 004ae35b
    FMUL float ptr [0x0059e4d4]         ; 004ae35e | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae364
    LEA EAX,[ESP + 0x70]                ; 004ae367
    PUSH EAX                            ; 004ae36b
    MOV EAX,dword ptr [EDX]             ; 004ae36c | DAT_01b4d738
    ADD EAX,0x90                        ; 004ae36e
    PUSH EAX                            ; 004ae373
    CALL FUN_0053075c                   ; 004ae374
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004ae379
    PUSH 0x5b96d4                       ; 004ae37c | DAT_005b96d4
    MOV EAX,[0x005ae704]                ; 004ae381 | DAT_005ae704
    PUSH EAX                            ; 004ae386 | DAT_01b4d738
    LEA EBX,[ESP + 0x84]                ; 004ae387
    CALL FUN_00461eb0                   ; 004ae38e
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 004ae393
    MOV EDX,dword ptr [EDI + 0x3c]      ; 004ae396
    MOV EAX,dword ptr [EDI + 0x3c]      ; 004ae399
    SAR EDX,0x2                         ; 004ae39c
    AND EAX,0x3                         ; 004ae39f
    AND EDX,0x3                         ; 004ae3a2
    SHL EAX,0x16                        ; 004ae3a5
    SHL EDX,0x16                        ; 004ae3a8
    ADD EAX,0x80000                     ; 004ae3ab
    ADD EDX,0x80000                     ; 004ae3b0
    MOV [0x005c502c],EAX                ; 004ae3b6 | DAT_005c502c
    MOV dword ptr [0x005c5030],EDX      ; 004ae3bb | DAT_005c5030
    LEA ECX,[EAX + 0x300000]            ; 004ae3c1
    MOV dword ptr [0x005c5060],EDX      ; 004ae3c7 | DAT_005c5060
    MOV dword ptr [0x005c505c],ECX      ; 004ae3cd | DAT_005c505c
    MOV dword ptr [0x005c508c],ECX      ; 004ae3d3 | DAT_005c508c
    ADD EDX,0x300000                    ; 004ae3d9
    MOV [0x005c50bc],EAX                ; 004ae3df | DAT_005c50bc
    MOV dword ptr [0x005c5090],EDX      ; 004ae3e4 | DAT_005c5090
    MOV EAX,EDI                         ; 004ae3ea
    MOV dword ptr [0x005c50c0],EDX      ; 004ae3ec | DAT_005c50c0
    FLD float ptr [EAX]                 ; 004ae3f2
    FMUL float ptr [0x0059e4d4]         ; 004ae3f4 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae3fa
    FLD float ptr [EAX + 0x4]           ; 004ae3fc
    FMUL float ptr [0x0059e4d4]         ; 004ae3ff | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae405
    FLD float ptr [EAX + 0x8]           ; 004ae408
    FMUL float ptr [0x0059e4d4]         ; 004ae40b | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae411
    PUSH 0x4                            ; 004ae414
    PUSH ESI                            ; 004ae416
    PUSH 0x1c78cb4                      ; 004ae417 | DAT_01c78cb4
    LEA EAX,[ESP + 0x88]                ; 004ae41c
    PUSH EAX                            ; 004ae423
    MOV EDX,dword ptr [0x005be368]      ; 004ae424 | DAT_005be368
    PUSH EDX                            ; 004ae42a | DAT_01e57284
    LEA EBX,[ESP + 0xe8]                ; 004ae42b
    CALL FUN_0050bb50                   ; 004ae432
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; undefined FUN_0050bb50()
    LEA ECX,[ESP + 0xe4]                ; 004ae437
    LEA EDX,[ESP + 0xec]                ; 004ae43e
    MOV EAX,dword ptr [EDI + 0x38]      ; 004ae445
    ADD ESP,0x14                        ; 004ae448
    CMP EAX,0x1                         ; 004ae44b
    JNC 0x004ae8f4                      ; 004ae44e
        ;   XREF to: 004ae8f4 (CONDITIONAL_JUMP)  ; LAB_004ae8f4
    MOV dword ptr [EBX],0x2000          ; 004ae454
        ;   Label: LAB_004ae454
    MOV dword ptr [ECX],0x0             ; 004ae45a
    MOV dword ptr [EDX],0x0             ; 004ae460
    XOR ECX,ECX                         ; 004ae466
        ;   Label: LAB_004ae466
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ae468
        ;   Label: LAB_004ae468
    MOV EDX,dword ptr [ECX + 0x5c5034]  ; 004ae46f | DAT_005c5034 | DAT_005c5064
    IMUL EDX                            ; 004ae475
    SHRD EAX,EDX,0x10                   ; 004ae477
    MOV EDX,dword ptr [ECX + 0x5c5038]  ; 004ae47b | DAT_005c5038 | DAT_005c5068
    MOV dword ptr [ECX + 0x5c5034],EAX  ; 004ae481 | DAT_005c5034 | DAT_005c5064
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ae487
    IMUL EDX                            ; 004ae48e
    SHRD EAX,EDX,0x10                   ; 004ae490
    MOV EDX,dword ptr [ECX + 0x5c503c]  ; 004ae494 | DAT_005c503c | DAT_005c506c
    MOV dword ptr [ECX + 0x5c5038],EAX  ; 004ae49a | DAT_005c5038 | DAT_005c5068
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ae4a0
    ADD ECX,0x30                        ; 004ae4a7
    IMUL EDX                            ; 004ae4aa
    SHRD EAX,EDX,0x10                   ; 004ae4ac
    MOV dword ptr [ECX + 0x5c500c],EAX  ; 004ae4b0 | DAT_005c503c | DAT_005c506c
    CMP ECX,0xc0                        ; 004ae4b6
    JNZ 0x004ae468                      ; 004ae4bc
        ;   XREF to: 004ae468 (CONDITIONAL_JUMP)  ; LAB_004ae468
    PUSH 0x0                            ; 004ae4be
    PUSH EDI                            ; 004ae4c0
    MOV EBX,dword ptr [0x007f7370]      ; 004ae4c1 | DAT_007f7370
    PUSH EBX                            ; 004ae4c7
    CALL FUN_00447670                   ; 004ae4c8
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; undefined FUN_00447670()
    MOV EAX,0xffff                      ; 004ae4cd
    MOV ESI,dword ptr [0x01c038f4]      ; 004ae4d2 | DAT_01c038f4
    ADD ESP,0xc                         ; 004ae4d8
    SUB EAX,ESI                         ; 004ae4db
    PUSH EAX                            ; 004ae4dd
    MOV EAX,[0x005ae704]                ; 004ae4de | DAT_005ae704
    PUSH EAX                            ; 004ae4e3 | DAT_01b4d738
    CALL FUN_00461010                   ; 004ae4e4
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined FUN_00461010()
    ADD ESP,0x8                         ; 004ae4e9
    PUSH 0x1c78c80                      ; 004ae4ec
    MOV EDX,dword ptr [0x005ae704]      ; 004ae4f1 | DAT_005ae704
    PUSH EDX                            ; 004ae4f7 | DAT_01b4d738
    CALL FUN_004602a0                   ; 004ae4f8
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004602a0()
    ADD ESP,0x8                         ; 004ae4fd
    MOV ECX,dword ptr [0x005ae704]      ; 004ae500 | DAT_005ae704
    PUSH ECX                            ; 004ae506 | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 004ae507
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 004ae50c
    MOV EAX,dword ptr [EDI]             ; 004ae50f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ae511
    LEA EAX,[EDI + 0x4]                 ; 004ae515
    MOV EAX,dword ptr [EAX]             ; 004ae518
    MOV dword ptr [ESP + 0x20],EAX      ; 004ae51a
    LEA EAX,[EDI + 0x8]                 ; 004ae51e
    MOV EAX,dword ptr [EAX]             ; 004ae521
    LEA EDX,[EDI + 0xc]                 ; 004ae523
    MOV dword ptr [ESP + 0x24],EAX      ; 004ae526
    MOV EAX,dword ptr [EDX]             ; 004ae52a
    MOV dword ptr [ESP + 0xac],EAX      ; 004ae52c
    LEA EAX,[EDX + 0x4]                 ; 004ae533
    MOV EBX,0x3f800000                  ; 004ae536
    MOV EAX,dword ptr [EAX]             ; 004ae53b
    MOV ESI,0x3ccccccd                  ; 004ae53d
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ae542
    LEA EAX,[EDX + 0x8]                 ; 004ae549
    MOV dword ptr [ESP + 0x8],EBX       ; 004ae54c
    MOV dword ptr [ESP + 0xc],ESI       ; 004ae550
    MOV EAX,dword ptr [EAX]             ; 004ae554
    XOR ESI,ESI                         ; 004ae556
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ae558
    FLD float ptr [ESP + 0xc]           ; 004ae55f
        ;   Label: LAB_004ae55f
    FLD ST0                             ; 004ae563
    FLD double ptr [0x00585088]         ; 004ae565 | DAT_00585088
    FXCH                                ; 004ae56b
    FMUL ST1                            ; 004ae56d
    FLD float ptr [ESP + 0x8]           ; 004ae56f
    FMUL ST2                            ; 004ae573
    FLD float ptr [ESP + 0xac]          ; 004ae575
    FXCH ST2                            ; 004ae57c
    FSTP ST4                            ; 004ae57e
    FXCH ST3                            ; 004ae580
    FSTP float ptr [ESP + 0xc]          ; 004ae582
    FMUL float ptr [ESP + 0xc]          ; 004ae586
    FLD float ptr [ESP + 0xc]           ; 004ae58a
    FMUL float ptr [EDI + 0x1c]         ; 004ae58e
    FLD float ptr [ESP + 0xb4]          ; 004ae591
    FXCH                                ; 004ae598
    FSUBR float ptr [ESP + 0xb0]        ; 004ae59a
    FXCH                                ; 004ae5a1
    FMUL float ptr [ESP + 0xc]          ; 004ae5a3
    FXCH                                ; 004ae5a7
    FST float ptr [ESP + 0xb0]          ; 004ae5a9
    FMUL float ptr [ESP + 0xc]          ; 004ae5b0
    FLD float ptr [ESP + 0x1c]          ; 004ae5b4
    LEA EAX,[ESP + 0x1c]                ; 004ae5b8
    FLD float ptr [ESP + 0x20]          ; 004ae5bc
    PUSH EAX                            ; 004ae5c0
    MOV EAX,[0x005ae704]                ; 004ae5c1 | DAT_005ae704
    FXCH ST5                            ; 004ae5c6
    FSTP ST6                            ; 004ae5c8
    FXCH ST5                            ; 004ae5ca
    FSTP float ptr [ESP + 0xc]          ; 004ae5cc
    FLD float ptr [ESP + 0x28]          ; 004ae5d0
    PUSH EAX                            ; 004ae5d4 | DAT_01b4d738
    FXCH ST3                            ; 004ae5d5
    FSTP float ptr [ESP + 0x60]         ; 004ae5d7
    FXCH                                ; 004ae5db
    FSTP float ptr [ESP + 0x68]         ; 004ae5dd
    FXCH ST3                            ; 004ae5e1
    FSUB float ptr [ESP + 0x60]         ; 004ae5e3
    FXCH                                ; 004ae5e7
    FSUB float ptr [ESP + 0x68]         ; 004ae5e9
    FXCH                                ; 004ae5ed
    FSTP float ptr [ESP + 0x24]         ; 004ae5ef
    FXCH ST2                            ; 004ae5f3
    FSTP float ptr [ESP + 0x64]         ; 004ae5f5
    FSUB float ptr [ESP + 0x64]         ; 004ae5f9
    FXCH                                ; 004ae5fd
    FSTP float ptr [ESP + 0x2c]         ; 004ae5ff
    FSTP float ptr [ESP + 0x28]         ; 004ae603
    CALL FUN_00460a00                   ; 004ae607
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 004ae60c
    PUSH 0x0                            ; 004ae60f
    PUSH 0x1c78ca8                      ; 004ae611 | DAT_01c78ca8
    MOV EDX,dword ptr [0x005ae704]      ; 004ae616 | DAT_005ae704
    PUSH EDX                            ; 004ae61c | DAT_01b4d738
    CALL FUN_00460a50                   ; 004ae61d
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a50()
    ADD ESP,0xc                         ; 004ae622
    FLD float ptr [ESP + 0x8]           ; 004ae625
    FST double ptr [ESP]                ; 004ae629
    FMUL double ptr [0x00585090]        ; 004ae62c | DAT_00585090
    LEA EBX,[ESP + 0x28]                ; 004ae632
    MOV EDX,dword ptr [0x005ae704]      ; 004ae636 | DAT_005ae704
    FSTP float ptr [ESP + 0x4c]         ; 004ae63c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004ae640
    XOR ECX,ECX                         ; 004ae644
    MOV dword ptr [ESP + 0xe0],EAX      ; 004ae646
    MOV dword ptr [ESP + 0x50],EAX      ; 004ae64d
    LEA EAX,[ESP + 0x4c]                ; 004ae651
    MOV dword ptr [ESP + 0x54],ECX      ; 004ae655
    FLD float ptr [EAX]                 ; 004ae659
    FMUL float ptr [0x0059e4d4]         ; 004ae65b | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae661
    FLD float ptr [EAX + 0x4]           ; 004ae663
    FMUL float ptr [0x0059e4d4]         ; 004ae666 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae66c
    FLD float ptr [EAX + 0x8]           ; 004ae66f
    FMUL float ptr [0x0059e4d4]         ; 004ae672 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae678
    LEA EAX,[ESP + 0x28]                ; 004ae67b
    PUSH EAX                            ; 004ae67f
    MOV EAX,dword ptr [EDX]             ; 004ae680 | DAT_01b4d738
    PUSH EAX                            ; 004ae682
    CALL FUN_0053075c                   ; 004ae683
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004ae688
    FLD double ptr [ESP]                ; 004ae68b
    FMUL double ptr [0x00585098]        ; 004ae68e | DAT_00585098
    XOR EBX,EBX                         ; 004ae694
    FSTP float ptr [ESP + 0xdc]         ; 004ae696
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ae69d
    MOV dword ptr [ESP + 0x54],EBX      ; 004ae6a4
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ae6a8
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004ae6ac
    LEA EBX,[ESP + 0x64]                ; 004ae6b3
    MOV dword ptr [ESP + 0x50],EAX      ; 004ae6b7
    LEA EAX,[ESP + 0x4c]                ; 004ae6bb
    MOV EDX,dword ptr [0x005ae704]      ; 004ae6bf | DAT_005ae704
    FLD float ptr [EAX]                 ; 004ae6c5
    FMUL float ptr [0x0059e4d4]         ; 004ae6c7 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae6cd
    FLD float ptr [EAX + 0x4]           ; 004ae6cf
    FMUL float ptr [0x0059e4d4]         ; 004ae6d2 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae6d8
    FLD float ptr [EAX + 0x8]           ; 004ae6db
    FMUL float ptr [0x0059e4d4]         ; 004ae6de | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae6e4
    LEA EAX,[ESP + 0x64]                ; 004ae6e7
    PUSH EAX                            ; 004ae6eb
    MOV EAX,dword ptr [EDX]             ; 004ae6ec | DAT_01b4d738
    ADD EAX,0x30                        ; 004ae6ee
    PUSH EAX                            ; 004ae6f1
    CALL FUN_0053075c                   ; 004ae6f2
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004ae6f7
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ae6fa
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ae701
    MOV dword ptr [ESP + 0x50],EAX      ; 004ae705
    XOR EAX,EAX                         ; 004ae709
    LEA EBX,[ESP + 0xa0]                ; 004ae70b
    MOV dword ptr [ESP + 0x54],EAX      ; 004ae712
    LEA EAX,[ESP + 0x4c]                ; 004ae716
    MOV EDX,dword ptr [0x005ae704]      ; 004ae71a | DAT_005ae704
    FLD float ptr [EAX]                 ; 004ae720
    FMUL float ptr [0x0059e4d4]         ; 004ae722 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae728
    FLD float ptr [EAX + 0x4]           ; 004ae72a
    FMUL float ptr [0x0059e4d4]         ; 004ae72d | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae733
    FLD float ptr [EAX + 0x8]           ; 004ae736
    FMUL float ptr [0x0059e4d4]         ; 004ae739 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae73f
    LEA EAX,[ESP + 0xa0]                ; 004ae742
    PUSH EAX                            ; 004ae749
    MOV EAX,dword ptr [EDX]             ; 004ae74a | DAT_01b4d738
    ADD EAX,0x60                        ; 004ae74c
    PUSH EAX                            ; 004ae74f
    CALL FUN_0053075c                   ; 004ae750
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004ae755
    LEA EBX,[ESP + 0x34]                ; 004ae758
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004ae75c
    XOR EDX,EDX                         ; 004ae763
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ae765
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ae769
    MOV dword ptr [ESP + 0x54],EDX      ; 004ae770
    MOV dword ptr [ESP + 0x50],EAX      ; 004ae774
    LEA EAX,[ESP + 0x4c]                ; 004ae778
    MOV EDX,dword ptr [0x005ae704]      ; 004ae77c | DAT_005ae704
    FLD float ptr [EAX]                 ; 004ae782
    FMUL float ptr [0x0059e4d4]         ; 004ae784 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae78a
    FLD float ptr [EAX + 0x4]           ; 004ae78c
    FMUL float ptr [0x0059e4d4]         ; 004ae78f | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae795
    FLD float ptr [EAX + 0x8]           ; 004ae798
    FMUL float ptr [0x0059e4d4]         ; 004ae79b | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae7a1
    LEA EAX,[ESP + 0x34]                ; 004ae7a4
    PUSH EAX                            ; 004ae7a8
    MOV EAX,dword ptr [EDX]             ; 004ae7a9 | DAT_01b4d738
    ADD EAX,0x90                        ; 004ae7ab
    PUSH EAX                            ; 004ae7b0
    CALL FUN_0053075c                   ; 004ae7b1
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004ae7b6
    LEA EBX,[ESP + 0x7c]                ; 004ae7b9
    LEA EAX,[ESP + 0x1c]                ; 004ae7bd
    FLD float ptr [EAX]                 ; 004ae7c1
    FMUL float ptr [0x0059e4d4]         ; 004ae7c3 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae7c9
    FLD float ptr [EAX + 0x4]           ; 004ae7cb
    FMUL float ptr [0x0059e4d4]         ; 004ae7ce | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae7d4
    FLD float ptr [EAX + 0x8]           ; 004ae7d7
    FMUL float ptr [0x0059e4d4]         ; 004ae7da | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae7e0
    PUSH 0x4                            ; 004ae7e3
    PUSH 0x0                            ; 004ae7e5
    PUSH 0x1c78cb4                      ; 004ae7e7 | DAT_01c78cb4
    LEA EAX,[ESP + 0x88]                ; 004ae7ec
    PUSH EAX                            ; 004ae7f3
    MOV ECX,dword ptr [0x005be368]      ; 004ae7f4 | DAT_005be368
    PUSH ECX                            ; 004ae7fa | DAT_01e57284
    CALL FUN_0050bb50                   ; 004ae7fb
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; undefined FUN_0050bb50()
    ADD ESP,0x14                        ; 004ae800
    XOR ECX,ECX                         ; 004ae803
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ae805
        ;   Label: LAB_004ae805
    MOV EDX,dword ptr [ECX + 0x5c5034]  ; 004ae80c | DAT_005c5034 | DAT_005c5064
    IMUL EDX                            ; 004ae812
    SHRD EAX,EDX,0x10                   ; 004ae814
    MOV EDX,dword ptr [ECX + 0x5c5038]  ; 004ae818 | DAT_005c5038 | DAT_005c5068
    MOV dword ptr [ECX + 0x5c5034],EAX  ; 004ae81e | DAT_005c5034 | DAT_005c5064
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ae824
    IMUL EDX                            ; 004ae82b
    SHRD EAX,EDX,0x10                   ; 004ae82d
    MOV EDX,dword ptr [ECX + 0x5c503c]  ; 004ae831 | DAT_005c503c | DAT_005c506c
    MOV dword ptr [ECX + 0x5c5038],EAX  ; 004ae837 | DAT_005c5038 | DAT_005c5068
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ae83d
    ADD ECX,0x30                        ; 004ae844
    IMUL EDX                            ; 004ae847
    SHRD EAX,EDX,0x10                   ; 004ae849
    MOV dword ptr [ECX + 0x5c500c],EAX  ; 004ae84d | DAT_005c503c | DAT_005c506c
    CMP ECX,0xc0                        ; 004ae853
    JNZ 0x004ae805                      ; 004ae859
        ;   XREF to: 004ae805 (CONDITIONAL_JUMP)  ; LAB_004ae805
    PUSH 0x0                            ; 004ae85b
    PUSH EDI                            ; 004ae85d
    MOV EBX,dword ptr [0x007f7370]      ; 004ae85e | DAT_007f7370
    PUSH EBX                            ; 004ae864
    CALL FUN_00447670                   ; 004ae865
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; undefined FUN_00447670()
    MOV EAX,0xffff                      ; 004ae86a
    MOV EDX,dword ptr [0x01c038f4]      ; 004ae86f | DAT_01c038f4
    ADD ESP,0xc                         ; 004ae875
    SUB EAX,EDX                         ; 004ae878
    PUSH EAX                            ; 004ae87a
    MOV ECX,dword ptr [0x005ae704]      ; 004ae87b | DAT_005ae704
    PUSH ECX                            ; 004ae881 | DAT_01b4d738
    CALL FUN_00461010                   ; 004ae882
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined FUN_00461010()
    ADD ESP,0x8                         ; 004ae887
    PUSH 0x1c78c80                      ; 004ae88a
    MOV EBX,dword ptr [0x005ae704]      ; 004ae88f | DAT_005ae704
    PUSH EBX                            ; 004ae895 | DAT_01b4d738
    CALL FUN_004602a0                   ; 004ae896
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004602a0()
    ADD ESP,0x8                         ; 004ae89b
    MOV EAX,[0x005ae704]                ; 004ae89e | DAT_005ae704
    PUSH EAX                            ; 004ae8a3 | DAT_01b4d738
    INC ESI                             ; 004ae8a4
    CALL thunk_FUN_004cdbc0             ; 004ae8a5
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 004ae8aa
    CMP ESI,0x3                         ; 004ae8ad
    JGE 0x004ae1ee                      ; 004ae8b0
        ;   XREF to: 004ae1ee (CONDITIONAL_JUMP)  ; LAB_004ae1ee
    JMP 0x004ae55f                      ; 004ae8b6
        ;   XREF to: 004ae55f (UNCONDITIONAL_JUMP)  ; LAB_004ae55f
    MOV EDX,0x7f80                      ; 004ae8bb
        ;   Label: LAB_004ae8bb
    MOV dword ptr [ESP + 0xd8],ESI      ; 004ae8c0
    MOV dword ptr [ESP + 0xd4],ESI      ; 004ae8c7
    MOV dword ptr [ESP + 0xd0],EDX      ; 004ae8ce
    JMP 0x004ae466                      ; 004ae8d5
        ;   XREF to: 004ae466 (UNCONDITIONAL_JUMP)  ; LAB_004ae466
    MOV dword ptr [ESP + 0xd0],ESI      ; 004ae8da
        ;   Label: LAB_004ae8da
    MOV dword ptr [ESP + 0xd8],ESI      ; 004ae8e1
    MOV dword ptr [ESP + 0xd4],ESI      ; 004ae8e8
    JMP 0x004ae466                      ; 004ae8ef
        ;   XREF to: 004ae466 (UNCONDITIONAL_JUMP)  ; LAB_004ae466
    JBE 0x004ae8bb                      ; 004ae8f4
        ;   XREF to: 004ae8bb (CONDITIONAL_JUMP)  ; LAB_004ae8bb
        ;   Label: LAB_004ae8f4
    CMP EAX,0x2                         ; 004ae8f6
    JZ 0x004ae8da                       ; 004ae8f9
        ;   XREF to: 004ae8da (CONDITIONAL_JUMP)  ; LAB_004ae8da
    JMP 0x004ae454                      ; 004ae8fb
        ;   XREF to: 004ae454 (UNCONDITIONAL_JUMP)  ; LAB_004ae454

