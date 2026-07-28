; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_computeFFT_FUN_005214e0(undefined4 *param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined8       Stack[-0x84]:8  local_84
; undefined8       Stack[-0x7c]:8  local_7c
; undefined8       Stack[-0x74]:8  local_74
; undefined8       Stack[-0x6c]:8  local_6c
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_0059211e
;   undefined4 DAT_00592126
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005214e0
        ;   Label: sound_sndmain.cpp_computeFFT_FUN_005214e0
    PUSH ESI                            ; 005214e1
    PUSH EDI                            ; 005214e2
    PUSH EBP                            ; 005214e3
    MOV EBP,ESP                         ; 005214e4
    SUB ESP,0x9c                        ; 005214e6
    AND ESP,0xfffffff8                  ; 005214ec
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005214ef
    MOV ECX,0x1                         ; 005214f2
    MOV EDI,dword ptr [EBP + 0x14]      ; 005214f7
    MOV dword ptr [ESP + 0x90],EAX      ; 005214fa
    MOV EAX,dword ptr [EBP + 0x20]      ; 00521501
    XOR EDX,EDX                         ; 00521504
    MOV dword ptr [ESP + 0x8c],EAX      ; 00521506
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052150d
    MOV dword ptr [ESP + 0x7c],EDX      ; 00521510
    MOV dword ptr [ESP + 0x88],EAX      ; 00521514
    MOV dword ptr [ESP + 0x84],ECX      ; 0052151b
    MOV EBX,dword ptr [ESP + 0x88]      ; 00521522
    MOV CL,byte ptr [ESP + 0x84]        ; 00521529
        ;   Label: LAB_00521529
    MOV EAX,0x1                         ; 00521530
    SHL EAX,CL                          ; 00521535
    CMP EAX,EBX                         ; 00521537
    JL 0x0052180a                       ; 00521539
        ;   XREF to: 0052180a (CONDITIONAL_JUMP)  ; LAB_0052180a
    XOR ESI,ESI                         ; 0052153f
    TEST EBX,EBX                        ; 00521541
    JLE 0x005215a9                      ; 00521543
        ;   XREF to: 005215a9 (CONDITIONAL_JUMP)  ; LAB_005215a9
    MOV EBX,dword ptr [ESP + 0x84]      ; 00521545
        ;   Label: LAB_00521545
    MOV EDX,ESI                         ; 0052154c
    XOR ECX,ECX                         ; 0052154e
    XOR EAX,EAX                         ; 00521550
    TEST EBX,EBX                        ; 00521552
    JLE 0x0052156d                      ; 00521554
        ;   XREF to: 0052156d (CONDITIONAL_JUMP)  ; LAB_0052156d
    MOV EBX,EDX                         ; 00521556
        ;   Label: LAB_00521556
    ADD EAX,EAX                         ; 00521558
    AND EBX,0x1                         ; 0052155a
    INC ECX                             ; 0052155d
    OR EAX,EBX                          ; 0052155e
    MOV EBX,dword ptr [ESP + 0x84]      ; 00521560
    SAR EDX,0x1                         ; 00521567
    CMP ECX,EBX                         ; 00521569
    JL 0x00521556                       ; 0052156b
        ;   XREF to: 00521556 (CONDITIONAL_JUMP)  ; LAB_00521556
    FLD float ptr [EDI]                 ; 0052156d
        ;   Label: LAB_0052156d
    MOV EDX,dword ptr [ESP + 0x90]      ; 0052156f
    SHL EAX,0x2                         ; 00521576
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00521579
    FSTP float ptr [EDX + EAX*0x1]      ; 0052157d
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00521580
    LEA ECX,[ESI*0x4 + 0x0]             ; 00521587
    ADD EAX,EDX                         ; 0052158e
    TEST EBX,EBX                        ; 00521590
    JNZ 0x00521816                      ; 00521592
        ;   XREF to: 00521816 (CONDITIONAL_JUMP)  ; LAB_00521816
    MOV dword ptr [EAX],EBX             ; 00521598
    MOV ECX,dword ptr [ESP + 0x88]      ; 0052159a
        ;   Label: LAB_0052159a
    INC ESI                             ; 005215a1
    ADD EDI,0x4                         ; 005215a2
    CMP ESI,ECX                         ; 005215a5
    JL 0x00521545                       ; 005215a7
        ;   XREF to: 00521545 (CONDITIONAL_JUMP)  ; LAB_00521545
    MOV EBX,0x2                         ; 005215a9
        ;   Label: LAB_005215a9
    MOV ESI,dword ptr [ESP + 0x88]      ; 005215ae
    MOV dword ptr [ESP + 0x80],EBX      ; 005215b5
    CMP ESI,EBX                         ; 005215bc
    JL 0x00521803                       ; 005215be
        ;   XREF to: 00521803 (CONDITIONAL_JUMP)  ; LAB_00521803
    MOV EAX,dword ptr [ESP + 0x80]      ; 005215c4
        ;   Label: LAB_005215c4
    MOV EDX,EAX                         ; 005215cb
    SAR EDX,0x1f                        ; 005215cd
    SUB EAX,EDX                         ; 005215d0
    SAR EAX,0x1                         ; 005215d2
    MOV dword ptr [ESP + 0x98],EAX      ; 005215d4
    MOV dword ptr [ESP + 0x28],EAX      ; 005215db
    FILD dword ptr [ESP + 0x98]         ; 005215df
    FDIVR double ptr [0x00592126]       ; 005215e6 | DAT_00592126
    FLD ST0                             ; 005215ec
    FSINCOS                             ; 005215ee
    FXCH ST2                            ; 005215f0
    FLD double ptr [0x0059211e]         ; 005215f2 | DAT_0059211e
    FXCH                                ; 005215f8
    FMUL ST1                            ; 005215fa
    FLD ST0                             ; 005215fc
    FSIN                                ; 005215fe
    FXCH                                ; 00521600
    FCOS                                ; 00521602
    FXCH ST4                            ; 00521604
    FSTP double ptr [ESP + 0x74]        ; 00521606
    MOV EAX,dword ptr [ESP + 0x74]      ; 0052160a
    MOV dword ptr [ESP + 0x18],EAX      ; 0052160e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00521612
    MOV dword ptr [ESP + 0x1c],EAX      ; 00521616
    FLD double ptr [ESP + 0x18]         ; 0052161a
    FMULP ST2                           ; 0052161e
    XOR ESI,ESI                         ; 00521620
    MOV EDI,dword ptr [ESP + 0x88]      ; 00521622
    MOV dword ptr [ESP + 0x94],ESI      ; 00521629
    FXCH ST2                            ; 00521630
    FSTP double ptr [ESP + 0x20]        ; 00521632
    FXCH ST2                            ; 00521636
    FSTP double ptr [ESP + 0x74]        ; 00521638
    MOV EAX,dword ptr [ESP + 0x74]      ; 0052163c
    FSTP double ptr [ESP + 0x8]         ; 00521640
    MOV dword ptr [ESP + 0x10],EAX      ; 00521644
    MOV EAX,dword ptr [ESP + 0x78]      ; 00521648
    FSTP double ptr [ESP]               ; 0052164c
    MOV dword ptr [ESP + 0x14],EAX      ; 0052164f
    TEST EDI,EDI                        ; 00521653
    JLE 0x005217e4                      ; 00521655
        ;   XREF to: 005217e4 (CONDITIONAL_JUMP)  ; LAB_005217e4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052165b
        ;   Label: LAB_0052165b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0052165f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00521663
    MOV dword ptr [ESP + 0x50],EAX      ; 00521667
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052166b
    MOV dword ptr [ESP + 0x54],EAX      ; 0052166f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00521673
    MOV dword ptr [ESP + 0x58],EAX      ; 00521677
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052167b
    MOV dword ptr [ESP + 0x34],EAX      ; 0052167f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00521683
    MOV dword ptr [ESP + 0x38],EAX      ; 00521687
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052168b
    MOV EBX,dword ptr [ESP + 0x28]      ; 0052168f
    MOV dword ptr [ESP + 0x3c],EAX      ; 00521693
    MOV EAX,dword ptr [ESP + 0xc]       ; 00521697
    XOR ESI,ESI                         ; 0052169b
    MOV dword ptr [ESP + 0x40],EAX      ; 0052169d
    TEST EBX,EBX                        ; 005216a1
    JLE 0x005217be                      ; 005216a3
        ;   XREF to: 005217be (CONDITIONAL_JUMP)  ; LAB_005217be
    FLD double ptr [ESP]                ; 005216a9
    MOV ECX,dword ptr [ESP + 0x94]      ; 005216ac
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005216b3
    SHL EBX,0x2                         ; 005216ba
    MOV EDX,dword ptr [ESP + 0x90]      ; 005216bd
    MOV dword ptr [ESP + 0x98],EBX      ; 005216c4
    MOV EBX,dword ptr [ESP + 0x8c]      ; 005216cb
    MOV EDI,dword ptr [ESP + 0x98]      ; 005216d2
    SHL ECX,0x2                         ; 005216d9
    ADD EBX,EDI                         ; 005216dc
    MOV EDI,dword ptr [ESP + 0x90]      ; 005216de
    ADD EAX,ECX                         ; 005216e5
    ADD EDI,dword ptr [ESP + 0x98]      ; 005216e7
    ADD EDX,ECX                         ; 005216ee
    ADD EDI,ECX                         ; 005216f0
    ADD EBX,ECX                         ; 005216f2
    MOV ECX,EDI                         ; 005216f4
    FLD ST0                             ; 005216f6
        ;   Label: LAB_005216f6
    FMUL double ptr [ESP + 0x4c]        ; 005216f8
    FLD ST1                             ; 005216fc
    FMUL double ptr [ESP + 0x34]        ; 005216fe
    FXCH                                ; 00521702
    FSUB double ptr [ESP + 0x54]        ; 00521704
    FLD float ptr [ECX]                 ; 00521708
    FXCH                                ; 0052170a
    FST double ptr [ESP + 0x44]         ; 0052170c
    FMUL ST1                            ; 00521710
    FXCH ST2                            ; 00521712
    FSUB double ptr [ESP + 0x3c]        ; 00521714
    FLD float ptr [EBX]                 ; 00521718
    FLD double ptr [ESP + 0x44]         ; 0052171a
    FMUL ST1                            ; 0052171e
    FXCH ST2                            ; 00521720
    FST double ptr [ESP + 0x2c]         ; 00521722
    FMULP                               ; 00521726
    FLD double ptr [ESP + 0x2c]         ; 00521728
    FMULP ST3                           ; 0052172c
    FLD float ptr [EDX]                 ; 0052172e
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00521730
    ADD EAX,0x4                         ; 00521734
    ADD EDX,0x4                         ; 00521737
    MOV dword ptr [ESP + 0x54],EDI      ; 0052173a
    MOV EDI,dword ptr [ESP + 0x50]      ; 0052173e
    ADD EBX,0x4                         ; 00521742
    MOV dword ptr [ESP + 0x58],EDI      ; 00521745
    MOV EDI,dword ptr [ESP + 0x44]      ; 00521749
    ADD ECX,0x4                         ; 0052174d
    MOV dword ptr [ESP + 0x4c],EDI      ; 00521750
    MOV EDI,dword ptr [ESP + 0x48]      ; 00521754
    INC ESI                             ; 00521758
    MOV dword ptr [ESP + 0x50],EDI      ; 00521759
    FXCH                                ; 0052175d
    FSUBP ST4,ST0                       ; 0052175f
    MOV EDI,dword ptr [ESP + 0x34]      ; 00521761
    FXCH ST2                            ; 00521765
    FADDP                               ; 00521767
    FXCH                                ; 00521769
    FSUB ST0,ST2                        ; 0052176b
    MOV dword ptr [ESP + 0x3c],EDI      ; 0052176d
    FSTP float ptr [ECX + -0x4]         ; 00521771
    MOV EDI,dword ptr [ESP + 0x38]      ; 00521774
    FLD float ptr [EAX + -0x4]          ; 00521778
    MOV dword ptr [ESP + 0x40],EDI      ; 0052177b
    FSUB ST0,ST1                        ; 0052177f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00521781
    FSTP float ptr [EBX + -0x4]         ; 00521785
    FLD float ptr [EDX + -0x4]          ; 00521788
    MOV dword ptr [ESP + 0x34],EDI      ; 0052178b
    FLD ST0                             ; 0052178f
    MOV EDI,dword ptr [ESP + 0x30]      ; 00521791
    FADDP ST3,ST0                       ; 00521795
    MOV dword ptr [ESP + 0x38],EDI      ; 00521797
    FXCH ST2                            ; 0052179b
    FSTP ST2                            ; 0052179d
    FXCH                                ; 0052179f
    FSTP float ptr [EDX + -0x4]         ; 005217a1
    FLD float ptr [EAX + -0x4]          ; 005217a4
    FADD ST1,ST0                        ; 005217a7
    MOV EDI,dword ptr [ESP + 0x28]      ; 005217a9
    FXCH                                ; 005217ad
    FSTP ST1                            ; 005217af
    FSTP float ptr [EAX + -0x4]         ; 005217b1
    CMP ESI,EDI                         ; 005217b4
    JL 0x005216f6                       ; 005217b6
        ;   XREF to: 005216f6 (CONDITIONAL_JUMP)  ; LAB_005216f6
    FSTP ST0                            ; 005217bc
    MOV EAX,dword ptr [ESP + 0x80]      ; 005217be
        ;   Label: LAB_005217be
    MOV EDX,dword ptr [ESP + 0x94]      ; 005217c5
    ADD EDX,EAX                         ; 005217cc
    MOV ECX,dword ptr [ESP + 0x88]      ; 005217ce
    MOV dword ptr [ESP + 0x94],EDX      ; 005217d5
    CMP EDX,ECX                         ; 005217dc
    JL 0x0052165b                       ; 005217de
        ;   XREF to: 0052165b (CONDITIONAL_JUMP)  ; LAB_0052165b
    MOV ECX,dword ptr [ESP + 0x80]      ; 005217e4
        ;   Label: LAB_005217e4
    ADD ECX,ECX                         ; 005217eb
    MOV EBX,dword ptr [ESP + 0x88]      ; 005217ed
    MOV dword ptr [ESP + 0x80],ECX      ; 005217f4
    CMP ECX,EBX                         ; 005217fb
    JLE 0x005215c4                      ; 005217fd
        ;   XREF to: 005215c4 (CONDITIONAL_JUMP)  ; LAB_005215c4
    MOV ESP,EBP                         ; 00521803
        ;   Label: LAB_00521803
    POP EBP                             ; 00521805
    POP EDI                             ; 00521806
    POP ESI                             ; 00521807
    POP EBX                             ; 00521808
    RET                                 ; 00521809
    INC dword ptr [ESP + 0x84]          ; 0052180a
        ;   Label: LAB_0052180a
    JMP 0x00521529                      ; 00521811
        ;   XREF to: 00521529 (UNCONDITIONAL_JUMP)  ; LAB_00521529
    ADD ECX,EBX                         ; 00521816
        ;   Label: LAB_00521816
    MOV EDX,dword ptr [ECX]             ; 00521818
    MOV dword ptr [EAX],EDX             ; 0052181a
    JMP 0x0052159a                      ; 0052181c
        ;   XREF to: 0052159a (UNCONDITIONAL_JUMP)  ; LAB_0052159a

