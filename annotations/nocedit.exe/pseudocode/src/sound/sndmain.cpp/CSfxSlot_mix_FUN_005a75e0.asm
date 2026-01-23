; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot * this_ptr, SMixBuffer mix_buffer)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; SMixBuffer       Stack[0x8]:44   mix_buffer
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined8       Stack[-0x84]:8  local_84
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
; XREF[1]:
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 at 005acc82
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0065036f
;   TerminatedCString s_SfxSlot_mix_must_be_lock_00650384
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   float*[8] g_ChannelTertiaryBuffers
;   undefined4 g_ChannelTertiaryBuffers[1]
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
;   sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70
;   sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005a5fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a75e0
        ;   Label: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
    PUSH ESI                            ; 005a75e1
    PUSH EDI                            ; 005a75e2
    PUSH EBP                            ; 005a75e3
    MOV EBP,ESP                         ; 005a75e4
    SUB ESP,0xb0                        ; 005a75e6
    AND ESP,0xfffffff8                  ; 005a75ec
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a75ef
    CMP dword ptr [0x03f6940c],0x0      ; 005a75f2 | g_SoundLockCount
    JLE 0x005a774e                      ; 005a75f9
        ;   XREF to: 005a774e (CONDITIONAL_JUMP)  ; LAB_005a774e
    CMP dword ptr [EDI + 0x74],0x0      ; 005a75ff
        ;   Label: LAB_005a75ff
    JZ 0x005a7747                       ; 005a7603
        ;   XREF to: 005a7747 (CONDITIONAL_JUMP)  ; LAB_005a7747
    MOV EAX,dword ptr [EBP + 0x38]      ; 005a7609
    MOV dword ptr [ESP + 0x64],EAX      ; 005a760c
    MOV EAX,0x1                         ; 005a7610
    MOV EDX,dword ptr [EDI + 0x78]      ; 005a7615
    MOV dword ptr [ESP + 0x5c],EAX      ; 005a7618
    TEST EDX,EDX                        ; 005a761c
    JZ 0x005a7668                       ; 005a761e
        ;   XREF to: 005a7668 (CONDITIONAL_JUMP)  ; LAB_005a7668
    MOV ECX,dword ptr [EDX + 0x104]     ; 005a7620
    ADD ECX,0x6                         ; 005a7626
    SHL EAX,CL                          ; 005a7629
    MOV dword ptr [ESP + 0xac],EAX      ; 005a762b
    FILD dword ptr [ESP + 0xac]         ; 005a7632
    FLD1                                ; 005a7639
    FDIVRP                              ; 005a763b
    XOR EDX,EDX                         ; 005a763d
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005a763f
    FSTP float ptr [ESP + 0x54]         ; 005a7642
    TEST ECX,ECX                        ; 005a7646
    JLE 0x005a7668                      ; 005a7648
        ;   XREF to: 005a7668 (CONDITIONAL_JUMP)  ; LAB_005a7668
    MOV EBX,dword ptr [EBP + 0x3c]      ; 005a764a
    MOV ECX,EDI                         ; 005a764d
    FLD float ptr [ECX + 0xa0]          ; 005a764f
        ;   Label: LAB_005a764f
    FCOMP float ptr [ESP + 0x54]        ; 005a7655
    FNSTSW AX                           ; 005a7659
    SAHF                                ; 005a765b
    JBE 0x005a7776                      ; 005a765c
        ;   XREF to: 005a7776 (CONDITIONAL_JUMP)  ; LAB_005a7776
    XOR ESI,ESI                         ; 005a7662
    MOV dword ptr [ESP + 0x5c],ESI      ; 005a7664
    MOV EAX,dword ptr [EBP + 0x3c]      ; 005a7668
        ;   Label: LAB_005a7668
    XOR ESI,ESI                         ; 005a766b
    TEST EAX,EAX                        ; 005a766d
    JLE 0x005a76ef                      ; 005a766f
        ;   XREF to: 005a76ef (CONDITIONAL_JUMP)  ; LAB_005a76ef
    MOV EBX,EDI                         ; 005a7675
    CMP dword ptr [ESP + 0x5c],0x0      ; 005a7677
        ;   Label: LAB_005a7677
    JZ 0x005a7787                       ; 005a767c
        ;   XREF to: 005a7787 (CONDITIONAL_JUMP)  ; LAB_005a7787
    MOV EAX,dword ptr [EBX + 0xc0]      ; 005a7682
        ;   Label: LAB_005a7682
    MOV dword ptr [EBX + 0xe0],EAX      ; 005a7688
    MOV EAX,dword ptr [EBX + 0xe0]      ; 005a768e
        ;   Label: LAB_005a768e
    LEA ECX,[ESI*0x4 + 0x0]             ; 005a7694
    SHL EAX,0x2                         ; 005a769b
    ADD dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 005a769e
    MOV EAX,dword ptr [EBX + 0xe0]      ; 005a76a2
    SUB EAX,dword ptr [EBX + 0xc0]      ; 005a76a8
    CDQ                                 ; 005a76ae
    XOR EAX,EDX                         ; 005a76af
    SUB EAX,EDX                         ; 005a76b1
    CMP EAX,0x1                         ; 005a76b3
    JLE 0x005a7799                      ; 005a76b6
        ;   XREF to: 005a7799 (CONDITIONAL_JUMP)  ; LAB_005a7799
    MOV EAX,dword ptr [ECX + EBP*0x1 + 0x18] ; 005a76bc
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 005a76c0
    MOV EAX,dword ptr [ECX + 0x3f6928c] ; 005a76c4 | g_ChannelTertiaryBuffers | g_ChannelTertiaryBuffers[1]
    MOV dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 005a76ca
    MOV EAX,dword ptr [EBP + 0x38]      ; 005a76ce
    SHL EAX,0x2                         ; 005a76d1
    PUSH EAX                            ; 005a76d4
    PUSH 0x0                            ; 005a76d5
    MOV EDX,dword ptr [ECX + EBP*0x1 + 0x18] ; 005a76d7
    PUSH EDX                            ; 005a76db
    CALL crt_memory.c_memset_FUN_005fde40 ; 005a76dc
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005a76e1
    MOV EDX,dword ptr [EBP + 0x3c]      ; 005a76e4
        ;   Label: LAB_005a76e4
    INC ESI                             ; 005a76e7
    ADD EBX,0x4                         ; 005a76e8
    CMP ESI,EDX                         ; 005a76eb
    JL 0x005a7677                       ; 005a76ed
        ;   XREF to: 005a7677 (CONDITIONAL_JUMP)  ; LAB_005a7677
    LEA EAX,[EDI + 0xa0]                ; 005a76ef
        ;   Label: LAB_005a76ef
    MOV dword ptr [ESP + 0x58],EAX      ; 005a76f5
    CMP dword ptr [EDI + 0x74],0x0      ; 005a76f9
        ;   Label: LAB_005a76f9
    JNZ 0x005a77a4                      ; 005a76fd
        ;   XREF to: 005a77a4 (CONDITIONAL_JUMP)  ; LAB_005a77a4
    PUSH EDI                            ; 005a7703
        ;   Label: LAB_005a7703
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a7704
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
    ADD ESP,0x4                         ; 005a7709
    XOR EBX,EBX                         ; 005a770c
        ;   Label: LAB_005a770c
    MOV ESI,dword ptr [EBP + 0x3c]      ; 005a770e
    MOV dword ptr [ESP + 0x68],EBX      ; 005a7711
    TEST ESI,ESI                        ; 005a7715
    JLE 0x005a7747                      ; 005a7717
        ;   XREF to: 005a7747 (CONDITIONAL_JUMP)  ; LAB_005a7747
    MOV dword ptr [ESP + 0x74],EBX      ; 005a7719
    MOV EAX,dword ptr [ESP + 0x74]      ; 005a771d
        ;   Label: LAB_005a771d
    CMP dword ptr [ESP + EAX*0x1 + 0x1c],0x0 ; 005a7721
    JNZ 0x005a7da0                      ; 005a7726
        ;   XREF to: 005a7da0 (CONDITIONAL_JUMP)  ; LAB_005a7da0
    MOV EAX,dword ptr [ESP + 0x74]      ; 005a772c
        ;   Label: LAB_005a772c
    MOV EDX,dword ptr [ESP + 0x68]      ; 005a7730
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005a7734
    ADD EAX,0x4                         ; 005a7737
    INC EDX                             ; 005a773a
    MOV dword ptr [ESP + 0x74],EAX      ; 005a773b
    MOV dword ptr [ESP + 0x68],EDX      ; 005a773f
    CMP EDX,ECX                         ; 005a7743
    JL 0x005a771d                       ; 005a7745
        ;   XREF to: 005a771d (CONDITIONAL_JUMP)  ; LAB_005a771d
    MOV ESP,EBP                         ; 005a7747
        ;   Label: LAB_005a7747
    POP EBP                             ; 005a7749
    POP EDI                             ; 005a774a
    POP ESI                             ; 005a774b
    POP EBX                             ; 005a774c
    RET                                 ; 005a774d
    MOV ECX,0x65036f                    ; 005a774e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a774e
    MOV EBX,0xa27                       ; 005a7753
    PUSH 0x650384                       ; 005a7758 | = "SfxSlot::mix - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a775d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a7763 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a7769
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a776e
    JMP 0x005a75ff                      ; 005a7771
        ;   XREF to: 005a75ff (UNCONDITIONAL_JUMP)  ; LAB_005a75ff
    INC EDX                             ; 005a7776
        ;   Label: LAB_005a7776
    ADD ECX,0x4                         ; 005a7777
    CMP EDX,EBX                         ; 005a777a
    JL 0x005a764f                       ; 005a777c
        ;   XREF to: 005a764f (CONDITIONAL_JUMP)  ; LAB_005a764f
    JMP 0x005a7668                      ; 005a7782
        ;   XREF to: 005a7668 (UNCONDITIONAL_JUMP)  ; LAB_005a7668
    CMP dword ptr [EBX + 0xe0],0x0      ; 005a7787
        ;   Label: LAB_005a7787
    JL 0x005a7682                       ; 005a778e
        ;   XREF to: 005a7682 (CONDITIONAL_JUMP)  ; LAB_005a7682
    JMP 0x005a768e                      ; 005a7794
        ;   XREF to: 005a768e (UNCONDITIONAL_JUMP)  ; LAB_005a768e
    XOR EAX,EAX                         ; 005a7799
        ;   Label: LAB_005a7799
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 005a779b
    JMP 0x005a76e4                      ; 005a779f
        ;   XREF to: 005a76e4 (UNCONDITIONAL_JUMP)  ; LAB_005a76e4
    MOV EBX,dword ptr [EDI + 0x78]      ; 005a77a4
        ;   Label: LAB_005a77a4
    TEST EBX,EBX                        ; 005a77a7
    JZ 0x005a7703                       ; 005a77a9
        ;   XREF to: 005a7703 (CONDITIONAL_JUMP)  ; LAB_005a7703
    FLDZ                                ; 005a77af
    FCOMP double ptr [EDI + 0x60]       ; 005a77b1
    FNSTSW AX                           ; 005a77b4
    SAHF                                ; 005a77b6
    JA 0x005a7703                       ; 005a77b7
        ;   XREF to: 005a7703 (CONDITIONAL_JUMP)  ; LAB_005a7703
    MOV ESI,dword ptr [EBP + 0x38]      ; 005a77bd
    CMP ESI,0x1                         ; 005a77c0
    JL 0x005a770c                       ; 005a77c3
        ;   XREF to: 005a770c (CONDITIONAL_JUMP)  ; LAB_005a770c
    MOV EDX,EBX                         ; 005a77c9
    FILD dword ptr [EDX + 0x10c]        ; 005a77cb
    FILD dword ptr [EBP + 0x40]         ; 005a77d1
    FDIVP                               ; 005a77d4
    FMUL float ptr [EDI + 0x7c]         ; 005a77d6
    FLDZ                                ; 005a77d9
    FXCH                                ; 005a77db
    FSTP double ptr [ESP + 0x8]         ; 005a77dd
    FCOMP double ptr [ESP + 0x8]        ; 005a77e1
    FNSTSW AX                           ; 005a77e5
    SAHF                                ; 005a77e7
    JNC 0x005a770c                      ; 005a77e8
        ;   XREF to: 005a770c (CONDITIONAL_JUMP)  ; LAB_005a770c
    FILD dword ptr [EDX + 0x160]        ; 005a77ee
    MOV EAX,ESI                         ; 005a77f4
    FSTP double ptr [ESP + 0x10]        ; 005a77f6
    MOV dword ptr [ESP + 0x18],ESI      ; 005a77fa
    XOR EAX,ESI                         ; 005a77fe
    MOV ECX,dword ptr [EBX + 0x110]     ; 005a7800
    MOV dword ptr [ESP + 0x70],EAX      ; 005a7806
    TEST ECX,ECX                        ; 005a780a
    JLE 0x005a785a                      ; 005a780c
        ;   XREF to: 005a785a (CONDITIONAL_JUMP)  ; LAB_005a785a
    MOV EAX,dword ptr [EDI + 0x124]     ; 005a780e
    FILD dword ptr [EDX + EAX*0x4 + 0x128] ; 005a7814
    FSUB double ptr [EDI + 0x60]        ; 005a781b
    FDIV double ptr [ESP + 0x8]         ; 005a781e
    SUB ESP,0x8                         ; 005a7822
    FSTP double ptr [ESP]               ; 005a7825
    CALL crt_math.c_floor_FUN_005feb90  ; 005a7828
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 005a782d
    MOV dword ptr [ESP + 0x48],EDX      ; 005a7831
    FLD double ptr [ESP + 0x44]         ; 005a7835
    ADD ESP,0x8                         ; 005a7839
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a783c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x60]        ; 005a7841
    MOV EBX,dword ptr [ESP + 0x60]      ; 005a7845
    CMP ESI,EBX                         ; 005a7849
    JLE 0x005a785a                      ; 005a784b
        ;   XREF to: 005a785a (CONDITIONAL_JUMP)  ; LAB_005a785a
    MOV ESI,0x1                         ; 005a784d
    MOV dword ptr [ESP + 0x18],EBX      ; 005a7852
    MOV dword ptr [ESP + 0x70],ESI      ; 005a7856
    MOV EAX,dword ptr [EDI + 0x11c]     ; 005a785a
        ;   Label: LAB_005a785a
    MOV dword ptr [ESP],EAX             ; 005a7860
    MOV EAX,dword ptr [EDI + 0x120]     ; 005a7863
    MOV dword ptr [ESP + 0x4],EAX       ; 005a7869
    FLD double ptr [ESP + 0x10]         ; 005a786d
    FSUB double ptr [ESP]               ; 005a7871
    FDIV double ptr [ESP + 0x8]         ; 005a7874
    XOR EAX,EAX                         ; 005a7878
    MOV dword ptr [ESP + 0x6c],EAX      ; 005a787a
    SUB ESP,0x8                         ; 005a787e
    FSTP double ptr [ESP]               ; 005a7881
    CALL crt_math.c_floor_FUN_005feb90  ; 005a7884
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 005a7889
    MOV dword ptr [ESP + 0x48],EDX      ; 005a788d
    FLD double ptr [ESP + 0x44]         ; 005a7891
    ADD ESP,0x8                         ; 005a7895
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a7898
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 005a789d
    CMP dword ptr [ESP + 0x78],0x1      ; 005a78a1
    JGE 0x005a78f5                      ; 005a78a6
        ;   XREF to: 005a78f5 (CONDITIONAL_JUMP)  ; LAB_005a78f5
    FLD double ptr [ESP]                ; 005a78a8
    FSUB double ptr [ESP + 0x10]        ; 005a78ab
    FLDZ                                ; 005a78af
    FXCH                                ; 005a78b1
    FSTP double ptr [ESP]               ; 005a78b3
    FCOMP double ptr [ESP]              ; 005a78b6
    FNSTSW AX                           ; 005a78b9
    SAHF                                ; 005a78bb
    JBE 0x005a78c7                      ; 005a78bc
        ;   XREF to: 005a78c7 (CONDITIONAL_JUMP)  ; LAB_005a78c7
    XOR ECX,ECX                         ; 005a78be
    MOV dword ptr [ESP],ECX             ; 005a78c0
    MOV dword ptr [ESP + 0x4],ECX       ; 005a78c3
    FLD double ptr [ESP + 0x10]         ; 005a78c7
        ;   Label: LAB_005a78c7
    FSUB double ptr [ESP]               ; 005a78cb
    FDIV double ptr [ESP + 0x8]         ; 005a78ce
    SUB ESP,0x8                         ; 005a78d2
    FSTP double ptr [ESP]               ; 005a78d5
    CALL crt_math.c_floor_FUN_005feb90  ; 005a78d8
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 005a78dd
    MOV dword ptr [ESP + 0x48],EDX      ; 005a78e1
    FLD double ptr [ESP + 0x44]         ; 005a78e5
    ADD ESP,0x8                         ; 005a78e9
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a78ec
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 005a78f1
    MOV EAX,dword ptr [ESP + 0x78]      ; 005a78f5
        ;   Label: LAB_005a78f5
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a78f9
    CMP EAX,ESI                         ; 005a78fd
    JGE 0x005a79eb                      ; 005a78ff
        ;   XREF to: 005a79eb (CONDITIONAL_JUMP)  ; LAB_005a79eb
    MOV ESI,0x1                         ; 005a7905
    XOR EBX,EBX                         ; 005a790a
    MOV dword ptr [ESP + 0x18],EAX      ; 005a790c
    MOV dword ptr [ESP + 0x70],EBX      ; 005a7910
    MOV dword ptr [ESP + 0x6c],ESI      ; 005a7914
    CMP dword ptr [ESP + 0x5c],0x0      ; 005a7918
        ;   Label: LAB_005a7918
    JZ 0x005a79fe                       ; 005a791d
        ;   XREF to: 005a79fe (CONDITIONAL_JUMP)  ; LAB_005a79fe
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a7923
    MOV dword ptr [ESP + 0xac],EAX      ; 005a7927
    FILD dword ptr [ESP + 0xac]         ; 005a792e
    FMUL double ptr [ESP + 0x8]         ; 005a7935
    FADD double ptr [ESP]               ; 005a7939
    FSTP double ptr [ESP]               ; 005a793c
        ;   Label: LAB_005a793c
    CMP dword ptr [ESP + 0x6c],0x0      ; 005a793f
        ;   Label: LAB_005a793f
    JZ 0x005a794f                       ; 005a7944
        ;   XREF to: 005a794f (CONDITIONAL_JUMP)  ; LAB_005a794f
    XOR ESI,ESI                         ; 005a7946
    MOV dword ptr [ESP],ESI             ; 005a7948
    MOV dword ptr [ESP + 0x4],ESI       ; 005a794b
    FLD double ptr [ESP]                ; 005a794f
        ;   Label: LAB_005a794f
    FCOMP double ptr [ESP + 0x10]       ; 005a7952
    FNSTSW AX                           ; 005a7956
    SAHF                                ; 005a7958
    JC 0x005a7965                       ; 005a7959
        ;   XREF to: 005a7965 (CONDITIONAL_JUMP)  ; LAB_005a7965
    FLD double ptr [ESP]                ; 005a795b
    FSUB double ptr [ESP + 0x10]        ; 005a795e
    FSTP double ptr [ESP]               ; 005a7962
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a7965
        ;   Label: LAB_005a7965
    PUSH EDX                            ; 005a7969
    MOV ECX,dword ptr [ESP + 0x4]       ; 005a796a
    PUSH ECX                            ; 005a796e
    PUSH EDI                            ; 005a796f
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170 ; 005a7970
        ;   XREF to: 005a8170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(CSfxSlot * this_ptr, double hardware_playback_pos)
    ADD ESP,0xc                         ; 005a7975
    CMP dword ptr [ESP + 0x70],0x0      ; 005a7978
    JZ 0x005a79b4                       ; 005a797d
        ;   XREF to: 005a79b4 (CONDITIONAL_JUMP)  ; LAB_005a79b4
    MOV EDX,dword ptr [EDI + 0x78]      ; 005a797f
    MOV ESI,dword ptr [EDI + 0x124]     ; 005a7982
    MOV EAX,dword ptr [EDI + 0x124]     ; 005a7988
    INC ESI                             ; 005a798e
    FILD dword ptr [EDX + EAX*0x4 + 0x13c] ; 005a798f
    MOV dword ptr [EDI + 0x124],ESI     ; 005a7996
    MOV EDX,dword ptr [EDI + 0x78]      ; 005a799c
    FSTP double ptr [EDI + 0x60]        ; 005a799f
    CMP ESI,dword ptr [EDX + 0x124]     ; 005a79a2
    JL 0x005a79b4                       ; 005a79a8
        ;   XREF to: 005a79b4 (CONDITIONAL_JUMP)  ; LAB_005a79b4
    MOV dword ptr [EDI + 0x124],0x0     ; 005a79aa
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a79b4
        ;   Label: LAB_005a79b4
    MOV EBX,dword ptr [EBP + 0x38]      ; 005a79b8
    MOV ESI,dword ptr [EBP + 0x3c]      ; 005a79bb
    SUB EBX,EAX                         ; 005a79be
    XOR EDX,EDX                         ; 005a79c0
    MOV dword ptr [EBP + 0x38],EBX      ; 005a79c2
    TEST ESI,ESI                        ; 005a79c5
    JLE 0x005a76f9                      ; 005a79c7
        ;   XREF to: 005a76f9 (CONDITIONAL_JUMP)  ; LAB_005a76f9
    LEA ECX,[EAX*0x4 + 0x0]             ; 005a79cd
    XOR EAX,EAX                         ; 005a79d4
    ADD dword ptr [EAX + EBP*0x1 + 0x18],ECX ; 005a79d6
        ;   Label: LAB_005a79d6
    INC EDX                             ; 005a79da
    MOV ESI,dword ptr [EBP + 0x3c]      ; 005a79db
    ADD EAX,0x4                         ; 005a79de
    CMP EDX,ESI                         ; 005a79e1
    JGE 0x005a76f9                      ; 005a79e3
        ;   XREF to: 005a76f9 (CONDITIONAL_JUMP)  ; LAB_005a76f9
    JMP 0x005a79d6                      ; 005a79e9
        ;   XREF to: 005a79d6 (UNCONDITIONAL_JUMP)  ; LAB_005a79d6
    JNZ 0x005a7918                      ; 005a79eb
        ;   XREF to: 005a7918 (CONDITIONAL_JUMP)  ; LAB_005a7918
        ;   Label: LAB_005a79eb
    MOV dword ptr [ESP + 0x6c],0x1      ; 005a79f1
    JMP 0x005a7918                      ; 005a79f9
        ;   XREF to: 005a7918 (UNCONDITIONAL_JUMP)  ; LAB_005a7918
    MOV EAX,dword ptr [EDI + 0x78]      ; 005a79fe
        ;   Label: LAB_005a79fe
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a7a01
    MOV ECX,dword ptr [EAX + 0x104]     ; 005a7a05
    SHL EDX,0x2                         ; 005a7a0b
    CMP ECX,0x8                         ; 005a7a0e
    JNZ 0x005a7bb5                      ; 005a7a11
        ;   XREF to: 005a7bb5 (CONDITIONAL_JUMP)  ; LAB_005a7bb5
    CMP dword ptr [EAX + 0x108],0x2     ; 005a7a17
    JNZ 0x005a7b0d                      ; 005a7a1e
        ;   XREF to: 005a7b0d (CONDITIONAL_JUMP)  ; LAB_005a7b0d
    CMP dword ptr [ESP + 0x18],0x0      ; 005a7a24
    JLE 0x005a793f                      ; 005a7a29
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    XOR EAX,EAX                         ; 005a7a2f
    MOV dword ptr [ESP + 0x80],EDX      ; 005a7a31
    MOV dword ptr [ESP + 0xa0],EAX      ; 005a7a38
    FLD double ptr [ESP]                ; 005a7a3f
        ;   Label: LAB_005a7a3f
    MOV EDX,dword ptr [EDI + 0x78]      ; 005a7a42
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a7a45
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [EDX + 0x120]     ; 005a7a4a
    FISTP dword ptr [ESP + 0xac]        ; 005a7a50
    MOV EAX,dword ptr [ESP + 0xac]      ; 005a7a57
    MOV DL,byte ptr [EDX + EAX*0x2]     ; 005a7a5e
    AND EDX,0xff                        ; 005a7a61
    SUB EDX,0x80                        ; 005a7a67
    MOV dword ptr [ESP + 0xac],EDX      ; 005a7a6d
    FILD dword ptr [ESP + 0xac]         ; 005a7a74
    FSTP float ptr [ESP + 0x4c]         ; 005a7a7b
    MOV EDX,dword ptr [EDI + 0x78]      ; 005a7a7f
    MOV EDX,dword ptr [EDX + 0x120]     ; 005a7a82
    MOV AL,byte ptr [EDX + EAX*0x2 + 0x1] ; 005a7a88
    AND EAX,0xff                        ; 005a7a8c
    SUB EAX,0x80                        ; 005a7a91
    MOV dword ptr [ESP + 0xac],EAX      ; 005a7a96
    MOV EDX,dword ptr [EBP + 0x3c]      ; 005a7a9d
    FILD dword ptr [ESP + 0xac]         ; 005a7aa0
    FSTP float ptr [ESP + 0x50]         ; 005a7aa7
    XOR EAX,EAX                         ; 005a7aab
    TEST EDX,EDX                        ; 005a7aad
    JLE 0x005a7ade                      ; 005a7aaf
        ;   XREF to: 005a7ade (CONDITIONAL_JUMP)  ; LAB_005a7ade
    MOV ESI,dword ptr [ESP + 0xa0]      ; 005a7ab1
    MOV EDX,EDI                         ; 005a7ab8
    MOV EBX,EAX                         ; 005a7aba
        ;   Label: LAB_005a7aba
    AND EBX,0x1                         ; 005a7abc
    FLD float ptr [ESP + EBX*0x4 + 0x4c] ; 005a7abf
    FMUL float ptr [EDX + 0xa0]         ; 005a7ac3
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 005a7ac9
    FADD float ptr [ECX + ESI*0x1]      ; 005a7acd
    INC EAX                             ; 005a7ad0
    FSTP float ptr [ECX + ESI*0x1]      ; 005a7ad1
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005a7ad4
    ADD EDX,0x4                         ; 005a7ad7
    CMP EAX,ECX                         ; 005a7ada
    JL 0x005a7aba                       ; 005a7adc
        ;   XREF to: 005a7aba (CONDITIONAL_JUMP)  ; LAB_005a7aba
    FLD double ptr [ESP]                ; 005a7ade
        ;   Label: LAB_005a7ade
    MOV EBX,dword ptr [ESP + 0xa0]      ; 005a7ae1
    MOV ESI,dword ptr [ESP + 0x80]      ; 005a7ae8
    FADD double ptr [ESP + 0x8]         ; 005a7aef
    ADD EBX,0x4                         ; 005a7af3
    FSTP double ptr [ESP]               ; 005a7af6
    MOV dword ptr [ESP + 0xa0],EBX      ; 005a7af9
    CMP EBX,ESI                         ; 005a7b00
    JGE 0x005a793f                      ; 005a7b02
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    JMP 0x005a7a3f                      ; 005a7b08
        ;   XREF to: 005a7a3f (UNCONDITIONAL_JUMP)  ; LAB_005a7a3f
    CMP dword ptr [ESP + 0x18],0x0      ; 005a7b0d
        ;   Label: LAB_005a7b0d
    JLE 0x005a793f                      ; 005a7b12
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    MOV dword ptr [ESP + 0x84],EDX      ; 005a7b18
    XOR ESI,ESI                         ; 005a7b1f
    FLD double ptr [ESP]                ; 005a7b21
        ;   Label: LAB_005a7b21
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a7b24
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [EDI + 0x78]      ; 005a7b29
    FISTP dword ptr [ESP + 0xac]        ; 005a7b2c
    MOV EAX,dword ptr [EAX + 0x120]     ; 005a7b33
    ADD EAX,dword ptr [ESP + 0xac]      ; 005a7b39
    MOV AL,byte ptr [EAX]               ; 005a7b40
    AND EAX,0xff                        ; 005a7b42
    SUB EAX,0x80                        ; 005a7b47
    MOV dword ptr [ESP + 0xac],EAX      ; 005a7b4c
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005a7b53
    FILD dword ptr [ESP + 0xac]         ; 005a7b56
    FSTP float ptr [ESP + 0xa8]         ; 005a7b5d
    XOR EAX,EAX                         ; 005a7b64
    TEST ECX,ECX                        ; 005a7b66
    JLE 0x005a7b94                      ; 005a7b68
        ;   XREF to: 005a7b94 (CONDITIONAL_JUMP)  ; LAB_005a7b94
    FLD float ptr [ESP + 0xa8]          ; 005a7b6a
    MOV EDX,EDI                         ; 005a7b71
    MOV EBX,ESI                         ; 005a7b73
    FLD ST0                             ; 005a7b75
        ;   Label: LAB_005a7b75
    FMUL float ptr [EDX + 0xa0]         ; 005a7b77
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 005a7b7d
    FADD float ptr [ECX + EBX*0x1]      ; 005a7b81
    INC EAX                             ; 005a7b84
    FSTP float ptr [ECX + EBX*0x1]      ; 005a7b85
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005a7b88
    ADD EDX,0x4                         ; 005a7b8b
    CMP EAX,ECX                         ; 005a7b8e
    JL 0x005a7b75                       ; 005a7b90
        ;   XREF to: 005a7b75 (CONDITIONAL_JUMP)  ; LAB_005a7b75
    FSTP ST0                            ; 005a7b92
    FLD double ptr [ESP]                ; 005a7b94
        ;   Label: LAB_005a7b94
    MOV EBX,dword ptr [ESP + 0x84]      ; 005a7b97
    FADD double ptr [ESP + 0x8]         ; 005a7b9e
    ADD ESI,0x4                         ; 005a7ba2
    FSTP double ptr [ESP]               ; 005a7ba5
    CMP ESI,EBX                         ; 005a7ba8
    JGE 0x005a793f                      ; 005a7baa
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    JMP 0x005a7b21                      ; 005a7bb0
        ;   XREF to: 005a7b21 (UNCONDITIONAL_JUMP)  ; LAB_005a7b21
    MOV EBX,dword ptr [EAX + 0x108]     ; 005a7bb5
        ;   Label: LAB_005a7bb5
    CMP EBX,0x2                         ; 005a7bbb
    JNZ 0x005a7cc6                      ; 005a7bbe
        ;   XREF to: 005a7cc6 (CONDITIONAL_JUMP)  ; LAB_005a7cc6
    CMP EBX,dword ptr [EBP + 0x3c]      ; 005a7bc4
    JZ 0x005a7c84                       ; 005a7bc7
        ;   XREF to: 005a7c84 (CONDITIONAL_JUMP)  ; LAB_005a7c84
    CMP dword ptr [ESP + 0x18],0x0      ; 005a7bcd
    JLE 0x005a793f                      ; 005a7bd2
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    XOR EAX,EAX                         ; 005a7bd8
    MOV dword ptr [ESP + 0x88],EDX      ; 005a7bda
    MOV dword ptr [ESP + 0x9c],EAX      ; 005a7be1
    FLD double ptr [ESP]                ; 005a7be8
        ;   Label: LAB_005a7be8
    MOV EDX,dword ptr [EDI + 0x78]      ; 005a7beb
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a7bee
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [EDX + 0x120]     ; 005a7bf3
    FISTP dword ptr [ESP + 0xac]        ; 005a7bf9
    MOV EAX,dword ptr [ESP + 0xac]      ; 005a7c00
    FILD word ptr [EDX + EAX*0x4]       ; 005a7c07
    FSTP float ptr [ESP + 0x44]         ; 005a7c0a
    MOV EDX,dword ptr [EDI + 0x78]      ; 005a7c0e
    MOV EDX,dword ptr [EDX + 0x120]     ; 005a7c11
    FILD word ptr [EDX + EAX*0x4 + 0x2] ; 005a7c17
    FSTP float ptr [ESP + 0x48]         ; 005a7c1b
    MOV EDX,dword ptr [EBP + 0x3c]      ; 005a7c1f
    XOR EAX,EAX                         ; 005a7c22
    TEST EDX,EDX                        ; 005a7c24
    JLE 0x005a7c55                      ; 005a7c26
        ;   XREF to: 005a7c55 (CONDITIONAL_JUMP)  ; LAB_005a7c55
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005a7c28
    MOV EDX,EDI                         ; 005a7c2f
    MOV EBX,EAX                         ; 005a7c31
        ;   Label: LAB_005a7c31
    AND EBX,0x1                         ; 005a7c33
    FLD float ptr [ESP + EBX*0x4 + 0x44] ; 005a7c36
    FMUL float ptr [EDX + 0xa0]         ; 005a7c3a
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 005a7c40
    FADD float ptr [ECX + ESI*0x1]      ; 005a7c44
    INC EAX                             ; 005a7c47
    FSTP float ptr [ECX + ESI*0x1]      ; 005a7c48
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005a7c4b
    ADD EDX,0x4                         ; 005a7c4e
    CMP EAX,ECX                         ; 005a7c51
    JL 0x005a7c31                       ; 005a7c53
        ;   XREF to: 005a7c31 (CONDITIONAL_JUMP)  ; LAB_005a7c31
    FLD double ptr [ESP]                ; 005a7c55
        ;   Label: LAB_005a7c55
    MOV EBX,dword ptr [ESP + 0x9c]      ; 005a7c58
    MOV ESI,dword ptr [ESP + 0x88]      ; 005a7c5f
    FADD double ptr [ESP + 0x8]         ; 005a7c66
    ADD EBX,0x4                         ; 005a7c6a
    FSTP double ptr [ESP]               ; 005a7c6d
    MOV dword ptr [ESP + 0x9c],EBX      ; 005a7c70
    CMP EBX,ESI                         ; 005a7c77
    JGE 0x005a793f                      ; 005a7c79
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    JMP 0x005a7be8                      ; 005a7c7f
        ;   XREF to: 005a7be8 (UNCONDITIONAL_JUMP)  ; LAB_005a7be8
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a7c84
        ;   Label: LAB_005a7c84
    PUSH EDX                            ; 005a7c88
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a7c89
    PUSH ECX                            ; 005a7c8d
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a7c8e
    PUSH EBX                            ; 005a7c92
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a7c93
    PUSH ESI                            ; 005a7c97
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a7c98
    PUSH EDX                            ; 005a7c9c
    MOV ECX,dword ptr [ESP + 0x6c]      ; 005a7c9d
    PUSH ECX                            ; 005a7ca1
    LEA EDX,[EBP + 0x18]                ; 005a7ca2
    PUSH EDX                            ; 005a7ca5
    MOV EBX,dword ptr [EAX + 0x120]     ; 005a7ca6
    PUSH EBX                            ; 005a7cac
    CALL sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005a5fb0 ; 005a7cad
        ;   XREF to: 005a5fb0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005a5fb0(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, ...)
    MOV dword ptr [ESP + 0x5c],EAX      ; 005a7cb2
    MOV dword ptr [ESP + 0x60],EDX      ; 005a7cb6
    FLD double ptr [ESP + 0x5c]         ; 005a7cba
    ADD ESP,0x20                        ; 005a7cbe
    JMP 0x005a793c                      ; 005a7cc1
        ;   XREF to: 005a793c (UNCONDITIONAL_JUMP)  ; LAB_005a793c
    CMP dword ptr [EBP + 0x3c],0x2      ; 005a7cc6
        ;   Label: LAB_005a7cc6
    JZ 0x005a7d5e                       ; 005a7cca
        ;   XREF to: 005a7d5e (CONDITIONAL_JUMP)  ; LAB_005a7d5e
    CMP dword ptr [ESP + 0x18],0x0      ; 005a7cd0
    JLE 0x005a793f                      ; 005a7cd5
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    MOV dword ptr [ESP + 0x8c],EDX      ; 005a7cdb
    XOR ESI,ESI                         ; 005a7ce2
    FLD double ptr [ESP]                ; 005a7ce4
        ;   Label: LAB_005a7ce4
    MOV EAX,dword ptr [EDI + 0x78]      ; 005a7ce7
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a7cea
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [EAX + 0x120]     ; 005a7cef
    FISTP dword ptr [ESP + 0xac]        ; 005a7cf5
    MOV EDX,dword ptr [ESP + 0xac]      ; 005a7cfc
    FILD word ptr [EAX + EDX*0x2]       ; 005a7d03
    FSTP float ptr [ESP + 0xa4]         ; 005a7d06
    MOV EDX,dword ptr [EBP + 0x3c]      ; 005a7d0d
    XOR EAX,EAX                         ; 005a7d10
    TEST EDX,EDX                        ; 005a7d12
    JLE 0x005a7d40                      ; 005a7d14
        ;   XREF to: 005a7d40 (CONDITIONAL_JUMP)  ; LAB_005a7d40
    FLD float ptr [ESP + 0xa4]          ; 005a7d16
    MOV EDX,EDI                         ; 005a7d1d
    MOV EBX,ESI                         ; 005a7d1f
    FLD ST0                             ; 005a7d21
        ;   Label: LAB_005a7d21
    FMUL float ptr [EDX + 0xa0]         ; 005a7d23
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 005a7d29
    FADD float ptr [ECX + EBX*0x1]      ; 005a7d2d
    INC EAX                             ; 005a7d30
    FSTP float ptr [ECX + EBX*0x1]      ; 005a7d31
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005a7d34
    ADD EDX,0x4                         ; 005a7d37
    CMP EAX,ECX                         ; 005a7d3a
    JL 0x005a7d21                       ; 005a7d3c
        ;   XREF to: 005a7d21 (CONDITIONAL_JUMP)  ; LAB_005a7d21
    FSTP ST0                            ; 005a7d3e
    FLD double ptr [ESP]                ; 005a7d40
        ;   Label: LAB_005a7d40
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a7d43
    FADD double ptr [ESP + 0x8]         ; 005a7d4a
    ADD ESI,0x4                         ; 005a7d4e
    FSTP double ptr [ESP]               ; 005a7d51
    CMP ESI,EAX                         ; 005a7d54
    JGE 0x005a793f                      ; 005a7d56
        ;   XREF to: 005a793f (CONDITIONAL_JUMP)  ; LAB_005a793f
    JMP 0x005a7ce4                      ; 005a7d5c
        ;   XREF to: 005a7ce4 (UNCONDITIONAL_JUMP)  ; LAB_005a7ce4
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a7d5e
        ;   Label: LAB_005a7d5e
    PUSH EDX                            ; 005a7d62
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a7d63
    PUSH ECX                            ; 005a7d67
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a7d68
    PUSH EBX                            ; 005a7d6c
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a7d6d
    PUSH ESI                            ; 005a7d71
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a7d72
    PUSH EDX                            ; 005a7d76
    MOV ECX,dword ptr [ESP + 0x6c]      ; 005a7d77
    PUSH ECX                            ; 005a7d7b
    LEA EDX,[EBP + 0x18]                ; 005a7d7c
    PUSH EDX                            ; 005a7d7f
    MOV EBX,dword ptr [EAX + 0x120]     ; 005a7d80
    PUSH EBX                            ; 005a7d86
    CALL sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70 ; 005a7d87
        ;   XREF to: 005a5e70 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, ...)
    MOV dword ptr [ESP + 0x5c],EAX      ; 005a7d8c
    MOV dword ptr [ESP + 0x60],EDX      ; 005a7d90
    FLD double ptr [ESP + 0x5c]         ; 005a7d94
    ADD ESP,0x20                        ; 005a7d98
    JMP 0x005a793c                      ; 005a7d9b
        ;   XREF to: 005a793c (UNCONDITIONAL_JUMP)  ; LAB_005a793c
    MOV EDX,dword ptr [ESP + 0x64]      ; 005a7da0
        ;   Label: LAB_005a7da0
    MOV dword ptr [ESP + 0x98],EAX      ; 005a7da4
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0xc0] ; 005a7dab
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0xe0] ; 005a7db2
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a7db9
    ADD EDX,ECX                         ; 005a7dbd
    MOV dword ptr [ESP + 0x7c],EAX      ; 005a7dbf
    IMUL ECX,EAX,0x0                    ; 005a7dc3
    SUB EDX,EBX                         ; 005a7dc6
    MOV dword ptr [ESP + 0x90],EDX      ; 005a7dc8
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a7dcf
    XOR EBX,EBX                         ; 005a7dd6
    MOV dword ptr [ESP + 0x94],EAX      ; 005a7dd8
    TEST EAX,EAX                        ; 005a7ddf
    JLE 0x005a7e39                      ; 005a7de1
        ;   XREF to: 005a7e39 (CONDITIONAL_JUMP)  ; LAB_005a7e39
    MOV EDX,ECX                         ; 005a7de3
        ;   Label: LAB_005a7de3
    MOV EAX,ECX                         ; 005a7de5
    SAR EDX,0x1f                        ; 005a7de7
    IDIV dword ptr [ESP + 0x90]         ; 005a7dea
    SHL EAX,0x2                         ; 005a7df1
    MOV dword ptr [ESP + 0xac],EAX      ; 005a7df4
    MOV EAX,dword ptr [ESP + 0x98]      ; 005a7dfb
    MOV EDX,dword ptr [ESP + 0xac]      ; 005a7e02
    MOV EAX,dword ptr [EAX + 0x3f6928c] ; 005a7e09 | g_ChannelTertiaryBuffers[1]
    MOV ESI,dword ptr [ESP + 0x98]      ; 005a7e0f
    ADD EAX,EDX                         ; 005a7e16
    MOV ESI,dword ptr [ESP + ESI*0x1 + 0x1c] ; 005a7e18
    FLD float ptr [EAX]                 ; 005a7e1c
    FADD float ptr [ESI + EBX*0x1]      ; 005a7e1e
    ADD EBX,0x4                         ; 005a7e21
    FSTP float ptr [ESI + EBX*0x1 + -0x4] ; 005a7e24
    MOV ESI,dword ptr [ESP + 0x7c]      ; 005a7e28
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a7e2c
    ADD ECX,ESI                         ; 005a7e33
    CMP EBX,EAX                         ; 005a7e35
    JL 0x005a7de3                       ; 005a7e37
        ;   XREF to: 005a7de3 (CONDITIONAL_JUMP)  ; LAB_005a7de3
    MOV EAX,dword ptr [ESP + 0x98]      ; 005a7e39
        ;   Label: LAB_005a7e39
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0xc0] ; 005a7e40
    MOV dword ptr [EDI + EAX*0x1 + 0xe0],EDX ; 005a7e47
    JMP 0x005a772c                      ; 005a7e4e
        ;   XREF to: 005a772c (UNCONDITIONAL_JUMP)  ; LAB_005a772c

