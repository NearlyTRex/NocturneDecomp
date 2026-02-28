; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)
;
; Local Variables:
; undefined4       Stack[-0xa50]:4  local_a50
; undefined4       Stack[-0xa4c]:4  local_a4c
; undefined8       Stack[-0xa48]:8  local_a48
; undefined8       Stack[-0xa40]:8  local_a40
; undefined8       Stack[-0xa38]:8  local_a38
; undefined4       Stack[-0xa30]:4  local_a30
; undefined4       Stack[-0xa2c]:4  local_a2c
; undefined4       Stack[-0xa28]:4  local_a28
; undefined4       Stack[-0xa24]:4  local_a24
; undefined1       Stack[-0xa20]:1  local_a20
; undefined1       Stack[-0x678]:1  local_678
; undefined1       Stack[-0x677]:1  local_677
; undefined4       Stack[-0x570]:4  local_570
; undefined1       Stack[-0x560]:1  local_560
; undefined1       Stack[-0x448]:1  local_448
; undefined1       Stack[-0x447]:1  local_447
; undefined1       Stack[-0x348]:1  local_348
; undefined1       Stack[-0x347]:1  local_347
; undefined1       Stack[-0x248]:1  local_248
; undefined1       Stack[-0x247]:1  local_247
; undefined1       Stack[-0x148]:1  local_148
; undefined1       Stack[-0x147]:1  local_147
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512eb2
;
; Referenced Globals:
;   void* switchdataD_00511e20 = 005126ce
;   TerminatedCString s_Sound_00636c07
;   TerminatedCString s_Muted_00636c10
;   TerminatedCString s_On_00636c16
;   TerminatedCString s_Sound_effects_00636c19
;   TerminatedCString s_d_00636c2a
;   TerminatedCString s_anon_00636c2d
;   TerminatedCString s_Sound_effects_Off_00636c30
;   TerminatedCString s_Dialog_00636c44
;   TerminatedCString s_d_00636c4e
;   TerminatedCString s_anon_00636c51
;   TerminatedCString s_Dialog_Off_00636c54
;   TerminatedCString s_Music_Vol_00636c61
;   TerminatedCString s_d_00636c6e
;   TerminatedCString s_anon_00636c71
;   ... and 48 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
;   core_moon.cpp_CMoon_render_FUN_00529ed0
;   core_moon.cpp_CMoon_update_FUN_00529d60
;   core_sound.cpp_CSound_configure_FUN_005b3830
;   crt_math.c_pow_FUN_005ffd76
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400
;   ... and 30 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511e50
        ;   Label: core_menu.cpp_configureSoundOptions_FUN_00511e50
    PUSH ESI                            ; 00511e51
    PUSH EDI                            ; 00511e52
    PUSH EBP                            ; 00511e53
    MOV EBP,ESP                         ; 00511e54
    SUB ESP,0xa38                       ; 00511e56
    AND ESP,0xfffffff8                  ; 00511e5c
    MOV ECX,dword ptr [0x0067b654]      ; 00511e5f | g_CGameInstance | g_CGamePtr
    XOR EDX,EDX                         ; 00511e65
    PUSH ECX                            ; 00511e67 | g_CGameInstance
    MOV dword ptr [ESP + 0xa10],EDX     ; 00511e68
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 00511e6f
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    MOV EDX,0x2f28028                   ; 00511e74 | g_SoundMenuTextBuffers
    ADD ESP,0x4                         ; 00511e79
    XOR EAX,EAX                         ; 00511e7c
    MOV dword ptr [EAX + 0x2f28a28],EDX ; 00511e7e | g_SoundOptionsMenuPointers | DAT_02f28a2c | g_SoundMenuTextBuffers
        ;   Label: LAB_00511e7e
    ADD EAX,0x4                         ; 00511e84
    ADD EDX,0x100                       ; 00511e87 | g_SoundMenuTextDialog
    CMP EAX,0x28                        ; 00511e8d
    JNZ 0x00511e7e                      ; 00511e90
        ;   XREF to: 00511e7e (CONDITIONAL_JUMP)  ; LAB_00511e7e
    MOV EBX,dword ptr [0x0067b654]      ; 00511e92 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00511e92
    PUSH EBX                            ; 00511e98 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 00511e99
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 00511e9e
    MOV EAX,[0x0067b654]                ; 00511ea1 | g_CGameInstance | g_CGamePtr
    SUB ESP,0x4                         ; 00511ea6
    MOV EDX,dword ptr [EAX + 0x264]     ; 00511ea9 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EDX             ; 00511eaf
    PUSH 0x2f21590                      ; 00511eb2 | g_CMoonInstance
    CALL core_moon.cpp_CMoon_update_FUN_00529d60 ; 00511eb7
        ;   XREF to: 00529d60 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_update_FUN_00529d60(CMoon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00511ebc
    PUSH 0x2f21590                      ; 00511ebf | g_CMoonInstance
    CALL core_moon.cpp_CMoon_render_FUN_00529ed0 ; 00511ec4
        ;   XREF to: 00529ed0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_00529ed0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 00511ec9
    XOR ESI,ESI                         ; 00511ecc
    PUSH 0x636c07                       ; 00511ece | = "Sound : "
    MOV dword ptr [ESP + 0xa20],ESI     ; 00511ed3
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511eda
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00511edf
    MOV EDI,0x2f28028                   ; 00511ee2 | g_SoundMenuTextBuffers
    MOV ESI,EAX                         ; 00511ee7
    PUSH EDI                            ; 00511ee9 | g_SoundMenuTextBuffers
    MOV AL,byte ptr [ESI]               ; 00511eea
        ;   Label: LAB_00511eea
    MOV byte ptr [EDI],AL               ; 00511eec | g_SoundMenuTextBuffers | DAT_02f2802a
    CMP AL,0x0                          ; 00511eee
    JZ 0x00511f02                       ; 00511ef0
        ;   XREF to: 00511f02 (CONDITIONAL_JUMP)  ; LAB_00511f02
    MOV AL,byte ptr [ESI + 0x1]         ; 00511ef2
    ADD ESI,0x2                         ; 00511ef5
    MOV byte ptr [EDI + 0x1],AL         ; 00511ef8 | DAT_02f28029 | DAT_02f2802b
    ADD EDI,0x2                         ; 00511efb
    CMP AL,0x0                          ; 00511efe
    JNZ 0x00511eea                      ; 00511f00
        ;   XREF to: 00511eea (CONDITIONAL_JUMP)  ; LAB_00511eea
    POP EDI                             ; 00511f02
        ;   Label: LAB_00511f02
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 00511f03
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
    TEST EAX,EAX                        ; 00511f08
    JNZ 0x0051271c                      ; 00511f0a
        ;   XREF to: 0051271c (CONDITIONAL_JUMP)  ; LAB_0051271c
    PUSH 0x636c16                       ; 00511f10 | = "On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511f15
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00511f15
    ADD ESP,0x4                         ; 00511f1a
    MOV ESI,EAX                         ; 00511f1d
    PUSH EDI                            ; 00511f1f | g_SoundMenuTextBuffers
    SUB ECX,ECX                         ; 00511f20
    DEC ECX                             ; 00511f22
    MOV AL,0x0                          ; 00511f23
    SCASB.REPNE ES:EDI                  ; 00511f25 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 00511f27
    MOV AL,byte ptr [ESI]               ; 00511f28
        ;   Label: LAB_00511f28
    MOV byte ptr [EDI],AL               ; 00511f2a | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 00511f2c
    JZ 0x00511f40                       ; 00511f2e
        ;   XREF to: 00511f40 (CONDITIONAL_JUMP)  ; LAB_00511f40
    MOV AL,byte ptr [ESI + 0x1]         ; 00511f30
    ADD ESI,0x2                         ; 00511f33
    MOV byte ptr [EDI + 0x1],AL         ; 00511f36 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 00511f39
    CMP AL,0x0                          ; 00511f3c
    JNZ 0x00511f28                      ; 00511f3e
        ;   XREF to: 00511f28 (CONDITIONAL_JUMP)  ; LAB_00511f28
    POP EDI                             ; 00511f40
        ;   Label: LAB_00511f40
    MOV EDI,dword ptr [ESP + 0xa1c]     ; 00511f41
    PUSH 0x0                            ; 00511f48
    INC EDI                             ; 00511f4a
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 00511f4b
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    MOV dword ptr [ESP + 0xa20],EDI     ; 00511f50
    MOV EBX,EDI                         ; 00511f57
    ADD ESP,0x4                         ; 00511f59
    SHL EBX,0x8                         ; 00511f5c
    LEA EDX,[EDI + 0x1]                 ; 00511f5f
    ADD EBX,0x2f28028                   ; 00511f62 | g_SoundMenuTextBuffers
    MOV dword ptr [ESP + 0xa14],EDX     ; 00511f68
    TEST EAX,EAX                        ; 00511f6f
    JZ 0x00512726                       ; 00511f71
        ;   XREF to: 00512726 (CONDITIONAL_JUMP)  ; LAB_00512726
    PUSH 0x636c19                       ; 00511f77 | = "Sound effects : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511f7c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00511f81
    PUSH EAX                            ; 00511f84
    PUSH EBX                            ; 00511f85
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00511f86
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00511f8b
    PUSH 0x0                            ; 00511f8e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 00511f90
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0xa38],EAX     ; 00511f95
    FLD float ptr [ESP + 0xa38]         ; 00511f9c
    FMUL float ptr [0x00636d3f]         ; 00511fa3 | FLOAT_00636d3f
    FDIV float ptr [0x00661334]         ; 00511fa9 | FLOAT_00661334
    FADD double ptr [0x00636d47]        ; 00511faf | DOUBLE_00636d47
    ADD ESP,0x4                         ; 00511fb5
    CALL crt_math.c_round_FUN_005fe6b0  ; 00511fb8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xa34]       ; 00511fbd
    MOV EAX,dword ptr [ESP + 0xa34]     ; 00511fc4
    PUSH EAX                            ; 00511fcb
    PUSH 0x636c2a                       ; 00511fcc | = "%d"
    LEA EAX,[ESP + 0x708]               ; 00511fd1
    PUSH EAX                            ; 00511fd8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00511fd9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00511fde
    LEA ESI,[ESP + 0x700]               ; 00511fe1
    MOV EDI,EBX                         ; 00511fe8
    PUSH EDI                            ; 00511fea
    SUB ECX,ECX                         ; 00511feb
    DEC ECX                             ; 00511fed
    MOV AL,0x0                          ; 00511fee
    SCASB.REPNE ES:EDI                  ; 00511ff0 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 00511ff2
    MOV AL,byte ptr [ESI]               ; 00511ff3
        ;   Label: LAB_00511ff3
    MOV byte ptr [EDI],AL               ; 00511ff5 | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 00511ff7
    JZ 0x0051200b                       ; 00511ff9
        ;   XREF to: 0051200b (CONDITIONAL_JUMP)  ; LAB_0051200b
    MOV AL,byte ptr [ESI + 0x1]         ; 00511ffb
    ADD ESI,0x2                         ; 00511ffe
    MOV byte ptr [EDI + 0x1],AL         ; 00512001 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 00512004
    CMP AL,0x0                          ; 00512007
    JNZ 0x00511ff3                      ; 00512009
        ;   XREF to: 00511ff3 (CONDITIONAL_JUMP)  ; LAB_00511ff3
    POP EDI                             ; 0051200b
        ;   Label: LAB_0051200b
    PUSH 0x636c2d                       ; 0051200c | = "%."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512011
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512016
    MOV ESI,EAX                         ; 00512019
    PUSH EDI                            ; 0051201b
    SUB ECX,ECX                         ; 0051201c
    DEC ECX                             ; 0051201e
    MOV AL,0x0                          ; 0051201f
    SCASB.REPNE ES:EDI                  ; 00512021 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 00512023
    MOV AL,byte ptr [ESI]               ; 00512024
        ;   Label: LAB_00512024
    MOV byte ptr [EDI],AL               ; 00512026 | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 00512028
    JZ 0x0051203c                       ; 0051202a
        ;   XREF to: 0051203c (CONDITIONAL_JUMP)  ; LAB_0051203c
    MOV AL,byte ptr [ESI + 0x1]         ; 0051202c
    ADD ESI,0x2                         ; 0051202f
    MOV byte ptr [EDI + 0x1],AL         ; 00512032 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 00512035
    CMP AL,0x0                          ; 00512038
    JNZ 0x00512024                      ; 0051203a
        ;   XREF to: 00512024 (CONDITIONAL_JUMP)  ; LAB_00512024
    POP EDI                             ; 0051203c
        ;   Label: LAB_0051203c
    MOV ESI,dword ptr [ESP + 0xa14]     ; 0051203d
    PUSH 0x2                            ; 00512044
        ;   Label: LAB_00512044
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 00512046
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    MOV EBX,ESI                         ; 0051204b
    ADD ESP,0x4                         ; 0051204d
    SHL EBX,0x8                         ; 00512050
    INC ESI                             ; 00512053
    ADD EBX,0x2f28028                   ; 00512054 | g_SoundMenuTextBuffers
    MOV dword ptr [ESP + 0xa18],ESI     ; 0051205a
    TEST EAX,EAX                        ; 00512061
    JZ 0x00512749                       ; 00512063
        ;   XREF to: 00512749 (CONDITIONAL_JUMP)  ; LAB_00512749
    PUSH 0x636c44                       ; 00512069 | = "Dialog : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051206e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512073
    MOV EDI,EBX                         ; 00512076
    MOV ESI,EAX                         ; 00512078
    PUSH EDI                            ; 0051207a
    MOV AL,byte ptr [ESI]               ; 0051207b
        ;   Label: LAB_0051207b
    MOV byte ptr [EDI],AL               ; 0051207d | g_SoundMenuTextBuffers | DAT_02f2802a
    CMP AL,0x0                          ; 0051207f
    JZ 0x00512093                       ; 00512081
        ;   XREF to: 00512093 (CONDITIONAL_JUMP)  ; LAB_00512093
    MOV AL,byte ptr [ESI + 0x1]         ; 00512083
    ADD ESI,0x2                         ; 00512086
    MOV byte ptr [EDI + 0x1],AL         ; 00512089 | DAT_02f28029 | DAT_02f2802b
    ADD EDI,0x2                         ; 0051208c
    CMP AL,0x0                          ; 0051208f
    JNZ 0x0051207b                      ; 00512091
        ;   XREF to: 0051207b (CONDITIONAL_JUMP)  ; LAB_0051207b
    POP EDI                             ; 00512093
        ;   Label: LAB_00512093
    PUSH 0x2                            ; 00512094
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 00512096
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0xa38],EAX     ; 0051209b
    FLD float ptr [ESP + 0xa38]         ; 005120a2
    FMUL float ptr [0x00636d3f]         ; 005120a9 | FLOAT_00636d3f
    FDIV float ptr [0x00661338]         ; 005120af | FLOAT_00661338
    FADD double ptr [0x00636d47]        ; 005120b5 | DOUBLE_00636d47
    ADD ESP,0x4                         ; 005120bb
    CALL crt_math.c_round_FUN_005fe6b0  ; 005120be
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xa34]       ; 005120c3
    MOV EDX,dword ptr [ESP + 0xa34]     ; 005120ca
    PUSH EDX                            ; 005120d1
    PUSH 0x636c4e                       ; 005120d2 | = "%d"
    LEA EAX,[ESP + 0x908]               ; 005120d7
    PUSH EAX                            ; 005120de
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005120df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005120e4
    LEA ESI,[ESP + 0x900]               ; 005120e7
    PUSH EDI                            ; 005120ee
    SUB ECX,ECX                         ; 005120ef
    DEC ECX                             ; 005120f1
    MOV AL,0x0                          ; 005120f2
    SCASB.REPNE ES:EDI                  ; 005120f4 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 005120f6
    MOV AL,byte ptr [ESI]               ; 005120f7
        ;   Label: LAB_005120f7
    MOV byte ptr [EDI],AL               ; 005120f9 | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 005120fb
    JZ 0x0051210f                       ; 005120fd
        ;   XREF to: 0051210f (CONDITIONAL_JUMP)  ; LAB_0051210f
    MOV AL,byte ptr [ESI + 0x1]         ; 005120ff
    ADD ESI,0x2                         ; 00512102
    MOV byte ptr [EDI + 0x1],AL         ; 00512105 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 00512108
    CMP AL,0x0                          ; 0051210b
    JNZ 0x005120f7                      ; 0051210d
        ;   XREF to: 005120f7 (CONDITIONAL_JUMP)  ; LAB_005120f7
    POP EDI                             ; 0051210f
        ;   Label: LAB_0051210f
    PUSH 0x636c51                       ; 00512110 | = "%."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512115
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051211a
    MOV ESI,EAX                         ; 0051211d
    PUSH EDI                            ; 0051211f
    SUB ECX,ECX                         ; 00512120
    DEC ECX                             ; 00512122
    MOV AL,0x0                          ; 00512123
    SCASB.REPNE ES:EDI                  ; 00512125 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 00512127
    MOV AL,byte ptr [ESI]               ; 00512128
        ;   Label: LAB_00512128
    MOV byte ptr [EDI],AL               ; 0051212a | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 0051212c
    JZ 0x00512140                       ; 0051212e
        ;   XREF to: 00512140 (CONDITIONAL_JUMP)  ; LAB_00512140
    MOV AL,byte ptr [ESI + 0x1]         ; 00512130
    ADD ESI,0x2                         ; 00512133
    MOV byte ptr [EDI + 0x1],AL         ; 00512136 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 00512139
    CMP AL,0x0                          ; 0051213c
    JNZ 0x00512128                      ; 0051213e
        ;   XREF to: 00512128 (CONDITIONAL_JUMP)  ; LAB_00512128
    POP EDI                             ; 00512140
        ;   Label: LAB_00512140
    MOV ESI,dword ptr [ESP + 0xa18]     ; 00512141
    PUSH 0x1                            ; 00512148
        ;   Label: LAB_00512148
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 0051214a
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    MOV EBX,ESI                         ; 0051214f
    ADD ESP,0x4                         ; 00512151
    SHL EBX,0x8                         ; 00512154
    INC ESI                             ; 00512157
    ADD EBX,0x2f28028                   ; 00512158 | g_SoundMenuTextBuffers
    MOV dword ptr [ESP + 0xa08],ESI     ; 0051215e
    TEST EAX,EAX                        ; 00512165
    JZ 0x00512765                       ; 00512167
        ;   XREF to: 00512765 (CONDITIONAL_JUMP)  ; LAB_00512765
    PUSH 0x636c61                       ; 0051216d | = "Music Vol : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512172
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512177
    MOV EDI,EBX                         ; 0051217a
    MOV ESI,EAX                         ; 0051217c
    PUSH EDI                            ; 0051217e
    MOV AL,byte ptr [ESI]               ; 0051217f
        ;   Label: LAB_0051217f
    MOV byte ptr [EDI],AL               ; 00512181 | g_SoundMenuTextBuffers | DAT_02f2802a
    CMP AL,0x0                          ; 00512183
    JZ 0x00512197                       ; 00512185
        ;   XREF to: 00512197 (CONDITIONAL_JUMP)  ; LAB_00512197
    MOV AL,byte ptr [ESI + 0x1]         ; 00512187
    ADD ESI,0x2                         ; 0051218a
    MOV byte ptr [EDI + 0x1],AL         ; 0051218d | DAT_02f28029 | DAT_02f2802b
    ADD EDI,0x2                         ; 00512190
    CMP AL,0x0                          ; 00512193
    JNZ 0x0051217f                      ; 00512195
        ;   XREF to: 0051217f (CONDITIONAL_JUMP)  ; LAB_0051217f
    POP EDI                             ; 00512197
        ;   Label: LAB_00512197
    PUSH 0x1                            ; 00512198
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 0051219a
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0xa38],EAX     ; 0051219f
    FLD float ptr [ESP + 0xa38]         ; 005121a6
    FMUL float ptr [0x00636d3f]         ; 005121ad | FLOAT_00636d3f
    FDIV float ptr [0x00661330]         ; 005121b3 | FLOAT_00661330
    FADD double ptr [0x00636d47]        ; 005121b9 | DOUBLE_00636d47
    ADD ESP,0x4                         ; 005121bf
    CALL crt_math.c_round_FUN_005fe6b0  ; 005121c2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xa34]       ; 005121c7
    MOV ECX,dword ptr [ESP + 0xa34]     ; 005121ce
    PUSH ECX                            ; 005121d5
    PUSH 0x636c6e                       ; 005121d6 | = "%d"
    LEA EAX,[ESP + 0x608]               ; 005121db
    PUSH EAX                            ; 005121e2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005121e3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005121e8
    LEA ESI,[ESP + 0x600]               ; 005121eb
    PUSH EDI                            ; 005121f2
    SUB ECX,ECX                         ; 005121f3
    DEC ECX                             ; 005121f5
    MOV AL,0x0                          ; 005121f6
    SCASB.REPNE ES:EDI                  ; 005121f8 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 005121fa
    MOV AL,byte ptr [ESI]               ; 005121fb
        ;   Label: LAB_005121fb
    MOV byte ptr [EDI],AL               ; 005121fd | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 005121ff
    JZ 0x00512213                       ; 00512201
        ;   XREF to: 00512213 (CONDITIONAL_JUMP)  ; LAB_00512213
    MOV AL,byte ptr [ESI + 0x1]         ; 00512203
    ADD ESI,0x2                         ; 00512206
    MOV byte ptr [EDI + 0x1],AL         ; 00512209 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 0051220c
    CMP AL,0x0                          ; 0051220f
    JNZ 0x005121fb                      ; 00512211
        ;   XREF to: 005121fb (CONDITIONAL_JUMP)  ; LAB_005121fb
    POP EDI                             ; 00512213
        ;   Label: LAB_00512213
    PUSH 0x636c71                       ; 00512214 | = "%."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512219
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051221e
    MOV ESI,EAX                         ; 00512221
    PUSH EDI                            ; 00512223
    SUB ECX,ECX                         ; 00512224
    DEC ECX                             ; 00512226
    MOV AL,0x0                          ; 00512227
    SCASB.REPNE ES:EDI                  ; 00512229 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 0051222b
    MOV AL,byte ptr [ESI]               ; 0051222c
        ;   Label: LAB_0051222c
    MOV byte ptr [EDI],AL               ; 0051222e | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 00512230
    JZ 0x00512244                       ; 00512232
        ;   XREF to: 00512244 (CONDITIONAL_JUMP)  ; LAB_00512244
    MOV AL,byte ptr [ESI + 0x1]         ; 00512234
    ADD ESI,0x2                         ; 00512237
    MOV byte ptr [EDI + 0x1],AL         ; 0051223a | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 0051223d
    CMP AL,0x0                          ; 00512240
    JNZ 0x0051222c                      ; 00512242
        ;   XREF to: 0051222c (CONDITIONAL_JUMP)  ; LAB_0051222c
    POP EDI                             ; 00512244
        ;   Label: LAB_00512244
    MOV EAX,dword ptr [ESP + 0xa08]     ; 00512245
    MOV dword ptr [ESP + 0xa24],EAX     ; 0051224c
    PUSH 0x636c84                       ; 00512253 | = "Output rate : "
        ;   Label: LAB_00512253
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512258
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051225d
    MOV EDI,dword ptr [ESP + 0xa24]     ; 00512260
    SHL EDI,0x8                         ; 00512267
    MOV ESI,EAX                         ; 0051226a
    ADD EDI,0x2f28028                   ; 0051226c | g_SoundMenuTextBuffers
    PUSH EDI                            ; 00512272
    MOV AL,byte ptr [ESI]               ; 00512273
        ;   Label: LAB_00512273
    MOV byte ptr [EDI],AL               ; 00512275 | g_SoundMenuTextBuffers | DAT_02f2802a
    CMP AL,0x0                          ; 00512277
    JZ 0x0051228b                       ; 00512279
        ;   XREF to: 0051228b (CONDITIONAL_JUMP)  ; LAB_0051228b
    MOV AL,byte ptr [ESI + 0x1]         ; 0051227b
    ADD ESI,0x2                         ; 0051227e
    MOV byte ptr [EDI + 0x1],AL         ; 00512281 | DAT_02f28029 | DAT_02f2802b
    ADD EDI,0x2                         ; 00512284
    CMP AL,0x0                          ; 00512287
    JNZ 0x00512273                      ; 00512289
        ;   XREF to: 00512273 (CONDITIONAL_JUMP)  ; LAB_00512273
    POP EDI                             ; 0051228b
        ;   Label: LAB_0051228b
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260 ; 0051228c
        ;   XREF to: 005ab260 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260()
    PUSH EAX                            ; 00512291
    PUSH 0x636c93                       ; 00512292 | = "%d"
    LEA EAX,[ESP + 0x808]               ; 00512297
    PUSH EAX                            ; 0051229e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0051229f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005122a4
    LEA ESI,[ESP + 0x800]               ; 005122a7
    PUSH EDI                            ; 005122ae
    SUB ECX,ECX                         ; 005122af
    DEC ECX                             ; 005122b1
    MOV AL,0x0                          ; 005122b2
    SCASB.REPNE ES:EDI                  ; 005122b4 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 005122b6
    MOV AL,byte ptr [ESI]               ; 005122b7
        ;   Label: LAB_005122b7
    MOV byte ptr [EDI],AL               ; 005122b9 | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 005122bb
    JZ 0x005122cf                       ; 005122bd
        ;   XREF to: 005122cf (CONDITIONAL_JUMP)  ; LAB_005122cf
    MOV AL,byte ptr [ESI + 0x1]         ; 005122bf
    ADD ESI,0x2                         ; 005122c2
    MOV byte ptr [EDI + 0x1],AL         ; 005122c5 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 005122c8
    CMP AL,0x0                          ; 005122cb
    JNZ 0x005122b7                      ; 005122cd
        ;   XREF to: 005122b7 (CONDITIONAL_JUMP)  ; LAB_005122b7
    POP EDI                             ; 005122cf
        ;   Label: LAB_005122cf
    PUSH 0x636c96                       ; 005122d0 | = "hz"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005122d5
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005122da
    MOV ESI,EAX                         ; 005122dd
    PUSH EDI                            ; 005122df
    SUB ECX,ECX                         ; 005122e0
    DEC ECX                             ; 005122e2
    MOV AL,0x0                          ; 005122e3
    SCASB.REPNE ES:EDI                  ; 005122e5 | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 005122e7
    MOV AL,byte ptr [ESI]               ; 005122e8
        ;   Label: LAB_005122e8
    MOV byte ptr [EDI],AL               ; 005122ea | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 005122ec
    JZ 0x00512300                       ; 005122ee
        ;   XREF to: 00512300 (CONDITIONAL_JUMP)  ; LAB_00512300
    MOV AL,byte ptr [ESI + 0x1]         ; 005122f0
    ADD ESI,0x2                         ; 005122f3
    MOV byte ptr [EDI + 0x1],AL         ; 005122f6 | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 005122f9
    CMP AL,0x0                          ; 005122fc
    JNZ 0x005122e8                      ; 005122fe
        ;   XREF to: 005122e8 (CONDITIONAL_JUMP)  ; LAB_005122e8
    POP EDI                             ; 00512300
        ;   Label: LAB_00512300
    MOV EBX,dword ptr [ESP + 0xa24]     ; 00512301
    PUSH 0x636c99                       ; 00512308 | = "Output quality : "
    INC EBX                             ; 0051230d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051230e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV dword ptr [ESP + 0xa28],EBX     ; 00512313
    MOV EDI,EBX                         ; 0051231a
    ADD ESP,0x4                         ; 0051231c
    SHL EDI,0x8                         ; 0051231f
    MOV ESI,EAX                         ; 00512322
    ADD EDI,0x2f28028                   ; 00512324 | g_SoundMenuTextBuffers
    PUSH EDI                            ; 0051232a
    MOV AL,byte ptr [ESI]               ; 0051232b
        ;   Label: LAB_0051232b
    MOV byte ptr [EDI],AL               ; 0051232d | g_SoundMenuTextBuffers | DAT_02f2802a
    CMP AL,0x0                          ; 0051232f
    JZ 0x00512343                       ; 00512331
        ;   XREF to: 00512343 (CONDITIONAL_JUMP)  ; LAB_00512343
    MOV AL,byte ptr [ESI + 0x1]         ; 00512333
    ADD ESI,0x2                         ; 00512336
    MOV byte ptr [EDI + 0x1],AL         ; 00512339 | DAT_02f28029 | DAT_02f2802b
    ADD EDI,0x2                         ; 0051233c
    CMP AL,0x0                          ; 0051233f
    JNZ 0x0051232b                      ; 00512341
        ;   XREF to: 0051232b (CONDITIONAL_JUMP)  ; LAB_0051232b
    POP EDI                             ; 00512343
        ;   Label: LAB_00512343
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250 ; 00512344
        ;   XREF to: 005ab250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250()
    PUSH EAX                            ; 00512349
    PUSH 0x636cab                       ; 0051234a | = "%d"
    LEA EAX,[ESP + 0x808]               ; 0051234f
    PUSH EAX                            ; 00512356
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00512357
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0051235c
    LEA ESI,[ESP + 0x800]               ; 0051235f
    PUSH EDI                            ; 00512366
    SUB ECX,ECX                         ; 00512367
    DEC ECX                             ; 00512369
    MOV AL,0x0                          ; 0051236a
    SCASB.REPNE ES:EDI                  ; 0051236c | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 0051236e
    MOV AL,byte ptr [ESI]               ; 0051236f
        ;   Label: LAB_0051236f
    MOV byte ptr [EDI],AL               ; 00512371 | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 00512373
    JZ 0x00512387                       ; 00512375
        ;   XREF to: 00512387 (CONDITIONAL_JUMP)  ; LAB_00512387
    MOV AL,byte ptr [ESI + 0x1]         ; 00512377
    ADD ESI,0x2                         ; 0051237a
    MOV byte ptr [EDI + 0x1],AL         ; 0051237d | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 00512380
    CMP AL,0x0                          ; 00512383
    JNZ 0x0051236f                      ; 00512385
        ;   XREF to: 0051236f (CONDITIONAL_JUMP)  ; LAB_0051236f
    POP EDI                             ; 00512387
        ;   Label: LAB_00512387
    PUSH 0x636cae                       ; 00512388 | = "bit"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051238d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512392
    MOV ESI,EAX                         ; 00512395
    PUSH EDI                            ; 00512397
    SUB ECX,ECX                         ; 00512398
    DEC ECX                             ; 0051239a
    MOV AL,0x0                          ; 0051239b
    SCASB.REPNE ES:EDI                  ; 0051239d | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 0051239f
    MOV AL,byte ptr [ESI]               ; 005123a0
        ;   Label: LAB_005123a0
    MOV byte ptr [EDI],AL               ; 005123a2 | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 005123a4
    JZ 0x005123b8                       ; 005123a6
        ;   XREF to: 005123b8 (CONDITIONAL_JUMP)  ; LAB_005123b8
    MOV AL,byte ptr [ESI + 0x1]         ; 005123a8
    ADD ESI,0x2                         ; 005123ab
    MOV byte ptr [EDI + 0x1],AL         ; 005123ae | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 005123b1
    CMP AL,0x0                          ; 005123b4
    JNZ 0x005123a0                      ; 005123b6
        ;   XREF to: 005123a0 (CONDITIONAL_JUMP)  ; LAB_005123a0
    POP EDI                             ; 005123b8
        ;   Label: LAB_005123b8
    LEA ESI,[EBX + 0x1]                 ; 005123b9
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270 ; 005123bc
        ;   XREF to: 005ab270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270()
    MOV dword ptr [ESP + 0xa24],ESI     ; 005123c1
    CMP EAX,0x1                         ; 005123c8
    JNC 0x005127b0                      ; 005123cb
        ;   XREF to: 005127b0 (CONDITIONAL_JUMP)  ; LAB_005127b0
    PUSH 0x636cb2                       ; 005123d1 | = "Output type : MONO"
        ;   Label: LAB_005123d1
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005123d6
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005123db
    PUSH EAX                            ; 005123de
    MOV EAX,dword ptr [ESP + 0xa28]     ; 005123df
    SHL EAX,0x8                         ; 005123e6
    MOV EDX,dword ptr [ESP + 0xa28]     ; 005123e9
    ADD EAX,0x2f28028                   ; 005123f0 | g_SoundMenuTextBuffers
    INC EDX                             ; 005123f5
    PUSH EAX                            ; 005123f6
    MOV dword ptr [ESP + 0xa2c],EDX     ; 005123f7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005123fe
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   Label: LAB_005123fe
    ADD ESP,0x8                         ; 00512403
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0 ; 00512406
        ;   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0()
    MOV EBX,EAX                         ; 0051240b
    TEST EAX,EAX                        ; 0051240d
    JL 0x0051241e                       ; 0051240f
        ;   XREF to: 0051241e (CONDITIONAL_JUMP)  ; LAB_0051241e
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 ; 00512411
        ;   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0()
    CMP EBX,EAX                         ; 00512416
    JL 0x005127c0                       ; 00512418
        ;   XREF to: 005127c0 (CONDITIONAL_JUMP)  ; LAB_005127c0
    XOR ECX,ECX                         ; 0051241e
        ;   Label: LAB_0051241e
    XOR AH,AH                           ; 00512420
    MOV dword ptr [ESP + 0x4d8],ECX     ; 00512422
    MOV byte ptr [ESP + 0x3d0],AH       ; 00512429
    PUSH 0x636cda                       ; 00512430 | = "Device : "
        ;   Label: LAB_00512430
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512435
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051243a
    MOV EDI,dword ptr [ESP + 0xa24]     ; 0051243d
    SHL EDI,0x8                         ; 00512444
    MOV ESI,EAX                         ; 00512447
    ADD EDI,0x2f28028                   ; 00512449 | g_SoundMenuTextBuffers
    MOV EBX,dword ptr [ESP + 0xa24]     ; 0051244f
    PUSH EDI                            ; 00512456
    MOV AL,byte ptr [ESI]               ; 00512457
        ;   Label: LAB_00512457
    MOV byte ptr [EDI],AL               ; 00512459 | g_SoundMenuTextBuffers | DAT_02f2802a
    CMP AL,0x0                          ; 0051245b
    JZ 0x0051246f                       ; 0051245d
        ;   XREF to: 0051246f (CONDITIONAL_JUMP)  ; LAB_0051246f
    MOV AL,byte ptr [ESI + 0x1]         ; 0051245f
    ADD ESI,0x2                         ; 00512462
    MOV byte ptr [EDI + 0x1],AL         ; 00512465 | DAT_02f28029 | DAT_02f2802b
    ADD EDI,0x2                         ; 00512468
    CMP AL,0x0                          ; 0051246b
    JNZ 0x00512457                      ; 0051246d
        ;   XREF to: 00512457 (CONDITIONAL_JUMP)  ; LAB_00512457
    POP EDI                             ; 0051246f
        ;   Label: LAB_0051246f
    LEA ESI,[ESP + 0x3d0]               ; 00512470
    INC EBX                             ; 00512477
    PUSH EDI                            ; 00512478
    SUB ECX,ECX                         ; 00512479
    DEC ECX                             ; 0051247b
    MOV AL,0x0                          ; 0051247c
    SCASB.REPNE ES:EDI                  ; 0051247e | g_SoundMenuTextBuffers | DAT_02f28029
    DEC EDI                             ; 00512480
    MOV AL,byte ptr [ESI]               ; 00512481
        ;   Label: LAB_00512481
    MOV byte ptr [EDI],AL               ; 00512483 | g_SoundMenuTextBuffers | DAT_02f28029 | DAT_02f2802a
    CMP AL,0x0                          ; 00512485
    JZ 0x00512499                       ; 00512487
        ;   XREF to: 00512499 (CONDITIONAL_JUMP)  ; LAB_00512499
    MOV AL,byte ptr [ESI + 0x1]         ; 00512489
    ADD ESI,0x2                         ; 0051248c
    MOV byte ptr [EDI + 0x1],AL         ; 0051248f | DAT_02f28029 | DAT_02f2802a | DAT_02f2802b
    ADD EDI,0x2                         ; 00512492
    CMP AL,0x0                          ; 00512495
    JNZ 0x00512481                      ; 00512497
        ;   XREF to: 00512481 (CONDITIONAL_JUMP)  ; LAB_00512481
    POP EDI                             ; 00512499
        ;   Label: LAB_00512499
    MOV ESI,dword ptr [ESP + 0x4d8]     ; 0051249a
    MOV dword ptr [ESP + 0xa24],EBX     ; 005124a1
    TEST ESI,ESI                        ; 005124a8
    JZ 0x005124f4                       ; 005124aa
        ;   XREF to: 005124f4 (CONDITIONAL_JUMP)  ; LAB_005124f4
    MOV EDI,EBX                         ; 005124ac
    SHL EDI,0x8                         ; 005124ae
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590 ; 005124b1
        ;   XREF to: 005ab590 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590()
    ADD EDI,0x2f28028                   ; 005124b6 | g_SoundMenuTextBuffers
    TEST EAX,EAX                        ; 005124bc
    JZ 0x005127d6                       ; 005124be
        ;   XREF to: 005127d6 (CONDITIONAL_JUMP)  ; LAB_005127d6
    PUSH 0x636ce4                       ; 005124c4 | = "Hardware mixing: On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005124c9
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_005124c9
    ADD ESP,0x4                         ; 005124ce
    MOV ESI,EAX                         ; 005124d1
    PUSH EDI                            ; 005124d3
    MOV AL,byte ptr [ESI]               ; 005124d4
        ;   Label: LAB_005124d4
    MOV byte ptr [EDI],AL               ; 005124d6 | g_SoundMenuTextBuffers | DAT_02f2802a
    CMP AL,0x0                          ; 005124d8
    JZ 0x005124ec                       ; 005124da
        ;   XREF to: 005124ec (CONDITIONAL_JUMP)  ; LAB_005124ec
    MOV AL,byte ptr [ESI + 0x1]         ; 005124dc
    ADD ESI,0x2                         ; 005124df
    MOV byte ptr [EDI + 0x1],AL         ; 005124e2 | DAT_02f28029 | DAT_02f2802b
    ADD EDI,0x2                         ; 005124e5
    CMP AL,0x0                          ; 005124e8
    JNZ 0x005124d4                      ; 005124ea
        ;   XREF to: 005124d4 (CONDITIONAL_JUMP)  ; LAB_005124d4
    POP EDI                             ; 005124ec
        ;   Label: LAB_005124ec
    INC dword ptr [ESP + 0xa24]         ; 005124ed
    IMUL EAX,dword ptr [0x02cf6a80],0x18 ; 005124f4 | g_GlobalDeltaTimeInt
        ;   Label: LAB_005124f4
    MOV ECX,dword ptr [0x02f26cb4]      ; 005124fb | g_AudioVisualizationCounter
    ADD ECX,EAX                         ; 00512501
    MOV dword ptr [0x02f26cb4],ECX      ; 00512503 | g_AudioVisualizationCounter
    CMP ECX,0x80000                     ; 00512509
    JL 0x0051251d                       ; 0051250f
        ;   XREF to: 0051251d (CONDITIONAL_JUMP)  ; LAB_0051251d
    LEA ESI,[ECX + 0xfff80000]          ; 00512511
    MOV dword ptr [0x02f26cb4],ESI      ; 00512517 | g_AudioVisualizationCounter
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 0051251d
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
        ;   Label: LAB_0051251d
    TEST EAX,EAX                        ; 00512522
    JZ 0x0051267f                       ; 00512524
        ;   XREF to: 0051267f (CONDITIONAL_JUMP)  ; LAB_0051267f
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270 ; 0051252a
        ;   XREF to: 005ab270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270()
    MOV EBX,EAX                         ; 0051252f
    MOV dword ptr [ESP + 0xa28],EAX     ; 00512531
    MOV EAX,[0x00679394]                ; 00512538 | g_WindowWidth
    MOV EDX,EAX                         ; 0051253d
    MOV ESI,0x14                        ; 0051253f
    SAR EDX,0x1f                        ; 00512544
    IDIV ESI                            ; 00512547
    MOV dword ptr [ESP + 0xa2c],EAX     ; 00512549
    MOV EAX,[0x00679394]                ; 00512550 | g_WindowWidth
    MOV EDX,EAX                         ; 00512555
    SAR EDX,0x1f                        ; 00512557
    IDIV EBX                            ; 0051255a
    MOV EDX,dword ptr [ESP + 0xa2c]     ; 0051255c
    ADD EDX,EDX                         ; 00512563
    MOV dword ptr [ESP + 0xa30],EAX     ; 00512565
    SUB EAX,EDX                         ; 0051256c
    MOV EDX,EAX                         ; 0051256e
    SAR EDX,0x1f                        ; 00512570
    SHL EDX,0x2                         ; 00512573
    SBB EAX,EDX                         ; 00512576
    SAR EAX,0x2                         ; 00512578
    MOV dword ptr [ESP + 0xa34],EAX     ; 0051257b
    FILD dword ptr [ESP + 0xa34]        ; 00512582
    FLD1                                ; 00512589
    FDIVRP                              ; 0051258b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051258d
    FLD double ptr [0x00636d4f]         ; 00512591 | DOUBLE_00636d4f
    CALL crt_math.c_pow_FUN_005ffd76    ; 00512597
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    XOR ESI,ESI                         ; 0051259c
    FSTP double ptr [ESP]               ; 0051259e
    TEST EBX,EBX                        ; 005125a1
    JLE 0x0051267f                      ; 005125a3
        ;   XREF to: 0051267f (CONDITIONAL_JUMP)  ; LAB_0051267f
    MOV EDX,0x40690000                  ; 005125a9
        ;   Label: LAB_005125a9
    XOR EAX,EAX                         ; 005125ae
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005125b0
    MOV dword ptr [ESP + 0x8],EAX       ; 005125b4
    MOV dword ptr [ESP + 0xc],EDX       ; 005125b8
    TEST ECX,ECX                        ; 005125bc
    JLE 0x0051266f                      ; 005125be
        ;   XREF to: 0051266f (CONDITIONAL_JUMP)  ; LAB_0051266f
    MOV EAX,dword ptr [ESP + 0xa30]     ; 005125c4
    IMUL EAX,ESI                        ; 005125cb
    ADD EAX,dword ptr [ESP + 0xa2c]     ; 005125ce
    LEA EDI,[ECX*0x4 + 0x0]             ; 005125d5
    MOV EBX,EAX                         ; 005125dc
    ADD EDI,EAX                         ; 005125de
    FLD double ptr [ESP + 0x8]          ; 005125e0
        ;   Label: LAB_005125e0
    FMUL double ptr [ESP]               ; 005125e4
    FST double ptr [ESP + 0xa00]        ; 005125e7
    SUB ESP,0x4                         ; 005125ee
    FSTP float ptr [ESP]                ; 005125f1
    FLD double ptr [ESP + 0xc]          ; 005125f4
    SUB ESP,0x4                         ; 005125f8
    FSTP float ptr [ESP]                ; 005125fb
    PUSH ESI                            ; 005125fe
    CALL sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400 ; 005125ff
        ;   XREF to: 005ac400 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400(int channel, float freq_start_hz, float freq_end_hz)
    MOV dword ptr [ESP + 0xa40],EAX     ; 00512604
    FLD float ptr [ESP + 0xa40]         ; 0051260b
    ADD ESP,0xc                         ; 00512612
    FILD dword ptr [0x00679398]         ; 00512615 | g_WindowHeight
    FXCH                                ; 0051261b
    FMUL ST1                            ; 0051261d
    MOV EAX,[0x00679398]                ; 0051261f | g_WindowHeight
    FMUL float ptr [0x00636d43]         ; 00512624 | FLOAT_00636d43
    DEC EAX                             ; 0051262a
    FSUBP                               ; 0051262b
    MOV EDX,EAX                         ; 0051262d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051262f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xa34]       ; 00512634
    SUB EDX,dword ptr [ESP + 0xa34]     ; 0051263b
    INC EDX                             ; 00512642
    PUSH EDX                            ; 00512643
    PUSH EAX                            ; 00512644
    PUSH EBX                            ; 00512645
    CALL core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70 ; 00512646
        ;   XREF to: 0050fe70 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center, int y_top, int height_half)
    ADD ESP,0xc                         ; 0051264b
    MOV EAX,dword ptr [ESP + 0xa00]     ; 0051264e
    MOV dword ptr [ESP + 0x8],EAX       ; 00512655
    MOV EAX,dword ptr [ESP + 0xa04]     ; 00512659
    ADD EBX,0x4                         ; 00512660
    MOV dword ptr [ESP + 0xc],EAX       ; 00512663
    CMP EBX,EDI                         ; 00512667
    JL 0x005125e0                       ; 00512669
        ;   XREF to: 005125e0 (CONDITIONAL_JUMP)  ; LAB_005125e0
    MOV EDI,dword ptr [ESP + 0xa28]     ; 0051266f
        ;   Label: LAB_0051266f
    INC ESI                             ; 00512676
    CMP ESI,EDI                         ; 00512677
    JL 0x005125a9                       ; 00512679
        ;   XREF to: 005125a9 (CONDITIONAL_JUMP)  ; LAB_005125a9
    PUSH 0x636d0d                       ; 0051267f | = "Sound Options"
        ;   Label: LAB_0051267f
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512684
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512689
    PUSH EAX                            ; 0051268c
    PUSH 0xe1                           ; 0051268d
    LEA EAX,[ESP + 0xa14]               ; 00512692
    PUSH EAX                            ; 00512699
    MOV ESI,dword ptr [ESP + 0xa30]     ; 0051269a
    PUSH ESI                            ; 005126a1
    PUSH 0x2f28a28                      ; 005126a2 | g_SoundOptionsMenuPointers
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 ; 005126a7
        ;   XREF to: 00510000 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_renderMenuAndGetChoice_FUN_00510000(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 005126ac
    MOV EDI,0x3e4ccccd                  ; 005126af
    MOV EBX,EAX                         ; 005126b4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005126b6
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV dword ptr [ESP + 0xa20],EDI     ; 005126bb
    CMP EBX,0x8                         ; 005126c2
    JA 0x005126fd                       ; 005126c5
        ;   XREF to: 005126fd (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x511e20]  ; 005126c7 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 005126ce
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
        ;   Label: caseD_0
    TEST EAX,EAX                        ; 005126d3
    SETZ AL                             ; 005126d5
    AND EAX,0xff                        ; 005126d8
    PUSH EAX                            ; 005126dd
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0 ; 005126de
        ;   XREF to: 005a96c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0(int enable)
    ADD ESP,0x4                         ; 005126e3
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 005126e6
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
    TEST EAX,EAX                        ; 005126eb
    JNZ 0x005126fd                      ; 005126ed
        ;   XREF to: 005126fd (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00681ef8]                ; 005126ef | g_CSoundInstance | g_CSoundPtr
        ;   Label: LAB_005126ef
    PUSH EAX                            ; 005126f4 | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 005126f5
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
        ;   Label: LAB_005126f5
    ADD ESP,0x4                         ; 005126fa
    PUSH 0x1                            ; 005126fd
        ;   Label: default
    MOV EAX,[0x0067cf44]                ; 005126ff | g_CKeysPtr
    PUSH EAX                            ; 00512704 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00512705 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00512707
    ADD ESP,0x8                         ; 0051270a
    TEST EAX,EAX                        ; 0051270d
    JZ 0x00511e92                       ; 0051270f
        ;   XREF to: 00511e92 (CONDITIONAL_JUMP)  ; LAB_00511e92
    MOV ESP,EBP                         ; 00512715
    POP EBP                             ; 00512717
    POP EDI                             ; 00512718
    POP ESI                             ; 00512719
    POP EBX                             ; 0051271a
    RET                                 ; 0051271b
    PUSH 0x636c10                       ; 0051271c | = "Muted"
        ;   Label: LAB_0051271c
    JMP 0x00511f15                      ; 00512721
        ;   XREF to: 00511f15 (UNCONDITIONAL_JUMP)  ; LAB_00511f15
    PUSH 0x636c30                       ; 00512726 | = "Sound effects : Off"
        ;   Label: LAB_00512726
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051272b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512730
    PUSH EAX                            ; 00512733
    PUSH EBX                            ; 00512734
    MOV ESI,dword ptr [ESP + 0xa1c]     ; 00512735
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0051273c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00512741
    JMP 0x00512044                      ; 00512744
        ;   XREF to: 00512044 (UNCONDITIONAL_JUMP)  ; LAB_00512044
    PUSH 0x636c54                       ; 00512749 | = "Dialog : Off"
        ;   Label: LAB_00512749
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051274e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512753
    PUSH EAX                            ; 00512756
    PUSH EBX                            ; 00512757
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00512758
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0051275d
    JMP 0x00512148                      ; 00512760
        ;   XREF to: 00512148 (UNCONDITIONAL_JUMP)  ; LAB_00512148
    PUSH 0x636c74                       ; 00512765 | = "Music Vol : Off"
        ;   Label: LAB_00512765
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051276a
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051276f
    PUSH EAX                            ; 00512772
    PUSH EBX                            ; 00512773
    MOV dword ptr [ESP + 0xa2c],ESI     ; 00512774
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0051277b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00512780
    JMP 0x00512253                      ; 00512783
        ;   XREF to: 00512253 (UNCONDITIONAL_JUMP)  ; LAB_00512253
    PUSH 0x636cc5                       ; 00512788 | = "Output type : STEREO"
        ;   Label: LAB_00512788
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051278d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00512792
    PUSH EAX                            ; 00512795
    MOV EAX,ESI                         ; 00512796
    SHL EAX,0x8                         ; 00512798
    ADD EAX,0x2f28028                   ; 0051279b | g_SoundMenuTextBuffers
    LEA EDI,[ESI + 0x1]                 ; 005127a0
    PUSH EAX                            ; 005127a3
    MOV dword ptr [ESP + 0xa2c],EDI     ; 005127a4
    JMP 0x005123fe                      ; 005127ab
        ;   XREF to: 005123fe (UNCONDITIONAL_JUMP)  ; LAB_005123fe
    JBE 0x005123d1                      ; 005127b0
        ;   XREF to: 005123d1 (CONDITIONAL_JUMP)  ; LAB_005123d1
        ;   Label: LAB_005127b0
    CMP EAX,0x2                         ; 005127b6
    JZ 0x00512788                       ; 005127b9
        ;   XREF to: 00512788 (CONDITIONAL_JUMP)  ; LAB_00512788
    JMP 0x005123d1                      ; 005127bb
        ;   XREF to: 005123d1 (UNCONDITIONAL_JUMP)  ; LAB_005123d1
    LEA EAX,[ESP + 0x3d0]               ; 005127c0
        ;   Label: LAB_005127c0
    PUSH EAX                            ; 005127c7
    PUSH EBX                            ; 005127c8
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005127c9
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005127ce
    JMP 0x00512430                      ; 005127d1
        ;   XREF to: 00512430 (UNCONDITIONAL_JUMP)  ; LAB_00512430
    PUSH 0x636cf8                       ; 005127d6 | = "Hardware mixing: Off"
        ;   Label: LAB_005127d6
    JMP 0x005124c9                      ; 005127db
        ;   XREF to: 005124c9 (UNCONDITIONAL_JUMP)  ; LAB_005124c9
    PUSH 0x0                            ; 005127e0
        ;   Label: caseD_1
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005127e2
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0xa38],EAX     ; 005127e7
    FLD float ptr [ESP + 0xa38]         ; 005127ee
    FDIV float ptr [0x00661334]         ; 005127f5 | FLOAT_00661334
    ADD ESP,0x4                         ; 005127fb
    MOV EDX,dword ptr [0x02f26cac]      ; 005127fe | g_MenuLeftRightPressed
    FSTP float ptr [ESP + 0x24]         ; 00512804
    CMP EDX,0x1                         ; 00512808
    JNZ 0x0051289f                      ; 0051280b
        ;   XREF to: 0051289f (CONDITIONAL_JUMP)  ; LAB_0051289f
    PUSH 0x0                            ; 00512811
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 00512813
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 00512818
    TEST EAX,EAX                        ; 0051281b
    JZ 0x00512889                       ; 0051281d
        ;   XREF to: 00512889 (CONDITIONAL_JUMP)  ; LAB_00512889
    FLD float ptr [ESP + 0x24]          ; 0051281f
    FSUB float ptr [ESP + 0xa20]        ; 00512823
    FST float ptr [ESP + 0x24]          ; 0051282a
    FCOMP double ptr [0x00636d77]       ; 0051282e | DOUBLE_00636d77
    FNSTSW AX                           ; 00512834
    SAHF                                ; 00512836
    JNC 0x00512849                      ; 00512837
        ;   XREF to: 00512849 (CONDITIONAL_JUMP)  ; LAB_00512849
    XOR EDI,EDI                         ; 00512839
    PUSH EDI                            ; 0051283b
    PUSH EDI                            ; 0051283c
    MOV dword ptr [ESP + 0x2c],EDI      ; 0051283d
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 00512841
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
        ;   Label: LAB_00512841
    ADD ESP,0x8                         ; 00512846
    FLD float ptr [ESP + 0x24]          ; 00512849
        ;   Label: LAB_00512849
    FMUL float ptr [0x00661334]         ; 0051284d | FLOAT_00661334
    SUB ESP,0x4                         ; 00512853
    FSTP float ptr [ESP]                ; 00512856
    PUSH 0x0                            ; 00512859
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 0051285b
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
    ADD ESP,0x8                         ; 00512860
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 00512863
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x1                            ; 00512868
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70 ; 0051286a
        ;   XREF to: 005a8b70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
    ADD ESP,0x4                         ; 0051286f
    PUSH 0x636d1b                       ; 00512872 | = "colt45-0.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00512877
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 0051287c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0051287f
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x005126fd                      ; 00512884
        ;   XREF to: 005126fd (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00512889
        ;   Label: LAB_00512889
    PUSH EAX                            ; 0051288b
    MOV ESI,0x3f800000                  ; 0051288c
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 00512891
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 00512896
    MOV dword ptr [ESP + 0x24],ESI      ; 00512899
    JMP 0x00512849                      ; 0051289d
        ;   XREF to: 00512849 (UNCONDITIONAL_JUMP)  ; LAB_00512849
    PUSH 0x0                            ; 0051289f
        ;   Label: LAB_0051289f
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005128a1
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 005128a6
    TEST EAX,EAX                        ; 005128a9
    JZ 0x005128f4                       ; 005128ab
        ;   XREF to: 005128f4 (CONDITIONAL_JUMP)  ; LAB_005128f4
    FLD float ptr [ESP + 0x24]          ; 005128ad
    FADD float ptr [ESP + 0xa20]        ; 005128b1
    FST float ptr [ESP + 0x24]          ; 005128b8
    FCOMP double ptr [0x00636d5f]       ; 005128bc | DOUBLE_00636d5f
    FNSTSW AX                           ; 005128c2
    SAHF                                ; 005128c4
    JA 0x005128e7                       ; 005128c5
        ;   XREF to: 005128e7 (CONDITIONAL_JUMP)  ; LAB_005128e7
    FLD float ptr [ESP + 0x24]          ; 005128c7
    FCOMP double ptr [0x00636d67]       ; 005128cb | DOUBLE_00636d67
    FNSTSW AX                           ; 005128d1
    SAHF                                ; 005128d3
    JBE 0x00512849                      ; 005128d4
        ;   XREF to: 00512849 (CONDITIONAL_JUMP)  ; LAB_00512849
    MOV dword ptr [ESP + 0x24],0x3f800000 ; 005128da
    JMP 0x00512849                      ; 005128e2
        ;   XREF to: 00512849 (UNCONDITIONAL_JUMP)  ; LAB_00512849
    XOR EBX,EBX                         ; 005128e7
        ;   Label: LAB_005128e7
    PUSH EBX                            ; 005128e9
    PUSH EBX                            ; 005128ea
    MOV dword ptr [ESP + 0x2c],EBX      ; 005128eb
    JMP 0x00512841                      ; 005128ef
        ;   XREF to: 00512841 (UNCONDITIONAL_JUMP)  ; LAB_00512841
    PUSH 0x1                            ; 005128f4
        ;   Label: LAB_005128f4
    PUSH EAX                            ; 005128f6
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005128f7
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 005128fc
    MOV dword ptr [ESP + 0x24],EDI      ; 005128ff
    JMP 0x00512849                      ; 00512903
        ;   XREF to: 00512849 (UNCONDITIONAL_JUMP)  ; LAB_00512849
    PUSH 0x2                            ; 00512908
        ;   Label: caseD_2
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 0051290a
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0xa38],EAX     ; 0051290f
    FLD float ptr [ESP + 0xa38]         ; 00512916
    FDIV float ptr [0x00661338]         ; 0051291d | FLOAT_00661338
    ADD ESP,0x4                         ; 00512923
    MOV ECX,dword ptr [0x02f26cac]      ; 00512926 | g_MenuLeftRightPressed
    FSTP float ptr [ESP + 0x18]         ; 0051292c
    CMP ECX,0x1                         ; 00512930
    JNZ 0x005129a4                      ; 00512933
        ;   XREF to: 005129a4 (CONDITIONAL_JUMP)  ; LAB_005129a4
    PUSH 0x2                            ; 00512935
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 00512937
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 0051293c
    TEST EAX,EAX                        ; 0051293f
    JZ 0x0051298d                       ; 00512941
        ;   XREF to: 0051298d (CONDITIONAL_JUMP)  ; LAB_0051298d
    FLD float ptr [ESP + 0x18]          ; 00512943
    FSUB float ptr [ESP + 0xa20]        ; 00512947
    FST float ptr [ESP + 0x18]          ; 0051294e
    FCOMP double ptr [0x00636d77]       ; 00512952 | DOUBLE_00636d77
    FNSTSW AX                           ; 00512958
    SAHF                                ; 0051295a
    JNC 0x0051296e                      ; 0051295b
        ;   XREF to: 0051296e (CONDITIONAL_JUMP)  ; LAB_0051296e
    XOR EAX,EAX                         ; 0051295d
    PUSH EAX                            ; 0051295f
    PUSH 0x2                            ; 00512960
    MOV dword ptr [ESP + 0x20],EAX      ; 00512962
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 00512966
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
        ;   Label: LAB_00512966
    ADD ESP,0x8                         ; 0051296b
    FLD float ptr [ESP + 0x18]          ; 0051296e
        ;   Label: LAB_0051296e
    FMUL float ptr [0x00661338]         ; 00512972 | FLOAT_00661338
    SUB ESP,0x4                         ; 00512978
    FSTP float ptr [ESP]                ; 0051297b
    PUSH 0x2                            ; 0051297e
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 00512980
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
    ADD ESP,0x8                         ; 00512985
    JMP 0x005126fd                      ; 00512988
        ;   XREF to: 005126fd (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0051298d
        ;   Label: LAB_0051298d
    PUSH 0x2                            ; 0051298f
    MOV EDI,0x3f800000                  ; 00512991
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 00512996
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0051299b
    MOV dword ptr [ESP + 0x18],EDI      ; 0051299e
    JMP 0x0051296e                      ; 005129a2
        ;   XREF to: 0051296e (UNCONDITIONAL_JUMP)  ; LAB_0051296e
    PUSH 0x2                            ; 005129a4
        ;   Label: LAB_005129a4
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005129a6
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 005129ab
    TEST EAX,EAX                        ; 005129ae
    JZ 0x005129f3                       ; 005129b0
        ;   XREF to: 005129f3 (CONDITIONAL_JUMP)  ; LAB_005129f3
    FLD float ptr [ESP + 0x18]          ; 005129b2
    FADD float ptr [ESP + 0xa20]        ; 005129b6
    FST float ptr [ESP + 0x18]          ; 005129bd
    FCOMP double ptr [0x00636d5f]       ; 005129c1 | DOUBLE_00636d5f
    FNSTSW AX                           ; 005129c7
    SAHF                                ; 005129c9
    JA 0x005129e5                       ; 005129ca
        ;   XREF to: 005129e5 (CONDITIONAL_JUMP)  ; LAB_005129e5
    FLD float ptr [ESP + 0x18]          ; 005129cc
    FCOMP double ptr [0x00636d67]       ; 005129d0 | DOUBLE_00636d67
    FNSTSW AX                           ; 005129d6
    SAHF                                ; 005129d8
    JBE 0x0051296e                      ; 005129d9
        ;   XREF to: 0051296e (CONDITIONAL_JUMP)  ; LAB_0051296e
    MOV dword ptr [ESP + 0x18],0x3f800000 ; 005129db
    JMP 0x0051296e                      ; 005129e3
        ;   XREF to: 0051296e (UNCONDITIONAL_JUMP)  ; LAB_0051296e
    XOR ESI,ESI                         ; 005129e5
        ;   Label: LAB_005129e5
    PUSH ESI                            ; 005129e7
    PUSH 0x2                            ; 005129e8
    MOV dword ptr [ESP + 0x20],ESI      ; 005129ea
    JMP 0x00512966                      ; 005129ee
        ;   XREF to: 00512966 (UNCONDITIONAL_JUMP)  ; LAB_00512966
    PUSH 0x1                            ; 005129f3
        ;   Label: LAB_005129f3
    PUSH 0x2                            ; 005129f5
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005129f7
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 005129fc
    MOV dword ptr [ESP + 0x18],EDI      ; 005129ff
    JMP 0x0051296e                      ; 00512a03
        ;   XREF to: 0051296e (UNCONDITIONAL_JUMP)  ; LAB_0051296e
    PUSH 0x1                            ; 00512a08
        ;   Label: caseD_3
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 00512a0a
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0xa38],EAX     ; 00512a0f
    FLD float ptr [ESP + 0xa38]         ; 00512a16
    FDIV float ptr [0x00661330]         ; 00512a1d | FLOAT_00661330
    ADD ESP,0x4                         ; 00512a23
    MOV EAX,[0x02f26cac]                ; 00512a26 | g_MenuLeftRightPressed
    FSTP float ptr [ESP + 0x20]         ; 00512a2b
    CMP EAX,0x1                         ; 00512a2f
    JNZ 0x00512ab4                      ; 00512a32
        ;   XREF to: 00512ab4 (CONDITIONAL_JUMP)  ; LAB_00512ab4
    PUSH EAX                            ; 00512a38
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 00512a39
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 00512a3e
    TEST EAX,EAX                        ; 00512a41
    JZ 0x00512a8e                       ; 00512a43
        ;   XREF to: 00512a8e (CONDITIONAL_JUMP)  ; LAB_00512a8e
    FLD float ptr [ESP + 0x20]          ; 00512a45
    FADD float ptr [0x00636d6f]         ; 00512a49 | FLOAT_00636d6f
    FST float ptr [ESP + 0x20]          ; 00512a4f
    FCOMP double ptr [0x00636d77]       ; 00512a53 | DOUBLE_00636d77
    FNSTSW AX                           ; 00512a59
    SAHF                                ; 00512a5b
    JNC 0x00512a6f                      ; 00512a5c
        ;   XREF to: 00512a6f (CONDITIONAL_JUMP)  ; LAB_00512a6f
    XOR EDX,EDX                         ; 00512a5e
    PUSH EDX                            ; 00512a60
    PUSH 0x1                            ; 00512a61
    MOV dword ptr [ESP + 0x28],EDX      ; 00512a63
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 00512a67
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
        ;   Label: LAB_00512a67
    ADD ESP,0x8                         ; 00512a6c
    FLD float ptr [ESP + 0x20]          ; 00512a6f
        ;   Label: LAB_00512a6f
    FMUL float ptr [0x00661330]         ; 00512a73 | FLOAT_00661330
    SUB ESP,0x4                         ; 00512a79
    FSTP float ptr [ESP]                ; 00512a7c
    PUSH 0x1                            ; 00512a7f
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 00512a81
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
    ADD ESP,0x8                         ; 00512a86
    JMP 0x005126fd                      ; 00512a89
        ;   XREF to: 005126fd (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00512a8e
        ;   Label: LAB_00512a8e
    PUSH 0x1                            ; 00512a90
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 00512a92
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 00512a97
    MOV EDI,dword ptr [0x00681ef8]      ; 00512a9a | g_CSoundPtr
    PUSH EDI                            ; 00512aa0 | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 00512aa1
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
    MOV EAX,0x3f800000                  ; 00512aa6
    ADD ESP,0x4                         ; 00512aab
    MOV dword ptr [ESP + 0x20],EAX      ; 00512aae
    JMP 0x00512a6f                      ; 00512ab2
        ;   XREF to: 00512a6f (UNCONDITIONAL_JUMP)  ; LAB_00512a6f
    PUSH 0x1                            ; 00512ab4
        ;   Label: LAB_00512ab4
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 00512ab6
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 00512abb
    TEST EAX,EAX                        ; 00512abe
    JZ 0x00512b09                       ; 00512ac0
        ;   XREF to: 00512b09 (CONDITIONAL_JUMP)  ; LAB_00512b09
    FLD float ptr [ESP + 0x20]          ; 00512ac2
    FADD float ptr [0x00636d57]         ; 00512ac6 | FLOAT_00636d57
    FST float ptr [ESP + 0x20]          ; 00512acc
    FST double ptr [ESP + 0x10]         ; 00512ad0
    FCOMP double ptr [0x00636d5f]       ; 00512ad4 | DOUBLE_00636d5f
    FNSTSW AX                           ; 00512ada
    SAHF                                ; 00512adc
    JA 0x00512afb                       ; 00512add
        ;   XREF to: 00512afb (CONDITIONAL_JUMP)  ; LAB_00512afb
    FLD double ptr [ESP + 0x10]         ; 00512adf
    FCOMP double ptr [0x00636d67]       ; 00512ae3 | DOUBLE_00636d67
    FNSTSW AX                           ; 00512ae9
    SAHF                                ; 00512aeb
    JBE 0x00512a6f                      ; 00512aec
        ;   XREF to: 00512a6f (CONDITIONAL_JUMP)  ; LAB_00512a6f
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 00512aee
    JMP 0x00512a6f                      ; 00512af6
        ;   XREF to: 00512a6f (UNCONDITIONAL_JUMP)  ; LAB_00512a6f
    XOR ESI,ESI                         ; 00512afb
        ;   Label: LAB_00512afb
    PUSH ESI                            ; 00512afd
    PUSH 0x1                            ; 00512afe
    MOV dword ptr [ESP + 0x28],ESI      ; 00512b00
    JMP 0x00512a67                      ; 00512b04
        ;   XREF to: 00512a67 (UNCONDITIONAL_JUMP)  ; LAB_00512a67
    PUSH 0x1                            ; 00512b09
        ;   Label: LAB_00512b09
    PUSH 0x1                            ; 00512b0b
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 00512b0d
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 00512b12
    MOV EDX,dword ptr [0x00681ef8]      ; 00512b15 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 00512b1b | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 00512b1c
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
    ADD ESP,0x4                         ; 00512b21
    MOV dword ptr [ESP + 0x20],EDI      ; 00512b24
    JMP 0x00512a6f                      ; 00512b28
        ;   XREF to: 00512a6f (UNCONDITIONAL_JUMP)  ; LAB_00512a6f
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260 ; 00512b2d
        ;   XREF to: 005ab260 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260()
        ;   Label: caseD_4
    MOV ESI,dword ptr [0x02f26cac]      ; 00512b32 | g_MenuLeftRightPressed
    MOV EBX,EAX                         ; 00512b38
    CMP ESI,0x1                         ; 00512b3a
    JNZ 0x00512b95                      ; 00512b3d
        ;   XREF to: 00512b95 (CONDITIONAL_JUMP)  ; LAB_00512b95
    CMP EAX,0x5622                      ; 00512b3f
    JNZ 0x00512b80                      ; 00512b44
        ;   XREF to: 00512b80 (CONDITIONAL_JUMP)  ; LAB_00512b80
    MOV EBX,0x2b2a                      ; 00512b46
        ;   Label: LAB_00512b46
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 00512b4b
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
        ;   Label: LAB_00512b4b
    TEST EAX,EAX                        ; 00512b50
    JZ 0x00512b59                       ; 00512b52
        ;   XREF to: 00512b59 (CONDITIONAL_JUMP)  ; LAB_00512b59
    MOV EBX,0xac44                      ; 00512b54
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260 ; 00512b59
        ;   XREF to: 005ab260 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260()
        ;   Label: LAB_00512b59
    CMP EBX,EAX                         ; 00512b5e
    JZ 0x005126fd                       ; 00512b60
        ;   XREF to: 005126fd (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00512b66
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    PUSH EBX                            ; 00512b6b
    CALL sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0 ; 00512b6c
        ;   XREF to: 005ab2c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate)
    ADD ESP,0x4                         ; 00512b71
    MOV EDI,dword ptr [0x00681ef8]      ; 00512b74 | g_CSoundPtr
    PUSH EDI                            ; 00512b7a | g_CSoundInstance
    JMP 0x005126f5                      ; 00512b7b
        ;   XREF to: 005126f5 (UNCONDITIONAL_JUMP)  ; LAB_005126f5
    CMP EAX,0xac44                      ; 00512b80
        ;   Label: LAB_00512b80
    JNZ 0x00512b8e                      ; 00512b85
        ;   XREF to: 00512b8e (CONDITIONAL_JUMP)  ; LAB_00512b8e
    MOV EBX,0x5622                      ; 00512b87
    JMP 0x00512b4b                      ; 00512b8c
        ;   XREF to: 00512b4b (UNCONDITIONAL_JUMP)  ; LAB_00512b4b
    MOV EBX,0xac44                      ; 00512b8e
        ;   Label: LAB_00512b8e
    JMP 0x00512b4b                      ; 00512b93
        ;   XREF to: 00512b4b (UNCONDITIONAL_JUMP)  ; LAB_00512b4b
    CMP EAX,0x5622                      ; 00512b95
        ;   Label: LAB_00512b95
    JGE 0x00512ba3                      ; 00512b9a
        ;   XREF to: 00512ba3 (CONDITIONAL_JUMP)  ; LAB_00512ba3
    MOV EBX,0x5622                      ; 00512b9c
    JMP 0x00512b4b                      ; 00512ba1
        ;   XREF to: 00512b4b (UNCONDITIONAL_JUMP)  ; LAB_00512b4b
    CMP EAX,0xac44                      ; 00512ba3
        ;   Label: LAB_00512ba3
    JGE 0x00512b46                      ; 00512ba8
        ;   XREF to: 00512b46 (CONDITIONAL_JUMP)  ; LAB_00512b46
    MOV EBX,0xac44                      ; 00512baa
    JMP 0x00512b4b                      ; 00512baf
        ;   XREF to: 00512b4b (UNCONDITIONAL_JUMP)  ; LAB_00512b4b
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250 ; 00512bb1
        ;   XREF to: 005ab250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250()
        ;   Label: caseD_5
    CMP EAX,0x10                        ; 00512bb6
    JNZ 0x00512bf5                      ; 00512bb9
        ;   XREF to: 00512bf5 (CONDITIONAL_JUMP)  ; LAB_00512bf5
    MOV EBX,0x8                         ; 00512bbb
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 00512bc0
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
        ;   Label: LAB_00512bc0
    TEST EAX,EAX                        ; 00512bc5
    JZ 0x00512bce                       ; 00512bc7
        ;   XREF to: 00512bce (CONDITIONAL_JUMP)  ; LAB_00512bce
    MOV EBX,0x10                        ; 00512bc9
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250 ; 00512bce
        ;   XREF to: 005ab250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250()
        ;   Label: LAB_00512bce
    CMP EBX,EAX                         ; 00512bd3
    JZ 0x005126fd                       ; 00512bd5
        ;   XREF to: 005126fd (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00512bdb
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    PUSH EBX                            ; 00512be0
    CALL sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280 ; 00512be1
        ;   XREF to: 005ab280 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280(int bit_depth)
    ADD ESP,0x4                         ; 00512be6
    MOV ECX,dword ptr [0x00681ef8]      ; 00512be9 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 00512bef | g_CSoundInstance
    JMP 0x005126f5                      ; 00512bf0
        ;   XREF to: 005126f5 (UNCONDITIONAL_JUMP)  ; LAB_005126f5
    MOV EBX,0x10                        ; 00512bf5
        ;   Label: LAB_00512bf5
    JMP 0x00512bc0                      ; 00512bfa
        ;   XREF to: 00512bc0 (UNCONDITIONAL_JUMP)  ; LAB_00512bc0
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270 ; 00512bfc
        ;   XREF to: 005ab270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270()
        ;   Label: caseD_6
    CMP EAX,0x1                         ; 00512c01
    SETZ AL                             ; 00512c04
    AND EAX,0xff                        ; 00512c07
    LEA EBX,[EAX + 0x1]                 ; 00512c0c
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 00512c0f
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
    TEST EAX,EAX                        ; 00512c14
    JZ 0x00512c1d                       ; 00512c16
        ;   XREF to: 00512c1d (CONDITIONAL_JUMP)  ; LAB_00512c1d
    MOV EBX,0x2                         ; 00512c18
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270 ; 00512c1d
        ;   XREF to: 005ab270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270()
        ;   Label: LAB_00512c1d
    CMP EBX,EAX                         ; 00512c22
    JZ 0x005126fd                       ; 00512c24
        ;   XREF to: 005126fd (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00512c2a
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    PUSH EBX                            ; 00512c2f
    CALL sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0 ; 00512c30
        ;   XREF to: 005ab2a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0(int channel_count)
    ADD ESP,0x4                         ; 00512c35
    MOV EDX,dword ptr [0x00681ef8]      ; 00512c38 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 00512c3e | g_CSoundInstance
    JMP 0x005126f5                      ; 00512c3f
        ;   XREF to: 005126f5 (UNCONDITIONAL_JUMP)  ; LAB_005126f5
    LEA EAX,[ESP + 0x28]                ; 00512c44
        ;   Label: caseD_7
    PUSH EAX                            ; 00512c48
    XOR EBX,EBX                         ; 00512c49
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00512c4b
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00512c50
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 ; 00512c53
        ;   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0()
        ;   Label: LAB_00512c53
    CMP EBX,EAX                         ; 00512c58
    JGE 0x00512c85                      ; 00512c5a
        ;   XREF to: 00512c85 (CONDITIONAL_JUMP)  ; LAB_00512c85
    LEA EAX,[ESP + 0x4e8]               ; 00512c5c
    PUSH EAX                            ; 00512c63
    PUSH EBX                            ; 00512c64
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 00512c65
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00512c6a
    LEA EAX,[ESP + 0x4e8]               ; 00512c6d
    PUSH EAX                            ; 00512c74
    LEA EAX,[ESP + 0x2c]                ; 00512c75
    PUSH EAX                            ; 00512c79
    INC EBX                             ; 00512c7a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00512c7b
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00512c80
    JMP 0x00512c53                      ; 00512c83
        ;   XREF to: 00512c53 (UNCONDITIONAL_JUMP)  ; LAB_00512c53
    PUSH 0x0                            ; 00512c85
        ;   Label: LAB_00512c85
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0 ; 00512c87
        ;   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0()
    PUSH EAX                            ; 00512c8c
    PUSH 0x636d28                       ; 00512c8d | = "Select sound device"
    LEA EAX,[ESP + 0x34]                ; 00512c92
    PUSH EAX                            ; 00512c96
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00512c97
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    MOV EBX,EAX                         ; 00512c9c
    ADD ESP,0x10                        ; 00512c9e
    TEST EAX,EAX                        ; 00512ca1
    JL 0x00512ce1                       ; 00512ca3
        ;   XREF to: 00512ce1 (CONDITIONAL_JUMP)  ; LAB_00512ce1
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 ; 00512ca5
        ;   XREF to: 005ab660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005ab660()
    PUSH EBX                            ; 00512caa
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 ; 00512cab
        ;   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0(int device_id)
    ADD ESP,0x4                         ; 00512cb0
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 ; 00512cb3
        ;   XREF to: 005ab5b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0()
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 00512cb8
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
    TEST EAX,EAX                        ; 00512cbd
    JZ 0x00512cd2                       ; 00512cbf
        ;   XREF to: 00512cd2 (CONDITIONAL_JUMP)  ; LAB_00512cd2
    PUSH 0xac44                         ; 00512cc1
    PUSH 0x2                            ; 00512cc6
    PUSH 0x10                           ; 00512cc8
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 ; 00512cca
        ;   XREF to: 005ab170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00512ccf
    MOV EDX,dword ptr [0x00681ef8]      ; 00512cd2 | g_CSoundInstance | g_CSoundPtr
        ;   Label: LAB_00512cd2
    PUSH EDX                            ; 00512cd8 | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 00512cd9
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
    ADD ESP,0x4                         ; 00512cde
    PUSH 0x0                            ; 00512ce1
        ;   Label: LAB_00512ce1
    LEA EAX,[ESP + 0x2c]                ; 00512ce3
    PUSH EAX                            ; 00512ce7
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00512ce8
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00512ced
    JMP 0x005126fd                      ; 00512cf0
        ;   XREF to: 005126fd (UNCONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 ; 00512cf5
        ;   XREF to: 005ab660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005ab660()
        ;   Label: caseD_8
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590 ; 00512cfa
        ;   XREF to: 005ab590 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590()
    TEST EAX,EAX                        ; 00512cff
    SETZ AL                             ; 00512d01
    AND EAX,0xff                        ; 00512d04
    PUSH EAX                            ; 00512d09
    CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550 ; 00512d0a
        ;   XREF to: 005ab550 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550(int enable)
    ADD ESP,0x4                         ; 00512d0f
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 ; 00512d12
        ;   XREF to: 005ab5b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0()
    JMP 0x005126ef                      ; 00512d17
        ;   XREF to: 005126ef (UNCONDITIONAL_JUMP)  ; LAB_005126ef

