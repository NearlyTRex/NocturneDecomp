; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_CTVBat_process_FUN_0054b460(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x178]:8  local_178
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined        Stack[-0x128]:1  local_128
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_CVampireBoss_00596f65
;   TerminatedCString s_core_tvbat_cpp_00596f72
;   TerminatedCString s_CTVBat_process_can_t_fol_00596f84
;   float FLOAT_00596fbd = 4
;   double DOUBLE_00596fc5 = 4
;   double DOUBLE_00596fcd = 0.5
;   double DOUBLE_00596fd5 = 2
;   double DOUBLE_00596fdd = 0.333333333333333
;   double DOUBLE_00596fe5 = 35
;   double DOUBLE_00596fed = 10
;   double DOUBLE_00596ff5 = 60
;   double DOUBLE_00596ffd = 0.700000000000000
;   double DOUBLE_00597005 = -32
;   float FLOAT_0059700d = 2
;   float FLOAT_00597011 = 0.8000000
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;   crt_math.c_atan2_FUN_00566c81
;   FUN_004c8440
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b460
        ;   Label: core_tvbat.cpp_CTVBat_process_FUN_0054b460
    PUSH ESI                            ; 0054b461
    PUSH EDI                            ; 0054b462
    PUSH EBP                            ; 0054b463
    MOV EBP,ESP                         ; 0054b464
    SUB ESP,0x164                       ; 0054b466
    AND ESP,0xfffffff8                  ; 0054b46c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054b46f
    CMP dword ptr [EBX + 0xbecc],0x0    ; 0054b472
    JZ 0x0054b4c6                       ; 0054b479
        ;   XREF to: 0054b4c6 (CONDITIONAL_JUMP)  ; LAB_0054b4c6
    CMP dword ptr [EBX + 0xbf58],0x0    ; 0054b47b
    JNZ 0x0054b4c6                      ; 0054b482
        ;   XREF to: 0054b4c6 (CONDITIONAL_JUMP)  ; LAB_0054b4c6
    XOR ESI,ESI                         ; 0054b484
    XOR EDI,EDI                         ; 0054b486
    MOV EAX,[0x005be368]                ; 0054b488 | DAT_005be368
        ;   Label: LAB_0054b488
    CMP EDI,dword ptr [EAX + 0x150bf4]  ; 0054b48d | DAT_01fa7e78
    JGE 0x0054b4c6                      ; 0054b493
        ;   XREF to: 0054b4c6 (CONDITIONAL_JUMP)  ; LAB_0054b4c6
    PUSH 0x596f65                       ; 0054b495 | = "CVampireBoss"
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150bf8] ; 0054b49a
    PUSH ECX                            ; 0054b4a1
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0054b4a2
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 0054b4a7
    TEST EAX,EAX                        ; 0054b4aa
    JNZ 0x0054b4b4                      ; 0054b4ac
        ;   XREF to: 0054b4b4 (CONDITIONAL_JUMP)  ; LAB_0054b4b4
    INC EDI                             ; 0054b4ae
    ADD ESI,0x4                         ; 0054b4af
    JMP 0x0054b488                      ; 0054b4b2
        ;   XREF to: 0054b488 (UNCONDITIONAL_JUMP)  ; LAB_0054b488
    MOV EAX,[0x005be368]                ; 0054b4b4 | DAT_005be368
        ;   Label: LAB_0054b4b4
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x150bf8] ; 0054b4b9
    MOV dword ptr [EBX + 0xbf58],EAX    ; 0054b4c0
    CMP dword ptr [EBX + 0xbecc],0x0    ; 0054b4c6
        ;   Label: LAB_0054b4c6
    JZ 0x0054b508                       ; 0054b4cd
        ;   XREF to: 0054b508 (CONDITIONAL_JUMP)  ; LAB_0054b508
    MOV EDI,dword ptr [EBX + 0xbf58]    ; 0054b4cf
    TEST EDI,EDI                        ; 0054b4d5
    JZ 0x0054b508                       ; 0054b4d7
        ;   XREF to: 0054b508 (CONDITIONAL_JUMP)  ; LAB_0054b508
    LEA EAX,[EBX + 0xbeac]              ; 0054b4d9
    LEA ESI,[EDI + 0x20]                ; 0054b4df
    CMP EAX,ESI                         ; 0054b4e2
    JZ 0x0054b4f6                       ; 0054b4e4
        ;   XREF to: 0054b4f6 (CONDITIONAL_JUMP)  ; LAB_0054b4f6
    MOV EDX,dword ptr [ESI]             ; 0054b4e6
    MOV dword ptr [EAX],EDX             ; 0054b4e8
    MOV EDX,dword ptr [ESI + 0x4]       ; 0054b4ea
    MOV dword ptr [EAX + 0x4],EDX       ; 0054b4ed
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054b4f0
    MOV dword ptr [EAX + 0x8],EDX       ; 0054b4f3
    FLD float ptr [EBX + 0xbeb0]        ; 0054b4f6
        ;   Label: LAB_0054b4f6
    FADD float ptr [0x00596fbd]         ; 0054b4fc | FLOAT_00596fbd
    FSTP float ptr [EBX + 0xbeb0]       ; 0054b502
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 0054b508
        ;   Label: LAB_0054b508
    CMP EAX,0x2                         ; 0054b50e
    JZ 0x0054bb9c                       ; 0054b511
        ;   XREF to: 0054bb9c (CONDITIONAL_JUMP)  ; LAB_0054bb9c
    CMP EAX,0x3                         ; 0054b517
    JZ 0x0054bb9c                       ; 0054b51a
        ;   XREF to: 0054bb9c (CONDITIONAL_JUMP)  ; LAB_0054bb9c
    LEA ESI,[EBX + 0x20]                ; 0054b520
    LEA EDX,[EBX + 0x28]                ; 0054b523
    LEA EDI,[EBX + 0x24]                ; 0054b526
    CMP EAX,0x1                         ; 0054b529
    JZ 0x0054bba3                       ; 0054b52c
        ;   XREF to: 0054bba3 (CONDITIONAL_JUMP)  ; LAB_0054bba3
    MOV EAX,dword ptr [ESI]             ; 0054b532
    MOV dword ptr [ESP + 0xfc],EAX      ; 0054b534
    MOV EAX,dword ptr [EDI]             ; 0054b53b
    MOV dword ptr [ESP + 0x100],EAX     ; 0054b53d
    MOV EAX,dword ptr [EDX]             ; 0054b544
    MOV dword ptr [ESP + 0x104],EAX     ; 0054b546
    CMP dword ptr [EBX + 0xbecc],0x0    ; 0054b54d
    JZ 0x0054be48                       ; 0054b554
        ;   XREF to: 0054be48 (CONDITIONAL_JUMP)  ; LAB_0054be48
    MOV dword ptr [EBX + 0xbca4],0x0    ; 0054b55a
    LEA EAX,[ESP + 0x120]               ; 0054b564
        ;   Label: LAB_0054b564
    LEA ESI,[EBX + 0xbeac]              ; 0054b56b
    CMP EAX,ESI                         ; 0054b571
    JZ 0x0054b592                       ; 0054b573
        ;   XREF to: 0054b592 (CONDITIONAL_JUMP)  ; LAB_0054b592
    MOV EAX,dword ptr [ESI]             ; 0054b575
    MOV dword ptr [ESP + 0x120],EAX     ; 0054b577
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054b57e
    MOV dword ptr [ESP + 0x124],EAX     ; 0054b581
    MOV EAX,dword ptr [ESI + 0x8]       ; 0054b588
    MOV dword ptr [ESP + 0x128],EAX     ; 0054b58b
    LEA ESI,[EBX + 0xbeac]              ; 0054b592
        ;   Label: LAB_0054b592
    LEA EAX,[EBX + 0x20]                ; 0054b598
    FLD float ptr [ESI]                 ; 0054b59b
    FSUB float ptr [EAX]                ; 0054b59d
    FSTP float ptr [ESP + 0xc0]         ; 0054b59f
    FLD float ptr [ESI + 0x4]           ; 0054b5a6
    FSUB float ptr [EAX + 0x4]          ; 0054b5a9
    LEA EDX,[ESP + 0xf0]                ; 0054b5ac
    FSTP float ptr [ESP + 0xc4]         ; 0054b5b3
    FLD float ptr [ESI + 0x8]           ; 0054b5ba
    FSUB float ptr [EAX + 0x8]          ; 0054b5bd
    LEA EAX,[ESP + 0xc0]                ; 0054b5c0
    FSTP float ptr [ESP + 0xc8]         ; 0054b5c7
    CMP EDX,EAX                         ; 0054b5ce
    JZ 0x0054b5fc                       ; 0054b5d0
        ;   XREF to: 0054b5fc (CONDITIONAL_JUMP)  ; LAB_0054b5fc
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0054b5d2
    MOV dword ptr [ESP + 0xf0],EAX      ; 0054b5d9
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0054b5e0
    MOV dword ptr [ESP + 0xf4],EAX      ; 0054b5e7
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0054b5ee
    MOV dword ptr [ESP + 0xf8],EAX      ; 0054b5f5
    FLD float ptr [ESP + 0xf4]          ; 0054b5fc
        ;   Label: LAB_0054b5fc
    FMUL ST0                            ; 0054b603
    FLD float ptr [ESP + 0xf0]          ; 0054b605
    FMUL ST0                            ; 0054b60c
    FADDP                               ; 0054b60e
    FLD float ptr [ESP + 0xf8]          ; 0054b610
    FMUL ST0                            ; 0054b617
    FADDP                               ; 0054b619
    FSQRT                               ; 0054b61b
    FCOMP float ptr [EBX + 0xbeb8]      ; 0054b61d
    FNSTSW AX                           ; 0054b623
    SAHF                                ; 0054b625
    JC 0x0054bee2                       ; 0054b626
        ;   XREF to: 0054bee2 (CONDITIONAL_JUMP)  ; LAB_0054bee2
    LEA EAX,[ESP + 0x120]               ; 0054b62c
        ;   Label: LAB_0054b62c
    LEA ESI,[EBX + 0xbeac]              ; 0054b633
    CMP EAX,ESI                         ; 0054b639
    JZ 0x0054b65a                       ; 0054b63b
        ;   XREF to: 0054b65a (CONDITIONAL_JUMP)  ; LAB_0054b65a
    MOV EAX,dword ptr [ESI]             ; 0054b63d
    MOV dword ptr [ESP + 0x120],EAX     ; 0054b63f
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054b646
    MOV dword ptr [ESP + 0x124],EAX     ; 0054b649
    MOV EAX,dword ptr [ESI + 0x8]       ; 0054b650
    MOV dword ptr [ESP + 0x128],EAX     ; 0054b653
    FLD float ptr [EBX + 0xbed0]        ; 0054b65a
        ;   Label: LAB_0054b65a
    FLDZ                                ; 0054b660
    FCOMPP                              ; 0054b662
    FNSTSW AX                           ; 0054b664
    SAHF                                ; 0054b666
    JNC 0x0054b725                      ; 0054b667
        ;   XREF to: 0054b725 (CONDITIONAL_JUMP)  ; LAB_0054b725
    FLD float ptr [EBX + 0xbed0]        ; 0054b66d
    FSUB float ptr [EBP + 0x18]         ; 0054b673
    FST float ptr [EBX + 0xbed0]        ; 0054b676
    FLDZ                                ; 0054b67c
    FCOMPP                              ; 0054b67e
    FNSTSW AX                           ; 0054b680
    SAHF                                ; 0054b682
    JBE 0x0054b68f                      ; 0054b683
        ;   XREF to: 0054b68f (CONDITIONAL_JUMP)  ; LAB_0054b68f
    MOV dword ptr [EBX + 0xbed0],0x0    ; 0054b685
    MOV EAX,[0x005bdee0]                ; 0054b68f | DAT_005bdee0
        ;   Label: LAB_0054b68f
    CMP dword ptr [EAX],0x0             ; 0054b694 | DAT_01cea280
    JZ 0x0054b6bc                       ; 0054b697
        ;   XREF to: 0054b6bc (CONDITIONAL_JUMP)  ; LAB_0054b6bc
    MOV ECX,0x596f72                    ; 0054b699 | = "..\\core\\tvbat.cpp"
    MOV ESI,0x10a                       ; 0054b69e
    PUSH 0x596f84                       ; 0054b6a3 | = "CTVBat::process - can't follow orders..."
    MOV dword ptr [0x01cc4800],ECX      ; 0054b6a8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0054b6ae | DAT_01cc4804
    CALL FUN_004c8440                   ; 0054b6b4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0054b6b9
    MOV EAX,[0x01cae0e8]                ; 0054b6bc | DAT_01cae0e8
        ;   Label: LAB_0054b6bc
    MOV ESI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054b6c1
    LEA EAX,[ESP + 0x120]               ; 0054b6c8
    ADD ESI,0x20                        ; 0054b6cf
    CMP EAX,ESI                         ; 0054b6d2
    JZ 0x0054b6f3                       ; 0054b6d4
        ;   XREF to: 0054b6f3 (CONDITIONAL_JUMP)  ; LAB_0054b6f3
    MOV EAX,dword ptr [ESI]             ; 0054b6d6
    MOV dword ptr [ESP + 0x120],EAX     ; 0054b6d8
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054b6df
    MOV dword ptr [ESP + 0x124],EAX     ; 0054b6e2
    MOV EAX,dword ptr [ESI + 0x8]       ; 0054b6e9
    MOV dword ptr [ESP + 0x128],EAX     ; 0054b6ec
    FLD float ptr [EBX + 0xbec8]        ; 0054b6f3
        ;   Label: LAB_0054b6f3
    FADD double ptr [0x00596fc5]        ; 0054b6f9 | DOUBLE_00596fc5
    MOV EAX,[0x01cae0e8]                ; 0054b6ff | DAT_01cae0e8
    FLD float ptr [ESP + 0x124]         ; 0054b704
    FXCH                                ; 0054b70b
    FADD ST0,ST1                        ; 0054b70d
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054b70f
    FSTP ST1                            ; 0054b716
    FSTP float ptr [ESP + 0x124]        ; 0054b718
    MOV dword ptr [EBX + 0xbca4],EAX    ; 0054b71f
    FLD float ptr [ESP + 0x120]         ; 0054b725
        ;   Label: LAB_0054b725
    LEA EAX,[EBX + 0x20]                ; 0054b72c
    FLD float ptr [ESP + 0x124]         ; 0054b72f
    FXCH                                ; 0054b736
    FSUB float ptr [EAX]                ; 0054b738
    FLD float ptr [ESP + 0x128]         ; 0054b73a
    FXCH                                ; 0054b741
    FSTP float ptr [ESP + 0x108]        ; 0054b743
    FXCH                                ; 0054b74a
    FSUB float ptr [EAX + 0x4]          ; 0054b74c
    LEA EDX,[ESP + 0x108]               ; 0054b74f
    FSTP float ptr [ESP + 0x10c]        ; 0054b756
    FSUB float ptr [EAX + 0x8]          ; 0054b75d
    LEA EAX,[ESP + 0xf0]                ; 0054b760
    FSTP float ptr [ESP + 0x110]        ; 0054b767
    CMP EAX,EDX                         ; 0054b76e
    JZ 0x0054b79c                       ; 0054b770
        ;   XREF to: 0054b79c (CONDITIONAL_JUMP)  ; LAB_0054b79c
    MOV EAX,dword ptr [ESP + 0x108]     ; 0054b772
    MOV dword ptr [ESP + 0xf0],EAX      ; 0054b779
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0054b780
    MOV dword ptr [ESP + 0xf4],EAX      ; 0054b787
    MOV EAX,dword ptr [ESP + 0x110]     ; 0054b78e
    MOV dword ptr [ESP + 0xf8],EAX      ; 0054b795
    FLD float ptr [ESP + 0xf8]          ; 0054b79c
        ;   Label: LAB_0054b79c
    FLD float ptr [ESP + 0xf0]          ; 0054b7a3
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054b7aa
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FLD float ptr [ESP + 0xf8]          ; 0054b7af
    FMUL ST0                            ; 0054b7b6
    FLD float ptr [ESP + 0xf0]          ; 0054b7b8
    FMUL ST0                            ; 0054b7bf
    FADDP                               ; 0054b7c1
    FSQRT                               ; 0054b7c3
    FLD float ptr [ESP + 0xf4]          ; 0054b7c5
    FXCH                                ; 0054b7cc
    FST float ptr [ESP + 0x8]           ; 0054b7ce
    FXCH                                ; 0054b7d2
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054b7d4
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 0054b7d9
    FXCH                                ; 0054b7df
    FSTP float ptr [ESP + 0x15c]        ; 0054b7e1
    FCHS                                ; 0054b7e8
    FSTP float ptr [ESP + 0x158]        ; 0054b7ea
    TEST EDI,EDI                        ; 0054b7f1
    JZ 0x0054b928                       ; 0054b7f3
        ;   XREF to: 0054b928 (CONDITIONAL_JUMP)  ; LAB_0054b928
    CMP dword ptr [EBX + 0xbecc],0x0    ; 0054b7f9
    JZ 0x0054b928                       ; 0054b800
        ;   XREF to: 0054b928 (CONDITIONAL_JUMP)  ; LAB_0054b928
    LEA EAX,[ESP + 0x50]                ; 0054b806
    PUSH EAX                            ; 0054b80a
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0054b80b
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990()
    ADD ESP,0x4                         ; 0054b810
    LEA ESI,[ESP + 0x50]                ; 0054b813
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0054b817
    PUSH ESI                            ; 0054b81d
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0054b81e
    PUSH EAX                            ; 0054b824
    CALL dword ptr [EDX + 0x34]         ; 0054b825
    LEA EAX,[EBX + 0x20]                ; 0054b828
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 0054b82b
    FLD float ptr [EAX]                 ; 0054b831
    FSUB float ptr [ESI + 0x20]         ; 0054b833
    ADD ESP,0x8                         ; 0054b836
    FSTP float ptr [ESP + 0x90]         ; 0054b839
    FLD float ptr [EAX + 0x4]           ; 0054b840
    FSUB float ptr [ESI + 0x24]         ; 0054b843
    LEA EDX,[ESP + 0xf0]                ; 0054b846
    FSTP float ptr [ESP + 0x94]         ; 0054b84d
    FLD float ptr [EAX + 0x8]           ; 0054b854
    FSUB float ptr [ESI + 0x28]         ; 0054b857
    LEA EAX,[ESP + 0x90]                ; 0054b85a
    FSTP float ptr [ESP + 0x98]         ; 0054b861
    CMP EDX,EAX                         ; 0054b868
    JZ 0x0054b896                       ; 0054b86a
        ;   XREF to: 0054b896 (CONDITIONAL_JUMP)  ; LAB_0054b896
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054b86c
    MOV dword ptr [ESP + 0xf0],EAX      ; 0054b873
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b87a
    MOV dword ptr [ESP + 0xf4],EAX      ; 0054b881
    MOV EAX,dword ptr [ESP + 0x98]      ; 0054b888
    MOV dword ptr [ESP + 0xf8],EAX      ; 0054b88f
    FLD float ptr [ESP + 0xf4]          ; 0054b896
        ;   Label: LAB_0054b896
    FCOMP float ptr [ESP + 0x64]        ; 0054b89d
    FNSTSW AX                           ; 0054b8a1
    SAHF                                ; 0054b8a3
    JC 0x0054b928                       ; 0054b8a4
        ;   XREF to: 0054b928 (CONDITIONAL_JUMP)  ; LAB_0054b928
    FLD float ptr [ESP + 0xf4]          ; 0054b8aa
    FCOMP float ptr [ESP + 0x68]        ; 0054b8b1
    FNSTSW AX                           ; 0054b8b5
    SAHF                                ; 0054b8b7
    JA 0x0054b928                       ; 0054b8b8
        ;   XREF to: 0054b928 (CONDITIONAL_JUMP)  ; LAB_0054b928
    FLD float ptr [ESP + 0x8]           ; 0054b8ba
    FCOMP double ptr [0x00596fd5]       ; 0054b8be | DOUBLE_00596fd5
    FNSTSW AX                           ; 0054b8c4
    SAHF                                ; 0054b8c6
    JNC 0x0054b928                      ; 0054b8c7
        ;   XREF to: 0054b928 (CONDITIONAL_JUMP)  ; LAB_0054b928
    LEA EAX,[ESP + 0x14]                ; 0054b8c9
    PUSH EAX                            ; 0054b8cd
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0054b8ce
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EDX,0x3f800000                  ; 0054b8d3
    ADD ESP,0x4                         ; 0054b8d8
    LEA ESI,[ESP + 0x14]                ; 0054b8db
    MOV dword ptr [ESP + 0x18],EDX      ; 0054b8df
    MOV dword ptr [ESP + 0x48],EBX      ; 0054b8e3
    MOV dword ptr [ESP + 0x4c],EBX      ; 0054b8e7
    PUSH ESI                            ; 0054b8eb
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0054b8ec
    PUSH EAX                            ; 0054b8f2
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0054b8f3
    CALL dword ptr [EDX + 0x100]        ; 0054b8f9
    ADD ESP,0x8                         ; 0054b8ff
    FLD float ptr [ESP + 0x18]          ; 0054b902
    FLDZ                                ; 0054b906
    FCOMPP                              ; 0054b908
    FNSTSW AX                           ; 0054b90a
    SAHF                                ; 0054b90c
    JNC 0x0054b928                      ; 0054b90d
        ;   XREF to: 0054b928 (CONDITIONAL_JUMP)  ; LAB_0054b928
    PUSH 0x0                            ; 0054b90f
    PUSH 0x3                            ; 0054b911
    PUSH 0x0                            ; 0054b913
    LEA EAX,[EBX + 0x20]                ; 0054b915
    PUSH EAX                            ; 0054b918
    MOV ECX,dword ptr [0x005b96c4]      ; 0054b919 | DAT_005b96c4
    PUSH ECX                            ; 0054b91f
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 0054b920
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    ADD ESP,0x14                        ; 0054b925
    FLD float ptr [EBX + 0x30]          ; 0054b928
        ;   Label: LAB_0054b928
    FLD ST0                             ; 0054b92b
    FSIN                                ; 0054b92d
    FLD float ptr [EBX + 0x34]          ; 0054b92f
    FLD ST0                             ; 0054b932
    FSIN                                ; 0054b934
    FXCH ST3                            ; 0054b936
    FCOS                                ; 0054b938
    FXCH                                ; 0054b93a
    FCOS                                ; 0054b93c
    FXCH ST3                            ; 0054b93e
    FMUL ST1                            ; 0054b940
    FXCH ST3                            ; 0054b942
    FMULP                               ; 0054b944
    FLD float ptr [ESP + 0x15c]         ; 0054b946
    FSUB float ptr [EBX + 0x34]         ; 0054b94d
    FXCH ST2                            ; 0054b950
    FCHS                                ; 0054b952
    FSTP float ptr [ESP + 0x148]        ; 0054b954
    FXCH ST2                            ; 0054b95b
    FSTP float ptr [ESP + 0x144]        ; 0054b95d
    FXCH                                ; 0054b964
    FSTP float ptr [ESP + 0x13c]        ; 0054b966
    SUB ESP,0x4                         ; 0054b96d
    FSTP float ptr [ESP]                ; 0054b970
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054b973
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x164],EAX     ; 0054b978
    FLD float ptr [ESP + 0x164]         ; 0054b97f
    ADD ESP,0x4                         ; 0054b986
    FST float ptr [ESP + 0x15c]         ; 0054b989
    FMUL float ptr [EBP + 0x18]         ; 0054b990
    FMUL float ptr [EBX + 0xbec0]       ; 0054b993
    FLD float ptr [ESP + 0x158]         ; 0054b999
    FSUB float ptr [EBX + 0x30]         ; 0054b9a0
    FXCH                                ; 0054b9a3
    FADD float ptr [EBX + 0x34]         ; 0054b9a5
    SUB ESP,0x4                         ; 0054b9a8
    FSTP float ptr [EBX + 0x34]         ; 0054b9ab
    FSTP float ptr [ESP]                ; 0054b9ae
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054b9b1
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x164],EAX     ; 0054b9b6
    FLD float ptr [ESP + 0x164]         ; 0054b9bd
    ADD ESP,0x4                         ; 0054b9c4
    FLD float ptr [EBX + 0xbec4]        ; 0054b9c7
    FMUL float ptr [ESP + 0x144]        ; 0054b9cd
    FLD float ptr [EBX + 0xbec4]        ; 0054b9d4
    FMUL float ptr [ESP + 0x148]        ; 0054b9da
    FLD float ptr [ESP + 0x144]         ; 0054b9e1
    FMUL float ptr [EBX + 0xbec4]       ; 0054b9e8
    FLD float ptr [ESP + 0x148]         ; 0054b9ee
    FMUL float ptr [EBX + 0xbec4]       ; 0054b9f5
    FLD float ptr [ESP + 0x13c]         ; 0054b9fb
    FMUL float ptr [EBX + 0xbec4]       ; 0054ba02
    FXCH ST5                            ; 0054ba08
    FST float ptr [ESP + 0x158]         ; 0054ba0a
    FMUL float ptr [EBP + 0x18]         ; 0054ba11
    FLD float ptr [ESP + 0x15c]         ; 0054ba14
    FCHS                                ; 0054ba1b
    FMUL double ptr [0x00596fdd]        ; 0054ba1d | DOUBLE_00596fdd
    FXCH ST3                            ; 0054ba23
    FMUL float ptr [EBP + 0x18]         ; 0054ba25
    FXCH ST2                            ; 0054ba28
    FMUL float ptr [EBP + 0x18]         ; 0054ba2a
    FXCH ST6                            ; 0054ba2d
    FMUL float ptr [EBP + 0x18]         ; 0054ba2f
    FXCH                                ; 0054ba32
    FMUL float ptr [EBX + 0xbec0]       ; 0054ba34
    FXCH ST5                            ; 0054ba3a
    FSTP float ptr [EBX + 0xbed4]       ; 0054ba3c
    FLD float ptr [EBX + 0xbec4]        ; 0054ba42
    FMUL float ptr [ESP + 0x13c]        ; 0054ba48
    LEA EAX,[EBX + 0x20]                ; 0054ba4f
    FXCH ST4                            ; 0054ba52
    FSTP float ptr [EBX + 0xbed8]       ; 0054ba54
    FXCH ST3                            ; 0054ba5a
    FSTP float ptr [EBX + 0xbedc]       ; 0054ba5c
    FXCH                                ; 0054ba62
    FSTP float ptr [EBX + 0x38]         ; 0054ba64
    FADD float ptr [EBX + 0x20]         ; 0054ba67
    FXCH ST3                            ; 0054ba6a
    FADD float ptr [EBX + 0x24]         ; 0054ba6c
    FXCH                                ; 0054ba6f
    FADD float ptr [EBX + 0x28]         ; 0054ba71
    FXCH ST2                            ; 0054ba74
    FADD float ptr [EBX + 0x30]         ; 0054ba76
    FXCH ST3                            ; 0054ba79
    FSTP float ptr [EBX + 0x20]         ; 0054ba7b
    FSTP float ptr [EBX + 0x24]         ; 0054ba7e
    FSTP float ptr [EBX + 0x28]         ; 0054ba81
    FSTP float ptr [EBX + 0x30]         ; 0054ba84
    FLD float ptr [EAX]                 ; 0054ba87
    FSUB float ptr [ESP + 0xfc]         ; 0054ba89
    FSTP float ptr [ESP + 0xb4]         ; 0054ba90
    FLD float ptr [EAX + 0x4]           ; 0054ba97
    FSUB float ptr [ESP + 0x100]        ; 0054ba9a
    FST float ptr [ESP + 0xb8]          ; 0054baa1
    FMUL double ptr [0x00596fc5]        ; 0054baa8 | DOUBLE_00596fc5
    FDIV float ptr [EBP + 0x18]         ; 0054baae
    FLD float ptr [EAX + 0x8]           ; 0054bab1
    FSUB float ptr [ESP + 0x104]        ; 0054bab4
    FXCH                                ; 0054babb
    FADD double ptr [0x00596fe5]        ; 0054babd | DOUBLE_00596fe5
    FXCH                                ; 0054bac3
    FSTP float ptr [ESP + 0xbc]         ; 0054bac5
    FST float ptr [ESP + 0x10]          ; 0054bacc
    FCOMP double ptr [0x00596fed]       ; 0054bad0 | DOUBLE_00596fed
    FNSTSW AX                           ; 0054bad6
    SAHF                                ; 0054bad8
    JNC 0x0054bae3                      ; 0054bad9
        ;   XREF to: 0054bae3 (CONDITIONAL_JUMP)  ; LAB_0054bae3
    MOV dword ptr [ESP + 0x10],0x41200000 ; 0054badb
    FLD float ptr [ESP + 0x10]          ; 0054bae3
        ;   Label: LAB_0054bae3
    FCOMP double ptr [0x00596ff5]       ; 0054bae7 | DOUBLE_00596ff5
    FNSTSW AX                           ; 0054baed
    SAHF                                ; 0054baef
    JBE 0x0054bafa                      ; 0054baf0
        ;   XREF to: 0054bafa (CONDITIONAL_JUMP)  ; LAB_0054bafa
    MOV dword ptr [ESP + 0x10],0x42700000 ; 0054baf2
    FLD float ptr [ESP + 0x10]          ; 0054bafa
        ;   Label: LAB_0054bafa
    FSUB float ptr [EBX + 0xbea8]       ; 0054bafe
    FMUL double ptr [0x00596ffd]        ; 0054bb04 | DOUBLE_00596ffd
    FLD float ptr [EBX + 0xbea8]        ; 0054bb0a
    FXCH                                ; 0054bb10
    FADD ST0,ST1                        ; 0054bb12
    FLD float ptr [EBP + 0x18]          ; 0054bb14
    FXCH                                ; 0054bb17
    FSTP ST2                            ; 0054bb19
    FXCH                                ; 0054bb1b
    FSTP float ptr [EBX + 0xbea8]       ; 0054bb1d
    FMUL float ptr [EBX + 0xbea8]       ; 0054bb23
    FMUL float ptr [EBX + 0xbea4]       ; 0054bb29
    LEA EAX,[EBX + 0xbd28]              ; 0054bb2f
    FADD float ptr [EBX + 0xbd24]       ; 0054bb35
    PUSH EAX                            ; 0054bb3b
    FSTP float ptr [EBX + 0xbd24]       ; 0054bb3c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0054bb42
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 0054bb47
    MOV EDX,dword ptr [EAX + 0x100]     ; 0054bb4a
    MOV dword ptr [ESP + 0x160],EDX     ; 0054bb50
    FILD dword ptr [ESP + 0x160]        ; 0054bb57
    FCOMP float ptr [EBX + 0xbd24]      ; 0054bb5e
    FNSTSW AX                           ; 0054bb64
    SAHF                                ; 0054bb66
    JA 0x0054bf01                       ; 0054bb67
        ;   XREF to: 0054bf01 (CONDITIONAL_JUMP)  ; LAB_0054bf01
    MOV dword ptr [EBX + 0xbd24],0x0    ; 0054bb6d
    CMP byte ptr [EBX + 0xbee4],0x0     ; 0054bb77
        ;   Label: LAB_0054bb77
    JZ 0x0054bb9c                       ; 0054bb7e
        ;   XREF to: 0054bb9c (CONDITIONAL_JUMP)  ; LAB_0054bb9c
    FLD float ptr [EBX + 0xbf54]        ; 0054bb80
    FSUB float ptr [EBP + 0x18]         ; 0054bb86
    FST float ptr [EBX + 0xbf54]        ; 0054bb89
    FLDZ                                ; 0054bb8f
    FCOMPP                              ; 0054bb91
    FNSTSW AX                           ; 0054bb93
    SAHF                                ; 0054bb95
    JNC 0x0054bf2c                      ; 0054bb96
        ;   XREF to: 0054bf2c (CONDITIONAL_JUMP)  ; LAB_0054bf2c
    MOV ESP,EBP                         ; 0054bb9c
        ;   Label: LAB_0054bb9c
    POP EBP                             ; 0054bb9e
    POP EDI                             ; 0054bb9f
    POP ESI                             ; 0054bba0
    POP EBX                             ; 0054bba1
    RET                                 ; 0054bba2
    MOV EAX,dword ptr [ESI]             ; 0054bba3
        ;   Label: LAB_0054bba3
    FLD float ptr [EBP + 0x18]          ; 0054bba5
    FLD ST0                             ; 0054bba8
    MOV dword ptr [ESP + 0x9c],EAX      ; 0054bbaa
    FMUL double ptr [0x00597005]        ; 0054bbb1 | DOUBLE_00597005
    MOV EAX,dword ptr [EDI]             ; 0054bbb7
    MOV dword ptr [ESP + 0xa0],EAX      ; 0054bbb9
    MOV EAX,dword ptr [EDX]             ; 0054bbc0
    MOV dword ptr [ESP + 0xa4],EAX      ; 0054bbc2
    FLD float ptr [EBX + 0xbed8]        ; 0054bbc9
    FXCH                                ; 0054bbcf
    FADD ST0,ST1                        ; 0054bbd1
    LEA EDI,[EBX + 0xbed4]              ; 0054bbd3
    FSTP ST1                            ; 0054bbd9
    FSTP float ptr [EBX + 0xbed8]       ; 0054bbdb
    FLD float ptr [EDI]                 ; 0054bbe1
    FMUL ST1                            ; 0054bbe3
    FSTP float ptr [ESP + 0xe4]         ; 0054bbe5
    FLD float ptr [EDI + 0x4]           ; 0054bbec
    FMUL ST1                            ; 0054bbef
    FSTP float ptr [ESP + 0xe8]         ; 0054bbf1
    FLD float ptr [EDI + 0x8]           ; 0054bbf8
    FMUL ST1                            ; 0054bbfb
    PUSH 0x0                            ; 0054bbfd
    FSTP float ptr [ESP + 0xf0]         ; 0054bbff
    FLD float ptr [ESI]                 ; 0054bc06
    FADD float ptr [ESP + 0xe8]         ; 0054bc08
    FLD float ptr [ESI + 0x4]           ; 0054bc0f
    FXCH                                ; 0054bc12
    FSTP float ptr [ESI]                ; 0054bc14
    FADD float ptr [ESP + 0xec]         ; 0054bc16
    FLD float ptr [ESI + 0x8]           ; 0054bc1d
    FXCH                                ; 0054bc20
    FSTP float ptr [ESI + 0x4]          ; 0054bc22
    FADD float ptr [ESP + 0xf0]         ; 0054bc25
    LEA EAX,[ESP + 0xdc]                ; 0054bc2c
    FSTP float ptr [ESI + 0x8]          ; 0054bc33
    FMUL float ptr [EBX + 0xbec0]       ; 0054bc36
    PUSH EAX                            ; 0054bc3c
    LEA EAX,[ESP + 0xa4]                ; 0054bc3d
    PUSH ESI                            ; 0054bc44
    FMUL float ptr [0x0059700d]         ; 0054bc45 | FLOAT_0059700d
    PUSH EAX                            ; 0054bc4b
    FADD float ptr [EBX + 0x38]         ; 0054bc4c
    PUSH 0x1fba938                      ; 0054bc4f | DAT_01fba938
    FSTP float ptr [EBX + 0x38]         ; 0054bc54
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00 ; 0054bc57
        ;   XREF to: 00467a00 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00()
    MOV dword ptr [ESP + 0x174],EAX     ; 0054bc5c
    FLD float ptr [ESP + 0x174]         ; 0054bc63
    ADD ESP,0x14                        ; 0054bc6a
    FLDZ                                ; 0054bc6d
    FXCH                                ; 0054bc6f
    FST float ptr [ESP + 0xc]           ; 0054bc71
    FSTP double ptr [ESP]               ; 0054bc75
    FCOMP double ptr [ESP]              ; 0054bc78
    FNSTSW AX                           ; 0054bc7b
    SAHF                                ; 0054bc7d
    JA 0x0054bd90                       ; 0054bc7e
        ;   XREF to: 0054bd90 (CONDITIONAL_JUMP)  ; LAB_0054bd90
    FLD1                                ; 0054bc84
    FCOMP double ptr [ESP]              ; 0054bc86
    FNSTSW AX                           ; 0054bc89
    SAHF                                ; 0054bc8b
    JBE 0x0054bd90                      ; 0054bc8c
        ;   XREF to: 0054bd90 (CONDITIONAL_JUMP)  ; LAB_0054bd90
    FLD float ptr [ESI]                 ; 0054bc92
    FSUB float ptr [ESP + 0x9c]         ; 0054bc94
    FST float ptr [ESP + 0x78]          ; 0054bc9b
    FLD float ptr [ESI + 0x4]           ; 0054bc9f
    FSUB float ptr [ESP + 0xa0]         ; 0054bca2
    FXCH                                ; 0054bca9
    FLD float ptr [ESP + 0xc]           ; 0054bcab
    FXCH                                ; 0054bcaf
    FMUL ST1                            ; 0054bcb1
    FXCH ST2                            ; 0054bcb3
    FST float ptr [ESP + 0x7c]          ; 0054bcb5
    FMUL ST1                            ; 0054bcb9
    FLD float ptr [ESI + 0x8]           ; 0054bcbb
    FXCH ST3                            ; 0054bcbe
    FST float ptr [ESP + 0xcc]          ; 0054bcc0
    FXCH ST3                            ; 0054bcc7
    FSUB float ptr [ESP + 0xa4]         ; 0054bcc9
    FXCH ST3                            ; 0054bcd0
    FLD float ptr [0x00597011]          ; 0054bcd2 | FLOAT_00597011
    FXCH                                ; 0054bcd8
    FMUL ST1                            ; 0054bcda
    FXCH ST4                            ; 0054bcdc
    FST float ptr [ESP + 0x80]          ; 0054bcde
    FMULP ST3                           ; 0054bce5
    FXCH                                ; 0054bce7
    FST float ptr [ESP + 0xd0]          ; 0054bce9
    FMUL ST1                            ; 0054bcf0
    FXCH ST2                            ; 0054bcf2
    FST float ptr [ESP + 0xd4]          ; 0054bcf4
    FMULP                               ; 0054bcfb
    FLD float ptr [ESP + 0x9c]          ; 0054bcfd
    FLD float ptr [ESP + 0xa0]          ; 0054bd04
    FLD float ptr [ESP + 0xa4]          ; 0054bd0b
    FXCH ST5                            ; 0054bd12
    FSTP float ptr [ESP + 0x84]         ; 0054bd14
    FXCH                                ; 0054bd1b
    FADD float ptr [ESP + 0x84]         ; 0054bd1d
    FXCH ST3                            ; 0054bd24
    FSTP float ptr [ESP + 0x88]         ; 0054bd26
    FXCH ST2                            ; 0054bd2d
    FSTP float ptr [ESP + 0x114]        ; 0054bd2f
    MOV EAX,dword ptr [ESP + 0x114]     ; 0054bd36
    FXCH                                ; 0054bd3d
    FADD float ptr [ESP + 0x88]         ; 0054bd3f
    FXCH                                ; 0054bd46
    FSTP float ptr [ESP + 0x8c]         ; 0054bd48
    FXCH                                ; 0054bd4f
    FADD float ptr [ESP + 0x8c]         ; 0054bd51
    FXCH                                ; 0054bd58
    FSTP float ptr [ESP + 0x118]        ; 0054bd5a
    FSTP float ptr [ESP + 0x11c]        ; 0054bd61
    MOV dword ptr [ESI],EAX             ; 0054bd68
    MOV EAX,dword ptr [ESP + 0x118]     ; 0054bd6a
    MOV dword ptr [ESI + 0x4],EAX       ; 0054bd71
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0054bd74
    MOV dword ptr [ESI + 0x8],EAX       ; 0054bd7b
    MOV dword ptr [EDI + 0x8],0x0       ; 0054bd7e
    MOV EAX,dword ptr [EDI + 0x8]       ; 0054bd85
    MOV dword ptr [EDI + 0x4],EAX       ; 0054bd88
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054bd8b
    MOV dword ptr [EDI],EAX             ; 0054bd8e
    FLD float ptr [ESP + 0x9c]          ; 0054bd90
        ;   Label: LAB_0054bd90
    LEA EAX,[EBX + 0x20]                ; 0054bd97
    FLD float ptr [ESP + 0xa0]          ; 0054bd9a
    FXCH                                ; 0054bda1
    FSUB float ptr [EAX]                ; 0054bda3
    FLD float ptr [ESP + 0xa4]          ; 0054bda5
    FXCH                                ; 0054bdac
    FSTP float ptr [ESP + 0xa8]         ; 0054bdae
    FXCH                                ; 0054bdb5
    FSUB float ptr [EAX + 0x4]          ; 0054bdb7
    LEA EDX,[ESP + 0xf0]                ; 0054bdba
    FSTP float ptr [ESP + 0xac]         ; 0054bdc1
    FSUB float ptr [EAX + 0x8]          ; 0054bdc8
    LEA EAX,[ESP + 0xa8]                ; 0054bdcb
    FSTP float ptr [ESP + 0xb0]         ; 0054bdd2
    CMP EDX,EAX                         ; 0054bdd9
    JZ 0x0054be07                       ; 0054bddb
        ;   XREF to: 0054be07 (CONDITIONAL_JUMP)  ; LAB_0054be07
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0054bddd
    MOV dword ptr [ESP + 0xf0],EAX      ; 0054bde4
    MOV EAX,dword ptr [ESP + 0xac]      ; 0054bdeb
    MOV dword ptr [ESP + 0xf4],EAX      ; 0054bdf2
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0054bdf9
    MOV dword ptr [ESP + 0xf8],EAX      ; 0054be00
    FLD float ptr [ESP + 0xf4]          ; 0054be07
        ;   Label: LAB_0054be07
    FMUL ST0                            ; 0054be0e
    FLD float ptr [ESP + 0xf0]          ; 0054be10
    FMUL ST0                            ; 0054be17
    FADDP                               ; 0054be19
    FLD float ptr [ESP + 0xf8]          ; 0054be1b
    FMUL ST0                            ; 0054be22
    FADDP                               ; 0054be24
    FSQRT                               ; 0054be26
    FCOMP double ptr [0x00597015]       ; 0054be28 | DOUBLE_00597015
    FNSTSW AX                           ; 0054be2e
    SAHF                                ; 0054be30
    JNC 0x0054bb9c                      ; 0054be31
        ;   XREF to: 0054bb9c (CONDITIONAL_JUMP)  ; LAB_0054bb9c
    MOV dword ptr [EBX + 0xbee0],0x2    ; 0054be37
    MOV ESP,EBP                         ; 0054be41
    POP EBP                             ; 0054be43
    POP EDI                             ; 0054be44
    POP ESI                             ; 0054be45
    POP EBX                             ; 0054be46
    RET                                 ; 0054be47
    MOV EAX,[0x01cae0e8]                ; 0054be48 | DAT_01cae0e8
        ;   Label: LAB_0054be48
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054be4d
    MOV dword ptr [EBX + 0xbca4],EAX    ; 0054be54
    TEST EAX,EAX                        ; 0054be5a
    JZ 0x0054b564                       ; 0054be5c
        ;   XREF to: 0054b564 (CONDITIONAL_JUMP)  ; LAB_0054b564
    LEA ESI,[EAX + 0x20]                ; 0054be62
    LEA EAX,[ESP + 0x120]               ; 0054be65
    CMP EAX,ESI                         ; 0054be6c
    JNZ 0x0054bec3                      ; 0054be6e
        ;   XREF to: 0054bec3 (CONDITIONAL_JUMP)  ; LAB_0054bec3
    FLD float ptr [EBX + 0xbec8]        ; 0054be70
        ;   Label: LAB_0054be70
    FADD double ptr [0x00596fc5]        ; 0054be76 | DOUBLE_00596fc5
    FADD float ptr [ESP + 0x124]        ; 0054be7c
    FSTP float ptr [ESP + 0x124]        ; 0054be83
    MOV EAX,dword ptr [EBX + 0x6c]      ; 0054be8a
    MOV EDX,EAX                         ; 0054be8d
    MOV ESI,0x8                         ; 0054be8f
    SAR EDX,0x1f                        ; 0054be94
    IDIV ESI                            ; 0054be97
    SUB EDX,0x4                         ; 0054be99
    MOV dword ptr [ESP + 0x160],EDX     ; 0054be9c
    FILD dword ptr [ESP + 0x160]        ; 0054bea3
    FMUL double ptr [0x00596fcd]        ; 0054beaa | DOUBLE_00596fcd
    FADD float ptr [ESP + 0x124]        ; 0054beb0
    FSTP float ptr [ESP + 0x124]        ; 0054beb7
    JMP 0x0054b592                      ; 0054bebe
        ;   XREF to: 0054b592 (UNCONDITIONAL_JUMP)  ; LAB_0054b592
    MOV EAX,dword ptr [ESI]             ; 0054bec3
        ;   Label: LAB_0054bec3
    MOV dword ptr [ESP + 0x120],EAX     ; 0054bec5
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054becc
    MOV dword ptr [ESP + 0x124],EAX     ; 0054becf
    MOV EAX,dword ptr [ESI + 0x8]       ; 0054bed6
    MOV dword ptr [ESP + 0x128],EAX     ; 0054bed9
    JMP 0x0054be70                      ; 0054bee0
        ;   XREF to: 0054be70 (UNCONDITIONAL_JUMP)  ; LAB_0054be70
    FLD float ptr [ESP + 0xf4]          ; 0054bee2
        ;   Label: LAB_0054bee2
    FABS                                ; 0054bee9
    FLD float ptr [EBX + 0xbebc]        ; 0054beeb
    FCOMPP                              ; 0054bef1
    FNSTSW AX                           ; 0054bef3
    SAHF                                ; 0054bef5
    JBE 0x0054b62c                      ; 0054bef6
        ;   XREF to: 0054b62c (CONDITIONAL_JUMP)  ; LAB_0054b62c
    JMP 0x0054b65a                      ; 0054befc
        ;   XREF to: 0054b65a (UNCONDITIONAL_JUMP)  ; LAB_0054b65a
    FLDZ                                ; 0054bf01
        ;   Label: LAB_0054bf01
    FCOMP float ptr [EBX + 0xbd24]      ; 0054bf03
    FNSTSW AX                           ; 0054bf09
    SAHF                                ; 0054bf0b
    JBE 0x0054bb77                      ; 0054bf0c
        ;   XREF to: 0054bb77 (CONDITIONAL_JUMP)  ; LAB_0054bb77
    DEC EDX                             ; 0054bf12
    MOV dword ptr [ESP + 0x160],EDX     ; 0054bf13
    FILD dword ptr [ESP + 0x160]        ; 0054bf1a
    FSTP float ptr [EBX + 0xbd24]       ; 0054bf21
    JMP 0x0054bb77                      ; 0054bf27
        ;   XREF to: 0054bb77 (UNCONDITIONAL_JUMP)  ; LAB_0054bb77
    MOV EAX,dword ptr [EBX + 0xbf50]    ; 0054bf2c
        ;   Label: LAB_0054bf2c
    PUSH EAX                            ; 0054bf32
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0054bf33
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 0054bf38
    TEST EAX,EAX                        ; 0054bf3b
    JNZ 0x0054bf86                      ; 0054bf3d
        ;   XREF to: 0054bf86 (CONDITIONAL_JUMP)  ; LAB_0054bf86
    PUSH 0x40490000                     ; 0054bf3f
    PUSH EAX                            ; 0054bf44
    SUB ESP,0x8                         ; 0054bf45
    FLD float ptr [EBX + 0x28]          ; 0054bf48
    FSTP double ptr [ESP]               ; 0054bf4b
    SUB ESP,0x8                         ; 0054bf4e
    FLD float ptr [EBX + 0x24]          ; 0054bf51
    FSTP double ptr [ESP]               ; 0054bf54
    SUB ESP,0x8                         ; 0054bf57
    FLD float ptr [EBX + 0x20]          ; 0054bf5a
    FSTP double ptr [ESP]               ; 0054bf5d
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880 ; 0054bf60
        ;   XREF to: 00527880 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880()
    ADD ESP,0x20                        ; 0054bf65
    TEST EAX,EAX                        ; 0054bf68
    JZ 0x0054bf86                       ; 0054bf6a
        ;   XREF to: 0054bf86 (CONDITIONAL_JUMP)  ; LAB_0054bf86
    LEA EDX,[EBX + 0xbee4]              ; 0054bf6c
    PUSH EDX                            ; 0054bf72
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054bf73
    PUSH EBX                            ; 0054bf79
    CALL dword ptr [EAX + 0x28]         ; 0054bf7a
    ADD ESP,0x8                         ; 0054bf7d
    MOV dword ptr [EBX + 0xbf50],EAX    ; 0054bf80
    PUSH dword ptr [EBX + 0xbf4c]       ; 0054bf86
        ;   Label: LAB_0054bf86
    PUSH dword ptr [EBX + 0xbf48]       ; 0054bf8c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054bf92
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x168],EAX     ; 0054bf97
    MOV EAX,dword ptr [ESP + 0x168]     ; 0054bf9e
    MOV dword ptr [EBX + 0xbf54],EAX    ; 0054bfa5
    ADD ESP,0x8                         ; 0054bfab
    MOV ESP,EBP                         ; 0054bfae
    POP EBP                             ; 0054bfb0
    POP EDI                             ; 0054bfb1
    POP ESI                             ; 0054bfb2
    POP EBX                             ; 0054bfb3
    RET                                 ; 0054bfb4

