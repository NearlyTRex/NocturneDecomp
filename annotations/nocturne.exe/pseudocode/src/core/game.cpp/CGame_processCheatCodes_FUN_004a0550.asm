; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x334]:1  local_334
; undefined4       Stack[-0x330]:4  local_330
; undefined4       Stack[-0x298]:4  local_298
; undefined4       Stack[-0x294]:4  local_294
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0xc8]:4  local_c8
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a63e7
;
; Referenced Globals:
;   TerminatedCString s_Enter_Movie_FPS_005822e6
;   TerminatedCString s_Enter_number_of_frames_t_005822f6
;   TerminatedCString s_Enter_image_width_00582340
;   TerminatedCString s_Enter_image_height_00582352
;   TerminatedCString s_Press_CTRL_V_to_begin_re_00582365
;   TerminatedCString s_cheat_1_wav_00582b89
;   TerminatedCString s_headOfHorror_00582b95
;   TerminatedCString s_The_horror_has_been_unle_00582ba2
;   TerminatedCString s_cheat_1_wav_00582bc1
;   TerminatedCString s_Enter_cheat_code_00582bcd
;   byte[54] BYTE_ARRAY_00582bde
;   TerminatedCString s_Quit_cheating_00582c14
;   TerminatedCString s_Buy_Fly_today_00582c25
;   TerminatedCString s_buy_fly_today_wav_4_0_00582c35
;   byte[52] BYTE_ARRAY_00582c4d
;   ... and 180 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_event.cpp_CEventList_validateCommands_FUN_0047dcd0
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   core_game.cpp_giveHeroWeapon_FUN_004a02e0
;   ... and 26 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0550
        ;   Label: core_game.cpp_CGame_processCheatCodes_FUN_004a0550
    PUSH ESI                            ; 004a0551
    PUSH EDI                            ; 004a0552
    PUSH EBP                            ; 004a0553
    MOV EBP,ESP                         ; 004a0554
    SUB ESP,0x484                       ; 004a0556
    AND ESP,0xfffffff8                  ; 004a055c
    CMP dword ptr [0x01c78420],0x0      ; 004a055f | DAT_01c78420
    JZ 0x004a056f                       ; 004a0566
        ;   XREF to: 004a056f (CONDITIONAL_JUMP)  ; LAB_004a056f
    MOV ESP,EBP                         ; 004a0568
        ;   Label: LAB_004a0568
    POP EBP                             ; 004a056a
    POP EDI                             ; 004a056b
    POP ESI                             ; 004a056c
    POP EBX                             ; 004a056d
    RET                                 ; 004a056e
    PUSH 0x582b95                       ; 004a056f | = "headOfHorror"
        ;   Label: LAB_004a056f
    MOV ECX,dword ptr [0x005b7650]      ; 004a0574 | DAT_005b7650
    PUSH ECX                            ; 004a057a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004a057b
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a0580
    TEST EAX,EAX                        ; 004a0583
    JZ 0x004a05d7                       ; 004a0585
        ;   XREF to: 004a05d7 (CONDITIONAL_JUMP)  ; LAB_004a05d7
    MOV EAX,[0x005b9354]                ; 004a0587 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x214],0x29a   ; 004a058c | g_CGame_01c775ec.head_of_horror_cheat
    JZ 0x004a05d7                       ; 004a0596
        ;   XREF to: 004a05d7 (CONDITIONAL_JUMP)  ; LAB_004a05d7
    PUSH 0x40a00000                     ; 004a0598
    PUSH 0x582ba2                       ; 004a059d | = "The horror has been unleashed."
    MOV dword ptr [EAX + 0x214],0x29a   ; 004a05a2 | g_CGame_01c775ec.head_of_horror_cheat
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a05ac
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a05b1
    PUSH EAX                            ; 004a05b4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a05b5
    PUSH ESI                            ; 004a05b8
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a05b9
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a05be
    PUSH 0x582bc1                       ; 004a05c1 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a05c6
    MOV EDI,dword ptr [0x005bed68]      ; 004a05c8 | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004a05ce
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a05cf
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a05d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a05d7
        ;   Label: LAB_004a05d7
    CMP dword ptr [EAX + 0x1dc],0x0     ; 004a05da
    JZ 0x004a1e3e                       ; 004a05e1
        ;   XREF to: 004a1e3e (CONDITIONAL_JUMP)  ; LAB_004a1e3e
    LEA EAX,[EAX]                       ; 004a05e7
    LEA EDX,[EDX]                       ; 004a05ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a05f0
        ;   Label: LAB_004a05f0
    ADD EAX,0x1ec                       ; 004a05f3
    MOV dword ptr [ESP + 0x310],EAX     ; 004a05f8
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00558b70 ; 004a05ff
        ;   XREF to: 00558b70 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00558b70()
        ;   Label: LAB_004a05ff
    TEST EAX,EAX                        ; 004a0604
    JZ 0x004a0568                       ; 004a0606
        ;   XREF to: 004a0568 (CONDITIONAL_JUMP)  ; LAB_004a0568
    MOV EBX,dword ptr [0x005bac64]      ; 004a060c | g_CKeys_PTR_005bac64
    PUSH EBX                            ; 004a0612 | g_CKeys_01cc30e4
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0 ; 004a0613
        ;   XREF to: 004c41d0 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(CKeys * this_ptr)
    MOV EBX,0x13                        ; 004a0618
    ADD ESP,0x4                         ; 004a061d
    MOV AH,AL                           ; 004a0620
    DEC EBX                             ; 004a0622
        ;   Label: LAB_004a0622
    MOV AL,byte ptr [EBX + 0x1c78af0]   ; 004a0623 | DAT_01c78b02 | DAT_01c78b01
    MOV byte ptr [EBX + 0x1c78af1],AL   ; 004a0629 | DAT_01c78b03 | DAT_01c78b02
    TEST EBX,EBX                        ; 004a062f
    JG 0x004a0622                       ; 004a0631
        ;   XREF to: 004a0622 (CONDITIONAL_JUMP)  ; LAB_004a0622
    PUSH 0x582bde                       ; 004a0633 | BYTE_ARRAY_00582bde
    MOV byte ptr [0x01c78af0],AH        ; 004a0638 | DAT_01c78af0
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a063e
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a0643
    ADD ESP,0x4                         ; 004a0645
    MOV EDI,EAX                         ; 004a0648
    MOV EBX,EAX                         ; 004a064a
    SUB ECX,ECX                         ; 004a064c
    DEC ECX                             ; 004a064e
    XOR EAX,EAX                         ; 004a064f
    SCASB.REPNE ES:EDI                  ; 004a0651
    NOT ECX                             ; 004a0653
    DEC ECX                             ; 004a0655
    MOV dword ptr [ESP + 0x204],ESI     ; 004a0656
    MOV dword ptr [ESP + 0x200],ECX     ; 004a065d
    TEST ECX,ECX                        ; 004a0664
    JLE 0x004a06a0                      ; 004a0666
        ;   XREF to: 004a06a0 (CONDITIONAL_JUMP)  ; LAB_004a06a0
    MOV EAX,ECX                         ; 004a0668
    NEG EAX                             ; 004a066a
    MOV EDI,ECX                         ; 004a066c
    ADD ECX,EAX                         ; 004a066e
    MOV dword ptr [ESP + 0x3d0],ECX     ; 004a0670
    XOR EAX,EAX                         ; 004a0677
        ;   Label: LAB_004a0677
    MOV AL,byte ptr [EBX]               ; 004a0679
    PUSH EAX                            ; 004a067b
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a067c | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0683
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0688
    CMP ESI,EAX                         ; 004a068b
    JZ 0x004a1ebb                       ; 004a068d
        ;   XREF to: 004a1ebb (CONDITIONAL_JUMP)  ; LAB_004a1ebb
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 004a0693
        ;   Label: LAB_004a0693
    DEC EDI                             ; 004a069a
    INC EBX                             ; 004a069b
    CMP EDI,EAX                         ; 004a069c
    JG 0x004a0677                       ; 004a069e
        ;   XREF to: 004a0677 (CONDITIONAL_JUMP)  ; LAB_004a0677
    MOV EAX,dword ptr [ESP + 0x204]     ; 004a06a0
        ;   Label: LAB_004a06a0
    CMP EAX,dword ptr [ESP + 0x200]     ; 004a06a7
    JNZ 0x004a0773                      ; 004a06ae
        ;   XREF to: 004a0773 (CONDITIONAL_JUMP)  ; LAB_004a0773
    PUSH 0x40a00000                     ; 004a06b4
    XOR DH,DH                           ; 004a06b9
    PUSH 0x582c14                       ; 004a06bb | = "Quit cheating!!!"
    MOV byte ptr [0x01c78af0],DH        ; 004a06c0 | DAT_01c78af0
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a06c6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a06cb
    PUSH EAX                            ; 004a06ce
    MOV ECX,dword ptr [EBP + 0x14]      ; 004a06cf
    PUSH ECX                            ; 004a06d2
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a06d3
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a06d8
    LEA EAX,[ESP + 0x164]               ; 004a06db
    PUSH EAX                            ; 004a06e2
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004a06e3
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004a06e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a06eb
    MOV dword ptr [EAX + 0x1d0],0x0     ; 004a06ee
    MOV dword ptr [EAX + 0x22c],0x1     ; 004a06f8
    MOV EAX,[0x01cae0e8]                ; 004a0702 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a0707
    FLD float ptr [EAX + 0x2434]        ; 004a070e
    FADD double ptr [0x00583aea]        ; 004a0714 | DOUBLE_00583aea
    FSTP float ptr [ESP + 0x168]        ; 004a071a
    CMP dword ptr [ESP + 0x168],0x41200000 ; 004a0721
    JGE 0x004a0739                      ; 004a072c
        ;   XREF to: 004a0739 (CONDITIONAL_JUMP)  ; LAB_004a0739
    MOV dword ptr [ESP + 0x168],0x41200000 ; 004a072e
    PUSH 0x0                            ; 004a0739
        ;   Label: LAB_004a0739
    MOV EDI,dword ptr [0x005c15b8]      ; 004a073b | DAT_005c15b8
    PUSH 0x3f000000                     ; 004a0741
    PUSH EDI                            ; 004a0746
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40 ; 004a0747
        ;   XREF to: 00554d40 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 004a074c
    LEA ESI,[ESP + 0x164]               ; 004a074f
    MOV EAX,[0x01cae0e8]                ; 004a0756 | DAT_01cae0e8
    PUSH ESI                            ; 004a075b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a075c
    PUSH EAX                            ; 004a0763
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004a0764
    CALL dword ptr [EBX + 0x100]        ; 004a076a
    ADD ESP,0x8                         ; 004a0770
    CMP byte ptr [0x01c78af8],0x47      ; 004a0773 | DAT_01c78af8
        ;   Label: LAB_004a0773
    JNZ 0x004a082a                      ; 004a077a
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af7],0x4f      ; 004a0780 | DAT_01c78af7
    JNZ 0x004a082a                      ; 004a0787
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af6],0x4c      ; 004a078d | DAT_01c78af6
    JNZ 0x004a082a                      ; 004a0794
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af5],0x44      ; 004a079a | DAT_01c78af5
    JNZ 0x004a082a                      ; 004a07a1
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af4],0x42      ; 004a07a7 | DAT_01c78af4
    JNZ 0x004a082a                      ; 004a07ae
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af3],0x52      ; 004a07b4 | DAT_01c78af3
    JNZ 0x004a082a                      ; 004a07bb
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af2],0x49      ; 004a07bd | DAT_01c78af2
    JNZ 0x004a082a                      ; 004a07c4
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af1],0x43      ; 004a07c6 | DAT_01c78af1
    JNZ 0x004a082a                      ; 004a07cd
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    CMP byte ptr [0x01c78af0],0x4b      ; 004a07cf | DAT_01c78af0
    JNZ 0x004a082a                      ; 004a07d6
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    PUSH 0x40a00000                     ; 004a07d8
    PUSH 0x582c25                       ; 004a07dd | = "Buy Fly! today!"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a07e2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a07e7
    PUSH EAX                            ; 004a07ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a07eb
    PUSH EAX                            ; 004a07ee
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a07ef
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a07f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a07f7
    CMP dword ptr [EAX + 0x210],0x0     ; 004a07fa
    SETZ AL                             ; 004a0801
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a0804
    AND EAX,0xff                        ; 004a0807
    MOV dword ptr [EBX + 0x210],EAX     ; 004a080c
    JZ 0x004a082a                       ; 004a0812
        ;   XREF to: 004a082a (CONDITIONAL_JUMP)  ; LAB_004a082a
    PUSH 0x582c35                       ; 004a0814 | = "buy-fly-today.wav @ 4.0"
    PUSH 0x0                            ; 004a0819
    MOV EBX,dword ptr [0x005bed68]      ; 004a081b | g_CSound_PTR_005bed68
    PUSH EBX                            ; 004a0821
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a0822
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a0827
    PUSH 0x582c4d                       ; 004a082a | BYTE_ARRAY_00582c4d
        ;   Label: LAB_004a082a
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a082f
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a0834
    ADD ESP,0x4                         ; 004a0836
    MOV EDI,EAX                         ; 004a0839
    MOV EBX,EAX                         ; 004a083b
    SUB ECX,ECX                         ; 004a083d
    DEC ECX                             ; 004a083f
    XOR EAX,EAX                         ; 004a0840
    SCASB.REPNE ES:EDI                  ; 004a0842
    NOT ECX                             ; 004a0844
    DEC ECX                             ; 004a0846
    MOV dword ptr [ESP + 0x20c],ESI     ; 004a0847
    MOV dword ptr [ESP + 0x208],ECX     ; 004a084e
    TEST ECX,ECX                        ; 004a0855
    JLE 0x004a0894                      ; 004a0857
        ;   XREF to: 004a0894 (CONDITIONAL_JUMP)  ; LAB_004a0894
    MOV EAX,ECX                         ; 004a0859
    NEG EAX                             ; 004a085b
    MOV EDI,ECX                         ; 004a085d
    ADD ECX,EAX                         ; 004a085f
    MOV dword ptr [ESP + 0x3d4],ECX     ; 004a0861
    XOR EAX,EAX                         ; 004a0868
        ;   Label: LAB_004a0868
    MOV AL,byte ptr [EBX]               ; 004a086a
    PUSH EAX                            ; 004a086c
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a086d | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0874
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0879
    CMP ESI,EAX                         ; 004a087c
    JNZ 0x004a0887                      ; 004a087e
        ;   XREF to: 004a0887 (CONDITIONAL_JUMP)  ; LAB_004a0887
    INC dword ptr [ESP + 0x20c]         ; 004a0880
    MOV EDX,dword ptr [ESP + 0x3d4]     ; 004a0887
        ;   Label: LAB_004a0887
    DEC EDI                             ; 004a088e
    INC EBX                             ; 004a088f
    CMP EDI,EDX                         ; 004a0890
    JG 0x004a0868                       ; 004a0892
        ;   XREF to: 004a0868 (CONDITIONAL_JUMP)  ; LAB_004a0868
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004a0894
        ;   Label: LAB_004a0894
    CMP EAX,dword ptr [ESP + 0x208]     ; 004a089b
    JNZ 0x004a08de                      ; 004a08a2
        ;   XREF to: 004a08de (CONDITIONAL_JUMP)  ; LAB_004a08de
    XOR BH,BH                           ; 004a08a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a08a6
    MOV byte ptr [0x01c78af0],BH        ; 004a08a9 | DAT_01c78af0
    CMP dword ptr [EAX + 0x208],0x0     ; 004a08af
    JNZ 0x004a1ec7                      ; 004a08b6
        ;   XREF to: 004a1ec7 (CONDITIONAL_JUMP)  ; LAB_004a1ec7
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a08bc
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a08bf
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV dword ptr [EBX + 0x26c],0x0     ; 004a08c4
    MOV dword ptr [EBX + 0x208],0x1     ; 004a08ce
    MOV dword ptr [EBX + 0x268],EAX     ; 004a08d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a08de
        ;   Label: LAB_004a08de
    CMP dword ptr [EAX + 0x210],0x0     ; 004a08e1
    JZ 0x004a098f                       ; 004a08e8
        ;   XREF to: 004a098f (CONDITIONAL_JUMP)  ; LAB_004a098f
    PUSH 0x582c8d                       ; 004a08ee | BYTE_ARRAY_00582c8d
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a08f3
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR EBX,EBX                         ; 004a08f8
    ADD ESP,0x4                         ; 004a08fa
    MOV EDI,EAX                         ; 004a08fd
    MOV ESI,EAX                         ; 004a08ff
    SUB ECX,ECX                         ; 004a0901
    DEC ECX                             ; 004a0903
    XOR EAX,EAX                         ; 004a0904
    SCASB.REPNE ES:EDI                  ; 004a0906
    NOT ECX                             ; 004a0908
    DEC ECX                             ; 004a090a
    MOV dword ptr [ESP + 0x214],EBX     ; 004a090b
    MOV dword ptr [ESP + 0x210],ECX     ; 004a0912
    TEST ECX,ECX                        ; 004a0919
    JLE 0x004a0958                      ; 004a091b
        ;   XREF to: 004a0958 (CONDITIONAL_JUMP)  ; LAB_004a0958
    MOV EAX,ECX                         ; 004a091d
    NEG EAX                             ; 004a091f
    MOV EBX,ECX                         ; 004a0921
    ADD ECX,EAX                         ; 004a0923
    MOV dword ptr [ESP + 0x3d8],ECX     ; 004a0925
    XOR EAX,EAX                         ; 004a092c
        ;   Label: LAB_004a092c
    MOV AL,byte ptr [ESI]               ; 004a092e
    PUSH EAX                            ; 004a0930
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a0931 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0938
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a093d
    CMP EDI,EAX                         ; 004a0940
    JNZ 0x004a094b                      ; 004a0942
        ;   XREF to: 004a094b (CONDITIONAL_JUMP)  ; LAB_004a094b
    INC dword ptr [ESP + 0x214]         ; 004a0944
    MOV EDI,dword ptr [ESP + 0x3d8]     ; 004a094b
        ;   Label: LAB_004a094b
    DEC EBX                             ; 004a0952
    INC ESI                             ; 004a0953
    CMP EBX,EDI                         ; 004a0954
    JG 0x004a092c                       ; 004a0956
        ;   XREF to: 004a092c (CONDITIONAL_JUMP)  ; LAB_004a092c
    MOV EAX,dword ptr [ESP + 0x214]     ; 004a0958
        ;   Label: LAB_004a0958
    CMP EAX,dword ptr [ESP + 0x210]     ; 004a095f
    JNZ 0x004a098f                      ; 004a0966
        ;   XREF to: 004a098f (CONDITIONAL_JUMP)  ; LAB_004a098f
    XOR CL,CL                           ; 004a0968
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a096a
    MOV byte ptr [0x01c78af0],CL        ; 004a096d | DAT_01c78af0
    MOV ECX,dword ptr [EAX + 0x20c]     ; 004a0973
    INC ECX                             ; 004a0979
    MOV dword ptr [EAX + 0x20c],ECX     ; 004a097a
    CMP ECX,0x2                         ; 004a0980
    JLE 0x004a098f                      ; 004a0983
        ;   XREF to: 004a098f (CONDITIONAL_JUMP)  ; LAB_004a098f
    MOV dword ptr [EAX + 0x20c],0x0     ; 004a0985
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a098f
        ;   Label: LAB_004a098f
    CMP dword ptr [EAX + 0x210],0x0     ; 004a0992
    JZ 0x004a0a75                       ; 004a0999
        ;   XREF to: 004a0a75 (CONDITIONAL_JUMP)  ; LAB_004a0a75
    PUSH 0x582cc2                       ; 004a099f | BYTE_ARRAY_00582cc2
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a09a4
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a09a9
    ADD ESP,0x4                         ; 004a09ab
    XOR ECX,ECX                         ; 004a09ae
    MOV EDI,EAX                         ; 004a09b0
    MOV dword ptr [ESP + 0x21c],ECX     ; 004a09b2
    SUB ECX,ECX                         ; 004a09b9
    DEC ECX                             ; 004a09bb
    XOR EAX,EAX                         ; 004a09bc
    SCASB.REPNE ES:EDI                  ; 004a09be
    NOT ECX                             ; 004a09c0
    DEC ECX                             ; 004a09c2
    MOV dword ptr [ESP + 0x218],ECX     ; 004a09c3
    TEST ECX,ECX                        ; 004a09ca
    JLE 0x004a0a0b                      ; 004a09cc
        ;   XREF to: 004a0a0b (CONDITIONAL_JUMP)  ; LAB_004a0a0b
    MOV EAX,ECX                         ; 004a09ce
    MOV ESI,EBX                         ; 004a09d0
    NEG EAX                             ; 004a09d2
    MOV EBX,ECX                         ; 004a09d4
    ADD ECX,EAX                         ; 004a09d6
    MOV dword ptr [ESP + 0x3dc],ECX     ; 004a09d8
    XOR EAX,EAX                         ; 004a09df
        ;   Label: LAB_004a09df
    MOV AL,byte ptr [ESI]               ; 004a09e1
    PUSH EAX                            ; 004a09e3
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a09e4 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a09eb
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a09f0
    CMP EDI,EAX                         ; 004a09f3
    JNZ 0x004a09fe                      ; 004a09f5
        ;   XREF to: 004a09fe (CONDITIONAL_JUMP)  ; LAB_004a09fe
    INC dword ptr [ESP + 0x21c]         ; 004a09f7
    MOV EDI,dword ptr [ESP + 0x3dc]     ; 004a09fe
        ;   Label: LAB_004a09fe
    DEC EBX                             ; 004a0a05
    INC ESI                             ; 004a0a06
    CMP EBX,EDI                         ; 004a0a07
    JG 0x004a09df                       ; 004a0a09
        ;   XREF to: 004a09df (CONDITIONAL_JUMP)  ; LAB_004a09df
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004a0a0b
        ;   Label: LAB_004a0a0b
    CMP EAX,dword ptr [ESP + 0x218]     ; 004a0a12
    JNZ 0x004a0a75                      ; 004a0a19
        ;   XREF to: 004a0a75 (CONDITIONAL_JUMP)  ; LAB_004a0a75
    XOR CH,CH                           ; 004a0a1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0a1d
    MOV byte ptr [0x01c78af0],CH        ; 004a0a20 | DAT_01c78af0
    CMP dword ptr [EAX + 0x1d8],0x0     ; 004a0a26
    SETZ AL                             ; 004a0a2d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a0a30
    AND EAX,0xff                        ; 004a0a33
    MOV dword ptr [EBX + 0x1d8],EAX     ; 004a0a38
    JZ 0x004a1f52                       ; 004a0a3e
        ;   XREF to: 004a1f52 (CONDITIONAL_JUMP)  ; LAB_004a1f52
    PUSH 0x40a00000                     ; 004a0a44
    PUSH 0x582cf5                       ; 004a0a49 | = "Event debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a0a4e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004a0a4e
    ADD ESP,0x4                         ; 004a0a53
    PUSH EAX                            ; 004a0a56
    PUSH EBX                            ; 004a0a57
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a0a58
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a0a5d
    PUSH 0x582d14                       ; 004a0a60 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a0a65
    MOV EAX,[0x005bed68]                ; 004a0a67 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004a0a6c
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a0a6d
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a0a72
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0a75
        ;   Label: LAB_004a0a75
    CMP dword ptr [EAX + 0x210],0x0     ; 004a0a78
    JZ 0x004a0b7f                       ; 004a0a7f
        ;   XREF to: 004a0b7f (CONDITIONAL_JUMP)  ; LAB_004a0b7f
    PUSH 0x582d20                       ; 004a0a85 | BYTE_ARRAY_00582d20
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a0a8a
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a0a8f
    ADD ESP,0x4                         ; 004a0a91
    MOV EDI,EAX                         ; 004a0a94
    MOV EBX,EAX                         ; 004a0a96
    SUB ECX,ECX                         ; 004a0a98
    DEC ECX                             ; 004a0a9a
    XOR EAX,EAX                         ; 004a0a9b
    SCASB.REPNE ES:EDI                  ; 004a0a9d
    NOT ECX                             ; 004a0a9f
    DEC ECX                             ; 004a0aa1
    MOV dword ptr [ESP + 0x224],ESI     ; 004a0aa2
    MOV dword ptr [ESP + 0x220],ECX     ; 004a0aa9
    TEST ECX,ECX                        ; 004a0ab0
    JLE 0x004a0af1                      ; 004a0ab2
        ;   XREF to: 004a0af1 (CONDITIONAL_JUMP)  ; LAB_004a0af1
    MOV EAX,ECX                         ; 004a0ab4
    MOV ESI,EBX                         ; 004a0ab6
    NEG EAX                             ; 004a0ab8
    MOV EBX,ECX                         ; 004a0aba
    ADD ECX,EAX                         ; 004a0abc
    MOV dword ptr [ESP + 0x3e0],ECX     ; 004a0abe
    XOR EAX,EAX                         ; 004a0ac5
        ;   Label: LAB_004a0ac5
    MOV AL,byte ptr [ESI]               ; 004a0ac7
    PUSH EAX                            ; 004a0ac9
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a0aca | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0ad1
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0ad6
    CMP EDI,EAX                         ; 004a0ad9
    JNZ 0x004a0ae4                      ; 004a0adb
        ;   XREF to: 004a0ae4 (CONDITIONAL_JUMP)  ; LAB_004a0ae4
    INC dword ptr [ESP + 0x224]         ; 004a0add
    MOV EDI,dword ptr [ESP + 0x3e0]     ; 004a0ae4
        ;   Label: LAB_004a0ae4
    DEC EBX                             ; 004a0aeb
    INC ESI                             ; 004a0aec
    CMP EBX,EDI                         ; 004a0aed
    JG 0x004a0ac5                       ; 004a0aef
        ;   XREF to: 004a0ac5 (CONDITIONAL_JUMP)  ; LAB_004a0ac5
    MOV EAX,dword ptr [ESP + 0x224]     ; 004a0af1
        ;   Label: LAB_004a0af1
    MOV EDX,dword ptr [ESP + 0x220]     ; 004a0af8
    CMP EAX,EDX                         ; 004a0aff
    JNZ 0x004a0b7f                      ; 004a0b01
        ;   XREF to: 004a0b7f (CONDITIONAL_JUMP)  ; LAB_004a0b7f
    XOR AL,DL                           ; 004a0b03
    MOV [0x01c78af0],AL                 ; 004a0b05 | DAT_01c78af0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0b0a
    CMP dword ptr [EAX + 0x1dc],0x0     ; 004a0b0d
    SETZ AL                             ; 004a0b14
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a0b17
    AND EAX,0xff                        ; 004a0b1a
    MOV dword ptr [EBX + 0x1dc],EAX     ; 004a0b1f
    JZ 0x004a1f61                       ; 004a0b25
        ;   XREF to: 004a1f61 (CONDITIONAL_JUMP)  ; LAB_004a1f61
    PUSH 0x40a00000                     ; 004a0b2b
    PUSH 0x582d54                       ; 004a0b30 | = "Script debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a0b35
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a0b3a
    PUSH EAX                            ; 004a0b3d
    PUSH EBX                            ; 004a0b3e
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a0b3f
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a0b44
    PUSH 0xf0                           ; 004a0b47
    PUSH 0x0                            ; 004a0b4c
    PUSH 0x0                            ; 004a0b4e
    MOV ECX,dword ptr [0x005be368]      ; 004a0b50 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004a0b56 | g_CDemonSet_01e57284
    MOV dword ptr [EBX + 0x278],0x1     ; 004a0b57
    CALL core_set.cpp_FUN_005090f0      ; 004a0b61
        ;   XREF to: 005090f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005090f0()
        ;   Label: LAB_004a0b61
    ADD ESP,0x10                        ; 004a0b66
    PUSH 0x582d75                       ; 004a0b69 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a0b6e
    MOV EBX,dword ptr [0x005bed68]      ; 004a0b70 | g_CSound_PTR_005bed68
    PUSH EBX                            ; 004a0b76
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a0b77
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a0b7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0b7f
        ;   Label: LAB_004a0b7f
    CMP dword ptr [EAX + 0x210],0x0     ; 004a0b82
    JZ 0x004a0c67                       ; 004a0b89
        ;   XREF to: 004a0c67 (CONDITIONAL_JUMP)  ; LAB_004a0c67
    PUSH 0x582d81                       ; 004a0b8f | BYTE_ARRAY_00582d81
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a0b94
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a0b99
    ADD ESP,0x4                         ; 004a0b9b
    XOR ECX,ECX                         ; 004a0b9e
    MOV EDI,EAX                         ; 004a0ba0
    MOV dword ptr [ESP + 0x22c],ECX     ; 004a0ba2
    SUB ECX,ECX                         ; 004a0ba9
    DEC ECX                             ; 004a0bab
    XOR EAX,EAX                         ; 004a0bac
    SCASB.REPNE ES:EDI                  ; 004a0bae
    NOT ECX                             ; 004a0bb0
    DEC ECX                             ; 004a0bb2
    MOV dword ptr [ESP + 0x228],ECX     ; 004a0bb3
    TEST ECX,ECX                        ; 004a0bba
    JLE 0x004a0bfb                      ; 004a0bbc
        ;   XREF to: 004a0bfb (CONDITIONAL_JUMP)  ; LAB_004a0bfb
    MOV EAX,ECX                         ; 004a0bbe
    MOV ESI,EBX                         ; 004a0bc0
    NEG EAX                             ; 004a0bc2
    MOV EBX,ECX                         ; 004a0bc4
    ADD ECX,EAX                         ; 004a0bc6
    MOV dword ptr [ESP + 0x3e4],ECX     ; 004a0bc8
    XOR EAX,EAX                         ; 004a0bcf
        ;   Label: LAB_004a0bcf
    MOV AL,byte ptr [ESI]               ; 004a0bd1
    PUSH EAX                            ; 004a0bd3
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a0bd4 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0bdb
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0be0
    CMP EDI,EAX                         ; 004a0be3
    JNZ 0x004a0bee                      ; 004a0be5
        ;   XREF to: 004a0bee (CONDITIONAL_JUMP)  ; LAB_004a0bee
    INC dword ptr [ESP + 0x22c]         ; 004a0be7
    MOV EDI,dword ptr [ESP + 0x3e4]     ; 004a0bee
        ;   Label: LAB_004a0bee
    DEC EBX                             ; 004a0bf5
    INC ESI                             ; 004a0bf6
    CMP EBX,EDI                         ; 004a0bf7
    JG 0x004a0bcf                       ; 004a0bf9
        ;   XREF to: 004a0bcf (CONDITIONAL_JUMP)  ; LAB_004a0bcf
    MOV EAX,dword ptr [ESP + 0x22c]     ; 004a0bfb
        ;   Label: LAB_004a0bfb
    MOV EDX,dword ptr [ESP + 0x228]     ; 004a0c02
    CMP EAX,EDX                         ; 004a0c09
    JNZ 0x004a0c67                      ; 004a0c0b
        ;   XREF to: 004a0c67 (CONDITIONAL_JUMP)  ; LAB_004a0c67
    XOR AH,DH                           ; 004a0c0d
    MOV byte ptr [0x01c78af0],AH        ; 004a0c0f | DAT_01c78af0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0c15
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004a0c18
    SETZ AL                             ; 004a0c1f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a0c22
    AND EAX,0xff                        ; 004a0c25
    MOV dword ptr [EBX + 0x1f8],EAX     ; 004a0c2a
    JZ 0x004a1f9d                       ; 004a0c30
        ;   XREF to: 004a1f9d (CONDITIONAL_JUMP)  ; LAB_004a1f9d
    PUSH 0x40a00000                     ; 004a0c36
    PUSH 0x582db5                       ; 004a0c3b | = "Memory debugging on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a0c40
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004a0c40
    ADD ESP,0x4                         ; 004a0c45
    PUSH EAX                            ; 004a0c48
    PUSH EBX                            ; 004a0c49
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a0c4a
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a0c4f
    PUSH 0x582dde                       ; 004a0c52 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a0c57
    MOV EAX,[0x005bed68]                ; 004a0c59 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004a0c5e
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a0c5f
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a0c64
    PUSH 0x582dea                       ; 004a0c67 | BYTE_ARRAY_00582dea
        ;   Label: LAB_004a0c67
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a0c6c
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a0c71
    ADD ESP,0x4                         ; 004a0c73
    XOR ECX,ECX                         ; 004a0c76
    MOV EDI,EAX                         ; 004a0c78
    MOV dword ptr [ESP + 0x234],ECX     ; 004a0c7a
    SUB ECX,ECX                         ; 004a0c81
    DEC ECX                             ; 004a0c83
    XOR EAX,EAX                         ; 004a0c84
    SCASB.REPNE ES:EDI                  ; 004a0c86
    NOT ECX                             ; 004a0c88
    DEC ECX                             ; 004a0c8a
    MOV dword ptr [ESP + 0x230],ECX     ; 004a0c8b
    TEST ECX,ECX                        ; 004a0c92
    JLE 0x004a0cd1                      ; 004a0c94
        ;   XREF to: 004a0cd1 (CONDITIONAL_JUMP)  ; LAB_004a0cd1
    MOV EAX,ECX                         ; 004a0c96
    NEG EAX                             ; 004a0c98
    MOV EDI,ECX                         ; 004a0c9a
    ADD ECX,EAX                         ; 004a0c9c
    MOV dword ptr [ESP + 0x3e8],ECX     ; 004a0c9e
    XOR EAX,EAX                         ; 004a0ca5
        ;   Label: LAB_004a0ca5
    MOV AL,byte ptr [EBX]               ; 004a0ca7
    PUSH EAX                            ; 004a0ca9
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a0caa | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0cb1
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0cb6
    CMP ESI,EAX                         ; 004a0cb9
    JNZ 0x004a0cc4                      ; 004a0cbb
        ;   XREF to: 004a0cc4 (CONDITIONAL_JUMP)  ; LAB_004a0cc4
    INC dword ptr [ESP + 0x234]         ; 004a0cbd
    MOV ESI,dword ptr [ESP + 0x3e8]     ; 004a0cc4
        ;   Label: LAB_004a0cc4
    DEC EDI                             ; 004a0ccb
    INC EBX                             ; 004a0ccc
    CMP EDI,ESI                         ; 004a0ccd
    JG 0x004a0ca5                       ; 004a0ccf
        ;   XREF to: 004a0ca5 (CONDITIONAL_JUMP)  ; LAB_004a0ca5
    MOV EAX,dword ptr [ESP + 0x234]     ; 004a0cd1
        ;   Label: LAB_004a0cd1
    CMP EAX,dword ptr [ESP + 0x230]     ; 004a0cd8
    JNZ 0x004a0d47                      ; 004a0cdf
        ;   XREF to: 004a0d47 (CONDITIONAL_JUMP)  ; LAB_004a0d47
    PUSH 0x40a00000                     ; 004a0ce1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0ce6
    XOR DL,DL                           ; 004a0ce9
    PUSH 0x582e1e                       ; 004a0ceb | = "Manual aim enabled"
    MOV byte ptr [0x01c78af0],DL        ; 004a0cf0 | DAT_01c78af0
    MOV dword ptr [EAX + 0xc4],0x2      ; 004a0cf6
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a0d00
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a0d05
    PUSH EAX                            ; 004a0d08
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0d09
    PUSH EAX                            ; 004a0d0c
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a0d0d
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a0d12
    PUSH 0x582e31                       ; 004a0d15 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a0d1a
    MOV EDX,dword ptr [0x005bed68]      ; 004a0d1c | g_CSound_PTR_005bed68
    PUSH EDX                            ; 004a0d22
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a0d23
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a0d28
    MOV EBX,dword ptr [0x01cae0e8]      ; 004a0d2b | DAT_01cae0e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0d31
    MOV EBX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 004a0d34
    MOV EAX,dword ptr [EAX + 0xc4]      ; 004a0d3b
    MOV dword ptr [EBX + 0x1f59c],EAX   ; 004a0d41
    PUSH 0x582e3d                       ; 004a0d47 | BYTE_ARRAY_00582e3d
        ;   Label: LAB_004a0d47
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a0d4c
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a0d51
    ADD ESP,0x4                         ; 004a0d53
    XOR ECX,ECX                         ; 004a0d56
    MOV EDI,EAX                         ; 004a0d58
    MOV dword ptr [ESP + 0x23c],ECX     ; 004a0d5a
    SUB ECX,ECX                         ; 004a0d61
    DEC ECX                             ; 004a0d63
    XOR EAX,EAX                         ; 004a0d64
    SCASB.REPNE ES:EDI                  ; 004a0d66
    NOT ECX                             ; 004a0d68
    DEC ECX                             ; 004a0d6a
    MOV dword ptr [ESP + 0x238],ECX     ; 004a0d6b
    TEST ECX,ECX                        ; 004a0d72
    JLE 0x004a0db1                      ; 004a0d74
        ;   XREF to: 004a0db1 (CONDITIONAL_JUMP)  ; LAB_004a0db1
    MOV EAX,ECX                         ; 004a0d76
    NEG EAX                             ; 004a0d78
    MOV EDI,ECX                         ; 004a0d7a
    ADD ECX,EAX                         ; 004a0d7c
    MOV dword ptr [ESP + 0x3ec],ECX     ; 004a0d7e
    XOR EAX,EAX                         ; 004a0d85
        ;   Label: LAB_004a0d85
    MOV AL,byte ptr [EBX]               ; 004a0d87
    PUSH EAX                            ; 004a0d89
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a0d8a | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0d91
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0d96
    CMP ESI,EAX                         ; 004a0d99
    JNZ 0x004a0da4                      ; 004a0d9b
        ;   XREF to: 004a0da4 (CONDITIONAL_JUMP)  ; LAB_004a0da4
    INC dword ptr [ESP + 0x23c]         ; 004a0d9d
    MOV EAX,dword ptr [ESP + 0x3ec]     ; 004a0da4
        ;   Label: LAB_004a0da4
    DEC EDI                             ; 004a0dab
    INC EBX                             ; 004a0dac
    CMP EDI,EAX                         ; 004a0dad
    JG 0x004a0d85                       ; 004a0daf
        ;   XREF to: 004a0d85 (CONDITIONAL_JUMP)  ; LAB_004a0d85
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004a0db1
        ;   Label: LAB_004a0db1
    CMP EAX,dword ptr [ESP + 0x238]     ; 004a0db8
    JNZ 0x004a0e26                      ; 004a0dbf
        ;   XREF to: 004a0e26 (CONDITIONAL_JUMP)  ; LAB_004a0e26
    PUSH 0x40a00000                     ; 004a0dc1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0dc6
    XOR DH,DH                           ; 004a0dc9
    PUSH 0x582e6f                       ; 004a0dcb | = "Auto aim enabled"
    MOV byte ptr [0x01c78af0],DH        ; 004a0dd0 | DAT_01c78af0
    MOV dword ptr [EAX + 0xc4],0x0      ; 004a0dd6
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a0de0
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a0de5
    PUSH EAX                            ; 004a0de8
    MOV ECX,dword ptr [EBP + 0x14]      ; 004a0de9
    PUSH ECX                            ; 004a0dec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a0ded
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a0df2
    PUSH 0x582e80                       ; 004a0df5 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a0dfa
    MOV EBX,dword ptr [0x005bed68]      ; 004a0dfc | g_CSound_PTR_005bed68
    PUSH EBX                            ; 004a0e02
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a0e03
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    MOV EAX,[0x01cae0e8]                ; 004a0e08 | DAT_01cae0e8
    ADD ESP,0xc                         ; 004a0e0d
    MOV EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a0e10
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0e17
    MOV EAX,dword ptr [EAX + 0xc4]      ; 004a0e1a
    MOV dword ptr [EBX + 0x1f59c],EAX   ; 004a0e20
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0e26
        ;   Label: LAB_004a0e26
    CMP dword ptr [EAX + 0x210],0x0     ; 004a0e29
    JZ 0x004a0f8e                       ; 004a0e30
        ;   XREF to: 004a0f8e (CONDITIONAL_JUMP)  ; LAB_004a0f8e
    PUSH 0x582e8c                       ; 004a0e36 | BYTE_ARRAY_00582e8c
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a0e3b
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR EDI,EDI                         ; 004a0e40
    ADD ESP,0x4                         ; 004a0e42
    MOV dword ptr [ESP + 0x244],EDI     ; 004a0e45
    MOV EDI,EAX                         ; 004a0e4c
    MOV ESI,EAX                         ; 004a0e4e
    SUB ECX,ECX                         ; 004a0e50
    DEC ECX                             ; 004a0e52
    XOR EAX,EAX                         ; 004a0e53
    SCASB.REPNE ES:EDI                  ; 004a0e55
    NOT ECX                             ; 004a0e57
    DEC ECX                             ; 004a0e59
    MOV dword ptr [ESP + 0x240],ECX     ; 004a0e5a
    TEST ECX,ECX                        ; 004a0e61
    JLE 0x004a0ea0                      ; 004a0e63
        ;   XREF to: 004a0ea0 (CONDITIONAL_JUMP)  ; LAB_004a0ea0
    MOV EAX,ECX                         ; 004a0e65
    NEG EAX                             ; 004a0e67
    MOV EBX,ECX                         ; 004a0e69
    ADD ECX,EAX                         ; 004a0e6b
    MOV dword ptr [ESP + 0x3f0],ECX     ; 004a0e6d
    XOR EAX,EAX                         ; 004a0e74
        ;   Label: LAB_004a0e74
    MOV AL,byte ptr [ESI]               ; 004a0e76
    PUSH EAX                            ; 004a0e78
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a0e79 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0e80
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0e85
    CMP EDI,EAX                         ; 004a0e88
    JNZ 0x004a0e93                      ; 004a0e8a
        ;   XREF to: 004a0e93 (CONDITIONAL_JUMP)  ; LAB_004a0e93
    INC dword ptr [ESP + 0x244]         ; 004a0e8c
    MOV EDX,dword ptr [ESP + 0x3f0]     ; 004a0e93
        ;   Label: LAB_004a0e93
    DEC EBX                             ; 004a0e9a
    INC ESI                             ; 004a0e9b
    CMP EBX,EDX                         ; 004a0e9c
    JG 0x004a0e74                       ; 004a0e9e
        ;   XREF to: 004a0e74 (CONDITIONAL_JUMP)  ; LAB_004a0e74
    MOV EAX,dword ptr [ESP + 0x244]     ; 004a0ea0
        ;   Label: LAB_004a0ea0
    CMP EAX,dword ptr [ESP + 0x240]     ; 004a0ea7
    JNZ 0x004a0f8e                      ; 004a0eae
        ;   XREF to: 004a0f8e (CONDITIONAL_JUMP)  ; LAB_004a0f8e
    PUSH 0x1                            ; 004a0eb4
    PUSH 0x43700000                     ; 004a0eb6
    PUSH 0x3e800000                     ; 004a0ebb
    PUSH 0x1                            ; 004a0ec0
    PUSH 0x5b9360                       ; 004a0ec2 | DAT_005b9360
    MOV EDI,dword ptr [0x005b6d50]      ; 004a0ec7 | g_CEditorTools_PTR_005b6d50
    XOR BL,BL                           ; 004a0ecd
    PUSH 0x5822e6                       ; 004a0ecf | = "Enter Movie FPS"
    MOV byte ptr [0x01c78af0],BL        ; 004a0ed4 | DAT_01c78af0
    XOR EBX,EBX                         ; 004a0eda
    PUSH EDI                            ; 004a0edc
    MOV dword ptr [0x01c78acc],EBX      ; 004a0edd | DAT_01c78acc
    MOV dword ptr [0x01c78ad4],EBX      ; 004a0ee3 | DAT_01c78ad4
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430 ; 004a0ee9
        ;   XREF to: 00471430 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004a0eee
    TEST EAX,EAX                        ; 004a0ef1
    JZ 0x004a0f8e                       ; 004a0ef3
        ;   XREF to: 004a0f8e (CONDITIONAL_JUMP)  ; LAB_004a0f8e
    PUSH 0x1                            ; 004a0ef9
    PUSH 0x1869f                        ; 004a0efb
    PUSH EBX                            ; 004a0f00
    PUSH 0x1                            ; 004a0f01
    PUSH 0x1c78ad0                      ; 004a0f03 | DAT_01c78ad0
    PUSH 0x5822f6                       ; 004a0f08 | = "Enter number of frames to record (or ..."
    MOV EAX,[0x005b6d50]                ; 004a0f0d | g_CEditorTools_PTR_005b6d50
    PUSH EAX                            ; 004a0f12
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360 ; 004a0f13
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004a0f18
    TEST EAX,EAX                        ; 004a0f1b
    JZ 0x004a0f8e                       ; 004a0f1d
        ;   XREF to: 004a0f8e (CONDITIONAL_JUMP)  ; LAB_004a0f8e
    PUSH 0x1                            ; 004a0f1f
    PUSH 0x270f                         ; 004a0f21
    PUSH 0x1                            ; 004a0f26
    PUSH 0x1                            ; 004a0f28
    PUSH 0x5b9364                       ; 004a0f2a | DAT_005b9364
    PUSH 0x582340                       ; 004a0f2f | = "Enter image width"
    MOV EDX,dword ptr [0x005b6d50]      ; 004a0f34 | g_CEditorTools_PTR_005b6d50
    PUSH EDX                            ; 004a0f3a
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360 ; 004a0f3b
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004a0f40
    TEST EAX,EAX                        ; 004a0f43
    JZ 0x004a0f8e                       ; 004a0f45
        ;   XREF to: 004a0f8e (CONDITIONAL_JUMP)  ; LAB_004a0f8e
    PUSH 0x1                            ; 004a0f47
    PUSH 0x270f                         ; 004a0f49
    PUSH 0x1                            ; 004a0f4e
    PUSH 0x1                            ; 004a0f50
    PUSH 0x5b9368                       ; 004a0f52 | DAT_005b9368
    PUSH 0x582352                       ; 004a0f57 | = "Enter image height"
    MOV ECX,dword ptr [0x005b6d50]      ; 004a0f5c | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004a0f62
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360 ; 004a0f63
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004a0f68
    TEST EAX,EAX                        ; 004a0f6b
    JZ 0x004a0f8e                       ; 004a0f6d
        ;   XREF to: 004a0f8e (CONDITIONAL_JUMP)  ; LAB_004a0f8e
    PUSH 0x582365                       ; 004a0f6f | = "Press CTRL+V to begin recording."
    MOV EBX,dword ptr [0x005b6d50]      ; 004a0f74 | g_CEditorTools_PTR_005b6d50
    PUSH EBX                            ; 004a0f7a
    MOV ESI,0x1                         ; 004a0f7b
    CALL shape_edittool.cpp_FUN_0046fe60 ; 004a0f80
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fe60()
    ADD ESP,0x8                         ; 004a0f85
    MOV dword ptr [0x01c78ac8],ESI      ; 004a0f88 | DAT_01c78ac8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0f8e
        ;   Label: LAB_004a0f8e
    CMP dword ptr [EAX + 0x210],0x0     ; 004a0f91
    JZ 0x004a103e                       ; 004a0f98
        ;   XREF to: 004a103e (CONDITIONAL_JUMP)  ; LAB_004a103e
    PUSH 0x582ebf                       ; 004a0f9e | BYTE_ARRAY_00582ebf
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a0fa3
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a0fa8
    ADD ESP,0x4                         ; 004a0faa
    XOR ECX,ECX                         ; 004a0fad
    MOV EDI,EAX                         ; 004a0faf
    MOV dword ptr [ESP + 0x24c],ECX     ; 004a0fb1
    SUB ECX,ECX                         ; 004a0fb8
    DEC ECX                             ; 004a0fba
    XOR EAX,EAX                         ; 004a0fbb
    SCASB.REPNE ES:EDI                  ; 004a0fbd
    NOT ECX                             ; 004a0fbf
    DEC ECX                             ; 004a0fc1
    MOV dword ptr [ESP + 0x248],ECX     ; 004a0fc2
    TEST ECX,ECX                        ; 004a0fc9
    JLE 0x004a100a                      ; 004a0fcb
        ;   XREF to: 004a100a (CONDITIONAL_JUMP)  ; LAB_004a100a
    MOV EAX,ECX                         ; 004a0fcd
    MOV ESI,EBX                         ; 004a0fcf
    NEG EAX                             ; 004a0fd1
    MOV EBX,ECX                         ; 004a0fd3
    ADD ECX,EAX                         ; 004a0fd5
    MOV dword ptr [ESP + 0x3f4],ECX     ; 004a0fd7
    XOR EAX,EAX                         ; 004a0fde
        ;   Label: LAB_004a0fde
    MOV AL,byte ptr [ESI]               ; 004a0fe0
    PUSH EAX                            ; 004a0fe2
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a0fe3 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0fea
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a0fef
    CMP EDI,EAX                         ; 004a0ff2
    JNZ 0x004a0ffd                      ; 004a0ff4
        ;   XREF to: 004a0ffd (CONDITIONAL_JUMP)  ; LAB_004a0ffd
    INC dword ptr [ESP + 0x24c]         ; 004a0ff6
    MOV EDI,dword ptr [ESP + 0x3f4]     ; 004a0ffd
        ;   Label: LAB_004a0ffd
    DEC EBX                             ; 004a1004
    INC ESI                             ; 004a1005
    CMP EBX,EDI                         ; 004a1006
    JG 0x004a0fde                       ; 004a1008
        ;   XREF to: 004a0fde (CONDITIONAL_JUMP)  ; LAB_004a0fde
    MOV EAX,dword ptr [ESP + 0x24c]     ; 004a100a
        ;   Label: LAB_004a100a
    CMP EAX,dword ptr [ESP + 0x248]     ; 004a1011
    JNZ 0x004a103e                      ; 004a1018
        ;   XREF to: 004a103e (CONDITIONAL_JUMP)  ; LAB_004a103e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a101a
    XOR BH,BH                           ; 004a101d
    MOV ECX,dword ptr [EAX + 0x21c]     ; 004a101f
    MOV byte ptr [0x01c78af0],BH        ; 004a1025 | DAT_01c78af0
    TEST ECX,ECX                        ; 004a102b
    SETZ AL                             ; 004a102d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a1030
    AND EAX,0xff                        ; 004a1033
    MOV dword ptr [EBX + 0x21c],EAX     ; 004a1038
    PUSH 0x582ef6                       ; 004a103e | BYTE_ARRAY_00582ef6
        ;   Label: LAB_004a103e
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a1043
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a1048
    ADD ESP,0x4                         ; 004a104a
    XOR EAX,EAX                         ; 004a104d
    MOV EDI,EBX                         ; 004a104f
    MOV dword ptr [ESP + 0x254],EAX     ; 004a1051
    SUB ECX,ECX                         ; 004a1058
    DEC ECX                             ; 004a105a
    XOR EAX,EAX                         ; 004a105b
    SCASB.REPNE ES:EDI                  ; 004a105d
    NOT ECX                             ; 004a105f
    DEC ECX                             ; 004a1061
    MOV dword ptr [ESP + 0x250],ECX     ; 004a1062
    TEST ECX,ECX                        ; 004a1069
    JLE 0x004a10ab                      ; 004a106b
        ;   XREF to: 004a10ab (CONDITIONAL_JUMP)  ; LAB_004a10ab
    MOV EAX,ECX                         ; 004a106d
    NEG EAX                             ; 004a106f
    MOV EDI,ECX                         ; 004a1071
    ADD ECX,EAX                         ; 004a1073
    MOV ESI,EBX                         ; 004a1075
    MOV dword ptr [ESP + 0x3f8],ECX     ; 004a1077
    XOR EAX,EAX                         ; 004a107e
        ;   Label: LAB_004a107e
    MOV AL,byte ptr [ESI]               ; 004a1080
    XOR EBX,EBX                         ; 004a1082
    PUSH EAX                            ; 004a1084
    MOV BL,byte ptr [EDI + 0x1c78aef]   ; 004a1085 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a108b
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a1090
    CMP EBX,EAX                         ; 004a1093
    JNZ 0x004a109e                      ; 004a1095
        ;   XREF to: 004a109e (CONDITIONAL_JUMP)  ; LAB_004a109e
    INC dword ptr [ESP + 0x254]         ; 004a1097
    MOV EDX,dword ptr [ESP + 0x3f8]     ; 004a109e
        ;   Label: LAB_004a109e
    DEC EDI                             ; 004a10a5
    INC ESI                             ; 004a10a6
    CMP EDI,EDX                         ; 004a10a7
    JG 0x004a107e                       ; 004a10a9
        ;   XREF to: 004a107e (CONDITIONAL_JUMP)  ; LAB_004a107e
    MOV EAX,dword ptr [ESP + 0x254]     ; 004a10ab
        ;   Label: LAB_004a10ab
    CMP EAX,dword ptr [ESP + 0x250]     ; 004a10b2
    JNZ 0x004a1186                      ; 004a10b9
        ;   XREF to: 004a1186 (CONDITIONAL_JUMP)  ; LAB_004a1186
    MOV EAX,[0x01cae0e8]                ; 004a10bf | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a10c4
    PUSH 0x582f2c                       ; 004a10cb | = "Skeleton_key"
    ADD EAX,0x1f5a0                     ; 004a10d0
    XOR CL,CL                           ; 004a10d5
    PUSH EAX                            ; 004a10d7
    MOV byte ptr [0x01c78af0],CL        ; 004a10d8 | DAT_01c78af0
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004c0710 ; 004a10de
        ;   XREF to: 004c0710 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004c0710(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 004a10e3
    TEST EAX,EAX                        ; 004a10e6
    JNZ 0x004a1186                      ; 004a10e8
        ;   XREF to: 004a1186 (CONDITIONAL_JUMP)  ; LAB_004a1186
    PUSH 0x582f39                       ; 004a10ee | = "CKeyActor"
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004a10f3
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004a10f8
    MOV EBX,EAX                         ; 004a10fb
    PUSH EBX                            ; 004a10fd
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004a10fe
    MOV ESI,0x582f43                    ; 004a1104 | = "Skeleton_key"
    CALL dword ptr [EAX]                ; 004a1109
    ADD ESP,0x4                         ; 004a110b
    MOV EDI,EBX                         ; 004a110e
    MOV dword ptr [EBX + 0x2cc],0xffffffff ; 004a1110
    PUSH EDI                            ; 004a111a
    MOV AL,byte ptr [ESI]               ; 004a111b | = "Skeleton_key" | s_eleton_key_00582f43+2
        ;   Label: LAB_004a111b
    MOV byte ptr [EDI],AL               ; 004a111d
    CMP AL,0x0                          ; 004a111f
    JZ 0x004a1133                       ; 004a1121
        ;   XREF to: 004a1133 (CONDITIONAL_JUMP)  ; LAB_004a1133
    MOV AL,byte ptr [ESI + 0x1]         ; 004a1123 | s_keleton_key_00582f43+1 | s_leton_key_00582f43+3
    ADD ESI,0x2                         ; 004a1126
    MOV byte ptr [EDI + 0x1],AL         ; 004a1129
    ADD EDI,0x2                         ; 004a112c
    CMP AL,0x0                          ; 004a112f
    JNZ 0x004a111b                      ; 004a1131
        ;   XREF to: 004a111b (CONDITIONAL_JUMP)  ; LAB_004a111b
    POP EDI                             ; 004a1133
        ;   Label: LAB_004a1133
    PUSH 0x582f50                       ; 004a1134 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a1139
    MOV ESI,dword ptr [0x005bed68]      ; 004a113b | g_CSound_PTR_005bed68
    PUSH ESI                            ; 004a1141
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1142
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1147
    MOV EAX,[0x01cae0e8]                ; 004a114a | DAT_01cae0e8
    PUSH 0x1                            ; 004a114f
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a1151
    PUSH EBX                            ; 004a1158
    ADD EAX,0x1f5a0                     ; 004a1159
    PUSH EAX                            ; 004a115e
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a115f
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a1164
    PUSH 0x40a00000                     ; 004a1167
    PUSH 0x582f5c                       ; 004a116c | = "You have the skeleton key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1171
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1176
    PUSH EAX                            ; 004a1179
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a117a
    PUSH EDI                            ; 004a117d
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a117e
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1183
    PUSH 0x582f76                       ; 004a1186 | BYTE_ARRAY_00582f76
        ;   Label: LAB_004a1186
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a118b
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a1190
    ADD ESP,0x4                         ; 004a1192
    XOR EAX,EAX                         ; 004a1195
    MOV EDI,EBX                         ; 004a1197
    MOV dword ptr [ESP + 0x25c],EAX     ; 004a1199
    SUB ECX,ECX                         ; 004a11a0
    DEC ECX                             ; 004a11a2
    XOR EAX,EAX                         ; 004a11a3
    SCASB.REPNE ES:EDI                  ; 004a11a5
    NOT ECX                             ; 004a11a7
    DEC ECX                             ; 004a11a9
    MOV dword ptr [ESP + 0x258],ECX     ; 004a11aa
    TEST ECX,ECX                        ; 004a11b1
    JLE 0x004a11f0                      ; 004a11b3
        ;   XREF to: 004a11f0 (CONDITIONAL_JUMP)  ; LAB_004a11f0
    MOV EAX,ECX                         ; 004a11b5
    NEG EAX                             ; 004a11b7
    MOV EDI,ECX                         ; 004a11b9
    ADD ECX,EAX                         ; 004a11bb
    MOV dword ptr [ESP + 0x3fc],ECX     ; 004a11bd
    XOR EAX,EAX                         ; 004a11c4
        ;   Label: LAB_004a11c4
    MOV AL,byte ptr [EBX]               ; 004a11c6
    PUSH EAX                            ; 004a11c8
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a11c9 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a11d0
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a11d5
    CMP ESI,EAX                         ; 004a11d8
    JNZ 0x004a11e3                      ; 004a11da
        ;   XREF to: 004a11e3 (CONDITIONAL_JUMP)  ; LAB_004a11e3
    INC dword ptr [ESP + 0x25c]         ; 004a11dc
    MOV ECX,dword ptr [ESP + 0x3fc]     ; 004a11e3
        ;   Label: LAB_004a11e3
    DEC EDI                             ; 004a11ea
    INC EBX                             ; 004a11eb
    CMP EDI,ECX                         ; 004a11ec
    JG 0x004a11c4                       ; 004a11ee
        ;   XREF to: 004a11c4 (CONDITIONAL_JUMP)  ; LAB_004a11c4
    MOV EAX,dword ptr [ESP + 0x25c]     ; 004a11f0
        ;   Label: LAB_004a11f0
    CMP EAX,dword ptr [ESP + 0x258]     ; 004a11f7
    JNZ 0x004a1272                      ; 004a11fe
        ;   XREF to: 004a1272 (CONDITIONAL_JUMP)  ; LAB_004a1272
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1200
    XOR CH,CH                           ; 004a1203
    MOV ESI,dword ptr [EAX + 0x1d0]     ; 004a1205
    MOV byte ptr [0x01c78af0],CH        ; 004a120b | DAT_01c78af0
    TEST ESI,ESI                        ; 004a1211
    SETZ AL                             ; 004a1213
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a1216
    AND EAX,0xff                        ; 004a1219
    MOV dword ptr [EBX + 0x1d0],EAX     ; 004a121e
    JZ 0x004a1fac                       ; 004a1224
        ;   XREF to: 004a1fac (CONDITIONAL_JUMP)  ; LAB_004a1fac
    PUSH 0x40a00000                     ; 004a122a
    PUSH 0x582fb7                       ; 004a122f | = "God mode enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1234
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1239
    PUSH EAX                            ; 004a123c
    PUSH EBX                            ; 004a123d
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a123e
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x01cae0e8]                ; 004a1243 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a1248
    ADD ESP,0xc                         ; 004a124f
    MOV dword ptr [EAX + 0x2434],0x42c80000 ; 004a1252
    PUSH 0x582fda                       ; 004a125c | = "cheat-1.wav"
        ;   Label: LAB_004a125c
    PUSH 0x0                            ; 004a1261
    MOV ECX,dword ptr [0x005bed68]      ; 004a1263 | g_CSound_PTR_005bed68
    PUSH ECX                            ; 004a1269
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a126a
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a126f
    PUSH 0x582fe6                       ; 004a1272 | BYTE_ARRAY_00582fe6
        ;   Label: LAB_004a1272
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a1277
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a127c
    ADD ESP,0x4                         ; 004a127e
    MOV EDI,EAX                         ; 004a1281
    MOV EBX,EAX                         ; 004a1283
    SUB ECX,ECX                         ; 004a1285
    DEC ECX                             ; 004a1287
    XOR EAX,EAX                         ; 004a1288
    SCASB.REPNE ES:EDI                  ; 004a128a
    NOT ECX                             ; 004a128c
    DEC ECX                             ; 004a128e
    MOV dword ptr [ESP + 0x264],ESI     ; 004a128f
    MOV dword ptr [ESP + 0x260],ECX     ; 004a1296
    TEST ECX,ECX                        ; 004a129d
    JLE 0x004a12dc                      ; 004a129f
        ;   XREF to: 004a12dc (CONDITIONAL_JUMP)  ; LAB_004a12dc
    MOV EAX,ECX                         ; 004a12a1
    NEG EAX                             ; 004a12a3
    MOV EDI,ECX                         ; 004a12a5
    ADD ECX,EAX                         ; 004a12a7
    MOV dword ptr [ESP + 0x400],ECX     ; 004a12a9
    XOR EAX,EAX                         ; 004a12b0
        ;   Label: LAB_004a12b0
    MOV AL,byte ptr [EBX]               ; 004a12b2
    PUSH EAX                            ; 004a12b4
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a12b5 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a12bc
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a12c1
    CMP ESI,EAX                         ; 004a12c4
    JNZ 0x004a12cf                      ; 004a12c6
        ;   XREF to: 004a12cf (CONDITIONAL_JUMP)  ; LAB_004a12cf
    INC dword ptr [ESP + 0x264]         ; 004a12c8
    MOV EDX,dword ptr [ESP + 0x400]     ; 004a12cf
        ;   Label: LAB_004a12cf
    DEC EDI                             ; 004a12d6
    INC EBX                             ; 004a12d7
    CMP EDI,EDX                         ; 004a12d8
    JG 0x004a12b0                       ; 004a12da
        ;   XREF to: 004a12b0 (CONDITIONAL_JUMP)  ; LAB_004a12b0
    MOV EAX,dword ptr [ESP + 0x264]     ; 004a12dc
        ;   Label: LAB_004a12dc
    MOV ECX,dword ptr [ESP + 0x260]     ; 004a12e3
    CMP EAX,ECX                         ; 004a12ea
    JNZ 0x004a1348                      ; 004a12ec
        ;   XREF to: 004a1348 (CONDITIONAL_JUMP)  ; LAB_004a1348
    XOR AL,CL                           ; 004a12ee
    MOV [0x01c78af0],AL                 ; 004a12f0 | DAT_01c78af0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a12f5
    CMP dword ptr [EAX + 0x1d4],0x0     ; 004a12f8
    SETZ AL                             ; 004a12ff
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a1302
    AND EAX,0xff                        ; 004a1305
    MOV dword ptr [EBX + 0x1d4],EAX     ; 004a130a
    JZ 0x004a1fcd                       ; 004a1310
        ;   XREF to: 004a1fcd (CONDITIONAL_JUMP)  ; LAB_004a1fcd
    PUSH 0x40a00000                     ; 004a1316
    PUSH 0x58301e                       ; 004a131b | = "Enemies frozen"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1320
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004a1320
    ADD ESP,0x4                         ; 004a1325
    PUSH EAX                            ; 004a1328
    PUSH EBX                            ; 004a1329
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a132a
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a132f
    PUSH 0x58303c                       ; 004a1332 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a1337
    MOV EDX,dword ptr [0x005bed68]      ; 004a1339 | g_CSound_PTR_005bed68
    PUSH EDX                            ; 004a133f
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1340
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1345
    PUSH 0x583048                       ; 004a1348 | = "You have the shotgun"
        ;   Label: LAB_004a1348
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a134d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1352
    PUSH 0x583066                       ; 004a1355 | BYTE_ARRAY_00583066
    MOV EBX,EAX                         ; 004a135a
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a135c
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV ECX,0x58305d                    ; 004a1361 | = "CShotgun"
    MOV ESI,EAX                         ; 004a1366
    ADD ESP,0x4                         ; 004a1368
    MOV EDI,EAX                         ; 004a136b
    MOV dword ptr [ESP + 0x268],ECX     ; 004a136d | = "CShotgun"
    MOV dword ptr [ESP + 0x26c],EBX     ; 004a1374
    SUB ECX,ECX                         ; 004a137b
    DEC ECX                             ; 004a137d
    XOR EAX,EAX                         ; 004a137e
    SCASB.REPNE ES:EDI                  ; 004a1380
    NOT ECX                             ; 004a1382
    DEC ECX                             ; 004a1384
    XOR EBX,EBX                         ; 004a1385
    MOV dword ptr [ESP + 0x270],ECX     ; 004a1387
    MOV dword ptr [ESP + 0x274],EBX     ; 004a138e
    TEST ECX,ECX                        ; 004a1395
    JLE 0x004a13d6                      ; 004a1397
        ;   XREF to: 004a13d6 (CONDITIONAL_JUMP)  ; LAB_004a13d6
    MOV EAX,ECX                         ; 004a1399
    NEG EAX                             ; 004a139b
    MOV EDI,ECX                         ; 004a139d
    ADD ECX,EAX                         ; 004a139f
    MOV EBX,ESI                         ; 004a13a1
    MOV dword ptr [ESP + 0x404],ECX     ; 004a13a3
    XOR EAX,EAX                         ; 004a13aa
        ;   Label: LAB_004a13aa
    MOV AL,byte ptr [EBX]               ; 004a13ac
    PUSH EAX                            ; 004a13ae
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a13af
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a13b6
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a13bb
    CMP ESI,EAX                         ; 004a13be
    JNZ 0x004a13c9                      ; 004a13c0
        ;   XREF to: 004a13c9 (CONDITIONAL_JUMP)  ; LAB_004a13c9
    INC dword ptr [ESP + 0x274]         ; 004a13c2
    MOV EAX,dword ptr [ESP + 0x404]     ; 004a13c9
        ;   Label: LAB_004a13c9
    DEC EDI                             ; 004a13d0
    INC EBX                             ; 004a13d1
    CMP EDI,EAX                         ; 004a13d2
    JG 0x004a13aa                       ; 004a13d4
        ;   XREF to: 004a13aa (CONDITIONAL_JUMP)  ; LAB_004a13aa
    MOV EAX,dword ptr [ESP + 0x274]     ; 004a13d6
        ;   Label: LAB_004a13d6
    MOV EDX,dword ptr [ESP + 0x270]     ; 004a13dd
    CMP EAX,EDX                         ; 004a13e4
    JNZ 0x004a1432                      ; 004a13e6
        ;   XREF to: 004a1432 (CONDITIONAL_JUMP)  ; LAB_004a1432
    MOV ECX,dword ptr [ESP + 0x268]     ; 004a13e8
    XOR AH,DH                           ; 004a13ef
    PUSH ECX                            ; 004a13f1 | = "CShotgun"
    MOV byte ptr [0x01c78af0],AH        ; 004a13f2 | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a13f8
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a13fd
    MOV EBX,dword ptr [ESP + 0x26c]     ; 004a1400
    PUSH 0x40a00000                     ; 004a1407
    PUSH EBX                            ; 004a140c
    MOV ESI,dword ptr [0x005b9354]      ; 004a140d | g_CGame_PTR_005b9354
    PUSH ESI                            ; 004a1413 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1414
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1419
    PUSH 0x582b89                       ; 004a141c | = "cheat-1.wav"
    PUSH 0x0                            ; 004a1421
    MOV EDI,dword ptr [0x005bed68]      ; 004a1423 | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004a1429
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a142a
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a142f
    PUSH 0x5830a0                       ; 004a1432 | = "You have the crossbow"
        ;   Label: LAB_004a1432
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1437
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a143c
    PUSH 0x5830c0                       ; 004a143f | BYTE_ARRAY_005830c0
    MOV EBX,EAX                         ; 004a1444
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a1446
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV ESI,EAX                         ; 004a144b
    ADD ESP,0x4                         ; 004a144d
    XOR EDX,EDX                         ; 004a1450
    MOV EAX,0x5830b6                    ; 004a1452 | = "CCrossbow"
    MOV dword ptr [ESP + 0x27c],EBX     ; 004a1457
    MOV dword ptr [ESP + 0x284],EDX     ; 004a145e
    MOV EDI,ESI                         ; 004a1465
    MOV dword ptr [ESP + 0x278],EAX     ; 004a1467 | = "CCrossbow"
    SUB ECX,ECX                         ; 004a146e
    DEC ECX                             ; 004a1470
    XOR EAX,EAX                         ; 004a1471
    SCASB.REPNE ES:EDI                  ; 004a1473
    NOT ECX                             ; 004a1475
    DEC ECX                             ; 004a1477
    MOV dword ptr [ESP + 0x280],ECX     ; 004a1478
    TEST ECX,ECX                        ; 004a147f
    JLE 0x004a14c0                      ; 004a1481
        ;   XREF to: 004a14c0 (CONDITIONAL_JUMP)  ; LAB_004a14c0
    MOV EAX,ECX                         ; 004a1483
    NEG EAX                             ; 004a1485
    MOV EDI,ECX                         ; 004a1487
    ADD ECX,EAX                         ; 004a1489
    MOV EBX,ESI                         ; 004a148b
    MOV dword ptr [ESP + 0x408],ECX     ; 004a148d
    XOR EAX,EAX                         ; 004a1494
        ;   Label: LAB_004a1494
    MOV AL,byte ptr [EBX]               ; 004a1496
    PUSH EAX                            ; 004a1498
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a1499 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a14a0
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a14a5
    CMP ESI,EAX                         ; 004a14a8
    JNZ 0x004a14b3                      ; 004a14aa
        ;   XREF to: 004a14b3 (CONDITIONAL_JUMP)  ; LAB_004a14b3
    INC dword ptr [ESP + 0x284]         ; 004a14ac
    MOV ESI,dword ptr [ESP + 0x408]     ; 004a14b3
        ;   Label: LAB_004a14b3
    DEC EDI                             ; 004a14ba
    INC EBX                             ; 004a14bb
    CMP EDI,ESI                         ; 004a14bc
    JG 0x004a1494                       ; 004a14be
        ;   XREF to: 004a1494 (CONDITIONAL_JUMP)  ; LAB_004a1494
    MOV EAX,dword ptr [ESP + 0x284]     ; 004a14c0
        ;   Label: LAB_004a14c0
    CMP EAX,dword ptr [ESP + 0x280]     ; 004a14c7
    JNZ 0x004a151a                      ; 004a14ce
        ;   XREF to: 004a151a (CONDITIONAL_JUMP)  ; LAB_004a151a
    MOV EAX,dword ptr [ESP + 0x278]     ; 004a14d0
    XOR DL,DL                           ; 004a14d7
    PUSH EAX                            ; 004a14d9 | = "CCrossbow"
    MOV byte ptr [0x01c78af0],DL        ; 004a14da | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a14e0
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a14e5
    MOV EDX,dword ptr [ESP + 0x27c]     ; 004a14e8
    PUSH 0x40a00000                     ; 004a14ef
    PUSH EDX                            ; 004a14f4
    MOV ECX,dword ptr [0x005b9354]      ; 004a14f5 | g_CGame_PTR_005b9354
    PUSH ECX                            ; 004a14fb | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a14fc
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1501
    PUSH 0x582b89                       ; 004a1504 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a1509
    MOV EBX,dword ptr [0x005bed68]      ; 004a150b | g_CSound_PTR_005bed68
    PUSH EBX                            ; 004a1511
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1512
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1517
    PUSH 0x5830fc                       ; 004a151a | = "DY-NO-MITE"
        ;   Label: LAB_004a151a
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a151f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1524
    PUSH 0x583111                       ; 004a1527 | BYTE_ARRAY_00583111
    MOV ESI,0x583107                    ; 004a152c | = "CDynamite"
    MOV EBX,EAX                         ; 004a1531
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a1533
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    ADD ESP,0x4                         ; 004a1538
    MOV EDI,EAX                         ; 004a153b
    MOV EDX,EAX                         ; 004a153d
    SUB ECX,ECX                         ; 004a153f
    DEC ECX                             ; 004a1541
    XOR EAX,EAX                         ; 004a1542
    SCASB.REPNE ES:EDI                  ; 004a1544
    NOT ECX                             ; 004a1546
    DEC ECX                             ; 004a1548
    MOV dword ptr [ESP + 0x288],ESI     ; 004a1549 | = "CDynamite"
    MOV dword ptr [ESP + 0x28c],EBX     ; 004a1550
    MOV dword ptr [ESP + 0x290],ECX     ; 004a1557
    XOR ESI,ESI                         ; 004a155e
    TEST ECX,ECX                        ; 004a1560
    JLE 0x004a15a8                      ; 004a1562
        ;   XREF to: 004a15a8 (CONDITIONAL_JUMP)  ; LAB_004a15a8
    MOV EAX,ECX                         ; 004a1564
    NEG EAX                             ; 004a1566
    MOV EDI,ECX                         ; 004a1568
    ADD ECX,EAX                         ; 004a156a
    MOV EBX,EDX                         ; 004a156c
    MOV dword ptr [ESP + 0x40c],ECX     ; 004a156e
    XOR EAX,EAX                         ; 004a1575
        ;   Label: LAB_004a1575
    MOV AL,byte ptr [EDI + 0x1c78aef]   ; 004a1577 | DAT_01c78af0
    MOV dword ptr [ESP + 0x480],EAX     ; 004a157d
    XOR EAX,EAX                         ; 004a1584
    MOV AL,byte ptr [EBX]               ; 004a1586
    PUSH EAX                            ; 004a1588
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a1589
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a158e
    CMP EAX,dword ptr [ESP + 0x480]     ; 004a1591
    JNZ 0x004a159b                      ; 004a1598
        ;   XREF to: 004a159b (CONDITIONAL_JUMP)  ; LAB_004a159b
    INC ESI                             ; 004a159a
    MOV EDX,dword ptr [ESP + 0x40c]     ; 004a159b
        ;   Label: LAB_004a159b
    DEC EDI                             ; 004a15a2
    INC EBX                             ; 004a15a3
    CMP EDI,EDX                         ; 004a15a4
    JG 0x004a1575                       ; 004a15a6
        ;   XREF to: 004a1575 (CONDITIONAL_JUMP)  ; LAB_004a1575
    CMP ESI,dword ptr [ESP + 0x290]     ; 004a15a8
        ;   Label: LAB_004a15a8
    JNZ 0x004a15fa                      ; 004a15af
        ;   XREF to: 004a15fa (CONDITIONAL_JUMP)  ; LAB_004a15fa
    MOV EBX,dword ptr [ESP + 0x288]     ; 004a15b1
    XOR DH,DH                           ; 004a15b8
    PUSH EBX                            ; 004a15ba | = "CDynamite"
    MOV byte ptr [0x01c78af0],DH        ; 004a15bb | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a15c1
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a15c6
    MOV ESI,dword ptr [ESP + 0x28c]     ; 004a15c9
    PUSH 0x40a00000                     ; 004a15d0
    PUSH ESI                            ; 004a15d5
    MOV EDI,dword ptr [0x005b9354]      ; 004a15d6 | g_CGame_PTR_005b9354
    PUSH EDI                            ; 004a15dc | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a15dd
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a15e2
    PUSH 0x582b89                       ; 004a15e5 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a15ea
    MOV EAX,[0x005bed68]                ; 004a15ec | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004a15f1
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a15f2
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a15f7
    PUSH 0x583147                       ; 004a15fa | = "Fire! Fire! Fire!"
        ;   Label: LAB_004a15fa
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a15ff
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1604
    PUSH 0x583167                       ; 004a1607 | BYTE_ARRAY_00583167
    MOV EBX,EAX                         ; 004a160c
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a160e
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EDX,0x583159                    ; 004a1613 | = "CFlameThrower"
    MOV ESI,EAX                         ; 004a1618
    ADD ESP,0x4                         ; 004a161a
    MOV EDI,EAX                         ; 004a161d
    XOR ECX,ECX                         ; 004a161f
    MOV dword ptr [ESP + 0x294],EDX     ; 004a1621 | = "CFlameThrower"
    MOV dword ptr [ESP + 0x298],EBX     ; 004a1628
    MOV dword ptr [ESP + 0x2a0],ECX     ; 004a162f
    SUB ECX,ECX                         ; 004a1636
    DEC ECX                             ; 004a1638
    XOR EAX,EAX                         ; 004a1639
    SCASB.REPNE ES:EDI                  ; 004a163b
    NOT ECX                             ; 004a163d
    DEC ECX                             ; 004a163f
    MOV dword ptr [ESP + 0x29c],ECX     ; 004a1640
    TEST ECX,ECX                        ; 004a1647
    JLE 0x004a1688                      ; 004a1649
        ;   XREF to: 004a1688 (CONDITIONAL_JUMP)  ; LAB_004a1688
    MOV EAX,ECX                         ; 004a164b
    NEG EAX                             ; 004a164d
    MOV EDI,ECX                         ; 004a164f
    ADD ECX,EAX                         ; 004a1651
    MOV EBX,ESI                         ; 004a1653
    MOV dword ptr [ESP + 0x410],ECX     ; 004a1655
    XOR EAX,EAX                         ; 004a165c
        ;   Label: LAB_004a165c
    MOV AL,byte ptr [EBX]               ; 004a165e
    PUSH EAX                            ; 004a1660
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a1661 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a1668
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a166d
    CMP ESI,EAX                         ; 004a1670
    JNZ 0x004a167b                      ; 004a1672
        ;   XREF to: 004a167b (CONDITIONAL_JUMP)  ; LAB_004a167b
    INC dword ptr [ESP + 0x2a0]         ; 004a1674
    MOV ECX,dword ptr [ESP + 0x410]     ; 004a167b
        ;   Label: LAB_004a167b
    DEC EDI                             ; 004a1682
    INC EBX                             ; 004a1683
    CMP EDI,ECX                         ; 004a1684
    JG 0x004a165c                       ; 004a1686
        ;   XREF to: 004a165c (CONDITIONAL_JUMP)  ; LAB_004a165c
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 004a1688
        ;   Label: LAB_004a1688
    CMP EAX,dword ptr [ESP + 0x29c]     ; 004a168f
    JNZ 0x004a16e1                      ; 004a1696
        ;   XREF to: 004a16e1 (CONDITIONAL_JUMP)  ; LAB_004a16e1
    MOV ESI,dword ptr [ESP + 0x294]     ; 004a1698
    XOR BL,BL                           ; 004a169f
    PUSH ESI                            ; 004a16a1 | = "CFlameThrower"
    MOV byte ptr [0x01c78af0],BL        ; 004a16a2 | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a16a8
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a16ad
    MOV EDI,dword ptr [ESP + 0x298]     ; 004a16b0
    PUSH 0x40a00000                     ; 004a16b7
    PUSH EDI                            ; 004a16bc
    MOV EAX,[0x005b9354]                ; 004a16bd | g_CGame_PTR_005b9354
    PUSH EAX                            ; 004a16c2 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a16c3
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a16c8
    PUSH 0x582b89                       ; 004a16cb | = "cheat-1.wav"
    PUSH 0x0                            ; 004a16d0
    MOV EDX,dword ptr [0x005bed68]      ; 004a16d2 | g_CSound_PTR_005bed68
    PUSH EDX                            ; 004a16d8
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a16d9
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a16de
    PUSH 0x58319f                       ; 004a16e1 | = "You have the tommy gun"
        ;   Label: LAB_004a16e1
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a16e6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a16eb
    PUSH 0x5831c0                       ; 004a16ee | BYTE_ARRAY_005831c0
    MOV EBX,EAX                         ; 004a16f3
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a16f5
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV ECX,0x5831b6                    ; 004a16fa | = "CTommyGun"
    MOV ESI,EAX                         ; 004a16ff
    ADD ESP,0x4                         ; 004a1701
    MOV EDI,EAX                         ; 004a1704
    MOV dword ptr [ESP + 0x2a4],ECX     ; 004a1706 | = "CTommyGun"
    MOV dword ptr [ESP + 0x2a8],EBX     ; 004a170d
    SUB ECX,ECX                         ; 004a1714
    DEC ECX                             ; 004a1716
    XOR EAX,EAX                         ; 004a1717
    SCASB.REPNE ES:EDI                  ; 004a1719
    NOT ECX                             ; 004a171b
    DEC ECX                             ; 004a171d
    XOR EBX,EBX                         ; 004a171e
    MOV dword ptr [ESP + 0x2ac],ECX     ; 004a1720
    MOV dword ptr [ESP + 0x2b0],EBX     ; 004a1727
    TEST ECX,ECX                        ; 004a172e
    JLE 0x004a176f                      ; 004a1730
        ;   XREF to: 004a176f (CONDITIONAL_JUMP)  ; LAB_004a176f
    MOV EAX,ECX                         ; 004a1732
    NEG EAX                             ; 004a1734
    MOV EDI,ECX                         ; 004a1736
    ADD ECX,EAX                         ; 004a1738
    MOV EBX,ESI                         ; 004a173a
    MOV dword ptr [ESP + 0x414],ECX     ; 004a173c
    XOR EAX,EAX                         ; 004a1743
        ;   Label: LAB_004a1743
    MOV AL,byte ptr [EBX]               ; 004a1745
    PUSH EAX                            ; 004a1747
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a1748
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a174f
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a1754
    CMP ESI,EAX                         ; 004a1757
    JNZ 0x004a1762                      ; 004a1759
        ;   XREF to: 004a1762 (CONDITIONAL_JUMP)  ; LAB_004a1762
    INC dword ptr [ESP + 0x2b0]         ; 004a175b
    MOV EAX,dword ptr [ESP + 0x414]     ; 004a1762
        ;   Label: LAB_004a1762
    DEC EDI                             ; 004a1769
    INC EBX                             ; 004a176a
    CMP EDI,EAX                         ; 004a176b
    JG 0x004a1743                       ; 004a176d
        ;   XREF to: 004a1743 (CONDITIONAL_JUMP)  ; LAB_004a1743
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 004a176f
        ;   Label: LAB_004a176f
    CMP EAX,dword ptr [ESP + 0x2ac]     ; 004a1776
    JNZ 0x004a17c9                      ; 004a177d
        ;   XREF to: 004a17c9 (CONDITIONAL_JUMP)  ; LAB_004a17c9
    MOV ECX,dword ptr [ESP + 0x2a4]     ; 004a177f
    XOR BH,BH                           ; 004a1786
    PUSH ECX                            ; 004a1788 | = "CTommyGun"
    MOV byte ptr [0x01c78af0],BH        ; 004a1789 | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a178f
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1794
    MOV EBX,dword ptr [ESP + 0x2a8]     ; 004a1797
    PUSH 0x40a00000                     ; 004a179e
    PUSH EBX                            ; 004a17a3
    MOV ESI,dword ptr [0x005b9354]      ; 004a17a4 | g_CGame_PTR_005b9354
    PUSH ESI                            ; 004a17aa | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a17ab
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a17b0
    PUSH 0x582b89                       ; 004a17b3 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a17b8
    MOV EDI,dword ptr [0x005bed68]      ; 004a17ba | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004a17c0
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a17c1
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a17c6
    PUSH 0x5831f5                       ; 004a17c9 | = "You can now summon the baron"
        ;   Label: LAB_004a17c9
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a17ce
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a17d3
    PUSH 0x58321f                       ; 004a17d6 | BYTE_ARRAY_0058321f
    MOV EBX,EAX                         ; 004a17db
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a17dd
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV ESI,EAX                         ; 004a17e2
    ADD ESP,0x4                         ; 004a17e4
    XOR EDX,EDX                         ; 004a17e7
    MOV EAX,0x583212                    ; 004a17e9 | = "CBaronWeapon"
    MOV dword ptr [ESP + 0x2b8],EBX     ; 004a17ee
    MOV dword ptr [ESP + 0x2c0],EDX     ; 004a17f5
    MOV EDI,ESI                         ; 004a17fc
    MOV dword ptr [ESP + 0x2b4],EAX     ; 004a17fe | = "CBaronWeapon"
    SUB ECX,ECX                         ; 004a1805
    DEC ECX                             ; 004a1807
    XOR EAX,EAX                         ; 004a1808
    SCASB.REPNE ES:EDI                  ; 004a180a
    NOT ECX                             ; 004a180c
    DEC ECX                             ; 004a180e
    MOV dword ptr [ESP + 0x2bc],ECX     ; 004a180f
    TEST ECX,ECX                        ; 004a1816
    JLE 0x004a1857                      ; 004a1818
        ;   XREF to: 004a1857 (CONDITIONAL_JUMP)  ; LAB_004a1857
    MOV EAX,ECX                         ; 004a181a
    NEG EAX                             ; 004a181c
    MOV EDI,ECX                         ; 004a181e
    ADD ECX,EAX                         ; 004a1820
    MOV EBX,ESI                         ; 004a1822
    MOV dword ptr [ESP + 0x418],ECX     ; 004a1824
    XOR EAX,EAX                         ; 004a182b
        ;   Label: LAB_004a182b
    MOV AL,byte ptr [EBX]               ; 004a182d
    PUSH EAX                            ; 004a182f
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a1830 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a1837
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a183c
    CMP ESI,EAX                         ; 004a183f
    JNZ 0x004a184a                      ; 004a1841
        ;   XREF to: 004a184a (CONDITIONAL_JUMP)  ; LAB_004a184a
    INC dword ptr [ESP + 0x2c0]         ; 004a1843
    MOV ESI,dword ptr [ESP + 0x418]     ; 004a184a
        ;   Label: LAB_004a184a
    DEC EDI                             ; 004a1851
    INC EBX                             ; 004a1852
    CMP EDI,ESI                         ; 004a1853
    JG 0x004a182b                       ; 004a1855
        ;   XREF to: 004a182b (CONDITIONAL_JUMP)  ; LAB_004a182b
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004a1857
        ;   Label: LAB_004a1857
    CMP EAX,dword ptr [ESP + 0x2bc]     ; 004a185e
    JNZ 0x004a18b1                      ; 004a1865
        ;   XREF to: 004a18b1 (CONDITIONAL_JUMP)  ; LAB_004a18b1
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 004a1867
    XOR CL,CL                           ; 004a186e
    PUSH EAX                            ; 004a1870 | = "CBaronWeapon"
    MOV byte ptr [0x01c78af0],CL        ; 004a1871 | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1877
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a187c
    MOV EDX,dword ptr [ESP + 0x2b8]     ; 004a187f
    PUSH 0x40a00000                     ; 004a1886
    PUSH EDX                            ; 004a188b
    MOV ECX,dword ptr [0x005b9354]      ; 004a188c | g_CGame_PTR_005b9354
    PUSH ECX                            ; 004a1892 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1893
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1898
    PUSH 0x582b89                       ; 004a189b | = "cheat-1.wav"
    PUSH 0x0                            ; 004a18a0
    MOV EBX,dword ptr [0x005bed68]      ; 004a18a2 | g_CSound_PTR_005bed68
    PUSH EBX                            ; 004a18a8
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a18a9
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a18ae
    PUSH 0x58325a                       ; 004a18b1 | = "You have the elephant gun"
        ;   Label: LAB_004a18b1
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a18b6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a18bb
    PUSH 0x583281                       ; 004a18be | BYTE_ARRAY_00583281
    MOV EDI,0x583274                    ; 004a18c3 | = "CElephantGun"
    MOV EBX,EAX                         ; 004a18c8
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a18ca
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    ADD ESP,0x4                         ; 004a18cf
    MOV ESI,EAX                         ; 004a18d2
    MOV dword ptr [ESP + 0x2c4],EDI     ; 004a18d4 | = "CElephantGun"
    MOV dword ptr [ESP + 0x2c8],EBX     ; 004a18db
    XOR EAX,EAX                         ; 004a18e2
    MOV EDI,ESI                         ; 004a18e4
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004a18e6
    SUB ECX,ECX                         ; 004a18ed
    DEC ECX                             ; 004a18ef
    XOR EAX,EAX                         ; 004a18f0
    SCASB.REPNE ES:EDI                  ; 004a18f2
    NOT ECX                             ; 004a18f4
    DEC ECX                             ; 004a18f6
    MOV dword ptr [ESP + 0x2cc],ECX     ; 004a18f7
    TEST ECX,ECX                        ; 004a18fe
    JLE 0x004a193f                      ; 004a1900
        ;   XREF to: 004a193f (CONDITIONAL_JUMP)  ; LAB_004a193f
    MOV EAX,ECX                         ; 004a1902
    NEG EAX                             ; 004a1904
    MOV EDI,ECX                         ; 004a1906
    ADD ECX,EAX                         ; 004a1908
    MOV EBX,ESI                         ; 004a190a
    MOV dword ptr [ESP + 0x41c],ECX     ; 004a190c
    XOR EAX,EAX                         ; 004a1913
        ;   Label: LAB_004a1913
    MOV AL,byte ptr [EBX]               ; 004a1915
    PUSH EAX                            ; 004a1917
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a1918 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a191f
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a1924
    CMP ESI,EAX                         ; 004a1927
    JNZ 0x004a1932                      ; 004a1929
        ;   XREF to: 004a1932 (CONDITIONAL_JUMP)  ; LAB_004a1932
    INC dword ptr [ESP + 0x2d0]         ; 004a192b
    MOV ECX,dword ptr [ESP + 0x41c]     ; 004a1932
        ;   Label: LAB_004a1932
    DEC EDI                             ; 004a1939
    INC EBX                             ; 004a193a
    CMP EDI,ECX                         ; 004a193b
    JG 0x004a1913                       ; 004a193d
        ;   XREF to: 004a1913 (CONDITIONAL_JUMP)  ; LAB_004a1913
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 004a193f
        ;   Label: LAB_004a193f
    CMP EAX,dword ptr [ESP + 0x2cc]     ; 004a1946
    JNZ 0x004a1998                      ; 004a194d
        ;   XREF to: 004a1998 (CONDITIONAL_JUMP)  ; LAB_004a1998
    MOV ESI,dword ptr [ESP + 0x2c4]     ; 004a194f
    XOR CH,CH                           ; 004a1956
    PUSH ESI                            ; 004a1958 | = "CElephantGun"
    MOV byte ptr [0x01c78af0],CH        ; 004a1959 | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a195f
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1964
    MOV EDI,dword ptr [ESP + 0x2c8]     ; 004a1967
    PUSH 0x40a00000                     ; 004a196e
    PUSH EDI                            ; 004a1973
    MOV EAX,[0x005b9354]                ; 004a1974 | g_CGame_PTR_005b9354
    PUSH EAX                            ; 004a1979 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a197a
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a197f
    PUSH 0x582b89                       ; 004a1982 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a1987
    MOV EDX,dword ptr [0x005bed68]      ; 004a1989 | g_CSound_PTR_005bed68
    PUSH EDX                            ; 004a198f
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1990
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1995
    PUSH 0x5832b7                       ; 004a1998 | = "You have the charged radiance emitter"
        ;   Label: LAB_004a1998
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a199d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a19a2
    PUSH 0x5832e7                       ; 004a19a5 | BYTE_ARRAY_005832e7
    MOV EBX,EAX                         ; 004a19aa
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a19ac
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV ECX,0x5832dd                    ; 004a19b1 | = "CLightGun"
    MOV ESI,EAX                         ; 004a19b6
    ADD ESP,0x4                         ; 004a19b8
    MOV EDI,EAX                         ; 004a19bb
    MOV dword ptr [ESP + 0x2d4],ECX     ; 004a19bd | = "CLightGun"
    MOV dword ptr [ESP + 0x2d8],EBX     ; 004a19c4
    SUB ECX,ECX                         ; 004a19cb
    DEC ECX                             ; 004a19cd
    XOR EAX,EAX                         ; 004a19ce
    SCASB.REPNE ES:EDI                  ; 004a19d0
    NOT ECX                             ; 004a19d2
    DEC ECX                             ; 004a19d4
    XOR EBX,EBX                         ; 004a19d5
    MOV dword ptr [ESP + 0x2dc],ECX     ; 004a19d7
    MOV dword ptr [ESP + 0x2e0],EBX     ; 004a19de
    TEST ECX,ECX                        ; 004a19e5
    JLE 0x004a1a26                      ; 004a19e7
        ;   XREF to: 004a1a26 (CONDITIONAL_JUMP)  ; LAB_004a1a26
    MOV EAX,ECX                         ; 004a19e9
    NEG EAX                             ; 004a19eb
    MOV EDI,ECX                         ; 004a19ed
    ADD ECX,EAX                         ; 004a19ef
    MOV EBX,ESI                         ; 004a19f1
    MOV dword ptr [ESP + 0x420],ECX     ; 004a19f3
    XOR EAX,EAX                         ; 004a19fa
        ;   Label: LAB_004a19fa
    MOV AL,byte ptr [EBX]               ; 004a19fc
    PUSH EAX                            ; 004a19fe
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a19ff
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a1a06
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a1a0b
    CMP ESI,EAX                         ; 004a1a0e
    JNZ 0x004a1a19                      ; 004a1a10
        ;   XREF to: 004a1a19 (CONDITIONAL_JUMP)  ; LAB_004a1a19
    INC dword ptr [ESP + 0x2e0]         ; 004a1a12
    MOV EAX,dword ptr [ESP + 0x420]     ; 004a1a19
        ;   Label: LAB_004a1a19
    DEC EDI                             ; 004a1a20
    INC EBX                             ; 004a1a21
    CMP EDI,EAX                         ; 004a1a22
    JG 0x004a19fa                       ; 004a1a24
        ;   XREF to: 004a19fa (CONDITIONAL_JUMP)  ; LAB_004a19fa
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 004a1a26
        ;   Label: LAB_004a1a26
    MOV EDX,dword ptr [ESP + 0x2dc]     ; 004a1a2d
    CMP EAX,EDX                         ; 004a1a34
    JNZ 0x004a1a81                      ; 004a1a36
        ;   XREF to: 004a1a81 (CONDITIONAL_JUMP)  ; LAB_004a1a81
    MOV ECX,dword ptr [ESP + 0x2d4]     ; 004a1a38
    XOR AL,DL                           ; 004a1a3f
    PUSH ECX                            ; 004a1a41 | = "CLightGun"
    MOV [0x01c78af0],AL                 ; 004a1a42 | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1a47
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1a4c
    MOV EBX,dword ptr [ESP + 0x2d8]     ; 004a1a4f
    PUSH 0x40a00000                     ; 004a1a56
    PUSH EBX                            ; 004a1a5b
    MOV ESI,dword ptr [0x005b9354]      ; 004a1a5c | g_CGame_PTR_005b9354
    PUSH ESI                            ; 004a1a62 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1a63
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1a68
    PUSH 0x582b89                       ; 004a1a6b | = "cheat-1.wav"
    PUSH 0x0                            ; 004a1a70
    MOV EDI,dword ptr [0x005bed68]      ; 004a1a72 | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004a1a78
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1a79
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1a7e
    PUSH 0x58331b                       ; 004a1a81 | BYTE_ARRAY_0058331b
        ;   Label: LAB_004a1a81
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a1a86
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a1a8b
    ADD ESP,0x4                         ; 004a1a8d
    XOR EAX,EAX                         ; 004a1a90
    MOV EDI,EBX                         ; 004a1a92
    MOV dword ptr [ESP + 0x2e8],EAX     ; 004a1a94
    SUB ECX,ECX                         ; 004a1a9b
    DEC ECX                             ; 004a1a9d
    XOR EAX,EAX                         ; 004a1a9e
    SCASB.REPNE ES:EDI                  ; 004a1aa0
    NOT ECX                             ; 004a1aa2
    DEC ECX                             ; 004a1aa4
    MOV dword ptr [ESP + 0x2e4],ECX     ; 004a1aa5
    TEST ECX,ECX                        ; 004a1aac
    JLE 0x004a1aeb                      ; 004a1aae
        ;   XREF to: 004a1aeb (CONDITIONAL_JUMP)  ; LAB_004a1aeb
    MOV EAX,ECX                         ; 004a1ab0
    NEG EAX                             ; 004a1ab2
    MOV EDI,ECX                         ; 004a1ab4
    ADD ECX,EAX                         ; 004a1ab6
    MOV dword ptr [ESP + 0x424],ECX     ; 004a1ab8
    XOR EAX,EAX                         ; 004a1abf
        ;   Label: LAB_004a1abf
    MOV AL,byte ptr [EBX]               ; 004a1ac1
    PUSH EAX                            ; 004a1ac3
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a1ac4 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a1acb
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a1ad0
    CMP ESI,EAX                         ; 004a1ad3
    JNZ 0x004a1ade                      ; 004a1ad5
        ;   XREF to: 004a1ade (CONDITIONAL_JUMP)  ; LAB_004a1ade
    INC dword ptr [ESP + 0x2e8]         ; 004a1ad7
    MOV ECX,dword ptr [ESP + 0x424]     ; 004a1ade
        ;   Label: LAB_004a1ade
    DEC EDI                             ; 004a1ae5
    INC EBX                             ; 004a1ae6
    CMP EDI,ECX                         ; 004a1ae7
    JG 0x004a1abf                       ; 004a1ae9
        ;   XREF to: 004a1abf (CONDITIONAL_JUMP)  ; LAB_004a1abf
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 004a1aeb
        ;   Label: LAB_004a1aeb
    MOV EBX,dword ptr [ESP + 0x2e4]     ; 004a1af2
    CMP EAX,EBX                         ; 004a1af9
    JNZ 0x004a1c74                      ; 004a1afb
        ;   XREF to: 004a1c74 (CONDITIONAL_JUMP)  ; LAB_004a1c74
    MOV ESI,0x583352                    ; 004a1b01 | = "CGun"
    PUSH 0x314                          ; 004a1b06
    XOR AH,BH                           ; 004a1b0b
    MOV EDI,0x3                         ; 004a1b0d
    MOV byte ptr [0x01c78af0],AH        ; 004a1b12 | DAT_01c78af0
    CALL crt_unknown.c_FUN_0056497c     ; 004a1b18
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a1b1d
    TEST EAX,EAX                        ; 004a1b20
    JZ 0x004a1b2d                       ; 004a1b22
        ;   XREF to: 004a1b2d (CONDITIONAL_JUMP)  ; LAB_004a1b2d
    PUSH EAX                            ; 004a1b24
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a1b25
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004a1b2a
    MOV EBX,EAX                         ; 004a1b2d
        ;   Label: LAB_004a1b2d
    TEST EBX,EBX                        ; 004a1b2f
    JNZ 0x004a1fdc                      ; 004a1b31
        ;   XREF to: 004a1fdc (CONDITIONAL_JUMP)  ; LAB_004a1fdc
    PUSH 0x314                          ; 004a1b37
        ;   Label: LAB_004a1b37
    MOV EDI,0x583357                    ; 004a1b3c | = "CGun"
    MOV ESI,0x7                         ; 004a1b41
    CALL crt_unknown.c_FUN_0056497c     ; 004a1b46
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a1b4b
    TEST EAX,EAX                        ; 004a1b4e
    JZ 0x004a1b5b                       ; 004a1b50
        ;   XREF to: 004a1b5b (CONDITIONAL_JUMP)  ; LAB_004a1b5b
    PUSH EAX                            ; 004a1b52
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a1b53
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004a1b58
    MOV EBX,EAX                         ; 004a1b5b
        ;   Label: LAB_004a1b5b
    TEST EBX,EBX                        ; 004a1b5d
    JNZ 0x004a2033                      ; 004a1b5f
        ;   XREF to: 004a2033 (CONDITIONAL_JUMP)  ; LAB_004a2033
    PUSH 0x314                          ; 004a1b65
        ;   Label: LAB_004a1b65
    MOV ESI,0x58335c                    ; 004a1b6a | = "CGun"
    MOV EDI,0x8                         ; 004a1b6f
    CALL crt_unknown.c_FUN_0056497c     ; 004a1b74
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a1b79
    TEST EAX,EAX                        ; 004a1b7c
    JZ 0x004a1b89                       ; 004a1b7e
        ;   XREF to: 004a1b89 (CONDITIONAL_JUMP)  ; LAB_004a1b89
    PUSH EAX                            ; 004a1b80
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a1b81
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004a1b86
    MOV EBX,EAX                         ; 004a1b89
        ;   Label: LAB_004a1b89
    TEST EBX,EBX                        ; 004a1b8b
    JNZ 0x004a208b                      ; 004a1b8d
        ;   XREF to: 004a208b (CONDITIONAL_JUMP)  ; LAB_004a208b
    PUSH 0x583361                       ; 004a1b93 | = "CShotgun"
        ;   Label: LAB_004a1b93
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1b98
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1b9d
    PUSH 0x58336a                       ; 004a1ba0 | = "CCrossbow"
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1ba5
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1baa
    PUSH 0x314                          ; 004a1bad
    MOV ESI,0x583374                    ; 004a1bb2 | = "CCrossbow"
    MOV EDI,0x1                         ; 004a1bb7
    CALL crt_unknown.c_FUN_0056497c     ; 004a1bbc
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a1bc1
    TEST EAX,EAX                        ; 004a1bc4
    JZ 0x004a1bd1                       ; 004a1bc6
        ;   XREF to: 004a1bd1 (CONDITIONAL_JUMP)  ; LAB_004a1bd1
    PUSH EAX                            ; 004a1bc8
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a1bc9
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004a1bce
    MOV EBX,EAX                         ; 004a1bd1
        ;   Label: LAB_004a1bd1
    TEST EBX,EBX                        ; 004a1bd3
    JNZ 0x004a20e3                      ; 004a1bd5
        ;   XREF to: 004a20e3 (CONDITIONAL_JUMP)  ; LAB_004a20e3
    PUSH 0x58337e                       ; 004a1bdb | = "CDynamite"
        ;   Label: LAB_004a1bdb
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1be0
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1be5
    PUSH 0x583388                       ; 004a1be8 | = "CFlameThrower"
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1bed
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1bf2
    PUSH 0x583396                       ; 004a1bf5 | = "CTommyGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1bfa
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1bff
    PUSH 0x5833a0                       ; 004a1c02 | = "CElephantGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1c07
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1c0c
    PUSH 0x5833ad                       ; 004a1c0f | = "CLightGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a1c14
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004a02e0(char * class_name)
    ADD ESP,0x4                         ; 004a1c19
    PUSH 0x40a00000                     ; 004a1c1c
    PUSH 0x5833b7                       ; 004a1c21 | = "You've got all the weapons"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1c26
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1c2b
    PUSH EAX                            ; 004a1c2e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a1c2f
    PUSH EDX                            ; 004a1c32
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1c33
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1c38
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1c3b
    PUSH 0x5833d2                       ; 004a1c3e | = "cheat-1.wav"
    MOV dword ptr [EAX + 0x1d0],0x1     ; 004a1c43
    MOV EAX,[0x01cae0e8]                ; 004a1c4d | DAT_01cae0e8
    PUSH 0x0                            ; 004a1c52
    MOV ECX,dword ptr [0x005bed68]      ; 004a1c54 | g_CSound_PTR_005bed68
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a1c5a
    PUSH ECX                            ; 004a1c61
    MOV dword ptr [EAX + 0x2434],0x42c80000 ; 004a1c62
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1c6c
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1c71
    PUSH 0x5833de                       ; 004a1c74 | BYTE_ARRAY_005833de
        ;   Label: LAB_004a1c74
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a1c79
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a1c7e
    ADD ESP,0x4                         ; 004a1c80
    MOV EDI,EAX                         ; 004a1c83
    MOV EBX,EAX                         ; 004a1c85
    SUB ECX,ECX                         ; 004a1c87
    DEC ECX                             ; 004a1c89
    XOR EAX,EAX                         ; 004a1c8a
    SCASB.REPNE ES:EDI                  ; 004a1c8c
    NOT ECX                             ; 004a1c8e
    DEC ECX                             ; 004a1c90
    MOV dword ptr [ESP + 0x2ec],ECX     ; 004a1c91
    TEST ECX,ECX                        ; 004a1c98
    JLE 0x004a1cde                      ; 004a1c9a
        ;   XREF to: 004a1cde (CONDITIONAL_JUMP)  ; LAB_004a1cde
    MOV EAX,ECX                         ; 004a1c9c
    NEG EAX                             ; 004a1c9e
    MOV EDI,ECX                         ; 004a1ca0
    ADD ECX,EAX                         ; 004a1ca2
    MOV dword ptr [ESP + 0x428],ECX     ; 004a1ca4
    XOR EAX,EAX                         ; 004a1cab
        ;   Label: LAB_004a1cab
    MOV AL,byte ptr [EDI + 0x1c78aef]   ; 004a1cad | DAT_01c78af0
    MOV dword ptr [ESP + 0x480],EAX     ; 004a1cb3
    XOR EAX,EAX                         ; 004a1cba
    MOV AL,byte ptr [EBX]               ; 004a1cbc
    PUSH EAX                            ; 004a1cbe
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a1cbf
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a1cc4
    CMP EAX,dword ptr [ESP + 0x480]     ; 004a1cc7
    JNZ 0x004a1cd1                      ; 004a1cce
        ;   XREF to: 004a1cd1 (CONDITIONAL_JUMP)  ; LAB_004a1cd1
    INC ESI                             ; 004a1cd0
    MOV EAX,dword ptr [ESP + 0x428]     ; 004a1cd1
        ;   Label: LAB_004a1cd1
    DEC EDI                             ; 004a1cd8
    INC EBX                             ; 004a1cd9
    CMP EDI,EAX                         ; 004a1cda
    JG 0x004a1cab                       ; 004a1cdc
        ;   XREF to: 004a1cab (CONDITIONAL_JUMP)  ; LAB_004a1cab
    CMP ESI,dword ptr [ESP + 0x2ec]     ; 004a1cde
        ;   Label: LAB_004a1cde
    JNZ 0x004a1d41                      ; 004a1ce5
        ;   XREF to: 004a1d41 (CONDITIONAL_JUMP)  ; LAB_004a1d41
    MOV EAX,[0x01cae0e8]                ; 004a1ce7 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a1cec
    XOR DL,DL                           ; 004a1cf3
    MOV EAX,dword ptr [EAX + 0x1f8d0]   ; 004a1cf5
    MOV byte ptr [0x01c78af0],DL        ; 004a1cfb | DAT_01c78af0
    TEST EAX,EAX                        ; 004a1d01
    JZ 0x004a1d0c                       ; 004a1d03
        ;   XREF to: 004a1d0c (CONDITIONAL_JUMP)  ; LAB_004a1d0c
    ADD dword ptr [EAX + 0x560],0x64    ; 004a1d05
    PUSH 0x40a00000                     ; 004a1d0c
        ;   Label: LAB_004a1d0c
    PUSH 0x583415                       ; 004a1d11 | = "You just got 100 more bullets"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1d16
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1d1b
    PUSH EAX                            ; 004a1d1e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a1d1f
    PUSH EBX                            ; 004a1d22
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1d23
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1d28
    PUSH 0x583433                       ; 004a1d2b | = "cheat-1.wav"
    PUSH 0x0                            ; 004a1d30
    MOV ESI,dword ptr [0x005bed68]      ; 004a1d32 | g_CSound_PTR_005bed68
    PUSH ESI                            ; 004a1d38
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1d39
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1d3e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1d41
        ;   Label: LAB_004a1d41
    CMP dword ptr [EAX + 0x210],0x0     ; 004a1d44
    JZ 0x004a2165                       ; 004a1d4b
        ;   XREF to: 004a2165 (CONDITIONAL_JUMP)  ; LAB_004a2165
    PUSH 0x58343f                       ; 004a1d51 | BYTE_ARRAY_0058343f
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a1d56
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a1d5b
    ADD ESP,0x4                         ; 004a1d5d
    XOR EAX,EAX                         ; 004a1d60
    MOV EDI,EBX                         ; 004a1d62
    MOV dword ptr [ESP + 0x2f4],EAX     ; 004a1d64
    SUB ECX,ECX                         ; 004a1d6b
    DEC ECX                             ; 004a1d6d
    XOR EAX,EAX                         ; 004a1d6e
    SCASB.REPNE ES:EDI                  ; 004a1d70
    NOT ECX                             ; 004a1d72
    DEC ECX                             ; 004a1d74
    MOV dword ptr [ESP + 0x2f0],ECX     ; 004a1d75
    TEST ECX,ECX                        ; 004a1d7c
    JLE 0x004a1dbd                      ; 004a1d7e
        ;   XREF to: 004a1dbd (CONDITIONAL_JUMP)  ; LAB_004a1dbd
    MOV EAX,ECX                         ; 004a1d80
    MOV ESI,EBX                         ; 004a1d82
    NEG EAX                             ; 004a1d84
    MOV EBX,ECX                         ; 004a1d86
    ADD ECX,EAX                         ; 004a1d88
    MOV dword ptr [ESP + 0x42c],ECX     ; 004a1d8a
    XOR EAX,EAX                         ; 004a1d91
        ;   Label: LAB_004a1d91
    MOV AL,byte ptr [ESI]               ; 004a1d93
    PUSH EAX                            ; 004a1d95
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a1d96 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a1d9d
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a1da2
    CMP EDI,EAX                         ; 004a1da5
    JNZ 0x004a1db0                      ; 004a1da7
        ;   XREF to: 004a1db0 (CONDITIONAL_JUMP)  ; LAB_004a1db0
    INC dword ptr [ESP + 0x2f4]         ; 004a1da9
    MOV ECX,dword ptr [ESP + 0x42c]     ; 004a1db0
        ;   Label: LAB_004a1db0
    DEC EBX                             ; 004a1db7
    INC ESI                             ; 004a1db8
    CMP EBX,ECX                         ; 004a1db9
    JG 0x004a1d91                       ; 004a1dbb
        ;   XREF to: 004a1d91 (CONDITIONAL_JUMP)  ; LAB_004a1d91
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 004a1dbd
        ;   Label: LAB_004a1dbd
    CMP EAX,dword ptr [ESP + 0x2f0]     ; 004a1dc4
    JNZ 0x004a213a                      ; 004a1dcb
        ;   XREF to: 004a213a (CONDITIONAL_JUMP)  ; LAB_004a213a
    XOR DH,DH                           ; 004a1dd1
    MOV byte ptr [0x01c78af0],DH        ; 004a1dd3 | DAT_01c78af0
    PUSH 0x583472                       ; 004a1dd9 | = "cheat-1.wav"
        ;   Label: LAB_004a1dd9
    PUSH 0x0                            ; 004a1dde
    MOV ESI,dword ptr [0x005bed68]      ; 004a1de0 | g_CSound_PTR_005bed68
    PUSH ESI                            ; 004a1de6
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a1de7
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a1dec
    MOV EDI,0x5b92f0                    ; 004a1def | DAT_005b92f0
    PUSH 0x1                            ; 004a1df4
        ;   Label: LAB_004a1df4
    PUSH 0x64                           ; 004a1df6
    PUSH EDI                            ; 004a1df8 | DAT_005b92f0
    PUSH 0x58347e                       ; 004a1df9 | = "Raise an event"
    MOV EAX,[0x005b6d50]                ; 004a1dfe | g_CEditorTools_PTR_005b6d50
    PUSH EAX                            ; 004a1e03
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 ; 004a1e04
        ;   XREF to: 00471600 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a1e09
    TEST EAX,EAX                        ; 004a1e0c
    JZ 0x004a2165                       ; 004a1e0e
        ;   XREF to: 004a2165 (CONDITIONAL_JUMP)  ; LAB_004a2165
    PUSH EDI                            ; 004a1e14 | DAT_005b92f0
    MOV EDX,dword ptr [0x005b7650]      ; 004a1e15 | DAT_005b7650
    PUSH EDX                            ; 004a1e1b
    CALL core_event.cpp_CEventList_validateCommands_FUN_0047dcd0 ; 004a1e1c
        ;   XREF to: 0047dcd0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004a1e21
    TEST EAX,EAX                        ; 004a1e24
    JZ 0x004a229c                       ; 004a1e26
        ;   XREF to: 004a229c (CONDITIONAL_JUMP)  ; LAB_004a229c
    PUSH EAX                            ; 004a1e2c
    MOV ECX,dword ptr [0x005b6d50]      ; 004a1e2d | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004a1e33
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a1e34
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a1e39
    JMP 0x004a1df4                      ; 004a1e3c
        ;   XREF to: 004a1df4 (UNCONDITIONAL_JUMP)  ; LAB_004a1df4
    PUSH 0x44                           ; 004a1e3e
        ;   Label: LAB_004a1e3e
    MOV EAX,[0x005bac64]                ; 004a1e40 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a1e45 | g_CKeys_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004a1e46 | g_CKeys_01cc30e4
    CALL dword ptr [EBX + 0x4]          ; 004a1e48
    ADD ESP,0x8                         ; 004a1e4b
    TEST EAX,EAX                        ; 004a1e4e
    JZ 0x004a05f0                       ; 004a1e50
        ;   XREF to: 004a05f0 (CONDITIONAL_JUMP)  ; LAB_004a05f0
    PUSH 0x0                            ; 004a1e56
    PUSH 0x64                           ; 004a1e58
    LEA EAX,[ESP + 0x108]               ; 004a1e5a
    PUSH EAX                            ; 004a1e61
    PUSH 0x582bcd                       ; 004a1e62 | = "Enter cheat code"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1e67
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1e6c
    PUSH EAX                            ; 004a1e6f
    MOV ECX,dword ptr [0x005b6d50]      ; 004a1e70 | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004a1e76
    CALL shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00471630 ; 004a1e77
        ;   XREF to: 00471630 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00471630(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a1e7c
    TEST EAX,EAX                        ; 004a1e7f
    JZ 0x004a05f0                       ; 004a1e81
        ;   XREF to: 004a05f0 (CONDITIONAL_JUMP)  ; LAB_004a05f0
    MOV AH,byte ptr [ESP + 0x100]       ; 004a1e87
    XOR EBX,EBX                         ; 004a1e8e
    TEST AH,AH                          ; 004a1e90
    JZ 0x004a05f0                       ; 004a1e92
        ;   XREF to: 004a05f0 (CONDITIONAL_JUMP)  ; LAB_004a05f0
    XOR EAX,EAX                         ; 004a1e98
        ;   Label: LAB_004a1e98
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x100] ; 004a1e9a
    PUSH EAX                            ; 004a1ea1
    CALL wincore_winrun.cpp_enqueueInput_FUN_00558ba0 ; 004a1ea2
        ;   XREF to: 00558ba0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_00558ba0(int input_value)
    ADD ESP,0x4                         ; 004a1ea7
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x101] ; 004a1eaa
    INC EBX                             ; 004a1eb1
    TEST DL,DL                          ; 004a1eb2
    JNZ 0x004a1e98                      ; 004a1eb4
        ;   XREF to: 004a1e98 (CONDITIONAL_JUMP)  ; LAB_004a1e98
    JMP 0x004a05f0                      ; 004a1eb6
        ;   XREF to: 004a05f0 (UNCONDITIONAL_JUMP)  ; LAB_004a05f0
    INC dword ptr [ESP + 0x204]         ; 004a1ebb
        ;   Label: LAB_004a1ebb
    JMP 0x004a0693                      ; 004a1ec2
        ;   XREF to: 004a0693 (UNCONDITIONAL_JUMP)  ; LAB_004a0693
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a1ec7
        ;   Label: LAB_004a1ec7
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a1eca
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ESI,dword ptr [EBX + 0x268]     ; 004a1ecf
    SUB EAX,ESI                         ; 004a1ed5
    MOV dword ptr [ESP + 0x480],EAX     ; 004a1ed7
    FILD dword ptr [ESP + 0x480]        ; 004a1ede
    FMUL double ptr [0x00583ada]        ; 004a1ee5 | DOUBLE_00583ada
    MOV dword ptr [EBX + 0x208],0x0     ; 004a1eeb
    MOV EAX,EBX                         ; 004a1ef5
    FMUL double ptr [0x00583ae2]        ; 004a1ef7 | DOUBLE_00583ae2
    FILD dword ptr [EAX + 0x26c]        ; 004a1efd
    FXCH                                ; 004a1f03
    FSTP double ptr [ESP + 0x1e8]       ; 004a1f05
    FDIV double ptr [ESP + 0x1e8]       ; 004a1f0c
    FSTP double ptr [ESP + 0x1e8]       ; 004a1f13
    MOV EDI,dword ptr [ESP + 0x1ec]     ; 004a1f1a
    PUSH EDI                            ; 004a1f21
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004a1f22
    PUSH EAX                            ; 004a1f29
    PUSH 0x582c81                       ; 004a1f2a | = "FPS: %3.2lf"
    LEA EAX,[ESP + 0xc]                 ; 004a1f2f
    PUSH EAX                            ; 004a1f33
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a1f34
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a1f39
    MOV EAX,ESP                         ; 004a1f3c
    PUSH 0x40a00000                     ; 004a1f3e
    PUSH EAX                            ; 004a1f43
    PUSH EBX                            ; 004a1f44
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1f45
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1f4a
    JMP 0x004a08de                      ; 004a1f4d
        ;   XREF to: 004a08de (UNCONDITIONAL_JUMP)  ; LAB_004a08de
    PUSH 0x40a00000                     ; 004a1f52
        ;   Label: LAB_004a1f52
    PUSH 0x582d04                       ; 004a1f57 | = "Event debug off"
    JMP 0x004a0a4e                      ; 004a1f5c
        ;   XREF to: 004a0a4e (UNCONDITIONAL_JUMP)  ; LAB_004a0a4e
    PUSH 0x40a00000                     ; 004a1f61
        ;   Label: LAB_004a1f61
    PUSH 0x582d64                       ; 004a1f66 | = "Script debug off"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1f6b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1f70
    PUSH EAX                            ; 004a1f73
    PUSH EBX                            ; 004a1f74
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1f75
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1f7a
    MOV EDI,dword ptr [0x005b7620]      ; 004a1f7d | DAT_005b7620
    PUSH EDI                            ; 004a1f83
    PUSH 0x0                            ; 004a1f84
    PUSH 0x0                            ; 004a1f86
    MOV EAX,[0x005be368]                ; 004a1f88 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 004a1f8d | g_CDemonSet_01e57284
    MOV dword ptr [EBX + 0x278],0x0     ; 004a1f8e
    JMP 0x004a0b61                      ; 004a1f98
        ;   XREF to: 004a0b61 (UNCONDITIONAL_JUMP)  ; LAB_004a0b61
    PUSH 0x40a00000                     ; 004a1f9d
        ;   Label: LAB_004a1f9d
    PUSH 0x582dc9                       ; 004a1fa2 | = "Memory debugging off"
    JMP 0x004a0c40                      ; 004a1fa7
        ;   XREF to: 004a0c40 (UNCONDITIONAL_JUMP)  ; LAB_004a0c40
    PUSH 0x40a00000                     ; 004a1fac
        ;   Label: LAB_004a1fac
    PUSH 0x582fc8                       ; 004a1fb1 | = "God mode disabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a1fb6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a1fbb
    PUSH EAX                            ; 004a1fbe
    PUSH EBX                            ; 004a1fbf
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a1fc0
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a1fc5
    JMP 0x004a125c                      ; 004a1fc8
        ;   XREF to: 004a125c (UNCONDITIONAL_JUMP)  ; LAB_004a125c
    PUSH 0x40a00000                     ; 004a1fcd
        ;   Label: LAB_004a1fcd
    PUSH 0x58302d                       ; 004a1fd2 | = "Enemies thawed"
    JMP 0x004a1320                      ; 004a1fd7
        ;   XREF to: 004a1320 (UNCONDITIONAL_JUMP)  ; LAB_004a1320
    PUSH EBX                            ; 004a1fdc
        ;   Label: LAB_004a1fdc
    MOV EAX,[0x005baf90]                ; 004a1fdd | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004a1fe2
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a1fe3
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a1fe8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a1feb
    PUSH EBX                            ; 004a1ff1
    CALL dword ptr [EAX]                ; 004a1ff2
    ADD ESP,0x4                         ; 004a1ff4
    PUSH ESI                            ; 004a1ff7 | = "CGun"
    PUSH EBX                            ; 004a1ff8
    MOV dword ptr [EBX + 0x310],EDI     ; 004a1ff9
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a1fff
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a2004
    MOV EAX,[0x01cae0e8]                ; 004a2007 | DAT_01cae0e8
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a200c
    PUSH 0x1                            ; 004a2016
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a2018
    PUSH EBX                            ; 004a201f
    ADD EAX,0x1f5a0                     ; 004a2020
    PUSH EAX                            ; 004a2025
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a2026
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a202b
    JMP 0x004a1b37                      ; 004a202e
        ;   XREF to: 004a1b37 (UNCONDITIONAL_JUMP)  ; LAB_004a1b37
    PUSH EBX                            ; 004a2033
        ;   Label: LAB_004a2033
    MOV EDX,dword ptr [0x005baf90]      ; 004a2034 | g_CDemonMission_PTR_005baf90
    PUSH EDX                            ; 004a203a
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a203b
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a2040
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a2043
    PUSH EBX                            ; 004a2049
    CALL dword ptr [EAX]                ; 004a204a
    ADD ESP,0x4                         ; 004a204c
    PUSH EDI                            ; 004a204f | = "CGun"
    PUSH EBX                            ; 004a2050
    MOV dword ptr [EBX + 0x310],ESI     ; 004a2051
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a2057
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a205c
    MOV EAX,[0x01cae0e8]                ; 004a205f | DAT_01cae0e8
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a2064
    PUSH 0x1                            ; 004a206e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a2070
    PUSH EBX                            ; 004a2077
    ADD EAX,0x1f5a0                     ; 004a2078
    PUSH EAX                            ; 004a207d
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a207e
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a2083
    JMP 0x004a1b65                      ; 004a2086
        ;   XREF to: 004a1b65 (UNCONDITIONAL_JUMP)  ; LAB_004a1b65
    PUSH EBX                            ; 004a208b
        ;   Label: LAB_004a208b
    MOV ECX,dword ptr [0x005baf90]      ; 004a208c | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004a2092
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a2093
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a2098
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a209b
    PUSH EBX                            ; 004a20a1
    CALL dword ptr [EAX]                ; 004a20a2
    ADD ESP,0x4                         ; 004a20a4
    PUSH ESI                            ; 004a20a7 | = "CGun"
    PUSH EBX                            ; 004a20a8
    MOV dword ptr [EBX + 0x310],EDI     ; 004a20a9
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a20af
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a20b4
    MOV EAX,[0x01cae0e8]                ; 004a20b7 | DAT_01cae0e8
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a20bc
    PUSH 0x1                            ; 004a20c6
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a20c8
    PUSH EBX                            ; 004a20cf
    ADD EAX,0x1f5a0                     ; 004a20d0
    PUSH EAX                            ; 004a20d5
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a20d6
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a20db
    JMP 0x004a1b93                      ; 004a20de
        ;   XREF to: 004a1b93 (UNCONDITIONAL_JUMP)  ; LAB_004a1b93
    PUSH EBX                            ; 004a20e3
        ;   Label: LAB_004a20e3
    MOV EAX,[0x005baf90]                ; 004a20e4 | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004a20e9
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a20ea
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a20ef
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a20f2
    PUSH EBX                            ; 004a20f8
    CALL dword ptr [EAX]                ; 004a20f9
    ADD ESP,0x4                         ; 004a20fb
    PUSH ESI                            ; 004a20fe | = "CCrossbow"
    PUSH EBX                            ; 004a20ff
    MOV dword ptr [EBX + 0x310],EDI     ; 004a2100
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a2106
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a210b
    MOV EAX,[0x01cae0e8]                ; 004a210e | DAT_01cae0e8
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a2113
    PUSH 0x1                            ; 004a211d
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a211f
    PUSH EBX                            ; 004a2126
    ADD EAX,0x1f5a0                     ; 004a2127
    PUSH EAX                            ; 004a212c
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a212d
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a2132
    JMP 0x004a1bdb                      ; 004a2135
        ;   XREF to: 004a1bdb (UNCONDITIONAL_JUMP)  ; LAB_004a1bdb
    PUSH 0x1d                           ; 004a213a
        ;   Label: LAB_004a213a
    MOV EAX,[0x005bac64]                ; 004a213c | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a2141 | g_CKeys_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004a2142 | g_CKeys_01cc30e4
    CALL dword ptr [EBX]                ; 004a2144
    ADD ESP,0x8                         ; 004a2146
    TEST EAX,EAX                        ; 004a2149
    JZ 0x004a2165                       ; 004a214b
        ;   XREF to: 004a2165 (CONDITIONAL_JUMP)  ; LAB_004a2165
    PUSH 0x13                           ; 004a214d
    MOV EAX,[0x005bac64]                ; 004a214f | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a2154 | g_CKeys_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004a2155 | g_CKeys_01cc30e4
    CALL dword ptr [EBX + 0x4]          ; 004a2157
    ADD ESP,0x8                         ; 004a215a
    TEST EAX,EAX                        ; 004a215d
    JNZ 0x004a1dd9                      ; 004a215f
        ;   XREF to: 004a1dd9 (CONDITIONAL_JUMP)  ; LAB_004a1dd9
    PUSH 0x58348d                       ; 004a2165 | BYTE_ARRAY_0058348d
        ;   Label: LAB_004a2165
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a216a
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a216f
    ADD ESP,0x4                         ; 004a2171
    MOV EDI,EAX                         ; 004a2174
    MOV EBX,EAX                         ; 004a2176
    SUB ECX,ECX                         ; 004a2178
    DEC ECX                             ; 004a217a
    XOR EAX,EAX                         ; 004a217b
    SCASB.REPNE ES:EDI                  ; 004a217d
    NOT ECX                             ; 004a217f
    DEC ECX                             ; 004a2181
    MOV dword ptr [ESP + 0x2fc],ESI     ; 004a2182
    MOV dword ptr [ESP + 0x2f8],ECX     ; 004a2189
    TEST ECX,ECX                        ; 004a2190
    JLE 0x004a21d1                      ; 004a2192
        ;   XREF to: 004a21d1 (CONDITIONAL_JUMP)  ; LAB_004a21d1
    MOV EAX,ECX                         ; 004a2194
    MOV ESI,EBX                         ; 004a2196
    NEG EAX                             ; 004a2198
    MOV EBX,ECX                         ; 004a219a
    ADD ECX,EAX                         ; 004a219c
    MOV dword ptr [ESP + 0x430],ECX     ; 004a219e
    XOR EAX,EAX                         ; 004a21a5
        ;   Label: LAB_004a21a5
    MOV AL,byte ptr [ESI]               ; 004a21a7
    PUSH EAX                            ; 004a21a9
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a21aa | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a21b1
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a21b6
    CMP EDI,EAX                         ; 004a21b9
    JNZ 0x004a21c4                      ; 004a21bb
        ;   XREF to: 004a21c4 (CONDITIONAL_JUMP)  ; LAB_004a21c4
    INC dword ptr [ESP + 0x2fc]         ; 004a21bd
    MOV EDI,dword ptr [ESP + 0x430]     ; 004a21c4
        ;   Label: LAB_004a21c4
    DEC EBX                             ; 004a21cb
    INC ESI                             ; 004a21cc
    CMP EBX,EDI                         ; 004a21cd
    JG 0x004a21a5                       ; 004a21cf
        ;   XREF to: 004a21a5 (CONDITIONAL_JUMP)  ; LAB_004a21a5
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 004a21d1
        ;   Label: LAB_004a21d1
    CMP EAX,dword ptr [ESP + 0x2f8]     ; 004a21d8
    JNZ 0x004a22f9                      ; 004a21df
        ;   XREF to: 004a22f9 (CONDITIONAL_JUMP)  ; LAB_004a22f9
    PUSH 0x5834c0                       ; 004a21e5 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a21ea
    MOV ECX,dword ptr [0x005bed68]      ; 004a21ec | g_CSound_PTR_005bed68
    XOR BL,BL                           ; 004a21f2
    PUSH ECX                            ; 004a21f4
    MOV byte ptr [0x01c78af0],BL        ; 004a21f5 | DAT_01c78af0
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a21fb
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    XOR EBX,EBX                         ; 004a2200
    ADD ESP,0xc                         ; 004a2202
    XOR EDI,EDI                         ; 004a2205
    MOV dword ptr [ESP + 0x47c],EBX     ; 004a2207
        ;   Label: LAB_004a2207
    MOV EAX,[0x005be368]                ; 004a220e | g_CDemonSet_PTR_005be368
    MOV EBX,dword ptr [ESP + 0x47c]     ; 004a2213
    CMP EBX,dword ptr [EAX + 0x150bf4]  ; 004a221a | g_CDemonSet_01e57284.enemy_count
    JGE 0x004a22f9                      ; 004a2220
        ;   XREF to: 004a22f9 (CONDITIONAL_JUMP)  ; LAB_004a22f9
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x150bf8] ; 004a2226
    MOV EAX,[0x01cae0e8]                ; 004a222d | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a2232
    LEA ESI,[EBX + 0x20]                ; 004a2239
    FLD float ptr [EAX + 0x20]          ; 004a223c
    FSUB float ptr [ESI]                ; 004a223f
    FSTP float ptr [ESP + 0x1dc]        ; 004a2241
    FLD float ptr [EAX + 0x24]          ; 004a2248
    FSUB float ptr [ESI + 0x4]          ; 004a224b
    FST float ptr [ESP + 0x1e0]         ; 004a224e
    FMUL float ptr [ESP + 0x1e0]        ; 004a2255
    FLD float ptr [ESP + 0x1dc]         ; 004a225c
    FMUL ST0                            ; 004a2263
    FLD float ptr [EAX + 0x28]          ; 004a2265
    FSUB float ptr [ESI + 0x8]          ; 004a2268
    FXCH                                ; 004a226b
    FADDP ST2,ST0                       ; 004a226d
    FST float ptr [ESP + 0x1e4]         ; 004a226f
    FMUL float ptr [ESP + 0x1e4]        ; 004a2276
    FADDP                               ; 004a227d
    FSQRT                               ; 004a227f
    FCOMP double ptr [0x00583af2]       ; 004a2281 | DOUBLE_00583af2
    FNSTSW AX                           ; 004a2287
    SAHF                                ; 004a2289
    JBE 0x004a22b5                      ; 004a228a
        ;   XREF to: 004a22b5 (CONDITIONAL_JUMP)  ; LAB_004a22b5
    MOV EBX,dword ptr [ESP + 0x47c]     ; 004a228c
    INC EBX                             ; 004a2293
    ADD EDI,0x4                         ; 004a2294
    JMP 0x004a2207                      ; 004a2297
        ;   XREF to: 004a2207 (UNCONDITIONAL_JUMP)  ; LAB_004a2207
    PUSH 0x5b92f0                       ; 004a229c | DAT_005b92f0
        ;   Label: LAB_004a229c
    MOV EBX,dword ptr [0x005b7650]      ; 004a22a1 | DAT_005b7650
    PUSH EBX                            ; 004a22a7
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004a22a8
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004a22ad
    JMP 0x004a2165                      ; 004a22b0
        ;   XREF to: 004a2165 (UNCONDITIONAL_JUMP)  ; LAB_004a2165
    LEA EAX,[ESP + 0x1a0]               ; 004a22b5
        ;   Label: LAB_004a22b5
    PUSH EAX                            ; 004a22bc
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004a22bd
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004a22c2
    LEA ESI,[ESP + 0x1a0]               ; 004a22c5
    MOV ECX,0x42c80000                  ; 004a22cc
    PUSH ESI                            ; 004a22d1
    MOV dword ptr [ESP + 0x1a8],ECX     ; 004a22d2
    PUSH EBX                            ; 004a22d9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a22da
    CALL dword ptr [EAX + 0x100]        ; 004a22e0
    ADD ESP,0x8                         ; 004a22e6
    MOV EBX,dword ptr [ESP + 0x47c]     ; 004a22e9
    INC EBX                             ; 004a22f0
    ADD EDI,0x4                         ; 004a22f1
    JMP 0x004a2207                      ; 004a22f4
        ;   XREF to: 004a2207 (UNCONDITIONAL_JUMP)  ; LAB_004a2207
    PUSH 0x5834cc                       ; 004a22f9 | BYTE_ARRAY_005834cc
        ;   Label: LAB_004a22f9
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a22fe
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a2303
    ADD ESP,0x4                         ; 004a2305
    MOV EDI,EAX                         ; 004a2308
    MOV EBX,EAX                         ; 004a230a
    SUB ECX,ECX                         ; 004a230c
    DEC ECX                             ; 004a230e
    XOR EAX,EAX                         ; 004a230f
    SCASB.REPNE ES:EDI                  ; 004a2311
    NOT ECX                             ; 004a2313
    DEC ECX                             ; 004a2315
    MOV dword ptr [ESP + 0x304],ESI     ; 004a2316
    MOV dword ptr [ESP + 0x300],ECX     ; 004a231d
    TEST ECX,ECX                        ; 004a2324
    JLE 0x004a2363                      ; 004a2326
        ;   XREF to: 004a2363 (CONDITIONAL_JUMP)  ; LAB_004a2363
    MOV EAX,ECX                         ; 004a2328
    NEG EAX                             ; 004a232a
    MOV EDI,ECX                         ; 004a232c
    ADD ECX,EAX                         ; 004a232e
    MOV dword ptr [ESP + 0x434],ECX     ; 004a2330
    XOR EAX,EAX                         ; 004a2337
        ;   Label: LAB_004a2337
    MOV AL,byte ptr [EBX]               ; 004a2339
    PUSH EAX                            ; 004a233b
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a233c | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2343
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2348
    CMP ESI,EAX                         ; 004a234b
    JNZ 0x004a2356                      ; 004a234d
        ;   XREF to: 004a2356 (CONDITIONAL_JUMP)  ; LAB_004a2356
    INC dword ptr [ESP + 0x304]         ; 004a234f
    MOV EAX,dword ptr [ESP + 0x434]     ; 004a2356
        ;   Label: LAB_004a2356
    DEC EDI                             ; 004a235d
    INC EBX                             ; 004a235e
    CMP EDI,EAX                         ; 004a235f
    JG 0x004a2337                       ; 004a2361
        ;   XREF to: 004a2337 (CONDITIONAL_JUMP)  ; LAB_004a2337
    MOV EAX,dword ptr [ESP + 0x304]     ; 004a2363
        ;   Label: LAB_004a2363
    CMP EAX,dword ptr [ESP + 0x300]     ; 004a236a
    JNZ 0x004a23ce                      ; 004a2371
        ;   XREF to: 004a23ce (CONDITIONAL_JUMP)  ; LAB_004a23ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2373
    XOR BH,BH                           ; 004a2376
    MOV ECX,dword ptr [EAX + 0x1e0]     ; 004a2378
    MOV byte ptr [0x01c78af0],BH        ; 004a237e | DAT_01c78af0
    TEST ECX,ECX                        ; 004a2384
    SETZ AL                             ; 004a2386
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a2389
    AND EAX,0xff                        ; 004a238c
    MOV dword ptr [EBX + 0x1e0],EAX     ; 004a2391
    JZ 0x004a2c60                       ; 004a2397
        ;   XREF to: 004a2c60 (CONDITIONAL_JUMP)  ; LAB_004a2c60
    PUSH 0x40a00000                     ; 004a239d
    PUSH 0x583503                       ; 004a23a2 | = "Gratuitous dismemberment enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a23a7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004a23a7
    ADD ESP,0x4                         ; 004a23ac
    PUSH EAX                            ; 004a23af
    PUSH EBX                            ; 004a23b0
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a23b1
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a23b6
    PUSH 0x583546                       ; 004a23b9 | = "cheat-1.wav"
    PUSH 0x0                            ; 004a23be
    MOV EAX,[0x005bed68]                ; 004a23c0 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004a23c5
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a23c6
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a23cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a23ce
        ;   Label: LAB_004a23ce
    CMP dword ptr [EAX + 0x210],0x0     ; 004a23d1
    JZ 0x004a24a0                       ; 004a23d8
        ;   XREF to: 004a24a0 (CONDITIONAL_JUMP)  ; LAB_004a24a0
    PUSH 0x583552                       ; 004a23de | BYTE_ARRAY_00583552
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a23e3
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV ESI,EAX                         ; 004a23e8
    ADD ESP,0x4                         ; 004a23ea
    XOR ECX,ECX                         ; 004a23ed
    MOV EDI,EAX                         ; 004a23ef
    MOV dword ptr [ESP + 0x30c],ECX     ; 004a23f1
    SUB ECX,ECX                         ; 004a23f8
    DEC ECX                             ; 004a23fa
    XOR EAX,EAX                         ; 004a23fb
    SCASB.REPNE ES:EDI                  ; 004a23fd
    NOT ECX                             ; 004a23ff
    DEC ECX                             ; 004a2401
    MOV dword ptr [ESP + 0x308],ECX     ; 004a2402
    TEST ECX,ECX                        ; 004a2409
    JLE 0x004a2448                      ; 004a240b
        ;   XREF to: 004a2448 (CONDITIONAL_JUMP)  ; LAB_004a2448
    MOV EAX,ECX                         ; 004a240d
    NEG EAX                             ; 004a240f
    MOV EBX,ECX                         ; 004a2411
    ADD ECX,EAX                         ; 004a2413
    MOV dword ptr [ESP + 0x1f0],ECX     ; 004a2415
    XOR EAX,EAX                         ; 004a241c
        ;   Label: LAB_004a241c
    MOV AL,byte ptr [ESI]               ; 004a241e
    PUSH EAX                            ; 004a2420
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a2421 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2428
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a242d
    CMP EDI,EAX                         ; 004a2430
    JNZ 0x004a243b                      ; 004a2432
        ;   XREF to: 004a243b (CONDITIONAL_JUMP)  ; LAB_004a243b
    INC dword ptr [ESP + 0x30c]         ; 004a2434
    MOV EDI,dword ptr [ESP + 0x1f0]     ; 004a243b
        ;   Label: LAB_004a243b
    DEC EBX                             ; 004a2442
    INC ESI                             ; 004a2443
    CMP EBX,EDI                         ; 004a2444
    JG 0x004a241c                       ; 004a2446
        ;   XREF to: 004a241c (CONDITIONAL_JUMP)  ; LAB_004a241c
    MOV EAX,dword ptr [ESP + 0x30c]     ; 004a2448
        ;   Label: LAB_004a2448
    CMP EAX,dword ptr [ESP + 0x308]     ; 004a244f
    JNZ 0x004a24a0                      ; 004a2456
        ;   XREF to: 004a24a0 (CONDITIONAL_JUMP)  ; LAB_004a24a0
    PUSH 0x583584                       ; 004a2458 | = "cheat-1.wav"
    XOR CL,CL                           ; 004a245d
    PUSH 0x0                            ; 004a245f
    MOV byte ptr [0x01c78af0],CL        ; 004a2461 | DAT_01c78af0
    MOV ECX,dword ptr [0x005bed68]      ; 004a2467 | g_CSound_PTR_005bed68
    PUSH ECX                            ; 004a246d
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a246e
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a2473
    PUSH 0x1                            ; 004a2476
    PUSH 0x40800000                     ; 004a2478
    PUSH 0x3c23d70a                     ; 004a247d
    PUSH 0x1                            ; 004a2482
    MOV EBX,dword ptr [ESP + 0x320]     ; 004a2484
    PUSH EBX                            ; 004a248b
    PUSH 0x583590                       ; 004a248c | = "Enter time factor"
    MOV ESI,dword ptr [0x005b6d50]      ; 004a2491 | g_CEditorTools_PTR_005b6d50
    PUSH ESI                            ; 004a2497
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430 ; 004a2498
        ;   XREF to: 00471430 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004a249d
    PUSH 0x5835a2                       ; 004a24a0 | BYTE_ARRAY_005835a2
        ;   Label: LAB_004a24a0
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a24a5
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a24aa
    ADD ESP,0x4                         ; 004a24ac
    XOR EAX,EAX                         ; 004a24af
    MOV EDI,EBX                         ; 004a24b1
    MOV dword ptr [ESP + 0x318],EAX     ; 004a24b3
    SUB ECX,ECX                         ; 004a24ba
    DEC ECX                             ; 004a24bc
    XOR EAX,EAX                         ; 004a24bd
    SCASB.REPNE ES:EDI                  ; 004a24bf
    NOT ECX                             ; 004a24c1
    DEC ECX                             ; 004a24c3
    MOV dword ptr [ESP + 0x314],ECX     ; 004a24c4
    TEST ECX,ECX                        ; 004a24cb
    JLE 0x004a250a                      ; 004a24cd
        ;   XREF to: 004a250a (CONDITIONAL_JUMP)  ; LAB_004a250a
    MOV EAX,ECX                         ; 004a24cf
    NEG EAX                             ; 004a24d1
    MOV EDI,ECX                         ; 004a24d3
    ADD ECX,EAX                         ; 004a24d5
    MOV dword ptr [ESP + 0x438],ECX     ; 004a24d7
    XOR EAX,EAX                         ; 004a24de
        ;   Label: LAB_004a24de
    MOV AL,byte ptr [EBX]               ; 004a24e0
    PUSH EAX                            ; 004a24e2
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a24e3 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a24ea
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a24ef
    CMP ESI,EAX                         ; 004a24f2
    JNZ 0x004a24fd                      ; 004a24f4
        ;   XREF to: 004a24fd (CONDITIONAL_JUMP)  ; LAB_004a24fd
    INC dword ptr [ESP + 0x318]         ; 004a24f6
    MOV EDX,dword ptr [ESP + 0x438]     ; 004a24fd
        ;   Label: LAB_004a24fd
    DEC EDI                             ; 004a2504
    INC EBX                             ; 004a2505
    CMP EDI,EDX                         ; 004a2506
    JG 0x004a24de                       ; 004a2508
        ;   XREF to: 004a24de (CONDITIONAL_JUMP)  ; LAB_004a24de
    MOV EAX,dword ptr [ESP + 0x318]     ; 004a250a
        ;   Label: LAB_004a250a
    CMP EAX,dword ptr [ESP + 0x314]     ; 004a2511
    JNZ 0x004a2553                      ; 004a2518
        ;   XREF to: 004a2553 (CONDITIONAL_JUMP)  ; LAB_004a2553
    PUSH 0x5835d5                       ; 004a251a | = "cheat-1.wav"
    PUSH 0x0                            ; 004a251f
    MOV EBX,dword ptr [0x005bed68]      ; 004a2521 | g_CSound_PTR_005bed68
    XOR CH,CH                           ; 004a2527
    PUSH EBX                            ; 004a2529
    MOV byte ptr [0x01c78af0],CH        ; 004a252a | DAT_01c78af0
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a2530
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a2535
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2538
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004a253b
    SETZ AL                             ; 004a2542
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a2545
    AND EAX,0xff                        ; 004a2548
    MOV dword ptr [EBX + 0x1f0],EAX     ; 004a254d
    PUSH 0x5835e1                       ; 004a2553 | BYTE_ARRAY_005835e1
        ;   Label: LAB_004a2553
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a2558
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR EDI,EDI                         ; 004a255d
    ADD ESP,0x4                         ; 004a255f
    MOV dword ptr [ESP + 0x320],EDI     ; 004a2562
    MOV EDI,EAX                         ; 004a2569
    MOV EBX,EAX                         ; 004a256b
    SUB ECX,ECX                         ; 004a256d
    DEC ECX                             ; 004a256f
    XOR EAX,EAX                         ; 004a2570
    SCASB.REPNE ES:EDI                  ; 004a2572
    NOT ECX                             ; 004a2574
    DEC ECX                             ; 004a2576
    MOV dword ptr [ESP + 0x31c],ECX     ; 004a2577
    TEST ECX,ECX                        ; 004a257e
    JLE 0x004a25bd                      ; 004a2580
        ;   XREF to: 004a25bd (CONDITIONAL_JUMP)  ; LAB_004a25bd
    MOV EAX,ECX                         ; 004a2582
    NEG EAX                             ; 004a2584
    MOV EDI,ECX                         ; 004a2586
    ADD ECX,EAX                         ; 004a2588
    MOV dword ptr [ESP + 0x1f4],ECX     ; 004a258a
    XOR EAX,EAX                         ; 004a2591
        ;   Label: LAB_004a2591
    MOV AL,byte ptr [EBX]               ; 004a2593
    PUSH EAX                            ; 004a2595
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a2596 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a259d
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a25a2
    CMP ESI,EAX                         ; 004a25a5
    JNZ 0x004a25b0                      ; 004a25a7
        ;   XREF to: 004a25b0 (CONDITIONAL_JUMP)  ; LAB_004a25b0
    INC dword ptr [ESP + 0x320]         ; 004a25a9
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 004a25b0
        ;   Label: LAB_004a25b0
    DEC EDI                             ; 004a25b7
    INC EBX                             ; 004a25b8
    CMP EDI,EDX                         ; 004a25b9
    JG 0x004a2591                       ; 004a25bb
        ;   XREF to: 004a2591 (CONDITIONAL_JUMP)  ; LAB_004a2591
    MOV EAX,dword ptr [ESP + 0x320]     ; 004a25bd
        ;   Label: LAB_004a25bd
    MOV ECX,dword ptr [ESP + 0x31c]     ; 004a25c4
    CMP EAX,ECX                         ; 004a25cb
    JNZ 0x004a2607                      ; 004a25cd
        ;   XREF to: 004a2607 (CONDITIONAL_JUMP)  ; LAB_004a2607
    PUSH 0x583614                       ; 004a25cf | = "cheat-1.wav"
    PUSH 0x0                            ; 004a25d4
    MOV EBX,dword ptr [0x005bed68]      ; 004a25d6 | g_CSound_PTR_005bed68
    XOR AL,CL                           ; 004a25dc
    PUSH EBX                            ; 004a25de
    MOV [0x01c78af0],AL                 ; 004a25df | DAT_01c78af0
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a25e4
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a25e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a25ec
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004a25ef
    SETZ AL                             ; 004a25f6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a25f9
    AND EAX,0xff                        ; 004a25fc
    MOV dword ptr [EBX + 0x1f4],EAX     ; 004a2601
    PUSH 0x583620                       ; 004a2607 | BYTE_ARRAY_00583620
        ;   Label: LAB_004a2607
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a260c
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a2611
    ADD ESP,0x4                         ; 004a2613
    MOV EDI,EAX                         ; 004a2616
    MOV EBX,EAX                         ; 004a2618
    SUB ECX,ECX                         ; 004a261a
    DEC ECX                             ; 004a261c
    XOR EAX,EAX                         ; 004a261d
    SCASB.REPNE ES:EDI                  ; 004a261f
    NOT ECX                             ; 004a2621
    DEC ECX                             ; 004a2623
    MOV dword ptr [ESP + 0x324],ECX     ; 004a2624
    TEST ECX,ECX                        ; 004a262b
    JLE 0x004a2671                      ; 004a262d
        ;   XREF to: 004a2671 (CONDITIONAL_JUMP)  ; LAB_004a2671
    MOV EAX,ECX                         ; 004a262f
    NEG EAX                             ; 004a2631
    MOV EDI,ECX                         ; 004a2633
    ADD ECX,EAX                         ; 004a2635
    MOV dword ptr [ESP + 0x1f8],ECX     ; 004a2637
    XOR EAX,EAX                         ; 004a263e
        ;   Label: LAB_004a263e
    MOV AL,byte ptr [EDI + 0x1c78aef]   ; 004a2640 | DAT_01c78af0
    MOV dword ptr [ESP + 0x480],EAX     ; 004a2646
    XOR EAX,EAX                         ; 004a264d
    MOV AL,byte ptr [EBX]               ; 004a264f
    PUSH EAX                            ; 004a2651
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2652
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2657
    CMP EAX,dword ptr [ESP + 0x480]     ; 004a265a
    JNZ 0x004a2664                      ; 004a2661
        ;   XREF to: 004a2664 (CONDITIONAL_JUMP)  ; LAB_004a2664
    INC ESI                             ; 004a2663
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 004a2664
        ;   Label: LAB_004a2664
    DEC EDI                             ; 004a266b
    INC EBX                             ; 004a266c
    CMP EDI,EDX                         ; 004a266d
    JG 0x004a263e                       ; 004a266f
        ;   XREF to: 004a263e (CONDITIONAL_JUMP)  ; LAB_004a263e
    CMP ESI,dword ptr [ESP + 0x324]     ; 004a2671
        ;   Label: LAB_004a2671
    JNZ 0x004a26e4                      ; 004a2678
        ;   XREF to: 004a26e4 (CONDITIONAL_JUMP)  ; LAB_004a26e4
    XOR AH,AH                           ; 004a267a
    MOV byte ptr [0x01c78af0],AH        ; 004a267c | DAT_01c78af0
    MOV EAX,[0x01cae0e8]                ; 004a2682 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a2687
    MOV EBX,dword ptr [EAX + 0x1f8d0]   ; 004a268e
    TEST EBX,EBX                        ; 004a2694
    JZ 0x004a26ce                       ; 004a2696
        ;   XREF to: 004a26ce (CONDITIONAL_JUMP)  ; LAB_004a26ce
    CMP dword ptr [EBX + 0x564],0x5     ; 004a2698
    JNZ 0x004a2c6f                      ; 004a269f
        ;   XREF to: 004a2c6f (CONDITIONAL_JUMP)  ; LAB_004a2c6f
    PUSH 0x40a00000                     ; 004a26a5
    PUSH 0x583656                       ; 004a26aa | = "Flaming ammo disabled"
    MOV dword ptr [EBX + 0x564],0x0     ; 004a26af
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a26b9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a26be
    PUSH EAX                            ; 004a26c1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a26c2
    PUSH EDX                            ; 004a26c5
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a26c6
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
        ;   Label: LAB_004a26c6
    ADD ESP,0xc                         ; 004a26cb
    PUSH 0x5836bb                       ; 004a26ce | = "cheat-1.wav"
        ;   Label: LAB_004a26ce
    PUSH 0x0                            ; 004a26d3
    MOV ECX,dword ptr [0x005bed68]      ; 004a26d5 | g_CSound_PTR_005bed68
    PUSH ECX                            ; 004a26db
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a26dc
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a26e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a26e4
        ;   Label: LAB_004a26e4
    CMP dword ptr [EAX + 0x210],0x0     ; 004a26e7
    JZ 0x004a27a0                       ; 004a26ee
        ;   XREF to: 004a27a0 (CONDITIONAL_JUMP)  ; LAB_004a27a0
    PUSH 0x5836c7                       ; 004a26f4 | BYTE_ARRAY_005836c7
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a26f9
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a26fe
    ADD ESP,0x4                         ; 004a2700
    MOV EDI,EAX                         ; 004a2703
    MOV EBX,EAX                         ; 004a2705
    SUB ECX,ECX                         ; 004a2707
    DEC ECX                             ; 004a2709
    XOR EAX,EAX                         ; 004a270a
    SCASB.REPNE ES:EDI                  ; 004a270c
    NOT ECX                             ; 004a270e
    DEC ECX                             ; 004a2710
    MOV dword ptr [ESP + 0x32c],ESI     ; 004a2711
    MOV dword ptr [ESP + 0x328],ECX     ; 004a2718
    TEST ECX,ECX                        ; 004a271f
    JLE 0x004a2760                      ; 004a2721
        ;   XREF to: 004a2760 (CONDITIONAL_JUMP)  ; LAB_004a2760
    MOV EAX,ECX                         ; 004a2723
    MOV ESI,EBX                         ; 004a2725
    NEG EAX                             ; 004a2727
    MOV EBX,ECX                         ; 004a2729
    ADD ECX,EAX                         ; 004a272b
    MOV dword ptr [ESP + 0x1fc],ECX     ; 004a272d
    XOR EAX,EAX                         ; 004a2734
        ;   Label: LAB_004a2734
    MOV AL,byte ptr [ESI]               ; 004a2736
    PUSH EAX                            ; 004a2738
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a2739 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2740
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2745
    CMP EDI,EAX                         ; 004a2748
    JNZ 0x004a2753                      ; 004a274a
        ;   XREF to: 004a2753 (CONDITIONAL_JUMP)  ; LAB_004a2753
    INC dword ptr [ESP + 0x32c]         ; 004a274c
    MOV ECX,dword ptr [ESP + 0x1fc]     ; 004a2753
        ;   Label: LAB_004a2753
    DEC EBX                             ; 004a275a
    INC ESI                             ; 004a275b
    CMP EBX,ECX                         ; 004a275c
    JG 0x004a2734                       ; 004a275e
        ;   XREF to: 004a2734 (CONDITIONAL_JUMP)  ; LAB_004a2734
    MOV EAX,dword ptr [ESP + 0x32c]     ; 004a2760
        ;   Label: LAB_004a2760
    CMP EAX,dword ptr [ESP + 0x328]     ; 004a2767
    JNZ 0x004a27a0                      ; 004a276e
        ;   XREF to: 004a27a0 (CONDITIONAL_JUMP)  ; LAB_004a27a0
    PUSH 0xff00ff                       ; 004a2770
    XOR DL,DL                           ; 004a2775
    PUSH 0x1fb8508                      ; 004a2777
    MOV byte ptr [0x01c78af0],DL        ; 004a277c | DAT_01c78af0
    CALL core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30 ; 004a2782
        ;   XREF to: 00447b30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30(CDemonCamera * this_ptr, int clear_color)
    ADD ESP,0x8                         ; 004a2787
    PUSH 0x5836fa                       ; 004a278a | = "cheat-1.wav"
    PUSH 0x0                            ; 004a278f
    MOV ESI,dword ptr [0x005bed68]      ; 004a2791 | g_CSound_PTR_005bed68
    PUSH ESI                            ; 004a2797
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a2798
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a279d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a27a0
        ;   Label: LAB_004a27a0
    CMP dword ptr [EAX + 0x210],0x0     ; 004a27a3
    JZ 0x004a2852                       ; 004a27aa
        ;   XREF to: 004a2852 (CONDITIONAL_JUMP)  ; LAB_004a2852
    PUSH 0x583706                       ; 004a27b0 | BYTE_ARRAY_00583706
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a27b5
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a27ba
    ADD ESP,0x4                         ; 004a27bc
    XOR ECX,ECX                         ; 004a27bf
    MOV EDI,EAX                         ; 004a27c1
    MOV dword ptr [ESP + 0x334],ECX     ; 004a27c3
    SUB ECX,ECX                         ; 004a27ca
    DEC ECX                             ; 004a27cc
    XOR EAX,EAX                         ; 004a27cd
    SCASB.REPNE ES:EDI                  ; 004a27cf
    NOT ECX                             ; 004a27d1
    DEC ECX                             ; 004a27d3
    MOV dword ptr [ESP + 0x330],ECX     ; 004a27d4
    TEST ECX,ECX                        ; 004a27db
    JLE 0x004a281c                      ; 004a27dd
        ;   XREF to: 004a281c (CONDITIONAL_JUMP)  ; LAB_004a281c
    MOV EAX,ECX                         ; 004a27df
    MOV ESI,EBX                         ; 004a27e1
    NEG EAX                             ; 004a27e3
    MOV EBX,ECX                         ; 004a27e5
    ADD ECX,EAX                         ; 004a27e7
    MOV dword ptr [ESP + 0x43c],ECX     ; 004a27e9
    XOR EAX,EAX                         ; 004a27f0
        ;   Label: LAB_004a27f0
    MOV AL,byte ptr [ESI]               ; 004a27f2
    PUSH EAX                            ; 004a27f4
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a27f5 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a27fc
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2801
    CMP EDI,EAX                         ; 004a2804
    JNZ 0x004a280f                      ; 004a2806
        ;   XREF to: 004a280f (CONDITIONAL_JUMP)  ; LAB_004a280f
    INC dword ptr [ESP + 0x334]         ; 004a2808
    MOV EDI,dword ptr [ESP + 0x43c]     ; 004a280f
        ;   Label: LAB_004a280f
    DEC EBX                             ; 004a2816
    INC ESI                             ; 004a2817
    CMP EBX,EDI                         ; 004a2818
    JG 0x004a27f0                       ; 004a281a
        ;   XREF to: 004a27f0 (CONDITIONAL_JUMP)  ; LAB_004a27f0
    MOV EAX,dword ptr [ESP + 0x334]     ; 004a281c
        ;   Label: LAB_004a281c
    CMP EAX,dword ptr [ESP + 0x330]     ; 004a2823
    JNZ 0x004a2852                      ; 004a282a
        ;   XREF to: 004a2852 (CONDITIONAL_JUMP)  ; LAB_004a2852
    PUSH 0x0                            ; 004a282c
    MOV EAX,[0x005be368]                ; 004a282e | g_CDemonSet_PTR_005be368
    XOR DH,DH                           ; 004a2833
    PUSH 0x1fb8508                      ; 004a2835
    MOV byte ptr [0x01c78af0],DH        ; 004a283a | DAT_01c78af0
    MOV dword ptr [EAX + 0x14cd68],0x0  ; 004a2840 | g_CDemonSet_01e57284.min_ambient_value
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740 ; 004a284a
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 004a284f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2852
        ;   Label: LAB_004a2852
    CMP dword ptr [EAX + 0x210],0x0     ; 004a2855
    JZ 0x004a2924                       ; 004a285c
        ;   XREF to: 004a2924 (CONDITIONAL_JUMP)  ; LAB_004a2924
    PUSH 0x583738                       ; 004a2862 | BYTE_ARRAY_00583738
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a2867
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a286c
    ADD ESP,0x4                         ; 004a286e
    MOV EDI,EAX                         ; 004a2871
    MOV EBX,EAX                         ; 004a2873
    SUB ECX,ECX                         ; 004a2875
    DEC ECX                             ; 004a2877
    XOR EAX,EAX                         ; 004a2878
    SCASB.REPNE ES:EDI                  ; 004a287a
    NOT ECX                             ; 004a287c
    DEC ECX                             ; 004a287e
    MOV dword ptr [ESP + 0x33c],ESI     ; 004a287f
    MOV dword ptr [ESP + 0x338],ECX     ; 004a2886
    TEST ECX,ECX                        ; 004a288d
    JLE 0x004a28ce                      ; 004a288f
        ;   XREF to: 004a28ce (CONDITIONAL_JUMP)  ; LAB_004a28ce
    MOV EAX,ECX                         ; 004a2891
    MOV ESI,EBX                         ; 004a2893
    NEG EAX                             ; 004a2895
    MOV EBX,ECX                         ; 004a2897
    ADD ECX,EAX                         ; 004a2899
    MOV dword ptr [ESP + 0x440],ECX     ; 004a289b
    XOR EAX,EAX                         ; 004a28a2
        ;   Label: LAB_004a28a2
    MOV AL,byte ptr [ESI]               ; 004a28a4
    PUSH EAX                            ; 004a28a6
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a28a7 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a28ae
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a28b3
    CMP EDI,EAX                         ; 004a28b6
    JNZ 0x004a28c1                      ; 004a28b8
        ;   XREF to: 004a28c1 (CONDITIONAL_JUMP)  ; LAB_004a28c1
    INC dword ptr [ESP + 0x33c]         ; 004a28ba
    MOV EDI,dword ptr [ESP + 0x440]     ; 004a28c1
        ;   Label: LAB_004a28c1
    DEC EBX                             ; 004a28c8
    INC ESI                             ; 004a28c9
    CMP EBX,EDI                         ; 004a28ca
    JG 0x004a28a2                       ; 004a28cc
        ;   XREF to: 004a28a2 (CONDITIONAL_JUMP)  ; LAB_004a28a2
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004a28ce
        ;   Label: LAB_004a28ce
    CMP EAX,dword ptr [ESP + 0x338]     ; 004a28d5
    JNZ 0x004a2924                      ; 004a28dc
        ;   XREF to: 004a2924 (CONDITIONAL_JUMP)  ; LAB_004a2924
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a28de
    XOR BL,BL                           ; 004a28e1
    MOV ECX,dword ptr [EAX + 0x200]     ; 004a28e3
    MOV byte ptr [0x01c78af0],BL        ; 004a28e9 | DAT_01c78af0
    TEST ECX,ECX                        ; 004a28ef
    SETZ AL                             ; 004a28f1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a28f4
    AND EAX,0xff                        ; 004a28f7
    MOV dword ptr [EBX + 0x200],EAX     ; 004a28fc
    JZ 0x004a2cc3                       ; 004a2902
        ;   XREF to: 004a2cc3 (CONDITIONAL_JUMP)  ; LAB_004a2cc3
    PUSH 0x40a00000                     ; 004a2908
    PUSH 0x58376a                       ; 004a290d | = "Single step enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a2912
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004a2912
    ADD ESP,0x4                         ; 004a2917
    PUSH EAX                            ; 004a291a
    PUSH EBX                            ; 004a291b
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a291c
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a2921
    PUSH 0x583793                       ; 004a2924 | BYTE_ARRAY_00583793
        ;   Label: LAB_004a2924
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a2929
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a292e
    ADD ESP,0x4                         ; 004a2930
    MOV EDI,EAX                         ; 004a2933
    XOR EDX,EDX                         ; 004a2935
    SUB ECX,ECX                         ; 004a2937
    DEC ECX                             ; 004a2939
    XOR EAX,EAX                         ; 004a293a
    SCASB.REPNE ES:EDI                  ; 004a293c
    NOT ECX                             ; 004a293e
    DEC ECX                             ; 004a2940
    MOV dword ptr [ESP + 0x344],EDX     ; 004a2941
    MOV dword ptr [ESP + 0x340],ECX     ; 004a2948
    TEST ECX,ECX                        ; 004a294f
    JLE 0x004a298e                      ; 004a2951
        ;   XREF to: 004a298e (CONDITIONAL_JUMP)  ; LAB_004a298e
    MOV EAX,ECX                         ; 004a2953
    NEG EAX                             ; 004a2955
    MOV EDI,ECX                         ; 004a2957
    ADD ECX,EAX                         ; 004a2959
    MOV dword ptr [ESP + 0x444],ECX     ; 004a295b
    XOR EAX,EAX                         ; 004a2962
        ;   Label: LAB_004a2962
    MOV AL,byte ptr [EBX]               ; 004a2964
    PUSH EAX                            ; 004a2966
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a2967 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a296e
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2973
    CMP ESI,EAX                         ; 004a2976
    JNZ 0x004a2981                      ; 004a2978
        ;   XREF to: 004a2981 (CONDITIONAL_JUMP)  ; LAB_004a2981
    INC dword ptr [ESP + 0x344]         ; 004a297a
    MOV ECX,dword ptr [ESP + 0x444]     ; 004a2981
        ;   Label: LAB_004a2981
    DEC EDI                             ; 004a2988
    INC EBX                             ; 004a2989
    CMP EDI,ECX                         ; 004a298a
    JG 0x004a2962                       ; 004a298c
        ;   XREF to: 004a2962 (CONDITIONAL_JUMP)  ; LAB_004a2962
    MOV EAX,dword ptr [ESP + 0x344]     ; 004a298e
        ;   Label: LAB_004a298e
    CMP EAX,dword ptr [ESP + 0x340]     ; 004a2995
    JNZ 0x004a29f1                      ; 004a299c
        ;   XREF to: 004a29f1 (CONDITIONAL_JUMP)  ; LAB_004a29f1
    MOV EAX,[0x01cae0e8]                ; 004a299e | DAT_01cae0e8
    PUSH 0x40a00000                     ; 004a29a3
    XOR BH,BH                           ; 004a29a8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a29aa
    PUSH 0x5837ca                       ; 004a29b1 | = "Flashlight battery restored"
    MOV byte ptr [0x01c78af0],BH        ; 004a29b6 | DAT_01c78af0
    MOV dword ptr [EAX + 0x1f5a0],0x42c80000 ; 004a29bc
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a29c6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a29cb
    PUSH EAX                            ; 004a29ce
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a29cf
    PUSH ESI                            ; 004a29d2
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a29d3
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a29d8
    PUSH 0x5837e6                       ; 004a29db | = "cheat-1.wav"
    PUSH 0x0                            ; 004a29e0
    MOV EDI,dword ptr [0x005bed68]      ; 004a29e2 | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004a29e8
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a29e9
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a29ee
    PUSH 0x5837f2                       ; 004a29f1 | BYTE_ARRAY_005837f2
        ;   Label: LAB_004a29f1
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a29f6
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a29fb
    ADD ESP,0x4                         ; 004a29fd
    XOR EAX,EAX                         ; 004a2a00
    MOV EDI,EBX                         ; 004a2a02
    MOV dword ptr [ESP + 0x34c],EAX     ; 004a2a04
    SUB ECX,ECX                         ; 004a2a0b
    DEC ECX                             ; 004a2a0d
    XOR EAX,EAX                         ; 004a2a0e
    SCASB.REPNE ES:EDI                  ; 004a2a10
    NOT ECX                             ; 004a2a12
    DEC ECX                             ; 004a2a14
    MOV dword ptr [ESP + 0x348],ECX     ; 004a2a15
    TEST ECX,ECX                        ; 004a2a1c
    JLE 0x004a2a5b                      ; 004a2a1e
        ;   XREF to: 004a2a5b (CONDITIONAL_JUMP)  ; LAB_004a2a5b
    MOV EAX,ECX                         ; 004a2a20
    NEG EAX                             ; 004a2a22
    MOV EDI,ECX                         ; 004a2a24
    ADD ECX,EAX                         ; 004a2a26
    MOV dword ptr [ESP + 0x448],ECX     ; 004a2a28
    XOR EAX,EAX                         ; 004a2a2f
        ;   Label: LAB_004a2a2f
    MOV AL,byte ptr [EBX]               ; 004a2a31
    PUSH EAX                            ; 004a2a33
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a2a34 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2a3b
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2a40
    CMP ESI,EAX                         ; 004a2a43
    JNZ 0x004a2a4e                      ; 004a2a45
        ;   XREF to: 004a2a4e (CONDITIONAL_JUMP)  ; LAB_004a2a4e
    INC dword ptr [ESP + 0x34c]         ; 004a2a47
    MOV ECX,dword ptr [ESP + 0x448]     ; 004a2a4e
        ;   Label: LAB_004a2a4e
    DEC EDI                             ; 004a2a55
    INC EBX                             ; 004a2a56
    CMP EDI,ECX                         ; 004a2a57
    JG 0x004a2a2f                       ; 004a2a59
        ;   XREF to: 004a2a2f (CONDITIONAL_JUMP)  ; LAB_004a2a2f
    MOV EAX,dword ptr [ESP + 0x34c]     ; 004a2a5b
        ;   Label: LAB_004a2a5b
    CMP EAX,dword ptr [ESP + 0x348]     ; 004a2a62
    JNZ 0x004a2a84                      ; 004a2a69
        ;   XREF to: 004a2a84 (CONDITIONAL_JUMP)  ; LAB_004a2a84
    PUSH 0x1                            ; 004a2a6b
    MOV ESI,dword ptr [0x005c15b8]      ; 004a2a6d | DAT_005c15b8
    XOR CL,CL                           ; 004a2a73
    PUSH ESI                            ; 004a2a75
    MOV byte ptr [0x01c78af0],CL        ; 004a2a76 | DAT_01c78af0
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_00555750 ; 004a2a7c
        ;   XREF to: 00555750 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_00555750(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 004a2a81
    PUSH 0x583828                       ; 004a2a84 | BYTE_ARRAY_00583828
        ;   Label: LAB_004a2a84
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a2a89
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR EDI,EDI                         ; 004a2a8e
    ADD ESP,0x4                         ; 004a2a90
    MOV dword ptr [ESP + 0x354],EDI     ; 004a2a93
    MOV EDI,EAX                         ; 004a2a9a
    MOV EBX,EAX                         ; 004a2a9c
    SUB ECX,ECX                         ; 004a2a9e
    DEC ECX                             ; 004a2aa0
    XOR EAX,EAX                         ; 004a2aa1
    SCASB.REPNE ES:EDI                  ; 004a2aa3
    NOT ECX                             ; 004a2aa5
    DEC ECX                             ; 004a2aa7
    MOV dword ptr [ESP + 0x350],ECX     ; 004a2aa8
    TEST ECX,ECX                        ; 004a2aaf
    JLE 0x004a2aee                      ; 004a2ab1
        ;   XREF to: 004a2aee (CONDITIONAL_JUMP)  ; LAB_004a2aee
    MOV EAX,ECX                         ; 004a2ab3
    NEG EAX                             ; 004a2ab5
    MOV EDI,ECX                         ; 004a2ab7
    ADD ECX,EAX                         ; 004a2ab9
    MOV dword ptr [ESP + 0x44c],ECX     ; 004a2abb
    XOR EAX,EAX                         ; 004a2ac2
        ;   Label: LAB_004a2ac2
    MOV AL,byte ptr [EBX]               ; 004a2ac4
    PUSH EAX                            ; 004a2ac6
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a2ac7 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2ace
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2ad3
    CMP ESI,EAX                         ; 004a2ad6
    JNZ 0x004a2ae1                      ; 004a2ad8
        ;   XREF to: 004a2ae1 (CONDITIONAL_JUMP)  ; LAB_004a2ae1
    INC dword ptr [ESP + 0x354]         ; 004a2ada
    MOV EDX,dword ptr [ESP + 0x44c]     ; 004a2ae1
        ;   Label: LAB_004a2ae1
    DEC EDI                             ; 004a2ae8
    INC EBX                             ; 004a2ae9
    CMP EDI,EDX                         ; 004a2aea
    JG 0x004a2ac2                       ; 004a2aec
        ;   XREF to: 004a2ac2 (CONDITIONAL_JUMP)  ; LAB_004a2ac2
    MOV EAX,dword ptr [ESP + 0x354]     ; 004a2aee
        ;   Label: LAB_004a2aee
    CMP EAX,dword ptr [ESP + 0x350]     ; 004a2af5
    JNZ 0x004a2b17                      ; 004a2afc
        ;   XREF to: 004a2b17 (CONDITIONAL_JUMP)  ; LAB_004a2b17
    PUSH 0x2                            ; 004a2afe
    MOV EBX,dword ptr [0x005c15b8]      ; 004a2b00 | DAT_005c15b8
    XOR CH,CH                           ; 004a2b06
    PUSH EBX                            ; 004a2b08
    MOV byte ptr [0x01c78af0],CH        ; 004a2b09 | DAT_01c78af0
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_00555750 ; 004a2b0f
        ;   XREF to: 00555750 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_00555750(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 004a2b14
    PUSH 0x58385e                       ; 004a2b17 | BYTE_ARRAY_0058385e
        ;   Label: LAB_004a2b17
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a2b1c
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004a2b21
    ADD ESP,0x4                         ; 004a2b23
    MOV EDI,EAX                         ; 004a2b26
    MOV EBX,EAX                         ; 004a2b28
    SUB ECX,ECX                         ; 004a2b2a
    DEC ECX                             ; 004a2b2c
    XOR EAX,EAX                         ; 004a2b2d
    SCASB.REPNE ES:EDI                  ; 004a2b2f
    NOT ECX                             ; 004a2b31
    DEC ECX                             ; 004a2b33
    MOV dword ptr [ESP + 0x35c],ESI     ; 004a2b34
    MOV dword ptr [ESP + 0x358],ECX     ; 004a2b3b
    TEST ECX,ECX                        ; 004a2b42
    JLE 0x004a2b83                      ; 004a2b44
        ;   XREF to: 004a2b83 (CONDITIONAL_JUMP)  ; LAB_004a2b83
    MOV EAX,ECX                         ; 004a2b46
    MOV ESI,EBX                         ; 004a2b48
    NEG EAX                             ; 004a2b4a
    MOV EBX,ECX                         ; 004a2b4c
    ADD ECX,EAX                         ; 004a2b4e
    MOV dword ptr [ESP + 0x450],ECX     ; 004a2b50
    XOR EAX,EAX                         ; 004a2b57
        ;   Label: LAB_004a2b57
    MOV AL,byte ptr [ESI]               ; 004a2b59
    PUSH EAX                            ; 004a2b5b
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a2b5c | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2b63
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2b68
    CMP EDI,EAX                         ; 004a2b6b
    JNZ 0x004a2b76                      ; 004a2b6d
        ;   XREF to: 004a2b76 (CONDITIONAL_JUMP)  ; LAB_004a2b76
    INC dword ptr [ESP + 0x35c]         ; 004a2b6f
    MOV EDX,dword ptr [ESP + 0x450]     ; 004a2b76
        ;   Label: LAB_004a2b76
    DEC EBX                             ; 004a2b7d
    INC ESI                             ; 004a2b7e
    CMP EBX,EDX                         ; 004a2b7f
    JG 0x004a2b57                       ; 004a2b81
        ;   XREF to: 004a2b57 (CONDITIONAL_JUMP)  ; LAB_004a2b57
    MOV EAX,dword ptr [ESP + 0x35c]     ; 004a2b83
        ;   Label: LAB_004a2b83
    MOV ECX,dword ptr [ESP + 0x358]     ; 004a2b8a
    CMP EAX,ECX                         ; 004a2b91
    JNZ 0x004a2f4c                      ; 004a2b93
        ;   XREF to: 004a2f4c (CONDITIONAL_JUMP)  ; LAB_004a2f4c
    XOR AL,CL                           ; 004a2b99
    MOV [0x01c78af0],AL                 ; 004a2b9b | DAT_01c78af0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2ba0
    CMP dword ptr [EAX + 0x204],0x0     ; 004a2ba3
    SETZ AL                             ; 004a2baa
    MOV ESI,0x3e800000                  ; 004a2bad
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a2bb2
    MOV dword ptr [ESP + 0x360],ESI     ; 004a2bb5
    AND EAX,0xff                        ; 004a2bbc
    MOV dword ptr [EBX + 0x204],EAX     ; 004a2bc1
    JZ 0x004a2cd2                       ; 004a2bc7
        ;   XREF to: 004a2cd2 (CONDITIONAL_JUMP)  ; LAB_004a2cd2
    PUSH 0x583893                       ; 004a2bcd | = "burp2.wav"
    PUSH 0x0                            ; 004a2bd2
    MOV ECX,dword ptr [0x005bed68]      ; 004a2bd4 | g_CSound_PTR_005bed68
    MOV EDX,0x40800000                  ; 004a2bda
    PUSH ECX                            ; 004a2bdf
    MOV dword ptr [ESP + 0x36c],EDX     ; 004a2be0
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a2be7
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
        ;   Label: LAB_004a2be7
    ADD ESP,0xc                         ; 004a2bec
    XOR EBX,EBX                         ; 004a2bef
    MOV dword ptr [ESP + 0x454],EBX     ; 004a2bf1
    MOV dword ptr [ESP + 0x478],EBX     ; 004a2bf8
    MOV EAX,[0x005be368]                ; 004a2bff | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004a2bff
    MOV EBX,dword ptr [ESP + 0x478]     ; 004a2c04
    CMP EBX,dword ptr [EAX + 0x14ecb0]  ; 004a2c0b | g_CDemonSet_01e57284.character_count
    JGE 0x004a2eff                      ; 004a2c11
        ;   XREF to: 004a2eff (CONDITIONAL_JUMP)  ; LAB_004a2eff
    ADD EAX,dword ptr [ESP + 0x454]     ; 004a2c17
    MOV EAX,dword ptr [EAX + 0x14ecb4]  ; 004a2c1e
    LEA EDX,[EAX + 0x150]               ; 004a2c24
    MOV dword ptr [ESP + 0x364],EDX     ; 004a2c2a
    CMP byte ptr [EAX + 0x23b0],0x0     ; 004a2c31
    JNZ 0x004a2ce3                      ; 004a2c38
        ;   XREF to: 004a2ce3 (CONDITIONAL_JUMP)  ; LAB_004a2ce3
    MOV ESI,dword ptr [ESP + 0x478]     ; 004a2c3e
        ;   Label: LAB_004a2c3e
    MOV EBX,dword ptr [ESP + 0x454]     ; 004a2c45
    INC ESI                             ; 004a2c4c
    ADD EBX,0x4                         ; 004a2c4d
    MOV dword ptr [ESP + 0x478],ESI     ; 004a2c50
    MOV dword ptr [ESP + 0x454],EBX     ; 004a2c57
    JMP 0x004a2bff                      ; 004a2c5e
        ;   XREF to: 004a2bff (UNCONDITIONAL_JUMP)  ; LAB_004a2bff
    PUSH 0x40a00000                     ; 004a2c60
        ;   Label: LAB_004a2c60
    PUSH 0x583524                       ; 004a2c65 | = "Gratuitous dismemberment disabled"
    JMP 0x004a23a7                      ; 004a2c6a
        ;   XREF to: 004a23a7 (UNCONDITIONAL_JUMP)  ; LAB_004a23a7
    PUSH 0x58366c                       ; 004a2c6f | = "CCrossbow"
        ;   Label: LAB_004a2c6f
    PUSH EBX                            ; 004a2c74
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004a2c75
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004a2c7a
    TEST EAX,EAX                        ; 004a2c7d
    JZ 0x004a2ca7                       ; 004a2c7f
        ;   XREF to: 004a2ca7 (CONDITIONAL_JUMP)  ; LAB_004a2ca7
    PUSH 0x40a00000                     ; 004a2c81
    PUSH 0x5836a5                       ; 004a2c86 | = "Flaming ammo enabled."
    MOV dword ptr [EBX + 0x564],0x5     ; 004a2c8b
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a2c95
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a2c9a
    PUSH EAX                            ; 004a2c9d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2c9e
    PUSH EAX                            ; 004a2ca1
    JMP 0x004a26c6                      ; 004a2ca2
        ;   XREF to: 004a26c6 (UNCONDITIONAL_JUMP)  ; LAB_004a26c6
    PUSH 0x40a00000                     ; 004a2ca7
        ;   Label: LAB_004a2ca7
    PUSH 0x583676                       ; 004a2cac | = "You can only use flaming ammo on the ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a2cb1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a2cb6
    PUSH EAX                            ; 004a2cb9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a2cba
    PUSH EDI                            ; 004a2cbd
    JMP 0x004a26c6                      ; 004a2cbe
        ;   XREF to: 004a26c6 (UNCONDITIONAL_JUMP)  ; LAB_004a26c6
    PUSH 0x40a00000                     ; 004a2cc3
        ;   Label: LAB_004a2cc3
    PUSH 0x58377e                       ; 004a2cc8 | = "Single step disabled"
    JMP 0x004a2912                      ; 004a2ccd
        ;   XREF to: 004a2912 (UNCONDITIONAL_JUMP)  ; LAB_004a2912
    PUSH 0x58389d                       ; 004a2cd2 | = "burp1.wav"
        ;   Label: LAB_004a2cd2
    PUSH EAX                            ; 004a2cd7
    MOV EAX,[0x005bed68]                ; 004a2cd8 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004a2cdd
    JMP 0x004a2be7                      ; 004a2cde
        ;   XREF to: 004a2be7 (UNCONDITIONAL_JUMP)  ; LAB_004a2be7
    MOV EAX,dword ptr [ESP + 0x364]     ; 004a2ce3
        ;   Label: LAB_004a2ce3
    PUSH EAX                            ; 004a2cea
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004a2ceb
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a2cf0
    PUSH 0x0                            ; 004a2cf3
    PUSH 0x5838a7                       ; 004a2cf5 | = "Bip01 head"
    PUSH EAX                            ; 004a2cfa
    MOV ESI,EAX                         ; 004a2cfb
    MOV dword ptr [ESP + 0x374],EAX     ; 004a2cfd
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a2d04
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a2d09
    CMP EAX,-0x1                        ; 004a2d0c
    JZ 0x004a2d9b                       ; 004a2d0f
        ;   XREF to: 004a2d9b (CONDITIONAL_JUMP)  ; LAB_004a2d9b
    MOV EDX,dword ptr [ESP + 0x364]     ; 004a2d15
    MOV dword ptr [ESP + 0x374],EAX     ; 004a2d1c
    SHL EAX,0x2                         ; 004a2d23
    ADD EAX,EDX                         ; 004a2d26
    MOV EBX,dword ptr [ESP + 0x364]     ; 004a2d28
    FLD float ptr [EAX + 0x514]         ; 004a2d2f
    FMUL float ptr [ESP + 0x360]        ; 004a2d35
    MOV dword ptr [ESP + 0x36c],EBX     ; 004a2d3c
    MOV EBX,dword ptr [ESP + 0x360]     ; 004a2d43
    MOV EDI,ESI                         ; 004a2d4a
    MOV dword ptr [ESP + 0x370],EBX     ; 004a2d4c
    FSTP float ptr [EAX + 0x514]        ; 004a2d53
    MOV ECX,dword ptr [ESI + 0x28558]   ; 004a2d59
    XOR EBX,EBX                         ; 004a2d5f
    TEST ECX,ECX                        ; 004a2d61
    JLE 0x004a2d9b                      ; 004a2d63
        ;   XREF to: 004a2d9b (CONDITIONAL_JUMP)  ; LAB_004a2d9b
    MOV EDX,dword ptr [ESP + 0x374]     ; 004a2d65
        ;   Label: LAB_004a2d65
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 004a2d6c
    JNZ 0x004a2d8d                      ; 004a2d72
        ;   XREF to: 004a2d8d (CONDITIONAL_JUMP)  ; LAB_004a2d8d
    PUSH EBX                            ; 004a2d74
    PUSH dword ptr [ESP + 0x374]        ; 004a2d75
    PUSH EDI                            ; 004a2d7c
    MOV ECX,dword ptr [ESP + 0x378]     ; 004a2d7d
    PUSH ECX                            ; 004a2d84
    CALL core_game.cpp_scaleBoneRecursive_FUN_004a04e0 ; 004a2d85
        ;   XREF to: 004a04e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004a04e0(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004a2d8a
    INC EBX                             ; 004a2d8d
        ;   Label: LAB_004a2d8d
    MOV EAX,dword ptr [EDI + 0x28558]   ; 004a2d8e
    ADD ESI,0x24                        ; 004a2d94
    CMP EBX,EAX                         ; 004a2d97
    JL 0x004a2d65                       ; 004a2d99
        ;   XREF to: 004a2d65 (CONDITIONAL_JUMP)  ; LAB_004a2d65
    PUSH 0x0                            ; 004a2d9b
        ;   Label: LAB_004a2d9b
    PUSH 0x5838b2                       ; 004a2d9d | = "bipltit02"
    MOV EBX,dword ptr [ESP + 0x370]     ; 004a2da2
    PUSH EBX                            ; 004a2da9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a2daa
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a2daf
    CMP EAX,-0x1                        ; 004a2db2
    JZ 0x004a2e48                       ; 004a2db5
        ;   XREF to: 004a2e48 (CONDITIONAL_JUMP)  ; LAB_004a2e48
    MOV ESI,dword ptr [ESP + 0x364]     ; 004a2dbb
    MOV dword ptr [ESP + 0x380],EAX     ; 004a2dc2
    SHL EAX,0x2                         ; 004a2dc9
    ADD EAX,ESI                         ; 004a2dcc
    MOV EBX,dword ptr [ESP + 0x364]     ; 004a2dce
    FLD float ptr [EAX + 0x514]         ; 004a2dd5
    FMUL float ptr [ESP + 0x360]        ; 004a2ddb
    MOV dword ptr [ESP + 0x378],EBX     ; 004a2de2
    MOV EBX,dword ptr [ESP + 0x360]     ; 004a2de9
    MOV EDI,dword ptr [ESP + 0x368]     ; 004a2df0
    MOV dword ptr [ESP + 0x37c],EBX     ; 004a2df7
    FSTP float ptr [EAX + 0x514]        ; 004a2dfe
    MOV EDX,dword ptr [EDI + 0x28558]   ; 004a2e04
    XOR EBX,EBX                         ; 004a2e0a
    TEST EDX,EDX                        ; 004a2e0c
    JLE 0x004a2e48                      ; 004a2e0e
        ;   XREF to: 004a2e48 (CONDITIONAL_JUMP)  ; LAB_004a2e48
    MOV ESI,EDI                         ; 004a2e10
    MOV EDX,dword ptr [ESP + 0x380]     ; 004a2e12
        ;   Label: LAB_004a2e12
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 004a2e19
    JNZ 0x004a2e3a                      ; 004a2e1f
        ;   XREF to: 004a2e3a (CONDITIONAL_JUMP)  ; LAB_004a2e3a
    PUSH EBX                            ; 004a2e21
    PUSH dword ptr [ESP + 0x380]        ; 004a2e22
    PUSH EDI                            ; 004a2e29
    MOV ECX,dword ptr [ESP + 0x384]     ; 004a2e2a
    PUSH ECX                            ; 004a2e31
    CALL core_game.cpp_scaleBoneRecursive_FUN_004a04e0 ; 004a2e32
        ;   XREF to: 004a04e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004a04e0(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004a2e37
    INC EBX                             ; 004a2e3a
        ;   Label: LAB_004a2e3a
    MOV ECX,dword ptr [EDI + 0x28558]   ; 004a2e3b
    ADD ESI,0x24                        ; 004a2e41
    CMP EBX,ECX                         ; 004a2e44
    JL 0x004a2e12                       ; 004a2e46
        ;   XREF to: 004a2e12 (CONDITIONAL_JUMP)  ; LAB_004a2e12
    PUSH 0x0                            ; 004a2e48
        ;   Label: LAB_004a2e48
    PUSH 0x5838bc                       ; 004a2e4a | = "biprtit02"
    MOV EBX,dword ptr [ESP + 0x370]     ; 004a2e4f
    PUSH EBX                            ; 004a2e56
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a2e57
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a2e5c
    CMP EAX,-0x1                        ; 004a2e5f
    JZ 0x004a2c3e                       ; 004a2e62
        ;   XREF to: 004a2c3e (CONDITIONAL_JUMP)  ; LAB_004a2c3e
    MOV ESI,dword ptr [ESP + 0x364]     ; 004a2e68
    MOV dword ptr [ESP + 0x38c],EAX     ; 004a2e6f
    SHL EAX,0x2                         ; 004a2e76
    ADD EAX,ESI                         ; 004a2e79
    MOV EBX,dword ptr [ESP + 0x364]     ; 004a2e7b
    FLD float ptr [EAX + 0x514]         ; 004a2e82
    FMUL float ptr [ESP + 0x360]        ; 004a2e88
    MOV dword ptr [ESP + 0x384],EBX     ; 004a2e8f
    MOV EBX,dword ptr [ESP + 0x360]     ; 004a2e96
    MOV EDI,dword ptr [ESP + 0x368]     ; 004a2e9d
    MOV dword ptr [ESP + 0x388],EBX     ; 004a2ea4
    FSTP float ptr [EAX + 0x514]        ; 004a2eab
    MOV EDX,dword ptr [EDI + 0x28558]   ; 004a2eb1
    XOR EBX,EBX                         ; 004a2eb7
    TEST EDX,EDX                        ; 004a2eb9
    JLE 0x004a2c3e                      ; 004a2ebb
        ;   XREF to: 004a2c3e (CONDITIONAL_JUMP)  ; LAB_004a2c3e
    MOV ESI,EDI                         ; 004a2ec1
    MOV EDX,dword ptr [ESP + 0x38c]     ; 004a2ec3
        ;   Label: LAB_004a2ec3
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 004a2eca
    JNZ 0x004a2eeb                      ; 004a2ed0
        ;   XREF to: 004a2eeb (CONDITIONAL_JUMP)  ; LAB_004a2eeb
    PUSH EBX                            ; 004a2ed2
    PUSH dword ptr [ESP + 0x38c]        ; 004a2ed3
    PUSH EDI                            ; 004a2eda
    MOV ECX,dword ptr [ESP + 0x390]     ; 004a2edb
    PUSH ECX                            ; 004a2ee2
    CALL core_game.cpp_scaleBoneRecursive_FUN_004a04e0 ; 004a2ee3
        ;   XREF to: 004a04e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004a04e0(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004a2ee8
    INC EBX                             ; 004a2eeb
        ;   Label: LAB_004a2eeb
    MOV ECX,dword ptr [EDI + 0x28558]   ; 004a2eec
    ADD ESI,0x24                        ; 004a2ef2
    CMP EBX,ECX                         ; 004a2ef5
    JGE 0x004a2c3e                      ; 004a2ef7
        ;   XREF to: 004a2c3e (CONDITIONAL_JUMP)  ; LAB_004a2c3e
    JMP 0x004a2ec3                      ; 004a2efd
        ;   XREF to: 004a2ec3 (UNCONDITIONAL_JUMP)  ; LAB_004a2ec3
    MOV ECX,dword ptr [0x02dc9fe4]      ; 004a2eff | g_CStrangerActorType_02dc9fac.name_hash
        ;   Label: LAB_004a2eff
    MOV EAX,[0x01cae0e8]                ; 004a2f05 | DAT_01cae0e8
    PUSH ECX                            ; 004a2f0a
    MOV EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a2f0b
    PUSH EBX                            ; 004a2f12
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004a2f13
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a2f18
    TEST EAX,EAX                        ; 004a2f1b
    JZ 0x004a2f4c                       ; 004a2f1d
        ;   XREF to: 004a2f4c (CONDITIONAL_JUMP)  ; LAB_004a2f4c
    LEA EBX,[EAX + 0x1fb40]             ; 004a2f1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2f25
    CMP dword ptr [EAX + 0x204],0x0     ; 004a2f28
    JZ 0x004a353e                       ; 004a2f2f
        ;   XREF to: 004a353e (CONDITIONAL_JUMP)  ; LAB_004a353e
    PUSH 0x5838c6                       ; 004a2f35 | = "big-hat.kfm"
    PUSH EBX                            ; 004a2f3a
        ;   Label: LAB_004a2f3a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004a2f3b
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004a2f40
    PUSH EBX                            ; 004a2f43
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004a2f44
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a2f49
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2f4c
        ;   Label: LAB_004a2f4c
    CMP dword ptr [EAX + 0x210],0x0     ; 004a2f4f
    JZ 0x004a2ffc                       ; 004a2f56
        ;   XREF to: 004a2ffc (CONDITIONAL_JUMP)  ; LAB_004a2ffc
    PUSH 0x5838e3                       ; 004a2f5c | BYTE_ARRAY_005838e3
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a2f61
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a2f66
    ADD ESP,0x4                         ; 004a2f68
    XOR EAX,EAX                         ; 004a2f6b
    MOV EDI,EBX                         ; 004a2f6d
    MOV dword ptr [ESP + 0x394],EAX     ; 004a2f6f
    SUB ECX,ECX                         ; 004a2f76
    DEC ECX                             ; 004a2f78
    XOR EAX,EAX                         ; 004a2f79
    SCASB.REPNE ES:EDI                  ; 004a2f7b
    NOT ECX                             ; 004a2f7d
    DEC ECX                             ; 004a2f7f
    MOV dword ptr [ESP + 0x390],ECX     ; 004a2f80
    TEST ECX,ECX                        ; 004a2f87
    JLE 0x004a2fc8                      ; 004a2f89
        ;   XREF to: 004a2fc8 (CONDITIONAL_JUMP)  ; LAB_004a2fc8
    MOV EAX,ECX                         ; 004a2f8b
    MOV ESI,EBX                         ; 004a2f8d
    NEG EAX                             ; 004a2f8f
    MOV EBX,ECX                         ; 004a2f91
    ADD ECX,EAX                         ; 004a2f93
    MOV dword ptr [ESP + 0x458],ECX     ; 004a2f95
    XOR EAX,EAX                         ; 004a2f9c
        ;   Label: LAB_004a2f9c
    MOV AL,byte ptr [ESI]               ; 004a2f9e
    PUSH EAX                            ; 004a2fa0
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a2fa1 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a2fa8
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a2fad
    CMP EDI,EAX                         ; 004a2fb0
    JNZ 0x004a2fbb                      ; 004a2fb2
        ;   XREF to: 004a2fbb (CONDITIONAL_JUMP)  ; LAB_004a2fbb
    INC dword ptr [ESP + 0x394]         ; 004a2fb4
    MOV EDX,dword ptr [ESP + 0x458]     ; 004a2fbb
        ;   Label: LAB_004a2fbb
    DEC EBX                             ; 004a2fc2
    INC ESI                             ; 004a2fc3
    CMP EBX,EDX                         ; 004a2fc4
    JG 0x004a2f9c                       ; 004a2fc6
        ;   XREF to: 004a2f9c (CONDITIONAL_JUMP)  ; LAB_004a2f9c
    MOV EAX,dword ptr [ESP + 0x394]     ; 004a2fc8
        ;   Label: LAB_004a2fc8
    CMP EAX,dword ptr [ESP + 0x390]     ; 004a2fcf
    JNZ 0x004a2ffc                      ; 004a2fd6
        ;   XREF to: 004a2ffc (CONDITIONAL_JUMP)  ; LAB_004a2ffc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a2fd8
    XOR DH,DH                           ; 004a2fdb
    MOV EBX,dword ptr [EAX + 0x218]     ; 004a2fdd
    MOV byte ptr [0x01c78af0],DH        ; 004a2fe3 | DAT_01c78af0
    TEST EBX,EBX                        ; 004a2fe9
    SETZ AL                             ; 004a2feb
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a2fee
    AND EAX,0xff                        ; 004a2ff1
    MOV dword ptr [EBX + 0x218],EAX     ; 004a2ff6
    PUSH 0x583917                       ; 004a2ffc | BYTE_ARRAY_00583917
        ;   Label: LAB_004a2ffc
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a3001
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a3006
    ADD ESP,0x4                         ; 004a3008
    XOR EAX,EAX                         ; 004a300b
    MOV EDI,EBX                         ; 004a300d
    MOV dword ptr [ESP + 0x39c],EAX     ; 004a300f
    SUB ECX,ECX                         ; 004a3016
    DEC ECX                             ; 004a3018
    XOR EAX,EAX                         ; 004a3019
    SCASB.REPNE ES:EDI                  ; 004a301b
    NOT ECX                             ; 004a301d
    DEC ECX                             ; 004a301f
    MOV dword ptr [ESP + 0x398],ECX     ; 004a3020
    TEST ECX,ECX                        ; 004a3027
    JLE 0x004a3066                      ; 004a3029
        ;   XREF to: 004a3066 (CONDITIONAL_JUMP)  ; LAB_004a3066
    MOV EAX,ECX                         ; 004a302b
    NEG EAX                             ; 004a302d
    MOV EDI,ECX                         ; 004a302f
    ADD ECX,EAX                         ; 004a3031
    MOV dword ptr [ESP + 0x45c],ECX     ; 004a3033
    XOR EAX,EAX                         ; 004a303a
        ;   Label: LAB_004a303a
    MOV AL,byte ptr [EBX]               ; 004a303c
    PUSH EAX                            ; 004a303e
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a303f | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a3046
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a304b
    CMP ESI,EAX                         ; 004a304e
    JNZ 0x004a3059                      ; 004a3050
        ;   XREF to: 004a3059 (CONDITIONAL_JUMP)  ; LAB_004a3059
    INC dword ptr [ESP + 0x39c]         ; 004a3052
    MOV EDX,dword ptr [ESP + 0x45c]     ; 004a3059
        ;   Label: LAB_004a3059
    DEC EDI                             ; 004a3060
    INC EBX                             ; 004a3061
    CMP EDI,EDX                         ; 004a3062
    JG 0x004a303a                       ; 004a3064
        ;   XREF to: 004a303a (CONDITIONAL_JUMP)  ; LAB_004a303a
    MOV EAX,dword ptr [ESP + 0x39c]     ; 004a3066
        ;   Label: LAB_004a3066
    CMP EAX,dword ptr [ESP + 0x398]     ; 004a306d
    JNZ 0x004a30f6                      ; 004a3074
        ;   XREF to: 004a30f6 (CONDITIONAL_JUMP)  ; LAB_004a30f6
    XOR BL,BL                           ; 004a307a
    PUSH 0x2d0                          ; 004a307c
    MOV byte ptr [0x01c78af0],BL        ; 004a3081 | DAT_01c78af0
    CALL crt_unknown.c_FUN_0056497c     ; 004a3087
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a308c
    TEST EAX,EAX                        ; 004a308f
    JZ 0x004a309c                       ; 004a3091
        ;   XREF to: 004a309c (CONDITIONAL_JUMP)  ; LAB_004a309c
    PUSH EAX                            ; 004a3093
    CALL core_gasmask.cpp_CGasMask_ctor_FUN_004a8a10 ; 004a3094
        ;   XREF to: 004a8a10 (UNCONDITIONAL_CALL)  ; CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004a8a10(CGasMask * this_ptr)
    ADD ESP,0x4                         ; 004a3099
    MOV EBX,EAX                         ; 004a309c
        ;   Label: LAB_004a309c
    PUSH EBX                            ; 004a309e
    MOV ESI,dword ptr [0x005baf90]      ; 004a309f | g_CDemonMission_PTR_005baf90
    PUSH ESI                            ; 004a30a5
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a30a6
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a30ab
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a30ae
    PUSH EBX                            ; 004a30b4
    CALL dword ptr [EAX]                ; 004a30b5
    ADD ESP,0x4                         ; 004a30b7
    MOV EAX,[0x01cae0e8]                ; 004a30ba | DAT_01cae0e8
    PUSH 0x1                            ; 004a30bf
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a30c1
    PUSH EBX                            ; 004a30c8
    ADD EAX,0x1f5a0                     ; 004a30c9
    PUSH EAX                            ; 004a30ce
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a30cf
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a30d4
    PUSH 0x40a00000                     ; 004a30d7
    PUSH 0x58394e                       ; 004a30dc | = "You've got a gasmask!"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a30e1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a30e6
    PUSH EAX                            ; 004a30e9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a30ea
    PUSH EDI                            ; 004a30ed
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a30ee
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a30f3
    PUSH 0x583964                       ; 004a30f6 | BYTE_ARRAY_00583964
        ;   Label: LAB_004a30f6
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a30fb
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a3100
    ADD ESP,0x4                         ; 004a3102
    XOR EAX,EAX                         ; 004a3105
    MOV EDI,EBX                         ; 004a3107
    MOV dword ptr [ESP + 0x3a4],EAX     ; 004a3109
    SUB ECX,ECX                         ; 004a3110
    DEC ECX                             ; 004a3112
    XOR EAX,EAX                         ; 004a3113
    SCASB.REPNE ES:EDI                  ; 004a3115
    NOT ECX                             ; 004a3117
    DEC ECX                             ; 004a3119
    MOV dword ptr [ESP + 0x3a0],ECX     ; 004a311a
    TEST ECX,ECX                        ; 004a3121
    JLE 0x004a3160                      ; 004a3123
        ;   XREF to: 004a3160 (CONDITIONAL_JUMP)  ; LAB_004a3160
    MOV EAX,ECX                         ; 004a3125
    NEG EAX                             ; 004a3127
    MOV EDI,ECX                         ; 004a3129
    ADD ECX,EAX                         ; 004a312b
    MOV dword ptr [ESP + 0x460],ECX     ; 004a312d
    XOR EAX,EAX                         ; 004a3134
        ;   Label: LAB_004a3134
    MOV AL,byte ptr [EBX]               ; 004a3136
    PUSH EAX                            ; 004a3138
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a3139 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a3140
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a3145
    CMP ESI,EAX                         ; 004a3148
    JNZ 0x004a3153                      ; 004a314a
        ;   XREF to: 004a3153 (CONDITIONAL_JUMP)  ; LAB_004a3153
    INC dword ptr [ESP + 0x3a4]         ; 004a314c
    MOV ECX,dword ptr [ESP + 0x460]     ; 004a3153
        ;   Label: LAB_004a3153
    DEC EDI                             ; 004a315a
    INC EBX                             ; 004a315b
    CMP EDI,ECX                         ; 004a315c
    JG 0x004a3134                       ; 004a315e
        ;   XREF to: 004a3134 (CONDITIONAL_JUMP)  ; LAB_004a3134
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 004a3160
        ;   Label: LAB_004a3160
    CMP EAX,dword ptr [ESP + 0x3a0]     ; 004a3167
    JNZ 0x004a31ad                      ; 004a316e
        ;   XREF to: 004a31ad (CONDITIONAL_JUMP)  ; LAB_004a31ad
    MOV EAX,[0x01cae0e8]                ; 004a3170 | DAT_01cae0e8
    PUSH 0x40a00000                     ; 004a3175
    XOR BH,BH                           ; 004a317a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a317c
    PUSH 0x583999                       ; 004a3183 | = "Health restored."
    MOV byte ptr [0x01c78af0],BH        ; 004a3188 | DAT_01c78af0
    MOV dword ptr [EAX + 0x2434],0x42c80000 ; 004a318e
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a3198
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a319d
    PUSH EAX                            ; 004a31a0
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a31a1
    PUSH ESI                            ; 004a31a4
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a31a5
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a31aa
    PUSH 0x5839aa                       ; 004a31ad | BYTE_ARRAY_005839aa
        ;   Label: LAB_004a31ad
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a31b2
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    XOR EDI,EDI                         ; 004a31b7
    ADD ESP,0x4                         ; 004a31b9
    MOV dword ptr [ESP + 0x3ac],EDI     ; 004a31bc
    MOV EDI,EAX                         ; 004a31c3
    MOV EBX,EAX                         ; 004a31c5
    SUB ECX,ECX                         ; 004a31c7
    DEC ECX                             ; 004a31c9
    XOR EAX,EAX                         ; 004a31ca
    SCASB.REPNE ES:EDI                  ; 004a31cc
    NOT ECX                             ; 004a31ce
    DEC ECX                             ; 004a31d0
    MOV dword ptr [ESP + 0x3a8],ECX     ; 004a31d1
    TEST ECX,ECX                        ; 004a31d8
    JLE 0x004a3217                      ; 004a31da
        ;   XREF to: 004a3217 (CONDITIONAL_JUMP)  ; LAB_004a3217
    MOV EAX,ECX                         ; 004a31dc
    NEG EAX                             ; 004a31de
    MOV EDI,ECX                         ; 004a31e0
    ADD ECX,EAX                         ; 004a31e2
    MOV dword ptr [ESP + 0x464],ECX     ; 004a31e4
    XOR EAX,EAX                         ; 004a31eb
        ;   Label: LAB_004a31eb
    MOV AL,byte ptr [EBX]               ; 004a31ed
    PUSH EAX                            ; 004a31ef
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a31f0 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a31f7
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a31fc
    CMP ESI,EAX                         ; 004a31ff
    JNZ 0x004a320a                      ; 004a3201
        ;   XREF to: 004a320a (CONDITIONAL_JUMP)  ; LAB_004a320a
    INC dword ptr [ESP + 0x3ac]         ; 004a3203
    MOV EDX,dword ptr [ESP + 0x464]     ; 004a320a
        ;   Label: LAB_004a320a
    DEC EDI                             ; 004a3211
    INC EBX                             ; 004a3212
    CMP EDI,EDX                         ; 004a3213
    JG 0x004a31eb                       ; 004a3215
        ;   XREF to: 004a31eb (CONDITIONAL_JUMP)  ; LAB_004a31eb
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 004a3217
        ;   Label: LAB_004a3217
    CMP EAX,dword ptr [ESP + 0x3a8]     ; 004a321e
    JNZ 0x004a3282                      ; 004a3225
        ;   XREF to: 004a3282 (CONDITIONAL_JUMP)  ; LAB_004a3282
    MOV EBX,dword ptr [0x02dc9fe4]      ; 004a3227 | g_CStrangerActorType_02dc9fac.name_hash
    MOV EAX,[0x01cae0e8]                ; 004a322d | DAT_01cae0e8
    PUSH EBX                            ; 004a3232
    MOV ESI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a3233
    XOR CL,CL                           ; 004a323a
    PUSH ESI                            ; 004a323c
    MOV byte ptr [0x01c78af0],CL        ; 004a323d | DAT_01c78af0
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004a3243
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a3248
    TEST EAX,EAX                        ; 004a324b
    JZ 0x004a3282                       ; 004a324d
        ;   XREF to: 004a3282 (CONDITIONAL_JUMP)  ; LAB_004a3282
    PUSH 0x5839de                       ; 004a324f | = "oldhat.kfm"
    LEA EBX,[EAX + 0x1fb40]             ; 004a3254
    PUSH EBX                            ; 004a325a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004a325b
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004a3260
    PUSH EBX                            ; 004a3263
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004a3264
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a3269
    PUSH 0x5839e9                       ; 004a326c | = "cheat-1.wav"
    PUSH 0x0                            ; 004a3271
    MOV EDI,dword ptr [0x005bed68]      ; 004a3273 | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004a3279
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a327a
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0052ea40(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004a327f
    PUSH 0x5839f5                       ; 004a3282 | BYTE_ARRAY_005839f5
        ;   Label: LAB_004a3282
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a3287
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a328c
    ADD ESP,0x4                         ; 004a328e
    XOR EAX,EAX                         ; 004a3291
    MOV EDI,EBX                         ; 004a3293
    MOV dword ptr [ESP + 0x3b4],EAX     ; 004a3295
    SUB ECX,ECX                         ; 004a329c
    DEC ECX                             ; 004a329e
    XOR EAX,EAX                         ; 004a329f
    SCASB.REPNE ES:EDI                  ; 004a32a1
    NOT ECX                             ; 004a32a3
    DEC ECX                             ; 004a32a5
    MOV dword ptr [ESP + 0x3b0],ECX     ; 004a32a6
    TEST ECX,ECX                        ; 004a32ad
    JLE 0x004a32ec                      ; 004a32af
        ;   XREF to: 004a32ec (CONDITIONAL_JUMP)  ; LAB_004a32ec
    MOV EAX,ECX                         ; 004a32b1
    NEG EAX                             ; 004a32b3
    MOV EDI,ECX                         ; 004a32b5
    ADD ECX,EAX                         ; 004a32b7
    MOV dword ptr [ESP + 0x468],ECX     ; 004a32b9
    XOR EAX,EAX                         ; 004a32c0
        ;   Label: LAB_004a32c0
    MOV AL,byte ptr [EBX]               ; 004a32c2
    PUSH EAX                            ; 004a32c4
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a32c5 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a32cc
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a32d1
    CMP ESI,EAX                         ; 004a32d4
    JNZ 0x004a32df                      ; 004a32d6
        ;   XREF to: 004a32df (CONDITIONAL_JUMP)  ; LAB_004a32df
    INC dword ptr [ESP + 0x3b4]         ; 004a32d8
    MOV ECX,dword ptr [ESP + 0x468]     ; 004a32df
        ;   Label: LAB_004a32df
    DEC EDI                             ; 004a32e6
    INC EBX                             ; 004a32e7
    CMP EDI,ECX                         ; 004a32e8
    JG 0x004a32c0                       ; 004a32ea
        ;   XREF to: 004a32c0 (CONDITIONAL_JUMP)  ; LAB_004a32c0
    MOV EAX,dword ptr [ESP + 0x3b4]     ; 004a32ec
        ;   Label: LAB_004a32ec
    CMP EAX,dword ptr [ESP + 0x3b0]     ; 004a32f3
    JNZ 0x004a3332                      ; 004a32fa
        ;   XREF to: 004a3332 (CONDITIONAL_JUMP)  ; LAB_004a3332
    MOV EDI,0x583a29                    ; 004a32fc | = "CGun"
    PUSH 0x314                          ; 004a3301
    XOR CH,CH                           ; 004a3306
    MOV ESI,0x3                         ; 004a3308
    MOV byte ptr [0x01c78af0],CH        ; 004a330d | DAT_01c78af0
    CALL crt_unknown.c_FUN_0056497c     ; 004a3313
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a3318
    TEST EAX,EAX                        ; 004a331b
    JZ 0x004a3328                       ; 004a331d
        ;   XREF to: 004a3328 (CONDITIONAL_JUMP)  ; LAB_004a3328
    PUSH EAX                            ; 004a331f
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a3320
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004a3325
    MOV EBX,EAX                         ; 004a3328
        ;   Label: LAB_004a3328
    TEST EBX,EBX                        ; 004a332a
    JNZ 0x004a3548                      ; 004a332c
        ;   XREF to: 004a3548 (CONDITIONAL_JUMP)  ; LAB_004a3548
    PUSH 0x583a2e                       ; 004a3332 | BYTE_ARRAY_00583a2e
        ;   Label: LAB_004a3332
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a3337
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a333c
    ADD ESP,0x4                         ; 004a333e
    MOV EDI,EAX                         ; 004a3341
    XOR EDX,EDX                         ; 004a3343
    SUB ECX,ECX                         ; 004a3345
    DEC ECX                             ; 004a3347
    XOR EAX,EAX                         ; 004a3348
    SCASB.REPNE ES:EDI                  ; 004a334a
    NOT ECX                             ; 004a334c
    DEC ECX                             ; 004a334e
    MOV dword ptr [ESP + 0x3bc],EDX     ; 004a334f
    MOV dword ptr [ESP + 0x3b8],ECX     ; 004a3356
    TEST ECX,ECX                        ; 004a335d
    JLE 0x004a339c                      ; 004a335f
        ;   XREF to: 004a339c (CONDITIONAL_JUMP)  ; LAB_004a339c
    MOV EAX,ECX                         ; 004a3361
    NEG EAX                             ; 004a3363
    MOV EDI,ECX                         ; 004a3365
    ADD ECX,EAX                         ; 004a3367
    MOV dword ptr [ESP + 0x46c],ECX     ; 004a3369
    XOR EAX,EAX                         ; 004a3370
        ;   Label: LAB_004a3370
    MOV AL,byte ptr [EBX]               ; 004a3372
    PUSH EAX                            ; 004a3374
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a3375 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a337c
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a3381
    CMP ESI,EAX                         ; 004a3384
    JNZ 0x004a338f                      ; 004a3386
        ;   XREF to: 004a338f (CONDITIONAL_JUMP)  ; LAB_004a338f
    INC dword ptr [ESP + 0x3bc]         ; 004a3388
    MOV ESI,dword ptr [ESP + 0x46c]     ; 004a338f
        ;   Label: LAB_004a338f
    DEC EDI                             ; 004a3396
    INC EBX                             ; 004a3397
    CMP EDI,ESI                         ; 004a3398
    JG 0x004a3370                       ; 004a339a
        ;   XREF to: 004a3370 (CONDITIONAL_JUMP)  ; LAB_004a3370
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 004a339c
        ;   Label: LAB_004a339c
    CMP EAX,dword ptr [ESP + 0x3b8]     ; 004a33a3
    JNZ 0x004a33e1                      ; 004a33aa
        ;   XREF to: 004a33e1 (CONDITIONAL_JUMP)  ; LAB_004a33e1
    MOV EDI,0x583a60                    ; 004a33ac | = "CGun"
    PUSH 0x314                          ; 004a33b1
    XOR AL,AL                           ; 004a33b6
    MOV ESI,0x7                         ; 004a33b8
    MOV [0x01c78af0],AL                 ; 004a33bd | DAT_01c78af0
    CALL crt_unknown.c_FUN_0056497c     ; 004a33c2
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a33c7
    TEST EAX,EAX                        ; 004a33ca
    JZ 0x004a33d7                       ; 004a33cc
        ;   XREF to: 004a33d7 (CONDITIONAL_JUMP)  ; LAB_004a33d7
    PUSH EAX                            ; 004a33ce
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a33cf
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004a33d4
    MOV EBX,EAX                         ; 004a33d7
        ;   Label: LAB_004a33d7
    TEST EBX,EBX                        ; 004a33d9
    JNZ 0x004a359f                      ; 004a33db
        ;   XREF to: 004a359f (CONDITIONAL_JUMP)  ; LAB_004a359f
    PUSH 0x583a65                       ; 004a33e1 | BYTE_ARRAY_00583a65
        ;   Label: LAB_004a33e1
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a33e6
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004a33eb
    ADD ESP,0x4                         ; 004a33ed
    MOV EDI,EAX                         ; 004a33f0
    XOR EDX,EDX                         ; 004a33f2
    SUB ECX,ECX                         ; 004a33f4
    DEC ECX                             ; 004a33f6
    XOR EAX,EAX                         ; 004a33f7
    SCASB.REPNE ES:EDI                  ; 004a33f9
    NOT ECX                             ; 004a33fb
    DEC ECX                             ; 004a33fd
    MOV dword ptr [ESP + 0x3c4],EDX     ; 004a33fe
    MOV dword ptr [ESP + 0x3c0],ECX     ; 004a3405
    TEST ECX,ECX                        ; 004a340c
    JLE 0x004a344b                      ; 004a340e
        ;   XREF to: 004a344b (CONDITIONAL_JUMP)  ; LAB_004a344b
    MOV EAX,ECX                         ; 004a3410
    NEG EAX                             ; 004a3412
    MOV EDI,ECX                         ; 004a3414
    ADD ECX,EAX                         ; 004a3416
    MOV dword ptr [ESP + 0x470],ECX     ; 004a3418
    XOR EAX,EAX                         ; 004a341f
        ;   Label: LAB_004a341f
    MOV AL,byte ptr [EBX]               ; 004a3421
    PUSH EAX                            ; 004a3423
    MOVZX ESI,byte ptr [EDI + 0x1c78aef] ; 004a3424 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a342b
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a3430
    CMP ESI,EAX                         ; 004a3433
    JNZ 0x004a343e                      ; 004a3435
        ;   XREF to: 004a343e (CONDITIONAL_JUMP)  ; LAB_004a343e
    INC dword ptr [ESP + 0x3c4]         ; 004a3437
    MOV ESI,dword ptr [ESP + 0x470]     ; 004a343e
        ;   Label: LAB_004a343e
    DEC EDI                             ; 004a3445
    INC EBX                             ; 004a3446
    CMP EDI,ESI                         ; 004a3447
    JG 0x004a341f                       ; 004a3449
        ;   XREF to: 004a341f (CONDITIONAL_JUMP)  ; LAB_004a341f
    MOV EAX,dword ptr [ESP + 0x3c4]     ; 004a344b
        ;   Label: LAB_004a344b
    CMP EAX,dword ptr [ESP + 0x3c0]     ; 004a3452
    JNZ 0x004a3491                      ; 004a3459
        ;   XREF to: 004a3491 (CONDITIONAL_JUMP)  ; LAB_004a3491
    MOV ESI,0x583a9a                    ; 004a345b | = "CGun"
    PUSH 0x314                          ; 004a3460
    XOR AH,AH                           ; 004a3465
    MOV EDI,0x8                         ; 004a3467
    MOV byte ptr [0x01c78af0],AH        ; 004a346c | DAT_01c78af0
    CALL crt_unknown.c_FUN_0056497c     ; 004a3472
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a3477
    TEST EAX,EAX                        ; 004a347a
    JZ 0x004a3487                       ; 004a347c
        ;   XREF to: 004a3487 (CONDITIONAL_JUMP)  ; LAB_004a3487
    PUSH EAX                            ; 004a347e
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a347f
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004a3484
    MOV EBX,EAX                         ; 004a3487
        ;   Label: LAB_004a3487
    TEST EBX,EBX                        ; 004a3489
    JNZ 0x004a35f6                      ; 004a348b
        ;   XREF to: 004a35f6 (CONDITIONAL_JUMP)  ; LAB_004a35f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a3491
        ;   Label: LAB_004a3491
    CMP dword ptr [EAX + 0x210],0x0     ; 004a3494
    JZ 0x004a05ff                       ; 004a349b
        ;   XREF to: 004a05ff (CONDITIONAL_JUMP)  ; LAB_004a05ff
    PUSH 0x583a9f                       ; 004a34a1 | BYTE_ARRAY_00583a9f
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a34a6
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    MOV ESI,EAX                         ; 004a34ab
    ADD ESP,0x4                         ; 004a34ad
    XOR ECX,ECX                         ; 004a34b0
    MOV EDI,EAX                         ; 004a34b2
    MOV dword ptr [ESP + 0x3cc],ECX     ; 004a34b4
    SUB ECX,ECX                         ; 004a34bb
    DEC ECX                             ; 004a34bd
    XOR EAX,EAX                         ; 004a34be
    SCASB.REPNE ES:EDI                  ; 004a34c0
    NOT ECX                             ; 004a34c2
    DEC ECX                             ; 004a34c4
    MOV dword ptr [ESP + 0x3c8],ECX     ; 004a34c5
    TEST ECX,ECX                        ; 004a34cc
    JLE 0x004a3508                      ; 004a34ce
        ;   XREF to: 004a3508 (CONDITIONAL_JUMP)  ; LAB_004a3508
    MOV EAX,ECX                         ; 004a34d0
    NEG EAX                             ; 004a34d2
    MOV EBX,ECX                         ; 004a34d4
    ADD ECX,EAX                         ; 004a34d6
    MOV dword ptr [ESP + 0x474],ECX     ; 004a34d8
    XOR EAX,EAX                         ; 004a34df
        ;   Label: LAB_004a34df
    MOV AL,byte ptr [ESI]               ; 004a34e1
    PUSH EAX                            ; 004a34e3
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a34e4 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a34eb
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a34f0
    CMP EDI,EAX                         ; 004a34f3
    JZ 0x004a364d                       ; 004a34f5
        ;   XREF to: 004a364d (CONDITIONAL_JUMP)  ; LAB_004a364d
    MOV EDI,dword ptr [ESP + 0x474]     ; 004a34fb
        ;   Label: LAB_004a34fb
    DEC EBX                             ; 004a3502
    INC ESI                             ; 004a3503
    CMP EBX,EDI                         ; 004a3504
    JG 0x004a34df                       ; 004a3506
        ;   XREF to: 004a34df (CONDITIONAL_JUMP)  ; LAB_004a34df
    MOV EAX,dword ptr [ESP + 0x3cc]     ; 004a3508
        ;   Label: LAB_004a3508
    CMP EAX,dword ptr [ESP + 0x3c8]     ; 004a350f
    JNZ 0x004a05ff                      ; 004a3516
        ;   XREF to: 004a05ff (CONDITIONAL_JUMP)  ; LAB_004a05ff
    XOR DL,DL                           ; 004a351c
    MOV ECX,dword ptr [0x01c78ad8]      ; 004a351e | DAT_01c78ad8
    MOV byte ptr [0x01c78af0],DL        ; 004a3524 | DAT_01c78af0
    TEST ECX,ECX                        ; 004a352a
    SETZ AL                             ; 004a352c
    AND EAX,0xff                        ; 004a352f
    MOV [0x01c78ad8],EAX                ; 004a3534 | DAT_01c78ad8
    JMP 0x004a05ff                      ; 004a3539
        ;   XREF to: 004a05ff (UNCONDITIONAL_JUMP)  ; LAB_004a05ff
    PUSH 0x5838d2                       ; 004a353e | = "stranger-hat.kfm"
        ;   Label: LAB_004a353e
    JMP 0x004a2f3a                      ; 004a3543
        ;   XREF to: 004a2f3a (UNCONDITIONAL_JUMP)  ; LAB_004a2f3a
    PUSH EBX                            ; 004a3548
        ;   Label: LAB_004a3548
    MOV EAX,[0x005baf90]                ; 004a3549 | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004a354e
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a354f
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a3554
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a3557
    PUSH EBX                            ; 004a355d
    CALL dword ptr [EAX]                ; 004a355e
    ADD ESP,0x4                         ; 004a3560
    PUSH EDI                            ; 004a3563 | = "CGun"
    PUSH EBX                            ; 004a3564
    MOV dword ptr [EBX + 0x310],ESI     ; 004a3565
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a356b
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a3570
    MOV EAX,[0x01cae0e8]                ; 004a3573 | DAT_01cae0e8
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a3578
    PUSH 0x1                            ; 004a3582
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a3584
    PUSH EBX                            ; 004a358b
    ADD EAX,0x1f5a0                     ; 004a358c
    PUSH EAX                            ; 004a3591
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a3592
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a3597
    JMP 0x004a3332                      ; 004a359a
        ;   XREF to: 004a3332 (UNCONDITIONAL_JUMP)  ; LAB_004a3332
    PUSH EBX                            ; 004a359f
        ;   Label: LAB_004a359f
    MOV EAX,[0x005baf90]                ; 004a35a0 | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004a35a5
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a35a6
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a35ab
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a35ae
    PUSH EBX                            ; 004a35b4
    CALL dword ptr [EAX]                ; 004a35b5
    ADD ESP,0x4                         ; 004a35b7
    PUSH EDI                            ; 004a35ba | = "CGun"
    PUSH EBX                            ; 004a35bb
    MOV dword ptr [EBX + 0x310],ESI     ; 004a35bc
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a35c2
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a35c7
    MOV EAX,[0x01cae0e8]                ; 004a35ca | DAT_01cae0e8
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a35cf
    PUSH 0x1                            ; 004a35d9
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a35db
    PUSH EBX                            ; 004a35e2
    ADD EAX,0x1f5a0                     ; 004a35e3
    PUSH EAX                            ; 004a35e8
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a35e9
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a35ee
    JMP 0x004a33e1                      ; 004a35f1
        ;   XREF to: 004a33e1 (UNCONDITIONAL_JUMP)  ; LAB_004a33e1
    PUSH EBX                            ; 004a35f6
        ;   Label: LAB_004a35f6
    MOV EAX,[0x005baf90]                ; 004a35f7 | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004a35fc
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a35fd
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a3602
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a3605
    PUSH EBX                            ; 004a360b
    CALL dword ptr [EAX]                ; 004a360c
    ADD ESP,0x4                         ; 004a360e
    PUSH ESI                            ; 004a3611 | = "CGun"
    PUSH EBX                            ; 004a3612
    MOV dword ptr [EBX + 0x310],EDI     ; 004a3613
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a3619
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a361e
    MOV EAX,[0x01cae0e8]                ; 004a3621 | DAT_01cae0e8
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a3626
    PUSH 0x1                            ; 004a3630
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a3632
    PUSH EBX                            ; 004a3639
    ADD EAX,0x1f5a0                     ; 004a363a
    PUSH EAX                            ; 004a363f
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a3640
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a3645
    JMP 0x004a3491                      ; 004a3648
        ;   XREF to: 004a3491 (UNCONDITIONAL_JUMP)  ; LAB_004a3491
    INC dword ptr [ESP + 0x3cc]         ; 004a364d
        ;   Label: LAB_004a364d
    JMP 0x004a34fb                      ; 004a3654
        ;   XREF to: 004a34fb (UNCONDITIONAL_JUMP)  ; LAB_004a34fb

