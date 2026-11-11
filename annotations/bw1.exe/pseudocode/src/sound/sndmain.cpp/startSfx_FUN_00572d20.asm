; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_startSfx_FUN_00572d20(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined        Stack[-0x388]:1  local_388
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x188]:1  local_188
; undefined1       Stack[-0x187]:1  local_187
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[20]:
;   core_doc.cpp_FUN_00469550 at 0046bd07
;   core_dracbrid.cpp_FUN_0047d920 at 0047ddd0
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550 at 004aa5a9
;   core_fire.cpp_CFireball_onCollision_FUN_004aee60 at 004aef06
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 at 004c5a2f
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d91d2
;   core_lightgun.cpp_CLightGun_process_FUN_00500d20 at 00500efc
;   core_lightpis.cpp_CLightPis_process_FUN_00502480 at 0050265c
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0 at 00506024
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060 at 005060da
;   ... and 10 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f2c1d
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005f2c32
;   TerminatedCString s_sound_005f30dd
;   undefined4 DAT_005f30e3
;   undefined4 DAT_005f30e7
;   undefined4 DAT_005f30ec
;   undefined4 DAT_005f30f0
;   TerminatedCString s_sound_005f30f5
;   TerminatedCString s_sound_sndmain_cpp_005f30fb
;   TerminatedCString s_Out_of_memory_005f3110
;   TerminatedCString s_sound_005f311f
;   TerminatedCString s_startSfx_can_t_get_sampl_005f3f0f
;   undefined4 DAT_00605b10
;   undefined4 DAT_006232d0
;   undefined4 DAT_01d1d400
;   ... and 20 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_operator_new_FUN_005c0f32
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_dosio.cpp_splitPath_FUN_00479580
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_0052aea0
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_0056e130
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00572250
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572d20
        ;   Label: sound_sndmain.cpp_startSfx_FUN_00572d20
    PUSH ESI                            ; 00572d21
    PUSH EDI                            ; 00572d22
    PUSH EBP                            ; 00572d23
    SUB ESP,0x378                       ; 00572d24
    MOV EBX,dword ptr [0x02c78ff0]      ; 00572d2a | DAT_02c78ff0
    MOV EDX,dword ptr [ESP + 0x38c]     ; 00572d30
    TEST EDX,EDX                        ; 00572d37
    JZ 0x00572d40                       ; 00572d39
        ;   XREF to: 00572d40 (CONDITIONAL_JUMP)  ; LAB_00572d40
    CMP byte ptr [EDX],0x0              ; 00572d3b
    JNZ 0x00572d53                      ; 00572d3e
        ;   XREF to: 00572d53 (CONDITIONAL_JUMP)  ; LAB_00572d53
    XOR EAX,EAX                         ; 00572d40
        ;   Label: LAB_00572d40
    MOV EBX,dword ptr [0x02c78ff0]      ; 00572d42 | DAT_02c78ff0
        ;   Label: LAB_00572d42
    ADD ESP,0x378                       ; 00572d48
    POP EBP                             ; 00572d4e
    POP EDI                             ; 00572d4f
    POP ESI                             ; 00572d50
    POP EBX                             ; 00572d51
    RET                                 ; 00572d52
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00575550 ; 00572d53
        ;   XREF to: 00575550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00575550()
        ;   Label: LAB_00572d53
    TEST EAX,EAX                        ; 00572d58
    JZ 0x00572d42                       ; 00572d5a
        ;   XREF to: 00572d42 (CONDITIONAL_JUMP)  ; LAB_00572d42
    LEA EAX,[ESP + 0x300]               ; 00572d5c
    PUSH EAX                            ; 00572d63
    CALL sound_sndmain.cpp_FUN_005726e0 ; 00572d64
        ;   XREF to: 005726e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005726e0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 00572d69
    LEA EDI,[ESP + 0x200]               ; 00572d6c
    MOV ESI,dword ptr [ESP + 0x38c]     ; 00572d73
    PUSH EDI                            ; 00572d7a
    MOV AL,byte ptr [ESI]               ; 00572d7b
        ;   Label: LAB_00572d7b
    MOV byte ptr [EDI],AL               ; 00572d7d
    CMP AL,0x0                          ; 00572d7f
    JZ 0x00572d93                       ; 00572d81
        ;   XREF to: 00572d93 (CONDITIONAL_JUMP)  ; LAB_00572d93
    MOV AL,byte ptr [ESI + 0x1]         ; 00572d83
    ADD ESI,0x2                         ; 00572d86
    MOV byte ptr [EDI + 0x1],AL         ; 00572d89
    ADD EDI,0x2                         ; 00572d8c
    CMP AL,0x0                          ; 00572d8f
    JNZ 0x00572d7b                      ; 00572d91
        ;   XREF to: 00572d7b (CONDITIONAL_JUMP)  ; LAB_00572d7b
    POP EDI                             ; 00572d93
        ;   Label: LAB_00572d93
    MOV ESI,dword ptr [0x02c78cec]      ; 00572d94 | DAT_02c78cec
    LEA EAX,[ESI*0x4 + 0x0]             ; 00572d9a
    SUB EAX,ESI                         ; 00572da1
    MOV ECX,0x18                        ; 00572da3
    SHL EAX,0x5                         ; 00572da8
    LEA EDI,[ESP + 0x300]               ; 00572dab
    LEA ESI,[EAX + 0x2c78cf0]           ; 00572db2
    MOVSD.REP ES:EDI,ESI                ; 00572db8
    MOV ECX,dword ptr [ESP + 0x300]     ; 00572dba
    PUSH ECX                            ; 00572dc1
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0 ; 00572dc2
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)
    ADD ESP,0x4                         ; 00572dc7
    TEST EAX,EAX                        ; 00572dca
    JZ 0x00572d42                       ; 00572dcc
        ;   XREF to: 00572d42 (CONDITIONAL_JUMP)  ; LAB_00572d42
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00572dd2
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    CMP dword ptr [0x02c807ec],0x0      ; 00572dd7 | DAT_02c807ec
    JLE 0x00572fb9                      ; 00572dde
        ;   XREF to: 00572fb9 (CONDITIONAL_JUMP)  ; LAB_00572fb9
    MOV EDX,dword ptr [0x02c74650]      ; 00572de4 | DAT_02c74650
        ;   Label: LAB_00572de4
    MOV EBX,dword ptr [0x02c78ff0]      ; 00572dea | DAT_02c78ff0
    XOR EAX,EAX                         ; 00572df0
    XOR ESI,ESI                         ; 00572df2
    TEST EDX,EDX                        ; 00572df4
    JZ 0x00572e12                       ; 00572df6
        ;   XREF to: 00572e12 (CONDITIONAL_JUMP)  ; LAB_00572e12
    ADD EAX,0x11c                       ; 00572df8
        ;   Label: LAB_00572df8
    INC ESI                             ; 00572dfd
    CMP EAX,0x4700                      ; 00572dfe
    JGE 0x00572fe1                      ; 00572e03
        ;   XREF to: 00572fe1 (CONDITIONAL_JUMP)  ; LAB_00572fe1
    CMP dword ptr [EAX + 0x2c74650],0x0 ; 00572e09 | DAT_02c7476c
    JNZ 0x00572df8                      ; 00572e10
        ;   XREF to: 00572df8 (CONDITIONAL_JUMP)  ; LAB_00572df8
    MOV dword ptr [ESP + 0x364],ESI     ; 00572e12
        ;   Label: LAB_00572e12
    MOV dword ptr [0x02c78ff0],EBX      ; 00572e19 | DAT_02c78ff0
    TEST ESI,ESI                        ; 00572e1f
    JL 0x00572fa1                       ; 00572e21
        ;   XREF to: 00572fa1 (CONDITIONAL_JUMP)  ; LAB_00572fa1
    LEA EAX,[ESI*0x8 + 0x0]             ; 00572e27
    ADD EAX,ESI                         ; 00572e2e
    SHL EAX,0x3                         ; 00572e30
    SUB EAX,ESI                         ; 00572e33
    MOV EBP,0x2c745ec                   ; 00572e35
    SHL EAX,0x2                         ; 00572e3a
    MOV ECX,0x18                        ; 00572e3d
    ADD EBP,EAX                         ; 00572e42
    LEA ESI,[ESP + 0x300]               ; 00572e44
    MOV EDI,EBP                         ; 00572e4b
    MOV EAX,dword ptr [ESP + 0x38c]     ; 00572e4d
    MOVSD.REP ES:EDI,ESI                ; 00572e54 | DAT_02c74708 | g_CMP3DecoderInstanceOther.synthesis_history[1][28][14]
    MOV dword ptr [ESP + 0x36c],EAX     ; 00572e56
    MOV ESI,0x2c78ff4                   ; 00572e5d
    XOR EDI,EDI                         ; 00572e62
    MOV EAX,dword ptr [ESP + 0x36c]     ; 00572e64
        ;   Label: LAB_00572e64
    PUSH EAX                            ; 00572e6b
    PUSH ESI                            ; 00572e6c
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00572e6d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00572e72
    TEST EAX,EAX                        ; 00572e75
    JNZ 0x00572feb                      ; 00572e77
        ;   XREF to: 00572feb (CONDITIONAL_JUMP)  ; LAB_00572feb
    TEST ESI,ESI                        ; 00572e7d
    JZ 0x00572ffb                       ; 00572e7f
        ;   XREF to: 00572ffb (CONDITIONAL_JUMP)  ; LAB_00572ffb
    MOV dword ptr [EBP + 0x68],ESI      ; 00572e85
    MOV ESI,dword ptr [EBP + 0x68]      ; 00572e88
        ;   Label: LAB_00572e88
    TEST ESI,ESI                        ; 00572e8b
    JZ 0x00573450                       ; 00572e8d
        ;   XREF to: 00573450 (CONDITIONAL_JUMP)  ; LAB_00573450
    MOV EDI,dword ptr [ESI + 0x154]     ; 00572e93 | g_SfxSamples[0].ref_count
    INC EDI                             ; 00572e99
    PUSH EBP                            ; 00572e9a | DAT_02c74708
    MOV dword ptr [ESI + 0x154],EDI     ; 00572e9b | g_SfxSamples[0].ref_count
    CALL sound_sndmain.cpp_CSfxSlot_seek_FUN_00572250 ; 00572ea1
        ;   XREF to: 00572250 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_seek_FUN_00572250(CSfxSlot * this_ptr)
    MOV dword ptr [EBP + 0x108],0x0     ; 00572ea6
    FLD float ptr [EBP + 0x38]          ; 00572eb0
    MOV dword ptr [EBP + 0x100],0xbf800000 ; 00572eb3
    ADD ESP,0x4                         ; 00572ebd
    MOV dword ptr [EBP + 0x104],0x0     ; 00572ec0
    MOV EAX,EBP                         ; 00572eca
    FSTP float ptr [EBP + 0xfc]         ; 00572ecc
    LEA ESI,[EBP + 0x20]                ; 00572ed2
    ADD EAX,0x4                         ; 00572ed5
        ;   Label: LAB_00572ed5
    MOV dword ptr [EAX + 0xcc],0xffffffff ; 00572ed8
    CMP EAX,ESI                         ; 00572ee2
    JNZ 0x00572ed5                      ; 00572ee4
        ;   XREF to: 00572ed5 (CONDITIONAL_JUMP)  ; LAB_00572ed5
    MOV EAX,dword ptr [EBP + 0x68]      ; 00572ee6
    FLD float ptr [EAX + 0x114]         ; 00572ee9 | g_SfxSamples[0].sample_info.reference_distance
    MOV EAX,dword ptr [EBP + 0x68]      ; 00572eef
    FSTP float ptr [EBP + 0xf0]         ; 00572ef2
    FLD float ptr [EAX + 0x118]         ; 00572ef8 | g_SfxSamples[0].sample_info.reference_volume_distance
    MOV EAX,dword ptr [EBP + 0x68]      ; 00572efe
    FSTP float ptr [EBP + 0xf4]         ; 00572f01
    FLD float ptr [EAX + 0x11c]         ; 00572f07 | g_SfxSamples[0].sample_info.max_distance
    MOV EAX,[0x006232d0]                ; 00572f0d | DAT_006232d0
    FSTP float ptr [EBP + 0xf8]         ; 00572f12
    INC EAX                             ; 00572f18
    MOV dword ptr [EBP + 0x118],0xffffffff ; 00572f19 | DAT_02c74820
    MOV [0x006232d0],EAX                ; 00572f23 | DAT_006232d0
    CMP EAX,0xffffff                    ; 00572f28
    JL 0x00572f39                       ; 00572f2d
        ;   XREF to: 00572f39 (CONDITIONAL_JUMP)  ; LAB_00572f39
    MOV dword ptr [0x006232d0],0x1      ; 00572f2f | DAT_006232d0
    PUSH 0x4479c000                     ; 00572f39
        ;   Label: LAB_00572f39
    PUSH 0x4479c000                     ; 00572f3e
    MOV EDI,dword ptr [EBP + 0x68]      ; 00572f43
    MOV ESI,dword ptr [0x006232d0]      ; 00572f46 | DAT_006232d0
    PUSH EDI                            ; 00572f4c
    MOV dword ptr [EBP + 0x64],ESI      ; 00572f4d | DAT_02c7476c
    CALL sound_sndmain.cpp_FUN_00570460 ; 00572f50
        ;   XREF to: 00570460 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00570460()
    ADD ESP,0xc                         ; 00572f55
    TEST EAX,EAX                        ; 00572f58
    JZ 0x00572f98                       ; 00572f5a
        ;   XREF to: 00572f98 (CONDITIONAL_JUMP)  ; LAB_00572f98
    PUSH 0x0                            ; 00572f5c
    PUSH EBP                            ; 00572f5e | DAT_02c74708
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 ; 00572f5f
        ;   XREF to: 00570f30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00572f64
    CALL sound_sndmain.cpp_FUN_00575560 ; 00572f67
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00575560(int enable)
    CMP EAX,0x1                         ; 00572f6c
    JL 0x0057346a                       ; 00572f6f
        ;   XREF to: 0057346a (CONDITIONAL_JUMP)  ; LAB_0057346a
    MOV EDX,dword ptr [EBP + 0x68]      ; 00572f75
    MOV ECX,dword ptr [EDX + 0x158]     ; 00572f78 | g_SfxSamples[0].buffer_id
    MOV EAX,[0x02c80650]                ; 00572f7e | DAT_02c80650
    PUSH ECX                            ; 00572f83
    MOV EDI,dword ptr [EAX]             ; 00572f84
    PUSH EAX                            ; 00572f86
    CALL dword ptr [EDI + 0x40]         ; 00572f87
    ADD ESP,0x8                         ; 00572f8a
    MOV dword ptr [EBP + 0x60],EAX      ; 00572f8d | DAT_02c74768
    TEST EAX,EAX                        ; 00572f90
    JNZ 0x0057346a                      ; 00572f92
        ;   XREF to: 0057346a (CONDITIONAL_JUMP)  ; LAB_0057346a
    PUSH EBP                            ; 00572f98 | DAT_02c74708
        ;   Label: LAB_00572f98
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 00572f99
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00572f9e
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00572fa1
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_00572fa1
    XOR EAX,EAX                         ; 00572fa6
    MOV EBX,dword ptr [0x02c78ff0]      ; 00572fa8 | DAT_02c78ff0
    ADD ESP,0x378                       ; 00572fae
    POP EBP                             ; 00572fb4
    POP EDI                             ; 00572fb5
    POP ESI                             ; 00572fb6
    POP EBX                             ; 00572fb7
    RET                                 ; 00572fb8
    MOV EDI,0x5f2c1d                    ; 00572fb9 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00572fb9
    MOV EBP,0x249                       ; 00572fbe
    PUSH 0x5f2c32                       ; 00572fc3 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d1d400],EDI      ; 00572fc8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00572fce | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00572fd4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00572fd9
    JMP 0x00572de4                      ; 00572fdc
        ;   XREF to: 00572de4 (UNCONDITIONAL_JUMP)  ; LAB_00572de4
    MOV ESI,0xffffffff                  ; 00572fe1
        ;   Label: LAB_00572fe1
    JMP 0x00572e12                      ; 00572fe6
        ;   XREF to: 00572e12 (UNCONDITIONAL_JUMP)  ; LAB_00572e12
    INC EDI                             ; 00572feb
        ;   Label: LAB_00572feb
    ADD ESI,0x1b0                       ; 00572fec
    CMP EDI,0x40                        ; 00572ff2
    JL 0x00572e64                       ; 00572ff5
        ;   XREF to: 00572e64 (CONDITIONAL_JUMP)  ; LAB_00572e64
    LEA EAX,[ESP + 0x200]               ; 00572ffb
        ;   Label: LAB_00572ffb
    PUSH EAX                            ; 00573002
    PUSH 0x5f30dd                       ; 00573003 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 00573008
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0057300d
    CMP EAX,0x200000                    ; 00573010
    JLE 0x00573083                      ; 00573015
        ;   XREF to: 00573083 (CONDITIONAL_JUMP)  ; LAB_00573083
    MOV EAX,dword ptr [ESP + 0x364]     ; 00573017
        ;   Label: LAB_00573017
    LEA EDI,[ESP + 0x200]               ; 0057301e
    MOV EBX,dword ptr [0x02c78ff0]      ; 00573025 | DAT_02c78ff0
    XOR ESI,ESI                         ; 0057302b
    MOV dword ptr [ESP + 0x360],EAX     ; 0057302d
    XOR EDX,EDX                         ; 00573034
    INC EBX                             ; 00573036
        ;   Label: LAB_00573036
    CMP EBX,0x40                        ; 00573037
    JL 0x0057303e                       ; 0057303a
        ;   XREF to: 0057303e (CONDITIONAL_JUMP)  ; LAB_0057303e
    MOV EBX,EDX                         ; 0057303c
    IMUL EAX,EBX,0x1b0                  ; 0057303e
        ;   Label: LAB_0057303e
    CMP EDX,dword ptr [EAX + 0x2c79144] ; 00573044 | g_SfxSamples[1].taken
    JZ 0x005730f3                       ; 0057304a
        ;   XREF to: 005730f3 (CONDITIONAL_JUMP)  ; LAB_005730f3
    INC ESI                             ; 00573050
        ;   Label: LAB_00573050
    CMP ESI,0x40                        ; 00573051
    JL 0x00573036                       ; 00573054
        ;   XREF to: 00573036 (CONDITIONAL_JUMP)  ; LAB_00573036
    XOR ESI,ESI                         ; 00573056
    MOV dword ptr [ESP + 0x370],ESI     ; 00573058
    MOV EAX,dword ptr [ESP + 0x370]     ; 0057305f
        ;   Label: LAB_0057305f
    MOV dword ptr [0x02c78ff0],EBX      ; 00573066 | DAT_02c78ff0
    MOV dword ptr [ESP + 0x374],EAX     ; 0057306c
    TEST EAX,EAX                        ; 00573073
    JNZ 0x0057312a                      ; 00573075
        ;   XREF to: 0057312a (CONDITIONAL_JUMP)  ; LAB_0057312a
    MOV dword ptr [EBP + 0x68],EAX      ; 0057307b
    JMP 0x00572e88                      ; 0057307e
        ;   XREF to: 00572e88 (UNCONDITIONAL_JUMP)  ; LAB_00572e88
    LEA EAX,[ESP + 0x100]               ; 00573083
        ;   Label: LAB_00573083
    PUSH EAX                            ; 0057308a
    PUSH 0x0                            ; 0057308b
    PUSH 0x0                            ; 0057308d
    PUSH 0x0                            ; 0057308f
    LEA EAX,[ESP + 0x210]               ; 00573091
    PUSH EAX                            ; 00573098
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 00573099
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0057309e
    PUSH 0x5f30e3                       ; 005730a1 | DAT_005f30e3
    LEA EAX,[ESP + 0x104]               ; 005730a6
    PUSH EAX                            ; 005730ad
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005730ae
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005730b3
    TEST EAX,EAX                        ; 005730b6
    JZ 0x00573017                       ; 005730b8
        ;   XREF to: 00573017 (CONDITIONAL_JUMP)  ; LAB_00573017
    PUSH 0x5f30e7                       ; 005730be | DAT_005f30e7
    LEA EAX,[ESP + 0x104]               ; 005730c3
    PUSH EAX                            ; 005730ca
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005730cb
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005730d0
    TEST EAX,EAX                        ; 005730d3
    JZ 0x00573017                       ; 005730d5
        ;   XREF to: 00573017 (CONDITIONAL_JUMP)  ; LAB_00573017
    LEA EAX,[ESP + 0x200]               ; 005730db
    PUSH EAX                            ; 005730e2
    CALL sound_sndmain.cpp_FUN_0056e830 ; 005730e3
        ;   XREF to: 0056e830 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_FUN_0056e830(char * filename)
    ADD ESP,0x4                         ; 005730e8
    MOV dword ptr [EBP + 0x68],EAX      ; 005730eb
    JMP 0x00572e88                      ; 005730ee
        ;   XREF to: 00572e88 (UNCONDITIONAL_JUMP)  ; LAB_00572e88
    CMP EDX,dword ptr [EAX + 0x2c79148] ; 005730f3 | g_SfxSamples[1].ref_count
        ;   Label: LAB_005730f3
    JNZ 0x00573050                      ; 005730f9
        ;   XREF to: 00573050 (CONDITIONAL_JUMP)  ; LAB_00573050
    CMP EDX,dword ptr [EAX + 0x2c79150] ; 005730ff | g_SfxSamples[1].is_user_sample
    JNZ 0x00573050                      ; 00573105
        ;   XREF to: 00573050 (CONDITIONAL_JUMP)  ; LAB_00573050
    CMP EDX,dword ptr [EAX + 0x2c791a0] ; 0057310b | g_SfxSamples[1].locked_length
    JNZ 0x00573050                      ; 00573111
        ;   XREF to: 00573050 (CONDITIONAL_JUMP)  ; LAB_00573050
    MOV EDX,0x2c78ff4                   ; 00573117
    ADD EDX,EAX                         ; 0057311c
    MOV dword ptr [ESP + 0x370],EDX     ; 0057311e
    JMP 0x0057305f                      ; 00573125
        ;   XREF to: 0057305f (UNCONDITIONAL_JUMP)  ; LAB_0057305f
    MOV EAX,ESP                         ; 0057312a
        ;   Label: LAB_0057312a
    PUSH EAX                            ; 0057312c
    PUSH 0x0                            ; 0057312d
    PUSH 0x0                            ; 0057312f
    PUSH 0x0                            ; 00573131
    PUSH EDI                            ; 00573133
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 00573134
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00573139
    PUSH 0x5f30ec                       ; 0057313c | DAT_005f30ec
    LEA EAX,[ESP + 0x4]                 ; 00573141
    PUSH EAX                            ; 00573145
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00573146
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057314b
    TEST EAX,EAX                        ; 0057314e
    JNZ 0x005732e9                      ; 00573150
        ;   XREF to: 005732e9 (CONDITIONAL_JUMP)  ; LAB_005732e9
    PUSH EDI                            ; 00573156
        ;   Label: LAB_00573156
    PUSH 0x5f30f5                       ; 00573157 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0057315c
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00573161
    TEST EAX,EAX                        ; 00573164
    JLE 0x00573436                      ; 00573166
        ;   XREF to: 00573436 (CONDITIONAL_JUMP)  ; LAB_00573436
    PUSH 0x8630                         ; 0057316c
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00573171
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00573176
    TEST EAX,EAX                        ; 00573179
    JZ 0x00573186                       ; 0057317b
        ;   XREF to: 00573186 (CONDITIONAL_JUMP)  ; LAB_00573186
    PUSH EAX                            ; 0057317d
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40 ; 0057317e
        ;   XREF to: 0052ae40 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00573183
    MOV EDX,dword ptr [ESP + 0x374]     ; 00573186
        ;   Label: LAB_00573186
    MOV dword ptr [EDX + 0x174],EAX     ; 0057318d
    TEST EAX,EAX                        ; 00573193
    JNZ 0x005731ba                      ; 00573195
        ;   XREF to: 005731ba (CONDITIONAL_JUMP)  ; LAB_005731ba
    MOV ECX,0x5f30fb                    ; 00573197 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x461                       ; 0057319c
    PUSH 0x5f3110                       ; 005731a1 | = "Out of memory."
    MOV dword ptr [0x01d1d400],ECX      ; 005731a6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005731ac | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005731b2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005731b7
    MOV EAX,dword ptr [ESP + 0x374]     ; 005731ba
        ;   Label: LAB_005731ba
    PUSH EDI                            ; 005731c1
    MOV EDX,dword ptr [EAX + 0x174]     ; 005731c2
    PUSH EDX                            ; 005731c8
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_0052aea0 ; 005731c9
        ;   XREF to: 0052aea0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_0052aea0(CMP3Decoder * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005731ce
    MOV ESI,EDI                         ; 005731d1
    MOV EDI,dword ptr [ESP + 0x374]     ; 005731d3
    PUSH EDI                            ; 005731da
    MOV AL,byte ptr [ESI]               ; 005731db
        ;   Label: LAB_005731db
    MOV byte ptr [EDI],AL               ; 005731dd
    CMP AL,0x0                          ; 005731df
    JZ 0x005731f3                       ; 005731e1
        ;   XREF to: 005731f3 (CONDITIONAL_JUMP)  ; LAB_005731f3
    MOV AL,byte ptr [ESI + 0x1]         ; 005731e3
    ADD ESI,0x2                         ; 005731e6
    MOV byte ptr [EDI + 0x1],AL         ; 005731e9
    ADD EDI,0x2                         ; 005731ec
    CMP AL,0x0                          ; 005731ef
    JNZ 0x005731db                      ; 005731f1
        ;   XREF to: 005731db (CONDITIONAL_JUMP)  ; LAB_005731db
    POP EDI                             ; 005731f3
        ;   Label: LAB_005731f3
    MOV dword ptr [EDI + 0x100],0x1     ; 005731f4
    MOV EAX,dword ptr [EDI + 0x174]     ; 005731fe
    MOV dword ptr [EDI + 0x104],0x10    ; 00573204
    MOV EAX,dword ptr [EAX + 0x104]     ; 0057320e
    MOV dword ptr [EDI + 0x108],EAX     ; 00573214
    MOV EAX,dword ptr [EDI + 0x174]     ; 0057321a
    MOV EAX,dword ptr [EAX + 0x100]     ; 00573220
    MOV dword ptr [EDI + 0x110],0xffffffff ; 00573226
    PUSH EDI                            ; 00573230
    MOV dword ptr [EDI + 0x10c],EAX     ; 00573231
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_0056e130 ; 00573237
        ;   XREF to: 0056e130 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_0056e130(CSfxSample * this_ptr)
    MOV dword ptr [EDI + 0x150],0x0     ; 0057323c
    FILD dword ptr [EDI + 0x10c]        ; 00573246
    MOV dword ptr [EDI + 0x154],0x0     ; 0057324c
    FMUL float ptr [0x00605b10]         ; 00573256 | DAT_00605b10
    MOV dword ptr [EDI + 0x158],0x0     ; 0057325c
    ADD ESP,0x4                         ; 00573266
    MOV dword ptr [EDI + 0x15c],0x0     ; 00573269
    CALL crt_math.c_round_FUN_005c03a0  ; 00573273
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EDI + 0x164]       ; 00573278
    MOV ESI,dword ptr [EDI + 0x164]     ; 0057327e
    MOV dword ptr [EDI + 0x16c],0x0     ; 00573284
    PUSH ESI                            ; 0057328e
    MOV dword ptr [EDI + 0x170],0x0     ; 0057328f
    MOV EAX,dword ptr [ESP + 0x364]     ; 00573299
    PUSH EDI                            ; 005732a0
    MOV dword ptr [EDI + 0x160],EAX     ; 005732a1
    CALL sound_sndmain.cpp_FUN_00572400 ; 005732a7
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    ADD ESP,0x8                         ; 005732ac
    PUSH EDI                            ; 005732af
    MOV dword ptr [EDI + 0x168],EAX     ; 005732b0
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0 ; 005732b6
        ;   XREF to: 0056feb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005732bb
    TEST EAX,EAX                        ; 005732be
    JZ 0x00573436                       ; 005732c0
        ;   XREF to: 00573436 (CONDITIONAL_JUMP)  ; LAB_00573436
    PUSH 0x0                            ; 005732c6
        ;   Label: LAB_005732c6
    PUSH 0x0                            ; 005732c8
    MOV EDX,dword ptr [ESP + 0x37c]     ; 005732ca
    PUSH EDX                            ; 005732d1
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0 ; 005732d2
        ;   XREF to: 005702c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 005732d7
    MOV EAX,dword ptr [ESP + 0x374]     ; 005732da
    MOV dword ptr [EBP + 0x68],EAX      ; 005732e1
    JMP 0x00572e88                      ; 005732e4
        ;   XREF to: 00572e88 (UNCONDITIONAL_JUMP)  ; LAB_00572e88
    PUSH 0x5f30f0                       ; 005732e9 | DAT_005f30f0
        ;   Label: LAB_005732e9
    LEA EAX,[ESP + 0x4]                 ; 005732ee
    PUSH EAX                            ; 005732f2
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005732f3
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005732f8
    TEST EAX,EAX                        ; 005732fb
    JZ 0x00573156                       ; 005732fd
        ;   XREF to: 00573156 (CONDITIONAL_JUMP)  ; LAB_00573156
    PUSH 0x1                            ; 00573303
    PUSH EDI                            ; 00573305
    MOV EAX,dword ptr [ESP + 0x378]     ; 00573306
    PUSH 0x5f311f                       ; 0057330d | = "sound"
    ADD EAX,0x17c                       ; 00573312
    PUSH EAX                            ; 00573317
    MOV dword ptr [ESP + 0x378],EAX     ; 00573318
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 0057331f
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00573324
    TEST EAX,EAX                        ; 00573327
    JZ 0x00573436                       ; 00573329
        ;   XREF to: 00573436 (CONDITIONAL_JUMP)  ; LAB_00573436
    MOV ESI,EDI                         ; 0057332f
    MOV EDI,dword ptr [ESP + 0x370]     ; 00573331
    MOV ECX,dword ptr [ESP + 0x368]     ; 00573338
    PUSH EDI                            ; 0057333f
    MOV AL,byte ptr [ESI]               ; 00573340
        ;   Label: LAB_00573340
    MOV byte ptr [EDI],AL               ; 00573342
    CMP AL,0x0                          ; 00573344
    JZ 0x00573358                       ; 00573346
        ;   XREF to: 00573358 (CONDITIONAL_JUMP)  ; LAB_00573358
    MOV AL,byte ptr [ESI + 0x1]         ; 00573348
    ADD ESI,0x2                         ; 0057334b
    MOV byte ptr [EDI + 0x1],AL         ; 0057334e
    ADD EDI,0x2                         ; 00573351
    CMP AL,0x0                          ; 00573354
    JNZ 0x00573340                      ; 00573356
        ;   XREF to: 00573340 (CONDITIONAL_JUMP)  ; LAB_00573340
    POP EDI                             ; 00573358
        ;   Label: LAB_00573358
    PUSH ECX                            ; 00573359
    CALL unkaddr_0059f520.cpp_CInStreamFile_tell_FUN_005a0d50 ; 0057335a
        ;   XREF to: 005a0d50 (UNCONDITIONAL_CALL)  ; undefined4 unkaddr_0059f520.cpp_CInStreamFile_tell_FUN_005a0d50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0057335f
    PUSH EDI                            ; 00573362
    MOV dword ptr [EDI + 0x178],EAX     ; 00573363
    LEA EAX,[EDI + 0x178]               ; 00573369
    PUSH EAX                            ; 0057336f
    MOV EDI,dword ptr [ESP + 0x370]     ; 00573370
    PUSH EDI                            ; 00573377
    CALL sound_sndmain.cpp_FUN_0056db10 ; 00573378
        ;   XREF to: 0056db10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0056db10()
    ADD ESP,0xc                         ; 0057337d
    TEST EAX,EAX                        ; 00573380
    JZ 0x00573436                       ; 00573382
        ;   XREF to: 00573436 (CONDITIONAL_JUMP)  ; LAB_00573436
    MOV EAX,dword ptr [ESP + 0x370]     ; 00573388
    PUSH EAX                            ; 0057338f
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_0056e130 ; 00573390
        ;   XREF to: 0056e130 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_0056e130(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00573395
    MOV EAX,dword ptr [ESP + 0x370]     ; 00573398
    MOV dword ptr [EAX + 0x150],0x0     ; 0057339f
    FILD dword ptr [EAX + 0x10c]        ; 005733a9
    MOV dword ptr [EAX + 0x154],0x0     ; 005733af
    FMUL float ptr [0x00605b10]         ; 005733b9 | DAT_00605b10
    MOV dword ptr [EAX + 0x158],0x0     ; 005733bf
    MOV EDX,dword ptr [ESP + 0x370]     ; 005733c9
    MOV dword ptr [EAX + 0x15c],0x0     ; 005733d0
    CALL crt_math.c_round_FUN_005c03a0  ; 005733da
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX + 0x164]       ; 005733df
    MOV dword ptr [EDX + 0x16c],0x0     ; 005733e5
    MOV EAX,dword ptr [ESP + 0x360]     ; 005733ef
    MOV dword ptr [EDX + 0x170],0x0     ; 005733f6
    MOV dword ptr [EDX + 0x160],EAX     ; 00573400
    MOV ECX,EDX                         ; 00573406
    MOV EDX,dword ptr [EDX + 0x164]     ; 00573408
    PUSH EDX                            ; 0057340e
    PUSH ECX                            ; 0057340f
    CALL sound_sndmain.cpp_FUN_00572400 ; 00573410
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    ADD ESP,0x8                         ; 00573415
    MOV EDX,dword ptr [ESP + 0x370]     ; 00573418
    PUSH EDX                            ; 0057341f
    MOV dword ptr [EDX + 0x168],EAX     ; 00573420
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0 ; 00573426
        ;   XREF to: 0056feb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0057342b
    TEST EAX,EAX                        ; 0057342e
    JNZ 0x005732c6                      ; 00573430
        ;   XREF to: 005732c6 (CONDITIONAL_JUMP)  ; LAB_005732c6
    MOV ECX,dword ptr [ESP + 0x374]     ; 00573436
        ;   Label: LAB_00573436
    PUSH ECX                            ; 0057343d
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0057343e
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00573443
    XOR EAX,EAX                         ; 00573446
    MOV dword ptr [EBP + 0x68],EAX      ; 00573448
    JMP 0x00572e88                      ; 0057344b
        ;   XREF to: 00572e88 (UNCONDITIONAL_JUMP)  ; LAB_00572e88
    LEA EAX,[ESP + 0x200]               ; 00573450
        ;   Label: LAB_00573450
    PUSH EAX                            ; 00573457
    PUSH 0x5f3f0f                       ; 00573458 | = "startSfx - can't get sample %s\n"
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057345d
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x8                         ; 00573462
    JMP 0x00572f98                      ; 00573465
        ;   XREF to: 00572f98 (UNCONDITIONAL_JUMP)  ; LAB_00572f98
    CALL sound_sndmain.cpp_FUN_00573e70 ; 0057346a
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_0057346a
    MOV EAX,ESI                         ; 0057346f
    MOV EBP,dword ptr [ESP + 0x364]     ; 00573471
    SHL EAX,0x6                         ; 00573478
    OR EAX,EBP                          ; 0057347b
    MOV EBX,dword ptr [0x02c78ff0]      ; 0057347d | DAT_02c78ff0
    ADD ESP,0x378                       ; 00573483
    POP EBP                             ; 00573489
    POP EDI                             ; 0057348a
    POP ESI                             ; 0057348b
    POP EBX                             ; 0057348c
    RET                                 ; 0057348d

