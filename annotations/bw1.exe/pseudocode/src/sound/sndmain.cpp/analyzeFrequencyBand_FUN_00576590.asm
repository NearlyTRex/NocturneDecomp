; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_00576590(int channel,float freq_start_hz,float freq_end_hz)
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
; undefined8       Stack[-0xa8]:8  local_a8
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x50]:8  local_50
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
;
; XREF[1]:
;   core_menu.cpp_FUN_0050ba70 at 0050c246
;
; Referenced Globals:
;   undefined4 DAT_005f45a0
;   undefined4 DAT_005f45a8
;   undefined4 DAT_006232f0
;   undefined4 DAT_02c80668
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;   sound_sndmain.cpp_getMixBufferCount_FUN_005756e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576590
        ;   Label: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00576590
    PUSH ESI                            ; 00576591
    PUSH EDI                            ; 00576592
    PUSH EBP                            ; 00576593
    MOV EBP,ESP                         ; 00576594
    SUB ESP,0xb4                        ; 00576596
    AND ESP,0xfffffff8                  ; 0057659c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057659f
    SHL EBX,0x2                         ; 005765a2
    CMP dword ptr [EBX + 0x2c80698],0x0 ; 005765a5
    JZ 0x005765c9                       ; 005765ac
        ;   XREF to: 005765c9 (CONDITIONAL_JUMP)  ; LAB_005765c9
    CMP dword ptr [EBX + 0x2c806bc],0x0 ; 005765ae
    JZ 0x005765c9                       ; 005765b5
        ;   XREF to: 005765c9 (CONDITIONAL_JUMP)  ; LAB_005765c9
    CMP dword ptr [EBX + 0x2c806dc],0x0 ; 005765b7
    JZ 0x005765c9                       ; 005765be
        ;   XREF to: 005765c9 (CONDITIONAL_JUMP)  ; LAB_005765c9
    CMP dword ptr [0x02c80668],0x1      ; 005765c0 | DAT_02c80668
    JGE 0x005765e0                      ; 005765c7
        ;   XREF to: 005765e0 (CONDITIONAL_JUMP)  ; LAB_005765e0
    XOR EDI,EDI                         ; 005765c9
        ;   Label: LAB_005765c9
    MOV dword ptr [ESP + 0xac],EDI      ; 005765cb
    MOV EAX,dword ptr [ESP + 0xac]      ; 005765d2
    MOV ESP,EBP                         ; 005765d9
    POP EBP                             ; 005765db
    POP EDI                             ; 005765dc
    POP ESI                             ; 005765dd
    POP EBX                             ; 005765de
    RET                                 ; 005765df
    CALL sound_sndmain.cpp_getMixBufferCount_FUN_005756e0 ; 005765e0
        ;   XREF to: 005756e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getMixBufferCount_FUN_005756e0()
        ;   Label: LAB_005765e0
    CMP EAX,dword ptr [EBX + 0x2c745c0] ; 005765e5
    JZ 0x0057693a                       ; 005765eb
        ;   XREF to: 0057693a (CONDITIONAL_JUMP)  ; LAB_0057693a
    MOV ESI,dword ptr [0x02c80668]      ; 005765f1 | DAT_02c80668
    MOV EDX,dword ptr [EBX + 0x2c806bc] ; 005765f7
    MOV ECX,dword ptr [EBX + 0x2c806dc] ; 005765fd
    MOV EDI,dword ptr [EBX + 0x2c80698] ; 00576603
    MOV dword ptr [ESP + 0x9c],EDX      ; 00576609
    MOV dword ptr [ESP + 0xa0],ECX      ; 00576610
    MOV dword ptr [ESP + 0x98],ESI      ; 00576617
    XOR EBX,EBX                         ; 0057661e
    MOV ESI,0x1                         ; 00576620
    MOV EDX,dword ptr [ESP + 0x98]      ; 00576625
    MOV dword ptr [ESP + 0x8c],EBX      ; 0057662c
    MOV dword ptr [ESP + 0x94],ESI      ; 00576633
    MOV CL,byte ptr [ESP + 0x94]        ; 0057663a
        ;   Label: LAB_0057663a
    MOV EAX,0x1                         ; 00576641
    SHL EAX,CL                          ; 00576646
    CMP EAX,EDX                         ; 00576648
    JGE 0x00576655                      ; 0057664a
        ;   XREF to: 00576655 (CONDITIONAL_JUMP)  ; LAB_00576655
    INC dword ptr [ESP + 0x94]          ; 0057664c
    JMP 0x0057663a                      ; 00576653
        ;   XREF to: 0057663a (UNCONDITIONAL_JUMP)  ; LAB_0057663a
    XOR ESI,ESI                         ; 00576655
        ;   Label: LAB_00576655
    TEST EDX,EDX                        ; 00576657
    JLE 0x005766c2                      ; 00576659
        ;   XREF to: 005766c2 (CONDITIONAL_JUMP)  ; LAB_005766c2
    MOV EBX,dword ptr [ESP + 0x94]      ; 0057665b
        ;   Label: LAB_0057665b
    MOV EDX,ESI                         ; 00576662
    XOR ECX,ECX                         ; 00576664
    XOR EAX,EAX                         ; 00576666
    TEST EBX,EBX                        ; 00576668
    JLE 0x00576683                      ; 0057666a
        ;   XREF to: 00576683 (CONDITIONAL_JUMP)  ; LAB_00576683
    MOV EBX,EDX                         ; 0057666c
        ;   Label: LAB_0057666c
    ADD EAX,EAX                         ; 0057666e
    AND EBX,0x1                         ; 00576670
    INC ECX                             ; 00576673
    OR EAX,EBX                          ; 00576674
    MOV EBX,dword ptr [ESP + 0x94]      ; 00576676
    SAR EDX,0x1                         ; 0057667d
    CMP ECX,EBX                         ; 0057667f
    JL 0x0057666c                       ; 00576681
        ;   XREF to: 0057666c (CONDITIONAL_JUMP)  ; LAB_0057666c
    FLD float ptr [EDI]                 ; 00576683
        ;   Label: LAB_00576683
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00576685
    SHL EAX,0x2                         ; 0057668c
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0057668f
    FSTP float ptr [EDX + EAX*0x1]      ; 00576696
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00576699
    LEA ECX,[ESI*0x4 + 0x0]             ; 005766a0
    ADD EAX,EDX                         ; 005766a7
    TEST EBX,EBX                        ; 005766a9
    JNZ 0x00576aea                      ; 005766ab
        ;   XREF to: 00576aea (CONDITIONAL_JUMP)  ; LAB_00576aea
    MOV dword ptr [EAX],EBX             ; 005766b1
        ;   Label: LAB_005766b1
    MOV EAX,dword ptr [ESP + 0x98]      ; 005766b3
    INC ESI                             ; 005766ba
    ADD EDI,0x4                         ; 005766bb
    CMP ESI,EAX                         ; 005766be
    JL 0x0057665b                       ; 005766c0
        ;   XREF to: 0057665b (CONDITIONAL_JUMP)  ; LAB_0057665b
    MOV EDX,0x2                         ; 005766c2
        ;   Label: LAB_005766c2
    MOV ECX,dword ptr [ESP + 0x98]      ; 005766c7
    MOV dword ptr [ESP + 0x90],EDX      ; 005766ce
    CMP ECX,EDX                         ; 005766d5
    JL 0x0057692b                       ; 005766d7
        ;   XREF to: 0057692b (CONDITIONAL_JUMP)  ; LAB_0057692b
    MOV EAX,dword ptr [ESP + 0x90]      ; 005766dd
        ;   Label: LAB_005766dd
    MOV EDX,EAX                         ; 005766e4
    SAR EDX,0x1f                        ; 005766e6
    SUB EAX,EDX                         ; 005766e9
    SAR EAX,0x1                         ; 005766eb
    MOV dword ptr [ESP + 0xb0],EAX      ; 005766ed
    MOV dword ptr [ESP + 0xa8],EAX      ; 005766f4
    FILD dword ptr [ESP + 0xb0]         ; 005766fb
    FDIVR float ptr [0x005f45a8]        ; 00576702 | DAT_005f45a8
    FLD ST0                             ; 00576708
    FSINCOS                             ; 0057670a
    FXCH ST2                            ; 0057670c
    FLD double ptr [0x005f45a0]         ; 0057670e | DAT_005f45a0
    FXCH                                ; 00576714
    FMUL ST1                            ; 00576716
    FLD ST0                             ; 00576718
    FSIN                                ; 0057671a
    FXCH                                ; 0057671c
    FCOS                                ; 0057671e
    FXCH ST4                            ; 00576720
    FSTP double ptr [ESP + 0x78]        ; 00576722
    MOV EAX,dword ptr [ESP + 0x78]      ; 00576726
    MOV dword ptr [ESP + 0x20],EAX      ; 0057672a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0057672e
    MOV dword ptr [ESP + 0x24],EAX      ; 00576732
    FLD double ptr [ESP + 0x20]         ; 00576736
    FMULP ST2                           ; 0057673a
    MOV EDX,dword ptr [ESP + 0x98]      ; 0057673c
    FXCH ST3                            ; 00576743
    FSTP double ptr [ESP + 0x78]        ; 00576745
    MOV EAX,dword ptr [ESP + 0x78]      ; 00576749
    FXCH                                ; 0057674d
    FSTP double ptr [ESP + 0x10]        ; 0057674f
    MOV dword ptr [ESP + 0x28],EAX      ; 00576753
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00576757
    FXCH                                ; 0057675b
    FSTP double ptr [ESP]               ; 0057675d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00576760
    XOR EAX,EAX                         ; 00576764
    FSTP double ptr [ESP + 0x18]        ; 00576766
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057676a
    TEST EDX,EDX                        ; 00576771
    JLE 0x0057690c                      ; 00576773
        ;   XREF to: 0057690c (CONDITIONAL_JUMP)  ; LAB_0057690c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00576779
        ;   Label: LAB_00576779
    MOV dword ptr [ESP + 0x50],EAX      ; 0057677d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00576781
    MOV dword ptr [ESP + 0x54],EAX      ; 00576785
    MOV EAX,dword ptr [ESP + 0x28]      ; 00576789
    MOV dword ptr [ESP + 0x58],EAX      ; 0057678d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00576791
    MOV dword ptr [ESP + 0x5c],EAX      ; 00576795
    MOV EAX,dword ptr [ESP + 0x10]      ; 00576799
    MOV dword ptr [ESP + 0x38],EAX      ; 0057679d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005767a1
    MOV dword ptr [ESP + 0x3c],EAX      ; 005767a5
    MOV EAX,dword ptr [ESP]             ; 005767a9
    MOV EDI,dword ptr [ESP + 0xa8]      ; 005767ac
    MOV dword ptr [ESP + 0x40],EAX      ; 005767b3
    MOV EAX,dword ptr [ESP + 0x4]       ; 005767b7
    XOR ESI,ESI                         ; 005767bb
    MOV dword ptr [ESP + 0x44],EAX      ; 005767bd
    TEST EDI,EDI                        ; 005767c1
    JLE 0x005768e6                      ; 005767c3
        ;   XREF to: 005768e6 (CONDITIONAL_JUMP)  ; LAB_005768e6
    FLD double ptr [ESP + 0x18]         ; 005767c9
    MOV ECX,dword ptr [ESP + 0xa4]      ; 005767cd
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005767d4
    LEA EBX,[EDI*0x4 + 0x0]             ; 005767db
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005767e2
    MOV dword ptr [ESP + 0xb0],EBX      ; 005767e9
    MOV EBX,dword ptr [ESP + 0xa0]      ; 005767f0
    MOV EDI,dword ptr [ESP + 0xb0]      ; 005767f7
    SHL ECX,0x2                         ; 005767fe
    ADD EBX,EDI                         ; 00576801
    MOV EDI,dword ptr [ESP + 0x9c]      ; 00576803
    ADD EAX,ECX                         ; 0057680a
    ADD EDI,dword ptr [ESP + 0xb0]      ; 0057680c
    ADD EDX,ECX                         ; 00576813
    ADD EDI,ECX                         ; 00576815
    ADD EBX,ECX                         ; 00576817
    MOV ECX,EDI                         ; 00576819
    FLD ST0                             ; 0057681b
        ;   Label: LAB_0057681b
    FMUL double ptr [ESP + 0x50]        ; 0057681d
    FLD ST1                             ; 00576821
    FMUL double ptr [ESP + 0x38]        ; 00576823
    FXCH                                ; 00576827
    FSUB double ptr [ESP + 0x58]        ; 00576829
    FLD float ptr [ECX]                 ; 0057682d
    FXCH                                ; 0057682f
    FST double ptr [ESP + 0x48]         ; 00576831
    FMUL ST1                            ; 00576835
    FXCH ST2                            ; 00576837
    FSUB double ptr [ESP + 0x40]        ; 00576839
    FLD float ptr [EBX]                 ; 0057683d
    FLD double ptr [ESP + 0x48]         ; 0057683f
    FMUL ST1                            ; 00576843
    FXCH ST2                            ; 00576845
    FST double ptr [ESP + 0x30]         ; 00576847
    FMULP                               ; 0057684b
    FLD double ptr [ESP + 0x30]         ; 0057684d
    FMULP ST3                           ; 00576851
    FLD float ptr [EDX]                 ; 00576853
    MOV EDI,dword ptr [ESP + 0x50]      ; 00576855
    ADD EAX,0x4                         ; 00576859
    ADD EDX,0x4                         ; 0057685c
    MOV dword ptr [ESP + 0x58],EDI      ; 0057685f
    MOV EDI,dword ptr [ESP + 0x54]      ; 00576863
    ADD EBX,0x4                         ; 00576867
    MOV dword ptr [ESP + 0x5c],EDI      ; 0057686a
    MOV EDI,dword ptr [ESP + 0x48]      ; 0057686e
    ADD ECX,0x4                         ; 00576872
    MOV dword ptr [ESP + 0x50],EDI      ; 00576875
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00576879
    INC ESI                             ; 0057687d
    MOV dword ptr [ESP + 0x54],EDI      ; 0057687e
    FXCH                                ; 00576882
    FSUBP ST4,ST0                       ; 00576884
    MOV EDI,dword ptr [ESP + 0x38]      ; 00576886
    FXCH ST2                            ; 0057688a
    FADDP                               ; 0057688c
    FXCH                                ; 0057688e
    FSUB ST0,ST2                        ; 00576890
    MOV dword ptr [ESP + 0x40],EDI      ; 00576892
    FSTP float ptr [ECX + -0x4]         ; 00576896
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00576899
    FLD float ptr [EAX + -0x4]          ; 0057689d
    MOV dword ptr [ESP + 0x44],EDI      ; 005768a0
    FSUB ST0,ST1                        ; 005768a4
    MOV EDI,dword ptr [ESP + 0x30]      ; 005768a6
    FSTP float ptr [EBX + -0x4]         ; 005768aa
    FLD float ptr [EDX + -0x4]          ; 005768ad
    MOV dword ptr [ESP + 0x38],EDI      ; 005768b0
    FLD ST0                             ; 005768b4
    MOV EDI,dword ptr [ESP + 0x34]      ; 005768b6
    FADDP ST3,ST0                       ; 005768ba
    MOV dword ptr [ESP + 0x3c],EDI      ; 005768bc
    FXCH ST2                            ; 005768c0
    FSTP ST2                            ; 005768c2
    FXCH                                ; 005768c4
    FSTP float ptr [EDX + -0x4]         ; 005768c6
    FLD float ptr [EAX + -0x4]          ; 005768c9
    FADD ST1,ST0                        ; 005768cc
    MOV EDI,dword ptr [ESP + 0xa8]      ; 005768ce
    FXCH                                ; 005768d5
    FSTP ST1                            ; 005768d7
    FSTP float ptr [EAX + -0x4]         ; 005768d9
    CMP ESI,EDI                         ; 005768dc
    JL 0x0057681b                       ; 005768de
        ;   XREF to: 0057681b (CONDITIONAL_JUMP)  ; LAB_0057681b
    FSTP ST0                            ; 005768e4
    MOV EAX,dword ptr [ESP + 0x90]      ; 005768e6
        ;   Label: LAB_005768e6
    MOV ECX,dword ptr [ESP + 0xa4]      ; 005768ed
    ADD ECX,EAX                         ; 005768f4
    MOV EBX,dword ptr [ESP + 0x98]      ; 005768f6
    MOV dword ptr [ESP + 0xa4],ECX      ; 005768fd
    CMP ECX,EBX                         ; 00576904
    JL 0x00576779                       ; 00576906
        ;   XREF to: 00576779 (CONDITIONAL_JUMP)  ; LAB_00576779
    MOV ESI,dword ptr [ESP + 0x90]      ; 0057690c
        ;   Label: LAB_0057690c
    ADD ESI,ESI                         ; 00576913
    MOV EDI,dword ptr [ESP + 0x98]      ; 00576915
    MOV dword ptr [ESP + 0x90],ESI      ; 0057691c
    CMP ESI,EDI                         ; 00576923
    JLE 0x005766dd                      ; 00576925
        ;   XREF to: 005766dd (CONDITIONAL_JUMP)  ; LAB_005766dd
    CALL sound_sndmain.cpp_getMixBufferCount_FUN_005756e0 ; 0057692b
        ;   XREF to: 005756e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getMixBufferCount_FUN_005756e0()
        ;   Label: LAB_0057692b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00576930
    MOV dword ptr [EDX*0x4 + 0x2c745c0],EAX ; 00576933
    MOV EAX,[0x02c80668]                ; 0057693a | DAT_02c80668
        ;   Label: LAB_0057693a
    MOV EDX,EAX                         ; 0057693f
    SAR EDX,0x1f                        ; 00576941
    SUB EAX,EDX                         ; 00576944
    SAR EAX,0x1                         ; 00576946
    LEA EDI,[EAX + 0x1]                 ; 00576948
    MOV dword ptr [ESP + 0xb0],EDI      ; 0057694b
    FLD float ptr [EBP + 0x18]          ; 00576952
    FILD dword ptr [ESP + 0xb0]         ; 00576955
    FSTP float ptr [ESP + 0xb0]         ; 0057695c
    FMUL float ptr [ESP + 0xb0]         ; 00576963
    FILD dword ptr [0x006232f0]         ; 0057696a | DAT_006232f0
    FDIVP                               ; 00576970
    SUB ESP,0x8                         ; 00576972
    FSTP double ptr [ESP]               ; 00576975
    CALL crt_math.c_floor_FUN_005c0880  ; 00576978
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0057697d
    MOV dword ptr [ESP + 0x84],EDX      ; 00576984
    FLD double ptr [ESP + 0x80]         ; 0057698b
    ADD ESP,0x8                         ; 00576992
    FLD float ptr [EBP + 0x1c]          ; 00576995
    FMUL float ptr [ESP + 0xb0]         ; 00576998
    FILD dword ptr [0x006232f0]         ; 0057699f | DAT_006232f0
    FDIVP                               ; 005769a5
    FXCH                                ; 005769a7
    CALL crt_math.c_round_FUN_005c03a0  ; 005769a9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x88]        ; 005769ae
    SUB ESP,0x8                         ; 005769b5
    FSTP double ptr [ESP]               ; 005769b8
    CALL crt_math.c_floor_FUN_005c0880  ; 005769bb
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 005769c0
    MOV dword ptr [ESP + 0x84],EDX      ; 005769c7
    FLD double ptr [ESP + 0x80]         ; 005769ce
    ADD ESP,0x8                         ; 005769d5
    CALL crt_math.c_round_FUN_005c03a0  ; 005769d8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [ESP + 0x88]      ; 005769dd
    FISTP dword ptr [ESP + 0x84]        ; 005769e4
    CMP EDI,EAX                         ; 005769eb
    JLE 0x00576af4                      ; 005769ed
        ;   XREF to: 00576af4 (CONDITIONAL_JUMP)  ; LAB_00576af4
    MOV EDX,dword ptr [ESP + 0x84]      ; 005769f3
    TEST EDX,EDX                        ; 005769fa
    JLE 0x00576af4                      ; 005769fc
        ;   XREF to: 00576af4 (CONDITIONAL_JUMP)  ; LAB_00576af4
    CMP EDI,EDX                         ; 00576a02
    JG 0x00576a0d                       ; 00576a04
        ;   XREF to: 00576a0d (CONDITIONAL_JUMP)  ; LAB_00576a0d
    MOV dword ptr [ESP + 0x84],EDI      ; 00576a06
    CMP dword ptr [ESP + 0x88],0x0      ; 00576a0d
        ;   Label: LAB_00576a0d
    JL 0x00576b0b                       ; 00576a15
        ;   XREF to: 00576b0b (CONDITIONAL_JUMP)  ; LAB_00576b0b
    MOV ESI,dword ptr [ESP + 0x84]      ; 00576a1b
        ;   Label: LAB_00576a1b
    SUB ESI,dword ptr [ESP + 0x88]      ; 00576a22
    CMP ESI,0x1                         ; 00576a29
    JGE 0x00576a49                      ; 00576a2c
        ;   XREF to: 00576a49 (CONDITIONAL_JUMP)  ; LAB_00576a49
    MOV EDX,dword ptr [ESP + 0x84]      ; 00576a2e
    MOV ESI,0x1                         ; 00576a35
    CMP EDI,EDX                         ; 00576a3a
    JG 0x00576a49                       ; 00576a3c
        ;   XREF to: 00576a49 (CONDITIONAL_JUMP)  ; LAB_00576a49
    MOV EAX,EDI                         ; 00576a3e
    SUB EAX,ESI                         ; 00576a40
    MOV dword ptr [ESP + 0x88],EAX      ; 00576a42
    XOR ECX,ECX                         ; 00576a49
        ;   Label: LAB_00576a49
    XOR EBX,EBX                         ; 00576a4b
    MOV dword ptr [ESP + 0x8],ECX       ; 00576a4d
    MOV dword ptr [ESP + 0xc],ECX       ; 00576a51
    TEST ESI,ESI                        ; 00576a55
    JLE 0x00576aa7                      ; 00576a57
        ;   XREF to: 00576aa7 (CONDITIONAL_JUMP)  ; LAB_00576aa7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00576a59
    MOV EDX,dword ptr [EAX*0x4 + 0x2c806bc] ; 00576a5c
    MOV dword ptr [ESP + 0x80],EDX      ; 00576a63
    MOV EDX,dword ptr [EAX*0x4 + 0x2c806dc] ; 00576a6a
    MOV EAX,dword ptr [ESP + 0x88]      ; 00576a71
    FLD double ptr [ESP + 0x8]          ; 00576a78
    SHL EAX,0x2                         ; 00576a7c
    MOV ECX,dword ptr [ESP + 0x80]      ; 00576a7f
    ADD EDX,EAX                         ; 00576a86
    ADD ECX,EAX                         ; 00576a88
    FLD float ptr [ECX]                 ; 00576a8a
        ;   Label: LAB_00576a8a
    FMUL ST0                            ; 00576a8c
    FLD float ptr [EDX]                 ; 00576a8e
    FMUL ST0                            ; 00576a90
    FADDP                               ; 00576a92
    FSQRT                               ; 00576a94
    ADD EDX,0x4                         ; 00576a96
    ADD ECX,0x4                         ; 00576a99
    INC EBX                             ; 00576a9c
    FADDP                               ; 00576a9d
    CMP EBX,ESI                         ; 00576a9f
    JL 0x00576a8a                       ; 00576aa1
        ;   XREF to: 00576a8a (CONDITIONAL_JUMP)  ; LAB_00576a8a
    FSTP double ptr [ESP + 0x8]         ; 00576aa3
    MOV dword ptr [ESP + 0xb0],ESI      ; 00576aa7
        ;   Label: LAB_00576aa7
    FILD dword ptr [ESP + 0xb0]         ; 00576aae
    FDIVR double ptr [ESP + 0x8]        ; 00576ab5
    MOV dword ptr [ESP + 0xb0],EDI      ; 00576ab9
    FILD dword ptr [ESP + 0xb0]         ; 00576ac0
    FDIVP                               ; 00576ac7
    FSQRT                               ; 00576ac9
    FMUL double ptr [0x005f45a0]        ; 00576acb | DAT_005f45a0
    FST double ptr [ESP + 0x8]          ; 00576ad1
    FSTP float ptr [ESP + 0xac]         ; 00576ad5
    MOV EAX,dword ptr [ESP + 0xac]      ; 00576adc
    MOV ESP,EBP                         ; 00576ae3
    POP EBP                             ; 00576ae5
    POP EDI                             ; 00576ae6
    POP ESI                             ; 00576ae7
    POP EBX                             ; 00576ae8
    RET                                 ; 00576ae9
    MOV EDX,EBX                         ; 00576aea
        ;   Label: LAB_00576aea
    MOV EBX,dword ptr [ECX + EDX*0x1]   ; 00576aec
    JMP 0x005766b1                      ; 00576aef
        ;   XREF to: 005766b1 (UNCONDITIONAL_JUMP)  ; LAB_005766b1
    XOR ESI,ESI                         ; 00576af4
        ;   Label: LAB_00576af4
    MOV dword ptr [ESP + 0xac],ESI      ; 00576af6
    MOV EAX,dword ptr [ESP + 0xac]      ; 00576afd
    MOV ESP,EBP                         ; 00576b04
    POP EBP                             ; 00576b06
    POP EDI                             ; 00576b07
    POP ESI                             ; 00576b08
    POP EBX                             ; 00576b09
    RET                                 ; 00576b0a
    XOR ESI,ESI                         ; 00576b0b
        ;   Label: LAB_00576b0b
    MOV dword ptr [ESP + 0x88],ESI      ; 00576b0d
    JMP 0x00576a1b                      ; 00576b14
        ;   XREF to: 00576a1b (UNCONDITIONAL_JUMP)  ; LAB_00576a1b

