; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_playSfxInternal_FUN_005594c0(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)
;
; Parameters:
; void *           Stack[0x4]:4   user_data
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   x
; float            Stack[0x10]:4   y
; float            Stack[0x14]:4   z
; CVector3f *      Stack[0x18]:4   position_tracker
; uint             Stack[0x1c]:4   flags
; Local Variables:
; undefined8       Stack[-0x190]:8  local_190
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined        Stack[-0x170]:1  local_170
; undefined1       Stack[-0x16f]:1  local_16f
; undefined        Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
; undefined        Stack[-0xa8]:1  local_a8
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
; XREF[5]:
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0 at 0055af1c
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50 at 0055ae6a
;   core_sound.cpp_CSound_playSound_FUN_0055ae30 at 0055ae44
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30 at 0055af59
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80 at 0055ae98
;
; Referenced Globals:
;   TerminatedCString s_d_d_n_005ea748
;   TerminatedCString s_core_sound_cpp_005ea752
;   TerminatedCString s_Invalid_sfx_string_s_005ea764
;   undefined4 DAT_005ea77b
;   undefined4 DAT_005ea77d
;   undefined1 DAT_005ea77f
;   undefined1 DAT_005ea780
;   undefined1 DAT_005ea781
;   undefined1 DAT_005ea782
;   TerminatedCString s_Can_t_find_wav_s_005ea784
;   TerminatedCString s_f_n_005ea798
;   TerminatedCString s_core_sound_cpp_005ea79e
;   TerminatedCString s_Invalid_sfx_string_s_005ea7b0
;   TerminatedCString s_f_n_005ea7c7
;   TerminatedCString s_core_sound_cpp_005ea7cd
;   ... and 13 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_set.cpp_FUN_00533190
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_005593d0
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_console.cpp_CConsole_printf_FUN_00436710
;   sound_sndmain.cpp_isSoundMuted_FUN_00550bc0
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290
;   sound_sndmain.cpp_setNextSfxFlags_FUN_00550380
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00550110
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
;   sound_sndmain.cpp_setNextSfxUserData_FUN_005502b0
;   sound_sndmain.cpp_setNextSfxVolume_FUN_00550270
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005594c0
        ;   Label: core_sound.cpp_playSfxInternal_FUN_005594c0
    PUSH ESI                            ; 005594c1
    PUSH EDI                            ; 005594c2
    PUSH EBP                            ; 005594c3
    MOV EBP,ESP                         ; 005594c4
    SUB ESP,0x168                       ; 005594c6
    AND ESP,0xfffffff8                  ; 005594cc
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 005594cf
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
    TEST EAX,EAX                        ; 005594d4
    JNZ 0x0055970f                      ; 005594d6
        ;   XREF to: 0055970f (CONDITIONAL_JUMP)  ; LAB_0055970f
    MOV EDX,dword ptr [EBP + 0x18]      ; 005594dc
    TEST EDX,EDX                        ; 005594df
    JZ 0x00559708                       ; 005594e1
        ;   XREF to: 00559708 (CONDITIONAL_JUMP)  ; LAB_00559708
    CMP byte ptr [EDX],0x0              ; 005594e7
    JZ 0x00559708                       ; 005594ea
        ;   XREF to: 00559708 (CONDITIONAL_JUMP)  ; LAB_00559708
    MOV EAX,dword ptr [EBP + 0x18]      ; 005594f0
    LEA ESI,[ESP + 0x8]                 ; 005594f3
    MOV DH,byte ptr [EAX]               ; 005594f7
    MOV dword ptr [ESP + 0x164],EAX     ; 005594f9
    TEST DH,DH                          ; 00559500
    JZ 0x00559521                       ; 00559502
        ;   XREF to: 00559521 (CONDITIONAL_JUMP)  ; LAB_00559521
    MOV EAX,dword ptr [ESP + 0x164]     ; 00559504
        ;   Label: LAB_00559504
    MOV AL,byte ptr [EAX]               ; 0055950b
    INC AL                              ; 0055950d
    AND EAX,0xff                        ; 0055950f
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00559514 | DAT_0061ed94
    JZ 0x00559718                       ; 0055951b
        ;   XREF to: 00559718 (CONDITIONAL_JUMP)  ; LAB_00559718
    MOV DL,0x2e                         ; 00559521
        ;   Label: LAB_00559521
    MOV byte ptr [ESI],0x0              ; 00559523
    LEA ESI,[ESP + 0x8]                 ; 00559526
    MOV AL,byte ptr [ESI]               ; 0055952a
        ;   Label: LAB_0055952a
    CMP AL,DL                           ; 0055952c
    JZ 0x00559542                       ; 0055952e
        ;   XREF to: 00559542 (CONDITIONAL_JUMP)  ; LAB_00559542
    CMP AL,0x0                          ; 00559530
    JZ 0x00559540                       ; 00559532
        ;   XREF to: 00559540 (CONDITIONAL_JUMP)  ; LAB_00559540
    INC ESI                             ; 00559534
    MOV AL,byte ptr [ESI]               ; 00559535
    CMP AL,DL                           ; 00559537
    JZ 0x00559542                       ; 00559539
        ;   XREF to: 00559542 (CONDITIONAL_JUMP)  ; LAB_00559542
    INC ESI                             ; 0055953b
    CMP AL,0x0                          ; 0055953c
    JNZ 0x0055952a                      ; 0055953e
        ;   XREF to: 0055952a (CONDITIONAL_JUMP)  ; LAB_0055952a
    SUB ESI,ESI                         ; 00559540
        ;   Label: LAB_00559540
    TEST ESI,ESI                        ; 00559542
        ;   Label: LAB_00559542
    JNZ 0x00559571                      ; 00559544
        ;   XREF to: 00559571 (CONDITIONAL_JUMP)  ; LAB_00559571
    MOV ESI,0x5ea77f                    ; 00559546 | DAT_005ea77f
    LEA EDI,[ESP + 0x8]                 ; 0055954b
    PUSH EDI                            ; 0055954f
    SUB ECX,ECX                         ; 00559550
    DEC ECX                             ; 00559552
    MOV AL,0x0                          ; 00559553
    SCASB.REPNE ES:EDI                  ; 00559555
    DEC EDI                             ; 00559557
    MOV AL,byte ptr [ESI]               ; 00559558 | DAT_005ea77f | DAT_005ea781
        ;   Label: LAB_00559558
    MOV byte ptr [EDI],AL               ; 0055955a
    CMP AL,0x0                          ; 0055955c
    JZ 0x00559570                       ; 0055955e
        ;   XREF to: 00559570 (CONDITIONAL_JUMP)  ; LAB_00559570
    MOV AL,byte ptr [ESI + 0x1]         ; 00559560 | DAT_005ea780 | DAT_005ea782
    ADD ESI,0x2                         ; 00559563
    MOV byte ptr [EDI + 0x1],AL         ; 00559566
    ADD EDI,0x2                         ; 00559569
    CMP AL,0x0                          ; 0055956c
    JNZ 0x00559558                      ; 0055956e
        ;   XREF to: 00559558 (CONDITIONAL_JUMP)  ; LAB_00559558
    POP EDI                             ; 00559570
        ;   Label: LAB_00559570
    MOV ECX,0x19                        ; 00559571
        ;   Label: LAB_00559571
    LEA EDI,[ESP + 0xd0]                ; 00559576
    MOV ESI,0x61c220                    ; 0055957d | DAT_0061c220
    MOVSD.REP ES:EDI,ESI                ; 00559582 | DAT_0061c220 | DAT_0061c224
    MOV DL,0x21                         ; 00559584
    LEA ESI,[ESP + 0x8]                 ; 00559586
    MOV AL,byte ptr [ESI]               ; 0055958a
        ;   Label: LAB_0055958a
    CMP AL,DL                           ; 0055958c
    JZ 0x005595a2                       ; 0055958e
        ;   XREF to: 005595a2 (CONDITIONAL_JUMP)  ; LAB_005595a2
    CMP AL,0x0                          ; 00559590
    JZ 0x005595a0                       ; 00559592
        ;   XREF to: 005595a0 (CONDITIONAL_JUMP)  ; LAB_005595a0
    INC ESI                             ; 00559594
    MOV AL,byte ptr [ESI]               ; 00559595
    CMP AL,DL                           ; 00559597
    JZ 0x005595a2                       ; 00559599
        ;   XREF to: 005595a2 (CONDITIONAL_JUMP)  ; LAB_005595a2
    INC ESI                             ; 0055959b
    CMP AL,0x0                          ; 0055959c
    JNZ 0x0055958a                      ; 0055959e
        ;   XREF to: 0055958a (CONDITIONAL_JUMP)  ; LAB_0055958a
    SUB ESI,ESI                         ; 005595a0
        ;   Label: LAB_005595a0
    TEST ESI,ESI                        ; 005595a2
        ;   Label: LAB_005595a2
    JZ 0x005598dd                       ; 005595a4
        ;   XREF to: 005598dd (CONDITIONAL_JUMP)  ; LAB_005598dd
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005595aa
    MOV dword ptr [ESP + 0x134],EAX     ; 005595ad
    MOV EAX,dword ptr [EBP + 0x20]      ; 005595b4
    MOV dword ptr [ESP + 0x138],EAX     ; 005595b7
    MOV EAX,dword ptr [EBP + 0x24]      ; 005595be
    MOV EBX,dword ptr [EBP + 0x28]      ; 005595c1
    MOV dword ptr [ESP + 0x13c],EAX     ; 005595c4
    TEST EBX,EBX                        ; 005595cb
    JNZ 0x00559819                      ; 005595cd
        ;   XREF to: 00559819 (CONDITIONAL_JUMP)  ; LAB_00559819
    LEA EAX,[ESP + 0x134]               ; 005595d3
        ;   Label: LAB_005595d3
    PUSH EAX                            ; 005595da
    MOV ESI,dword ptr [0x0061b5a8]      ; 005595db | g_CDemonSetPtr
    PUSH ESI                            ; 005595e1 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00533190      ; 005595e2
        ;   XREF to: 00533190 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00533190()
    ADD ESP,0x8                         ; 005595e7
    MOV dword ptr [ESP + 0x150],EAX     ; 005595ea
    MOV dword ptr [ESP + 0x15c],EAX     ; 005595f1
    ADD EAX,0x5                         ; 005595f8
    MOV dword ptr [ESP + 0x160],EAX     ; 005595fb
    MOV BH,0x21                         ; 00559602
    MOV EDI,dword ptr [ESP + 0x15c]     ; 00559604
        ;   Label: LAB_00559604
    MOV EAX,dword ptr [ESP + 0x150]     ; 0055960b
    XOR ESI,ESI                         ; 00559612
    MOV dword ptr [ESP + 0x140],EAX     ; 00559614
    TEST ESI,ESI                        ; 0055961b
        ;   Label: LAB_0055961b
    JNZ 0x0055987a                      ; 0055961d
        ;   XREF to: 0055987a (CONDITIONAL_JUMP)  ; LAB_0055987a
    MOV ECX,EDI                         ; 00559623
    TEST ECX,ECX                        ; 00559625
        ;   Label: LAB_00559625
    JL 0x00559632                       ; 00559627
        ;   XREF to: 00559632 (CONDITIONAL_JUMP)  ; LAB_00559632
    CMP ECX,0x5                         ; 00559629
    JLE 0x00559886                      ; 0055962c
        ;   XREF to: 00559886 (CONDITIONAL_JUMP)  ; LAB_00559886
    INC ESI                             ; 00559632
        ;   Label: LAB_00559632
    CMP ESI,0x2                         ; 00559633
    JL 0x0055961b                       ; 00559636
        ;   XREF to: 0055961b (CONDITIONAL_JUMP)  ; LAB_0055961b
    CMP byte ptr [ESP + 0xd0],0x0       ; 00559638
        ;   Label: LAB_00559638
    JZ 0x00559848                       ; 00559640
        ;   XREF to: 00559848 (CONDITIONAL_JUMP)  ; LAB_00559848
    CMP byte ptr [ESP + 0xd0],0x0       ; 00559646
        ;   Label: LAB_00559646
    JZ 0x005598fe                       ; 0055964e
        ;   XREF to: 005598fe (CONDITIONAL_JUMP)  ; LAB_005598fe
    MOV EDI,0x3f800000                  ; 00559654
    MOV EAX,dword ptr [ESP + 0x164]     ; 00559659
    MOV dword ptr [ESP + 0x4],EDI       ; 00559660
    MOV dword ptr [ESP],EDI             ; 00559664
    CMP byte ptr [EAX],0x0              ; 00559667
    JZ 0x005596a5                       ; 0055966a
        ;   XREF to: 005596a5 (CONDITIONAL_JUMP)  ; LAB_005596a5
    MOV ESI,0xffffffff                  ; 0055966c
    MOV EBX,0x2                         ; 00559671
    MOV EAX,dword ptr [ESP + 0x164]     ; 00559676
        ;   Label: LAB_00559676
    MOV AL,byte ptr [EAX]               ; 0055967d
    INC AL                              ; 0055967f
    AND EAX,0xff                        ; 00559681
    TEST byte ptr [EAX + 0x61ed94],BL   ; 00559686 | DAT_0061ed94
    JZ 0x00559920                       ; 0055968c
        ;   XREF to: 00559920 (CONDITIONAL_JUMP)  ; LAB_00559920
    INC dword ptr [ESP + 0x164]         ; 00559692
    MOV EAX,dword ptr [ESP + 0x164]     ; 00559699
        ;   Label: LAB_00559699
    CMP byte ptr [EAX],0x0              ; 005596a0
    JNZ 0x00559676                      ; 005596a3
        ;   XREF to: 00559676 (CONDITIONAL_JUMP)  ; LAB_00559676
    MOV EBX,dword ptr [EBP + 0x28]      ; 005596a5
        ;   Label: LAB_005596a5
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 005596a8
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    TEST EBX,EBX                        ; 005596ad
    JZ 0x00559a7d                       ; 005596af
        ;   XREF to: 00559a7d (CONDITIONAL_JUMP)  ; LAB_00559a7d
    PUSH EBX                            ; 005596b5
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170 ; 005596b6
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 005596bb
    MOV EDI,dword ptr [EBP + 0x2c]      ; 005596be
        ;   Label: LAB_005596be
    PUSH EDI                            ; 005596c1
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00550380 ; 005596c2
        ;   XREF to: 00550380 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_00550380(uint flags)
    ADD ESP,0x4                         ; 005596c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005596ca
    PUSH EAX                            ; 005596cd
    PUSH 0x0                            ; 005596ce
    CALL sound_sndmain.cpp_setNextSfxUserData_FUN_005502b0 ; 005596d0
        ;   XREF to: 005502b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxUserData_FUN_005502b0(int index, void * userdata)
    ADD ESP,0x8                         ; 005596d5
    PUSH dword ptr [ESP]                ; 005596d8
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 005596db
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 005596e0
    PUSH dword ptr [ESP + 0x4]          ; 005596e3
    CALL sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290 ; 005596e7
        ;   XREF to: 00550290 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290(float base_frequency)
    ADD ESP,0x4                         ; 005596ec
    LEA EAX,[ESP + 0xd0]                ; 005596ef
    PUSH EAX                            ; 005596f6
    CALL sound_sndmain.cpp_startSfx_FUN_005506b0 ; 005596f7
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005506b0(char * filename)
    ADD ESP,0x4                         ; 005596fc
    MOV ESI,EAX                         ; 005596ff
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00559701
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,ESI                         ; 00559706
    MOV ESP,EBP                         ; 00559708
        ;   Label: LAB_00559708
    POP EBP                             ; 0055970a
    POP EDI                             ; 0055970b
    POP ESI                             ; 0055970c
    POP EBX                             ; 0055970d
    RET                                 ; 0055970e
    XOR EAX,EAX                         ; 0055970f
        ;   Label: LAB_0055970f
    MOV ESP,EBP                         ; 00559711
    POP EBP                             ; 00559713
    POP EDI                             ; 00559714
    POP ESI                             ; 00559715
    POP EBX                             ; 00559716
    RET                                 ; 00559717
    MOV EAX,dword ptr [ESP + 0x164]     ; 00559718
        ;   Label: LAB_00559718
    MOV BH,byte ptr [EAX]               ; 0055971f
    CMP BH,0x40                         ; 00559721
    JZ 0x00559521                       ; 00559724
        ;   XREF to: 00559521 (CONDITIONAL_JUMP)  ; LAB_00559521
    CMP BH,0x2a                         ; 0055972a
    JZ 0x00559521                       ; 0055972d
        ;   XREF to: 00559521 (CONDITIONAL_JUMP)  ; LAB_00559521
    CMP BH,0x5b                         ; 00559733
    JNZ 0x00559809                      ; 00559736
        ;   XREF to: 00559809 (CONDITIONAL_JUMP)  ; LAB_00559809
    LEA EAX,[ESP + 0x144]               ; 0055973c
    PUSH EAX                            ; 00559743
    LEA EAX,[ESP + 0x150]               ; 00559744
    PUSH EAX                            ; 0055974b
    LEA EAX,[ESP + 0x150]               ; 0055974c
    PUSH EAX                            ; 00559753
    PUSH 0x5ea748                       ; 00559754 | = "[%d,%d]%n"
    MOV EDI,dword ptr [ESP + 0x174]     ; 00559759
    MOV EBX,0xffffffff                  ; 00559760
    PUSH EDI                            ; 00559765
    MOV dword ptr [ESP + 0x158],EBX     ; 00559766
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0055976d
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x14                        ; 00559772
    CMP dword ptr [ESP + 0x144],0x5     ; 00559775
    JGE 0x005597f3                      ; 0055977d
        ;   XREF to: 005597f3 (CONDITIONAL_JUMP)  ; LAB_005597f3
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055977f
        ;   Label: LAB_0055977f
    PUSH EDI                            ; 00559782
    MOV ECX,0x5ea752                    ; 00559783 | = "..\\core\\sound.cpp"
    MOV EBX,0x137                       ; 00559788
    PUSH 0x5ea764                       ; 0055978d | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00559792 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00559798 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055979e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005597a3
    PUSH 0x5ea77b                       ; 005597a6 | DAT_005ea77b
        ;   Label: LAB_005597a6
    PUSH ESI                            ; 005597ab
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005597ac
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 005597b1
    ADD ESI,EAX                         ; 005597b4
    CMP dword ptr [ESP + 0x14c],0x9     ; 005597b6
    JLE 0x005597d0                      ; 005597be
        ;   XREF to: 005597d0 (CONDITIONAL_JUMP)  ; LAB_005597d0
    PUSH 0x5ea77d                       ; 005597c0 | DAT_005ea77d
    PUSH ESI                            ; 005597c5
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005597c6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 005597cb
    ADD ESI,EAX                         ; 005597ce
    MOV EAX,dword ptr [ESP + 0x144]     ; 005597d0
        ;   Label: LAB_005597d0
    ADD dword ptr [ESP + 0x164],EAX     ; 005597d7
    MOV EAX,dword ptr [ESP + 0x164]     ; 005597de
        ;   Label: LAB_005597de
    CMP byte ptr [EAX],0x0              ; 005597e5
    JNZ 0x00559504                      ; 005597e8
        ;   XREF to: 00559504 (CONDITIONAL_JUMP)  ; LAB_00559504
    JMP 0x00559521                      ; 005597ee
        ;   XREF to: 00559521 (UNCONDITIONAL_JUMP)  ; LAB_00559521
    MOV EAX,dword ptr [ESP + 0x148]     ; 005597f3
        ;   Label: LAB_005597f3
    CMP EAX,dword ptr [ESP + 0x14c]     ; 005597fa
    JG 0x0055977f                       ; 00559801
        ;   XREF to: 0055977f (CONDITIONAL_JUMP)  ; LAB_0055977f
    JMP 0x005597a6                      ; 00559807
        ;   XREF to: 005597a6 (UNCONDITIONAL_JUMP)  ; LAB_005597a6
    INC ESI                             ; 00559809
        ;   Label: LAB_00559809
    LEA ECX,[EAX + 0x1]                 ; 0055980a
    MOV byte ptr [ESI + -0x1],BH        ; 0055980d
    MOV dword ptr [ESP + 0x164],ECX     ; 00559810
    JMP 0x005597de                      ; 00559817
        ;   XREF to: 005597de (UNCONDITIONAL_JUMP)  ; LAB_005597de
    FLD float ptr [EBP + 0x1c]          ; 00559819
        ;   Label: LAB_00559819
    FADD float ptr [EBX]                ; 0055981c
    FLD float ptr [EBP + 0x20]          ; 0055981e
    FXCH                                ; 00559821
    FSTP float ptr [ESP + 0x134]        ; 00559823
    FADD float ptr [EBX + 0x4]          ; 0055982a
    FLD float ptr [EBP + 0x24]          ; 0055982d
    FXCH                                ; 00559830
    FSTP float ptr [ESP + 0x138]        ; 00559832
    FADD float ptr [EBX + 0x8]          ; 00559839
    FSTP float ptr [ESP + 0x13c]        ; 0055983c
    JMP 0x005595d3                      ; 00559843
        ;   XREF to: 005595d3 (UNCONDITIONAL_JUMP)  ; LAB_005595d3
    MOV ECX,dword ptr [ESP + 0x15c]     ; 00559848
        ;   Label: LAB_00559848
    MOV EDX,dword ptr [ESP + 0x150]     ; 0055984f
    MOV ESI,dword ptr [ESP + 0x160]     ; 00559856
    INC ECX                             ; 0055985d
    DEC EDX                             ; 0055985e
    MOV dword ptr [ESP + 0x15c],ECX     ; 0055985f
    MOV dword ptr [ESP + 0x150],EDX     ; 00559866
    CMP ECX,ESI                         ; 0055986d
    JL 0x00559604                       ; 0055986f
        ;   XREF to: 00559604 (CONDITIONAL_JUMP)  ; LAB_00559604
    JMP 0x00559646                      ; 00559875
        ;   XREF to: 00559646 (UNCONDITIONAL_JUMP)  ; LAB_00559646
    MOV ECX,dword ptr [ESP + 0x140]     ; 0055987a
        ;   Label: LAB_0055987a
    JMP 0x00559625                      ; 00559881
        ;   XREF to: 00559625 (UNCONDITIONAL_JUMP)  ; LAB_00559625
    LEA EAX,[ESP + 0x8]                 ; 00559886
        ;   Label: LAB_00559886
    MOV BL,byte ptr [ESP + 0x8]         ; 0055988a
    LEA EDX,[ESP + 0x6c]                ; 0055988e
    TEST BL,BL                          ; 00559892
    JZ 0x005598ac                       ; 00559894
        ;   XREF to: 005598ac (CONDITIONAL_JUMP)  ; LAB_005598ac
    MOV BL,byte ptr [EAX]               ; 00559896
        ;   Label: LAB_00559896
    CMP BH,BL                           ; 00559898
    JNZ 0x005598a1                      ; 0055989a
        ;   XREF to: 005598a1 (CONDITIONAL_JUMP)  ; LAB_005598a1
    MOV BL,CL                           ; 0055989c
    ADD BL,0x30                         ; 0055989e
    MOV byte ptr [EDX],BL               ; 005598a1
        ;   Label: LAB_005598a1
    INC EDX                             ; 005598a3
    MOV BL,byte ptr [EAX + 0x1]         ; 005598a4
    INC EAX                             ; 005598a7
    TEST BL,BL                          ; 005598a8
    JNZ 0x00559896                      ; 005598aa
        ;   XREF to: 00559896 (CONDITIONAL_JUMP)  ; LAB_00559896
    LEA EAX,[ESP + 0x6c]                ; 005598ac
        ;   Label: LAB_005598ac
    PUSH EAX                            ; 005598b0
    LEA EAX,[ESP + 0xd4]                ; 005598b1
    PUSH EAX                            ; 005598b8
    MOV EAX,[0x0061c068]                ; 005598b9 | DAT_0061c068
    PUSH EAX                            ; 005598be
    MOV byte ptr [EDX],0x0              ; 005598bf
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_005593d0 ; 005598c2
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findRandomSoundFile_FUN_005593d0(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 005598c7
    CMP byte ptr [ESP + 0xd0],0x0       ; 005598ca
    JNZ 0x00559638                      ; 005598d2
        ;   XREF to: 00559638 (CONDITIONAL_JUMP)  ; LAB_00559638
    JMP 0x00559632                      ; 005598d8
        ;   XREF to: 00559632 (UNCONDITIONAL_JUMP)  ; LAB_00559632
    LEA EAX,[ESP + 0x8]                 ; 005598dd
        ;   Label: LAB_005598dd
    PUSH EAX                            ; 005598e1
    LEA EAX,[ESP + 0xd4]                ; 005598e2
    PUSH EAX                            ; 005598e9
    MOV ECX,dword ptr [0x0061c068]      ; 005598ea | DAT_0061c068
    PUSH ECX                            ; 005598f0
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_005593d0 ; 005598f1
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findRandomSoundFile_FUN_005593d0(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 005598f6
    JMP 0x00559646                      ; 005598f9
        ;   XREF to: 00559646 (UNCONDITIONAL_JUMP)  ; LAB_00559646
    LEA EAX,[ESP + 0x8]                 ; 005598fe
        ;   Label: LAB_005598fe
    PUSH EAX                            ; 00559902
    PUSH 0x5ea784                       ; 00559903 | = "Can't find wav: %s\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 00559908 | g_CConsolePtr
    PUSH EDX                            ; 0055990e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0055990f
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00559914
    XOR EAX,EAX                         ; 00559917
    MOV ESP,EBP                         ; 00559919
    POP EBP                             ; 0055991b
    POP EDI                             ; 0055991c
    POP ESI                             ; 0055991d
    POP EBX                             ; 0055991e
    RET                                 ; 0055991f
    MOV EAX,dword ptr [ESP + 0x164]     ; 00559920
        ;   Label: LAB_00559920
    MOV CL,byte ptr [EAX]               ; 00559927
    CMP CL,0x40                         ; 00559929
    JNZ 0x005599bd                      ; 0055992c
        ;   XREF to: 005599bd (CONDITIONAL_JUMP)  ; LAB_005599bd
    LEA EAX,[ESP + 0x154]               ; 00559932
    PUSH EAX                            ; 00559939
    LEA EAX,[ESP + 0x4]                 ; 0055993a
    PUSH EAX                            ; 0055993e
    PUSH 0x5ea798                       ; 0055993f | = "@%f%n"
    MOV EDI,dword ptr [ESP + 0x170]     ; 00559944
    PUSH EDI                            ; 0055994b
    MOV dword ptr [ESP + 0x164],ESI     ; 0055994c
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00559953
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 00559958
    CMP EBX,dword ptr [ESP + 0x154]     ; 0055995b
    JLE 0x0055999e                      ; 00559962
        ;   XREF to: 0055999e (CONDITIONAL_JUMP)  ; LAB_0055999e
    MOV EDI,dword ptr [EBP + 0x18]      ; 00559964
        ;   Label: LAB_00559964
    PUSH EDI                            ; 00559967
    MOV EDX,0x5ea79e                    ; 00559968 | = "..\\core\\sound.cpp"
    MOV ECX,0x1a4                       ; 0055996d
    PUSH 0x5ea7b0                       ; 00559972 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d046a0],EDX      ; 00559977 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0055997d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00559983
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00559988
    MOV EAX,dword ptr [ESP + 0x154]     ; 0055998b
    ADD dword ptr [ESP + 0x164],EAX     ; 00559992
    JMP 0x00559699                      ; 00559999
        ;   XREF to: 00559699 (UNCONDITIONAL_JUMP)  ; LAB_00559699
    FLD float ptr [ESP]                 ; 0055999e
        ;   Label: LAB_0055999e
    FLDZ                                ; 005599a1
    FCOMPP                              ; 005599a3
    FNSTSW AX                           ; 005599a5
    SAHF                                ; 005599a7
    JA 0x00559964                       ; 005599a8
        ;   XREF to: 00559964 (CONDITIONAL_JUMP)  ; LAB_00559964
    MOV EAX,dword ptr [ESP + 0x154]     ; 005599aa
    ADD dword ptr [ESP + 0x164],EAX     ; 005599b1
    JMP 0x00559699                      ; 005599b8
        ;   XREF to: 00559699 (UNCONDITIONAL_JUMP)  ; LAB_00559699
    CMP CL,0x2a                         ; 005599bd
        ;   Label: LAB_005599bd
    JNZ 0x00559a51                      ; 005599c0
        ;   XREF to: 00559a51 (CONDITIONAL_JUMP)  ; LAB_00559a51
    LEA EAX,[ESP + 0x158]               ; 005599c6
    PUSH EAX                            ; 005599cd
    LEA EAX,[ESP + 0x8]                 ; 005599ce
    PUSH EAX                            ; 005599d2
    PUSH 0x5ea7c7                       ; 005599d3 | = "*%f%n"
    MOV EDX,dword ptr [ESP + 0x170]     ; 005599d8
    PUSH EDX                            ; 005599df
    MOV dword ptr [ESP + 0x168],ESI     ; 005599e0
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 005599e7
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 005599ec
    CMP EBX,dword ptr [ESP + 0x158]     ; 005599ef
    JLE 0x00559a31                      ; 005599f6
        ;   XREF to: 00559a31 (CONDITIONAL_JUMP)  ; LAB_00559a31
    MOV EDX,dword ptr [EBP + 0x18]      ; 005599f8
        ;   Label: LAB_005599f8
    PUSH EDX                            ; 005599fb
    MOV EDI,0x5ea7cd                    ; 005599fc | = "..\\core\\sound.cpp"
    MOV EAX,0x1aa                       ; 00559a01
    PUSH 0x5ea7df                       ; 00559a06 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d046a0],EDI      ; 00559a0b | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00559a11 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00559a16
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00559a1b
    MOV EAX,dword ptr [ESP + 0x158]     ; 00559a1e
    ADD dword ptr [ESP + 0x164],EAX     ; 00559a25
    JMP 0x00559699                      ; 00559a2c
        ;   XREF to: 00559699 (UNCONDITIONAL_JUMP)  ; LAB_00559699
    FLD float ptr [ESP + 0x4]           ; 00559a31
        ;   Label: LAB_00559a31
    FLDZ                                ; 00559a35
    FCOMPP                              ; 00559a37
    FNSTSW AX                           ; 00559a39
    SAHF                                ; 00559a3b
    JNC 0x005599f8                      ; 00559a3c
        ;   XREF to: 005599f8 (CONDITIONAL_JUMP)  ; LAB_005599f8
    MOV EAX,dword ptr [ESP + 0x158]     ; 00559a3e
    ADD dword ptr [ESP + 0x164],EAX     ; 00559a45
    JMP 0x00559699                      ; 00559a4c
        ;   XREF to: 00559699 (UNCONDITIONAL_JUMP)  ; LAB_00559699
    MOV EAX,dword ptr [EBP + 0x18]      ; 00559a51
        ;   Label: LAB_00559a51
    PUSH EAX                            ; 00559a54
    MOV ECX,0x5ea7f6                    ; 00559a55 | = "..\\core\\sound.cpp"
    MOV EDI,0x1ad                       ; 00559a5a
    PUSH 0x5ea808                       ; 00559a5f | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00559a64 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00559a6a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00559a70
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00559a75
    JMP 0x00559699                      ; 00559a78
        ;   XREF to: 00559699 (UNCONDITIONAL_JUMP)  ; LAB_00559699
    FLD float ptr [EBP + 0x24]          ; 00559a7d
        ;   Label: LAB_00559a7d
    SUB ESP,0x8                         ; 00559a80
    FSTP double ptr [ESP]               ; 00559a83
    FLD float ptr [EBP + 0x20]          ; 00559a86
    SUB ESP,0x8                         ; 00559a89
    FSTP double ptr [ESP]               ; 00559a8c
    FLD float ptr [EBP + 0x1c]          ; 00559a8f
    SUB ESP,0x8                         ; 00559a92
    FSTP double ptr [ESP]               ; 00559a95
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00550110 ; 00559a98
        ;   XREF to: 00550110 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00550110(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 00559a9d
    JMP 0x005596be                      ; 00559aa0
        ;   XREF to: 005596be (UNCONDITIONAL_JUMP)  ; LAB_005596be

