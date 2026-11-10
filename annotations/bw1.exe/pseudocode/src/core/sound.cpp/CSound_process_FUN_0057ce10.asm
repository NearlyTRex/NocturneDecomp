; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_process_FUN_0057ce10(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x160]:8  local_160
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0xe8]:1  local_e8
; undefined1       Stack[-0xe7]:1  local_e7
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
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
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004cf09c
;
; Referenced Globals:
;   void* switchdataD_0057cdfc = 0057d32a
;   undefined4 DAT_005f5a1d
;   undefined4 DAT_005f5a1f
;   undefined4 DAT_005f5a23
;   undefined4 DAT_005f5a27
;   undefined4 DAT_005f5a2b
;   TerminatedCString s_trainext_wav_005f5a2f
;   TerminatedCString s_railnoiz_wav_005f5a3c
;   TerminatedCString s_rail_s_wav_005f5a49
;   undefined1 DAT_005f5a55
;   undefined1 DAT_005f5a56
;   undefined1 DAT_005f5a57
;   TerminatedCString s_p_wav_005f5a58
;   TerminatedCString s_s_g_005f5a5f
;   undefined4 s_wind_ctl_wav_005f5a8d+1
;   ... and 47 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0
;   core_sound.cpp_CSound_killSound_FUN_0057d9d0
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
;   core_sound.cpp_updateListeners_FUN_0057b780
;   crt_stdlib.c_rand_FUN_005c084c
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c__strnicmp_FUN_005c1210
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_sndmain.cpp_enableSfxChannel_FUN_00573c50
;   sound_sndmain.cpp_FUN_00572880
;   sound_sndmain.cpp_FUN_005728e0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ce10
        ;   Label: core_sound.cpp_CSound_process_FUN_0057ce10
    PUSH ESI                            ; 0057ce11
    PUSH EDI                            ; 0057ce12
    PUSH EBP                            ; 0057ce13
    MOV EBP,ESP                         ; 0057ce14
    SUB ESP,0x144                       ; 0057ce16
    AND ESP,0xfffffff8                  ; 0057ce1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057ce1f
    MOV EAX,[0x0061d95c]                ; 0057ce22 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x294]     ; 0057ce27 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x110],EAX     ; 0057ce2d
    FLD float ptr [ESP + 0x110]         ; 0057ce34
    FMUL double ptr [0x005f5aae]        ; 0057ce3b | DAT_005f5aae
    MOV dword ptr [ESP + 0x11c],EAX     ; 0057ce41
    FSTP float ptr [ESP + 0x12c]        ; 0057ce48
    CALL core_sound.cpp_updateListeners_FUN_0057b780 ; 0057ce4f
        ;   XREF to: 0057b780 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_updateListeners_FUN_0057b780()
    FLD float ptr [0x02c82a78]          ; 0057ce54 | DAT_02c82a78
    FLD float ptr [ESP + 0x12c]         ; 0057ce5a
    FCHS                                ; 0057ce61
    FXCH                                ; 0057ce63
    FSUB float ptr [0x02c82a7c]         ; 0057ce65 | DAT_02c82a7c
    FXCH                                ; 0057ce6b
    FSTP float ptr [ESP + 0x118]        ; 0057ce6d
    FST float ptr [ESP + 0x128]         ; 0057ce74
    FCOMP float ptr [ESP + 0x118]       ; 0057ce7b
    FNSTSW AX                           ; 0057ce82
    SAHF                                ; 0057ce84
    JC 0x0057d422                       ; 0057ce85
        ;   XREF to: 0057d422 (CONDITIONAL_JUMP)  ; LAB_0057d422
    FLD float ptr [ESP + 0x128]         ; 0057ce8b
        ;   Label: LAB_0057ce8b
    FCOMP float ptr [ESP + 0x12c]       ; 0057ce92
    FNSTSW AX                           ; 0057ce99
    SAHF                                ; 0057ce9b
    JBE 0x0057ceac                      ; 0057ce9c
        ;   XREF to: 0057ceac (CONDITIONAL_JUMP)  ; LAB_0057ceac
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0057ce9e
    MOV dword ptr [ESP + 0x128],EAX     ; 0057cea5
    FLD float ptr [0x02c82a7c]          ; 0057ceac | DAT_02c82a7c
        ;   Label: LAB_0057ceac
    FADD float ptr [ESP + 0x128]        ; 0057ceb2
    FST float ptr [0x02c82a7c]          ; 0057ceb9 | DAT_02c82a7c
    FCOMP double ptr [0x005f5ab6]       ; 0057cebf | DAT_005f5ab6
    FNSTSW AX                           ; 0057cec5
    SAHF                                ; 0057cec7
    JBE 0x0057d44c                      ; 0057cec8
        ;   XREF to: 0057d44c (CONDITIONAL_JUMP)  ; LAB_0057d44c
    MOV ESI,dword ptr [0x02c82a64]      ; 0057cece | DAT_02c82a64
    PUSH ESI                            ; 0057ced4
    PUSH EBX                            ; 0057ced5
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 0057ced6
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0057cedb
    TEST EAX,EAX                        ; 0057cede
    JZ 0x0057d435                       ; 0057cee0
        ;   XREF to: 0057d435 (CONDITIONAL_JUMP)  ; LAB_0057d435
    MOV EDI,dword ptr [0x02c82a64]      ; 0057cee6 | DAT_02c82a64
        ;   Label: LAB_0057cee6
    PUSH dword ptr [0x02c82a7c]         ; 0057ceec | DAT_02c82a7c
    PUSH EDI                            ; 0057cef2
    CALL sound_sndmain.cpp_FUN_00573950 ; 0057cef3
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 0057cef8
    XOR EAX,EAX                         ; 0057cefb
        ;   Label: LAB_0057cefb
    MOV dword ptr [ESP + 0x8],EAX       ; 0057cefd
    MOV EAX,[0x00625c90]                ; 0057cf01 | g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 0057cf06 | g_CWaterInstance.visible_area_sqft
    FLDZ                                ; 0057cf09
    FCOMPP                              ; 0057cf0b
    FNSTSW AX                           ; 0057cf0d
    SAHF                                ; 0057cf0f
    JNC 0x0057cf5d                      ; 0057cf10
        ;   XREF to: 0057cf5d (CONDITIONAL_JUMP)  ; LAB_0057cf5d
    PUSH 0x4                            ; 0057cf12
    MOV EAX,[0x00622c18]                ; 0057cf14 | g_CDemonSetPtr
    PUSH 0x5f5a9b                       ; 0057cf19 | DAT_005f5a9b
    ADD EAX,0x14d0f0                    ; 0057cf1e
    PUSH EAX                            ; 0057cf23
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0057cf24
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0057cf29
    TEST EAX,EAX                        ; 0057cf2c
    JNZ 0x0057cf5d                      ; 0057cf2e
        ;   XREF to: 0057cf5d (CONDITIONAL_JUMP)  ; LAB_0057cf5d
    MOV EAX,[0x00625c90]                ; 0057cf30 | g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 0057cf35 | g_CWaterInstance.visible_area_sqft
    FSQRT                               ; 0057cf38
    FMUL double ptr [0x005f5abe]        ; 0057cf3a | DAT_005f5abe
    FADD double ptr [0x005f5ac6]        ; 0057cf40 | DAT_005f5ac6
    FST float ptr [ESP + 0x8]           ; 0057cf46
    FCOMP double ptr [0x005f5ace]       ; 0057cf4a | DAT_005f5ace
    FNSTSW AX                           ; 0057cf50
    SAHF                                ; 0057cf52
    JBE 0x0057cf5d                      ; 0057cf53
        ;   XREF to: 0057cf5d (CONDITIONAL_JUMP)  ; LAB_0057cf5d
    MOV dword ptr [ESP + 0x8],0x3f333333 ; 0057cf55
    FLD float ptr [ESP + 0x8]           ; 0057cf5d
        ;   Label: LAB_0057cf5d
    FLD float ptr [ESP + 0x12c]         ; 0057cf61
    FCHS                                ; 0057cf68
    FXCH                                ; 0057cf6a
    FSUB float ptr [0x02c82a80]         ; 0057cf6c | DAT_02c82a80
    FXCH                                ; 0057cf72
    FSTP float ptr [ESP + 0x114]        ; 0057cf74
    FST float ptr [ESP + 0x124]         ; 0057cf7b
    FCOMP float ptr [ESP + 0x114]       ; 0057cf82
    FNSTSW AX                           ; 0057cf89
    SAHF                                ; 0057cf8b
    JNC 0x0057cf9c                      ; 0057cf8c
        ;   XREF to: 0057cf9c (CONDITIONAL_JUMP)  ; LAB_0057cf9c
    MOV EAX,dword ptr [ESP + 0x114]     ; 0057cf8e
    MOV dword ptr [ESP + 0x124],EAX     ; 0057cf95
    FLD float ptr [ESP + 0x124]         ; 0057cf9c
        ;   Label: LAB_0057cf9c
    FCOMP float ptr [ESP + 0x12c]       ; 0057cfa3
    FNSTSW AX                           ; 0057cfaa
    SAHF                                ; 0057cfac
    JBE 0x0057cfbd                      ; 0057cfad
        ;   XREF to: 0057cfbd (CONDITIONAL_JUMP)  ; LAB_0057cfbd
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0057cfaf
    MOV dword ptr [ESP + 0x124],EAX     ; 0057cfb6
    FLD float ptr [0x02c82a80]          ; 0057cfbd | DAT_02c82a80
        ;   Label: LAB_0057cfbd
    FADD float ptr [ESP + 0x124]        ; 0057cfc3
    FST float ptr [0x02c82a80]          ; 0057cfca | DAT_02c82a80
    FCOMP double ptr [0x005f5ab6]       ; 0057cfd0 | DAT_005f5ab6
    FNSTSW AX                           ; 0057cfd6
    SAHF                                ; 0057cfd8
    JBE 0x0057d480                      ; 0057cfd9
        ;   XREF to: 0057d480 (CONDITIONAL_JUMP)  ; LAB_0057d480
    MOV ESI,dword ptr [0x02c82a68]      ; 0057cfdf | DAT_02c82a68
    PUSH ESI                            ; 0057cfe5
    PUSH EBX                            ; 0057cfe6
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 0057cfe7
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0057cfec
    TEST EAX,EAX                        ; 0057cfef
    JZ 0x0057d469                       ; 0057cff1
        ;   XREF to: 0057d469 (CONDITIONAL_JUMP)  ; LAB_0057d469
    MOV EDI,dword ptr [0x02c82a68]      ; 0057cff7 | DAT_02c82a68
        ;   Label: LAB_0057cff7
    PUSH dword ptr [0x02c82a80]         ; 0057cffd | DAT_02c82a80
    PUSH EDI                            ; 0057d003
    CALL sound_sndmain.cpp_FUN_00573950 ; 0057d004
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 0057d009
    FLD float ptr [0x02c832b0]          ; 0057d00c | DAT_02c832b0
        ;   Label: LAB_0057d00c
    FCOMP float ptr [ESP + 0x11c]       ; 0057d012
    FNSTSW AX                           ; 0057d019
    SAHF                                ; 0057d01b
    JBE 0x0057d49d                      ; 0057d01c
        ;   XREF to: 0057d49d (CONDITIONAL_JUMP)  ; LAB_0057d49d
    FLD float ptr [0x02c832ac]          ; 0057d022 | DAT_02c832ac
    FSUB float ptr [0x02c832a8]         ; 0057d028 | DAT_02c832a8
    FLD float ptr [ESP + 0x11c]         ; 0057d02e
    FLD ST0                             ; 0057d035
    FDIV float ptr [0x02c832b0]         ; 0057d037 | DAT_02c832b0
    FMULP ST2                           ; 0057d03d
    FSUBR float ptr [0x02c832b0]        ; 0057d03f | DAT_02c832b0
    FXCH                                ; 0057d045
    FADD float ptr [0x02c832a8]         ; 0057d047 | DAT_02c832a8
    FXCH                                ; 0057d04d
    FSTP float ptr [0x02c832b0]         ; 0057d04f | DAT_02c832b0
    FSTP float ptr [0x02c832a8]         ; 0057d055 | DAT_02c832a8
    PUSH 0x0                            ; 0057d05b
        ;   Label: LAB_0057d05b
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0 ; 0057d05d
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)
    ADD ESP,0x4                         ; 0057d062
    TEST EAX,EAX                        ; 0057d065
    JZ 0x0057d4b5                       ; 0057d067
        ;   XREF to: 0057d4b5 (CONDITIONAL_JUMP)  ; LAB_0057d4b5
    PUSH 0x1                            ; 0057d06d
    PUSH 0x3                            ; 0057d06f
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 ; 0057d071
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00573c50(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0057d076
    PUSH 0x0                            ; 0057d079
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0 ; 0057d07b
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0()
    MOV dword ptr [ESP + 0x144],EAX     ; 0057d080
    FLD float ptr [ESP + 0x144]         ; 0057d087
    ADD ESP,0x4                         ; 0057d08e
    FMUL float ptr [0x02c832a8]         ; 0057d091 | DAT_02c832a8
    SUB ESP,0x4                         ; 0057d097
    FSTP float ptr [ESP]                ; 0057d09a
    PUSH 0x3                            ; 0057d09d
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30 ; 0057d09f
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30()
    ADD ESP,0x8                         ; 0057d0a4
        ;   Label: LAB_0057d0a4
    MOV EAX,[0x00622c18]                ; 0057d0a7 | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15acb8],0x0  ; 0057d0ac | g_CDemonSetInstance.player_on_train
    JZ 0x0057d411                       ; 0057d0b3
        ;   XREF to: 0057d411 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [0x0061d95c]      ; 0057d0b9 | g_CGamePtr
    FLD float ptr [EDX + 0x294]         ; 0057d0bf | g_CGameInstance.delta_time_float
    MOV ECX,dword ptr [EDX + 0x25c]     ; 0057d0c5 | g_CGameInstance.field556_0x25c
    FSTP float ptr [ESP + 0x134]        ; 0057d0cb
    TEST ECX,ECX                        ; 0057d0d2
    JZ 0x0057d4c2                       ; 0057d0d4
        ;   XREF to: 0057d4c2 (CONDITIONAL_JUMP)  ; LAB_0057d4c2
    MOV ESI,0x5f5a1f                    ; 0057d0da | DAT_005f5a1f
    MOV EBX,0xffffffff                  ; 0057d0df
    MOV dword ptr [0x006236b0],ESI      ; 0057d0e4 | PTR_DAT_006236b0
    MOV dword ptr [0x02c83364],EBX      ; 0057d0ea | DAT_02c83364
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0057d0f0
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_0057d0f0
    PUSH 0x1                            ; 0057d0f5
    CALL sound_sndmain.cpp_FUN_005729f0 ; 0057d0f7
        ;   XREF to: 005729f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005729f0(uint flags)
    ADD ESP,0x4                         ; 0057d0fc
    PUSH 0x3                            ; 0057d0ff
    CALL sound_sndmain.cpp_FUN_00572980 ; 0057d101
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572980(int channel_index)
    ADD ESP,0x4                         ; 0057d106
    PUSH 0x5f5a2b                       ; 0057d109 | DAT_005f5a2b
    MOV EDI,dword ptr [0x006236b0]      ; 0057d10e | PTR_DAT_006236b0
    PUSH EDI                            ; 0057d114 | DAT_005f5a1f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0057d115
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057d11a
    TEST EAX,EAX                        ; 0057d11d
    JNZ 0x0057d599                      ; 0057d11f
        ;   XREF to: 0057d599 (CONDITIONAL_JUMP)  ; LAB_0057d599
    MOV ECX,dword ptr [0x02c8336c]      ; 0057d125 | DAT_02c8336c
    PUSH ECX                            ; 0057d12b
    MOV EBX,0x3ecccccd                  ; 0057d12c
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0057d131
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d136
    MOV dword ptr [ESP + 0x4],EBX       ; 0057d139
    MOV ESI,dword ptr [0x02c83368]      ; 0057d13d | DAT_02c83368
        ;   Label: LAB_0057d13d
    PUSH ESI                            ; 0057d143
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0057d144
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d149
    TEST EAX,EAX                        ; 0057d14c
    JZ 0x0057d5e7                       ; 0057d14e
        ;   XREF to: 0057d5e7 (CONDITIONAL_JUMP)  ; LAB_0057d5e7
    MOV EDI,dword ptr [0x006236b0]      ; 0057d154 | PTR_DAT_006236b0
    PUSH EDI                            ; 0057d15a | DAT_005f5a1f
    MOV EAX,[0x006236b4]                ; 0057d15b | PTR_DAT_006236b4
    PUSH EAX                            ; 0057d160 | DAT_005f5a1d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0057d161
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057d166
    TEST EAX,EAX                        ; 0057d169
    JNZ 0x0057d620                      ; 0057d16b
        ;   XREF to: 0057d620 (CONDITIONAL_JUMP)  ; LAB_0057d620
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0057d171
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
        ;   Label: LAB_0057d171
    MOV ESI,0x41f00000                  ; 0057d176
    MOV EBX,0x2c832b4                   ; 0057d17b
    MOV EAX,[0x006236b0]                ; 0057d180 | PTR_DAT_006236b0
    XOR ECX,ECX                         ; 0057d185
    MOV [0x006236b4],EAX                ; 0057d187 | PTR_DAT_006236b4
    MOV dword ptr [0x02c83354],ECX      ; 0057d18c | DAT_02c83354
    MOV dword ptr [0x02c83358],ECX      ; 0057d192 | DAT_02c83358
    MOV dword ptr [0x02c8335c],ESI      ; 0057d198 | DAT_02c8335c
    MOV dword ptr [ESP + 0x130],ECX     ; 0057d19e
    MOV dword ptr [ESP + 0x13c],ECX     ; 0057d1a5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0057d1ac
        ;   Label: LAB_0057d1ac
    SHL EAX,0x4                         ; 0057d1b3
    MOV EDX,dword ptr [EAX + 0x2c832c0] ; 0057d1b6
    PUSH EDX                            ; 0057d1bc
    MOV dword ptr [ESP + 0x13c],EAX     ; 0057d1bd
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0057d1c4
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d1c9
    TEST EAX,EAX                        ; 0057d1cc
    JZ 0x0057d644                       ; 0057d1ce
        ;   XREF to: 0057d644 (CONDITIONAL_JUMP)  ; LAB_0057d644
    FLD float ptr [ESP + 0x134]         ; 0057d1d4
    FLD float ptr [0x02c83354]          ; 0057d1db | DAT_02c83354
    FMUL ST1                            ; 0057d1e1
    FLD float ptr [0x02c83358]          ; 0057d1e3 | DAT_02c83358
    FMUL ST2                            ; 0057d1e9
    FLD float ptr [0x02c8335c]          ; 0057d1eb | DAT_02c8335c
    FMULP ST3                           ; 0057d1f1
    LEA EDI,[ESP + 0xd4]                ; 0057d1f3
    LEA ESI,[ESP + 0xec]                ; 0057d1fa
    FXCH                                ; 0057d201
    FSTP float ptr [ESP + 0xec]         ; 0057d203
    FSTP float ptr [ESP + 0xf0]         ; 0057d20a
    FSTP float ptr [ESP + 0xf4]         ; 0057d211
    MOVSD ES:EDI,ESI                    ; 0057d218
    MOVSD ES:EDI,ESI                    ; 0057d219
    MOVSD ES:EDI,ESI                    ; 0057d21a
    MOV EAX,dword ptr [ESP + 0x138]     ; 0057d21b
    FLD float ptr [EBX]                 ; 0057d222 | DAT_02c832b4
    FLD float ptr [EBX + 0x4]           ; 0057d224 | DAT_02c832b8
    FLD float ptr [EBX + 0x8]           ; 0057d227 | DAT_02c832bc
    FXCH ST2                            ; 0057d22a
    FADD float ptr [ESP + 0xd4]         ; 0057d22c
    FXCH                                ; 0057d233
    FADD float ptr [ESP + 0xd8]         ; 0057d235
    FXCH ST2                            ; 0057d23c
    FADD float ptr [ESP + 0xdc]         ; 0057d23e
    FXCH                                ; 0057d245
    FSTP float ptr [EBX]                ; 0057d247 | DAT_02c832b4
    FXCH                                ; 0057d249
    FSTP float ptr [EBX + 0x4]          ; 0057d24b | DAT_02c832b8
    FSTP float ptr [EBX + 0x8]          ; 0057d24e | DAT_02c832bc
    FLD float ptr [EAX + 0x2c832bc]     ; 0057d251 | DAT_02c832bc
    FABS                                ; 0057d257
    FCOMP double ptr [0x005f5af6]       ; 0057d259 | DAT_005f5af6
    FNSTSW AX                           ; 0057d25f
    SAHF                                ; 0057d261
    JBE 0x0057d27a                      ; 0057d262
        ;   XREF to: 0057d27a (CONDITIONAL_JUMP)  ; LAB_0057d27a
    MOV EAX,dword ptr [ESP + 0x138]     ; 0057d264
    MOV ECX,dword ptr [EAX + 0x2c832c0] ; 0057d26b
    PUSH ECX                            ; 0057d271
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0057d272
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d277
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0057d27a
        ;   Label: LAB_0057d27a
    INC ESI                             ; 0057d281
    ADD EBX,0x10                        ; 0057d282
    MOV dword ptr [ESP + 0x13c],ESI     ; 0057d285
    CMP ESI,0xa                         ; 0057d28c
    JL 0x0057d1ac                       ; 0057d28f
        ;   XREF to: 0057d1ac (CONDITIONAL_JUMP)  ; LAB_0057d1ac
    FLD float ptr [0x02c83360]          ; 0057d295 | DAT_02c83360
    FSUB float ptr [ESP + 0x134]        ; 0057d29b
    FST float ptr [0x02c83360]          ; 0057d2a2 | DAT_02c83360
    FLDZ                                ; 0057d2a8
    FCOMPP                              ; 0057d2aa
    FNSTSW AX                           ; 0057d2ac
    SAHF                                ; 0057d2ae
    JC 0x0057d411                       ; 0057d2af
        ;   XREF to: 0057d411 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [ESP + 0x130],0x0     ; 0057d2b5
    JZ 0x0057d411                       ; 0057d2bd
        ;   XREF to: 0057d411 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x40a00000                     ; 0057d2c3
    PUSH 0x3f800000                     ; 0057d2c8
    LEA EDI,[ESP + 0x78]                ; 0057d2cd
    MOV ESI,0x6238d8                    ; 0057d2d1 | DAT_006238d8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0057d2d6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x148],EAX     ; 0057d2db
    MOV ECX,0x19                        ; 0057d2e2
    FLD float ptr [ESP + 0x148]         ; 0057d2e7
    ADD ESP,0x8                         ; 0057d2ee
    MOV EDX,0x41a00000                  ; 0057d2f1
    MOVSD.REP ES:EDI,ESI                ; 0057d2f6 | DAT_006238d8 | DAT_006238dc
    FSTP float ptr [0x02c83360]         ; 0057d2f8 | DAT_02c83360
    MOV ECX,0x3f800000                  ; 0057d2fe
    MOV dword ptr [ESP + 0x120],EDX     ; 0057d303
    MOV dword ptr [ESP],ECX             ; 0057d30a
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0057d30d
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0057d312
    MOV EBX,0x5                         ; 0057d314
    SAR EDX,0x1f                        ; 0057d319
    IDIV EBX                            ; 0057d31c
    CMP EDX,0x4                         ; 0057d31e
    JA 0x0057d35d                       ; 0057d321
        ;   XREF to: 0057d35d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x57cdfc]  ; 0057d323 | caseD_1 | caseD_3 | caseD_4
        ;   Label: switchD
    FLD float ptr [ESP + 0x4]           ; 0057d32a
        ;   Label: caseD_0
    MOV EDI,dword ptr [0x006236b0]      ; 0057d32e | PTR_DAT_006236b0
    FMUL double ptr [0x005f5aee]        ; 0057d334 | DAT_005f5aee
    PUSH EDI                            ; 0057d33a | DAT_005f5a1f
    MOV ESI,0x41c80000                  ; 0057d33b
    PUSH 0x5f5a49                       ; 0057d340 | = "rail?%s.wav"
    LEA EAX,[ESP + 0x78]                ; 0057d345
    MOV dword ptr [ESP + 0x128],ESI     ; 0057d349
    PUSH EAX                            ; 0057d350
    FSTP float ptr [ESP + 0xc]          ; 0057d351
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0057d355
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d35a
    PUSH 0x40000000                     ; 0057d35d
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0x134]     ; 0057d362
    PUSH 0xc0400000                     ; 0057d369
    MOV dword ptr [EAX],0x0             ; 0057d36e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0057d374
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x148],EAX     ; 0057d379
    FLD float ptr [ESP + 0x148]         ; 0057d380
    ADD ESP,0x8                         ; 0057d387
    FMUL float ptr [ESP + 0x120]        ; 0057d38a
    MOV EAX,dword ptr [ESP + 0x130]     ; 0057d391
    FADD float ptr [0x02c82a74]         ; 0057d398 | DAT_02c82a74
    MOV dword ptr [EAX + 0x4],0x0       ; 0057d39e
    FSTP float ptr [EAX + 0x8]          ; 0057d3a5
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0057d3a8
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x3                            ; 0057d3ad
    CALL sound_sndmain.cpp_FUN_00572980 ; 0057d3af
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572980(int channel_index)
    ADD ESP,0x4                         ; 0057d3b4
    PUSH 0x2c83354                      ; 0057d3b7 | DAT_02c83354
    CALL sound_sndmain.cpp_FUN_00572880 ; 0057d3bc
        ;   XREF to: 00572880 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572880(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 0057d3c1
    FLD float ptr [ESP]                 ; 0057d3c4
    SUB ESP,0x8                         ; 0057d3c7
    LEA EAX,[ESP + 0x78]                ; 0057d3ca
    FSTP double ptr [ESP]               ; 0057d3ce
    PUSH EAX                            ; 0057d3d1
    PUSH 0x5f5a5f                       ; 0057d3d2 | = "%s @ %g"
    LEA EAX,[ESP + 0x1c]                ; 0057d3d7
    PUSH EAX                            ; 0057d3db
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0057d3dc
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 0057d3e1
    MOV EAX,dword ptr [ESP + 0x130]     ; 0057d3e4
    PUSH EAX                            ; 0057d3eb
    LEA EAX,[ESP + 0x10]                ; 0057d3ec
    PUSH EAX                            ; 0057d3f0
    PUSH 0x0                            ; 0057d3f1
    MOV EDX,dword ptr [0x006236b8]      ; 0057d3f3 | DAT_006236b8
    PUSH EDX                            ; 0057d3f9
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 0057d3fa
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0057d3ff
    MOV EDX,dword ptr [ESP + 0x130]     ; 0057d402
    MOV dword ptr [EDX + 0xc],EAX       ; 0057d409
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0057d40c
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    PUSH 0x1                            ; 0057d411
        ;   Label: caseD_4
    CALL sound_sndmain.cpp_pollAllStreams_FUN_00577040 ; 0057d413
        ;   XREF to: 00577040 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllStreams_FUN_00577040(int paused_mode)
    ADD ESP,0x4                         ; 0057d418
    MOV ESP,EBP                         ; 0057d41b
    POP EBP                             ; 0057d41d
    POP EDI                             ; 0057d41e
    POP ESI                             ; 0057d41f
    POP EBX                             ; 0057d420
    RET                                 ; 0057d421
    MOV EAX,dword ptr [ESP + 0x118]     ; 0057d422
        ;   Label: LAB_0057d422
    MOV dword ptr [ESP + 0x128],EAX     ; 0057d429
    JMP 0x0057ce8b                      ; 0057d430
        ;   XREF to: 0057ce8b (UNCONDITIONAL_JUMP)  ; LAB_0057ce8b
    PUSH 0x5f5a8e                       ; 0057d435 | s_wind_ctl_wav_005f5a8d+1
        ;   Label: LAB_0057d435
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0057d43a
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0057d43f
    MOV [0x02c82a64],EAX                ; 0057d442 | DAT_02c82a64
    JMP 0x0057cee6                      ; 0057d447
        ;   XREF to: 0057cee6 (UNCONDITIONAL_JUMP)  ; LAB_0057cee6
    MOV EDX,dword ptr [0x02c82a64]      ; 0057d44c | DAT_02c82a64
        ;   Label: LAB_0057d44c
    PUSH EDX                            ; 0057d452
    PUSH EBX                            ; 0057d453
    CALL core_sound.cpp_CSound_killSound_FUN_0057d9d0 ; 0057d454
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    XOR ECX,ECX                         ; 0057d459
    ADD ESP,0x8                         ; 0057d45b
    MOV dword ptr [0x02c82a7c],ECX      ; 0057d45e | DAT_02c82a7c
    JMP 0x0057cefb                      ; 0057d464
        ;   XREF to: 0057cefb (UNCONDITIONAL_JUMP)  ; LAB_0057cefb
    PUSH 0x5f5aa0                       ; 0057d469 | = "water-2.wav"
        ;   Label: LAB_0057d469
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0057d46e
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0057d473
    MOV [0x02c82a68],EAX                ; 0057d476 | DAT_02c82a68
    JMP 0x0057cff7                      ; 0057d47b
        ;   XREF to: 0057cff7 (UNCONDITIONAL_JUMP)  ; LAB_0057cff7
    MOV ECX,dword ptr [0x02c82a68]      ; 0057d480 | DAT_02c82a68
        ;   Label: LAB_0057d480
    PUSH ECX                            ; 0057d486
    PUSH EBX                            ; 0057d487
    CALL core_sound.cpp_CSound_killSound_FUN_0057d9d0 ; 0057d488
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    XOR EBX,EBX                         ; 0057d48d
    ADD ESP,0x8                         ; 0057d48f
    MOV dword ptr [0x02c82a80],EBX      ; 0057d492 | DAT_02c82a80
    JMP 0x0057d00c                      ; 0057d498
        ;   XREF to: 0057d00c (UNCONDITIONAL_JUMP)  ; LAB_0057d00c
    FLD float ptr [0x02c832ac]          ; 0057d49d | DAT_02c832ac
        ;   Label: LAB_0057d49d
    XOR EAX,EAX                         ; 0057d4a3
    FSTP float ptr [0x02c832a8]         ; 0057d4a5 | DAT_02c832a8
    MOV [0x02c832b0],EAX                ; 0057d4ab | DAT_02c832b0
    JMP 0x0057d05b                      ; 0057d4b0
        ;   XREF to: 0057d05b (UNCONDITIONAL_JUMP)  ; LAB_0057d05b
    PUSH EAX                            ; 0057d4b5
        ;   Label: LAB_0057d4b5
    PUSH 0x3                            ; 0057d4b6
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 ; 0057d4b8
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00573c50(int channel_index, int enable_state)
    JMP 0x0057d0a4                      ; 0057d4bd
        ;   XREF to: 0057d0a4 (UNCONDITIONAL_JUMP)  ; LAB_0057d0a4
    MOV EBX,dword ptr [0x02c83364]      ; 0057d4c2 | DAT_02c83364
        ;   Label: LAB_0057d4c2
    CMP EBX,dword ptr [EAX + 0x15aeb8]  ; 0057d4c8 | g_CDemonSetInstance.selected_camera_index
    JZ 0x0057d0f0                       ; 0057d4ce
        ;   XREF to: 0057d0f0 (CONDITIONAL_JUMP)  ; LAB_0057d0f0
    PUSH EAX                            ; 0057d4d4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0057d4d5
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057d4da
    MOV ESI,dword ptr [0x00622c18]      ; 0057d4dd | g_CDemonSetPtr
    PUSH ESI                            ; 0057d4e3 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x108]               ; 0057d4e4
    MOV ESI,0x2c82a6c                   ; 0057d4eb
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0 ; 0057d4f0
        ;   XREF to: 005592b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057d4f5
    MOVSD ES:EDI,ESI                    ; 0057d4f8 | DAT_02c82a6c
    MOVSD ES:EDI,ESI                    ; 0057d4f9 | DAT_02c82a70
    MOVSD ES:EDI,ESI                    ; 0057d4fa | DAT_02c82a74
    FLD float ptr [ESP + 0x108]         ; 0057d4fb
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057d502
    LEA EDI,[ESP + 0xf8]                ; 0057d509
    LEA ESI,[ESP + 0xe0]                ; 0057d510
    MOV dword ptr [ESP + 0xe0],EAX      ; 0057d517
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0057d51e
    FADD float ptr [0x005f5ad6]         ; 0057d525 | DAT_005f5ad6
    MOV dword ptr [ESP + 0xe8],EAX      ; 0057d52b
    LEA EAX,[ESP + 0xf8]                ; 0057d532
    FSTP float ptr [ESP + 0xe4]         ; 0057d539
    PUSH EAX                            ; 0057d540
    LEA EAX,[ESP + 0x108]               ; 0057d541
    MOVSD ES:EDI,ESI                    ; 0057d548
    MOVSD ES:EDI,ESI                    ; 0057d549
    MOVSD ES:EDI,ESI                    ; 0057d54a
    PUSH EAX                            ; 0057d54b
    MOV EDI,dword ptr [0x00622c18]      ; 0057d54c | g_CDemonSetPtr
    PUSH EDI                            ; 0057d552 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 0057d553
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0057d558
    TEST EAX,EAX                        ; 0057d55b
    JZ 0x0057d58d                       ; 0057d55d
        ;   XREF to: 0057d58d (CONDITIONAL_JUMP)  ; LAB_0057d58d
    MOV dword ptr [0x006236b0],0x5f5a23 ; 0057d55f | PTR_DAT_006236b0 | DAT_005f5a23
    MOV ECX,dword ptr [0x00622c18]      ; 0057d569 | g_CDemonSetPtr
        ;   Label: LAB_0057d569
    PUSH ECX                            ; 0057d56f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0057d570
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV EAX,[0x00622c18]                ; 0057d575 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0057d57a | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x4                         ; 0057d580
    MOV [0x02c83364],EAX                ; 0057d583 | DAT_02c83364
    JMP 0x0057d0f0                      ; 0057d588
        ;   XREF to: 0057d0f0 (UNCONDITIONAL_JUMP)  ; LAB_0057d0f0
    MOV dword ptr [0x006236b0],0x5f5a27 ; 0057d58d | PTR_DAT_006236b0 | DAT_005f5a27
        ;   Label: LAB_0057d58d
    JMP 0x0057d569                      ; 0057d597
        ;   XREF to: 0057d569 (UNCONDITIONAL_JUMP)  ; LAB_0057d569
    MOV EDX,dword ptr [0x02c8336c]      ; 0057d599 | DAT_02c8336c
        ;   Label: LAB_0057d599
    MOV EAX,0x3f333333                  ; 0057d59f
    PUSH EDX                            ; 0057d5a4
    MOV dword ptr [ESP + 0x8],EAX       ; 0057d5a5
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0057d5a9
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d5ae
    TEST EAX,EAX                        ; 0057d5b1
    JNZ 0x0057d13d                      ; 0057d5b3
        ;   XREF to: 0057d13d (CONDITIONAL_JUMP)  ; LAB_0057d13d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0057d5b9
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x3ecccccd                     ; 0057d5be
    CALL sound_sndmain.cpp_FUN_005728e0 ; 0057d5c3
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0057d5c8
    PUSH 0x5f5a2f                       ; 0057d5cb | = "trainext.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0057d5d0
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0057d5d5
    MOV [0x02c8336c],EAX                ; 0057d5d8 | DAT_02c8336c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0057d5dd
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    JMP 0x0057d13d                      ; 0057d5e2
        ;   XREF to: 0057d13d (UNCONDITIONAL_JUMP)  ; LAB_0057d13d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0057d5e7
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_0057d5e7
    FLD float ptr [ESP + 0x4]           ; 0057d5ec
    FMUL double ptr [0x005f5ade]        ; 0057d5f0 | DAT_005f5ade
    SUB ESP,0x4                         ; 0057d5f6
    FSTP float ptr [ESP]                ; 0057d5f9
    CALL sound_sndmain.cpp_FUN_005728e0 ; 0057d5fc
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0057d601
    PUSH 0x5f5a3c                       ; 0057d604 | = "railnoiz.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0057d609
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0057d60e
    MOV [0x02c83368],EAX                ; 0057d611 | DAT_02c83368
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0057d616
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    JMP 0x0057d171                      ; 0057d61b
        ;   XREF to: 0057d171 (UNCONDITIONAL_JUMP)  ; LAB_0057d171
    FLD float ptr [ESP + 0x4]           ; 0057d620
        ;   Label: LAB_0057d620
    FMUL double ptr [0x005f5ade]        ; 0057d624 | DAT_005f5ade
    SUB ESP,0x4                         ; 0057d62a
    MOV EDX,dword ptr [0x02c83368]      ; 0057d62d | DAT_02c83368
    FSTP float ptr [ESP]                ; 0057d633
    PUSH EDX                            ; 0057d636
    CALL sound_sndmain.cpp_FUN_00573950 ; 0057d637
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 0057d63c
    JMP 0x0057d171                      ; 0057d63f
        ;   XREF to: 0057d171 (UNCONDITIONAL_JUMP)  ; LAB_0057d171
    MOV dword ptr [ESP + 0x130],EBX     ; 0057d644 | DAT_02c832b4
        ;   Label: LAB_0057d644
    JMP 0x0057d27a                      ; 0057d64b
        ;   XREF to: 0057d27a (UNCONDITIONAL_JUMP)  ; LAB_0057d27a
    FLD float ptr [ESP + 0x4]           ; 0057d650
        ;   Label: caseD_2
    FMUL double ptr [0x005f5ae6]        ; 0057d654 | DAT_005f5ae6
    MOV EBX,0x41a00000                  ; 0057d65a
    MOV ESI,0x5f5a55                    ; 0057d65f | DAT_005f5a55
    LEA EDI,[ESP + 0x70]                ; 0057d664
    MOV dword ptr [ESP + 0x120],EBX     ; 0057d668
    FSTP float ptr [ESP]                ; 0057d66f
    PUSH EDI                            ; 0057d672
    MOV AL,byte ptr [ESI]               ; 0057d673 | DAT_005f5a55 | DAT_005f5a57
        ;   Label: LAB_0057d673
    MOV byte ptr [EDI],AL               ; 0057d675
    CMP AL,0x0                          ; 0057d677
    JZ 0x0057d68b                       ; 0057d679
        ;   XREF to: 0057d68b (CONDITIONAL_JUMP)  ; LAB_0057d68b
    MOV AL,byte ptr [ESI + 0x1]         ; 0057d67b | DAT_005f5a56 | = "p?.wav"
    ADD ESI,0x2                         ; 0057d67e
    MOV byte ptr [EDI + 0x1],AL         ; 0057d681
    ADD EDI,0x2                         ; 0057d684
    CMP AL,0x0                          ; 0057d687
    JNZ 0x0057d673                      ; 0057d689
        ;   XREF to: 0057d673 (CONDITIONAL_JUMP)  ; LAB_0057d673
    POP EDI                             ; 0057d68b
        ;   Label: LAB_0057d68b
    JMP 0x0057d35d                      ; 0057d68c
        ;   XREF to: 0057d35d (UNCONDITIONAL_JUMP)  ; default

