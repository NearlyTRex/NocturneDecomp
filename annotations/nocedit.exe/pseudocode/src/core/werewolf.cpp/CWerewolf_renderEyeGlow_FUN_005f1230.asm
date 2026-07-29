; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005f1230(CWerewolf *this_ptr,CVector3f *eye_position)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   eye_position
; Local Variables:
; SMRGLPrimitiveQuadIndex Stack[-0x11c]:40  SStack_11c
; float            Stack[-0xf4]:4  local_f4
; float            Stack[-0xf0]:4  local_f0
; float            Stack[-0xec]:4  local_ec
; float            Stack[-0xe8]:4  local_e8
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; float            Stack[-0xdc]:4  local_dc
; float            Stack[-0xd8]:4  local_d8
; float            Stack[-0xd0]:4  local_d0
; float            Stack[-0xcc]:4  local_cc
; float            Stack[-0xc8]:4  local_c8
; CVector3i        Stack[-0xc4]:12  local_c4
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xac]:4  local_ac
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; CVector3i        Stack[-0x7c]:12  local_7c
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; CVector3i        Stack[-0x4c]:12  local_4c
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; CVector3i        Stack[-0x34]:12  local_34
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005f1820 at 005f1900
;
; Referenced Globals:
;   float FLOAT_00665740 = 256
;   float FLOAT_0066576c = 0.2000000
;   float FLOAT_00665770 = 0.2000000
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic SMRGLTextureBasic_0068495c
;   undefined4 g_LightBufferPool[11][183800]
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f1230
        ;   Label: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005f1230
    PUSH ESI                            ; 005f1231
    PUSH EDI                            ; 005f1232
    PUSH EBP                            ; 005f1233
    SUB ESP,0x10c                       ; 005f1234
    MOV EDI,dword ptr [ESP + 0x120]     ; 005f123a
    MOV ESI,dword ptr [ESP + 0x124]     ; 005f1241
    MOV EAX,[0x0066576c]                ; 005f1248 | FLOAT_0066576c
    MOV dword ptr [ESP + 0xf4],EAX      ; 005f124d
    MOV EAX,[0x00665770]                ; 005f1254 | FLOAT_00665770
    MOV dword ptr [ESP + 0xf8],EAX      ; 005f1259
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005f1260
    XOR EDX,EDX                         ; 005f1267
    MOV dword ptr [ESP + 0x70],EAX      ; 005f1269
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005f126d
    MOV dword ptr [ESP + 0x78],EDX      ; 005f1274
    MOV dword ptr [ESP + 0x74],EAX      ; 005f1278
    FLD float ptr [ESI]                 ; 005f127c
    FADD float ptr [ESP + 0xf4]         ; 005f127e
    FSTP float ptr [ESP + 0x34]         ; 005f1285
    FLD float ptr [ESI + 0x4]           ; 005f1289
    FADD float ptr [ESP + 0xf8]         ; 005f128c
    FSTP float ptr [ESP + 0x38]         ; 005f1293
    MOV EAX,dword ptr [ESI + 0x8]       ; 005f1297
    MOV dword ptr [ESP + 0x3c],EAX      ; 005f129a
    LEA EAX,[EDI + 0x261c]              ; 005f129e
    FLD float ptr [ESP + 0x34]          ; 005f12a4
    FMUL float ptr [EAX]                ; 005f12a8
    FLD float ptr [ESP + 0x38]          ; 005f12aa
    FXCH                                ; 005f12ae
    FSTP float ptr [ESP + 0x4c]         ; 005f12b0
    FMUL float ptr [EAX]                ; 005f12b4
    FLD float ptr [ESP + 0x3c]          ; 005f12b6
    FXCH                                ; 005f12ba
    FSTP float ptr [ESP + 0x50]         ; 005f12bc
    FMUL float ptr [EAX]                ; 005f12c0
    LEA EDX,[ESP + 0xc4]                ; 005f12c2
    LEA EAX,[ESP + 0x4c]                ; 005f12c9
    FSTP float ptr [ESP + 0x54]         ; 005f12cd
    CMP EDX,EAX                         ; 005f12d1
    JZ 0x005f12f6                       ; 005f12d3
        ;   XREF to: 005f12f6 (CONDITIONAL_JUMP)  ; LAB_005f12f6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005f12d5
    MOV dword ptr [ESP + 0xc4],EAX      ; 005f12d9
    MOV EAX,dword ptr [ESP + 0x50]      ; 005f12e0
    MOV dword ptr [ESP + 0xc8],EAX      ; 005f12e4
    MOV EAX,dword ptr [ESP + 0x54]      ; 005f12eb
    MOV dword ptr [ESP + 0xcc],EAX      ; 005f12ef
    LEA EBX,[ESP + 0xd0]                ; 005f12f6
        ;   Label: LAB_005f12f6
    LEA EAX,[ESP + 0xc4]                ; 005f12fd
    MOV EDX,dword ptr [0x006703ec]      ; 005f1304 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005f130a
    FMUL float ptr [0x00665740]         ; 005f130c | FLOAT_00665740
    FISTP dword ptr [EBX]               ; 005f1312
    FLD float ptr [EAX + 0x4]           ; 005f1314
    FMUL float ptr [0x00665740]         ; 005f1317 | FLOAT_00665740
    FISTP dword ptr [EBX + 0x4]         ; 005f131d
    FLD float ptr [EAX + 0x8]           ; 005f1320
    FMUL float ptr [0x00665740]         ; 005f1323 | FLOAT_00665740
    FISTP dword ptr [EBX + 0x8]         ; 005f1329
    LEA EAX,[ESP + 0xd0]                ; 005f132c
    PUSH EAX                            ; 005f1333
    MOV EAX,dword ptr [EDX]             ; 005f1334 | g_CDemonRendererInstance
    PUSH EAX                            ; 005f1336
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 005f1337
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x0066576c]          ; 005f133c | FLOAT_0066576c
    MOV EAX,[0x00665770]                ; 005f1342 | FLOAT_00665770
    ADD ESP,0x8                         ; 005f1347
    FCHS                                ; 005f134a
    FSTP float ptr [ESP + 0x100]        ; 005f134c
    MOV dword ptr [ESP + 0xfc],EAX      ; 005f1353
    MOV EAX,dword ptr [ESP + 0x100]     ; 005f135a
    XOR ECX,ECX                         ; 005f1361
    MOV dword ptr [ESP + 0x7c],EAX      ; 005f1363
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005f1367
    MOV dword ptr [ESP + 0x84],ECX      ; 005f136e
    MOV dword ptr [ESP + 0x80],EAX      ; 005f1375
    FLD float ptr [ESI]                 ; 005f137c
    FADD float ptr [ESP + 0x100]        ; 005f137e
    FSTP float ptr [ESP + 0xb8]         ; 005f1385
    FLD float ptr [ESI + 0x4]           ; 005f138c
    FADD float ptr [ESP + 0xfc]         ; 005f138f
    FSTP float ptr [ESP + 0xbc]         ; 005f1396
    MOV EAX,dword ptr [ESI + 0x8]       ; 005f139d
    MOV dword ptr [ESP + 0xc0],EAX      ; 005f13a0
    LEA EAX,[EDI + 0x261c]              ; 005f13a7
    FLD float ptr [ESP + 0xb8]          ; 005f13ad
    FMUL float ptr [EAX]                ; 005f13b4
    FLD float ptr [ESP + 0xbc]          ; 005f13b6
    FXCH                                ; 005f13bd
    FSTP float ptr [ESP + 0xac]         ; 005f13bf
    FMUL float ptr [EAX]                ; 005f13c6
    FLD float ptr [ESP + 0xc0]          ; 005f13c8
    FXCH                                ; 005f13cf
    FSTP float ptr [ESP + 0xb0]         ; 005f13d1
    FMUL float ptr [EAX]                ; 005f13d8
    LEA EDX,[ESP + 0xc4]                ; 005f13da
    LEA EAX,[ESP + 0xac]                ; 005f13e1
    FSTP float ptr [ESP + 0xb4]         ; 005f13e8
    CMP EDX,EAX                         ; 005f13ef
    JZ 0x005f141d                       ; 005f13f1
        ;   XREF to: 005f141d (CONDITIONAL_JUMP)  ; LAB_005f141d
    MOV EAX,dword ptr [ESP + 0xac]      ; 005f13f3
    MOV dword ptr [ESP + 0xc4],EAX      ; 005f13fa
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005f1401
    MOV dword ptr [ESP + 0xc8],EAX      ; 005f1408
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005f140f
    MOV dword ptr [ESP + 0xcc],EAX      ; 005f1416
    LEA EBX,[ESP + 0xa0]                ; 005f141d
        ;   Label: LAB_005f141d
    LEA EAX,[ESP + 0xc4]                ; 005f1424
    MOV EDX,dword ptr [0x006703ec]      ; 005f142b | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005f1431
    FMUL float ptr [0x00665740]         ; 005f1433 | FLOAT_00665740
    FISTP dword ptr [EBX]               ; 005f1439
    FLD float ptr [EAX + 0x4]           ; 005f143b
    FMUL float ptr [0x00665740]         ; 005f143e | FLOAT_00665740
    FISTP dword ptr [EBX + 0x4]         ; 005f1444
    FLD float ptr [EAX + 0x8]           ; 005f1447
    FMUL float ptr [0x00665740]         ; 005f144a | FLOAT_00665740
    FISTP dword ptr [EBX + 0x8]         ; 005f1450
    LEA EAX,[ESP + 0xa0]                ; 005f1453
    PUSH EAX                            ; 005f145a
    MOV EAX,dword ptr [EDX]             ; 005f145b | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005f145d
    PUSH EAX                            ; 005f1460
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 005f1461
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x00665770]          ; 005f1466 | FLOAT_00665770
    FLD float ptr [0x0066576c]          ; 005f146c | FLOAT_0066576c
    ADD ESP,0x8                         ; 005f1472
    FXCH                                ; 005f1475
    FCHS                                ; 005f1477
    FXCH                                ; 005f1479
    FCHS                                ; 005f147b
    XOR EBX,EBX                         ; 005f147d
    FSTP float ptr [ESP + 0x100]        ; 005f147f
    MOV EAX,dword ptr [ESP + 0x100]     ; 005f1486
    FSTP float ptr [ESP + 0x104]        ; 005f148d
    MOV dword ptr [ESP + 0x64],EAX      ; 005f1494
    MOV EAX,dword ptr [ESP + 0x104]     ; 005f1498
    MOV dword ptr [ESP + 0x6c],EBX      ; 005f149f
    MOV dword ptr [ESP + 0x68],EAX      ; 005f14a3
    FLD float ptr [ESI]                 ; 005f14a7
    FADD float ptr [ESP + 0x100]        ; 005f14a9
    FSTP float ptr [ESP + 0xdc]         ; 005f14b0
    FLD float ptr [ESI + 0x4]           ; 005f14b7
    FADD float ptr [ESP + 0x104]        ; 005f14ba
    FSTP float ptr [ESP + 0xe0]         ; 005f14c1
    MOV EAX,dword ptr [ESI + 0x8]       ; 005f14c8
    MOV dword ptr [ESP + 0xe4],EAX      ; 005f14cb
    LEA EAX,[EDI + 0x261c]              ; 005f14d2
    FLD float ptr [ESP + 0xdc]          ; 005f14d8
    FMUL float ptr [EAX]                ; 005f14df
    FLD float ptr [ESP + 0xe0]          ; 005f14e1
    FXCH                                ; 005f14e8
    FSTP float ptr [ESP + 0x88]         ; 005f14ea
    FMUL float ptr [EAX]                ; 005f14f1
    FLD float ptr [ESP + 0xe4]          ; 005f14f3
    FXCH                                ; 005f14fa
    FSTP float ptr [ESP + 0x8c]         ; 005f14fc
    FMUL float ptr [EAX]                ; 005f1503
    LEA EDX,[ESP + 0xc4]                ; 005f1505
    LEA EAX,[ESP + 0x88]                ; 005f150c
    FSTP float ptr [ESP + 0x90]         ; 005f1513
    CMP EDX,EAX                         ; 005f151a
    JZ 0x005f1548                       ; 005f151c
        ;   XREF to: 005f1548 (CONDITIONAL_JUMP)  ; LAB_005f1548
    MOV EAX,dword ptr [ESP + 0x88]      ; 005f151e
    MOV dword ptr [ESP + 0xc4],EAX      ; 005f1525
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005f152c
    MOV dword ptr [ESP + 0xc8],EAX      ; 005f1533
    MOV EAX,dword ptr [ESP + 0x90]      ; 005f153a
    MOV dword ptr [ESP + 0xcc],EAX      ; 005f1541
    LEA EBX,[ESP + 0xe8]                ; 005f1548
        ;   Label: LAB_005f1548
    LEA EAX,[ESP + 0xc4]                ; 005f154f
    MOV EDX,dword ptr [0x006703ec]      ; 005f1556 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005f155c
    FMUL float ptr [0x00665740]         ; 005f155e | FLOAT_00665740
    FISTP dword ptr [EBX]               ; 005f1564
    FLD float ptr [EAX + 0x4]           ; 005f1566
    FMUL float ptr [0x00665740]         ; 005f1569 | FLOAT_00665740
    FISTP dword ptr [EBX + 0x4]         ; 005f156f
    FLD float ptr [EAX + 0x8]           ; 005f1572
    FMUL float ptr [0x00665740]         ; 005f1575 | FLOAT_00665740
    FISTP dword ptr [EBX + 0x8]         ; 005f157b
    LEA EAX,[ESP + 0xe8]                ; 005f157e
    PUSH EAX                            ; 005f1585
    MOV EAX,dword ptr [EDX]             ; 005f1586 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005f1588
    PUSH EAX                            ; 005f158b
    XOR EBP,EBP                         ; 005f158c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 005f158e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x00665770]          ; 005f1593 | FLOAT_00665770
    MOV EAX,[0x0066576c]                ; 005f1599 | FLOAT_0066576c
    ADD ESP,0x8                         ; 005f159e
    FCHS                                ; 005f15a1
    FSTP float ptr [ESP + 0x104]        ; 005f15a3
    MOV dword ptr [ESP + 0x108],EAX     ; 005f15aa
    MOV dword ptr [ESP + 0x40],EAX      ; 005f15b1
    MOV EAX,dword ptr [ESP + 0x104]     ; 005f15b5
    MOV dword ptr [ESP + 0x48],EBP      ; 005f15bc
    MOV dword ptr [ESP + 0x44],EAX      ; 005f15c0
    FLD float ptr [ESI]                 ; 005f15c4
    FADD float ptr [ESP + 0x108]        ; 005f15c6
    FSTP float ptr [ESP + 0x28]         ; 005f15cd
    FLD float ptr [ESI + 0x4]           ; 005f15d1
    FADD float ptr [ESP + 0x104]        ; 005f15d4
    FSTP float ptr [ESP + 0x2c]         ; 005f15db
    MOV EAX,dword ptr [ESI + 0x8]       ; 005f15df
    MOV dword ptr [ESP + 0x30],EAX      ; 005f15e2
    LEA EAX,[EDI + 0x261c]              ; 005f15e6
    FLD float ptr [ESP + 0x28]          ; 005f15ec
    FMUL float ptr [EAX]                ; 005f15f0
    FLD float ptr [ESP + 0x2c]          ; 005f15f2
    FXCH                                ; 005f15f6
    FSTP float ptr [ESP + 0x94]         ; 005f15f8
    FMUL float ptr [EAX]                ; 005f15ff
    FLD float ptr [ESP + 0x30]          ; 005f1601
    FXCH                                ; 005f1605
    FSTP float ptr [ESP + 0x98]         ; 005f1607
    FMUL float ptr [EAX]                ; 005f160e
    LEA EBX,[ESP + 0xc4]                ; 005f1610
    LEA EAX,[ESP + 0x94]                ; 005f1617
    FSTP float ptr [ESP + 0x9c]         ; 005f161e
    CMP EBX,EAX                         ; 005f1625
    JZ 0x005f1653                       ; 005f1627
        ;   XREF to: 005f1653 (CONDITIONAL_JUMP)  ; LAB_005f1653
    MOV EAX,dword ptr [ESP + 0x94]      ; 005f1629
    MOV dword ptr [ESP + 0xc4],EAX      ; 005f1630
    MOV EAX,dword ptr [ESP + 0x98]      ; 005f1637
    MOV dword ptr [ESP + 0xc8],EAX      ; 005f163e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005f1645
    MOV dword ptr [ESP + 0xcc],EAX      ; 005f164c
    LEA EBX,[ESP + 0x58]                ; 005f1653
        ;   Label: LAB_005f1653
    LEA EAX,[ESP + 0xc4]                ; 005f1657
    MOV ESI,dword ptr [0x006703ec]      ; 005f165e | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005f1664
    FMUL float ptr [0x00665740]         ; 005f1666 | FLOAT_00665740
    FISTP dword ptr [EBX]               ; 005f166c
    FLD float ptr [EAX + 0x4]           ; 005f166e
    FMUL float ptr [0x00665740]         ; 005f1671 | FLOAT_00665740
    FISTP dword ptr [EBX + 0x4]         ; 005f1677
    FLD float ptr [EAX + 0x8]           ; 005f167a
    FMUL float ptr [0x00665740]         ; 005f167d | FLOAT_00665740
    FISTP dword ptr [EBX + 0x8]         ; 005f1683
    LEA EAX,[ESP + 0x58]                ; 005f1686
    PUSH EAX                            ; 005f168a
    MOV EAX,dword ptr [ESI]             ; 005f168b | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 005f168d
    PUSH EAX                            ; 005f1692
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 005f1693
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 005f1698 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 005f169d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x20],0xffff   ; 005f169f
    MOV EDX,dword ptr [EAX]             ; 005f16a6 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x24],0x0      ; 005f16a8
    MOV EBX,dword ptr [EAX]             ; 005f16af | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x28],0x0      ; 005f16b1
    MOV EBX,dword ptr [EAX]             ; 005f16b8 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x50],0xffff   ; 005f16ba
    MOV EDX,dword ptr [EAX]             ; 005f16c1 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x54],0x0      ; 005f16c3
    MOV EDX,dword ptr [EAX]             ; 005f16ca | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x58],0x0      ; 005f16cc
    MOV EBX,dword ptr [EAX]             ; 005f16d3 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x80],0xffff   ; 005f16d5
    MOV EBX,dword ptr [EAX]             ; 005f16df | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x84],0x0      ; 005f16e1
    MOV EBX,dword ptr [EAX]             ; 005f16eb | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x88],0x0      ; 005f16ed
    MOV EDX,dword ptr [EAX]             ; 005f16f7 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb0],0xffff   ; 005f16f9
    MOV EDX,dword ptr [EAX]             ; 005f1703 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb4],0x0      ; 005f1705
    MOV EDX,dword ptr [EAX]             ; 005f170f | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb8],0x0      ; 005f1711
    MOV EBX,dword ptr [EAX]             ; 005f171b | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x2c],0x4000   ; 005f171d
    MOV EBX,dword ptr [EAX]             ; 005f1724 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x5c],0x4000   ; 005f1726
    MOV EDX,dword ptr [EAX]             ; 005f172d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x8c],0x4000   ; 005f172f
    MOV EDX,dword ptr [EAX]             ; 005f1739 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xbc],0x4000   ; 005f173b
    MOV EDX,dword ptr [EAX]             ; 005f1745 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x80000  ; 005f1747
    MOV EBX,dword ptr [EAX]             ; 005f174e | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 005f1750 | g_LightBufferPool[11][183800]
    MOV EBX,dword ptr [EAX]             ; 005f1757 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 005f1759
    MOV dword ptr [EBX + 0x48],0xf80000 ; 005f175c | g_LightBufferPool[11][183800]
    MOV EBX,dword ptr [EAX]             ; 005f1763 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 005f1765 | g_LightBufferPool[11][183800]
    MOV EBX,dword ptr [EAX]             ; 005f176c | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x78],0xf80000 ; 005f176e | g_LightBufferPool[11][183800]
    MOV EBX,dword ptr [EAX]             ; 005f1775 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x7c],0x80000  ; 005f1777
    MOV EBX,dword ptr [EAX]             ; 005f177e | g_CDemonRendererInstance
    MOV EDX,0x4                         ; 005f1780
    MOV dword ptr [EBX + 0xa8],0x80000  ; 005f1785
    PUSH 0x68495c                       ; 005f178f | SMRGLTextureBasic_0068495c
    MOV EBX,dword ptr [EAX]             ; 005f1794 | g_CDemonRendererInstance
    XOR ECX,ECX                         ; 005f1796
    PUSH EAX                            ; 005f1798 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xac],0x80000  ; 005f1799
    MOV EBX,0x3                         ; 005f17a3
    MOV dword ptr [ESP + 0xc],EDX       ; 005f17a8
    MOV dword ptr [ESP + 0x1c],ECX      ; 005f17ac
    MOV dword ptr [ESP + 0x18],ECX      ; 005f17b0
    MOV dword ptr [ESP + 0x14],ECX      ; 005f17b4
    MOV dword ptr [ESP + 0x10],ECX      ; 005f17b8
    MOV dword ptr [ESP + 0x20],ECX      ; 005f17bc
    MOV EDX,0x1                         ; 005f17c0
    MOV ECX,0x2                         ; 005f17c5
    MOV dword ptr [ESP + 0x2c],EBX      ; 005f17ca
    MOV dword ptr [ESP + 0x24],EDX      ; 005f17ce
    MOV dword ptr [ESP + 0x28],ECX      ; 005f17d2
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005f17d6
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005f17db
    PUSH 0x1                            ; 005f17de
    MOV ESI,dword ptr [0x006703ec]      ; 005f17e0 | g_CDemonRendererPtr2
    PUSH ESI                            ; 005f17e6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005f17e7
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005f17ec
    MOV EAX,ESP                         ; 005f17ef
    PUSH EAX                            ; 005f17f1
    MOV EDI,dword ptr [0x006703ec]      ; 005f17f2 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005f17f8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0 ; 005f17f9
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005f17fe
    XOR EBP,EBP                         ; 005f1801
    PUSH EBP                            ; 005f1803
    MOV EBP,dword ptr [0x006703ec]      ; 005f1804 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005f180a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005f180b
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005f1810
    ADD ESP,0x10c                       ; 005f1813
    POP EBP                             ; 005f1819
    POP EDI                             ; 005f181a
    POP ESI                             ; 005f181b
    POP EBX                             ; 005f181c
    RET                                 ; 005f181d

