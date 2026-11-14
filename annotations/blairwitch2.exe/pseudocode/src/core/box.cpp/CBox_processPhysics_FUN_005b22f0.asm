; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_processPhysics_FUN_005b22f0(CBox *this_ptr,float delta_time)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
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
;   core_box.cpp_CBox_process_FUN_005b2290 at 005b22de
;   core_fire.cpp_CStake_process_FUN_00494580 at 00494599
;
; Referenced Globals:
;   undefined4 DAT_005f12e8
;   undefined4 DAT_005f12f0
;   undefined4 DAT_005f12f8
;   undefined4 DAT_005f1300
;   undefined4 DAT_005f1308
;   undefined4 DAT_005f130c
;   undefined4 DAT_005f1310
;   undefined4 DAT_005f1314
;   undefined4 DAT_005f1318
;   undefined4 DAT_005f1320
;   undefined4 DAT_005f1324
;   undefined4 DAT_005f1328
;   undefined4 DAT_005f1330
;   undefined4 DAT_005f1338
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   core_dirmat.cpp_FUN_004496e0
;   core_dtrace.cpp_FUN_00472c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b22f0
        ;   Label: core_box.cpp_CBox_processPhysics_FUN_005b22f0
    PUSH ESI                            ; 005b22f1
    PUSH EDI                            ; 005b22f2
    PUSH EBP                            ; 005b22f3
    MOV EBP,ESP                         ; 005b22f4
    SUB ESP,0x6a8                       ; 005b22f6
    AND ESP,0xfffffff8                  ; 005b22fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b22ff
    CMP dword ptr [EBX + 0x254],0x0     ; 005b2302
    JZ 0x005b40eb                       ; 005b2309
        ;   XREF to: 005b40eb (CONDITIONAL_JUMP)  ; LAB_005b40eb
    LEA EAX,[ESP + 0x170]               ; 005b230f
    CMP EAX,EBX                         ; 005b2316
    JNZ 0x005b40f2                      ; 005b2318
        ;   XREF to: 005b40f2 (CONDITIONAL_JUMP)  ; LAB_005b40f2
    LEA EAX,[ESP + 0x3e0]               ; 005b231e
        ;   Label: LAB_005b231e
    CMP EAX,EBX                         ; 005b2325
    JZ 0x005b2346                       ; 005b2327
        ;   XREF to: 005b2346 (CONDITIONAL_JUMP)  ; LAB_005b2346
    MOV EAX,dword ptr [EBX]             ; 005b2329
    MOV dword ptr [ESP + 0x3e0],EAX     ; 005b232b
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b2332
    MOV dword ptr [ESP + 0x3e4],EAX     ; 005b2335
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b233c
    MOV dword ptr [ESP + 0x3e8],EAX     ; 005b233f
    FLD1                                ; 005b2346
        ;   Label: LAB_005b2346
    PUSH 0x0                            ; 005b2348
    LEA EAX,[ESP + 0x144]               ; 005b234a
    FLD float ptr [ESP + 0x3e8]         ; 005b2351
    PUSH EAX                            ; 005b2358
    LEA EAX,[ESP + 0x3e8]               ; 005b2359
    FXCH                                ; 005b2360
    FADD float ptr [ESP + 0x17c]        ; 005b2362
    PUSH EAX                            ; 005b2369
    LEA EAX,[ESP + 0x17c]               ; 005b236a
    FXCH                                ; 005b2371
    FADD float ptr [0x005f12e8]         ; 005b2373 | DAT_005f12e8
    PUSH EAX                            ; 005b2379
    FXCH                                ; 005b237a
    FSTP float ptr [ESP + 0x184]        ; 005b237c
    PUSH 0x1fc9c68                      ; 005b2383 | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x3f8]        ; 005b2388
    CALL core_dtrace.cpp_FUN_00472c60   ; 005b238f
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00472c60()
    MOV dword ptr [ESP + 0x6a0],EAX     ; 005b2394
    FLD float ptr [ESP + 0x6a0]         ; 005b239b
    ADD ESP,0x14                        ; 005b23a2
    FLDZ                                ; 005b23a5
    FXCH                                ; 005b23a7
    FST float ptr [ESP + 0x10]          ; 005b23a9
    FSTP double ptr [ESP + 0x8]         ; 005b23ad
    FCOMP double ptr [ESP + 0x8]        ; 005b23b1
    FNSTSW AX                           ; 005b23b5
    SAHF                                ; 005b23b7
    JNC 0x005b4114                      ; 005b23b8
        ;   XREF to: 005b4114 (CONDITIONAL_JUMP)  ; LAB_005b4114
    FLD1                                ; 005b23be
    FCOMP double ptr [ESP + 0x8]        ; 005b23c0
    FNSTSW AX                           ; 005b23c4
    SAHF                                ; 005b23c6
    JBE 0x005b4114                      ; 005b23c7
        ;   XREF to: 005b4114 (CONDITIONAL_JUMP)  ; LAB_005b4114
    FLD float ptr [ESP + 0x3e4]         ; 005b23cd
    FSUB float ptr [ESP + 0x174]        ; 005b23d4
    FMUL float ptr [ESP + 0x10]         ; 005b23db
    FADD float ptr [ESP + 0x174]        ; 005b23df
    FSTP float ptr [EBX + 0x258]        ; 005b23e6
    LEA EAX,[EBX + 0xc0]                ; 005b23ec
        ;   Label: LAB_005b23ec
    LEA EDX,[EBX + 0xcc]                ; 005b23f2
    LEA ECX,[EBX + 0x260]               ; 005b23f8
    CMP EDX,EAX                         ; 005b23fe
        ;   Label: LAB_005b23fe
    JZ 0x005b2412                       ; 005b2400
        ;   XREF to: 005b2412 (CONDITIONAL_JUMP)  ; LAB_005b2412
    MOV ESI,dword ptr [EAX]             ; 005b2402
    MOV dword ptr [EDX],ESI             ; 005b2404
    MOV ESI,dword ptr [EAX + 0x4]       ; 005b2406
    MOV dword ptr [EDX + 0x4],ESI       ; 005b2409
    MOV ESI,dword ptr [EAX + 0x8]       ; 005b240c
    MOV dword ptr [EDX + 0x8],ESI       ; 005b240f
    ADD EAX,0x34                        ; 005b2412
        ;   Label: LAB_005b2412
    ADD EDX,0x34                        ; 005b2415
    CMP EAX,ECX                         ; 005b2418
    JNZ 0x005b23fe                      ; 005b241a
        ;   XREF to: 005b23fe (CONDITIONAL_JUMP)  ; LAB_005b23fe
    XOR ECX,ECX                         ; 005b241c
    MOV dword ptr [ESP + 0x118],ECX     ; 005b241e
    MOV dword ptr [ESP + 0x114],ECX     ; 005b2425
    MOV dword ptr [ESP + 0x110],ECX     ; 005b242c
    FLD float ptr [EBX + 0x94]          ; 005b2433
    FCHS                                ; 005b2439
    FMUL double ptr [0x005f12f0]        ; 005b243b | DAT_005f12f0
    LEA EAX,[ESP + 0x110]               ; 005b2441
    LEA ESI,[ESP + 0x41c]               ; 005b2448
    PUSH EAX                            ; 005b244f
    LEA EAX,[EBX + 0x18]                ; 005b2450
    LEA EDI,[ESP + 0x2a0]               ; 005b2453
    PUSH EAX                            ; 005b245a
    FSTP float ptr [ESP + 0x11c]        ; 005b245b
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b2462
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    FLD1                                ; 005b2467
    LEA ESI,[ESP + 0x424]               ; 005b2469
    ADD ESP,0x8                         ; 005b2470
    LEA EAX,[EBX + 0x64]                ; 005b2473
    MOVSD ES:EDI,ESI                    ; 005b2476
    MOVSD ES:EDI,ESI                    ; 005b2477
    MOVSD ES:EDI,ESI                    ; 005b2478
    LEA EDX,[EBX + 0x94]                ; 005b2479
    FLD float ptr [EAX]                 ; 005b247f
    FADD float ptr [ESP + 0x29c]        ; 005b2481
    FLD float ptr [EAX + 0x4]           ; 005b2488
    FXCH                                ; 005b248b
    FSTP float ptr [EAX]                ; 005b248d
    FADD float ptr [ESP + 0x2a0]        ; 005b248f
    FLD float ptr [EAX + 0x8]           ; 005b2496
    FXCH                                ; 005b2499
    FSTP float ptr [EAX + 0x4]          ; 005b249b
    FADD float ptr [ESP + 0x2a4]        ; 005b249e
    FLD float ptr [EAX]                 ; 005b24a5
    FXCH                                ; 005b24a7
    FSTP float ptr [EAX + 0x8]          ; 005b24a9
    FXCH                                ; 005b24ac
    FDIV float ptr [EDX]                ; 005b24ae
    FXCH                                ; 005b24b0
    FMUL ST1                            ; 005b24b2
    FSTP float ptr [ESP + 0x44c]        ; 005b24b4
    FLD float ptr [EAX + 0x4]           ; 005b24bb
    FMUL ST1                            ; 005b24be
    FSTP float ptr [ESP + 0x450]        ; 005b24c0
    FMUL float ptr [EAX + 0x8]          ; 005b24c7
    LEA EDI,[ESP + 0x14c]               ; 005b24ca
    LEA ESI,[ESP + 0x44c]               ; 005b24d1
    LEA EDX,[EBX + 0x58]                ; 005b24d8
    LEA EAX,[ESP + 0x14c]               ; 005b24db
    FSTP float ptr [ESP + 0x454]        ; 005b24e2
    MOVSD ES:EDI,ESI                    ; 005b24e9
    MOVSD ES:EDI,ESI                    ; 005b24ea
    MOVSD ES:EDI,ESI                    ; 005b24eb
    CMP EDX,EAX                         ; 005b24ec
    JZ 0x005b250d                       ; 005b24ee
        ;   XREF to: 005b250d (CONDITIONAL_JUMP)  ; LAB_005b250d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005b24f0
    MOV dword ptr [EDX],EAX             ; 005b24f7
    MOV EAX,dword ptr [ESP + 0x150]     ; 005b24f9
    MOV dword ptr [EDX + 0x4],EAX       ; 005b2500
    MOV EAX,dword ptr [ESP + 0x154]     ; 005b2503
    MOV dword ptr [EDX + 0x8],EAX       ; 005b250a
    FLD float ptr [EBX + 0x88]          ; 005b250d
        ;   Label: LAB_005b250d
    FDIV float ptr [EBX + 0x98]         ; 005b2513
    FLD float ptr [EBX + 0x8c]          ; 005b2519
    FDIV float ptr [EBX + 0x9c]         ; 005b251f
    FLD float ptr [EBX + 0x90]          ; 005b2525
    FDIV float ptr [EBX + 0xa0]         ; 005b252b
    LEA EAX,[EBX + 0x64]                ; 005b2531
    FXCH ST2                            ; 005b2534
    FSTP float ptr [EBX + 0x7c]         ; 005b2536
    FSTP float ptr [EBX + 0x80]         ; 005b2539
    FSTP float ptr [EBX + 0x84]         ; 005b253f
    MOV dword ptr [EAX + 0x8],0x0       ; 005b2545
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b254c
    MOV dword ptr [EAX + 0x4],EDX       ; 005b254f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b2552
    MOV dword ptr [EAX],EDX             ; 005b2555
    LEA EAX,[EBX + 0x88]                ; 005b2557
    MOV dword ptr [EAX + 0x8],0x0       ; 005b255d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b2564
    MOV dword ptr [EAX + 0x4],EDX       ; 005b2567
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b256a
    MOV dword ptr [EAX],EDX             ; 005b256d
    LEA EAX,[EBX + 0x58]                ; 005b256f
    PUSH EAX                            ; 005b2572
    LEA EAX,[EBX + 0x18]                ; 005b2573
    LEA ESI,[ESP + 0x5d0]               ; 005b2576
    PUSH EAX                            ; 005b257d
    LEA EDI,[ESP + 0x49c]               ; 005b257e
    MOV dword ptr [ESP + 0x694],EAX     ; 005b2585
    CALL core_dirmat.cpp_FUN_00449530   ; 005b258c
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x5d4]               ; 005b2591
    ADD ESP,0x8                         ; 005b2598
    MOVSD ES:EDI,ESI                    ; 005b259b
    MOVSD ES:EDI,ESI                    ; 005b259c
    MOVSD ES:EDI,ESI                    ; 005b259d
    FLD float ptr [EBP + 0x18]          ; 005b259e
    FLD float ptr [ESP + 0x494]         ; 005b25a1
    FMUL ST1                            ; 005b25a8
    FLD float ptr [ESP + 0x498]         ; 005b25aa
    FMUL ST2                            ; 005b25b1
    FLD float ptr [ESP + 0x49c]         ; 005b25b3
    FMULP ST3                           ; 005b25ba
    LEA EAX,[EBX + 0x40]                ; 005b25bc
    MOV EDX,dword ptr [ESP + 0x68c]     ; 005b25bf
    PUSH EAX                            ; 005b25c6
    LEA EDI,[ESP + 0x1d4]               ; 005b25c7
    LEA ESI,[ESP + 0x4e0]               ; 005b25ce
    FXCH                                ; 005b25d5
    FSTP float ptr [ESP + 0x4e0]        ; 005b25d7
    FSTP float ptr [ESP + 0x4e4]        ; 005b25de
    FSTP float ptr [ESP + 0x4e8]        ; 005b25e5
    MOVSD ES:EDI,ESI                    ; 005b25ec
    MOVSD ES:EDI,ESI                    ; 005b25ed
    MOVSD ES:EDI,ESI                    ; 005b25ee
    PUSH EDX                            ; 005b25ef
    FLD float ptr [EAX + 0x4]           ; 005b25f0
    FLD float ptr [EAX]                 ; 005b25f3
    FADD float ptr [ESP + 0x1d8]        ; 005b25f5
    FLD float ptr [EAX + 0x8]           ; 005b25fc
    FXCH                                ; 005b25ff
    FSTP float ptr [EAX]                ; 005b2601
    FXCH                                ; 005b2603
    FADD float ptr [ESP + 0x1dc]        ; 005b2605
    LEA ESI,[ESP + 0x37c]               ; 005b260c
    FSTP float ptr [EAX + 0x4]          ; 005b2613
    FADD float ptr [ESP + 0x1e0]        ; 005b2616
    LEA EDI,[ESP + 0x1f0]               ; 005b261d
    FSTP float ptr [EAX + 0x8]          ; 005b2624
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b2627
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x37c]               ; 005b262c
    LEA EAX,[ESP + 0x1f0]               ; 005b2633
    ADD ESP,0x8                         ; 005b263a
    LEA EDX,[EBX + 0x4c]                ; 005b263d
    MOVSD ES:EDI,ESI                    ; 005b2640
    MOVSD ES:EDI,ESI                    ; 005b2641
    MOVSD ES:EDI,ESI                    ; 005b2642
    CMP EDX,EAX                         ; 005b2643
    JZ 0x005b2664                       ; 005b2645
        ;   XREF to: 005b2664 (CONDITIONAL_JUMP)  ; LAB_005b2664
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005b2647
    MOV dword ptr [EDX],EAX             ; 005b264e
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005b2650
    MOV dword ptr [EDX + 0x4],EAX       ; 005b2657
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 005b265a
    MOV dword ptr [EDX + 0x8],EAX       ; 005b2661
    LEA EAX,[EBX + 0x7c]                ; 005b2664
        ;   Label: LAB_005b2664
    FLD float ptr [EBP + 0x18]          ; 005b2667
    FLD float ptr [EAX]                 ; 005b266a
    FMUL ST1                            ; 005b266c
    FSTP float ptr [ESP + 0x5e4]        ; 005b266e
    FLD float ptr [EAX + 0x4]           ; 005b2675
    FMUL ST1                            ; 005b2678
    FSTP float ptr [ESP + 0x5e8]        ; 005b267a
    FMUL float ptr [EAX + 0x8]          ; 005b2681
    LEA EDI,[ESP + 0x230]               ; 005b2684
    LEA ESI,[ESP + 0x5e4]               ; 005b268b
    LEA EDX,[EBX + 0x70]                ; 005b2692
    FSTP float ptr [ESP + 0x5ec]        ; 005b2695
    MOVSD ES:EDI,ESI                    ; 005b269c
    MOVSD ES:EDI,ESI                    ; 005b269d
    MOVSD ES:EDI,ESI                    ; 005b269e
    FLD float ptr [EDX]                 ; 005b269f
    FADD float ptr [ESP + 0x230]        ; 005b26a1
    FLD float ptr [EDX + 0x4]           ; 005b26a8
    FXCH                                ; 005b26ab
    FSTP float ptr [EDX]                ; 005b26ad
    FADD float ptr [ESP + 0x234]        ; 005b26af
    FST float ptr [EDX + 0x4]           ; 005b26b6
    FMUL float ptr [EDX + 0x4]          ; 005b26b9
    FLD float ptr [EDX]                 ; 005b26bc
    FMUL ST0                            ; 005b26be
    FLD float ptr [EDX + 0x8]           ; 005b26c0
    FADD float ptr [ESP + 0x238]        ; 005b26c3
    FXCH                                ; 005b26ca
    FADDP ST2,ST0                       ; 005b26cc
    FST float ptr [EDX + 0x8]           ; 005b26ce
    FMUL float ptr [EDX + 0x8]          ; 005b26d1
    FADDP                               ; 005b26d4
    FSQRT                               ; 005b26d6
    FST float ptr [ESP + 0x6a0]         ; 005b26d8
    FCOMP float ptr [0x005f12f8]        ; 005b26df | DAT_005f12f8
    FNSTSW AX                           ; 005b26e5
    SAHF                                ; 005b26e7
    JBE 0x005b2727                      ; 005b26e8
        ;   XREF to: 005b2727 (CONDITIONAL_JUMP)  ; LAB_005b2727
    FLD float ptr [0x005f12f8]          ; 005b26ea | DAT_005f12f8
    FDIV float ptr [ESP + 0x6a0]        ; 005b26f0
    FLD float ptr [EDX]                 ; 005b26f7
    FXCH                                ; 005b26f9
    FSTP float ptr [ESP + 0x61c]        ; 005b26fb
    FMUL float ptr [ESP + 0x61c]        ; 005b2702
    FLD float ptr [EDX + 0x4]           ; 005b2709
    FMUL float ptr [ESP + 0x61c]        ; 005b270c
    FLD float ptr [EDX + 0x8]           ; 005b2713
    FMUL float ptr [ESP + 0x61c]        ; 005b2716
    FXCH ST2                            ; 005b271d
    FSTP float ptr [EDX]                ; 005b271f
    FSTP float ptr [EDX + 0x4]          ; 005b2721
    FSTP float ptr [EDX + 0x8]          ; 005b2724
    LEA EAX,[EBX + 0x40]                ; 005b2727
        ;   Label: LAB_005b2727
    FLD float ptr [EBP + 0x18]          ; 005b272a
    FLD float ptr [EAX]                 ; 005b272d
    FMUL ST1                            ; 005b272f
    FSTP float ptr [ESP + 0x5a8]        ; 005b2731
    FLD float ptr [EAX + 0x4]           ; 005b2738
    FMUL ST1                            ; 005b273b
    FSTP float ptr [ESP + 0x5ac]        ; 005b273d
    FLD float ptr [EAX + 0x8]           ; 005b2744
    FMUL ST1                            ; 005b2747
    LEA EDI,[ESP + 0x23c]               ; 005b2749
    LEA ESI,[ESP + 0x5a8]               ; 005b2750
    FSTP float ptr [ESP + 0x5b0]        ; 005b2757
    MOVSD ES:EDI,ESI                    ; 005b275e
    MOVSD ES:EDI,ESI                    ; 005b275f
    MOVSD ES:EDI,ESI                    ; 005b2760
    FLD float ptr [EBX]                 ; 005b2761
    FADD float ptr [ESP + 0x23c]        ; 005b2763
    FLD float ptr [EBX + 0x4]           ; 005b276a
    FXCH                                ; 005b276d
    FSTP float ptr [EBX]                ; 005b276f
    FADD float ptr [ESP + 0x240]        ; 005b2771
    FLD float ptr [EBX + 0x8]           ; 005b2778
    FXCH                                ; 005b277b
    FSTP float ptr [EBX + 0x4]          ; 005b277d
    FADD float ptr [ESP + 0x244]        ; 005b2780
    LEA EAX,[EBX + 0x70]                ; 005b2787
    FSTP float ptr [EBX + 0x8]          ; 005b278a
    FLD float ptr [EAX]                 ; 005b278d
    FMUL ST1                            ; 005b278f
    FSTP float ptr [ESP + 0x104]        ; 005b2791
    FLD float ptr [EAX + 0x4]           ; 005b2798
    FMUL ST1                            ; 005b279b
    FSTP float ptr [ESP + 0x108]        ; 005b279d
    FMUL float ptr [EAX + 0x8]          ; 005b27a4
    LEA EDI,[ESP + 0x2e4]               ; 005b27a7
    LEA EAX,[ESP + 0x2e4]               ; 005b27ae
    LEA ESI,[ESP + 0x104]               ; 005b27b5
    PUSH EAX                            ; 005b27bc
    LEA EAX,[ESP + 0x48]                ; 005b27bd
    FSTP float ptr [ESP + 0x110]        ; 005b27c1
    PUSH EAX                            ; 005b27c8
    MOVSD ES:EDI,ESI                    ; 005b27c9
    MOVSD ES:EDI,ESI                    ; 005b27ca
    MOVSD ES:EDI,ESI                    ; 005b27cb
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 005b27cc
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005b27d1
    FLD float ptr [EBX + 0x1c]          ; 005b27d4
    FMUL float ptr [ESP + 0x50]         ; 005b27d7
    FLD float ptr [EBX + 0x18]          ; 005b27db
    FMUL float ptr [ESP + 0x44]         ; 005b27de
    FADDP                               ; 005b27e2
    FLD float ptr [EBX + 0x20]          ; 005b27e4
    FMUL float ptr [ESP + 0x5c]         ; 005b27e7
    FADDP                               ; 005b27eb
    FSTP float ptr [ESP + 0x1c]         ; 005b27ed
    FLD float ptr [EBX + 0x18]          ; 005b27f1
    FMUL float ptr [ESP + 0x48]         ; 005b27f4
    FLD float ptr [EBX + 0x1c]          ; 005b27f8
    FMUL float ptr [ESP + 0x54]         ; 005b27fb
    FADDP                               ; 005b27ff
    FLD float ptr [EBX + 0x20]          ; 005b2801
    FMUL float ptr [ESP + 0x60]         ; 005b2804
    FADDP                               ; 005b2808
    FSTP float ptr [ESP + 0x20]         ; 005b280a
    FLD float ptr [EBX + 0x18]          ; 005b280e
    FMUL float ptr [ESP + 0x4c]         ; 005b2811
    FLD float ptr [EBX + 0x1c]          ; 005b2815
    FMUL float ptr [ESP + 0x58]         ; 005b2818
    FADDP                               ; 005b281c
    FLD float ptr [EBX + 0x20]          ; 005b281e
    FMUL float ptr [ESP + 0x64]         ; 005b2821
    FADDP                               ; 005b2825
    FSTP float ptr [ESP + 0x24]         ; 005b2827
    FLD float ptr [EBX + 0x28]          ; 005b282b
    FMUL float ptr [ESP + 0x50]         ; 005b282e
    FLD float ptr [EBX + 0x24]          ; 005b2832
    FMUL float ptr [ESP + 0x44]         ; 005b2835
    FADDP                               ; 005b2839
    FLD float ptr [EBX + 0x2c]          ; 005b283b
    FMUL float ptr [ESP + 0x5c]         ; 005b283e
    FADDP                               ; 005b2842
    FSTP float ptr [ESP + 0x28]         ; 005b2844
    FLD float ptr [EBX + 0x24]          ; 005b2848
    FMUL float ptr [ESP + 0x48]         ; 005b284b
    FLD float ptr [EBX + 0x28]          ; 005b284f
    FMUL float ptr [ESP + 0x54]         ; 005b2852
    FADDP                               ; 005b2856
    FLD float ptr [EBX + 0x2c]          ; 005b2858
    FMUL float ptr [ESP + 0x60]         ; 005b285b
    FADDP                               ; 005b285f
    FSTP float ptr [ESP + 0x2c]         ; 005b2861
    FLD float ptr [EBX + 0x24]          ; 005b2865
    FMUL float ptr [ESP + 0x4c]         ; 005b2868
    FLD float ptr [EBX + 0x28]          ; 005b286c
    FMUL float ptr [ESP + 0x58]         ; 005b286f
    FADDP                               ; 005b2873
    FLD float ptr [EBX + 0x2c]          ; 005b2875
    FMUL float ptr [ESP + 0x64]         ; 005b2878
    FADDP                               ; 005b287c
    FSTP float ptr [ESP + 0x30]         ; 005b287e
    FLD float ptr [EBX + 0x34]          ; 005b2882
    FMUL float ptr [ESP + 0x50]         ; 005b2885
    FLD float ptr [EBX + 0x30]          ; 005b2889
    FMUL float ptr [ESP + 0x44]         ; 005b288c
    FADDP                               ; 005b2890
    FLD float ptr [EBX + 0x38]          ; 005b2892
    FMUL float ptr [ESP + 0x5c]         ; 005b2895
    FADDP                               ; 005b2899
    FSTP float ptr [ESP + 0x34]         ; 005b289b
    FLD float ptr [EBX + 0x30]          ; 005b289f
    FMUL float ptr [ESP + 0x48]         ; 005b28a2
    FLD float ptr [EBX + 0x34]          ; 005b28a6
    FMUL float ptr [ESP + 0x54]         ; 005b28a9
    FADDP                               ; 005b28ad
    FLD float ptr [EBX + 0x38]          ; 005b28af
    FMUL float ptr [ESP + 0x60]         ; 005b28b2
    FADDP                               ; 005b28b6
    FSTP float ptr [ESP + 0x38]         ; 005b28b8
    FLD float ptr [EBX + 0x30]          ; 005b28bc
    FMUL float ptr [ESP + 0x4c]         ; 005b28bf
    FLD float ptr [EBX + 0x34]          ; 005b28c3
    FMUL float ptr [ESP + 0x58]         ; 005b28c6
    FADDP                               ; 005b28ca
    FLD float ptr [EBX + 0x38]          ; 005b28cc
    FMUL float ptr [ESP + 0x64]         ; 005b28cf
    LEA ESI,[ESP + 0x1c]                ; 005b28d3
    FADDP                               ; 005b28d7
    MOV ECX,0xa                         ; 005b28d9
    FSTP float ptr [ESP + 0x3c]         ; 005b28de
    LEA EDI,[EBX + 0x18]                ; 005b28e2
    LEA EAX,[EBX + 0x18]                ; 005b28e5
    MOVSD.REP ES:EDI,ESI                ; 005b28e8
    PUSH EAX                            ; 005b28ea
    LEA ESI,[ESP + 0x4bc]               ; 005b28eb
    LEA EDI,[ESP + 0x384]               ; 005b28f2
    CALL core_dirmat.cpp_FUN_004496e0   ; 005b28f9
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    LEA ESI,[ESP + 0x4bc]               ; 005b28fe
    LEA EAX,[ESP + 0x384]               ; 005b2905
    ADD ESP,0x4                         ; 005b290c
    LEA EDX,[EBX + 0xc]                 ; 005b290f
    MOVSD ES:EDI,ESI                    ; 005b2912
    MOVSD ES:EDI,ESI                    ; 005b2913
    MOVSD ES:EDI,ESI                    ; 005b2914
    CMP EDX,EAX                         ; 005b2915
    JZ 0x005b2936                       ; 005b2917
        ;   XREF to: 005b2936 (CONDITIONAL_JUMP)  ; LAB_005b2936
    MOV EAX,dword ptr [ESP + 0x380]     ; 005b2919
    MOV dword ptr [EDX],EAX             ; 005b2920
    MOV EAX,dword ptr [ESP + 0x384]     ; 005b2922
    MOV dword ptr [EDX + 0x4],EAX       ; 005b2929
    MOV EAX,dword ptr [ESP + 0x388]     ; 005b292c
    MOV dword ptr [EDX + 0x8],EAX       ; 005b2933
    XOR ECX,ECX                         ; 005b2936
        ;   Label: LAB_005b2936
    MOV ESI,dword ptr [EBX + 0xb0]      ; 005b2938
    MOV dword ptr [ESP + 0x684],ECX     ; 005b293e
    TEST ESI,ESI                        ; 005b2945
    JLE 0x005b2a49                      ; 005b2947
        ;   XREF to: 005b2a49 (CONDITIONAL_JUMP)  ; LAB_005b2a49
    LEA EAX,[EBX + 0xb4]                ; 005b294d
    MOV dword ptr [ESP + 0x620],EAX     ; 005b2953
    LEA EAX,[EBX + 0x18]                ; 005b295a
    MOV dword ptr [ESP + 0x618],EAX     ; 005b295d
    LEA EAX,[EBX + 0xc0]                ; 005b2964
    MOV dword ptr [ESP + 0x664],EAX     ; 005b296a
    IMUL EAX,dword ptr [ESP + 0x684],0x34 ; 005b2971
        ;   Label: LAB_005b2971
    ADD EAX,dword ptr [ESP + 0x620]     ; 005b2979
    PUSH EAX                            ; 005b2980
    MOV ESI,dword ptr [ESP + 0x61c]     ; 005b2981
    PUSH ESI                            ; 005b2988
    LEA ESI,[ESP + 0x25c]               ; 005b2989
    LEA EDI,[ESP + 0x4f0]               ; 005b2990
    CALL core_dirmat.cpp_FUN_00449530   ; 005b2997
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x25c]               ; 005b299c
    ADD ESP,0x8                         ; 005b29a3
    MOVSD ES:EDI,ESI                    ; 005b29a6
    MOVSD ES:EDI,ESI                    ; 005b29a7
    MOVSD ES:EDI,ESI                    ; 005b29a8
    FLD float ptr [EBX]                 ; 005b29a9
    FADD float ptr [ESP + 0x4e8]        ; 005b29ab
    FSTP float ptr [ESP + 0x56c]        ; 005b29b2
    FLD float ptr [EBX + 0x4]           ; 005b29b9
    FADD float ptr [ESP + 0x4ec]        ; 005b29bc
    LEA EDI,[ESP + 0x518]               ; 005b29c3
    FSTP float ptr [ESP + 0x570]        ; 005b29ca
    FLD float ptr [EBX + 0x8]           ; 005b29d1
    FADD float ptr [ESP + 0x4f0]        ; 005b29d4
    LEA ESI,[ESP + 0x56c]               ; 005b29db
    FSTP float ptr [ESP + 0x574]        ; 005b29e2
    MOVSD ES:EDI,ESI                    ; 005b29e9
    MOVSD ES:EDI,ESI                    ; 005b29ea
    MOVSD ES:EDI,ESI                    ; 005b29eb
    LEA EAX,[ESP + 0x518]               ; 005b29ec
    MOV EDI,dword ptr [ESP + 0x664]     ; 005b29f3
    CMP EAX,EDI                         ; 005b29fa
    JZ 0x005b2a1b                       ; 005b29fc
        ;   XREF to: 005b2a1b (CONDITIONAL_JUMP)  ; LAB_005b2a1b
    MOV EAX,dword ptr [ESP + 0x518]     ; 005b29fe
    MOV dword ptr [EDI],EAX             ; 005b2a05
    MOV EAX,dword ptr [ESP + 0x51c]     ; 005b2a07
    MOV dword ptr [EDI + 0x4],EAX       ; 005b2a0e
    MOV EAX,dword ptr [ESP + 0x520]     ; 005b2a11
    MOV dword ptr [EDI + 0x8],EAX       ; 005b2a18
    MOV EDI,dword ptr [ESP + 0x664]     ; 005b2a1b
        ;   Label: LAB_005b2a1b
    MOV EAX,dword ptr [ESP + 0x684]     ; 005b2a22
    MOV EDX,dword ptr [EBX + 0xb0]      ; 005b2a29
    ADD EDI,0x34                        ; 005b2a2f
    INC EAX                             ; 005b2a32
    MOV dword ptr [ESP + 0x664],EDI     ; 005b2a33
    MOV dword ptr [ESP + 0x684],EAX     ; 005b2a3a
    CMP EAX,EDX                         ; 005b2a41
    JL 0x005b2971                       ; 005b2a43
        ;   XREF to: 005b2971 (CONDITIONAL_JUMP)  ; LAB_005b2971
    LEA EAX,[EBX + 0xb4]                ; 005b2a49
        ;   Label: LAB_005b2a49
    MOV EDI,dword ptr [EBX + 0xb0]      ; 005b2a4f
    XOR ECX,ECX                         ; 005b2a55
    MOV dword ptr [ESP + 0x65c],EAX     ; 005b2a57
    LEA EAX,[EBX + 0xcc]                ; 005b2a5e
    MOV dword ptr [ESP + 0x680],ECX     ; 005b2a64
    MOV dword ptr [ESP + 0x668],EAX     ; 005b2a6b
    LEA EAX,[EBX + 0xc0]                ; 005b2a72
    MOV dword ptr [ESP + 0x63c],ECX     ; 005b2a78
    MOV dword ptr [ESP + 0x66c],EAX     ; 005b2a7f
    MOV dword ptr [ESP + 0x670],EBX     ; 005b2a86
    TEST EDI,EDI                        ; 005b2a8d
    JLE 0x005b2bd0                      ; 005b2a8f
        ;   XREF to: 005b2bd0 (CONDITIONAL_JUMP)  ; LAB_005b2bd0
    MOV EAX,dword ptr [ESP + 0x65c]     ; 005b2a95
    MOV dword ptr [ESP + 0x674],EAX     ; 005b2a9c
    MOV EAX,dword ptr [ESP + 0x670]     ; 005b2aa3
        ;   Label: LAB_005b2aa3
    FLD float ptr [EAX + 0xc4]          ; 005b2aaa
    FCOMP float ptr [EBX + 0x258]       ; 005b2ab0
    FNSTSW AX                           ; 005b2ab6
    SAHF                                ; 005b2ab8
    JNC 0x005b4123                      ; 005b2ab9
        ;   XREF to: 005b4123 (CONDITIONAL_JUMP)  ; LAB_005b4123
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b2abf
    MOV EDI,dword ptr [ESP + 0x66c]     ; 005b2ac6
    CMP EAX,EDI                         ; 005b2acd
    JZ 0x005b2afc                       ; 005b2acf
        ;   XREF to: 005b2afc (CONDITIONAL_JUMP)  ; LAB_005b2afc
    MOV EAX,EDI                         ; 005b2ad1
    FLD float ptr [EAX]                 ; 005b2ad3
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b2ad5
    FSTP float ptr [EAX]                ; 005b2adc
    MOV EAX,EDI                         ; 005b2ade
    FLD float ptr [EAX + 0x4]           ; 005b2ae0
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b2ae3
    FSTP float ptr [EAX + 0x4]          ; 005b2aea
    MOV EAX,EDI                         ; 005b2aed
    FLD float ptr [EAX + 0x8]           ; 005b2aef
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b2af2
    FSTP float ptr [EAX + 0x8]          ; 005b2af9
    FLD float ptr [EBX + 0x258]         ; 005b2afc
        ;   Label: LAB_005b2afc
    MOV EAX,dword ptr [ESP + 0x670]     ; 005b2b02
    FADD double ptr [0x005f1330]        ; 005b2b09 | DAT_005f1330
    FLD float ptr [EAX + 0xc4]          ; 005b2b0f
    FXCH                                ; 005b2b15
    FSTP float ptr [EAX + 0xd0]         ; 005b2b17
    FSUB float ptr [EAX + 0xd0]         ; 005b2b1d
    FLD float ptr [EBX + 0x258]         ; 005b2b23
    FSUB float ptr [EAX + 0xd0]         ; 005b2b29
    FDIVRP                              ; 005b2b2f
    MOV dword ptr [EAX + 0xdc],0x0      ; 005b2b31
    MOV dword ptr [EAX + 0xe0],0x3f800000 ; 005b2b3b
    MOV dword ptr [EAX + 0xe4],0x0      ; 005b2b45
    FSTP float ptr [EAX + 0xd8]         ; 005b2b4f
    MOV EAX,dword ptr [ESP + 0x63c]     ; 005b2b55
    INC EAX                             ; 005b2b5c
    MOV EDX,dword ptr [ESP + 0x680]     ; 005b2b5d
    MOV dword ptr [ESP + EAX*0x4 + 0x68],EDX ; 005b2b64
    MOV dword ptr [ESP + 0x63c],EAX     ; 005b2b68
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b2b6f
        ;   Label: LAB_005b2b6f
    MOV EDX,dword ptr [ESP + 0x66c]     ; 005b2b76
    MOV ECX,dword ptr [ESP + 0x670]     ; 005b2b7d
    MOV ESI,dword ptr [ESP + 0x674]     ; 005b2b84
    MOV EDI,dword ptr [ESP + 0x680]     ; 005b2b8b
    ADD EAX,0x34                        ; 005b2b92
    ADD EDX,0x34                        ; 005b2b95
    ADD ECX,0x34                        ; 005b2b98
    ADD ESI,0x34                        ; 005b2b9b
    INC EDI                             ; 005b2b9e
    MOV dword ptr [ESP + 0x668],EAX     ; 005b2b9f
    MOV dword ptr [ESP + 0x66c],EDX     ; 005b2ba6
    MOV dword ptr [ESP + 0x670],ECX     ; 005b2bad
    MOV dword ptr [ESP + 0x674],ESI     ; 005b2bb4
    MOV EDX,dword ptr [EBX + 0xb0]      ; 005b2bbb
    MOV dword ptr [ESP + 0x680],EDI     ; 005b2bc1
    CMP EDI,EDX                         ; 005b2bc8
    JL 0x005b2aa3                       ; 005b2bca
        ;   XREF to: 005b2aa3 (CONDITIONAL_JUMP)  ; LAB_005b2aa3
    CMP dword ptr [ESP + 0x63c],0x1     ; 005b2bd0
        ;   Label: LAB_005b2bd0
    JNZ 0x005b31e9                      ; 005b2bd8
        ;   XREF to: 005b31e9 (CONDITIONAL_JUMP)  ; LAB_005b31e9
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005b2bde
    MOV dword ptr [ESP + 0x698],EAX     ; 005b2be2
    LEA ECX,[EAX*0x4 + 0x0]             ; 005b2be9
    SUB ECX,EAX                         ; 005b2bf0
    SHL ECX,0x2                         ; 005b2bf2
    ADD ECX,EAX                         ; 005b2bf5
    MOV EDX,dword ptr [ESP + 0x65c]     ; 005b2bf7
    SHL ECX,0x2                         ; 005b2bfe
    ADD EDX,ECX                         ; 005b2c01
    LEA EAX,[EDX + 0xc]                 ; 005b2c03
    FLD float ptr [EAX]                 ; 005b2c06
    FSUB float ptr [EDX + 0x18]         ; 005b2c08
    FSTP float ptr [ESP + 0x134]        ; 005b2c0b
    FLD float ptr [EAX + 0x4]           ; 005b2c12
    FSUB float ptr [EDX + 0x1c]         ; 005b2c15
    LEA EDI,[ESP + 0x410]               ; 005b2c18
    FSTP float ptr [ESP + 0x138]        ; 005b2c1f
    FLD float ptr [EAX + 0x8]           ; 005b2c26
    FSUB float ptr [EDX + 0x20]         ; 005b2c29
    LEA ESI,[ESP + 0x134]               ; 005b2c2c
    FSTP float ptr [ESP + 0x13c]        ; 005b2c33
    MOVSD ES:EDI,ESI                    ; 005b2c3a
    MOVSD ES:EDI,ESI                    ; 005b2c3b
    MOVSD ES:EDI,ESI                    ; 005b2c3c
    FLD float ptr [ECX + EBX*0x1 + 0xd8] ; 005b2c3d
    FLD1                                ; 005b2c44
    FSUBRP                              ; 005b2c46
    FMUL double ptr [0x005f1300]        ; 005b2c48 | DAT_005f1300
    FLD float ptr [ESP + 0x410]         ; 005b2c4e
    FXCH                                ; 005b2c55
    FSTP float ptr [ESP + 0x658]        ; 005b2c57
    FMUL float ptr [ESP + 0x658]        ; 005b2c5e
    FLD float ptr [ESP + 0x414]         ; 005b2c65
    FMUL float ptr [ESP + 0x658]        ; 005b2c6c
    MOV EDX,dword ptr [ESP + 0x698]     ; 005b2c73
    FLD float ptr [ESP + 0x418]         ; 005b2c7a
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b2c81
    FMUL float ptr [ESP + 0x658]        ; 005b2c88
    SUB EAX,EDX                         ; 005b2c8f
    LEA EDI,[ESP + 0x608]               ; 005b2c91
    SHL EAX,0x2                         ; 005b2c98
    LEA ESI,[ESP + 0x464]               ; 005b2c9b
    ADD EAX,EDX                         ; 005b2ca2
    FXCH ST2                            ; 005b2ca4
    FSTP float ptr [ESP + 0x464]        ; 005b2ca6
    FSTP float ptr [ESP + 0x468]        ; 005b2cad
    FSTP float ptr [ESP + 0x46c]        ; 005b2cb4
    MOVSD ES:EDI,ESI                    ; 005b2cbb
    MOVSD ES:EDI,ESI                    ; 005b2cbc
    MOVSD ES:EDI,ESI                    ; 005b2cbd
    SHL EAX,0x2                         ; 005b2cbe
    FLD float ptr [EBX]                 ; 005b2cc1
    FLD float ptr [EBX + 0x4]           ; 005b2cc3
    FLD float ptr [EBX + 0x8]           ; 005b2cc6
    MOV ESI,dword ptr [ESP + 0x65c]     ; 005b2cc9
    LEA EDI,[ESP + 0x17c]               ; 005b2cd0
    FXCH ST2                            ; 005b2cd7
    FSUB float ptr [ESP + 0x608]        ; 005b2cd9
    ADD EAX,ESI                         ; 005b2ce0
    FSTP float ptr [EBX]                ; 005b2ce2
    LEA ESI,[ESP + 0x4c4]               ; 005b2ce4
    ADD EAX,0x28                        ; 005b2ceb
    FSUB float ptr [ESP + 0x60c]        ; 005b2cee
    PUSH EAX                            ; 005b2cf5
    FSTP float ptr [EBX + 0x4]          ; 005b2cf6
    LEA EAX,[EBX + 0x18]                ; 005b2cf9
    FSUB float ptr [ESP + 0x614]        ; 005b2cfc
    PUSH EAX                            ; 005b2d03
    FSTP float ptr [EBX + 0x8]          ; 005b2d04
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b2d07
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x4cc]               ; 005b2d0c
    ADD ESP,0x8                         ; 005b2d13
    MOVSD ES:EDI,ESI                    ; 005b2d16
    MOVSD ES:EDI,ESI                    ; 005b2d17
    MOVSD ES:EDI,ESI                    ; 005b2d18
    LEA EAX,[EBX + 0x4c]                ; 005b2d19
    FLD float ptr [ESP + 0x180]         ; 005b2d1c
    FMUL float ptr [EAX + 0x4]          ; 005b2d23
    FLD float ptr [ESP + 0x17c]         ; 005b2d26
    FMUL float ptr [EAX]                ; 005b2d2d
    FADDP                               ; 005b2d2f
    FLD float ptr [ESP + 0x184]         ; 005b2d31
    FMUL float ptr [EAX + 0x8]          ; 005b2d38
    FADDP                               ; 005b2d3b
    FMUL float ptr [0x005f1308]         ; 005b2d3d | DAT_005f1308
    FLD float ptr [ESP + 0x17c]         ; 005b2d43
    FXCH                                ; 005b2d4a
    FSTP float ptr [ESP + 0x62c]        ; 005b2d4c
    FMUL float ptr [ESP + 0x62c]        ; 005b2d53
    FLD float ptr [ESP + 0x180]         ; 005b2d5a
    FMUL float ptr [ESP + 0x62c]        ; 005b2d61
    FLD float ptr [ESP + 0x184]         ; 005b2d68
    FMUL float ptr [ESP + 0x62c]        ; 005b2d6f
    LEA EDI,[ESP + 0x4d0]               ; 005b2d76
    LEA ESI,[ESP + 0x5fc]               ; 005b2d7d
    FXCH ST2                            ; 005b2d84
    FSTP float ptr [ESP + 0x5fc]        ; 005b2d86
    FSTP float ptr [ESP + 0x600]        ; 005b2d8d
    FSTP float ptr [ESP + 0x604]        ; 005b2d94
    MOVSD ES:EDI,ESI                    ; 005b2d9b
    MOVSD ES:EDI,ESI                    ; 005b2d9c
    MOVSD ES:EDI,ESI                    ; 005b2d9d
    LEA EDX,[ESP + 0x1ac]               ; 005b2d9e
    FLD float ptr [ESP + 0x4d4]         ; 005b2da5
    FLD float ptr [ESP + 0x4d0]         ; 005b2dac
    FSUB float ptr [EAX]                ; 005b2db3
    FLD float ptr [ESP + 0x4d8]         ; 005b2db5
    FXCH                                ; 005b2dbc
    FSTP float ptr [ESP + 0x554]        ; 005b2dbe
    FXCH                                ; 005b2dc5
    FSUB float ptr [EAX + 0x4]          ; 005b2dc7
    LEA EDI,[ESP + 0x4f4]               ; 005b2dca
    FSTP float ptr [ESP + 0x558]        ; 005b2dd1
    FSUB float ptr [EAX + 0x8]          ; 005b2dd8
    LEA ESI,[ESP + 0x554]               ; 005b2ddb
    FSTP float ptr [ESP + 0x55c]        ; 005b2de2
    LEA EAX,[ESP + 0x4f4]               ; 005b2de9
    MOVSD ES:EDI,ESI                    ; 005b2df0
    MOVSD ES:EDI,ESI                    ; 005b2df1
    MOVSD ES:EDI,ESI                    ; 005b2df2
    CMP EDX,EAX                         ; 005b2df3
    JZ 0x005b2e21                       ; 005b2df5
        ;   XREF to: 005b2e21 (CONDITIONAL_JUMP)  ; LAB_005b2e21
    MOV EAX,dword ptr [ESP + 0x4f4]     ; 005b2df7
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005b2dfe
    MOV EAX,dword ptr [ESP + 0x4f8]     ; 005b2e05
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005b2e0c
    MOV EAX,dword ptr [ESP + 0x4fc]     ; 005b2e13
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005b2e1a
    FLD float ptr [0x005f130c]          ; 005b2e21 | DAT_005f130c
        ;   Label: LAB_005b2e21
    FLD float ptr [ESP + 0x1ac]         ; 005b2e27
    FMUL ST1                            ; 005b2e2e
    FLD float ptr [ESP + 0x1b0]         ; 005b2e30
    FMUL ST2                            ; 005b2e37
    FLD float ptr [ESP + 0x1b4]         ; 005b2e39
    FMULP ST3                           ; 005b2e40
    FXCH                                ; 005b2e42
    FLD float ptr [0x005f1310]          ; 005b2e44 | DAT_005f1310
    FXCH                                ; 005b2e4a
    FMUL ST1                            ; 005b2e4c
    FXCH ST2                            ; 005b2e4e
    FMUL ST1                            ; 005b2e50
    FLD1                                ; 005b2e52
    FXCH ST4                            ; 005b2e54
    FMULP ST2                           ; 005b2e56
    FXCH ST3                            ; 005b2e58
    FDIV float ptr [EBP + 0x18]         ; 005b2e5a
    LEA EDI,[ESP + 0x560]               ; 005b2e5d
    LEA EDX,[EBX + 0x4c]                ; 005b2e64
    FXCH ST2                            ; 005b2e67
    FSTP float ptr [ESP + 0x1ac]        ; 005b2e69
    FXCH ST2                            ; 005b2e70
    FSTP float ptr [ESP + 0x1b0]        ; 005b2e72
    FXCH                                ; 005b2e79
    FSTP float ptr [ESP + 0x1b4]        ; 005b2e7b
    FLD float ptr [ESP + 0x1ac]         ; 005b2e82
    FSUB float ptr [EDX]                ; 005b2e89
    FLD float ptr [ESP + 0x1b0]         ; 005b2e8b
    FXCH                                ; 005b2e92
    FSTP float ptr [ESP + 0x2a8]        ; 005b2e94
    FSUB float ptr [EDX + 0x4]          ; 005b2e9b
    FLD float ptr [ESP + 0x1b4]         ; 005b2e9e
    FXCH                                ; 005b2ea5
    FSTP float ptr [ESP + 0x2ac]        ; 005b2ea7
    FSUB float ptr [EDX + 0x8]          ; 005b2eae
    LEA ESI,[ESP + 0x2a8]               ; 005b2eb1
    FSTP float ptr [ESP + 0x2b0]        ; 005b2eb8
    MOVSD ES:EDI,ESI                    ; 005b2ebf
    MOVSD ES:EDI,ESI                    ; 005b2ec0
    MOVSD ES:EDI,ESI                    ; 005b2ec1
    LEA EAX,[EBX + 0x94]                ; 005b2ec2
    FLD float ptr [ESP + 0x560]         ; 005b2ec8
    FMUL float ptr [EAX]                ; 005b2ecf
    FLD float ptr [ESP + 0x564]         ; 005b2ed1
    FXCH                                ; 005b2ed8
    FSTP float ptr [ESP + 0x2cc]        ; 005b2eda
    FMUL float ptr [EAX]                ; 005b2ee1
    FLD float ptr [ESP + 0x568]         ; 005b2ee3
    FXCH                                ; 005b2eea
    FSTP float ptr [ESP + 0x2d0]        ; 005b2eec
    FMUL float ptr [EAX]                ; 005b2ef3
    LEA EDI,[ESP + 0xa4]                ; 005b2ef5
    LEA ESI,[ESP + 0x2cc]               ; 005b2efc
    FSTP float ptr [ESP + 0x2d4]        ; 005b2f03
    MOVSD ES:EDI,ESI                    ; 005b2f0a
    MOVSD ES:EDI,ESI                    ; 005b2f0b
    MOVSD ES:EDI,ESI                    ; 005b2f0c
    FLD float ptr [ESP + 0xa4]          ; 005b2f0d
    FMUL ST1                            ; 005b2f14
    FLD float ptr [ESP + 0xa8]          ; 005b2f16
    FMUL ST2                            ; 005b2f1d
    FLD float ptr [ESP + 0xac]          ; 005b2f1f
    FMULP ST3                           ; 005b2f26
    LEA EAX,[EBX + 0x64]                ; 005b2f28
    LEA EDI,[ESP + 0x248]               ; 005b2f2b
    LEA ESI,[ESP + 0x2fc]               ; 005b2f32
    FXCH                                ; 005b2f39
    FSTP float ptr [ESP + 0x2fc]        ; 005b2f3b
    FSTP float ptr [ESP + 0x300]        ; 005b2f42
    FSTP float ptr [ESP + 0x304]        ; 005b2f49
    MOVSD ES:EDI,ESI                    ; 005b2f50
    MOVSD ES:EDI,ESI                    ; 005b2f51
    MOVSD ES:EDI,ESI                    ; 005b2f52
    FLD float ptr [EAX]                 ; 005b2f53
    FADD float ptr [ESP + 0x248]        ; 005b2f55
    FLD float ptr [EAX + 0x4]           ; 005b2f5c
    FXCH                                ; 005b2f5f
    FSTP float ptr [EAX]                ; 005b2f61
    FADD float ptr [ESP + 0x24c]        ; 005b2f63
    FLD float ptr [EAX + 0x8]           ; 005b2f6a
    FXCH                                ; 005b2f6d
    FSTP float ptr [EAX + 0x4]          ; 005b2f6f
    FADD float ptr [ESP + 0x250]        ; 005b2f72
    FSTP float ptr [EAX + 0x8]          ; 005b2f79
    LEA EAX,[EBX + 0x70]                ; 005b2f7c
    MOV dword ptr [EAX + 0x8],0x0       ; 005b2f7f
    MOV EDX,dword ptr [ESP + 0x698]     ; 005b2f86
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b2f8d
    MOV dword ptr [EAX + 0x4],ECX       ; 005b2f90
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b2f93
    MOV dword ptr [EAX],ECX             ; 005b2f96
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b2f98
    SUB EAX,EDX                         ; 005b2f9f
    SHL EAX,0x2                         ; 005b2fa1
    ADD EDX,EAX                         ; 005b2fa4
    SHL EDX,0x2                         ; 005b2fa6
    LEA EAX,[EBX + 0xb4]                ; 005b2fa9
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 005b2faf
    FMUL float ptr [ESP + 0x250]        ; 005b2fb3
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 005b2fba
    FMUL float ptr [ESP + 0x24c]        ; 005b2fbe
    FSUBP                               ; 005b2fc5
    FSTP float ptr [ESP + 0xbc]         ; 005b2fc7
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 005b2fce
    FMUL float ptr [ESP + 0x248]        ; 005b2fd2
    FLD float ptr [EDX + EAX*0x1]       ; 005b2fd9
    FMUL float ptr [ESP + 0x250]        ; 005b2fdc
    FSUBP                               ; 005b2fe3
    FSTP float ptr [ESP + 0xc0]         ; 005b2fe5
    FLD float ptr [EDX + EAX*0x1]       ; 005b2fec
    FMUL float ptr [ESP + 0x24c]        ; 005b2fef
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 005b2ff6
    FMUL float ptr [ESP + 0x248]        ; 005b2ffa
    LEA EDI,[ESP + 0x2b4]               ; 005b3001
    FSUBP                               ; 005b3008
    LEA ESI,[ESP + 0xbc]                ; 005b300a
    FSTP float ptr [ESP + 0xc4]         ; 005b3011
    MOVSD ES:EDI,ESI                    ; 005b3018
    MOVSD ES:EDI,ESI                    ; 005b3019
    MOVSD ES:EDI,ESI                    ; 005b301a
    FLD float ptr [0x005f1314]          ; 005b301b | DAT_005f1314
    FLD float ptr [ESP + 0x2b4]         ; 005b3021
    FMUL ST1                            ; 005b3028
    FLD float ptr [ESP + 0x2b8]         ; 005b302a
    FMUL ST2                            ; 005b3031
    FLD float ptr [ESP + 0x2bc]         ; 005b3033
    FMULP ST3                           ; 005b303a
    LEA EAX,[EBX + 0x88]                ; 005b303c
    LEA EDI,[ESP + 0x188]               ; 005b3042
    LEA ESI,[ESP + 0x3ec]               ; 005b3049
    FXCH                                ; 005b3050
    FSTP float ptr [ESP + 0x3ec]        ; 005b3052
    FSTP float ptr [ESP + 0x3f0]        ; 005b3059
    FSTP float ptr [ESP + 0x3f4]        ; 005b3060
    MOVSD ES:EDI,ESI                    ; 005b3067
    MOVSD ES:EDI,ESI                    ; 005b3068
    MOVSD ES:EDI,ESI                    ; 005b3069
    FLD float ptr [EAX]                 ; 005b306a
    FADD float ptr [ESP + 0x188]        ; 005b306c
    FLD float ptr [EAX + 0x4]           ; 005b3073
    FXCH                                ; 005b3076
    FSTP float ptr [EAX]                ; 005b3078
    FADD float ptr [ESP + 0x18c]        ; 005b307a
    FLD float ptr [EAX + 0x8]           ; 005b3081
    FXCH                                ; 005b3084
    FSTP float ptr [EAX + 0x4]          ; 005b3086
    FADD float ptr [ESP + 0x190]        ; 005b3089
    LEA EDI,[ESP + 0x5f0]               ; 005b3090
    FSTP float ptr [EAX + 0x8]          ; 005b3097
    LEA ESI,[EDX + EBX*0x1 + 0xb4]      ; 005b309a
    MOVSD ES:EDI,ESI                    ; 005b30a1
    MOVSD ES:EDI,ESI                    ; 005b30a2
    MOVSD ES:EDI,ESI                    ; 005b30a3
    XOR EDI,EDI                         ; 005b30a4
    MOV dword ptr [ESP + 0x35c],EDI     ; 005b30a6
    MOV dword ptr [ESP + 0x360],EDI     ; 005b30ad
    MOV dword ptr [ESP + 0x364],EDI     ; 005b30b4
    LEA EAX,[ESP + 0x35c]               ; 005b30bb
    FLD float ptr [EBX + 0x94]          ; 005b30c2
    FMUL double ptr [0x005f12f0]        ; 005b30c8 | DAT_005f12f0
    PUSH EAX                            ; 005b30ce
    LEA EAX,[EBX + 0x18]                ; 005b30cf
    LEA ESI,[ESP + 0x444]               ; 005b30d2
    PUSH EAX                            ; 005b30d9
    LEA EDI,[ESP + 0x3ac]               ; 005b30da
    FSTP float ptr [ESP + 0x368]        ; 005b30e1
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b30e8
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x448]               ; 005b30ed
    LEA EAX,[ESP + 0x3ac]               ; 005b30f4
    ADD ESP,0x8                         ; 005b30fb
    LEA EDX,[ESP + 0x35c]               ; 005b30fe
    MOVSD ES:EDI,ESI                    ; 005b3105
    MOVSD ES:EDI,ESI                    ; 005b3106
    MOVSD ES:EDI,ESI                    ; 005b3107
    CMP EDX,EAX                         ; 005b3108
    JZ 0x005b3136                       ; 005b310a
        ;   XREF to: 005b3136 (CONDITIONAL_JUMP)  ; LAB_005b3136
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 005b310c
    MOV dword ptr [ESP + 0x35c],EAX     ; 005b3113
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 005b311a
    MOV dword ptr [ESP + 0x360],EAX     ; 005b3121
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 005b3128
    MOV dword ptr [ESP + 0x364],EAX     ; 005b312f
    FLD float ptr [ESP + 0x5f4]         ; 005b3136
        ;   Label: LAB_005b3136
    FMUL float ptr [ESP + 0x364]        ; 005b313d
    FLD float ptr [ESP + 0x5f8]         ; 005b3144
    FMUL float ptr [ESP + 0x35c]        ; 005b314b
    FLD float ptr [ESP + 0x5f0]         ; 005b3152
    FMUL float ptr [ESP + 0x360]        ; 005b3159
    FLD float ptr [ESP + 0x5f8]         ; 005b3160
    FMUL float ptr [ESP + 0x360]        ; 005b3167
    FLD float ptr [ESP + 0x5f0]         ; 005b316e
    FMUL float ptr [ESP + 0x364]        ; 005b3175
    FLD float ptr [ESP + 0x5f4]         ; 005b317c
    FMUL float ptr [ESP + 0x35c]        ; 005b3183
    LEA EDI,[ESP + 0xb0]                ; 005b318a
    LEA ESI,[ESP + 0x158]               ; 005b3191
    LEA EAX,[EBX + 0x88]                ; 005b3198
    FXCH ST2                            ; 005b319e
    FSUBP ST5,ST0                       ; 005b31a0
    FSUBP ST3,ST0                       ; 005b31a2
    FSUBP                               ; 005b31a4
    FXCH ST2                            ; 005b31a6
    FSTP float ptr [ESP + 0x158]        ; 005b31a8
    FSTP float ptr [ESP + 0x15c]        ; 005b31af
    FSTP float ptr [ESP + 0x160]        ; 005b31b6
    MOVSD ES:EDI,ESI                    ; 005b31bd
    MOVSD ES:EDI,ESI                    ; 005b31be
    MOVSD ES:EDI,ESI                    ; 005b31bf
    FLD float ptr [EAX]                 ; 005b31c0
    FADD float ptr [ESP + 0xb0]         ; 005b31c2
    FLD float ptr [EAX + 0x4]           ; 005b31c9
    FXCH                                ; 005b31cc
    FSTP float ptr [EAX]                ; 005b31ce
    FADD float ptr [ESP + 0xb4]         ; 005b31d0
    FLD float ptr [EAX + 0x8]           ; 005b31d7
    FXCH                                ; 005b31da
    FSTP float ptr [EAX + 0x4]          ; 005b31dc
    FADD float ptr [ESP + 0xb8]         ; 005b31df
    FSTP float ptr [EAX + 0x8]          ; 005b31e6
    CMP dword ptr [ESP + 0x63c],0x2     ; 005b31e9
        ;   Label: LAB_005b31e9
    JNZ 0x005b3bd3                      ; 005b31f1
        ;   XREF to: 005b3bd3 (CONDITIONAL_JUMP)  ; LAB_005b3bd3
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005b31f7
    MOV dword ptr [ESP + 0x69c],EAX     ; 005b31fb
    MOV EDX,EAX                         ; 005b3202
    SHL EAX,0x2                         ; 005b3204
    SUB EAX,EDX                         ; 005b3207
    SHL EAX,0x2                         ; 005b3209
    ADD EAX,EDX                         ; 005b320c
    SHL EAX,0x2                         ; 005b320e
    LEA EDX,[EBX + 0xb4]                ; 005b3211
    MOV dword ptr [ESP + 0x68c],EAX     ; 005b3217
    ADD EAX,EDX                         ; 005b321e
    LEA ECX,[EAX + 0xc]                 ; 005b3220
    FLD float ptr [ECX]                 ; 005b3223
    FSUB float ptr [EAX + 0x18]         ; 005b3225
    FSTP float ptr [ESP + 0x38c]        ; 005b3228
    FLD float ptr [ECX + 0x4]           ; 005b322f
    FSUB float ptr [EAX + 0x1c]         ; 005b3232
    LEA EDI,[ESP + 0x218]               ; 005b3235
    FSTP float ptr [ESP + 0x390]        ; 005b323c
    FLD float ptr [ECX + 0x8]           ; 005b3243
    FSUB float ptr [EAX + 0x20]         ; 005b3246
    LEA ESI,[ESP + 0x38c]               ; 005b3249
    FSTP float ptr [ESP + 0x394]        ; 005b3250
    MOV EAX,dword ptr [ESP + 0x68c]     ; 005b3257
    MOVSD ES:EDI,ESI                    ; 005b325e
    MOVSD ES:EDI,ESI                    ; 005b325f
    MOVSD ES:EDI,ESI                    ; 005b3260
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 005b3261
    FLD1                                ; 005b3268
    FSUBRP                              ; 005b326a
    FLD double ptr [0x005f1318]         ; 005b326c | DAT_005f1318
    FXCH                                ; 005b3272
    FMUL ST1                            ; 005b3274
    FLD float ptr [ESP + 0x218]         ; 005b3276
    FXCH                                ; 005b327d
    FSTP float ptr [ESP + 0x6a4]        ; 005b327f
    FMUL float ptr [ESP + 0x6a4]        ; 005b3286
    FLD float ptr [ESP + 0x21c]         ; 005b328d
    FMUL float ptr [ESP + 0x6a4]        ; 005b3294
    FLD float ptr [ESP + 0x220]         ; 005b329b
    MOV EAX,dword ptr [ESP + 0x70]      ; 005b32a2
    FMUL float ptr [ESP + 0x6a4]        ; 005b32a6
    MOV dword ptr [ESP + 0x690],EAX     ; 005b32ad
    MOV ECX,EAX                         ; 005b32b4
    SHL EAX,0x2                         ; 005b32b6
    LEA EDI,[ESP + 0x368]               ; 005b32b9
    SUB EAX,ECX                         ; 005b32c0
    LEA ESI,[ESP + 0x3c8]               ; 005b32c2
    SHL EAX,0x2                         ; 005b32c9
    FXCH ST2                            ; 005b32cc
    FSTP float ptr [ESP + 0x3c8]        ; 005b32ce
    FSTP float ptr [ESP + 0x3cc]        ; 005b32d5
    FSTP float ptr [ESP + 0x3d0]        ; 005b32dc
    MOVSD ES:EDI,ESI                    ; 005b32e3
    MOVSD ES:EDI,ESI                    ; 005b32e4
    MOVSD ES:EDI,ESI                    ; 005b32e5
    ADD EAX,ECX                         ; 005b32e6
    FLD float ptr [ESP + 0x36c]         ; 005b32e8
    FMUL ST0                            ; 005b32ef
    SHL EAX,0x2                         ; 005b32f1
    FLD float ptr [ESP + 0x368]         ; 005b32f4
    FMUL ST0                            ; 005b32fb
    MOV dword ptr [ESP + 0x68c],EAX     ; 005b32fd
    LEA ECX,[EAX + EDX*0x1]             ; 005b3304
    FADDP                               ; 005b3307
    LEA EAX,[ECX + 0xc]                 ; 005b3309
    FLD float ptr [ESP + 0x370]         ; 005b330c
    FMUL ST0                            ; 005b3313
    FLD float ptr [EAX]                 ; 005b3315
    FSUB float ptr [ECX + 0x18]         ; 005b3317
    LEA EDI,[ESP + 0x3d4]               ; 005b331a
    FSTP float ptr [ESP + 0x428]        ; 005b3321
    FLD float ptr [EAX + 0x4]           ; 005b3328
    FSUB float ptr [ECX + 0x1c]         ; 005b332b
    LEA ESI,[ESP + 0x428]               ; 005b332e
    FSTP float ptr [ESP + 0x42c]        ; 005b3335
    FLD float ptr [EAX + 0x8]           ; 005b333c
    FXCH                                ; 005b333f
    FADDP ST2,ST0                       ; 005b3341
    MOV EAX,dword ptr [ESP + 0x68c]     ; 005b3343
    FSUB float ptr [ECX + 0x20]         ; 005b334a
    FXCH                                ; 005b334d
    FSTP float ptr [ESP + 0x18]         ; 005b334f
    FSTP float ptr [ESP + 0x430]        ; 005b3353
    MOVSD ES:EDI,ESI                    ; 005b335a
    MOVSD ES:EDI,ESI                    ; 005b335b
    MOVSD ES:EDI,ESI                    ; 005b335c
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 005b335d
    FLD float ptr [ESP + 0x18]          ; 005b3364
    FSQRT                               ; 005b3368
    FLD1                                ; 005b336a
    FSUBRP ST2,ST0                      ; 005b336c
    FXCH                                ; 005b336e
    FMULP ST2                           ; 005b3370
    FLD float ptr [ESP + 0x3d4]         ; 005b3372
    FXCH ST2                            ; 005b3379
    FSTP float ptr [ESP + 0x648]        ; 005b337b
    FXCH                                ; 005b3382
    FMUL float ptr [ESP + 0x648]        ; 005b3384
    FLD float ptr [ESP + 0x3d8]         ; 005b338b
    FMUL float ptr [ESP + 0x648]        ; 005b3392
    FLD float ptr [ESP + 0x3dc]         ; 005b3399
    FMUL float ptr [ESP + 0x648]        ; 005b33a0
    LEA EDI,[ESP + 0x3bc]               ; 005b33a7
    LEA ESI,[ESP + 0x488]               ; 005b33ae
    FXCH ST2                            ; 005b33b5
    FSTP float ptr [ESP + 0x488]        ; 005b33b7
    FSTP float ptr [ESP + 0x48c]        ; 005b33be
    FSTP float ptr [ESP + 0x490]        ; 005b33c5
    MOVSD ES:EDI,ESI                    ; 005b33cc
    MOVSD ES:EDI,ESI                    ; 005b33cd
    MOVSD ES:EDI,ESI                    ; 005b33ce
    FLD float ptr [ESP + 0x3c0]         ; 005b33cf
    FMUL ST0                            ; 005b33d6
    FLD float ptr [ESP + 0x3bc]         ; 005b33d8
    FMUL ST0                            ; 005b33df
    FADDP                               ; 005b33e1
    FLD float ptr [ESP + 0x3c4]         ; 005b33e3
    FMUL ST0                            ; 005b33ea
    FADDP                               ; 005b33ec
    FSQRT                               ; 005b33ee
    LEA ESI,[EBX + 0x18]                ; 005b33f0
    FXCH                                ; 005b33f3
    FCOMPP                              ; 005b33f5
    FNSTSW AX                           ; 005b33f7
    SAHF                                ; 005b33f9
    JBE 0x005b4246                      ; 005b33fa
        ;   XREF to: 005b4246 (CONDITIONAL_JUMP)  ; LAB_005b4246
    MOV ECX,dword ptr [ESP + 0x69c]     ; 005b3400
    FLD float ptr [EBX]                 ; 005b3407
    LEA EAX,[ECX*0x4 + 0x0]             ; 005b3409
    FLD float ptr [EBX + 0x4]           ; 005b3410
    SUB EAX,ECX                         ; 005b3413
    FLD float ptr [EBX + 0x8]           ; 005b3415
    SHL EAX,0x2                         ; 005b3418
    LEA EDI,[ESP + 0x3f8]               ; 005b341b
    ADD EAX,ECX                         ; 005b3422
    FXCH ST2                            ; 005b3424
    FADD float ptr [ESP + 0x368]        ; 005b3426
    SHL EAX,0x2                         ; 005b342d
    FSTP float ptr [EBX]                ; 005b3430
    ADD EDX,EAX                         ; 005b3432
    FADD float ptr [ESP + 0x36c]        ; 005b3434
    ADD EDX,0x28                        ; 005b343b
    FSTP float ptr [EBX + 0x4]          ; 005b343e
    PUSH EDX                            ; 005b3441
    FADD float ptr [ESP + 0x374]        ; 005b3442
    PUSH ESI                            ; 005b3449
    LEA ESI,[ESP + 0x94]                ; 005b344a
    FSTP float ptr [EBX + 0x8]          ; 005b3451
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b3454
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x94]                ; 005b3459
    LEA EAX,[ESP + 0x400]               ; 005b3460
    ADD ESP,0x8                         ; 005b3467
    LEA EDX,[ESP + 0x530]               ; 005b346a
    MOVSD ES:EDI,ESI                    ; 005b3471
    MOVSD ES:EDI,ESI                    ; 005b3472
    MOVSD ES:EDI,ESI                    ; 005b3473
    CMP EDX,EAX                         ; 005b3474
    JZ 0x005b34a2                       ; 005b3476
        ;   XREF to: 005b34a2 (CONDITIONAL_JUMP)  ; LAB_005b34a2
    MOV EAX,dword ptr [ESP + 0x3f8]     ; 005b3478
    MOV dword ptr [ESP + 0x530],EAX     ; 005b347f
    MOV EAX,dword ptr [ESP + 0x3fc]     ; 005b3486
    MOV dword ptr [ESP + 0x534],EAX     ; 005b348d
    MOV EAX,dword ptr [ESP + 0x400]     ; 005b3494
    MOV dword ptr [ESP + 0x538],EAX     ; 005b349b
        ;   Label: LAB_005b349b
    LEA EAX,[EBX + 0x4c]                ; 005b34a2
        ;   Label: LAB_005b34a2
    FLD float ptr [ESP + 0x534]         ; 005b34a5
    FMUL float ptr [EAX + 0x4]          ; 005b34ac
    FLD float ptr [ESP + 0x530]         ; 005b34af
    FMUL float ptr [EAX]                ; 005b34b6
    FADDP                               ; 005b34b8
    FLD float ptr [ESP + 0x538]         ; 005b34ba
    FMUL float ptr [EAX + 0x8]          ; 005b34c1
    FADDP                               ; 005b34c4
    FMUL float ptr [0x005f1308]         ; 005b34c6 | DAT_005f1308
    FLD float ptr [ESP + 0x530]         ; 005b34cc
    FXCH                                ; 005b34d3
    FSTP float ptr [ESP + 0x628]        ; 005b34d5
    FMUL float ptr [ESP + 0x628]        ; 005b34dc
    FLD float ptr [ESP + 0x534]         ; 005b34e3
    FMUL float ptr [ESP + 0x628]        ; 005b34ea
    FLD float ptr [ESP + 0x538]         ; 005b34f1
    FMUL float ptr [ESP + 0x628]        ; 005b34f8
    LEA EDI,[ESP + 0x53c]               ; 005b34ff
    LEA ESI,[ESP + 0x20c]               ; 005b3506
    FXCH ST2                            ; 005b350d
    FSTP float ptr [ESP + 0x20c]        ; 005b350f
    FSTP float ptr [ESP + 0x210]        ; 005b3516
    FSTP float ptr [ESP + 0x214]        ; 005b351d
    MOVSD ES:EDI,ESI                    ; 005b3524
    MOVSD ES:EDI,ESI                    ; 005b3525
    MOVSD ES:EDI,ESI                    ; 005b3526
    LEA EDX,[ESP + 0x5b4]               ; 005b3527
    FLD float ptr [ESP + 0x540]         ; 005b352e
    FLD float ptr [ESP + 0x53c]         ; 005b3535
    FSUB float ptr [EAX]                ; 005b353c
    FLD float ptr [ESP + 0x544]         ; 005b353e
    FXCH                                ; 005b3545
    FSTP float ptr [ESP + 0x5d8]        ; 005b3547
    FXCH                                ; 005b354e
    FSUB float ptr [EAX + 0x4]          ; 005b3550
    LEA EDI,[ESP + 0x1b8]               ; 005b3553
    FSTP float ptr [ESP + 0x5dc]        ; 005b355a
    FSUB float ptr [EAX + 0x8]          ; 005b3561
    LEA ESI,[ESP + 0x5d8]               ; 005b3564
    FSTP float ptr [ESP + 0x5e0]        ; 005b356b
    LEA EAX,[ESP + 0x1b8]               ; 005b3572
    MOVSD ES:EDI,ESI                    ; 005b3579
    MOVSD ES:EDI,ESI                    ; 005b357a
    MOVSD ES:EDI,ESI                    ; 005b357b
    CMP EDX,EAX                         ; 005b357c
    JZ 0x005b35aa                       ; 005b357e
        ;   XREF to: 005b35aa (CONDITIONAL_JUMP)  ; LAB_005b35aa
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005b3580
    MOV dword ptr [ESP + 0x5b4],EAX     ; 005b3587
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 005b358e
    MOV dword ptr [ESP + 0x5b8],EAX     ; 005b3595
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005b359c
    MOV dword ptr [ESP + 0x5bc],EAX     ; 005b35a3
    FLD float ptr [0x005f130c]          ; 005b35aa | DAT_005f130c
        ;   Label: LAB_005b35aa
    FLD float ptr [ESP + 0x5b4]         ; 005b35b0
    FMUL ST1                            ; 005b35b7
    FLD float ptr [ESP + 0x5b8]         ; 005b35b9
    FMUL ST2                            ; 005b35c0
    FLD float ptr [ESP + 0x5bc]         ; 005b35c2
    FMULP ST3                           ; 005b35c9
    FXCH                                ; 005b35cb
    FLD float ptr [0x005f1320]          ; 005b35cd | DAT_005f1320
    FXCH                                ; 005b35d3
    FMUL ST1                            ; 005b35d5
    FXCH ST2                            ; 005b35d7
    FMUL ST1                            ; 005b35d9
    FLD1                                ; 005b35db
    FXCH ST4                            ; 005b35dd
    FMULP ST2                           ; 005b35df
    FXCH ST3                            ; 005b35e1
    FDIV float ptr [EBP + 0x18]         ; 005b35e3
    LEA EDI,[ESP + 0x11c]               ; 005b35e6
    LEA EDX,[EBX + 0x4c]                ; 005b35ed
    FXCH ST2                            ; 005b35f0
    FSTP float ptr [ESP + 0x5b4]        ; 005b35f2
    FXCH ST2                            ; 005b35f9
    FSTP float ptr [ESP + 0x5b8]        ; 005b35fb
    FXCH                                ; 005b3602
    FSTP float ptr [ESP + 0x5bc]        ; 005b3604
    FLD float ptr [ESP + 0x5b4]         ; 005b360b
    FSUB float ptr [EDX]                ; 005b3612
    FLD float ptr [ESP + 0x5b8]         ; 005b3614
    FXCH                                ; 005b361b
    FSTP float ptr [ESP + 0x284]        ; 005b361d
    FSUB float ptr [EDX + 0x4]          ; 005b3624
    FLD float ptr [ESP + 0x5bc]         ; 005b3627
    FXCH                                ; 005b362e
    FSTP float ptr [ESP + 0x288]        ; 005b3630
    FSUB float ptr [EDX + 0x8]          ; 005b3637
    LEA ESI,[ESP + 0x284]               ; 005b363a
    FSTP float ptr [ESP + 0x28c]        ; 005b3641
    MOVSD ES:EDI,ESI                    ; 005b3648
    MOVSD ES:EDI,ESI                    ; 005b3649
    MOVSD ES:EDI,ESI                    ; 005b364a
    LEA EAX,[EBX + 0x94]                ; 005b364b
    FLD float ptr [ESP + 0x11c]         ; 005b3651
    FMUL float ptr [EAX]                ; 005b3658
    FLD float ptr [ESP + 0x120]         ; 005b365a
    FXCH                                ; 005b3661
    FSTP float ptr [ESP + 0x128]        ; 005b3663
    FMUL float ptr [EAX]                ; 005b366a
    FLD float ptr [ESP + 0x124]         ; 005b366c
    FXCH                                ; 005b3673
    FSTP float ptr [ESP + 0x12c]        ; 005b3675
    FMUL float ptr [EAX]                ; 005b367c
    LEA EDI,[ESP + 0x194]               ; 005b367e
    LEA ESI,[ESP + 0x128]               ; 005b3685
    FSTP float ptr [ESP + 0x130]        ; 005b368c
    MOVSD ES:EDI,ESI                    ; 005b3693
    MOVSD ES:EDI,ESI                    ; 005b3694
    MOVSD ES:EDI,ESI                    ; 005b3695
    FLD float ptr [ESP + 0x194]         ; 005b3696
    FMUL ST1                            ; 005b369d
    FLD float ptr [ESP + 0x198]         ; 005b369f
    FMUL ST2                            ; 005b36a6
    FLD float ptr [ESP + 0x19c]         ; 005b36a8
    FMULP ST3                           ; 005b36af
    LEA EAX,[EBX + 0x64]                ; 005b36b1
    LEA EDI,[ESP + 0xd4]                ; 005b36b4
    LEA ESI,[ESP + 0x164]               ; 005b36bb
    FXCH                                ; 005b36c2
    FSTP float ptr [ESP + 0x164]        ; 005b36c4
    FSTP float ptr [ESP + 0x168]        ; 005b36cb
    FSTP float ptr [ESP + 0x16c]        ; 005b36d2
    MOVSD ES:EDI,ESI                    ; 005b36d9
    MOVSD ES:EDI,ESI                    ; 005b36da
    MOVSD ES:EDI,ESI                    ; 005b36db
    FLD float ptr [EAX]                 ; 005b36dc
    FADD float ptr [ESP + 0xd4]         ; 005b36de
    FLD float ptr [EAX + 0x4]           ; 005b36e5
    FXCH                                ; 005b36e8
    FSTP float ptr [EAX]                ; 005b36ea
    FADD float ptr [ESP + 0xd8]         ; 005b36ec
    FLD float ptr [EAX + 0x8]           ; 005b36f3
    FXCH                                ; 005b36f6
    FSTP float ptr [EAX + 0x4]          ; 005b36f8
    FADD float ptr [ESP + 0xdc]         ; 005b36fb
    FSTP float ptr [EAX + 0x8]          ; 005b3702
    LEA EAX,[EBX + 0x70]                ; 005b3705
    MOV dword ptr [EAX + 0x8],0x0       ; 005b3708
    MOV EDX,dword ptr [ESP + 0x69c]     ; 005b370f
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b3716
    MOV dword ptr [EAX + 0x4],ECX       ; 005b3719
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b371c
    MOV dword ptr [EAX],ECX             ; 005b371f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b3721
    SUB EAX,EDX                         ; 005b3728
    SHL EAX,0x2                         ; 005b372a
    ADD EAX,EDX                         ; 005b372d
    SHL EAX,0x2                         ; 005b372f
    MOV dword ptr [ESP + 0x694],EAX     ; 005b3732
    LEA EAX,[EBX + 0xb4]                ; 005b3739
    MOV ESI,dword ptr [ESP + 0x694]     ; 005b373f
    MOV dword ptr [ESP + 0x68c],EAX     ; 005b3746
    ADD EAX,ESI                         ; 005b374d
    FLD float ptr [EAX + 0x4]           ; 005b374f
    FMUL float ptr [ESP + 0xdc]         ; 005b3752
    FLD float ptr [EAX + 0x8]           ; 005b3759
    FMUL float ptr [ESP + 0xd8]         ; 005b375c
    FSUBP                               ; 005b3763
    FSTP float ptr [ESP + 0x1c4]        ; 005b3765
    FLD float ptr [EAX + 0x8]           ; 005b376c
    FMUL float ptr [ESP + 0xd4]         ; 005b376f
    FLD float ptr [EAX]                 ; 005b3776
    FMUL float ptr [ESP + 0xdc]         ; 005b3778
    FSUBP                               ; 005b377f
    FSTP float ptr [ESP + 0x1c8]        ; 005b3781
    FLD float ptr [EAX]                 ; 005b3788
    FMUL float ptr [ESP + 0xd8]         ; 005b378a
    FLD float ptr [EAX + 0x4]           ; 005b3791
    FMUL float ptr [ESP + 0xd4]         ; 005b3794
    MOV ECX,dword ptr [ESP + 0x690]     ; 005b379b
    LEA EDI,[ESP + 0xf8]                ; 005b37a2
    FSUBP                               ; 005b37a9
    LEA ESI,[ESP + 0x1c4]               ; 005b37ab
    FSTP float ptr [ESP + 0x1cc]        ; 005b37b2
    MOVSD ES:EDI,ESI                    ; 005b37b9
    MOVSD ES:EDI,ESI                    ; 005b37ba
    MOVSD ES:EDI,ESI                    ; 005b37bb
    LEA EDX,[ECX*0x4 + 0x0]             ; 005b37bc
    FLD float ptr [0x005f1314]          ; 005b37c3 | DAT_005f1314
    FLD float ptr [ESP + 0xf8]          ; 005b37c9
    FMUL ST1                            ; 005b37d0
    SUB EDX,ECX                         ; 005b37d2
    FLD float ptr [ESP + 0xfc]          ; 005b37d4
    FMUL ST2                            ; 005b37db
    SHL EDX,0x2                         ; 005b37dd
    FLD float ptr [ESP + 0x100]         ; 005b37e0
    FMULP ST3                           ; 005b37e7
    ADD ECX,EDX                         ; 005b37e9
    LEA EAX,[EBX + 0x88]                ; 005b37eb
    LEA EDI,[ESP + 0x1a0]               ; 005b37f1
    LEA ESI,[ESP + 0x224]               ; 005b37f8
    FXCH                                ; 005b37ff
    FSTP float ptr [ESP + 0x224]        ; 005b3801
    FSTP float ptr [ESP + 0x228]        ; 005b3808
    FSTP float ptr [ESP + 0x22c]        ; 005b380f
    MOVSD ES:EDI,ESI                    ; 005b3816
    MOVSD ES:EDI,ESI                    ; 005b3817
    MOVSD ES:EDI,ESI                    ; 005b3818
    MOV EDX,dword ptr [ESP + 0x68c]     ; 005b3819
    FLD float ptr [EAX]                 ; 005b3820
    FADD float ptr [ESP + 0x1a0]        ; 005b3822
    FLD float ptr [EAX + 0x4]           ; 005b3829
    FXCH                                ; 005b382c
    FSTP float ptr [EAX]                ; 005b382e
    FADD float ptr [ESP + 0x1a4]        ; 005b3830
    FLD float ptr [EAX + 0x8]           ; 005b3837
    FXCH                                ; 005b383a
    FSTP float ptr [EAX + 0x4]          ; 005b383c
    FADD float ptr [ESP + 0x1a8]        ; 005b383f
    SHL ECX,0x2                         ; 005b3846
    FSTP float ptr [EAX + 0x8]          ; 005b3849
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 005b384c
    FMUL float ptr [ESP + 0xdc]         ; 005b3850
    FLD float ptr [ECX + EDX*0x1 + 0x8] ; 005b3857
    FMUL float ptr [ESP + 0xd8]         ; 005b385b
    FSUBP                               ; 005b3862
    FSTP float ptr [ESP + 0x26c]        ; 005b3864
    FLD float ptr [ECX + EDX*0x1 + 0x8] ; 005b386b
    FMUL float ptr [ESP + 0xd4]         ; 005b386f
    FLD float ptr [ECX + EDX*0x1]       ; 005b3876
    FMUL float ptr [ESP + 0xdc]         ; 005b3879
    FSUBP                               ; 005b3880
    FSTP float ptr [ESP + 0x270]        ; 005b3882
    FLD float ptr [ECX + EDX*0x1]       ; 005b3889
    FMUL float ptr [ESP + 0xd8]         ; 005b388c
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 005b3893
    FMUL float ptr [ESP + 0xd4]         ; 005b3897
    LEA EDI,[ESP + 0x578]               ; 005b389e
    FSUBP                               ; 005b38a5
    LEA ESI,[ESP + 0x26c]               ; 005b38a7
    FSTP float ptr [ESP + 0x274]        ; 005b38ae
    MOVSD ES:EDI,ESI                    ; 005b38b5
    MOVSD ES:EDI,ESI                    ; 005b38b6
    MOVSD ES:EDI,ESI                    ; 005b38b7
    FLD float ptr [0x005f1314]          ; 005b38b8 | DAT_005f1314
    FLD float ptr [ESP + 0x578]         ; 005b38be
    FMUL ST1                            ; 005b38c5
    FLD float ptr [ESP + 0x57c]         ; 005b38c7
    FMUL ST2                            ; 005b38ce
    FLD float ptr [ESP + 0x580]         ; 005b38d0
    FMULP ST3                           ; 005b38d7
    LEA EDI,[ESP + 0x4a0]               ; 005b38d9
    LEA ESI,[ESP + 0x2d8]               ; 005b38e0
    FXCH                                ; 005b38e7
    FSTP float ptr [ESP + 0x2d8]        ; 005b38e9
    FSTP float ptr [ESP + 0x2dc]        ; 005b38f0
    FSTP float ptr [ESP + 0x2e0]        ; 005b38f7
    MOVSD ES:EDI,ESI                    ; 005b38fe
    MOVSD ES:EDI,ESI                    ; 005b38ff
    MOVSD ES:EDI,ESI                    ; 005b3900
    FLD float ptr [EAX + 0x4]           ; 005b3901
    FLD float ptr [EAX]                 ; 005b3904
    FADD float ptr [ESP + 0x4a0]        ; 005b3906
    FLD float ptr [EAX + 0x8]           ; 005b390d
    FXCH                                ; 005b3910
    FSTP float ptr [EAX]                ; 005b3912
    FXCH                                ; 005b3914
    FADD float ptr [ESP + 0x4a4]        ; 005b3916
    MOV ESI,dword ptr [ESP + 0x694]     ; 005b391d
    FSTP float ptr [EAX + 0x4]          ; 005b3924
    FADD float ptr [ESP + 0x4a8]        ; 005b3927
    LEA EDI,[ESP + 0x1dc]               ; 005b392e
    FSTP float ptr [EAX + 0x8]          ; 005b3935
    LEA ESI,[ESI + EBX*0x1 + 0xb4]      ; 005b3938
    MOVSD ES:EDI,ESI                    ; 005b393f
    MOVSD ES:EDI,ESI                    ; 005b3940
    MOVSD ES:EDI,ESI                    ; 005b3941
    LEA ESI,[ECX + EBX*0x1]             ; 005b3942
    LEA EDI,[ESP + 0x1f4]               ; 005b3945
    LEA ESI,[ESI + 0xb4]                ; 005b394c
    MOVSD ES:EDI,ESI                    ; 005b3952
    MOVSD ES:EDI,ESI                    ; 005b3953
    MOVSD ES:EDI,ESI                    ; 005b3954
    LEA EAX,[ESP + 0x524]               ; 005b3955
    XOR EDI,EDI                         ; 005b395c
    PUSH EAX                            ; 005b395e
    MOV dword ptr [ESP + 0x528],EDI     ; 005b395f
    MOV dword ptr [ESP + 0x52c],EDI     ; 005b3966
    MOV dword ptr [ESP + 0x530],EDI     ; 005b396d
    LEA EAX,[EBX + 0x18]                ; 005b3974
    FLD float ptr [EBX + 0x94]          ; 005b3977
    FMUL double ptr [0x005f12f0]        ; 005b397d | DAT_005f12f0
    PUSH EAX                            ; 005b3983
    LEA ESI,[ESP + 0x34c]               ; 005b3984
    LEA EDI,[ESP + 0x550]               ; 005b398b
    FSTP float ptr [ESP + 0x530]        ; 005b3992
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b3999
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x34c]               ; 005b399e
    LEA EAX,[ESP + 0x550]               ; 005b39a5
    ADD ESP,0x8                         ; 005b39ac
    LEA EDX,[ESP + 0x524]               ; 005b39af
    MOVSD ES:EDI,ESI                    ; 005b39b6
    MOVSD ES:EDI,ESI                    ; 005b39b7
    MOVSD ES:EDI,ESI                    ; 005b39b8
    CMP EDX,EAX                         ; 005b39b9
    JZ 0x005b39e7                       ; 005b39bb
        ;   XREF to: 005b39e7 (CONDITIONAL_JUMP)  ; LAB_005b39e7
    MOV EAX,dword ptr [ESP + 0x548]     ; 005b39bd
    MOV dword ptr [ESP + 0x524],EAX     ; 005b39c4
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005b39cb
    MOV dword ptr [ESP + 0x528],EAX     ; 005b39d2
    MOV EAX,dword ptr [ESP + 0x550]     ; 005b39d9
    MOV dword ptr [ESP + 0x52c],EAX     ; 005b39e0
    FLD float ptr [0x005f1310]          ; 005b39e7 | DAT_005f1310
        ;   Label: LAB_005b39e7
    FLD float ptr [ESP + 0x524]         ; 005b39ed
    FMUL ST1                            ; 005b39f4
    FLD float ptr [ESP + 0x528]         ; 005b39f6
    FMUL ST2                            ; 005b39fd
    FLD float ptr [ESP + 0x52c]         ; 005b39ff
    FMUL ST3                            ; 005b3a06
    LEA EDI,[ESP + 0x584]               ; 005b3a08
    LEA ESI,[ESP + 0x350]               ; 005b3a0f
    FXCH ST2                            ; 005b3a16
    FSTP float ptr [ESP + 0x350]        ; 005b3a18
    FSTP float ptr [ESP + 0x354]        ; 005b3a1f
    FSTP float ptr [ESP + 0x358]        ; 005b3a26
    MOVSD ES:EDI,ESI                    ; 005b3a2d
    MOVSD ES:EDI,ESI                    ; 005b3a2e
    MOVSD ES:EDI,ESI                    ; 005b3a2f
    FLD float ptr [ESP + 0x1e0]         ; 005b3a30
    FMUL float ptr [ESP + 0x58c]        ; 005b3a37
    FLD float ptr [ESP + 0x1e4]         ; 005b3a3e
    FMUL float ptr [ESP + 0x584]        ; 005b3a45
    FLD float ptr [ESP + 0x1dc]         ; 005b3a4c
    FMUL float ptr [ESP + 0x588]        ; 005b3a53
    FLD float ptr [ESP + 0x1e4]         ; 005b3a5a
    FMUL float ptr [ESP + 0x588]        ; 005b3a61
    FLD float ptr [ESP + 0x1dc]         ; 005b3a68
    FMUL float ptr [ESP + 0x58c]        ; 005b3a6f
    FLD float ptr [ESP + 0x1e0]         ; 005b3a76
    FMUL float ptr [ESP + 0x584]        ; 005b3a7d
    LEA EAX,[EBX + 0x88]                ; 005b3a84
    LEA EDI,[ESP + 0xe0]                ; 005b3a8a
    LEA ESI,[ESP + 0x398]               ; 005b3a91
    FXCH ST2                            ; 005b3a98
    FSUBP ST5,ST0                       ; 005b3a9a
    FSUBP ST3,ST0                       ; 005b3a9c
    FSUBP                               ; 005b3a9e
    FXCH ST2                            ; 005b3aa0
    FSTP float ptr [ESP + 0x398]        ; 005b3aa2
    FSTP float ptr [ESP + 0x39c]        ; 005b3aa9
    FSTP float ptr [ESP + 0x3a0]        ; 005b3ab0
    MOVSD ES:EDI,ESI                    ; 005b3ab7
    MOVSD ES:EDI,ESI                    ; 005b3ab8
    MOVSD ES:EDI,ESI                    ; 005b3ab9
    FLD float ptr [EAX]                 ; 005b3aba
    FADD float ptr [ESP + 0xe0]         ; 005b3abc
    FLD float ptr [EAX + 0x4]           ; 005b3ac3
    FXCH                                ; 005b3ac6
    FSTP float ptr [EAX]                ; 005b3ac8
    FADD float ptr [ESP + 0xe4]         ; 005b3aca
    FLD float ptr [EAX + 0x8]           ; 005b3ad1
    FXCH                                ; 005b3ad4
    FSTP float ptr [EAX + 0x4]          ; 005b3ad6
    FADD float ptr [ESP + 0xe8]         ; 005b3ad9
    FSTP float ptr [EAX + 0x8]          ; 005b3ae0
    FLD float ptr [ESP + 0x524]         ; 005b3ae3
    FMUL ST1                            ; 005b3aea
    FLD float ptr [ESP + 0x528]         ; 005b3aec
    FMUL ST2                            ; 005b3af3
    FLD float ptr [ESP + 0x52c]         ; 005b3af5
    FMULP ST3                           ; 005b3afc
    LEA EDI,[ESP + 0x2f0]               ; 005b3afe
    LEA ESI,[ESP + 0x404]               ; 005b3b05
    FXCH                                ; 005b3b0c
    FSTP float ptr [ESP + 0x404]        ; 005b3b0e
    FSTP float ptr [ESP + 0x408]        ; 005b3b15
    FSTP float ptr [ESP + 0x40c]        ; 005b3b1c
    MOVSD ES:EDI,ESI                    ; 005b3b23
    MOVSD ES:EDI,ESI                    ; 005b3b24
    MOVSD ES:EDI,ESI                    ; 005b3b25
    FLD float ptr [ESP + 0x1f8]         ; 005b3b26
    FMUL float ptr [ESP + 0x2f8]        ; 005b3b2d
    FLD float ptr [ESP + 0x1fc]         ; 005b3b34
    FMUL float ptr [ESP + 0x2f0]        ; 005b3b3b
    FLD float ptr [ESP + 0x1f4]         ; 005b3b42
    FMUL float ptr [ESP + 0x2f4]        ; 005b3b49
    FLD float ptr [ESP + 0x1fc]         ; 005b3b50
    FMUL float ptr [ESP + 0x2f4]        ; 005b3b57
    FLD float ptr [ESP + 0x1f4]         ; 005b3b5e
    FMUL float ptr [ESP + 0x2f8]        ; 005b3b65
    FLD float ptr [ESP + 0x1f8]         ; 005b3b6c
    FMUL float ptr [ESP + 0x2f0]        ; 005b3b73
    LEA EDI,[ESP + 0x314]               ; 005b3b7a
    LEA ESI,[ESP + 0x434]               ; 005b3b81
    FXCH ST2                            ; 005b3b88
    FSUBP ST5,ST0                       ; 005b3b8a
    FSUBP ST3,ST0                       ; 005b3b8c
    FSUBP                               ; 005b3b8e
    FXCH ST2                            ; 005b3b90
    FSTP float ptr [ESP + 0x434]        ; 005b3b92
    FSTP float ptr [ESP + 0x438]        ; 005b3b99
    FSTP float ptr [ESP + 0x43c]        ; 005b3ba0
    MOVSD ES:EDI,ESI                    ; 005b3ba7
    MOVSD ES:EDI,ESI                    ; 005b3ba8
    MOVSD ES:EDI,ESI                    ; 005b3ba9
    FLD float ptr [EAX]                 ; 005b3baa
    FADD float ptr [ESP + 0x314]        ; 005b3bac
    FLD float ptr [EAX + 0x4]           ; 005b3bb3
    FXCH                                ; 005b3bb6
    FSTP float ptr [EAX]                ; 005b3bb8
    FADD float ptr [ESP + 0x318]        ; 005b3bba
    FLD float ptr [EAX + 0x8]           ; 005b3bc1
    FXCH                                ; 005b3bc4
    FSTP float ptr [EAX + 0x4]          ; 005b3bc6
    FADD float ptr [ESP + 0x31c]        ; 005b3bc9
    FSTP float ptr [EAX + 0x8]          ; 005b3bd0
    MOV ECX,dword ptr [ESP + 0x63c]     ; 005b3bd3
        ;   Label: LAB_005b3bd3
    CMP ECX,0x3                         ; 005b3bda
    JL 0x005b406e                       ; 005b3bdd
        ;   XREF to: 005b406e (CONDITIONAL_JUMP)  ; LAB_005b406e
    LEA EAX,[EBX + 0xb4]                ; 005b3be3
    XOR ESI,ESI                         ; 005b3be9
    XOR EDX,EDX                         ; 005b3beb
    MOV dword ptr [ESP + 0x688],ESI     ; 005b3bed
    MOV dword ptr [ESP + 0x660],EAX     ; 005b3bf4
    LEA EAX,[ECX*0x4 + 0x0]             ; 005b3bfb
    MOV dword ptr [ESP + 0x640],ESI     ; 005b3c02
    MOV dword ptr [ESP + 0x678],EAX     ; 005b3c09
    TEST EAX,EAX                        ; 005b3c10
    JLE 0x005b3d86                      ; 005b3c12
        ;   XREF to: 005b3d86 (CONDITIONAL_JUMP)  ; LAB_005b3d86
    MOV EAX,dword ptr [ESP + EDX*0x1 + 0x6c] ; 005b3c18
        ;   Label: LAB_005b3c18
    MOV dword ptr [ESP + 0x67c],EAX     ; 005b3c1c
    IMUL EAX,EAX,0x34                   ; 005b3c23
    MOV dword ptr [ESP + 0x68c],EAX     ; 005b3c26
    MOV EAX,dword ptr [ESP + 0x660]     ; 005b3c2d
    ADD EAX,dword ptr [ESP + 0x68c]     ; 005b3c34
    LEA ECX,[EAX + 0xc]                 ; 005b3c3b
    FLD float ptr [ECX]                 ; 005b3c3e
    FSUB float ptr [EAX + 0x18]         ; 005b3c40
    FSTP float ptr [ESP + 0xec]         ; 005b3c43
    FLD float ptr [ECX + 0x4]           ; 005b3c4a
    FSUB float ptr [EAX + 0x1c]         ; 005b3c4d
    LEA EDI,[ESP + 0x200]               ; 005b3c50
    FSTP float ptr [ESP + 0xf0]         ; 005b3c57
    FLD float ptr [ECX + 0x8]           ; 005b3c5e
    FSUB float ptr [EAX + 0x20]         ; 005b3c61
    LEA ESI,[ESP + 0xec]                ; 005b3c64
    FSTP float ptr [ESP + 0xf4]         ; 005b3c6b
    MOV EAX,dword ptr [ESP + 0x68c]     ; 005b3c72
    MOVSD ES:EDI,ESI                    ; 005b3c79
    MOVSD ES:EDI,ESI                    ; 005b3c7a
    MOVSD ES:EDI,ESI                    ; 005b3c7b
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 005b3c7c
    FLD1                                ; 005b3c83
    FSUBRP                              ; 005b3c85
    FMUL double ptr [0x005f1318]        ; 005b3c87 | DAT_005f1318
    FLD float ptr [ESP + 0x200]         ; 005b3c8d
    FXCH                                ; 005b3c94
    FSTP float ptr [ESP + 0x64c]        ; 005b3c96
    FMUL float ptr [ESP + 0x64c]        ; 005b3c9d
    FLD float ptr [ESP + 0x204]         ; 005b3ca4
    FMUL float ptr [ESP + 0x64c]        ; 005b3cab
    FLD float ptr [ESP + 0x208]         ; 005b3cb2
    FMUL float ptr [ESP + 0x64c]        ; 005b3cb9
    LEA EDI,[ESP + 0xc8]                ; 005b3cc0
    LEA ESI,[ESP + 0x590]               ; 005b3cc7
    FXCH ST2                            ; 005b3cce
    FSTP float ptr [ESP + 0x590]        ; 005b3cd0
    FSTP float ptr [ESP + 0x594]        ; 005b3cd7
    FSTP float ptr [ESP + 0x598]        ; 005b3cde
    MOVSD ES:EDI,ESI                    ; 005b3ce5
    MOVSD ES:EDI,ESI                    ; 005b3ce6
    MOVSD ES:EDI,ESI                    ; 005b3ce7
    FLD float ptr [ESP + 0xcc]          ; 005b3ce8
    FMUL ST0                            ; 005b3cef
    FLD float ptr [ESP + 0xc8]          ; 005b3cf1
    FMUL ST0                            ; 005b3cf8
    FADDP                               ; 005b3cfa
    FLD float ptr [ESP + 0xd0]          ; 005b3cfc
    FMUL ST0                            ; 005b3d03
    FADDP                               ; 005b3d05
    FSQRT                               ; 005b3d07
    FST float ptr [ESP + 0x650]         ; 005b3d09
    FCOMP float ptr [ESP + 0x640]       ; 005b3d10
    FNSTSW AX                           ; 005b3d17
    SAHF                                ; 005b3d19
    JBE 0x005b3d74                      ; 005b3d1a
        ;   XREF to: 005b3d74 (CONDITIONAL_JUMP)  ; LAB_005b3d74
    MOV EAX,dword ptr [ESP + 0x67c]     ; 005b3d1c
    MOV dword ptr [ESP + 0x688],EAX     ; 005b3d23
    MOV EAX,dword ptr [ESP + 0x650]     ; 005b3d2a
    LEA ECX,[ESP + 0x4ac]               ; 005b3d31
    MOV dword ptr [ESP + 0x640],EAX     ; 005b3d38
    LEA EAX,[ESP + 0xc8]                ; 005b3d3f
    CMP ECX,EAX                         ; 005b3d46
    JZ 0x005b3d74                       ; 005b3d48
        ;   XREF to: 005b3d74 (CONDITIONAL_JUMP)  ; LAB_005b3d74
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005b3d4a
    MOV dword ptr [ESP + 0x4ac],EAX     ; 005b3d51
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005b3d58
    MOV dword ptr [ESP + 0x4b0],EAX     ; 005b3d5f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005b3d66
    MOV dword ptr [ESP + 0x4b4],EAX     ; 005b3d6d
    MOV ECX,dword ptr [ESP + 0x678]     ; 005b3d74
        ;   Label: LAB_005b3d74
    ADD EDX,0x4                         ; 005b3d7b
    CMP EDX,ECX                         ; 005b3d7e
    JL 0x005b3c18                       ; 005b3d80
        ;   XREF to: 005b3c18 (CONDITIONAL_JUMP)  ; LAB_005b3c18
    FLD float ptr [EBX]                 ; 005b3d86
        ;   Label: LAB_005b3d86
    FLD float ptr [EBX + 0x4]           ; 005b3d88
    MOV EDX,dword ptr [ESP + 0x688]     ; 005b3d8b
    FLD float ptr [EBX + 0x8]           ; 005b3d92
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b3d95
    MOV ESI,dword ptr [ESP + 0x660]     ; 005b3d9c
    SUB EAX,EDX                         ; 005b3da3
    LEA EDI,[ESP + 0x3b0]               ; 005b3da5
    SHL EAX,0x2                         ; 005b3dac
    FXCH ST2                            ; 005b3daf
    FADD float ptr [ESP + 0x4ac]        ; 005b3db1
    ADD EAX,EDX                         ; 005b3db8
    FSTP float ptr [EBX]                ; 005b3dba
    SHL EAX,0x2                         ; 005b3dbc
    FADD float ptr [ESP + 0x4b0]        ; 005b3dbf
    ADD EAX,ESI                         ; 005b3dc6
    FSTP float ptr [EBX + 0x4]          ; 005b3dc8
    ADD EAX,0x28                        ; 005b3dcb
    FADD float ptr [ESP + 0x4b4]        ; 005b3dce
    PUSH EAX                            ; 005b3dd5
    LEA EAX,[EBX + 0x18]                ; 005b3dd6
    LEA ESI,[ESP + 0x510]               ; 005b3dd9
    PUSH EAX                            ; 005b3de0
    FSTP float ptr [EBX + 0x8]          ; 005b3de1
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b3de4
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x514]               ; 005b3de9
    ADD ESP,0x8                         ; 005b3df0
    MOVSD ES:EDI,ESI                    ; 005b3df3
    MOVSD ES:EDI,ESI                    ; 005b3df4
    MOVSD ES:EDI,ESI                    ; 005b3df5
    LEA EAX,[EBX + 0x4c]                ; 005b3df6
    FLD float ptr [ESP + 0x3b4]         ; 005b3df9
    FMUL float ptr [EAX + 0x4]          ; 005b3e00
    FLD float ptr [ESP + 0x3b0]         ; 005b3e03
    FMUL float ptr [EAX]                ; 005b3e0a
    FADDP                               ; 005b3e0c
    FLD float ptr [ESP + 0x3b8]         ; 005b3e0e
    FMUL float ptr [EAX + 0x8]          ; 005b3e15
    FADDP                               ; 005b3e18
    FMUL float ptr [0x005f1308]         ; 005b3e1a | DAT_005f1308
    FLD float ptr [ESP + 0x3b0]         ; 005b3e20
    FXCH                                ; 005b3e27
    FSTP float ptr [ESP + 0x644]        ; 005b3e29
    FMUL float ptr [ESP + 0x644]        ; 005b3e30
    FLD float ptr [ESP + 0x3b4]         ; 005b3e37
    FMUL float ptr [ESP + 0x644]        ; 005b3e3e
    FLD float ptr [ESP + 0x3b8]         ; 005b3e45
    FMUL float ptr [ESP + 0x644]        ; 005b3e4c
    LEA EDI,[ESP + 0x260]               ; 005b3e53
    LEA ESI,[ESP + 0x278]               ; 005b3e5a
    FXCH ST2                            ; 005b3e61
    FSTP float ptr [ESP + 0x278]        ; 005b3e63
    FSTP float ptr [ESP + 0x27c]        ; 005b3e6a
    FSTP float ptr [ESP + 0x280]        ; 005b3e71
    MOVSD ES:EDI,ESI                    ; 005b3e78
    MOVSD ES:EDI,ESI                    ; 005b3e79
    MOVSD ES:EDI,ESI                    ; 005b3e7a
    LEA EDX,[ESP + 0x59c]               ; 005b3e7b
    FLD float ptr [ESP + 0x264]         ; 005b3e82
    FLD float ptr [ESP + 0x260]         ; 005b3e89
    FSUB float ptr [EAX]                ; 005b3e90
    FLD float ptr [ESP + 0x268]         ; 005b3e92
    FXCH                                ; 005b3e99
    FSTP float ptr [ESP + 0x290]        ; 005b3e9b
    FXCH                                ; 005b3ea2
    FSUB float ptr [EAX + 0x4]          ; 005b3ea4
    LEA EDI,[ESP + 0x59c]               ; 005b3ea7
    FSTP float ptr [ESP + 0x294]        ; 005b3eae
    FSUB float ptr [EAX + 0x8]          ; 005b3eb5
    LEA ESI,[ESP + 0x290]               ; 005b3eb8
    FSTP float ptr [ESP + 0x298]        ; 005b3ebf
    LEA EAX,[ESP + 0x500]               ; 005b3ec6
    MOVSD ES:EDI,ESI                    ; 005b3ecd
    MOVSD ES:EDI,ESI                    ; 005b3ece
    MOVSD ES:EDI,ESI                    ; 005b3ecf
    CMP EAX,EDX                         ; 005b3ed0
    JZ 0x005b3efe                       ; 005b3ed2
        ;   XREF to: 005b3efe (CONDITIONAL_JUMP)  ; LAB_005b3efe
    MOV EAX,dword ptr [ESP + 0x59c]     ; 005b3ed4
    MOV dword ptr [ESP + 0x500],EAX     ; 005b3edb
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 005b3ee2
    MOV dword ptr [ESP + 0x504],EAX     ; 005b3ee9
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 005b3ef0
    MOV dword ptr [ESP + 0x508],EAX     ; 005b3ef7
    FLD float ptr [0x005f130c]          ; 005b3efe | DAT_005f130c
        ;   Label: LAB_005b3efe
    FLD float ptr [ESP + 0x500]         ; 005b3f04
    FMUL ST1                            ; 005b3f0b
    FLD float ptr [ESP + 0x504]         ; 005b3f0d
    FMUL ST2                            ; 005b3f14
    FLD float ptr [ESP + 0x508]         ; 005b3f16
    FMULP ST3                           ; 005b3f1d
    FXCH                                ; 005b3f1f
    FLD float ptr [0x005f1324]          ; 005b3f21 | DAT_005f1324
    FXCH                                ; 005b3f27
    FMUL ST1                            ; 005b3f29
    FXCH ST2                            ; 005b3f2b
    FMUL ST1                            ; 005b3f2d
    FLD1                                ; 005b3f2f
    FXCH ST4                            ; 005b3f31
    FMULP ST2                           ; 005b3f33
    FXCH ST3                            ; 005b3f35
    FDIV float ptr [EBP + 0x18]         ; 005b3f37
    LEA EDI,[ESP + 0x470]               ; 005b3f3a
    LEA EDX,[EBX + 0x4c]                ; 005b3f41
    FXCH ST2                            ; 005b3f44
    FSTP float ptr [ESP + 0x500]        ; 005b3f46
    FXCH ST2                            ; 005b3f4d
    FSTP float ptr [ESP + 0x504]        ; 005b3f4f
    FXCH                                ; 005b3f56
    FSTP float ptr [ESP + 0x508]        ; 005b3f58
    FLD float ptr [ESP + 0x500]         ; 005b3f5f
    FSUB float ptr [EDX]                ; 005b3f66
    FLD float ptr [ESP + 0x504]         ; 005b3f68
    FXCH                                ; 005b3f6f
    FSTP float ptr [ESP + 0x458]        ; 005b3f71
    FSUB float ptr [EDX + 0x4]          ; 005b3f78
    FLD float ptr [ESP + 0x508]         ; 005b3f7b
    FXCH                                ; 005b3f82
    FSTP float ptr [ESP + 0x45c]        ; 005b3f84
    FSUB float ptr [EDX + 0x8]          ; 005b3f8b
    LEA ESI,[ESP + 0x458]               ; 005b3f8e
    FSTP float ptr [ESP + 0x460]        ; 005b3f95
    MOVSD ES:EDI,ESI                    ; 005b3f9c
    MOVSD ES:EDI,ESI                    ; 005b3f9d
    MOVSD ES:EDI,ESI                    ; 005b3f9e
    LEA EAX,[EBX + 0x94]                ; 005b3f9f
    FLD float ptr [ESP + 0x470]         ; 005b3fa5
    FMUL float ptr [EAX]                ; 005b3fac
    FLD float ptr [ESP + 0x474]         ; 005b3fae
    FXCH                                ; 005b3fb5
    FSTP float ptr [ESP + 0x308]        ; 005b3fb7
    FMUL float ptr [EAX]                ; 005b3fbe
    FLD float ptr [ESP + 0x478]         ; 005b3fc0
    FXCH                                ; 005b3fc7
    FSTP float ptr [ESP + 0x30c]        ; 005b3fc9
    FMUL float ptr [EAX]                ; 005b3fd0
    LEA EDI,[ESP + 0x5c0]               ; 005b3fd2
    LEA ESI,[ESP + 0x308]               ; 005b3fd9
    FSTP float ptr [ESP + 0x310]        ; 005b3fe0
    MOVSD ES:EDI,ESI                    ; 005b3fe7
    MOVSD ES:EDI,ESI                    ; 005b3fe8
    MOVSD ES:EDI,ESI                    ; 005b3fe9
    FLD float ptr [ESP + 0x5c0]         ; 005b3fea
    FMUL ST1                            ; 005b3ff1
    FLD float ptr [ESP + 0x5c4]         ; 005b3ff3
    FMUL ST2                            ; 005b3ffa
    FLD float ptr [ESP + 0x5c8]         ; 005b3ffc
    FMULP ST3                           ; 005b4003
    LEA EAX,[EBX + 0x64]                ; 005b4005
    LEA EDI,[ESP + 0x2c0]               ; 005b4008
    LEA ESI,[ESP + 0x32c]               ; 005b400f
    FXCH                                ; 005b4016
    FSTP float ptr [ESP + 0x32c]        ; 005b4018
    FSTP float ptr [ESP + 0x330]        ; 005b401f
    FSTP float ptr [ESP + 0x334]        ; 005b4026
    MOVSD ES:EDI,ESI                    ; 005b402d
    MOVSD ES:EDI,ESI                    ; 005b402e
    MOVSD ES:EDI,ESI                    ; 005b402f
    FLD float ptr [EAX]                 ; 005b4030
    FADD float ptr [ESP + 0x2c0]        ; 005b4032
    FLD float ptr [EAX + 0x4]           ; 005b4039
    FXCH                                ; 005b403c
    FSTP float ptr [EAX]                ; 005b403e
    FADD float ptr [ESP + 0x2c4]        ; 005b4040
    FLD float ptr [EAX + 0x8]           ; 005b4047
    FXCH                                ; 005b404a
    FSTP float ptr [EAX + 0x4]          ; 005b404c
    FADD float ptr [ESP + 0x2c8]        ; 005b404f
    FSTP float ptr [EAX + 0x8]          ; 005b4056
    LEA EAX,[EBX + 0x70]                ; 005b4059
    MOV dword ptr [EAX + 0x8],0x0       ; 005b405c
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b4063
    MOV dword ptr [EAX + 0x4],EDX       ; 005b4066
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b4069
    MOV dword ptr [EAX],EDX             ; 005b406c
    CMP dword ptr [ESP + 0x63c],0x0     ; 005b406e
        ;   Label: LAB_005b406e
    JLE 0x005b40eb                      ; 005b4076
        ;   XREF to: 005b40eb (CONDITIONAL_JUMP)  ; LAB_005b40eb
    LEA EAX,[EBX + 0x4c]                ; 005b407c
    FLD float ptr [EAX + 0x4]           ; 005b407f
    FMUL ST0                            ; 005b4082
    FLD float ptr [EAX]                 ; 005b4084
    FMUL ST0                            ; 005b4086
    FADDP                               ; 005b4088
    FLD float ptr [EAX + 0x8]           ; 005b408a
    FMUL ST0                            ; 005b408d
    FADDP                               ; 005b408f
    FSQRT                               ; 005b4091
    FLD1                                ; 005b4093
    FCOMPP                              ; 005b4095
    FNSTSW AX                           ; 005b4097
    SAHF                                ; 005b4099
    JBE 0x005b40eb                      ; 005b409a
        ;   XREF to: 005b40eb (CONDITIONAL_JUMP)  ; LAB_005b40eb
    MOV EDI,dword ptr [EBX + 0xb0]      ; 005b409c
    XOR EDX,EDX                         ; 005b40a2
    XOR ESI,ESI                         ; 005b40a4
    TEST EDI,EDI                        ; 005b40a6
    JLE 0x005b40d4                      ; 005b40a8
        ;   XREF to: 005b40d4 (CONDITIONAL_JUMP)  ; LAB_005b40d4
    MOV ECX,EBX                         ; 005b40aa
    FLD float ptr [ECX + 0xc4]          ; 005b40ac
        ;   Label: LAB_005b40ac
    FSUB float ptr [EBX + 0x258]        ; 005b40b2
    FABS                                ; 005b40b8
    FCOMP double ptr [0x005f1338]       ; 005b40ba | DAT_005f1338
    FNSTSW AX                           ; 005b40c0
    SAHF                                ; 005b40c2
    JNC 0x005b40c6                      ; 005b40c3
        ;   XREF to: 005b40c6 (CONDITIONAL_JUMP)  ; LAB_005b40c6
    INC ESI                             ; 005b40c5
    INC EDX                             ; 005b40c6
        ;   Label: LAB_005b40c6
    MOV EAX,dword ptr [EBX + 0xb0]      ; 005b40c7
    ADD ECX,0x34                        ; 005b40cd
    CMP EDX,EAX                         ; 005b40d0
    JL 0x005b40ac                       ; 005b40d2
        ;   XREF to: 005b40ac (CONDITIONAL_JUMP)  ; LAB_005b40ac
    MOV EAX,dword ptr [EBX + 0xb0]      ; 005b40d4
        ;   Label: LAB_005b40d4
    MOV EDX,EAX                         ; 005b40da
    SAR EDX,0x1f                        ; 005b40dc
    SUB EAX,EDX                         ; 005b40df
    SAR EAX,0x1                         ; 005b40e1
    CMP ESI,EAX                         ; 005b40e3
    JGE 0x005b42ea                      ; 005b40e5
        ;   XREF to: 005b42ea (CONDITIONAL_JUMP)  ; LAB_005b42ea
    MOV ESP,EBP                         ; 005b40eb
        ;   Label: LAB_005b40eb
    POP EBP                             ; 005b40ed
    POP EDI                             ; 005b40ee
    POP ESI                             ; 005b40ef
    POP EBX                             ; 005b40f0
    RET                                 ; 005b40f1
    MOV EAX,dword ptr [EBX]             ; 005b40f2
        ;   Label: LAB_005b40f2
    MOV dword ptr [ESP + 0x170],EAX     ; 005b40f4
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b40fb
    MOV dword ptr [ESP + 0x174],EAX     ; 005b40fe
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b4105
    MOV dword ptr [ESP + 0x178],EAX     ; 005b4108
    JMP 0x005b231e                      ; 005b410f
        ;   XREF to: 005b231e (UNCONDITIONAL_JUMP)  ; LAB_005b231e
    MOV dword ptr [EBX + 0x258],0xc61c3c00 ; 005b4114
        ;   Label: LAB_005b4114
    JMP 0x005b23ec                      ; 005b411e
        ;   XREF to: 005b23ec (UNCONDITIONAL_JUMP)  ; LAB_005b23ec
    MOV EAX,dword ptr [ESP + 0x66c]     ; 005b4123
        ;   Label: LAB_005b4123
    FLD float ptr [EAX]                 ; 005b412a
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b412c
    FSUB float ptr [EAX]                ; 005b4133
    MOV EAX,dword ptr [ESP + 0x66c]     ; 005b4135
    FSTP float ptr [ESP + 0x338]        ; 005b413c
    FLD float ptr [EAX + 0x4]           ; 005b4143
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b4146
    FSUB float ptr [EAX + 0x4]          ; 005b414d
    MOV EAX,dword ptr [ESP + 0x66c]     ; 005b4150
    FSTP float ptr [ESP + 0x33c]        ; 005b4157
    FLD float ptr [EAX + 0x8]           ; 005b415e
    MOV EAX,dword ptr [ESP + 0x668]     ; 005b4161
    LEA EDI,[ESP + 0x47c]               ; 005b4168
    FSUB float ptr [EAX + 0x8]          ; 005b416f
    LEA ESI,[ESP + 0x338]               ; 005b4172
    FSTP float ptr [ESP + 0x340]        ; 005b4179
    MOVSD ES:EDI,ESI                    ; 005b4180
    MOVSD ES:EDI,ESI                    ; 005b4181
    MOVSD ES:EDI,ESI                    ; 005b4182
    FLD float ptr [ESP + 0x480]         ; 005b4183
    FMUL ST0                            ; 005b418a
    FLD float ptr [ESP + 0x47c]         ; 005b418c
    FMUL ST0                            ; 005b4193
    FADDP                               ; 005b4195
    FLD float ptr [ESP + 0x484]         ; 005b4197
    FMUL ST0                            ; 005b419e
    FADDP                               ; 005b41a0
    FSQRT                               ; 005b41a2
    FCOMP double ptr [0x005f1328]       ; 005b41a4 | DAT_005f1328
    FNSTSW AX                           ; 005b41aa
    SAHF                                ; 005b41ac
    JBE 0x005b2b6f                      ; 005b41ad
        ;   XREF to: 005b2b6f (CONDITIONAL_JUMP)  ; LAB_005b2b6f
    MOV EAX,dword ptr [ESP + 0x674]     ; 005b41b3
    PUSH 0x0                            ; 005b41ba
    ADD EAX,0x28                        ; 005b41bc
    PUSH EAX                            ; 005b41bf
    MOV EDX,dword ptr [ESP + 0x674]     ; 005b41c0
    PUSH EDX                            ; 005b41c7
    MOV ECX,dword ptr [ESP + 0x674]     ; 005b41c8
    PUSH ECX                            ; 005b41cf
    PUSH 0x1fc9c68                      ; 005b41d0 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_00472c60   ; 005b41d5
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00472c60()
    MOV dword ptr [ESP + 0x6a0],EAX     ; 005b41da
    FLD float ptr [ESP + 0x6a0]         ; 005b41e1
    ADD ESP,0x14                        ; 005b41e8
    MOV EAX,dword ptr [ESP + 0x670]     ; 005b41eb
    FSTP float ptr [EAX + 0xd8]         ; 005b41f2
    MOV EAX,dword ptr [EAX + 0xd8]      ; 005b41f8
    MOV dword ptr [ESP + 0x14],EAX      ; 005b41fe
    FLDZ                                ; 005b4202
    FLD float ptr [ESP + 0x14]          ; 005b4204
    FSTP double ptr [ESP]               ; 005b4208
    FCOMP double ptr [ESP]              ; 005b420b
    FNSTSW AX                           ; 005b420e
    SAHF                                ; 005b4210
    JNC 0x005b2b6f                      ; 005b4211
        ;   XREF to: 005b2b6f (CONDITIONAL_JUMP)  ; LAB_005b2b6f
    FLD1                                ; 005b4217
    FCOMP double ptr [ESP]              ; 005b4219
    FNSTSW AX                           ; 005b421c
    SAHF                                ; 005b421e
    JBE 0x005b2b6f                      ; 005b421f
        ;   XREF to: 005b2b6f (CONDITIONAL_JUMP)  ; LAB_005b2b6f
    MOV EAX,dword ptr [ESP + 0x63c]     ; 005b4225
    MOV EDX,dword ptr [ESP + 0x680]     ; 005b422c
    LEA ESI,[EAX + 0x1]                 ; 005b4233
    MOV dword ptr [ESP + EAX*0x4 + 0x6c],EDX ; 005b4236
    MOV dword ptr [ESP + 0x63c],ESI     ; 005b423a
    JMP 0x005b2b6f                      ; 005b4241
        ;   XREF to: 005b2b6f (UNCONDITIONAL_JUMP)  ; LAB_005b2b6f
    MOV ECX,dword ptr [ESP + 0x690]     ; 005b4246
        ;   Label: LAB_005b4246
    FLD float ptr [EBX]                 ; 005b424d
    LEA EAX,[ECX*0x4 + 0x0]             ; 005b424f
    FLD float ptr [EBX + 0x4]           ; 005b4256
    SUB EAX,ECX                         ; 005b4259
    FLD float ptr [EBX + 0x8]           ; 005b425b
    SHL EAX,0x2                         ; 005b425e
    LEA EDI,[ESP + 0x98]                ; 005b4261
    ADD EAX,ECX                         ; 005b4268
    FXCH ST2                            ; 005b426a
    FADD float ptr [ESP + 0x3bc]        ; 005b426c
    SHL EAX,0x2                         ; 005b4273
    FSTP float ptr [EBX]                ; 005b4276
    ADD EAX,EDX                         ; 005b4278
    FADD float ptr [ESP + 0x3c0]        ; 005b427a
    ADD EAX,0x28                        ; 005b4281
    FSTP float ptr [EBX + 0x4]          ; 005b4284
    PUSH EAX                            ; 005b4287
    FADD float ptr [ESP + 0x3c8]        ; 005b4288
    PUSH ESI                            ; 005b428f
    LEA ESI,[ESP + 0x328]               ; 005b4290
    FSTP float ptr [EBX + 0x8]          ; 005b4297
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b429a
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x328]               ; 005b429f
    LEA EAX,[ESP + 0xa0]                ; 005b42a6
    ADD ESP,0x8                         ; 005b42ad
    LEA EDX,[ESP + 0x530]               ; 005b42b0
    MOVSD ES:EDI,ESI                    ; 005b42b7
    MOVSD ES:EDI,ESI                    ; 005b42b8
    MOVSD ES:EDI,ESI                    ; 005b42b9
    CMP EDX,EAX                         ; 005b42ba
    JZ 0x005b34a2                       ; 005b42bc
        ;   XREF to: 005b34a2 (CONDITIONAL_JUMP)  ; LAB_005b34a2
    MOV EAX,dword ptr [ESP + 0x98]      ; 005b42c2
    MOV dword ptr [ESP + 0x530],EAX     ; 005b42c9
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005b42d0
    MOV dword ptr [ESP + 0x534],EAX     ; 005b42d7
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005b42de
    JMP 0x005b349b                      ; 005b42e5
        ;   XREF to: 005b349b (UNCONDITIONAL_JUMP)  ; LAB_005b349b
    MOV dword ptr [EBX + 0x254],0x0     ; 005b42ea
        ;   Label: LAB_005b42ea
    MOV ESP,EBP                         ; 005b42f4
    POP EBP                             ; 005b42f6
    POP EDI                             ; 005b42f7
    POP ESI                             ; 005b42f8
    POP EBX                             ; 005b42f9
    RET                                 ; 005b42fa

