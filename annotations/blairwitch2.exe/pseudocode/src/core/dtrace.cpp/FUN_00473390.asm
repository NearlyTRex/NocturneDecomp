; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_FUN_00473390(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
; Local Variables:
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined8       Stack[-0x80]:8  local_80
; undefined        Stack[-0x78]:1  local_78
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10 at 00535e29
;
; Referenced Globals:
;   undefined4 DAT_005d1b57
;
; Called Functions:
;   core_dcube.cpp_FUN_00446b60
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473390
        ;   Label: core_dtrace.cpp_FUN_00473390
    PUSH ESI                            ; 00473391
    PUSH EDI                            ; 00473392
    PUSH EBP                            ; 00473393
    MOV EBP,ESP                         ; 00473394
    SUB ESP,0x9c                        ; 00473396
    AND ESP,0xfffffff8                  ; 0047339c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0047339f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004733a2
    FLD float ptr [EAX]                 ; 004733a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004733a7
    FSUB float ptr [EAX + 0x10]         ; 004733aa
    FLD1                                ; 004733ad
    FDIV float ptr [EAX + 0x28]         ; 004733af
    MOV EAX,dword ptr [EBP + 0x18]      ; 004733b2
    FLD float ptr [EAX + 0x4]           ; 004733b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004733b8
    FSUB float ptr [EAX + 0x14]         ; 004733bb
    FDIV float ptr [EAX + 0x2c]         ; 004733be
    MOV EAX,dword ptr [EBP + 0x18]      ; 004733c1
    FLD float ptr [EAX + 0x8]           ; 004733c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004733c7
    FSUB float ptr [EAX + 0x18]         ; 004733ca
    FDIV float ptr [EAX + 0x30]         ; 004733cd
    FLD float ptr [ESI]                 ; 004733d0
    FSUB float ptr [EAX + 0x10]         ; 004733d2
    FXCH ST4                            ; 004733d5
    FMUL ST3                            ; 004733d7
    FXCH ST4                            ; 004733d9
    FMULP ST3                           ; 004733db
    FXCH ST3                            ; 004733dd
    FST float ptr [ESP + 0x44]          ; 004733df
    CALL crt_math.c_round_FUN_005b7ff0  ; 004733e3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x7c]        ; 004733e8
    FST float ptr [ESP + 0x60]          ; 004733ec
    CALL crt_math.c_round_FUN_005b7ff0  ; 004733f0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x80]        ; 004733f5
    FXCH                                ; 004733fc
    FST float ptr [ESP + 0x58]          ; 004733fe
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473402
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x84]        ; 00473407
    SUB ESP,0x8                         ; 0047340e
    FSTP double ptr [ESP]               ; 00473411
    CALL crt_math.c_floor_FUN_005b84d0  ; 00473414
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 00473419
    MOV dword ptr [ESP + 0x3c],EDX      ; 0047341d
    FLD double ptr [ESP + 0x38]         ; 00473421
    ADD ESP,0x8                         ; 00473425
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473428
    FLD float ptr [ESI + 0x4]           ; 0047342b
    FSUB float ptr [EAX + 0x14]         ; 0047342e
    FDIV float ptr [EAX + 0x2c]         ; 00473431
    FXCH                                ; 00473434
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473436
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4c]        ; 0047343b
    SUB ESP,0x8                         ; 0047343f
    FSTP double ptr [ESP]               ; 00473442
    CALL crt_math.c_floor_FUN_005b84d0  ; 00473445
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 0047344a
    MOV dword ptr [ESP + 0x3c],EDX      ; 0047344e
    FLD double ptr [ESP + 0x38]         ; 00473452
    ADD ESP,0x8                         ; 00473456
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473459
    FLD float ptr [ESI + 0x8]           ; 0047345c
    FSUB float ptr [EAX + 0x18]         ; 0047345f
    FDIV float ptr [EAX + 0x30]         ; 00473462
    FXCH                                ; 00473465
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473467
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x50]        ; 0047346c
    SUB ESP,0x8                         ; 00473470
    MOV EBX,0x1                         ; 00473473
    FSTP double ptr [ESP]               ; 00473478
    LEA EDI,[ESP + 0x2c]                ; 0047347b
    CALL crt_math.c_floor_FUN_005b84d0  ; 0047347f
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    FLD float ptr [ESI]                 ; 00473484
    FLD float ptr [ESI + 0x4]           ; 00473486
    MOV dword ptr [ESP + 0x38],EAX      ; 00473489
    MOV dword ptr [ESP + 0x3c],EDX      ; 0047348d
    FLD float ptr [ESI + 0x8]           ; 00473491
    FLD double ptr [ESP + 0x38]         ; 00473494
    LEA ESI,[ESP + 0x20]                ; 00473498
    ADD ESP,0x8                         ; 0047349c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047349f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [EBP + 0x18]      ; 004734a4
    FISTP dword ptr [ESP + 0x54]        ; 004734a7
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004734ab
    FXCH ST2                            ; 004734af
    FSUB float ptr [EAX]                ; 004734b1
    FXCH                                ; 004734b3
    FSUB float ptr [EAX + 0x4]          ; 004734b5
    FXCH ST2                            ; 004734b8
    FSUB float ptr [EAX + 0x8]          ; 004734ba
    FXCH                                ; 004734bd
    FSTP float ptr [ESP + 0x18]         ; 004734bf
    FXCH                                ; 004734c3
    FSTP float ptr [ESP + 0x1c]         ; 004734c5
    FSTP float ptr [ESP + 0x20]         ; 004734c9
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004734cd
    MOVSD ES:EDI,ESI                    ; 004734d1
    MOVSD ES:EDI,ESI                    ; 004734d2
    MOVSD ES:EDI,ESI                    ; 004734d3
    CMP EAX,EDX                         ; 004734d4
    JNZ 0x004734e9                      ; 004734d6
        ;   XREF to: 004734e9 (CONDITIONAL_JUMP)  ; LAB_004734e9
    MOV EAX,dword ptr [ESP + 0x80]      ; 004734d8
    CMP EAX,dword ptr [ESP + 0x50]      ; 004734df
    JZ 0x00473766                       ; 004734e3
        ;   XREF to: 00473766 (CONDITIONAL_JUMP)  ; LAB_00473766
    FLD float ptr [ESP + 0x28]          ; 004734e9
        ;   Label: LAB_004734e9
    FMUL ST0                            ; 004734ed
    FLD float ptr [ESP + 0x24]          ; 004734ef
    FMUL ST0                            ; 004734f3
    FADDP                               ; 004734f5
    FLD float ptr [ESP + 0x2c]          ; 004734f7
    FMUL ST0                            ; 004734fb
    FADDP                               ; 004734fd
    FSQRT                               ; 004734ff
    FST float ptr [ESP + 0x8]           ; 00473501
    FLDZ                                ; 00473505
    FCOMPP                              ; 00473507
    FNSTSW AX                           ; 00473509
    SAHF                                ; 0047350b
    JNC 0x0047377c                      ; 0047350c
        ;   XREF to: 0047377c (CONDITIONAL_JUMP)  ; LAB_0047377c
    FLD float ptr [ESP + 0x28]          ; 00473512
    FABS                                ; 00473516
    FLD float ptr [ESP + 0x2c]          ; 00473518
    FABS                                ; 0047351c
    FLD float ptr [ESP + 0x24]          ; 0047351e
    FLD ST0                             ; 00473522
    FABS                                ; 00473524
    FLD float ptr [0x005d1b57]          ; 00473526 | DAT_005d1b57
    FDIV float ptr [ESP + 0x8]          ; 0047352c
    FXCH                                ; 00473530
    FMUL ST1                            ; 00473532
    FXCH ST4                            ; 00473534
    FMUL ST1                            ; 00473536
    FXCH ST3                            ; 00473538
    FMULP                               ; 0047353a
    FXCH ST3                            ; 0047353c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047353e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x74]        ; 00473543
    FLDZ                                ; 00473547
    FXCH ST2                            ; 00473549
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047354b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00473550
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473552
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00473557
    FISTP dword ptr [ESP + 0x70]        ; 00473559
    FXCH ST2                            ; 0047355d
    FISTP dword ptr [ESP + 0x78]        ; 0047355f
    FCOMPP                              ; 00473563
    FNSTSW AX                           ; 00473565
    SAHF                                ; 00473567
    JA 0x00473785                       ; 00473568
        ;   XREF to: 00473785 (CONDITIONAL_JUMP)  ; LAB_00473785
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047356e
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00473572
    SUB EAX,ESI                         ; 00473576
    MOV ECX,0x1                         ; 00473578
    ADD EBX,EAX                         ; 0047357d
    LEA EAX,[ESI + ECX*0x1]             ; 0047357f
    MOV dword ptr [ESP + 0x98],EAX      ; 00473582
    FILD dword ptr [ESP + 0x98]         ; 00473589
    FSUB float ptr [ESP + 0x44]         ; 00473590
    MOV dword ptr [ESP + 0x68],ECX      ; 00473594
    FSTP float ptr [ESP + 0x5c]         ; 00473598
        ;   Label: LAB_00473598
    FLD float ptr [ESP + 0x28]          ; 0047359c
    FLDZ                                ; 004735a0
    FCOMPP                              ; 004735a2
    FNSTSW AX                           ; 004735a4
    SAHF                                ; 004735a6
    JA 0x004737b3                       ; 004735a7
        ;   XREF to: 004737b3 (CONDITIONAL_JUMP)  ; LAB_004737b3
    MOV EAX,dword ptr [ESP + 0x50]      ; 004735ad
    MOV ESI,dword ptr [ESP + 0x80]      ; 004735b1
    SUB EAX,ESI                         ; 004735b8
    MOV ECX,0x1                         ; 004735ba
    ADD EBX,EAX                         ; 004735bf
    LEA EAX,[ESI + ECX*0x1]             ; 004735c1
    MOV dword ptr [ESP + 0x98],EAX      ; 004735c4
    FILD dword ptr [ESP + 0x98]         ; 004735cb
    FSUB float ptr [ESP + 0x60]         ; 004735d2
    MOV dword ptr [ESP + 0x64],ECX      ; 004735d6
    FSTP float ptr [ESP + 0x40]         ; 004735da
        ;   Label: LAB_004735da
    FLD float ptr [ESP + 0x2c]          ; 004735de
    FLDZ                                ; 004735e2
    FCOMPP                              ; 004735e4
    FNSTSW AX                           ; 004735e6
    SAHF                                ; 004735e8
    JA 0x004737e7                       ; 004735e9
        ;   XREF to: 004737e7 (CONDITIONAL_JUMP)  ; LAB_004737e7
    MOV EAX,dword ptr [ESP + 0x54]      ; 004735ef
    MOV ESI,dword ptr [ESP + 0x84]      ; 004735f3
    SUB EAX,ESI                         ; 004735fa
    MOV ECX,0x1                         ; 004735fc
    ADD EBX,EAX                         ; 00473601
    LEA EAX,[ESI + ECX*0x1]             ; 00473603
    MOV dword ptr [ESP + 0x98],EAX      ; 00473606
    FILD dword ptr [ESP + 0x98]         ; 0047360d
    FSUB float ptr [ESP + 0x58]         ; 00473614
    MOV dword ptr [ESP + 0x6c],ECX      ; 00473618
    FSTP float ptr [ESP + 0x48]         ; 0047361c
        ;   Label: LAB_0047361c
    MOV EAX,dword ptr [ESP + 0x70]      ; 00473620
    MOV dword ptr [ESP + 0x98],EAX      ; 00473624
    FILD dword ptr [ESP + 0x98]         ; 0047362b
    FLD ST0                             ; 00473632
    FMUL float ptr [ESP + 0x5c]         ; 00473634
    MOV EAX,dword ptr [ESP + 0x74]      ; 00473638
    FXCH                                ; 0047363c
    FLD float ptr [ESP + 0x48]          ; 0047363e
    FXCH                                ; 00473642
    FMUL ST1                            ; 00473644
    MOV dword ptr [ESP + 0x98],EAX      ; 00473646
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047364d
    FILD dword ptr [ESP + 0x98]         ; 00473651
    MOV dword ptr [ESP + 0x98],EAX      ; 00473658
    FLD ST0                             ; 0047365f
    FMUL float ptr [ESP + 0x40]         ; 00473661
    FILD dword ptr [ESP + 0x98]         ; 00473665
    FLD ST0                             ; 0047366c
    FMUL float ptr [ESP + 0x5c]         ; 0047366e
    FXCH                                ; 00473672
    FMUL float ptr [ESP + 0x40]         ; 00473674
    FXCH ST2                            ; 00473678
    FSUBP ST6,ST0                       ; 0047367a
    FXCH ST2                            ; 0047367c
    FMULP ST4                           ; 0047367e
    FXCH ST4                            ; 00473680
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473682
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST4                            ; 00473687
    FSUBP ST2,ST0                       ; 00473689
    FXCH ST3                            ; 0047368b
    FISTP dword ptr [ESP + 0x88]        ; 0047368d
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473694
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473699
    FSUBP ST2,ST0                       ; 0047369b
    FISTP dword ptr [ESP + 0x8c]        ; 0047369d
    CALL crt_math.c_round_FUN_005b7ff0  ; 004736a4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x90]        ; 004736a9
    MOV EDI,dword ptr [ESP + 0x84]      ; 004736b0
        ;   Label: LAB_004736b0
    PUSH EDI                            ; 004736b7
    MOV EAX,dword ptr [ESP + 0x84]      ; 004736b8
    PUSH EAX                            ; 004736bf
    MOV EDX,dword ptr [ESP + 0x84]      ; 004736c0
    PUSH EDX                            ; 004736c7
    MOV ECX,dword ptr [EBP + 0x14]      ; 004736c8
    PUSH ECX                            ; 004736cb
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 004736cc
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 004736d1
    TEST EAX,EAX                        ; 004736d4
    JNZ 0x0047381b                      ; 004736d6
        ;   XREF to: 0047381b (CONDITIONAL_JUMP)  ; LAB_0047381b
    DEC EBX                             ; 004736dc
        ;   Label: LAB_004736dc
    TEST EBX,EBX                        ; 004736dd
    JLE 0x0047377c                      ; 004736df
        ;   XREF to: 0047377c (CONDITIONAL_JUMP)  ; LAB_0047377c
    MOV EAX,dword ptr [ESP + 0x84]      ; 004736e5
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004736ec
    MOV EDX,dword ptr [ESP + 0x8c]      ; 004736f0
    MOV EDI,dword ptr [ESP + 0x70]      ; 004736f7
    MOV ESI,dword ptr [ESP + 0x74]      ; 004736fb
    ADD EAX,ECX                         ; 004736ff
    ADD EDX,EDI                         ; 00473701
    MOV ECX,dword ptr [ESP + 0x90]      ; 00473703
    MOV EDI,dword ptr [ESP + 0x88]      ; 0047370a
    SUB ECX,ESI                         ; 00473711
    TEST EDI,EDI                        ; 00473713
    JL 0x00473872                       ; 00473715
        ;   XREF to: 00473872 (CONDITIONAL_JUMP)  ; LAB_00473872
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0047371b
    TEST ESI,ESI                        ; 00473722
    JL 0x0047387d                       ; 00473724
        ;   XREF to: 0047387d (CONDITIONAL_JUMP)  ; LAB_0047387d
    MOV EAX,dword ptr [ESP + 0x64]      ; 0047372a
    MOV EDI,dword ptr [ESP + 0x80]      ; 0047372e
    MOV EDX,dword ptr [ESP + 0x88]      ; 00473735
    ADD EDI,EAX                         ; 0047373c
    MOV EAX,dword ptr [ESP + 0x74]      ; 0047373e
    MOV ECX,ESI                         ; 00473742
    SUB EDX,EAX                         ; 00473744
    MOV EAX,dword ptr [ESP + 0x78]      ; 00473746
    MOV dword ptr [ESP + 0x80],EDI      ; 0047374a
    SUB ECX,EAX                         ; 00473751
    MOV dword ptr [ESP + 0x88],EDX      ; 00473753
    MOV dword ptr [ESP + 0x8c],ECX      ; 0047375a
    JMP 0x004736b0                      ; 00473761
        ;   XREF to: 004736b0 (UNCONDITIONAL_JUMP)  ; LAB_004736b0
    MOV EAX,dword ptr [ESP + 0x84]      ; 00473766
        ;   Label: LAB_00473766
    CMP EAX,dword ptr [ESP + 0x54]      ; 0047376d
    JNZ 0x004734e9                      ; 00473771
        ;   XREF to: 004734e9 (CONDITIONAL_JUMP)  ; LAB_004734e9
    JMP 0x004736b0                      ; 00473777
        ;   XREF to: 004736b0 (UNCONDITIONAL_JUMP)  ; LAB_004736b0
    XOR EAX,EAX                         ; 0047377c
        ;   Label: LAB_0047377c
    MOV ESP,EBP                         ; 0047377e
    POP EBP                             ; 00473780
    POP EDI                             ; 00473781
    POP ESI                             ; 00473782
    POP EBX                             ; 00473783
    RET                                 ; 00473784
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00473785
        ;   Label: LAB_00473785
    SUB EAX,dword ptr [ESP + 0x4c]      ; 00473789
    ADD EBX,EAX                         ; 0047378d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047378f
    MOV dword ptr [ESP + 0x98],EAX      ; 00473793
    MOV EDI,0xffffffff                  ; 0047379a
    FILD dword ptr [ESP + 0x98]         ; 0047379f
    FSUBR float ptr [ESP + 0x44]        ; 004737a6
    MOV dword ptr [ESP + 0x68],EDI      ; 004737aa
    JMP 0x00473598                      ; 004737ae
        ;   XREF to: 00473598 (UNCONDITIONAL_JUMP)  ; LAB_00473598
    MOV EAX,dword ptr [ESP + 0x80]      ; 004737b3
        ;   Label: LAB_004737b3
    SUB EAX,dword ptr [ESP + 0x50]      ; 004737ba
    ADD EBX,EAX                         ; 004737be
    MOV EAX,dword ptr [ESP + 0x80]      ; 004737c0
    MOV dword ptr [ESP + 0x98],EAX      ; 004737c7
    MOV EDI,0xffffffff                  ; 004737ce
    FILD dword ptr [ESP + 0x98]         ; 004737d3
    FSUBR float ptr [ESP + 0x60]        ; 004737da
    MOV dword ptr [ESP + 0x64],EDI      ; 004737de
    JMP 0x004735da                      ; 004737e2
        ;   XREF to: 004735da (UNCONDITIONAL_JUMP)  ; LAB_004735da
    MOV EAX,dword ptr [ESP + 0x84]      ; 004737e7
        ;   Label: LAB_004737e7
    SUB EAX,dword ptr [ESP + 0x54]      ; 004737ee
    ADD EBX,EAX                         ; 004737f2
    MOV EAX,dword ptr [ESP + 0x84]      ; 004737f4
    MOV dword ptr [ESP + 0x98],EAX      ; 004737fb
    MOV EDI,0xffffffff                  ; 00473802
    FILD dword ptr [ESP + 0x98]         ; 00473807
    FSUBR float ptr [ESP + 0x58]        ; 0047380e
    MOV dword ptr [ESP + 0x6c],EDI      ; 00473812
    JMP 0x0047361c                      ; 00473816
        ;   XREF to: 0047361c (UNCONDITIONAL_JUMP)  ; LAB_0047361c
    LEA EDX,[ESP + 0x38]                ; 0047381b
        ;   Label: LAB_0047381b
    PUSH EDX                            ; 0047381f
    LEA EDX,[ESP + 0x10]                ; 00473820
    PUSH EDX                            ; 00473824
    LEA EDX,[ESP + 0x2c]                ; 00473825
    PUSH EDX                            ; 00473829
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047382a
    PUSH ESI                            ; 0047382d
    PUSH EAX                            ; 0047382e
    CALL core_dcube.cpp_FUN_00446b60    ; 0047382f
        ;   XREF to: 00446b60 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00446b60()
    MOV dword ptr [ESP + 0xac],EAX      ; 00473834
    FLD float ptr [ESP + 0xac]          ; 0047383b
    ADD ESP,0x14                        ; 00473842
    FLDZ                                ; 00473845
    FXCH                                ; 00473847
    FSTP double ptr [ESP]               ; 00473849
    FCOMP double ptr [ESP]              ; 0047384c
    FNSTSW AX                           ; 0047384f
    SAHF                                ; 00473851
    JA 0x004736dc                       ; 00473852
        ;   XREF to: 004736dc (CONDITIONAL_JUMP)  ; LAB_004736dc
    FLD1                                ; 00473858
    FCOMP double ptr [ESP]              ; 0047385a
    FNSTSW AX                           ; 0047385d
    SAHF                                ; 0047385f
    JC 0x004736dc                       ; 00473860
        ;   XREF to: 004736dc (CONDITIONAL_JUMP)  ; LAB_004736dc
    MOV EAX,0x1                         ; 00473866
    MOV ESP,EBP                         ; 0047386b
    POP EBP                             ; 0047386d
    POP EDI                             ; 0047386e
    POP ESI                             ; 0047386f
    POP EBX                             ; 00473870
    RET                                 ; 00473871
    MOV ESI,dword ptr [ESP + 0x90]      ; 00473872
        ;   Label: LAB_00473872
    TEST ESI,ESI                        ; 00473879
    JL 0x00473897                       ; 0047387b
        ;   XREF to: 00473897 (CONDITIONAL_JUMP)  ; LAB_00473897
    MOV dword ptr [ESP + 0x90],ECX      ; 0047387d
        ;   Label: LAB_0047387d
    MOV dword ptr [ESP + 0x8c],EDX      ; 00473884
    MOV dword ptr [ESP + 0x84],EAX      ; 0047388b
    JMP 0x004736b0                      ; 00473892
        ;   XREF to: 004736b0 (UNCONDITIONAL_JUMP)  ; LAB_004736b0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00473897
        ;   Label: LAB_00473897
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0047389b
    MOV EDX,dword ptr [ESP + 0x88]      ; 0047389f
    ADD EDI,EAX                         ; 004738a6
    ADD EDX,dword ptr [ESP + 0x70]      ; 004738a8
    MOV EAX,dword ptr [ESP + 0x78]      ; 004738ac
    MOV dword ptr [ESP + 0x7c],EDI      ; 004738b0
    LEA ECX,[ESI + EAX*0x1]             ; 004738b4
    MOV dword ptr [ESP + 0x88],EDX      ; 004738b7
    MOV dword ptr [ESP + 0x90],ECX      ; 004738be
    JMP 0x004736b0                      ; 004738c5
        ;   XREF to: 004736b0 (UNCONDITIONAL_JUMP)  ; LAB_004736b0

