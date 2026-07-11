; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043e290(int param_1,int param_2)
;
; Local Variables:
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
; Referenced Globals:
;   undefined4 DAT_0057b4fe
;   undefined4 DAT_0057b506
;   undefined4 DAT_0077bdb8
;   undefined4 DAT_0077bdbc
;   undefined4 DAT_0077bdc0
;   undefined4 DAT_0077bdc4
;   undefined4 DAT_0077c26c
;   undefined4 DAT_0077c284
;   undefined4 DAT_0077c288
;   undefined4 DAT_0077c2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e290
        ;   Label: FUN_0043e290
    PUSH ESI                            ; 0043e291
    PUSH EDI                            ; 0043e292
    PUSH EBP                            ; 0043e293
    MOV EBP,ESP                         ; 0043e294
    SUB ESP,0x148                       ; 0043e296
    AND ESP,0xfffffff8                  ; 0043e29c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043e29f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e2a2
    CMP dword ptr [EAX + 0x65b24],0x0   ; 0043e2a5
    JZ 0x0043e2e4                       ; 0043e2ac
        ;   XREF to: 0043e2e4 (CONDITIONAL_JUMP)  ; LAB_0043e2e4
    FLD float ptr [EBX + 0x24]          ; 0043e2ae
    FCOMP float ptr [EAX + 0x65b20]     ; 0043e2b1
    FNSTSW AX                           ; 0043e2b7
    SAHF                                ; 0043e2b9
    JNC 0x0043e2e4                      ; 0043e2ba
        ;   XREF to: 0043e2e4 (CONDITIONAL_JUMP)  ; LAB_0043e2e4
    LEA EAX,[EBX + 0x2c]                ; 0043e2bc
    MOV dword ptr [EAX + 0x8],0x0       ; 0043e2bf
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043e2c6
    MOV dword ptr [EAX + 0x4],EDX       ; 0043e2c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043e2cc
    MOV dword ptr [EAX],EDX             ; 0043e2cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e2d1
    MOV EDX,dword ptr [EAX + 0x65b20]   ; 0043e2d4
    MOV dword ptr [EBX + 0x24],EDX      ; 0043e2da
    MOV dword ptr [EBX + 0x6c],0x1      ; 0043e2dd
    XOR ECX,ECX                         ; 0043e2e4
        ;   Label: LAB_0043e2e4
    MOV ESI,dword ptr [0x0077bdb8]      ; 0043e2e6 | DAT_0077bdb8
    MOV dword ptr [ESP + 0x140],ECX     ; 0043e2ec
    TEST ESI,ESI                        ; 0043e2f3
    JLE 0x0043e4b7                      ; 0043e2f5
        ;   XREF to: 0043e4b7 (CONDITIONAL_JUMP)  ; LAB_0043e4b7
    LEA EDX,[EBX + 0x20]                ; 0043e2fb
    LEA ECX,[EBX + 0x2c]                ; 0043e2fe
    LEA EAX,[EBX + 0x28]                ; 0043e301
    MOV dword ptr [ESP + 0x114],EAX     ; 0043e304
    LEA EAX,[EBX + 0x24]                ; 0043e30b
    MOV dword ptr [ESP + 0x118],EAX     ; 0043e30e
    LEA EAX,[EBX + 0x30]                ; 0043e315
    MOV dword ptr [ESP + 0x144],EAX     ; 0043e318
    LEA EAX,[EBX + 0x34]                ; 0043e31f
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043e322
    MOV dword ptr [ESP + 0x108],EAX     ; 0043e325
    MOV EAX,0x77c26c                    ; 0043e32c | DAT_0077c26c
    XOR ESI,ESI                         ; 0043e331
    ADD EAX,0x1c                        ; 0043e333
    ADD EDI,0x1c720                     ; 0043e336
    MOV dword ptr [ESP + 0x13c],EAX     ; 0043e33c | DAT_0077c288
    MOV EAX,dword ptr [ECX]             ; 0043e343
        ;   Label: LAB_0043e343
    MOV dword ptr [ESP + 0xa8],EAX      ; 0043e345
    MOV EAX,dword ptr [ESP + 0x144]     ; 0043e34c
    MOV EAX,dword ptr [EAX]             ; 0043e353
    MOV dword ptr [ESP + 0xac],EAX      ; 0043e355
    FLD float ptr [ESP + 0xac]          ; 0043e35c
    FMUL ST0                            ; 0043e363
    MOV EAX,dword ptr [ESP + 0x108]     ; 0043e365
    FLD float ptr [ESP + 0xa8]          ; 0043e36c
    FMUL ST0                            ; 0043e373
    MOV EAX,dword ptr [EAX]             ; 0043e375
    FADDP                               ; 0043e377
    MOV dword ptr [ESP + 0xb0],EAX      ; 0043e379
    FLD float ptr [ESP + 0xb0]          ; 0043e380
    FMUL ST0                            ; 0043e387
    FADDP                               ; 0043e389
    FSQRT                               ; 0043e38b
    FST float ptr [ESP + 0x4]           ; 0043e38d
    FLDZ                                ; 0043e391
    FCOMPP                              ; 0043e393
    FNSTSW AX                           ; 0043e395
    SAHF                                ; 0043e397
    JNC 0x0043e7cb                      ; 0043e398
        ;   XREF to: 0043e7cb (CONDITIONAL_JUMP)  ; LAB_0043e7cb
    FLD1                                ; 0043e39e
    FLD float ptr [ESP + 0xa8]          ; 0043e3a0
    FXCH                                ; 0043e3a7
    FDIV float ptr [ESP + 0x4]          ; 0043e3a9
    FXCH                                ; 0043e3ad
    FMUL ST1                            ; 0043e3af
    FLD float ptr [ESP + 0xac]          ; 0043e3b1
    FMUL ST2                            ; 0043e3b8
    FLD float ptr [ESP + 0xb0]          ; 0043e3ba
    FMULP ST3                           ; 0043e3c1
    FXCH                                ; 0043e3c3
    FSTP float ptr [ESP + 0xa8]         ; 0043e3c5
    FSTP float ptr [ESP + 0xac]         ; 0043e3cc
    FSTP float ptr [ESP + 0xb0]         ; 0043e3d3
    FLD float ptr [EBX + 0x30]          ; 0043e3da
        ;   Label: LAB_0043e3da
    FCOMP double ptr [0x0057b4fe]       ; 0043e3dd | DAT_0057b4fe
    FNSTSW AX                           ; 0043e3e3
    SAHF                                ; 0043e3e5
    JNC 0x0043e7e7                      ; 0043e3e6
        ;   XREF to: 0043e7e7 (CONDITIONAL_JUMP)  ; LAB_0043e7e7
    IMUL EAX,dword ptr [ESP + 0x140],0x28 ; 0043e3ec
    FLD float ptr [EBX + 0x24]          ; 0043e3f4
    FLD float ptr [ESI + 0x77bdc0]      ; 0043e3f7 | DAT_0077bdc0
    FADD float ptr [EAX + 0x77c284]     ; 0043e3fd | DAT_0077c284
    MOV dword ptr [ESP + 0x11c],EAX     ; 0043e403
    FSTP float ptr [ESP + 0xfc]         ; 0043e40a
    FCOMP float ptr [ESP + 0xfc]        ; 0043e411
    FNSTSW AX                           ; 0043e418
    SAHF                                ; 0043e41a
    JNC 0x0043e7e7                      ; 0043e41b
        ;   XREF to: 0043e7e7 (CONDITIONAL_JUMP)  ; LAB_0043e7e7
    FLD float ptr [EBX + 0x24]          ; 0043e421
    FCOMP float ptr [ESI + 0x77bdc0]    ; 0043e424 | DAT_0077bdc0
    FNSTSW AX                           ; 0043e42a
    SAHF                                ; 0043e42c
    JBE 0x0043e7e7                      ; 0043e42d
        ;   XREF to: 0043e7e7 (CONDITIONAL_JUMP)  ; LAB_0043e7e7
    FLD float ptr [EBX + 0x20]          ; 0043e433
    FSUB float ptr [ESI + 0x77bdbc]     ; 0043e436 | DAT_0077bdbc
    FST float ptr [ESP + 0x30]          ; 0043e43c
    FLD float ptr [EBX + 0x28]          ; 0043e440
    FSUB float ptr [ESI + 0x77bdc4]     ; 0043e443 | DAT_0077bdc4
    FXCH                                ; 0043e449
    FMUL float ptr [ESP + 0x30]         ; 0043e44b
    FXCH                                ; 0043e44f
    FST float ptr [ESP + 0x38]          ; 0043e451
    FMUL float ptr [ESP + 0x38]         ; 0043e455
    XOR EAX,EAX                         ; 0043e459
    FADDP                               ; 0043e45b
    MOV dword ptr [ESP + 0x34],EAX      ; 0043e45d
    FSQRT                               ; 0043e461
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043e463
    FCOMP float ptr [EAX + 0x77c288]    ; 0043e46a | DAT_0077c288
    FNSTSW AX                           ; 0043e470
    SAHF                                ; 0043e472
    JNC 0x0043e7e7                      ; 0043e473
        ;   XREF to: 0043e7e7 (CONDITIONAL_JUMP)  ; LAB_0043e7e7
    MOV dword ptr [EBX + 0x30],0x0      ; 0043e479
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0043e480
    MOV dword ptr [EBX + 0x6c],0x1      ; 0043e487
    MOV dword ptr [EBX + 0x24],EAX      ; 0043e48e
    ADD dword ptr [ESP + 0x13c],0x28    ; 0043e491 | DAT_0077c2b0
        ;   Label: LAB_0043e491
    MOV EAX,dword ptr [ESP + 0x140]     ; 0043e499
    INC EAX                             ; 0043e4a0
    ADD ESI,0xc                         ; 0043e4a1
    MOV dword ptr [ESP + 0x140],EAX     ; 0043e4a4
    CMP EAX,dword ptr [0x0077bdb8]      ; 0043e4ab | DAT_0077bdb8
    JL 0x0043e343                       ; 0043e4b1
        ;   XREF to: 0043e343 (CONDITIONAL_JUMP)  ; LAB_0043e343
    XOR EDX,EDX                         ; 0043e4b7
        ;   Label: LAB_0043e4b7
    MOV ECX,dword ptr [EBX + 0x44]      ; 0043e4b9
    MOV dword ptr [ESP + 0x124],EDX     ; 0043e4bc
    TEST ECX,ECX                        ; 0043e4c3
    JLE 0x0043e7c4                      ; 0043e4c5
        ;   XREF to: 0043e7c4 (CONDITIONAL_JUMP)  ; LAB_0043e7c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e4cb
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043e4ce
    LEA EDX,[EBX + 0x20]                ; 0043e4d1
    ADD EAX,0x65b14                     ; 0043e4d4
    ADD ESI,0x1c720                     ; 0043e4d9
    MOV dword ptr [ESP + 0x120],EAX     ; 0043e4df
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e4e6
    LEA ECX,[EBX + 0x2c]                ; 0043e4e9
    ADD EAX,0x200                       ; 0043e4ec
    MOV EDI,EBX                         ; 0043e4f1
    MOV dword ptr [ESP + 0x10c],EAX     ; 0043e4f3
    IMUL EAX,dword ptr [EDI + 0x48],0x74 ; 0043e4fa
        ;   Label: LAB_0043e4fa
    MOV dword ptr [ESP + 0x104],EAX     ; 0043e4fe
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0043e505
    ADD EAX,dword ptr [ESP + 0x104]     ; 0043e50c
    FLD float ptr [EDX]                 ; 0043e513
    FSUB float ptr [EAX + 0x20]         ; 0043e515
    ADD EAX,0x20                        ; 0043e518
    FSTP float ptr [ESP + 0xc]          ; 0043e51b
    FLD float ptr [EDX + 0x4]           ; 0043e51f
    FSUB float ptr [EAX + 0x4]          ; 0043e522
    FSTP float ptr [ESP + 0x10]         ; 0043e525
    FLD float ptr [EDX + 0x8]           ; 0043e529
    FSUB float ptr [EAX + 0x8]          ; 0043e52c
    LEA EAX,[ESP + 0xc]                 ; 0043e52f
    MOV dword ptr [ESP + 0x104],EAX     ; 0043e533
    LEA EAX,[ESP + 0x78]                ; 0043e53a
    FSTP float ptr [ESP + 0x14]         ; 0043e53e
    CMP EAX,dword ptr [ESP + 0x104]     ; 0043e542
    JNZ 0x0043ebc3                      ; 0043e549
        ;   XREF to: 0043ebc3 (CONDITIONAL_JUMP)  ; LAB_0043ebc3
    FLD float ptr [ESP + 0x7c]          ; 0043e54f
        ;   Label: LAB_0043e54f
    FMUL ST0                            ; 0043e553
    FLD float ptr [ESP + 0x78]          ; 0043e555
    FMUL ST0                            ; 0043e559
    FADDP                               ; 0043e55b
    FLD float ptr [ESP + 0x80]          ; 0043e55d
    FMUL ST0                            ; 0043e564
    FADDP                               ; 0043e566
    FSQRT                               ; 0043e568
    FSTP float ptr [ESP + 0x134]        ; 0043e56a
    MOV EAX,dword ptr [ESP + 0x134]     ; 0043e571
    MOV dword ptr [ESP],EAX             ; 0043e578
    MOV EAX,dword ptr [EDI + 0x58]      ; 0043e57b
    MOV dword ptr [ESP + 0x138],EAX     ; 0043e57e
    FLD float ptr [ESP + 0x134]         ; 0043e585
    FCOMP float ptr [ESP + 0x138]       ; 0043e58c
    FNSTSW AX                           ; 0043e593
    SAHF                                ; 0043e595
    JBE 0x0043e679                      ; 0043e596
        ;   XREF to: 0043e679 (CONDITIONAL_JUMP)  ; LAB_0043e679
    FLD float ptr [ESP + 0x134]         ; 0043e59c
    FLD ST0                             ; 0043e5a3
    FSUB float ptr [ESP + 0x138]        ; 0043e5a5
    FLD float ptr [ESP + 0x78]          ; 0043e5ac
    FXCH                                ; 0043e5b0
    FSTP float ptr [ESP + 0x128]        ; 0043e5b2
    FMUL float ptr [ESP + 0x128]        ; 0043e5b9
    FLD float ptr [ESP + 0x7c]          ; 0043e5c0
    FMUL float ptr [ESP + 0x128]        ; 0043e5c4
    FLD float ptr [ESP + 0x80]          ; 0043e5cb
    FMUL float ptr [ESP + 0x128]        ; 0043e5d2
    FLD1                                ; 0043e5d9
    FXCH ST3                            ; 0043e5db
    FST float ptr [ESP + 0x6c]          ; 0043e5dd
    FXCH ST3                            ; 0043e5e1
    FDIVRP ST4,ST0                      ; 0043e5e3
    FXCH ST2                            ; 0043e5e5
    FMUL ST3                            ; 0043e5e7
    FXCH                                ; 0043e5e9
    FST float ptr [ESP + 0x70]          ; 0043e5eb
    FMUL ST3                            ; 0043e5ef
    FXCH ST2                            ; 0043e5f1
    FST float ptr [ESP + 0x74]          ; 0043e5f3
    FMULP ST3                           ; 0043e5f7
    FSTP float ptr [ESP + 0x3c]         ; 0043e5f9
    FSTP float ptr [ESP + 0x40]         ; 0043e5fd
    FSTP float ptr [ESP + 0x44]         ; 0043e601
    FLD float ptr [EDX]                 ; 0043e605
    FSUB float ptr [ESP + 0x3c]         ; 0043e607
    FLD float ptr [EDX + 0x4]           ; 0043e60b
    FXCH                                ; 0043e60e
    FSTP float ptr [EDX]                ; 0043e610
    FSUB float ptr [ESP + 0x40]         ; 0043e612
    FLD float ptr [EDX + 0x8]           ; 0043e616
    FXCH                                ; 0043e619
    FSTP float ptr [EDX + 0x4]          ; 0043e61b
    FSUB float ptr [ESP + 0x44]         ; 0043e61e
    FSTP float ptr [EDX + 0x8]          ; 0043e622
    FLD float ptr [ESP + 0x3c]          ; 0043e625
    FMUL float ptr [ESI]                ; 0043e629
    FLD float ptr [ESP + 0x40]          ; 0043e62b
    FXCH                                ; 0043e62f
    FSTP float ptr [ESP + 0x90]         ; 0043e631
    FMUL float ptr [ESI]                ; 0043e638
    FLD float ptr [ESP + 0x44]          ; 0043e63a
    FXCH                                ; 0043e63e
    FSTP float ptr [ESP + 0x94]         ; 0043e640
    FMUL float ptr [ESI]                ; 0043e647
    FSTP float ptr [ESP + 0x98]         ; 0043e649
    FLD float ptr [ECX]                 ; 0043e650
    FSUB float ptr [ESP + 0x90]         ; 0043e652
    FLD float ptr [ECX + 0x4]           ; 0043e659
    FXCH                                ; 0043e65c
    FSTP float ptr [ECX]                ; 0043e65e
    FSUB float ptr [ESP + 0x94]         ; 0043e660
    FLD float ptr [ECX + 0x8]           ; 0043e667
    FXCH                                ; 0043e66a
    FSTP float ptr [ECX + 0x4]          ; 0043e66c
    FSUB float ptr [ESP + 0x98]         ; 0043e66f
    FSTP float ptr [ECX + 0x8]          ; 0043e676
    FLD float ptr [ESP]                 ; 0043e679
        ;   Label: LAB_0043e679
    FCOMP float ptr [ESP + 0x138]       ; 0043e67c
    FNSTSW AX                           ; 0043e683
    SAHF                                ; 0043e685
    JNC 0x0043e7a9                      ; 0043e686
        ;   XREF to: 0043e7a9 (CONDITIONAL_JUMP)  ; LAB_0043e7a9
    FLD float ptr [ESP]                 ; 0043e68c
    FCOMP double ptr [0x0057b506]       ; 0043e68f | DAT_0057b506
    FNSTSW AX                           ; 0043e695
    SAHF                                ; 0043e697
    JBE 0x0043e7a9                      ; 0043e698
        ;   XREF to: 0043e7a9 (CONDITIONAL_JUMP)  ; LAB_0043e7a9
    FLD float ptr [ESP]                 ; 0043e69e
    FLD float ptr [ESP + 0x138]         ; 0043e6a1
    FSUB ST0,ST1                        ; 0043e6a8
    FLD float ptr [ESP + 0x78]          ; 0043e6aa
    FXCH                                ; 0043e6ae
    FSTP float ptr [ESP + 0x12c]        ; 0043e6b0
    FMUL float ptr [ESP + 0x12c]        ; 0043e6b7
    FLD float ptr [ESP + 0x7c]          ; 0043e6be
    FMUL float ptr [ESP + 0x12c]        ; 0043e6c2
    FLD float ptr [ESP + 0x80]          ; 0043e6c9
    FMUL float ptr [ESP + 0x12c]        ; 0043e6d0
    FLD1                                ; 0043e6d7
    FXCH ST3                            ; 0043e6d9
    FST float ptr [ESP + 0xf0]          ; 0043e6db
    FXCH ST3                            ; 0043e6e2
    FDIVRP ST4,ST0                      ; 0043e6e4
    FXCH ST2                            ; 0043e6e6
    FMUL ST3                            ; 0043e6e8
    FXCH                                ; 0043e6ea
    FST float ptr [ESP + 0xf4]          ; 0043e6ec
    FMUL ST3                            ; 0043e6f3
    FXCH ST2                            ; 0043e6f5
    FST float ptr [ESP + 0xf8]          ; 0043e6f7
    FMULP ST3                           ; 0043e6fe
    MOV EAX,dword ptr [ESP + 0x120]     ; 0043e700
    FSTP float ptr [ESP + 0x48]         ; 0043e707
    FSTP float ptr [ESP + 0x4c]         ; 0043e70b
    FSTP float ptr [ESP + 0x50]         ; 0043e70f
    FLD float ptr [ESP + 0x48]          ; 0043e713
    FMUL float ptr [EAX]                ; 0043e717
    FLD float ptr [ESP + 0x4c]          ; 0043e719
    FXCH                                ; 0043e71d
    FSTP float ptr [ESP + 0x60]         ; 0043e71f
    FMUL float ptr [EAX]                ; 0043e723
    FLD float ptr [ESP + 0x50]          ; 0043e725
    FXCH                                ; 0043e729
    FSTP float ptr [ESP + 0x64]         ; 0043e72b
    FMUL float ptr [EAX]                ; 0043e72f
    FSTP float ptr [ESP + 0x68]         ; 0043e731
    FLD float ptr [EDX]                 ; 0043e735
    FADD float ptr [ESP + 0x60]         ; 0043e737
    FLD float ptr [EDX + 0x4]           ; 0043e73b
    FXCH                                ; 0043e73e
    FSTP float ptr [EDX]                ; 0043e740
    FADD float ptr [ESP + 0x64]         ; 0043e742
    FLD float ptr [EDX + 0x8]           ; 0043e746
    FXCH                                ; 0043e749
    FSTP float ptr [EDX + 0x4]          ; 0043e74b
    FADD float ptr [ESP + 0x68]         ; 0043e74e
    FSTP float ptr [EDX + 0x8]          ; 0043e752
    FLD float ptr [ESP + 0x60]          ; 0043e755
    FMUL float ptr [ESI]                ; 0043e759
    FLD float ptr [ESP + 0x64]          ; 0043e75b
    FXCH                                ; 0043e75f
    FSTP float ptr [ESP + 0xd8]         ; 0043e761
    FMUL float ptr [ESI]                ; 0043e768
    FLD float ptr [ESP + 0x68]          ; 0043e76a
    FXCH                                ; 0043e76e
    FSTP float ptr [ESP + 0xdc]         ; 0043e770
    FMUL float ptr [ESI]                ; 0043e777
    FSTP float ptr [ESP + 0xe0]         ; 0043e779
    FLD float ptr [ECX]                 ; 0043e780
    FADD float ptr [ESP + 0xd8]         ; 0043e782
    FLD float ptr [ECX + 0x4]           ; 0043e789
    FXCH                                ; 0043e78c
    FSTP float ptr [ECX]                ; 0043e78e
    FADD float ptr [ESP + 0xdc]         ; 0043e790
    FLD float ptr [ECX + 0x8]           ; 0043e797
    FXCH                                ; 0043e79a
    FSTP float ptr [ECX + 0x4]          ; 0043e79c
    FADD float ptr [ESP + 0xe0]         ; 0043e79f
    FSTP float ptr [ECX + 0x8]          ; 0043e7a6
    MOV EAX,dword ptr [ESP + 0x124]     ; 0043e7a9
        ;   Label: LAB_0043e7a9
    INC EAX                             ; 0043e7b0
    ADD EDI,0x4                         ; 0043e7b1
    MOV dword ptr [ESP + 0x124],EAX     ; 0043e7b4
    CMP EAX,dword ptr [EBX + 0x44]      ; 0043e7bb
    JL 0x0043e4fa                       ; 0043e7be
        ;   XREF to: 0043e4fa (CONDITIONAL_JUMP)  ; LAB_0043e4fa
    MOV ESP,EBP                         ; 0043e7c4
        ;   Label: LAB_0043e7c4
    POP EBP                             ; 0043e7c6
    POP EDI                             ; 0043e7c7
    POP ESI                             ; 0043e7c8
    POP EBX                             ; 0043e7c9
    RET                                 ; 0043e7ca
    XOR EAX,EAX                         ; 0043e7cb
        ;   Label: LAB_0043e7cb
    MOV dword ptr [ESP + 0xac],EAX      ; 0043e7cd
    MOV dword ptr [ESP + 0xa8],EAX      ; 0043e7d4
    MOV dword ptr [ESP + 0xb0],EAX      ; 0043e7db
    JMP 0x0043e3da                      ; 0043e7e2
        ;   XREF to: 0043e3da (UNCONDITIONAL_JUMP)  ; LAB_0043e3da
    FLD float ptr [EBX + 0x24]          ; 0043e7e7
        ;   Label: LAB_0043e7e7
    FCOMP float ptr [ESI + 0x77bdc0]    ; 0043e7ea | DAT_0077bdc0
    FNSTSW AX                           ; 0043e7f0
    SAHF                                ; 0043e7f2
    JC 0x0043e491                       ; 0043e7f3
        ;   XREF to: 0043e491 (CONDITIONAL_JUMP)  ; LAB_0043e491
    IMUL EAX,dword ptr [ESP + 0x140],0x28 ; 0043e7f9
    FLD float ptr [EBX + 0x24]          ; 0043e801
    FLD float ptr [ESI + 0x77bdc0]      ; 0043e804 | DAT_0077bdc0
    FADD float ptr [EAX + 0x77c284]     ; 0043e80a | DAT_0077c284
    MOV dword ptr [ESP + 0x100],EAX     ; 0043e810
    FSTP float ptr [ESP + 0x130]        ; 0043e817
    FCOMP float ptr [ESP + 0x130]       ; 0043e81e
    FNSTSW AX                           ; 0043e825
    SAHF                                ; 0043e827
    JA 0x0043e491                       ; 0043e828
        ;   XREF to: 0043e491 (CONDITIONAL_JUMP)  ; LAB_0043e491
    FLD float ptr [EBX + 0x20]          ; 0043e82e
    FSUB float ptr [ESI + 0x77bdbc]     ; 0043e831 | DAT_0077bdbc
    FST float ptr [ESP + 0x54]          ; 0043e837
    FLD float ptr [EBX + 0x28]          ; 0043e83b
    FSUB float ptr [ESI + 0x77bdc4]     ; 0043e83e | DAT_0077bdc4
    FXCH                                ; 0043e844
    FMUL float ptr [ESP + 0x54]         ; 0043e846
    FXCH                                ; 0043e84a
    FST float ptr [ESP + 0x5c]          ; 0043e84c
    FMUL float ptr [ESP + 0x5c]         ; 0043e850
    XOR EAX,EAX                         ; 0043e854
    FXCH                                ; 0043e856
    FXCH                                ; 0043e858
    FSTP float ptr [ESP + 0x110]        ; 0043e85a
    FADD float ptr [ESP + 0x110]        ; 0043e861
    MOV dword ptr [ESP + 0x58],EAX      ; 0043e868
    FSQRT                               ; 0043e86c
    MOV EAX,dword ptr [ESP + 0x100]     ; 0043e86e
    FST float ptr [ESP + 0x8]           ; 0043e875
    FCOMP float ptr [EAX + 0x77c288]    ; 0043e879 | DAT_0077c288
    FNSTSW AX                           ; 0043e87f
    SAHF                                ; 0043e881
    JA 0x0043e491                       ; 0043e882
        ;   XREF to: 0043e491 (CONDITIONAL_JUMP)  ; LAB_0043e491
    FLD float ptr [EBX + 0x3c]          ; 0043e888
    FCOMP float ptr [ESP + 0x130]       ; 0043e88b
    FNSTSW AX                           ; 0043e892
    SAHF                                ; 0043e894
    JC 0x0043e998                       ; 0043e895
        ;   XREF to: 0043e998 (CONDITIONAL_JUMP)  ; LAB_0043e998
    MOV EAX,dword ptr [EDX]             ; 0043e89b
    MOV dword ptr [ESP + 0x84],EAX      ; 0043e89d
    MOV EAX,dword ptr [ESP + 0x118]     ; 0043e8a4
    MOV EAX,dword ptr [EAX]             ; 0043e8ab
    MOV dword ptr [ESP + 0x88],EAX      ; 0043e8ad
    MOV EAX,dword ptr [ESP + 0x114]     ; 0043e8b4
    MOV EAX,dword ptr [EAX]             ; 0043e8bb
    MOV dword ptr [ESP + 0x8c],EAX      ; 0043e8bd
    MOV EAX,dword ptr [ESP + 0x130]     ; 0043e8c4
    MOV dword ptr [ESP + 0x88],EAX      ; 0043e8cb
    FLD float ptr [ESP + 0x84]          ; 0043e8d2
    FSUB float ptr [EDX]                ; 0043e8d9
    FLD float ptr [ESP + 0x130]         ; 0043e8db
    FXCH                                ; 0043e8e2
    FSTP float ptr [ESP + 0xc0]         ; 0043e8e4
    FSUB float ptr [EDX + 0x4]          ; 0043e8eb
    FLD float ptr [ESP + 0x8c]          ; 0043e8ee
    FXCH                                ; 0043e8f5
    FSTP float ptr [ESP + 0xc4]         ; 0043e8f7
    FSUB float ptr [EDX + 0x8]          ; 0043e8fe
    FLD float ptr [ESP + 0xc0]          ; 0043e901
    FXCH                                ; 0043e908
    FSTP float ptr [ESP + 0xc8]         ; 0043e90a
    FMUL float ptr [EDI]                ; 0043e911
    FLD float ptr [ESP + 0xc4]          ; 0043e913
    FXCH                                ; 0043e91a
    FSTP float ptr [ESP + 0xe4]         ; 0043e91c
    FMUL float ptr [EDI]                ; 0043e923
    FLD float ptr [ESP + 0xc8]          ; 0043e925
    FXCH                                ; 0043e92c
    FSTP float ptr [ESP + 0xe8]         ; 0043e92e
    FMUL float ptr [EDI]                ; 0043e935
    FSTP float ptr [ESP + 0xec]         ; 0043e937
    FLD float ptr [ECX]                 ; 0043e93e
    FADD float ptr [ESP + 0xe4]         ; 0043e940
    FLD float ptr [ECX + 0x4]           ; 0043e947
    FXCH                                ; 0043e94a
    FSTP float ptr [ECX]                ; 0043e94c
    FADD float ptr [ESP + 0xe8]         ; 0043e94e
    FLD float ptr [ECX + 0x8]           ; 0043e955
    FXCH                                ; 0043e958
    FSTP float ptr [ECX + 0x4]          ; 0043e95a
    FADD float ptr [ESP + 0xec]         ; 0043e95d
    LEA EAX,[ESP + 0x84]                ; 0043e964
    FSTP float ptr [ECX + 0x8]          ; 0043e96b
    CMP EDX,EAX                         ; 0043e96e
    JZ 0x0043e491                       ; 0043e970
        ;   XREF to: 0043e491 (CONDITIONAL_JUMP)  ; LAB_0043e491
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043e976
    MOV dword ptr [EDX],EAX             ; 0043e97d
    MOV EAX,dword ptr [ESP + 0x88]      ; 0043e97f
    MOV dword ptr [EDX + 0x4],EAX       ; 0043e986
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0043e989
    MOV dword ptr [EDX + 0x8],EAX       ; 0043e990
    JMP 0x0043e491                      ; 0043e993
        ;   XREF to: 0043e491 (UNCONDITIONAL_JUMP)  ; LAB_0043e491
    FLD float ptr [EBX + 0x3c]          ; 0043e998
        ;   Label: LAB_0043e998
    FCOMP float ptr [ESI + 0x77bdc0]    ; 0043e99b | DAT_0077bdc0
    FNSTSW AX                           ; 0043e9a1
    SAHF                                ; 0043e9a3
    JA 0x0043ea85                       ; 0043e9a4
        ;   XREF to: 0043ea85 (CONDITIONAL_JUMP)  ; LAB_0043ea85
    MOV EAX,dword ptr [EDX]             ; 0043e9aa
    MOV dword ptr [ESP + 0x18],EAX      ; 0043e9ac
    MOV EAX,dword ptr [ESP + 0x118]     ; 0043e9b0
    MOV EAX,dword ptr [EAX]             ; 0043e9b7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043e9b9
    MOV EAX,dword ptr [ESP + 0x114]     ; 0043e9bd
    MOV EAX,dword ptr [EAX]             ; 0043e9c4
    MOV dword ptr [ESP + 0x20],EAX      ; 0043e9c6
    MOV EAX,dword ptr [ESI + 0x77bdc0]  ; 0043e9ca | DAT_0077bdc0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043e9d0
    FLD float ptr [ESP + 0x18]          ; 0043e9d4
    FSUB float ptr [EDX]                ; 0043e9d8
    FLD float ptr [ESP + 0x1c]          ; 0043e9da
    FXCH                                ; 0043e9de
    FSTP float ptr [ESP + 0xb4]         ; 0043e9e0
    FSUB float ptr [EDX + 0x4]          ; 0043e9e7
    FLD float ptr [ESP + 0x20]          ; 0043e9ea
    FXCH                                ; 0043e9ee
    FSTP float ptr [ESP + 0xb8]         ; 0043e9f0
    FSUB float ptr [EDX + 0x8]          ; 0043e9f7
    FLD float ptr [ESP + 0xb4]          ; 0043e9fa
    FXCH                                ; 0043ea01
    FSTP float ptr [ESP + 0xbc]         ; 0043ea03
    FMUL float ptr [EDI]                ; 0043ea0a
    FLD float ptr [ESP + 0xb8]          ; 0043ea0c
    FXCH                                ; 0043ea13
    FSTP float ptr [ESP + 0xcc]         ; 0043ea15
    FMUL float ptr [EDI]                ; 0043ea1c
    FLD float ptr [ESP + 0xbc]          ; 0043ea1e
    FXCH                                ; 0043ea25
    FSTP float ptr [ESP + 0xd0]         ; 0043ea27
    FMUL float ptr [EDI]                ; 0043ea2e
    FSTP float ptr [ESP + 0xd4]         ; 0043ea30
    FLD float ptr [ECX]                 ; 0043ea37
    FADD float ptr [ESP + 0xcc]         ; 0043ea39
    FLD float ptr [ECX + 0x4]           ; 0043ea40
    FXCH                                ; 0043ea43
    FSTP float ptr [ECX]                ; 0043ea45
    FADD float ptr [ESP + 0xd0]         ; 0043ea47
    FLD float ptr [ECX + 0x8]           ; 0043ea4e
    FXCH                                ; 0043ea51
    FSTP float ptr [ECX + 0x4]          ; 0043ea53
    FADD float ptr [ESP + 0xd4]         ; 0043ea56
    LEA EAX,[ESP + 0x18]                ; 0043ea5d
    FSTP float ptr [ECX + 0x8]          ; 0043ea61
    CMP EDX,EAX                         ; 0043ea64
    JZ 0x0043e491                       ; 0043ea66
        ;   XREF to: 0043e491 (CONDITIONAL_JUMP)  ; LAB_0043e491
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043ea6c
    MOV dword ptr [EDX],EAX             ; 0043ea70
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043ea72
    MOV dword ptr [EDX + 0x4],EAX       ; 0043ea76
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043ea79
    MOV dword ptr [EDX + 0x8],EAX       ; 0043ea7d
    JMP 0x0043e491                      ; 0043ea80
        ;   XREF to: 0043e491 (UNCONDITIONAL_JUMP)  ; LAB_0043e491
    FLD float ptr [ESP + 0x8]           ; 0043ea85
        ;   Label: LAB_0043ea85
    FLDZ                                ; 0043ea89
    FCOMPP                              ; 0043ea8b
    FNSTSW AX                           ; 0043ea8d
    SAHF                                ; 0043ea8f
    JNC 0x0043ebb0                      ; 0043ea90
        ;   XREF to: 0043ebb0 (CONDITIONAL_JUMP)  ; LAB_0043ebb0
    FLD1                                ; 0043ea96
    FLD float ptr [ESP + 0x54]          ; 0043ea98
    FXCH                                ; 0043ea9c
    FDIV float ptr [ESP + 0x8]          ; 0043ea9e
    FXCH                                ; 0043eaa2
    FMUL ST1                            ; 0043eaa4
    FLDZ                                ; 0043eaa6
    FMUL ST2                            ; 0043eaa8
    FLD float ptr [ESP + 0x5c]          ; 0043eaaa
    FMULP ST3                           ; 0043eaae
    FXCH                                ; 0043eab0
    FSTP float ptr [ESP + 0x54]         ; 0043eab2
    FSTP float ptr [ESP + 0x58]         ; 0043eab6
    FSTP float ptr [ESP + 0x5c]         ; 0043eaba
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043eabe
        ;   Label: LAB_0043eabe
    FLD float ptr [ESP + 0x54]          ; 0043eac5
    FMUL float ptr [EAX]                ; 0043eac9 | DAT_0077c288
    FLD float ptr [ESP + 0x58]          ; 0043eacb
    FXCH                                ; 0043eacf
    FSTP float ptr [ESP + 0x54]         ; 0043ead1
    FMUL float ptr [EAX]                ; 0043ead5 | DAT_0077c288
    FLD float ptr [ESP + 0x5c]          ; 0043ead7
    FXCH                                ; 0043eadb
    FSTP float ptr [ESP + 0x58]         ; 0043eadd
    FMUL float ptr [EAX]                ; 0043eae1 | DAT_0077c288
    FLD float ptr [ESP + 0x54]          ; 0043eae3
    FADD float ptr [ESI + 0x77bdbc]     ; 0043eae7 | DAT_0077bdbc
    FXCH                                ; 0043eaed
    FSTP float ptr [ESP + 0x5c]         ; 0043eaef
    FSTP float ptr [ESP + 0x54]         ; 0043eaf3
    FLD float ptr [ESP + 0x5c]          ; 0043eaf7
    FLD float ptr [ESP + 0x54]          ; 0043eafb
    MOV EAX,dword ptr [EBX + 0x24]      ; 0043eaff
    FXCH                                ; 0043eb02
    FADD float ptr [ESI + 0x77bdc4]     ; 0043eb04 | DAT_0077bdc4
    MOV dword ptr [ESP + 0x58],EAX      ; 0043eb0a
    FSTP float ptr [ESP + 0x5c]         ; 0043eb0e
    FSUB float ptr [EDX]                ; 0043eb12
    FLD float ptr [ESP + 0x58]          ; 0043eb14
    FXCH                                ; 0043eb18
    FSTP float ptr [ESP + 0x24]         ; 0043eb1a
    FSUB float ptr [EDX + 0x4]          ; 0043eb1e
    FLD float ptr [ESP + 0x5c]          ; 0043eb21
    FXCH                                ; 0043eb25
    FSTP float ptr [ESP + 0x28]         ; 0043eb27
    FSUB float ptr [EDX + 0x8]          ; 0043eb2b
    FLD float ptr [ESP + 0x24]          ; 0043eb2e
    FXCH                                ; 0043eb32
    FSTP float ptr [ESP + 0x2c]         ; 0043eb34
    FMUL float ptr [EDI]                ; 0043eb38
    FLD float ptr [ESP + 0x28]          ; 0043eb3a
    FXCH                                ; 0043eb3e
    FSTP float ptr [ESP + 0x9c]         ; 0043eb40
    FMUL float ptr [EDI]                ; 0043eb47
    FLD float ptr [ESP + 0x2c]          ; 0043eb49
    FXCH                                ; 0043eb4d
    FSTP float ptr [ESP + 0xa0]         ; 0043eb4f
    FMUL float ptr [EDI]                ; 0043eb56
    FSTP float ptr [ESP + 0xa4]         ; 0043eb58
    FLD float ptr [ECX]                 ; 0043eb5f
    FADD float ptr [ESP + 0x9c]         ; 0043eb61
    FLD float ptr [ECX + 0x4]           ; 0043eb68
    FXCH                                ; 0043eb6b
    FSTP float ptr [ECX]                ; 0043eb6d
    FADD float ptr [ESP + 0xa0]         ; 0043eb6f
    FLD float ptr [ECX + 0x8]           ; 0043eb76
    FXCH                                ; 0043eb79
    FSTP float ptr [ECX + 0x4]          ; 0043eb7b
    FADD float ptr [ESP + 0xa4]         ; 0043eb7e
    LEA EAX,[ESP + 0x54]                ; 0043eb85
    FSTP float ptr [ECX + 0x8]          ; 0043eb89
    CMP EDX,EAX                         ; 0043eb8c
    JZ 0x0043eba4                       ; 0043eb8e
        ;   XREF to: 0043eba4 (CONDITIONAL_JUMP)  ; LAB_0043eba4
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043eb90
    MOV dword ptr [EDX],EAX             ; 0043eb94
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043eb96
    MOV dword ptr [EDX + 0x4],EAX       ; 0043eb9a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0043eb9d
    MOV dword ptr [EDX + 0x8],EAX       ; 0043eba1
    MOV dword ptr [EBX + 0x6c],0x1      ; 0043eba4
        ;   Label: LAB_0043eba4
    JMP 0x0043e491                      ; 0043ebab
        ;   XREF to: 0043e491 (UNCONDITIONAL_JUMP)  ; LAB_0043e491
    XOR EAX,EAX                         ; 0043ebb0
        ;   Label: LAB_0043ebb0
    MOV dword ptr [ESP + 0x58],EAX      ; 0043ebb2
    MOV dword ptr [ESP + 0x54],EAX      ; 0043ebb6
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043ebba
    JMP 0x0043eabe                      ; 0043ebbe
        ;   XREF to: 0043eabe (UNCONDITIONAL_JUMP)  ; LAB_0043eabe
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043ebc3
        ;   Label: LAB_0043ebc3
    MOV dword ptr [ESP + 0x78],EAX      ; 0043ebc7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043ebcb
    MOV dword ptr [ESP + 0x7c],EAX      ; 0043ebcf
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043ebd3
    MOV dword ptr [ESP + 0x80],EAX      ; 0043ebd7
    JMP 0x0043e54f                      ; 0043ebde
        ;   XREF to: 0043e54f (UNCONDITIONAL_JUMP)  ; LAB_0043e54f

