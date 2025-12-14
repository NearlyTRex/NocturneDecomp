; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   end_position
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510 at 0057251f
;
; Referenced Globals:
;   float g_VoxelSizeReciprocal2 = 0.125
;   float g_RaycastStepScale = 2.684355E+8
;   uchar[8] g_VoxelYBitMasks
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499330
        ;   Label: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
    PUSH ESI                            ; 00499331
    PUSH EDI                            ; 00499332
    PUSH EBP                            ; 00499333
    MOV EBP,ESP                         ; 00499334
    SUB ESP,0x78                        ; 00499336
    AND ESP,0xfffffff8                  ; 00499339
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049933c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0049933f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00499342
    FLD float ptr [EAX]                 ; 00499345
    FSUB float ptr [ECX + 0x10]         ; 00499347
    FLD float ptr [0x00622d52]          ; 0049934a | g_VoxelSizeReciprocal2
    FLD float ptr [ECX + 0x28]          ; 00499350
    FMUL ST1                            ; 00499353
    FLD1                                ; 00499355
    FDIVRP                              ; 00499357
    FLD float ptr [EAX + 0x4]           ; 00499359
    FSUB float ptr [ECX + 0x14]         ; 0049935c
    FLD float ptr [ECX + 0x2c]          ; 0049935f
    FMUL ST3                            ; 00499362
    FLD1                                ; 00499364
    FDIVRP                              ; 00499366
    FLD float ptr [EAX + 0x8]           ; 00499368
    FSUB float ptr [ECX + 0x18]         ; 0049936b
    FXCH ST5                            ; 0049936e
    FMUL ST3                            ; 00499370
    FLD float ptr [ECX + 0x30]          ; 00499372
    FMULP ST5                           ; 00499375
    FLD1                                ; 00499377
    FDIVRP ST5,ST0                      ; 00499379
    FXCH ST2                            ; 0049937b
    FMUL ST1                            ; 0049937d
    FXCH ST5                            ; 0049937f
    FMUL ST4                            ; 00499381
    FXCH ST2                            ; 00499383
    FSTP float ptr [ESP + 0x28]         ; 00499385
    FLD float ptr [EDX]                 ; 00499389
    FXCH ST5                            ; 0049938b
    FSTP float ptr [ESP + 0x38]         ; 0049938d
    FLD float ptr [EDX + 0x4]           ; 00499391
    FXCH ST5                            ; 00499394
    FSUB float ptr [ECX + 0x10]         ; 00499396
    FXCH ST5                            ; 00499399
    FSUB float ptr [ECX + 0x14]         ; 0049939b
    FXCH ST5                            ; 0049939e
    FMULP ST3                           ; 004993a0
    FMULP ST4                           ; 004993a2
    FLD float ptr [EDX + 0x8]           ; 004993a4
    FLD float ptr [EDX]                 ; 004993a7
    FSUB float ptr [EAX]                ; 004993a9
    FXCH                                ; 004993ab
    FSUB float ptr [ECX + 0x18]         ; 004993ad
    FXCH                                ; 004993b0
    FSTP float ptr [ESP + 0x4]          ; 004993b2
    FLD float ptr [EDX + 0x4]           ; 004993b6
    FSUB float ptr [EAX + 0x4]          ; 004993b9
    FXCH                                ; 004993bc
    FMULP ST4                           ; 004993be
    FSTP float ptr [ESP + 0x8]          ; 004993c0
    FLD float ptr [EDX + 0x8]           ; 004993c4
    FSUB float ptr [EAX + 0x8]          ; 004993c7
    MOV EBX,0x1                         ; 004993ca
    FSTP float ptr [ESP + 0xc]          ; 004993cf
    FSTP float ptr [ESP + 0x3c]         ; 004993d3
    CALL crt_math.c_round_FUN_005fe6b0  ; 004993d7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004993dc
    CALL crt_math.c_round_FUN_005fe6b0  ; 004993de
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004993e3
    CALL crt_math.c_round_FUN_005fe6b0  ; 004993e5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FLD float ptr [ESP + 0x28]          ; 004993ea
    FLD float ptr [ESP + 0x38]          ; 004993ee
    FLD float ptr [ESP + 0x3c]          ; 004993f2
    FXCH ST5                            ; 004993f6
    FISTP dword ptr [ESP + 0x24]        ; 004993f8
    FXCH ST3                            ; 004993fc
    FISTP dword ptr [ESP + 0x1c]        ; 004993fe
    FXCH                                ; 00499402
    FISTP dword ptr [ESP + 0x30]        ; 00499404
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499408
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0049940d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049940f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00499414
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499416
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049941b
    FXCH                                ; 0049941f
    FISTP dword ptr [ESP + 0x58]        ; 00499421
    FXCH                                ; 00499425
    FISTP dword ptr [ESP + 0x5c]        ; 00499427
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049942b
    FISTP dword ptr [ESP + 0x64]        ; 0049942f
    CMP EAX,EDX                         ; 00499433
    JNZ 0x00499445                      ; 00499435
        ;   XREF to: 00499445 (CONDITIONAL_JUMP)  ; LAB_00499445
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00499437
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0049943b
    JZ 0x004996e3                       ; 0049943f
        ;   XREF to: 004996e3 (CONDITIONAL_JUMP)  ; LAB_004996e3
    FLD float ptr [ESP + 0x8]           ; 00499445
        ;   Label: LAB_00499445
    FMUL ST0                            ; 00499449
    FLD float ptr [ESP + 0x4]           ; 0049944b
    FMUL ST0                            ; 0049944f
    FADDP                               ; 00499451
    FLD float ptr [ESP + 0xc]           ; 00499453
    FMUL ST0                            ; 00499457
    FADDP                               ; 00499459
    FSQRT                               ; 0049945b
    FST float ptr [ESP]                 ; 0049945d
    FLDZ                                ; 00499460
    FCOMPP                              ; 00499462
    FNSTSW AX                           ; 00499464
    SAHF                                ; 00499466
    JNC 0x004996f6                      ; 00499467
        ;   XREF to: 004996f6 (CONDITIONAL_JUMP)  ; LAB_004996f6
    FLD float ptr [ESP + 0x8]           ; 0049946d
    FABS                                ; 00499471
    FLD float ptr [ESP + 0xc]           ; 00499473
    FABS                                ; 00499477
    FLD float ptr [ESP + 0x4]           ; 00499479
    FLD ST0                             ; 0049947d
    FABS                                ; 0049947f
    FLD float ptr [0x00622d56]          ; 00499481 | g_RaycastStepScale
    FDIV float ptr [ESP]                ; 00499487
    FXCH                                ; 0049948a
    FMUL ST1                            ; 0049948c
    FXCH ST4                            ; 0049948e
    FMUL ST1                            ; 00499490
    FXCH ST3                            ; 00499492
    FMULP                               ; 00499494
    FXCH ST3                            ; 00499496
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499498
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x54]        ; 0049949d
    FLDZ                                ; 004994a1
    FXCH ST2                            ; 004994a3
    CALL crt_math.c_round_FUN_005fe6b0  ; 004994a5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 004994aa
    CALL crt_math.c_round_FUN_005fe6b0  ; 004994ac
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 004994b1
    FISTP dword ptr [ESP + 0x50]        ; 004994b3
    FXCH ST2                            ; 004994b7
    FISTP dword ptr [ESP + 0x4c]        ; 004994b9
    FCOMPP                              ; 004994bd
    FNSTSW AX                           ; 004994bf
    SAHF                                ; 004994c1
    JA 0x00499701                       ; 004994c2
        ;   XREF to: 00499701 (CONDITIONAL_JUMP)  ; LAB_00499701
    MOV EAX,dword ptr [ESP + 0x24]      ; 004994c8
    MOV ESI,dword ptr [ESP + 0x58]      ; 004994cc
    SUB EAX,ESI                         ; 004994d0
    MOV ECX,0x1                         ; 004994d2
    ADD EBX,EAX                         ; 004994d7
    LEA EAX,[ESI + ECX*0x1]             ; 004994d9
    MOV dword ptr [ESP + 0x74],EAX      ; 004994dc
    FILD dword ptr [ESP + 0x74]         ; 004994e0
    FSUB float ptr [ESP + 0x28]         ; 004994e4
    MOV dword ptr [ESP + 0x48],ECX      ; 004994e8
    FSTP float ptr [ESP + 0x20]         ; 004994ec
        ;   Label: LAB_004994ec
    FLD float ptr [ESP + 0x8]           ; 004994f0
    FLDZ                                ; 004994f4
    FCOMPP                              ; 004994f6
    FNSTSW AX                           ; 004994f8
    SAHF                                ; 004994fa
    JA 0x00499729                       ; 004994fb
        ;   XREF to: 00499729 (CONDITIONAL_JUMP)  ; LAB_00499729
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499501
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00499505
    SUB EAX,ESI                         ; 00499509
    MOV ECX,0x1                         ; 0049950b
    ADD EBX,EAX                         ; 00499510
    LEA EAX,[ESI + ECX*0x1]             ; 00499512
    MOV dword ptr [ESP + 0x74],EAX      ; 00499515
    FILD dword ptr [ESP + 0x74]         ; 00499519
    FSUB float ptr [ESP + 0x38]         ; 0049951d
    MOV dword ptr [ESP + 0x40],ECX      ; 00499521
    FSTP float ptr [ESP + 0x34]         ; 00499525
        ;   Label: LAB_00499525
    FLD float ptr [ESP + 0xc]           ; 00499529
    FLDZ                                ; 0049952d
    FCOMPP                              ; 0049952f
    FNSTSW AX                           ; 00499531
    SAHF                                ; 00499533
    JA 0x00499751                       ; 00499534
        ;   XREF to: 00499751 (CONDITIONAL_JUMP)  ; LAB_00499751
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049953a
    MOV ESI,dword ptr [ESP + 0x64]      ; 0049953e
    SUB EAX,ESI                         ; 00499542
    MOV ECX,0x1                         ; 00499544
    ADD EBX,EAX                         ; 00499549
    LEA EAX,[ESI + ECX*0x1]             ; 0049954b
    MOV dword ptr [ESP + 0x74],EAX      ; 0049954e
    FILD dword ptr [ESP + 0x74]         ; 00499552
    FSUB float ptr [ESP + 0x3c]         ; 00499556
    MOV dword ptr [ESP + 0x44],ECX      ; 0049955a
    FSTP float ptr [ESP + 0x2c]         ; 0049955e
        ;   Label: LAB_0049955e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00499562
    MOV dword ptr [ESP + 0x74],EAX      ; 00499566
    FILD dword ptr [ESP + 0x74]         ; 0049956a
    FLD ST0                             ; 0049956e
    FMUL float ptr [ESP + 0x20]         ; 00499570
    MOV EAX,dword ptr [ESP + 0x54]      ; 00499574
    FXCH                                ; 00499578
    FLD float ptr [ESP + 0x2c]          ; 0049957a
    FXCH                                ; 0049957e
    FMUL ST1                            ; 00499580
    MOV dword ptr [ESP + 0x74],EAX      ; 00499582
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00499586
    FILD dword ptr [ESP + 0x74]         ; 0049958a
    MOV dword ptr [ESP + 0x74],EAX      ; 0049958e
    FLD ST0                             ; 00499592
    FMUL float ptr [ESP + 0x34]         ; 00499594
    FILD dword ptr [ESP + 0x74]         ; 00499598
    FLD ST0                             ; 0049959c
    FMUL float ptr [ESP + 0x20]         ; 0049959e
    FXCH                                ; 004995a2
    FMUL float ptr [ESP + 0x34]         ; 004995a4
    FXCH ST2                            ; 004995a8
    FSUBP ST6,ST0                       ; 004995aa
    FXCH ST2                            ; 004995ac
    FMULP ST4                           ; 004995ae
    FXCH ST4                            ; 004995b0
    CALL crt_math.c_round_FUN_005fe6b0  ; 004995b2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 004995b7
    FSUBP ST2,ST0                       ; 004995b9
    FXCH ST3                            ; 004995bb
    FISTP dword ptr [ESP + 0x60]        ; 004995bd
    CALL crt_math.c_round_FUN_005fe6b0  ; 004995c1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004995c6
    FSUBP ST2,ST0                       ; 004995c8
    FISTP dword ptr [ESP + 0x68]        ; 004995ca
    CALL crt_math.c_round_FUN_005fe6b0  ; 004995ce
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x6c]        ; 004995d3
    MOV EAX,dword ptr [ESP + 0x64]      ; 004995d7
        ;   Label: LAB_004995d7
    MOV EDX,EAX                         ; 004995db
    SAR EDX,0x1f                        ; 004995dd
    SHL EDX,0x3                         ; 004995e0
    SBB EAX,EDX                         ; 004995e3
    SAR EAX,0x3                         ; 004995e5
    PUSH EAX                            ; 004995e8
    MOV EAX,dword ptr [ESP + 0x60]      ; 004995e9
    MOV EDX,EAX                         ; 004995ed
    SAR EDX,0x1f                        ; 004995ef
    SHL EDX,0x3                         ; 004995f2
    SBB EAX,EDX                         ; 004995f5
    SAR EAX,0x3                         ; 004995f7
    PUSH EAX                            ; 004995fa
    MOV EAX,dword ptr [ESP + 0x60]      ; 004995fb
    MOV EDX,EAX                         ; 004995ff
    SAR EDX,0x1f                        ; 00499601
    SHL EDX,0x3                         ; 00499604
    SBB EAX,EDX                         ; 00499607
    SAR EAX,0x3                         ; 00499609
    PUSH EAX                            ; 0049960c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049960d
    PUSH EDI                            ; 00499610
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00499611
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    MOV ECX,EAX                         ; 00499616
    ADD ESP,0x10                        ; 00499618
    TEST EAX,EAX                        ; 0049961b
    JZ 0x0049967b                       ; 0049961d
        ;   XREF to: 0049967b (CONDITIONAL_JUMP)  ; LAB_0049967b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049961f
    MOV EDX,EAX                         ; 00499623
    MOV ESI,0x8                         ; 00499625
    SAR EDX,0x1f                        ; 0049962a
    IDIV ESI                            ; 0049962d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049962f
    MOV ESI,EDX                         ; 00499633
    MOV EDX,EAX                         ; 00499635
    MOV EDI,0x8                         ; 00499637
    SAR EDX,0x1f                        ; 0049963c
    IDIV EDI                            ; 0049963f
    MOV EAX,dword ptr [ESP + 0x64]      ; 00499641
    MOV EDI,EDX                         ; 00499645
    MOV EDX,EAX                         ; 00499647
    MOV dword ptr [ESP + 0x74],0x8      ; 00499649
    SAR EDX,0x1f                        ; 00499651
    IDIV dword ptr [ESP + 0x74]         ; 00499654
    MOV EAX,dword ptr [ECX]             ; 00499658
    TEST EAX,EAX                        ; 0049965a
    JZ 0x0049967b                       ; 0049965c
        ;   XREF to: 0049967b (CONDITIONAL_JUMP)  ; LAB_0049967b
    SHL EDX,0x3                         ; 0049965e
    ADD EDX,EDI                         ; 00499661
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 00499663
    XOR EDX,EDX                         ; 00499666
    AND EAX,0xff                        ; 00499668
    MOV DL,byte ptr [ESI + 0x6789f8]    ; 0049966d | g_VoxelYBitMasks
    TEST EAX,EDX                        ; 00499673
    JNZ 0x00499779                      ; 00499675
        ;   XREF to: 00499779 (CONDITIONAL_JUMP)  ; LAB_00499779
    DEC EBX                             ; 0049967b
        ;   Label: LAB_0049967b
    TEST EBX,EBX                        ; 0049967c
    JLE 0x004996f6                      ; 0049967e
        ;   XREF to: 004996f6 (CONDITIONAL_JUMP)  ; LAB_004996f6
    MOV EAX,dword ptr [ESP + 0x68]      ; 00499680
    MOV EDX,dword ptr [ESP + 0x50]      ; 00499684
    MOV ECX,dword ptr [ESP + 0x44]      ; 00499688
    ADD EAX,EDX                         ; 0049968c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0049968e
    MOV ESI,dword ptr [ESP + 0x54]      ; 00499692
    ADD EDX,ECX                         ; 00499696
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00499698
    MOV EDI,dword ptr [ESP + 0x60]      ; 0049969c
    SUB ECX,ESI                         ; 004996a0
    TEST EDI,EDI                        ; 004996a2
    JL 0x00499787                       ; 004996a4
        ;   XREF to: 00499787 (CONDITIONAL_JUMP)  ; LAB_00499787
    MOV ESI,dword ptr [ESP + 0x68]      ; 004996aa
    TEST ESI,ESI                        ; 004996ae
    JL 0x0049978f                       ; 004996b0
        ;   XREF to: 0049978f (CONDITIONAL_JUMP)  ; LAB_0049978f
    MOV EAX,dword ptr [ESP + 0x40]      ; 004996b6
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004996ba
    MOV EDX,dword ptr [ESP + 0x60]      ; 004996be
    ADD EDI,EAX                         ; 004996c2
    MOV EAX,dword ptr [ESP + 0x54]      ; 004996c4
    MOV ECX,ESI                         ; 004996c8
    SUB EDX,EAX                         ; 004996ca
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004996cc
    MOV dword ptr [ESP + 0x5c],EDI      ; 004996d0
    SUB ECX,EAX                         ; 004996d4
    MOV dword ptr [ESP + 0x60],EDX      ; 004996d6
    MOV dword ptr [ESP + 0x68],ECX      ; 004996da
    JMP 0x004995d7                      ; 004996de
        ;   XREF to: 004995d7 (UNCONDITIONAL_JUMP)  ; LAB_004995d7
    MOV EAX,dword ptr [ESP + 0x64]      ; 004996e3
        ;   Label: LAB_004996e3
    CMP EAX,dword ptr [ESP + 0x30]      ; 004996e7
    JNZ 0x00499445                      ; 004996eb
        ;   XREF to: 00499445 (CONDITIONAL_JUMP)  ; LAB_00499445
    JMP 0x004995d7                      ; 004996f1
        ;   XREF to: 004995d7 (UNCONDITIONAL_JUMP)  ; LAB_004995d7
    XOR EDX,EDX                         ; 004996f6
        ;   Label: LAB_004996f6
    MOV EAX,EDX                         ; 004996f8
    MOV ESP,EBP                         ; 004996fa
    POP EBP                             ; 004996fc
    POP EDI                             ; 004996fd
    POP ESI                             ; 004996fe
    POP EBX                             ; 004996ff
    RET                                 ; 00499700
    MOV EAX,dword ptr [ESP + 0x58]      ; 00499701
        ;   Label: LAB_00499701
    SUB EAX,dword ptr [ESP + 0x24]      ; 00499705
    ADD EBX,EAX                         ; 00499709
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049970b
    MOV dword ptr [ESP + 0x74],EAX      ; 0049970f
    MOV EDI,0xffffffff                  ; 00499713
    FILD dword ptr [ESP + 0x74]         ; 00499718
    FSUBR float ptr [ESP + 0x28]        ; 0049971c
    MOV dword ptr [ESP + 0x48],EDI      ; 00499720
    JMP 0x004994ec                      ; 00499724
        ;   XREF to: 004994ec (UNCONDITIONAL_JUMP)  ; LAB_004994ec
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00499729
        ;   Label: LAB_00499729
    SUB EAX,dword ptr [ESP + 0x1c]      ; 0049972d
    ADD EBX,EAX                         ; 00499731
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00499733
    MOV dword ptr [ESP + 0x74],EAX      ; 00499737
    MOV EDI,0xffffffff                  ; 0049973b
    FILD dword ptr [ESP + 0x74]         ; 00499740
    FSUBR float ptr [ESP + 0x38]        ; 00499744
    MOV dword ptr [ESP + 0x40],EDI      ; 00499748
    JMP 0x00499525                      ; 0049974c
        ;   XREF to: 00499525 (UNCONDITIONAL_JUMP)  ; LAB_00499525
    MOV EAX,dword ptr [ESP + 0x64]      ; 00499751
        ;   Label: LAB_00499751
    SUB EAX,dword ptr [ESP + 0x30]      ; 00499755
    ADD EBX,EAX                         ; 00499759
    MOV EAX,dword ptr [ESP + 0x64]      ; 0049975b
    MOV dword ptr [ESP + 0x74],EAX      ; 0049975f
    MOV EDI,0xffffffff                  ; 00499763
    FILD dword ptr [ESP + 0x74]         ; 00499768
    FSUBR float ptr [ESP + 0x3c]        ; 0049976c
    MOV dword ptr [ESP + 0x44],EDI      ; 00499770
    JMP 0x0049955e                      ; 00499774
        ;   XREF to: 0049955e (UNCONDITIONAL_JUMP)  ; LAB_0049955e
    MOV EDX,0x1                         ; 00499779
        ;   Label: LAB_00499779
    MOV EAX,EDX                         ; 0049977e
    MOV ESP,EBP                         ; 00499780
    POP EBP                             ; 00499782
    POP EDI                             ; 00499783
    POP ESI                             ; 00499784
    POP EBX                             ; 00499785
    RET                                 ; 00499786
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00499787
        ;   Label: LAB_00499787
    TEST ESI,ESI                        ; 0049978b
    JL 0x004997a0                       ; 0049978d
        ;   XREF to: 004997a0 (CONDITIONAL_JUMP)  ; LAB_004997a0
    MOV dword ptr [ESP + 0x6c],ECX      ; 0049978f
        ;   Label: LAB_0049978f
    MOV dword ptr [ESP + 0x68],EAX      ; 00499793
    MOV dword ptr [ESP + 0x64],EDX      ; 00499797
    JMP 0x004995d7                      ; 0049979b
        ;   XREF to: 004995d7 (UNCONDITIONAL_JUMP)  ; LAB_004995d7
    MOV EAX,dword ptr [ESP + 0x48]      ; 004997a0
        ;   Label: LAB_004997a0
    MOV EDI,dword ptr [ESP + 0x58]      ; 004997a4
    MOV EDX,dword ptr [ESP + 0x60]      ; 004997a8
    ADD EDI,EAX                         ; 004997ac
    ADD EDX,dword ptr [ESP + 0x50]      ; 004997ae
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004997b2
    MOV dword ptr [ESP + 0x58],EDI      ; 004997b6
    LEA ECX,[ESI + EAX*0x1]             ; 004997ba
    MOV dword ptr [ESP + 0x60],EDX      ; 004997bd
    MOV dword ptr [ESP + 0x6c],ECX      ; 004997c1
    JMP 0x004995d7                      ; 004997c5
        ;   XREF to: 004995d7 (UNCONDITIONAL_JUMP)  ; LAB_004995d7

