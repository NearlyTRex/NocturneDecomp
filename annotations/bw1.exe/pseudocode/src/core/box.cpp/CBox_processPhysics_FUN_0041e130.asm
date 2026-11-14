; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e130(CBox *this_ptr,float delta_time)
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
;   core_box.cpp_CBox_process_FUN_0041e0d0 at 0041e11e
;   core_fire.cpp_CStake_process_FUN_004acf20 at 004acf39
;
; Referenced Globals:
;   undefined4 DAT_005d4aa8
;   undefined4 DAT_005d4ab0
;   undefined4 DAT_005d4ab8
;   undefined4 DAT_005d4ac0
;   undefined4 DAT_005d4ac8
;   undefined4 DAT_005d4acc
;   undefined4 DAT_005d4ad0
;   undefined4 DAT_005d4ad4
;   undefined4 DAT_005d4ad8
;   undefined4 DAT_005d4ae0
;   undefined4 DAT_005d4ae4
;   undefined4 DAT_005d4ae8
;   undefined4 DAT_005d4af0
;   undefined4 DAT_005d4af8
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;   core_dirmat.cpp_FUN_0045f840
;   core_dtrace.cpp_FUN_0048b150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e130
        ;   Label: core_box.cpp_CBox_processPhysics_FUN_0041e130
    PUSH ESI                            ; 0041e131
    PUSH EDI                            ; 0041e132
    PUSH EBP                            ; 0041e133
    MOV EBP,ESP                         ; 0041e134
    SUB ESP,0x6a8                       ; 0041e136
    AND ESP,0xfffffff8                  ; 0041e13c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041e13f
    CMP dword ptr [EBX + 0x254],0x0     ; 0041e142
    JZ 0x0041ff2b                       ; 0041e149
        ;   XREF to: 0041ff2b (CONDITIONAL_JUMP)  ; LAB_0041ff2b
    LEA EAX,[ESP + 0x170]               ; 0041e14f
    CMP EAX,EBX                         ; 0041e156
    JNZ 0x0041ff32                      ; 0041e158
        ;   XREF to: 0041ff32 (CONDITIONAL_JUMP)  ; LAB_0041ff32
    LEA EAX,[ESP + 0x3e0]               ; 0041e15e
        ;   Label: LAB_0041e15e
    CMP EAX,EBX                         ; 0041e165
    JZ 0x0041e186                       ; 0041e167
        ;   XREF to: 0041e186 (CONDITIONAL_JUMP)  ; LAB_0041e186
    MOV EAX,dword ptr [EBX]             ; 0041e169
    MOV dword ptr [ESP + 0x3e0],EAX     ; 0041e16b
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041e172
    MOV dword ptr [ESP + 0x3e4],EAX     ; 0041e175
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041e17c
    MOV dword ptr [ESP + 0x3e8],EAX     ; 0041e17f
    FLD1                                ; 0041e186
        ;   Label: LAB_0041e186
    PUSH 0x0                            ; 0041e188
    LEA EAX,[ESP + 0x144]               ; 0041e18a
    FLD float ptr [ESP + 0x3e8]         ; 0041e191
    PUSH EAX                            ; 0041e198
    LEA EAX,[ESP + 0x3e8]               ; 0041e199
    FXCH                                ; 0041e1a0
    FADD float ptr [ESP + 0x17c]        ; 0041e1a2
    PUSH EAX                            ; 0041e1a9
    LEA EAX,[ESP + 0x17c]               ; 0041e1aa
    FXCH                                ; 0041e1b1
    FADD float ptr [0x005d4aa8]         ; 0041e1b3 | DAT_005d4aa8
    PUSH EAX                            ; 0041e1b9
    FXCH                                ; 0041e1ba
    FSTP float ptr [ESP + 0x184]        ; 0041e1bc
    PUSH 0x1fe5c1c                      ; 0041e1c3 | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x3f8]        ; 0041e1c8
    CALL core_dtrace.cpp_FUN_0048b150   ; 0041e1cf
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b150()
    MOV dword ptr [ESP + 0x6a0],EAX     ; 0041e1d4
    FLD float ptr [ESP + 0x6a0]         ; 0041e1db
    ADD ESP,0x14                        ; 0041e1e2
    FLDZ                                ; 0041e1e5
    FXCH                                ; 0041e1e7
    FST float ptr [ESP + 0x10]          ; 0041e1e9
    FSTP double ptr [ESP + 0x8]         ; 0041e1ed
    FCOMP double ptr [ESP + 0x8]        ; 0041e1f1
    FNSTSW AX                           ; 0041e1f5
    SAHF                                ; 0041e1f7
    JNC 0x0041ff54                      ; 0041e1f8
        ;   XREF to: 0041ff54 (CONDITIONAL_JUMP)  ; LAB_0041ff54
    FLD1                                ; 0041e1fe
    FCOMP double ptr [ESP + 0x8]        ; 0041e200
    FNSTSW AX                           ; 0041e204
    SAHF                                ; 0041e206
    JBE 0x0041ff54                      ; 0041e207
        ;   XREF to: 0041ff54 (CONDITIONAL_JUMP)  ; LAB_0041ff54
    FLD float ptr [ESP + 0x3e4]         ; 0041e20d
    FSUB float ptr [ESP + 0x174]        ; 0041e214
    FMUL float ptr [ESP + 0x10]         ; 0041e21b
    FADD float ptr [ESP + 0x174]        ; 0041e21f
    FSTP float ptr [EBX + 0x258]        ; 0041e226
    LEA EAX,[EBX + 0xc0]                ; 0041e22c
        ;   Label: LAB_0041e22c
    LEA EDX,[EBX + 0xcc]                ; 0041e232
    LEA ECX,[EBX + 0x260]               ; 0041e238
    CMP EDX,EAX                         ; 0041e23e
        ;   Label: LAB_0041e23e
    JZ 0x0041e252                       ; 0041e240
        ;   XREF to: 0041e252 (CONDITIONAL_JUMP)  ; LAB_0041e252
    MOV ESI,dword ptr [EAX]             ; 0041e242
    MOV dword ptr [EDX],ESI             ; 0041e244
    MOV ESI,dword ptr [EAX + 0x4]       ; 0041e246
    MOV dword ptr [EDX + 0x4],ESI       ; 0041e249
    MOV ESI,dword ptr [EAX + 0x8]       ; 0041e24c
    MOV dword ptr [EDX + 0x8],ESI       ; 0041e24f
    ADD EAX,0x34                        ; 0041e252
        ;   Label: LAB_0041e252
    ADD EDX,0x34                        ; 0041e255
    CMP EAX,ECX                         ; 0041e258
    JNZ 0x0041e23e                      ; 0041e25a
        ;   XREF to: 0041e23e (CONDITIONAL_JUMP)  ; LAB_0041e23e
    XOR ECX,ECX                         ; 0041e25c
    MOV dword ptr [ESP + 0x118],ECX     ; 0041e25e
    MOV dword ptr [ESP + 0x114],ECX     ; 0041e265
    MOV dword ptr [ESP + 0x110],ECX     ; 0041e26c
    FLD float ptr [EBX + 0x94]          ; 0041e273
    FCHS                                ; 0041e279
    FMUL double ptr [0x005d4ab0]        ; 0041e27b | DAT_005d4ab0
    LEA EAX,[ESP + 0x110]               ; 0041e281
    LEA ESI,[ESP + 0x41c]               ; 0041e288
    PUSH EAX                            ; 0041e28f
    LEA EAX,[EBX + 0x18]                ; 0041e290
    LEA EDI,[ESP + 0x2a0]               ; 0041e293
    PUSH EAX                            ; 0041e29a
    FSTP float ptr [ESP + 0x11c]        ; 0041e29b
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041e2a2
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    FLD1                                ; 0041e2a7
    LEA ESI,[ESP + 0x424]               ; 0041e2a9
    ADD ESP,0x8                         ; 0041e2b0
    LEA EAX,[EBX + 0x64]                ; 0041e2b3
    MOVSD ES:EDI,ESI                    ; 0041e2b6
    MOVSD ES:EDI,ESI                    ; 0041e2b7
    MOVSD ES:EDI,ESI                    ; 0041e2b8
    LEA EDX,[EBX + 0x94]                ; 0041e2b9
    FLD float ptr [EAX]                 ; 0041e2bf
    FADD float ptr [ESP + 0x29c]        ; 0041e2c1
    FLD float ptr [EAX + 0x4]           ; 0041e2c8
    FXCH                                ; 0041e2cb
    FSTP float ptr [EAX]                ; 0041e2cd
    FADD float ptr [ESP + 0x2a0]        ; 0041e2cf
    FLD float ptr [EAX + 0x8]           ; 0041e2d6
    FXCH                                ; 0041e2d9
    FSTP float ptr [EAX + 0x4]          ; 0041e2db
    FADD float ptr [ESP + 0x2a4]        ; 0041e2de
    FLD float ptr [EAX]                 ; 0041e2e5
    FXCH                                ; 0041e2e7
    FSTP float ptr [EAX + 0x8]          ; 0041e2e9
    FXCH                                ; 0041e2ec
    FDIV float ptr [EDX]                ; 0041e2ee
    FXCH                                ; 0041e2f0
    FMUL ST1                            ; 0041e2f2
    FSTP float ptr [ESP + 0x44c]        ; 0041e2f4
    FLD float ptr [EAX + 0x4]           ; 0041e2fb
    FMUL ST1                            ; 0041e2fe
    FSTP float ptr [ESP + 0x450]        ; 0041e300
    FMUL float ptr [EAX + 0x8]          ; 0041e307
    LEA EDI,[ESP + 0x14c]               ; 0041e30a
    LEA ESI,[ESP + 0x44c]               ; 0041e311
    LEA EDX,[EBX + 0x58]                ; 0041e318
    LEA EAX,[ESP + 0x14c]               ; 0041e31b
    FSTP float ptr [ESP + 0x454]        ; 0041e322
    MOVSD ES:EDI,ESI                    ; 0041e329
    MOVSD ES:EDI,ESI                    ; 0041e32a
    MOVSD ES:EDI,ESI                    ; 0041e32b
    CMP EDX,EAX                         ; 0041e32c
    JZ 0x0041e34d                       ; 0041e32e
        ;   XREF to: 0041e34d (CONDITIONAL_JUMP)  ; LAB_0041e34d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0041e330
    MOV dword ptr [EDX],EAX             ; 0041e337
    MOV EAX,dword ptr [ESP + 0x150]     ; 0041e339
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e340
    MOV EAX,dword ptr [ESP + 0x154]     ; 0041e343
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e34a
    FLD float ptr [EBX + 0x88]          ; 0041e34d
        ;   Label: LAB_0041e34d
    FDIV float ptr [EBX + 0x98]         ; 0041e353
    FLD float ptr [EBX + 0x8c]          ; 0041e359
    FDIV float ptr [EBX + 0x9c]         ; 0041e35f
    FLD float ptr [EBX + 0x90]          ; 0041e365
    FDIV float ptr [EBX + 0xa0]         ; 0041e36b
    LEA EAX,[EBX + 0x64]                ; 0041e371
    FXCH ST2                            ; 0041e374
    FSTP float ptr [EBX + 0x7c]         ; 0041e376
    FSTP float ptr [EBX + 0x80]         ; 0041e379
    FSTP float ptr [EBX + 0x84]         ; 0041e37f
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e385
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e38c
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e38f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e392
    MOV dword ptr [EAX],EDX             ; 0041e395
    LEA EAX,[EBX + 0x88]                ; 0041e397
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e39d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e3a4
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e3a7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e3aa
    MOV dword ptr [EAX],EDX             ; 0041e3ad
    LEA EAX,[EBX + 0x58]                ; 0041e3af
    PUSH EAX                            ; 0041e3b2
    LEA EAX,[EBX + 0x18]                ; 0041e3b3
    LEA ESI,[ESP + 0x5d0]               ; 0041e3b6
    PUSH EAX                            ; 0041e3bd
    LEA EDI,[ESP + 0x49c]               ; 0041e3be
    MOV dword ptr [ESP + 0x694],EAX     ; 0041e3c5
    CALL core_dirmat.cpp_FUN_0045f690   ; 0041e3cc
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x5d4]               ; 0041e3d1
    ADD ESP,0x8                         ; 0041e3d8
    MOVSD ES:EDI,ESI                    ; 0041e3db
    MOVSD ES:EDI,ESI                    ; 0041e3dc
    MOVSD ES:EDI,ESI                    ; 0041e3dd
    FLD float ptr [EBP + 0x18]          ; 0041e3de
    FLD float ptr [ESP + 0x494]         ; 0041e3e1
    FMUL ST1                            ; 0041e3e8
    FLD float ptr [ESP + 0x498]         ; 0041e3ea
    FMUL ST2                            ; 0041e3f1
    FLD float ptr [ESP + 0x49c]         ; 0041e3f3
    FMULP ST3                           ; 0041e3fa
    LEA EAX,[EBX + 0x40]                ; 0041e3fc
    MOV EDX,dword ptr [ESP + 0x68c]     ; 0041e3ff
    PUSH EAX                            ; 0041e406
    LEA EDI,[ESP + 0x1d4]               ; 0041e407
    LEA ESI,[ESP + 0x4e0]               ; 0041e40e
    FXCH                                ; 0041e415
    FSTP float ptr [ESP + 0x4e0]        ; 0041e417
    FSTP float ptr [ESP + 0x4e4]        ; 0041e41e
    FSTP float ptr [ESP + 0x4e8]        ; 0041e425
    MOVSD ES:EDI,ESI                    ; 0041e42c
    MOVSD ES:EDI,ESI                    ; 0041e42d
    MOVSD ES:EDI,ESI                    ; 0041e42e
    PUSH EDX                            ; 0041e42f
    FLD float ptr [EAX + 0x4]           ; 0041e430
    FLD float ptr [EAX]                 ; 0041e433
    FADD float ptr [ESP + 0x1d8]        ; 0041e435
    FLD float ptr [EAX + 0x8]           ; 0041e43c
    FXCH                                ; 0041e43f
    FSTP float ptr [EAX]                ; 0041e441
    FXCH                                ; 0041e443
    FADD float ptr [ESP + 0x1dc]        ; 0041e445
    LEA ESI,[ESP + 0x37c]               ; 0041e44c
    FSTP float ptr [EAX + 0x4]          ; 0041e453
    FADD float ptr [ESP + 0x1e0]        ; 0041e456
    LEA EDI,[ESP + 0x1f0]               ; 0041e45d
    FSTP float ptr [EAX + 0x8]          ; 0041e464
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041e467
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x37c]               ; 0041e46c
    LEA EAX,[ESP + 0x1f0]               ; 0041e473
    ADD ESP,0x8                         ; 0041e47a
    LEA EDX,[EBX + 0x4c]                ; 0041e47d
    MOVSD ES:EDI,ESI                    ; 0041e480
    MOVSD ES:EDI,ESI                    ; 0041e481
    MOVSD ES:EDI,ESI                    ; 0041e482
    CMP EDX,EAX                         ; 0041e483
    JZ 0x0041e4a4                       ; 0041e485
        ;   XREF to: 0041e4a4 (CONDITIONAL_JUMP)  ; LAB_0041e4a4
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0041e487
    MOV dword ptr [EDX],EAX             ; 0041e48e
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0041e490
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e497
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0041e49a
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e4a1
    LEA EAX,[EBX + 0x7c]                ; 0041e4a4
        ;   Label: LAB_0041e4a4
    FLD float ptr [EBP + 0x18]          ; 0041e4a7
    FLD float ptr [EAX]                 ; 0041e4aa
    FMUL ST1                            ; 0041e4ac
    FSTP float ptr [ESP + 0x5e4]        ; 0041e4ae
    FLD float ptr [EAX + 0x4]           ; 0041e4b5
    FMUL ST1                            ; 0041e4b8
    FSTP float ptr [ESP + 0x5e8]        ; 0041e4ba
    FMUL float ptr [EAX + 0x8]          ; 0041e4c1
    LEA EDI,[ESP + 0x230]               ; 0041e4c4
    LEA ESI,[ESP + 0x5e4]               ; 0041e4cb
    LEA EDX,[EBX + 0x70]                ; 0041e4d2
    FSTP float ptr [ESP + 0x5ec]        ; 0041e4d5
    MOVSD ES:EDI,ESI                    ; 0041e4dc
    MOVSD ES:EDI,ESI                    ; 0041e4dd
    MOVSD ES:EDI,ESI                    ; 0041e4de
    FLD float ptr [EDX]                 ; 0041e4df
    FADD float ptr [ESP + 0x230]        ; 0041e4e1
    FLD float ptr [EDX + 0x4]           ; 0041e4e8
    FXCH                                ; 0041e4eb
    FSTP float ptr [EDX]                ; 0041e4ed
    FADD float ptr [ESP + 0x234]        ; 0041e4ef
    FST float ptr [EDX + 0x4]           ; 0041e4f6
    FMUL float ptr [EDX + 0x4]          ; 0041e4f9
    FLD float ptr [EDX]                 ; 0041e4fc
    FMUL ST0                            ; 0041e4fe
    FLD float ptr [EDX + 0x8]           ; 0041e500
    FADD float ptr [ESP + 0x238]        ; 0041e503
    FXCH                                ; 0041e50a
    FADDP ST2,ST0                       ; 0041e50c
    FST float ptr [EDX + 0x8]           ; 0041e50e
    FMUL float ptr [EDX + 0x8]          ; 0041e511
    FADDP                               ; 0041e514
    FSQRT                               ; 0041e516
    FST float ptr [ESP + 0x6a0]         ; 0041e518
    FCOMP float ptr [0x005d4ab8]        ; 0041e51f | DAT_005d4ab8
    FNSTSW AX                           ; 0041e525
    SAHF                                ; 0041e527
    JBE 0x0041e567                      ; 0041e528
        ;   XREF to: 0041e567 (CONDITIONAL_JUMP)  ; LAB_0041e567
    FLD float ptr [0x005d4ab8]          ; 0041e52a | DAT_005d4ab8
    FDIV float ptr [ESP + 0x6a0]        ; 0041e530
    FLD float ptr [EDX]                 ; 0041e537
    FXCH                                ; 0041e539
    FSTP float ptr [ESP + 0x61c]        ; 0041e53b
    FMUL float ptr [ESP + 0x61c]        ; 0041e542
    FLD float ptr [EDX + 0x4]           ; 0041e549
    FMUL float ptr [ESP + 0x61c]        ; 0041e54c
    FLD float ptr [EDX + 0x8]           ; 0041e553
    FMUL float ptr [ESP + 0x61c]        ; 0041e556
    FXCH ST2                            ; 0041e55d
    FSTP float ptr [EDX]                ; 0041e55f
    FSTP float ptr [EDX + 0x4]          ; 0041e561
    FSTP float ptr [EDX + 0x8]          ; 0041e564
    LEA EAX,[EBX + 0x40]                ; 0041e567
        ;   Label: LAB_0041e567
    FLD float ptr [EBP + 0x18]          ; 0041e56a
    FLD float ptr [EAX]                 ; 0041e56d
    FMUL ST1                            ; 0041e56f
    FSTP float ptr [ESP + 0x5a8]        ; 0041e571
    FLD float ptr [EAX + 0x4]           ; 0041e578
    FMUL ST1                            ; 0041e57b
    FSTP float ptr [ESP + 0x5ac]        ; 0041e57d
    FLD float ptr [EAX + 0x8]           ; 0041e584
    FMUL ST1                            ; 0041e587
    LEA EDI,[ESP + 0x23c]               ; 0041e589
    LEA ESI,[ESP + 0x5a8]               ; 0041e590
    FSTP float ptr [ESP + 0x5b0]        ; 0041e597
    MOVSD ES:EDI,ESI                    ; 0041e59e
    MOVSD ES:EDI,ESI                    ; 0041e59f
    MOVSD ES:EDI,ESI                    ; 0041e5a0
    FLD float ptr [EBX]                 ; 0041e5a1
    FADD float ptr [ESP + 0x23c]        ; 0041e5a3
    FLD float ptr [EBX + 0x4]           ; 0041e5aa
    FXCH                                ; 0041e5ad
    FSTP float ptr [EBX]                ; 0041e5af
    FADD float ptr [ESP + 0x240]        ; 0041e5b1
    FLD float ptr [EBX + 0x8]           ; 0041e5b8
    FXCH                                ; 0041e5bb
    FSTP float ptr [EBX + 0x4]          ; 0041e5bd
    FADD float ptr [ESP + 0x244]        ; 0041e5c0
    LEA EAX,[EBX + 0x70]                ; 0041e5c7
    FSTP float ptr [EBX + 0x8]          ; 0041e5ca
    FLD float ptr [EAX]                 ; 0041e5cd
    FMUL ST1                            ; 0041e5cf
    FSTP float ptr [ESP + 0x104]        ; 0041e5d1
    FLD float ptr [EAX + 0x4]           ; 0041e5d8
    FMUL ST1                            ; 0041e5db
    FSTP float ptr [ESP + 0x108]        ; 0041e5dd
    FMUL float ptr [EAX + 0x8]          ; 0041e5e4
    LEA EDI,[ESP + 0x2e4]               ; 0041e5e7
    LEA EAX,[ESP + 0x2e4]               ; 0041e5ee
    LEA ESI,[ESP + 0x104]               ; 0041e5f5
    PUSH EAX                            ; 0041e5fc
    LEA EAX,[ESP + 0x48]                ; 0041e5fd
    FSTP float ptr [ESP + 0x110]        ; 0041e601
    PUSH EAX                            ; 0041e608
    MOVSD ES:EDI,ESI                    ; 0041e609
    MOVSD ES:EDI,ESI                    ; 0041e60a
    MOVSD ES:EDI,ESI                    ; 0041e60b
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0041e60c
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041e611
    FLD float ptr [EBX + 0x1c]          ; 0041e614
    FMUL float ptr [ESP + 0x50]         ; 0041e617
    FLD float ptr [EBX + 0x18]          ; 0041e61b
    FMUL float ptr [ESP + 0x44]         ; 0041e61e
    FADDP                               ; 0041e622
    FLD float ptr [EBX + 0x20]          ; 0041e624
    FMUL float ptr [ESP + 0x5c]         ; 0041e627
    FADDP                               ; 0041e62b
    FSTP float ptr [ESP + 0x1c]         ; 0041e62d
    FLD float ptr [EBX + 0x18]          ; 0041e631
    FMUL float ptr [ESP + 0x48]         ; 0041e634
    FLD float ptr [EBX + 0x1c]          ; 0041e638
    FMUL float ptr [ESP + 0x54]         ; 0041e63b
    FADDP                               ; 0041e63f
    FLD float ptr [EBX + 0x20]          ; 0041e641
    FMUL float ptr [ESP + 0x60]         ; 0041e644
    FADDP                               ; 0041e648
    FSTP float ptr [ESP + 0x20]         ; 0041e64a
    FLD float ptr [EBX + 0x18]          ; 0041e64e
    FMUL float ptr [ESP + 0x4c]         ; 0041e651
    FLD float ptr [EBX + 0x1c]          ; 0041e655
    FMUL float ptr [ESP + 0x58]         ; 0041e658
    FADDP                               ; 0041e65c
    FLD float ptr [EBX + 0x20]          ; 0041e65e
    FMUL float ptr [ESP + 0x64]         ; 0041e661
    FADDP                               ; 0041e665
    FSTP float ptr [ESP + 0x24]         ; 0041e667
    FLD float ptr [EBX + 0x28]          ; 0041e66b
    FMUL float ptr [ESP + 0x50]         ; 0041e66e
    FLD float ptr [EBX + 0x24]          ; 0041e672
    FMUL float ptr [ESP + 0x44]         ; 0041e675
    FADDP                               ; 0041e679
    FLD float ptr [EBX + 0x2c]          ; 0041e67b
    FMUL float ptr [ESP + 0x5c]         ; 0041e67e
    FADDP                               ; 0041e682
    FSTP float ptr [ESP + 0x28]         ; 0041e684
    FLD float ptr [EBX + 0x24]          ; 0041e688
    FMUL float ptr [ESP + 0x48]         ; 0041e68b
    FLD float ptr [EBX + 0x28]          ; 0041e68f
    FMUL float ptr [ESP + 0x54]         ; 0041e692
    FADDP                               ; 0041e696
    FLD float ptr [EBX + 0x2c]          ; 0041e698
    FMUL float ptr [ESP + 0x60]         ; 0041e69b
    FADDP                               ; 0041e69f
    FSTP float ptr [ESP + 0x2c]         ; 0041e6a1
    FLD float ptr [EBX + 0x24]          ; 0041e6a5
    FMUL float ptr [ESP + 0x4c]         ; 0041e6a8
    FLD float ptr [EBX + 0x28]          ; 0041e6ac
    FMUL float ptr [ESP + 0x58]         ; 0041e6af
    FADDP                               ; 0041e6b3
    FLD float ptr [EBX + 0x2c]          ; 0041e6b5
    FMUL float ptr [ESP + 0x64]         ; 0041e6b8
    FADDP                               ; 0041e6bc
    FSTP float ptr [ESP + 0x30]         ; 0041e6be
    FLD float ptr [EBX + 0x34]          ; 0041e6c2
    FMUL float ptr [ESP + 0x50]         ; 0041e6c5
    FLD float ptr [EBX + 0x30]          ; 0041e6c9
    FMUL float ptr [ESP + 0x44]         ; 0041e6cc
    FADDP                               ; 0041e6d0
    FLD float ptr [EBX + 0x38]          ; 0041e6d2
    FMUL float ptr [ESP + 0x5c]         ; 0041e6d5
    FADDP                               ; 0041e6d9
    FSTP float ptr [ESP + 0x34]         ; 0041e6db
    FLD float ptr [EBX + 0x30]          ; 0041e6df
    FMUL float ptr [ESP + 0x48]         ; 0041e6e2
    FLD float ptr [EBX + 0x34]          ; 0041e6e6
    FMUL float ptr [ESP + 0x54]         ; 0041e6e9
    FADDP                               ; 0041e6ed
    FLD float ptr [EBX + 0x38]          ; 0041e6ef
    FMUL float ptr [ESP + 0x60]         ; 0041e6f2
    FADDP                               ; 0041e6f6
    FSTP float ptr [ESP + 0x38]         ; 0041e6f8
    FLD float ptr [EBX + 0x30]          ; 0041e6fc
    FMUL float ptr [ESP + 0x4c]         ; 0041e6ff
    FLD float ptr [EBX + 0x34]          ; 0041e703
    FMUL float ptr [ESP + 0x58]         ; 0041e706
    FADDP                               ; 0041e70a
    FLD float ptr [EBX + 0x38]          ; 0041e70c
    FMUL float ptr [ESP + 0x64]         ; 0041e70f
    LEA ESI,[ESP + 0x1c]                ; 0041e713
    FADDP                               ; 0041e717
    MOV ECX,0xa                         ; 0041e719
    FSTP float ptr [ESP + 0x3c]         ; 0041e71e
    LEA EDI,[EBX + 0x18]                ; 0041e722
    LEA EAX,[EBX + 0x18]                ; 0041e725
    MOVSD.REP ES:EDI,ESI                ; 0041e728
    PUSH EAX                            ; 0041e72a
    LEA ESI,[ESP + 0x4bc]               ; 0041e72b
    LEA EDI,[ESP + 0x384]               ; 0041e732
    CALL core_dirmat.cpp_FUN_0045f840   ; 0041e739
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f840()
    LEA ESI,[ESP + 0x4bc]               ; 0041e73e
    LEA EAX,[ESP + 0x384]               ; 0041e745
    ADD ESP,0x4                         ; 0041e74c
    LEA EDX,[EBX + 0xc]                 ; 0041e74f
    MOVSD ES:EDI,ESI                    ; 0041e752
    MOVSD ES:EDI,ESI                    ; 0041e753
    MOVSD ES:EDI,ESI                    ; 0041e754
    CMP EDX,EAX                         ; 0041e755
    JZ 0x0041e776                       ; 0041e757
        ;   XREF to: 0041e776 (CONDITIONAL_JUMP)  ; LAB_0041e776
    MOV EAX,dword ptr [ESP + 0x380]     ; 0041e759
    MOV dword ptr [EDX],EAX             ; 0041e760
    MOV EAX,dword ptr [ESP + 0x384]     ; 0041e762
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e769
    MOV EAX,dword ptr [ESP + 0x388]     ; 0041e76c
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e773
    XOR ECX,ECX                         ; 0041e776
        ;   Label: LAB_0041e776
    MOV ESI,dword ptr [EBX + 0xb0]      ; 0041e778
    MOV dword ptr [ESP + 0x684],ECX     ; 0041e77e
    TEST ESI,ESI                        ; 0041e785
    JLE 0x0041e889                      ; 0041e787
        ;   XREF to: 0041e889 (CONDITIONAL_JUMP)  ; LAB_0041e889
    LEA EAX,[EBX + 0xb4]                ; 0041e78d
    MOV dword ptr [ESP + 0x620],EAX     ; 0041e793
    LEA EAX,[EBX + 0x18]                ; 0041e79a
    MOV dword ptr [ESP + 0x618],EAX     ; 0041e79d
    LEA EAX,[EBX + 0xc0]                ; 0041e7a4
    MOV dword ptr [ESP + 0x664],EAX     ; 0041e7aa
    IMUL EAX,dword ptr [ESP + 0x684],0x34 ; 0041e7b1
        ;   Label: LAB_0041e7b1
    ADD EAX,dword ptr [ESP + 0x620]     ; 0041e7b9
    PUSH EAX                            ; 0041e7c0
    MOV ESI,dword ptr [ESP + 0x61c]     ; 0041e7c1
    PUSH ESI                            ; 0041e7c8
    LEA ESI,[ESP + 0x25c]               ; 0041e7c9
    LEA EDI,[ESP + 0x4f0]               ; 0041e7d0
    CALL core_dirmat.cpp_FUN_0045f690   ; 0041e7d7
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x25c]               ; 0041e7dc
    ADD ESP,0x8                         ; 0041e7e3
    MOVSD ES:EDI,ESI                    ; 0041e7e6
    MOVSD ES:EDI,ESI                    ; 0041e7e7
    MOVSD ES:EDI,ESI                    ; 0041e7e8
    FLD float ptr [EBX]                 ; 0041e7e9
    FADD float ptr [ESP + 0x4e8]        ; 0041e7eb
    FSTP float ptr [ESP + 0x56c]        ; 0041e7f2
    FLD float ptr [EBX + 0x4]           ; 0041e7f9
    FADD float ptr [ESP + 0x4ec]        ; 0041e7fc
    LEA EDI,[ESP + 0x518]               ; 0041e803
    FSTP float ptr [ESP + 0x570]        ; 0041e80a
    FLD float ptr [EBX + 0x8]           ; 0041e811
    FADD float ptr [ESP + 0x4f0]        ; 0041e814
    LEA ESI,[ESP + 0x56c]               ; 0041e81b
    FSTP float ptr [ESP + 0x574]        ; 0041e822
    MOVSD ES:EDI,ESI                    ; 0041e829
    MOVSD ES:EDI,ESI                    ; 0041e82a
    MOVSD ES:EDI,ESI                    ; 0041e82b
    LEA EAX,[ESP + 0x518]               ; 0041e82c
    MOV EDI,dword ptr [ESP + 0x664]     ; 0041e833
    CMP EAX,EDI                         ; 0041e83a
    JZ 0x0041e85b                       ; 0041e83c
        ;   XREF to: 0041e85b (CONDITIONAL_JUMP)  ; LAB_0041e85b
    MOV EAX,dword ptr [ESP + 0x518]     ; 0041e83e
    MOV dword ptr [EDI],EAX             ; 0041e845
    MOV EAX,dword ptr [ESP + 0x51c]     ; 0041e847
    MOV dword ptr [EDI + 0x4],EAX       ; 0041e84e
    MOV EAX,dword ptr [ESP + 0x520]     ; 0041e851
    MOV dword ptr [EDI + 0x8],EAX       ; 0041e858
    MOV EDI,dword ptr [ESP + 0x664]     ; 0041e85b
        ;   Label: LAB_0041e85b
    MOV EAX,dword ptr [ESP + 0x684]     ; 0041e862
    MOV EDX,dword ptr [EBX + 0xb0]      ; 0041e869
    ADD EDI,0x34                        ; 0041e86f
    INC EAX                             ; 0041e872
    MOV dword ptr [ESP + 0x664],EDI     ; 0041e873
    MOV dword ptr [ESP + 0x684],EAX     ; 0041e87a
    CMP EAX,EDX                         ; 0041e881
    JL 0x0041e7b1                       ; 0041e883
        ;   XREF to: 0041e7b1 (CONDITIONAL_JUMP)  ; LAB_0041e7b1
    LEA EAX,[EBX + 0xb4]                ; 0041e889
        ;   Label: LAB_0041e889
    MOV EDI,dword ptr [EBX + 0xb0]      ; 0041e88f
    XOR ECX,ECX                         ; 0041e895
    MOV dword ptr [ESP + 0x65c],EAX     ; 0041e897
    LEA EAX,[EBX + 0xcc]                ; 0041e89e
    MOV dword ptr [ESP + 0x680],ECX     ; 0041e8a4
    MOV dword ptr [ESP + 0x668],EAX     ; 0041e8ab
    LEA EAX,[EBX + 0xc0]                ; 0041e8b2
    MOV dword ptr [ESP + 0x63c],ECX     ; 0041e8b8
    MOV dword ptr [ESP + 0x66c],EAX     ; 0041e8bf
    MOV dword ptr [ESP + 0x670],EBX     ; 0041e8c6
    TEST EDI,EDI                        ; 0041e8cd
    JLE 0x0041ea10                      ; 0041e8cf
        ;   XREF to: 0041ea10 (CONDITIONAL_JUMP)  ; LAB_0041ea10
    MOV EAX,dword ptr [ESP + 0x65c]     ; 0041e8d5
    MOV dword ptr [ESP + 0x674],EAX     ; 0041e8dc
    MOV EAX,dword ptr [ESP + 0x670]     ; 0041e8e3
        ;   Label: LAB_0041e8e3
    FLD float ptr [EAX + 0xc4]          ; 0041e8ea
    FCOMP float ptr [EBX + 0x258]       ; 0041e8f0
    FNSTSW AX                           ; 0041e8f6
    SAHF                                ; 0041e8f8
    JNC 0x0041ff63                      ; 0041e8f9
        ;   XREF to: 0041ff63 (CONDITIONAL_JUMP)  ; LAB_0041ff63
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041e8ff
    MOV EDI,dword ptr [ESP + 0x66c]     ; 0041e906
    CMP EAX,EDI                         ; 0041e90d
    JZ 0x0041e93c                       ; 0041e90f
        ;   XREF to: 0041e93c (CONDITIONAL_JUMP)  ; LAB_0041e93c
    MOV EAX,EDI                         ; 0041e911
    FLD float ptr [EAX]                 ; 0041e913
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041e915
    FSTP float ptr [EAX]                ; 0041e91c
    MOV EAX,EDI                         ; 0041e91e
    FLD float ptr [EAX + 0x4]           ; 0041e920
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041e923
    FSTP float ptr [EAX + 0x4]          ; 0041e92a
    MOV EAX,EDI                         ; 0041e92d
    FLD float ptr [EAX + 0x8]           ; 0041e92f
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041e932
    FSTP float ptr [EAX + 0x8]          ; 0041e939
    FLD float ptr [EBX + 0x258]         ; 0041e93c
        ;   Label: LAB_0041e93c
    MOV EAX,dword ptr [ESP + 0x670]     ; 0041e942
    FADD double ptr [0x005d4af0]        ; 0041e949 | DAT_005d4af0
    FLD float ptr [EAX + 0xc4]          ; 0041e94f
    FXCH                                ; 0041e955
    FSTP float ptr [EAX + 0xd0]         ; 0041e957
    FSUB float ptr [EAX + 0xd0]         ; 0041e95d
    FLD float ptr [EBX + 0x258]         ; 0041e963
    FSUB float ptr [EAX + 0xd0]         ; 0041e969
    FDIVRP                              ; 0041e96f
    MOV dword ptr [EAX + 0xdc],0x0      ; 0041e971
    MOV dword ptr [EAX + 0xe0],0x3f800000 ; 0041e97b
    MOV dword ptr [EAX + 0xe4],0x0      ; 0041e985
    FSTP float ptr [EAX + 0xd8]         ; 0041e98f
    MOV EAX,dword ptr [ESP + 0x63c]     ; 0041e995
    INC EAX                             ; 0041e99c
    MOV EDX,dword ptr [ESP + 0x680]     ; 0041e99d
    MOV dword ptr [ESP + EAX*0x4 + 0x68],EDX ; 0041e9a4
    MOV dword ptr [ESP + 0x63c],EAX     ; 0041e9a8
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041e9af
        ;   Label: LAB_0041e9af
    MOV EDX,dword ptr [ESP + 0x66c]     ; 0041e9b6
    MOV ECX,dword ptr [ESP + 0x670]     ; 0041e9bd
    MOV ESI,dword ptr [ESP + 0x674]     ; 0041e9c4
    MOV EDI,dword ptr [ESP + 0x680]     ; 0041e9cb
    ADD EAX,0x34                        ; 0041e9d2
    ADD EDX,0x34                        ; 0041e9d5
    ADD ECX,0x34                        ; 0041e9d8
    ADD ESI,0x34                        ; 0041e9db
    INC EDI                             ; 0041e9de
    MOV dword ptr [ESP + 0x668],EAX     ; 0041e9df
    MOV dword ptr [ESP + 0x66c],EDX     ; 0041e9e6
    MOV dword ptr [ESP + 0x670],ECX     ; 0041e9ed
    MOV dword ptr [ESP + 0x674],ESI     ; 0041e9f4
    MOV EDX,dword ptr [EBX + 0xb0]      ; 0041e9fb
    MOV dword ptr [ESP + 0x680],EDI     ; 0041ea01
    CMP EDI,EDX                         ; 0041ea08
    JL 0x0041e8e3                       ; 0041ea0a
        ;   XREF to: 0041e8e3 (CONDITIONAL_JUMP)  ; LAB_0041e8e3
    CMP dword ptr [ESP + 0x63c],0x1     ; 0041ea10
        ;   Label: LAB_0041ea10
    JNZ 0x0041f029                      ; 0041ea18
        ;   XREF to: 0041f029 (CONDITIONAL_JUMP)  ; LAB_0041f029
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041ea1e
    MOV dword ptr [ESP + 0x698],EAX     ; 0041ea22
    LEA ECX,[EAX*0x4 + 0x0]             ; 0041ea29
    SUB ECX,EAX                         ; 0041ea30
    SHL ECX,0x2                         ; 0041ea32
    ADD ECX,EAX                         ; 0041ea35
    MOV EDX,dword ptr [ESP + 0x65c]     ; 0041ea37
    SHL ECX,0x2                         ; 0041ea3e
    ADD EDX,ECX                         ; 0041ea41
    LEA EAX,[EDX + 0xc]                 ; 0041ea43
    FLD float ptr [EAX]                 ; 0041ea46
    FSUB float ptr [EDX + 0x18]         ; 0041ea48
    FSTP float ptr [ESP + 0x134]        ; 0041ea4b
    FLD float ptr [EAX + 0x4]           ; 0041ea52
    FSUB float ptr [EDX + 0x1c]         ; 0041ea55
    LEA EDI,[ESP + 0x410]               ; 0041ea58
    FSTP float ptr [ESP + 0x138]        ; 0041ea5f
    FLD float ptr [EAX + 0x8]           ; 0041ea66
    FSUB float ptr [EDX + 0x20]         ; 0041ea69
    LEA ESI,[ESP + 0x134]               ; 0041ea6c
    FSTP float ptr [ESP + 0x13c]        ; 0041ea73
    MOVSD ES:EDI,ESI                    ; 0041ea7a
    MOVSD ES:EDI,ESI                    ; 0041ea7b
    MOVSD ES:EDI,ESI                    ; 0041ea7c
    FLD float ptr [ECX + EBX*0x1 + 0xd8] ; 0041ea7d
    FLD1                                ; 0041ea84
    FSUBRP                              ; 0041ea86
    FMUL double ptr [0x005d4ac0]        ; 0041ea88 | DAT_005d4ac0
    FLD float ptr [ESP + 0x410]         ; 0041ea8e
    FXCH                                ; 0041ea95
    FSTP float ptr [ESP + 0x658]        ; 0041ea97
    FMUL float ptr [ESP + 0x658]        ; 0041ea9e
    FLD float ptr [ESP + 0x414]         ; 0041eaa5
    FMUL float ptr [ESP + 0x658]        ; 0041eaac
    MOV EDX,dword ptr [ESP + 0x698]     ; 0041eab3
    FLD float ptr [ESP + 0x418]         ; 0041eaba
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041eac1
    FMUL float ptr [ESP + 0x658]        ; 0041eac8
    SUB EAX,EDX                         ; 0041eacf
    LEA EDI,[ESP + 0x608]               ; 0041ead1
    SHL EAX,0x2                         ; 0041ead8
    LEA ESI,[ESP + 0x464]               ; 0041eadb
    ADD EAX,EDX                         ; 0041eae2
    FXCH ST2                            ; 0041eae4
    FSTP float ptr [ESP + 0x464]        ; 0041eae6
    FSTP float ptr [ESP + 0x468]        ; 0041eaed
    FSTP float ptr [ESP + 0x46c]        ; 0041eaf4
    MOVSD ES:EDI,ESI                    ; 0041eafb
    MOVSD ES:EDI,ESI                    ; 0041eafc
    MOVSD ES:EDI,ESI                    ; 0041eafd
    SHL EAX,0x2                         ; 0041eafe
    FLD float ptr [EBX]                 ; 0041eb01
    FLD float ptr [EBX + 0x4]           ; 0041eb03
    FLD float ptr [EBX + 0x8]           ; 0041eb06
    MOV ESI,dword ptr [ESP + 0x65c]     ; 0041eb09
    LEA EDI,[ESP + 0x17c]               ; 0041eb10
    FXCH ST2                            ; 0041eb17
    FSUB float ptr [ESP + 0x608]        ; 0041eb19
    ADD EAX,ESI                         ; 0041eb20
    FSTP float ptr [EBX]                ; 0041eb22
    LEA ESI,[ESP + 0x4c4]               ; 0041eb24
    ADD EAX,0x28                        ; 0041eb2b
    FSUB float ptr [ESP + 0x60c]        ; 0041eb2e
    PUSH EAX                            ; 0041eb35
    FSTP float ptr [EBX + 0x4]          ; 0041eb36
    LEA EAX,[EBX + 0x18]                ; 0041eb39
    FSUB float ptr [ESP + 0x614]        ; 0041eb3c
    PUSH EAX                            ; 0041eb43
    FSTP float ptr [EBX + 0x8]          ; 0041eb44
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041eb47
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x4cc]               ; 0041eb4c
    ADD ESP,0x8                         ; 0041eb53
    MOVSD ES:EDI,ESI                    ; 0041eb56
    MOVSD ES:EDI,ESI                    ; 0041eb57
    MOVSD ES:EDI,ESI                    ; 0041eb58
    LEA EAX,[EBX + 0x4c]                ; 0041eb59
    FLD float ptr [ESP + 0x180]         ; 0041eb5c
    FMUL float ptr [EAX + 0x4]          ; 0041eb63
    FLD float ptr [ESP + 0x17c]         ; 0041eb66
    FMUL float ptr [EAX]                ; 0041eb6d
    FADDP                               ; 0041eb6f
    FLD float ptr [ESP + 0x184]         ; 0041eb71
    FMUL float ptr [EAX + 0x8]          ; 0041eb78
    FADDP                               ; 0041eb7b
    FMUL float ptr [0x005d4ac8]         ; 0041eb7d | DAT_005d4ac8
    FLD float ptr [ESP + 0x17c]         ; 0041eb83
    FXCH                                ; 0041eb8a
    FSTP float ptr [ESP + 0x62c]        ; 0041eb8c
    FMUL float ptr [ESP + 0x62c]        ; 0041eb93
    FLD float ptr [ESP + 0x180]         ; 0041eb9a
    FMUL float ptr [ESP + 0x62c]        ; 0041eba1
    FLD float ptr [ESP + 0x184]         ; 0041eba8
    FMUL float ptr [ESP + 0x62c]        ; 0041ebaf
    LEA EDI,[ESP + 0x4d0]               ; 0041ebb6
    LEA ESI,[ESP + 0x5fc]               ; 0041ebbd
    FXCH ST2                            ; 0041ebc4
    FSTP float ptr [ESP + 0x5fc]        ; 0041ebc6
    FSTP float ptr [ESP + 0x600]        ; 0041ebcd
    FSTP float ptr [ESP + 0x604]        ; 0041ebd4
    MOVSD ES:EDI,ESI                    ; 0041ebdb
    MOVSD ES:EDI,ESI                    ; 0041ebdc
    MOVSD ES:EDI,ESI                    ; 0041ebdd
    LEA EDX,[ESP + 0x1ac]               ; 0041ebde
    FLD float ptr [ESP + 0x4d4]         ; 0041ebe5
    FLD float ptr [ESP + 0x4d0]         ; 0041ebec
    FSUB float ptr [EAX]                ; 0041ebf3
    FLD float ptr [ESP + 0x4d8]         ; 0041ebf5
    FXCH                                ; 0041ebfc
    FSTP float ptr [ESP + 0x554]        ; 0041ebfe
    FXCH                                ; 0041ec05
    FSUB float ptr [EAX + 0x4]          ; 0041ec07
    LEA EDI,[ESP + 0x4f4]               ; 0041ec0a
    FSTP float ptr [ESP + 0x558]        ; 0041ec11
    FSUB float ptr [EAX + 0x8]          ; 0041ec18
    LEA ESI,[ESP + 0x554]               ; 0041ec1b
    FSTP float ptr [ESP + 0x55c]        ; 0041ec22
    LEA EAX,[ESP + 0x4f4]               ; 0041ec29
    MOVSD ES:EDI,ESI                    ; 0041ec30
    MOVSD ES:EDI,ESI                    ; 0041ec31
    MOVSD ES:EDI,ESI                    ; 0041ec32
    CMP EDX,EAX                         ; 0041ec33
    JZ 0x0041ec61                       ; 0041ec35
        ;   XREF to: 0041ec61 (CONDITIONAL_JUMP)  ; LAB_0041ec61
    MOV EAX,dword ptr [ESP + 0x4f4]     ; 0041ec37
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0041ec3e
    MOV EAX,dword ptr [ESP + 0x4f8]     ; 0041ec45
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0041ec4c
    MOV EAX,dword ptr [ESP + 0x4fc]     ; 0041ec53
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0041ec5a
    FLD float ptr [0x005d4acc]          ; 0041ec61 | DAT_005d4acc
        ;   Label: LAB_0041ec61
    FLD float ptr [ESP + 0x1ac]         ; 0041ec67
    FMUL ST1                            ; 0041ec6e
    FLD float ptr [ESP + 0x1b0]         ; 0041ec70
    FMUL ST2                            ; 0041ec77
    FLD float ptr [ESP + 0x1b4]         ; 0041ec79
    FMULP ST3                           ; 0041ec80
    FXCH                                ; 0041ec82
    FLD float ptr [0x005d4ad0]          ; 0041ec84 | DAT_005d4ad0
    FXCH                                ; 0041ec8a
    FMUL ST1                            ; 0041ec8c
    FXCH ST2                            ; 0041ec8e
    FMUL ST1                            ; 0041ec90
    FLD1                                ; 0041ec92
    FXCH ST4                            ; 0041ec94
    FMULP ST2                           ; 0041ec96
    FXCH ST3                            ; 0041ec98
    FDIV float ptr [EBP + 0x18]         ; 0041ec9a
    LEA EDI,[ESP + 0x560]               ; 0041ec9d
    LEA EDX,[EBX + 0x4c]                ; 0041eca4
    FXCH ST2                            ; 0041eca7
    FSTP float ptr [ESP + 0x1ac]        ; 0041eca9
    FXCH ST2                            ; 0041ecb0
    FSTP float ptr [ESP + 0x1b0]        ; 0041ecb2
    FXCH                                ; 0041ecb9
    FSTP float ptr [ESP + 0x1b4]        ; 0041ecbb
    FLD float ptr [ESP + 0x1ac]         ; 0041ecc2
    FSUB float ptr [EDX]                ; 0041ecc9
    FLD float ptr [ESP + 0x1b0]         ; 0041eccb
    FXCH                                ; 0041ecd2
    FSTP float ptr [ESP + 0x2a8]        ; 0041ecd4
    FSUB float ptr [EDX + 0x4]          ; 0041ecdb
    FLD float ptr [ESP + 0x1b4]         ; 0041ecde
    FXCH                                ; 0041ece5
    FSTP float ptr [ESP + 0x2ac]        ; 0041ece7
    FSUB float ptr [EDX + 0x8]          ; 0041ecee
    LEA ESI,[ESP + 0x2a8]               ; 0041ecf1
    FSTP float ptr [ESP + 0x2b0]        ; 0041ecf8
    MOVSD ES:EDI,ESI                    ; 0041ecff
    MOVSD ES:EDI,ESI                    ; 0041ed00
    MOVSD ES:EDI,ESI                    ; 0041ed01
    LEA EAX,[EBX + 0x94]                ; 0041ed02
    FLD float ptr [ESP + 0x560]         ; 0041ed08
    FMUL float ptr [EAX]                ; 0041ed0f
    FLD float ptr [ESP + 0x564]         ; 0041ed11
    FXCH                                ; 0041ed18
    FSTP float ptr [ESP + 0x2cc]        ; 0041ed1a
    FMUL float ptr [EAX]                ; 0041ed21
    FLD float ptr [ESP + 0x568]         ; 0041ed23
    FXCH                                ; 0041ed2a
    FSTP float ptr [ESP + 0x2d0]        ; 0041ed2c
    FMUL float ptr [EAX]                ; 0041ed33
    LEA EDI,[ESP + 0xa4]                ; 0041ed35
    LEA ESI,[ESP + 0x2cc]               ; 0041ed3c
    FSTP float ptr [ESP + 0x2d4]        ; 0041ed43
    MOVSD ES:EDI,ESI                    ; 0041ed4a
    MOVSD ES:EDI,ESI                    ; 0041ed4b
    MOVSD ES:EDI,ESI                    ; 0041ed4c
    FLD float ptr [ESP + 0xa4]          ; 0041ed4d
    FMUL ST1                            ; 0041ed54
    FLD float ptr [ESP + 0xa8]          ; 0041ed56
    FMUL ST2                            ; 0041ed5d
    FLD float ptr [ESP + 0xac]          ; 0041ed5f
    FMULP ST3                           ; 0041ed66
    LEA EAX,[EBX + 0x64]                ; 0041ed68
    LEA EDI,[ESP + 0x248]               ; 0041ed6b
    LEA ESI,[ESP + 0x2fc]               ; 0041ed72
    FXCH                                ; 0041ed79
    FSTP float ptr [ESP + 0x2fc]        ; 0041ed7b
    FSTP float ptr [ESP + 0x300]        ; 0041ed82
    FSTP float ptr [ESP + 0x304]        ; 0041ed89
    MOVSD ES:EDI,ESI                    ; 0041ed90
    MOVSD ES:EDI,ESI                    ; 0041ed91
    MOVSD ES:EDI,ESI                    ; 0041ed92
    FLD float ptr [EAX]                 ; 0041ed93
    FADD float ptr [ESP + 0x248]        ; 0041ed95
    FLD float ptr [EAX + 0x4]           ; 0041ed9c
    FXCH                                ; 0041ed9f
    FSTP float ptr [EAX]                ; 0041eda1
    FADD float ptr [ESP + 0x24c]        ; 0041eda3
    FLD float ptr [EAX + 0x8]           ; 0041edaa
    FXCH                                ; 0041edad
    FSTP float ptr [EAX + 0x4]          ; 0041edaf
    FADD float ptr [ESP + 0x250]        ; 0041edb2
    FSTP float ptr [EAX + 0x8]          ; 0041edb9
    LEA EAX,[EBX + 0x70]                ; 0041edbc
    MOV dword ptr [EAX + 0x8],0x0       ; 0041edbf
    MOV EDX,dword ptr [ESP + 0x698]     ; 0041edc6
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041edcd
    MOV dword ptr [EAX + 0x4],ECX       ; 0041edd0
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041edd3
    MOV dword ptr [EAX],ECX             ; 0041edd6
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041edd8
    SUB EAX,EDX                         ; 0041eddf
    SHL EAX,0x2                         ; 0041ede1
    ADD EDX,EAX                         ; 0041ede4
    SHL EDX,0x2                         ; 0041ede6
    LEA EAX,[EBX + 0xb4]                ; 0041ede9
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0041edef
    FMUL float ptr [ESP + 0x250]        ; 0041edf3
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 0041edfa
    FMUL float ptr [ESP + 0x24c]        ; 0041edfe
    FSUBP                               ; 0041ee05
    FSTP float ptr [ESP + 0xbc]         ; 0041ee07
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 0041ee0e
    FMUL float ptr [ESP + 0x248]        ; 0041ee12
    FLD float ptr [EDX + EAX*0x1]       ; 0041ee19
    FMUL float ptr [ESP + 0x250]        ; 0041ee1c
    FSUBP                               ; 0041ee23
    FSTP float ptr [ESP + 0xc0]         ; 0041ee25
    FLD float ptr [EDX + EAX*0x1]       ; 0041ee2c
    FMUL float ptr [ESP + 0x24c]        ; 0041ee2f
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0041ee36
    FMUL float ptr [ESP + 0x248]        ; 0041ee3a
    LEA EDI,[ESP + 0x2b4]               ; 0041ee41
    FSUBP                               ; 0041ee48
    LEA ESI,[ESP + 0xbc]                ; 0041ee4a
    FSTP float ptr [ESP + 0xc4]         ; 0041ee51
    MOVSD ES:EDI,ESI                    ; 0041ee58
    MOVSD ES:EDI,ESI                    ; 0041ee59
    MOVSD ES:EDI,ESI                    ; 0041ee5a
    FLD float ptr [0x005d4ad4]          ; 0041ee5b | DAT_005d4ad4
    FLD float ptr [ESP + 0x2b4]         ; 0041ee61
    FMUL ST1                            ; 0041ee68
    FLD float ptr [ESP + 0x2b8]         ; 0041ee6a
    FMUL ST2                            ; 0041ee71
    FLD float ptr [ESP + 0x2bc]         ; 0041ee73
    FMULP ST3                           ; 0041ee7a
    LEA EAX,[EBX + 0x88]                ; 0041ee7c
    LEA EDI,[ESP + 0x188]               ; 0041ee82
    LEA ESI,[ESP + 0x3ec]               ; 0041ee89
    FXCH                                ; 0041ee90
    FSTP float ptr [ESP + 0x3ec]        ; 0041ee92
    FSTP float ptr [ESP + 0x3f0]        ; 0041ee99
    FSTP float ptr [ESP + 0x3f4]        ; 0041eea0
    MOVSD ES:EDI,ESI                    ; 0041eea7
    MOVSD ES:EDI,ESI                    ; 0041eea8
    MOVSD ES:EDI,ESI                    ; 0041eea9
    FLD float ptr [EAX]                 ; 0041eeaa
    FADD float ptr [ESP + 0x188]        ; 0041eeac
    FLD float ptr [EAX + 0x4]           ; 0041eeb3
    FXCH                                ; 0041eeb6
    FSTP float ptr [EAX]                ; 0041eeb8
    FADD float ptr [ESP + 0x18c]        ; 0041eeba
    FLD float ptr [EAX + 0x8]           ; 0041eec1
    FXCH                                ; 0041eec4
    FSTP float ptr [EAX + 0x4]          ; 0041eec6
    FADD float ptr [ESP + 0x190]        ; 0041eec9
    LEA EDI,[ESP + 0x5f0]               ; 0041eed0
    FSTP float ptr [EAX + 0x8]          ; 0041eed7
    LEA ESI,[EDX + EBX*0x1 + 0xb4]      ; 0041eeda
    MOVSD ES:EDI,ESI                    ; 0041eee1
    MOVSD ES:EDI,ESI                    ; 0041eee2
    MOVSD ES:EDI,ESI                    ; 0041eee3
    XOR EDI,EDI                         ; 0041eee4
    MOV dword ptr [ESP + 0x35c],EDI     ; 0041eee6
    MOV dword ptr [ESP + 0x360],EDI     ; 0041eeed
    MOV dword ptr [ESP + 0x364],EDI     ; 0041eef4
    LEA EAX,[ESP + 0x35c]               ; 0041eefb
    FLD float ptr [EBX + 0x94]          ; 0041ef02
    FMUL double ptr [0x005d4ab0]        ; 0041ef08 | DAT_005d4ab0
    PUSH EAX                            ; 0041ef0e
    LEA EAX,[EBX + 0x18]                ; 0041ef0f
    LEA ESI,[ESP + 0x444]               ; 0041ef12
    PUSH EAX                            ; 0041ef19
    LEA EDI,[ESP + 0x3ac]               ; 0041ef1a
    FSTP float ptr [ESP + 0x368]        ; 0041ef21
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041ef28
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x448]               ; 0041ef2d
    LEA EAX,[ESP + 0x3ac]               ; 0041ef34
    ADD ESP,0x8                         ; 0041ef3b
    LEA EDX,[ESP + 0x35c]               ; 0041ef3e
    MOVSD ES:EDI,ESI                    ; 0041ef45
    MOVSD ES:EDI,ESI                    ; 0041ef46
    MOVSD ES:EDI,ESI                    ; 0041ef47
    CMP EDX,EAX                         ; 0041ef48
    JZ 0x0041ef76                       ; 0041ef4a
        ;   XREF to: 0041ef76 (CONDITIONAL_JUMP)  ; LAB_0041ef76
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 0041ef4c
    MOV dword ptr [ESP + 0x35c],EAX     ; 0041ef53
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 0041ef5a
    MOV dword ptr [ESP + 0x360],EAX     ; 0041ef61
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 0041ef68
    MOV dword ptr [ESP + 0x364],EAX     ; 0041ef6f
    FLD float ptr [ESP + 0x5f4]         ; 0041ef76
        ;   Label: LAB_0041ef76
    FMUL float ptr [ESP + 0x364]        ; 0041ef7d
    FLD float ptr [ESP + 0x5f8]         ; 0041ef84
    FMUL float ptr [ESP + 0x35c]        ; 0041ef8b
    FLD float ptr [ESP + 0x5f0]         ; 0041ef92
    FMUL float ptr [ESP + 0x360]        ; 0041ef99
    FLD float ptr [ESP + 0x5f8]         ; 0041efa0
    FMUL float ptr [ESP + 0x360]        ; 0041efa7
    FLD float ptr [ESP + 0x5f0]         ; 0041efae
    FMUL float ptr [ESP + 0x364]        ; 0041efb5
    FLD float ptr [ESP + 0x5f4]         ; 0041efbc
    FMUL float ptr [ESP + 0x35c]        ; 0041efc3
    LEA EDI,[ESP + 0xb0]                ; 0041efca
    LEA ESI,[ESP + 0x158]               ; 0041efd1
    LEA EAX,[EBX + 0x88]                ; 0041efd8
    FXCH ST2                            ; 0041efde
    FSUBP ST5,ST0                       ; 0041efe0
    FSUBP ST3,ST0                       ; 0041efe2
    FSUBP                               ; 0041efe4
    FXCH ST2                            ; 0041efe6
    FSTP float ptr [ESP + 0x158]        ; 0041efe8
    FSTP float ptr [ESP + 0x15c]        ; 0041efef
    FSTP float ptr [ESP + 0x160]        ; 0041eff6
    MOVSD ES:EDI,ESI                    ; 0041effd
    MOVSD ES:EDI,ESI                    ; 0041effe
    MOVSD ES:EDI,ESI                    ; 0041efff
    FLD float ptr [EAX]                 ; 0041f000
    FADD float ptr [ESP + 0xb0]         ; 0041f002
    FLD float ptr [EAX + 0x4]           ; 0041f009
    FXCH                                ; 0041f00c
    FSTP float ptr [EAX]                ; 0041f00e
    FADD float ptr [ESP + 0xb4]         ; 0041f010
    FLD float ptr [EAX + 0x8]           ; 0041f017
    FXCH                                ; 0041f01a
    FSTP float ptr [EAX + 0x4]          ; 0041f01c
    FADD float ptr [ESP + 0xb8]         ; 0041f01f
    FSTP float ptr [EAX + 0x8]          ; 0041f026
    CMP dword ptr [ESP + 0x63c],0x2     ; 0041f029
        ;   Label: LAB_0041f029
    JNZ 0x0041fa13                      ; 0041f031
        ;   XREF to: 0041fa13 (CONDITIONAL_JUMP)  ; LAB_0041fa13
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041f037
    MOV dword ptr [ESP + 0x69c],EAX     ; 0041f03b
    MOV EDX,EAX                         ; 0041f042
    SHL EAX,0x2                         ; 0041f044
    SUB EAX,EDX                         ; 0041f047
    SHL EAX,0x2                         ; 0041f049
    ADD EAX,EDX                         ; 0041f04c
    SHL EAX,0x2                         ; 0041f04e
    LEA EDX,[EBX + 0xb4]                ; 0041f051
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041f057
    ADD EAX,EDX                         ; 0041f05e
    LEA ECX,[EAX + 0xc]                 ; 0041f060
    FLD float ptr [ECX]                 ; 0041f063
    FSUB float ptr [EAX + 0x18]         ; 0041f065
    FSTP float ptr [ESP + 0x38c]        ; 0041f068
    FLD float ptr [ECX + 0x4]           ; 0041f06f
    FSUB float ptr [EAX + 0x1c]         ; 0041f072
    LEA EDI,[ESP + 0x218]               ; 0041f075
    FSTP float ptr [ESP + 0x390]        ; 0041f07c
    FLD float ptr [ECX + 0x8]           ; 0041f083
    FSUB float ptr [EAX + 0x20]         ; 0041f086
    LEA ESI,[ESP + 0x38c]               ; 0041f089
    FSTP float ptr [ESP + 0x394]        ; 0041f090
    MOV EAX,dword ptr [ESP + 0x68c]     ; 0041f097
    MOVSD ES:EDI,ESI                    ; 0041f09e
    MOVSD ES:EDI,ESI                    ; 0041f09f
    MOVSD ES:EDI,ESI                    ; 0041f0a0
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 0041f0a1
    FLD1                                ; 0041f0a8
    FSUBRP                              ; 0041f0aa
    FLD double ptr [0x005d4ad8]         ; 0041f0ac | DAT_005d4ad8
    FXCH                                ; 0041f0b2
    FMUL ST1                            ; 0041f0b4
    FLD float ptr [ESP + 0x218]         ; 0041f0b6
    FXCH                                ; 0041f0bd
    FSTP float ptr [ESP + 0x6a4]        ; 0041f0bf
    FMUL float ptr [ESP + 0x6a4]        ; 0041f0c6
    FLD float ptr [ESP + 0x21c]         ; 0041f0cd
    FMUL float ptr [ESP + 0x6a4]        ; 0041f0d4
    FLD float ptr [ESP + 0x220]         ; 0041f0db
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041f0e2
    FMUL float ptr [ESP + 0x6a4]        ; 0041f0e6
    MOV dword ptr [ESP + 0x690],EAX     ; 0041f0ed
    MOV ECX,EAX                         ; 0041f0f4
    SHL EAX,0x2                         ; 0041f0f6
    LEA EDI,[ESP + 0x368]               ; 0041f0f9
    SUB EAX,ECX                         ; 0041f100
    LEA ESI,[ESP + 0x3c8]               ; 0041f102
    SHL EAX,0x2                         ; 0041f109
    FXCH ST2                            ; 0041f10c
    FSTP float ptr [ESP + 0x3c8]        ; 0041f10e
    FSTP float ptr [ESP + 0x3cc]        ; 0041f115
    FSTP float ptr [ESP + 0x3d0]        ; 0041f11c
    MOVSD ES:EDI,ESI                    ; 0041f123
    MOVSD ES:EDI,ESI                    ; 0041f124
    MOVSD ES:EDI,ESI                    ; 0041f125
    ADD EAX,ECX                         ; 0041f126
    FLD float ptr [ESP + 0x36c]         ; 0041f128
    FMUL ST0                            ; 0041f12f
    SHL EAX,0x2                         ; 0041f131
    FLD float ptr [ESP + 0x368]         ; 0041f134
    FMUL ST0                            ; 0041f13b
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041f13d
    LEA ECX,[EAX + EDX*0x1]             ; 0041f144
    FADDP                               ; 0041f147
    LEA EAX,[ECX + 0xc]                 ; 0041f149
    FLD float ptr [ESP + 0x370]         ; 0041f14c
    FMUL ST0                            ; 0041f153
    FLD float ptr [EAX]                 ; 0041f155
    FSUB float ptr [ECX + 0x18]         ; 0041f157
    LEA EDI,[ESP + 0x3d4]               ; 0041f15a
    FSTP float ptr [ESP + 0x428]        ; 0041f161
    FLD float ptr [EAX + 0x4]           ; 0041f168
    FSUB float ptr [ECX + 0x1c]         ; 0041f16b
    LEA ESI,[ESP + 0x428]               ; 0041f16e
    FSTP float ptr [ESP + 0x42c]        ; 0041f175
    FLD float ptr [EAX + 0x8]           ; 0041f17c
    FXCH                                ; 0041f17f
    FADDP ST2,ST0                       ; 0041f181
    MOV EAX,dword ptr [ESP + 0x68c]     ; 0041f183
    FSUB float ptr [ECX + 0x20]         ; 0041f18a
    FXCH                                ; 0041f18d
    FSTP float ptr [ESP + 0x18]         ; 0041f18f
    FSTP float ptr [ESP + 0x430]        ; 0041f193
    MOVSD ES:EDI,ESI                    ; 0041f19a
    MOVSD ES:EDI,ESI                    ; 0041f19b
    MOVSD ES:EDI,ESI                    ; 0041f19c
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 0041f19d
    FLD float ptr [ESP + 0x18]          ; 0041f1a4
    FSQRT                               ; 0041f1a8
    FLD1                                ; 0041f1aa
    FSUBRP ST2,ST0                      ; 0041f1ac
    FXCH                                ; 0041f1ae
    FMULP ST2                           ; 0041f1b0
    FLD float ptr [ESP + 0x3d4]         ; 0041f1b2
    FXCH ST2                            ; 0041f1b9
    FSTP float ptr [ESP + 0x648]        ; 0041f1bb
    FXCH                                ; 0041f1c2
    FMUL float ptr [ESP + 0x648]        ; 0041f1c4
    FLD float ptr [ESP + 0x3d8]         ; 0041f1cb
    FMUL float ptr [ESP + 0x648]        ; 0041f1d2
    FLD float ptr [ESP + 0x3dc]         ; 0041f1d9
    FMUL float ptr [ESP + 0x648]        ; 0041f1e0
    LEA EDI,[ESP + 0x3bc]               ; 0041f1e7
    LEA ESI,[ESP + 0x488]               ; 0041f1ee
    FXCH ST2                            ; 0041f1f5
    FSTP float ptr [ESP + 0x488]        ; 0041f1f7
    FSTP float ptr [ESP + 0x48c]        ; 0041f1fe
    FSTP float ptr [ESP + 0x490]        ; 0041f205
    MOVSD ES:EDI,ESI                    ; 0041f20c
    MOVSD ES:EDI,ESI                    ; 0041f20d
    MOVSD ES:EDI,ESI                    ; 0041f20e
    FLD float ptr [ESP + 0x3c0]         ; 0041f20f
    FMUL ST0                            ; 0041f216
    FLD float ptr [ESP + 0x3bc]         ; 0041f218
    FMUL ST0                            ; 0041f21f
    FADDP                               ; 0041f221
    FLD float ptr [ESP + 0x3c4]         ; 0041f223
    FMUL ST0                            ; 0041f22a
    FADDP                               ; 0041f22c
    FSQRT                               ; 0041f22e
    LEA ESI,[EBX + 0x18]                ; 0041f230
    FXCH                                ; 0041f233
    FCOMPP                              ; 0041f235
    FNSTSW AX                           ; 0041f237
    SAHF                                ; 0041f239
    JBE 0x00420086                      ; 0041f23a
        ;   XREF to: 00420086 (CONDITIONAL_JUMP)  ; LAB_00420086
    MOV ECX,dword ptr [ESP + 0x69c]     ; 0041f240
    FLD float ptr [EBX]                 ; 0041f247
    LEA EAX,[ECX*0x4 + 0x0]             ; 0041f249
    FLD float ptr [EBX + 0x4]           ; 0041f250
    SUB EAX,ECX                         ; 0041f253
    FLD float ptr [EBX + 0x8]           ; 0041f255
    SHL EAX,0x2                         ; 0041f258
    LEA EDI,[ESP + 0x3f8]               ; 0041f25b
    ADD EAX,ECX                         ; 0041f262
    FXCH ST2                            ; 0041f264
    FADD float ptr [ESP + 0x368]        ; 0041f266
    SHL EAX,0x2                         ; 0041f26d
    FSTP float ptr [EBX]                ; 0041f270
    ADD EDX,EAX                         ; 0041f272
    FADD float ptr [ESP + 0x36c]        ; 0041f274
    ADD EDX,0x28                        ; 0041f27b
    FSTP float ptr [EBX + 0x4]          ; 0041f27e
    PUSH EDX                            ; 0041f281
    FADD float ptr [ESP + 0x374]        ; 0041f282
    PUSH ESI                            ; 0041f289
    LEA ESI,[ESP + 0x94]                ; 0041f28a
    FSTP float ptr [EBX + 0x8]          ; 0041f291
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041f294
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x94]                ; 0041f299
    LEA EAX,[ESP + 0x400]               ; 0041f2a0
    ADD ESP,0x8                         ; 0041f2a7
    LEA EDX,[ESP + 0x530]               ; 0041f2aa
    MOVSD ES:EDI,ESI                    ; 0041f2b1
    MOVSD ES:EDI,ESI                    ; 0041f2b2
    MOVSD ES:EDI,ESI                    ; 0041f2b3
    CMP EDX,EAX                         ; 0041f2b4
    JZ 0x0041f2e2                       ; 0041f2b6
        ;   XREF to: 0041f2e2 (CONDITIONAL_JUMP)  ; LAB_0041f2e2
    MOV EAX,dword ptr [ESP + 0x3f8]     ; 0041f2b8
    MOV dword ptr [ESP + 0x530],EAX     ; 0041f2bf
    MOV EAX,dword ptr [ESP + 0x3fc]     ; 0041f2c6
    MOV dword ptr [ESP + 0x534],EAX     ; 0041f2cd
    MOV EAX,dword ptr [ESP + 0x400]     ; 0041f2d4
    MOV dword ptr [ESP + 0x538],EAX     ; 0041f2db
        ;   Label: LAB_0041f2db
    LEA EAX,[EBX + 0x4c]                ; 0041f2e2
        ;   Label: LAB_0041f2e2
    FLD float ptr [ESP + 0x534]         ; 0041f2e5
    FMUL float ptr [EAX + 0x4]          ; 0041f2ec
    FLD float ptr [ESP + 0x530]         ; 0041f2ef
    FMUL float ptr [EAX]                ; 0041f2f6
    FADDP                               ; 0041f2f8
    FLD float ptr [ESP + 0x538]         ; 0041f2fa
    FMUL float ptr [EAX + 0x8]          ; 0041f301
    FADDP                               ; 0041f304
    FMUL float ptr [0x005d4ac8]         ; 0041f306 | DAT_005d4ac8
    FLD float ptr [ESP + 0x530]         ; 0041f30c
    FXCH                                ; 0041f313
    FSTP float ptr [ESP + 0x628]        ; 0041f315
    FMUL float ptr [ESP + 0x628]        ; 0041f31c
    FLD float ptr [ESP + 0x534]         ; 0041f323
    FMUL float ptr [ESP + 0x628]        ; 0041f32a
    FLD float ptr [ESP + 0x538]         ; 0041f331
    FMUL float ptr [ESP + 0x628]        ; 0041f338
    LEA EDI,[ESP + 0x53c]               ; 0041f33f
    LEA ESI,[ESP + 0x20c]               ; 0041f346
    FXCH ST2                            ; 0041f34d
    FSTP float ptr [ESP + 0x20c]        ; 0041f34f
    FSTP float ptr [ESP + 0x210]        ; 0041f356
    FSTP float ptr [ESP + 0x214]        ; 0041f35d
    MOVSD ES:EDI,ESI                    ; 0041f364
    MOVSD ES:EDI,ESI                    ; 0041f365
    MOVSD ES:EDI,ESI                    ; 0041f366
    LEA EDX,[ESP + 0x5b4]               ; 0041f367
    FLD float ptr [ESP + 0x540]         ; 0041f36e
    FLD float ptr [ESP + 0x53c]         ; 0041f375
    FSUB float ptr [EAX]                ; 0041f37c
    FLD float ptr [ESP + 0x544]         ; 0041f37e
    FXCH                                ; 0041f385
    FSTP float ptr [ESP + 0x5d8]        ; 0041f387
    FXCH                                ; 0041f38e
    FSUB float ptr [EAX + 0x4]          ; 0041f390
    LEA EDI,[ESP + 0x1b8]               ; 0041f393
    FSTP float ptr [ESP + 0x5dc]        ; 0041f39a
    FSUB float ptr [EAX + 0x8]          ; 0041f3a1
    LEA ESI,[ESP + 0x5d8]               ; 0041f3a4
    FSTP float ptr [ESP + 0x5e0]        ; 0041f3ab
    LEA EAX,[ESP + 0x1b8]               ; 0041f3b2
    MOVSD ES:EDI,ESI                    ; 0041f3b9
    MOVSD ES:EDI,ESI                    ; 0041f3ba
    MOVSD ES:EDI,ESI                    ; 0041f3bb
    CMP EDX,EAX                         ; 0041f3bc
    JZ 0x0041f3ea                       ; 0041f3be
        ;   XREF to: 0041f3ea (CONDITIONAL_JUMP)  ; LAB_0041f3ea
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0041f3c0
    MOV dword ptr [ESP + 0x5b4],EAX     ; 0041f3c7
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0041f3ce
    MOV dword ptr [ESP + 0x5b8],EAX     ; 0041f3d5
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0041f3dc
    MOV dword ptr [ESP + 0x5bc],EAX     ; 0041f3e3
    FLD float ptr [0x005d4acc]          ; 0041f3ea | DAT_005d4acc
        ;   Label: LAB_0041f3ea
    FLD float ptr [ESP + 0x5b4]         ; 0041f3f0
    FMUL ST1                            ; 0041f3f7
    FLD float ptr [ESP + 0x5b8]         ; 0041f3f9
    FMUL ST2                            ; 0041f400
    FLD float ptr [ESP + 0x5bc]         ; 0041f402
    FMULP ST3                           ; 0041f409
    FXCH                                ; 0041f40b
    FLD float ptr [0x005d4ae0]          ; 0041f40d | DAT_005d4ae0
    FXCH                                ; 0041f413
    FMUL ST1                            ; 0041f415
    FXCH ST2                            ; 0041f417
    FMUL ST1                            ; 0041f419
    FLD1                                ; 0041f41b
    FXCH ST4                            ; 0041f41d
    FMULP ST2                           ; 0041f41f
    FXCH ST3                            ; 0041f421
    FDIV float ptr [EBP + 0x18]         ; 0041f423
    LEA EDI,[ESP + 0x11c]               ; 0041f426
    LEA EDX,[EBX + 0x4c]                ; 0041f42d
    FXCH ST2                            ; 0041f430
    FSTP float ptr [ESP + 0x5b4]        ; 0041f432
    FXCH ST2                            ; 0041f439
    FSTP float ptr [ESP + 0x5b8]        ; 0041f43b
    FXCH                                ; 0041f442
    FSTP float ptr [ESP + 0x5bc]        ; 0041f444
    FLD float ptr [ESP + 0x5b4]         ; 0041f44b
    FSUB float ptr [EDX]                ; 0041f452
    FLD float ptr [ESP + 0x5b8]         ; 0041f454
    FXCH                                ; 0041f45b
    FSTP float ptr [ESP + 0x284]        ; 0041f45d
    FSUB float ptr [EDX + 0x4]          ; 0041f464
    FLD float ptr [ESP + 0x5bc]         ; 0041f467
    FXCH                                ; 0041f46e
    FSTP float ptr [ESP + 0x288]        ; 0041f470
    FSUB float ptr [EDX + 0x8]          ; 0041f477
    LEA ESI,[ESP + 0x284]               ; 0041f47a
    FSTP float ptr [ESP + 0x28c]        ; 0041f481
    MOVSD ES:EDI,ESI                    ; 0041f488
    MOVSD ES:EDI,ESI                    ; 0041f489
    MOVSD ES:EDI,ESI                    ; 0041f48a
    LEA EAX,[EBX + 0x94]                ; 0041f48b
    FLD float ptr [ESP + 0x11c]         ; 0041f491
    FMUL float ptr [EAX]                ; 0041f498
    FLD float ptr [ESP + 0x120]         ; 0041f49a
    FXCH                                ; 0041f4a1
    FSTP float ptr [ESP + 0x128]        ; 0041f4a3
    FMUL float ptr [EAX]                ; 0041f4aa
    FLD float ptr [ESP + 0x124]         ; 0041f4ac
    FXCH                                ; 0041f4b3
    FSTP float ptr [ESP + 0x12c]        ; 0041f4b5
    FMUL float ptr [EAX]                ; 0041f4bc
    LEA EDI,[ESP + 0x194]               ; 0041f4be
    LEA ESI,[ESP + 0x128]               ; 0041f4c5
    FSTP float ptr [ESP + 0x130]        ; 0041f4cc
    MOVSD ES:EDI,ESI                    ; 0041f4d3
    MOVSD ES:EDI,ESI                    ; 0041f4d4
    MOVSD ES:EDI,ESI                    ; 0041f4d5
    FLD float ptr [ESP + 0x194]         ; 0041f4d6
    FMUL ST1                            ; 0041f4dd
    FLD float ptr [ESP + 0x198]         ; 0041f4df
    FMUL ST2                            ; 0041f4e6
    FLD float ptr [ESP + 0x19c]         ; 0041f4e8
    FMULP ST3                           ; 0041f4ef
    LEA EAX,[EBX + 0x64]                ; 0041f4f1
    LEA EDI,[ESP + 0xd4]                ; 0041f4f4
    LEA ESI,[ESP + 0x164]               ; 0041f4fb
    FXCH                                ; 0041f502
    FSTP float ptr [ESP + 0x164]        ; 0041f504
    FSTP float ptr [ESP + 0x168]        ; 0041f50b
    FSTP float ptr [ESP + 0x16c]        ; 0041f512
    MOVSD ES:EDI,ESI                    ; 0041f519
    MOVSD ES:EDI,ESI                    ; 0041f51a
    MOVSD ES:EDI,ESI                    ; 0041f51b
    FLD float ptr [EAX]                 ; 0041f51c
    FADD float ptr [ESP + 0xd4]         ; 0041f51e
    FLD float ptr [EAX + 0x4]           ; 0041f525
    FXCH                                ; 0041f528
    FSTP float ptr [EAX]                ; 0041f52a
    FADD float ptr [ESP + 0xd8]         ; 0041f52c
    FLD float ptr [EAX + 0x8]           ; 0041f533
    FXCH                                ; 0041f536
    FSTP float ptr [EAX + 0x4]          ; 0041f538
    FADD float ptr [ESP + 0xdc]         ; 0041f53b
    FSTP float ptr [EAX + 0x8]          ; 0041f542
    LEA EAX,[EBX + 0x70]                ; 0041f545
    MOV dword ptr [EAX + 0x8],0x0       ; 0041f548
    MOV EDX,dword ptr [ESP + 0x69c]     ; 0041f54f
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041f556
    MOV dword ptr [EAX + 0x4],ECX       ; 0041f559
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041f55c
    MOV dword ptr [EAX],ECX             ; 0041f55f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041f561
    SUB EAX,EDX                         ; 0041f568
    SHL EAX,0x2                         ; 0041f56a
    ADD EAX,EDX                         ; 0041f56d
    SHL EAX,0x2                         ; 0041f56f
    MOV dword ptr [ESP + 0x694],EAX     ; 0041f572
    LEA EAX,[EBX + 0xb4]                ; 0041f579
    MOV ESI,dword ptr [ESP + 0x694]     ; 0041f57f
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041f586
    ADD EAX,ESI                         ; 0041f58d
    FLD float ptr [EAX + 0x4]           ; 0041f58f
    FMUL float ptr [ESP + 0xdc]         ; 0041f592
    FLD float ptr [EAX + 0x8]           ; 0041f599
    FMUL float ptr [ESP + 0xd8]         ; 0041f59c
    FSUBP                               ; 0041f5a3
    FSTP float ptr [ESP + 0x1c4]        ; 0041f5a5
    FLD float ptr [EAX + 0x8]           ; 0041f5ac
    FMUL float ptr [ESP + 0xd4]         ; 0041f5af
    FLD float ptr [EAX]                 ; 0041f5b6
    FMUL float ptr [ESP + 0xdc]         ; 0041f5b8
    FSUBP                               ; 0041f5bf
    FSTP float ptr [ESP + 0x1c8]        ; 0041f5c1
    FLD float ptr [EAX]                 ; 0041f5c8
    FMUL float ptr [ESP + 0xd8]         ; 0041f5ca
    FLD float ptr [EAX + 0x4]           ; 0041f5d1
    FMUL float ptr [ESP + 0xd4]         ; 0041f5d4
    MOV ECX,dword ptr [ESP + 0x690]     ; 0041f5db
    LEA EDI,[ESP + 0xf8]                ; 0041f5e2
    FSUBP                               ; 0041f5e9
    LEA ESI,[ESP + 0x1c4]               ; 0041f5eb
    FSTP float ptr [ESP + 0x1cc]        ; 0041f5f2
    MOVSD ES:EDI,ESI                    ; 0041f5f9
    MOVSD ES:EDI,ESI                    ; 0041f5fa
    MOVSD ES:EDI,ESI                    ; 0041f5fb
    LEA EDX,[ECX*0x4 + 0x0]             ; 0041f5fc
    FLD float ptr [0x005d4ad4]          ; 0041f603 | DAT_005d4ad4
    FLD float ptr [ESP + 0xf8]          ; 0041f609
    FMUL ST1                            ; 0041f610
    SUB EDX,ECX                         ; 0041f612
    FLD float ptr [ESP + 0xfc]          ; 0041f614
    FMUL ST2                            ; 0041f61b
    SHL EDX,0x2                         ; 0041f61d
    FLD float ptr [ESP + 0x100]         ; 0041f620
    FMULP ST3                           ; 0041f627
    ADD ECX,EDX                         ; 0041f629
    LEA EAX,[EBX + 0x88]                ; 0041f62b
    LEA EDI,[ESP + 0x1a0]               ; 0041f631
    LEA ESI,[ESP + 0x224]               ; 0041f638
    FXCH                                ; 0041f63f
    FSTP float ptr [ESP + 0x224]        ; 0041f641
    FSTP float ptr [ESP + 0x228]        ; 0041f648
    FSTP float ptr [ESP + 0x22c]        ; 0041f64f
    MOVSD ES:EDI,ESI                    ; 0041f656
    MOVSD ES:EDI,ESI                    ; 0041f657
    MOVSD ES:EDI,ESI                    ; 0041f658
    MOV EDX,dword ptr [ESP + 0x68c]     ; 0041f659
    FLD float ptr [EAX]                 ; 0041f660
    FADD float ptr [ESP + 0x1a0]        ; 0041f662
    FLD float ptr [EAX + 0x4]           ; 0041f669
    FXCH                                ; 0041f66c
    FSTP float ptr [EAX]                ; 0041f66e
    FADD float ptr [ESP + 0x1a4]        ; 0041f670
    FLD float ptr [EAX + 0x8]           ; 0041f677
    FXCH                                ; 0041f67a
    FSTP float ptr [EAX + 0x4]          ; 0041f67c
    FADD float ptr [ESP + 0x1a8]        ; 0041f67f
    SHL ECX,0x2                         ; 0041f686
    FSTP float ptr [EAX + 0x8]          ; 0041f689
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 0041f68c
    FMUL float ptr [ESP + 0xdc]         ; 0041f690
    FLD float ptr [ECX + EDX*0x1 + 0x8] ; 0041f697
    FMUL float ptr [ESP + 0xd8]         ; 0041f69b
    FSUBP                               ; 0041f6a2
    FSTP float ptr [ESP + 0x26c]        ; 0041f6a4
    FLD float ptr [ECX + EDX*0x1 + 0x8] ; 0041f6ab
    FMUL float ptr [ESP + 0xd4]         ; 0041f6af
    FLD float ptr [ECX + EDX*0x1]       ; 0041f6b6
    FMUL float ptr [ESP + 0xdc]         ; 0041f6b9
    FSUBP                               ; 0041f6c0
    FSTP float ptr [ESP + 0x270]        ; 0041f6c2
    FLD float ptr [ECX + EDX*0x1]       ; 0041f6c9
    FMUL float ptr [ESP + 0xd8]         ; 0041f6cc
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 0041f6d3
    FMUL float ptr [ESP + 0xd4]         ; 0041f6d7
    LEA EDI,[ESP + 0x578]               ; 0041f6de
    FSUBP                               ; 0041f6e5
    LEA ESI,[ESP + 0x26c]               ; 0041f6e7
    FSTP float ptr [ESP + 0x274]        ; 0041f6ee
    MOVSD ES:EDI,ESI                    ; 0041f6f5
    MOVSD ES:EDI,ESI                    ; 0041f6f6
    MOVSD ES:EDI,ESI                    ; 0041f6f7
    FLD float ptr [0x005d4ad4]          ; 0041f6f8 | DAT_005d4ad4
    FLD float ptr [ESP + 0x578]         ; 0041f6fe
    FMUL ST1                            ; 0041f705
    FLD float ptr [ESP + 0x57c]         ; 0041f707
    FMUL ST2                            ; 0041f70e
    FLD float ptr [ESP + 0x580]         ; 0041f710
    FMULP ST3                           ; 0041f717
    LEA EDI,[ESP + 0x4a0]               ; 0041f719
    LEA ESI,[ESP + 0x2d8]               ; 0041f720
    FXCH                                ; 0041f727
    FSTP float ptr [ESP + 0x2d8]        ; 0041f729
    FSTP float ptr [ESP + 0x2dc]        ; 0041f730
    FSTP float ptr [ESP + 0x2e0]        ; 0041f737
    MOVSD ES:EDI,ESI                    ; 0041f73e
    MOVSD ES:EDI,ESI                    ; 0041f73f
    MOVSD ES:EDI,ESI                    ; 0041f740
    FLD float ptr [EAX + 0x4]           ; 0041f741
    FLD float ptr [EAX]                 ; 0041f744
    FADD float ptr [ESP + 0x4a0]        ; 0041f746
    FLD float ptr [EAX + 0x8]           ; 0041f74d
    FXCH                                ; 0041f750
    FSTP float ptr [EAX]                ; 0041f752
    FXCH                                ; 0041f754
    FADD float ptr [ESP + 0x4a4]        ; 0041f756
    MOV ESI,dword ptr [ESP + 0x694]     ; 0041f75d
    FSTP float ptr [EAX + 0x4]          ; 0041f764
    FADD float ptr [ESP + 0x4a8]        ; 0041f767
    LEA EDI,[ESP + 0x1dc]               ; 0041f76e
    FSTP float ptr [EAX + 0x8]          ; 0041f775
    LEA ESI,[ESI + EBX*0x1 + 0xb4]      ; 0041f778
    MOVSD ES:EDI,ESI                    ; 0041f77f
    MOVSD ES:EDI,ESI                    ; 0041f780
    MOVSD ES:EDI,ESI                    ; 0041f781
    LEA ESI,[ECX + EBX*0x1]             ; 0041f782
    LEA EDI,[ESP + 0x1f4]               ; 0041f785
    LEA ESI,[ESI + 0xb4]                ; 0041f78c
    MOVSD ES:EDI,ESI                    ; 0041f792
    MOVSD ES:EDI,ESI                    ; 0041f793
    MOVSD ES:EDI,ESI                    ; 0041f794
    LEA EAX,[ESP + 0x524]               ; 0041f795
    XOR EDI,EDI                         ; 0041f79c
    PUSH EAX                            ; 0041f79e
    MOV dword ptr [ESP + 0x528],EDI     ; 0041f79f
    MOV dword ptr [ESP + 0x52c],EDI     ; 0041f7a6
    MOV dword ptr [ESP + 0x530],EDI     ; 0041f7ad
    LEA EAX,[EBX + 0x18]                ; 0041f7b4
    FLD float ptr [EBX + 0x94]          ; 0041f7b7
    FMUL double ptr [0x005d4ab0]        ; 0041f7bd | DAT_005d4ab0
    PUSH EAX                            ; 0041f7c3
    LEA ESI,[ESP + 0x34c]               ; 0041f7c4
    LEA EDI,[ESP + 0x550]               ; 0041f7cb
    FSTP float ptr [ESP + 0x530]        ; 0041f7d2
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041f7d9
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x34c]               ; 0041f7de
    LEA EAX,[ESP + 0x550]               ; 0041f7e5
    ADD ESP,0x8                         ; 0041f7ec
    LEA EDX,[ESP + 0x524]               ; 0041f7ef
    MOVSD ES:EDI,ESI                    ; 0041f7f6
    MOVSD ES:EDI,ESI                    ; 0041f7f7
    MOVSD ES:EDI,ESI                    ; 0041f7f8
    CMP EDX,EAX                         ; 0041f7f9
    JZ 0x0041f827                       ; 0041f7fb
        ;   XREF to: 0041f827 (CONDITIONAL_JUMP)  ; LAB_0041f827
    MOV EAX,dword ptr [ESP + 0x548]     ; 0041f7fd
    MOV dword ptr [ESP + 0x524],EAX     ; 0041f804
    MOV EAX,dword ptr [ESP + 0x54c]     ; 0041f80b
    MOV dword ptr [ESP + 0x528],EAX     ; 0041f812
    MOV EAX,dword ptr [ESP + 0x550]     ; 0041f819
    MOV dword ptr [ESP + 0x52c],EAX     ; 0041f820
    FLD float ptr [0x005d4ad0]          ; 0041f827 | DAT_005d4ad0
        ;   Label: LAB_0041f827
    FLD float ptr [ESP + 0x524]         ; 0041f82d
    FMUL ST1                            ; 0041f834
    FLD float ptr [ESP + 0x528]         ; 0041f836
    FMUL ST2                            ; 0041f83d
    FLD float ptr [ESP + 0x52c]         ; 0041f83f
    FMUL ST3                            ; 0041f846
    LEA EDI,[ESP + 0x584]               ; 0041f848
    LEA ESI,[ESP + 0x350]               ; 0041f84f
    FXCH ST2                            ; 0041f856
    FSTP float ptr [ESP + 0x350]        ; 0041f858
    FSTP float ptr [ESP + 0x354]        ; 0041f85f
    FSTP float ptr [ESP + 0x358]        ; 0041f866
    MOVSD ES:EDI,ESI                    ; 0041f86d
    MOVSD ES:EDI,ESI                    ; 0041f86e
    MOVSD ES:EDI,ESI                    ; 0041f86f
    FLD float ptr [ESP + 0x1e0]         ; 0041f870
    FMUL float ptr [ESP + 0x58c]        ; 0041f877
    FLD float ptr [ESP + 0x1e4]         ; 0041f87e
    FMUL float ptr [ESP + 0x584]        ; 0041f885
    FLD float ptr [ESP + 0x1dc]         ; 0041f88c
    FMUL float ptr [ESP + 0x588]        ; 0041f893
    FLD float ptr [ESP + 0x1e4]         ; 0041f89a
    FMUL float ptr [ESP + 0x588]        ; 0041f8a1
    FLD float ptr [ESP + 0x1dc]         ; 0041f8a8
    FMUL float ptr [ESP + 0x58c]        ; 0041f8af
    FLD float ptr [ESP + 0x1e0]         ; 0041f8b6
    FMUL float ptr [ESP + 0x584]        ; 0041f8bd
    LEA EAX,[EBX + 0x88]                ; 0041f8c4
    LEA EDI,[ESP + 0xe0]                ; 0041f8ca
    LEA ESI,[ESP + 0x398]               ; 0041f8d1
    FXCH ST2                            ; 0041f8d8
    FSUBP ST5,ST0                       ; 0041f8da
    FSUBP ST3,ST0                       ; 0041f8dc
    FSUBP                               ; 0041f8de
    FXCH ST2                            ; 0041f8e0
    FSTP float ptr [ESP + 0x398]        ; 0041f8e2
    FSTP float ptr [ESP + 0x39c]        ; 0041f8e9
    FSTP float ptr [ESP + 0x3a0]        ; 0041f8f0
    MOVSD ES:EDI,ESI                    ; 0041f8f7
    MOVSD ES:EDI,ESI                    ; 0041f8f8
    MOVSD ES:EDI,ESI                    ; 0041f8f9
    FLD float ptr [EAX]                 ; 0041f8fa
    FADD float ptr [ESP + 0xe0]         ; 0041f8fc
    FLD float ptr [EAX + 0x4]           ; 0041f903
    FXCH                                ; 0041f906
    FSTP float ptr [EAX]                ; 0041f908
    FADD float ptr [ESP + 0xe4]         ; 0041f90a
    FLD float ptr [EAX + 0x8]           ; 0041f911
    FXCH                                ; 0041f914
    FSTP float ptr [EAX + 0x4]          ; 0041f916
    FADD float ptr [ESP + 0xe8]         ; 0041f919
    FSTP float ptr [EAX + 0x8]          ; 0041f920
    FLD float ptr [ESP + 0x524]         ; 0041f923
    FMUL ST1                            ; 0041f92a
    FLD float ptr [ESP + 0x528]         ; 0041f92c
    FMUL ST2                            ; 0041f933
    FLD float ptr [ESP + 0x52c]         ; 0041f935
    FMULP ST3                           ; 0041f93c
    LEA EDI,[ESP + 0x2f0]               ; 0041f93e
    LEA ESI,[ESP + 0x404]               ; 0041f945
    FXCH                                ; 0041f94c
    FSTP float ptr [ESP + 0x404]        ; 0041f94e
    FSTP float ptr [ESP + 0x408]        ; 0041f955
    FSTP float ptr [ESP + 0x40c]        ; 0041f95c
    MOVSD ES:EDI,ESI                    ; 0041f963
    MOVSD ES:EDI,ESI                    ; 0041f964
    MOVSD ES:EDI,ESI                    ; 0041f965
    FLD float ptr [ESP + 0x1f8]         ; 0041f966
    FMUL float ptr [ESP + 0x2f8]        ; 0041f96d
    FLD float ptr [ESP + 0x1fc]         ; 0041f974
    FMUL float ptr [ESP + 0x2f0]        ; 0041f97b
    FLD float ptr [ESP + 0x1f4]         ; 0041f982
    FMUL float ptr [ESP + 0x2f4]        ; 0041f989
    FLD float ptr [ESP + 0x1fc]         ; 0041f990
    FMUL float ptr [ESP + 0x2f4]        ; 0041f997
    FLD float ptr [ESP + 0x1f4]         ; 0041f99e
    FMUL float ptr [ESP + 0x2f8]        ; 0041f9a5
    FLD float ptr [ESP + 0x1f8]         ; 0041f9ac
    FMUL float ptr [ESP + 0x2f0]        ; 0041f9b3
    LEA EDI,[ESP + 0x314]               ; 0041f9ba
    LEA ESI,[ESP + 0x434]               ; 0041f9c1
    FXCH ST2                            ; 0041f9c8
    FSUBP ST5,ST0                       ; 0041f9ca
    FSUBP ST3,ST0                       ; 0041f9cc
    FSUBP                               ; 0041f9ce
    FXCH ST2                            ; 0041f9d0
    FSTP float ptr [ESP + 0x434]        ; 0041f9d2
    FSTP float ptr [ESP + 0x438]        ; 0041f9d9
    FSTP float ptr [ESP + 0x43c]        ; 0041f9e0
    MOVSD ES:EDI,ESI                    ; 0041f9e7
    MOVSD ES:EDI,ESI                    ; 0041f9e8
    MOVSD ES:EDI,ESI                    ; 0041f9e9
    FLD float ptr [EAX]                 ; 0041f9ea
    FADD float ptr [ESP + 0x314]        ; 0041f9ec
    FLD float ptr [EAX + 0x4]           ; 0041f9f3
    FXCH                                ; 0041f9f6
    FSTP float ptr [EAX]                ; 0041f9f8
    FADD float ptr [ESP + 0x318]        ; 0041f9fa
    FLD float ptr [EAX + 0x8]           ; 0041fa01
    FXCH                                ; 0041fa04
    FSTP float ptr [EAX + 0x4]          ; 0041fa06
    FADD float ptr [ESP + 0x31c]        ; 0041fa09
    FSTP float ptr [EAX + 0x8]          ; 0041fa10
    MOV ECX,dword ptr [ESP + 0x63c]     ; 0041fa13
        ;   Label: LAB_0041fa13
    CMP ECX,0x3                         ; 0041fa1a
    JL 0x0041feae                       ; 0041fa1d
        ;   XREF to: 0041feae (CONDITIONAL_JUMP)  ; LAB_0041feae
    LEA EAX,[EBX + 0xb4]                ; 0041fa23
    XOR ESI,ESI                         ; 0041fa29
    XOR EDX,EDX                         ; 0041fa2b
    MOV dword ptr [ESP + 0x688],ESI     ; 0041fa2d
    MOV dword ptr [ESP + 0x660],EAX     ; 0041fa34
    LEA EAX,[ECX*0x4 + 0x0]             ; 0041fa3b
    MOV dword ptr [ESP + 0x640],ESI     ; 0041fa42
    MOV dword ptr [ESP + 0x678],EAX     ; 0041fa49
    TEST EAX,EAX                        ; 0041fa50
    JLE 0x0041fbc6                      ; 0041fa52
        ;   XREF to: 0041fbc6 (CONDITIONAL_JUMP)  ; LAB_0041fbc6
    MOV EAX,dword ptr [ESP + EDX*0x1 + 0x6c] ; 0041fa58
        ;   Label: LAB_0041fa58
    MOV dword ptr [ESP + 0x67c],EAX     ; 0041fa5c
    IMUL EAX,EAX,0x34                   ; 0041fa63
    MOV dword ptr [ESP + 0x68c],EAX     ; 0041fa66
    MOV EAX,dword ptr [ESP + 0x660]     ; 0041fa6d
    ADD EAX,dword ptr [ESP + 0x68c]     ; 0041fa74
    LEA ECX,[EAX + 0xc]                 ; 0041fa7b
    FLD float ptr [ECX]                 ; 0041fa7e
    FSUB float ptr [EAX + 0x18]         ; 0041fa80
    FSTP float ptr [ESP + 0xec]         ; 0041fa83
    FLD float ptr [ECX + 0x4]           ; 0041fa8a
    FSUB float ptr [EAX + 0x1c]         ; 0041fa8d
    LEA EDI,[ESP + 0x200]               ; 0041fa90
    FSTP float ptr [ESP + 0xf0]         ; 0041fa97
    FLD float ptr [ECX + 0x8]           ; 0041fa9e
    FSUB float ptr [EAX + 0x20]         ; 0041faa1
    LEA ESI,[ESP + 0xec]                ; 0041faa4
    FSTP float ptr [ESP + 0xf4]         ; 0041faab
    MOV EAX,dword ptr [ESP + 0x68c]     ; 0041fab2
    MOVSD ES:EDI,ESI                    ; 0041fab9
    MOVSD ES:EDI,ESI                    ; 0041faba
    MOVSD ES:EDI,ESI                    ; 0041fabb
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 0041fabc
    FLD1                                ; 0041fac3
    FSUBRP                              ; 0041fac5
    FMUL double ptr [0x005d4ad8]        ; 0041fac7 | DAT_005d4ad8
    FLD float ptr [ESP + 0x200]         ; 0041facd
    FXCH                                ; 0041fad4
    FSTP float ptr [ESP + 0x64c]        ; 0041fad6
    FMUL float ptr [ESP + 0x64c]        ; 0041fadd
    FLD float ptr [ESP + 0x204]         ; 0041fae4
    FMUL float ptr [ESP + 0x64c]        ; 0041faeb
    FLD float ptr [ESP + 0x208]         ; 0041faf2
    FMUL float ptr [ESP + 0x64c]        ; 0041faf9
    LEA EDI,[ESP + 0xc8]                ; 0041fb00
    LEA ESI,[ESP + 0x590]               ; 0041fb07
    FXCH ST2                            ; 0041fb0e
    FSTP float ptr [ESP + 0x590]        ; 0041fb10
    FSTP float ptr [ESP + 0x594]        ; 0041fb17
    FSTP float ptr [ESP + 0x598]        ; 0041fb1e
    MOVSD ES:EDI,ESI                    ; 0041fb25
    MOVSD ES:EDI,ESI                    ; 0041fb26
    MOVSD ES:EDI,ESI                    ; 0041fb27
    FLD float ptr [ESP + 0xcc]          ; 0041fb28
    FMUL ST0                            ; 0041fb2f
    FLD float ptr [ESP + 0xc8]          ; 0041fb31
    FMUL ST0                            ; 0041fb38
    FADDP                               ; 0041fb3a
    FLD float ptr [ESP + 0xd0]          ; 0041fb3c
    FMUL ST0                            ; 0041fb43
    FADDP                               ; 0041fb45
    FSQRT                               ; 0041fb47
    FST float ptr [ESP + 0x650]         ; 0041fb49
    FCOMP float ptr [ESP + 0x640]       ; 0041fb50
    FNSTSW AX                           ; 0041fb57
    SAHF                                ; 0041fb59
    JBE 0x0041fbb4                      ; 0041fb5a
        ;   XREF to: 0041fbb4 (CONDITIONAL_JUMP)  ; LAB_0041fbb4
    MOV EAX,dword ptr [ESP + 0x67c]     ; 0041fb5c
    MOV dword ptr [ESP + 0x688],EAX     ; 0041fb63
    MOV EAX,dword ptr [ESP + 0x650]     ; 0041fb6a
    LEA ECX,[ESP + 0x4ac]               ; 0041fb71
    MOV dword ptr [ESP + 0x640],EAX     ; 0041fb78
    LEA EAX,[ESP + 0xc8]                ; 0041fb7f
    CMP ECX,EAX                         ; 0041fb86
    JZ 0x0041fbb4                       ; 0041fb88
        ;   XREF to: 0041fbb4 (CONDITIONAL_JUMP)  ; LAB_0041fbb4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0041fb8a
    MOV dword ptr [ESP + 0x4ac],EAX     ; 0041fb91
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0041fb98
    MOV dword ptr [ESP + 0x4b0],EAX     ; 0041fb9f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0041fba6
    MOV dword ptr [ESP + 0x4b4],EAX     ; 0041fbad
    MOV ECX,dword ptr [ESP + 0x678]     ; 0041fbb4
        ;   Label: LAB_0041fbb4
    ADD EDX,0x4                         ; 0041fbbb
    CMP EDX,ECX                         ; 0041fbbe
    JL 0x0041fa58                       ; 0041fbc0
        ;   XREF to: 0041fa58 (CONDITIONAL_JUMP)  ; LAB_0041fa58
    FLD float ptr [EBX]                 ; 0041fbc6
        ;   Label: LAB_0041fbc6
    FLD float ptr [EBX + 0x4]           ; 0041fbc8
    MOV EDX,dword ptr [ESP + 0x688]     ; 0041fbcb
    FLD float ptr [EBX + 0x8]           ; 0041fbd2
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041fbd5
    MOV ESI,dword ptr [ESP + 0x660]     ; 0041fbdc
    SUB EAX,EDX                         ; 0041fbe3
    LEA EDI,[ESP + 0x3b0]               ; 0041fbe5
    SHL EAX,0x2                         ; 0041fbec
    FXCH ST2                            ; 0041fbef
    FADD float ptr [ESP + 0x4ac]        ; 0041fbf1
    ADD EAX,EDX                         ; 0041fbf8
    FSTP float ptr [EBX]                ; 0041fbfa
    SHL EAX,0x2                         ; 0041fbfc
    FADD float ptr [ESP + 0x4b0]        ; 0041fbff
    ADD EAX,ESI                         ; 0041fc06
    FSTP float ptr [EBX + 0x4]          ; 0041fc08
    ADD EAX,0x28                        ; 0041fc0b
    FADD float ptr [ESP + 0x4b4]        ; 0041fc0e
    PUSH EAX                            ; 0041fc15
    LEA EAX,[EBX + 0x18]                ; 0041fc16
    LEA ESI,[ESP + 0x510]               ; 0041fc19
    PUSH EAX                            ; 0041fc20
    FSTP float ptr [EBX + 0x8]          ; 0041fc21
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041fc24
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x514]               ; 0041fc29
    ADD ESP,0x8                         ; 0041fc30
    MOVSD ES:EDI,ESI                    ; 0041fc33
    MOVSD ES:EDI,ESI                    ; 0041fc34
    MOVSD ES:EDI,ESI                    ; 0041fc35
    LEA EAX,[EBX + 0x4c]                ; 0041fc36
    FLD float ptr [ESP + 0x3b4]         ; 0041fc39
    FMUL float ptr [EAX + 0x4]          ; 0041fc40
    FLD float ptr [ESP + 0x3b0]         ; 0041fc43
    FMUL float ptr [EAX]                ; 0041fc4a
    FADDP                               ; 0041fc4c
    FLD float ptr [ESP + 0x3b8]         ; 0041fc4e
    FMUL float ptr [EAX + 0x8]          ; 0041fc55
    FADDP                               ; 0041fc58
    FMUL float ptr [0x005d4ac8]         ; 0041fc5a | DAT_005d4ac8
    FLD float ptr [ESP + 0x3b0]         ; 0041fc60
    FXCH                                ; 0041fc67
    FSTP float ptr [ESP + 0x644]        ; 0041fc69
    FMUL float ptr [ESP + 0x644]        ; 0041fc70
    FLD float ptr [ESP + 0x3b4]         ; 0041fc77
    FMUL float ptr [ESP + 0x644]        ; 0041fc7e
    FLD float ptr [ESP + 0x3b8]         ; 0041fc85
    FMUL float ptr [ESP + 0x644]        ; 0041fc8c
    LEA EDI,[ESP + 0x260]               ; 0041fc93
    LEA ESI,[ESP + 0x278]               ; 0041fc9a
    FXCH ST2                            ; 0041fca1
    FSTP float ptr [ESP + 0x278]        ; 0041fca3
    FSTP float ptr [ESP + 0x27c]        ; 0041fcaa
    FSTP float ptr [ESP + 0x280]        ; 0041fcb1
    MOVSD ES:EDI,ESI                    ; 0041fcb8
    MOVSD ES:EDI,ESI                    ; 0041fcb9
    MOVSD ES:EDI,ESI                    ; 0041fcba
    LEA EDX,[ESP + 0x59c]               ; 0041fcbb
    FLD float ptr [ESP + 0x264]         ; 0041fcc2
    FLD float ptr [ESP + 0x260]         ; 0041fcc9
    FSUB float ptr [EAX]                ; 0041fcd0
    FLD float ptr [ESP + 0x268]         ; 0041fcd2
    FXCH                                ; 0041fcd9
    FSTP float ptr [ESP + 0x290]        ; 0041fcdb
    FXCH                                ; 0041fce2
    FSUB float ptr [EAX + 0x4]          ; 0041fce4
    LEA EDI,[ESP + 0x59c]               ; 0041fce7
    FSTP float ptr [ESP + 0x294]        ; 0041fcee
    FSUB float ptr [EAX + 0x8]          ; 0041fcf5
    LEA ESI,[ESP + 0x290]               ; 0041fcf8
    FSTP float ptr [ESP + 0x298]        ; 0041fcff
    LEA EAX,[ESP + 0x500]               ; 0041fd06
    MOVSD ES:EDI,ESI                    ; 0041fd0d
    MOVSD ES:EDI,ESI                    ; 0041fd0e
    MOVSD ES:EDI,ESI                    ; 0041fd0f
    CMP EAX,EDX                         ; 0041fd10
    JZ 0x0041fd3e                       ; 0041fd12
        ;   XREF to: 0041fd3e (CONDITIONAL_JUMP)  ; LAB_0041fd3e
    MOV EAX,dword ptr [ESP + 0x59c]     ; 0041fd14
    MOV dword ptr [ESP + 0x500],EAX     ; 0041fd1b
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 0041fd22
    MOV dword ptr [ESP + 0x504],EAX     ; 0041fd29
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 0041fd30
    MOV dword ptr [ESP + 0x508],EAX     ; 0041fd37
    FLD float ptr [0x005d4acc]          ; 0041fd3e | DAT_005d4acc
        ;   Label: LAB_0041fd3e
    FLD float ptr [ESP + 0x500]         ; 0041fd44
    FMUL ST1                            ; 0041fd4b
    FLD float ptr [ESP + 0x504]         ; 0041fd4d
    FMUL ST2                            ; 0041fd54
    FLD float ptr [ESP + 0x508]         ; 0041fd56
    FMULP ST3                           ; 0041fd5d
    FXCH                                ; 0041fd5f
    FLD float ptr [0x005d4ae4]          ; 0041fd61 | DAT_005d4ae4
    FXCH                                ; 0041fd67
    FMUL ST1                            ; 0041fd69
    FXCH ST2                            ; 0041fd6b
    FMUL ST1                            ; 0041fd6d
    FLD1                                ; 0041fd6f
    FXCH ST4                            ; 0041fd71
    FMULP ST2                           ; 0041fd73
    FXCH ST3                            ; 0041fd75
    FDIV float ptr [EBP + 0x18]         ; 0041fd77
    LEA EDI,[ESP + 0x470]               ; 0041fd7a
    LEA EDX,[EBX + 0x4c]                ; 0041fd81
    FXCH ST2                            ; 0041fd84
    FSTP float ptr [ESP + 0x500]        ; 0041fd86
    FXCH ST2                            ; 0041fd8d
    FSTP float ptr [ESP + 0x504]        ; 0041fd8f
    FXCH                                ; 0041fd96
    FSTP float ptr [ESP + 0x508]        ; 0041fd98
    FLD float ptr [ESP + 0x500]         ; 0041fd9f
    FSUB float ptr [EDX]                ; 0041fda6
    FLD float ptr [ESP + 0x504]         ; 0041fda8
    FXCH                                ; 0041fdaf
    FSTP float ptr [ESP + 0x458]        ; 0041fdb1
    FSUB float ptr [EDX + 0x4]          ; 0041fdb8
    FLD float ptr [ESP + 0x508]         ; 0041fdbb
    FXCH                                ; 0041fdc2
    FSTP float ptr [ESP + 0x45c]        ; 0041fdc4
    FSUB float ptr [EDX + 0x8]          ; 0041fdcb
    LEA ESI,[ESP + 0x458]               ; 0041fdce
    FSTP float ptr [ESP + 0x460]        ; 0041fdd5
    MOVSD ES:EDI,ESI                    ; 0041fddc
    MOVSD ES:EDI,ESI                    ; 0041fddd
    MOVSD ES:EDI,ESI                    ; 0041fdde
    LEA EAX,[EBX + 0x94]                ; 0041fddf
    FLD float ptr [ESP + 0x470]         ; 0041fde5
    FMUL float ptr [EAX]                ; 0041fdec
    FLD float ptr [ESP + 0x474]         ; 0041fdee
    FXCH                                ; 0041fdf5
    FSTP float ptr [ESP + 0x308]        ; 0041fdf7
    FMUL float ptr [EAX]                ; 0041fdfe
    FLD float ptr [ESP + 0x478]         ; 0041fe00
    FXCH                                ; 0041fe07
    FSTP float ptr [ESP + 0x30c]        ; 0041fe09
    FMUL float ptr [EAX]                ; 0041fe10
    LEA EDI,[ESP + 0x5c0]               ; 0041fe12
    LEA ESI,[ESP + 0x308]               ; 0041fe19
    FSTP float ptr [ESP + 0x310]        ; 0041fe20
    MOVSD ES:EDI,ESI                    ; 0041fe27
    MOVSD ES:EDI,ESI                    ; 0041fe28
    MOVSD ES:EDI,ESI                    ; 0041fe29
    FLD float ptr [ESP + 0x5c0]         ; 0041fe2a
    FMUL ST1                            ; 0041fe31
    FLD float ptr [ESP + 0x5c4]         ; 0041fe33
    FMUL ST2                            ; 0041fe3a
    FLD float ptr [ESP + 0x5c8]         ; 0041fe3c
    FMULP ST3                           ; 0041fe43
    LEA EAX,[EBX + 0x64]                ; 0041fe45
    LEA EDI,[ESP + 0x2c0]               ; 0041fe48
    LEA ESI,[ESP + 0x32c]               ; 0041fe4f
    FXCH                                ; 0041fe56
    FSTP float ptr [ESP + 0x32c]        ; 0041fe58
    FSTP float ptr [ESP + 0x330]        ; 0041fe5f
    FSTP float ptr [ESP + 0x334]        ; 0041fe66
    MOVSD ES:EDI,ESI                    ; 0041fe6d
    MOVSD ES:EDI,ESI                    ; 0041fe6e
    MOVSD ES:EDI,ESI                    ; 0041fe6f
    FLD float ptr [EAX]                 ; 0041fe70
    FADD float ptr [ESP + 0x2c0]        ; 0041fe72
    FLD float ptr [EAX + 0x4]           ; 0041fe79
    FXCH                                ; 0041fe7c
    FSTP float ptr [EAX]                ; 0041fe7e
    FADD float ptr [ESP + 0x2c4]        ; 0041fe80
    FLD float ptr [EAX + 0x8]           ; 0041fe87
    FXCH                                ; 0041fe8a
    FSTP float ptr [EAX + 0x4]          ; 0041fe8c
    FADD float ptr [ESP + 0x2c8]        ; 0041fe8f
    FSTP float ptr [EAX + 0x8]          ; 0041fe96
    LEA EAX,[EBX + 0x70]                ; 0041fe99
    MOV dword ptr [EAX + 0x8],0x0       ; 0041fe9c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041fea3
    MOV dword ptr [EAX + 0x4],EDX       ; 0041fea6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041fea9
    MOV dword ptr [EAX],EDX             ; 0041feac
    CMP dword ptr [ESP + 0x63c],0x0     ; 0041feae
        ;   Label: LAB_0041feae
    JLE 0x0041ff2b                      ; 0041feb6
        ;   XREF to: 0041ff2b (CONDITIONAL_JUMP)  ; LAB_0041ff2b
    LEA EAX,[EBX + 0x4c]                ; 0041febc
    FLD float ptr [EAX + 0x4]           ; 0041febf
    FMUL ST0                            ; 0041fec2
    FLD float ptr [EAX]                 ; 0041fec4
    FMUL ST0                            ; 0041fec6
    FADDP                               ; 0041fec8
    FLD float ptr [EAX + 0x8]           ; 0041feca
    FMUL ST0                            ; 0041fecd
    FADDP                               ; 0041fecf
    FSQRT                               ; 0041fed1
    FLD1                                ; 0041fed3
    FCOMPP                              ; 0041fed5
    FNSTSW AX                           ; 0041fed7
    SAHF                                ; 0041fed9
    JBE 0x0041ff2b                      ; 0041feda
        ;   XREF to: 0041ff2b (CONDITIONAL_JUMP)  ; LAB_0041ff2b
    MOV EDI,dword ptr [EBX + 0xb0]      ; 0041fedc
    XOR EDX,EDX                         ; 0041fee2
    XOR ESI,ESI                         ; 0041fee4
    TEST EDI,EDI                        ; 0041fee6
    JLE 0x0041ff14                      ; 0041fee8
        ;   XREF to: 0041ff14 (CONDITIONAL_JUMP)  ; LAB_0041ff14
    MOV ECX,EBX                         ; 0041feea
    FLD float ptr [ECX + 0xc4]          ; 0041feec
        ;   Label: LAB_0041feec
    FSUB float ptr [EBX + 0x258]        ; 0041fef2
    FABS                                ; 0041fef8
    FCOMP double ptr [0x005d4af8]       ; 0041fefa | DAT_005d4af8
    FNSTSW AX                           ; 0041ff00
    SAHF                                ; 0041ff02
    JNC 0x0041ff06                      ; 0041ff03
        ;   XREF to: 0041ff06 (CONDITIONAL_JUMP)  ; LAB_0041ff06
    INC ESI                             ; 0041ff05
    INC EDX                             ; 0041ff06
        ;   Label: LAB_0041ff06
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041ff07
    ADD ECX,0x34                        ; 0041ff0d
    CMP EDX,EAX                         ; 0041ff10
    JL 0x0041feec                       ; 0041ff12
        ;   XREF to: 0041feec (CONDITIONAL_JUMP)  ; LAB_0041feec
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041ff14
        ;   Label: LAB_0041ff14
    MOV EDX,EAX                         ; 0041ff1a
    SAR EDX,0x1f                        ; 0041ff1c
    SUB EAX,EDX                         ; 0041ff1f
    SAR EAX,0x1                         ; 0041ff21
    CMP ESI,EAX                         ; 0041ff23
    JGE 0x0042012a                      ; 0041ff25
        ;   XREF to: 0042012a (CONDITIONAL_JUMP)  ; LAB_0042012a
    MOV ESP,EBP                         ; 0041ff2b
        ;   Label: LAB_0041ff2b
    POP EBP                             ; 0041ff2d
    POP EDI                             ; 0041ff2e
    POP ESI                             ; 0041ff2f
    POP EBX                             ; 0041ff30
    RET                                 ; 0041ff31
    MOV EAX,dword ptr [EBX]             ; 0041ff32
        ;   Label: LAB_0041ff32
    MOV dword ptr [ESP + 0x170],EAX     ; 0041ff34
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041ff3b
    MOV dword ptr [ESP + 0x174],EAX     ; 0041ff3e
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041ff45
    MOV dword ptr [ESP + 0x178],EAX     ; 0041ff48
    JMP 0x0041e15e                      ; 0041ff4f
        ;   XREF to: 0041e15e (UNCONDITIONAL_JUMP)  ; LAB_0041e15e
    MOV dword ptr [EBX + 0x258],0xc61c3c00 ; 0041ff54
        ;   Label: LAB_0041ff54
    JMP 0x0041e22c                      ; 0041ff5e
        ;   XREF to: 0041e22c (UNCONDITIONAL_JUMP)  ; LAB_0041e22c
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0041ff63
        ;   Label: LAB_0041ff63
    FLD float ptr [EAX]                 ; 0041ff6a
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041ff6c
    FSUB float ptr [EAX]                ; 0041ff73
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0041ff75
    FSTP float ptr [ESP + 0x338]        ; 0041ff7c
    FLD float ptr [EAX + 0x4]           ; 0041ff83
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041ff86
    FSUB float ptr [EAX + 0x4]          ; 0041ff8d
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0041ff90
    FSTP float ptr [ESP + 0x33c]        ; 0041ff97
    FLD float ptr [EAX + 0x8]           ; 0041ff9e
    MOV EAX,dword ptr [ESP + 0x668]     ; 0041ffa1
    LEA EDI,[ESP + 0x47c]               ; 0041ffa8
    FSUB float ptr [EAX + 0x8]          ; 0041ffaf
    LEA ESI,[ESP + 0x338]               ; 0041ffb2
    FSTP float ptr [ESP + 0x340]        ; 0041ffb9
    MOVSD ES:EDI,ESI                    ; 0041ffc0
    MOVSD ES:EDI,ESI                    ; 0041ffc1
    MOVSD ES:EDI,ESI                    ; 0041ffc2
    FLD float ptr [ESP + 0x480]         ; 0041ffc3
    FMUL ST0                            ; 0041ffca
    FLD float ptr [ESP + 0x47c]         ; 0041ffcc
    FMUL ST0                            ; 0041ffd3
    FADDP                               ; 0041ffd5
    FLD float ptr [ESP + 0x484]         ; 0041ffd7
    FMUL ST0                            ; 0041ffde
    FADDP                               ; 0041ffe0
    FSQRT                               ; 0041ffe2
    FCOMP double ptr [0x005d4ae8]       ; 0041ffe4 | DAT_005d4ae8
    FNSTSW AX                           ; 0041ffea
    SAHF                                ; 0041ffec
    JBE 0x0041e9af                      ; 0041ffed
        ;   XREF to: 0041e9af (CONDITIONAL_JUMP)  ; LAB_0041e9af
    MOV EAX,dword ptr [ESP + 0x674]     ; 0041fff3
    PUSH 0x0                            ; 0041fffa
    ADD EAX,0x28                        ; 0041fffc
    PUSH EAX                            ; 0041ffff
    MOV EDX,dword ptr [ESP + 0x674]     ; 00420000
    PUSH EDX                            ; 00420007
    MOV ECX,dword ptr [ESP + 0x674]     ; 00420008
    PUSH ECX                            ; 0042000f
    PUSH 0x1fe5c1c                      ; 00420010 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_0048b150   ; 00420015
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b150()
    MOV dword ptr [ESP + 0x6a0],EAX     ; 0042001a
    FLD float ptr [ESP + 0x6a0]         ; 00420021
    ADD ESP,0x14                        ; 00420028
    MOV EAX,dword ptr [ESP + 0x670]     ; 0042002b
    FSTP float ptr [EAX + 0xd8]         ; 00420032
    MOV EAX,dword ptr [EAX + 0xd8]      ; 00420038
    MOV dword ptr [ESP + 0x14],EAX      ; 0042003e
    FLDZ                                ; 00420042
    FLD float ptr [ESP + 0x14]          ; 00420044
    FSTP double ptr [ESP]               ; 00420048
    FCOMP double ptr [ESP]              ; 0042004b
    FNSTSW AX                           ; 0042004e
    SAHF                                ; 00420050
    JNC 0x0041e9af                      ; 00420051
        ;   XREF to: 0041e9af (CONDITIONAL_JUMP)  ; LAB_0041e9af
    FLD1                                ; 00420057
    FCOMP double ptr [ESP]              ; 00420059
    FNSTSW AX                           ; 0042005c
    SAHF                                ; 0042005e
    JBE 0x0041e9af                      ; 0042005f
        ;   XREF to: 0041e9af (CONDITIONAL_JUMP)  ; LAB_0041e9af
    MOV EAX,dword ptr [ESP + 0x63c]     ; 00420065
    MOV EDX,dword ptr [ESP + 0x680]     ; 0042006c
    LEA ESI,[EAX + 0x1]                 ; 00420073
    MOV dword ptr [ESP + EAX*0x4 + 0x6c],EDX ; 00420076
    MOV dword ptr [ESP + 0x63c],ESI     ; 0042007a
    JMP 0x0041e9af                      ; 00420081
        ;   XREF to: 0041e9af (UNCONDITIONAL_JUMP)  ; LAB_0041e9af
    MOV ECX,dword ptr [ESP + 0x690]     ; 00420086
        ;   Label: LAB_00420086
    FLD float ptr [EBX]                 ; 0042008d
    LEA EAX,[ECX*0x4 + 0x0]             ; 0042008f
    FLD float ptr [EBX + 0x4]           ; 00420096
    SUB EAX,ECX                         ; 00420099
    FLD float ptr [EBX + 0x8]           ; 0042009b
    SHL EAX,0x2                         ; 0042009e
    LEA EDI,[ESP + 0x98]                ; 004200a1
    ADD EAX,ECX                         ; 004200a8
    FXCH ST2                            ; 004200aa
    FADD float ptr [ESP + 0x3bc]        ; 004200ac
    SHL EAX,0x2                         ; 004200b3
    FSTP float ptr [EBX]                ; 004200b6
    ADD EAX,EDX                         ; 004200b8
    FADD float ptr [ESP + 0x3c0]        ; 004200ba
    ADD EAX,0x28                        ; 004200c1
    FSTP float ptr [EBX + 0x4]          ; 004200c4
    PUSH EAX                            ; 004200c7
    FADD float ptr [ESP + 0x3c8]        ; 004200c8
    PUSH ESI                            ; 004200cf
    LEA ESI,[ESP + 0x328]               ; 004200d0
    FSTP float ptr [EBX + 0x8]          ; 004200d7
    CALL core_dirmat.cpp_FUN_0045f700   ; 004200da
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x328]               ; 004200df
    LEA EAX,[ESP + 0xa0]                ; 004200e6
    ADD ESP,0x8                         ; 004200ed
    LEA EDX,[ESP + 0x530]               ; 004200f0
    MOVSD ES:EDI,ESI                    ; 004200f7
    MOVSD ES:EDI,ESI                    ; 004200f8
    MOVSD ES:EDI,ESI                    ; 004200f9
    CMP EDX,EAX                         ; 004200fa
    JZ 0x0041f2e2                       ; 004200fc
        ;   XREF to: 0041f2e2 (CONDITIONAL_JUMP)  ; LAB_0041f2e2
    MOV EAX,dword ptr [ESP + 0x98]      ; 00420102
    MOV dword ptr [ESP + 0x530],EAX     ; 00420109
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00420110
    MOV dword ptr [ESP + 0x534],EAX     ; 00420117
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042011e
    JMP 0x0041f2db                      ; 00420125
        ;   XREF to: 0041f2db (UNCONDITIONAL_JUMP)  ; LAB_0041f2db
    MOV dword ptr [EBX + 0x254],0x0     ; 0042012a
        ;   Label: LAB_0042012a
    MOV ESP,EBP                         ; 00420134
    POP EBP                             ; 00420136
    POP EDI                             ; 00420137
    POP ESI                             ; 00420138
    POP EBX                             ; 00420139
    RET                                 ; 0042013a

