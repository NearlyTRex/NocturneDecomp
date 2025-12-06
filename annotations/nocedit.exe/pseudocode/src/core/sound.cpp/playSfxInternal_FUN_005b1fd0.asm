; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, float z, CVector3f * position_tracker, uint flags)
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
; undefined8       Stack[-0x198]:8  local_198
; undefined8       Stack[-0x190]:8  local_190
; undefined8       Stack[-0x188]:8  local_188
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined1       Stack[-0x178]:1  local_178
; undefined1       Stack[-0x177]:1  local_177
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined1       Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[6]:
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0 at 005b3acc
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0 at 005b3b12
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40 at 005b3a5a
;   core_sound.cpp_CSound_playSound_FUN_005b3a20 at 005b3a34
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30 at 005b3b5f
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 at 005b3a88
;
; Referenced Globals:
;   TerminatedCString s_d_d_n_0065255a
;   TerminatedCString s_core_sound_cpp_00652564
;   TerminatedCString s_Invalid_sfx_string_s_00652576
;   TerminatedCString s_anon_0065258d
;   TerminatedCString s_anon_0065258f
;   TerminatedCString s_wav_00652591
;   undefined4 DAT_00652592
;   undefined4 DAT_00652593
;   undefined4 DAT_00652594
;   TerminatedCString s_Can_t_find_wav_s_00652596
;   TerminatedCString s_core_sound_cpp_006525aa
;   TerminatedCString s_at_006525bc
;   TerminatedCString s_q_xfer_fletch_missingwav_006525bf
;   TerminatedCString s_anon_006525df
;   TerminatedCString s_Missing_s_00652621
;   ... and 28 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_FUN_0056fac0
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0
;   crt_env.c_getenv_FUN_006013f0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_stdlib.c_atexit_FUN_005ff060
;   crt_time.c_asctime_FUN_00601768
;   crt_time.c_localtime_FUN_00600288
;   crt_time.c_time_with_rounding_FUN_006001f0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_findString_FUN_004a3030
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1fd0
        ;   Label: core_sound.cpp_playSfxInternal_FUN_005b1fd0
    PUSH ESI                            ; 005b1fd1
    PUSH EDI                            ; 005b1fd2
    PUSH EBP                            ; 005b1fd3
    MOV EBP,ESP                         ; 005b1fd4
    SUB ESP,0x16c                       ; 005b1fd6
    AND ESP,0xfffffff8                  ; 005b1fdc
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 005b1fdf | int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005b1fe4
    JNZ 0x005b2224                      ; 005b1fe6 | LAB_005b2224
        ;   XREF to: 005b2224 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x18]      ; 005b1fec
    TEST EDX,EDX                        ; 005b1fef
    JZ 0x005b221d                       ; 005b1ff1 | LAB_005b221d
        ;   XREF to: 005b221d (CONDITIONAL_JUMP)
    CMP byte ptr [EDX],0x0              ; 005b1ff7
    JZ 0x005b221d                       ; 005b1ffa | LAB_005b221d
        ;   XREF to: 005b221d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 005b2000
    LEA ESI,[ESP + 0x6c]                ; 005b2003
    MOV DH,byte ptr [EAX]               ; 005b2007
    MOV dword ptr [ESP + 0x148],EAX     ; 005b2009
    TEST DH,DH                          ; 005b2010
    JZ 0x005b2031                       ; 005b2012 | LAB_005b2031
        ;   XREF to: 005b2031 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b2014
        ;   Label: LAB_005b2014
    MOV AL,byte ptr [EAX]               ; 005b201b
    INC AL                              ; 005b201d
    AND EAX,0xff                        ; 005b201f
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005b2024 | char[256] g_CharacterClassificationTable
    JZ 0x005b222d                       ; 005b202b | LAB_005b222d
        ;   XREF to: 005b222d (CONDITIONAL_JUMP)
    MOV DL,0x2e                         ; 005b2031
        ;   Label: LAB_005b2031
    MOV byte ptr [ESI],0x0              ; 005b2033
    LEA ESI,[ESP + 0x6c]                ; 005b2036
    MOV AL,byte ptr [ESI]               ; 005b203a
        ;   Label: LAB_005b203a
    CMP AL,DL                           ; 005b203c
    JZ 0x005b2052                       ; 005b203e | LAB_005b2052
        ;   XREF to: 005b2052 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 005b2040
    JZ 0x005b2050                       ; 005b2042 | LAB_005b2050
        ;   XREF to: 005b2050 (CONDITIONAL_JUMP)
    INC ESI                             ; 005b2044
    MOV AL,byte ptr [ESI]               ; 005b2045
    CMP AL,DL                           ; 005b2047
    JZ 0x005b2052                       ; 005b2049 | LAB_005b2052
        ;   XREF to: 005b2052 (CONDITIONAL_JUMP)
    INC ESI                             ; 005b204b
    CMP AL,0x0                          ; 005b204c
    JNZ 0x005b203a                      ; 005b204e | LAB_005b203a
        ;   XREF to: 005b203a (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005b2050
        ;   Label: LAB_005b2050
    TEST ESI,ESI                        ; 005b2052
        ;   Label: LAB_005b2052
    JNZ 0x005b2081                      ; 005b2054 | LAB_005b2081
        ;   XREF to: 005b2081 (CONDITIONAL_JUMP)
    MOV ESI,0x652591                    ; 005b2056 | = ".wav" | s_wav_00652591 = .wav
    LEA EDI,[ESP + 0x6c]                ; 005b205b
    PUSH EDI                            ; 005b205f
    SUB ECX,ECX                         ; 005b2060
    DEC ECX                             ; 005b2062
    MOV AL,0x0                          ; 005b2063
    SCASB.REPNE ES:EDI                  ; 005b2065
    DEC EDI                             ; 005b2067
    MOV AL,byte ptr [ESI]               ; 005b2068 | = ".wav" | s_wav_00652591 = .wav
        ;   Label: LAB_005b2068
    MOV byte ptr [EDI],AL               ; 005b206a
    CMP AL,0x0                          ; 005b206c
    JZ 0x005b2080                       ; 005b206e | LAB_005b2080
        ;   XREF to: 005b2080 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005b2070 | DAT_00652592
    ADD ESI,0x2                         ; 005b2073
    MOV byte ptr [EDI + 0x1],AL         ; 005b2076
    ADD EDI,0x2                         ; 005b2079
    CMP AL,0x0                          ; 005b207c
    JNZ 0x005b2068                      ; 005b207e | LAB_005b2068
        ;   XREF to: 005b2068 (CONDITIONAL_JUMP)
    POP EDI                             ; 005b2080
        ;   Label: LAB_005b2080
    MOV ECX,0x19                        ; 005b2081
        ;   Label: LAB_005b2081
    LEA EDI,[ESP + 0xd0]                ; 005b2086
    MOV ESI,0x6820b0                    ; 005b208d | char[104] g_SoundResultBufferTemplate
    MOVSD.REP ES:EDI,ESI                ; 005b2092 | char[104] g_SoundResultBufferTemplate
    MOV DL,0x21                         ; 005b2094
    LEA ESI,[ESP + 0x6c]                ; 005b2096
    MOV AL,byte ptr [ESI]               ; 005b209a
        ;   Label: LAB_005b209a
    CMP AL,DL                           ; 005b209c
    JZ 0x005b20b2                       ; 005b209e | LAB_005b20b2
        ;   XREF to: 005b20b2 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 005b20a0
    JZ 0x005b20b0                       ; 005b20a2 | LAB_005b20b0
        ;   XREF to: 005b20b0 (CONDITIONAL_JUMP)
    INC ESI                             ; 005b20a4
    MOV AL,byte ptr [ESI]               ; 005b20a5
    CMP AL,DL                           ; 005b20a7
    JZ 0x005b20b2                       ; 005b20a9 | LAB_005b20b2
        ;   XREF to: 005b20b2 (CONDITIONAL_JUMP)
    INC ESI                             ; 005b20ab
    CMP AL,0x0                          ; 005b20ac
    JNZ 0x005b209a                      ; 005b20ae | LAB_005b209a
        ;   XREF to: 005b209a (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005b20b0
        ;   Label: LAB_005b20b0
    TEST ESI,ESI                        ; 005b20b2
        ;   Label: LAB_005b20b2
    JZ 0x005b23ed                       ; 005b20b4 | LAB_005b23ed
        ;   XREF to: 005b23ed (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005b20ba
    MOV dword ptr [ESP + 0x134],EAX     ; 005b20bd
    MOV EAX,dword ptr [EBP + 0x20]      ; 005b20c4
    MOV dword ptr [ESP + 0x138],EAX     ; 005b20c7
    MOV EAX,dword ptr [EBP + 0x24]      ; 005b20ce
    MOV EBX,dword ptr [EBP + 0x28]      ; 005b20d1
    MOV dword ptr [ESP + 0x13c],EAX     ; 005b20d4
    TEST EBX,EBX                        ; 005b20db
    JNZ 0x005b232e                      ; 005b20dd | LAB_005b232e
        ;   XREF to: 005b232e (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x134]               ; 005b20e3
        ;   Label: LAB_005b20e3
    PUSH EAX                            ; 005b20ea
    MOV ESI,dword ptr [0x006810c8]      ; 005b20eb | CDemonSet * g_CDemonSetPtr
    PUSH ESI                            ; 005b20f1 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056fac0 ; 005b20f2 | float core_set.cpp_CDemonSet_FUN_0056fac0(CDemonSet * this_ptr)
        ;   XREF to: 0056fac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b20f7
    MOV dword ptr [ESP + 0x168],EAX     ; 005b20fa
    MOV dword ptr [ESP + 0x164],EAX     ; 005b2101
    ADD EAX,0x5                         ; 005b2108
    MOV dword ptr [ESP + 0x140],EAX     ; 005b210b
    MOV BH,0x21                         ; 005b2112
    MOV EAX,dword ptr [ESP + 0x164]     ; 005b2114
        ;   Label: LAB_005b2114
    MOV EDI,dword ptr [ESP + 0x168]     ; 005b211b
    XOR ESI,ESI                         ; 005b2122
    MOV dword ptr [ESP + 0x144],EAX     ; 005b2124
    TEST ESI,ESI                        ; 005b212b
        ;   Label: LAB_005b212b
    JNZ 0x005b238f                      ; 005b212d | LAB_005b238f
        ;   XREF to: 005b238f (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x144]     ; 005b2133
    TEST ECX,ECX                        ; 005b213a
        ;   Label: LAB_005b213a
    JL 0x005b2147                       ; 005b213c | LAB_005b2147
        ;   XREF to: 005b2147 (CONDITIONAL_JUMP)
    CMP ECX,0x5                         ; 005b213e
    JLE 0x005b2396                      ; 005b2141 | LAB_005b2396
        ;   XREF to: 005b2396 (CONDITIONAL_JUMP)
    INC ESI                             ; 005b2147
        ;   Label: LAB_005b2147
    CMP ESI,0x2                         ; 005b2148
    JL 0x005b212b                       ; 005b214b | LAB_005b212b
        ;   XREF to: 005b212b (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0xd0],0x0       ; 005b214d
        ;   Label: LAB_005b214d
    JZ 0x005b235d                       ; 005b2155 | LAB_005b235d
        ;   XREF to: 005b235d (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0xd0],0x0       ; 005b215b
        ;   Label: LAB_005b215b
    JZ 0x005b240e                       ; 005b2163 | LAB_005b240e
        ;   XREF to: 005b240e (CONDITIONAL_JUMP)
    MOV EDI,0x3f800000                  ; 005b2169
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b216e
    MOV dword ptr [ESP],EDI             ; 005b2175
    MOV dword ptr [ESP + 0x4],EDI       ; 005b2178
    CMP byte ptr [EAX],0x0              ; 005b217c
    JZ 0x005b21ba                       ; 005b217f | LAB_005b21ba
        ;   XREF to: 005b21ba (CONDITIONAL_JUMP)
    MOV ESI,0xffffffff                  ; 005b2181
    MOV EBX,0x2                         ; 005b2186
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b218b
        ;   Label: LAB_005b218b
    MOV AL,byte ptr [EAX]               ; 005b2192
    INC AL                              ; 005b2194
    AND EAX,0xff                        ; 005b2196
    TEST byte ptr [EAX + 0x6849c4],BL   ; 005b219b | char[256] g_CharacterClassificationTable
    JZ 0x005b2565                       ; 005b21a1 | LAB_005b2565
        ;   XREF to: 005b2565 (CONDITIONAL_JUMP)
    INC dword ptr [ESP + 0x148]         ; 005b21a7
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b21ae
        ;   Label: LAB_005b21ae
    CMP byte ptr [EAX],0x0              ; 005b21b5
    JNZ 0x005b218b                      ; 005b21b8 | LAB_005b218b
        ;   XREF to: 005b218b (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + 0x28]      ; 005b21ba
        ;   Label: LAB_005b21ba
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b21bd | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    TEST EBX,EBX                        ; 005b21c2
    JZ 0x005b26c2                       ; 005b21c4 | LAB_005b26c2
        ;   XREF to: 005b26c2 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005b21ca
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 005b21cb | void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b21d0
    MOV EDI,dword ptr [EBP + 0x2c]      ; 005b21d3
        ;   Label: LAB_005b21d3
    PUSH EDI                            ; 005b21d6
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70 ; 005b21d7 | void sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
        ;   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b21dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b21df
    PUSH EAX                            ; 005b21e2
    PUSH 0x0                            ; 005b21e3
    CALL sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0 ; 005b21e5 | void sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0(int index, void * userdata)
        ;   XREF to: 005a8aa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b21ea
    PUSH dword ptr [ESP + 0x4]          ; 005b21ed
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005b21f1 | void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b21f6
    PUSH dword ptr [ESP]                ; 005b21f9
    CALL sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80 ; 005b21fc | void sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80(float base_frequency)
        ;   XREF to: 005a8a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2201
    LEA EAX,[ESP + 0xd0]                ; 005b2204
    PUSH EAX                            ; 005b220b
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b220c | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2211
    MOV ESI,EAX                         ; 005b2214
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b2216 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EAX,ESI                         ; 005b221b
    MOV ESP,EBP                         ; 005b221d
        ;   Label: LAB_005b221d
    POP EBP                             ; 005b221f
    POP EDI                             ; 005b2220
    POP ESI                             ; 005b2221
    POP EBX                             ; 005b2222
    RET                                 ; 005b2223
    XOR EAX,EAX                         ; 005b2224
        ;   Label: LAB_005b2224
    MOV ESP,EBP                         ; 005b2226
    POP EBP                             ; 005b2228
    POP EDI                             ; 005b2229
    POP ESI                             ; 005b222a
    POP EBX                             ; 005b222b
    RET                                 ; 005b222c
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b222d
        ;   Label: LAB_005b222d
    MOV BH,byte ptr [EAX]               ; 005b2234
    CMP BH,0x40                         ; 005b2236
    JZ 0x005b2031                       ; 005b2239 | LAB_005b2031
        ;   XREF to: 005b2031 (CONDITIONAL_JUMP)
    CMP BH,0x2a                         ; 005b223f
    JZ 0x005b2031                       ; 005b2242 | LAB_005b2031
        ;   XREF to: 005b2031 (CONDITIONAL_JUMP)
    CMP BH,0x5b                         ; 005b2248
    JNZ 0x005b231e                      ; 005b224b | LAB_005b231e
        ;   XREF to: 005b231e (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x14c]               ; 005b2251
    PUSH EAX                            ; 005b2258
    LEA EAX,[ESP + 0x158]               ; 005b2259
    PUSH EAX                            ; 005b2260
    LEA EAX,[ESP + 0x158]               ; 005b2261
    PUSH EAX                            ; 005b2268
    PUSH 0x65255a                       ; 005b2269 | = "[%d,%d]%n" | s_d_d_n_0065255a = [%d,%d]%n
    MOV EDI,dword ptr [ESP + 0x158]     ; 005b226e
    MOV EBX,0xffffffff                  ; 005b2275
    PUSH EDI                            ; 005b227a
    MOV dword ptr [ESP + 0x160],EBX     ; 005b227b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005b2282 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005b2287
    CMP dword ptr [ESP + 0x14c],0x5     ; 005b228a
    JGE 0x005b2308                      ; 005b2292 | LAB_005b2308
        ;   XREF to: 005b2308 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 005b2294
        ;   Label: LAB_005b2294
    PUSH EDI                            ; 005b2297
    MOV ECX,0x652564                    ; 005b2298 | = "..\\core\\sound.cpp" | s_core_sound_cpp_00652564 = ..\core\sound.cpp
    MOV EBX,0x137                       ; 005b229d
    PUSH 0x652576                       ; 005b22a2 | = "Invalid sfx string: %s" | s_Invalid_sfx_string_s_00652576 = Invalid sfx string: %s
    MOV dword ptr [0x02f0ca48],ECX      ; 005b22a7 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005b22ad | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005b22b3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b22b8
    PUSH 0x65258d                       ; 005b22bb | = "?" | s_anon_0065258d = ?
        ;   Label: LAB_005b22bb
    PUSH ESI                            ; 005b22c0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b22c1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b22c6
    ADD ESI,EAX                         ; 005b22c9
    CMP dword ptr [ESP + 0x154],0x9     ; 005b22cb
    JLE 0x005b22e5                      ; 005b22d3 | LAB_005b22e5
        ;   XREF to: 005b22e5 (CONDITIONAL_JUMP)
    PUSH 0x65258f                       ; 005b22d5 | = "?" | s_anon_0065258f = ?
    PUSH ESI                            ; 005b22da
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b22db | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b22e0
    ADD ESI,EAX                         ; 005b22e3
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005b22e5
        ;   Label: LAB_005b22e5
    ADD dword ptr [ESP + 0x148],EAX     ; 005b22ec
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b22f3
        ;   Label: LAB_005b22f3
    CMP byte ptr [EAX],0x0              ; 005b22fa
    JNZ 0x005b2014                      ; 005b22fd | LAB_005b2014
        ;   XREF to: 005b2014 (CONDITIONAL_JUMP)
    JMP 0x005b2031                      ; 005b2303 | LAB_005b2031
        ;   XREF to: 005b2031 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x150]     ; 005b2308
        ;   Label: LAB_005b2308
    CMP EAX,dword ptr [ESP + 0x154]     ; 005b230f
    JG 0x005b2294                       ; 005b2316 | LAB_005b2294
        ;   XREF to: 005b2294 (CONDITIONAL_JUMP)
    JMP 0x005b22bb                      ; 005b231c | LAB_005b22bb
        ;   XREF to: 005b22bb (UNCONDITIONAL_JUMP)
    INC ESI                             ; 005b231e
        ;   Label: LAB_005b231e
    LEA ECX,[EAX + 0x1]                 ; 005b231f
    MOV byte ptr [ESI + -0x1],BH        ; 005b2322
    MOV dword ptr [ESP + 0x148],ECX     ; 005b2325
    JMP 0x005b22f3                      ; 005b232c | LAB_005b22f3
        ;   XREF to: 005b22f3 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x1c]          ; 005b232e
        ;   Label: LAB_005b232e
    FADD float ptr [EBX]                ; 005b2331
    FLD float ptr [EBP + 0x20]          ; 005b2333
    FXCH                                ; 005b2336
    FSTP float ptr [ESP + 0x134]        ; 005b2338
    FADD float ptr [EBX + 0x4]          ; 005b233f
    FLD float ptr [EBP + 0x24]          ; 005b2342
    FXCH                                ; 005b2345
    FSTP float ptr [ESP + 0x138]        ; 005b2347
    FADD float ptr [EBX + 0x8]          ; 005b234e
    FSTP float ptr [ESP + 0x13c]        ; 005b2351
    JMP 0x005b20e3                      ; 005b2358 | LAB_005b20e3
        ;   XREF to: 005b20e3 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x164]     ; 005b235d
        ;   Label: LAB_005b235d
    MOV EDX,dword ptr [ESP + 0x168]     ; 005b2364
    MOV ESI,dword ptr [ESP + 0x140]     ; 005b236b
    INC ECX                             ; 005b2372
    DEC EDX                             ; 005b2373
    MOV dword ptr [ESP + 0x164],ECX     ; 005b2374
    MOV dword ptr [ESP + 0x168],EDX     ; 005b237b
    CMP ECX,ESI                         ; 005b2382
    JL 0x005b2114                       ; 005b2384 | LAB_005b2114
        ;   XREF to: 005b2114 (CONDITIONAL_JUMP)
    JMP 0x005b215b                      ; 005b238a | LAB_005b215b
        ;   XREF to: 005b215b (UNCONDITIONAL_JUMP)
    MOV ECX,EDI                         ; 005b238f
        ;   Label: LAB_005b238f
    JMP 0x005b213a                      ; 005b2391 | LAB_005b213a
        ;   XREF to: 005b213a (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x6c]                ; 005b2396
        ;   Label: LAB_005b2396
    MOV BL,byte ptr [ESP + 0x6c]        ; 005b239a
    LEA EDX,[ESP + 0x8]                 ; 005b239e
    TEST BL,BL                          ; 005b23a2
    JZ 0x005b23bc                       ; 005b23a4 | LAB_005b23bc
        ;   XREF to: 005b23bc (CONDITIONAL_JUMP)
    MOV BL,byte ptr [EAX]               ; 005b23a6
        ;   Label: LAB_005b23a6
    CMP BH,BL                           ; 005b23a8
    JNZ 0x005b23b1                      ; 005b23aa | LAB_005b23b1
        ;   XREF to: 005b23b1 (CONDITIONAL_JUMP)
    MOV BL,CL                           ; 005b23ac
    ADD BL,0x30                         ; 005b23ae
    MOV byte ptr [EDX],BL               ; 005b23b1
        ;   Label: LAB_005b23b1
    INC EDX                             ; 005b23b3
    MOV BL,byte ptr [EAX + 0x1]         ; 005b23b4
    INC EAX                             ; 005b23b7
    TEST BL,BL                          ; 005b23b8
    JNZ 0x005b23a6                      ; 005b23ba | LAB_005b23a6
        ;   XREF to: 005b23a6 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x8]                 ; 005b23bc
        ;   Label: LAB_005b23bc
    PUSH EAX                            ; 005b23c0
    LEA EAX,[ESP + 0xd4]                ; 005b23c1
    PUSH EAX                            ; 005b23c8
    MOV EAX,[0x00681ef8]                ; 005b23c9 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EAX                            ; 005b23ce | CSound g_CSoundInstance
    MOV byte ptr [EDX],0x0              ; 005b23cf
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0 ; 005b23d2 | void core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0(CSound * this_ptr, char * out_result, char * wildcard_pattern)
        ;   XREF to: 005b1ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b23d7
    CMP byte ptr [ESP + 0xd0],0x0       ; 005b23da
    JNZ 0x005b214d                      ; 005b23e2 | LAB_005b214d
        ;   XREF to: 005b214d (CONDITIONAL_JUMP)
    JMP 0x005b2147                      ; 005b23e8 | LAB_005b2147
        ;   XREF to: 005b2147 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x6c]                ; 005b23ed
        ;   Label: LAB_005b23ed
    PUSH EAX                            ; 005b23f1
    LEA EAX,[ESP + 0xd4]                ; 005b23f2
    PUSH EAX                            ; 005b23f9
    MOV ECX,dword ptr [0x00681ef8]      ; 005b23fa | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH ECX                            ; 005b2400 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0 ; 005b2401 | void core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0(CSound * this_ptr, char * out_result, char * wildcard_pattern)
        ;   XREF to: 005b1ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b2406
    JMP 0x005b215b                      ; 005b2409 | LAB_005b215b
        ;   XREF to: 005b215b (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x6c]                ; 005b240e
        ;   Label: LAB_005b240e
    PUSH EAX                            ; 005b2412
    PUSH 0x652596                       ; 005b2413 | = "Can't find wav: %s\n" | s_Can_t_find_wav_s_00652596 = Can't find wav: %s

    MOV EDX,dword ptr [0x0066e8e0]      ; 005b2418 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EDX                            ; 005b241e | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005b241f | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    MOV DH,byte ptr [0x03f6af60]        ; 005b2424 | uchar g_MissingSoundsInitFlag
    ADD ESP,0xc                         ; 005b242a
    TEST DH,0x1                         ; 005b242d
    JZ 0x005b2451                       ; 005b2430 | LAB_005b2451
        ;   XREF to: 005b2451 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x6c]                ; 005b2432
        ;   Label: LAB_005b2432
    PUSH EAX                            ; 005b2436
    PUSH 0x3f6af50                      ; 005b2437 | CStrList g_MissingSoundsList
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 005b243c | int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b2441
    TEST EAX,EAX                        ; 005b2444
    JL 0x005b2478                       ; 005b2446 | LAB_005b2478
        ;   XREF to: 005b2478 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b2448
        ;   Label: LAB_005b2448
    MOV ESP,EBP                         ; 005b244a
    POP EBP                             ; 005b244c
    POP EDI                             ; 005b244d
    POP ESI                             ; 005b244e
    POP EBX                             ; 005b244f
    RET                                 ; 005b2450
    MOV BL,DH                           ; 005b2451
        ;   Label: LAB_005b2451
    OR BL,0x1                           ; 005b2453
    PUSH 0x3f6af50                      ; 005b2456 | CStrList g_MissingSoundsList
    MOV byte ptr [0x03f6af60],BL        ; 005b245b | uchar g_MissingSoundsInitFlag
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005b2461 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2466
    PUSH 0x681ee0                       ; 005b2469 | WatcomStaticDestructorNode g_MissingSoundsListDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005b246e | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2473
    JMP 0x005b2432                      ; 005b2476 | LAB_005b2432
        ;   XREF to: 005b2432 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x6c]                ; 005b2478
        ;   Label: LAB_005b2478
    PUSH EAX                            ; 005b247c
    PUSH 0x3f6af50                      ; 005b247d | CStrList g_MissingSoundsList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005b2482 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b2487
    PUSH 0x181                          ; 005b248a
    PUSH 0x6525aa                       ; 005b248f | = "..\\core\\sound.cpp" | s_core_sound_cpp_006525aa = ..\core\sound.cpp
    PUSH 0x6525bc                       ; 005b2494 | = "at" | s_at_006525bc = at
    PUSH 0x0                            ; 005b2499
    PUSH 0x6525bf                       ; 005b249b | = "\\\\q\\xfer\\fletch\\missingwavs.txt" | s_q_xfer_fletch_missingwav_006525bf = \\q\xfer\fletch\missingwavs.txt
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005b24a0 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005b24a5
    ADD ESP,0x14                        ; 005b24a7
    MOV EDI,EAX                         ; 005b24aa
    TEST EAX,EAX                        ; 005b24ac
    JZ 0x005b2448                       ; 005b24ae | LAB_005b2448
        ;   XREF to: 005b2448 (CONDITIONAL_JUMP)
    PUSH 0x6525df                       ; 005b24b0 | = "-------------------------------------..." | s_anon_006525df = ----------------------------------------------------------------

    PUSH EAX                            ; 005b24b5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005b24b6 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b24bb
    LEA EAX,[ESP + 0x158]               ; 005b24be
    PUSH EAX                            ; 005b24c5
    CALL crt_time.c_time_with_rounding_FUN_006001f0 ; 005b24c6 | time_t crt_time.c_time_with_rounding_FUN_006001f0(time_t * optional_output)
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b24cb
    LEA EAX,[ESP + 0x6c]                ; 005b24ce
    PUSH EAX                            ; 005b24d2
    PUSH 0x652621                       ; 005b24d3 | = "Missing: %s\n" | s_Missing_s_00652621 = Missing: %s

    PUSH ESI                            ; 005b24d8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005b24d9 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b24de
    LEA EAX,[ESP + 0x158]               ; 005b24e1
    PUSH EAX                            ; 005b24e8
    CALL crt_time.c_localtime_FUN_00600288 ; 005b24e9 | tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b24ee
    PUSH EAX                            ; 005b24f1
    CALL crt_time.c_asctime_FUN_00601768 ; 005b24f2 | char * crt_time.c_asctime_FUN_00601768(tm * timeptr)
        ;   XREF to: 00601768 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b24f7
    PUSH EAX                            ; 005b24fa
    PUSH 0x65262e                       ; 005b24fb | = "Time: %s" | s_Time_s_0065262e = Time: %s
    PUSH ESI                            ; 005b2500
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005b2501 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b2506
    PUSH 0x652637                       ; 005b2509 | = "USERNAME" | s_USERNAME_00652637 = USERNAME
    CALL crt_env.c_getenv_FUN_006013f0  ; 005b250e | char * crt_env.c_getenv_FUN_006013f0(char * name)
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2513
    TEST EAX,EAX                        ; 005b2516
    JZ 0x005b2529                       ; 005b2518 | LAB_005b2529
        ;   XREF to: 005b2529 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005b251a
    PUSH 0x652640                       ; 005b251b | = "USERNAME: %s\n" | s_USERNAME_s_00652640 = USERNAME: %s

    PUSH ESI                            ; 005b2520
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005b2521 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b2526
    PUSH 0x65264e                       ; 005b2529 | = "COMPUTERNAME" | s_COMPUTERNAME_0065264e = COMPUTERNAME
        ;   Label: LAB_005b2529
    CALL crt_env.c_getenv_FUN_006013f0  ; 005b252e | char * crt_env.c_getenv_FUN_006013f0(char * name)
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2533
    TEST EAX,EAX                        ; 005b2536
    JZ 0x005b2549                       ; 005b2538 | LAB_005b2549
        ;   XREF to: 005b2549 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005b253a
    PUSH 0x65265b                       ; 005b253b | = "COMPUTERNAME: %s\n" | s_COMPUTERNAME_s_0065265b = COMPUTERNAME: %s

    PUSH EDI                            ; 005b2540
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005b2541 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b2546
    PUSH 0x190                          ; 005b2549
        ;   Label: LAB_005b2549
    PUSH 0x65266d                       ; 005b254e | = "..\\core\\sound.cpp" | s_core_sound_cpp_0065266d = ..\core\sound.cpp
    PUSH EDI                            ; 005b2553
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005b2554 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b2559
    XOR EAX,EAX                         ; 005b255c
    MOV ESP,EBP                         ; 005b255e
    POP EBP                             ; 005b2560
    POP EDI                             ; 005b2561
    POP ESI                             ; 005b2562
    POP EBX                             ; 005b2563
    RET                                 ; 005b2564
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b2565
        ;   Label: LAB_005b2565
    MOV CH,byte ptr [EAX]               ; 005b256c
    CMP CH,0x40                         ; 005b256e
    JNZ 0x005b2603                      ; 005b2571 | LAB_005b2603
        ;   XREF to: 005b2603 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x15c]               ; 005b2577
    PUSH EAX                            ; 005b257e
    LEA EAX,[ESP + 0x8]                 ; 005b257f
    PUSH EAX                            ; 005b2583
    PUSH 0x65267f                       ; 005b2584 | = "@%f%n" | s_f_n_0065267f = @%f%n
    MOV EDI,dword ptr [ESP + 0x154]     ; 005b2589
    PUSH EDI                            ; 005b2590
    MOV dword ptr [ESP + 0x16c],ESI     ; 005b2591
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005b2598 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005b259d
    CMP EBX,dword ptr [ESP + 0x15c]     ; 005b25a0
    JLE 0x005b25e3                      ; 005b25a7 | LAB_005b25e3
        ;   XREF to: 005b25e3 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 005b25a9
        ;   Label: LAB_005b25a9
    PUSH EDI                            ; 005b25ac
    MOV EDX,0x652685                    ; 005b25ad | = "..\\core\\sound.cpp" | s_core_sound_cpp_00652685 = ..\core\sound.cpp
    MOV ECX,0x1a4                       ; 005b25b2
    PUSH 0x652697                       ; 005b25b7 | = "Invalid sfx string: %s" | s_Invalid_sfx_string_s_00652697 = Invalid sfx string: %s
    MOV dword ptr [0x02f0ca48],EDX      ; 005b25bc | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005b25c2 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005b25c8 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b25cd
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005b25d0
    ADD dword ptr [ESP + 0x148],EAX     ; 005b25d7
    JMP 0x005b21ae                      ; 005b25de | LAB_005b21ae
        ;   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 005b25e3
        ;   Label: LAB_005b25e3
    FLDZ                                ; 005b25e7
    FCOMPP                              ; 005b25e9
    FNSTSW AX                           ; 005b25eb
    SAHF                                ; 005b25ed
    JA 0x005b25a9                       ; 005b25ee | LAB_005b25a9
        ;   XREF to: 005b25a9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005b25f0
    ADD dword ptr [ESP + 0x148],EAX     ; 005b25f7
    JMP 0x005b21ae                      ; 005b25fe | LAB_005b21ae
        ;   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
    CMP CH,0x2a                         ; 005b2603
        ;   Label: LAB_005b2603
    JNZ 0x005b2696                      ; 005b2606 | LAB_005b2696
        ;   XREF to: 005b2696 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x160]               ; 005b260c
    PUSH EAX                            ; 005b2613
    LEA EAX,[ESP + 0x4]                 ; 005b2614
    PUSH EAX                            ; 005b2618
    PUSH 0x6526ae                       ; 005b2619 | = "*%f%n" | s_f_n_006526ae = *%f%n
    MOV EDX,dword ptr [ESP + 0x154]     ; 005b261e
    PUSH EDX                            ; 005b2625
    MOV dword ptr [ESP + 0x170],ESI     ; 005b2626
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005b262d | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005b2632
    CMP EBX,dword ptr [ESP + 0x160]     ; 005b2635
    JLE 0x005b2677                      ; 005b263c | LAB_005b2677
        ;   XREF to: 005b2677 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x18]      ; 005b263e
        ;   Label: LAB_005b263e
    PUSH EDX                            ; 005b2641
    MOV EDI,0x6526b4                    ; 005b2642 | = "..\\core\\sound.cpp" | s_core_sound_cpp_006526b4 = ..\core\sound.cpp
    MOV EAX,0x1aa                       ; 005b2647
    PUSH 0x6526c6                       ; 005b264c | = "Invalid sfx string: %s" | s_Invalid_sfx_string_s_006526c6 = Invalid sfx string: %s
    MOV dword ptr [0x02f0ca48],EDI      ; 005b2651 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005b2657 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005b265c | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b2661
    MOV EAX,dword ptr [ESP + 0x160]     ; 005b2664
    ADD dword ptr [ESP + 0x148],EAX     ; 005b266b
    JMP 0x005b21ae                      ; 005b2672 | LAB_005b21ae
        ;   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 005b2677
        ;   Label: LAB_005b2677
    FLDZ                                ; 005b267a
    FCOMPP                              ; 005b267c
    FNSTSW AX                           ; 005b267e
    SAHF                                ; 005b2680
    JNC 0x005b263e                      ; 005b2681 | LAB_005b263e
        ;   XREF to: 005b263e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x160]     ; 005b2683
    ADD dword ptr [ESP + 0x148],EAX     ; 005b268a
    JMP 0x005b21ae                      ; 005b2691 | LAB_005b21ae
        ;   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 005b2696
        ;   Label: LAB_005b2696
    PUSH EAX                            ; 005b2699
    MOV ECX,0x6526dd                    ; 005b269a | = "..\\core\\sound.cpp" | s_core_sound_cpp_006526dd = ..\core\sound.cpp
    MOV EDI,0x1ad                       ; 005b269f
    PUSH 0x6526ef                       ; 005b26a4 | = "Invalid sfx string: %s" | s_Invalid_sfx_string_s_006526ef = Invalid sfx string: %s
    MOV dword ptr [0x02f0ca48],ECX      ; 005b26a9 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005b26af | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005b26b5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b26ba
    JMP 0x005b21ae                      ; 005b26bd | LAB_005b21ae
        ;   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x24]          ; 005b26c2
        ;   Label: LAB_005b26c2
    SUB ESP,0x8                         ; 005b26c5
    FSTP double ptr [ESP]               ; 005b26c8
    FLD float ptr [EBP + 0x20]          ; 005b26cb
    SUB ESP,0x8                         ; 005b26ce
    FSTP double ptr [ESP]               ; 005b26d1
    FLD float ptr [EBP + 0x1c]          ; 005b26d4
    SUB ESP,0x8                         ; 005b26d7
    FSTP double ptr [ESP]               ; 005b26da
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0 ; 005b26dd | void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005b26e2
    JMP 0x005b21d3                      ; 005b26e5 | LAB_005b21d3
        ;   XREF to: 005b21d3 (UNCONDITIONAL_JUMP)

