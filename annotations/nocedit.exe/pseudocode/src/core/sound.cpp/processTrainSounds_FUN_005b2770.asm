; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_processTrainSounds_FUN_005b2770(void)
;
; Local Variables:
; float            Stack[-0x120]:4  local_120
; float            Stack[-0x11c]:4  local_11c
; char[100]        Stack[-0x118]:100  local_118
; char[100]        Stack[-0xb4]:100  local_b4
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; STrainNoise *    Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_005b275c = 005b2afa
;   TerminatedCString s_x_0065270a
;   TerminatedCString s_ext_0065270c
;   TerminatedCString s_int_00652710
;   TerminatedCString s_ext_00652714
;   TerminatedCString s_int_00652718
;   TerminatedCString s_trainext_wav_0065271c
;   TerminatedCString s_railnoiz_wav_00652729
;   TerminatedCString s_rail_s_wav_00652736
;   TerminatedCString s_bump_wav_00652742
;   undefined4 s_ump?.wav_00652743
;   undefined4 s_mp_wav_00652744
;   undefined4 s_p?.wav_00652745
;   TerminatedCString s_s_g_0065274c
;   float FLOAT_00652756 = 20
;   ... and 32 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdlib.c_rand_FUN_005feb5c
;   crt_string.c__stricmp_FUN_005fe7f0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
;   sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
;   sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2770
        ;   Label: core_sound.cpp_processTrainSounds_FUN_005b2770
    PUSH ESI                            ; 005b2771
    PUSH EDI                            ; 005b2772
    PUSH EBP                            ; 005b2773
    MOV EBP,ESP                         ; 005b2774
    SUB ESP,0x110                       ; 005b2776
    AND ESP,0xfffffff8                  ; 005b277c
    MOV EAX,[0x0067b654]                ; 005b277f | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 005b2784 | g_CGameInstance.delta_time_float
    MOV EDX,dword ptr [EAX + 0x240]     ; 005b278a | g_CGameInstance.block_auto_save
    FSTP float ptr [ESP + 0x108]        ; 005b2790
    TEST EDX,EDX                        ; 005b2797
    JNZ 0x005b2a1c                      ; 005b2799
        ;   XREF to: 005b2a1c (CONDITIONAL_JUMP)  ; LAB_005b2a1c
    MOV EAX,[0x006810c8]                ; 005b279f | g_CDemonSetPtr | g_CDemonSetInstance
    MOV ECX,dword ptr [0x03f6b86c]      ; 005b27a4 | g_TrainLastCameraIndex
    CMP ECX,dword ptr [EAX + 0x15aea4]  ; 005b27aa | g_CDemonSetInstance.selected_camera_index
    JZ 0x005b288e                       ; 005b27b0
        ;   XREF to: 005b288e (CONDITIONAL_JUMP)  ; LAB_005b288e
    PUSH EAX                            ; 005b27b6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005b27b7
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005b27bc
    MOV EBX,dword ptr [0x006810c8]      ; 005b27bf | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EBX                            ; 005b27c5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210 ; 005b27c6
        ;   XREF to: 00574210 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet * this_ptr)
    MOV EAX,[0x03f6af70]                ; 005b27cb | g_SoundListenerPrev
    ADD ESP,0x4                         ; 005b27d0
    MOV EDI,0x41a00000                  ; 005b27d3
    MOV dword ptr [ESP + 0xd0],EAX      ; 005b27d8
    MOV EAX,[0x03f6af74]                ; 005b27df | g_SoundListenerPrev.y
    XOR ESI,ESI                         ; 005b27e4
    MOV dword ptr [ESP + 0xd4],EAX      ; 005b27e6
    MOV EAX,[0x03f6af78]                ; 005b27ed | g_SoundListenerPrev.z
    MOV EDX,dword ptr [0x006810c8]      ; 005b27f2 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [ESP + 0xd8],EAX      ; 005b27f8
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005b27ff
    MOV dword ptr [ESP + 0xe8],ESI      ; 005b2806
    MOV dword ptr [ESP + 0xdc],EAX      ; 005b280d
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005b2814
    MOV dword ptr [ESP + 0xec],EDI      ; 005b281b
    MOV dword ptr [ESP + 0xe4],EAX      ; 005b2822
    LEA EAX,[ESP + 0xdc]                ; 005b2829
    MOV dword ptr [ESP + 0xf0],ESI      ; 005b2830
    PUSH EAX                            ; 005b2837
    LEA EAX,[ESP + 0xd4]                ; 005b2838
    FLD float ptr [ESP + 0xd8]          ; 005b283f
    PUSH EAX                            ; 005b2846
    FADD float ptr [0x00652756]         ; 005b2847 | FLOAT_00652756
    PUSH EDX                            ; 005b284d | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xec]         ; 005b284e
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 ; 005b2855
        ;   XREF to: 00572460 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 005b285a
    TEST EAX,EAX                        ; 005b285d
    JZ 0x005b2a36                       ; 005b285f
        ;   XREF to: 005b2a36 (CONDITIONAL_JUMP)  ; LAB_005b2a36
    MOV dword ptr [0x00681ef0],0x652710 ; 005b2865 | g_CurrentTrainMode | = "int"
    MOV ESI,dword ptr [0x006810c8]      ; 005b286f | g_CDemonSetPtr
        ;   Label: LAB_005b286f
    PUSH ESI                            ; 005b2875 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005b2876
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    MOV EAX,[0x006810c8]                ; 005b287b | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 005b2880 | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x4                         ; 005b2886
    MOV [0x03f6b86c],EAX                ; 005b2889 | g_TrainLastCameraIndex
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b288e
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_005b288e
    PUSH 0x1                            ; 005b2893
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70 ; 005b2895
        ;   XREF to: 005a8b70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
    ADD ESP,0x4                         ; 005b289a
    PUSH 0x3                            ; 005b289d
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b289f
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
    ADD ESP,0x4                         ; 005b28a4
    PUSH 0x652718                       ; 005b28a7 | = "int"
    MOV EDX,dword ptr [0x00681ef0]      ; 005b28ac | g_CurrentTrainMode
    PUSH EDX                            ; 005b28b2 | = "int"
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005b28b3
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005b28b8
    TEST EAX,EAX                        ; 005b28bb
    JNZ 0x005b2a45                      ; 005b28bd
        ;   XREF to: 005b2a45 (CONDITIONAL_JUMP)  ; LAB_005b2a45
    MOV ESI,dword ptr [0x03f6b874]      ; 005b28c3 | g_TrainExteriorAmbientHandle
    PUSH ESI                            ; 005b28c9
    MOV EDI,0x3ecccccd                  ; 005b28ca
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b28cf
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b28d4
    MOV dword ptr [ESP],EDI             ; 005b28d7
    MOV EAX,[0x03f6b870]                ; 005b28da | g_TrainRailNoiseHandle
        ;   Label: LAB_005b28da
    PUSH EAX                            ; 005b28df
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b28e0
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005b28e5
    TEST EAX,EAX                        ; 005b28e8
    JZ 0x005b2a93                       ; 005b28ea
        ;   XREF to: 005b2a93 (CONDITIONAL_JUMP)  ; LAB_005b2a93
    MOV EDX,dword ptr [0x00681ef0]      ; 005b28f0 | g_CurrentTrainMode
    PUSH EDX                            ; 005b28f6 | = "int"
    MOV ECX,dword ptr [0x00681ef4]      ; 005b28f7 | g_PreviousTrainMode
    PUSH ECX                            ; 005b28fd | = "x"
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005b28fe
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005b2903
    TEST EAX,EAX                        ; 005b2906
    JNZ 0x005b2acb                      ; 005b2908
        ;   XREF to: 005b2acb (CONDITIONAL_JUMP)  ; LAB_005b2acb
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b290e
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   Label: LAB_005b290e
    MOV EBX,0x3f6b7bc                   ; 005b2913 | g_TrainNoiseArray
    MOV EAX,[0x00681ef0]                ; 005b2918 | g_CurrentTrainMode
    XOR ESI,ESI                         ; 005b291d
    MOV [0x00681ef4],EAX                ; 005b291f | g_PreviousTrainMode
    MOV dword ptr [0x03f6b85c],ESI      ; 005b2924 | g_TrainVelocityVector
    MOV dword ptr [0x03f6b860],ESI      ; 005b292a | g_TrainVelocityVector.y
    MOV EAX,0x41f00000                  ; 005b2930
    MOV dword ptr [ESP + 0x104],ESI     ; 005b2935
    MOV [0x03f6b864],EAX                ; 005b293c | g_TrainVelocityVector.z
    MOV EDI,ESI                         ; 005b2941
        ;   Label: LAB_005b2941
    SHL EDI,0x4                         ; 005b2943
    MOV ECX,dword ptr [EDI + 0x3f6b7c8] ; 005b2946 | DAT_03f6b7c8 | DAT_03f6b7d8
    PUSH ECX                            ; 005b294c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b294d
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2952
    TEST EAX,EAX                        ; 005b2955
    JZ 0x005b2aee                       ; 005b2957
        ;   XREF to: 005b2aee (CONDITIONAL_JUMP)  ; LAB_005b2aee
    FLD float ptr [ESP + 0x108]         ; 005b295d
    FLD float ptr [0x03f6b85c]          ; 005b2964 | g_TrainVelocityVector
    FMUL ST1                            ; 005b296a
    FLD float ptr [0x03f6b860]          ; 005b296c | g_TrainVelocityVector.y
    FMUL ST2                            ; 005b2972
    FLD float ptr [0x03f6b864]          ; 005b2974 | g_TrainVelocityVector.z
    FMULP ST3                           ; 005b297a
    FXCH                                ; 005b297c
    FSTP float ptr [ESP + 0xf4]         ; 005b297e
    FSTP float ptr [ESP + 0xf8]         ; 005b2985
    FSTP float ptr [ESP + 0xfc]         ; 005b298c
    FLD float ptr [EBX]                 ; 005b2993 | g_TrainNoiseArray
    FADD float ptr [ESP + 0xf4]         ; 005b2995
    FLD float ptr [EBX + 0x4]           ; 005b299c | g_TrainNoiseArray[0].position.y
    FXCH                                ; 005b299f
    FSTP float ptr [EBX]                ; 005b29a1 | g_TrainNoiseArray
    FADD float ptr [ESP + 0xf8]         ; 005b29a3
    FLD float ptr [EBX + 0x8]           ; 005b29aa | g_TrainNoiseArray[0].position.z
    FXCH                                ; 005b29ad
    FSTP float ptr [EBX + 0x4]          ; 005b29af | g_TrainNoiseArray[0].position.y
    FADD float ptr [ESP + 0xfc]         ; 005b29b2
    FSTP float ptr [EBX + 0x8]          ; 005b29b9 | g_TrainNoiseArray[0].position.z
    FLD float ptr [EDI + 0x3f6b7c4]     ; 005b29bc | g_TrainNoiseArray[0].position.z
    FABS                                ; 005b29c2
    FCOMP double ptr [0x00652776]       ; 005b29c4 | DOUBLE_00652776
    FNSTSW AX                           ; 005b29ca
    SAHF                                ; 005b29cc
    JBE 0x005b29de                      ; 005b29cd
        ;   XREF to: 005b29de (CONDITIONAL_JUMP)  ; LAB_005b29de
    MOV EAX,dword ptr [EDI + 0x3f6b7c8] ; 005b29cf | DAT_03f6b7c8
    PUSH EAX                            ; 005b29d5
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b29d6
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b29db
    INC ESI                             ; 005b29de
        ;   Label: LAB_005b29de
    ADD EBX,0x10                        ; 005b29df | DAT_03f6b7cc
    CMP ESI,0xa                         ; 005b29e2
    JL 0x005b2941                       ; 005b29e5
        ;   XREF to: 005b2941 (CONDITIONAL_JUMP)  ; LAB_005b2941
    FLD float ptr [0x03f6b868]          ; 005b29eb | g_TrainNoiseCooldown
    FSUB float ptr [ESP + 0x108]        ; 005b29f1
    FST float ptr [0x03f6b868]          ; 005b29f8 | g_TrainNoiseCooldown
    FLDZ                                ; 005b29fe
    FCOMPP                              ; 005b2a00
    FNSTSW AX                           ; 005b2a02
    SAHF                                ; 005b2a04
    JC 0x005b2a15                       ; 005b2a05
        ;   XREF to: 005b2a15 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [ESP + 0x104],0x0     ; 005b2a07
    JNZ 0x005b2c28                      ; 005b2a0f
        ;   XREF to: 005b2c28 (CONDITIONAL_JUMP)  ; LAB_005b2c28
    MOV ESP,EBP                         ; 005b2a15
        ;   Label: caseD_4
    POP EBP                             ; 005b2a17
    POP EDI                             ; 005b2a18
    POP ESI                             ; 005b2a19
    POP EBX                             ; 005b2a1a
    RET                                 ; 005b2a1b
    MOV EAX,0x65270c                    ; 005b2a1c | = "ext"
        ;   Label: LAB_005b2a1c
    MOV EDI,0xffffffff                  ; 005b2a21
    MOV [0x00681ef0],EAX                ; 005b2a26 | g_CurrentTrainMode
    MOV dword ptr [0x03f6b86c],EDI      ; 005b2a2b | g_TrainLastCameraIndex
    JMP 0x005b288e                      ; 005b2a31
        ;   XREF to: 005b288e (UNCONDITIONAL_JUMP)  ; LAB_005b288e
    MOV dword ptr [0x00681ef0],0x652714 ; 005b2a36 | g_CurrentTrainMode | = "ext"
        ;   Label: LAB_005b2a36
    JMP 0x005b286f                      ; 005b2a40
        ;   XREF to: 005b286f (UNCONDITIONAL_JUMP)  ; LAB_005b286f
    MOV EBX,dword ptr [0x03f6b874]      ; 005b2a45 | g_TrainExteriorAmbientHandle
        ;   Label: LAB_005b2a45
    MOV ECX,0x3f333333                  ; 005b2a4b
    PUSH EBX                            ; 005b2a50
    MOV dword ptr [ESP + 0x4],ECX       ; 005b2a51
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b2a55
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2a5a
    TEST EAX,EAX                        ; 005b2a5d
    JNZ 0x005b28da                      ; 005b2a5f
        ;   XREF to: 005b28da (CONDITIONAL_JUMP)  ; LAB_005b28da
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b2a65
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x3ecccccd                     ; 005b2a6a
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005b2a6f
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 005b2a74
    PUSH 0x65271c                       ; 005b2a77 | = "trainext.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b2a7c
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005b2a81
    MOV [0x03f6b874],EAX                ; 005b2a84 | g_TrainExteriorAmbientHandle
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b2a89
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x005b28da                      ; 005b2a8e
        ;   XREF to: 005b28da (UNCONDITIONAL_JUMP)  ; LAB_005b28da
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b2a93
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_005b2a93
    FLD float ptr [ESP]                 ; 005b2a98
    FMUL double ptr [0x0065275e]        ; 005b2a9b | DOUBLE_0065275e
    SUB ESP,0x4                         ; 005b2aa1
    FSTP float ptr [ESP]                ; 005b2aa4
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005b2aa7
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 005b2aac
    PUSH 0x652729                       ; 005b2aaf | = "railnoiz.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b2ab4
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005b2ab9
    MOV [0x03f6b870],EAX                ; 005b2abc | g_TrainRailNoiseHandle
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b2ac1
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x005b290e                      ; 005b2ac6
        ;   XREF to: 005b290e (UNCONDITIONAL_JUMP)  ; LAB_005b290e
    FLD float ptr [ESP]                 ; 005b2acb
        ;   Label: LAB_005b2acb
    FMUL double ptr [0x0065275e]        ; 005b2ace | DOUBLE_0065275e
    SUB ESP,0x4                         ; 005b2ad4
    MOV EBX,dword ptr [0x03f6b870]      ; 005b2ad7 | g_TrainRailNoiseHandle
    FSTP float ptr [ESP]                ; 005b2add
    PUSH EBX                            ; 005b2ae0
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 005b2ae1
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 005b2ae6
    JMP 0x005b290e                      ; 005b2ae9
        ;   XREF to: 005b290e (UNCONDITIONAL_JUMP)  ; LAB_005b290e
    MOV dword ptr [ESP + 0x104],EBX     ; 005b2aee | g_TrainNoiseArray
        ;   Label: LAB_005b2aee
    JMP 0x005b29de                      ; 005b2af5
        ;   XREF to: 005b29de (UNCONDITIONAL_JUMP)  ; LAB_005b29de
    FLD float ptr [ESP]                 ; 005b2afa
        ;   Label: caseD_0
    MOV EAX,[0x00681ef0]                ; 005b2afd | g_CurrentTrainMode
    FMUL double ptr [0x0065276e]        ; 005b2b02 | DOUBLE_0065276e
    PUSH EAX                            ; 005b2b08 | = "int"
    MOV EDI,0x41c80000                  ; 005b2b09
    PUSH 0x652736                       ; 005b2b0e | = "rail?%s.wav"
    LEA EAX,[ESP + 0x10]                ; 005b2b13
    MOV dword ptr [ESP + 0x108],EDI     ; 005b2b17
    PUSH EAX                            ; 005b2b1e
    FSTP float ptr [ESP + 0x10]         ; 005b2b1f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005b2b23
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005b2b28
    PUSH 0x40000000                     ; 005b2b2b
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b2b30
    PUSH 0xc0400000                     ; 005b2b37
    MOV dword ptr [EAX],0x0             ; 005b2b3c
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005b2b42
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x114],EAX     ; 005b2b47
    FLD float ptr [ESP + 0x114]         ; 005b2b4e
    ADD ESP,0x8                         ; 005b2b55
    FMUL float ptr [ESP + 0x100]        ; 005b2b58
    MOV EAX,dword ptr [ESP + 0x104]     ; 005b2b5f
    FADD float ptr [0x03f6af78]         ; 005b2b66 | g_SoundListenerPrev.z
    MOV dword ptr [EAX + 0x4],0x0       ; 005b2b6c
    FSTP float ptr [EAX + 0x8]          ; 005b2b73
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b2b76
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x3                            ; 005b2b7b
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b2b7d
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
    ADD ESP,0x4                         ; 005b2b82
    PUSH 0x3f6b85c                      ; 005b2b85 | g_TrainVelocityVector
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00 ; 005b2b8a
        ;   XREF to: 005a8a00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 005b2b8f
    FLD float ptr [ESP + 0x4]           ; 005b2b92
    SUB ESP,0x8                         ; 005b2b96
    LEA EAX,[ESP + 0x10]                ; 005b2b99
    FSTP double ptr [ESP]               ; 005b2b9d
    PUSH EAX                            ; 005b2ba0
    PUSH 0x65274c                       ; 005b2ba1 | = "%s @ %g"
    LEA EAX,[ESP + 0x7c]                ; 005b2ba6
    PUSH EAX                            ; 005b2baa
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005b2bab
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 005b2bb0
    MOV EDX,dword ptr [ESP + 0x104]     ; 005b2bb3
    PUSH EDX                            ; 005b2bba
    LEA EAX,[ESP + 0x70]                ; 005b2bbb
    PUSH EAX                            ; 005b2bbf
    PUSH 0x0                            ; 005b2bc0
    MOV ECX,dword ptr [0x00681ef8]      ; 005b2bc2 | g_CSoundPtr | g_CSoundInstance
    PUSH ECX                            ; 005b2bc8 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 005b2bc9
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 005b2bce
    MOV EDX,dword ptr [ESP + 0x104]     ; 005b2bd1
    MOV dword ptr [EDX + 0xc],EAX       ; 005b2bd8
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b2bdb
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV ESP,EBP                         ; 005b2be0
    POP EBP                             ; 005b2be2
    POP EDI                             ; 005b2be3
    POP ESI                             ; 005b2be4
    POP EBX                             ; 005b2be5
    RET                                 ; 005b2be6
    FLD float ptr [ESP]                 ; 005b2be7
        ;   Label: caseD_2
    FMUL double ptr [0x00652766]        ; 005b2bea | DOUBLE_00652766
    MOV ESI,0x41a00000                  ; 005b2bf0
    LEA EDI,[ESP + 0x8]                 ; 005b2bf5
    MOV dword ptr [ESP + 0x100],ESI     ; 005b2bf9
    MOV ESI,0x652742                    ; 005b2c00 | = "bump?.wav"
    FSTP float ptr [ESP + 0x4]          ; 005b2c05
    PUSH EDI                            ; 005b2c09
    MOV AL,byte ptr [ESI]               ; 005b2c0a | = "bump?.wav" | s_mp_wav_00652744
        ;   Label: LAB_005b2c0a
    MOV byte ptr [EDI],AL               ; 005b2c0c
    CMP AL,0x0                          ; 005b2c0e
    JZ 0x005b2c22                       ; 005b2c10
        ;   XREF to: 005b2c22 (CONDITIONAL_JUMP)  ; LAB_005b2c22
    MOV AL,byte ptr [ESI + 0x1]         ; 005b2c12 | s_ump?.wav_00652743 | s_p?.wav_00652745
    ADD ESI,0x2                         ; 005b2c15
    MOV byte ptr [EDI + 0x1],AL         ; 005b2c18
    ADD EDI,0x2                         ; 005b2c1b
    CMP AL,0x0                          ; 005b2c1e
    JNZ 0x005b2c0a                      ; 005b2c20
        ;   XREF to: 005b2c0a (CONDITIONAL_JUMP)  ; LAB_005b2c0a
    POP EDI                             ; 005b2c22
        ;   Label: LAB_005b2c22
    JMP 0x005b2b2b                      ; 005b2c23
        ;   XREF to: 005b2b2b (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x40a00000                     ; 005b2c28
        ;   Label: LAB_005b2c28
    PUSH 0x3f800000                     ; 005b2c2d
    LEA EDI,[ESP + 0x10]                ; 005b2c32
    MOV EBX,0x3f800000                  ; 005b2c36
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005b2c3b
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x114],EAX     ; 005b2c40
    MOV ECX,0x41a00000                  ; 005b2c47
    FLD float ptr [ESP + 0x114]         ; 005b2c4c
    ADD ESP,0x8                         ; 005b2c53
    MOV ESI,0x682118                    ; 005b2c56 | g_TrainSoundFilenameTemplate
    MOV dword ptr [ESP + 0x100],ECX     ; 005b2c5b
    MOV ECX,0x19                        ; 005b2c62
    FSTP float ptr [0x03f6b868]         ; 005b2c67 | g_TrainNoiseCooldown
    MOV dword ptr [ESP + 0x4],EBX       ; 005b2c6d
    MOVSD.REP ES:EDI,ESI                ; 005b2c71 | g_TrainSoundFilenameTemplate | DAT_0068211c
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005b2c73
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 005b2c78
    MOV EBX,0x5                         ; 005b2c7a
    SAR EDX,0x1f                        ; 005b2c7f
    IDIV EBX                            ; 005b2c82
    CMP EDX,0x4                         ; 005b2c84
    JA 0x005b2b2b                       ; 005b2c87
        ;   XREF to: 005b2b2b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5b275c]  ; 005b2c8d | caseD_1 | caseD_3 | caseD_4
        ;   Label: switchD

