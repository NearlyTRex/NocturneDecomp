; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041b470(float *param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x6b8]:8  local_6b8
; undefined8       Stack[-0x6b0]:8  local_6b0
; undefined4       Stack[-0x6a8]:4  local_6a8
; undefined4       Stack[-0x6a4]:4  local_6a4
; undefined4       Stack[-0x6a0]:4  local_6a0
; undefined4       Stack[-0x69c]:4  local_69c
; undefined4       Stack[-0x698]:4  local_698
; undefined4       Stack[-0x694]:4  local_694
; undefined4       Stack[-0x690]:4  local_690
; undefined4       Stack[-0x68c]:4  local_68c
; undefined4       Stack[-0x688]:4  local_688
; undefined4       Stack[-0x684]:4  local_684
; undefined4       Stack[-0x680]:4  local_680
; undefined4       Stack[-0x67c]:4  local_67c
; undefined4       Stack[-0x674]:4  local_674
; undefined4       Stack[-0x670]:4  local_670
; undefined4       Stack[-0x66c]:4  local_66c
; undefined4       Stack[-0x668]:4  local_668
; undefined4       Stack[-0x664]:4  local_664
; undefined4       Stack[-0x660]:4  local_660
; undefined4       Stack[-0x65c]:4  local_65c
; undefined4       Stack[-0x658]:4  local_658
; undefined4       Stack[-0x654]:4  local_654
; undefined4       Stack[-0x64c]:4  local_64c
; undefined4       Stack[-0x648]:4  local_648
; undefined        Stack[-0x62c]:1  local_62c
; undefined4       Stack[-0x620]:4  local_620
; undefined4       Stack[-0x61c]:4  local_61c
; undefined4       Stack[-0x618]:4  local_618
; undefined4       Stack[-0x614]:4  local_614
; undefined4       Stack[-0x610]:4  local_610
; undefined4       Stack[-0x60c]:4  local_60c
; undefined4       Stack[-0x608]:4  local_608
; undefined4       Stack[-0x604]:4  local_604
; undefined4       Stack[-0x600]:4  local_600
; undefined4       Stack[-0x5fc]:4  local_5fc
; undefined4       Stack[-0x5f8]:4  local_5f8
; undefined4       Stack[-0x5f4]:4  local_5f4
; undefined4       Stack[-0x5f0]:4  local_5f0
; undefined4       Stack[-0x5ec]:4  local_5ec
; undefined4       Stack[-0x5e8]:4  local_5e8
; undefined4       Stack[-0x5e4]:4  local_5e4
; undefined4       Stack[-0x5e0]:4  local_5e0
; undefined4       Stack[-0x5dc]:4  local_5dc
; undefined4       Stack[-0x5d8]:4  local_5d8
; undefined4       Stack[-0x5d4]:4  local_5d4
; undefined4       Stack[-0x5d0]:4  local_5d0
; undefined4       Stack[-0x5cc]:4  local_5cc
; undefined4       Stack[-0x5c8]:4  local_5c8
; undefined4       Stack[-0x5c4]:4  local_5c4
; undefined4       Stack[-0x5c0]:4  local_5c0
; undefined4       Stack[-0x5bc]:4  local_5bc
; undefined4       Stack[-0x5b8]:4  local_5b8
; undefined4       Stack[-0x5b4]:4  local_5b4
; undefined4       Stack[-0x5b0]:4  local_5b0
; undefined4       Stack[-0x5ac]:4  local_5ac
; undefined4       Stack[-0x5a8]:4  local_5a8
; undefined4       Stack[-0x5a4]:4  local_5a4
; undefined4       Stack[-0x5a0]:4  local_5a0
; undefined4       Stack[-0x59c]:4  local_59c
; undefined4       Stack[-0x598]:4  local_598
; undefined4       Stack[-0x594]:4  local_594
; undefined4       Stack[-0x590]:4  local_590
; undefined4       Stack[-0x58c]:4  local_58c
; undefined4       Stack[-0x588]:4  local_588
; undefined4       Stack[-0x584]:4  local_584
; undefined4       Stack[-0x580]:4  local_580
; undefined4       Stack[-0x57c]:4  local_57c
; undefined        Stack[-0x578]:1  local_578
; undefined4       Stack[-0x56c]:4  local_56c
; undefined4       Stack[-0x568]:4  local_568
; undefined4       Stack[-0x564]:4  local_564
; undefined4       Stack[-0x560]:4  local_560
; undefined4       Stack[-0x55c]:4  local_55c
; undefined4       Stack[-0x558]:4  local_558
; undefined4       Stack[-0x554]:4  local_554
; undefined4       Stack[-0x550]:4  local_550
; undefined4       Stack[-0x54c]:4  local_54c
; undefined4       Stack[-0x548]:4  local_548
; undefined4       Stack[-0x544]:4  local_544
; undefined4       Stack[-0x540]:4  local_540
; undefined4       Stack[-0x53c]:4  local_53c
; undefined4       Stack[-0x538]:4  local_538
; undefined4       Stack[-0x534]:4  local_534
; undefined4       Stack[-0x530]:4  local_530
; undefined4       Stack[-0x52c]:4  local_52c
; undefined4       Stack[-0x528]:4  local_528
; undefined4       Stack[-0x524]:4  local_524
; undefined4       Stack[-0x520]:4  local_520
; undefined4       Stack[-0x51c]:4  local_51c
; undefined4       Stack[-0x518]:4  local_518
; undefined4       Stack[-0x514]:4  local_514
; undefined4       Stack[-0x510]:4  local_510
; undefined4       Stack[-0x50c]:4  local_50c
; undefined4       Stack[-0x508]:4  local_508
; undefined4       Stack[-0x504]:4  local_504
; undefined4       Stack[-0x500]:4  local_500
; undefined4       Stack[-0x4fc]:4  local_4fc
; undefined4       Stack[-0x4f8]:4  local_4f8
; undefined4       Stack[-0x4f4]:4  local_4f4
; undefined4       Stack[-0x4f0]:4  local_4f0
; undefined4       Stack[-0x4ec]:4  local_4ec
; undefined4       Stack[-0x4e8]:4  local_4e8
; undefined4       Stack[-0x4e4]:4  local_4e4
; undefined4       Stack[-0x4e0]:4  local_4e0
; undefined4       Stack[-0x4dc]:4  local_4dc
; undefined4       Stack[-0x4d8]:4  local_4d8
; undefined4       Stack[-0x4d4]:4  local_4d4
; undefined4       Stack[-0x4d0]:4  local_4d0
; undefined4       Stack[-0x4cc]:4  local_4cc
; undefined4       Stack[-0x4c8]:4  local_4c8
; undefined4       Stack[-0x4c4]:4  local_4c4
; undefined4       Stack[-0x4c0]:4  local_4c0
; undefined4       Stack[-0x4bc]:4  local_4bc
; undefined4       Stack[-0x4b8]:4  local_4b8
; undefined4       Stack[-0x4b4]:4  local_4b4
; undefined4       Stack[-0x4b0]:4  local_4b0
; undefined4       Stack[-0x4ac]:4  local_4ac
; undefined4       Stack[-0x4a8]:4  local_4a8
; undefined4       Stack[-0x4a4]:4  local_4a4
; undefined4       Stack[-0x4a0]:4  local_4a0
; undefined4       Stack[-0x49c]:4  local_49c
; undefined4       Stack[-0x498]:4  local_498
; undefined4       Stack[-0x494]:4  local_494
; undefined4       Stack[-0x490]:4  local_490
; undefined4       Stack[-0x48c]:4  local_48c
; undefined4       Stack[-0x488]:4  local_488
; undefined4       Stack[-0x484]:4  local_484
; undefined4       Stack[-0x480]:4  local_480
; undefined4       Stack[-0x47c]:4  local_47c
; undefined4       Stack[-0x478]:4  local_478
; undefined4       Stack[-0x474]:4  local_474
; undefined4       Stack[-0x470]:4  local_470
; undefined4       Stack[-0x46c]:4  local_46c
; undefined4       Stack[-0x468]:4  local_468
; undefined        Stack[-0x464]:1  local_464
; undefined4       Stack[-0x458]:4  local_458
; undefined4       Stack[-0x454]:4  local_454
; undefined4       Stack[-0x450]:4  local_450
; undefined4       Stack[-0x44c]:4  local_44c
; undefined4       Stack[-0x448]:4  local_448
; undefined4       Stack[-0x444]:4  local_444
; undefined4       Stack[-0x440]:4  local_440
; undefined4       Stack[-0x43c]:4  local_43c
; undefined4       Stack[-0x438]:4  local_438
; undefined4       Stack[-0x434]:4  local_434
; undefined4       Stack[-0x430]:4  local_430
; undefined4       Stack[-0x42c]:4  local_42c
; undefined4       Stack[-0x428]:4  local_428
; undefined4       Stack[-0x424]:4  local_424
; undefined4       Stack[-0x420]:4  local_420
; undefined4       Stack[-0x41c]:4  local_41c
; undefined4       Stack[-0x418]:4  local_418
; undefined4       Stack[-0x414]:4  local_414
; undefined4       Stack[-0x410]:4  local_410
; undefined4       Stack[-0x40c]:4  local_40c
; undefined4       Stack[-0x408]:4  local_408
; undefined4       Stack[-0x404]:4  local_404
; undefined4       Stack[-0x400]:4  local_400
; undefined4       Stack[-0x3fc]:4  local_3fc
; undefined4       Stack[-0x3f8]:4  local_3f8
; undefined4       Stack[-0x3f4]:4  local_3f4
; undefined4       Stack[-0x3f0]:4  local_3f0
; undefined4       Stack[-0x3ec]:4  local_3ec
; undefined4       Stack[-0x3e8]:4  local_3e8
; undefined4       Stack[-0x3e4]:4  local_3e4
; undefined4       Stack[-0x3e0]:4  local_3e0
; undefined4       Stack[-0x3dc]:4  local_3dc
; undefined4       Stack[-0x3d8]:4  local_3d8
; undefined        Stack[-0x3d4]:1  local_3d4
; undefined4       Stack[-0x3c8]:4  local_3c8
; undefined4       Stack[-0x3c4]:4  local_3c4
; undefined4       Stack[-0x3c0]:4  local_3c0
; undefined4       Stack[-0x3bc]:4  local_3bc
; undefined4       Stack[-0x3b8]:4  local_3b8
; undefined4       Stack[-0x3b4]:4  local_3b4
; undefined4       Stack[-0x3b0]:4  local_3b0
; undefined4       Stack[-0x3ac]:4  local_3ac
; undefined4       Stack[-0x3a8]:4  local_3a8
; undefined4       Stack[-0x3a4]:4  local_3a4
; undefined4       Stack[-0x3a0]:4  local_3a0
; undefined4       Stack[-0x39c]:4  local_39c
; undefined        Stack[-0x398]:1  local_398
; undefined4       Stack[-0x38c]:4  local_38c
; undefined4       Stack[-0x388]:4  local_388
; undefined4       Stack[-0x384]:4  local_384
; undefined4       Stack[-0x380]:4  local_380
; undefined4       Stack[-0x37c]:4  local_37c
; undefined4       Stack[-0x378]:4  local_378
; undefined        Stack[-0x374]:1  local_374
; undefined4       Stack[-0x368]:4  local_368
; undefined4       Stack[-0x364]:4  local_364
; undefined4       Stack[-0x360]:4  local_360
; undefined4       Stack[-0x35c]:4  local_35c
; undefined4       Stack[-0x358]:4  local_358
; undefined4       Stack[-0x354]:4  local_354
; undefined4       Stack[-0x350]:4  local_350
; undefined4       Stack[-0x34c]:4  local_34c
; undefined4       Stack[-0x348]:4  local_348
; undefined        Stack[-0x344]:1  local_344
; undefined4       Stack[-0x338]:4  local_338
; undefined4       Stack[-0x334]:4  local_334
; undefined4       Stack[-0x330]:4  local_330
; undefined4       Stack[-0x32c]:4  local_32c
; undefined4       Stack[-0x328]:4  local_328
; undefined4       Stack[-0x324]:4  local_324
; undefined4       Stack[-0x320]:4  local_320
; undefined4       Stack[-0x31c]:4  local_31c
; undefined4       Stack[-0x318]:4  local_318
; undefined4       Stack[-0x314]:4  local_314
; undefined4       Stack[-0x310]:4  local_310
; undefined4       Stack[-0x30c]:4  local_30c
; undefined4       Stack[-0x308]:4  local_308
; undefined4       Stack[-0x304]:4  local_304
; undefined4       Stack[-0x300]:4  local_300
; undefined4       Stack[-0x2fc]:4  local_2fc
; undefined4       Stack[-0x2f8]:4  local_2f8
; undefined4       Stack[-0x2f4]:4  local_2f4
; undefined4       Stack[-0x2f0]:4  local_2f0
; undefined4       Stack[-0x2ec]:4  local_2ec
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined4       Stack[-0x2e4]:4  local_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2dc]:4  local_2dc
; undefined4       Stack[-0x2d8]:4  local_2d8
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2d0]:4  local_2d0
; undefined4       Stack[-0x2cc]:4  local_2cc
; undefined4       Stack[-0x2c8]:4  local_2c8
; undefined4       Stack[-0x2c4]:4  local_2c4
; undefined4       Stack[-0x2c0]:4  local_2c0
; undefined4       Stack[-0x2bc]:4  local_2bc
; undefined4       Stack[-0x2b8]:4  local_2b8
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined        Stack[-0x29c]:1  local_29c
; undefined4       Stack[-0x290]:4  local_290
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
; undefined4       Stack[-0x280]:4  local_280
; undefined4       Stack[-0x27c]:4  local_27c
; undefined        Stack[-0x278]:1  local_278
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x244]:4  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
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
; undefined        Stack[-0x1ac]:1  local_1ac
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
; undefined        Stack[-0xec]:1  local_ec
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
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; XREF[2]:
;   FUN_0041b410 at 0041b45e
;   FUN_00497e80 at 00497e99
;
; Referenced Globals:
;   undefined4 DAT_005b7391
;   undefined4 DAT_005b7399
;   undefined4 DAT_005b73a1
;   undefined4 DAT_005b73a9
;   undefined4 DAT_005b73b1
;   undefined4 DAT_005b73b5
;   undefined4 DAT_005b73b9
;   undefined4 DAT_005b73bd
;   undefined4 DAT_005b73c1
;   undefined4 DAT_005b73c9
;   undefined4 DAT_005b73cd
;   undefined4 DAT_005b73d1
;   undefined4 DAT_005b73d9
;   undefined4 DAT_005b73e1
;   undefined4 DAT_0203b37c
;
; Called Functions:
;   FUN_0045b550
;   FUN_0045b800
;   FUN_0045b870
;   FUN_0045b9b0
;   FUN_00473cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b470
        ;   Label: FUN_0041b470
    PUSH ESI                            ; 0041b471
    PUSH EDI                            ; 0041b472
    PUSH EBP                            ; 0041b473
    MOV EBP,ESP                         ; 0041b474
    SUB ESP,0x6a8                       ; 0041b476
    AND ESP,0xfffffff8                  ; 0041b47c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041b47f
    CMP dword ptr [EBX + 0x254],0x0     ; 0041b482
    JZ 0x0041d26b                       ; 0041b489
        ;   XREF to: 0041d26b (CONDITIONAL_JUMP)  ; LAB_0041d26b
    LEA EAX,[ESP + 0x170]               ; 0041b48f
    CMP EAX,EBX                         ; 0041b496
    JNZ 0x0041d272                      ; 0041b498
        ;   XREF to: 0041d272 (CONDITIONAL_JUMP)  ; LAB_0041d272
    LEA EAX,[ESP + 0x3e0]               ; 0041b49e
        ;   Label: LAB_0041b49e
    CMP EAX,EBX                         ; 0041b4a5
    JZ 0x0041b4c6                       ; 0041b4a7
        ;   XREF to: 0041b4c6 (CONDITIONAL_JUMP)  ; LAB_0041b4c6
    MOV EAX,dword ptr [EBX]             ; 0041b4a9
    MOV dword ptr [ESP + 0x3e0],EAX     ; 0041b4ab
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041b4b2
    MOV dword ptr [ESP + 0x3e4],EAX     ; 0041b4b5
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041b4bc
    MOV dword ptr [ESP + 0x3e8],EAX     ; 0041b4bf
    FLD1                                ; 0041b4c6
        ;   Label: LAB_0041b4c6
    PUSH 0x0                            ; 0041b4c8
    LEA EAX,[ESP + 0x144]               ; 0041b4ca
    FLD float ptr [ESP + 0x3e8]         ; 0041b4d1
    PUSH EAX                            ; 0041b4d8
    LEA EAX,[ESP + 0x3e8]               ; 0041b4d9
    FXCH                                ; 0041b4e0
    FADD float ptr [ESP + 0x17c]        ; 0041b4e2
    PUSH EAX                            ; 0041b4e9
    LEA EAX,[ESP + 0x17c]               ; 0041b4ea
    FXCH                                ; 0041b4f1
    FADD float ptr [0x005b7391]         ; 0041b4f3 | DAT_005b7391
    PUSH EAX                            ; 0041b4f9
    FXCH                                ; 0041b4fa
    FSTP float ptr [ESP + 0x184]        ; 0041b4fc
    PUSH 0x203b37c                      ; 0041b503 | DAT_0203b37c
    FSTP float ptr [ESP + 0x3f8]        ; 0041b508
    CALL FUN_00473cd0                   ; 0041b50f
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cd0()
    MOV dword ptr [ESP + 0x6a0],EAX     ; 0041b514
    FLD float ptr [ESP + 0x6a0]         ; 0041b51b
    ADD ESP,0x14                        ; 0041b522
    FLDZ                                ; 0041b525
    FXCH                                ; 0041b527
    FST float ptr [ESP + 0x10]          ; 0041b529
    FSTP double ptr [ESP + 0x8]         ; 0041b52d
    FCOMP double ptr [ESP + 0x8]        ; 0041b531
    FNSTSW AX                           ; 0041b535
    SAHF                                ; 0041b537
    JNC 0x0041d294                      ; 0041b538
        ;   XREF to: 0041d294 (CONDITIONAL_JUMP)  ; LAB_0041d294
    FLD1                                ; 0041b53e
    FCOMP double ptr [ESP + 0x8]        ; 0041b540
    FNSTSW AX                           ; 0041b544
    SAHF                                ; 0041b546
    JBE 0x0041d294                      ; 0041b547
        ;   XREF to: 0041d294 (CONDITIONAL_JUMP)  ; LAB_0041d294
    FLD float ptr [ESP + 0x3e4]         ; 0041b54d
    FSUB float ptr [ESP + 0x174]        ; 0041b554
    FMUL float ptr [ESP + 0x10]         ; 0041b55b
    FADD float ptr [ESP + 0x174]        ; 0041b55f
    FSTP float ptr [EBX + 0x258]        ; 0041b566
    LEA EAX,[EBX + 0xc0]                ; 0041b56c
        ;   Label: LAB_0041b56c
    LEA EDX,[EBX + 0xcc]                ; 0041b572
    LEA ECX,[EBX + 0x260]               ; 0041b578
    CMP EDX,EAX                         ; 0041b57e
        ;   Label: LAB_0041b57e
    JZ 0x0041b592                       ; 0041b580
        ;   XREF to: 0041b592 (CONDITIONAL_JUMP)  ; LAB_0041b592
    MOV ESI,dword ptr [EAX]             ; 0041b582
    MOV dword ptr [EDX],ESI             ; 0041b584
    MOV ESI,dword ptr [EAX + 0x4]       ; 0041b586
    MOV dword ptr [EDX + 0x4],ESI       ; 0041b589
    MOV ESI,dword ptr [EAX + 0x8]       ; 0041b58c
    MOV dword ptr [EDX + 0x8],ESI       ; 0041b58f
    ADD EAX,0x34                        ; 0041b592
        ;   Label: LAB_0041b592
    ADD EDX,0x34                        ; 0041b595
    CMP EAX,ECX                         ; 0041b598
    JNZ 0x0041b57e                      ; 0041b59a
        ;   XREF to: 0041b57e (CONDITIONAL_JUMP)  ; LAB_0041b57e
    XOR ECX,ECX                         ; 0041b59c
    MOV dword ptr [ESP + 0x118],ECX     ; 0041b59e
    MOV dword ptr [ESP + 0x114],ECX     ; 0041b5a5
    MOV dword ptr [ESP + 0x110],ECX     ; 0041b5ac
    FLD float ptr [EBX + 0x94]          ; 0041b5b3
    FCHS                                ; 0041b5b9
    FMUL double ptr [0x005b7399]        ; 0041b5bb | DAT_005b7399
    LEA EAX,[ESP + 0x110]               ; 0041b5c1
    LEA ESI,[ESP + 0x41c]               ; 0041b5c8
    PUSH EAX                            ; 0041b5cf
    LEA EAX,[EBX + 0x18]                ; 0041b5d0
    LEA EDI,[ESP + 0x2a0]               ; 0041b5d3
    PUSH EAX                            ; 0041b5da
    FSTP float ptr [ESP + 0x11c]        ; 0041b5db
    CALL FUN_0045b870                   ; 0041b5e2
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    FLD1                                ; 0041b5e7
    LEA ESI,[ESP + 0x424]               ; 0041b5e9
    ADD ESP,0x8                         ; 0041b5f0
    LEA EAX,[EBX + 0x64]                ; 0041b5f3
    MOVSD ES:EDI,ESI                    ; 0041b5f6
    MOVSD ES:EDI,ESI                    ; 0041b5f7
    MOVSD ES:EDI,ESI                    ; 0041b5f8
    LEA EDX,[EBX + 0x94]                ; 0041b5f9
    FLD float ptr [EAX]                 ; 0041b5ff
    FADD float ptr [ESP + 0x29c]        ; 0041b601
    FLD float ptr [EAX + 0x4]           ; 0041b608
    FXCH                                ; 0041b60b
    FSTP float ptr [EAX]                ; 0041b60d
    FADD float ptr [ESP + 0x2a0]        ; 0041b60f
    FLD float ptr [EAX + 0x8]           ; 0041b616
    FXCH                                ; 0041b619
    FSTP float ptr [EAX + 0x4]          ; 0041b61b
    FADD float ptr [ESP + 0x2a4]        ; 0041b61e
    FLD float ptr [EAX]                 ; 0041b625
    FXCH                                ; 0041b627
    FSTP float ptr [EAX + 0x8]          ; 0041b629
    FXCH                                ; 0041b62c
    FDIV float ptr [EDX]                ; 0041b62e
    FXCH                                ; 0041b630
    FMUL ST1                            ; 0041b632
    FSTP float ptr [ESP + 0x44c]        ; 0041b634
    FLD float ptr [EAX + 0x4]           ; 0041b63b
    FMUL ST1                            ; 0041b63e
    FSTP float ptr [ESP + 0x450]        ; 0041b640
    FMUL float ptr [EAX + 0x8]          ; 0041b647
    LEA EDI,[ESP + 0x14c]               ; 0041b64a
    LEA ESI,[ESP + 0x44c]               ; 0041b651
    LEA EDX,[EBX + 0x58]                ; 0041b658
    LEA EAX,[ESP + 0x14c]               ; 0041b65b
    FSTP float ptr [ESP + 0x454]        ; 0041b662
    MOVSD ES:EDI,ESI                    ; 0041b669
    MOVSD ES:EDI,ESI                    ; 0041b66a
    MOVSD ES:EDI,ESI                    ; 0041b66b
    CMP EDX,EAX                         ; 0041b66c
    JZ 0x0041b68d                       ; 0041b66e
        ;   XREF to: 0041b68d (CONDITIONAL_JUMP)  ; LAB_0041b68d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0041b670
    MOV dword ptr [EDX],EAX             ; 0041b677
    MOV EAX,dword ptr [ESP + 0x150]     ; 0041b679
    MOV dword ptr [EDX + 0x4],EAX       ; 0041b680
    MOV EAX,dword ptr [ESP + 0x154]     ; 0041b683
    MOV dword ptr [EDX + 0x8],EAX       ; 0041b68a
    FLD float ptr [EBX + 0x88]          ; 0041b68d
        ;   Label: LAB_0041b68d
    FDIV float ptr [EBX + 0x98]         ; 0041b693
    FLD float ptr [EBX + 0x8c]          ; 0041b699
    FDIV float ptr [EBX + 0x9c]         ; 0041b69f
    FLD float ptr [EBX + 0x90]          ; 0041b6a5
    FDIV float ptr [EBX + 0xa0]         ; 0041b6ab
    LEA EAX,[EBX + 0x64]                ; 0041b6b1
    FXCH ST2                            ; 0041b6b4
    FSTP float ptr [EBX + 0x7c]         ; 0041b6b6
    FSTP float ptr [EBX + 0x80]         ; 0041b6b9
    FSTP float ptr [EBX + 0x84]         ; 0041b6bf
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b6c5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b6cc
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b6cf
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b6d2
    MOV dword ptr [EAX],EDX             ; 0041b6d5
    LEA EAX,[EBX + 0x88]                ; 0041b6d7
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b6dd
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b6e4
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b6e7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b6ea
    MOV dword ptr [EAX],EDX             ; 0041b6ed
    LEA EAX,[EBX + 0x58]                ; 0041b6ef
    PUSH EAX                            ; 0041b6f2
    LEA EAX,[EBX + 0x18]                ; 0041b6f3
    LEA ESI,[ESP + 0x5d0]               ; 0041b6f6
    PUSH EAX                            ; 0041b6fd
    LEA EDI,[ESP + 0x49c]               ; 0041b6fe
    MOV dword ptr [ESP + 0x694],EAX     ; 0041b705
    CALL FUN_0045b800                   ; 0041b70c
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x5d4]               ; 0041b711
    ADD ESP,0x8                         ; 0041b718
    MOVSD ES:EDI,ESI                    ; 0041b71b
    MOVSD ES:EDI,ESI                    ; 0041b71c
    MOVSD ES:EDI,ESI                    ; 0041b71d
    FLD float ptr [EBP + 0x18]          ; 0041b71e
    FLD float ptr [ESP + 0x494]         ; 0041b721
    FMUL ST1                            ; 0041b728
    FLD float ptr [ESP + 0x498]         ; 0041b72a
    FMUL ST2                            ; 0041b731
    FLD float ptr [ESP + 0x49c]         ; 0041b733
    FMULP ST3                           ; 0041b73a
    LEA EAX,[EBX + 0x40]                ; 0041b73c
    MOV EDX,dword ptr [ESP + 0x68c]     ; 0041b73f
    PUSH EAX                            ; 0041b746
    LEA EDI,[ESP + 0x1d4]               ; 0041b747
    LEA ESI,[ESP + 0x4e0]               ; 0041b74e
    FXCH                                ; 0041b755
    FSTP float ptr [ESP + 0x4e0]        ; 0041b757
    FSTP float ptr [ESP + 0x4e4]        ; 0041b75e
    FSTP float ptr [ESP + 0x4e8]        ; 0041b765
    MOVSD ES:EDI,ESI                    ; 0041b76c
    MOVSD ES:EDI,ESI                    ; 0041b76d
    MOVSD ES:EDI,ESI                    ; 0041b76e
    PUSH EDX                            ; 0041b76f
    FLD float ptr [EAX + 0x4]           ; 0041b770
    FLD float ptr [EAX]                 ; 0041b773
    FADD float ptr [ESP + 0x1d8]        ; 0041b775
    FLD float ptr [EAX + 0x8]           ; 0041b77c
    FXCH                                ; 0041b77f
    FSTP float ptr [EAX]                ; 0041b781
    FXCH                                ; 0041b783
    FADD float ptr [ESP + 0x1dc]        ; 0041b785
    LEA ESI,[ESP + 0x37c]               ; 0041b78c
    FSTP float ptr [EAX + 0x4]          ; 0041b793
    FADD float ptr [ESP + 0x1e0]        ; 0041b796
    LEA EDI,[ESP + 0x1f0]               ; 0041b79d
    FSTP float ptr [EAX + 0x8]          ; 0041b7a4
    CALL FUN_0045b870                   ; 0041b7a7
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x37c]               ; 0041b7ac
    LEA EAX,[ESP + 0x1f0]               ; 0041b7b3
    ADD ESP,0x8                         ; 0041b7ba
    LEA EDX,[EBX + 0x4c]                ; 0041b7bd
    MOVSD ES:EDI,ESI                    ; 0041b7c0
    MOVSD ES:EDI,ESI                    ; 0041b7c1
    MOVSD ES:EDI,ESI                    ; 0041b7c2
    CMP EDX,EAX                         ; 0041b7c3
    JZ 0x0041b7e4                       ; 0041b7c5
        ;   XREF to: 0041b7e4 (CONDITIONAL_JUMP)  ; LAB_0041b7e4
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0041b7c7
    MOV dword ptr [EDX],EAX             ; 0041b7ce
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0041b7d0
    MOV dword ptr [EDX + 0x4],EAX       ; 0041b7d7
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0041b7da
    MOV dword ptr [EDX + 0x8],EAX       ; 0041b7e1
    LEA EAX,[EBX + 0x7c]                ; 0041b7e4
        ;   Label: LAB_0041b7e4
    FLD float ptr [EBP + 0x18]          ; 0041b7e7
    FLD float ptr [EAX]                 ; 0041b7ea
    FMUL ST1                            ; 0041b7ec
    FSTP float ptr [ESP + 0x5e4]        ; 0041b7ee
    FLD float ptr [EAX + 0x4]           ; 0041b7f5
    FMUL ST1                            ; 0041b7f8
    FSTP float ptr [ESP + 0x5e8]        ; 0041b7fa
    FMUL float ptr [EAX + 0x8]          ; 0041b801
    LEA EDI,[ESP + 0x230]               ; 0041b804
    LEA ESI,[ESP + 0x5e4]               ; 0041b80b
    LEA EDX,[EBX + 0x70]                ; 0041b812
    FSTP float ptr [ESP + 0x5ec]        ; 0041b815
    MOVSD ES:EDI,ESI                    ; 0041b81c
    MOVSD ES:EDI,ESI                    ; 0041b81d
    MOVSD ES:EDI,ESI                    ; 0041b81e
    FLD float ptr [EDX]                 ; 0041b81f
    FADD float ptr [ESP + 0x230]        ; 0041b821
    FLD float ptr [EDX + 0x4]           ; 0041b828
    FXCH                                ; 0041b82b
    FSTP float ptr [EDX]                ; 0041b82d
    FADD float ptr [ESP + 0x234]        ; 0041b82f
    FST float ptr [EDX + 0x4]           ; 0041b836
    FMUL float ptr [EDX + 0x4]          ; 0041b839
    FLD float ptr [EDX]                 ; 0041b83c
    FMUL ST0                            ; 0041b83e
    FLD float ptr [EDX + 0x8]           ; 0041b840
    FADD float ptr [ESP + 0x238]        ; 0041b843
    FXCH                                ; 0041b84a
    FADDP ST2,ST0                       ; 0041b84c
    FST float ptr [EDX + 0x8]           ; 0041b84e
    FMUL float ptr [EDX + 0x8]          ; 0041b851
    FADDP                               ; 0041b854
    FSQRT                               ; 0041b856
    FST float ptr [ESP + 0x6a0]         ; 0041b858
    FCOMP float ptr [0x005b73a1]        ; 0041b85f | DAT_005b73a1
    FNSTSW AX                           ; 0041b865
    SAHF                                ; 0041b867
    JBE 0x0041b8a7                      ; 0041b868
        ;   XREF to: 0041b8a7 (CONDITIONAL_JUMP)  ; LAB_0041b8a7
    FLD float ptr [0x005b73a1]          ; 0041b86a | DAT_005b73a1
    FDIV float ptr [ESP + 0x6a0]        ; 0041b870
    FLD float ptr [EDX]                 ; 0041b877
    FXCH                                ; 0041b879
    FSTP float ptr [ESP + 0x61c]        ; 0041b87b
    FMUL float ptr [ESP + 0x61c]        ; 0041b882
    FLD float ptr [EDX + 0x4]           ; 0041b889
    FMUL float ptr [ESP + 0x61c]        ; 0041b88c
    FLD float ptr [EDX + 0x8]           ; 0041b893
    FMUL float ptr [ESP + 0x61c]        ; 0041b896
    FXCH ST2                            ; 0041b89d
    FSTP float ptr [EDX]                ; 0041b89f
    FSTP float ptr [EDX + 0x4]          ; 0041b8a1
    FSTP float ptr [EDX + 0x8]          ; 0041b8a4
    LEA EAX,[EBX + 0x40]                ; 0041b8a7
        ;   Label: LAB_0041b8a7
    FLD float ptr [EBP + 0x18]          ; 0041b8aa
    FLD float ptr [EAX]                 ; 0041b8ad
    FMUL ST1                            ; 0041b8af
    FSTP float ptr [ESP + 0x5a8]        ; 0041b8b1
    FLD float ptr [EAX + 0x4]           ; 0041b8b8
    FMUL ST1                            ; 0041b8bb
    FSTP float ptr [ESP + 0x5ac]        ; 0041b8bd
    FLD float ptr [EAX + 0x8]           ; 0041b8c4
    FMUL ST1                            ; 0041b8c7
    LEA EDI,[ESP + 0x23c]               ; 0041b8c9
    LEA ESI,[ESP + 0x5a8]               ; 0041b8d0
    FSTP float ptr [ESP + 0x5b0]        ; 0041b8d7
    MOVSD ES:EDI,ESI                    ; 0041b8de
    MOVSD ES:EDI,ESI                    ; 0041b8df
    MOVSD ES:EDI,ESI                    ; 0041b8e0
    FLD float ptr [EBX]                 ; 0041b8e1
    FADD float ptr [ESP + 0x23c]        ; 0041b8e3
    FLD float ptr [EBX + 0x4]           ; 0041b8ea
    FXCH                                ; 0041b8ed
    FSTP float ptr [EBX]                ; 0041b8ef
    FADD float ptr [ESP + 0x240]        ; 0041b8f1
    FLD float ptr [EBX + 0x8]           ; 0041b8f8
    FXCH                                ; 0041b8fb
    FSTP float ptr [EBX + 0x4]          ; 0041b8fd
    FADD float ptr [ESP + 0x244]        ; 0041b900
    LEA EAX,[EBX + 0x70]                ; 0041b907
    FSTP float ptr [EBX + 0x8]          ; 0041b90a
    FLD float ptr [EAX]                 ; 0041b90d
    FMUL ST1                            ; 0041b90f
    FSTP float ptr [ESP + 0x104]        ; 0041b911
    FLD float ptr [EAX + 0x4]           ; 0041b918
    FMUL ST1                            ; 0041b91b
    FSTP float ptr [ESP + 0x108]        ; 0041b91d
    FMUL float ptr [EAX + 0x8]          ; 0041b924
    LEA EDI,[ESP + 0x2e4]               ; 0041b927
    LEA EAX,[ESP + 0x2e4]               ; 0041b92e
    LEA ESI,[ESP + 0x104]               ; 0041b935
    PUSH EAX                            ; 0041b93c
    LEA EAX,[ESP + 0x48]                ; 0041b93d
    FSTP float ptr [ESP + 0x110]        ; 0041b941
    PUSH EAX                            ; 0041b948
    MOVSD ES:EDI,ESI                    ; 0041b949
    MOVSD ES:EDI,ESI                    ; 0041b94a
    MOVSD ES:EDI,ESI                    ; 0041b94b
    CALL FUN_0045b550                   ; 0041b94c
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    ADD ESP,0x8                         ; 0041b951
    FLD float ptr [EBX + 0x1c]          ; 0041b954
    FMUL float ptr [ESP + 0x50]         ; 0041b957
    FLD float ptr [EBX + 0x18]          ; 0041b95b
    FMUL float ptr [ESP + 0x44]         ; 0041b95e
    FADDP                               ; 0041b962
    FLD float ptr [EBX + 0x20]          ; 0041b964
    FMUL float ptr [ESP + 0x5c]         ; 0041b967
    FADDP                               ; 0041b96b
    FSTP float ptr [ESP + 0x1c]         ; 0041b96d
    FLD float ptr [EBX + 0x18]          ; 0041b971
    FMUL float ptr [ESP + 0x48]         ; 0041b974
    FLD float ptr [EBX + 0x1c]          ; 0041b978
    FMUL float ptr [ESP + 0x54]         ; 0041b97b
    FADDP                               ; 0041b97f
    FLD float ptr [EBX + 0x20]          ; 0041b981
    FMUL float ptr [ESP + 0x60]         ; 0041b984
    FADDP                               ; 0041b988
    FSTP float ptr [ESP + 0x20]         ; 0041b98a
    FLD float ptr [EBX + 0x18]          ; 0041b98e
    FMUL float ptr [ESP + 0x4c]         ; 0041b991
    FLD float ptr [EBX + 0x1c]          ; 0041b995
    FMUL float ptr [ESP + 0x58]         ; 0041b998
    FADDP                               ; 0041b99c
    FLD float ptr [EBX + 0x20]          ; 0041b99e
    FMUL float ptr [ESP + 0x64]         ; 0041b9a1
    FADDP                               ; 0041b9a5
    FSTP float ptr [ESP + 0x24]         ; 0041b9a7
    FLD float ptr [EBX + 0x28]          ; 0041b9ab
    FMUL float ptr [ESP + 0x50]         ; 0041b9ae
    FLD float ptr [EBX + 0x24]          ; 0041b9b2
    FMUL float ptr [ESP + 0x44]         ; 0041b9b5
    FADDP                               ; 0041b9b9
    FLD float ptr [EBX + 0x2c]          ; 0041b9bb
    FMUL float ptr [ESP + 0x5c]         ; 0041b9be
    FADDP                               ; 0041b9c2
    FSTP float ptr [ESP + 0x28]         ; 0041b9c4
    FLD float ptr [EBX + 0x24]          ; 0041b9c8
    FMUL float ptr [ESP + 0x48]         ; 0041b9cb
    FLD float ptr [EBX + 0x28]          ; 0041b9cf
    FMUL float ptr [ESP + 0x54]         ; 0041b9d2
    FADDP                               ; 0041b9d6
    FLD float ptr [EBX + 0x2c]          ; 0041b9d8
    FMUL float ptr [ESP + 0x60]         ; 0041b9db
    FADDP                               ; 0041b9df
    FSTP float ptr [ESP + 0x2c]         ; 0041b9e1
    FLD float ptr [EBX + 0x24]          ; 0041b9e5
    FMUL float ptr [ESP + 0x4c]         ; 0041b9e8
    FLD float ptr [EBX + 0x28]          ; 0041b9ec
    FMUL float ptr [ESP + 0x58]         ; 0041b9ef
    FADDP                               ; 0041b9f3
    FLD float ptr [EBX + 0x2c]          ; 0041b9f5
    FMUL float ptr [ESP + 0x64]         ; 0041b9f8
    FADDP                               ; 0041b9fc
    FSTP float ptr [ESP + 0x30]         ; 0041b9fe
    FLD float ptr [EBX + 0x34]          ; 0041ba02
    FMUL float ptr [ESP + 0x50]         ; 0041ba05
    FLD float ptr [EBX + 0x30]          ; 0041ba09
    FMUL float ptr [ESP + 0x44]         ; 0041ba0c
    FADDP                               ; 0041ba10
    FLD float ptr [EBX + 0x38]          ; 0041ba12
    FMUL float ptr [ESP + 0x5c]         ; 0041ba15
    FADDP                               ; 0041ba19
    FSTP float ptr [ESP + 0x34]         ; 0041ba1b
    FLD float ptr [EBX + 0x30]          ; 0041ba1f
    FMUL float ptr [ESP + 0x48]         ; 0041ba22
    FLD float ptr [EBX + 0x34]          ; 0041ba26
    FMUL float ptr [ESP + 0x54]         ; 0041ba29
    FADDP                               ; 0041ba2d
    FLD float ptr [EBX + 0x38]          ; 0041ba2f
    FMUL float ptr [ESP + 0x60]         ; 0041ba32
    FADDP                               ; 0041ba36
    FSTP float ptr [ESP + 0x38]         ; 0041ba38
    FLD float ptr [EBX + 0x30]          ; 0041ba3c
    FMUL float ptr [ESP + 0x4c]         ; 0041ba3f
    FLD float ptr [EBX + 0x34]          ; 0041ba43
    FMUL float ptr [ESP + 0x58]         ; 0041ba46
    FADDP                               ; 0041ba4a
    FLD float ptr [EBX + 0x38]          ; 0041ba4c
    FMUL float ptr [ESP + 0x64]         ; 0041ba4f
    LEA ESI,[ESP + 0x1c]                ; 0041ba53
    FADDP                               ; 0041ba57
    MOV ECX,0xa                         ; 0041ba59
    FSTP float ptr [ESP + 0x3c]         ; 0041ba5e
    LEA EDI,[EBX + 0x18]                ; 0041ba62
    LEA EAX,[EBX + 0x18]                ; 0041ba65
    MOVSD.REP ES:EDI,ESI                ; 0041ba68
    PUSH EAX                            ; 0041ba6a
    LEA ESI,[ESP + 0x4bc]               ; 0041ba6b
    LEA EDI,[ESP + 0x384]               ; 0041ba72
    CALL FUN_0045b9b0                   ; 0041ba79
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b9b0()
    LEA ESI,[ESP + 0x4bc]               ; 0041ba7e
    LEA EAX,[ESP + 0x384]               ; 0041ba85
    ADD ESP,0x4                         ; 0041ba8c
    LEA EDX,[EBX + 0xc]                 ; 0041ba8f
    MOVSD ES:EDI,ESI                    ; 0041ba92
    MOVSD ES:EDI,ESI                    ; 0041ba93
    MOVSD ES:EDI,ESI                    ; 0041ba94
    CMP EDX,EAX                         ; 0041ba95
    JZ 0x0041bab6                       ; 0041ba97
        ;   XREF to: 0041bab6 (CONDITIONAL_JUMP)  ; LAB_0041bab6
    MOV EAX,dword ptr [ESP + 0x380]     ; 0041ba99
    MOV dword ptr [EDX],EAX             ; 0041baa0
    MOV EAX,dword ptr [ESP + 0x384]     ; 0041baa2
    MOV dword ptr [EDX + 0x4],EAX       ; 0041baa9
    MOV EAX,dword ptr [ESP + 0x388]     ; 0041baac
    MOV dword ptr [EDX + 0x8],EAX       ; 0041bab3
    XOR ECX,ECX                         ; 0041bab6
        ;   Label: LAB_0041bab6
    MOV ESI,dword ptr [EBX + 0xb0]      ; 0041bab8
    MOV dword ptr [ESP + 0x684],ECX     ; 0041babe
    TEST ESI,ESI                        ; 0041bac5
    JLE 0x0041bbc9                      ; 0041bac7
        ;   XREF to: 0041bbc9 (CONDITIONAL_JUMP)  ; LAB_0041bbc9
    LEA EAX,[EBX + 0xb4]                ; 0041bacd
    MOV dword ptr [ESP + 0x620],EAX     ; 0041bad3
    LEA EAX,[EBX + 0x18]                ; 0041bada
    MOV dword ptr [ESP + 0x618],EAX     ; 0041badd
    LEA EAX,[EBX + 0xc0]                ; 0041bae4
    MOV dword ptr [ESP + 0x664],EAX     ; 0041baea
    IMUL EAX,dword ptr [ESP + 0x684],0x34 ; 0041baf1
        ;   Label: LAB_0041baf1
    ADD EAX,dword ptr [ESP + 0x620]     ; 0041baf9
    PUSH EAX                            ; 0041bb00
    MOV ESI,dword ptr [ESP + 0x61c]     ; 0041bb01
    PUSH ESI                            ; 0041bb08
    LEA ESI,[ESP + 0x25c]               ; 0041bb09
    LEA EDI,[ESP + 0x4f0]               ; 0041bb10
    CALL FUN_0045b800                   ; 0041bb17
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x25c]               ; 0041bb1c
    ADD ESP,0x8                         ; 0041bb23
    MOVSD ES:EDI,ESI                    ; 0041bb26
    MOVSD ES:EDI,ESI                    ; 0041bb27
    MOVSD ES:EDI,ESI                    ; 0041bb28
    FLD float ptr [EBX]                 ; 0041bb29
    FADD float ptr [ESP + 0x4e8]        ; 0041bb2b
    FSTP float ptr [ESP + 0x56c]        ; 0041bb32
    FLD float ptr [EBX + 0x4]           ; 0041bb39
    FADD float ptr [ESP + 0x4ec]        ; 0041bb3c
    LEA EDI,[ESP + 0x518]               ; 0041bb43
    FSTP float ptr [ESP + 0x570]        ; 0041bb4a
    FLD float ptr [EBX + 0x8]           ; 0041bb51
    FADD float ptr [ESP + 0x4f0]        ; 0041bb54
    LEA ESI,[ESP + 0x56c]               ; 0041bb5b
    FSTP float ptr [ESP + 0x574]        ; 0041bb62
    MOVSD ES:EDI,ESI                    ; 0041bb69
    MOVSD ES:EDI,ESI                    ; 0041bb6a
    MOVSD ES:EDI,ESI                    ; 0041bb6b
    LEA EAX,[ESP + 0x518]               ; 0041bb6c
    MOV EDI,dword ptr [ESP + 0x664]     ; 0041bb73
    CMP EAX,EDI                         ; 0041bb7a
    JZ 0x0041bb9b                       ; 0041bb7c
        ;   XREF to: 0041bb9b (CONDITIONAL_JUMP)  ; LAB_0041bb9b
    MOV EAX,dword ptr [ESP + 0x518]     ; 0041bb7e
    MOV dword ptr [EDI],EAX             ; 0041bb85
    MOV EAX,dword ptr [ESP + 0x51c]     ; 0041bb87
    MOV dword ptr [EDI + 0x4],EAX       ; 0041bb8e
    MOV EAX,dword ptr [ESP + 0x520]     ; 0041bb91
    MOV dword ptr [EDI + 0x8],EAX       ; 0041bb98
    MOV EDI,dword ptr [ESP + 0x664]     ; 0041bb9b
        ;   Label: LAB_0041bb9b
    MOV EAX,dword ptr [ESP + 0x684]     ; 0041bba2
    MOV EDX,dword ptr [EBX + 0xb0]      ; 0041bba9
    ADD EDI,0x34                        ; 0041bbaf
    INC EAX                             ; 0041bbb2
    MOV dword ptr [ESP + 0x664],EDI     ; 0041bbb3
    MOV dword ptr [ESP + 0x684],EAX     ; 0041bbba
    CMP EAX,EDX                         ; 0041bbc1
    JL 0x0041baf1                       ; 0041bbc3
        ;   XREF to: 0041baf1 (CONDITIONAL_JUMP)  ; LAB_0041baf1
    LEA EAX,[EBX + 0xb4]                ; 0041bbc9
        ;   Label: LAB_0041bbc9
    MOV EDI,dword ptr [EBX + 0xb0]      ; 0041bbcf
    XOR ECX,ECX                         ; 0041bbd5
    MOV dword ptr [ESP + 0x65c],EAX     ; 0041bbd7
    LEA EAX,[EBX + 0xcc]                ; 0041bbde
    MOV dword ptr [ESP + 0x680],ECX     ; 0041bbe4
    MOV dword ptr [ESP + 0x668],EAX     ; 0041bbeb
    LEA EAX,[EBX + 0xc0]                ; 0041bbf2
    MOV dword ptr [ESP + 0x63c],ECX     ; 0041bbf8
    MOV dword ptr [ESP + 0x66c],EAX     ; 0041bbff
    MOV dword ptr [ESP + 0x670],EBX     ; 0041bc06
    TEST EDI,EDI                        ; 0041bc0d
    JLE 0x0041bd50                      ; 0041bc0f
        ;   XREF to: 0041bd50 (CONDITIONAL_JUMP)  ; LAB_0041bd50
    MOV EAX,dword ptr [ESP + 0x65c]     ; 0041bc15
    MOV dword ptr [ESP + 0x674],EAX     ; 0041bc1c
    MOV EAX,dword ptr [ESP + 0x670]     ; 0041bc23
        ;   Label: LAB_0041bc23
    FLD float ptr [EAX + 0xc4]          ; 0041bc2a
    FCOMP float ptr [EBX + 0x258]       ; 0041bc30
    FNSTSW AX                           ; 0041bc36
    SAHF                                ; 0041bc38
    JNC 0x0041d2a3                      ; 0041bc39
        ;   XREF to: 0041d2a3 (CONDITIONAL_JUMP)  ; LAB_0041d2a3
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041bc3f
    MOV EDI,dword ptr [ESP + 0x66c]     ; 0041bc46
    CMP EAX,EDI                         ; 0041bc4d
    JZ 0x0041bc7c                       ; 0041bc4f
        ;   XREF to: 0041bc7c (CONDITIONAL_JUMP)  ; LAB_0041bc7c
    MOV EAX,EDI                         ; 0041bc51
    FLD float ptr [EAX]                 ; 0041bc53
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041bc55
    FSTP float ptr [EAX]                ; 0041bc5c
    MOV EAX,EDI                         ; 0041bc5e
    FLD float ptr [EAX + 0x4]           ; 0041bc60
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041bc63
    FSTP float ptr [EAX + 0x4]          ; 0041bc6a
    MOV EAX,EDI                         ; 0041bc6d
    FLD float ptr [EAX + 0x8]           ; 0041bc6f
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041bc72
    FSTP float ptr [EAX + 0x8]          ; 0041bc79
    FLD float ptr [EBX + 0x258]         ; 0041bc7c
        ;   Label: LAB_0041bc7c
    MOV EAX,dword ptr [ESP + 0x670]     ; 0041bc82
    FADD double ptr [0x005b73d9]        ; 0041bc89 | DAT_005b73d9
    FLD float ptr [EAX + 0xc4]          ; 0041bc8f
    FXCH                                ; 0041bc95
    FSTP float ptr [EAX + 0xd0]         ; 0041bc97
    FSUB float ptr [EAX + 0xd0]         ; 0041bc9d
    FLD float ptr [EBX + 0x258]         ; 0041bca3
    FSUB float ptr [EAX + 0xd0]         ; 0041bca9
    FDIVRP                              ; 0041bcaf
    MOV dword ptr [EAX + 0xdc],0x0      ; 0041bcb1
    MOV dword ptr [EAX + 0xe0],0x3f800000 ; 0041bcbb
    MOV dword ptr [EAX + 0xe4],0x0      ; 0041bcc5
    FSTP float ptr [EAX + 0xd8]         ; 0041bccf
    MOV EAX,dword ptr [ESP + 0x63c]     ; 0041bcd5
    INC EAX                             ; 0041bcdc
    MOV EDX,dword ptr [ESP + 0x680]     ; 0041bcdd
    MOV dword ptr [ESP + EAX*0x4 + 0x68],EDX ; 0041bce4
    MOV dword ptr [ESP + 0x63c],EAX     ; 0041bce8
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041bcef
        ;   Label: LAB_0041bcef
    MOV EDX,dword ptr [ESP + 0x66c]     ; 0041bcf6
    MOV ECX,dword ptr [ESP + 0x670]     ; 0041bcfd
    MOV ESI,dword ptr [ESP + 0x674]     ; 0041bd04
    MOV EDI,dword ptr [ESP + 0x680]     ; 0041bd0b
    ADD EAX,0x34                        ; 0041bd12
    ADD EDX,0x34                        ; 0041bd15
    ADD ECX,0x34                        ; 0041bd18
    ADD ESI,0x34                        ; 0041bd1b
    INC EDI                             ; 0041bd1e
    MOV dword ptr [ESP + 0x668],EAX     ; 0041bd1f
    MOV dword ptr [ESP + 0x66c],EDX     ; 0041bd26
    MOV dword ptr [ESP + 0x670],ECX     ; 0041bd2d
    MOV dword ptr [ESP + 0x674],ESI     ; 0041bd34
    MOV EDX,dword ptr [EBX + 0xb0]      ; 0041bd3b
    MOV dword ptr [ESP + 0x680],EDI     ; 0041bd41
    CMP EDI,EDX                         ; 0041bd48
    JL 0x0041bc23                       ; 0041bd4a
        ;   XREF to: 0041bc23 (CONDITIONAL_JUMP)  ; LAB_0041bc23
    CMP dword ptr [ESP + 0x63c],0x1     ; 0041bd50
        ;   Label: LAB_0041bd50
    JNZ 0x0041c369                      ; 0041bd58
        ;   XREF to: 0041c369 (CONDITIONAL_JUMP)  ; LAB_0041c369
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041bd5e
    MOV dword ptr [ESP + 0x698],EAX     ; 0041bd62
    LEA ECX,[EAX*0x4 + 0x0]             ; 0041bd69
    SUB ECX,EAX                         ; 0041bd70
    SHL ECX,0x2                         ; 0041bd72
    ADD ECX,EAX                         ; 0041bd75
    MOV EDX,dword ptr [ESP + 0x65c]     ; 0041bd77
    SHL ECX,0x2                         ; 0041bd7e
    ADD EDX,ECX                         ; 0041bd81
    LEA EAX,[EDX + 0xc]                 ; 0041bd83
    FLD float ptr [EAX]                 ; 0041bd86
    FSUB float ptr [EDX + 0x18]         ; 0041bd88
    FSTP float ptr [ESP + 0x134]        ; 0041bd8b
    FLD float ptr [EAX + 0x4]           ; 0041bd92
    FSUB float ptr [EDX + 0x1c]         ; 0041bd95
    LEA EDI,[ESP + 0x410]               ; 0041bd98
    FSTP float ptr [ESP + 0x138]        ; 0041bd9f
    FLD float ptr [EAX + 0x8]           ; 0041bda6
    FSUB float ptr [EDX + 0x20]         ; 0041bda9
    LEA ESI,[ESP + 0x134]               ; 0041bdac
    FSTP float ptr [ESP + 0x13c]        ; 0041bdb3
    MOVSD ES:EDI,ESI                    ; 0041bdba
    MOVSD ES:EDI,ESI                    ; 0041bdbb
    MOVSD ES:EDI,ESI                    ; 0041bdbc
    FLD float ptr [ECX + EBX*0x1 + 0xd8] ; 0041bdbd
    FLD1                                ; 0041bdc4
    FSUBRP                              ; 0041bdc6
    FMUL double ptr [0x005b73a9]        ; 0041bdc8 | DAT_005b73a9
    FLD float ptr [ESP + 0x410]         ; 0041bdce
    FXCH                                ; 0041bdd5
    FSTP float ptr [ESP + 0x658]        ; 0041bdd7
    FMUL float ptr [ESP + 0x658]        ; 0041bdde
    FLD float ptr [ESP + 0x414]         ; 0041bde5
    FMUL float ptr [ESP + 0x658]        ; 0041bdec
    MOV EDX,dword ptr [ESP + 0x698]     ; 0041bdf3
    FLD float ptr [ESP + 0x418]         ; 0041bdfa
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041be01
    FMUL float ptr [ESP + 0x658]        ; 0041be08
    SUB EAX,EDX                         ; 0041be0f
    LEA EDI,[ESP + 0x608]               ; 0041be11
    SHL EAX,0x2                         ; 0041be18
    LEA ESI,[ESP + 0x464]               ; 0041be1b
    ADD EAX,EDX                         ; 0041be22
    FXCH ST2                            ; 0041be24
    FSTP float ptr [ESP + 0x464]        ; 0041be26
    FSTP float ptr [ESP + 0x468]        ; 0041be2d
    FSTP float ptr [ESP + 0x46c]        ; 0041be34
    MOVSD ES:EDI,ESI                    ; 0041be3b
    MOVSD ES:EDI,ESI                    ; 0041be3c
    MOVSD ES:EDI,ESI                    ; 0041be3d
    SHL EAX,0x2                         ; 0041be3e
    FLD float ptr [EBX]                 ; 0041be41
    FLD float ptr [EBX + 0x4]           ; 0041be43
    FLD float ptr [EBX + 0x8]           ; 0041be46
    MOV ESI,dword ptr [ESP + 0x65c]     ; 0041be49
    LEA EDI,[ESP + 0x17c]               ; 0041be50
    FXCH ST2                            ; 0041be57
    FSUB float ptr [ESP + 0x608]        ; 0041be59
    ADD EAX,ESI                         ; 0041be60
    FSTP float ptr [EBX]                ; 0041be62
    LEA ESI,[ESP + 0x4c4]               ; 0041be64
    ADD EAX,0x28                        ; 0041be6b
    FSUB float ptr [ESP + 0x60c]        ; 0041be6e
    PUSH EAX                            ; 0041be75
    FSTP float ptr [EBX + 0x4]          ; 0041be76
    LEA EAX,[EBX + 0x18]                ; 0041be79
    FSUB float ptr [ESP + 0x614]        ; 0041be7c
    PUSH EAX                            ; 0041be83
    FSTP float ptr [EBX + 0x8]          ; 0041be84
    CALL FUN_0045b870                   ; 0041be87
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x4cc]               ; 0041be8c
    ADD ESP,0x8                         ; 0041be93
    MOVSD ES:EDI,ESI                    ; 0041be96
    MOVSD ES:EDI,ESI                    ; 0041be97
    MOVSD ES:EDI,ESI                    ; 0041be98
    LEA EAX,[EBX + 0x4c]                ; 0041be99
    FLD float ptr [ESP + 0x180]         ; 0041be9c
    FMUL float ptr [EAX + 0x4]          ; 0041bea3
    FLD float ptr [ESP + 0x17c]         ; 0041bea6
    FMUL float ptr [EAX]                ; 0041bead
    FADDP                               ; 0041beaf
    FLD float ptr [ESP + 0x184]         ; 0041beb1
    FMUL float ptr [EAX + 0x8]          ; 0041beb8
    FADDP                               ; 0041bebb
    FMUL float ptr [0x005b73b1]         ; 0041bebd | DAT_005b73b1
    FLD float ptr [ESP + 0x17c]         ; 0041bec3
    FXCH                                ; 0041beca
    FSTP float ptr [ESP + 0x62c]        ; 0041becc
    FMUL float ptr [ESP + 0x62c]        ; 0041bed3
    FLD float ptr [ESP + 0x180]         ; 0041beda
    FMUL float ptr [ESP + 0x62c]        ; 0041bee1
    FLD float ptr [ESP + 0x184]         ; 0041bee8
    FMUL float ptr [ESP + 0x62c]        ; 0041beef
    LEA EDI,[ESP + 0x4d0]               ; 0041bef6
    LEA ESI,[ESP + 0x5fc]               ; 0041befd
    FXCH ST2                            ; 0041bf04
    FSTP float ptr [ESP + 0x5fc]        ; 0041bf06
    FSTP float ptr [ESP + 0x600]        ; 0041bf0d
    FSTP float ptr [ESP + 0x604]        ; 0041bf14
    MOVSD ES:EDI,ESI                    ; 0041bf1b
    MOVSD ES:EDI,ESI                    ; 0041bf1c
    MOVSD ES:EDI,ESI                    ; 0041bf1d
    LEA EDX,[ESP + 0x1ac]               ; 0041bf1e
    FLD float ptr [ESP + 0x4d4]         ; 0041bf25
    FLD float ptr [ESP + 0x4d0]         ; 0041bf2c
    FSUB float ptr [EAX]                ; 0041bf33
    FLD float ptr [ESP + 0x4d8]         ; 0041bf35
    FXCH                                ; 0041bf3c
    FSTP float ptr [ESP + 0x554]        ; 0041bf3e
    FXCH                                ; 0041bf45
    FSUB float ptr [EAX + 0x4]          ; 0041bf47
    LEA EDI,[ESP + 0x4f4]               ; 0041bf4a
    FSTP float ptr [ESP + 0x558]        ; 0041bf51
    FSUB float ptr [EAX + 0x8]          ; 0041bf58
    LEA ESI,[ESP + 0x554]               ; 0041bf5b
    FSTP float ptr [ESP + 0x55c]        ; 0041bf62
    LEA EAX,[ESP + 0x4f4]               ; 0041bf69
    MOVSD ES:EDI,ESI                    ; 0041bf70
    MOVSD ES:EDI,ESI                    ; 0041bf71
    MOVSD ES:EDI,ESI                    ; 0041bf72
    CMP EDX,EAX                         ; 0041bf73
    JZ 0x0041bfa1                       ; 0041bf75
        ;   XREF to: 0041bfa1 (CONDITIONAL_JUMP)  ; LAB_0041bfa1
    MOV EAX,dword ptr [ESP + 0x4f4]     ; 0041bf77
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0041bf7e
    MOV EAX,dword ptr [ESP + 0x4f8]     ; 0041bf85
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0041bf8c
    MOV EAX,dword ptr [ESP + 0x4fc]     ; 0041bf93
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0041bf9a
    FLD float ptr [0x005b73b5]          ; 0041bfa1 | DAT_005b73b5
        ;   Label: LAB_0041bfa1
    FLD float ptr [ESP + 0x1ac]         ; 0041bfa7
    FMUL ST1                            ; 0041bfae
    FLD float ptr [ESP + 0x1b0]         ; 0041bfb0
    FMUL ST2                            ; 0041bfb7
    FLD float ptr [ESP + 0x1b4]         ; 0041bfb9
    FMULP ST3                           ; 0041bfc0
    FXCH                                ; 0041bfc2
    FLD float ptr [0x005b73b9]          ; 0041bfc4 | DAT_005b73b9
    FXCH                                ; 0041bfca
    FMUL ST1                            ; 0041bfcc
    FXCH ST2                            ; 0041bfce
    FMUL ST1                            ; 0041bfd0
    FLD1                                ; 0041bfd2
    FXCH ST4                            ; 0041bfd4
    FMULP ST2                           ; 0041bfd6
    FXCH ST3                            ; 0041bfd8
    FDIV float ptr [EBP + 0x18]         ; 0041bfda
    LEA EDI,[ESP + 0x560]               ; 0041bfdd
    LEA EDX,[EBX + 0x4c]                ; 0041bfe4
    FXCH ST2                            ; 0041bfe7
    FSTP float ptr [ESP + 0x1ac]        ; 0041bfe9
    FXCH ST2                            ; 0041bff0
    FSTP float ptr [ESP + 0x1b0]        ; 0041bff2
    FXCH                                ; 0041bff9
    FSTP float ptr [ESP + 0x1b4]        ; 0041bffb
    FLD float ptr [ESP + 0x1ac]         ; 0041c002
    FSUB float ptr [EDX]                ; 0041c009
    FLD float ptr [ESP + 0x1b0]         ; 0041c00b
    FXCH                                ; 0041c012
    FSTP float ptr [ESP + 0x2a8]        ; 0041c014
    FSUB float ptr [EDX + 0x4]          ; 0041c01b
    FLD float ptr [ESP + 0x1b4]         ; 0041c01e
    FXCH                                ; 0041c025
    FSTP float ptr [ESP + 0x2ac]        ; 0041c027
    FSUB float ptr [EDX + 0x8]          ; 0041c02e
    LEA ESI,[ESP + 0x2a8]               ; 0041c031
    FSTP float ptr [ESP + 0x2b0]        ; 0041c038
    MOVSD ES:EDI,ESI                    ; 0041c03f
    MOVSD ES:EDI,ESI                    ; 0041c040
    MOVSD ES:EDI,ESI                    ; 0041c041
    LEA EAX,[EBX + 0x94]                ; 0041c042
    FLD float ptr [ESP + 0x560]         ; 0041c048
    FMUL float ptr [EAX]                ; 0041c04f
    FLD float ptr [ESP + 0x564]         ; 0041c051
    FXCH                                ; 0041c058
    FSTP float ptr [ESP + 0x2cc]        ; 0041c05a
    FMUL float ptr [EAX]                ; 0041c061
    FLD float ptr [ESP + 0x568]         ; 0041c063
    FXCH                                ; 0041c06a
    FSTP float ptr [ESP + 0x2d0]        ; 0041c06c
    FMUL float ptr [EAX]                ; 0041c073
    LEA EDI,[ESP + 0xa4]                ; 0041c075
    LEA ESI,[ESP + 0x2cc]               ; 0041c07c
    FSTP float ptr [ESP + 0x2d4]        ; 0041c083
    MOVSD ES:EDI,ESI                    ; 0041c08a
    MOVSD ES:EDI,ESI                    ; 0041c08b
    MOVSD ES:EDI,ESI                    ; 0041c08c
    FLD float ptr [ESP + 0xa4]          ; 0041c08d
    FMUL ST1                            ; 0041c094
    FLD float ptr [ESP + 0xa8]          ; 0041c096
    FMUL ST2                            ; 0041c09d
    FLD float ptr [ESP + 0xac]          ; 0041c09f
    FMULP ST3                           ; 0041c0a6
    LEA EAX,[EBX + 0x64]                ; 0041c0a8
    LEA EDI,[ESP + 0x248]               ; 0041c0ab
    LEA ESI,[ESP + 0x2fc]               ; 0041c0b2
    FXCH                                ; 0041c0b9
    FSTP float ptr [ESP + 0x2fc]        ; 0041c0bb
    FSTP float ptr [ESP + 0x300]        ; 0041c0c2
    FSTP float ptr [ESP + 0x304]        ; 0041c0c9
    MOVSD ES:EDI,ESI                    ; 0041c0d0
    MOVSD ES:EDI,ESI                    ; 0041c0d1
    MOVSD ES:EDI,ESI                    ; 0041c0d2
    FLD float ptr [EAX]                 ; 0041c0d3
    FADD float ptr [ESP + 0x248]        ; 0041c0d5
    FLD float ptr [EAX + 0x4]           ; 0041c0dc
    FXCH                                ; 0041c0df
    FSTP float ptr [EAX]                ; 0041c0e1
    FADD float ptr [ESP + 0x24c]        ; 0041c0e3
    FLD float ptr [EAX + 0x8]           ; 0041c0ea
    FXCH                                ; 0041c0ed
    FSTP float ptr [EAX + 0x4]          ; 0041c0ef
    FADD float ptr [ESP + 0x250]        ; 0041c0f2
    FSTP float ptr [EAX + 0x8]          ; 0041c0f9
    LEA EAX,[EBX + 0x70]                ; 0041c0fc
    MOV dword ptr [EAX + 0x8],0x0       ; 0041c0ff
    MOV EDX,dword ptr [ESP + 0x698]     ; 0041c106
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041c10d
    MOV dword ptr [EAX + 0x4],ECX       ; 0041c110
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041c113
    MOV dword ptr [EAX],ECX             ; 0041c116
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041c118
    SUB EAX,EDX                         ; 0041c11f
    SHL EAX,0x2                         ; 0041c121
    ADD EDX,EAX                         ; 0041c124
    SHL EDX,0x2                         ; 0041c126
    LEA EAX,[EBX + 0xb4]                ; 0041c129
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0041c12f
    FMUL float ptr [ESP + 0x250]        ; 0041c133
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 0041c13a
    FMUL float ptr [ESP + 0x24c]        ; 0041c13e
    FSUBP                               ; 0041c145
    FSTP float ptr [ESP + 0xbc]         ; 0041c147
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 0041c14e
    FMUL float ptr [ESP + 0x248]        ; 0041c152
    FLD float ptr [EDX + EAX*0x1]       ; 0041c159
    FMUL float ptr [ESP + 0x250]        ; 0041c15c
    FSUBP                               ; 0041c163
    FSTP float ptr [ESP + 0xc0]         ; 0041c165
    FLD float ptr [EDX + EAX*0x1]       ; 0041c16c
    FMUL float ptr [ESP + 0x24c]        ; 0041c16f
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0041c176
    FMUL float ptr [ESP + 0x248]        ; 0041c17a
    LEA EDI,[ESP + 0x2b4]               ; 0041c181
    FSUBP                               ; 0041c188
    LEA ESI,[ESP + 0xbc]                ; 0041c18a
    FSTP float ptr [ESP + 0xc4]         ; 0041c191
    MOVSD ES:EDI,ESI                    ; 0041c198
    MOVSD ES:EDI,ESI                    ; 0041c199
    MOVSD ES:EDI,ESI                    ; 0041c19a
    FLD float ptr [0x005b73bd]          ; 0041c19b | DAT_005b73bd
    FLD float ptr [ESP + 0x2b4]         ; 0041c1a1
    FMUL ST1                            ; 0041c1a8
    FLD float ptr [ESP + 0x2b8]         ; 0041c1aa
    FMUL ST2                            ; 0041c1b1
    FLD float ptr [ESP + 0x2bc]         ; 0041c1b3
    FMULP ST3                           ; 0041c1ba
    LEA EAX,[EBX + 0x88]                ; 0041c1bc
    LEA EDI,[ESP + 0x188]               ; 0041c1c2
    LEA ESI,[ESP + 0x3ec]               ; 0041c1c9
    FXCH                                ; 0041c1d0
    FSTP float ptr [ESP + 0x3ec]        ; 0041c1d2
    FSTP float ptr [ESP + 0x3f0]        ; 0041c1d9
    FSTP float ptr [ESP + 0x3f4]        ; 0041c1e0
    MOVSD ES:EDI,ESI                    ; 0041c1e7
    MOVSD ES:EDI,ESI                    ; 0041c1e8
    MOVSD ES:EDI,ESI                    ; 0041c1e9
    FLD float ptr [EAX]                 ; 0041c1ea
    FADD float ptr [ESP + 0x188]        ; 0041c1ec
    FLD float ptr [EAX + 0x4]           ; 0041c1f3
    FXCH                                ; 0041c1f6
    FSTP float ptr [EAX]                ; 0041c1f8
    FADD float ptr [ESP + 0x18c]        ; 0041c1fa
    FLD float ptr [EAX + 0x8]           ; 0041c201
    FXCH                                ; 0041c204
    FSTP float ptr [EAX + 0x4]          ; 0041c206
    FADD float ptr [ESP + 0x190]        ; 0041c209
    LEA EDI,[ESP + 0x5f0]               ; 0041c210
    FSTP float ptr [EAX + 0x8]          ; 0041c217
    LEA ESI,[EDX + EBX*0x1 + 0xb4]      ; 0041c21a
    MOVSD ES:EDI,ESI                    ; 0041c221
    MOVSD ES:EDI,ESI                    ; 0041c222
    MOVSD ES:EDI,ESI                    ; 0041c223
    XOR EDI,EDI                         ; 0041c224
    MOV dword ptr [ESP + 0x35c],EDI     ; 0041c226
    MOV dword ptr [ESP + 0x360],EDI     ; 0041c22d
    MOV dword ptr [ESP + 0x364],EDI     ; 0041c234
    LEA EAX,[ESP + 0x35c]               ; 0041c23b
    FLD float ptr [EBX + 0x94]          ; 0041c242
    FMUL double ptr [0x005b7399]        ; 0041c248 | DAT_005b7399
    PUSH EAX                            ; 0041c24e
    LEA EAX,[EBX + 0x18]                ; 0041c24f
    LEA ESI,[ESP + 0x444]               ; 0041c252
    PUSH EAX                            ; 0041c259
    LEA EDI,[ESP + 0x3ac]               ; 0041c25a
    FSTP float ptr [ESP + 0x368]        ; 0041c261
    CALL FUN_0045b870                   ; 0041c268
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x448]               ; 0041c26d
    LEA EAX,[ESP + 0x3ac]               ; 0041c274
    ADD ESP,0x8                         ; 0041c27b
    LEA EDX,[ESP + 0x35c]               ; 0041c27e
    MOVSD ES:EDI,ESI                    ; 0041c285
    MOVSD ES:EDI,ESI                    ; 0041c286
    MOVSD ES:EDI,ESI                    ; 0041c287
    CMP EDX,EAX                         ; 0041c288
    JZ 0x0041c2b6                       ; 0041c28a
        ;   XREF to: 0041c2b6 (CONDITIONAL_JUMP)  ; LAB_0041c2b6
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 0041c28c
    MOV dword ptr [ESP + 0x35c],EAX     ; 0041c293
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 0041c29a
    MOV dword ptr [ESP + 0x360],EAX     ; 0041c2a1
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 0041c2a8
    MOV dword ptr [ESP + 0x364],EAX     ; 0041c2af
    FLD float ptr [ESP + 0x5f4]         ; 0041c2b6
        ;   Label: LAB_0041c2b6
    FMUL float ptr [ESP + 0x364]        ; 0041c2bd
    FLD float ptr [ESP + 0x5f8]         ; 0041c2c4
    FMUL float ptr [ESP + 0x35c]        ; 0041c2cb
    FLD float ptr [ESP + 0x5f0]         ; 0041c2d2
    FMUL float ptr [ESP + 0x360]        ; 0041c2d9
    FLD float ptr [ESP + 0x5f8]         ; 0041c2e0
    FMUL float ptr [ESP + 0x360]        ; 0041c2e7
    FLD float ptr [ESP + 0x5f0]         ; 0041c2ee
    FMUL float ptr [ESP + 0x364]        ; 0041c2f5
    FLD float ptr [ESP + 0x5f4]         ; 0041c2fc
    FMUL float ptr [ESP + 0x35c]        ; 0041c303
    LEA EDI,[ESP + 0xb0]                ; 0041c30a
    LEA ESI,[ESP + 0x158]               ; 0041c311
    LEA EAX,[EBX + 0x88]                ; 0041c318
    FXCH ST2                            ; 0041c31e
    FSUBP ST5,ST0                       ; 0041c320
    FSUBP ST3,ST0                       ; 0041c322
    FSUBP                               ; 0041c324
    FXCH ST2                            ; 0041c326
    FSTP float ptr [ESP + 0x158]        ; 0041c328
    FSTP float ptr [ESP + 0x15c]        ; 0041c32f
    FSTP float ptr [ESP + 0x160]        ; 0041c336
    MOVSD ES:EDI,ESI                    ; 0041c33d
    MOVSD ES:EDI,ESI                    ; 0041c33e
    MOVSD ES:EDI,ESI                    ; 0041c33f
    FLD float ptr [EAX]                 ; 0041c340
    FADD float ptr [ESP + 0xb0]         ; 0041c342
    FLD float ptr [EAX + 0x4]           ; 0041c349
    FXCH                                ; 0041c34c
    FSTP float ptr [EAX]                ; 0041c34e
    FADD float ptr [ESP + 0xb4]         ; 0041c350
    FLD float ptr [EAX + 0x8]           ; 0041c357
    FXCH                                ; 0041c35a
    FSTP float ptr [EAX + 0x4]          ; 0041c35c
    FADD float ptr [ESP + 0xb8]         ; 0041c35f
    FSTP float ptr [EAX + 0x8]          ; 0041c366
    CMP dword ptr [ESP + 0x63c],0x2     ; 0041c369
        ;   Label: LAB_0041c369
    JNZ 0x0041cd53                      ; 0041c371
        ;   XREF to: 0041cd53 (CONDITIONAL_JUMP)  ; LAB_0041cd53
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041c377
    MOV dword ptr [ESP + 0x69c],EAX     ; 0041c37b
    MOV EDX,EAX                         ; 0041c382
    SHL EAX,0x2                         ; 0041c384
    SUB EAX,EDX                         ; 0041c387
    SHL EAX,0x2                         ; 0041c389
    ADD EAX,EDX                         ; 0041c38c
    SHL EAX,0x2                         ; 0041c38e
    LEA EDX,[EBX + 0xb4]                ; 0041c391
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041c397
    ADD EAX,EDX                         ; 0041c39e
    LEA ECX,[EAX + 0xc]                 ; 0041c3a0
    FLD float ptr [ECX]                 ; 0041c3a3
    FSUB float ptr [EAX + 0x18]         ; 0041c3a5
    FSTP float ptr [ESP + 0x38c]        ; 0041c3a8
    FLD float ptr [ECX + 0x4]           ; 0041c3af
    FSUB float ptr [EAX + 0x1c]         ; 0041c3b2
    LEA EDI,[ESP + 0x218]               ; 0041c3b5
    FSTP float ptr [ESP + 0x390]        ; 0041c3bc
    FLD float ptr [ECX + 0x8]           ; 0041c3c3
    FSUB float ptr [EAX + 0x20]         ; 0041c3c6
    LEA ESI,[ESP + 0x38c]               ; 0041c3c9
    FSTP float ptr [ESP + 0x394]        ; 0041c3d0
    MOV EAX,dword ptr [ESP + 0x68c]     ; 0041c3d7
    MOVSD ES:EDI,ESI                    ; 0041c3de
    MOVSD ES:EDI,ESI                    ; 0041c3df
    MOVSD ES:EDI,ESI                    ; 0041c3e0
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 0041c3e1
    FLD1                                ; 0041c3e8
    FSUBRP                              ; 0041c3ea
    FLD double ptr [0x005b73c1]         ; 0041c3ec | DAT_005b73c1
    FXCH                                ; 0041c3f2
    FMUL ST1                            ; 0041c3f4
    FLD float ptr [ESP + 0x218]         ; 0041c3f6
    FXCH                                ; 0041c3fd
    FSTP float ptr [ESP + 0x6a4]        ; 0041c3ff
    FMUL float ptr [ESP + 0x6a4]        ; 0041c406
    FLD float ptr [ESP + 0x21c]         ; 0041c40d
    FMUL float ptr [ESP + 0x6a4]        ; 0041c414
    FLD float ptr [ESP + 0x220]         ; 0041c41b
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041c422
    FMUL float ptr [ESP + 0x6a4]        ; 0041c426
    MOV dword ptr [ESP + 0x690],EAX     ; 0041c42d
    MOV ECX,EAX                         ; 0041c434
    SHL EAX,0x2                         ; 0041c436
    LEA EDI,[ESP + 0x368]               ; 0041c439
    SUB EAX,ECX                         ; 0041c440
    LEA ESI,[ESP + 0x3c8]               ; 0041c442
    SHL EAX,0x2                         ; 0041c449
    FXCH ST2                            ; 0041c44c
    FSTP float ptr [ESP + 0x3c8]        ; 0041c44e
    FSTP float ptr [ESP + 0x3cc]        ; 0041c455
    FSTP float ptr [ESP + 0x3d0]        ; 0041c45c
    MOVSD ES:EDI,ESI                    ; 0041c463
    MOVSD ES:EDI,ESI                    ; 0041c464
    MOVSD ES:EDI,ESI                    ; 0041c465
    ADD EAX,ECX                         ; 0041c466
    FLD float ptr [ESP + 0x36c]         ; 0041c468
    FMUL ST0                            ; 0041c46f
    SHL EAX,0x2                         ; 0041c471
    FLD float ptr [ESP + 0x368]         ; 0041c474
    FMUL ST0                            ; 0041c47b
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041c47d
    LEA ECX,[EAX + EDX*0x1]             ; 0041c484
    FADDP                               ; 0041c487
    LEA EAX,[ECX + 0xc]                 ; 0041c489
    FLD float ptr [ESP + 0x370]         ; 0041c48c
    FMUL ST0                            ; 0041c493
    FLD float ptr [EAX]                 ; 0041c495
    FSUB float ptr [ECX + 0x18]         ; 0041c497
    LEA EDI,[ESP + 0x3d4]               ; 0041c49a
    FSTP float ptr [ESP + 0x428]        ; 0041c4a1
    FLD float ptr [EAX + 0x4]           ; 0041c4a8
    FSUB float ptr [ECX + 0x1c]         ; 0041c4ab
    LEA ESI,[ESP + 0x428]               ; 0041c4ae
    FSTP float ptr [ESP + 0x42c]        ; 0041c4b5
    FLD float ptr [EAX + 0x8]           ; 0041c4bc
    FXCH                                ; 0041c4bf
    FADDP ST2,ST0                       ; 0041c4c1
    MOV EAX,dword ptr [ESP + 0x68c]     ; 0041c4c3
    FSUB float ptr [ECX + 0x20]         ; 0041c4ca
    FXCH                                ; 0041c4cd
    FSTP float ptr [ESP + 0x18]         ; 0041c4cf
    FSTP float ptr [ESP + 0x430]        ; 0041c4d3
    MOVSD ES:EDI,ESI                    ; 0041c4da
    MOVSD ES:EDI,ESI                    ; 0041c4db
    MOVSD ES:EDI,ESI                    ; 0041c4dc
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 0041c4dd
    FLD float ptr [ESP + 0x18]          ; 0041c4e4
    FSQRT                               ; 0041c4e8
    FLD1                                ; 0041c4ea
    FSUBRP ST2,ST0                      ; 0041c4ec
    FXCH                                ; 0041c4ee
    FMULP ST2                           ; 0041c4f0
    FLD float ptr [ESP + 0x3d4]         ; 0041c4f2
    FXCH ST2                            ; 0041c4f9
    FSTP float ptr [ESP + 0x648]        ; 0041c4fb
    FXCH                                ; 0041c502
    FMUL float ptr [ESP + 0x648]        ; 0041c504
    FLD float ptr [ESP + 0x3d8]         ; 0041c50b
    FMUL float ptr [ESP + 0x648]        ; 0041c512
    FLD float ptr [ESP + 0x3dc]         ; 0041c519
    FMUL float ptr [ESP + 0x648]        ; 0041c520
    LEA EDI,[ESP + 0x3bc]               ; 0041c527
    LEA ESI,[ESP + 0x488]               ; 0041c52e
    FXCH ST2                            ; 0041c535
    FSTP float ptr [ESP + 0x488]        ; 0041c537
    FSTP float ptr [ESP + 0x48c]        ; 0041c53e
    FSTP float ptr [ESP + 0x490]        ; 0041c545
    MOVSD ES:EDI,ESI                    ; 0041c54c
    MOVSD ES:EDI,ESI                    ; 0041c54d
    MOVSD ES:EDI,ESI                    ; 0041c54e
    FLD float ptr [ESP + 0x3c0]         ; 0041c54f
    FMUL ST0                            ; 0041c556
    FLD float ptr [ESP + 0x3bc]         ; 0041c558
    FMUL ST0                            ; 0041c55f
    FADDP                               ; 0041c561
    FLD float ptr [ESP + 0x3c4]         ; 0041c563
    FMUL ST0                            ; 0041c56a
    FADDP                               ; 0041c56c
    FSQRT                               ; 0041c56e
    LEA ESI,[EBX + 0x18]                ; 0041c570
    FXCH                                ; 0041c573
    FCOMPP                              ; 0041c575
    FNSTSW AX                           ; 0041c577
    SAHF                                ; 0041c579
    JBE 0x0041d3c6                      ; 0041c57a
        ;   XREF to: 0041d3c6 (CONDITIONAL_JUMP)  ; LAB_0041d3c6
    MOV ECX,dword ptr [ESP + 0x69c]     ; 0041c580
    FLD float ptr [EBX]                 ; 0041c587
    LEA EAX,[ECX*0x4 + 0x0]             ; 0041c589
    FLD float ptr [EBX + 0x4]           ; 0041c590
    SUB EAX,ECX                         ; 0041c593
    FLD float ptr [EBX + 0x8]           ; 0041c595
    SHL EAX,0x2                         ; 0041c598
    LEA EDI,[ESP + 0x3f8]               ; 0041c59b
    ADD EAX,ECX                         ; 0041c5a2
    FXCH ST2                            ; 0041c5a4
    FADD float ptr [ESP + 0x368]        ; 0041c5a6
    SHL EAX,0x2                         ; 0041c5ad
    FSTP float ptr [EBX]                ; 0041c5b0
    ADD EDX,EAX                         ; 0041c5b2
    FADD float ptr [ESP + 0x36c]        ; 0041c5b4
    ADD EDX,0x28                        ; 0041c5bb
    FSTP float ptr [EBX + 0x4]          ; 0041c5be
    PUSH EDX                            ; 0041c5c1
    FADD float ptr [ESP + 0x374]        ; 0041c5c2
    PUSH ESI                            ; 0041c5c9
    LEA ESI,[ESP + 0x94]                ; 0041c5ca
    FSTP float ptr [EBX + 0x8]          ; 0041c5d1
    CALL FUN_0045b870                   ; 0041c5d4
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x94]                ; 0041c5d9
    LEA EAX,[ESP + 0x400]               ; 0041c5e0
    ADD ESP,0x8                         ; 0041c5e7
    LEA EDX,[ESP + 0x530]               ; 0041c5ea
    MOVSD ES:EDI,ESI                    ; 0041c5f1
    MOVSD ES:EDI,ESI                    ; 0041c5f2
    MOVSD ES:EDI,ESI                    ; 0041c5f3
    CMP EDX,EAX                         ; 0041c5f4
    JZ 0x0041c622                       ; 0041c5f6
        ;   XREF to: 0041c622 (CONDITIONAL_JUMP)  ; LAB_0041c622
    MOV EAX,dword ptr [ESP + 0x3f8]     ; 0041c5f8
    MOV dword ptr [ESP + 0x530],EAX     ; 0041c5ff
    MOV EAX,dword ptr [ESP + 0x3fc]     ; 0041c606
    MOV dword ptr [ESP + 0x534],EAX     ; 0041c60d
    MOV EAX,dword ptr [ESP + 0x400]     ; 0041c614
    MOV dword ptr [ESP + 0x538],EAX     ; 0041c61b
        ;   Label: LAB_0041c61b
    LEA EAX,[EBX + 0x4c]                ; 0041c622
        ;   Label: LAB_0041c622
    FLD float ptr [ESP + 0x534]         ; 0041c625
    FMUL float ptr [EAX + 0x4]          ; 0041c62c
    FLD float ptr [ESP + 0x530]         ; 0041c62f
    FMUL float ptr [EAX]                ; 0041c636
    FADDP                               ; 0041c638
    FLD float ptr [ESP + 0x538]         ; 0041c63a
    FMUL float ptr [EAX + 0x8]          ; 0041c641
    FADDP                               ; 0041c644
    FMUL float ptr [0x005b73b1]         ; 0041c646 | DAT_005b73b1
    FLD float ptr [ESP + 0x530]         ; 0041c64c
    FXCH                                ; 0041c653
    FSTP float ptr [ESP + 0x628]        ; 0041c655
    FMUL float ptr [ESP + 0x628]        ; 0041c65c
    FLD float ptr [ESP + 0x534]         ; 0041c663
    FMUL float ptr [ESP + 0x628]        ; 0041c66a
    FLD float ptr [ESP + 0x538]         ; 0041c671
    FMUL float ptr [ESP + 0x628]        ; 0041c678
    LEA EDI,[ESP + 0x53c]               ; 0041c67f
    LEA ESI,[ESP + 0x20c]               ; 0041c686
    FXCH ST2                            ; 0041c68d
    FSTP float ptr [ESP + 0x20c]        ; 0041c68f
    FSTP float ptr [ESP + 0x210]        ; 0041c696
    FSTP float ptr [ESP + 0x214]        ; 0041c69d
    MOVSD ES:EDI,ESI                    ; 0041c6a4
    MOVSD ES:EDI,ESI                    ; 0041c6a5
    MOVSD ES:EDI,ESI                    ; 0041c6a6
    LEA EDX,[ESP + 0x5b4]               ; 0041c6a7
    FLD float ptr [ESP + 0x540]         ; 0041c6ae
    FLD float ptr [ESP + 0x53c]         ; 0041c6b5
    FSUB float ptr [EAX]                ; 0041c6bc
    FLD float ptr [ESP + 0x544]         ; 0041c6be
    FXCH                                ; 0041c6c5
    FSTP float ptr [ESP + 0x5d8]        ; 0041c6c7
    FXCH                                ; 0041c6ce
    FSUB float ptr [EAX + 0x4]          ; 0041c6d0
    LEA EDI,[ESP + 0x1b8]               ; 0041c6d3
    FSTP float ptr [ESP + 0x5dc]        ; 0041c6da
    FSUB float ptr [EAX + 0x8]          ; 0041c6e1
    LEA ESI,[ESP + 0x5d8]               ; 0041c6e4
    FSTP float ptr [ESP + 0x5e0]        ; 0041c6eb
    LEA EAX,[ESP + 0x1b8]               ; 0041c6f2
    MOVSD ES:EDI,ESI                    ; 0041c6f9
    MOVSD ES:EDI,ESI                    ; 0041c6fa
    MOVSD ES:EDI,ESI                    ; 0041c6fb
    CMP EDX,EAX                         ; 0041c6fc
    JZ 0x0041c72a                       ; 0041c6fe
        ;   XREF to: 0041c72a (CONDITIONAL_JUMP)  ; LAB_0041c72a
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0041c700
    MOV dword ptr [ESP + 0x5b4],EAX     ; 0041c707
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0041c70e
    MOV dword ptr [ESP + 0x5b8],EAX     ; 0041c715
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0041c71c
    MOV dword ptr [ESP + 0x5bc],EAX     ; 0041c723
    FLD float ptr [0x005b73b5]          ; 0041c72a | DAT_005b73b5
        ;   Label: LAB_0041c72a
    FLD float ptr [ESP + 0x5b4]         ; 0041c730
    FMUL ST1                            ; 0041c737
    FLD float ptr [ESP + 0x5b8]         ; 0041c739
    FMUL ST2                            ; 0041c740
    FLD float ptr [ESP + 0x5bc]         ; 0041c742
    FMULP ST3                           ; 0041c749
    FXCH                                ; 0041c74b
    FLD float ptr [0x005b73c9]          ; 0041c74d | DAT_005b73c9
    FXCH                                ; 0041c753
    FMUL ST1                            ; 0041c755
    FXCH ST2                            ; 0041c757
    FMUL ST1                            ; 0041c759
    FLD1                                ; 0041c75b
    FXCH ST4                            ; 0041c75d
    FMULP ST2                           ; 0041c75f
    FXCH ST3                            ; 0041c761
    FDIV float ptr [EBP + 0x18]         ; 0041c763
    LEA EDI,[ESP + 0x11c]               ; 0041c766
    LEA EDX,[EBX + 0x4c]                ; 0041c76d
    FXCH ST2                            ; 0041c770
    FSTP float ptr [ESP + 0x5b4]        ; 0041c772
    FXCH ST2                            ; 0041c779
    FSTP float ptr [ESP + 0x5b8]        ; 0041c77b
    FXCH                                ; 0041c782
    FSTP float ptr [ESP + 0x5bc]        ; 0041c784
    FLD float ptr [ESP + 0x5b4]         ; 0041c78b
    FSUB float ptr [EDX]                ; 0041c792
    FLD float ptr [ESP + 0x5b8]         ; 0041c794
    FXCH                                ; 0041c79b
    FSTP float ptr [ESP + 0x284]        ; 0041c79d
    FSUB float ptr [EDX + 0x4]          ; 0041c7a4
    FLD float ptr [ESP + 0x5bc]         ; 0041c7a7
    FXCH                                ; 0041c7ae
    FSTP float ptr [ESP + 0x288]        ; 0041c7b0
    FSUB float ptr [EDX + 0x8]          ; 0041c7b7
    LEA ESI,[ESP + 0x284]               ; 0041c7ba
    FSTP float ptr [ESP + 0x28c]        ; 0041c7c1
    MOVSD ES:EDI,ESI                    ; 0041c7c8
    MOVSD ES:EDI,ESI                    ; 0041c7c9
    MOVSD ES:EDI,ESI                    ; 0041c7ca
    LEA EAX,[EBX + 0x94]                ; 0041c7cb
    FLD float ptr [ESP + 0x11c]         ; 0041c7d1
    FMUL float ptr [EAX]                ; 0041c7d8
    FLD float ptr [ESP + 0x120]         ; 0041c7da
    FXCH                                ; 0041c7e1
    FSTP float ptr [ESP + 0x128]        ; 0041c7e3
    FMUL float ptr [EAX]                ; 0041c7ea
    FLD float ptr [ESP + 0x124]         ; 0041c7ec
    FXCH                                ; 0041c7f3
    FSTP float ptr [ESP + 0x12c]        ; 0041c7f5
    FMUL float ptr [EAX]                ; 0041c7fc
    LEA EDI,[ESP + 0x194]               ; 0041c7fe
    LEA ESI,[ESP + 0x128]               ; 0041c805
    FSTP float ptr [ESP + 0x130]        ; 0041c80c
    MOVSD ES:EDI,ESI                    ; 0041c813
    MOVSD ES:EDI,ESI                    ; 0041c814
    MOVSD ES:EDI,ESI                    ; 0041c815
    FLD float ptr [ESP + 0x194]         ; 0041c816
    FMUL ST1                            ; 0041c81d
    FLD float ptr [ESP + 0x198]         ; 0041c81f
    FMUL ST2                            ; 0041c826
    FLD float ptr [ESP + 0x19c]         ; 0041c828
    FMULP ST3                           ; 0041c82f
    LEA EAX,[EBX + 0x64]                ; 0041c831
    LEA EDI,[ESP + 0xd4]                ; 0041c834
    LEA ESI,[ESP + 0x164]               ; 0041c83b
    FXCH                                ; 0041c842
    FSTP float ptr [ESP + 0x164]        ; 0041c844
    FSTP float ptr [ESP + 0x168]        ; 0041c84b
    FSTP float ptr [ESP + 0x16c]        ; 0041c852
    MOVSD ES:EDI,ESI                    ; 0041c859
    MOVSD ES:EDI,ESI                    ; 0041c85a
    MOVSD ES:EDI,ESI                    ; 0041c85b
    FLD float ptr [EAX]                 ; 0041c85c
    FADD float ptr [ESP + 0xd4]         ; 0041c85e
    FLD float ptr [EAX + 0x4]           ; 0041c865
    FXCH                                ; 0041c868
    FSTP float ptr [EAX]                ; 0041c86a
    FADD float ptr [ESP + 0xd8]         ; 0041c86c
    FLD float ptr [EAX + 0x8]           ; 0041c873
    FXCH                                ; 0041c876
    FSTP float ptr [EAX + 0x4]          ; 0041c878
    FADD float ptr [ESP + 0xdc]         ; 0041c87b
    FSTP float ptr [EAX + 0x8]          ; 0041c882
    LEA EAX,[EBX + 0x70]                ; 0041c885
    MOV dword ptr [EAX + 0x8],0x0       ; 0041c888
    MOV EDX,dword ptr [ESP + 0x69c]     ; 0041c88f
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041c896
    MOV dword ptr [EAX + 0x4],ECX       ; 0041c899
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041c89c
    MOV dword ptr [EAX],ECX             ; 0041c89f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041c8a1
    SUB EAX,EDX                         ; 0041c8a8
    SHL EAX,0x2                         ; 0041c8aa
    ADD EAX,EDX                         ; 0041c8ad
    SHL EAX,0x2                         ; 0041c8af
    MOV dword ptr [ESP + 0x694],EAX     ; 0041c8b2
    LEA EAX,[EBX + 0xb4]                ; 0041c8b9
    MOV ESI,dword ptr [ESP + 0x694]     ; 0041c8bf
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041c8c6
    ADD EAX,ESI                         ; 0041c8cd
    FLD float ptr [EAX + 0x4]           ; 0041c8cf
    FMUL float ptr [ESP + 0xdc]         ; 0041c8d2
    FLD float ptr [EAX + 0x8]           ; 0041c8d9
    FMUL float ptr [ESP + 0xd8]         ; 0041c8dc
    FSUBP                               ; 0041c8e3
    FSTP float ptr [ESP + 0x1c4]        ; 0041c8e5
    FLD float ptr [EAX + 0x8]           ; 0041c8ec
    FMUL float ptr [ESP + 0xd4]         ; 0041c8ef
    FLD float ptr [EAX]                 ; 0041c8f6
    FMUL float ptr [ESP + 0xdc]         ; 0041c8f8
    FSUBP                               ; 0041c8ff
    FSTP float ptr [ESP + 0x1c8]        ; 0041c901
    FLD float ptr [EAX]                 ; 0041c908
    FMUL float ptr [ESP + 0xd8]         ; 0041c90a
    FLD float ptr [EAX + 0x4]           ; 0041c911
    FMUL float ptr [ESP + 0xd4]         ; 0041c914
    MOV ECX,dword ptr [ESP + 0x690]     ; 0041c91b
    LEA EDI,[ESP + 0xf8]                ; 0041c922
    FSUBP                               ; 0041c929
    LEA ESI,[ESP + 0x1c4]               ; 0041c92b
    FSTP float ptr [ESP + 0x1cc]        ; 0041c932
    MOVSD ES:EDI,ESI                    ; 0041c939
    MOVSD ES:EDI,ESI                    ; 0041c93a
    MOVSD ES:EDI,ESI                    ; 0041c93b
    LEA EDX,[ECX*0x4 + 0x0]             ; 0041c93c
    FLD float ptr [0x005b73bd]          ; 0041c943 | DAT_005b73bd
    FLD float ptr [ESP + 0xf8]          ; 0041c949
    FMUL ST1                            ; 0041c950
    SUB EDX,ECX                         ; 0041c952
    FLD float ptr [ESP + 0xfc]          ; 0041c954
    FMUL ST2                            ; 0041c95b
    SHL EDX,0x2                         ; 0041c95d
    FLD float ptr [ESP + 0x100]         ; 0041c960
    FMULP ST3                           ; 0041c967
    ADD ECX,EDX                         ; 0041c969
    LEA EAX,[EBX + 0x88]                ; 0041c96b
    LEA EDI,[ESP + 0x1a0]               ; 0041c971
    LEA ESI,[ESP + 0x224]               ; 0041c978
    FXCH                                ; 0041c97f
    FSTP float ptr [ESP + 0x224]        ; 0041c981
    FSTP float ptr [ESP + 0x228]        ; 0041c988
    FSTP float ptr [ESP + 0x22c]        ; 0041c98f
    MOVSD ES:EDI,ESI                    ; 0041c996
    MOVSD ES:EDI,ESI                    ; 0041c997
    MOVSD ES:EDI,ESI                    ; 0041c998
    MOV EDX,dword ptr [ESP + 0x68c]     ; 0041c999
    FLD float ptr [EAX]                 ; 0041c9a0
    FADD float ptr [ESP + 0x1a0]        ; 0041c9a2
    FLD float ptr [EAX + 0x4]           ; 0041c9a9
    FXCH                                ; 0041c9ac
    FSTP float ptr [EAX]                ; 0041c9ae
    FADD float ptr [ESP + 0x1a4]        ; 0041c9b0
    FLD float ptr [EAX + 0x8]           ; 0041c9b7
    FXCH                                ; 0041c9ba
    FSTP float ptr [EAX + 0x4]          ; 0041c9bc
    FADD float ptr [ESP + 0x1a8]        ; 0041c9bf
    SHL ECX,0x2                         ; 0041c9c6
    FSTP float ptr [EAX + 0x8]          ; 0041c9c9
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 0041c9cc
    FMUL float ptr [ESP + 0xdc]         ; 0041c9d0
    FLD float ptr [ECX + EDX*0x1 + 0x8] ; 0041c9d7
    FMUL float ptr [ESP + 0xd8]         ; 0041c9db
    FSUBP                               ; 0041c9e2
    FSTP float ptr [ESP + 0x26c]        ; 0041c9e4
    FLD float ptr [ECX + EDX*0x1 + 0x8] ; 0041c9eb
    FMUL float ptr [ESP + 0xd4]         ; 0041c9ef
    FLD float ptr [ECX + EDX*0x1]       ; 0041c9f6
    FMUL float ptr [ESP + 0xdc]         ; 0041c9f9
    FSUBP                               ; 0041ca00
    FSTP float ptr [ESP + 0x270]        ; 0041ca02
    FLD float ptr [ECX + EDX*0x1]       ; 0041ca09
    FMUL float ptr [ESP + 0xd8]         ; 0041ca0c
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 0041ca13
    FMUL float ptr [ESP + 0xd4]         ; 0041ca17
    LEA EDI,[ESP + 0x578]               ; 0041ca1e
    FSUBP                               ; 0041ca25
    LEA ESI,[ESP + 0x26c]               ; 0041ca27
    FSTP float ptr [ESP + 0x274]        ; 0041ca2e
    MOVSD ES:EDI,ESI                    ; 0041ca35
    MOVSD ES:EDI,ESI                    ; 0041ca36
    MOVSD ES:EDI,ESI                    ; 0041ca37
    FLD float ptr [0x005b73bd]          ; 0041ca38 | DAT_005b73bd
    FLD float ptr [ESP + 0x578]         ; 0041ca3e
    FMUL ST1                            ; 0041ca45
    FLD float ptr [ESP + 0x57c]         ; 0041ca47
    FMUL ST2                            ; 0041ca4e
    FLD float ptr [ESP + 0x580]         ; 0041ca50
    FMULP ST3                           ; 0041ca57
    LEA EDI,[ESP + 0x4a0]               ; 0041ca59
    LEA ESI,[ESP + 0x2d8]               ; 0041ca60
    FXCH                                ; 0041ca67
    FSTP float ptr [ESP + 0x2d8]        ; 0041ca69
    FSTP float ptr [ESP + 0x2dc]        ; 0041ca70
    FSTP float ptr [ESP + 0x2e0]        ; 0041ca77
    MOVSD ES:EDI,ESI                    ; 0041ca7e
    MOVSD ES:EDI,ESI                    ; 0041ca7f
    MOVSD ES:EDI,ESI                    ; 0041ca80
    FLD float ptr [EAX + 0x4]           ; 0041ca81
    FLD float ptr [EAX]                 ; 0041ca84
    FADD float ptr [ESP + 0x4a0]        ; 0041ca86
    FLD float ptr [EAX + 0x8]           ; 0041ca8d
    FXCH                                ; 0041ca90
    FSTP float ptr [EAX]                ; 0041ca92
    FXCH                                ; 0041ca94
    FADD float ptr [ESP + 0x4a4]        ; 0041ca96
    MOV ESI,dword ptr [ESP + 0x694]     ; 0041ca9d
    FSTP float ptr [EAX + 0x4]          ; 0041caa4
    FADD float ptr [ESP + 0x4a8]        ; 0041caa7
    LEA EDI,[ESP + 0x1dc]               ; 0041caae
    FSTP float ptr [EAX + 0x8]          ; 0041cab5
    LEA ESI,[ESI + EBX*0x1 + 0xb4]      ; 0041cab8
    MOVSD ES:EDI,ESI                    ; 0041cabf
    MOVSD ES:EDI,ESI                    ; 0041cac0
    MOVSD ES:EDI,ESI                    ; 0041cac1
    LEA ESI,[ECX + EBX*0x1]             ; 0041cac2
    LEA EDI,[ESP + 0x1f4]               ; 0041cac5
    LEA ESI,[ESI + 0xb4]                ; 0041cacc
    MOVSD ES:EDI,ESI                    ; 0041cad2
    MOVSD ES:EDI,ESI                    ; 0041cad3
    MOVSD ES:EDI,ESI                    ; 0041cad4
    LEA EAX,[ESP + 0x524]               ; 0041cad5
    XOR EDI,EDI                         ; 0041cadc
    PUSH EAX                            ; 0041cade
    MOV dword ptr [ESP + 0x528],EDI     ; 0041cadf
    MOV dword ptr [ESP + 0x52c],EDI     ; 0041cae6
    MOV dword ptr [ESP + 0x530],EDI     ; 0041caed
    LEA EAX,[EBX + 0x18]                ; 0041caf4
    FLD float ptr [EBX + 0x94]          ; 0041caf7
    FMUL double ptr [0x005b7399]        ; 0041cafd | DAT_005b7399
    PUSH EAX                            ; 0041cb03
    LEA ESI,[ESP + 0x34c]               ; 0041cb04
    LEA EDI,[ESP + 0x550]               ; 0041cb0b
    FSTP float ptr [ESP + 0x530]        ; 0041cb12
    CALL FUN_0045b870                   ; 0041cb19
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x34c]               ; 0041cb1e
    LEA EAX,[ESP + 0x550]               ; 0041cb25
    ADD ESP,0x8                         ; 0041cb2c
    LEA EDX,[ESP + 0x524]               ; 0041cb2f
    MOVSD ES:EDI,ESI                    ; 0041cb36
    MOVSD ES:EDI,ESI                    ; 0041cb37
    MOVSD ES:EDI,ESI                    ; 0041cb38
    CMP EDX,EAX                         ; 0041cb39
    JZ 0x0041cb67                       ; 0041cb3b
        ;   XREF to: 0041cb67 (CONDITIONAL_JUMP)  ; LAB_0041cb67
    MOV EAX,dword ptr [ESP + 0x548]     ; 0041cb3d
    MOV dword ptr [ESP + 0x524],EAX     ; 0041cb44
    MOV EAX,dword ptr [ESP + 0x54c]     ; 0041cb4b
    MOV dword ptr [ESP + 0x528],EAX     ; 0041cb52
    MOV EAX,dword ptr [ESP + 0x550]     ; 0041cb59
    MOV dword ptr [ESP + 0x52c],EAX     ; 0041cb60
    FLD float ptr [0x005b73b9]          ; 0041cb67 | DAT_005b73b9
        ;   Label: LAB_0041cb67
    FLD float ptr [ESP + 0x524]         ; 0041cb6d
    FMUL ST1                            ; 0041cb74
    FLD float ptr [ESP + 0x528]         ; 0041cb76
    FMUL ST2                            ; 0041cb7d
    FLD float ptr [ESP + 0x52c]         ; 0041cb7f
    FMUL ST3                            ; 0041cb86
    LEA EDI,[ESP + 0x584]               ; 0041cb88
    LEA ESI,[ESP + 0x350]               ; 0041cb8f
    FXCH ST2                            ; 0041cb96
    FSTP float ptr [ESP + 0x350]        ; 0041cb98
    FSTP float ptr [ESP + 0x354]        ; 0041cb9f
    FSTP float ptr [ESP + 0x358]        ; 0041cba6
    MOVSD ES:EDI,ESI                    ; 0041cbad
    MOVSD ES:EDI,ESI                    ; 0041cbae
    MOVSD ES:EDI,ESI                    ; 0041cbaf
    FLD float ptr [ESP + 0x1e0]         ; 0041cbb0
    FMUL float ptr [ESP + 0x58c]        ; 0041cbb7
    FLD float ptr [ESP + 0x1e4]         ; 0041cbbe
    FMUL float ptr [ESP + 0x584]        ; 0041cbc5
    FLD float ptr [ESP + 0x1dc]         ; 0041cbcc
    FMUL float ptr [ESP + 0x588]        ; 0041cbd3
    FLD float ptr [ESP + 0x1e4]         ; 0041cbda
    FMUL float ptr [ESP + 0x588]        ; 0041cbe1
    FLD float ptr [ESP + 0x1dc]         ; 0041cbe8
    FMUL float ptr [ESP + 0x58c]        ; 0041cbef
    FLD float ptr [ESP + 0x1e0]         ; 0041cbf6
    FMUL float ptr [ESP + 0x584]        ; 0041cbfd
    LEA EAX,[EBX + 0x88]                ; 0041cc04
    LEA EDI,[ESP + 0xe0]                ; 0041cc0a
    LEA ESI,[ESP + 0x398]               ; 0041cc11
    FXCH ST2                            ; 0041cc18
    FSUBP ST5,ST0                       ; 0041cc1a
    FSUBP ST3,ST0                       ; 0041cc1c
    FSUBP                               ; 0041cc1e
    FXCH ST2                            ; 0041cc20
    FSTP float ptr [ESP + 0x398]        ; 0041cc22
    FSTP float ptr [ESP + 0x39c]        ; 0041cc29
    FSTP float ptr [ESP + 0x3a0]        ; 0041cc30
    MOVSD ES:EDI,ESI                    ; 0041cc37
    MOVSD ES:EDI,ESI                    ; 0041cc38
    MOVSD ES:EDI,ESI                    ; 0041cc39
    FLD float ptr [EAX]                 ; 0041cc3a
    FADD float ptr [ESP + 0xe0]         ; 0041cc3c
    FLD float ptr [EAX + 0x4]           ; 0041cc43
    FXCH                                ; 0041cc46
    FSTP float ptr [EAX]                ; 0041cc48
    FADD float ptr [ESP + 0xe4]         ; 0041cc4a
    FLD float ptr [EAX + 0x8]           ; 0041cc51
    FXCH                                ; 0041cc54
    FSTP float ptr [EAX + 0x4]          ; 0041cc56
    FADD float ptr [ESP + 0xe8]         ; 0041cc59
    FSTP float ptr [EAX + 0x8]          ; 0041cc60
    FLD float ptr [ESP + 0x524]         ; 0041cc63
    FMUL ST1                            ; 0041cc6a
    FLD float ptr [ESP + 0x528]         ; 0041cc6c
    FMUL ST2                            ; 0041cc73
    FLD float ptr [ESP + 0x52c]         ; 0041cc75
    FMULP ST3                           ; 0041cc7c
    LEA EDI,[ESP + 0x2f0]               ; 0041cc7e
    LEA ESI,[ESP + 0x404]               ; 0041cc85
    FXCH                                ; 0041cc8c
    FSTP float ptr [ESP + 0x404]        ; 0041cc8e
    FSTP float ptr [ESP + 0x408]        ; 0041cc95
    FSTP float ptr [ESP + 0x40c]        ; 0041cc9c
    MOVSD ES:EDI,ESI                    ; 0041cca3
    MOVSD ES:EDI,ESI                    ; 0041cca4
    MOVSD ES:EDI,ESI                    ; 0041cca5
    FLD float ptr [ESP + 0x1f8]         ; 0041cca6
    FMUL float ptr [ESP + 0x2f8]        ; 0041ccad
    FLD float ptr [ESP + 0x1fc]         ; 0041ccb4
    FMUL float ptr [ESP + 0x2f0]        ; 0041ccbb
    FLD float ptr [ESP + 0x1f4]         ; 0041ccc2
    FMUL float ptr [ESP + 0x2f4]        ; 0041ccc9
    FLD float ptr [ESP + 0x1fc]         ; 0041ccd0
    FMUL float ptr [ESP + 0x2f4]        ; 0041ccd7
    FLD float ptr [ESP + 0x1f4]         ; 0041ccde
    FMUL float ptr [ESP + 0x2f8]        ; 0041cce5
    FLD float ptr [ESP + 0x1f8]         ; 0041ccec
    FMUL float ptr [ESP + 0x2f0]        ; 0041ccf3
    LEA EDI,[ESP + 0x314]               ; 0041ccfa
    LEA ESI,[ESP + 0x434]               ; 0041cd01
    FXCH ST2                            ; 0041cd08
    FSUBP ST5,ST0                       ; 0041cd0a
    FSUBP ST3,ST0                       ; 0041cd0c
    FSUBP                               ; 0041cd0e
    FXCH ST2                            ; 0041cd10
    FSTP float ptr [ESP + 0x434]        ; 0041cd12
    FSTP float ptr [ESP + 0x438]        ; 0041cd19
    FSTP float ptr [ESP + 0x43c]        ; 0041cd20
    MOVSD ES:EDI,ESI                    ; 0041cd27
    MOVSD ES:EDI,ESI                    ; 0041cd28
    MOVSD ES:EDI,ESI                    ; 0041cd29
    FLD float ptr [EAX]                 ; 0041cd2a
    FADD float ptr [ESP + 0x314]        ; 0041cd2c
    FLD float ptr [EAX + 0x4]           ; 0041cd33
    FXCH                                ; 0041cd36
    FSTP float ptr [EAX]                ; 0041cd38
    FADD float ptr [ESP + 0x318]        ; 0041cd3a
    FLD float ptr [EAX + 0x8]           ; 0041cd41
    FXCH                                ; 0041cd44
    FSTP float ptr [EAX + 0x4]          ; 0041cd46
    FADD float ptr [ESP + 0x31c]        ; 0041cd49
    FSTP float ptr [EAX + 0x8]          ; 0041cd50
    MOV ECX,dword ptr [ESP + 0x63c]     ; 0041cd53
        ;   Label: LAB_0041cd53
    CMP ECX,0x3                         ; 0041cd5a
    JL 0x0041d1ee                       ; 0041cd5d
        ;   XREF to: 0041d1ee (CONDITIONAL_JUMP)  ; LAB_0041d1ee
    LEA EAX,[EBX + 0xb4]                ; 0041cd63
    XOR ESI,ESI                         ; 0041cd69
    XOR EDX,EDX                         ; 0041cd6b
    MOV dword ptr [ESP + 0x688],ESI     ; 0041cd6d
    MOV dword ptr [ESP + 0x660],EAX     ; 0041cd74
    LEA EAX,[ECX*0x4 + 0x0]             ; 0041cd7b
    MOV dword ptr [ESP + 0x640],ESI     ; 0041cd82
    MOV dword ptr [ESP + 0x678],EAX     ; 0041cd89
    TEST EAX,EAX                        ; 0041cd90
    JLE 0x0041cf06                      ; 0041cd92
        ;   XREF to: 0041cf06 (CONDITIONAL_JUMP)  ; LAB_0041cf06
    MOV EAX,dword ptr [ESP + EDX*0x1 + 0x6c] ; 0041cd98
        ;   Label: LAB_0041cd98
    MOV dword ptr [ESP + 0x67c],EAX     ; 0041cd9c
    IMUL EAX,EAX,0x34                   ; 0041cda3
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041cda6
    MOV EAX,dword ptr [ESP + 0x660]     ; 0041cdad
    ADD EAX,dword ptr [ESP + 0x68c]     ; 0041cdb4
    LEA ECX,[EAX + 0xc]                 ; 0041cdbb
    FLD float ptr [ECX]                 ; 0041cdbe
    FSUB float ptr [EAX + 0x18]         ; 0041cdc0
    FSTP float ptr [ESP + 0xec]         ; 0041cdc3
    FLD float ptr [ECX + 0x4]           ; 0041cdca
    FSUB float ptr [EAX + 0x1c]         ; 0041cdcd
    LEA EDI,[ESP + 0x200]               ; 0041cdd0
    FSTP float ptr [ESP + 0xf0]         ; 0041cdd7
    FLD float ptr [ECX + 0x8]           ; 0041cdde
    FSUB float ptr [EAX + 0x20]         ; 0041cde1
    LEA ESI,[ESP + 0xec]                ; 0041cde4
    FSTP float ptr [ESP + 0xf4]         ; 0041cdeb
    MOV EAX,dword ptr [ESP + 0x68c]     ; 0041cdf2
    MOVSD ES:EDI,ESI                    ; 0041cdf9
    MOVSD ES:EDI,ESI                    ; 0041cdfa
    MOVSD ES:EDI,ESI                    ; 0041cdfb
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 0041cdfc
    FLD1                                ; 0041ce03
    FSUBRP                              ; 0041ce05
    FMUL double ptr [0x005b73c1]        ; 0041ce07 | DAT_005b73c1
    FLD float ptr [ESP + 0x200]         ; 0041ce0d
    FXCH                                ; 0041ce14
    FSTP float ptr [ESP + 0x64c]        ; 0041ce16
    FMUL float ptr [ESP + 0x64c]        ; 0041ce1d
    FLD float ptr [ESP + 0x204]         ; 0041ce24
    FMUL float ptr [ESP + 0x64c]        ; 0041ce2b
    FLD float ptr [ESP + 0x208]         ; 0041ce32
    FMUL float ptr [ESP + 0x64c]        ; 0041ce39
    LEA EDI,[ESP + 0xc8]                ; 0041ce40
    LEA ESI,[ESP + 0x590]               ; 0041ce47
    FXCH ST2                            ; 0041ce4e
    FSTP float ptr [ESP + 0x590]        ; 0041ce50
    FSTP float ptr [ESP + 0x594]        ; 0041ce57
    FSTP float ptr [ESP + 0x598]        ; 0041ce5e
    MOVSD ES:EDI,ESI                    ; 0041ce65
    MOVSD ES:EDI,ESI                    ; 0041ce66
    MOVSD ES:EDI,ESI                    ; 0041ce67
    FLD float ptr [ESP + 0xcc]          ; 0041ce68
    FMUL ST0                            ; 0041ce6f
    FLD float ptr [ESP + 0xc8]          ; 0041ce71
    FMUL ST0                            ; 0041ce78
    FADDP                               ; 0041ce7a
    FLD float ptr [ESP + 0xd0]          ; 0041ce7c
    FMUL ST0                            ; 0041ce83
    FADDP                               ; 0041ce85
    FSQRT                               ; 0041ce87
    FST float ptr [ESP + 0x650]         ; 0041ce89
    FCOMP float ptr [ESP + 0x640]       ; 0041ce90
    FNSTSW AX                           ; 0041ce97
    SAHF                                ; 0041ce99
    JBE 0x0041cef4                      ; 0041ce9a
        ;   XREF to: 0041cef4 (CONDITIONAL_JUMP)  ; LAB_0041cef4
    MOV EAX,dword ptr [ESP + 0x67c]     ; 0041ce9c
    MOV dword ptr [ESP + 0x688],EAX     ; 0041cea3
    MOV EAX,dword ptr [ESP + 0x650]     ; 0041ceaa
    LEA ECX,[ESP + 0x4ac]               ; 0041ceb1
    MOV dword ptr [ESP + 0x640],EAX     ; 0041ceb8
    LEA EAX,[ESP + 0xc8]                ; 0041cebf
    CMP ECX,EAX                         ; 0041cec6
    JZ 0x0041cef4                       ; 0041cec8
        ;   XREF to: 0041cef4 (CONDITIONAL_JUMP)  ; LAB_0041cef4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0041ceca
    MOV dword ptr [ESP + 0x4ac],EAX     ; 0041ced1
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0041ced8
    MOV dword ptr [ESP + 0x4b0],EAX     ; 0041cedf
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0041cee6
    MOV dword ptr [ESP + 0x4b4],EAX     ; 0041ceed
    MOV ECX,dword ptr [ESP + 0x678]     ; 0041cef4
        ;   Label: LAB_0041cef4
    ADD EDX,0x4                         ; 0041cefb
    CMP EDX,ECX                         ; 0041cefe
    JL 0x0041cd98                       ; 0041cf00
        ;   XREF to: 0041cd98 (CONDITIONAL_JUMP)  ; LAB_0041cd98
    FLD float ptr [EBX]                 ; 0041cf06
        ;   Label: LAB_0041cf06
    FLD float ptr [EBX + 0x4]           ; 0041cf08
    MOV EDX,dword ptr [ESP + 0x688]     ; 0041cf0b
    FLD float ptr [EBX + 0x8]           ; 0041cf12
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041cf15
    MOV ESI,dword ptr [ESP + 0x660]     ; 0041cf1c
    SUB EAX,EDX                         ; 0041cf23
    LEA EDI,[ESP + 0x3b0]               ; 0041cf25
    SHL EAX,0x2                         ; 0041cf2c
    FXCH ST2                            ; 0041cf2f
    FADD float ptr [ESP + 0x4ac]        ; 0041cf31
    ADD EAX,EDX                         ; 0041cf38
    FSTP float ptr [EBX]                ; 0041cf3a
    SHL EAX,0x2                         ; 0041cf3c
    FADD float ptr [ESP + 0x4b0]        ; 0041cf3f
    ADD EAX,ESI                         ; 0041cf46
    FSTP float ptr [EBX + 0x4]          ; 0041cf48
    ADD EAX,0x28                        ; 0041cf4b
    FADD float ptr [ESP + 0x4b4]        ; 0041cf4e
    PUSH EAX                            ; 0041cf55
    LEA EAX,[EBX + 0x18]                ; 0041cf56
    LEA ESI,[ESP + 0x510]               ; 0041cf59
    PUSH EAX                            ; 0041cf60
    FSTP float ptr [EBX + 0x8]          ; 0041cf61
    CALL FUN_0045b870                   ; 0041cf64
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x514]               ; 0041cf69
    ADD ESP,0x8                         ; 0041cf70
    MOVSD ES:EDI,ESI                    ; 0041cf73
    MOVSD ES:EDI,ESI                    ; 0041cf74
    MOVSD ES:EDI,ESI                    ; 0041cf75
    LEA EAX,[EBX + 0x4c]                ; 0041cf76
    FLD float ptr [ESP + 0x3b4]         ; 0041cf79
    FMUL float ptr [EAX + 0x4]          ; 0041cf80
    FLD float ptr [ESP + 0x3b0]         ; 0041cf83
    FMUL float ptr [EAX]                ; 0041cf8a
    FADDP                               ; 0041cf8c
    FLD float ptr [ESP + 0x3b8]         ; 0041cf8e
    FMUL float ptr [EAX + 0x8]          ; 0041cf95
    FADDP                               ; 0041cf98
    FMUL float ptr [0x005b73b1]         ; 0041cf9a | DAT_005b73b1
    FLD float ptr [ESP + 0x3b0]         ; 0041cfa0
    FXCH                                ; 0041cfa7
    FSTP float ptr [ESP + 0x644]        ; 0041cfa9
    FMUL float ptr [ESP + 0x644]        ; 0041cfb0
    FLD float ptr [ESP + 0x3b4]         ; 0041cfb7
    FMUL float ptr [ESP + 0x644]        ; 0041cfbe
    FLD float ptr [ESP + 0x3b8]         ; 0041cfc5
    FMUL float ptr [ESP + 0x644]        ; 0041cfcc
    LEA EDI,[ESP + 0x260]               ; 0041cfd3
    LEA ESI,[ESP + 0x278]               ; 0041cfda
    FXCH ST2                            ; 0041cfe1
    FSTP float ptr [ESP + 0x278]        ; 0041cfe3
    FSTP float ptr [ESP + 0x27c]        ; 0041cfea
    FSTP float ptr [ESP + 0x280]        ; 0041cff1
    MOVSD ES:EDI,ESI                    ; 0041cff8
    MOVSD ES:EDI,ESI                    ; 0041cff9
    MOVSD ES:EDI,ESI                    ; 0041cffa
    LEA EDX,[ESP + 0x59c]               ; 0041cffb
    FLD float ptr [ESP + 0x264]         ; 0041d002
    FLD float ptr [ESP + 0x260]         ; 0041d009
    FSUB float ptr [EAX]                ; 0041d010
    FLD float ptr [ESP + 0x268]         ; 0041d012
    FXCH                                ; 0041d019
    FSTP float ptr [ESP + 0x290]        ; 0041d01b
    FXCH                                ; 0041d022
    FSUB float ptr [EAX + 0x4]          ; 0041d024
    LEA EDI,[ESP + 0x59c]               ; 0041d027
    FSTP float ptr [ESP + 0x294]        ; 0041d02e
    FSUB float ptr [EAX + 0x8]          ; 0041d035
    LEA ESI,[ESP + 0x290]               ; 0041d038
    FSTP float ptr [ESP + 0x298]        ; 0041d03f
    LEA EAX,[ESP + 0x500]               ; 0041d046
    MOVSD ES:EDI,ESI                    ; 0041d04d
    MOVSD ES:EDI,ESI                    ; 0041d04e
    MOVSD ES:EDI,ESI                    ; 0041d04f
    CMP EAX,EDX                         ; 0041d050
    JZ 0x0041d07e                       ; 0041d052
        ;   XREF to: 0041d07e (CONDITIONAL_JUMP)  ; LAB_0041d07e
    MOV EAX,dword ptr [ESP + 0x59c]     ; 0041d054
    MOV dword ptr [ESP + 0x500],EAX     ; 0041d05b
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 0041d062
    MOV dword ptr [ESP + 0x504],EAX     ; 0041d069
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 0041d070
    MOV dword ptr [ESP + 0x508],EAX     ; 0041d077
    FLD float ptr [0x005b73b5]          ; 0041d07e | DAT_005b73b5
        ;   Label: LAB_0041d07e
    FLD float ptr [ESP + 0x500]         ; 0041d084
    FMUL ST1                            ; 0041d08b
    FLD float ptr [ESP + 0x504]         ; 0041d08d
    FMUL ST2                            ; 0041d094
    FLD float ptr [ESP + 0x508]         ; 0041d096
    FMULP ST3                           ; 0041d09d
    FXCH                                ; 0041d09f
    FLD float ptr [0x005b73cd]          ; 0041d0a1 | DAT_005b73cd
    FXCH                                ; 0041d0a7
    FMUL ST1                            ; 0041d0a9
    FXCH ST2                            ; 0041d0ab
    FMUL ST1                            ; 0041d0ad
    FLD1                                ; 0041d0af
    FXCH ST4                            ; 0041d0b1
    FMULP ST2                           ; 0041d0b3
    FXCH ST3                            ; 0041d0b5
    FDIV float ptr [EBP + 0x18]         ; 0041d0b7
    LEA EDI,[ESP + 0x470]               ; 0041d0ba
    LEA EDX,[EBX + 0x4c]                ; 0041d0c1
    FXCH ST2                            ; 0041d0c4
    FSTP float ptr [ESP + 0x500]        ; 0041d0c6
    FXCH ST2                            ; 0041d0cd
    FSTP float ptr [ESP + 0x504]        ; 0041d0cf
    FXCH                                ; 0041d0d6
    FSTP float ptr [ESP + 0x508]        ; 0041d0d8
    FLD float ptr [ESP + 0x500]         ; 0041d0df
    FSUB float ptr [EDX]                ; 0041d0e6
    FLD float ptr [ESP + 0x504]         ; 0041d0e8
    FXCH                                ; 0041d0ef
    FSTP float ptr [ESP + 0x458]        ; 0041d0f1
    FSUB float ptr [EDX + 0x4]          ; 0041d0f8
    FLD float ptr [ESP + 0x508]         ; 0041d0fb
    FXCH                                ; 0041d102
    FSTP float ptr [ESP + 0x45c]        ; 0041d104
    FSUB float ptr [EDX + 0x8]          ; 0041d10b
    LEA ESI,[ESP + 0x458]               ; 0041d10e
    FSTP float ptr [ESP + 0x460]        ; 0041d115
    MOVSD ES:EDI,ESI                    ; 0041d11c
    MOVSD ES:EDI,ESI                    ; 0041d11d
    MOVSD ES:EDI,ESI                    ; 0041d11e
    LEA EAX,[EBX + 0x94]                ; 0041d11f
    FLD float ptr [ESP + 0x470]         ; 0041d125
    FMUL float ptr [EAX]                ; 0041d12c
    FLD float ptr [ESP + 0x474]         ; 0041d12e
    FXCH                                ; 0041d135
    FSTP float ptr [ESP + 0x308]        ; 0041d137
    FMUL float ptr [EAX]                ; 0041d13e
    FLD float ptr [ESP + 0x478]         ; 0041d140
    FXCH                                ; 0041d147
    FSTP float ptr [ESP + 0x30c]        ; 0041d149
    FMUL float ptr [EAX]                ; 0041d150
    LEA EDI,[ESP + 0x5c0]               ; 0041d152
    LEA ESI,[ESP + 0x308]               ; 0041d159
    FSTP float ptr [ESP + 0x310]        ; 0041d160
    MOVSD ES:EDI,ESI                    ; 0041d167
    MOVSD ES:EDI,ESI                    ; 0041d168
    MOVSD ES:EDI,ESI                    ; 0041d169
    FLD float ptr [ESP + 0x5c0]         ; 0041d16a
    FMUL ST1                            ; 0041d171
    FLD float ptr [ESP + 0x5c4]         ; 0041d173
    FMUL ST2                            ; 0041d17a
    FLD float ptr [ESP + 0x5c8]         ; 0041d17c
    FMULP ST3                           ; 0041d183
    LEA EAX,[EBX + 0x64]                ; 0041d185
    LEA EDI,[ESP + 0x2c0]               ; 0041d188
    LEA ESI,[ESP + 0x32c]               ; 0041d18f
    FXCH                                ; 0041d196
    FSTP float ptr [ESP + 0x32c]        ; 0041d198
    FSTP float ptr [ESP + 0x330]        ; 0041d19f
    FSTP float ptr [ESP + 0x334]        ; 0041d1a6
    MOVSD ES:EDI,ESI                    ; 0041d1ad
    MOVSD ES:EDI,ESI                    ; 0041d1ae
    MOVSD ES:EDI,ESI                    ; 0041d1af
    FLD float ptr [EAX]                 ; 0041d1b0
    FADD float ptr [ESP + 0x2c0]        ; 0041d1b2
    FLD float ptr [EAX + 0x4]           ; 0041d1b9
    FXCH                                ; 0041d1bc
    FSTP float ptr [EAX]                ; 0041d1be
    FADD float ptr [ESP + 0x2c4]        ; 0041d1c0
    FLD float ptr [EAX + 0x8]           ; 0041d1c7
    FXCH                                ; 0041d1ca
    FSTP float ptr [EAX + 0x4]          ; 0041d1cc
    FADD float ptr [ESP + 0x2c8]        ; 0041d1cf
    FSTP float ptr [EAX + 0x8]          ; 0041d1d6
    LEA EAX,[EBX + 0x70]                ; 0041d1d9
    MOV dword ptr [EAX + 0x8],0x0       ; 0041d1dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d1e3
    MOV dword ptr [EAX + 0x4],EDX       ; 0041d1e6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d1e9
    MOV dword ptr [EAX],EDX             ; 0041d1ec
    CMP dword ptr [ESP + 0x63c],0x0     ; 0041d1ee
        ;   Label: LAB_0041d1ee
    JLE 0x0041d26b                      ; 0041d1f6
        ;   XREF to: 0041d26b (CONDITIONAL_JUMP)  ; LAB_0041d26b
    LEA EAX,[EBX + 0x4c]                ; 0041d1fc
    FLD float ptr [EAX + 0x4]           ; 0041d1ff
    FMUL ST0                            ; 0041d202
    FLD float ptr [EAX]                 ; 0041d204
    FMUL ST0                            ; 0041d206
    FADDP                               ; 0041d208
    FLD float ptr [EAX + 0x8]           ; 0041d20a
    FMUL ST0                            ; 0041d20d
    FADDP                               ; 0041d20f
    FSQRT                               ; 0041d211
    FLD1                                ; 0041d213
    FCOMPP                              ; 0041d215
    FNSTSW AX                           ; 0041d217
    SAHF                                ; 0041d219
    JBE 0x0041d26b                      ; 0041d21a
        ;   XREF to: 0041d26b (CONDITIONAL_JUMP)  ; LAB_0041d26b
    MOV EDI,dword ptr [EBX + 0xb0]      ; 0041d21c
    XOR EDX,EDX                         ; 0041d222
    XOR ESI,ESI                         ; 0041d224
    TEST EDI,EDI                        ; 0041d226
    JLE 0x0041d254                      ; 0041d228
        ;   XREF to: 0041d254 (CONDITIONAL_JUMP)  ; LAB_0041d254
    MOV ECX,EBX                         ; 0041d22a
    FLD float ptr [ECX + 0xc4]          ; 0041d22c
        ;   Label: LAB_0041d22c
    FSUB float ptr [EBX + 0x258]        ; 0041d232
    FABS                                ; 0041d238
    FCOMP double ptr [0x005b73e1]       ; 0041d23a | DAT_005b73e1
    FNSTSW AX                           ; 0041d240
    SAHF                                ; 0041d242
    JNC 0x0041d246                      ; 0041d243
        ;   XREF to: 0041d246 (CONDITIONAL_JUMP)  ; LAB_0041d246
    INC ESI                             ; 0041d245
    INC EDX                             ; 0041d246
        ;   Label: LAB_0041d246
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041d247
    ADD ECX,0x34                        ; 0041d24d
    CMP EDX,EAX                         ; 0041d250
    JL 0x0041d22c                       ; 0041d252
        ;   XREF to: 0041d22c (CONDITIONAL_JUMP)  ; LAB_0041d22c
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041d254
        ;   Label: LAB_0041d254
    MOV EDX,EAX                         ; 0041d25a
    SAR EDX,0x1f                        ; 0041d25c
    SUB EAX,EDX                         ; 0041d25f
    SAR EAX,0x1                         ; 0041d261
    CMP ESI,EAX                         ; 0041d263
    JGE 0x0041d46a                      ; 0041d265
        ;   XREF to: 0041d46a (CONDITIONAL_JUMP)  ; LAB_0041d46a
    MOV ESP,EBP                         ; 0041d26b
        ;   Label: LAB_0041d26b
    POP EBP                             ; 0041d26d
    POP EDI                             ; 0041d26e
    POP ESI                             ; 0041d26f
    POP EBX                             ; 0041d270
    RET                                 ; 0041d271
    MOV EAX,dword ptr [EBX]             ; 0041d272
        ;   Label: LAB_0041d272
    MOV dword ptr [ESP + 0x170],EAX     ; 0041d274
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041d27b
    MOV dword ptr [ESP + 0x174],EAX     ; 0041d27e
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041d285
    MOV dword ptr [ESP + 0x178],EAX     ; 0041d288
    JMP 0x0041b49e                      ; 0041d28f
        ;   XREF to: 0041b49e (UNCONDITIONAL_JUMP)  ; LAB_0041b49e
    MOV dword ptr [EBX + 0x258],0xc61c3c00 ; 0041d294
        ;   Label: LAB_0041d294
    JMP 0x0041b56c                      ; 0041d29e
        ;   XREF to: 0041b56c (UNCONDITIONAL_JUMP)  ; LAB_0041b56c
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0041d2a3
        ;   Label: LAB_0041d2a3
    FLD float ptr [EAX]                 ; 0041d2aa
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041d2ac
    FSUB float ptr [EAX]                ; 0041d2b3
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0041d2b5
    FSTP float ptr [ESP + 0x338]        ; 0041d2bc
    FLD float ptr [EAX + 0x4]           ; 0041d2c3
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041d2c6
    FSUB float ptr [EAX + 0x4]          ; 0041d2cd
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0041d2d0
    FSTP float ptr [ESP + 0x33c]        ; 0041d2d7
    FLD float ptr [EAX + 0x8]           ; 0041d2de
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041d2e1
    LEA EDI,[ESP + 0x47c]               ; 0041d2e8
    FSUB float ptr [EAX + 0x8]          ; 0041d2ef
    LEA ESI,[ESP + 0x338]               ; 0041d2f2
    FSTP float ptr [ESP + 0x340]        ; 0041d2f9
    MOVSD ES:EDI,ESI                    ; 0041d300
    MOVSD ES:EDI,ESI                    ; 0041d301
    MOVSD ES:EDI,ESI                    ; 0041d302
    FLD float ptr [ESP + 0x480]         ; 0041d303
    FMUL ST0                            ; 0041d30a
    FLD float ptr [ESP + 0x47c]         ; 0041d30c
    FMUL ST0                            ; 0041d313
    FADDP                               ; 0041d315
    FLD float ptr [ESP + 0x484]         ; 0041d317
    FMUL ST0                            ; 0041d31e
    FADDP                               ; 0041d320
    FSQRT                               ; 0041d322
    FCOMP double ptr [0x005b73d1]       ; 0041d324 | DAT_005b73d1
    FNSTSW AX                           ; 0041d32a
    SAHF                                ; 0041d32c
    JBE 0x0041bcef                      ; 0041d32d
        ;   XREF to: 0041bcef (CONDITIONAL_JUMP)  ; LAB_0041bcef
    MOV EAX,dword ptr [ESP + 0x674]     ; 0041d333
    PUSH 0x0                            ; 0041d33a
    ADD EAX,0x28                        ; 0041d33c
    PUSH EAX                            ; 0041d33f
    MOV EDX,dword ptr [ESP + 0x674]     ; 0041d340
    PUSH EDX                            ; 0041d347
    MOV ECX,dword ptr [ESP + 0x674]     ; 0041d348
    PUSH ECX                            ; 0041d34f
    PUSH 0x203b37c                      ; 0041d350 | DAT_0203b37c
    CALL FUN_00473cd0                   ; 0041d355
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cd0()
    MOV dword ptr [ESP + 0x6a0],EAX     ; 0041d35a
    FLD float ptr [ESP + 0x6a0]         ; 0041d361
    ADD ESP,0x14                        ; 0041d368
    MOV EAX,dword ptr [ESP + 0x670]     ; 0041d36b
    FSTP float ptr [EAX + 0xd8]         ; 0041d372
    MOV EAX,dword ptr [EAX + 0xd8]      ; 0041d378
    MOV dword ptr [ESP + 0x14],EAX      ; 0041d37e
    FLDZ                                ; 0041d382
    FLD float ptr [ESP + 0x14]          ; 0041d384
    FSTP double ptr [ESP]               ; 0041d388
    FCOMP double ptr [ESP]              ; 0041d38b
    FNSTSW AX                           ; 0041d38e
    SAHF                                ; 0041d390
    JNC 0x0041bcef                      ; 0041d391
        ;   XREF to: 0041bcef (CONDITIONAL_JUMP)  ; LAB_0041bcef
    FLD1                                ; 0041d397
    FCOMP double ptr [ESP]              ; 0041d399
    FNSTSW AX                           ; 0041d39c
    SAHF                                ; 0041d39e
    JBE 0x0041bcef                      ; 0041d39f
        ;   XREF to: 0041bcef (CONDITIONAL_JUMP)  ; LAB_0041bcef
    MOV EAX,dword ptr [ESP + 0x63c]     ; 0041d3a5
    MOV EDX,dword ptr [ESP + 0x680]     ; 0041d3ac
    LEA ESI,[EAX + 0x1]                 ; 0041d3b3
    MOV dword ptr [ESP + EAX*0x4 + 0x6c],EDX ; 0041d3b6
    MOV dword ptr [ESP + 0x63c],ESI     ; 0041d3ba
    JMP 0x0041bcef                      ; 0041d3c1
        ;   XREF to: 0041bcef (UNCONDITIONAL_JUMP)  ; LAB_0041bcef
    MOV ECX,dword ptr [ESP + 0x690]     ; 0041d3c6
        ;   Label: LAB_0041d3c6
    FLD float ptr [EBX]                 ; 0041d3cd
    LEA EAX,[ECX*0x4 + 0x0]             ; 0041d3cf
    FLD float ptr [EBX + 0x4]           ; 0041d3d6
    SUB EAX,ECX                         ; 0041d3d9
    FLD float ptr [EBX + 0x8]           ; 0041d3db
    SHL EAX,0x2                         ; 0041d3de
    LEA EDI,[ESP + 0x98]                ; 0041d3e1
    ADD EAX,ECX                         ; 0041d3e8
    FXCH ST2                            ; 0041d3ea
    FADD float ptr [ESP + 0x3bc]        ; 0041d3ec
    SHL EAX,0x2                         ; 0041d3f3
    FSTP float ptr [EBX]                ; 0041d3f6
    ADD EAX,EDX                         ; 0041d3f8
    FADD float ptr [ESP + 0x3c0]        ; 0041d3fa
    ADD EAX,0x28                        ; 0041d401
    FSTP float ptr [EBX + 0x4]          ; 0041d404
    PUSH EAX                            ; 0041d407
    FADD float ptr [ESP + 0x3c8]        ; 0041d408
    PUSH ESI                            ; 0041d40f
    LEA ESI,[ESP + 0x328]               ; 0041d410
    FSTP float ptr [EBX + 0x8]          ; 0041d417
    CALL FUN_0045b870                   ; 0041d41a
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x328]               ; 0041d41f
    LEA EAX,[ESP + 0xa0]                ; 0041d426
    ADD ESP,0x8                         ; 0041d42d
    LEA EDX,[ESP + 0x530]               ; 0041d430
    MOVSD ES:EDI,ESI                    ; 0041d437
    MOVSD ES:EDI,ESI                    ; 0041d438
    MOVSD ES:EDI,ESI                    ; 0041d439
    CMP EDX,EAX                         ; 0041d43a
    JZ 0x0041c622                       ; 0041d43c
        ;   XREF to: 0041c622 (CONDITIONAL_JUMP)  ; LAB_0041c622
    MOV EAX,dword ptr [ESP + 0x98]      ; 0041d442
    MOV dword ptr [ESP + 0x530],EAX     ; 0041d449
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0041d450
    MOV dword ptr [ESP + 0x534],EAX     ; 0041d457
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0041d45e
    JMP 0x0041c61b                      ; 0041d465
        ;   XREF to: 0041c61b (UNCONDITIONAL_JUMP)  ; LAB_0041c61b
    MOV dword ptr [EBX + 0x254],0x0     ; 0041d46a
        ;   Label: LAB_0041d46a
    MOV ESP,EBP                         ; 0041d474
    POP EBP                             ; 0041d476
    POP EDI                             ; 0041d477
    POP ESI                             ; 0041d478
    POP EBX                             ; 0041d479
    RET                                 ; 0041d47a

