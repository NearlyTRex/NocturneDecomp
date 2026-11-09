; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_0055ff40(CSound *this_ptr)
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
;   core_game.cpp_FUN_004b6f30 at 004b7a4c
;
; Referenced Globals:
;   void* switchdataD_0055ff2c = 0056045a
;   undefined4 DAT_005d5276
;   undefined4 DAT_005d5278
;   undefined4 DAT_005d527c
;   undefined4 DAT_005d5280
;   undefined4 DAT_005d5284
;   TerminatedCString s_trainext_wav_005d5288
;   TerminatedCString s_railnoiz_wav_005d5295
;   TerminatedCString s_rail_s_wav_005d52a2
;   undefined1 DAT_005d52ae
;   undefined1 DAT_005d52af
;   undefined1 DAT_005d52b0
;   TerminatedCString s_p_wav_005d52b1
;   TerminatedCString s_s_g_005d52b8
;   undefined4 s_wind_ctl_wav_005d52e6+1
;   ... and 47 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
;   core_setcolid.cpp_FUN_0053ec70
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00
;   core_sound.cpp_FUN_00560af0
;   core_sound.cpp_FUN_00560b00
;   core_sound.cpp_updateListeners_FUN_0055e8b0
;   crt_stdlib.c_rand_FUN_005a35cc
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c__strnicmp_FUN_005a3f90
;   crt_unknown.c_FUN_005a28c0
;   sound_sndmain.cpp_FUN_00555d90
;   sound_sndmain.cpp_FUN_00555df0
;   sound_sndmain.cpp_FUN_00555f00
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ff40
        ;   Label: core_sound.cpp_FUN_0055ff40
    PUSH ESI                            ; 0055ff41
    PUSH EDI                            ; 0055ff42
    PUSH EBP                            ; 0055ff43
    MOV EBP,ESP                         ; 0055ff44
    SUB ESP,0x144                       ; 0055ff46
    AND ESP,0xfffffff8                  ; 0055ff4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055ff4f
    MOV EAX,[0x005fe9dc]                ; 0055ff52 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 0055ff57 | g_CGameInstance.field788_0x314
    MOV dword ptr [ESP + 0x110],EAX     ; 0055ff5d
    FLD float ptr [ESP + 0x110]         ; 0055ff64
    FMUL double ptr [0x005d5307]        ; 0055ff6b | DAT_005d5307
    MOV dword ptr [ESP + 0x11c],EAX     ; 0055ff71
    FSTP float ptr [ESP + 0x12c]        ; 0055ff78
    CALL core_sound.cpp_updateListeners_FUN_0055e8b0 ; 0055ff7f
        ;   XREF to: 0055e8b0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_updateListeners_FUN_0055e8b0()
    FLD float ptr [0x02cf5698]          ; 0055ff84 | DAT_02cf5698
    FLD float ptr [ESP + 0x12c]         ; 0055ff8a
    FCHS                                ; 0055ff91
    FXCH                                ; 0055ff93
    FSUB float ptr [0x02cf569c]         ; 0055ff95 | DAT_02cf569c
    FXCH                                ; 0055ff9b
    FSTP float ptr [ESP + 0x118]        ; 0055ff9d
    FST float ptr [ESP + 0x128]         ; 0055ffa4
    FCOMP float ptr [ESP + 0x118]       ; 0055ffab
    FNSTSW AX                           ; 0055ffb2
    SAHF                                ; 0055ffb4
    JC 0x00560552                       ; 0055ffb5
        ;   XREF to: 00560552 (CONDITIONAL_JUMP)  ; LAB_00560552
    FLD float ptr [ESP + 0x128]         ; 0055ffbb
        ;   Label: LAB_0055ffbb
    FCOMP float ptr [ESP + 0x12c]       ; 0055ffc2
    FNSTSW AX                           ; 0055ffc9
    SAHF                                ; 0055ffcb
    JBE 0x0055ffdc                      ; 0055ffcc
        ;   XREF to: 0055ffdc (CONDITIONAL_JUMP)  ; LAB_0055ffdc
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0055ffce
    MOV dword ptr [ESP + 0x128],EAX     ; 0055ffd5
    FLD float ptr [0x02cf569c]          ; 0055ffdc | DAT_02cf569c
        ;   Label: LAB_0055ffdc
    FADD float ptr [ESP + 0x128]        ; 0055ffe2
    FST float ptr [0x02cf569c]          ; 0055ffe9 | DAT_02cf569c
    FCOMP double ptr [0x005d530f]       ; 0055ffef | DAT_005d530f
    FNSTSW AX                           ; 0055fff5
    SAHF                                ; 0055fff7
    JBE 0x0056057c                      ; 0055fff8
        ;   XREF to: 0056057c (CONDITIONAL_JUMP)  ; LAB_0056057c
    MOV ESI,dword ptr [0x02cf5684]      ; 0055fffe | DAT_02cf5684
    PUSH ESI                            ; 00560004
    PUSH EBX                            ; 00560005
    CALL core_sound.cpp_FUN_00560af0    ; 00560006
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0056000b
    TEST EAX,EAX                        ; 0056000e
    JZ 0x00560565                       ; 00560010
        ;   XREF to: 00560565 (CONDITIONAL_JUMP)  ; LAB_00560565
    MOV EDI,dword ptr [0x02cf5684]      ; 00560016 | DAT_02cf5684
        ;   Label: LAB_00560016
    PUSH dword ptr [0x02cf569c]         ; 0056001c | DAT_02cf569c
    PUSH EDI                            ; 00560022
    CALL sound_sndmain.cpp_FUN_00556ab0 ; 00560023
        ;   XREF to: 00556ab0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556ab0()
    ADD ESP,0x8                         ; 00560028
    XOR EAX,EAX                         ; 0056002b
        ;   Label: LAB_0056002b
    MOV dword ptr [ESP + 0x8],EAX       ; 0056002d
    MOV EAX,[0x00606b20]                ; 00560031 | g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 00560036 | g_CWaterInstance.field12_0xc
    FLDZ                                ; 00560039
    FCOMPP                              ; 0056003b
    FNSTSW AX                           ; 0056003d
    SAHF                                ; 0056003f
    JNC 0x0056008d                      ; 00560040
        ;   XREF to: 0056008d (CONDITIONAL_JUMP)  ; LAB_0056008d
    PUSH 0x4                            ; 00560042
    MOV EAX,[0x00603b28]                ; 00560044 | g_CDemonSetPtr
    PUSH 0x5d52f4                       ; 00560049 | DAT_005d52f4
    ADD EAX,0x14d0f0                    ; 0056004e
    PUSH EAX                            ; 00560053
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00560054
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560059
    TEST EAX,EAX                        ; 0056005c
    JNZ 0x0056008d                      ; 0056005e
        ;   XREF to: 0056008d (CONDITIONAL_JUMP)  ; LAB_0056008d
    MOV EAX,[0x00606b20]                ; 00560060 | g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 00560065 | g_CWaterInstance.field12_0xc
    FSQRT                               ; 00560068
    FMUL double ptr [0x005d5317]        ; 0056006a | DAT_005d5317
    FADD double ptr [0x005d531f]        ; 00560070 | DAT_005d531f
    FST float ptr [ESP + 0x8]           ; 00560076
    FCOMP double ptr [0x005d5327]       ; 0056007a | DAT_005d5327
    FNSTSW AX                           ; 00560080
    SAHF                                ; 00560082
    JBE 0x0056008d                      ; 00560083
        ;   XREF to: 0056008d (CONDITIONAL_JUMP)  ; LAB_0056008d
    MOV dword ptr [ESP + 0x8],0x3f333333 ; 00560085
    FLD float ptr [ESP + 0x8]           ; 0056008d
        ;   Label: LAB_0056008d
    FLD float ptr [ESP + 0x12c]         ; 00560091
    FCHS                                ; 00560098
    FXCH                                ; 0056009a
    FSUB float ptr [0x02cf56a0]         ; 0056009c | DAT_02cf56a0
    FXCH                                ; 005600a2
    FSTP float ptr [ESP + 0x114]        ; 005600a4
    FST float ptr [ESP + 0x124]         ; 005600ab
    FCOMP float ptr [ESP + 0x114]       ; 005600b2
    FNSTSW AX                           ; 005600b9
    SAHF                                ; 005600bb
    JNC 0x005600cc                      ; 005600bc
        ;   XREF to: 005600cc (CONDITIONAL_JUMP)  ; LAB_005600cc
    MOV EAX,dword ptr [ESP + 0x114]     ; 005600be
    MOV dword ptr [ESP + 0x124],EAX     ; 005600c5
    FLD float ptr [ESP + 0x124]         ; 005600cc
        ;   Label: LAB_005600cc
    FCOMP float ptr [ESP + 0x12c]       ; 005600d3
    FNSTSW AX                           ; 005600da
    SAHF                                ; 005600dc
    JBE 0x005600ed                      ; 005600dd
        ;   XREF to: 005600ed (CONDITIONAL_JUMP)  ; LAB_005600ed
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005600df
    MOV dword ptr [ESP + 0x124],EAX     ; 005600e6
    FLD float ptr [0x02cf56a0]          ; 005600ed | DAT_02cf56a0
        ;   Label: LAB_005600ed
    FADD float ptr [ESP + 0x124]        ; 005600f3
    FST float ptr [0x02cf56a0]          ; 005600fa | DAT_02cf56a0
    FCOMP double ptr [0x005d530f]       ; 00560100 | DAT_005d530f
    FNSTSW AX                           ; 00560106
    SAHF                                ; 00560108
    JBE 0x005605b0                      ; 00560109
        ;   XREF to: 005605b0 (CONDITIONAL_JUMP)  ; LAB_005605b0
    MOV ESI,dword ptr [0x02cf5688]      ; 0056010f | DAT_02cf5688
    PUSH ESI                            ; 00560115
    PUSH EBX                            ; 00560116
    CALL core_sound.cpp_FUN_00560af0    ; 00560117
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0056011c
    TEST EAX,EAX                        ; 0056011f
    JZ 0x00560599                       ; 00560121
        ;   XREF to: 00560599 (CONDITIONAL_JUMP)  ; LAB_00560599
    MOV EDI,dword ptr [0x02cf5688]      ; 00560127 | DAT_02cf5688
        ;   Label: LAB_00560127
    PUSH dword ptr [0x02cf56a0]         ; 0056012d | DAT_02cf56a0
    PUSH EDI                            ; 00560133
    CALL sound_sndmain.cpp_FUN_00556ab0 ; 00560134
        ;   XREF to: 00556ab0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556ab0()
    ADD ESP,0x8                         ; 00560139
    FLD float ptr [0x02cf5ed0]          ; 0056013c | DAT_02cf5ed0
        ;   Label: LAB_0056013c
    FCOMP float ptr [ESP + 0x11c]       ; 00560142
    FNSTSW AX                           ; 00560149
    SAHF                                ; 0056014b
    JBE 0x005605cd                      ; 0056014c
        ;   XREF to: 005605cd (CONDITIONAL_JUMP)  ; LAB_005605cd
    FLD float ptr [0x02cf5ecc]          ; 00560152 | DAT_02cf5ecc
    FSUB float ptr [0x02cf5ec8]         ; 00560158 | DAT_02cf5ec8
    FLD float ptr [ESP + 0x11c]         ; 0056015e
    FLD ST0                             ; 00560165
    FDIV float ptr [0x02cf5ed0]         ; 00560167 | DAT_02cf5ed0
    FMULP ST2                           ; 0056016d
    FSUBR float ptr [0x02cf5ed0]        ; 0056016f | DAT_02cf5ed0
    FXCH                                ; 00560175
    FADD float ptr [0x02cf5ec8]         ; 00560177 | DAT_02cf5ec8
    FXCH                                ; 0056017d
    FSTP float ptr [0x02cf5ed0]         ; 0056017f | DAT_02cf5ed0
    FSTP float ptr [0x02cf5ec8]         ; 00560185 | DAT_02cf5ec8
    PUSH 0x0                            ; 0056018b
        ;   Label: LAB_0056018b
    CALL sound_sndmain.cpp_FUN_00556e30 ; 0056018d
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 00560192
    TEST EAX,EAX                        ; 00560195
    JZ 0x005605e5                       ; 00560197
        ;   XREF to: 005605e5 (CONDITIONAL_JUMP)  ; LAB_005605e5
    PUSH 0x1                            ; 0056019d
    PUSH 0x3                            ; 0056019f
    CALL sound_sndmain.cpp_FUN_00556db0 ; 005601a1
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 005601a6
    PUSH 0x0                            ; 005601a9
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 005601ab
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20()
    MOV dword ptr [ESP + 0x144],EAX     ; 005601b0
    FLD float ptr [ESP + 0x144]         ; 005601b7
    ADD ESP,0x4                         ; 005601be
    FMUL float ptr [0x02cf5ec8]         ; 005601c1 | DAT_02cf5ec8
    SUB ESP,0x4                         ; 005601c7
    FSTP float ptr [ESP]                ; 005601ca
    PUSH 0x3                            ; 005601cd
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 005601cf
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90()
    ADD ESP,0x8                         ; 005601d4
        ;   Label: LAB_005601d4
    MOV EAX,[0x00603b28]                ; 005601d7 | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15acb8],0x0  ; 005601dc | g_CDemonSetInstance.field1420472_0x15acb8
    JZ 0x00560541                       ; 005601e3
        ;   XREF to: 00560541 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [0x005fe9dc]      ; 005601e9 | g_CGamePtr
    FLD float ptr [EDX + 0x314]         ; 005601ef | g_CGameInstance.field788_0x314
    MOV ECX,dword ptr [EDX + 0x264]     ; 005601f5 | g_CGameInstance.field612_0x264
    FSTP float ptr [ESP + 0x134]        ; 005601fb
    TEST ECX,ECX                        ; 00560202
    JZ 0x005605f2                       ; 00560204
        ;   XREF to: 005605f2 (CONDITIONAL_JUMP)  ; LAB_005605f2
    MOV ESI,0x5d5278                    ; 0056020a | DAT_005d5278
    MOV EBX,0xffffffff                  ; 0056020f
    MOV dword ptr [0x006045f0],ESI      ; 00560214 | PTR_DAT_006045f0
    MOV dword ptr [0x02cf5f84],EBX      ; 0056021a | DAT_02cf5f84
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 00560220
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
        ;   Label: LAB_00560220
    PUSH 0x1                            ; 00560225
    CALL sound_sndmain.cpp_FUN_00555f00 ; 00560227
        ;   XREF to: 00555f00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555f00(uint flags)
    ADD ESP,0x4                         ; 0056022c
    PUSH 0x3                            ; 0056022f
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 00560231
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 00560236
    PUSH 0x5d5284                       ; 00560239 | DAT_005d5284
    MOV EDI,dword ptr [0x006045f0]      ; 0056023e | PTR_DAT_006045f0
    PUSH EDI                            ; 00560244 | DAT_005d5278
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00560245
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056024a
    TEST EAX,EAX                        ; 0056024d
    JNZ 0x005606c9                      ; 0056024f
        ;   XREF to: 005606c9 (CONDITIONAL_JUMP)  ; LAB_005606c9
    MOV ECX,dword ptr [0x02cf5f8c]      ; 00560255 | DAT_02cf5f8c
    PUSH ECX                            ; 0056025b
    MOV EBX,0x3ecccccd                  ; 0056025c
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00560261
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00560266
    MOV dword ptr [ESP + 0x4],EBX       ; 00560269
    MOV ESI,dword ptr [0x02cf5f88]      ; 0056026d | DAT_02cf5f88
        ;   Label: LAB_0056026d
    PUSH ESI                            ; 00560273
    CALL sound_sndmain.cpp_FUN_00556700 ; 00560274
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00560279
    TEST EAX,EAX                        ; 0056027c
    JZ 0x00560717                       ; 0056027e
        ;   XREF to: 00560717 (CONDITIONAL_JUMP)  ; LAB_00560717
    MOV EDI,dword ptr [0x006045f0]      ; 00560284 | PTR_DAT_006045f0
    PUSH EDI                            ; 0056028a | DAT_005d5278
    MOV EAX,[0x006045f4]                ; 0056028b | PTR_DAT_006045f4
    PUSH EAX                            ; 00560290 | DAT_005d5276
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00560291
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00560296
    TEST EAX,EAX                        ; 00560299
    JNZ 0x00560750                      ; 0056029b
        ;   XREF to: 00560750 (CONDITIONAL_JUMP)  ; LAB_00560750
    CALL sound_sndmain.cpp_FUN_00556050 ; 005602a1
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
        ;   Label: LAB_005602a1
    MOV ESI,0x41f00000                  ; 005602a6
    MOV EBX,0x2cf5ed4                   ; 005602ab
    MOV EAX,[0x006045f0]                ; 005602b0 | PTR_DAT_006045f0
    XOR ECX,ECX                         ; 005602b5
    MOV [0x006045f4],EAX                ; 005602b7 | PTR_DAT_006045f4
    MOV dword ptr [0x02cf5f74],ECX      ; 005602bc | DAT_02cf5f74
    MOV dword ptr [0x02cf5f78],ECX      ; 005602c2 | DAT_02cf5f78
    MOV dword ptr [0x02cf5f7c],ESI      ; 005602c8 | DAT_02cf5f7c
    MOV dword ptr [ESP + 0x130],ECX     ; 005602ce
    MOV dword ptr [ESP + 0x13c],ECX     ; 005602d5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005602dc
        ;   Label: LAB_005602dc
    SHL EAX,0x4                         ; 005602e3
    MOV EDX,dword ptr [EAX + 0x2cf5ee0] ; 005602e6
    PUSH EDX                            ; 005602ec
    MOV dword ptr [ESP + 0x13c],EAX     ; 005602ed
    CALL sound_sndmain.cpp_FUN_00556700 ; 005602f4
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005602f9
    TEST EAX,EAX                        ; 005602fc
    JZ 0x00560774                       ; 005602fe
        ;   XREF to: 00560774 (CONDITIONAL_JUMP)  ; LAB_00560774
    FLD float ptr [ESP + 0x134]         ; 00560304
    FLD float ptr [0x02cf5f74]          ; 0056030b | DAT_02cf5f74
    FMUL ST1                            ; 00560311
    FLD float ptr [0x02cf5f78]          ; 00560313 | DAT_02cf5f78
    FMUL ST2                            ; 00560319
    FLD float ptr [0x02cf5f7c]          ; 0056031b | DAT_02cf5f7c
    FMULP ST3                           ; 00560321
    LEA EDI,[ESP + 0xd4]                ; 00560323
    LEA ESI,[ESP + 0xec]                ; 0056032a
    FXCH                                ; 00560331
    FSTP float ptr [ESP + 0xec]         ; 00560333
    FSTP float ptr [ESP + 0xf0]         ; 0056033a
    FSTP float ptr [ESP + 0xf4]         ; 00560341
    MOVSD ES:EDI,ESI                    ; 00560348
    MOVSD ES:EDI,ESI                    ; 00560349
    MOVSD ES:EDI,ESI                    ; 0056034a
    MOV EAX,dword ptr [ESP + 0x138]     ; 0056034b
    FLD float ptr [EBX]                 ; 00560352 | DAT_02cf5ed4
    FLD float ptr [EBX + 0x4]           ; 00560354 | DAT_02cf5ed8
    FLD float ptr [EBX + 0x8]           ; 00560357 | DAT_02cf5edc
    FXCH ST2                            ; 0056035a
    FADD float ptr [ESP + 0xd4]         ; 0056035c
    FXCH                                ; 00560363
    FADD float ptr [ESP + 0xd8]         ; 00560365
    FXCH ST2                            ; 0056036c
    FADD float ptr [ESP + 0xdc]         ; 0056036e
    FXCH                                ; 00560375
    FSTP float ptr [EBX]                ; 00560377 | DAT_02cf5ed4
    FXCH                                ; 00560379
    FSTP float ptr [EBX + 0x4]          ; 0056037b | DAT_02cf5ed8
    FSTP float ptr [EBX + 0x8]          ; 0056037e | DAT_02cf5edc
    FLD float ptr [EAX + 0x2cf5edc]     ; 00560381 | DAT_02cf5edc
    FABS                                ; 00560387
    FCOMP double ptr [0x005d534f]       ; 00560389 | DAT_005d534f
    FNSTSW AX                           ; 0056038f
    SAHF                                ; 00560391
    JBE 0x005603aa                      ; 00560392
        ;   XREF to: 005603aa (CONDITIONAL_JUMP)  ; LAB_005603aa
    MOV EAX,dword ptr [ESP + 0x138]     ; 00560394
    MOV ECX,dword ptr [EAX + 0x2cf5ee0] ; 0056039b
    PUSH ECX                            ; 005603a1
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 005603a2
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 005603a7
    MOV ESI,dword ptr [ESP + 0x13c]     ; 005603aa
        ;   Label: LAB_005603aa
    INC ESI                             ; 005603b1
    ADD EBX,0x10                        ; 005603b2
    MOV dword ptr [ESP + 0x13c],ESI     ; 005603b5
    CMP ESI,0xa                         ; 005603bc
    JL 0x005602dc                       ; 005603bf
        ;   XREF to: 005602dc (CONDITIONAL_JUMP)  ; LAB_005602dc
    FLD float ptr [0x02cf5f80]          ; 005603c5 | DAT_02cf5f80
    FSUB float ptr [ESP + 0x134]        ; 005603cb
    FST float ptr [0x02cf5f80]          ; 005603d2 | DAT_02cf5f80
    FLDZ                                ; 005603d8
    FCOMPP                              ; 005603da
    FNSTSW AX                           ; 005603dc
    SAHF                                ; 005603de
    JC 0x00560541                       ; 005603df
        ;   XREF to: 00560541 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [ESP + 0x130],0x0     ; 005603e5
    JZ 0x00560541                       ; 005603ed
        ;   XREF to: 00560541 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x40a00000                     ; 005603f3
    PUSH 0x3f800000                     ; 005603f8
    LEA EDI,[ESP + 0x78]                ; 005603fd
    MOV ESI,0x604818                    ; 00560401 | DAT_00604818
    CALL core_actor.cpp_FUN_0040ce40    ; 00560406
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x148],EAX     ; 0056040b
    MOV ECX,0x19                        ; 00560412
    FLD float ptr [ESP + 0x148]         ; 00560417
    ADD ESP,0x8                         ; 0056041e
    MOV EDX,0x41a00000                  ; 00560421
    MOVSD.REP ES:EDI,ESI                ; 00560426 | DAT_00604818 | DAT_0060481c
    FSTP float ptr [0x02cf5f80]         ; 00560428 | DAT_02cf5f80
    MOV ECX,0x3f800000                  ; 0056042e
    MOV dword ptr [ESP + 0x120],EDX     ; 00560433
    MOV dword ptr [ESP],ECX             ; 0056043a
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0056043d
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV EDX,EAX                         ; 00560442
    MOV EBX,0x5                         ; 00560444
    SAR EDX,0x1f                        ; 00560449
    IDIV EBX                            ; 0056044c
    CMP EDX,0x4                         ; 0056044e
    JA 0x0056048d                       ; 00560451
        ;   XREF to: 0056048d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x55ff2c]  ; 00560453 | caseD_1 | caseD_3 | caseD_4
        ;   Label: switchD
    FLD float ptr [ESP + 0x4]           ; 0056045a
        ;   Label: caseD_0
    MOV EDI,dword ptr [0x006045f0]      ; 0056045e | PTR_DAT_006045f0
    FMUL double ptr [0x005d5347]        ; 00560464 | DAT_005d5347
    PUSH EDI                            ; 0056046a | DAT_005d5278
    MOV ESI,0x41c80000                  ; 0056046b
    PUSH 0x5d52a2                       ; 00560470 | = "rail?%s.wav"
    LEA EAX,[ESP + 0x78]                ; 00560475
    MOV dword ptr [ESP + 0x128],ESI     ; 00560479
    PUSH EAX                            ; 00560480
    FSTP float ptr [ESP + 0xc]          ; 00560481
    CALL crt_unknown.c_FUN_005a28c0     ; 00560485
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0056048a
    PUSH 0x40000000                     ; 0056048d
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0x134]     ; 00560492
    PUSH 0xc0400000                     ; 00560499
    MOV dword ptr [EAX],0x0             ; 0056049e
    CALL core_actor.cpp_FUN_0040ce40    ; 005604a4
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x148],EAX     ; 005604a9
    FLD float ptr [ESP + 0x148]         ; 005604b0
    ADD ESP,0x8                         ; 005604b7
    FMUL float ptr [ESP + 0x120]        ; 005604ba
    MOV EAX,dword ptr [ESP + 0x130]     ; 005604c1
    FADD float ptr [0x02cf5694]         ; 005604c8 | DAT_02cf5694
    MOV dword ptr [EAX + 0x4],0x0       ; 005604ce
    FSTP float ptr [EAX + 0x8]          ; 005604d5
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 005604d8
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
    PUSH 0x3                            ; 005604dd
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 005604df
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 005604e4
    PUSH 0x2cf5f74                      ; 005604e7 | DAT_02cf5f74
    CALL sound_sndmain.cpp_FUN_00555d90 ; 005604ec
        ;   XREF to: 00555d90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555d90(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 005604f1
    FLD float ptr [ESP]                 ; 005604f4
    SUB ESP,0x8                         ; 005604f7
    LEA EAX,[ESP + 0x78]                ; 005604fa
    FSTP double ptr [ESP]               ; 005604fe
    PUSH EAX                            ; 00560501
    PUSH 0x5d52b8                       ; 00560502 | = "%s @ %g"
    LEA EAX,[ESP + 0x1c]                ; 00560507
    PUSH EAX                            ; 0056050b
    CALL crt_unknown.c_FUN_005a28c0     ; 0056050c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 00560511
    MOV EAX,dword ptr [ESP + 0x130]     ; 00560514
    PUSH EAX                            ; 0056051b
    LEA EAX,[ESP + 0x10]                ; 0056051c
    PUSH EAX                            ; 00560520
    PUSH 0x0                            ; 00560521
    MOV EDX,dword ptr [0x006045f8]      ; 00560523 | DAT_006045f8
    PUSH EDX                            ; 00560529
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 ; 0056052a
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0056052f
    MOV EDX,dword ptr [ESP + 0x130]     ; 00560532
    MOV dword ptr [EDX + 0xc],EAX       ; 00560539
    CALL sound_sndmain.cpp_FUN_00556050 ; 0056053c
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
    PUSH 0x1                            ; 00560541
        ;   Label: caseD_4
    CALL sound_sndmain.cpp_pollAllStreams_FUN_0055a1b0 ; 00560543
        ;   XREF to: 0055a1b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllStreams_FUN_0055a1b0(int paused_mode)
    ADD ESP,0x4                         ; 00560548
    MOV ESP,EBP                         ; 0056054b
    POP EBP                             ; 0056054d
    POP EDI                             ; 0056054e
    POP ESI                             ; 0056054f
    POP EBX                             ; 00560550
    RET                                 ; 00560551
    MOV EAX,dword ptr [ESP + 0x118]     ; 00560552
        ;   Label: LAB_00560552
    MOV dword ptr [ESP + 0x128],EAX     ; 00560559
    JMP 0x0055ffbb                      ; 00560560
        ;   XREF to: 0055ffbb (UNCONDITIONAL_JUMP)  ; LAB_0055ffbb
    PUSH 0x5d52e7                       ; 00560565 | s_wind_ctl_wav_005d52e6+1
        ;   Label: LAB_00560565
    CALL sound_sndmain.cpp_FUN_00556240 ; 0056056a
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 0056056f
    MOV [0x02cf5684],EAX                ; 00560572 | DAT_02cf5684
    JMP 0x00560016                      ; 00560577
        ;   XREF to: 00560016 (UNCONDITIONAL_JUMP)  ; LAB_00560016
    MOV EDX,dword ptr [0x02cf5684]      ; 0056057c | DAT_02cf5684
        ;   Label: LAB_0056057c
    PUSH EDX                            ; 00560582
    PUSH EBX                            ; 00560583
    CALL core_sound.cpp_FUN_00560b00    ; 00560584
        ;   XREF to: 00560b00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_00560b00(CSound * this_ptr, uint sfx_handle)
    XOR ECX,ECX                         ; 00560589
    ADD ESP,0x8                         ; 0056058b
    MOV dword ptr [0x02cf569c],ECX      ; 0056058e | DAT_02cf569c
    JMP 0x0056002b                      ; 00560594
        ;   XREF to: 0056002b (UNCONDITIONAL_JUMP)  ; LAB_0056002b
    PUSH 0x5d52f9                       ; 00560599 | = "water-2.wav"
        ;   Label: LAB_00560599
    CALL sound_sndmain.cpp_FUN_00556240 ; 0056059e
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 005605a3
    MOV [0x02cf5688],EAX                ; 005605a6 | DAT_02cf5688
    JMP 0x00560127                      ; 005605ab
        ;   XREF to: 00560127 (UNCONDITIONAL_JUMP)  ; LAB_00560127
    MOV ECX,dword ptr [0x02cf5688]      ; 005605b0 | DAT_02cf5688
        ;   Label: LAB_005605b0
    PUSH ECX                            ; 005605b6
    PUSH EBX                            ; 005605b7
    CALL core_sound.cpp_FUN_00560b00    ; 005605b8
        ;   XREF to: 00560b00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_00560b00(CSound * this_ptr, uint sfx_handle)
    XOR EBX,EBX                         ; 005605bd
    ADD ESP,0x8                         ; 005605bf
    MOV dword ptr [0x02cf56a0],EBX      ; 005605c2 | DAT_02cf56a0
    JMP 0x0056013c                      ; 005605c8
        ;   XREF to: 0056013c (UNCONDITIONAL_JUMP)  ; LAB_0056013c
    FLD float ptr [0x02cf5ecc]          ; 005605cd | DAT_02cf5ecc
        ;   Label: LAB_005605cd
    XOR EAX,EAX                         ; 005605d3
    FSTP float ptr [0x02cf5ec8]         ; 005605d5 | DAT_02cf5ec8
    MOV [0x02cf5ed0],EAX                ; 005605db | DAT_02cf5ed0
    JMP 0x0056018b                      ; 005605e0
        ;   XREF to: 0056018b (UNCONDITIONAL_JUMP)  ; LAB_0056018b
    PUSH EAX                            ; 005605e5
        ;   Label: LAB_005605e5
    PUSH 0x3                            ; 005605e6
    CALL sound_sndmain.cpp_FUN_00556db0 ; 005605e8
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556db0(int channel_index, int enable_state)
    JMP 0x005601d4                      ; 005605ed
        ;   XREF to: 005601d4 (UNCONDITIONAL_JUMP)  ; LAB_005601d4
    MOV EBX,dword ptr [0x02cf5f84]      ; 005605f2 | DAT_02cf5f84
        ;   Label: LAB_005605f2
    CMP EBX,dword ptr [EAX + 0x15aeb8]  ; 005605f8 | g_CDemonSetInstance.field1420984_0x15aeb8
    JZ 0x00560220                       ; 005605fe
        ;   XREF to: 00560220 (CONDITIONAL_JUMP)  ; LAB_00560220
    PUSH EAX                            ; 00560604 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00560605
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056060a
    MOV ESI,dword ptr [0x00603b28]      ; 0056060d | g_CDemonSetPtr
    PUSH ESI                            ; 00560613 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x108]               ; 00560614
    MOV ESI,0x2cf568c                   ; 0056061b
    CALL core_setcolid.cpp_FUN_0053ec70 ; 00560620
        ;   XREF to: 0053ec70 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_0053ec70(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00560625
    MOVSD ES:EDI,ESI                    ; 00560628 | DAT_02cf568c
    MOVSD ES:EDI,ESI                    ; 00560629 | DAT_02cf5690
    MOVSD ES:EDI,ESI                    ; 0056062a | DAT_02cf5694
    FLD float ptr [ESP + 0x108]         ; 0056062b
    MOV EAX,dword ptr [ESP + 0x104]     ; 00560632
    LEA EDI,[ESP + 0xf8]                ; 00560639
    LEA ESI,[ESP + 0xe0]                ; 00560640
    MOV dword ptr [ESP + 0xe0],EAX      ; 00560647
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0056064e
    FADD float ptr [0x005d532f]         ; 00560655 | DAT_005d532f
    MOV dword ptr [ESP + 0xe8],EAX      ; 0056065b
    LEA EAX,[ESP + 0xf8]                ; 00560662
    FSTP float ptr [ESP + 0xe4]         ; 00560669
    PUSH EAX                            ; 00560670
    LEA EAX,[ESP + 0x108]               ; 00560671
    MOVSD ES:EDI,ESI                    ; 00560678
    MOVSD ES:EDI,ESI                    ; 00560679
    MOVSD ES:EDI,ESI                    ; 0056067a
    PUSH EAX                            ; 0056067b
    MOV EDI,dword ptr [0x00603b28]      ; 0056067c | g_CDemonSetPtr
    PUSH EDI                            ; 00560682 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0 ; 00560683
        ;   XREF to: 0053cbf0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00560688
    TEST EAX,EAX                        ; 0056068b
    JZ 0x005606bd                       ; 0056068d
        ;   XREF to: 005606bd (CONDITIONAL_JUMP)  ; LAB_005606bd
    MOV dword ptr [0x006045f0],0x5d527c ; 0056068f | PTR_DAT_006045f0 | DAT_005d527c
    MOV ECX,dword ptr [0x00603b28]      ; 00560699 | g_CDemonSetPtr
        ;   Label: LAB_00560699
    PUSH ECX                            ; 0056069f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005606a0
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    MOV EAX,[0x00603b28]                ; 005606a5 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 005606aa | g_CDemonSetInstance.field1420984_0x15aeb8
    ADD ESP,0x4                         ; 005606b0
    MOV [0x02cf5f84],EAX                ; 005606b3 | DAT_02cf5f84
    JMP 0x00560220                      ; 005606b8
        ;   XREF to: 00560220 (UNCONDITIONAL_JUMP)  ; LAB_00560220
    MOV dword ptr [0x006045f0],0x5d5280 ; 005606bd | PTR_DAT_006045f0 | DAT_005d5280
        ;   Label: LAB_005606bd
    JMP 0x00560699                      ; 005606c7
        ;   XREF to: 00560699 (UNCONDITIONAL_JUMP)  ; LAB_00560699
    MOV EDX,dword ptr [0x02cf5f8c]      ; 005606c9 | DAT_02cf5f8c
        ;   Label: LAB_005606c9
    MOV EAX,0x3f333333                  ; 005606cf
    PUSH EDX                            ; 005606d4
    MOV dword ptr [ESP + 0x8],EAX       ; 005606d5
    CALL sound_sndmain.cpp_FUN_00556700 ; 005606d9
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005606de
    TEST EAX,EAX                        ; 005606e1
    JNZ 0x0056026d                      ; 005606e3
        ;   XREF to: 0056026d (CONDITIONAL_JUMP)  ; LAB_0056026d
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 005606e9
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
    PUSH 0x3ecccccd                     ; 005606ee
    CALL sound_sndmain.cpp_FUN_00555df0 ; 005606f3
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555df0(float volume)
    ADD ESP,0x4                         ; 005606f8
    PUSH 0x5d5288                       ; 005606fb | = "trainext.wav"
    CALL sound_sndmain.cpp_FUN_00556240 ; 00560700
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 00560705
    MOV [0x02cf5f8c],EAX                ; 00560708 | DAT_02cf5f8c
    CALL sound_sndmain.cpp_FUN_00556050 ; 0056070d
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
    JMP 0x0056026d                      ; 00560712
        ;   XREF to: 0056026d (UNCONDITIONAL_JUMP)  ; LAB_0056026d
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 00560717
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
        ;   Label: LAB_00560717
    FLD float ptr [ESP + 0x4]           ; 0056071c
    FMUL double ptr [0x005d5337]        ; 00560720 | DAT_005d5337
    SUB ESP,0x4                         ; 00560726
    FSTP float ptr [ESP]                ; 00560729
    CALL sound_sndmain.cpp_FUN_00555df0 ; 0056072c
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555df0(float volume)
    ADD ESP,0x4                         ; 00560731
    PUSH 0x5d5295                       ; 00560734 | = "railnoiz.wav"
    CALL sound_sndmain.cpp_FUN_00556240 ; 00560739
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 0056073e
    MOV [0x02cf5f88],EAX                ; 00560741 | DAT_02cf5f88
    CALL sound_sndmain.cpp_FUN_00556050 ; 00560746
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
    JMP 0x005602a1                      ; 0056074b
        ;   XREF to: 005602a1 (UNCONDITIONAL_JUMP)  ; LAB_005602a1
    FLD float ptr [ESP + 0x4]           ; 00560750
        ;   Label: LAB_00560750
    FMUL double ptr [0x005d5337]        ; 00560754 | DAT_005d5337
    SUB ESP,0x4                         ; 0056075a
    MOV EDX,dword ptr [0x02cf5f88]      ; 0056075d | DAT_02cf5f88
    FSTP float ptr [ESP]                ; 00560763
    PUSH EDX                            ; 00560766
    CALL sound_sndmain.cpp_FUN_00556ab0 ; 00560767
        ;   XREF to: 00556ab0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556ab0()
    ADD ESP,0x8                         ; 0056076c
    JMP 0x005602a1                      ; 0056076f
        ;   XREF to: 005602a1 (UNCONDITIONAL_JUMP)  ; LAB_005602a1
    MOV dword ptr [ESP + 0x130],EBX     ; 00560774 | DAT_02cf5ed4
        ;   Label: LAB_00560774
    JMP 0x005603aa                      ; 0056077b
        ;   XREF to: 005603aa (UNCONDITIONAL_JUMP)  ; LAB_005603aa
    FLD float ptr [ESP + 0x4]           ; 00560780
        ;   Label: caseD_2
    FMUL double ptr [0x005d533f]        ; 00560784 | DAT_005d533f
    MOV EBX,0x41a00000                  ; 0056078a
    MOV ESI,0x5d52ae                    ; 0056078f | DAT_005d52ae
    LEA EDI,[ESP + 0x70]                ; 00560794
    MOV dword ptr [ESP + 0x120],EBX     ; 00560798
    FSTP float ptr [ESP]                ; 0056079f
    PUSH EDI                            ; 005607a2
    MOV AL,byte ptr [ESI]               ; 005607a3 | DAT_005d52ae | DAT_005d52b0
        ;   Label: LAB_005607a3
    MOV byte ptr [EDI],AL               ; 005607a5
    CMP AL,0x0                          ; 005607a7
    JZ 0x005607bb                       ; 005607a9
        ;   XREF to: 005607bb (CONDITIONAL_JUMP)  ; LAB_005607bb
    MOV AL,byte ptr [ESI + 0x1]         ; 005607ab | DAT_005d52af | = "p?.wav"
    ADD ESI,0x2                         ; 005607ae
    MOV byte ptr [EDI + 0x1],AL         ; 005607b1
    ADD EDI,0x2                         ; 005607b4
    CMP AL,0x0                          ; 005607b7
    JNZ 0x005607a3                      ; 005607b9
        ;   XREF to: 005607a3 (CONDITIONAL_JUMP)  ; LAB_005607a3
    POP EDI                             ; 005607bb
        ;   Label: LAB_005607bb
    JMP 0x0056048d                      ; 005607bc
        ;   XREF to: 0056048d (UNCONDITIONAL_JUMP)  ; default

