; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004e94f0(void)
;
; Local Variables:
; undefined4       Stack[-0xa34]:4  local_a34
; undefined8       Stack[-0xa30]:8  local_a30
; undefined4       Stack[-0xa28]:4  local_a28
; undefined4       Stack[-0xa24]:4  local_a24
; undefined4       Stack[-0xa20]:4  local_a20
; undefined        Stack[-0xa1c]:1  local_a1c
; undefined1       Stack[-0x65c]:1  local_65c
; undefined1       Stack[-0x65b]:1  local_65b
; undefined4       Stack[-0x554]:4  local_554
; undefined        Stack[-0x544]:1  local_544
; undefined        Stack[-0x42c]:1  local_42c
; undefined1       Stack[-0x42b]:1  local_42b
; undefined        Stack[-0x32c]:1  local_32c
; undefined1       Stack[-0x32b]:1  local_32b
; undefined        Stack[-0x22c]:1  local_22c
; undefined1       Stack[-0x22b]:1  local_22b
; undefined        Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x12b]:1  local_12b
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_FUN_004ea280 at 004ea42e
;
; Referenced Globals:
;   void* switchdataD_004e94c0 = 004e9bfb
;   undefined4 s_Device_005c7755+1
;   TerminatedCString s_Sound_005c7760
;   TerminatedCString s_Muted_005c7769
;   undefined4 DAT_005c776f
;   TerminatedCString s_Sound_Effects_Volume_005c7772
;   undefined4 DAT_005c778a
;   undefined4 DAT_005c778d
;   TerminatedCString s_Sound_Effects_Volume_Off_005c7790
;   TerminatedCString s_Dialog_Volume_005c77ab
;   undefined4 DAT_005c77bc
;   undefined4 DAT_005c77bf
;   TerminatedCString s_Dialog_Volume_Off_005c77c2
;   TerminatedCString s_Music_Volume_005c77d6
;   undefined4 DAT_005c77e6
;   ... and 37 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004b4430
;   core_game.cpp_FUN_004b4440
;   core_menu.cpp_FUN_004e7860
;   core_moon.cpp_CMoon_render_FUN_004f9670
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100
;   core_sound.cpp_CSound_configure_FUN_005607d0
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_sprintf_FUN_005a28c0
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
;   shape_edittool.cpp_CPickList_dtor_FUN_004832b0
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   sound_sndmain.cpp_closeSoundDevice_FUN_005587e0
;   sound_sndmain.cpp_enableHwSoundMixing_FUN_005586f0
;   sound_sndmain.cpp_enableSfxChannel_FUN_00556db0
;   ... and 26 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e94f0
        ;   Label: core_menu.cpp_FUN_004e94f0
    PUSH ESI                            ; 004e94f1
    PUSH EDI                            ; 004e94f2
    PUSH EBP                            ; 004e94f3
    MOV EBP,ESP                         ; 004e94f4
    SUB ESP,0xa20                       ; 004e94f6
    AND ESP,0xfffffff8                  ; 004e94fc
    MOV ECX,dword ptr [0x005fe9dc]      ; 004e94ff | g_CGamePtr
    XOR EDX,EDX                         ; 004e9505
    PUSH ECX                            ; 004e9507 | g_CGameInstance
    MOV dword ptr [ESP + 0xa08],EDX     ; 004e9508
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b4430 ; 004e950f
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b4430(CGame * this_ptr)
    MOV EDX,0x1d74a50                   ; 004e9514
    ADD ESP,0x4                         ; 004e9519
    XOR EAX,EAX                         ; 004e951c
    MOV dword ptr [EAX + 0x1d75450],EDX ; 004e951e
        ;   Label: LAB_004e951e
    ADD EAX,0x4                         ; 004e9524
    ADD EDX,0x100                       ; 004e9527
    CMP EAX,0x28                        ; 004e952d
    JNZ 0x004e951e                      ; 004e9530
        ;   XREF to: 004e951e (CONDITIONAL_JUMP)  ; LAB_004e951e
    MOV EBX,dword ptr [0x005fe9dc]      ; 004e9532 | g_CGamePtr
        ;   Label: LAB_004e9532
    PUSH EBX                            ; 004e9538 | g_CGameInstance
    CALL core_game.cpp_FUN_004b4440     ; 004e9539
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b4440()
    ADD ESP,0x4                         ; 004e953e
    PUSH 0x10000                        ; 004e9541
    PUSH 0xc350                         ; 004e9546
    PUSH 0xc350                         ; 004e954b
    MOV EAX,[0x00603b28]                ; 004e9550 | g_CDemonSetPtr
    PUSH EAX                            ; 004e9555 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004e9556 | g_CDemonSetInstance.rendering_mode
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100 ; 004e9560
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004e9565
    MOV EAX,[0x00603b28]                ; 004e9568 | g_CDemonSetPtr
    PUSH 0x1d72cb0                      ; 004e956d
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004e9572 | g_CDemonSetInstance.ambient_base_quick
    CALL core_moon.cpp_CMoon_render_FUN_004f9670 ; 004e957c
        ;   XREF to: 004f9670 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_004f9670(CMoon * this_ptr)
    MOV EAX,[0x00603b28]                ; 004e9581 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004e9586
    XOR EBX,EBX                         ; 004e9589
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004e958b | g_CDemonSetInstance.rendering_mode
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_00558840 ; 004e9595
        ;   XREF to: 00558840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_00558840()
    MOV ESI,EAX                         ; 004e959a
    TEST EAX,EAX                        ; 004e959c
    JGE 0x004e9c40                      ; 004e959e
        ;   XREF to: 004e9c40 (CONDITIONAL_JUMP)  ; LAB_004e9c40
    XOR ESI,ESI                         ; 004e95a4
        ;   Label: LAB_004e95a4
    XOR AH,AH                           ; 004e95a6
    MOV dword ptr [ESP + 0x4dc],ESI     ; 004e95a8
    MOV byte ptr [ESP + 0x3d4],AH       ; 004e95af
    PUSH 0x5c7756                       ; 004e95b6 | s_Device_005c7755+1
        ;   Label: LAB_004e95b6
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e95bb
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV EDI,EBX                         ; 004e95c0
    ADD ESP,0x4                         ; 004e95c2
    SHL EDI,0x8                         ; 004e95c5
    MOV ESI,EAX                         ; 004e95c8
    ADD EDI,0x1d74a50                   ; 004e95ca
    PUSH EDI                            ; 004e95d0
    MOV AL,byte ptr [ESI]               ; 004e95d1
        ;   Label: LAB_004e95d1
    MOV byte ptr [EDI],AL               ; 004e95d3
    CMP AL,0x0                          ; 004e95d5
    JZ 0x004e95e9                       ; 004e95d7
        ;   XREF to: 004e95e9 (CONDITIONAL_JUMP)  ; LAB_004e95e9
    MOV AL,byte ptr [ESI + 0x1]         ; 004e95d9
    ADD ESI,0x2                         ; 004e95dc
    MOV byte ptr [EDI + 0x1],AL         ; 004e95df
    ADD EDI,0x2                         ; 004e95e2
    CMP AL,0x0                          ; 004e95e5
    JNZ 0x004e95d1                      ; 004e95e7
        ;   XREF to: 004e95d1 (CONDITIONAL_JUMP)  ; LAB_004e95d1
    POP EDI                             ; 004e95e9
        ;   Label: LAB_004e95e9
    LEA ESI,[ESP + 0x3d4]               ; 004e95ea
    PUSH EDI                            ; 004e95f1
    SUB ECX,ECX                         ; 004e95f2
    DEC ECX                             ; 004e95f4
    MOV AL,0x0                          ; 004e95f5
    SCASB.REPNE ES:EDI                  ; 004e95f7
    DEC EDI                             ; 004e95f9
    MOV AL,byte ptr [ESI]               ; 004e95fa
        ;   Label: LAB_004e95fa
    MOV byte ptr [EDI],AL               ; 004e95fc
    CMP AL,0x0                          ; 004e95fe
    JZ 0x004e9612                       ; 004e9600
        ;   XREF to: 004e9612 (CONDITIONAL_JUMP)  ; LAB_004e9612
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9602
    ADD ESI,0x2                         ; 004e9605
    MOV byte ptr [EDI + 0x1],AL         ; 004e9608
    ADD EDI,0x2                         ; 004e960b
    CMP AL,0x0                          ; 004e960e
    JNZ 0x004e95fa                      ; 004e9610
        ;   XREF to: 004e95fa (CONDITIONAL_JUMP)  ; LAB_004e95fa
    POP EDI                             ; 004e9612
        ;   Label: LAB_004e9612
    PUSH 0x5c7760                       ; 004e9613 | = "Sound : "
    INC EBX                             ; 004e9618
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9619
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV EDX,EBX                         ; 004e961e
    MOV ESI,0x1d74a50                   ; 004e9620
    SHL EDX,0x8                         ; 004e9625
    ADD ESP,0x4                         ; 004e9628
    ADD ESI,EDX                         ; 004e962b
    MOV dword ptr [ESP + 0xa0c],ESI     ; 004e962d
    MOV EDI,dword ptr [ESP + 0xa0c]     ; 004e9634
    MOV ESI,EAX                         ; 004e963b
    PUSH EDI                            ; 004e963d
    MOV AL,byte ptr [ESI]               ; 004e963e
        ;   Label: LAB_004e963e
    MOV byte ptr [EDI],AL               ; 004e9640
    CMP AL,0x0                          ; 004e9642
    JZ 0x004e9656                       ; 004e9644
        ;   XREF to: 004e9656 (CONDITIONAL_JUMP)  ; LAB_004e9656
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9646
    ADD ESI,0x2                         ; 004e9649
    MOV byte ptr [EDI + 0x1],AL         ; 004e964c
    ADD EDI,0x2                         ; 004e964f
    CMP AL,0x0                          ; 004e9652
    JNZ 0x004e963e                      ; 004e9654
        ;   XREF to: 004e963e (CONDITIONAL_JUMP)  ; LAB_004e963e
    POP EDI                             ; 004e9656
        ;   Label: LAB_004e9656
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00556750 ; 004e9657
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00556750()
    TEST EAX,EAX                        ; 004e965c
    JZ 0x004e9c63                       ; 004e965e
        ;   XREF to: 004e9c63 (CONDITIONAL_JUMP)  ; LAB_004e9c63
    PUSH 0x5c7769                       ; 004e9664 | = "Muted"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9669
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e9669
    ADD ESP,0x4                         ; 004e966e
    MOV ESI,EAX                         ; 004e9671
    PUSH EDI                            ; 004e9673
    SUB ECX,ECX                         ; 004e9674
    DEC ECX                             ; 004e9676
    MOV AL,0x0                          ; 004e9677
    SCASB.REPNE ES:EDI                  ; 004e9679
    DEC EDI                             ; 004e967b
    MOV AL,byte ptr [ESI]               ; 004e967c
        ;   Label: LAB_004e967c
    MOV byte ptr [EDI],AL               ; 004e967e
    CMP AL,0x0                          ; 004e9680
    JZ 0x004e9694                       ; 004e9682
        ;   XREF to: 004e9694 (CONDITIONAL_JUMP)  ; LAB_004e9694
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9684
    ADD ESI,0x2                         ; 004e9687
    MOV byte ptr [EDI + 0x1],AL         ; 004e968a
    ADD EDI,0x2                         ; 004e968d
    CMP AL,0x0                          ; 004e9690
    JNZ 0x004e967c                      ; 004e9692
        ;   XREF to: 004e967c (CONDITIONAL_JUMP)  ; LAB_004e967c
    POP EDI                             ; 004e9694
        ;   Label: LAB_004e9694
    PUSH 0x0                            ; 004e9695
    INC EBX                             ; 004e9697
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004e9698
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    MOV EDX,EBX                         ; 004e969d
    MOV ESI,0x1d74a50                   ; 004e969f
    SHL EDX,0x8                         ; 004e96a4
    ADD ESP,0x4                         ; 004e96a7
    ADD ESI,EDX                         ; 004e96aa
    INC EBX                             ; 004e96ac
    MOV dword ptr [ESP + 0xa14],ESI     ; 004e96ad
    TEST EAX,EAX                        ; 004e96b4
    JZ 0x004e9c6d                       ; 004e96b6
        ;   XREF to: 004e9c6d (CONDITIONAL_JUMP)  ; LAB_004e9c6d
    PUSH 0x5c7772                       ; 004e96bc | = "Sound Effects Volume : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e96c1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e96c6
    PUSH EAX                            ; 004e96c9
    PUSH ESI                            ; 004e96ca
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e96cb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e96d0
    PUSH 0x0                            ; 004e96d3
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 004e96d5
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0xa20],EAX     ; 004e96da
    FLD float ptr [ESP + 0xa20]         ; 004e96e1
    FMUL float ptr [0x005c78b2]         ; 004e96e8 | DAT_005c78b2
    FDIV float ptr [0x005e2924]         ; 004e96ee | DAT_005e2924
    FADD double ptr [0x005c78b6]        ; 004e96f4 | DAT_005c78b6
    ADD ESP,0x4                         ; 004e96fa
    CALL crt_math.c_round_FUN_005a3120  ; 004e96fd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xa1c]       ; 004e9702
    MOV EDX,dword ptr [ESP + 0xa1c]     ; 004e9709
    PUSH EDX                            ; 004e9710
    PUSH 0x5c778a                       ; 004e9711 | DAT_005c778a
    LEA EAX,[ESP + 0x60c]               ; 004e9716
    PUSH EAX                            ; 004e971d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e971e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e9723
    LEA ESI,[ESP + 0x604]               ; 004e9726
    MOV EDI,dword ptr [ESP + 0xa14]     ; 004e972d
    PUSH EDI                            ; 004e9734
    SUB ECX,ECX                         ; 004e9735
    DEC ECX                             ; 004e9737
    MOV AL,0x0                          ; 004e9738
    SCASB.REPNE ES:EDI                  ; 004e973a
    DEC EDI                             ; 004e973c
    MOV AL,byte ptr [ESI]               ; 004e973d
        ;   Label: LAB_004e973d
    MOV byte ptr [EDI],AL               ; 004e973f
    CMP AL,0x0                          ; 004e9741
    JZ 0x004e9755                       ; 004e9743
        ;   XREF to: 004e9755 (CONDITIONAL_JUMP)  ; LAB_004e9755
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9745
    ADD ESI,0x2                         ; 004e9748
    MOV byte ptr [EDI + 0x1],AL         ; 004e974b
    ADD EDI,0x2                         ; 004e974e
    CMP AL,0x0                          ; 004e9751
    JNZ 0x004e973d                      ; 004e9753
        ;   XREF to: 004e973d (CONDITIONAL_JUMP)  ; LAB_004e973d
    POP EDI                             ; 004e9755
        ;   Label: LAB_004e9755
    PUSH 0x5c778d                       ; 004e9756 | DAT_005c778d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e975b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9760
    MOV ESI,EAX                         ; 004e9763
    PUSH EDI                            ; 004e9765
    SUB ECX,ECX                         ; 004e9766
    DEC ECX                             ; 004e9768
    MOV AL,0x0                          ; 004e9769
    SCASB.REPNE ES:EDI                  ; 004e976b
    DEC EDI                             ; 004e976d
    MOV AL,byte ptr [ESI]               ; 004e976e
        ;   Label: LAB_004e976e
    MOV byte ptr [EDI],AL               ; 004e9770
    CMP AL,0x0                          ; 004e9772
    JZ 0x004e9786                       ; 004e9774
        ;   XREF to: 004e9786 (CONDITIONAL_JUMP)  ; LAB_004e9786
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9776
    ADD ESI,0x2                         ; 004e9779
    MOV byte ptr [EDI + 0x1],AL         ; 004e977c
    ADD EDI,0x2                         ; 004e977f
    CMP AL,0x0                          ; 004e9782
    JNZ 0x004e976e                      ; 004e9784
        ;   XREF to: 004e976e (CONDITIONAL_JUMP)  ; LAB_004e976e
    POP EDI                             ; 004e9786
        ;   Label: LAB_004e9786
    MOV ESI,EBX                         ; 004e9787
    PUSH 0x2                            ; 004e9789
        ;   Label: LAB_004e9789
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004e978b
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    MOV EBX,ESI                         ; 004e9790
    ADD ESP,0x4                         ; 004e9792
    SHL EBX,0x8                         ; 004e9795
    INC ESI                             ; 004e9798
    ADD EBX,0x1d74a50                   ; 004e9799
    MOV dword ptr [ESP + 0xa08],ESI     ; 004e979f
    TEST EAX,EAX                        ; 004e97a6
    JZ 0x004e9c92                       ; 004e97a8
        ;   XREF to: 004e9c92 (CONDITIONAL_JUMP)  ; LAB_004e9c92
    PUSH 0x5c77ab                       ; 004e97ae | = "Dialog Volume : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e97b3
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e97b8
    MOV EDI,EBX                         ; 004e97bb
    MOV ESI,EAX                         ; 004e97bd
    PUSH EDI                            ; 004e97bf
    MOV AL,byte ptr [ESI]               ; 004e97c0
        ;   Label: LAB_004e97c0
    MOV byte ptr [EDI],AL               ; 004e97c2
    CMP AL,0x0                          ; 004e97c4
    JZ 0x004e97d8                       ; 004e97c6
        ;   XREF to: 004e97d8 (CONDITIONAL_JUMP)  ; LAB_004e97d8
    MOV AL,byte ptr [ESI + 0x1]         ; 004e97c8
    ADD ESI,0x2                         ; 004e97cb
    MOV byte ptr [EDI + 0x1],AL         ; 004e97ce
    ADD EDI,0x2                         ; 004e97d1
    CMP AL,0x0                          ; 004e97d4
    JNZ 0x004e97c0                      ; 004e97d6
        ;   XREF to: 004e97c0 (CONDITIONAL_JUMP)  ; LAB_004e97c0
    POP EDI                             ; 004e97d8
        ;   Label: LAB_004e97d8
    PUSH 0x2                            ; 004e97d9
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 004e97db
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0xa20],EAX     ; 004e97e0
    FLD float ptr [ESP + 0xa20]         ; 004e97e7
    FMUL float ptr [0x005c78b2]         ; 004e97ee | DAT_005c78b2
    FDIV float ptr [0x005e2928]         ; 004e97f4 | DAT_005e2928
    FADD double ptr [0x005c78b6]        ; 004e97fa | DAT_005c78b6
    ADD ESP,0x4                         ; 004e9800
    CALL crt_math.c_round_FUN_005a3120  ; 004e9803
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xa1c]       ; 004e9808
    MOV ECX,dword ptr [ESP + 0xa1c]     ; 004e980f
    PUSH ECX                            ; 004e9816
    PUSH 0x5c77bc                       ; 004e9817 | DAT_005c77bc
    LEA EAX,[ESP + 0x90c]               ; 004e981c
    PUSH EAX                            ; 004e9823
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9824
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e9829
    LEA ESI,[ESP + 0x904]               ; 004e982c
    PUSH EDI                            ; 004e9833
    SUB ECX,ECX                         ; 004e9834
    DEC ECX                             ; 004e9836
    MOV AL,0x0                          ; 004e9837
    SCASB.REPNE ES:EDI                  ; 004e9839
    DEC EDI                             ; 004e983b
    MOV AL,byte ptr [ESI]               ; 004e983c
        ;   Label: LAB_004e983c
    MOV byte ptr [EDI],AL               ; 004e983e
    CMP AL,0x0                          ; 004e9840
    JZ 0x004e9854                       ; 004e9842
        ;   XREF to: 004e9854 (CONDITIONAL_JUMP)  ; LAB_004e9854
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9844
    ADD ESI,0x2                         ; 004e9847
    MOV byte ptr [EDI + 0x1],AL         ; 004e984a
    ADD EDI,0x2                         ; 004e984d
    CMP AL,0x0                          ; 004e9850
    JNZ 0x004e983c                      ; 004e9852
        ;   XREF to: 004e983c (CONDITIONAL_JUMP)  ; LAB_004e983c
    POP EDI                             ; 004e9854
        ;   Label: LAB_004e9854
    PUSH 0x5c77bf                       ; 004e9855 | DAT_005c77bf
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e985a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e985f
    MOV ESI,EAX                         ; 004e9862
    PUSH EDI                            ; 004e9864
    SUB ECX,ECX                         ; 004e9865
    DEC ECX                             ; 004e9867
    MOV AL,0x0                          ; 004e9868
    SCASB.REPNE ES:EDI                  ; 004e986a
    DEC EDI                             ; 004e986c
    MOV AL,byte ptr [ESI]               ; 004e986d
        ;   Label: LAB_004e986d
    MOV byte ptr [EDI],AL               ; 004e986f
    CMP AL,0x0                          ; 004e9871
    JZ 0x004e9885                       ; 004e9873
        ;   XREF to: 004e9885 (CONDITIONAL_JUMP)  ; LAB_004e9885
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9875
    ADD ESI,0x2                         ; 004e9878
    MOV byte ptr [EDI + 0x1],AL         ; 004e987b
    ADD EDI,0x2                         ; 004e987e
    CMP AL,0x0                          ; 004e9881
    JNZ 0x004e986d                      ; 004e9883
        ;   XREF to: 004e986d (CONDITIONAL_JUMP)  ; LAB_004e986d
    POP EDI                             ; 004e9885
        ;   Label: LAB_004e9885
    MOV ESI,dword ptr [ESP + 0xa08]     ; 004e9886
    PUSH 0x1                            ; 004e988d
        ;   Label: LAB_004e988d
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004e988f
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    MOV EDX,ESI                         ; 004e9894
    MOV EBX,0x1d74a50                   ; 004e9896
    SHL EDX,0x8                         ; 004e989b
    ADD ESP,0x4                         ; 004e989e
    ADD EBX,EDX                         ; 004e98a1
    MOV dword ptr [ESP + 0xa10],EBX     ; 004e98a3
    LEA EBX,[ESI + 0x1]                 ; 004e98aa
    TEST EAX,EAX                        ; 004e98ad
    JZ 0x004e9cae                       ; 004e98af
        ;   XREF to: 004e9cae (CONDITIONAL_JUMP)  ; LAB_004e9cae
    PUSH 0x5c77d6                       ; 004e98b5 | = "Music Volume : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e98ba
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e98bf
    MOV ESI,EAX                         ; 004e98c2
    MOV EDI,dword ptr [ESP + 0xa10]     ; 004e98c4
    PUSH EDI                            ; 004e98cb
    MOV AL,byte ptr [ESI]               ; 004e98cc
        ;   Label: LAB_004e98cc
    MOV byte ptr [EDI],AL               ; 004e98ce
    CMP AL,0x0                          ; 004e98d0
    JZ 0x004e98e4                       ; 004e98d2
        ;   XREF to: 004e98e4 (CONDITIONAL_JUMP)  ; LAB_004e98e4
    MOV AL,byte ptr [ESI + 0x1]         ; 004e98d4
    ADD ESI,0x2                         ; 004e98d7
    MOV byte ptr [EDI + 0x1],AL         ; 004e98da
    ADD EDI,0x2                         ; 004e98dd
    CMP AL,0x0                          ; 004e98e0
    JNZ 0x004e98cc                      ; 004e98e2
        ;   XREF to: 004e98cc (CONDITIONAL_JUMP)  ; LAB_004e98cc
    POP EDI                             ; 004e98e4
        ;   Label: LAB_004e98e4
    PUSH 0x1                            ; 004e98e5
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 004e98e7
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0xa20],EAX     ; 004e98ec
    FLD float ptr [ESP + 0xa20]         ; 004e98f3
    FMUL float ptr [0x005c78b2]         ; 004e98fa | DAT_005c78b2
    FDIV float ptr [0x005e2920]         ; 004e9900 | DAT_005e2920
    FADD double ptr [0x005c78b6]        ; 004e9906 | DAT_005c78b6
    ADD ESP,0x4                         ; 004e990c
    CALL crt_math.c_round_FUN_005a3120  ; 004e990f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xa1c]       ; 004e9914
    MOV EDI,dword ptr [ESP + 0xa1c]     ; 004e991b
    PUSH EDI                            ; 004e9922
    PUSH 0x5c77e6                       ; 004e9923 | DAT_005c77e6
    LEA EAX,[ESP + 0x70c]               ; 004e9928
    PUSH EAX                            ; 004e992f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9930
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e9935
    LEA ESI,[ESP + 0x704]               ; 004e9938
    MOV EDI,dword ptr [ESP + 0xa10]     ; 004e993f
    PUSH EDI                            ; 004e9946
    SUB ECX,ECX                         ; 004e9947
    DEC ECX                             ; 004e9949
    MOV AL,0x0                          ; 004e994a
    SCASB.REPNE ES:EDI                  ; 004e994c
    DEC EDI                             ; 004e994e
    MOV AL,byte ptr [ESI]               ; 004e994f
        ;   Label: LAB_004e994f
    MOV byte ptr [EDI],AL               ; 004e9951
    CMP AL,0x0                          ; 004e9953
    JZ 0x004e9967                       ; 004e9955
        ;   XREF to: 004e9967 (CONDITIONAL_JUMP)  ; LAB_004e9967
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9957
    ADD ESI,0x2                         ; 004e995a
    MOV byte ptr [EDI + 0x1],AL         ; 004e995d
    ADD EDI,0x2                         ; 004e9960
    CMP AL,0x0                          ; 004e9963
    JNZ 0x004e994f                      ; 004e9965
        ;   XREF to: 004e994f (CONDITIONAL_JUMP)  ; LAB_004e994f
    POP EDI                             ; 004e9967
        ;   Label: LAB_004e9967
    PUSH 0x5c77e9                       ; 004e9968 | DAT_005c77e9
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e996d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9972
    MOV ESI,EAX                         ; 004e9975
    PUSH EDI                            ; 004e9977
    SUB ECX,ECX                         ; 004e9978
    DEC ECX                             ; 004e997a
    MOV AL,0x0                          ; 004e997b
    SCASB.REPNE ES:EDI                  ; 004e997d
    DEC EDI                             ; 004e997f
    MOV AL,byte ptr [ESI]               ; 004e9980
        ;   Label: LAB_004e9980
    MOV byte ptr [EDI],AL               ; 004e9982
    CMP AL,0x0                          ; 004e9984
    JZ 0x004e9998                       ; 004e9986
        ;   XREF to: 004e9998 (CONDITIONAL_JUMP)  ; LAB_004e9998
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9988
    ADD ESI,0x2                         ; 004e998b
    MOV byte ptr [EDI + 0x1],AL         ; 004e998e
    ADD EDI,0x2                         ; 004e9991
    CMP AL,0x0                          ; 004e9994
    JNZ 0x004e9980                      ; 004e9996
        ;   XREF to: 004e9980 (CONDITIONAL_JUMP)  ; LAB_004e9980
    POP EDI                             ; 004e9998
        ;   Label: LAB_004e9998
    PUSH 0x5c77ff                       ; 004e9999 | = "Output Rate : "
        ;   Label: LAB_004e9999
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e999e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV EDX,EBX                         ; 004e99a3
    MOV ESI,0x1d74a50                   ; 004e99a5
    SHL EDX,0x8                         ; 004e99aa
    ADD ESP,0x4                         ; 004e99ad
    ADD ESI,EDX                         ; 004e99b0
    MOV dword ptr [ESP + 0xa1c],ESI     ; 004e99b2
    MOV EDI,dword ptr [ESP + 0xa1c]     ; 004e99b9
    MOV ESI,EAX                         ; 004e99c0
    PUSH EDI                            ; 004e99c2
    MOV AL,byte ptr [ESI]               ; 004e99c3
        ;   Label: LAB_004e99c3
    MOV byte ptr [EDI],AL               ; 004e99c5
    CMP AL,0x0                          ; 004e99c7
    JZ 0x004e99db                       ; 004e99c9
        ;   XREF to: 004e99db (CONDITIONAL_JUMP)  ; LAB_004e99db
    MOV AL,byte ptr [ESI + 0x1]         ; 004e99cb
    ADD ESI,0x2                         ; 004e99ce
    MOV byte ptr [EDI + 0x1],AL         ; 004e99d1
    ADD EDI,0x2                         ; 004e99d4
    CMP AL,0x0                          ; 004e99d7
    JNZ 0x004e99c3                      ; 004e99d9
        ;   XREF to: 004e99c3 (CONDITIONAL_JUMP)  ; LAB_004e99c3
    POP EDI                             ; 004e99db
        ;   Label: LAB_004e99db
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_00558390 ; 004e99dc
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_00558390()
    PUSH EAX                            ; 004e99e1
    PUSH 0x5c780e                       ; 004e99e2 | DAT_005c780e
    LEA EAX,[ESP + 0x80c]               ; 004e99e7
    PUSH EAX                            ; 004e99ee
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e99ef
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e99f4
    LEA ESI,[ESP + 0x804]               ; 004e99f7
    PUSH EDI                            ; 004e99fe
    SUB ECX,ECX                         ; 004e99ff
    DEC ECX                             ; 004e9a01
    MOV AL,0x0                          ; 004e9a02
    SCASB.REPNE ES:EDI                  ; 004e9a04
    DEC EDI                             ; 004e9a06
    MOV AL,byte ptr [ESI]               ; 004e9a07
        ;   Label: LAB_004e9a07
    MOV byte ptr [EDI],AL               ; 004e9a09
    CMP AL,0x0                          ; 004e9a0b
    JZ 0x004e9a1f                       ; 004e9a0d
        ;   XREF to: 004e9a1f (CONDITIONAL_JUMP)  ; LAB_004e9a1f
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9a0f
    ADD ESI,0x2                         ; 004e9a12
    MOV byte ptr [EDI + 0x1],AL         ; 004e9a15
    ADD EDI,0x2                         ; 004e9a18
    CMP AL,0x0                          ; 004e9a1b
    JNZ 0x004e9a07                      ; 004e9a1d
        ;   XREF to: 004e9a07 (CONDITIONAL_JUMP)  ; LAB_004e9a07
    POP EDI                             ; 004e9a1f
        ;   Label: LAB_004e9a1f
    PUSH 0x5c7811                       ; 004e9a20 | DAT_005c7811
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9a25
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9a2a
    MOV ESI,EAX                         ; 004e9a2d
    PUSH EDI                            ; 004e9a2f
    SUB ECX,ECX                         ; 004e9a30
    DEC ECX                             ; 004e9a32
    MOV AL,0x0                          ; 004e9a33
    SCASB.REPNE ES:EDI                  ; 004e9a35
    DEC EDI                             ; 004e9a37
    MOV AL,byte ptr [ESI]               ; 004e9a38
        ;   Label: LAB_004e9a38
    MOV byte ptr [EDI],AL               ; 004e9a3a
    CMP AL,0x0                          ; 004e9a3c
    JZ 0x004e9a50                       ; 004e9a3e
        ;   XREF to: 004e9a50 (CONDITIONAL_JUMP)  ; LAB_004e9a50
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9a40
    ADD ESI,0x2                         ; 004e9a43
    MOV byte ptr [EDI + 0x1],AL         ; 004e9a46
    ADD EDI,0x2                         ; 004e9a49
    CMP AL,0x0                          ; 004e9a4c
    JNZ 0x004e9a38                      ; 004e9a4e
        ;   XREF to: 004e9a38 (CONDITIONAL_JUMP)  ; LAB_004e9a38
    POP EDI                             ; 004e9a50
        ;   Label: LAB_004e9a50
    PUSH 0x5c7814                       ; 004e9a51 | = "Output Quality : "
    INC EBX                             ; 004e9a56
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9a57
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV EDX,EBX                         ; 004e9a5c
    MOV ESI,0x1d74a50                   ; 004e9a5e
    SHL EDX,0x8                         ; 004e9a63
    ADD ESP,0x4                         ; 004e9a66
    ADD ESI,EDX                         ; 004e9a69
    MOV dword ptr [ESP + 0xa1c],ESI     ; 004e9a6b
    MOV EDI,dword ptr [ESP + 0xa1c]     ; 004e9a72
    MOV ESI,EAX                         ; 004e9a79
    PUSH EDI                            ; 004e9a7b
    MOV AL,byte ptr [ESI]               ; 004e9a7c
        ;   Label: LAB_004e9a7c
    MOV byte ptr [EDI],AL               ; 004e9a7e
    CMP AL,0x0                          ; 004e9a80
    JZ 0x004e9a94                       ; 004e9a82
        ;   XREF to: 004e9a94 (CONDITIONAL_JUMP)  ; LAB_004e9a94
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9a84
    ADD ESI,0x2                         ; 004e9a87
    MOV byte ptr [EDI + 0x1],AL         ; 004e9a8a
    ADD EDI,0x2                         ; 004e9a8d
    CMP AL,0x0                          ; 004e9a90
    JNZ 0x004e9a7c                      ; 004e9a92
        ;   XREF to: 004e9a7c (CONDITIONAL_JUMP)  ; LAB_004e9a7c
    POP EDI                             ; 004e9a94
        ;   Label: LAB_004e9a94
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_00558370 ; 004e9a95
        ;   XREF to: 00558370 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_00558370()
    PUSH EAX                            ; 004e9a9a
    PUSH 0x5c7826                       ; 004e9a9b | DAT_005c7826
    LEA EAX,[ESP + 0x80c]               ; 004e9aa0
    PUSH EAX                            ; 004e9aa7
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9aa8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e9aad
    LEA ESI,[ESP + 0x804]               ; 004e9ab0
    PUSH EDI                            ; 004e9ab7
    SUB ECX,ECX                         ; 004e9ab8
    DEC ECX                             ; 004e9aba
    MOV AL,0x0                          ; 004e9abb
    SCASB.REPNE ES:EDI                  ; 004e9abd
    DEC EDI                             ; 004e9abf
    MOV AL,byte ptr [ESI]               ; 004e9ac0
        ;   Label: LAB_004e9ac0
    MOV byte ptr [EDI],AL               ; 004e9ac2
    CMP AL,0x0                          ; 004e9ac4
    JZ 0x004e9ad8                       ; 004e9ac6
        ;   XREF to: 004e9ad8 (CONDITIONAL_JUMP)  ; LAB_004e9ad8
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9ac8
    ADD ESI,0x2                         ; 004e9acb
    MOV byte ptr [EDI + 0x1],AL         ; 004e9ace
    ADD EDI,0x2                         ; 004e9ad1
    CMP AL,0x0                          ; 004e9ad4
    JNZ 0x004e9ac0                      ; 004e9ad6
        ;   XREF to: 004e9ac0 (CONDITIONAL_JUMP)  ; LAB_004e9ac0
    POP EDI                             ; 004e9ad8
        ;   Label: LAB_004e9ad8
    PUSH 0x5c7829                       ; 004e9ad9 | DAT_005c7829
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9ade
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9ae3
    MOV ESI,EAX                         ; 004e9ae6
    INC EBX                             ; 004e9ae8
    PUSH EDI                            ; 004e9ae9
    SUB ECX,ECX                         ; 004e9aea
    DEC ECX                             ; 004e9aec
    MOV AL,0x0                          ; 004e9aed
    SCASB.REPNE ES:EDI                  ; 004e9aef
    DEC EDI                             ; 004e9af1
    MOV AL,byte ptr [ESI]               ; 004e9af2
        ;   Label: LAB_004e9af2
    MOV byte ptr [EDI],AL               ; 004e9af4
    CMP AL,0x0                          ; 004e9af6
    JZ 0x004e9b0a                       ; 004e9af8
        ;   XREF to: 004e9b0a (CONDITIONAL_JUMP)  ; LAB_004e9b0a
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9afa
    ADD ESI,0x2                         ; 004e9afd
    MOV byte ptr [EDI + 0x1],AL         ; 004e9b00
    ADD EDI,0x2                         ; 004e9b03
    CMP AL,0x0                          ; 004e9b06
    JNZ 0x004e9af2                      ; 004e9b08
        ;   XREF to: 004e9af2 (CONDITIONAL_JUMP)  ; LAB_004e9af2
    POP EDI                             ; 004e9b0a
        ;   Label: LAB_004e9b0a
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0 ; 004e9b0b
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0()
    CMP EAX,0x1                         ; 004e9b10
    JNC 0x004e9cdb                      ; 004e9b13
        ;   XREF to: 004e9cdb (CONDITIONAL_JUMP)  ; LAB_004e9cdb
    PUSH 0x5c782d                       ; 004e9b19 | = "Output Type : Mono"
        ;   Label: LAB_004e9b19
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9b1e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e9b1e
    ADD ESP,0x4                         ; 004e9b23
    PUSH EAX                            ; 004e9b26
    MOV EAX,EBX                         ; 004e9b27
    SHL EAX,0x8                         ; 004e9b29
    ADD EAX,0x1d74a50                   ; 004e9b2c
    PUSH EAX                            ; 004e9b31
    INC EBX                             ; 004e9b32
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9b33
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e9b38
    CMP dword ptr [ESP + 0x4dc],0x0     ; 004e9b3b
    JLE 0x004e9b87                      ; 004e9b43
        ;   XREF to: 004e9b87 (CONDITIONAL_JUMP)  ; LAB_004e9b87
    MOV EDI,EBX                         ; 004e9b45
    SHL EDI,0x8                         ; 004e9b47
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0 ; 004e9b4a
        ;   XREF to: 005586e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0()
    ADD EDI,0x1d74a50                   ; 004e9b4f
    TEST EAX,EAX                        ; 004e9b55
    JLE 0x004e9ceb                      ; 004e9b57
        ;   XREF to: 004e9ceb (CONDITIONAL_JUMP)  ; LAB_004e9ceb
    PUSH 0x5c7855                       ; 004e9b5d | = "Hardware Mixing: Enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9b62
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e9b62
    ADD ESP,0x4                         ; 004e9b67
    MOV ESI,EAX                         ; 004e9b6a
    PUSH EDI                            ; 004e9b6c
    MOV AL,byte ptr [ESI]               ; 004e9b6d
        ;   Label: LAB_004e9b6d
    MOV byte ptr [EDI],AL               ; 004e9b6f
    CMP AL,0x0                          ; 004e9b71
    JZ 0x004e9b85                       ; 004e9b73
        ;   XREF to: 004e9b85 (CONDITIONAL_JUMP)  ; LAB_004e9b85
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9b75
    ADD ESI,0x2                         ; 004e9b78
    MOV byte ptr [EDI + 0x1],AL         ; 004e9b7b
    ADD EDI,0x2                         ; 004e9b7e
    CMP AL,0x0                          ; 004e9b81
    JNZ 0x004e9b6d                      ; 004e9b83
        ;   XREF to: 004e9b6d (CONDITIONAL_JUMP)  ; LAB_004e9b6d
    POP EDI                             ; 004e9b85
        ;   Label: LAB_004e9b85
    INC EBX                             ; 004e9b86
    IMUL EAX,dword ptr [0x01c5fad0],0x18 ; 004e9b87 | DAT_01c5fad0
        ;   Label: LAB_004e9b87
    MOV ECX,dword ptr [0x01d737e0]      ; 004e9b8e | DAT_01d737e0
    ADD ECX,EAX                         ; 004e9b94
    MOV dword ptr [0x01d737e0],ECX      ; 004e9b96 | DAT_01d737e0
    CMP ECX,0x80000                     ; 004e9b9c
    JL 0x004e9bb0                       ; 004e9ba2
        ;   XREF to: 004e9bb0 (CONDITIONAL_JUMP)  ; LAB_004e9bb0
    LEA EDI,[ECX + 0xfff80000]          ; 004e9ba4
    MOV dword ptr [0x01d737e0],EDI      ; 004e9baa | DAT_01d737e0
    PUSH 0x5c7883                       ; 004e9bb0 | = "Sound Options"
        ;   Label: LAB_004e9bb0
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9bb5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9bba
    PUSH EAX                            ; 004e9bbd
    PUSH 0xc8                           ; 004e9bbe
    LEA EAX,[ESP + 0xa0c]               ; 004e9bc3
    PUSH EAX                            ; 004e9bca
    PUSH EBX                            ; 004e9bcb
    PUSH 0x1d75450                      ; 004e9bcc
    CALL core_menu.cpp_FUN_004e7860     ; 004e9bd1
        ;   XREF to: 004e7860 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_FUN_004e7860(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 004e9bd6
    MOV EBX,EAX                         ; 004e9bd9
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 004e9bdb
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    MOV dword ptr [ESP + 0xa18],0x3e4ccccd ; 004e9be0
    CMP EBX,0x8                         ; 004e9beb
    JA 0x004e9d60                       ; 004e9bee
        ;   XREF to: 004e9d60 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4e94c0]  ; 004e9bf4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[ESP + 0x14]                ; 004e9bfb
        ;   Label: caseD_0
    PUSH EAX                            ; 004e9bff
    XOR EBX,EBX                         ; 004e9c00
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 004e9c02
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004e9c07
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430 ; 004e9c0a
        ;   XREF to: 00558430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430()
        ;   Label: LAB_004e9c0a
    CMP EBX,EAX                         ; 004e9c0f
    JGE 0x004e9cf5                      ; 004e9c11
        ;   XREF to: 004e9cf5 (CONDITIONAL_JUMP)  ; LAB_004e9cf5
    LEA EAX,[ESP + 0x4ec]               ; 004e9c17
    PUSH EAX                            ; 004e9c1e
    PUSH EBX                            ; 004e9c1f
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 004e9c20
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 004e9c25
    LEA EAX,[ESP + 0x4ec]               ; 004e9c28
    PUSH EAX                            ; 004e9c2f
    LEA EAX,[ESP + 0x18]                ; 004e9c30
    PUSH EAX                            ; 004e9c34
    INC EBX                             ; 004e9c35
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004e9c36
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004e9c3b
    JMP 0x004e9c0a                      ; 004e9c3e
        ;   XREF to: 004e9c0a (UNCONDITIONAL_JUMP)  ; LAB_004e9c0a
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430 ; 004e9c40
        ;   XREF to: 00558430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430()
        ;   Label: LAB_004e9c40
    CMP ESI,EAX                         ; 004e9c45
    JGE 0x004e95a4                      ; 004e9c47
        ;   XREF to: 004e95a4 (CONDITIONAL_JUMP)  ; LAB_004e95a4
    LEA EAX,[ESP + 0x3d4]               ; 004e9c4d
    PUSH EAX                            ; 004e9c54
    PUSH ESI                            ; 004e9c55
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 004e9c56
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 004e9c5b
    JMP 0x004e95b6                      ; 004e9c5e
        ;   XREF to: 004e95b6 (UNCONDITIONAL_JUMP)  ; LAB_004e95b6
    PUSH 0x5c776f                       ; 004e9c63 | DAT_005c776f
        ;   Label: LAB_004e9c63
    JMP 0x004e9669                      ; 004e9c68
        ;   XREF to: 004e9669 (UNCONDITIONAL_JUMP)  ; LAB_004e9669
    PUSH 0x5c7790                       ; 004e9c6d | = "Sound Effects Volume : Off"
        ;   Label: LAB_004e9c6d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9c72
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9c77
    PUSH EAX                            ; 004e9c7a
    MOV EDI,dword ptr [ESP + 0xa18]     ; 004e9c7b
    PUSH EDI                            ; 004e9c82
    MOV ESI,EBX                         ; 004e9c83
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9c85
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e9c8a
    JMP 0x004e9789                      ; 004e9c8d
        ;   XREF to: 004e9789 (UNCONDITIONAL_JUMP)  ; LAB_004e9789
    PUSH 0x5c77c2                       ; 004e9c92 | = "Dialog Volume : Off"
        ;   Label: LAB_004e9c92
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9c97
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9c9c
    PUSH EAX                            ; 004e9c9f
    PUSH EBX                            ; 004e9ca0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9ca1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e9ca6
    JMP 0x004e988d                      ; 004e9ca9
        ;   XREF to: 004e988d (UNCONDITIONAL_JUMP)  ; LAB_004e988d
    PUSH 0x5c77ec                       ; 004e9cae | = "Music Volume : Off"
        ;   Label: LAB_004e9cae
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9cb3
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9cb8
    PUSH EAX                            ; 004e9cbb
    MOV ESI,dword ptr [ESP + 0xa14]     ; 004e9cbc
    PUSH ESI                            ; 004e9cc3
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9cc4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e9cc9
    JMP 0x004e9999                      ; 004e9ccc
        ;   XREF to: 004e9999 (UNCONDITIONAL_JUMP)  ; LAB_004e9999
    PUSH 0x5c7840                       ; 004e9cd1 | = "Output Type : Stereo"
        ;   Label: LAB_004e9cd1
    JMP 0x004e9b1e                      ; 004e9cd6
        ;   XREF to: 004e9b1e (UNCONDITIONAL_JUMP)  ; LAB_004e9b1e
    JBE 0x004e9b19                      ; 004e9cdb
        ;   XREF to: 004e9b19 (CONDITIONAL_JUMP)  ; LAB_004e9b19
        ;   Label: LAB_004e9cdb
    CMP EAX,0x2                         ; 004e9ce1
    JZ 0x004e9cd1                       ; 004e9ce4
        ;   XREF to: 004e9cd1 (CONDITIONAL_JUMP)  ; LAB_004e9cd1
    JMP 0x004e9b19                      ; 004e9ce6
        ;   XREF to: 004e9b19 (UNCONDITIONAL_JUMP)  ; LAB_004e9b19
    PUSH 0x5c786e                       ; 004e9ceb | = "Hardware Mixing: Off"
        ;   Label: LAB_004e9ceb
    JMP 0x004e9b62                      ; 004e9cf0
        ;   XREF to: 004e9b62 (UNCONDITIONAL_JUMP)  ; LAB_004e9b62
    PUSH 0x0                            ; 004e9cf5
        ;   Label: LAB_004e9cf5
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_00558840 ; 004e9cf7
        ;   XREF to: 00558840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_00558840()
    PUSH EAX                            ; 004e9cfc
    PUSH 0x5c7891                       ; 004e9cfd | = "Select sound device"
    LEA EAX,[ESP + 0x20]                ; 004e9d02
    PUSH EAX                            ; 004e9d06
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450 ; 004e9d07
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV EBX,EAX                         ; 004e9d0c
    ADD ESP,0x10                        ; 004e9d0e
    TEST EAX,EAX                        ; 004e9d11
    JL 0x004e9d51                       ; 004e9d13
        ;   XREF to: 004e9d51 (CONDITIONAL_JUMP)  ; LAB_004e9d51
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005587e0 ; 004e9d15
        ;   XREF to: 005587e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005587e0()
    PUSH EBX                            ; 004e9d1a
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00558640 ; 004e9d1b
        ;   XREF to: 00558640 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_00558640(int device_id)
    ADD ESP,0x4                         ; 004e9d20
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00558730 ; 004e9d23
        ;   XREF to: 00558730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_00558730()
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0 ; 004e9d28
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0()
    TEST EAX,EAX                        ; 004e9d2d
    JLE 0x004e9d42                      ; 004e9d2f
        ;   XREF to: 004e9d42 (CONDITIONAL_JUMP)  ; LAB_004e9d42
    PUSH 0xac44                         ; 004e9d31
    PUSH 0x2                            ; 004e9d36
    PUSH 0x10                           ; 004e9d38
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00558290 ; 004e9d3a
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 004e9d3f
    MOV EDX,dword ptr [0x006045f8]      ; 004e9d42 | DAT_006045f8
        ;   Label: LAB_004e9d42
    PUSH EDX                            ; 004e9d48
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004e9d49
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004e9d4e
    PUSH 0x0                            ; 004e9d51
        ;   Label: LAB_004e9d51
    LEA EAX,[ESP + 0x18]                ; 004e9d53
    PUSH EAX                            ; 004e9d57
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 004e9d58
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e9d5d
        ;   Label: LAB_004e9d5d
    PUSH 0x1                            ; 004e9d60
        ;   Label: default
    MOV EAX,[0x00600284]                ; 004e9d62 | DAT_00600284
    PUSH EAX                            ; 004e9d67 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e9d68 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e9d6a
    ADD ESP,0x8                         ; 004e9d6d
    TEST EAX,EAX                        ; 004e9d70
    JZ 0x004e9532                       ; 004e9d72
        ;   XREF to: 004e9532 (CONDITIONAL_JUMP)  ; LAB_004e9532
    MOV ESP,EBP                         ; 004e9d78
    POP EBP                             ; 004e9d7a
    POP EDI                             ; 004e9d7b
    POP ESI                             ; 004e9d7c
    POP EBX                             ; 004e9d7d
    RET                                 ; 004e9d7e
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00556750 ; 004e9d7f
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00556750()
        ;   Label: caseD_1
    TEST EAX,EAX                        ; 004e9d84
    SETZ AL                             ; 004e9d86
    AND EAX,0xff                        ; 004e9d89
    PUSH EAX                            ; 004e9d8e
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00556760 ; 004e9d8f
        ;   XREF to: 00556760 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00556760(int muted)
    ADD ESP,0x4                         ; 004e9d94
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00556750 ; 004e9d97
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00556750()
    TEST EAX,EAX                        ; 004e9d9c
    JNZ 0x004e9d60                      ; 004e9d9e
        ;   XREF to: 004e9d60 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x006045f8]                ; 004e9da0 | DAT_006045f8
    PUSH EAX                            ; 004e9da5
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004e9da6
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004e9dab
    JMP 0x004e9d60                      ; 004e9dae
        ;   XREF to: 004e9d60 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x0                            ; 004e9db0
        ;   Label: caseD_2
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 004e9db2
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0xa20],EAX     ; 004e9db7
    FLD float ptr [ESP + 0xa20]         ; 004e9dbe
    FDIV float ptr [0x005e2924]         ; 004e9dc5 | DAT_005e2924
    ADD ESP,0x4                         ; 004e9dcb
    MOV EDX,dword ptr [0x01d737d4]      ; 004e9dce | DAT_01d737d4
    FSTP float ptr [ESP + 0x8]          ; 004e9dd4
    CMP EDX,0x1                         ; 004e9dd8
    JNZ 0x004e9e6f                      ; 004e9ddb
        ;   XREF to: 004e9e6f (CONDITIONAL_JUMP)  ; LAB_004e9e6f
    PUSH 0x0                            ; 004e9de1
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004e9de3
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 004e9de8
    TEST EAX,EAX                        ; 004e9deb
    JZ 0x004e9e59                       ; 004e9ded
        ;   XREF to: 004e9e59 (CONDITIONAL_JUMP)  ; LAB_004e9e59
    FLD float ptr [ESP + 0x8]           ; 004e9def
    FSUB float ptr [ESP + 0xa18]        ; 004e9df3
    FST float ptr [ESP + 0x8]           ; 004e9dfa
    FCOMP double ptr [0x005c78de]       ; 004e9dfe | DAT_005c78de
    FNSTSW AX                           ; 004e9e04
    SAHF                                ; 004e9e06
    JNC 0x004e9e19                      ; 004e9e07
        ;   XREF to: 004e9e19 (CONDITIONAL_JUMP)  ; LAB_004e9e19
    XOR EDI,EDI                         ; 004e9e09
    PUSH EDI                            ; 004e9e0b
    PUSH EDI                            ; 004e9e0c
    MOV dword ptr [ESP + 0x10],EDI      ; 004e9e0d
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004e9e11
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
        ;   Label: LAB_004e9e11
    ADD ESP,0x8                         ; 004e9e16
    FLD float ptr [ESP + 0x8]           ; 004e9e19
        ;   Label: LAB_004e9e19
    FMUL float ptr [0x005e2924]         ; 004e9e1d | DAT_005e2924
    SUB ESP,0x4                         ; 004e9e23
    FSTP float ptr [ESP]                ; 004e9e26
    PUSH 0x0                            ; 004e9e29
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 004e9e2b
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    ADD ESP,0x8                         ; 004e9e30
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 004e9e33
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x1                            ; 004e9e38
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00555f00 ; 004e9e3a
        ;   XREF to: 00555f00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_00555f00(uint flags)
    ADD ESP,0x4                         ; 004e9e3f
    PUSH 0x5c78a5                       ; 004e9e42 | = "colt45-0.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00556240 ; 004e9e47
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00556240(char * filename)
    ADD ESP,0x4                         ; 004e9e4c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 004e9e4f
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    JMP 0x004e9d60                      ; 004e9e54
        ;   XREF to: 004e9d60 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004e9e59
        ;   Label: LAB_004e9e59
    PUSH EAX                            ; 004e9e5b
    MOV ESI,0x3f800000                  ; 004e9e5c
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004e9e61
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004e9e66
    MOV dword ptr [ESP + 0x8],ESI       ; 004e9e69
    JMP 0x004e9e19                      ; 004e9e6d
        ;   XREF to: 004e9e19 (UNCONDITIONAL_JUMP)  ; LAB_004e9e19
    PUSH 0x0                            ; 004e9e6f
        ;   Label: LAB_004e9e6f
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004e9e71
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 004e9e76
    TEST EAX,EAX                        ; 004e9e79
    JZ 0x004e9ec4                       ; 004e9e7b
        ;   XREF to: 004e9ec4 (CONDITIONAL_JUMP)  ; LAB_004e9ec4
    FLD float ptr [ESP + 0x8]           ; 004e9e7d
    FADD float ptr [ESP + 0xa18]        ; 004e9e81
    FST float ptr [ESP + 0x8]           ; 004e9e88
    FCOMP double ptr [0x005c78c6]       ; 004e9e8c | DAT_005c78c6
    FNSTSW AX                           ; 004e9e92
    SAHF                                ; 004e9e94
    JA 0x004e9eb7                       ; 004e9e95
        ;   XREF to: 004e9eb7 (CONDITIONAL_JUMP)  ; LAB_004e9eb7
    FLD float ptr [ESP + 0x8]           ; 004e9e97
    FCOMP double ptr [0x005c78ce]       ; 004e9e9b | DAT_005c78ce
    FNSTSW AX                           ; 004e9ea1
    SAHF                                ; 004e9ea3
    JBE 0x004e9e19                      ; 004e9ea4
        ;   XREF to: 004e9e19 (CONDITIONAL_JUMP)  ; LAB_004e9e19
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004e9eaa
    JMP 0x004e9e19                      ; 004e9eb2
        ;   XREF to: 004e9e19 (UNCONDITIONAL_JUMP)  ; LAB_004e9e19
    XOR EBX,EBX                         ; 004e9eb7
        ;   Label: LAB_004e9eb7
    PUSH EBX                            ; 004e9eb9
    PUSH EBX                            ; 004e9eba
    MOV dword ptr [ESP + 0x10],EBX      ; 004e9ebb
    JMP 0x004e9e11                      ; 004e9ebf
        ;   XREF to: 004e9e11 (UNCONDITIONAL_JUMP)  ; LAB_004e9e11
    PUSH 0x1                            ; 004e9ec4
        ;   Label: LAB_004e9ec4
    PUSH EAX                            ; 004e9ec6
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004e9ec7
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004e9ecc
    MOV EAX,dword ptr [ESP + 0xa18]     ; 004e9ecf
    MOV dword ptr [ESP + 0x8],EAX       ; 004e9ed6
    JMP 0x004e9e19                      ; 004e9eda
        ;   XREF to: 004e9e19 (UNCONDITIONAL_JUMP)  ; LAB_004e9e19
    PUSH 0x2                            ; 004e9edf
        ;   Label: caseD_3
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 004e9ee1
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0xa20],EAX     ; 004e9ee6
    FLD float ptr [ESP + 0xa20]         ; 004e9eed
    FDIV float ptr [0x005e2928]         ; 004e9ef4 | DAT_005e2928
    ADD ESP,0x4                         ; 004e9efa
    MOV ECX,dword ptr [0x01d737d4]      ; 004e9efd | DAT_01d737d4
    FSTP float ptr [ESP + 0x10]         ; 004e9f03
    CMP ECX,0x1                         ; 004e9f07
    JNZ 0x004e9f78                      ; 004e9f0a
        ;   XREF to: 004e9f78 (CONDITIONAL_JUMP)  ; LAB_004e9f78
    PUSH 0x2                            ; 004e9f0c
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004e9f0e
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 004e9f13
    TEST EAX,EAX                        ; 004e9f16
    JZ 0x004e9f61                       ; 004e9f18
        ;   XREF to: 004e9f61 (CONDITIONAL_JUMP)  ; LAB_004e9f61
    FLD float ptr [ESP + 0x10]          ; 004e9f1a
    FSUB float ptr [ESP + 0xa18]        ; 004e9f1e
    FST float ptr [ESP + 0x10]          ; 004e9f25
    FCOMP double ptr [0x005c78de]       ; 004e9f29 | DAT_005c78de
    FNSTSW AX                           ; 004e9f2f
    SAHF                                ; 004e9f31
    JNC 0x004e9f45                      ; 004e9f32
        ;   XREF to: 004e9f45 (CONDITIONAL_JUMP)  ; LAB_004e9f45
    XOR EAX,EAX                         ; 004e9f34
    PUSH EAX                            ; 004e9f36
    PUSH 0x2                            ; 004e9f37
    MOV dword ptr [ESP + 0x18],EAX      ; 004e9f39
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004e9f3d
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
        ;   Label: LAB_004e9f3d
    ADD ESP,0x8                         ; 004e9f42
    FLD float ptr [ESP + 0x10]          ; 004e9f45
        ;   Label: LAB_004e9f45
    FMUL float ptr [0x005e2928]         ; 004e9f49 | DAT_005e2928
    SUB ESP,0x4                         ; 004e9f4f
    FSTP float ptr [ESP]                ; 004e9f52
    PUSH 0x2                            ; 004e9f55
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 004e9f57
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    JMP 0x004e9d5d                      ; 004e9f5c
        ;   XREF to: 004e9d5d (UNCONDITIONAL_JUMP)  ; LAB_004e9d5d
    PUSH 0x1                            ; 004e9f61
        ;   Label: LAB_004e9f61
    PUSH 0x2                            ; 004e9f63
    MOV EDI,0x3f800000                  ; 004e9f65
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004e9f6a
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004e9f6f
    MOV dword ptr [ESP + 0x10],EDI      ; 004e9f72
    JMP 0x004e9f45                      ; 004e9f76
        ;   XREF to: 004e9f45 (UNCONDITIONAL_JUMP)  ; LAB_004e9f45
    PUSH 0x2                            ; 004e9f78
        ;   Label: LAB_004e9f78
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004e9f7a
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 004e9f7f
    TEST EAX,EAX                        ; 004e9f82
    JZ 0x004e9fc7                       ; 004e9f84
        ;   XREF to: 004e9fc7 (CONDITIONAL_JUMP)  ; LAB_004e9fc7
    FLD float ptr [ESP + 0x10]          ; 004e9f86
    FADD float ptr [ESP + 0xa18]        ; 004e9f8a
    FST float ptr [ESP + 0x10]          ; 004e9f91
    FCOMP double ptr [0x005c78c6]       ; 004e9f95 | DAT_005c78c6
    FNSTSW AX                           ; 004e9f9b
    SAHF                                ; 004e9f9d
    JA 0x004e9fb9                       ; 004e9f9e
        ;   XREF to: 004e9fb9 (CONDITIONAL_JUMP)  ; LAB_004e9fb9
    FLD float ptr [ESP + 0x10]          ; 004e9fa0
    FCOMP double ptr [0x005c78ce]       ; 004e9fa4 | DAT_005c78ce
    FNSTSW AX                           ; 004e9faa
    SAHF                                ; 004e9fac
    JBE 0x004e9f45                      ; 004e9fad
        ;   XREF to: 004e9f45 (CONDITIONAL_JUMP)  ; LAB_004e9f45
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 004e9faf
    JMP 0x004e9f45                      ; 004e9fb7
        ;   XREF to: 004e9f45 (UNCONDITIONAL_JUMP)  ; LAB_004e9f45
    XOR ESI,ESI                         ; 004e9fb9
        ;   Label: LAB_004e9fb9
    PUSH ESI                            ; 004e9fbb
    PUSH 0x2                            ; 004e9fbc
    MOV dword ptr [ESP + 0x18],ESI      ; 004e9fbe
    JMP 0x004e9f3d                      ; 004e9fc2
        ;   XREF to: 004e9f3d (UNCONDITIONAL_JUMP)  ; LAB_004e9f3d
    PUSH 0x1                            ; 004e9fc7
        ;   Label: LAB_004e9fc7
    PUSH 0x2                            ; 004e9fc9
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004e9fcb
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004e9fd0
    MOV EAX,dword ptr [ESP + 0xa18]     ; 004e9fd3
    MOV dword ptr [ESP + 0x10],EAX      ; 004e9fda
    JMP 0x004e9f45                      ; 004e9fde
        ;   XREF to: 004e9f45 (UNCONDITIONAL_JUMP)  ; LAB_004e9f45
    PUSH 0x1                            ; 004e9fe3
        ;   Label: caseD_4
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 004e9fe5
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0xa20],EAX     ; 004e9fea
    FLD float ptr [ESP + 0xa20]         ; 004e9ff1
    FDIV float ptr [0x005e2920]         ; 004e9ff8 | DAT_005e2920
    ADD ESP,0x4                         ; 004e9ffe
    MOV EAX,[0x01d737d4]                ; 004ea001 | DAT_01d737d4
    FSTP float ptr [ESP + 0xc]          ; 004ea006
    CMP EAX,0x1                         ; 004ea00a
    JNZ 0x004ea08c                      ; 004ea00d
        ;   XREF to: 004ea08c (CONDITIONAL_JUMP)  ; LAB_004ea08c
    PUSH EAX                            ; 004ea013
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004ea014
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 004ea019
    TEST EAX,EAX                        ; 004ea01c
    JZ 0x004ea066                       ; 004ea01e
        ;   XREF to: 004ea066 (CONDITIONAL_JUMP)  ; LAB_004ea066
    FLD float ptr [ESP + 0xc]           ; 004ea020
    FADD float ptr [0x005c78d6]         ; 004ea024 | DAT_005c78d6
    FST float ptr [ESP + 0xc]           ; 004ea02a
    FCOMP double ptr [0x005c78de]       ; 004ea02e | DAT_005c78de
    FNSTSW AX                           ; 004ea034
    SAHF                                ; 004ea036
    JNC 0x004ea04a                      ; 004ea037
        ;   XREF to: 004ea04a (CONDITIONAL_JUMP)  ; LAB_004ea04a
    XOR EDX,EDX                         ; 004ea039
    PUSH EDX                            ; 004ea03b
    PUSH 0x1                            ; 004ea03c
    MOV dword ptr [ESP + 0x14],EDX      ; 004ea03e
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004ea042
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
        ;   Label: LAB_004ea042
    ADD ESP,0x8                         ; 004ea047
    FLD float ptr [ESP + 0xc]           ; 004ea04a
        ;   Label: LAB_004ea04a
    FMUL float ptr [0x005e2920]         ; 004ea04e | DAT_005e2920
    SUB ESP,0x4                         ; 004ea054
    FSTP float ptr [ESP]                ; 004ea057
    PUSH 0x1                            ; 004ea05a
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 004ea05c
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    JMP 0x004e9d5d                      ; 004ea061
        ;   XREF to: 004e9d5d (UNCONDITIONAL_JUMP)  ; LAB_004e9d5d
    PUSH 0x1                            ; 004ea066
        ;   Label: LAB_004ea066
    PUSH 0x1                            ; 004ea068
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004ea06a
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004ea06f
    MOV EDI,dword ptr [0x006045f8]      ; 004ea072 | DAT_006045f8
    PUSH EDI                            ; 004ea078
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004ea079
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    MOV EAX,0x3f800000                  ; 004ea07e
    ADD ESP,0x4                         ; 004ea083
    MOV dword ptr [ESP + 0xc],EAX       ; 004ea086
    JMP 0x004ea04a                      ; 004ea08a
        ;   XREF to: 004ea04a (UNCONDITIONAL_JUMP)  ; LAB_004ea04a
    PUSH 0x1                            ; 004ea08c
        ;   Label: LAB_004ea08c
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 004ea08e
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 004ea093
    TEST EAX,EAX                        ; 004ea096
    JZ 0x004ea0df                       ; 004ea098
        ;   XREF to: 004ea0df (CONDITIONAL_JUMP)  ; LAB_004ea0df
    FLD float ptr [ESP + 0xc]           ; 004ea09a
    FADD float ptr [0x005c78be]         ; 004ea09e | DAT_005c78be
    FST float ptr [ESP + 0xc]           ; 004ea0a4
    FST double ptr [ESP]                ; 004ea0a8
    FCOMP double ptr [0x005c78c6]       ; 004ea0ab | DAT_005c78c6
    FNSTSW AX                           ; 004ea0b1
    SAHF                                ; 004ea0b3
    JA 0x004ea0d1                       ; 004ea0b4
        ;   XREF to: 004ea0d1 (CONDITIONAL_JUMP)  ; LAB_004ea0d1
    FLD double ptr [ESP]                ; 004ea0b6
    FCOMP double ptr [0x005c78ce]       ; 004ea0b9 | DAT_005c78ce
    FNSTSW AX                           ; 004ea0bf
    SAHF                                ; 004ea0c1
    JBE 0x004ea04a                      ; 004ea0c2
        ;   XREF to: 004ea04a (CONDITIONAL_JUMP)  ; LAB_004ea04a
    MOV dword ptr [ESP + 0xc],0x3f800000 ; 004ea0c4
    JMP 0x004ea04a                      ; 004ea0cc
        ;   XREF to: 004ea04a (UNCONDITIONAL_JUMP)  ; LAB_004ea04a
    XOR ESI,ESI                         ; 004ea0d1
        ;   Label: LAB_004ea0d1
    PUSH ESI                            ; 004ea0d3
    PUSH 0x1                            ; 004ea0d4
    MOV dword ptr [ESP + 0x14],ESI      ; 004ea0d6
    JMP 0x004ea042                      ; 004ea0da
        ;   XREF to: 004ea042 (UNCONDITIONAL_JUMP)  ; LAB_004ea042
    PUSH 0x1                            ; 004ea0df
        ;   Label: LAB_004ea0df
    PUSH 0x1                            ; 004ea0e1
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 004ea0e3
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004ea0e8
    MOV EDX,dword ptr [0x006045f8]      ; 004ea0eb | DAT_006045f8
    PUSH EDX                            ; 004ea0f1
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004ea0f2
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    MOV ECX,0x3e4ccccd                  ; 004ea0f7
    ADD ESP,0x4                         ; 004ea0fc
    MOV dword ptr [ESP + 0xc],ECX       ; 004ea0ff
    JMP 0x004ea04a                      ; 004ea103
        ;   XREF to: 004ea04a (UNCONDITIONAL_JUMP)  ; LAB_004ea04a
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_00558390 ; 004ea108
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_00558390()
        ;   Label: caseD_5
    MOV ESI,dword ptr [0x01d737d4]      ; 004ea10d | DAT_01d737d4
    MOV EBX,EAX                         ; 004ea113
    CMP ESI,0x1                         ; 004ea115
    JNZ 0x004ea178                      ; 004ea118
        ;   XREF to: 004ea178 (CONDITIONAL_JUMP)  ; LAB_004ea178
    CMP EAX,0x5622                      ; 004ea11a
    JNZ 0x004ea163                      ; 004ea11f
        ;   XREF to: 004ea163 (CONDITIONAL_JUMP)  ; LAB_004ea163
    MOV EBX,0x2b2a                      ; 004ea121
        ;   Label: LAB_004ea121
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0 ; 004ea126
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0()
        ;   Label: LAB_004ea126
    TEST EAX,EAX                        ; 004ea12b
    JLE 0x004ea134                      ; 004ea12d
        ;   XREF to: 004ea134 (CONDITIONAL_JUMP)  ; LAB_004ea134
    MOV EBX,0xac44                      ; 004ea12f
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_00558390 ; 004ea134
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_00558390()
        ;   Label: LAB_004ea134
    CMP EBX,EAX                         ; 004ea139
    JZ 0x004e9d60                       ; 004ea13b
        ;   XREF to: 004e9d60 (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00558250 ; 004ea141
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00558250()
    PUSH EBX                            ; 004ea146
    CALL sound_sndmain.cpp_setAudioSampleRate_FUN_00558410 ; 004ea147
        ;   XREF to: 00558410 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioSampleRate_FUN_00558410(int sample_rate)
    ADD ESP,0x4                         ; 004ea14c
    MOV EDI,dword ptr [0x006045f8]      ; 004ea14f | DAT_006045f8
    PUSH EDI                            ; 004ea155
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004ea156
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ea15b
    JMP 0x004e9d60                      ; 004ea15e
        ;   XREF to: 004e9d60 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,0xac44                      ; 004ea163
        ;   Label: LAB_004ea163
    JNZ 0x004ea171                      ; 004ea168
        ;   XREF to: 004ea171 (CONDITIONAL_JUMP)  ; LAB_004ea171
    MOV EBX,0x5622                      ; 004ea16a
    JMP 0x004ea126                      ; 004ea16f
        ;   XREF to: 004ea126 (UNCONDITIONAL_JUMP)  ; LAB_004ea126
    MOV EBX,0xac44                      ; 004ea171
        ;   Label: LAB_004ea171
    JMP 0x004ea126                      ; 004ea176
        ;   XREF to: 004ea126 (UNCONDITIONAL_JUMP)  ; LAB_004ea126
    CMP EAX,0x5622                      ; 004ea178
        ;   Label: LAB_004ea178
    JGE 0x004ea186                      ; 004ea17d
        ;   XREF to: 004ea186 (CONDITIONAL_JUMP)  ; LAB_004ea186
    MOV EBX,0x5622                      ; 004ea17f
    JMP 0x004ea126                      ; 004ea184
        ;   XREF to: 004ea126 (UNCONDITIONAL_JUMP)  ; LAB_004ea126
    CMP EAX,0xac44                      ; 004ea186
        ;   Label: LAB_004ea186
    JGE 0x004ea121                      ; 004ea18b
        ;   XREF to: 004ea121 (CONDITIONAL_JUMP)  ; LAB_004ea121
    MOV EBX,0xac44                      ; 004ea18d
    JMP 0x004ea126                      ; 004ea192
        ;   XREF to: 004ea126 (UNCONDITIONAL_JUMP)  ; LAB_004ea126
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_00558370 ; 004ea194
        ;   XREF to: 00558370 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_00558370()
        ;   Label: caseD_6
    CMP EAX,0x10                        ; 004ea199
    JNZ 0x004ea1e0                      ; 004ea19c
        ;   XREF to: 004ea1e0 (CONDITIONAL_JUMP)  ; LAB_004ea1e0
    MOV EBX,0x8                         ; 004ea19e
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0 ; 004ea1a3
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0()
        ;   Label: LAB_004ea1a3
    TEST EAX,EAX                        ; 004ea1a8
    JLE 0x004ea1b1                      ; 004ea1aa
        ;   XREF to: 004ea1b1 (CONDITIONAL_JUMP)  ; LAB_004ea1b1
    MOV EBX,0x10                        ; 004ea1ac
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_00558370 ; 004ea1b1
        ;   XREF to: 00558370 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_00558370()
        ;   Label: LAB_004ea1b1
    CMP EBX,EAX                         ; 004ea1b6
    JZ 0x004e9d60                       ; 004ea1b8
        ;   XREF to: 004e9d60 (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00558250 ; 004ea1be
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00558250()
    PUSH EBX                            ; 004ea1c3
    CALL sound_sndmain.cpp_setAudioBitDepth_FUN_005583d0 ; 004ea1c4
        ;   XREF to: 005583d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioBitDepth_FUN_005583d0(int bit_depth)
    ADD ESP,0x4                         ; 004ea1c9
    MOV EBX,dword ptr [0x006045f8]      ; 004ea1cc | DAT_006045f8
    PUSH EBX                            ; 004ea1d2
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004ea1d3
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ea1d8
    JMP 0x004e9d60                      ; 004ea1db
        ;   XREF to: 004e9d60 (UNCONDITIONAL_JUMP)  ; default
    MOV EBX,0x10                        ; 004ea1e0
        ;   Label: LAB_004ea1e0
    JMP 0x004ea1a3                      ; 004ea1e5
        ;   XREF to: 004ea1a3 (UNCONDITIONAL_JUMP)  ; LAB_004ea1a3
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0 ; 004ea1e7
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0()
        ;   Label: caseD_7
    CMP EAX,0x1                         ; 004ea1ec
    SETZ AL                             ; 004ea1ef
    AND EAX,0xff                        ; 004ea1f2
    LEA EBX,[EAX + 0x1]                 ; 004ea1f7
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0 ; 004ea1fa
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0()
    TEST EAX,EAX                        ; 004ea1ff
    JLE 0x004ea208                      ; 004ea201
        ;   XREF to: 004ea208 (CONDITIONAL_JUMP)  ; LAB_004ea208
    MOV EBX,0x2                         ; 004ea203
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0 ; 004ea208
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0()
        ;   Label: LAB_004ea208
    CMP EBX,EAX                         ; 004ea20d
    JZ 0x004e9d60                       ; 004ea20f
        ;   XREF to: 004e9d60 (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00558250 ; 004ea215
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00558250()
    PUSH EBX                            ; 004ea21a
    CALL sound_sndmain.cpp_setAudioChannelCount_FUN_005583f0 ; 004ea21b
        ;   XREF to: 005583f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioChannelCount_FUN_005583f0(int channel_count)
    ADD ESP,0x4                         ; 004ea220
    MOV ECX,dword ptr [0x006045f8]      ; 004ea223 | DAT_006045f8
    PUSH ECX                            ; 004ea229
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004ea22a
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ea22f
    JMP 0x004e9d60                      ; 004ea232
        ;   XREF to: 004e9d60 (UNCONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005587e0 ; 004ea237
        ;   XREF to: 005587e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005587e0()
        ;   Label: caseD_8
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0 ; 004ea23c
        ;   XREF to: 005586e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0()
    TEST EAX,EAX                        ; 004ea241
    JLE 0x004ea268                      ; 004ea243
        ;   XREF to: 004ea268 (CONDITIONAL_JUMP)  ; LAB_004ea268
    PUSH 0x0                            ; 004ea245
    CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_005586f0 ; 004ea247
        ;   XREF to: 005586f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableHwSoundMixing_FUN_005586f0(int enable)
        ;   Label: LAB_004ea247
    ADD ESP,0x4                         ; 004ea24c
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00558730 ; 004ea24f
        ;   XREF to: 00558730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_00558730()
    MOV EDX,dword ptr [0x006045f8]      ; 004ea254 | DAT_006045f8
    PUSH EDX                            ; 004ea25a
    CALL core_sound.cpp_CSound_configure_FUN_005607d0 ; 004ea25b
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005607d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ea260
    JMP 0x004e9d60                      ; 004ea263
        ;   XREF to: 004e9d60 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x2                            ; 004ea268
        ;   Label: LAB_004ea268
    JMP 0x004ea247                      ; 004ea26a
        ;   XREF to: 004ea247 (UNCONDITIONAL_JUMP)  ; LAB_004ea247

