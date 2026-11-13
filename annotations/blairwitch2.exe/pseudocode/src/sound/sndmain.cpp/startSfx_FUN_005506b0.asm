; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_startSfx_FUN_005506b0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined        Stack[-0x274]:1  local_274
; undefined        Stack[-0x174]:1  local_174
; undefined1       Stack[-0x173]:1  local_173
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[16]:
;   core_doc.cpp_FUN_00450c60 at 00453176
;   core_dracbrid.cpp_FUN_00465400 at 004658b0
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0 at 00491c39
;   core_fire.cpp_CFireball_onCollision_FUN_004964c0 at 00496566
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 at 004aca7f
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be82d
;   core_lightgun.cpp_CLightGun_process_FUN_004e38d0 at 004e3aac
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220 at 004e7384
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0 at 004e743a
;   core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20 at 004e6c13
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e7a23
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005e7a38
;   TerminatedCString s_sound_005e7ee3
;   undefined4 DAT_005e7ee9
;   undefined4 DAT_005e7eed
;   TerminatedCString s_startSfx_can_t_get_sampl_005e8d15
;   undefined4 DAT_0061bc80
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CMP3DecoderInstanceOther.synthesis_history[1][28][14]
;   undefined4 DAT_0263cf80
;   undefined4 DAT_0263d038
;   undefined4 DAT_0263d098
;   undefined4 DAT_0263d09c
;   undefined4 DAT_0263d0a0
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c__stricmp_FUN_005b8130
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_dosio.cpp_splitPath_FUN_00461070
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_00550070
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_0054ddf0
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0
;   sound_sndmain.cpp_getSfxSample_FUN_0054c1c0
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0
;   sound_sndmain.cpp_isSoundBusy_FUN_00552b20
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_0054c7f0
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005506b0
        ;   Label: sound_sndmain.cpp_startSfx_FUN_005506b0
    PUSH ESI                            ; 005506b1
    PUSH EDI                            ; 005506b2
    PUSH EBP                            ; 005506b3
    SUB ESP,0x264                       ; 005506b4
    MOV EDX,dword ptr [ESP + 0x278]     ; 005506ba
    TEST EDX,EDX                        ; 005506c1
    JZ 0x005506ca                       ; 005506c3
        ;   XREF to: 005506ca (CONDITIONAL_JUMP)  ; LAB_005506ca
    CMP byte ptr [EDX],0x0              ; 005506c5
    JNZ 0x005506d7                      ; 005506c8
        ;   XREF to: 005506d7 (CONDITIONAL_JUMP)  ; LAB_005506d7
    XOR EAX,EAX                         ; 005506ca
        ;   Label: LAB_005506ca
    ADD ESP,0x264                       ; 005506cc
        ;   Label: LAB_005506cc
    POP EBP                             ; 005506d2
    POP EDI                             ; 005506d3
    POP ESI                             ; 005506d4
    POP EBX                             ; 005506d5
    RET                                 ; 005506d6
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00552b20 ; 005506d7
        ;   XREF to: 00552b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00552b20()
        ;   Label: LAB_005506d7
    TEST EAX,EAX                        ; 005506dc
    JZ 0x005506cc                       ; 005506de
        ;   XREF to: 005506cc (CONDITIONAL_JUMP)  ; LAB_005506cc
    LEA EAX,[ESP + 0x200]               ; 005506e0
    PUSH EAX                            ; 005506e7
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_00550070 ; 005506e8
        ;   XREF to: 00550070 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_00550070(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 005506ed
    LEA EDI,[ESP + 0x100]               ; 005506f0
    MOV ESI,dword ptr [ESP + 0x278]     ; 005506f7
    PUSH EDI                            ; 005506fe
    MOV AL,byte ptr [ESI]               ; 005506ff
        ;   Label: LAB_005506ff
    MOV byte ptr [EDI],AL               ; 00550701
    CMP AL,0x0                          ; 00550703
    JZ 0x00550717                       ; 00550705
        ;   XREF to: 00550717 (CONDITIONAL_JUMP)  ; LAB_00550717
    MOV AL,byte ptr [ESI + 0x1]         ; 00550707
    ADD ESI,0x2                         ; 0055070a
    MOV byte ptr [EDI + 0x1],AL         ; 0055070d
    ADD EDI,0x2                         ; 00550710
    CMP AL,0x0                          ; 00550713
    JNZ 0x005506ff                      ; 00550715
        ;   XREF to: 005506ff (CONDITIONAL_JUMP)  ; LAB_005506ff
    POP EDI                             ; 00550717
        ;   Label: LAB_00550717
    MOV EBX,dword ptr [0x0264161c]      ; 00550718 | DAT_0264161c
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055071e
    SUB EAX,EBX                         ; 00550725
    MOV ECX,0x18                        ; 00550727
    SHL EAX,0x5                         ; 0055072c
    LEA EDI,[ESP + 0x200]               ; 0055072f
    LEA ESI,[EAX + 0x2641620]           ; 00550736
    MOVSD.REP ES:EDI,ESI                ; 0055073c
    MOV ECX,dword ptr [ESP + 0x200]     ; 0055073e
    PUSH ECX                            ; 00550745
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0 ; 00550746
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 0055074b
    TEST EAX,EAX                        ; 0055074e
    JZ 0x005506cc                       ; 00550750
        ;   XREF to: 005506cc (CONDITIONAL_JUMP)  ; LAB_005506cc
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00550756
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    CMP dword ptr [0x0264901c],0x0      ; 0055075b | DAT_0264901c
    JLE 0x00550945                      ; 00550762
        ;   XREF to: 00550945 (CONDITIONAL_JUMP)  ; LAB_00550945
    MOV EBP,dword ptr [0x0263cf80]      ; 00550768 | DAT_0263cf80
        ;   Label: LAB_00550768
    XOR EAX,EAX                         ; 0055076e
    XOR EBX,EBX                         ; 00550770
    TEST EBP,EBP                        ; 00550772
    JZ 0x00550790                       ; 00550774
        ;   XREF to: 00550790 (CONDITIONAL_JUMP)  ; LAB_00550790
    ADD EAX,0x11c                       ; 00550776
        ;   Label: LAB_00550776
    INC EBX                             ; 0055077b
    CMP EAX,0x4700                      ; 0055077c
    JGE 0x0055096d                      ; 00550781
        ;   XREF to: 0055096d (CONDITIONAL_JUMP)  ; LAB_0055096d
    CMP dword ptr [EAX + 0x263cf80],0x0 ; 00550787 | DAT_0263d09c
    JNZ 0x00550776                      ; 0055078e
        ;   XREF to: 00550776 (CONDITIONAL_JUMP)  ; LAB_00550776
    MOV dword ptr [ESP + 0x260],EBX     ; 00550790
        ;   Label: LAB_00550790
    TEST EBX,EBX                        ; 00550797
    JL 0x00550933                       ; 00550799
        ;   XREF to: 00550933 (CONDITIONAL_JUMP)  ; LAB_00550933
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055079f
    ADD EAX,EBX                         ; 005507a6
    SHL EAX,0x3                         ; 005507a8
    SUB EAX,EBX                         ; 005507ab
    MOV EBP,0x263cf1c                   ; 005507ad
    SHL EAX,0x2                         ; 005507b2
    MOV ECX,0x18                        ; 005507b5
    ADD EBP,EAX                         ; 005507ba
    LEA ESI,[ESP + 0x200]               ; 005507bc
    MOV EDI,EBP                         ; 005507c3
    MOVSD.REP ES:EDI,ESI                ; 005507c5 | DAT_0263d038 | g_CMP3DecoderInstanceOther.synthesis_history[1][28][14]
    MOV EBX,0x2641924                   ; 005507c7
    MOV EDI,dword ptr [ESP + 0x278]     ; 005507cc
    XOR ESI,ESI                         ; 005507d3
    PUSH EDI                            ; 005507d5
        ;   Label: LAB_005507d5
    PUSH EBX                            ; 005507d6
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005507d7
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005507dc
    TEST EAX,EAX                        ; 005507df
    JNZ 0x00550977                      ; 005507e1
        ;   XREF to: 00550977 (CONDITIONAL_JUMP)  ; LAB_00550977
    TEST EBX,EBX                        ; 005507e7
    JZ 0x00550987                       ; 005507e9
        ;   XREF to: 00550987 (CONDITIONAL_JUMP)  ; LAB_00550987
    CMP dword ptr [EBX + 0x160],-0x1    ; 005507ef | g_SfxSamples[0].streaming_slot_index
    JZ 0x005509fd                       ; 005507f6
        ;   XREF to: 005509fd (CONDITIONAL_JUMP)  ; LAB_005509fd
    LEA EAX,[ESP + 0x100]               ; 005507fc
    PUSH EAX                            ; 00550803
    MOV EDI,dword ptr [ESP + 0x264]     ; 00550804
    PUSH EDI                            ; 0055080b
    CALL sound_sndmain.cpp_loadStreamingSoundFile_FUN_0054c7f0 ; 0055080c
        ;   XREF to: 0054c7f0 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_loadStreamingSoundFile_FUN_0054c7f0(int slot_index, char * filename)
        ;   Label: LAB_0055080c
    ADD ESP,0x8                         ; 00550811
    MOV dword ptr [EBP + 0x68],EAX      ; 00550814 | DAT_0263d0a0
        ;   Label: LAB_00550814
    MOV EAX,dword ptr [EBP + 0x68]      ; 00550817 | DAT_0263d0a0
        ;   Label: LAB_00550817
    TEST EAX,EAX                        ; 0055081a
    JZ 0x00550a1a                       ; 0055081c
        ;   XREF to: 00550a1a (CONDITIONAL_JUMP)  ; LAB_00550a1a
    MOV EDX,dword ptr [EAX + 0x154]     ; 00550822 | g_SfxSamples[0].ref_count
    INC EDX                             ; 00550828
    PUSH EBP                            ; 00550829 | DAT_0263d038
    MOV dword ptr [EAX + 0x154],EDX     ; 0055082a | g_SfxSamples[0].ref_count
    CALL sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0 ; 00550830
        ;   XREF to: 0054fbe0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot * this_ptr)
    MOV dword ptr [EBP + 0x108],0x0     ; 00550835
    FLD float ptr [EBP + 0x38]          ; 0055083f
    MOV dword ptr [EBP + 0x100],0xbf800000 ; 00550842
    ADD ESP,0x4                         ; 0055084c
    MOV dword ptr [EBP + 0x104],0x0     ; 0055084f
    MOV EAX,EBP                         ; 00550859
    FSTP float ptr [EBP + 0xfc]         ; 0055085b
    LEA EBX,[EBP + 0x20]                ; 00550861
    ADD EAX,0x4                         ; 00550864
        ;   Label: LAB_00550864
    MOV dword ptr [EAX + 0xcc],0xffffffff ; 00550867
    CMP EAX,EBX                         ; 00550871
    JNZ 0x00550864                      ; 00550873
        ;   XREF to: 00550864 (CONDITIONAL_JUMP)  ; LAB_00550864
    MOV EAX,dword ptr [EBP + 0x68]      ; 00550875 | DAT_0263d0a0
    MOV ECX,dword ptr [0x0061bc80]      ; 00550878 | DAT_0061bc80
    FLD float ptr [EAX + 0x114]         ; 0055087e
    INC ECX                             ; 00550884
    MOV EAX,dword ptr [EBP + 0x68]      ; 00550885 | DAT_0263d0a0
    FSTP float ptr [EBP + 0xf0]         ; 00550888
    MOV dword ptr [0x0061bc80],ECX      ; 0055088e | DAT_0061bc80
    FLD float ptr [EAX + 0x118]         ; 00550894
    MOV EAX,dword ptr [EBP + 0x68]      ; 0055089a | DAT_0263d0a0
    FSTP float ptr [EBP + 0xf4]         ; 0055089d
    MOV EDX,dword ptr [EAX + 0x11c]     ; 005508a3
    MOV dword ptr [EBP + 0xf8],EDX      ; 005508a9
    MOV dword ptr [EBP + 0x118],0xffffffff ; 005508af | DAT_0263d150
    CMP ECX,0xffffff                    ; 005508b9
    JL 0x005508cb                       ; 005508bf
        ;   XREF to: 005508cb (CONDITIONAL_JUMP)  ; LAB_005508cb
    MOV dword ptr [0x0061bc80],0x1      ; 005508c1 | DAT_0061bc80
    PUSH 0x4479c000                     ; 005508cb
        ;   Label: LAB_005508cb
    PUSH 0x4479c000                     ; 005508d0
    MOV EDI,dword ptr [EBP + 0x68]      ; 005508d5 | DAT_0263d0a0
    MOV EBX,dword ptr [0x0061bc80]      ; 005508d8 | DAT_0061bc80
    PUSH EDI                            ; 005508de
    MOV dword ptr [EBP + 0x64],EBX      ; 005508df | DAT_0263d09c
    CALL sound_sndmain.cpp_CSfxSample_pollStream_FUN_0054ddf0 ; 005508e2
        ;   XREF to: 0054ddf0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_pollStream_FUN_0054ddf0(CSfxSample * this_ptr, float time_window, float update_interval)
    ADD ESP,0xc                         ; 005508e7
    TEST EAX,EAX                        ; 005508ea
    JZ 0x0055092a                       ; 005508ec
        ;   XREF to: 0055092a (CONDITIONAL_JUMP)  ; LAB_0055092a
    PUSH 0x0                            ; 005508ee
    PUSH EBP                            ; 005508f0 | DAT_0263d038
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 ; 005508f1
        ;   XREF to: 0054e8c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005508f6
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30 ; 005508f9
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30()
    CMP EAX,0x1                         ; 005508fe
    JL 0x00550a34                       ; 00550901
        ;   XREF to: 00550a34 (CONDITIONAL_JUMP)  ; LAB_00550a34
    MOV EDI,dword ptr [EBP + 0x68]      ; 00550907 | DAT_0263d0a0
    MOV EDX,dword ptr [EDI + 0x158]     ; 0055090a
    MOV EAX,[0x02648e80]                ; 00550910 | DAT_02648e80
    PUSH EDX                            ; 00550915
    MOV ESI,dword ptr [EAX]             ; 00550916
    PUSH EAX                            ; 00550918
    CALL dword ptr [ESI + 0x40]         ; 00550919
    ADD ESP,0x8                         ; 0055091c
    MOV dword ptr [EBP + 0x60],EAX      ; 0055091f | DAT_0263d098
    TEST EAX,EAX                        ; 00550922
    JNZ 0x00550a34                      ; 00550924
        ;   XREF to: 00550a34 (CONDITIONAL_JUMP)  ; LAB_00550a34
    PUSH EBP                            ; 0055092a | DAT_0263d038
        ;   Label: LAB_0055092a
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 0055092b
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00550930
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00550933
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
        ;   Label: LAB_00550933
    XOR EAX,EAX                         ; 00550938
    ADD ESP,0x264                       ; 0055093a
    POP EBP                             ; 00550940
    POP EDI                             ; 00550941
    POP ESI                             ; 00550942
    POP EBX                             ; 00550943
    RET                                 ; 00550944
    MOV ESI,0x5e7a23                    ; 00550945 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00550945
    MOV EDI,0x249                       ; 0055094a
    PUSH 0x5e7a38                       ; 0055094f | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d046a0],ESI      ; 00550954 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0055095a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00550960
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00550965
    JMP 0x00550768                      ; 00550968
        ;   XREF to: 00550768 (UNCONDITIONAL_JUMP)  ; LAB_00550768
    MOV EBX,0xffffffff                  ; 0055096d
        ;   Label: LAB_0055096d
    JMP 0x00550790                      ; 00550972
        ;   XREF to: 00550790 (UNCONDITIONAL_JUMP)  ; LAB_00550790
    INC ESI                             ; 00550977
        ;   Label: LAB_00550977
    ADD EBX,0x1ac                       ; 00550978
    CMP ESI,0x40                        ; 0055097e
    JL 0x005507d5                       ; 00550981
        ;   XREF to: 005507d5 (CONDITIONAL_JUMP)  ; LAB_005507d5
    LEA EAX,[ESP + 0x100]               ; 00550987
        ;   Label: LAB_00550987
    PUSH EAX                            ; 0055098e
    PUSH 0x5e7ee3                       ; 0055098f | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00550994
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00550999
    CMP EAX,0x200000                    ; 0055099c
    JG 0x005509e8                       ; 005509a1
        ;   XREF to: 005509e8 (CONDITIONAL_JUMP)  ; LAB_005509e8
    MOV EAX,ESP                         ; 005509a3
    PUSH EAX                            ; 005509a5
    PUSH 0x0                            ; 005509a6
    PUSH 0x0                            ; 005509a8
    PUSH 0x0                            ; 005509aa
    LEA EAX,[ESP + 0x110]               ; 005509ac
    PUSH EAX                            ; 005509b3
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 005509b4
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005509b9
    PUSH 0x5e7ee9                       ; 005509bc | DAT_005e7ee9
    LEA EAX,[ESP + 0x4]                 ; 005509c1
    PUSH EAX                            ; 005509c5
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005509c6
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005509cb
    TEST EAX,EAX                        ; 005509ce
    JZ 0x005509e8                       ; 005509d0
        ;   XREF to: 005509e8 (CONDITIONAL_JUMP)  ; LAB_005509e8
    PUSH 0x5e7eed                       ; 005509d2 | DAT_005e7eed
    LEA EAX,[ESP + 0x4]                 ; 005509d7
    PUSH EAX                            ; 005509db
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005509dc
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005509e1
    TEST EAX,EAX                        ; 005509e4
    JNZ 0x00550a05                      ; 005509e6
        ;   XREF to: 00550a05 (CONDITIONAL_JUMP)  ; LAB_00550a05
    LEA EAX,[ESP + 0x100]               ; 005509e8
        ;   Label: LAB_005509e8
    PUSH EAX                            ; 005509ef
    MOV ECX,dword ptr [ESP + 0x264]     ; 005509f0
    PUSH ECX                            ; 005509f7
    JMP 0x0055080c                      ; 005509f8
        ;   XREF to: 0055080c (UNCONDITIONAL_JUMP)  ; LAB_0055080c
    MOV dword ptr [EBP + 0x68],EBX      ; 005509fd | DAT_0263d0a0
        ;   Label: LAB_005509fd
    JMP 0x00550817                      ; 00550a00
        ;   XREF to: 00550817 (UNCONDITIONAL_JUMP)  ; LAB_00550817
    LEA EAX,[ESP + 0x100]               ; 00550a05
        ;   Label: LAB_00550a05
    PUSH EAX                            ; 00550a0c
    CALL sound_sndmain.cpp_getSfxSample_FUN_0054c1c0 ; 00550a0d
        ;   XREF to: 0054c1c0 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_getSfxSample_FUN_0054c1c0(char * filename)
    ADD ESP,0x4                         ; 00550a12
    JMP 0x00550814                      ; 00550a15
        ;   XREF to: 00550814 (UNCONDITIONAL_JUMP)  ; LAB_00550814
    LEA EAX,[ESP + 0x100]               ; 00550a1a
        ;   Label: LAB_00550a1a
    PUSH EAX                            ; 00550a21
    PUSH 0x5e8d15                       ; 00550a22 | = "startSfx - can't get sample %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00550a27
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x8                         ; 00550a2c
    JMP 0x0055092a                      ; 00550a2f
        ;   XREF to: 0055092a (UNCONDITIONAL_JUMP)  ; LAB_0055092a
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00550a34
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
        ;   Label: LAB_00550a34
    MOV EAX,EBX                         ; 00550a39
    MOV EBX,dword ptr [ESP + 0x260]     ; 00550a3b
    SHL EAX,0x6                         ; 00550a42
    OR EAX,EBX                          ; 00550a45
    ADD ESP,0x264                       ; 00550a47
    POP EBP                             ; 00550a4d
    POP EDI                             ; 00550a4e
    POP ESI                             ; 00550a4f
    POP EBX                             ; 00550a50
    RET                                 ; 00550a51

