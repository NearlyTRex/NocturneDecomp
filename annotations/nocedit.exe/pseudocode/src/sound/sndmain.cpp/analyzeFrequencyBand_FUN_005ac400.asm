; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(int channel,float freq_start_hz,float freq_end_hz)
;
; Parameters:
; int              Stack[0x4]:4   channel
; float            Stack[0x8]:4   freq_start_hz
; float            Stack[0xc]:4   freq_end_hz
; Local Variables:
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined8       Stack[-0xa0]:8  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined8       Stack[-0x94]:8  local_94
; undefined8       Stack[-0x8c]:8  local_8c
; undefined8       Stack[-0x84]:8  local_84
; undefined8       Stack[-0x7c]:8  local_7c
; undefined8       Stack[-0x74]:8  local_74
; undefined8       Stack[-0x6c]:8  local_6c
; undefined8       Stack[-0x4c]:8  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 005125ff
;
; Referenced Globals:
;   double DOUBLE_0065100f = 2
;   double DOUBLE_00651017 = 3.14159265350000
;   int g_AudioSampleRate = 0x5622
;   int[8] g_ChannelFFTTimestamps
;   int g_MixBufferSize
;   void*[8] g_ChannelPrimaryBuffers
;   float*[8] g_ChannelSecondaryBuffersA
;   float*[8] g_ChannelSecondaryBuffersB
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   sound_sndmain.cpp_getMixBufferCount_FUN_005ab6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac400
        ;   Label: sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400
    PUSH ESI                            ; 005ac401
    PUSH EDI                            ; 005ac402
    PUSH EBP                            ; 005ac403
    MOV EBP,ESP                         ; 005ac404
    SUB ESP,0xb4                        ; 005ac406
    AND ESP,0xfffffff8                  ; 005ac40c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ac40f
    SHL EBX,0x2                         ; 005ac412
    CMP dword ptr [EBX + 0x3f692b0],0x0 ; 005ac415 | g_ChannelPrimaryBuffers
    JZ 0x005ac439                       ; 005ac41c
        ;   XREF to: 005ac439 (CONDITIONAL_JUMP)  ; LAB_005ac439
    CMP dword ptr [EBX + 0x3f692d4],0x0 ; 005ac41e | g_ChannelSecondaryBuffersA
    JZ 0x005ac439                       ; 005ac425
        ;   XREF to: 005ac439 (CONDITIONAL_JUMP)  ; LAB_005ac439
    CMP dword ptr [EBX + 0x3f692f4],0x0 ; 005ac427 | g_ChannelSecondaryBuffersB
    JZ 0x005ac439                       ; 005ac42e
        ;   XREF to: 005ac439 (CONDITIONAL_JUMP)  ; LAB_005ac439
    CMP dword ptr [0x03f69280],0x1      ; 005ac430 | g_MixBufferSize
    JGE 0x005ac450                      ; 005ac437
        ;   XREF to: 005ac450 (CONDITIONAL_JUMP)  ; LAB_005ac450
    XOR EDI,EDI                         ; 005ac439
        ;   Label: LAB_005ac439
    MOV dword ptr [ESP + 0x88],EDI      ; 005ac43b
    MOV EAX,dword ptr [ESP + 0x88]      ; 005ac442
    MOV ESP,EBP                         ; 005ac449
    POP EBP                             ; 005ac44b
    POP EDI                             ; 005ac44c
    POP ESI                             ; 005ac44d
    POP EBX                             ; 005ac44e
    RET                                 ; 005ac44f
    CALL sound_sndmain.cpp_getMixBufferCount_FUN_005ab6d0 ; 005ac450
        ;   XREF to: 005ab6d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getMixBufferCount_FUN_005ab6d0()
        ;   Label: LAB_005ac450
    CMP EAX,dword ptr [EBX + 0x3f5d880] ; 005ac455 | g_ChannelFFTTimestamps
    JZ 0x005ac7a7                       ; 005ac45b
        ;   XREF to: 005ac7a7 (CONDITIONAL_JUMP)  ; LAB_005ac7a7
    MOV ESI,dword ptr [0x03f69280]      ; 005ac461 | g_MixBufferSize
    MOV EDX,dword ptr [EBX + 0x3f692d4] ; 005ac467 | g_ChannelSecondaryBuffersA
    MOV ECX,dword ptr [EBX + 0x3f692f4] ; 005ac46d | g_ChannelSecondaryBuffersB
    MOV EDI,dword ptr [EBX + 0x3f692b0] ; 005ac473 | g_ChannelPrimaryBuffers
    MOV dword ptr [ESP + 0xa8],EDX      ; 005ac479
    MOV dword ptr [ESP + 0xa4],ECX      ; 005ac480
    MOV dword ptr [ESP + 0xa0],ESI      ; 005ac487
    XOR EBX,EBX                         ; 005ac48e
    MOV ESI,0x1                         ; 005ac490
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005ac495
    MOV dword ptr [ESP + 0x94],EBX      ; 005ac49c
    MOV dword ptr [ESP + 0x9c],ESI      ; 005ac4a3
    MOV CL,byte ptr [ESP + 0x9c]        ; 005ac4aa
        ;   Label: LAB_005ac4aa
    MOV EAX,0x1                         ; 005ac4b1
    SHL EAX,CL                          ; 005ac4b6
    CMP EAX,EDX                         ; 005ac4b8
    JGE 0x005ac4c5                      ; 005ac4ba
        ;   XREF to: 005ac4c5 (CONDITIONAL_JUMP)  ; LAB_005ac4c5
    INC dword ptr [ESP + 0x9c]          ; 005ac4bc
    JMP 0x005ac4aa                      ; 005ac4c3
        ;   XREF to: 005ac4aa (UNCONDITIONAL_JUMP)  ; LAB_005ac4aa
    XOR ESI,ESI                         ; 005ac4c5
        ;   Label: LAB_005ac4c5
    TEST EDX,EDX                        ; 005ac4c7
    JLE 0x005ac532                      ; 005ac4c9
        ;   XREF to: 005ac532 (CONDITIONAL_JUMP)  ; LAB_005ac532
    MOV EBX,dword ptr [ESP + 0x9c]      ; 005ac4cb
        ;   Label: LAB_005ac4cb
    MOV EDX,ESI                         ; 005ac4d2
    XOR ECX,ECX                         ; 005ac4d4
    XOR EAX,EAX                         ; 005ac4d6
    TEST EBX,EBX                        ; 005ac4d8
    JLE 0x005ac4f3                      ; 005ac4da
        ;   XREF to: 005ac4f3 (CONDITIONAL_JUMP)  ; LAB_005ac4f3
    MOV EBX,EDX                         ; 005ac4dc
        ;   Label: LAB_005ac4dc
    ADD EAX,EAX                         ; 005ac4de
    AND EBX,0x1                         ; 005ac4e0
    INC ECX                             ; 005ac4e3
    OR EAX,EBX                          ; 005ac4e4
    MOV EBX,dword ptr [ESP + 0x9c]      ; 005ac4e6
    SAR EDX,0x1                         ; 005ac4ed
    CMP ECX,EBX                         ; 005ac4ef
    JL 0x005ac4dc                       ; 005ac4f1
        ;   XREF to: 005ac4dc (CONDITIONAL_JUMP)  ; LAB_005ac4dc
    FLD float ptr [EDI]                 ; 005ac4f3
        ;   Label: LAB_005ac4f3
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005ac4f5
    SHL EAX,0x2                         ; 005ac4fc
    MOV EBX,dword ptr [ESP + 0x94]      ; 005ac4ff
    FSTP float ptr [EDX + EAX*0x1]      ; 005ac506
    MOV EDX,dword ptr [ESP + 0xa4]      ; 005ac509
    LEA ECX,[ESI*0x4 + 0x0]             ; 005ac510
    ADD EAX,EDX                         ; 005ac517
    TEST EBX,EBX                        ; 005ac519
    JNZ 0x005ac957                      ; 005ac51b
        ;   XREF to: 005ac957 (CONDITIONAL_JUMP)  ; LAB_005ac957
    MOV dword ptr [EAX],EBX             ; 005ac521
        ;   Label: LAB_005ac521
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005ac523
    INC ESI                             ; 005ac52a
    ADD EDI,0x4                         ; 005ac52b
    CMP ESI,EAX                         ; 005ac52e
    JL 0x005ac4cb                       ; 005ac530
        ;   XREF to: 005ac4cb (CONDITIONAL_JUMP)  ; LAB_005ac4cb
    MOV EDX,0x2                         ; 005ac532
        ;   Label: LAB_005ac532
    MOV ECX,dword ptr [ESP + 0xa0]      ; 005ac537
    MOV dword ptr [ESP + 0x98],EDX      ; 005ac53e
    CMP ECX,EDX                         ; 005ac545
    JL 0x005ac798                       ; 005ac547
        ;   XREF to: 005ac798 (CONDITIONAL_JUMP)  ; LAB_005ac798
    MOV EAX,dword ptr [ESP + 0x98]      ; 005ac54d
        ;   Label: LAB_005ac54d
    MOV EDX,EAX                         ; 005ac554
    SAR EDX,0x1f                        ; 005ac556
    SUB EAX,EDX                         ; 005ac559
    SAR EAX,0x1                         ; 005ac55b
    MOV dword ptr [ESP + 0xb0],EAX      ; 005ac55d
    MOV dword ptr [ESP + 0x30],EAX      ; 005ac564
    FILD dword ptr [ESP + 0xb0]         ; 005ac568
    FDIVR double ptr [0x00651017]       ; 005ac56f | DOUBLE_00651017
    FLD ST0                             ; 005ac575
    FSINCOS                             ; 005ac577
    FXCH ST2                            ; 005ac579
    FLD double ptr [0x0065100f]         ; 005ac57b | DOUBLE_0065100f
    FXCH                                ; 005ac581
    FMUL ST1                            ; 005ac583
    FLD ST0                             ; 005ac585
    FSIN                                ; 005ac587
    FXCH                                ; 005ac589
    FCOS                                ; 005ac58b
    FXCH ST4                            ; 005ac58d
    FSTP double ptr [ESP + 0x7c]        ; 005ac58f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005ac593
    MOV dword ptr [ESP + 0x18],EAX      ; 005ac597
    MOV EAX,dword ptr [ESP + 0x80]      ; 005ac59b
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ac5a2
    FLD double ptr [ESP + 0x18]         ; 005ac5a6
    FMULP ST2                           ; 005ac5aa
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005ac5ac
    FXCH ST3                            ; 005ac5b3
    FSTP double ptr [ESP + 0x7c]        ; 005ac5b5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005ac5b9
    FXCH                                ; 005ac5bd
    FSTP double ptr [ESP]               ; 005ac5bf
    MOV dword ptr [ESP + 0x20],EAX      ; 005ac5c2
    MOV EAX,dword ptr [ESP + 0x80]      ; 005ac5c6
    FXCH                                ; 005ac5cd
    FSTP double ptr [ESP + 0x8]         ; 005ac5cf
    MOV dword ptr [ESP + 0x24],EAX      ; 005ac5d3
    XOR EAX,EAX                         ; 005ac5d7
    FSTP double ptr [ESP + 0x10]        ; 005ac5d9
    MOV dword ptr [ESP + 0xac],EAX      ; 005ac5dd
    TEST EDX,EDX                        ; 005ac5e4
    JLE 0x005ac779                      ; 005ac5e6
        ;   XREF to: 005ac779 (CONDITIONAL_JUMP)  ; LAB_005ac779
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ac5ec
        ;   Label: LAB_005ac5ec
    MOV dword ptr [ESP + 0x3c],EAX      ; 005ac5f0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005ac5f4
    MOV dword ptr [ESP + 0x40],EAX      ; 005ac5f8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ac5fc
    MOV dword ptr [ESP + 0x44],EAX      ; 005ac600
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ac604
    MOV dword ptr [ESP + 0x48],EAX      ; 005ac608
    MOV EAX,dword ptr [ESP]             ; 005ac60c
    MOV dword ptr [ESP + 0x54],EAX      ; 005ac60f
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ac613
    MOV dword ptr [ESP + 0x58],EAX      ; 005ac617
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ac61b
    MOV EDI,dword ptr [ESP + 0x30]      ; 005ac61f
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ac623
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ac627
    XOR ESI,ESI                         ; 005ac62b
    MOV dword ptr [ESP + 0x60],EAX      ; 005ac62d
    TEST EDI,EDI                        ; 005ac631
    JLE 0x005ac753                      ; 005ac633
        ;   XREF to: 005ac753 (CONDITIONAL_JUMP)  ; LAB_005ac753
    FLD double ptr [ESP + 0x10]         ; 005ac639
    MOV ECX,dword ptr [ESP + 0xac]      ; 005ac63d
    MOV EDX,dword ptr [ESP + 0xa4]      ; 005ac644
    LEA EBX,[EDI*0x4 + 0x0]             ; 005ac64b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005ac652
    MOV dword ptr [ESP + 0xb0],EBX      ; 005ac659
    MOV EBX,dword ptr [ESP + 0xa4]      ; 005ac660
    MOV EDI,dword ptr [ESP + 0xb0]      ; 005ac667
    SHL ECX,0x2                         ; 005ac66e
    ADD EBX,EDI                         ; 005ac671
    MOV EDI,dword ptr [ESP + 0xa8]      ; 005ac673
    ADD EDX,ECX                         ; 005ac67a
    ADD EDI,dword ptr [ESP + 0xb0]      ; 005ac67c
    ADD EAX,ECX                         ; 005ac683
    ADD EDI,ECX                         ; 005ac685
    ADD EBX,ECX                         ; 005ac687
    MOV ECX,EDI                         ; 005ac689
    FLD ST0                             ; 005ac68b
        ;   Label: LAB_005ac68b
    FMUL double ptr [ESP + 0x3c]        ; 005ac68d
    FLD ST1                             ; 005ac691
    FMUL double ptr [ESP + 0x54]        ; 005ac693
    FXCH                                ; 005ac697
    FSUB double ptr [ESP + 0x44]        ; 005ac699
    FLD float ptr [ECX]                 ; 005ac69d
    FXCH                                ; 005ac69f
    FST double ptr [ESP + 0x34]         ; 005ac6a1
    FMUL ST1                            ; 005ac6a5
    FXCH ST2                            ; 005ac6a7
    FSUB double ptr [ESP + 0x5c]        ; 005ac6a9
    FLD float ptr [EBX]                 ; 005ac6ad
    FLD double ptr [ESP + 0x34]         ; 005ac6af
    FMUL ST1                            ; 005ac6b3
    FXCH ST2                            ; 005ac6b5
    FST double ptr [ESP + 0x4c]         ; 005ac6b7
    FMULP                               ; 005ac6bb
    FLD double ptr [ESP + 0x4c]         ; 005ac6bd
    FMULP ST3                           ; 005ac6c1
    FLD float ptr [EAX]                 ; 005ac6c3
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005ac6c5
    ADD EDX,0x4                         ; 005ac6c9
    ADD EAX,0x4                         ; 005ac6cc
    MOV dword ptr [ESP + 0x44],EDI      ; 005ac6cf
    MOV EDI,dword ptr [ESP + 0x40]      ; 005ac6d3
    ADD EBX,0x4                         ; 005ac6d7
    MOV dword ptr [ESP + 0x48],EDI      ; 005ac6da
    MOV EDI,dword ptr [ESP + 0x34]      ; 005ac6de
    ADD ECX,0x4                         ; 005ac6e2
    MOV dword ptr [ESP + 0x3c],EDI      ; 005ac6e5
    MOV EDI,dword ptr [ESP + 0x38]      ; 005ac6e9
    INC ESI                             ; 005ac6ed
    MOV dword ptr [ESP + 0x40],EDI      ; 005ac6ee
    FXCH                                ; 005ac6f2
    FSUBP ST4,ST0                       ; 005ac6f4
    MOV EDI,dword ptr [ESP + 0x54]      ; 005ac6f6
    FXCH ST2                            ; 005ac6fa
    FADDP                               ; 005ac6fc
    FXCH                                ; 005ac6fe
    FSUB ST0,ST2                        ; 005ac700
    MOV dword ptr [ESP + 0x5c],EDI      ; 005ac702
    FSTP float ptr [ECX + -0x4]         ; 005ac706
    MOV EDI,dword ptr [ESP + 0x58]      ; 005ac709
    FLD float ptr [EDX + -0x4]          ; 005ac70d
    MOV dword ptr [ESP + 0x60],EDI      ; 005ac710
    FSUB ST0,ST1                        ; 005ac714
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005ac716
    FSTP float ptr [EBX + -0x4]         ; 005ac71a
    FLD float ptr [EAX + -0x4]          ; 005ac71d
    MOV dword ptr [ESP + 0x54],EDI      ; 005ac720
    FLD ST0                             ; 005ac724
    MOV EDI,dword ptr [ESP + 0x50]      ; 005ac726
    FADDP ST3,ST0                       ; 005ac72a
    MOV dword ptr [ESP + 0x58],EDI      ; 005ac72c
    FXCH ST2                            ; 005ac730
    FSTP ST2                            ; 005ac732
    FXCH                                ; 005ac734
    FSTP float ptr [EAX + -0x4]         ; 005ac736
    FLD float ptr [EDX + -0x4]          ; 005ac739
    FADD ST1,ST0                        ; 005ac73c
    MOV EDI,dword ptr [ESP + 0x30]      ; 005ac73e
    FXCH                                ; 005ac742
    FSTP ST1                            ; 005ac744
    FSTP float ptr [EDX + -0x4]         ; 005ac746
    CMP ESI,EDI                         ; 005ac749
    JL 0x005ac68b                       ; 005ac74b
        ;   XREF to: 005ac68b (CONDITIONAL_JUMP)  ; LAB_005ac68b
    FSTP ST0                            ; 005ac751
    MOV EAX,dword ptr [ESP + 0x98]      ; 005ac753
        ;   Label: LAB_005ac753
    MOV ECX,dword ptr [ESP + 0xac]      ; 005ac75a
    ADD ECX,EAX                         ; 005ac761
    MOV EBX,dword ptr [ESP + 0xa0]      ; 005ac763
    MOV dword ptr [ESP + 0xac],ECX      ; 005ac76a
    CMP ECX,EBX                         ; 005ac771
    JL 0x005ac5ec                       ; 005ac773
        ;   XREF to: 005ac5ec (CONDITIONAL_JUMP)  ; LAB_005ac5ec
    MOV ESI,dword ptr [ESP + 0x98]      ; 005ac779
        ;   Label: LAB_005ac779
    ADD ESI,ESI                         ; 005ac780
    MOV EDI,dword ptr [ESP + 0xa0]      ; 005ac782
    MOV dword ptr [ESP + 0x98],ESI      ; 005ac789
    CMP ESI,EDI                         ; 005ac790
    JLE 0x005ac54d                      ; 005ac792
        ;   XREF to: 005ac54d (CONDITIONAL_JUMP)  ; LAB_005ac54d
    CALL sound_sndmain.cpp_getMixBufferCount_FUN_005ab6d0 ; 005ac798
        ;   XREF to: 005ab6d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getMixBufferCount_FUN_005ab6d0()
        ;   Label: LAB_005ac798
    MOV EDX,dword ptr [EBP + 0x14]      ; 005ac79d
    MOV dword ptr [EDX*0x4 + 0x3f5d880],EAX ; 005ac7a0 | g_ChannelFFTTimestamps
    MOV EAX,[0x03f69280]                ; 005ac7a7 | g_MixBufferSize
        ;   Label: LAB_005ac7a7
    MOV EDX,EAX                         ; 005ac7ac
    SAR EDX,0x1f                        ; 005ac7ae
    SUB EAX,EDX                         ; 005ac7b1
    SAR EAX,0x1                         ; 005ac7b3
    LEA EDI,[EAX + 0x1]                 ; 005ac7b5
    MOV dword ptr [ESP + 0xb0],EDI      ; 005ac7b8
    FLD float ptr [EBP + 0x18]          ; 005ac7bf
    FILD dword ptr [ESP + 0xb0]         ; 005ac7c2
    FSTP float ptr [ESP + 0xb0]         ; 005ac7c9
    FMUL float ptr [ESP + 0xb0]         ; 005ac7d0
    FILD dword ptr [0x00681b1c]         ; 005ac7d7 | g_AudioSampleRate
    FDIVP                               ; 005ac7dd
    SUB ESP,0x8                         ; 005ac7df
    FSTP double ptr [ESP]               ; 005ac7e2
    CALL crt_math.c_floor_FUN_005feb90  ; 005ac7e5
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 005ac7ea
    MOV dword ptr [ESP + 0x88],EDX      ; 005ac7f1
    FLD double ptr [ESP + 0x84]         ; 005ac7f8
    ADD ESP,0x8                         ; 005ac7ff
    FLD float ptr [EBP + 0x1c]          ; 005ac802
    FMUL float ptr [ESP + 0xb0]         ; 005ac805
    FILD dword ptr [0x00681b1c]         ; 005ac80c | g_AudioSampleRate
    FDIVP                               ; 005ac812
    FXCH                                ; 005ac814
    CALL crt_math.c_round_FUN_005fe6b0  ; 005ac816
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x90]        ; 005ac81b
    SUB ESP,0x8                         ; 005ac822
    FSTP double ptr [ESP]               ; 005ac825
    CALL crt_math.c_floor_FUN_005feb90  ; 005ac828
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 005ac82d
    MOV dword ptr [ESP + 0x88],EDX      ; 005ac834
    FLD double ptr [ESP + 0x84]         ; 005ac83b
    ADD ESP,0x8                         ; 005ac842
    CALL crt_math.c_round_FUN_005fe6b0  ; 005ac845
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [ESP + 0x90]      ; 005ac84a
    FISTP dword ptr [ESP + 0x8c]        ; 005ac851
    CMP EDI,EAX                         ; 005ac858
    JLE 0x005ac961                      ; 005ac85a
        ;   XREF to: 005ac961 (CONDITIONAL_JUMP)  ; LAB_005ac961
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005ac860
    TEST EDX,EDX                        ; 005ac867
    JLE 0x005ac961                      ; 005ac869
        ;   XREF to: 005ac961 (CONDITIONAL_JUMP)  ; LAB_005ac961
    CMP EDI,EDX                         ; 005ac86f
    JG 0x005ac87a                       ; 005ac871
        ;   XREF to: 005ac87a (CONDITIONAL_JUMP)  ; LAB_005ac87a
    MOV dword ptr [ESP + 0x8c],EDI      ; 005ac873
    CMP dword ptr [ESP + 0x90],0x0      ; 005ac87a
        ;   Label: LAB_005ac87a
    JL 0x005ac978                       ; 005ac882
        ;   XREF to: 005ac978 (CONDITIONAL_JUMP)  ; LAB_005ac978
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005ac888
        ;   Label: LAB_005ac888
    SUB ESI,dword ptr [ESP + 0x90]      ; 005ac88f
    CMP ESI,0x1                         ; 005ac896
    JGE 0x005ac8b6                      ; 005ac899
        ;   XREF to: 005ac8b6 (CONDITIONAL_JUMP)  ; LAB_005ac8b6
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005ac89b
    MOV ESI,0x1                         ; 005ac8a2
    CMP EDI,EDX                         ; 005ac8a7
    JG 0x005ac8b6                       ; 005ac8a9
        ;   XREF to: 005ac8b6 (CONDITIONAL_JUMP)  ; LAB_005ac8b6
    MOV EAX,EDI                         ; 005ac8ab
    SUB EAX,ESI                         ; 005ac8ad
    MOV dword ptr [ESP + 0x90],EAX      ; 005ac8af
    XOR ECX,ECX                         ; 005ac8b6
        ;   Label: LAB_005ac8b6
    XOR EBX,EBX                         ; 005ac8b8
    MOV dword ptr [ESP + 0x28],ECX      ; 005ac8ba
    MOV dword ptr [ESP + 0x2c],ECX      ; 005ac8be
    TEST ESI,ESI                        ; 005ac8c2
    JLE 0x005ac914                      ; 005ac8c4
        ;   XREF to: 005ac914 (CONDITIONAL_JUMP)  ; LAB_005ac914
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ac8c6
    MOV EDX,dword ptr [EAX*0x4 + 0x3f692d4] ; 005ac8c9 | g_ChannelSecondaryBuffersA
    MOV dword ptr [ESP + 0x84],EDX      ; 005ac8d0
    MOV EDX,dword ptr [EAX*0x4 + 0x3f692f4] ; 005ac8d7 | g_ChannelSecondaryBuffersB
    MOV EAX,dword ptr [ESP + 0x90]      ; 005ac8de
    FLD double ptr [ESP + 0x28]         ; 005ac8e5
    SHL EAX,0x2                         ; 005ac8e9
    MOV ECX,dword ptr [ESP + 0x84]      ; 005ac8ec
    ADD EDX,EAX                         ; 005ac8f3
    ADD ECX,EAX                         ; 005ac8f5
    FLD float ptr [ECX]                 ; 005ac8f7
        ;   Label: LAB_005ac8f7
    FMUL ST0                            ; 005ac8f9
    FLD float ptr [EDX]                 ; 005ac8fb
    FMUL ST0                            ; 005ac8fd
    FADDP                               ; 005ac8ff
    FSQRT                               ; 005ac901
    ADD EDX,0x4                         ; 005ac903
    ADD ECX,0x4                         ; 005ac906
    INC EBX                             ; 005ac909
    FADDP                               ; 005ac90a
    CMP EBX,ESI                         ; 005ac90c
    JL 0x005ac8f7                       ; 005ac90e
        ;   XREF to: 005ac8f7 (CONDITIONAL_JUMP)  ; LAB_005ac8f7
    FSTP double ptr [ESP + 0x28]        ; 005ac910
    MOV dword ptr [ESP + 0xb0],ESI      ; 005ac914
        ;   Label: LAB_005ac914
    FILD dword ptr [ESP + 0xb0]         ; 005ac91b
    FDIVR double ptr [ESP + 0x28]       ; 005ac922
    MOV dword ptr [ESP + 0xb0],EDI      ; 005ac926
    FILD dword ptr [ESP + 0xb0]         ; 005ac92d
    FDIVP                               ; 005ac934
    FSQRT                               ; 005ac936
    FMUL double ptr [0x0065100f]        ; 005ac938 | DOUBLE_0065100f
    FST double ptr [ESP + 0x28]         ; 005ac93e
    FSTP float ptr [ESP + 0x88]         ; 005ac942
    MOV EAX,dword ptr [ESP + 0x88]      ; 005ac949
    MOV ESP,EBP                         ; 005ac950
    POP EBP                             ; 005ac952
    POP EDI                             ; 005ac953
    POP ESI                             ; 005ac954
    POP EBX                             ; 005ac955
    RET                                 ; 005ac956
    MOV EDX,EBX                         ; 005ac957
        ;   Label: LAB_005ac957
    MOV EBX,dword ptr [ECX + EDX*0x1]   ; 005ac959
    JMP 0x005ac521                      ; 005ac95c
        ;   XREF to: 005ac521 (UNCONDITIONAL_JUMP)  ; LAB_005ac521
    XOR ESI,ESI                         ; 005ac961
        ;   Label: LAB_005ac961
    MOV dword ptr [ESP + 0x88],ESI      ; 005ac963
    MOV EAX,dword ptr [ESP + 0x88]      ; 005ac96a
    MOV ESP,EBP                         ; 005ac971
    POP EBP                             ; 005ac973
    POP EDI                             ; 005ac974
    POP ESI                             ; 005ac975
    POP EBX                             ; 005ac976
    RET                                 ; 005ac977
    XOR ESI,ESI                         ; 005ac978
        ;   Label: LAB_005ac978
    MOV dword ptr [ESP + 0x90],ESI      ; 005ac97a
    JMP 0x005ac888                      ; 005ac981
        ;   XREF to: 005ac888 (UNCONDITIONAL_JUMP)  ; LAB_005ac888

