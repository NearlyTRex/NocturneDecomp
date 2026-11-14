; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004d27b0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x4b0]:1  local_4b0
; undefined8       Stack[-0x2f8]:8  local_2f8
; undefined4       Stack[-0x2ec]:4  local_2ec
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined4       Stack[-0x2e4]:4  local_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2d8]:4  local_2d8
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2d0]:4  local_2d0
; undefined4       Stack[-0x2cc]:4  local_2cc
; undefined4       Stack[-0x2c8]:4  local_2c8
; undefined4       Stack[-0x2c4]:4  local_2c4
; undefined4       Stack[-0x2c0]:4  local_2c0
; undefined4       Stack[-0x2bc]:4  local_2bc
; undefined4       Stack[-0x2b8]:4  local_2b8
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined4       Stack[-0x29c]:4  local_29c
; undefined4       Stack[-0x298]:4  local_298
; undefined4       Stack[-0x294]:4  local_294
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d8437
;
; Referenced Globals:
;   undefined4 s_Enter_Movie_FPS_005e128f+1
;   TerminatedCString s_Enter_number_of_frames_t_005e12a0
;   TerminatedCString s_Enter_image_width_005e12ea
;   TerminatedCString s_Enter_image_height_005e12fc
;   TerminatedCString s_Press_CTRL_V_to_begin_re_005e130f
;   TerminatedCString s_cheat_1_wav_005e1b23
;   TerminatedCString s_headOfHorror_005e1b2f
;   TerminatedCString s_The_horror_has_been_unle_005e1b3c
;   TerminatedCString s_cheat_1_wav_005e1b5b
;   TerminatedCString s_Enter_cheat_code_005e1b67
;   undefined4 DAT_005e1b78
;   TerminatedCString s_Buy_Nocturne_today_005e1bb1
;   TerminatedCString s_were1_wav_2_0_005e1bc5
;   undefined4 DAT_005e1bd5
;   TerminatedCString s_FPS_3_2lf_005e1c09
;   ... and 208 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_createActorByName_FUN_0040c2b0
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_event.cpp_CEventList_validateCommands_FUN_004a6cd0
;   core_event.cpp_FUN_004a9a60
;   core_game.cpp_CGame_displayMessage_FUN_004cc190
;   ... and 30 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d27b0
        ;   Label: core_game.cpp_CGame_processCheatCodes_FUN_004d27b0
    PUSH ESI                            ; 004d27b1
    PUSH EDI                            ; 004d27b2
    PUSH EBP                            ; 004d27b3
    MOV EBP,ESP                         ; 004d27b4
    SUB ESP,0xcb0                       ; 004d27b6
    AND ESP,0xfffffff8                  ; 004d27bc
    CMP dword ptr [0x01cd01f8],0x0      ; 004d27bf | DAT_01cd01f8
    JZ 0x004d27cf                       ; 004d27c6
        ;   XREF to: 004d27cf (CONDITIONAL_JUMP)  ; LAB_004d27cf
    MOV ESP,EBP                         ; 004d27c8
        ;   Label: LAB_004d27c8
    POP EBP                             ; 004d27ca
    POP EDI                             ; 004d27cb
    POP ESI                             ; 004d27cc
    POP EBX                             ; 004d27cd
    RET                                 ; 004d27ce
    PUSH 0x5e1b2f                       ; 004d27cf | = "headOfHorror"
        ;   Label: LAB_004d27cf
    MOV ECX,dword ptr [0x0061b4d0]      ; 004d27d4 | DAT_0061b4d0
    PUSH ECX                            ; 004d27da
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004d27db
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004d27e0
    TEST EAX,EAX                        ; 004d27e3
    JZ 0x004d2837                       ; 004d27e5
        ;   XREF to: 004d2837 (CONDITIONAL_JUMP)  ; LAB_004d2837
    MOV EAX,[0x0061d95c]                ; 004d27e7 | g_CGamePtr
    CMP dword ptr [EAX + 0x230],0x29a   ; 004d27ec | g_CGameInstance.head_of_horror_cheat
    JZ 0x004d2837                       ; 004d27f6
        ;   XREF to: 004d2837 (CONDITIONAL_JUMP)  ; LAB_004d2837
    PUSH 0x40a00000                     ; 004d27f8
    PUSH 0x5e1b3c                       ; 004d27fd | = "The horror has been unleashed."
    MOV dword ptr [EAX + 0x230],0x29a   ; 004d2802 | g_CGameInstance.head_of_horror_cheat
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d280c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d2811
    PUSH EAX                            ; 004d2814
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d2815
    PUSH ESI                            ; 004d2818
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d2819
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d281e
    PUSH 0x5e1b5b                       ; 004d2821 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d2826
    MOV EDI,dword ptr [0x006236b8]      ; 004d2828 | DAT_006236b8
    PUSH EDI                            ; 004d282e
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d282f
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d2834
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2837
        ;   Label: LAB_004d2837
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004d283a
    JZ 0x004d3f90                       ; 004d2841
        ;   XREF to: 004d3f90 (CONDITIONAL_JUMP)  ; LAB_004d3f90
    LEA EAX,[EAX]                       ; 004d2847
    LEA EDX,[EDX]                       ; 004d284d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2850
        ;   Label: LAB_004d2850
    ADD EAX,0x208                       ; 004d2853
    MOV dword ptr [ESP + 0xaf0],EAX     ; 004d2858
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 004d285f
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
        ;   Label: LAB_004d285f
    TEST EAX,EAX                        ; 004d2864
    JZ 0x004d27c8                       ; 004d2866
        ;   XREF to: 004d27c8 (CONDITIONAL_JUMP)  ; LAB_004d27c8
    MOV EBX,dword ptr [0x0061f2a4]      ; 004d286c | DAT_0061f2a4
    PUSH EBX                            ; 004d2872 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270 ; 004d2873
        ;   XREF to: 004fd270 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270(CKeys * this_ptr)
    MOV EBX,0x13                        ; 004d2878
    ADD ESP,0x4                         ; 004d287d
    MOV AH,AL                           ; 004d2880
    DEC EBX                             ; 004d2882
        ;   Label: LAB_004d2882
    MOV AL,byte ptr [EBX + 0x1cd0c68]   ; 004d2883 | DAT_01cd0c7a | DAT_01cd0c79
    MOV byte ptr [EBX + 0x1cd0c69],AL   ; 004d2889 | DAT_01cd0c7b | DAT_01cd0c7a
    TEST EBX,EBX                        ; 004d288f
    JG 0x004d2882                       ; 004d2891
        ;   XREF to: 004d2882 (CONDITIONAL_JUMP)  ; LAB_004d2882
    PUSH 0x5e1b78                       ; 004d2893 | DAT_005e1b78
    MOV byte ptr [0x01cd0c68],AH        ; 004d2898 | DAT_01cd0c68
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d289e
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d28a3
    ADD ESP,0x4                         ; 004d28a5
    MOV EDI,EAX                         ; 004d28a8
    MOV EBX,EAX                         ; 004d28aa
    SUB ECX,ECX                         ; 004d28ac
    DEC ECX                             ; 004d28ae
    XOR EAX,EAX                         ; 004d28af
    SCASB.REPNE ES:EDI                  ; 004d28b1
    NOT ECX                             ; 004d28b3
    DEC ECX                             ; 004d28b5
    MOV dword ptr [ESP + 0x9d8],ESI     ; 004d28b6
    MOV dword ptr [ESP + 0x9d4],ECX     ; 004d28bd
    TEST ECX,ECX                        ; 004d28c4
    JLE 0x004d2900                      ; 004d28c6
        ;   XREF to: 004d2900 (CONDITIONAL_JUMP)  ; LAB_004d2900
    MOV EAX,ECX                         ; 004d28c8
    NEG EAX                             ; 004d28ca
    MOV EDI,ECX                         ; 004d28cc
    ADD ECX,EAX                         ; 004d28ce
    MOV dword ptr [ESP + 0xbdc],ECX     ; 004d28d0
    XOR EAX,EAX                         ; 004d28d7
        ;   Label: LAB_004d28d7
    MOV AL,byte ptr [EBX]               ; 004d28d9
    PUSH EAX                            ; 004d28db
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d28dc | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d28e3
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d28e8
    CMP ESI,EAX                         ; 004d28eb
    JZ 0x004d400d                       ; 004d28ed
        ;   XREF to: 004d400d (CONDITIONAL_JUMP)  ; LAB_004d400d
    MOV EAX,dword ptr [ESP + 0xbdc]     ; 004d28f3
        ;   Label: LAB_004d28f3
    DEC EDI                             ; 004d28fa
    INC EBX                             ; 004d28fb
    CMP EDI,EAX                         ; 004d28fc
    JG 0x004d28d7                       ; 004d28fe
        ;   XREF to: 004d28d7 (CONDITIONAL_JUMP)  ; LAB_004d28d7
    MOV EAX,dword ptr [ESP + 0x9d8]     ; 004d2900
        ;   Label: LAB_004d2900
    CMP EAX,dword ptr [ESP + 0x9d4]     ; 004d2907
    JNZ 0x004d296a                      ; 004d290e
        ;   XREF to: 004d296a (CONDITIONAL_JUMP)  ; LAB_004d296a
    PUSH 0x40a00000                     ; 004d2910
    XOR DH,DH                           ; 004d2915
    PUSH 0x5e1bb1                       ; 004d2917 | = "Buy Nocturne today!"
    MOV byte ptr [0x01cd0c68],DH        ; 004d291c | DAT_01cd0c68
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d2922
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d2927
    PUSH EAX                            ; 004d292a
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d292b
    PUSH ECX                            ; 004d292e
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d292f
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d2934
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2937
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d293a
    SETZ AL                             ; 004d2941
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d2944
    AND EAX,0xff                        ; 004d2947
    MOV dword ptr [EBX + 0x22c],EAX     ; 004d294c
    JZ 0x004d296a                       ; 004d2952
        ;   XREF to: 004d296a (CONDITIONAL_JUMP)  ; LAB_004d296a
    PUSH 0x5e1bc5                       ; 004d2954 | = "were1.wav @ 2.0"
    PUSH 0x0                            ; 004d2959
    MOV EDI,dword ptr [0x006236b8]      ; 004d295b | DAT_006236b8
    PUSH EDI                            ; 004d2961
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d2962
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d2967
    PUSH 0x5e1bd5                       ; 004d296a | DAT_005e1bd5
        ;   Label: LAB_004d296a
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d296f
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d2974
    ADD ESP,0x4                         ; 004d2976
    XOR EAX,EAX                         ; 004d2979
    MOV EDI,EBX                         ; 004d297b
    MOV dword ptr [ESP + 0x9e0],EAX     ; 004d297d
    SUB ECX,ECX                         ; 004d2984
    DEC ECX                             ; 004d2986
    XOR EAX,EAX                         ; 004d2987
    SCASB.REPNE ES:EDI                  ; 004d2989
    NOT ECX                             ; 004d298b
    DEC ECX                             ; 004d298d
    MOV dword ptr [ESP + 0x9dc],ECX     ; 004d298e
    TEST ECX,ECX                        ; 004d2995
    JLE 0x004d29d4                      ; 004d2997
        ;   XREF to: 004d29d4 (CONDITIONAL_JUMP)  ; LAB_004d29d4
    MOV EAX,ECX                         ; 004d2999
    NEG EAX                             ; 004d299b
    MOV EDI,ECX                         ; 004d299d
    ADD ECX,EAX                         ; 004d299f
    MOV dword ptr [ESP + 0xbe0],ECX     ; 004d29a1
    XOR EAX,EAX                         ; 004d29a8
        ;   Label: LAB_004d29a8
    MOV AL,byte ptr [EBX]               ; 004d29aa
    PUSH EAX                            ; 004d29ac
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d29ad | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d29b4
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d29b9
    CMP ESI,EAX                         ; 004d29bc
    JNZ 0x004d29c7                      ; 004d29be
        ;   XREF to: 004d29c7 (CONDITIONAL_JUMP)  ; LAB_004d29c7
    INC dword ptr [ESP + 0x9e0]         ; 004d29c0
    MOV ECX,dword ptr [ESP + 0xbe0]     ; 004d29c7
        ;   Label: LAB_004d29c7
    DEC EDI                             ; 004d29ce
    INC EBX                             ; 004d29cf
    CMP EDI,ECX                         ; 004d29d0
    JG 0x004d29a8                       ; 004d29d2
        ;   XREF to: 004d29a8 (CONDITIONAL_JUMP)  ; LAB_004d29a8
    MOV EAX,dword ptr [ESP + 0x9e0]     ; 004d29d4
        ;   Label: LAB_004d29d4
    CMP EAX,dword ptr [ESP + 0x9dc]     ; 004d29db
    JNZ 0x004d2a1b                      ; 004d29e2
        ;   XREF to: 004d2a1b (CONDITIONAL_JUMP)  ; LAB_004d2a1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d29e4
    XOR BL,BL                           ; 004d29e7
    MOV ESI,dword ptr [EAX + 0x224]     ; 004d29e9
    MOV byte ptr [0x01cd0c68],BL        ; 004d29ef | DAT_01cd0c68
    TEST ESI,ESI                        ; 004d29f5
    JNZ 0x004d4019                      ; 004d29f7
        ;   XREF to: 004d4019 (CONDITIONAL_JUMP)  ; LAB_004d4019
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d29fd
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d2a00
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV dword ptr [EBX + 0x224],0x1     ; 004d2a05
    MOV dword ptr [EBX + 0x298],EAX     ; 004d2a0f
    MOV dword ptr [EBX + 0x29c],ESI     ; 004d2a15
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2a1b
        ;   Label: LAB_004d2a1b
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d2a1e
    JZ 0x004d2ace                       ; 004d2a25
        ;   XREF to: 004d2ace (CONDITIONAL_JUMP)  ; LAB_004d2ace
    PUSH 0x5e1c15                       ; 004d2a2b | DAT_005e1c15
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d2a30
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d2a35
    ADD ESP,0x4                         ; 004d2a37
    MOV EDI,EAX                         ; 004d2a3a
    MOV EBX,EAX                         ; 004d2a3c
    SUB ECX,ECX                         ; 004d2a3e
    DEC ECX                             ; 004d2a40
    XOR EAX,EAX                         ; 004d2a41
    SCASB.REPNE ES:EDI                  ; 004d2a43
    NOT ECX                             ; 004d2a45
    DEC ECX                             ; 004d2a47
    MOV dword ptr [ESP + 0x9ec],ESI     ; 004d2a48
    MOV dword ptr [ESP + 0x9e8],ECX     ; 004d2a4f
    TEST ECX,ECX                        ; 004d2a56
    JLE 0x004d2a97                      ; 004d2a58
        ;   XREF to: 004d2a97 (CONDITIONAL_JUMP)  ; LAB_004d2a97
    MOV EAX,ECX                         ; 004d2a5a
    MOV EDI,EBX                         ; 004d2a5c
    NEG EAX                             ; 004d2a5e
    MOV EBX,ECX                         ; 004d2a60
    ADD ECX,EAX                         ; 004d2a62
    MOV dword ptr [ESP + 0xbe4],ECX     ; 004d2a64
    XOR EAX,EAX                         ; 004d2a6b
        ;   Label: LAB_004d2a6b
    MOV AL,byte ptr [EDI]               ; 004d2a6d
    PUSH EAX                            ; 004d2a6f
    MOVZX ESI,byte ptr [EBX + 0x1cd0c67] ; 004d2a70 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d2a77
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d2a7c
    CMP ESI,EAX                         ; 004d2a7f
    JNZ 0x004d2a8a                      ; 004d2a81
        ;   XREF to: 004d2a8a (CONDITIONAL_JUMP)  ; LAB_004d2a8a
    INC dword ptr [ESP + 0x9ec]         ; 004d2a83
    MOV EDX,dword ptr [ESP + 0xbe4]     ; 004d2a8a
        ;   Label: LAB_004d2a8a
    DEC EBX                             ; 004d2a91
    INC EDI                             ; 004d2a92
    CMP EBX,EDX                         ; 004d2a93
    JG 0x004d2a6b                       ; 004d2a95
        ;   XREF to: 004d2a6b (CONDITIONAL_JUMP)  ; LAB_004d2a6b
    MOV EAX,dword ptr [ESP + 0x9ec]     ; 004d2a97
        ;   Label: LAB_004d2a97
    CMP EAX,dword ptr [ESP + 0x9e8]     ; 004d2a9e
    JNZ 0x004d2ace                      ; 004d2aa5
        ;   XREF to: 004d2ace (CONDITIONAL_JUMP)  ; LAB_004d2ace
    XOR BH,BH                           ; 004d2aa7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2aa9
    MOV byte ptr [0x01cd0c68],BH        ; 004d2aac | DAT_01cd0c68
    MOV EBX,dword ptr [EAX + 0x228]     ; 004d2ab2
    INC EBX                             ; 004d2ab8
    MOV dword ptr [EAX + 0x228],EBX     ; 004d2ab9
    CMP EBX,0x2                         ; 004d2abf
    JLE 0x004d2ace                      ; 004d2ac2
        ;   XREF to: 004d2ace (CONDITIONAL_JUMP)  ; LAB_004d2ace
    MOV dword ptr [EAX + 0x228],0x0     ; 004d2ac4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2ace
        ;   Label: LAB_004d2ace
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d2ad1
    JZ 0x004d2bb4                       ; 004d2ad8
        ;   XREF to: 004d2bb4 (CONDITIONAL_JUMP)  ; LAB_004d2bb4
    PUSH 0x5e1c4a                       ; 004d2ade | DAT_005e1c4a
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d2ae3
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d2ae8
    ADD ESP,0x4                         ; 004d2aea
    XOR ECX,ECX                         ; 004d2aed
    MOV EDI,EAX                         ; 004d2aef
    MOV dword ptr [ESP + 0x9f4],ECX     ; 004d2af1
    SUB ECX,ECX                         ; 004d2af8
    DEC ECX                             ; 004d2afa
    XOR EAX,EAX                         ; 004d2afb
    SCASB.REPNE ES:EDI                  ; 004d2afd
    NOT ECX                             ; 004d2aff
    DEC ECX                             ; 004d2b01
    MOV dword ptr [ESP + 0x9f0],ECX     ; 004d2b02
    TEST ECX,ECX                        ; 004d2b09
    JLE 0x004d2b4a                      ; 004d2b0b
        ;   XREF to: 004d2b4a (CONDITIONAL_JUMP)  ; LAB_004d2b4a
    MOV EAX,ECX                         ; 004d2b0d
    MOV ESI,EBX                         ; 004d2b0f
    NEG EAX                             ; 004d2b11
    MOV EBX,ECX                         ; 004d2b13
    ADD ECX,EAX                         ; 004d2b15
    MOV dword ptr [ESP + 0xbe8],ECX     ; 004d2b17
    XOR EAX,EAX                         ; 004d2b1e
        ;   Label: LAB_004d2b1e
    MOV AL,byte ptr [ESI]               ; 004d2b20
    PUSH EAX                            ; 004d2b22
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d2b23 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d2b2a
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d2b2f
    CMP EDI,EAX                         ; 004d2b32
    JNZ 0x004d2b3d                      ; 004d2b34
        ;   XREF to: 004d2b3d (CONDITIONAL_JUMP)  ; LAB_004d2b3d
    INC dword ptr [ESP + 0x9f4]         ; 004d2b36
    MOV EDI,dword ptr [ESP + 0xbe8]     ; 004d2b3d
        ;   Label: LAB_004d2b3d
    DEC EBX                             ; 004d2b44
    INC ESI                             ; 004d2b45
    CMP EBX,EDI                         ; 004d2b46
    JG 0x004d2b1e                       ; 004d2b48
        ;   XREF to: 004d2b1e (CONDITIONAL_JUMP)  ; LAB_004d2b1e
    MOV EAX,dword ptr [ESP + 0x9f4]     ; 004d2b4a
        ;   Label: LAB_004d2b4a
    CMP EAX,dword ptr [ESP + 0x9f0]     ; 004d2b51
    JNZ 0x004d2bb4                      ; 004d2b58
        ;   XREF to: 004d2bb4 (CONDITIONAL_JUMP)  ; LAB_004d2bb4
    XOR CL,CL                           ; 004d2b5a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2b5c
    MOV byte ptr [0x01cd0c68],CL        ; 004d2b5f | DAT_01cd0c68
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004d2b65
    SETZ AL                             ; 004d2b6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d2b6f
    AND EAX,0xff                        ; 004d2b72
    MOV dword ptr [EBX + 0x1f4],EAX     ; 004d2b77
    JZ 0x004d40ac                       ; 004d2b7d
        ;   XREF to: 004d40ac (CONDITIONAL_JUMP)  ; LAB_004d40ac
    PUSH 0x40a00000                     ; 004d2b83
    PUSH 0x5e1c7d                       ; 004d2b88 | = "Event debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d2b8d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_004d2b8d
    ADD ESP,0x4                         ; 004d2b92
    PUSH EAX                            ; 004d2b95
    PUSH EBX                            ; 004d2b96
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d2b97
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d2b9c
    PUSH 0x5e1c9c                       ; 004d2b9f | = "cheat-1.wav"
    PUSH 0x0                            ; 004d2ba4
    MOV EAX,[0x006236b8]                ; 004d2ba6 | DAT_006236b8
    PUSH EAX                            ; 004d2bab
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d2bac
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d2bb1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2bb4
        ;   Label: LAB_004d2bb4
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d2bb7
    JZ 0x004d2cbd                       ; 004d2bbe
        ;   XREF to: 004d2cbd (CONDITIONAL_JUMP)  ; LAB_004d2cbd
    PUSH 0x5e1ca8                       ; 004d2bc4 | DAT_005e1ca8
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d2bc9
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d2bce
    ADD ESP,0x4                         ; 004d2bd0
    MOV EDI,EAX                         ; 004d2bd3
    MOV EBX,EAX                         ; 004d2bd5
    SUB ECX,ECX                         ; 004d2bd7
    DEC ECX                             ; 004d2bd9
    XOR EAX,EAX                         ; 004d2bda
    SCASB.REPNE ES:EDI                  ; 004d2bdc
    NOT ECX                             ; 004d2bde
    DEC ECX                             ; 004d2be0
    MOV dword ptr [ESP + 0x9fc],ESI     ; 004d2be1
    MOV dword ptr [ESP + 0x9f8],ECX     ; 004d2be8
    TEST ECX,ECX                        ; 004d2bef
    JLE 0x004d2c30                      ; 004d2bf1
        ;   XREF to: 004d2c30 (CONDITIONAL_JUMP)  ; LAB_004d2c30
    MOV EAX,ECX                         ; 004d2bf3
    MOV EDI,EBX                         ; 004d2bf5
    NEG EAX                             ; 004d2bf7
    MOV EBX,ECX                         ; 004d2bf9
    ADD ECX,EAX                         ; 004d2bfb
    MOV dword ptr [ESP + 0xbec],ECX     ; 004d2bfd
    XOR EAX,EAX                         ; 004d2c04
        ;   Label: LAB_004d2c04
    MOV AL,byte ptr [EDI]               ; 004d2c06
    PUSH EAX                            ; 004d2c08
    MOVZX ESI,byte ptr [EBX + 0x1cd0c67] ; 004d2c09 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d2c10
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d2c15
    CMP ESI,EAX                         ; 004d2c18
    JNZ 0x004d2c23                      ; 004d2c1a
        ;   XREF to: 004d2c23 (CONDITIONAL_JUMP)  ; LAB_004d2c23
    INC dword ptr [ESP + 0x9fc]         ; 004d2c1c
    MOV EAX,dword ptr [ESP + 0xbec]     ; 004d2c23
        ;   Label: LAB_004d2c23
    DEC EBX                             ; 004d2c2a
    INC EDI                             ; 004d2c2b
    CMP EBX,EAX                         ; 004d2c2c
    JG 0x004d2c04                       ; 004d2c2e
        ;   XREF to: 004d2c04 (CONDITIONAL_JUMP)  ; LAB_004d2c04
    MOV EAX,dword ptr [ESP + 0x9fc]     ; 004d2c30
        ;   Label: LAB_004d2c30
    CMP EAX,dword ptr [ESP + 0x9f8]     ; 004d2c37
    JNZ 0x004d2cbd                      ; 004d2c3e
        ;   XREF to: 004d2cbd (CONDITIONAL_JUMP)  ; LAB_004d2cbd
    XOR CH,CH                           ; 004d2c40
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2c42
    MOV byte ptr [0x01cd0c68],CH        ; 004d2c45 | DAT_01cd0c68
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004d2c4b
    SETZ AL                             ; 004d2c52
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d2c55
    AND EAX,0xff                        ; 004d2c58
    MOV dword ptr [EBX + 0x1f8],EAX     ; 004d2c5d
    JZ 0x004d40bb                       ; 004d2c63
        ;   XREF to: 004d40bb (CONDITIONAL_JUMP)  ; LAB_004d40bb
    PUSH 0x40a00000                     ; 004d2c69
    PUSH 0x5e1cdc                       ; 004d2c6e | = "Script debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d2c73
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d2c78
    PUSH EAX                            ; 004d2c7b
    PUSH EBX                            ; 004d2c7c
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d2c7d
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d2c82
    PUSH 0xf0                           ; 004d2c85
    PUSH 0x0                            ; 004d2c8a
    PUSH 0x0                            ; 004d2c8c
    MOV ECX,dword ptr [0x00622c18]      ; 004d2c8e | g_CDemonSetPtr
    PUSH ECX                            ; 004d2c94 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x2a8],0x1     ; 004d2c95
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0 ; 004d2c9f
        ;   XREF to: 0054fbf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
        ;   Label: LAB_004d2c9f
    ADD ESP,0x10                        ; 004d2ca4
    PUSH 0x5e1cfd                       ; 004d2ca7 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d2cac
    MOV EBX,dword ptr [0x006236b8]      ; 004d2cae | DAT_006236b8
    PUSH EBX                            ; 004d2cb4
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d2cb5
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d2cba
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2cbd
        ;   Label: LAB_004d2cbd
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d2cc0
    JZ 0x004d2da5                       ; 004d2cc7
        ;   XREF to: 004d2da5 (CONDITIONAL_JUMP)  ; LAB_004d2da5
    PUSH 0x5e1d09                       ; 004d2ccd | DAT_005e1d09
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d2cd2
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d2cd7
    ADD ESP,0x4                         ; 004d2cd9
    XOR EAX,EAX                         ; 004d2cdc
    MOV EDI,EBX                         ; 004d2cde
    MOV dword ptr [ESP + 0xa04],EAX     ; 004d2ce0
    SUB ECX,ECX                         ; 004d2ce7
    DEC ECX                             ; 004d2ce9
    XOR EAX,EAX                         ; 004d2cea
    SCASB.REPNE ES:EDI                  ; 004d2cec
    NOT ECX                             ; 004d2cee
    DEC ECX                             ; 004d2cf0
    MOV dword ptr [ESP + 0xa00],ECX     ; 004d2cf1
    TEST ECX,ECX                        ; 004d2cf8
    JLE 0x004d2d39                      ; 004d2cfa
        ;   XREF to: 004d2d39 (CONDITIONAL_JUMP)  ; LAB_004d2d39
    MOV EAX,ECX                         ; 004d2cfc
    MOV ESI,EBX                         ; 004d2cfe
    NEG EAX                             ; 004d2d00
    MOV EBX,ECX                         ; 004d2d02
    ADD ECX,EAX                         ; 004d2d04
    MOV dword ptr [ESP + 0xbf0],ECX     ; 004d2d06
    XOR EAX,EAX                         ; 004d2d0d
        ;   Label: LAB_004d2d0d
    MOV AL,byte ptr [ESI]               ; 004d2d0f
    PUSH EAX                            ; 004d2d11
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d2d12 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d2d19
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d2d1e
    CMP EDI,EAX                         ; 004d2d21
    JNZ 0x004d2d2c                      ; 004d2d23
        ;   XREF to: 004d2d2c (CONDITIONAL_JUMP)  ; LAB_004d2d2c
    INC dword ptr [ESP + 0xa04]         ; 004d2d25
    MOV EDX,dword ptr [ESP + 0xbf0]     ; 004d2d2c
        ;   Label: LAB_004d2d2c
    DEC EBX                             ; 004d2d33
    INC ESI                             ; 004d2d34
    CMP EBX,EDX                         ; 004d2d35
    JG 0x004d2d0d                       ; 004d2d37
        ;   XREF to: 004d2d0d (CONDITIONAL_JUMP)  ; LAB_004d2d0d
    MOV EAX,dword ptr [ESP + 0xa04]     ; 004d2d39
        ;   Label: LAB_004d2d39
    MOV ECX,dword ptr [ESP + 0xa00]     ; 004d2d40
    CMP EAX,ECX                         ; 004d2d47
    JNZ 0x004d2da5                      ; 004d2d49
        ;   XREF to: 004d2da5 (CONDITIONAL_JUMP)  ; LAB_004d2da5
    XOR AL,CL                           ; 004d2d4b
    MOV [0x01cd0c68],AL                 ; 004d2d4d | DAT_01cd0c68
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2d52
    CMP dword ptr [EAX + 0x214],0x0     ; 004d2d55
    SETZ AL                             ; 004d2d5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d2d5f
    AND EAX,0xff                        ; 004d2d62
    MOV dword ptr [EBX + 0x214],EAX     ; 004d2d67
    JZ 0x004d40f7                       ; 004d2d6d
        ;   XREF to: 004d40f7 (CONDITIONAL_JUMP)  ; LAB_004d40f7
    PUSH 0x40a00000                     ; 004d2d73
    PUSH 0x5e1d3d                       ; 004d2d78 | = "Memory debugging on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d2d7d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_004d2d7d
    ADD ESP,0x4                         ; 004d2d82
    PUSH EAX                            ; 004d2d85
    PUSH EBX                            ; 004d2d86
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d2d87
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d2d8c
    PUSH 0x5e1d66                       ; 004d2d8f | = "cheat-1.wav"
    PUSH 0x0                            ; 004d2d94
    MOV EDX,dword ptr [0x006236b8]      ; 004d2d96 | DAT_006236b8
    PUSH EDX                            ; 004d2d9c
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d2d9d
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d2da2
    PUSH 0x5e1d72                       ; 004d2da5 | DAT_005e1d72
        ;   Label: LAB_004d2da5
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d2daa
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d2daf
    ADD ESP,0x4                         ; 004d2db1
    MOV EDI,EAX                         ; 004d2db4
    MOV EBX,EAX                         ; 004d2db6
    SUB ECX,ECX                         ; 004d2db8
    DEC ECX                             ; 004d2dba
    XOR EAX,EAX                         ; 004d2dbb
    SCASB.REPNE ES:EDI                  ; 004d2dbd
    NOT ECX                             ; 004d2dbf
    DEC ECX                             ; 004d2dc1
    MOV dword ptr [ESP + 0xa0c],ESI     ; 004d2dc2
    MOV dword ptr [ESP + 0xa08],ECX     ; 004d2dc9
    TEST ECX,ECX                        ; 004d2dd0
    JLE 0x004d2e0f                      ; 004d2dd2
        ;   XREF to: 004d2e0f (CONDITIONAL_JUMP)  ; LAB_004d2e0f
    MOV EAX,ECX                         ; 004d2dd4
    NEG EAX                             ; 004d2dd6
    MOV EDI,ECX                         ; 004d2dd8
    ADD ECX,EAX                         ; 004d2dda
    MOV dword ptr [ESP + 0xbf4],ECX     ; 004d2ddc
    XOR EAX,EAX                         ; 004d2de3
        ;   Label: LAB_004d2de3
    MOV AL,byte ptr [EBX]               ; 004d2de5
    PUSH EAX                            ; 004d2de7
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d2de8 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d2def
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d2df4
    CMP ESI,EAX                         ; 004d2df7
    JNZ 0x004d2e02                      ; 004d2df9
        ;   XREF to: 004d2e02 (CONDITIONAL_JUMP)  ; LAB_004d2e02
    INC dword ptr [ESP + 0xa0c]         ; 004d2dfb
    MOV EAX,dword ptr [ESP + 0xbf4]     ; 004d2e02
        ;   Label: LAB_004d2e02
    DEC EDI                             ; 004d2e09
    INC EBX                             ; 004d2e0a
    CMP EDI,EAX                         ; 004d2e0b
    JG 0x004d2de3                       ; 004d2e0d
        ;   XREF to: 004d2de3 (CONDITIONAL_JUMP)  ; LAB_004d2de3
    MOV EAX,dword ptr [ESP + 0xa0c]     ; 004d2e0f
        ;   Label: LAB_004d2e0f
    MOV EDX,dword ptr [ESP + 0xa08]     ; 004d2e16
    CMP EAX,EDX                         ; 004d2e1d
    JNZ 0x004d2e86                      ; 004d2e1f
        ;   XREF to: 004d2e86 (CONDITIONAL_JUMP)  ; LAB_004d2e86
    XOR AH,DH                           ; 004d2e21
    PUSH 0x40a00000                     ; 004d2e23
    MOV byte ptr [0x01cd0c68],AH        ; 004d2e28 | DAT_01cd0c68
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2e2e
    PUSH 0x5e1da6                       ; 004d2e31 | = "Manual aim enabled"
    MOV dword ptr [EAX + 0xd8],0x2      ; 004d2e36
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d2e40
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d2e45
    PUSH EAX                            ; 004d2e48
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d2e49
    PUSH ECX                            ; 004d2e4c
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d2e4d
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d2e52
    PUSH 0x5e1db9                       ; 004d2e55 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d2e5a
    MOV EBX,dword ptr [0x006236b8]      ; 004d2e5c | DAT_006236b8
    PUSH EBX                            ; 004d2e62
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d2e63
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    MOV EAX,[0x01d06ab4]                ; 004d2e68 | DAT_01d06ab4
    ADD ESP,0xc                         ; 004d2e6d
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d2e70
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2e77
    MOV EAX,dword ptr [EAX + 0xd8]      ; 004d2e7a
    MOV dword ptr [EBX + 0x1fae4],EAX   ; 004d2e80
    PUSH 0x5e1dc5                       ; 004d2e86 | DAT_005e1dc5
        ;   Label: LAB_004d2e86
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d2e8b
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d2e90
    ADD ESP,0x4                         ; 004d2e92
    MOV EDI,EAX                         ; 004d2e95
    MOV EBX,EAX                         ; 004d2e97
    SUB ECX,ECX                         ; 004d2e99
    DEC ECX                             ; 004d2e9b
    XOR EAX,EAX                         ; 004d2e9c
    SCASB.REPNE ES:EDI                  ; 004d2e9e
    NOT ECX                             ; 004d2ea0
    DEC ECX                             ; 004d2ea2
    MOV dword ptr [ESP + 0xa14],ESI     ; 004d2ea3
    MOV dword ptr [ESP + 0xa10],ECX     ; 004d2eaa
    TEST ECX,ECX                        ; 004d2eb1
    JLE 0x004d2ef0                      ; 004d2eb3
        ;   XREF to: 004d2ef0 (CONDITIONAL_JUMP)  ; LAB_004d2ef0
    MOV EAX,ECX                         ; 004d2eb5
    NEG EAX                             ; 004d2eb7
    MOV EDI,ECX                         ; 004d2eb9
    ADD ECX,EAX                         ; 004d2ebb
    MOV dword ptr [ESP + 0xbf8],ECX     ; 004d2ebd
    XOR EAX,EAX                         ; 004d2ec4
        ;   Label: LAB_004d2ec4
    MOV AL,byte ptr [EBX]               ; 004d2ec6
    PUSH EAX                            ; 004d2ec8
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d2ec9 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d2ed0
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d2ed5
    CMP ESI,EAX                         ; 004d2ed8
    JNZ 0x004d2ee3                      ; 004d2eda
        ;   XREF to: 004d2ee3 (CONDITIONAL_JUMP)  ; LAB_004d2ee3
    INC dword ptr [ESP + 0xa14]         ; 004d2edc
    MOV EDX,dword ptr [ESP + 0xbf8]     ; 004d2ee3
        ;   Label: LAB_004d2ee3
    DEC EDI                             ; 004d2eea
    INC EBX                             ; 004d2eeb
    CMP EDI,EDX                         ; 004d2eec
    JG 0x004d2ec4                       ; 004d2eee
        ;   XREF to: 004d2ec4 (CONDITIONAL_JUMP)  ; LAB_004d2ec4
    MOV EAX,dword ptr [ESP + 0xa14]     ; 004d2ef0
        ;   Label: LAB_004d2ef0
    CMP EAX,dword ptr [ESP + 0xa10]     ; 004d2ef7
    JNZ 0x004d2f62                      ; 004d2efe
        ;   XREF to: 004d2f62 (CONDITIONAL_JUMP)  ; LAB_004d2f62
    PUSH 0x40a00000                     ; 004d2f00
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2f05
    XOR DL,DL                           ; 004d2f08
    PUSH 0x5e1df7                       ; 004d2f0a | = "Auto aim enabled"
    MOV byte ptr [0x01cd0c68],DL        ; 004d2f0f | DAT_01cd0c68
    MOV dword ptr [EAX + 0xd8],0x0      ; 004d2f15
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d2f1f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d2f24
    PUSH EAX                            ; 004d2f27
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d2f28
    PUSH EBX                            ; 004d2f2b
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d2f2c
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d2f31
    PUSH 0x5e1e08                       ; 004d2f34 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d2f39
    MOV ESI,dword ptr [0x006236b8]      ; 004d2f3b | DAT_006236b8
    PUSH ESI                            ; 004d2f41
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d2f42
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    MOV EAX,[0x01d06ab4]                ; 004d2f47 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d2f4c
    MOV EBX,dword ptr [EBX + 0xd8]      ; 004d2f53
    ADD ESP,0xc                         ; 004d2f59
    MOV dword ptr [EAX + 0x1fae4],EBX   ; 004d2f5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2f62
        ;   Label: LAB_004d2f62
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d2f65
    JZ 0x004d30ca                       ; 004d2f6c
        ;   XREF to: 004d30ca (CONDITIONAL_JUMP)  ; LAB_004d30ca
    PUSH 0x5e1e14                       ; 004d2f72 | DAT_005e1e14
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d2f77
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV ESI,EAX                         ; 004d2f7c
    ADD ESP,0x4                         ; 004d2f7e
    XOR EAX,EAX                         ; 004d2f81
    MOV EDI,ESI                         ; 004d2f83
    MOV dword ptr [ESP + 0xa1c],EAX     ; 004d2f85
    SUB ECX,ECX                         ; 004d2f8c
    DEC ECX                             ; 004d2f8e
    XOR EAX,EAX                         ; 004d2f8f
    SCASB.REPNE ES:EDI                  ; 004d2f91
    NOT ECX                             ; 004d2f93
    DEC ECX                             ; 004d2f95
    MOV dword ptr [ESP + 0xa18],ECX     ; 004d2f96
    TEST ECX,ECX                        ; 004d2f9d
    JLE 0x004d2fdc                      ; 004d2f9f
        ;   XREF to: 004d2fdc (CONDITIONAL_JUMP)  ; LAB_004d2fdc
    MOV EAX,ECX                         ; 004d2fa1
    NEG EAX                             ; 004d2fa3
    MOV EBX,ECX                         ; 004d2fa5
    ADD ECX,EAX                         ; 004d2fa7
    MOV dword ptr [ESP + 0xbfc],ECX     ; 004d2fa9
    XOR EAX,EAX                         ; 004d2fb0
        ;   Label: LAB_004d2fb0
    MOV AL,byte ptr [ESI]               ; 004d2fb2
    PUSH EAX                            ; 004d2fb4
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d2fb5 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d2fbc
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d2fc1
    CMP EDI,EAX                         ; 004d2fc4
    JNZ 0x004d2fcf                      ; 004d2fc6
        ;   XREF to: 004d2fcf (CONDITIONAL_JUMP)  ; LAB_004d2fcf
    INC dword ptr [ESP + 0xa1c]         ; 004d2fc8
    MOV ECX,dword ptr [ESP + 0xbfc]     ; 004d2fcf
        ;   Label: LAB_004d2fcf
    DEC EBX                             ; 004d2fd6
    INC ESI                             ; 004d2fd7
    CMP EBX,ECX                         ; 004d2fd8
    JG 0x004d2fb0                       ; 004d2fda
        ;   XREF to: 004d2fb0 (CONDITIONAL_JUMP)  ; LAB_004d2fb0
    MOV EAX,dword ptr [ESP + 0xa1c]     ; 004d2fdc
        ;   Label: LAB_004d2fdc
    CMP EAX,dword ptr [ESP + 0xa18]     ; 004d2fe3
    JNZ 0x004d30ca                      ; 004d2fea
        ;   XREF to: 004d30ca (CONDITIONAL_JUMP)  ; LAB_004d30ca
    PUSH 0x1                            ; 004d2ff0
    PUSH 0x43700000                     ; 004d2ff2
    PUSH 0x3e800000                     ; 004d2ff7
    PUSH 0x1                            ; 004d2ffc
    PUSH 0x61d968                       ; 004d2ffe | DAT_0061d968
    MOV EAX,[0x0061abc0]                ; 004d3003 | g_CEditorToolsPtr
    XOR DH,DH                           ; 004d3008
    PUSH 0x5e1290                       ; 004d300a | s_Enter_Movie_FPS_005e128f+1
    XOR ESI,ESI                         ; 004d300f
    MOV byte ptr [0x01cd0c68],DH        ; 004d3011 | DAT_01cd0c68
    PUSH EAX                            ; 004d3017
    MOV dword ptr [0x01cd0c3c],ESI      ; 004d3018 | DAT_01cd0c3c
    MOV dword ptr [0x01cd0c44],ESI      ; 004d301e | DAT_01cd0c44
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70 ; 004d3024
        ;   XREF to: 00495e70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d3029
    TEST EAX,EAX                        ; 004d302c
    JZ 0x004d30ca                       ; 004d302e
        ;   XREF to: 004d30ca (CONDITIONAL_JUMP)  ; LAB_004d30ca
    PUSH 0x1                            ; 004d3034
    PUSH 0x1869f                        ; 004d3036
    PUSH ESI                            ; 004d303b
    PUSH 0x1                            ; 004d303c
    PUSH 0x1cd0c40                      ; 004d303e | DAT_01cd0c40
    PUSH 0x5e12a0                       ; 004d3043 | = "Enter number of frames to record (or ..."
    MOV EDX,dword ptr [0x0061abc0]      ; 004d3048 | g_CEditorToolsPtr
    PUSH EDX                            ; 004d304e
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0 ; 004d304f
        ;   XREF to: 00495da0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d3054
    TEST EAX,EAX                        ; 004d3057
    JZ 0x004d30ca                       ; 004d3059
        ;   XREF to: 004d30ca (CONDITIONAL_JUMP)  ; LAB_004d30ca
    PUSH 0x1                            ; 004d305b
    PUSH 0x270f                         ; 004d305d
    PUSH 0x1                            ; 004d3062
    PUSH 0x1                            ; 004d3064
    PUSH 0x61d96c                       ; 004d3066 | DAT_0061d96c
    PUSH 0x5e12ea                       ; 004d306b | = "Enter image width"
    MOV ECX,dword ptr [0x0061abc0]      ; 004d3070 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d3076
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0 ; 004d3077
        ;   XREF to: 00495da0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d307c
    TEST EAX,EAX                        ; 004d307f
    JZ 0x004d30ca                       ; 004d3081
        ;   XREF to: 004d30ca (CONDITIONAL_JUMP)  ; LAB_004d30ca
    PUSH 0x1                            ; 004d3083
    PUSH 0x270f                         ; 004d3085
    PUSH 0x1                            ; 004d308a
    PUSH 0x1                            ; 004d308c
    PUSH 0x61d970                       ; 004d308e | DAT_0061d970
    PUSH 0x5e12fc                       ; 004d3093 | = "Enter image height"
    MOV EBX,dword ptr [0x0061abc0]      ; 004d3098 | g_CEditorToolsPtr
    PUSH EBX                            ; 004d309e
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0 ; 004d309f
        ;   XREF to: 00495da0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d30a4
    TEST EAX,EAX                        ; 004d30a7
    JZ 0x004d30ca                       ; 004d30a9
        ;   XREF to: 004d30ca (CONDITIONAL_JUMP)  ; LAB_004d30ca
    PUSH 0x5e130f                       ; 004d30ab | = "Press CTRL+V to begin recording."
    MOV ESI,dword ptr [0x0061abc0]      ; 004d30b0 | g_CEditorToolsPtr
    PUSH ESI                            ; 004d30b6
    MOV EDI,0x1                         ; 004d30b7
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 004d30bc
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d30c1
    MOV dword ptr [0x01cd0c38],EDI      ; 004d30c4 | DAT_01cd0c38
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d30ca
        ;   Label: LAB_004d30ca
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d30cd
    JZ 0x004d317a                       ; 004d30d4
        ;   XREF to: 004d317a (CONDITIONAL_JUMP)  ; LAB_004d317a
    PUSH 0x5e1e47                       ; 004d30da | DAT_005e1e47
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d30df
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d30e4
    ADD ESP,0x4                         ; 004d30e6
    XOR ECX,ECX                         ; 004d30e9
    MOV EDI,EAX                         ; 004d30eb
    MOV dword ptr [ESP + 0xa24],ECX     ; 004d30ed
    SUB ECX,ECX                         ; 004d30f4
    DEC ECX                             ; 004d30f6
    XOR EAX,EAX                         ; 004d30f7
    SCASB.REPNE ES:EDI                  ; 004d30f9
    NOT ECX                             ; 004d30fb
    DEC ECX                             ; 004d30fd
    MOV dword ptr [ESP + 0xa20],ECX     ; 004d30fe
    TEST ECX,ECX                        ; 004d3105
    JLE 0x004d3146                      ; 004d3107
        ;   XREF to: 004d3146 (CONDITIONAL_JUMP)  ; LAB_004d3146
    MOV EAX,ECX                         ; 004d3109
    MOV ESI,EBX                         ; 004d310b
    NEG EAX                             ; 004d310d
    MOV EBX,ECX                         ; 004d310f
    ADD ECX,EAX                         ; 004d3111
    MOV dword ptr [ESP + 0xc00],ECX     ; 004d3113
    XOR EAX,EAX                         ; 004d311a
        ;   Label: LAB_004d311a
    MOV AL,byte ptr [ESI]               ; 004d311c
    PUSH EAX                            ; 004d311e
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d311f | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3126
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d312b
    CMP EDI,EAX                         ; 004d312e
    JNZ 0x004d3139                      ; 004d3130
        ;   XREF to: 004d3139 (CONDITIONAL_JUMP)  ; LAB_004d3139
    INC dword ptr [ESP + 0xa24]         ; 004d3132
    MOV EDI,dword ptr [ESP + 0xc00]     ; 004d3139
        ;   Label: LAB_004d3139
    DEC EBX                             ; 004d3140
    INC ESI                             ; 004d3141
    CMP EBX,EDI                         ; 004d3142
    JG 0x004d311a                       ; 004d3144
        ;   XREF to: 004d311a (CONDITIONAL_JUMP)  ; LAB_004d311a
    MOV EAX,dword ptr [ESP + 0xa24]     ; 004d3146
        ;   Label: LAB_004d3146
    CMP EAX,dword ptr [ESP + 0xa20]     ; 004d314d
    JNZ 0x004d317a                      ; 004d3154
        ;   XREF to: 004d317a (CONDITIONAL_JUMP)  ; LAB_004d317a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3156
    XOR BL,BL                           ; 004d3159
    MOV ECX,dword ptr [EAX + 0x238]     ; 004d315b
    MOV byte ptr [0x01cd0c68],BL        ; 004d3161 | DAT_01cd0c68
    TEST ECX,ECX                        ; 004d3167
    SETZ AL                             ; 004d3169
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d316c
    AND EAX,0xff                        ; 004d316f
    MOV dword ptr [EBX + 0x238],EAX     ; 004d3174
    PUSH 0x5e1e7e                       ; 004d317a | DAT_005e1e7e
        ;   Label: LAB_004d317a
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d317f
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d3184
    ADD ESP,0x4                         ; 004d3186
    XOR EAX,EAX                         ; 004d3189
    MOV EDI,EBX                         ; 004d318b
    MOV dword ptr [ESP + 0xa2c],EAX     ; 004d318d
    SUB ECX,ECX                         ; 004d3194
    DEC ECX                             ; 004d3196
    XOR EAX,EAX                         ; 004d3197
    SCASB.REPNE ES:EDI                  ; 004d3199
    NOT ECX                             ; 004d319b
    DEC ECX                             ; 004d319d
    MOV dword ptr [ESP + 0xa28],ECX     ; 004d319e
    TEST ECX,ECX                        ; 004d31a5
    JLE 0x004d31e7                      ; 004d31a7
        ;   XREF to: 004d31e7 (CONDITIONAL_JUMP)  ; LAB_004d31e7
    MOV EAX,ECX                         ; 004d31a9
    NEG EAX                             ; 004d31ab
    MOV EDI,ECX                         ; 004d31ad
    ADD ECX,EAX                         ; 004d31af
    MOV ESI,EBX                         ; 004d31b1
    MOV dword ptr [ESP + 0xc04],ECX     ; 004d31b3
    XOR EAX,EAX                         ; 004d31ba
        ;   Label: LAB_004d31ba
    MOV AL,byte ptr [ESI]               ; 004d31bc
    XOR EBX,EBX                         ; 004d31be
    PUSH EAX                            ; 004d31c0
    MOV BL,byte ptr [EDI + 0x1cd0c67]   ; 004d31c1 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d31c7
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d31cc
    CMP EBX,EAX                         ; 004d31cf
    JNZ 0x004d31da                      ; 004d31d1
        ;   XREF to: 004d31da (CONDITIONAL_JUMP)  ; LAB_004d31da
    INC dword ptr [ESP + 0xa2c]         ; 004d31d3
    MOV EDX,dword ptr [ESP + 0xc04]     ; 004d31da
        ;   Label: LAB_004d31da
    DEC EDI                             ; 004d31e1
    INC ESI                             ; 004d31e2
    CMP EDI,EDX                         ; 004d31e3
    JG 0x004d31ba                       ; 004d31e5
        ;   XREF to: 004d31ba (CONDITIONAL_JUMP)  ; LAB_004d31ba
    MOV EAX,dword ptr [ESP + 0xa2c]     ; 004d31e7
        ;   Label: LAB_004d31e7
    CMP EAX,dword ptr [ESP + 0xa28]     ; 004d31ee
    JNZ 0x004d32c2                      ; 004d31f5
        ;   XREF to: 004d32c2 (CONDITIONAL_JUMP)  ; LAB_004d32c2
    MOV EAX,[0x01d06ab4]                ; 004d31fb | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d3200
    PUSH 0x5e1eb7                       ; 004d3207 | = "Skeleton_key"
    ADD EAX,0x1fae8                     ; 004d320c
    XOR BH,BH                           ; 004d3211
    PUSH EAX                            ; 004d3213
    MOV byte ptr [0x01cd0c68],BH        ; 004d3214 | DAT_01cd0c68
    CALL core_inv.cpp_FUN_004f8c40      ; 004d321a
        ;   XREF to: 004f8c40 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_FUN_004f8c40(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 004d321f
    TEST EAX,EAX                        ; 004d3222
    JNZ 0x004d32c2                      ; 004d3224
        ;   XREF to: 004d32c2 (CONDITIONAL_JUMP)  ; LAB_004d32c2
    PUSH 0x5e1ec4                       ; 004d322a | = "CKeyActor"
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 004d322f
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c2b0(char * class_name)
    ADD ESP,0x4                         ; 004d3234
    MOV EBX,EAX                         ; 004d3237
    PUSH EBX                            ; 004d3239
    MOV EAX,dword ptr [EAX + 0x154]     ; 004d323a
    MOV ESI,0x5e1ece                    ; 004d3240 | = "Skeleton_key"
    CALL dword ptr [EAX]                ; 004d3245
    ADD ESP,0x4                         ; 004d3247
    MOV EDI,EBX                         ; 004d324a
    MOV dword ptr [EBX + 0x2d4],0xffffffff ; 004d324c
    PUSH EDI                            ; 004d3256
    MOV AL,byte ptr [ESI]               ; 004d3257 | = "Skeleton_key" | s_eleton_key_005e1ece+2
        ;   Label: LAB_004d3257
    MOV byte ptr [EDI],AL               ; 004d3259
    CMP AL,0x0                          ; 004d325b
    JZ 0x004d326f                       ; 004d325d
        ;   XREF to: 004d326f (CONDITIONAL_JUMP)  ; LAB_004d326f
    MOV AL,byte ptr [ESI + 0x1]         ; 004d325f | s_keleton_key_005e1ece+1 | s_leton_key_005e1ece+3
    ADD ESI,0x2                         ; 004d3262
    MOV byte ptr [EDI + 0x1],AL         ; 004d3265
    ADD EDI,0x2                         ; 004d3268
    CMP AL,0x0                          ; 004d326b
    JNZ 0x004d3257                      ; 004d326d
        ;   XREF to: 004d3257 (CONDITIONAL_JUMP)  ; LAB_004d3257
    POP EDI                             ; 004d326f
        ;   Label: LAB_004d326f
    PUSH 0x5e1edb                       ; 004d3270 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d3275
    MOV ESI,dword ptr [0x006236b8]      ; 004d3277 | DAT_006236b8
    PUSH ESI                            ; 004d327d
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d327e
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3283
    MOV EAX,[0x01d06ab4]                ; 004d3286 | DAT_01d06ab4
    PUSH 0x1                            ; 004d328b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d328d
    PUSH EBX                            ; 004d3294
    ADD EAX,0x1fae8                     ; 004d3295
    PUSH EAX                            ; 004d329a
    CALL core_inv.cpp_FUN_004f7690      ; 004d329b
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d32a0
    PUSH 0x40a00000                     ; 004d32a3
    PUSH 0x5e1ee7                       ; 004d32a8 | = "You have the skeleton key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d32ad
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d32b2
    PUSH EAX                            ; 004d32b5
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d32b6
    PUSH EDI                            ; 004d32b9
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d32ba
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d32bf
    PUSH 0x5e1f01                       ; 004d32c2 | DAT_005e1f01
        ;   Label: LAB_004d32c2
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d32c7
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d32cc
    ADD ESP,0x4                         ; 004d32ce
    XOR EAX,EAX                         ; 004d32d1
    MOV EDI,EBX                         ; 004d32d3
    MOV dword ptr [ESP + 0xa34],EAX     ; 004d32d5
    SUB ECX,ECX                         ; 004d32dc
    DEC ECX                             ; 004d32de
    XOR EAX,EAX                         ; 004d32df
    SCASB.REPNE ES:EDI                  ; 004d32e1
    NOT ECX                             ; 004d32e3
    DEC ECX                             ; 004d32e5
    MOV dword ptr [ESP + 0xa30],ECX     ; 004d32e6
    TEST ECX,ECX                        ; 004d32ed
    JLE 0x004d332c                      ; 004d32ef
        ;   XREF to: 004d332c (CONDITIONAL_JUMP)  ; LAB_004d332c
    MOV EAX,ECX                         ; 004d32f1
    NEG EAX                             ; 004d32f3
    MOV EDI,ECX                         ; 004d32f5
    ADD ECX,EAX                         ; 004d32f7
    MOV dword ptr [ESP + 0xc08],ECX     ; 004d32f9
    XOR EAX,EAX                         ; 004d3300
        ;   Label: LAB_004d3300
    MOV AL,byte ptr [EBX]               ; 004d3302
    PUSH EAX                            ; 004d3304
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d3305 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d330c
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d3311
    CMP ESI,EAX                         ; 004d3314
    JNZ 0x004d331f                      ; 004d3316
        ;   XREF to: 004d331f (CONDITIONAL_JUMP)  ; LAB_004d331f
    INC dword ptr [ESP + 0xa34]         ; 004d3318
    MOV ECX,dword ptr [ESP + 0xc08]     ; 004d331f
        ;   Label: LAB_004d331f
    DEC EDI                             ; 004d3326
    INC EBX                             ; 004d3327
    CMP EDI,ECX                         ; 004d3328
    JG 0x004d3300                       ; 004d332a
        ;   XREF to: 004d3300 (CONDITIONAL_JUMP)  ; LAB_004d3300
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004d332c
        ;   Label: LAB_004d332c
    CMP EAX,dword ptr [ESP + 0xa30]     ; 004d3333
    JNZ 0x004d33ae                      ; 004d333a
        ;   XREF to: 004d33ae (CONDITIONAL_JUMP)  ; LAB_004d33ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d333c
    XOR CL,CL                           ; 004d333f
    MOV ESI,dword ptr [EAX + 0x1ec]     ; 004d3341
    MOV byte ptr [0x01cd0c68],CL        ; 004d3347 | DAT_01cd0c68
    TEST ESI,ESI                        ; 004d334d
    SETZ AL                             ; 004d334f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d3352
    AND EAX,0xff                        ; 004d3355
    MOV dword ptr [EBX + 0x1ec],EAX     ; 004d335a
    JZ 0x004d4106                       ; 004d3360
        ;   XREF to: 004d4106 (CONDITIONAL_JUMP)  ; LAB_004d4106
    PUSH 0x40a00000                     ; 004d3366
    PUSH 0x5e1f3a                       ; 004d336b | = "God mode enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3370
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3375
    PUSH EAX                            ; 004d3378
    PUSH EBX                            ; 004d3379
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d337a
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x01d06ab4]                ; 004d337f | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d3384
    ADD ESP,0xc                         ; 004d338b
    MOV dword ptr [EAX + 0x2538],0x42c80000 ; 004d338e
    PUSH 0x5e1f5d                       ; 004d3398 | = "cheat-1.wav"
        ;   Label: LAB_004d3398
    PUSH 0x0                            ; 004d339d
    MOV ECX,dword ptr [0x006236b8]      ; 004d339f | DAT_006236b8
    PUSH ECX                            ; 004d33a5
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d33a6
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d33ab
    PUSH 0x5e1f69                       ; 004d33ae | DAT_005e1f69
        ;   Label: LAB_004d33ae
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d33b3
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d33b8
    ADD ESP,0x4                         ; 004d33ba
    MOV EDI,EAX                         ; 004d33bd
    MOV EBX,EAX                         ; 004d33bf
    SUB ECX,ECX                         ; 004d33c1
    DEC ECX                             ; 004d33c3
    XOR EAX,EAX                         ; 004d33c4
    SCASB.REPNE ES:EDI                  ; 004d33c6
    NOT ECX                             ; 004d33c8
    DEC ECX                             ; 004d33ca
    MOV dword ptr [ESP + 0xa3c],ESI     ; 004d33cb
    MOV dword ptr [ESP + 0xa38],ECX     ; 004d33d2
    TEST ECX,ECX                        ; 004d33d9
    JLE 0x004d3418                      ; 004d33db
        ;   XREF to: 004d3418 (CONDITIONAL_JUMP)  ; LAB_004d3418
    MOV EAX,ECX                         ; 004d33dd
    NEG EAX                             ; 004d33df
    MOV EDI,ECX                         ; 004d33e1
    ADD ECX,EAX                         ; 004d33e3
    MOV dword ptr [ESP + 0xc0c],ECX     ; 004d33e5
    XOR EAX,EAX                         ; 004d33ec
        ;   Label: LAB_004d33ec
    MOV AL,byte ptr [EBX]               ; 004d33ee
    PUSH EAX                            ; 004d33f0
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d33f1 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d33f8
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d33fd
    CMP ESI,EAX                         ; 004d3400
    JNZ 0x004d340b                      ; 004d3402
        ;   XREF to: 004d340b (CONDITIONAL_JUMP)  ; LAB_004d340b
    INC dword ptr [ESP + 0xa3c]         ; 004d3404
    MOV EDX,dword ptr [ESP + 0xc0c]     ; 004d340b
        ;   Label: LAB_004d340b
    DEC EDI                             ; 004d3412
    INC EBX                             ; 004d3413
    CMP EDI,EDX                         ; 004d3414
    JG 0x004d33ec                       ; 004d3416
        ;   XREF to: 004d33ec (CONDITIONAL_JUMP)  ; LAB_004d33ec
    MOV EAX,dword ptr [ESP + 0xa3c]     ; 004d3418
        ;   Label: LAB_004d3418
    CMP EAX,dword ptr [ESP + 0xa38]     ; 004d341f
    JNZ 0x004d3484                      ; 004d3426
        ;   XREF to: 004d3484 (CONDITIONAL_JUMP)  ; LAB_004d3484
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3428
    XOR CH,CH                           ; 004d342b
    MOV EBX,dword ptr [EAX + 0x1f0]     ; 004d342d
    MOV byte ptr [0x01cd0c68],CH        ; 004d3433 | DAT_01cd0c68
    TEST EBX,EBX                        ; 004d3439
    SETZ AL                             ; 004d343b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d343e
    AND EAX,0xff                        ; 004d3441
    MOV dword ptr [EBX + 0x1f0],EAX     ; 004d3446
    JZ 0x004d4127                       ; 004d344c
        ;   XREF to: 004d4127 (CONDITIONAL_JUMP)  ; LAB_004d4127
    PUSH 0x40a00000                     ; 004d3452
    PUSH 0x5e1fa4                       ; 004d3457 | = "Enemies frozen"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d345c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_004d345c
    ADD ESP,0x4                         ; 004d3461
    PUSH EAX                            ; 004d3464
    PUSH EBX                            ; 004d3465
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d3466
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d346b
    PUSH 0x5e1fc2                       ; 004d346e | = "cheat-1.wav"
    PUSH 0x0                            ; 004d3473
    MOV EDX,dword ptr [0x006236b8]      ; 004d3475 | DAT_006236b8
    PUSH EDX                            ; 004d347b
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d347c
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3481
    PUSH 0x5e1fce                       ; 004d3484 | = "You have the shotgun"
        ;   Label: LAB_004d3484
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3489
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d348e
    PUSH 0x5e1fec                       ; 004d3491 | DAT_005e1fec
    MOV EBX,EAX                         ; 004d3496
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3498
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV ECX,0x5e1fe3                    ; 004d349d | = "CShotgun"
    MOV ESI,EAX                         ; 004d34a2
    ADD ESP,0x4                         ; 004d34a4
    MOV EDI,EAX                         ; 004d34a7
    MOV dword ptr [ESP + 0xa40],ECX     ; 004d34a9 | = "CShotgun"
    MOV dword ptr [ESP + 0xa44],EBX     ; 004d34b0
    SUB ECX,ECX                         ; 004d34b7
    DEC ECX                             ; 004d34b9
    XOR EAX,EAX                         ; 004d34ba
    SCASB.REPNE ES:EDI                  ; 004d34bc
    NOT ECX                             ; 004d34be
    DEC ECX                             ; 004d34c0
    XOR EBX,EBX                         ; 004d34c1
    MOV dword ptr [ESP + 0xa48],ECX     ; 004d34c3
    MOV dword ptr [ESP + 0xa4c],EBX     ; 004d34ca
    TEST ECX,ECX                        ; 004d34d1
    JLE 0x004d3512                      ; 004d34d3
        ;   XREF to: 004d3512 (CONDITIONAL_JUMP)  ; LAB_004d3512
    MOV EAX,ECX                         ; 004d34d5
    NEG EAX                             ; 004d34d7
    MOV EDI,ECX                         ; 004d34d9
    ADD ECX,EAX                         ; 004d34db
    MOV EBX,ESI                         ; 004d34dd
    MOV dword ptr [ESP + 0xc10],ECX     ; 004d34df
    XOR EAX,EAX                         ; 004d34e6
        ;   Label: LAB_004d34e6
    MOV AL,byte ptr [EBX]               ; 004d34e8
    PUSH EAX                            ; 004d34ea
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d34eb
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d34f2
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d34f7
    CMP ESI,EAX                         ; 004d34fa
    JNZ 0x004d3505                      ; 004d34fc
        ;   XREF to: 004d3505 (CONDITIONAL_JUMP)  ; LAB_004d3505
    INC dword ptr [ESP + 0xa4c]         ; 004d34fe
    MOV EAX,dword ptr [ESP + 0xc10]     ; 004d3505
        ;   Label: LAB_004d3505
    DEC EDI                             ; 004d350c
    INC EBX                             ; 004d350d
    CMP EDI,EAX                         ; 004d350e
    JG 0x004d34e6                       ; 004d3510
        ;   XREF to: 004d34e6 (CONDITIONAL_JUMP)  ; LAB_004d34e6
    MOV EAX,dword ptr [ESP + 0xa4c]     ; 004d3512
        ;   Label: LAB_004d3512
    MOV EDX,dword ptr [ESP + 0xa48]     ; 004d3519
    CMP EAX,EDX                         ; 004d3520
    JNZ 0x004d356d                      ; 004d3522
        ;   XREF to: 004d356d (CONDITIONAL_JUMP)  ; LAB_004d356d
    MOV ECX,dword ptr [ESP + 0xa40]     ; 004d3524
    XOR AL,DL                           ; 004d352b
    PUSH ECX                            ; 004d352d | = "CShotgun"
    MOV [0x01cd0c68],AL                 ; 004d352e | DAT_01cd0c68
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3533
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3538
    MOV EBX,dword ptr [ESP + 0xa44]     ; 004d353b
    PUSH 0x40a00000                     ; 004d3542
    PUSH EBX                            ; 004d3547
    MOV ESI,dword ptr [0x0061d95c]      ; 004d3548 | g_CGamePtr
    PUSH ESI                            ; 004d354e | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d354f
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d3554
    PUSH 0x5e1b23                       ; 004d3557 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d355c
    MOV EDI,dword ptr [0x006236b8]      ; 004d355e | DAT_006236b8
    PUSH EDI                            ; 004d3564
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3565
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d356a
    PUSH 0x5e2029                       ; 004d356d | = "You have the crossbow"
        ;   Label: LAB_004d356d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3572
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3577
    PUSH 0x5e2049                       ; 004d357a | DAT_005e2049
    MOV EBX,EAX                         ; 004d357f
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3581
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV ESI,EAX                         ; 004d3586
    ADD ESP,0x4                         ; 004d3588
    XOR EDX,EDX                         ; 004d358b
    MOV EAX,0x5e203f                    ; 004d358d | = "CCrossbow"
    MOV dword ptr [ESP + 0xa54],EBX     ; 004d3592
    MOV dword ptr [ESP + 0xa5c],EDX     ; 004d3599
    MOV EDI,ESI                         ; 004d35a0
    MOV dword ptr [ESP + 0xa50],EAX     ; 004d35a2 | = "CCrossbow"
    SUB ECX,ECX                         ; 004d35a9
    DEC ECX                             ; 004d35ab
    XOR EAX,EAX                         ; 004d35ac
    SCASB.REPNE ES:EDI                  ; 004d35ae
    NOT ECX                             ; 004d35b0
    DEC ECX                             ; 004d35b2
    MOV dword ptr [ESP + 0xa58],ECX     ; 004d35b3
    TEST ECX,ECX                        ; 004d35ba
    JLE 0x004d35fb                      ; 004d35bc
        ;   XREF to: 004d35fb (CONDITIONAL_JUMP)  ; LAB_004d35fb
    MOV EAX,ECX                         ; 004d35be
    NEG EAX                             ; 004d35c0
    MOV EDI,ECX                         ; 004d35c2
    ADD ECX,EAX                         ; 004d35c4
    MOV EBX,ESI                         ; 004d35c6
    MOV dword ptr [ESP + 0x9e4],ECX     ; 004d35c8
    XOR EAX,EAX                         ; 004d35cf
        ;   Label: LAB_004d35cf
    MOV AL,byte ptr [EBX]               ; 004d35d1
    PUSH EAX                            ; 004d35d3
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d35d4 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d35db
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d35e0
    CMP ESI,EAX                         ; 004d35e3
    JNZ 0x004d35ee                      ; 004d35e5
        ;   XREF to: 004d35ee (CONDITIONAL_JUMP)  ; LAB_004d35ee
    INC dword ptr [ESP + 0xa5c]         ; 004d35e7
    MOV ESI,dword ptr [ESP + 0x9e4]     ; 004d35ee
        ;   Label: LAB_004d35ee
    DEC EDI                             ; 004d35f5
    INC EBX                             ; 004d35f6
    CMP EDI,ESI                         ; 004d35f7
    JG 0x004d35cf                       ; 004d35f9
        ;   XREF to: 004d35cf (CONDITIONAL_JUMP)  ; LAB_004d35cf
    MOV EAX,dword ptr [ESP + 0xa5c]     ; 004d35fb
        ;   Label: LAB_004d35fb
    CMP EAX,dword ptr [ESP + 0xa58]     ; 004d3602
    JNZ 0x004d3655                      ; 004d3609
        ;   XREF to: 004d3655 (CONDITIONAL_JUMP)  ; LAB_004d3655
    XOR AH,AH                           ; 004d360b
    MOV byte ptr [0x01cd0c68],AH        ; 004d360d | DAT_01cd0c68
    MOV EAX,dword ptr [ESP + 0xa50]     ; 004d3613
    PUSH EAX                            ; 004d361a | = "CCrossbow"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d361b
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3620
    MOV EDX,dword ptr [ESP + 0xa54]     ; 004d3623
    PUSH 0x40a00000                     ; 004d362a
    PUSH EDX                            ; 004d362f
    MOV ECX,dword ptr [0x0061d95c]      ; 004d3630 | g_CGamePtr
    PUSH ECX                            ; 004d3636 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d3637
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d363c
    PUSH 0x5e1b23                       ; 004d363f | = "cheat-1.wav"
    PUSH 0x0                            ; 004d3644
    MOV EBX,dword ptr [0x006236b8]      ; 004d3646 | DAT_006236b8
    PUSH EBX                            ; 004d364c
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d364d
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3652
    PUSH 0x5e2081                       ; 004d3655 | = "DY-NO-MITE"
        ;   Label: LAB_004d3655
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d365a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d365f
    PUSH 0x5e2096                       ; 004d3662 | DAT_005e2096
    MOV EDI,0x5e208c                    ; 004d3667 | = "CDynamite"
    MOV EBX,EAX                         ; 004d366c
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d366e
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    ADD ESP,0x4                         ; 004d3673
    MOV ESI,EAX                         ; 004d3676
    MOV dword ptr [ESP + 0xa60],EDI     ; 004d3678 | = "CDynamite"
    MOV dword ptr [ESP + 0xa64],EBX     ; 004d367f
    XOR EAX,EAX                         ; 004d3686
    MOV EDI,ESI                         ; 004d3688
    MOV dword ptr [ESP + 0xa6c],EAX     ; 004d368a
    SUB ECX,ECX                         ; 004d3691
    DEC ECX                             ; 004d3693
    XOR EAX,EAX                         ; 004d3694
    SCASB.REPNE ES:EDI                  ; 004d3696
    NOT ECX                             ; 004d3698
    DEC ECX                             ; 004d369a
    MOV dword ptr [ESP + 0xa68],ECX     ; 004d369b
    TEST ECX,ECX                        ; 004d36a2
    JLE 0x004d36e3                      ; 004d36a4
        ;   XREF to: 004d36e3 (CONDITIONAL_JUMP)  ; LAB_004d36e3
    MOV EAX,ECX                         ; 004d36a6
    NEG EAX                             ; 004d36a8
    MOV EDI,ECX                         ; 004d36aa
    ADD ECX,EAX                         ; 004d36ac
    MOV EBX,ESI                         ; 004d36ae
    MOV dword ptr [ESP + 0xc14],ECX     ; 004d36b0
    XOR EAX,EAX                         ; 004d36b7
        ;   Label: LAB_004d36b7
    MOV AL,byte ptr [EBX]               ; 004d36b9
    PUSH EAX                            ; 004d36bb
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d36bc | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d36c3
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d36c8
    CMP ESI,EAX                         ; 004d36cb
    JNZ 0x004d36d6                      ; 004d36cd
        ;   XREF to: 004d36d6 (CONDITIONAL_JUMP)  ; LAB_004d36d6
    INC dword ptr [ESP + 0xa6c]         ; 004d36cf
    MOV ECX,dword ptr [ESP + 0xc14]     ; 004d36d6
        ;   Label: LAB_004d36d6
    DEC EDI                             ; 004d36dd
    INC EBX                             ; 004d36de
    CMP EDI,ECX                         ; 004d36df
    JG 0x004d36b7                       ; 004d36e1
        ;   XREF to: 004d36b7 (CONDITIONAL_JUMP)  ; LAB_004d36b7
    MOV EAX,dword ptr [ESP + 0xa6c]     ; 004d36e3
        ;   Label: LAB_004d36e3
    CMP EAX,dword ptr [ESP + 0xa68]     ; 004d36ea
    JNZ 0x004d373c                      ; 004d36f1
        ;   XREF to: 004d373c (CONDITIONAL_JUMP)  ; LAB_004d373c
    MOV ESI,dword ptr [ESP + 0xa60]     ; 004d36f3
    XOR DL,DL                           ; 004d36fa
    PUSH ESI                            ; 004d36fc | = "CDynamite"
    MOV byte ptr [0x01cd0c68],DL        ; 004d36fd | DAT_01cd0c68
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3703
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3708
    MOV EDI,dword ptr [ESP + 0xa64]     ; 004d370b
    PUSH 0x40a00000                     ; 004d3712
    PUSH EDI                            ; 004d3717
    MOV EAX,[0x0061d95c]                ; 004d3718 | g_CGamePtr
    PUSH EAX                            ; 004d371d | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d371e
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d3723
    PUSH 0x5e1b23                       ; 004d3726 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d372b
    MOV EDX,dword ptr [0x006236b8]      ; 004d372d | DAT_006236b8
    PUSH EDX                            ; 004d3733
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3734
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3739
    PUSH 0x5e20d0                       ; 004d373c | = "Fire! Fire! Fire!"
        ;   Label: LAB_004d373c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3741
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3746
    PUSH 0x5e20f0                       ; 004d3749 | DAT_005e20f0
    MOV EBX,EAX                         ; 004d374e
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3750
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV ECX,0x5e20e2                    ; 004d3755 | = "CFlameThrower"
    MOV ESI,EAX                         ; 004d375a
    ADD ESP,0x4                         ; 004d375c
    MOV EDI,EAX                         ; 004d375f
    MOV dword ptr [ESP + 0xa70],ECX     ; 004d3761 | = "CFlameThrower"
    MOV dword ptr [ESP + 0xa74],EBX     ; 004d3768
    SUB ECX,ECX                         ; 004d376f
    DEC ECX                             ; 004d3771
    XOR EAX,EAX                         ; 004d3772
    SCASB.REPNE ES:EDI                  ; 004d3774
    NOT ECX                             ; 004d3776
    DEC ECX                             ; 004d3778
    XOR EBX,EBX                         ; 004d3779
    MOV dword ptr [ESP + 0xa78],ECX     ; 004d377b
    MOV dword ptr [ESP + 0xa7c],EBX     ; 004d3782
    TEST ECX,ECX                        ; 004d3789
    JLE 0x004d37c9                      ; 004d378b
        ;   XREF to: 004d37c9 (CONDITIONAL_JUMP)  ; LAB_004d37c9
    MOV EAX,ECX                         ; 004d378d
    NEG EAX                             ; 004d378f
    MOV EDI,ECX                         ; 004d3791
    ADD ECX,EAX                         ; 004d3793
    MOV dword ptr [ESP + 0xc18],ECX     ; 004d3795
    XOR EAX,EAX                         ; 004d379c
        ;   Label: LAB_004d379c
    MOV AL,byte ptr [ESI]               ; 004d379e
    XOR EBX,EBX                         ; 004d37a0
    PUSH EAX                            ; 004d37a2
    MOV BL,byte ptr [EDI + 0x1cd0c67]   ; 004d37a3
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d37a9
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d37ae
    CMP EBX,EAX                         ; 004d37b1
    JNZ 0x004d37bc                      ; 004d37b3
        ;   XREF to: 004d37bc (CONDITIONAL_JUMP)  ; LAB_004d37bc
    INC dword ptr [ESP + 0xa7c]         ; 004d37b5
    MOV EAX,dword ptr [ESP + 0xc18]     ; 004d37bc
        ;   Label: LAB_004d37bc
    DEC EDI                             ; 004d37c3
    INC ESI                             ; 004d37c4
    CMP EDI,EAX                         ; 004d37c5
    JG 0x004d379c                       ; 004d37c7
        ;   XREF to: 004d379c (CONDITIONAL_JUMP)  ; LAB_004d379c
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 004d37c9
        ;   Label: LAB_004d37c9
    CMP EAX,dword ptr [ESP + 0xa78]     ; 004d37d0
    JNZ 0x004d3823                      ; 004d37d7
        ;   XREF to: 004d3823 (CONDITIONAL_JUMP)  ; LAB_004d3823
    MOV ECX,dword ptr [ESP + 0xa70]     ; 004d37d9
    XOR DH,DH                           ; 004d37e0
    PUSH ECX                            ; 004d37e2 | = "CFlameThrower"
    MOV byte ptr [0x01cd0c68],DH        ; 004d37e3 | DAT_01cd0c68
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d37e9
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d37ee
    MOV EBX,dword ptr [ESP + 0xa74]     ; 004d37f1
    PUSH 0x40a00000                     ; 004d37f8
    PUSH EBX                            ; 004d37fd
    MOV ESI,dword ptr [0x0061d95c]      ; 004d37fe | g_CGamePtr
    PUSH ESI                            ; 004d3804 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d3805
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d380a
    PUSH 0x5e1b23                       ; 004d380d | = "cheat-1.wav"
    PUSH 0x0                            ; 004d3812
    MOV EDI,dword ptr [0x006236b8]      ; 004d3814 | DAT_006236b8
    PUSH EDI                            ; 004d381a
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d381b
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3820
    PUSH 0x5e212c                       ; 004d3823 | = "You have the tommy gun"
        ;   Label: LAB_004d3823
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3828
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d382d
    PUSH 0x5e214d                       ; 004d3830 | DAT_005e214d
    MOV EBX,EAX                         ; 004d3835
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3837
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV ESI,EAX                         ; 004d383c
    ADD ESP,0x4                         ; 004d383e
    XOR EDX,EDX                         ; 004d3841
    MOV EAX,0x5e2143                    ; 004d3843 | = "CTommyGun"
    MOV dword ptr [ESP + 0xa84],EBX     ; 004d3848
    MOV dword ptr [ESP + 0xa8c],EDX     ; 004d384f
    MOV EDI,ESI                         ; 004d3856
    MOV dword ptr [ESP + 0xa80],EAX     ; 004d3858 | = "CTommyGun"
    SUB ECX,ECX                         ; 004d385f
    DEC ECX                             ; 004d3861
    XOR EAX,EAX                         ; 004d3862
    SCASB.REPNE ES:EDI                  ; 004d3864
    NOT ECX                             ; 004d3866
    DEC ECX                             ; 004d3868
    MOV dword ptr [ESP + 0xa88],ECX     ; 004d3869
    TEST ECX,ECX                        ; 004d3870
    JLE 0x004d38b1                      ; 004d3872
        ;   XREF to: 004d38b1 (CONDITIONAL_JUMP)  ; LAB_004d38b1
    MOV EAX,ECX                         ; 004d3874
    NEG EAX                             ; 004d3876
    MOV EDI,ECX                         ; 004d3878
    ADD ECX,EAX                         ; 004d387a
    MOV EBX,ESI                         ; 004d387c
    MOV dword ptr [ESP + 0xc1c],ECX     ; 004d387e
    XOR EAX,EAX                         ; 004d3885
        ;   Label: LAB_004d3885
    MOV AL,byte ptr [EBX]               ; 004d3887
    PUSH EAX                            ; 004d3889
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d388a | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3891
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d3896
    CMP ESI,EAX                         ; 004d3899
    JNZ 0x004d38a4                      ; 004d389b
        ;   XREF to: 004d38a4 (CONDITIONAL_JUMP)  ; LAB_004d38a4
    INC dword ptr [ESP + 0xa8c]         ; 004d389d
    MOV ESI,dword ptr [ESP + 0xc1c]     ; 004d38a4
        ;   Label: LAB_004d38a4
    DEC EDI                             ; 004d38ab
    INC EBX                             ; 004d38ac
    CMP EDI,ESI                         ; 004d38ad
    JG 0x004d3885                       ; 004d38af
        ;   XREF to: 004d3885 (CONDITIONAL_JUMP)  ; LAB_004d3885
    MOV EAX,dword ptr [ESP + 0xa8c]     ; 004d38b1
        ;   Label: LAB_004d38b1
    CMP EAX,dword ptr [ESP + 0xa88]     ; 004d38b8
    JNZ 0x004d390b                      ; 004d38bf
        ;   XREF to: 004d390b (CONDITIONAL_JUMP)  ; LAB_004d390b
    MOV EAX,dword ptr [ESP + 0xa80]     ; 004d38c1
    XOR BL,BL                           ; 004d38c8
    PUSH EAX                            ; 004d38ca | = "CTommyGun"
    MOV byte ptr [0x01cd0c68],BL        ; 004d38cb | DAT_01cd0c68
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d38d1
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d38d6
    MOV EDX,dword ptr [ESP + 0xa84]     ; 004d38d9
    PUSH 0x40a00000                     ; 004d38e0
    PUSH EDX                            ; 004d38e5
    MOV ECX,dword ptr [0x0061d95c]      ; 004d38e6 | g_CGamePtr
    PUSH ECX                            ; 004d38ec | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d38ed
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d38f2
    PUSH 0x5e1b23                       ; 004d38f5 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d38fa
    MOV EBX,dword ptr [0x006236b8]      ; 004d38fc | DAT_006236b8
    PUSH EBX                            ; 004d3902
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3903
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3908
    PUSH 0x5e2189                       ; 004d390b | = "You can now summon the baron"
        ;   Label: LAB_004d390b
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3910
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3915
    PUSH 0x5e21b3                       ; 004d3918 | DAT_005e21b3
    MOV EDI,0x5e21a6                    ; 004d391d | = "CBaronWeapon"
    MOV EBX,EAX                         ; 004d3922
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3924
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    ADD ESP,0x4                         ; 004d3929
    MOV ESI,EAX                         ; 004d392c
    MOV dword ptr [ESP + 0xa90],EDI     ; 004d392e | = "CBaronWeapon"
    MOV dword ptr [ESP + 0xa94],EBX     ; 004d3935
    XOR EAX,EAX                         ; 004d393c
    MOV EDI,ESI                         ; 004d393e
    MOV dword ptr [ESP + 0xa9c],EAX     ; 004d3940
    SUB ECX,ECX                         ; 004d3947
    DEC ECX                             ; 004d3949
    XOR EAX,EAX                         ; 004d394a
    SCASB.REPNE ES:EDI                  ; 004d394c
    NOT ECX                             ; 004d394e
    DEC ECX                             ; 004d3950
    MOV dword ptr [ESP + 0xa98],ECX     ; 004d3951
    TEST ECX,ECX                        ; 004d3958
    JLE 0x004d3998                      ; 004d395a
        ;   XREF to: 004d3998 (CONDITIONAL_JUMP)  ; LAB_004d3998
    MOV EAX,ECX                         ; 004d395c
    NEG EAX                             ; 004d395e
    MOV EDI,ECX                         ; 004d3960
    ADD ECX,EAX                         ; 004d3962
    MOV dword ptr [ESP + 0xc20],ECX     ; 004d3964
    XOR EAX,EAX                         ; 004d396b
        ;   Label: LAB_004d396b
    MOV AL,byte ptr [ESI]               ; 004d396d
    XOR EBX,EBX                         ; 004d396f
    PUSH EAX                            ; 004d3971
    MOV BL,byte ptr [EDI + 0x1cd0c67]   ; 004d3972 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3978
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d397d
    CMP EBX,EAX                         ; 004d3980
    JNZ 0x004d398b                      ; 004d3982
        ;   XREF to: 004d398b (CONDITIONAL_JUMP)  ; LAB_004d398b
    INC dword ptr [ESP + 0xa9c]         ; 004d3984
    MOV ECX,dword ptr [ESP + 0xc20]     ; 004d398b
        ;   Label: LAB_004d398b
    DEC EDI                             ; 004d3992
    INC ESI                             ; 004d3993
    CMP EDI,ECX                         ; 004d3994
    JG 0x004d396b                       ; 004d3996
        ;   XREF to: 004d396b (CONDITIONAL_JUMP)  ; LAB_004d396b
    MOV EAX,dword ptr [ESP + 0xa9c]     ; 004d3998
        ;   Label: LAB_004d3998
    CMP EAX,dword ptr [ESP + 0xa98]     ; 004d399f
    JNZ 0x004d39f1                      ; 004d39a6
        ;   XREF to: 004d39f1 (CONDITIONAL_JUMP)  ; LAB_004d39f1
    MOV ESI,dword ptr [ESP + 0xa90]     ; 004d39a8
    XOR BH,BH                           ; 004d39af
    PUSH ESI                            ; 004d39b1 | = "CBaronWeapon"
    MOV byte ptr [0x01cd0c68],BH        ; 004d39b2 | DAT_01cd0c68
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d39b8
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d39bd
    MOV EDI,dword ptr [ESP + 0xa94]     ; 004d39c0
    PUSH 0x40a00000                     ; 004d39c7
    PUSH EDI                            ; 004d39cc
    MOV EAX,[0x0061d95c]                ; 004d39cd | g_CGamePtr
    PUSH EAX                            ; 004d39d2 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d39d3
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d39d8
    PUSH 0x5e1b23                       ; 004d39db | = "cheat-1.wav"
    PUSH 0x0                            ; 004d39e0
    MOV EDX,dword ptr [0x006236b8]      ; 004d39e2 | DAT_006236b8
    PUSH EDX                            ; 004d39e8
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d39e9
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d39ee
    PUSH 0x5e21ed                       ; 004d39f1 | = "You have the elephant gun"
        ;   Label: LAB_004d39f1
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d39f6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d39fb
    PUSH 0x5e2214                       ; 004d39fe | DAT_005e2214
    MOV EBX,EAX                         ; 004d3a03
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3a05
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV ECX,0x5e2207                    ; 004d3a0a | = "CElephantGun"
    MOV ESI,EAX                         ; 004d3a0f
    ADD ESP,0x4                         ; 004d3a11
    MOV EDI,EAX                         ; 004d3a14
    MOV dword ptr [ESP + 0xaa0],ECX     ; 004d3a16 | = "CElephantGun"
    MOV dword ptr [ESP + 0xaa4],EBX     ; 004d3a1d
    SUB ECX,ECX                         ; 004d3a24
    DEC ECX                             ; 004d3a26
    XOR EAX,EAX                         ; 004d3a27
    SCASB.REPNE ES:EDI                  ; 004d3a29
    NOT ECX                             ; 004d3a2b
    DEC ECX                             ; 004d3a2d
    XOR EBX,EBX                         ; 004d3a2e
    MOV dword ptr [ESP + 0xaa8],ECX     ; 004d3a30
    MOV dword ptr [ESP + 0xaac],EBX     ; 004d3a37
    TEST ECX,ECX                        ; 004d3a3e
    JLE 0x004d3a7e                      ; 004d3a40
        ;   XREF to: 004d3a7e (CONDITIONAL_JUMP)  ; LAB_004d3a7e
    MOV EAX,ECX                         ; 004d3a42
    NEG EAX                             ; 004d3a44
    MOV EDI,ECX                         ; 004d3a46
    ADD ECX,EAX                         ; 004d3a48
    MOV dword ptr [ESP + 0xc24],ECX     ; 004d3a4a
    XOR EAX,EAX                         ; 004d3a51
        ;   Label: LAB_004d3a51
    MOV AL,byte ptr [ESI]               ; 004d3a53
    XOR EBX,EBX                         ; 004d3a55
    PUSH EAX                            ; 004d3a57
    MOV BL,byte ptr [EDI + 0x1cd0c67]   ; 004d3a58
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3a5e
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d3a63
    CMP EBX,EAX                         ; 004d3a66
    JNZ 0x004d3a71                      ; 004d3a68
        ;   XREF to: 004d3a71 (CONDITIONAL_JUMP)  ; LAB_004d3a71
    INC dword ptr [ESP + 0xaac]         ; 004d3a6a
    MOV EDX,dword ptr [ESP + 0xc24]     ; 004d3a71
        ;   Label: LAB_004d3a71
    DEC EDI                             ; 004d3a78
    INC ESI                             ; 004d3a79
    CMP EDI,EDX                         ; 004d3a7a
    JG 0x004d3a51                       ; 004d3a7c
        ;   XREF to: 004d3a51 (CONDITIONAL_JUMP)  ; LAB_004d3a51
    MOV EAX,dword ptr [ESP + 0xaac]     ; 004d3a7e
        ;   Label: LAB_004d3a7e
    CMP EAX,dword ptr [ESP + 0xaa8]     ; 004d3a85
    JNZ 0x004d3ad7                      ; 004d3a8c
        ;   XREF to: 004d3ad7 (CONDITIONAL_JUMP)  ; LAB_004d3ad7
    MOV EBX,dword ptr [ESP + 0xaa0]     ; 004d3a8e
    XOR CL,CL                           ; 004d3a95
    PUSH EBX                            ; 004d3a97 | = "CElephantGun"
    MOV byte ptr [0x01cd0c68],CL        ; 004d3a98 | DAT_01cd0c68
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3a9e
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3aa3
    MOV ESI,dword ptr [ESP + 0xaa4]     ; 004d3aa6
    PUSH 0x40a00000                     ; 004d3aad
    PUSH ESI                            ; 004d3ab2
    MOV EDI,dword ptr [0x0061d95c]      ; 004d3ab3 | g_CGamePtr
    PUSH EDI                            ; 004d3ab9 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d3aba
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d3abf
    PUSH 0x5e1b23                       ; 004d3ac2 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d3ac7
    MOV EAX,[0x006236b8]                ; 004d3ac9 | DAT_006236b8
    PUSH EAX                            ; 004d3ace
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3acf
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3ad4
    PUSH 0x5e224e                       ; 004d3ad7 | = "You have the charged radiance emitter"
        ;   Label: LAB_004d3ad7
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3adc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3ae1
    PUSH 0x5e227e                       ; 004d3ae4 | DAT_005e227e
    MOV EBX,EAX                         ; 004d3ae9
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3aeb
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EDX,0x5e2274                    ; 004d3af0 | = "CLightGun"
    MOV ESI,EAX                         ; 004d3af5
    ADD ESP,0x4                         ; 004d3af7
    MOV EDI,EAX                         ; 004d3afa
    XOR ECX,ECX                         ; 004d3afc
    MOV dword ptr [ESP + 0xab0],EDX     ; 004d3afe | = "CLightGun"
    MOV dword ptr [ESP + 0xab4],EBX     ; 004d3b05
    MOV dword ptr [ESP + 0xabc],ECX     ; 004d3b0c
    SUB ECX,ECX                         ; 004d3b13
    DEC ECX                             ; 004d3b15
    XOR EAX,EAX                         ; 004d3b16
    SCASB.REPNE ES:EDI                  ; 004d3b18
    NOT ECX                             ; 004d3b1a
    DEC ECX                             ; 004d3b1c
    MOV dword ptr [ESP + 0xab8],ECX     ; 004d3b1d
    TEST ECX,ECX                        ; 004d3b24
    JLE 0x004d3b64                      ; 004d3b26
        ;   XREF to: 004d3b64 (CONDITIONAL_JUMP)  ; LAB_004d3b64
    MOV EAX,ECX                         ; 004d3b28
    NEG EAX                             ; 004d3b2a
    MOV EDI,ECX                         ; 004d3b2c
    ADD ECX,EAX                         ; 004d3b2e
    MOV dword ptr [ESP + 0xc28],ECX     ; 004d3b30
    XOR EAX,EAX                         ; 004d3b37
        ;   Label: LAB_004d3b37
    MOV AL,byte ptr [ESI]               ; 004d3b39
    XOR EBX,EBX                         ; 004d3b3b
    PUSH EAX                            ; 004d3b3d
    MOV BL,byte ptr [EDI + 0x1cd0c67]   ; 004d3b3e | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3b44
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d3b49
    CMP EBX,EAX                         ; 004d3b4c
    JNZ 0x004d3b57                      ; 004d3b4e
        ;   XREF to: 004d3b57 (CONDITIONAL_JUMP)  ; LAB_004d3b57
    INC dword ptr [ESP + 0xabc]         ; 004d3b50
    MOV EAX,dword ptr [ESP + 0xc28]     ; 004d3b57
        ;   Label: LAB_004d3b57
    DEC EDI                             ; 004d3b5e
    INC ESI                             ; 004d3b5f
    CMP EDI,EAX                         ; 004d3b60
    JG 0x004d3b37                       ; 004d3b62
        ;   XREF to: 004d3b37 (CONDITIONAL_JUMP)  ; LAB_004d3b37
    MOV EAX,dword ptr [ESP + 0xabc]     ; 004d3b64
        ;   Label: LAB_004d3b64
    CMP EAX,dword ptr [ESP + 0xab8]     ; 004d3b6b
    JNZ 0x004d3bbe                      ; 004d3b72
        ;   XREF to: 004d3bbe (CONDITIONAL_JUMP)  ; LAB_004d3bbe
    XOR CH,CH                           ; 004d3b74
    MOV byte ptr [0x01cd0c68],CH        ; 004d3b76 | DAT_01cd0c68
    MOV ECX,dword ptr [ESP + 0xab0]     ; 004d3b7c
    PUSH ECX                            ; 004d3b83 | = "CLightGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3b84
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3b89
    MOV EBX,dword ptr [ESP + 0xab4]     ; 004d3b8c
    PUSH 0x40a00000                     ; 004d3b93
    PUSH EBX                            ; 004d3b98
    MOV ESI,dword ptr [0x0061d95c]      ; 004d3b99 | g_CGamePtr
    PUSH ESI                            ; 004d3b9f | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d3ba0
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d3ba5
    PUSH 0x5e1b23                       ; 004d3ba8 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d3bad
    MOV EDI,dword ptr [0x006236b8]      ; 004d3baf | DAT_006236b8
    PUSH EDI                            ; 004d3bb5
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3bb6
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3bbb
    PUSH 0x5e22b4                       ; 004d3bbe | DAT_005e22b4
        ;   Label: LAB_004d3bbe
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3bc3
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d3bc8
    ADD ESP,0x4                         ; 004d3bca
    XOR EAX,EAX                         ; 004d3bcd
    MOV EDI,EBX                         ; 004d3bcf
    MOV dword ptr [ESP + 0xac4],EAX     ; 004d3bd1
    SUB ECX,ECX                         ; 004d3bd8
    DEC ECX                             ; 004d3bda
    XOR EAX,EAX                         ; 004d3bdb
    SCASB.REPNE ES:EDI                  ; 004d3bdd
    NOT ECX                             ; 004d3bdf
    DEC ECX                             ; 004d3be1
    MOV dword ptr [ESP + 0xac0],ECX     ; 004d3be2
    TEST ECX,ECX                        ; 004d3be9
    JLE 0x004d3c28                      ; 004d3beb
        ;   XREF to: 004d3c28 (CONDITIONAL_JUMP)  ; LAB_004d3c28
    MOV EAX,ECX                         ; 004d3bed
    NEG EAX                             ; 004d3bef
    MOV EDI,ECX                         ; 004d3bf1
    ADD ECX,EAX                         ; 004d3bf3
    MOV dword ptr [ESP + 0xc2c],ECX     ; 004d3bf5
    XOR EAX,EAX                         ; 004d3bfc
        ;   Label: LAB_004d3bfc
    MOV AL,byte ptr [EBX]               ; 004d3bfe
    PUSH EAX                            ; 004d3c00
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d3c01 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3c08
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d3c0d
    CMP ESI,EAX                         ; 004d3c10
    JNZ 0x004d3c1b                      ; 004d3c12
        ;   XREF to: 004d3c1b (CONDITIONAL_JUMP)  ; LAB_004d3c1b
    INC dword ptr [ESP + 0xac4]         ; 004d3c14
    MOV ECX,dword ptr [ESP + 0xc2c]     ; 004d3c1b
        ;   Label: LAB_004d3c1b
    DEC EDI                             ; 004d3c22
    INC EBX                             ; 004d3c23
    CMP EDI,ECX                         ; 004d3c24
    JG 0x004d3bfc                       ; 004d3c26
        ;   XREF to: 004d3bfc (CONDITIONAL_JUMP)  ; LAB_004d3bfc
    MOV EAX,dword ptr [ESP + 0xac4]     ; 004d3c28
        ;   Label: LAB_004d3c28
    MOV EBX,dword ptr [ESP + 0xac0]     ; 004d3c2f
    CMP EAX,EBX                         ; 004d3c36
    JNZ 0x004d3dbd                      ; 004d3c38
        ;   XREF to: 004d3dbd (CONDITIONAL_JUMP)  ; LAB_004d3dbd
    MOV ESI,0x5e22f0                    ; 004d3c3e | DAT_005e22f0
    PUSH 0x31c                          ; 004d3c43
    XOR AL,BL                           ; 004d3c48
    MOV EDI,0x3                         ; 004d3c4a
    MOV [0x01cd0c68],AL                 ; 004d3c4f | DAT_01cd0c68
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d3c54
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d3c59
    TEST EAX,EAX                        ; 004d3c5c
    JZ 0x004d3c69                       ; 004d3c5e
        ;   XREF to: 004d3c69 (CONDITIONAL_JUMP)  ; LAB_004d3c69
    PUSH EAX                            ; 004d3c60
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d3c61
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004d3c66
    MOV EBX,EAX                         ; 004d3c69
        ;   Label: LAB_004d3c69
    TEST EBX,EBX                        ; 004d3c6b
    JNZ 0x004d4136                      ; 004d3c6d
        ;   XREF to: 004d4136 (CONDITIONAL_JUMP)  ; LAB_004d4136
    PUSH 0x31c                          ; 004d3c73
        ;   Label: LAB_004d3c73
    MOV EDI,0x5e22f5                    ; 004d3c78 | DAT_005e22f5
    MOV ESI,0x7                         ; 004d3c7d
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d3c82
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d3c87
    TEST EAX,EAX                        ; 004d3c8a
    JZ 0x004d3c97                       ; 004d3c8c
        ;   XREF to: 004d3c97 (CONDITIONAL_JUMP)  ; LAB_004d3c97
    PUSH EAX                            ; 004d3c8e
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d3c8f
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004d3c94
    MOV EBX,EAX                         ; 004d3c97
        ;   Label: LAB_004d3c97
    TEST EBX,EBX                        ; 004d3c99
    JNZ 0x004d418d                      ; 004d3c9b
        ;   XREF to: 004d418d (CONDITIONAL_JUMP)  ; LAB_004d418d
    PUSH 0x31c                          ; 004d3ca1
        ;   Label: LAB_004d3ca1
    MOV ESI,0x5e22fa                    ; 004d3ca6 | DAT_005e22fa
    MOV EDI,0x8                         ; 004d3cab
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d3cb0
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d3cb5
    TEST EAX,EAX                        ; 004d3cb8
    JZ 0x004d3cc5                       ; 004d3cba
        ;   XREF to: 004d3cc5 (CONDITIONAL_JUMP)  ; LAB_004d3cc5
    PUSH EAX                            ; 004d3cbc
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d3cbd
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004d3cc2
    MOV EBX,EAX                         ; 004d3cc5
        ;   Label: LAB_004d3cc5
    TEST EBX,EBX                        ; 004d3cc7
    JNZ 0x004d41e5                      ; 004d3cc9
        ;   XREF to: 004d41e5 (CONDITIONAL_JUMP)  ; LAB_004d41e5
    PUSH 0x5e22ff                       ; 004d3ccf | = "CShotgun"
        ;   Label: LAB_004d3ccf
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3cd4
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3cd9
    PUSH 0x5e2308                       ; 004d3cdc | = "CRifle"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3ce1
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3ce6
    PUSH 0x5e230f                       ; 004d3ce9 | = "CCrossbow"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3cee
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3cf3
    PUSH 0x31c                          ; 004d3cf6
    MOV ESI,0x5e2319                    ; 004d3cfb | = "CCrossbow"
    MOV EDI,0x1                         ; 004d3d00
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d3d05
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d3d0a
    TEST EAX,EAX                        ; 004d3d0d
    JZ 0x004d3d1a                       ; 004d3d0f
        ;   XREF to: 004d3d1a (CONDITIONAL_JUMP)  ; LAB_004d3d1a
    PUSH EAX                            ; 004d3d11
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d3d12
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004d3d17
    MOV EBX,EAX                         ; 004d3d1a
        ;   Label: LAB_004d3d1a
    TEST EBX,EBX                        ; 004d3d1c
    JNZ 0x004d423d                      ; 004d3d1e
        ;   XREF to: 004d423d (CONDITIONAL_JUMP)  ; LAB_004d423d
    PUSH 0x5e2323                       ; 004d3d24 | = "CDynamite"
        ;   Label: LAB_004d3d24
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3d29
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3d2e
    PUSH 0x5e232d                       ; 004d3d31 | = "CFlameThrower"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3d36
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3d3b
    PUSH 0x5e233b                       ; 004d3d3e | = "CTommyGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3d43
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3d48
    PUSH 0x5e2345                       ; 004d3d4b | = "CElephantGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3d50
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3d55
    PUSH 0x5e2352                       ; 004d3d58 | = "CLightGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004d2540 ; 004d3d5d
        ;   XREF to: 004d2540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004d2540(char * class_name)
    ADD ESP,0x4                         ; 004d3d62
    PUSH 0x40a00000                     ; 004d3d65
    PUSH 0x5e235c                       ; 004d3d6a | = "You've got all the weapons"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3d6f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3d74
    PUSH EAX                            ; 004d3d77
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d3d78
    PUSH EDX                            ; 004d3d7b
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d3d7c
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d3d81
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3d84
    PUSH 0x5e2377                       ; 004d3d87 | = "cheat-1.wav"
    MOV dword ptr [EAX + 0x1ec],0x1     ; 004d3d8c
    MOV EAX,[0x01d06ab4]                ; 004d3d96 | DAT_01d06ab4
    PUSH 0x0                            ; 004d3d9b
    MOV ECX,dword ptr [0x006236b8]      ; 004d3d9d | DAT_006236b8
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d3da3
    PUSH ECX                            ; 004d3daa
    MOV dword ptr [EAX + 0x2538],0x42c80000 ; 004d3dab
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3db5
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3dba
    PUSH 0x5e2383                       ; 004d3dbd | DAT_005e2383
        ;   Label: LAB_004d3dbd
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3dc2
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d3dc7
    ADD ESP,0x4                         ; 004d3dc9
    MOV EDI,EAX                         ; 004d3dcc
    MOV EBX,EAX                         ; 004d3dce
    SUB ECX,ECX                         ; 004d3dd0
    DEC ECX                             ; 004d3dd2
    XOR EAX,EAX                         ; 004d3dd3
    SCASB.REPNE ES:EDI                  ; 004d3dd5
    NOT ECX                             ; 004d3dd7
    DEC ECX                             ; 004d3dd9
    MOV dword ptr [ESP + 0xacc],ESI     ; 004d3dda
    MOV dword ptr [ESP + 0xac8],ECX     ; 004d3de1
    TEST ECX,ECX                        ; 004d3de8
    JLE 0x004d3e27                      ; 004d3dea
        ;   XREF to: 004d3e27 (CONDITIONAL_JUMP)  ; LAB_004d3e27
    MOV EAX,ECX                         ; 004d3dec
    NEG EAX                             ; 004d3dee
    MOV EDI,ECX                         ; 004d3df0
    ADD ECX,EAX                         ; 004d3df2
    MOV dword ptr [ESP + 0xc30],ECX     ; 004d3df4
    XOR EAX,EAX                         ; 004d3dfb
        ;   Label: LAB_004d3dfb
    MOV AL,byte ptr [EBX]               ; 004d3dfd
    PUSH EAX                            ; 004d3dff
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d3e00 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3e07
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d3e0c
    CMP ESI,EAX                         ; 004d3e0f
    JNZ 0x004d3e1a                      ; 004d3e11
        ;   XREF to: 004d3e1a (CONDITIONAL_JUMP)  ; LAB_004d3e1a
    INC dword ptr [ESP + 0xacc]         ; 004d3e13
    MOV EDX,dword ptr [ESP + 0xc30]     ; 004d3e1a
        ;   Label: LAB_004d3e1a
    DEC EDI                             ; 004d3e21
    INC EBX                             ; 004d3e22
    CMP EDI,EDX                         ; 004d3e23
    JG 0x004d3dfb                       ; 004d3e25
        ;   XREF to: 004d3dfb (CONDITIONAL_JUMP)  ; LAB_004d3dfb
    MOV EAX,dword ptr [ESP + 0xacc]     ; 004d3e27
        ;   Label: LAB_004d3e27
    MOV ECX,dword ptr [ESP + 0xac8]     ; 004d3e2e
    CMP EAX,ECX                         ; 004d3e35
    JNZ 0x004d3e93                      ; 004d3e37
        ;   XREF to: 004d3e93 (CONDITIONAL_JUMP)  ; LAB_004d3e93
    XOR AH,CH                           ; 004d3e39
    MOV byte ptr [0x01cd0c68],AH        ; 004d3e3b | DAT_01cd0c68
    MOV EAX,[0x01d06ab4]                ; 004d3e41 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d3e46
    MOV EAX,dword ptr [EAX + 0x1fe20]   ; 004d3e4d
    TEST EAX,EAX                        ; 004d3e53
    JZ 0x004d3e5e                       ; 004d3e55
        ;   XREF to: 004d3e5e (CONDITIONAL_JUMP)  ; LAB_004d3e5e
    ADD dword ptr [EAX + 0x568],0x64    ; 004d3e57
    PUSH 0x40a00000                     ; 004d3e5e
        ;   Label: LAB_004d3e5e
    PUSH 0x5e23c0                       ; 004d3e63 | = "You just got 100 more bullets"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3e68
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3e6d
    PUSH EAX                            ; 004d3e70
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d3e71
    PUSH ESI                            ; 004d3e74
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d3e75
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d3e7a
    PUSH 0x5e23de                       ; 004d3e7d | = "cheat-1.wav"
    PUSH 0x0                            ; 004d3e82
    MOV EDI,dword ptr [0x006236b8]      ; 004d3e84 | DAT_006236b8
    PUSH EDI                            ; 004d3e8a
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3e8b
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3e90
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3e93
        ;   Label: LAB_004d3e93
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d3e96
    JZ 0x004d42bf                       ; 004d3e9d
        ;   XREF to: 004d42bf (CONDITIONAL_JUMP)  ; LAB_004d42bf
    PUSH 0x5e23ea                       ; 004d3ea3 | DAT_005e23ea
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d3ea8
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d3ead
    ADD ESP,0x4                         ; 004d3eaf
    XOR ECX,ECX                         ; 004d3eb2
    MOV EDI,EAX                         ; 004d3eb4
    MOV dword ptr [ESP + 0xad4],ECX     ; 004d3eb6
    SUB ECX,ECX                         ; 004d3ebd
    DEC ECX                             ; 004d3ebf
    XOR EAX,EAX                         ; 004d3ec0
    SCASB.REPNE ES:EDI                  ; 004d3ec2
    NOT ECX                             ; 004d3ec4
    DEC ECX                             ; 004d3ec6
    MOV dword ptr [ESP + 0xad0],ECX     ; 004d3ec7
    TEST ECX,ECX                        ; 004d3ece
    JLE 0x004d3f0f                      ; 004d3ed0
        ;   XREF to: 004d3f0f (CONDITIONAL_JUMP)  ; LAB_004d3f0f
    MOV EAX,ECX                         ; 004d3ed2
    MOV ESI,EBX                         ; 004d3ed4
    NEG EAX                             ; 004d3ed6
    MOV EBX,ECX                         ; 004d3ed8
    ADD ECX,EAX                         ; 004d3eda
    MOV dword ptr [ESP + 0xc34],ECX     ; 004d3edc
    XOR EAX,EAX                         ; 004d3ee3
        ;   Label: LAB_004d3ee3
    MOV AL,byte ptr [ESI]               ; 004d3ee5
    PUSH EAX                            ; 004d3ee7
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d3ee8 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d3eef
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d3ef4
    CMP EDI,EAX                         ; 004d3ef7
    JNZ 0x004d3f02                      ; 004d3ef9
        ;   XREF to: 004d3f02 (CONDITIONAL_JUMP)  ; LAB_004d3f02
    INC dword ptr [ESP + 0xad4]         ; 004d3efb
    MOV EDI,dword ptr [ESP + 0xc34]     ; 004d3f02
        ;   Label: LAB_004d3f02
    DEC EBX                             ; 004d3f09
    INC ESI                             ; 004d3f0a
    CMP EBX,EDI                         ; 004d3f0b
    JG 0x004d3ee3                       ; 004d3f0d
        ;   XREF to: 004d3ee3 (CONDITIONAL_JUMP)  ; LAB_004d3ee3
    MOV EAX,dword ptr [ESP + 0xad4]     ; 004d3f0f
        ;   Label: LAB_004d3f0f
    CMP EAX,dword ptr [ESP + 0xad0]     ; 004d3f16
    JNZ 0x004d4294                      ; 004d3f1d
        ;   XREF to: 004d4294 (CONDITIONAL_JUMP)  ; LAB_004d4294
    XOR DL,DL                           ; 004d3f23
    MOV byte ptr [0x01cd0c68],DL        ; 004d3f25 | DAT_01cd0c68
    PUSH 0x5e241d                       ; 004d3f2b | = "cheat-1.wav"
        ;   Label: LAB_004d3f2b
    PUSH 0x0                            ; 004d3f30
    MOV ECX,dword ptr [0x006236b8]      ; 004d3f32 | DAT_006236b8
    PUSH ECX                            ; 004d3f38
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d3f39
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d3f3e
    MOV EDI,0x61d8f0                    ; 004d3f41 | DAT_0061d8f0
    PUSH 0x1                            ; 004d3f46
        ;   Label: LAB_004d3f46
    PUSH 0x64                           ; 004d3f48
    PUSH EDI                            ; 004d3f4a | DAT_0061d8f0
    PUSH 0x5e2429                       ; 004d3f4b | = "Raise an event"
    MOV EAX,[0x0061abc0]                ; 004d3f50 | g_CEditorToolsPtr
    PUSH EAX                            ; 004d3f55
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 ; 004d3f56
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004d3f5b
    TEST EAX,EAX                        ; 004d3f5e
    JZ 0x004d42bf                       ; 004d3f60
        ;   XREF to: 004d42bf (CONDITIONAL_JUMP)  ; LAB_004d42bf
    PUSH EDI                            ; 004d3f66 | DAT_0061d8f0
    MOV EDX,dword ptr [0x0061b4d0]      ; 004d3f67 | DAT_0061b4d0
    PUSH EDX                            ; 004d3f6d
    CALL core_event.cpp_CEventList_validateCommands_FUN_004a6cd0 ; 004d3f6e
        ;   XREF to: 004a6cd0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_004a6cd0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d3f73
    TEST EAX,EAX                        ; 004d3f76
    JZ 0x004d442a                       ; 004d3f78
        ;   XREF to: 004d442a (CONDITIONAL_JUMP)  ; LAB_004d442a
    PUSH EAX                            ; 004d3f7e
    MOV ECX,dword ptr [0x0061abc0]      ; 004d3f7f | g_CEditorToolsPtr
    PUSH ECX                            ; 004d3f85
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004d3f86
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d3f8b
    JMP 0x004d3f46                      ; 004d3f8e
        ;   XREF to: 004d3f46 (UNCONDITIONAL_JUMP)  ; LAB_004d3f46
    PUSH 0x44                           ; 004d3f90
        ;   Label: LAB_004d3f90
    MOV EAX,[0x0061f2a4]                ; 004d3f92 | DAT_0061f2a4
    PUSH EAX                            ; 004d3f97 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 004d3f98 | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 004d3f9a
    ADD ESP,0x8                         ; 004d3f9d
    TEST EAX,EAX                        ; 004d3fa0
    JZ 0x004d2850                       ; 004d3fa2
        ;   XREF to: 004d2850 (CONDITIONAL_JUMP)  ; LAB_004d2850
    PUSH 0x0                            ; 004d3fa8
    PUSH 0x64                           ; 004d3faa
    LEA EAX,[ESP + 0x918]               ; 004d3fac
    PUSH EAX                            ; 004d3fb3
    PUSH 0x5e1b67                       ; 004d3fb4 | = "Enter cheat code"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d3fb9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d3fbe
    PUSH EAX                            ; 004d3fc1
    MOV ECX,dword ptr [0x0061abc0]      ; 004d3fc2 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d3fc8
    CALL shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00496180 ; 004d3fc9
        ;   XREF to: 00496180 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00496180(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004d3fce
    TEST EAX,EAX                        ; 004d3fd1
    JZ 0x004d2850                       ; 004d3fd3
        ;   XREF to: 004d2850 (CONDITIONAL_JUMP)  ; LAB_004d2850
    MOV AH,byte ptr [ESP + 0x910]       ; 004d3fd9
    XOR EBX,EBX                         ; 004d3fe0
    TEST AH,AH                          ; 004d3fe2
    JZ 0x004d2850                       ; 004d3fe4
        ;   XREF to: 004d2850 (CONDITIONAL_JUMP)  ; LAB_004d2850
    XOR EAX,EAX                         ; 004d3fea
        ;   Label: LAB_004d3fea
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x910] ; 004d3fec
    PUSH EAX                            ; 004d3ff3
    CALL wincore_winrun.cpp_enqueueInput_FUN_005b25b0 ; 004d3ff4
        ;   XREF to: 005b25b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_005b25b0(int input_value)
    ADD ESP,0x4                         ; 004d3ff9
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x911] ; 004d3ffc
    INC EBX                             ; 004d4003
    TEST DL,DL                          ; 004d4004
    JNZ 0x004d3fea                      ; 004d4006
        ;   XREF to: 004d3fea (CONDITIONAL_JUMP)  ; LAB_004d3fea
    JMP 0x004d2850                      ; 004d4008
        ;   XREF to: 004d2850 (UNCONDITIONAL_JUMP)  ; LAB_004d2850
    INC dword ptr [ESP + 0x9d8]         ; 004d400d
        ;   Label: LAB_004d400d
    JMP 0x004d28f3                      ; 004d4014
        ;   XREF to: 004d28f3 (UNCONDITIONAL_JUMP)  ; LAB_004d28f3
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d4019
        ;   Label: LAB_004d4019
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d401c
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EDI,dword ptr [EBX + 0x298]     ; 004d4021
    SUB EAX,EDI                         ; 004d4027
    MOV dword ptr [ESP + 0xcac],EAX     ; 004d4029
    FILD dword ptr [ESP + 0xcac]        ; 004d4030
    FMUL double ptr [0x005e2e7c]        ; 004d4037 | DAT_005e2e7c
    MOV dword ptr [EBX + 0x224],0x0     ; 004d403d
    MOV EAX,EBX                         ; 004d4047
    FMUL double ptr [0x005e2e84]        ; 004d4049 | DAT_005e2e84
    FILD dword ptr [EAX + 0x29c]        ; 004d404f
    FXCH                                ; 004d4055
    FSTP double ptr [ESP + 0x9c8]       ; 004d4057
    FDIV double ptr [ESP + 0x9c8]       ; 004d405e
    FSTP double ptr [ESP + 0x9c8]       ; 004d4065
    MOV EAX,dword ptr [ESP + 0x9cc]     ; 004d406c
    PUSH EAX                            ; 004d4073
    MOV EDX,dword ptr [ESP + 0x9cc]     ; 004d4074
    PUSH EDX                            ; 004d407b
    PUSH 0x5e1c09                       ; 004d407c | = "FPS: %3.2lf"
    LEA EAX,[ESP + 0x81c]               ; 004d4081
    PUSH EAX                            ; 004d4088
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004d4089
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d408e
    LEA EAX,[ESP + 0x810]               ; 004d4091
    PUSH 0x40a00000                     ; 004d4098
    PUSH EAX                            ; 004d409d
    PUSH EBX                            ; 004d409e
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d409f
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d40a4
    JMP 0x004d2a1b                      ; 004d40a7
        ;   XREF to: 004d2a1b (UNCONDITIONAL_JUMP)  ; LAB_004d2a1b
    PUSH 0x40a00000                     ; 004d40ac
        ;   Label: LAB_004d40ac
    PUSH 0x5e1c8c                       ; 004d40b1 | = "Event debug off"
    JMP 0x004d2b8d                      ; 004d40b6
        ;   XREF to: 004d2b8d (UNCONDITIONAL_JUMP)  ; LAB_004d2b8d
    PUSH 0x40a00000                     ; 004d40bb
        ;   Label: LAB_004d40bb
    PUSH 0x5e1cec                       ; 004d40c0 | = "Script debug off"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d40c5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d40ca
    PUSH EAX                            ; 004d40cd
    PUSH EBX                            ; 004d40ce
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d40cf
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d40d4
    MOV EDI,dword ptr [0x0061b49c]      ; 004d40d7 | DAT_0061b49c
    PUSH EDI                            ; 004d40dd
    PUSH 0x0                            ; 004d40de
    PUSH 0x0                            ; 004d40e0
    MOV EAX,[0x00622c18]                ; 004d40e2 | g_CDemonSetPtr
    PUSH EAX                            ; 004d40e7 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x2a8],0x0     ; 004d40e8
    JMP 0x004d2c9f                      ; 004d40f2
        ;   XREF to: 004d2c9f (UNCONDITIONAL_JUMP)  ; LAB_004d2c9f
    PUSH 0x40a00000                     ; 004d40f7
        ;   Label: LAB_004d40f7
    PUSH 0x5e1d51                       ; 004d40fc | = "Memory debugging off"
    JMP 0x004d2d7d                      ; 004d4101
        ;   XREF to: 004d2d7d (UNCONDITIONAL_JUMP)  ; LAB_004d2d7d
    PUSH 0x40a00000                     ; 004d4106
        ;   Label: LAB_004d4106
    PUSH 0x5e1f4b                       ; 004d410b | = "God mode disabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d4110
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d4115
    PUSH EAX                            ; 004d4118
    PUSH EBX                            ; 004d4119
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d411a
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d411f
    JMP 0x004d3398                      ; 004d4122
        ;   XREF to: 004d3398 (UNCONDITIONAL_JUMP)  ; LAB_004d3398
    PUSH 0x40a00000                     ; 004d4127
        ;   Label: LAB_004d4127
    PUSH 0x5e1fb3                       ; 004d412c | = "Enemies thawed"
    JMP 0x004d345c                      ; 004d4131
        ;   XREF to: 004d345c (UNCONDITIONAL_JUMP)  ; LAB_004d345c
    PUSH EBX                            ; 004d4136
        ;   Label: LAB_004d4136
    MOV EAX,[0x0061f650]                ; 004d4137 | DAT_0061f650
    PUSH EAX                            ; 004d413c | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d413d
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d4142
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4145
    PUSH EBX                            ; 004d414b
    CALL dword ptr [EAX]                ; 004d414c
    ADD ESP,0x4                         ; 004d414e
    PUSH ESI                            ; 004d4151 | DAT_005e22f0
    PUSH EBX                            ; 004d4152
    MOV dword ptr [EBX + 0x318],EDI     ; 004d4153
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d4159
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d415e
    MOV EAX,[0x01d06ab4]                ; 004d4161 | DAT_01d06ab4
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d4166
    PUSH 0x1                            ; 004d4170
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d4172
    PUSH EBX                            ; 004d4179
    ADD EAX,0x1fae8                     ; 004d417a
    PUSH EAX                            ; 004d417f
    CALL core_inv.cpp_FUN_004f7690      ; 004d4180
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d4185
    JMP 0x004d3c73                      ; 004d4188
        ;   XREF to: 004d3c73 (UNCONDITIONAL_JUMP)  ; LAB_004d3c73
    PUSH EBX                            ; 004d418d
        ;   Label: LAB_004d418d
    MOV EDX,dword ptr [0x0061f650]      ; 004d418e | DAT_0061f650
    PUSH EDX                            ; 004d4194 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d4195
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d419a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d419d
    PUSH EBX                            ; 004d41a3
    CALL dword ptr [EAX]                ; 004d41a4
    ADD ESP,0x4                         ; 004d41a6
    PUSH EDI                            ; 004d41a9 | DAT_005e22f5
    PUSH EBX                            ; 004d41aa
    MOV dword ptr [EBX + 0x318],ESI     ; 004d41ab
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d41b1
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d41b6
    MOV EAX,[0x01d06ab4]                ; 004d41b9 | DAT_01d06ab4
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d41be
    PUSH 0x1                            ; 004d41c8
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d41ca
    PUSH EBX                            ; 004d41d1
    ADD EAX,0x1fae8                     ; 004d41d2
    PUSH EAX                            ; 004d41d7
    CALL core_inv.cpp_FUN_004f7690      ; 004d41d8
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d41dd
    JMP 0x004d3ca1                      ; 004d41e0
        ;   XREF to: 004d3ca1 (UNCONDITIONAL_JUMP)  ; LAB_004d3ca1
    PUSH EBX                            ; 004d41e5
        ;   Label: LAB_004d41e5
    MOV ECX,dword ptr [0x0061f650]      ; 004d41e6 | DAT_0061f650
    PUSH ECX                            ; 004d41ec | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d41ed
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d41f2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d41f5
    PUSH EBX                            ; 004d41fb
    CALL dword ptr [EAX]                ; 004d41fc
    ADD ESP,0x4                         ; 004d41fe
    PUSH ESI                            ; 004d4201 | DAT_005e22fa
    PUSH EBX                            ; 004d4202
    MOV dword ptr [EBX + 0x318],EDI     ; 004d4203
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d4209
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d420e
    MOV EAX,[0x01d06ab4]                ; 004d4211 | DAT_01d06ab4
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d4216
    PUSH 0x1                            ; 004d4220
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d4222
    PUSH EBX                            ; 004d4229
    ADD EAX,0x1fae8                     ; 004d422a
    PUSH EAX                            ; 004d422f
    CALL core_inv.cpp_FUN_004f7690      ; 004d4230
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d4235
    JMP 0x004d3ccf                      ; 004d4238
        ;   XREF to: 004d3ccf (UNCONDITIONAL_JUMP)  ; LAB_004d3ccf
    PUSH EBX                            ; 004d423d
        ;   Label: LAB_004d423d
    MOV EAX,[0x0061f650]                ; 004d423e | DAT_0061f650
    PUSH EAX                            ; 004d4243 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d4244
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d4249
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d424c
    PUSH EBX                            ; 004d4252
    CALL dword ptr [EAX]                ; 004d4253
    ADD ESP,0x4                         ; 004d4255
    PUSH ESI                            ; 004d4258 | = "CCrossbow"
    PUSH EBX                            ; 004d4259
    MOV dword ptr [EBX + 0x318],EDI     ; 004d425a
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d4260
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d4265
    MOV EAX,[0x01d06ab4]                ; 004d4268 | DAT_01d06ab4
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d426d
    PUSH 0x1                            ; 004d4277
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d4279
    PUSH EBX                            ; 004d4280
    ADD EAX,0x1fae8                     ; 004d4281
    PUSH EAX                            ; 004d4286
    CALL core_inv.cpp_FUN_004f7690      ; 004d4287
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d428c
    JMP 0x004d3d24                      ; 004d428f
        ;   XREF to: 004d3d24 (UNCONDITIONAL_JUMP)  ; LAB_004d3d24
    PUSH 0x1d                           ; 004d4294
        ;   Label: LAB_004d4294
    MOV EAX,[0x0061f2a4]                ; 004d4296 | DAT_0061f2a4
    PUSH EAX                            ; 004d429b | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 004d429c | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 004d429e
    ADD ESP,0x8                         ; 004d42a0
    TEST EAX,EAX                        ; 004d42a3
    JZ 0x004d42bf                       ; 004d42a5
        ;   XREF to: 004d42bf (CONDITIONAL_JUMP)  ; LAB_004d42bf
    PUSH 0x13                           ; 004d42a7
    MOV EAX,[0x0061f2a4]                ; 004d42a9 | DAT_0061f2a4
    PUSH EAX                            ; 004d42ae | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 004d42af | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 004d42b1
    ADD ESP,0x8                         ; 004d42b4
    TEST EAX,EAX                        ; 004d42b7
    JNZ 0x004d3f2b                      ; 004d42b9
        ;   XREF to: 004d3f2b (CONDITIONAL_JUMP)  ; LAB_004d3f2b
    PUSH 0x5e2438                       ; 004d42bf | DAT_005e2438
        ;   Label: LAB_004d42bf
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d42c4
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d42c9
    ADD ESP,0x4                         ; 004d42cb
    MOV EDI,EAX                         ; 004d42ce
    MOV EBX,EAX                         ; 004d42d0
    SUB ECX,ECX                         ; 004d42d2
    DEC ECX                             ; 004d42d4
    XOR EAX,EAX                         ; 004d42d5
    SCASB.REPNE ES:EDI                  ; 004d42d7
    NOT ECX                             ; 004d42d9
    DEC ECX                             ; 004d42db
    MOV dword ptr [ESP + 0xadc],ESI     ; 004d42dc
    MOV dword ptr [ESP + 0xad8],ECX     ; 004d42e3
    TEST ECX,ECX                        ; 004d42ea
    JLE 0x004d432b                      ; 004d42ec
        ;   XREF to: 004d432b (CONDITIONAL_JUMP)  ; LAB_004d432b
    MOV EAX,ECX                         ; 004d42ee
    MOV ESI,EBX                         ; 004d42f0
    NEG EAX                             ; 004d42f2
    MOV EBX,ECX                         ; 004d42f4
    ADD ECX,EAX                         ; 004d42f6
    MOV dword ptr [ESP + 0xc38],ECX     ; 004d42f8
    XOR EAX,EAX                         ; 004d42ff
        ;   Label: LAB_004d42ff
    MOV AL,byte ptr [ESI]               ; 004d4301
    PUSH EAX                            ; 004d4303
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d4304 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d430b
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4310
    CMP EDI,EAX                         ; 004d4313
    JNZ 0x004d431e                      ; 004d4315
        ;   XREF to: 004d431e (CONDITIONAL_JUMP)  ; LAB_004d431e
    INC dword ptr [ESP + 0xadc]         ; 004d4317
    MOV EDI,dword ptr [ESP + 0xc38]     ; 004d431e
        ;   Label: LAB_004d431e
    DEC EBX                             ; 004d4325
    INC ESI                             ; 004d4326
    CMP EBX,EDI                         ; 004d4327
    JG 0x004d42ff                       ; 004d4329
        ;   XREF to: 004d42ff (CONDITIONAL_JUMP)  ; LAB_004d42ff
    MOV EAX,dword ptr [ESP + 0xadc]     ; 004d432b
        ;   Label: LAB_004d432b
    CMP EAX,dword ptr [ESP + 0xad8]     ; 004d4332
    JNZ 0x004d4479                      ; 004d4339
        ;   XREF to: 004d4479 (CONDITIONAL_JUMP)  ; LAB_004d4479
    PUSH 0x5e246e                       ; 004d433f | = "cheat-1.wav"
    PUSH 0x0                            ; 004d4344
    MOV ECX,dword ptr [0x006236b8]      ; 004d4346 | DAT_006236b8
    XOR DH,DH                           ; 004d434c
    PUSH ECX                            ; 004d434e
    XOR EBX,EBX                         ; 004d434f
    MOV byte ptr [0x01cd0c68],DH        ; 004d4351 | DAT_01cd0c68
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d4357
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d435c
    MOV dword ptr [ESP + 0xca8],EBX     ; 004d435f
    MOV dword ptr [ESP + 0xc3c],EBX     ; 004d4366
    MOV EBX,dword ptr [0x00622c18]      ; 004d436d | g_CDemonSetPtr
        ;   Label: LAB_004d436d
    MOV EAX,dword ptr [ESP + 0xca8]     ; 004d4373
    CMP EAX,dword ptr [EBX + 0x150fec]  ; 004d437a | g_CDemonSetInstance.enemy_count
    JGE 0x004d4479                      ; 004d4380
        ;   XREF to: 004d4479 (CONDITIONAL_JUMP)  ; LAB_004d4479
    ADD EBX,dword ptr [ESP + 0xc3c]     ; 004d4386
    MOV EAX,[0x01d06ab4]                ; 004d438d | DAT_01d06ab4
    MOV EBX,dword ptr [EBX + 0x150ff0]  ; 004d4392
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d4398
    LEA ESI,[EBX + 0x20]                ; 004d439f
    FLD float ptr [EAX + 0x20]          ; 004d43a2
    FSUB float ptr [ESI]                ; 004d43a5
    FSTP float ptr [ESP + 0x9b0]        ; 004d43a7
    FLD float ptr [EAX + 0x24]          ; 004d43ae
    FSUB float ptr [ESI + 0x4]          ; 004d43b1
    LEA EDI,[ESP + 0x9bc]               ; 004d43b4
    FSTP float ptr [ESP + 0x9b4]        ; 004d43bb
    FLD float ptr [EAX + 0x28]          ; 004d43c2
    FSUB float ptr [ESI + 0x8]          ; 004d43c5
    LEA ESI,[ESP + 0x9b0]               ; 004d43c8
    FSTP float ptr [ESP + 0x9b8]        ; 004d43cf
    MOVSD ES:EDI,ESI                    ; 004d43d6
    MOVSD ES:EDI,ESI                    ; 004d43d7
    MOVSD ES:EDI,ESI                    ; 004d43d8
    FLD float ptr [ESP + 0x9c0]         ; 004d43d9
    FMUL ST0                            ; 004d43e0
    FLD float ptr [ESP + 0x9bc]         ; 004d43e2
    FMUL ST0                            ; 004d43e9
    FADDP                               ; 004d43eb
    FLD float ptr [ESP + 0x9c4]         ; 004d43ed
    FMUL ST0                            ; 004d43f4
    FADDP                               ; 004d43f6
    FSQRT                               ; 004d43f8
    FCOMP double ptr [0x005e2e8c]       ; 004d43fa | DAT_005e2e8c
    FNSTSW AX                           ; 004d4400
    SAHF                                ; 004d4402
    JBE 0x004d4443                      ; 004d4403
        ;   XREF to: 004d4443 (CONDITIONAL_JUMP)  ; LAB_004d4443
    MOV EAX,dword ptr [ESP + 0xca8]     ; 004d4405
        ;   Label: LAB_004d4405
    MOV EDI,dword ptr [ESP + 0xc3c]     ; 004d440c
    INC EAX                             ; 004d4413
    ADD EDI,0x4                         ; 004d4414
    MOV dword ptr [ESP + 0xca8],EAX     ; 004d4417
    MOV dword ptr [ESP + 0xc3c],EDI     ; 004d441e
    JMP 0x004d436d                      ; 004d4425
        ;   XREF to: 004d436d (UNCONDITIONAL_JUMP)  ; LAB_004d436d
    PUSH 0x61d8f0                       ; 004d442a | DAT_0061d8f0
        ;   Label: LAB_004d442a
    MOV EBX,dword ptr [0x0061b4d0]      ; 004d442f | DAT_0061b4d0
    PUSH EBX                            ; 004d4435
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004d4436
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d443b
    JMP 0x004d42bf                      ; 004d443e
        ;   XREF to: 004d42bf (UNCONDITIONAL_JUMP)  ; LAB_004d42bf
    LEA EAX,[ESP + 0x974]               ; 004d4443
        ;   Label: LAB_004d4443
    PUSH EAX                            ; 004d444a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004d444b
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004d4450
    LEA EAX,[ESP + 0x974]               ; 004d4453
    MOV ESI,0x447a0000                  ; 004d445a
    PUSH EAX                            ; 004d445f
    MOV dword ptr [ESP + 0x97c],ESI     ; 004d4460
    PUSH EBX                            ; 004d4467
    MOV ESI,dword ptr [EBX + 0x154]     ; 004d4468
    CALL dword ptr [ESI + 0x108]        ; 004d446e
    ADD ESP,0x8                         ; 004d4474
    JMP 0x004d4405                      ; 004d4477
        ;   XREF to: 004d4405 (UNCONDITIONAL_JUMP)  ; LAB_004d4405
    PUSH 0x5e247a                       ; 004d4479 | DAT_005e247a
        ;   Label: LAB_004d4479
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d447e
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d4483
    ADD ESP,0x4                         ; 004d4485
    MOV EDI,EAX                         ; 004d4488
    XOR EDX,EDX                         ; 004d448a
    SUB ECX,ECX                         ; 004d448c
    DEC ECX                             ; 004d448e
    XOR EAX,EAX                         ; 004d448f
    SCASB.REPNE ES:EDI                  ; 004d4491
    NOT ECX                             ; 004d4493
    DEC ECX                             ; 004d4495
    MOV dword ptr [ESP + 0xae4],EDX     ; 004d4496
    MOV dword ptr [ESP + 0xae0],ECX     ; 004d449d
    TEST ECX,ECX                        ; 004d44a4
    JLE 0x004d44e3                      ; 004d44a6
        ;   XREF to: 004d44e3 (CONDITIONAL_JUMP)  ; LAB_004d44e3
    MOV EAX,ECX                         ; 004d44a8
    NEG EAX                             ; 004d44aa
    MOV EDI,ECX                         ; 004d44ac
    ADD ECX,EAX                         ; 004d44ae
    MOV dword ptr [ESP + 0xc40],ECX     ; 004d44b0
    XOR EAX,EAX                         ; 004d44b7
        ;   Label: LAB_004d44b7
    MOV AL,byte ptr [EBX]               ; 004d44b9
    PUSH EAX                            ; 004d44bb
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d44bc | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d44c3
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d44c8
    CMP ESI,EAX                         ; 004d44cb
    JNZ 0x004d44d6                      ; 004d44cd
        ;   XREF to: 004d44d6 (CONDITIONAL_JUMP)  ; LAB_004d44d6
    INC dword ptr [ESP + 0xae4]         ; 004d44cf
    MOV ECX,dword ptr [ESP + 0xc40]     ; 004d44d6
        ;   Label: LAB_004d44d6
    DEC EDI                             ; 004d44dd
    INC EBX                             ; 004d44de
    CMP EDI,ECX                         ; 004d44df
    JG 0x004d44b7                       ; 004d44e1
        ;   XREF to: 004d44b7 (CONDITIONAL_JUMP)  ; LAB_004d44b7
    MOV EAX,dword ptr [ESP + 0xae4]     ; 004d44e3
        ;   Label: LAB_004d44e3
    CMP EAX,dword ptr [ESP + 0xae0]     ; 004d44ea
    JNZ 0x004d454f                      ; 004d44f1
        ;   XREF to: 004d454f (CONDITIONAL_JUMP)  ; LAB_004d454f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d44f3
    XOR BL,BL                           ; 004d44f6
    MOV ESI,dword ptr [EAX + 0x1fc]     ; 004d44f8
    MOV byte ptr [0x01cd0c68],BL        ; 004d44fe | DAT_01cd0c68
    TEST ESI,ESI                        ; 004d4504
    SETZ AL                             ; 004d4506
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d4509
    AND EAX,0xff                        ; 004d450c
    MOV dword ptr [EBX + 0x1fc],EAX     ; 004d4511
    JZ 0x004d4df8                       ; 004d4517
        ;   XREF to: 004d4df8 (CONDITIONAL_JUMP)  ; LAB_004d4df8
    PUSH 0x40a00000                     ; 004d451d
    PUSH 0x5e24b2                       ; 004d4522 | = "Gratuitous dismemberment enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d4527
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_004d4527
    ADD ESP,0x4                         ; 004d452c
    PUSH EAX                            ; 004d452f
    PUSH EBX                            ; 004d4530
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d4531
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d4536
    PUSH 0x5e24f5                       ; 004d4539 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d453e
    MOV ECX,dword ptr [0x006236b8]      ; 004d4540 | DAT_006236b8
    PUSH ECX                            ; 004d4546
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d4547
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d454c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d454f
        ;   Label: LAB_004d454f
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d4552
    JZ 0x004d462e                       ; 004d4559
        ;   XREF to: 004d462e (CONDITIONAL_JUMP)  ; LAB_004d462e
    PUSH 0x5e2501                       ; 004d455f | DAT_005e2501
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d4564
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR EDI,EDI                         ; 004d4569
    ADD ESP,0x4                         ; 004d456b
    MOV dword ptr [ESP + 0xaec],EDI     ; 004d456e
    MOV EDI,EAX                         ; 004d4575
    MOV ESI,EAX                         ; 004d4577
    SUB ECX,ECX                         ; 004d4579
    DEC ECX                             ; 004d457b
    XOR EAX,EAX                         ; 004d457c
    SCASB.REPNE ES:EDI                  ; 004d457e
    NOT ECX                             ; 004d4580
    DEC ECX                             ; 004d4582
    MOV dword ptr [ESP + 0xae8],ECX     ; 004d4583
    TEST ECX,ECX                        ; 004d458a
    JLE 0x004d45c9                      ; 004d458c
        ;   XREF to: 004d45c9 (CONDITIONAL_JUMP)  ; LAB_004d45c9
    MOV EAX,ECX                         ; 004d458e
    NEG EAX                             ; 004d4590
    MOV EBX,ECX                         ; 004d4592
    ADD ECX,EAX                         ; 004d4594
    MOV dword ptr [ESP + 0xc44],ECX     ; 004d4596
    XOR EAX,EAX                         ; 004d459d
        ;   Label: LAB_004d459d
    MOV AL,byte ptr [ESI]               ; 004d459f
    PUSH EAX                            ; 004d45a1
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d45a2 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d45a9
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d45ae
    CMP EDI,EAX                         ; 004d45b1
    JNZ 0x004d45bc                      ; 004d45b3
        ;   XREF to: 004d45bc (CONDITIONAL_JUMP)  ; LAB_004d45bc
    INC dword ptr [ESP + 0xaec]         ; 004d45b5
    MOV EDX,dword ptr [ESP + 0xc44]     ; 004d45bc
        ;   Label: LAB_004d45bc
    DEC EBX                             ; 004d45c3
    INC ESI                             ; 004d45c4
    CMP EBX,EDX                         ; 004d45c5
    JG 0x004d459d                       ; 004d45c7
        ;   XREF to: 004d459d (CONDITIONAL_JUMP)  ; LAB_004d459d
    MOV EAX,dword ptr [ESP + 0xaec]     ; 004d45c9
        ;   Label: LAB_004d45c9
    CMP EAX,dword ptr [ESP + 0xae8]     ; 004d45d0
    JNZ 0x004d462e                      ; 004d45d7
        ;   XREF to: 004d462e (CONDITIONAL_JUMP)  ; LAB_004d462e
    PUSH 0x5e2533                       ; 004d45d9 | = "cheat-1.wav"
    XOR BH,BH                           ; 004d45de
    PUSH 0x0                            ; 004d45e0
    MOV byte ptr [0x01cd0c68],BH        ; 004d45e2 | DAT_01cd0c68
    MOV EBX,dword ptr [0x006236b8]      ; 004d45e8 | DAT_006236b8
    PUSH EBX                            ; 004d45ee
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d45ef
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d45f4
    PUSH 0x1                            ; 004d45f7
    PUSH 0x40800000                     ; 004d45f9
    PUSH 0x3c23d70a                     ; 004d45fe
    PUSH 0x1                            ; 004d4603
    MOV ESI,dword ptr [ESP + 0xb00]     ; 004d4605
    PUSH ESI                            ; 004d460c
    PUSH 0x5e253f                       ; 004d460d | = "Enter time factor"
    MOV EDI,dword ptr [0x0061abc0]      ; 004d4612 | g_CEditorToolsPtr
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4618
    PUSH EDI                            ; 004d461b
    MOV dword ptr [EAX + 0x280],0x2     ; 004d461c
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70 ; 004d4626
        ;   XREF to: 00495e70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d462b
    PUSH 0x5e2551                       ; 004d462e | DAT_005e2551
        ;   Label: LAB_004d462e
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d4633
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d4638
    ADD ESP,0x4                         ; 004d463a
    MOV EDI,EAX                         ; 004d463d
    XOR EDX,EDX                         ; 004d463f
    SUB ECX,ECX                         ; 004d4641
    DEC ECX                             ; 004d4643
    XOR EAX,EAX                         ; 004d4644
    SCASB.REPNE ES:EDI                  ; 004d4646
    NOT ECX                             ; 004d4648
    DEC ECX                             ; 004d464a
    MOV dword ptr [ESP + 0xaf8],EDX     ; 004d464b
    MOV dword ptr [ESP + 0xaf4],ECX     ; 004d4652
    TEST ECX,ECX                        ; 004d4659
    JLE 0x004d4698                      ; 004d465b
        ;   XREF to: 004d4698 (CONDITIONAL_JUMP)  ; LAB_004d4698
    MOV EAX,ECX                         ; 004d465d
    NEG EAX                             ; 004d465f
    MOV EDI,ECX                         ; 004d4661
    ADD ECX,EAX                         ; 004d4663
    MOV dword ptr [ESP + 0xc48],ECX     ; 004d4665
    XOR EAX,EAX                         ; 004d466c
        ;   Label: LAB_004d466c
    MOV AL,byte ptr [EBX]               ; 004d466e
    PUSH EAX                            ; 004d4670
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d4671 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d4678
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d467d
    CMP ESI,EAX                         ; 004d4680
    JNZ 0x004d468b                      ; 004d4682
        ;   XREF to: 004d468b (CONDITIONAL_JUMP)  ; LAB_004d468b
    INC dword ptr [ESP + 0xaf8]         ; 004d4684
    MOV ECX,dword ptr [ESP + 0xc48]     ; 004d468b
        ;   Label: LAB_004d468b
    DEC EDI                             ; 004d4692
    INC EBX                             ; 004d4693
    CMP EDI,ECX                         ; 004d4694
    JG 0x004d466c                       ; 004d4696
        ;   XREF to: 004d466c (CONDITIONAL_JUMP)  ; LAB_004d466c
    MOV EAX,dword ptr [ESP + 0xaf8]     ; 004d4698
        ;   Label: LAB_004d4698
    CMP EAX,dword ptr [ESP + 0xaf4]     ; 004d469f
    JNZ 0x004d46e1                      ; 004d46a6
        ;   XREF to: 004d46e1 (CONDITIONAL_JUMP)  ; LAB_004d46e1
    PUSH 0x5e2584                       ; 004d46a8 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d46ad
    MOV ESI,dword ptr [0x006236b8]      ; 004d46af | DAT_006236b8
    XOR CL,CL                           ; 004d46b5
    PUSH ESI                            ; 004d46b7
    MOV byte ptr [0x01cd0c68],CL        ; 004d46b8 | DAT_01cd0c68
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d46be
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d46c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d46c6
    CMP dword ptr [EAX + 0x20c],0x0     ; 004d46c9
    SETZ AL                             ; 004d46d0
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d46d3
    AND EAX,0xff                        ; 004d46d6
    MOV dword ptr [EBX + 0x20c],EAX     ; 004d46db
    PUSH 0x5e2590                       ; 004d46e1 | DAT_005e2590
        ;   Label: LAB_004d46e1
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d46e6
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d46eb
    ADD ESP,0x4                         ; 004d46ed
    XOR EAX,EAX                         ; 004d46f0
    MOV EDI,EBX                         ; 004d46f2
    MOV dword ptr [ESP + 0xb00],EAX     ; 004d46f4
    SUB ECX,ECX                         ; 004d46fb
    DEC ECX                             ; 004d46fd
    XOR EAX,EAX                         ; 004d46fe
    SCASB.REPNE ES:EDI                  ; 004d4700
    NOT ECX                             ; 004d4702
    DEC ECX                             ; 004d4704
    MOV dword ptr [ESP + 0xafc],ECX     ; 004d4705
    TEST ECX,ECX                        ; 004d470c
    JLE 0x004d474b                      ; 004d470e
        ;   XREF to: 004d474b (CONDITIONAL_JUMP)  ; LAB_004d474b
    MOV EAX,ECX                         ; 004d4710
    NEG EAX                             ; 004d4712
    MOV EDI,ECX                         ; 004d4714
    ADD ECX,EAX                         ; 004d4716
    MOV dword ptr [ESP + 0xc4c],ECX     ; 004d4718
    XOR EAX,EAX                         ; 004d471f
        ;   Label: LAB_004d471f
    MOV AL,byte ptr [EBX]               ; 004d4721
    PUSH EAX                            ; 004d4723
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d4724 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d472b
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4730
    CMP ESI,EAX                         ; 004d4733
    JNZ 0x004d473e                      ; 004d4735
        ;   XREF to: 004d473e (CONDITIONAL_JUMP)  ; LAB_004d473e
    INC dword ptr [ESP + 0xb00]         ; 004d4737
    MOV ECX,dword ptr [ESP + 0xc4c]     ; 004d473e
        ;   Label: LAB_004d473e
    DEC EDI                             ; 004d4745
    INC EBX                             ; 004d4746
    CMP EDI,ECX                         ; 004d4747
    JG 0x004d471f                       ; 004d4749
        ;   XREF to: 004d471f (CONDITIONAL_JUMP)  ; LAB_004d471f
    MOV EAX,dword ptr [ESP + 0xb00]     ; 004d474b
        ;   Label: LAB_004d474b
    CMP EAX,dword ptr [ESP + 0xafc]     ; 004d4752
    JNZ 0x004d4794                      ; 004d4759
        ;   XREF to: 004d4794 (CONDITIONAL_JUMP)  ; LAB_004d4794
    PUSH 0x5e25c3                       ; 004d475b | = "cheat-1.wav"
    PUSH 0x0                            ; 004d4760
    MOV ESI,dword ptr [0x006236b8]      ; 004d4762 | DAT_006236b8
    XOR CH,CH                           ; 004d4768
    PUSH ESI                            ; 004d476a
    MOV byte ptr [0x01cd0c68],CH        ; 004d476b | DAT_01cd0c68
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d4771
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d4776
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4779
    CMP dword ptr [EAX + 0x210],0x0     ; 004d477c
    SETZ AL                             ; 004d4783
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d4786
    AND EAX,0xff                        ; 004d4789
    MOV dword ptr [EBX + 0x210],EAX     ; 004d478e
    PUSH 0x5e25cf                       ; 004d4794 | DAT_005e25cf
        ;   Label: LAB_004d4794
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d4799
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d479e
    ADD ESP,0x4                         ; 004d47a0
    XOR EAX,EAX                         ; 004d47a3
    MOV EDI,EBX                         ; 004d47a5
    MOV dword ptr [ESP + 0xb08],EAX     ; 004d47a7
    SUB ECX,ECX                         ; 004d47ae
    DEC ECX                             ; 004d47b0
    XOR EAX,EAX                         ; 004d47b1
    SCASB.REPNE ES:EDI                  ; 004d47b3
    NOT ECX                             ; 004d47b5
    DEC ECX                             ; 004d47b7
    MOV dword ptr [ESP + 0xb04],ECX     ; 004d47b8
    TEST ECX,ECX                        ; 004d47bf
    JLE 0x004d47fe                      ; 004d47c1
        ;   XREF to: 004d47fe (CONDITIONAL_JUMP)  ; LAB_004d47fe
    MOV EAX,ECX                         ; 004d47c3
    NEG EAX                             ; 004d47c5
    MOV EDI,ECX                         ; 004d47c7
    ADD ECX,EAX                         ; 004d47c9
    MOV dword ptr [ESP + 0xc50],ECX     ; 004d47cb
    XOR EAX,EAX                         ; 004d47d2
        ;   Label: LAB_004d47d2
    MOV AL,byte ptr [EBX]               ; 004d47d4
    PUSH EAX                            ; 004d47d6
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d47d7 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d47de
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d47e3
    CMP ESI,EAX                         ; 004d47e6
    JNZ 0x004d47f1                      ; 004d47e8
        ;   XREF to: 004d47f1 (CONDITIONAL_JUMP)  ; LAB_004d47f1
    INC dword ptr [ESP + 0xb08]         ; 004d47ea
    MOV ECX,dword ptr [ESP + 0xc50]     ; 004d47f1
        ;   Label: LAB_004d47f1
    DEC EDI                             ; 004d47f8
    INC EBX                             ; 004d47f9
    CMP EDI,ECX                         ; 004d47fa
    JG 0x004d47d2                       ; 004d47fc
        ;   XREF to: 004d47d2 (CONDITIONAL_JUMP)  ; LAB_004d47d2
    MOV EAX,dword ptr [ESP + 0xb08]     ; 004d47fe
        ;   Label: LAB_004d47fe
    MOV EBX,dword ptr [ESP + 0xb04]     ; 004d4805
    CMP EAX,EBX                         ; 004d480c
    JNZ 0x004d4879                      ; 004d480e
        ;   XREF to: 004d4879 (CONDITIONAL_JUMP)  ; LAB_004d4879
    XOR AL,BL                           ; 004d4810
    MOV [0x01cd0c68],AL                 ; 004d4812 | DAT_01cd0c68
    MOV EAX,[0x01d06ab4]                ; 004d4817 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d481c
    MOV EBX,dword ptr [EAX + 0x1fe20]   ; 004d4823
    TEST EBX,EBX                        ; 004d4829
    JZ 0x004d4863                       ; 004d482b
        ;   XREF to: 004d4863 (CONDITIONAL_JUMP)  ; LAB_004d4863
    CMP dword ptr [EBX + 0x56c],0x5     ; 004d482d
    JNZ 0x004d4e07                      ; 004d4834
        ;   XREF to: 004d4e07 (CONDITIONAL_JUMP)  ; LAB_004d4e07
    PUSH 0x40a00000                     ; 004d483a
    PUSH 0x5e260a                       ; 004d483f | = "Flaming ammo disabled"
    MOV dword ptr [EBX + 0x56c],0x0     ; 004d4844
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d484e
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d4853
    PUSH EAX                            ; 004d4856
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d4857
    PUSH EDX                            ; 004d485a
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d485b
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
        ;   Label: LAB_004d485b
    ADD ESP,0xc                         ; 004d4860
    PUSH 0x5e266f                       ; 004d4863 | = "cheat-1.wav"
        ;   Label: LAB_004d4863
    PUSH 0x0                            ; 004d4868
    MOV ECX,dword ptr [0x006236b8]      ; 004d486a | DAT_006236b8
    PUSH ECX                            ; 004d4870
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d4871
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d4876
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4879
        ;   Label: LAB_004d4879
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d487c
    JZ 0x004d4935                       ; 004d4883
        ;   XREF to: 004d4935 (CONDITIONAL_JUMP)  ; LAB_004d4935
    PUSH 0x5e267b                       ; 004d4889 | DAT_005e267b
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d488e
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR EDI,EDI                         ; 004d4893
    ADD ESP,0x4                         ; 004d4895
    MOV dword ptr [ESP + 0xb10],EDI     ; 004d4898
    MOV EDI,EAX                         ; 004d489f
    MOV ESI,EAX                         ; 004d48a1
    SUB ECX,ECX                         ; 004d48a3
    DEC ECX                             ; 004d48a5
    XOR EAX,EAX                         ; 004d48a6
    SCASB.REPNE ES:EDI                  ; 004d48a8
    NOT ECX                             ; 004d48aa
    DEC ECX                             ; 004d48ac
    MOV dword ptr [ESP + 0xb0c],ECX     ; 004d48ad
    TEST ECX,ECX                        ; 004d48b4
    JLE 0x004d48f3                      ; 004d48b6
        ;   XREF to: 004d48f3 (CONDITIONAL_JUMP)  ; LAB_004d48f3
    MOV EAX,ECX                         ; 004d48b8
    NEG EAX                             ; 004d48ba
    MOV EBX,ECX                         ; 004d48bc
    ADD ECX,EAX                         ; 004d48be
    MOV dword ptr [ESP + 0xc54],ECX     ; 004d48c0
    XOR EAX,EAX                         ; 004d48c7
        ;   Label: LAB_004d48c7
    MOV AL,byte ptr [ESI]               ; 004d48c9
    PUSH EAX                            ; 004d48cb
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d48cc | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d48d3
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d48d8
    CMP EDI,EAX                         ; 004d48db
    JNZ 0x004d48e6                      ; 004d48dd
        ;   XREF to: 004d48e6 (CONDITIONAL_JUMP)  ; LAB_004d48e6
    INC dword ptr [ESP + 0xb10]         ; 004d48df
    MOV EDX,dword ptr [ESP + 0xc54]     ; 004d48e6
        ;   Label: LAB_004d48e6
    DEC EBX                             ; 004d48ed
    INC ESI                             ; 004d48ee
    CMP EBX,EDX                         ; 004d48ef
    JG 0x004d48c7                       ; 004d48f1
        ;   XREF to: 004d48c7 (CONDITIONAL_JUMP)  ; LAB_004d48c7
    MOV EAX,dword ptr [ESP + 0xb10]     ; 004d48f3
        ;   Label: LAB_004d48f3
    MOV ECX,dword ptr [ESP + 0xb0c]     ; 004d48fa
    CMP EAX,ECX                         ; 004d4901
    JNZ 0x004d4935                      ; 004d4903
        ;   XREF to: 004d4935 (CONDITIONAL_JUMP)  ; LAB_004d4935
    PUSH 0xff00ff                       ; 004d4905
    XOR AH,CH                           ; 004d490a
    PUSH 0x1fe37ec                      ; 004d490c
    MOV byte ptr [0x01cd0c68],AH        ; 004d4911 | DAT_01cd0c68
    CALL core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0 ; 004d4917
        ;   XREF to: 004548f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0(CDemonCamera * this_ptr, int clear_color)
    ADD ESP,0x8                         ; 004d491c
    PUSH 0x5e26ae                       ; 004d491f | = "cheat-1.wav"
    PUSH 0x0                            ; 004d4924
    MOV EBX,dword ptr [0x006236b8]      ; 004d4926 | DAT_006236b8
    PUSH EBX                            ; 004d492c
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d492d
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d4932
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4935
        ;   Label: LAB_004d4935
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d4938
    JZ 0x004d49e7                       ; 004d493f
        ;   XREF to: 004d49e7 (CONDITIONAL_JUMP)  ; LAB_004d49e7
    PUSH 0x5e26ba                       ; 004d4945 | DAT_005e26ba
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d494a
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d494f
    ADD ESP,0x4                         ; 004d4951
    XOR ECX,ECX                         ; 004d4954
    MOV EDI,EAX                         ; 004d4956
    MOV dword ptr [ESP + 0xb18],ECX     ; 004d4958
    SUB ECX,ECX                         ; 004d495f
    DEC ECX                             ; 004d4961
    XOR EAX,EAX                         ; 004d4962
    SCASB.REPNE ES:EDI                  ; 004d4964
    NOT ECX                             ; 004d4966
    DEC ECX                             ; 004d4968
    MOV dword ptr [ESP + 0xb14],ECX     ; 004d4969
    TEST ECX,ECX                        ; 004d4970
    JLE 0x004d49b1                      ; 004d4972
        ;   XREF to: 004d49b1 (CONDITIONAL_JUMP)  ; LAB_004d49b1
    MOV EAX,ECX                         ; 004d4974
    MOV ESI,EBX                         ; 004d4976
    NEG EAX                             ; 004d4978
    MOV EBX,ECX                         ; 004d497a
    ADD ECX,EAX                         ; 004d497c
    MOV dword ptr [ESP + 0xc58],ECX     ; 004d497e
    XOR EAX,EAX                         ; 004d4985
        ;   Label: LAB_004d4985
    MOV AL,byte ptr [ESI]               ; 004d4987
    PUSH EAX                            ; 004d4989
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d498a | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d4991
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4996
    CMP EDI,EAX                         ; 004d4999
    JNZ 0x004d49a4                      ; 004d499b
        ;   XREF to: 004d49a4 (CONDITIONAL_JUMP)  ; LAB_004d49a4
    INC dword ptr [ESP + 0xb18]         ; 004d499d
    MOV EDI,dword ptr [ESP + 0xc58]     ; 004d49a4
        ;   Label: LAB_004d49a4
    DEC EBX                             ; 004d49ab
    INC ESI                             ; 004d49ac
    CMP EBX,EDI                         ; 004d49ad
    JG 0x004d4985                       ; 004d49af
        ;   XREF to: 004d4985 (CONDITIONAL_JUMP)  ; LAB_004d4985
    MOV EAX,dword ptr [ESP + 0xb18]     ; 004d49b1
        ;   Label: LAB_004d49b1
    CMP EAX,dword ptr [ESP + 0xb14]     ; 004d49b8
    JNZ 0x004d49e7                      ; 004d49bf
        ;   XREF to: 004d49e7 (CONDITIONAL_JUMP)  ; LAB_004d49e7
    PUSH 0x0                            ; 004d49c1
    MOV EAX,[0x00622c18]                ; 004d49c3 | g_CDemonSetPtr
    XOR DL,DL                           ; 004d49c8
    PUSH 0x1fe37ec                      ; 004d49ca
    MOV byte ptr [0x01cd0c68],DL        ; 004d49cf | DAT_01cd0c68
    MOV dword ptr [EAX + 0x14d150],0x0  ; 004d49d5 | g_CDemonSetInstance.min_ambient_value
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540 ; 004d49df
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 004d49e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d49e7
        ;   Label: LAB_004d49e7
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d49ea
    JZ 0x004d4ab9                       ; 004d49f1
        ;   XREF to: 004d4ab9 (CONDITIONAL_JUMP)  ; LAB_004d4ab9
    PUSH 0x5e26ec                       ; 004d49f7 | DAT_005e26ec
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d49fc
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d4a01
    ADD ESP,0x4                         ; 004d4a03
    MOV EDI,EAX                         ; 004d4a06
    MOV EBX,EAX                         ; 004d4a08
    SUB ECX,ECX                         ; 004d4a0a
    DEC ECX                             ; 004d4a0c
    XOR EAX,EAX                         ; 004d4a0d
    SCASB.REPNE ES:EDI                  ; 004d4a0f
    NOT ECX                             ; 004d4a11
    DEC ECX                             ; 004d4a13
    MOV dword ptr [ESP + 0xb20],ESI     ; 004d4a14
    MOV dword ptr [ESP + 0xb1c],ECX     ; 004d4a1b
    TEST ECX,ECX                        ; 004d4a22
    JLE 0x004d4a63                      ; 004d4a24
        ;   XREF to: 004d4a63 (CONDITIONAL_JUMP)  ; LAB_004d4a63
    MOV EAX,ECX                         ; 004d4a26
    MOV ESI,EBX                         ; 004d4a28
    NEG EAX                             ; 004d4a2a
    MOV EBX,ECX                         ; 004d4a2c
    ADD ECX,EAX                         ; 004d4a2e
    MOV dword ptr [ESP + 0x9d0],ECX     ; 004d4a30
    XOR EAX,EAX                         ; 004d4a37
        ;   Label: LAB_004d4a37
    MOV AL,byte ptr [ESI]               ; 004d4a39
    PUSH EAX                            ; 004d4a3b
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d4a3c | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d4a43
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4a48
    CMP EDI,EAX                         ; 004d4a4b
    JNZ 0x004d4a56                      ; 004d4a4d
        ;   XREF to: 004d4a56 (CONDITIONAL_JUMP)  ; LAB_004d4a56
    INC dword ptr [ESP + 0xb20]         ; 004d4a4f
    MOV EDI,dword ptr [ESP + 0x9d0]     ; 004d4a56
        ;   Label: LAB_004d4a56
    DEC EBX                             ; 004d4a5d
    INC ESI                             ; 004d4a5e
    CMP EBX,EDI                         ; 004d4a5f
    JG 0x004d4a37                       ; 004d4a61
        ;   XREF to: 004d4a37 (CONDITIONAL_JUMP)  ; LAB_004d4a37
    MOV EAX,dword ptr [ESP + 0xb20]     ; 004d4a63
        ;   Label: LAB_004d4a63
    CMP EAX,dword ptr [ESP + 0xb1c]     ; 004d4a6a
    JNZ 0x004d4ab9                      ; 004d4a71
        ;   XREF to: 004d4ab9 (CONDITIONAL_JUMP)  ; LAB_004d4ab9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4a73
    XOR DH,DH                           ; 004d4a76
    MOV ECX,dword ptr [EAX + 0x21c]     ; 004d4a78
    MOV byte ptr [0x01cd0c68],DH        ; 004d4a7e | DAT_01cd0c68
    TEST ECX,ECX                        ; 004d4a84
    SETZ AL                             ; 004d4a86
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d4a89
    AND EAX,0xff                        ; 004d4a8c
    MOV dword ptr [EBX + 0x21c],EAX     ; 004d4a91
    JZ 0x004d4e5b                       ; 004d4a97
        ;   XREF to: 004d4e5b (CONDITIONAL_JUMP)  ; LAB_004d4e5b
    PUSH 0x40a00000                     ; 004d4a9d
    PUSH 0x5e271e                       ; 004d4aa2 | = "Single step enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d4aa7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_004d4aa7
    ADD ESP,0x4                         ; 004d4aac
    PUSH EAX                            ; 004d4aaf
    PUSH EBX                            ; 004d4ab0
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d4ab1
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d4ab6
    PUSH 0x5e2747                       ; 004d4ab9 | DAT_005e2747
        ;   Label: LAB_004d4ab9
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d4abe
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d4ac3
    ADD ESP,0x4                         ; 004d4ac5
    MOV EDI,EAX                         ; 004d4ac8
    XOR EDX,EDX                         ; 004d4aca
    SUB ECX,ECX                         ; 004d4acc
    DEC ECX                             ; 004d4ace
    XOR EAX,EAX                         ; 004d4acf
    SCASB.REPNE ES:EDI                  ; 004d4ad1
    NOT ECX                             ; 004d4ad3
    DEC ECX                             ; 004d4ad5
    MOV dword ptr [ESP + 0xb28],EDX     ; 004d4ad6
    MOV dword ptr [ESP + 0xb24],ECX     ; 004d4add
    TEST ECX,ECX                        ; 004d4ae4
    JLE 0x004d4b23                      ; 004d4ae6
        ;   XREF to: 004d4b23 (CONDITIONAL_JUMP)  ; LAB_004d4b23
    MOV EAX,ECX                         ; 004d4ae8
    NEG EAX                             ; 004d4aea
    MOV EDI,ECX                         ; 004d4aec
    ADD ECX,EAX                         ; 004d4aee
    MOV dword ptr [ESP + 0xc5c],ECX     ; 004d4af0
    XOR EAX,EAX                         ; 004d4af7
        ;   Label: LAB_004d4af7
    MOV AL,byte ptr [EBX]               ; 004d4af9
    PUSH EAX                            ; 004d4afb
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d4afc | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d4b03
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4b08
    CMP ESI,EAX                         ; 004d4b0b
    JNZ 0x004d4b16                      ; 004d4b0d
        ;   XREF to: 004d4b16 (CONDITIONAL_JUMP)  ; LAB_004d4b16
    INC dword ptr [ESP + 0xb28]         ; 004d4b0f
    MOV ECX,dword ptr [ESP + 0xc5c]     ; 004d4b16
        ;   Label: LAB_004d4b16
    DEC EDI                             ; 004d4b1d
    INC EBX                             ; 004d4b1e
    CMP EDI,ECX                         ; 004d4b1f
    JG 0x004d4af7                       ; 004d4b21
        ;   XREF to: 004d4af7 (CONDITIONAL_JUMP)  ; LAB_004d4af7
    MOV EAX,dword ptr [ESP + 0xb28]     ; 004d4b23
        ;   Label: LAB_004d4b23
    CMP EAX,dword ptr [ESP + 0xb24]     ; 004d4b2a
    JNZ 0x004d4b86                      ; 004d4b31
        ;   XREF to: 004d4b86 (CONDITIONAL_JUMP)  ; LAB_004d4b86
    MOV EAX,[0x01d06ab4]                ; 004d4b33 | DAT_01d06ab4
    PUSH 0x40a00000                     ; 004d4b38
    XOR BL,BL                           ; 004d4b3d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d4b3f
    PUSH 0x5e277d                       ; 004d4b46 | = "Flashlight battery restored"
    MOV byte ptr [0x01cd0c68],BL        ; 004d4b4b | DAT_01cd0c68
    MOV dword ptr [EAX + 0x1fae8],0x42c80000 ; 004d4b51
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d4b5b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d4b60
    PUSH EAX                            ; 004d4b63
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d4b64
    PUSH ESI                            ; 004d4b67
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d4b68
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d4b6d
    PUSH 0x5e2799                       ; 004d4b70 | = "cheat-1.wav"
    PUSH 0x0                            ; 004d4b75
    MOV EDI,dword ptr [0x006236b8]      ; 004d4b77 | DAT_006236b8
    PUSH EDI                            ; 004d4b7d
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d4b7e
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d4b83
    PUSH 0x5e27a5                       ; 004d4b86 | DAT_005e27a5
        ;   Label: LAB_004d4b86
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d4b8b
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d4b90
    ADD ESP,0x4                         ; 004d4b92
    XOR EAX,EAX                         ; 004d4b95
    MOV EDI,EBX                         ; 004d4b97
    MOV dword ptr [ESP + 0xb30],EAX     ; 004d4b99
    SUB ECX,ECX                         ; 004d4ba0
    DEC ECX                             ; 004d4ba2
    XOR EAX,EAX                         ; 004d4ba3
    SCASB.REPNE ES:EDI                  ; 004d4ba5
    NOT ECX                             ; 004d4ba7
    DEC ECX                             ; 004d4ba9
    MOV dword ptr [ESP + 0xb2c],ECX     ; 004d4baa
    TEST ECX,ECX                        ; 004d4bb1
    JLE 0x004d4bf0                      ; 004d4bb3
        ;   XREF to: 004d4bf0 (CONDITIONAL_JUMP)  ; LAB_004d4bf0
    MOV EAX,ECX                         ; 004d4bb5
    NEG EAX                             ; 004d4bb7
    MOV EDI,ECX                         ; 004d4bb9
    ADD ECX,EAX                         ; 004d4bbb
    MOV dword ptr [ESP + 0xc60],ECX     ; 004d4bbd
    XOR EAX,EAX                         ; 004d4bc4
        ;   Label: LAB_004d4bc4
    MOV AL,byte ptr [EBX]               ; 004d4bc6
    PUSH EAX                            ; 004d4bc8
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d4bc9 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d4bd0
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4bd5
    CMP ESI,EAX                         ; 004d4bd8
    JNZ 0x004d4be3                      ; 004d4bda
        ;   XREF to: 004d4be3 (CONDITIONAL_JUMP)  ; LAB_004d4be3
    INC dword ptr [ESP + 0xb30]         ; 004d4bdc
    MOV ECX,dword ptr [ESP + 0xc60]     ; 004d4be3
        ;   Label: LAB_004d4be3
    DEC EDI                             ; 004d4bea
    INC EBX                             ; 004d4beb
    CMP EDI,ECX                         ; 004d4bec
    JG 0x004d4bc4                       ; 004d4bee
        ;   XREF to: 004d4bc4 (CONDITIONAL_JUMP)  ; LAB_004d4bc4
    MOV EAX,dword ptr [ESP + 0xb30]     ; 004d4bf0
        ;   Label: LAB_004d4bf0
    CMP EAX,dword ptr [ESP + 0xb2c]     ; 004d4bf7
    JNZ 0x004d4c19                      ; 004d4bfe
        ;   XREF to: 004d4c19 (CONDITIONAL_JUMP)  ; LAB_004d4c19
    PUSH 0x1                            ; 004d4c00
    MOV ESI,dword ptr [0x0062604c]      ; 004d4c02 | DAT_0062604c
    XOR BH,BH                           ; 004d4c08
    PUSH ESI                            ; 004d4c0a
    MOV byte ptr [0x01cd0c68],BH        ; 004d4c0b | DAT_01cd0c68
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0 ; 004d4c11
        ;   XREF to: 005aefc0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 004d4c16
    PUSH 0x5e27df                       ; 004d4c19 | DAT_005e27df
        ;   Label: LAB_004d4c19
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d4c1e
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR EDI,EDI                         ; 004d4c23
    ADD ESP,0x4                         ; 004d4c25
    MOV dword ptr [ESP + 0xb38],EDI     ; 004d4c28
    MOV EDI,EAX                         ; 004d4c2f
    MOV EBX,EAX                         ; 004d4c31
    SUB ECX,ECX                         ; 004d4c33
    DEC ECX                             ; 004d4c35
    XOR EAX,EAX                         ; 004d4c36
    SCASB.REPNE ES:EDI                  ; 004d4c38
    NOT ECX                             ; 004d4c3a
    DEC ECX                             ; 004d4c3c
    MOV dword ptr [ESP + 0xb34],ECX     ; 004d4c3d
    TEST ECX,ECX                        ; 004d4c44
    JLE 0x004d4c83                      ; 004d4c46
        ;   XREF to: 004d4c83 (CONDITIONAL_JUMP)  ; LAB_004d4c83
    MOV EAX,ECX                         ; 004d4c48
    NEG EAX                             ; 004d4c4a
    MOV EDI,ECX                         ; 004d4c4c
    ADD ECX,EAX                         ; 004d4c4e
    MOV dword ptr [ESP + 0xc64],ECX     ; 004d4c50
    XOR EAX,EAX                         ; 004d4c57
        ;   Label: LAB_004d4c57
    MOV AL,byte ptr [EBX]               ; 004d4c59
    PUSH EAX                            ; 004d4c5b
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d4c5c | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d4c63
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4c68
    CMP ESI,EAX                         ; 004d4c6b
    JNZ 0x004d4c76                      ; 004d4c6d
        ;   XREF to: 004d4c76 (CONDITIONAL_JUMP)  ; LAB_004d4c76
    INC dword ptr [ESP + 0xb38]         ; 004d4c6f
    MOV EDX,dword ptr [ESP + 0xc64]     ; 004d4c76
        ;   Label: LAB_004d4c76
    DEC EDI                             ; 004d4c7d
    INC EBX                             ; 004d4c7e
    CMP EDI,EDX                         ; 004d4c7f
    JG 0x004d4c57                       ; 004d4c81
        ;   XREF to: 004d4c57 (CONDITIONAL_JUMP)  ; LAB_004d4c57
    MOV EAX,dword ptr [ESP + 0xb38]     ; 004d4c83
        ;   Label: LAB_004d4c83
    CMP EAX,dword ptr [ESP + 0xb34]     ; 004d4c8a
    JNZ 0x004d4cac                      ; 004d4c91
        ;   XREF to: 004d4cac (CONDITIONAL_JUMP)  ; LAB_004d4cac
    PUSH 0x2                            ; 004d4c93
    MOV EBX,dword ptr [0x0062604c]      ; 004d4c95 | DAT_0062604c
    XOR CL,CL                           ; 004d4c9b
    PUSH EBX                            ; 004d4c9d
    MOV byte ptr [0x01cd0c68],CL        ; 004d4c9e | DAT_01cd0c68
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0 ; 004d4ca4
        ;   XREF to: 005aefc0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 004d4ca9
    PUSH 0x5e2816                       ; 004d4cac | DAT_005e2816
        ;   Label: LAB_004d4cac
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d4cb1
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d4cb6
    ADD ESP,0x4                         ; 004d4cb8
    MOV EDI,EAX                         ; 004d4cbb
    MOV EBX,EAX                         ; 004d4cbd
    SUB ECX,ECX                         ; 004d4cbf
    DEC ECX                             ; 004d4cc1
    XOR EAX,EAX                         ; 004d4cc2
    SCASB.REPNE ES:EDI                  ; 004d4cc4
    NOT ECX                             ; 004d4cc6
    DEC ECX                             ; 004d4cc8
    MOV dword ptr [ESP + 0xb40],ESI     ; 004d4cc9
    MOV dword ptr [ESP + 0xb3c],ECX     ; 004d4cd0
    TEST ECX,ECX                        ; 004d4cd7
    JLE 0x004d4d18                      ; 004d4cd9
        ;   XREF to: 004d4d18 (CONDITIONAL_JUMP)  ; LAB_004d4d18
    MOV EAX,ECX                         ; 004d4cdb
    MOV ESI,EBX                         ; 004d4cdd
    NEG EAX                             ; 004d4cdf
    MOV EBX,ECX                         ; 004d4ce1
    ADD ECX,EAX                         ; 004d4ce3
    MOV dword ptr [ESP + 0xc68],ECX     ; 004d4ce5
    XOR EAX,EAX                         ; 004d4cec
        ;   Label: LAB_004d4cec
    MOV AL,byte ptr [ESI]               ; 004d4cee
    PUSH EAX                            ; 004d4cf0
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d4cf1 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d4cf8
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d4cfd
    CMP EDI,EAX                         ; 004d4d00
    JNZ 0x004d4d0b                      ; 004d4d02
        ;   XREF to: 004d4d0b (CONDITIONAL_JUMP)  ; LAB_004d4d0b
    INC dword ptr [ESP + 0xb40]         ; 004d4d04
    MOV EDX,dword ptr [ESP + 0xc68]     ; 004d4d0b
        ;   Label: LAB_004d4d0b
    DEC EBX                             ; 004d4d12
    INC ESI                             ; 004d4d13
    CMP EBX,EDX                         ; 004d4d14
    JG 0x004d4cec                       ; 004d4d16
        ;   XREF to: 004d4cec (CONDITIONAL_JUMP)  ; LAB_004d4cec
    MOV EAX,dword ptr [ESP + 0xb40]     ; 004d4d18
        ;   Label: LAB_004d4d18
    CMP EAX,dword ptr [ESP + 0xb3c]     ; 004d4d1f
    JNZ 0x004d50dd                      ; 004d4d26
        ;   XREF to: 004d50dd (CONDITIONAL_JUMP)  ; LAB_004d50dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4d2c
    XOR CH,CH                           ; 004d4d2f
    MOV EBX,dword ptr [EAX + 0x220]     ; 004d4d31
    MOV byte ptr [0x01cd0c68],CH        ; 004d4d37 | DAT_01cd0c68
    TEST EBX,EBX                        ; 004d4d3d
    SETZ AL                             ; 004d4d3f
    MOV ESI,0x3e800000                  ; 004d4d42
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d4d47
    MOV dword ptr [ESP + 0xb44],ESI     ; 004d4d4a
    AND EAX,0xff                        ; 004d4d51
    MOV dword ptr [EBX + 0x220],EAX     ; 004d4d56
    JZ 0x004d4e6a                       ; 004d4d5c
        ;   XREF to: 004d4e6a (CONDITIONAL_JUMP)  ; LAB_004d4e6a
    PUSH 0x5e284b                       ; 004d4d62 | = "burp2.wav"
    PUSH 0x0                            ; 004d4d67
    MOV ECX,dword ptr [0x006236b8]      ; 004d4d69 | DAT_006236b8
    MOV EDX,0x40800000                  ; 004d4d6f
    PUSH ECX                            ; 004d4d74
    MOV dword ptr [ESP + 0xb50],EDX     ; 004d4d75
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d4d7c
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
        ;   Label: LAB_004d4d7c
    ADD ESP,0xc                         ; 004d4d81
    XOR EBX,EBX                         ; 004d4d84
    MOV dword ptr [ESP + 0xc6c],EBX     ; 004d4d86
    MOV dword ptr [ESP + 0xca4],EBX     ; 004d4d8d
    MOV EBX,dword ptr [0x00622c18]      ; 004d4d94 | g_CDemonSetPtr
        ;   Label: LAB_004d4d94
    MOV EAX,dword ptr [ESP + 0xca4]     ; 004d4d9a
    CMP EAX,dword ptr [EBX + 0x14f0a8]  ; 004d4da1 | g_CDemonSetInstance.character_count
    JGE 0x004d5090                      ; 004d4da7
        ;   XREF to: 004d5090 (CONDITIONAL_JUMP)  ; LAB_004d5090
    MOV EAX,dword ptr [ESP + 0xc6c]     ; 004d4dad
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14f0ac] ; 004d4db4
    LEA ECX,[EAX + 0x158]               ; 004d4dbb
    MOV DL,byte ptr [EAX + 0x24a8]      ; 004d4dc1
    MOV dword ptr [ESP + 0xb48],ECX     ; 004d4dc7
    TEST DL,DL                          ; 004d4dce
    JNZ 0x004d4e7b                      ; 004d4dd0
        ;   XREF to: 004d4e7b (CONDITIONAL_JUMP)  ; LAB_004d4e7b
    MOV ESI,dword ptr [ESP + 0xca4]     ; 004d4dd6
        ;   Label: LAB_004d4dd6
    MOV EBX,dword ptr [ESP + 0xc6c]     ; 004d4ddd
    INC ESI                             ; 004d4de4
    ADD EBX,0x4                         ; 004d4de5
    MOV dword ptr [ESP + 0xca4],ESI     ; 004d4de8
    MOV dword ptr [ESP + 0xc6c],EBX     ; 004d4def
    JMP 0x004d4d94                      ; 004d4df6
        ;   XREF to: 004d4d94 (UNCONDITIONAL_JUMP)  ; LAB_004d4d94
    PUSH 0x40a00000                     ; 004d4df8
        ;   Label: LAB_004d4df8
    PUSH 0x5e24d3                       ; 004d4dfd | = "Gratuitous dismemberment disabled"
    JMP 0x004d4527                      ; 004d4e02
        ;   XREF to: 004d4527 (UNCONDITIONAL_JUMP)  ; LAB_004d4527
    PUSH 0x5e2620                       ; 004d4e07 | = "CCrossbow"
        ;   Label: LAB_004d4e07
    PUSH EBX                            ; 004d4e0c
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004d4e0d
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004d4e12
    TEST EAX,EAX                        ; 004d4e15
    JZ 0x004d4e3f                       ; 004d4e17
        ;   XREF to: 004d4e3f (CONDITIONAL_JUMP)  ; LAB_004d4e3f
    PUSH 0x40a00000                     ; 004d4e19
    PUSH 0x5e2659                       ; 004d4e1e | = "Flaming ammo enabled."
    MOV dword ptr [EBX + 0x56c],0x5     ; 004d4e23
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d4e2d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d4e32
    PUSH EAX                            ; 004d4e35
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4e36
    PUSH EAX                            ; 004d4e39
    JMP 0x004d485b                      ; 004d4e3a
        ;   XREF to: 004d485b (UNCONDITIONAL_JUMP)  ; LAB_004d485b
    PUSH 0x40a00000                     ; 004d4e3f
        ;   Label: LAB_004d4e3f
    PUSH 0x5e262a                       ; 004d4e44 | = "You can only use flaming ammo on the ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d4e49
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d4e4e
    PUSH EAX                            ; 004d4e51
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d4e52
    PUSH EDI                            ; 004d4e55
    JMP 0x004d485b                      ; 004d4e56
        ;   XREF to: 004d485b (UNCONDITIONAL_JUMP)  ; LAB_004d485b
    PUSH 0x40a00000                     ; 004d4e5b
        ;   Label: LAB_004d4e5b
    PUSH 0x5e2732                       ; 004d4e60 | = "Single step disabled"
    JMP 0x004d4aa7                      ; 004d4e65
        ;   XREF to: 004d4aa7 (UNCONDITIONAL_JUMP)  ; LAB_004d4aa7
    PUSH 0x5e2855                       ; 004d4e6a | = "burp1.wav"
        ;   Label: LAB_004d4e6a
    PUSH EAX                            ; 004d4e6f
    MOV EAX,[0x006236b8]                ; 004d4e70 | DAT_006236b8
    PUSH EAX                            ; 004d4e75
    JMP 0x004d4d7c                      ; 004d4e76
        ;   XREF to: 004d4d7c (UNCONDITIONAL_JUMP)  ; LAB_004d4d7c
    PUSH ECX                            ; 004d4e7b
        ;   Label: LAB_004d4e7b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004d4e7c
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d4e81
    PUSH 0x0                            ; 004d4e84
    PUSH 0x5e285f                       ; 004d4e86 | = "Bip01 head"
    PUSH EAX                            ; 004d4e8b
    MOV ESI,EAX                         ; 004d4e8c
    MOV dword ptr [ESP + 0xb58],EAX     ; 004d4e8e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004d4e95
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4e9a
    CMP EAX,-0x1                        ; 004d4e9d
    JZ 0x004d4f2c                       ; 004d4ea0
        ;   XREF to: 004d4f2c (CONDITIONAL_JUMP)  ; LAB_004d4f2c
    MOV EDX,dword ptr [ESP + 0xb48]     ; 004d4ea6
    MOV dword ptr [ESP + 0xb58],EAX     ; 004d4ead
    SHL EAX,0x2                         ; 004d4eb4
    ADD EAX,EDX                         ; 004d4eb7
    MOV EBX,dword ptr [ESP + 0xb48]     ; 004d4eb9
    FLD float ptr [EAX + 0x514]         ; 004d4ec0
    FMUL float ptr [ESP + 0xb44]        ; 004d4ec6
    MOV dword ptr [ESP + 0xb50],EBX     ; 004d4ecd
    MOV EBX,dword ptr [ESP + 0xb44]     ; 004d4ed4
    MOV EDI,ESI                         ; 004d4edb
    MOV dword ptr [ESP + 0xb54],EBX     ; 004d4edd
    FSTP float ptr [EAX + 0x514]        ; 004d4ee4
    MOV ECX,dword ptr [ESI + 0x1de78]   ; 004d4eea
    XOR EBX,EBX                         ; 004d4ef0
    TEST ECX,ECX                        ; 004d4ef2
    JLE 0x004d4f2c                      ; 004d4ef4
        ;   XREF to: 004d4f2c (CONDITIONAL_JUMP)  ; LAB_004d4f2c
    MOV EDX,dword ptr [ESP + 0xb58]     ; 004d4ef6
        ;   Label: LAB_004d4ef6
    CMP EDX,dword ptr [ESI + 0x1de9c]   ; 004d4efd
    JNZ 0x004d4f1e                      ; 004d4f03
        ;   XREF to: 004d4f1e (CONDITIONAL_JUMP)  ; LAB_004d4f1e
    PUSH EBX                            ; 004d4f05
    PUSH dword ptr [ESP + 0xb58]        ; 004d4f06
    PUSH EDI                            ; 004d4f0d
    MOV ECX,dword ptr [ESP + 0xb5c]     ; 004d4f0e
    PUSH ECX                            ; 004d4f15
    CALL core_game.cpp_scaleBoneRecursive_FUN_004d2740 ; 004d4f16
        ;   XREF to: 004d2740 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004d2740(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004d4f1b
    INC EBX                             ; 004d4f1e
        ;   Label: LAB_004d4f1e
    MOV EAX,dword ptr [EDI + 0x1de78]   ; 004d4f1f
    ADD ESI,0x24                        ; 004d4f25
    CMP EBX,EAX                         ; 004d4f28
    JL 0x004d4ef6                       ; 004d4f2a
        ;   XREF to: 004d4ef6 (CONDITIONAL_JUMP)  ; LAB_004d4ef6
    PUSH 0x0                            ; 004d4f2c
        ;   Label: LAB_004d4f2c
    PUSH 0x5e286a                       ; 004d4f2e | = "bipltit02"
    MOV EBX,dword ptr [ESP + 0xb54]     ; 004d4f33
    PUSH EBX                            ; 004d4f3a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004d4f3b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4f40
    CMP EAX,-0x1                        ; 004d4f43
    JZ 0x004d4fd9                       ; 004d4f46
        ;   XREF to: 004d4fd9 (CONDITIONAL_JUMP)  ; LAB_004d4fd9
    MOV ESI,dword ptr [ESP + 0xb48]     ; 004d4f4c
    MOV dword ptr [ESP + 0xb64],EAX     ; 004d4f53
    SHL EAX,0x2                         ; 004d4f5a
    ADD EAX,ESI                         ; 004d4f5d
    MOV EBX,dword ptr [ESP + 0xb48]     ; 004d4f5f
    FLD float ptr [EAX + 0x514]         ; 004d4f66
    FMUL float ptr [ESP + 0xb44]        ; 004d4f6c
    MOV dword ptr [ESP + 0xb5c],EBX     ; 004d4f73
    MOV EBX,dword ptr [ESP + 0xb44]     ; 004d4f7a
    MOV EDI,dword ptr [ESP + 0xb4c]     ; 004d4f81
    MOV dword ptr [ESP + 0xb60],EBX     ; 004d4f88
    FSTP float ptr [EAX + 0x514]        ; 004d4f8f
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 004d4f95
    XOR EBX,EBX                         ; 004d4f9b
    TEST EDX,EDX                        ; 004d4f9d
    JLE 0x004d4fd9                      ; 004d4f9f
        ;   XREF to: 004d4fd9 (CONDITIONAL_JUMP)  ; LAB_004d4fd9
    MOV ESI,EDI                         ; 004d4fa1
    MOV EDX,dword ptr [ESP + 0xb64]     ; 004d4fa3
        ;   Label: LAB_004d4fa3
    CMP EDX,dword ptr [ESI + 0x1de9c]   ; 004d4faa
    JNZ 0x004d4fcb                      ; 004d4fb0
        ;   XREF to: 004d4fcb (CONDITIONAL_JUMP)  ; LAB_004d4fcb
    PUSH EBX                            ; 004d4fb2
    PUSH dword ptr [ESP + 0xb64]        ; 004d4fb3
    PUSH EDI                            ; 004d4fba
    MOV ECX,dword ptr [ESP + 0xb68]     ; 004d4fbb
    PUSH ECX                            ; 004d4fc2
    CALL core_game.cpp_scaleBoneRecursive_FUN_004d2740 ; 004d4fc3
        ;   XREF to: 004d2740 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004d2740(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004d4fc8
    INC EBX                             ; 004d4fcb
        ;   Label: LAB_004d4fcb
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 004d4fcc
    ADD ESI,0x24                        ; 004d4fd2
    CMP EBX,ECX                         ; 004d4fd5
    JL 0x004d4fa3                       ; 004d4fd7
        ;   XREF to: 004d4fa3 (CONDITIONAL_JUMP)  ; LAB_004d4fa3
    PUSH 0x0                            ; 004d4fd9
        ;   Label: LAB_004d4fd9
    PUSH 0x5e2874                       ; 004d4fdb | = "biprtit02"
    MOV EBX,dword ptr [ESP + 0xb54]     ; 004d4fe0
    PUSH EBX                            ; 004d4fe7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004d4fe8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4fed
    CMP EAX,-0x1                        ; 004d4ff0
    JZ 0x004d4dd6                       ; 004d4ff3
        ;   XREF to: 004d4dd6 (CONDITIONAL_JUMP)  ; LAB_004d4dd6
    MOV ESI,dword ptr [ESP + 0xb48]     ; 004d4ff9
    MOV dword ptr [ESP + 0xb70],EAX     ; 004d5000
    SHL EAX,0x2                         ; 004d5007
    ADD EAX,ESI                         ; 004d500a
    MOV EBX,dword ptr [ESP + 0xb48]     ; 004d500c
    FLD float ptr [EAX + 0x514]         ; 004d5013
    FMUL float ptr [ESP + 0xb44]        ; 004d5019
    MOV dword ptr [ESP + 0xb68],EBX     ; 004d5020
    MOV EBX,dword ptr [ESP + 0xb44]     ; 004d5027
    MOV EDI,dword ptr [ESP + 0xb4c]     ; 004d502e
    MOV dword ptr [ESP + 0xb6c],EBX     ; 004d5035
    FSTP float ptr [EAX + 0x514]        ; 004d503c
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 004d5042
    XOR EBX,EBX                         ; 004d5048
    TEST EDX,EDX                        ; 004d504a
    JLE 0x004d4dd6                      ; 004d504c
        ;   XREF to: 004d4dd6 (CONDITIONAL_JUMP)  ; LAB_004d4dd6
    MOV ESI,EDI                         ; 004d5052
    MOV EDX,dword ptr [ESP + 0xb70]     ; 004d5054
        ;   Label: LAB_004d5054
    CMP EDX,dword ptr [ESI + 0x1de9c]   ; 004d505b
    JNZ 0x004d507c                      ; 004d5061
        ;   XREF to: 004d507c (CONDITIONAL_JUMP)  ; LAB_004d507c
    PUSH EBX                            ; 004d5063
    PUSH dword ptr [ESP + 0xb70]        ; 004d5064
    PUSH EDI                            ; 004d506b
    MOV ECX,dword ptr [ESP + 0xb74]     ; 004d506c
    PUSH ECX                            ; 004d5073
    CALL core_game.cpp_scaleBoneRecursive_FUN_004d2740 ; 004d5074
        ;   XREF to: 004d2740 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004d2740(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004d5079
    INC EBX                             ; 004d507c
        ;   Label: LAB_004d507c
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 004d507d
    ADD ESI,0x24                        ; 004d5083
    CMP EBX,ECX                         ; 004d5086
    JGE 0x004d4dd6                      ; 004d5088
        ;   XREF to: 004d4dd6 (CONDITIONAL_JUMP)  ; LAB_004d4dd6
    JMP 0x004d5054                      ; 004d508e
        ;   XREF to: 004d5054 (UNCONDITIONAL_JUMP)  ; LAB_004d5054
    MOV ECX,dword ptr [0x02c83694]      ; 004d5090 | g_CStrangerClassInfo.name_hash
        ;   Label: LAB_004d5090
    MOV EAX,[0x01d06ab4]                ; 004d5096 | DAT_01d06ab4
    PUSH ECX                            ; 004d509b
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d509c
    PUSH EBX                            ; 004d50a3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d50a4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d50a9
    TEST EAX,EAX                        ; 004d50ac
    JZ 0x004d50dd                       ; 004d50ae
        ;   XREF to: 004d50dd (CONDITIONAL_JUMP)  ; LAB_004d50dd
    LEA EBX,[EAX + 0x200ac]             ; 004d50b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d50b6
    CMP dword ptr [EAX + 0x220],0x0     ; 004d50b9
    JZ 0x004d5d20                       ; 004d50c0
        ;   XREF to: 004d5d20 (CONDITIONAL_JUMP)  ; LAB_004d5d20
    PUSH 0x5e287e                       ; 004d50c6 | = "big-hat.kfm"
    PUSH EBX                            ; 004d50cb
        ;   Label: LAB_004d50cb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004d50cc
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d50d1
    PUSH EBX                            ; 004d50d4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004d50d5
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d50da
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d50dd
        ;   Label: LAB_004d50dd
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d50e0
    JZ 0x004d518d                       ; 004d50e7
        ;   XREF to: 004d518d (CONDITIONAL_JUMP)  ; LAB_004d518d
    PUSH 0x5e289b                       ; 004d50ed | DAT_005e289b
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d50f2
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d50f7
    ADD ESP,0x4                         ; 004d50f9
    XOR EAX,EAX                         ; 004d50fc
    MOV EDI,EBX                         ; 004d50fe
    MOV dword ptr [ESP + 0xb78],EAX     ; 004d5100
    SUB ECX,ECX                         ; 004d5107
    DEC ECX                             ; 004d5109
    XOR EAX,EAX                         ; 004d510a
    SCASB.REPNE ES:EDI                  ; 004d510c
    NOT ECX                             ; 004d510e
    DEC ECX                             ; 004d5110
    MOV dword ptr [ESP + 0xb74],ECX     ; 004d5111
    TEST ECX,ECX                        ; 004d5118
    JLE 0x004d5159                      ; 004d511a
        ;   XREF to: 004d5159 (CONDITIONAL_JUMP)  ; LAB_004d5159
    MOV EAX,ECX                         ; 004d511c
    MOV ESI,EBX                         ; 004d511e
    NEG EAX                             ; 004d5120
    MOV EBX,ECX                         ; 004d5122
    ADD ECX,EAX                         ; 004d5124
    MOV dword ptr [ESP + 0xc70],ECX     ; 004d5126
    XOR EAX,EAX                         ; 004d512d
        ;   Label: LAB_004d512d
    MOV AL,byte ptr [ESI]               ; 004d512f
    PUSH EAX                            ; 004d5131
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d5132 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d5139
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d513e
    CMP EDI,EAX                         ; 004d5141
    JNZ 0x004d514c                      ; 004d5143
        ;   XREF to: 004d514c (CONDITIONAL_JUMP)  ; LAB_004d514c
    INC dword ptr [ESP + 0xb78]         ; 004d5145
    MOV EDX,dword ptr [ESP + 0xc70]     ; 004d514c
        ;   Label: LAB_004d514c
    DEC EBX                             ; 004d5153
    INC ESI                             ; 004d5154
    CMP EBX,EDX                         ; 004d5155
    JG 0x004d512d                       ; 004d5157
        ;   XREF to: 004d512d (CONDITIONAL_JUMP)  ; LAB_004d512d
    MOV EAX,dword ptr [ESP + 0xb78]     ; 004d5159
        ;   Label: LAB_004d5159
    CMP EAX,dword ptr [ESP + 0xb74]     ; 004d5160
    JNZ 0x004d518d                      ; 004d5167
        ;   XREF to: 004d518d (CONDITIONAL_JUMP)  ; LAB_004d518d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5169
    XOR DH,DH                           ; 004d516c
    MOV EBX,dword ptr [EAX + 0x234]     ; 004d516e
    MOV byte ptr [0x01cd0c68],DH        ; 004d5174 | DAT_01cd0c68
    TEST EBX,EBX                        ; 004d517a
    SETZ AL                             ; 004d517c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d517f
    AND EAX,0xff                        ; 004d5182
    MOV dword ptr [EBX + 0x234],EAX     ; 004d5187
    PUSH 0x5e28d3                       ; 004d518d | DAT_005e28d3
        ;   Label: LAB_004d518d
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5192
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d5197
    ADD ESP,0x4                         ; 004d5199
    XOR EAX,EAX                         ; 004d519c
    MOV EDI,EBX                         ; 004d519e
    MOV dword ptr [ESP + 0xb80],EAX     ; 004d51a0
    SUB ECX,ECX                         ; 004d51a7
    DEC ECX                             ; 004d51a9
    XOR EAX,EAX                         ; 004d51aa
    SCASB.REPNE ES:EDI                  ; 004d51ac
    NOT ECX                             ; 004d51ae
    DEC ECX                             ; 004d51b0
    MOV dword ptr [ESP + 0xb7c],ECX     ; 004d51b1
    TEST ECX,ECX                        ; 004d51b8
    JLE 0x004d51f7                      ; 004d51ba
        ;   XREF to: 004d51f7 (CONDITIONAL_JUMP)  ; LAB_004d51f7
    MOV EAX,ECX                         ; 004d51bc
    NEG EAX                             ; 004d51be
    MOV EDI,ECX                         ; 004d51c0
    ADD ECX,EAX                         ; 004d51c2
    MOV dword ptr [ESP + 0xc74],ECX     ; 004d51c4
    XOR EAX,EAX                         ; 004d51cb
        ;   Label: LAB_004d51cb
    MOV AL,byte ptr [EBX]               ; 004d51cd
    PUSH EAX                            ; 004d51cf
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d51d0 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d51d7
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d51dc
    CMP ESI,EAX                         ; 004d51df
    JNZ 0x004d51ea                      ; 004d51e1
        ;   XREF to: 004d51ea (CONDITIONAL_JUMP)  ; LAB_004d51ea
    INC dword ptr [ESP + 0xb80]         ; 004d51e3
    MOV EDX,dword ptr [ESP + 0xc74]     ; 004d51ea
        ;   Label: LAB_004d51ea
    DEC EDI                             ; 004d51f1
    INC EBX                             ; 004d51f2
    CMP EDI,EDX                         ; 004d51f3
    JG 0x004d51cb                       ; 004d51f5
        ;   XREF to: 004d51cb (CONDITIONAL_JUMP)  ; LAB_004d51cb
    MOV EAX,dword ptr [ESP + 0xb80]     ; 004d51f7
        ;   Label: LAB_004d51f7
    CMP EAX,dword ptr [ESP + 0xb7c]     ; 004d51fe
    JNZ 0x004d5287                      ; 004d5205
        ;   XREF to: 004d5287 (CONDITIONAL_JUMP)  ; LAB_004d5287
    XOR BL,BL                           ; 004d520b
    PUSH 0x2d8                          ; 004d520d
    MOV byte ptr [0x01cd0c68],BL        ; 004d5212 | DAT_01cd0c68
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d5218
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d521d
    TEST EAX,EAX                        ; 004d5220
    JZ 0x004d522d                       ; 004d5222
        ;   XREF to: 004d522d (CONDITIONAL_JUMP)  ; LAB_004d522d
    PUSH EAX                            ; 004d5224
    CALL core_gasmask.cpp_CGasMask_ctor_FUN_004ddac0 ; 004d5225
        ;   XREF to: 004ddac0 (UNCONDITIONAL_CALL)  ; CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004ddac0(CGasMask * this_ptr)
    ADD ESP,0x4                         ; 004d522a
    MOV EBX,EAX                         ; 004d522d
        ;   Label: LAB_004d522d
    PUSH EBX                            ; 004d522f
    MOV ESI,dword ptr [0x0061f650]      ; 004d5230 | DAT_0061f650
    PUSH ESI                            ; 004d5236 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d5237
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d523c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d523f
    PUSH EBX                            ; 004d5245
    CALL dword ptr [EAX]                ; 004d5246
    ADD ESP,0x4                         ; 004d5248
    MOV EAX,[0x01d06ab4]                ; 004d524b | DAT_01d06ab4
    PUSH 0x1                            ; 004d5250
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d5252
    PUSH EBX                            ; 004d5259
    ADD EAX,0x1fae8                     ; 004d525a
    PUSH EAX                            ; 004d525f
    CALL core_inv.cpp_FUN_004f7690      ; 004d5260
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d5265
    PUSH 0x40a00000                     ; 004d5268
    PUSH 0x5e290d                       ; 004d526d | = "You've got a gasmask!"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d5272
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d5277
    PUSH EAX                            ; 004d527a
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d527b
    PUSH EDI                            ; 004d527e
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d527f
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d5284
    PUSH 0x5e2923                       ; 004d5287 | DAT_005e2923
        ;   Label: LAB_004d5287
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d528c
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d5291
    ADD ESP,0x4                         ; 004d5293
    XOR EAX,EAX                         ; 004d5296
    MOV EDI,EBX                         ; 004d5298
    MOV dword ptr [ESP + 0xb88],EAX     ; 004d529a
    SUB ECX,ECX                         ; 004d52a1
    DEC ECX                             ; 004d52a3
    XOR EAX,EAX                         ; 004d52a4
    SCASB.REPNE ES:EDI                  ; 004d52a6
    NOT ECX                             ; 004d52a8
    DEC ECX                             ; 004d52aa
    MOV dword ptr [ESP + 0xb84],ECX     ; 004d52ab
    TEST ECX,ECX                        ; 004d52b2
    JLE 0x004d52f1                      ; 004d52b4
        ;   XREF to: 004d52f1 (CONDITIONAL_JUMP)  ; LAB_004d52f1
    MOV EAX,ECX                         ; 004d52b6
    NEG EAX                             ; 004d52b8
    MOV EDI,ECX                         ; 004d52ba
    ADD ECX,EAX                         ; 004d52bc
    MOV dword ptr [ESP + 0xc78],ECX     ; 004d52be
    XOR EAX,EAX                         ; 004d52c5
        ;   Label: LAB_004d52c5
    MOV AL,byte ptr [EBX]               ; 004d52c7
    PUSH EAX                            ; 004d52c9
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d52ca | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d52d1
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d52d6
    CMP ESI,EAX                         ; 004d52d9
    JNZ 0x004d52e4                      ; 004d52db
        ;   XREF to: 004d52e4 (CONDITIONAL_JUMP)  ; LAB_004d52e4
    INC dword ptr [ESP + 0xb88]         ; 004d52dd
    MOV ECX,dword ptr [ESP + 0xc78]     ; 004d52e4
        ;   Label: LAB_004d52e4
    DEC EDI                             ; 004d52eb
    INC EBX                             ; 004d52ec
    CMP EDI,ECX                         ; 004d52ed
    JG 0x004d52c5                       ; 004d52ef
        ;   XREF to: 004d52c5 (CONDITIONAL_JUMP)  ; LAB_004d52c5
    MOV EAX,dword ptr [ESP + 0xb88]     ; 004d52f1
        ;   Label: LAB_004d52f1
    CMP EAX,dword ptr [ESP + 0xb84]     ; 004d52f8
    JNZ 0x004d5381                      ; 004d52ff
        ;   XREF to: 004d5381 (CONDITIONAL_JUMP)  ; LAB_004d5381
    XOR BH,BH                           ; 004d5305
    PUSH 0x2d8                          ; 004d5307
    MOV byte ptr [0x01cd0c68],BH        ; 004d530c | DAT_01cd0c68
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d5312
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d5317
    TEST EAX,EAX                        ; 004d531a
    JZ 0x004d5327                       ; 004d531c
        ;   XREF to: 004d5327 (CONDITIONAL_JUMP)  ; LAB_004d5327
    PUSH EAX                            ; 004d531e
    CALL core_goggles.cpp_CGoggles_ctor_FUN_004e3b30 ; 004d531f
        ;   XREF to: 004e3b30 (UNCONDITIONAL_CALL)  ; CGoggles * core_goggles.cpp_CGoggles_ctor_FUN_004e3b30(CGoggles * this_ptr)
    ADD ESP,0x4                         ; 004d5324
    MOV EBX,EAX                         ; 004d5327
        ;   Label: LAB_004d5327
    PUSH EBX                            ; 004d5329
    MOV ESI,dword ptr [0x0061f650]      ; 004d532a | DAT_0061f650
    PUSH ESI                            ; 004d5330 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d5331
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d5336
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5339
    PUSH EBX                            ; 004d533f
    CALL dword ptr [EAX]                ; 004d5340
    ADD ESP,0x4                         ; 004d5342
    MOV EAX,[0x01d06ab4]                ; 004d5345 | DAT_01d06ab4
    PUSH 0x1                            ; 004d534a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d534c
    PUSH EBX                            ; 004d5353
    ADD EAX,0x1fae8                     ; 004d5354
    PUSH EAX                            ; 004d5359
    CALL core_inv.cpp_FUN_004f7690      ; 004d535a
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d535f
    PUSH 0x40a00000                     ; 004d5362
    PUSH 0x5e2958                       ; 004d5367 | = "You've got nightvision goggles!"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d536c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d5371
    PUSH EAX                            ; 004d5374
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d5375
    PUSH EDI                            ; 004d5378
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d5379
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d537e
    PUSH 0x5e2978                       ; 004d5381 | DAT_005e2978
        ;   Label: LAB_004d5381
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5386
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d538b
    ADD ESP,0x4                         ; 004d538d
    XOR EAX,EAX                         ; 004d5390
    MOV EDI,EBX                         ; 004d5392
    MOV dword ptr [ESP + 0xb90],EAX     ; 004d5394
    SUB ECX,ECX                         ; 004d539b
    DEC ECX                             ; 004d539d
    XOR EAX,EAX                         ; 004d539e
    SCASB.REPNE ES:EDI                  ; 004d53a0
    NOT ECX                             ; 004d53a2
    DEC ECX                             ; 004d53a4
    MOV dword ptr [ESP + 0xb8c],ECX     ; 004d53a5
    TEST ECX,ECX                        ; 004d53ac
    JLE 0x004d53eb                      ; 004d53ae
        ;   XREF to: 004d53eb (CONDITIONAL_JUMP)  ; LAB_004d53eb
    MOV EAX,ECX                         ; 004d53b0
    NEG EAX                             ; 004d53b2
    MOV EDI,ECX                         ; 004d53b4
    ADD ECX,EAX                         ; 004d53b6
    MOV dword ptr [ESP + 0xc7c],ECX     ; 004d53b8
    XOR EAX,EAX                         ; 004d53bf
        ;   Label: LAB_004d53bf
    MOV AL,byte ptr [EBX]               ; 004d53c1
    PUSH EAX                            ; 004d53c3
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d53c4 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d53cb
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d53d0
    CMP ESI,EAX                         ; 004d53d3
    JNZ 0x004d53de                      ; 004d53d5
        ;   XREF to: 004d53de (CONDITIONAL_JUMP)  ; LAB_004d53de
    INC dword ptr [ESP + 0xb90]         ; 004d53d7
    MOV ECX,dword ptr [ESP + 0xc7c]     ; 004d53de
        ;   Label: LAB_004d53de
    DEC EDI                             ; 004d53e5
    INC EBX                             ; 004d53e6
    CMP EDI,ECX                         ; 004d53e7
    JG 0x004d53bf                       ; 004d53e9
        ;   XREF to: 004d53bf (CONDITIONAL_JUMP)  ; LAB_004d53bf
    MOV EAX,dword ptr [ESP + 0xb90]     ; 004d53eb
        ;   Label: LAB_004d53eb
    CMP EAX,dword ptr [ESP + 0xb8c]     ; 004d53f2
    JNZ 0x004d54d9                      ; 004d53f9
        ;   XREF to: 004d54d9 (CONDITIONAL_JUMP)  ; LAB_004d54d9
    PUSH 0x0                            ; 004d53ff
    PUSH 0x5e29ab                       ; 004d5401 | = "puzzleModeHard"
    MOV ESI,dword ptr [0x0061b4d0]      ; 004d5406 | DAT_0061b4d0
    XOR CL,CL                           ; 004d540c
    PUSH ESI                            ; 004d540e
    MOV byte ptr [0x01cd0c68],CL        ; 004d540f | DAT_01cd0c68
    CALL core_event.cpp_FUN_004a9a60    ; 004d5415
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d541a
    PUSH 0x0                            ; 004d541d
    PUSH 0x5e29ba                       ; 004d541f | = "combatModeHard"
    MOV EDI,dword ptr [0x0061b4d0]      ; 004d5424 | DAT_0061b4d0
    PUSH EDI                            ; 004d542a
    CALL core_event.cpp_FUN_004a9a60    ; 004d542b
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d5430
    MOV EAX,[0x0061d95c]                ; 004d5433 | g_CGamePtr
    PUSH 0x5e29c9                       ; 004d5438 | = "Game"
    MOV dword ptr [EAX + 0xe4],0x0      ; 004d543d | g_CGameInstance.puzzle_difficulty_mode
    PUSH 0x5e29ce                       ; 004d5447 | = "system\\nocturne.ini"
    MOV dword ptr [EAX + 0xe8],0x0      ; 004d544c | g_CGameInstance.combat_difficulty_mode
    LEA EAX,[ESP + 0x20c]               ; 004d5456
    PUSH EAX                            ; 004d545d
    CALL engine_ini.cpp_FUN_004f4b00    ; 004d545e
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    MOV EAX,[0x0061d95c]                ; 004d5463 | g_CGamePtr
    ADD ESP,0xc                         ; 004d5468
    MOV EDX,dword ptr [EAX + 0xe4]      ; 004d546b | g_CGameInstance.puzzle_difficulty_mode
    PUSH EDX                            ; 004d5471
    PUSH 0x5e29e2                       ; 004d5472 | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0x20c]               ; 004d5477
    PUSH EAX                            ; 004d547e
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d547f
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004d5484 | g_CGamePtr
    ADD ESP,0xc                         ; 004d5489
    MOV ECX,dword ptr [EAX + 0xe8]      ; 004d548c | g_CGameInstance.combat_difficulty_mode
    PUSH ECX                            ; 004d5492
    PUSH 0x5e29f7                       ; 004d5493 | = "combatDifficultyMode"
    LEA EAX,[ESP + 0x20c]               ; 004d5498
    PUSH EAX                            ; 004d549f
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d54a0
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004d54a5
    PUSH 0x40a00000                     ; 004d54a8
    PUSH 0x5e2a0c                       ; 004d54ad | = "DEBUG: Game set to easy puzzle / easy..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d54b2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d54b7
    PUSH EAX                            ; 004d54ba
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d54bb
    PUSH EBX                            ; 004d54be
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d54bf
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d54c4
    PUSH 0x0                            ; 004d54c7
    LEA EAX,[ESP + 0x208]               ; 004d54c9
    PUSH EAX                            ; 004d54d0
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 004d54d1
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d54d6
    PUSH 0x5e2a53                       ; 004d54d9 | DAT_005e2a53
        ;   Label: LAB_004d54d9
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d54de
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d54e3
    ADD ESP,0x4                         ; 004d54e5
    MOV EDI,EAX                         ; 004d54e8
    MOV EBX,EAX                         ; 004d54ea
    SUB ECX,ECX                         ; 004d54ec
    DEC ECX                             ; 004d54ee
    XOR EAX,EAX                         ; 004d54ef
    SCASB.REPNE ES:EDI                  ; 004d54f1
    NOT ECX                             ; 004d54f3
    DEC ECX                             ; 004d54f5
    MOV dword ptr [ESP + 0xb98],ESI     ; 004d54f6
    MOV dword ptr [ESP + 0xb94],ECX     ; 004d54fd
    TEST ECX,ECX                        ; 004d5504
    JLE 0x004d5543                      ; 004d5506
        ;   XREF to: 004d5543 (CONDITIONAL_JUMP)  ; LAB_004d5543
    MOV EAX,ECX                         ; 004d5508
    NEG EAX                             ; 004d550a
    MOV EDI,ECX                         ; 004d550c
    ADD ECX,EAX                         ; 004d550e
    MOV dword ptr [ESP + 0xc80],ECX     ; 004d5510
    XOR EAX,EAX                         ; 004d5517
        ;   Label: LAB_004d5517
    MOV AL,byte ptr [EBX]               ; 004d5519
    PUSH EAX                            ; 004d551b
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d551c | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d5523
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d5528
    CMP ESI,EAX                         ; 004d552b
    JNZ 0x004d5536                      ; 004d552d
        ;   XREF to: 004d5536 (CONDITIONAL_JUMP)  ; LAB_004d5536
    INC dword ptr [ESP + 0xb98]         ; 004d552f
    MOV EDX,dword ptr [ESP + 0xc80]     ; 004d5536
        ;   Label: LAB_004d5536
    DEC EDI                             ; 004d553d
    INC EBX                             ; 004d553e
    CMP EDI,EDX                         ; 004d553f
    JG 0x004d5517                       ; 004d5541
        ;   XREF to: 004d5517 (CONDITIONAL_JUMP)  ; LAB_004d5517
    MOV EAX,dword ptr [ESP + 0xb98]     ; 004d5543
        ;   Label: LAB_004d5543
    CMP EAX,dword ptr [ESP + 0xb94]     ; 004d554a
    JNZ 0x004d5631                      ; 004d5551
        ;   XREF to: 004d5631 (CONDITIONAL_JUMP)  ; LAB_004d5631
    PUSH 0x1                            ; 004d5557
    PUSH 0x5e2a8e                       ; 004d5559 | = "puzzleModeHard"
    MOV EBX,dword ptr [0x0061b4d0]      ; 004d555e | DAT_0061b4d0
    XOR CH,CH                           ; 004d5564
    PUSH EBX                            ; 004d5566
    MOV byte ptr [0x01cd0c68],CH        ; 004d5567 | DAT_01cd0c68
    CALL core_event.cpp_FUN_004a9a60    ; 004d556d
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d5572
    PUSH 0x0                            ; 004d5575
    PUSH 0x5e2a9d                       ; 004d5577 | = "combatModeHard"
    MOV ESI,dword ptr [0x0061b4d0]      ; 004d557c | DAT_0061b4d0
    PUSH ESI                            ; 004d5582
    CALL core_event.cpp_FUN_004a9a60    ; 004d5583
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d5588
    MOV EAX,[0x0061d95c]                ; 004d558b | g_CGamePtr
    PUSH 0x5e2aac                       ; 004d5590 | = "Game"
    MOV dword ptr [EAX + 0xe4],0x1      ; 004d5595 | g_CGameInstance.puzzle_difficulty_mode
    PUSH 0x5e2ab1                       ; 004d559f | = "system\\nocturne.ini"
    MOV dword ptr [EAX + 0xe8],0x0      ; 004d55a4 | g_CGameInstance.combat_difficulty_mode
    LEA EAX,[ESP + 0x614]               ; 004d55ae
    PUSH EAX                            ; 004d55b5
    CALL engine_ini.cpp_FUN_004f4b00    ; 004d55b6
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    MOV EAX,[0x0061d95c]                ; 004d55bb | g_CGamePtr
    ADD ESP,0xc                         ; 004d55c0
    MOV EDI,dword ptr [EAX + 0xe4]      ; 004d55c3 | g_CGameInstance.puzzle_difficulty_mode
    PUSH EDI                            ; 004d55c9
    PUSH 0x5e2ac5                       ; 004d55ca | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0x614]               ; 004d55cf
    PUSH EAX                            ; 004d55d6
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d55d7
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004d55dc | g_CGamePtr
    ADD ESP,0xc                         ; 004d55e1
    MOV EDX,dword ptr [EAX + 0xe8]      ; 004d55e4 | g_CGameInstance.combat_difficulty_mode
    PUSH EDX                            ; 004d55ea
    PUSH 0x5e2ada                       ; 004d55eb | = "combatDifficultyMode"
    LEA EAX,[ESP + 0x614]               ; 004d55f0
    PUSH EAX                            ; 004d55f7
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d55f8
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004d55fd
    PUSH 0x40a00000                     ; 004d5600
    PUSH 0x5e2aef                       ; 004d5605 | = "DEBUG: Game set to hard puzzle / easy..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d560a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d560f
    PUSH EAX                            ; 004d5612
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d5613
    PUSH ECX                            ; 004d5616
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d5617
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d561c
    PUSH 0x0                            ; 004d561f
    LEA EAX,[ESP + 0x610]               ; 004d5621
    PUSH EAX                            ; 004d5628
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 004d5629
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d562e
    PUSH 0x5e2b36                       ; 004d5631 | DAT_005e2b36
        ;   Label: LAB_004d5631
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5636
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d563b
    ADD ESP,0x4                         ; 004d563d
    MOV EDI,EAX                         ; 004d5640
    MOV EBX,EAX                         ; 004d5642
    SUB ECX,ECX                         ; 004d5644
    DEC ECX                             ; 004d5646
    XOR EAX,EAX                         ; 004d5647
    SCASB.REPNE ES:EDI                  ; 004d5649
    NOT ECX                             ; 004d564b
    DEC ECX                             ; 004d564d
    MOV dword ptr [ESP + 0xba0],ESI     ; 004d564e
    MOV dword ptr [ESP + 0xb9c],ECX     ; 004d5655
    TEST ECX,ECX                        ; 004d565c
    JLE 0x004d569b                      ; 004d565e
        ;   XREF to: 004d569b (CONDITIONAL_JUMP)  ; LAB_004d569b
    MOV EAX,ECX                         ; 004d5660
    NEG EAX                             ; 004d5662
    MOV EDI,ECX                         ; 004d5664
    ADD ECX,EAX                         ; 004d5666
    MOV dword ptr [ESP + 0xc84],ECX     ; 004d5668
    XOR EAX,EAX                         ; 004d566f
        ;   Label: LAB_004d566f
    MOV AL,byte ptr [EBX]               ; 004d5671
    PUSH EAX                            ; 004d5673
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d5674 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d567b
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d5680
    CMP ESI,EAX                         ; 004d5683
    JNZ 0x004d568e                      ; 004d5685
        ;   XREF to: 004d568e (CONDITIONAL_JUMP)  ; LAB_004d568e
    INC dword ptr [ESP + 0xba0]         ; 004d5687
    MOV EDX,dword ptr [ESP + 0xc84]     ; 004d568e
        ;   Label: LAB_004d568e
    DEC EDI                             ; 004d5695
    INC EBX                             ; 004d5696
    CMP EDI,EDX                         ; 004d5697
    JG 0x004d566f                       ; 004d5699
        ;   XREF to: 004d566f (CONDITIONAL_JUMP)  ; LAB_004d566f
    MOV EAX,dword ptr [ESP + 0xba0]     ; 004d569b
        ;   Label: LAB_004d569b
    MOV ECX,dword ptr [ESP + 0xb9c]     ; 004d56a2
    CMP EAX,ECX                         ; 004d56a9
    JNZ 0x004d577e                      ; 004d56ab
        ;   XREF to: 004d577e (CONDITIONAL_JUMP)  ; LAB_004d577e
    PUSH 0x0                            ; 004d56b1
    PUSH 0x5e2b73                       ; 004d56b3 | = "puzzleModeHard"
    MOV EBX,dword ptr [0x0061b4d0]      ; 004d56b8 | DAT_0061b4d0
    XOR AL,CL                           ; 004d56be
    PUSH EBX                            ; 004d56c0
    MOV [0x01cd0c68],AL                 ; 004d56c1 | DAT_01cd0c68
    CALL core_event.cpp_FUN_004a9a60    ; 004d56c6
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d56cb
    PUSH 0x1                            ; 004d56ce
    PUSH 0x5e2b82                       ; 004d56d0 | = "combatModeHard"
    MOV ESI,dword ptr [0x0061b4d0]      ; 004d56d5 | DAT_0061b4d0
    PUSH ESI                            ; 004d56db
    CALL core_event.cpp_FUN_004a9a60    ; 004d56dc
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d56e1
    MOV EAX,[0x0061d95c]                ; 004d56e4 | g_CGamePtr
    PUSH 0x5e2b91                       ; 004d56e9 | = "Game"
    MOV dword ptr [EAX + 0xe4],0x0      ; 004d56ee | g_CGameInstance.puzzle_difficulty_mode
    PUSH 0x5e2b96                       ; 004d56f8 | = "system\\nocturne.ini"
    MOV dword ptr [EAX + 0xe8],0x1      ; 004d56fd | g_CGameInstance.combat_difficulty_mode
    LEA EAX,[ESP + 0x8]                 ; 004d5707
    PUSH EAX                            ; 004d570b
    CALL engine_ini.cpp_FUN_004f4b00    ; 004d570c
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    MOV EAX,[0x0061d95c]                ; 004d5711 | g_CGamePtr
    ADD ESP,0xc                         ; 004d5716
    MOV EDI,dword ptr [EAX + 0xe4]      ; 004d5719 | g_CGameInstance.puzzle_difficulty_mode
    PUSH EDI                            ; 004d571f
    PUSH 0x5e2baa                       ; 004d5720 | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004d5725
    PUSH EAX                            ; 004d5729
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d572a
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004d572f | g_CGamePtr
    ADD ESP,0xc                         ; 004d5734
    MOV EDX,dword ptr [EAX + 0xe8]      ; 004d5737 | g_CGameInstance.combat_difficulty_mode
    PUSH EDX                            ; 004d573d
    PUSH 0x5e2bbf                       ; 004d573e | = "combatDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004d5743
    PUSH EAX                            ; 004d5747
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d5748
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004d574d
    PUSH 0x40a00000                     ; 004d5750
    PUSH 0x5e2bd4                       ; 004d5755 | = "DEBUG: Game set to easy puzzle / hard..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d575a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d575f
    PUSH EAX                            ; 004d5762
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d5763
    PUSH ECX                            ; 004d5766
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d5767
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d576c
    PUSH 0x0                            ; 004d576f
    LEA EAX,[ESP + 0x4]                 ; 004d5771
    PUSH EAX                            ; 004d5775
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 004d5776
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d577b
    PUSH 0x5e2c1b                       ; 004d577e | DAT_005e2c1b
        ;   Label: LAB_004d577e
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5783
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d5788
    ADD ESP,0x4                         ; 004d578a
    MOV EDI,EAX                         ; 004d578d
    MOV EBX,EAX                         ; 004d578f
    SUB ECX,ECX                         ; 004d5791
    DEC ECX                             ; 004d5793
    XOR EAX,EAX                         ; 004d5794
    SCASB.REPNE ES:EDI                  ; 004d5796
    NOT ECX                             ; 004d5798
    DEC ECX                             ; 004d579a
    MOV dword ptr [ESP + 0xba8],ESI     ; 004d579b
    MOV dword ptr [ESP + 0xba4],ECX     ; 004d57a2
    TEST ECX,ECX                        ; 004d57a9
    JLE 0x004d57e8                      ; 004d57ab
        ;   XREF to: 004d57e8 (CONDITIONAL_JUMP)  ; LAB_004d57e8
    MOV EAX,ECX                         ; 004d57ad
    NEG EAX                             ; 004d57af
    MOV EDI,ECX                         ; 004d57b1
    ADD ECX,EAX                         ; 004d57b3
    MOV dword ptr [ESP + 0xc88],ECX     ; 004d57b5
    XOR EAX,EAX                         ; 004d57bc
        ;   Label: LAB_004d57bc
    MOV AL,byte ptr [EBX]               ; 004d57be
    PUSH EAX                            ; 004d57c0
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d57c1 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d57c8
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d57cd
    CMP ESI,EAX                         ; 004d57d0
    JNZ 0x004d57db                      ; 004d57d2
        ;   XREF to: 004d57db (CONDITIONAL_JUMP)  ; LAB_004d57db
    INC dword ptr [ESP + 0xba8]         ; 004d57d4
    MOV EDX,dword ptr [ESP + 0xc88]     ; 004d57db
        ;   Label: LAB_004d57db
    DEC EDI                             ; 004d57e2
    INC EBX                             ; 004d57e3
    CMP EDI,EDX                         ; 004d57e4
    JG 0x004d57bc                       ; 004d57e6
        ;   XREF to: 004d57bc (CONDITIONAL_JUMP)  ; LAB_004d57bc
    MOV EAX,dword ptr [ESP + 0xba8]     ; 004d57e8
        ;   Label: LAB_004d57e8
    MOV ECX,dword ptr [ESP + 0xba4]     ; 004d57ef
    CMP EAX,ECX                         ; 004d57f6
    JNZ 0x004d58d8                      ; 004d57f8
        ;   XREF to: 004d58d8 (CONDITIONAL_JUMP)  ; LAB_004d58d8
    PUSH 0x1                            ; 004d57fe
    PUSH 0x5e2c4e                       ; 004d5800 | = "puzzleModeHard"
    MOV EBX,dword ptr [0x0061b4d0]      ; 004d5805 | DAT_0061b4d0
    XOR AH,CH                           ; 004d580b
    PUSH EBX                            ; 004d580d
    MOV byte ptr [0x01cd0c68],AH        ; 004d580e | DAT_01cd0c68
    CALL core_event.cpp_FUN_004a9a60    ; 004d5814
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d5819
    PUSH 0x1                            ; 004d581c
    PUSH 0x5e2c5d                       ; 004d581e | = "combatModeHard"
    MOV ESI,dword ptr [0x0061b4d0]      ; 004d5823 | DAT_0061b4d0
    PUSH ESI                            ; 004d5829
    CALL core_event.cpp_FUN_004a9a60    ; 004d582a
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004d582f
    MOV EAX,[0x0061d95c]                ; 004d5832 | g_CGamePtr
    PUSH 0x5e2c6c                       ; 004d5837 | = "Game"
    MOV dword ptr [EAX + 0xe4],0x1      ; 004d583c | g_CGameInstance.puzzle_difficulty_mode
    PUSH 0x5e2c71                       ; 004d5846 | = "system\\nocturne.ini"
    MOV dword ptr [EAX + 0xe8],0x1      ; 004d584b | g_CGameInstance.combat_difficulty_mode
    LEA EAX,[ESP + 0x410]               ; 004d5855
    PUSH EAX                            ; 004d585c
    CALL engine_ini.cpp_FUN_004f4b00    ; 004d585d
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    MOV EAX,[0x0061d95c]                ; 004d5862 | g_CGamePtr
    ADD ESP,0xc                         ; 004d5867
    MOV EDI,dword ptr [EAX + 0xe4]      ; 004d586a | g_CGameInstance.puzzle_difficulty_mode
    PUSH EDI                            ; 004d5870
    PUSH 0x5e2c85                       ; 004d5871 | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0x410]               ; 004d5876
    PUSH EAX                            ; 004d587d
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d587e
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004d5883 | g_CGamePtr
    ADD ESP,0xc                         ; 004d5888
    MOV EDX,dword ptr [EAX + 0xe8]      ; 004d588b | g_CGameInstance.combat_difficulty_mode
    PUSH EDX                            ; 004d5891
    PUSH 0x5e2c9a                       ; 004d5892 | = "combatDifficultyMode"
    LEA EAX,[ESP + 0x410]               ; 004d5897
    PUSH EAX                            ; 004d589e
    CALL engine_ini.cpp_FUN_004f4d70    ; 004d589f
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004d58a4
    PUSH 0x40a00000                     ; 004d58a7
    PUSH 0x5e2caf                       ; 004d58ac | = "DEBUG: Game set to hard puzzle / hard..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d58b1
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d58b6
    PUSH EAX                            ; 004d58b9
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d58ba
    PUSH ECX                            ; 004d58bd
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d58be
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d58c3
    PUSH 0x0                            ; 004d58c6
    LEA EAX,[ESP + 0x40c]               ; 004d58c8
    PUSH EAX                            ; 004d58cf
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 004d58d0
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d58d5
    PUSH 0x5e2cf6                       ; 004d58d8 | DAT_005e2cf6
        ;   Label: LAB_004d58d8
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d58dd
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d58e2
    ADD ESP,0x4                         ; 004d58e4
    MOV EDI,EAX                         ; 004d58e7
    MOV EBX,EAX                         ; 004d58e9
    SUB ECX,ECX                         ; 004d58eb
    DEC ECX                             ; 004d58ed
    XOR EAX,EAX                         ; 004d58ee
    SCASB.REPNE ES:EDI                  ; 004d58f0
    NOT ECX                             ; 004d58f2
    DEC ECX                             ; 004d58f4
    MOV dword ptr [ESP + 0xbb0],ESI     ; 004d58f5
    MOV dword ptr [ESP + 0xbac],ECX     ; 004d58fc
    TEST ECX,ECX                        ; 004d5903
    JLE 0x004d5942                      ; 004d5905
        ;   XREF to: 004d5942 (CONDITIONAL_JUMP)  ; LAB_004d5942
    MOV EAX,ECX                         ; 004d5907
    NEG EAX                             ; 004d5909
    MOV EDI,ECX                         ; 004d590b
    ADD ECX,EAX                         ; 004d590d
    MOV dword ptr [ESP + 0xc8c],ECX     ; 004d590f
    XOR EAX,EAX                         ; 004d5916
        ;   Label: LAB_004d5916
    MOV AL,byte ptr [EBX]               ; 004d5918
    PUSH EAX                            ; 004d591a
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d591b | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d5922
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d5927
    CMP ESI,EAX                         ; 004d592a
    JNZ 0x004d5935                      ; 004d592c
        ;   XREF to: 004d5935 (CONDITIONAL_JUMP)  ; LAB_004d5935
    INC dword ptr [ESP + 0xbb0]         ; 004d592e
    MOV EDX,dword ptr [ESP + 0xc8c]     ; 004d5935
        ;   Label: LAB_004d5935
    DEC EDI                             ; 004d593c
    INC EBX                             ; 004d593d
    CMP EDI,EDX                         ; 004d593e
    JG 0x004d5916                       ; 004d5940
        ;   XREF to: 004d5916 (CONDITIONAL_JUMP)  ; LAB_004d5916
    MOV EAX,dword ptr [ESP + 0xbb0]     ; 004d5942
        ;   Label: LAB_004d5942
    CMP EAX,dword ptr [ESP + 0xbac]     ; 004d5949
    JNZ 0x004d598f                      ; 004d5950
        ;   XREF to: 004d598f (CONDITIONAL_JUMP)  ; LAB_004d598f
    MOV EAX,[0x01d06ab4]                ; 004d5952 | DAT_01d06ab4
    PUSH 0x40a00000                     ; 004d5957
    XOR DL,DL                           ; 004d595c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d595e
    PUSH 0x5e2d2f                       ; 004d5965 | = "Health restored."
    MOV byte ptr [0x01cd0c68],DL        ; 004d596a | DAT_01cd0c68
    MOV dword ptr [EAX + 0x2538],0x42c80000 ; 004d5970
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d597a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d597f
    PUSH EAX                            ; 004d5982
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d5983
    PUSH EBX                            ; 004d5986
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d5987
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d598c
    PUSH 0x5e2d40                       ; 004d598f | DAT_005e2d40
        ;   Label: LAB_004d598f
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5994
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    XOR ESI,ESI                         ; 004d5999
    ADD ESP,0x4                         ; 004d599b
    MOV EDI,EAX                         ; 004d599e
    MOV EBX,EAX                         ; 004d59a0
    SUB ECX,ECX                         ; 004d59a2
    DEC ECX                             ; 004d59a4
    XOR EAX,EAX                         ; 004d59a5
    SCASB.REPNE ES:EDI                  ; 004d59a7
    NOT ECX                             ; 004d59a9
    DEC ECX                             ; 004d59ab
    MOV dword ptr [ESP + 0xbb8],ESI     ; 004d59ac
    MOV dword ptr [ESP + 0xbb4],ECX     ; 004d59b3
    TEST ECX,ECX                        ; 004d59ba
    JLE 0x004d59f9                      ; 004d59bc
        ;   XREF to: 004d59f9 (CONDITIONAL_JUMP)  ; LAB_004d59f9
    MOV EAX,ECX                         ; 004d59be
    NEG EAX                             ; 004d59c0
    MOV EDI,ECX                         ; 004d59c2
    ADD ECX,EAX                         ; 004d59c4
    MOV dword ptr [ESP + 0xc90],ECX     ; 004d59c6
    XOR EAX,EAX                         ; 004d59cd
        ;   Label: LAB_004d59cd
    MOV AL,byte ptr [EBX]               ; 004d59cf
    PUSH EAX                            ; 004d59d1
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d59d2 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d59d9
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d59de
    CMP ESI,EAX                         ; 004d59e1
    JNZ 0x004d59ec                      ; 004d59e3
        ;   XREF to: 004d59ec (CONDITIONAL_JUMP)  ; LAB_004d59ec
    INC dword ptr [ESP + 0xbb8]         ; 004d59e5
    MOV EDX,dword ptr [ESP + 0xc90]     ; 004d59ec
        ;   Label: LAB_004d59ec
    DEC EDI                             ; 004d59f3
    INC EBX                             ; 004d59f4
    CMP EDI,EDX                         ; 004d59f5
    JG 0x004d59cd                       ; 004d59f7
        ;   XREF to: 004d59cd (CONDITIONAL_JUMP)  ; LAB_004d59cd
    MOV EAX,dword ptr [ESP + 0xbb8]     ; 004d59f9
        ;   Label: LAB_004d59f9
    CMP EAX,dword ptr [ESP + 0xbb4]     ; 004d5a00
    JNZ 0x004d5a64                      ; 004d5a07
        ;   XREF to: 004d5a64 (CONDITIONAL_JUMP)  ; LAB_004d5a64
    MOV EBX,dword ptr [0x02c83694]      ; 004d5a09 | g_CStrangerClassInfo.name_hash
    MOV EAX,[0x01d06ab4]                ; 004d5a0f | DAT_01d06ab4
    PUSH EBX                            ; 004d5a14
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d5a15
    XOR DH,DH                           ; 004d5a1c
    PUSH ESI                            ; 004d5a1e
    MOV byte ptr [0x01cd0c68],DH        ; 004d5a1f | DAT_01cd0c68
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d5a25
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d5a2a
    TEST EAX,EAX                        ; 004d5a2d
    JZ 0x004d5a64                       ; 004d5a2f
        ;   XREF to: 004d5a64 (CONDITIONAL_JUMP)  ; LAB_004d5a64
    PUSH 0x5e2d74                       ; 004d5a31 | = "oldhat.kfm"
    LEA EBX,[EAX + 0x200ac]             ; 004d5a36
    PUSH EBX                            ; 004d5a3c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004d5a3d
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d5a42
    PUSH EBX                            ; 004d5a45
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004d5a46
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d5a4b
    PUSH 0x5e2d7f                       ; 004d5a4e | = "cheat-1.wav"
    PUSH 0x0                            ; 004d5a53
    MOV EDI,dword ptr [0x006236b8]      ; 004d5a55 | DAT_006236b8
    PUSH EDI                            ; 004d5a5b
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004d5a5c
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d5a61
    PUSH 0x5e2d8b                       ; 004d5a64 | DAT_005e2d8b
        ;   Label: LAB_004d5a64
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5a69
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d5a6e
    ADD ESP,0x4                         ; 004d5a70
    XOR EAX,EAX                         ; 004d5a73
    MOV EDI,EBX                         ; 004d5a75
    MOV dword ptr [ESP + 0xbc0],EAX     ; 004d5a77
    SUB ECX,ECX                         ; 004d5a7e
    DEC ECX                             ; 004d5a80
    XOR EAX,EAX                         ; 004d5a81
    SCASB.REPNE ES:EDI                  ; 004d5a83
    NOT ECX                             ; 004d5a85
    DEC ECX                             ; 004d5a87
    MOV dword ptr [ESP + 0xbbc],ECX     ; 004d5a88
    TEST ECX,ECX                        ; 004d5a8f
    JLE 0x004d5ace                      ; 004d5a91
        ;   XREF to: 004d5ace (CONDITIONAL_JUMP)  ; LAB_004d5ace
    MOV EAX,ECX                         ; 004d5a93
    NEG EAX                             ; 004d5a95
    MOV EDI,ECX                         ; 004d5a97
    ADD ECX,EAX                         ; 004d5a99
    MOV dword ptr [ESP + 0xc94],ECX     ; 004d5a9b
    XOR EAX,EAX                         ; 004d5aa2
        ;   Label: LAB_004d5aa2
    MOV AL,byte ptr [EBX]               ; 004d5aa4
    PUSH EAX                            ; 004d5aa6
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d5aa7 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d5aae
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d5ab3
    CMP ESI,EAX                         ; 004d5ab6
    JNZ 0x004d5ac1                      ; 004d5ab8
        ;   XREF to: 004d5ac1 (CONDITIONAL_JUMP)  ; LAB_004d5ac1
    INC dword ptr [ESP + 0xbc0]         ; 004d5aba
    MOV ECX,dword ptr [ESP + 0xc94]     ; 004d5ac1
        ;   Label: LAB_004d5ac1
    DEC EDI                             ; 004d5ac8
    INC EBX                             ; 004d5ac9
    CMP EDI,ECX                         ; 004d5aca
    JG 0x004d5aa2                       ; 004d5acc
        ;   XREF to: 004d5aa2 (CONDITIONAL_JUMP)  ; LAB_004d5aa2
    MOV EAX,dword ptr [ESP + 0xbc0]     ; 004d5ace
        ;   Label: LAB_004d5ace
    CMP EAX,dword ptr [ESP + 0xbbc]     ; 004d5ad5
    JNZ 0x004d5b14                      ; 004d5adc
        ;   XREF to: 004d5b14 (CONDITIONAL_JUMP)  ; LAB_004d5b14
    MOV ESI,0x5e2dc1                    ; 004d5ade | = "CGun"
    PUSH 0x31c                          ; 004d5ae3
    XOR BL,BL                           ; 004d5ae8
    MOV EDI,0x3                         ; 004d5aea
    MOV byte ptr [0x01cd0c68],BL        ; 004d5aef | DAT_01cd0c68
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d5af5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d5afa
    TEST EAX,EAX                        ; 004d5afd
    JZ 0x004d5b0a                       ; 004d5aff
        ;   XREF to: 004d5b0a (CONDITIONAL_JUMP)  ; LAB_004d5b0a
    PUSH EAX                            ; 004d5b01
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d5b02
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004d5b07
    MOV EBX,EAX                         ; 004d5b0a
        ;   Label: LAB_004d5b0a
    TEST EBX,EBX                        ; 004d5b0c
    JNZ 0x004d5d2a                      ; 004d5b0e
        ;   XREF to: 004d5d2a (CONDITIONAL_JUMP)  ; LAB_004d5d2a
    PUSH 0x5e2dc6                       ; 004d5b14 | DAT_005e2dc6
        ;   Label: LAB_004d5b14
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5b19
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d5b1e
    ADD ESP,0x4                         ; 004d5b20
    MOV EDI,EAX                         ; 004d5b23
    XOR EDX,EDX                         ; 004d5b25
    SUB ECX,ECX                         ; 004d5b27
    DEC ECX                             ; 004d5b29
    XOR EAX,EAX                         ; 004d5b2a
    SCASB.REPNE ES:EDI                  ; 004d5b2c
    NOT ECX                             ; 004d5b2e
    DEC ECX                             ; 004d5b30
    MOV dword ptr [ESP + 0xbc8],EDX     ; 004d5b31
    MOV dword ptr [ESP + 0xbc4],ECX     ; 004d5b38
    TEST ECX,ECX                        ; 004d5b3f
    JLE 0x004d5b7e                      ; 004d5b41
        ;   XREF to: 004d5b7e (CONDITIONAL_JUMP)  ; LAB_004d5b7e
    MOV EAX,ECX                         ; 004d5b43
    NEG EAX                             ; 004d5b45
    MOV EDI,ECX                         ; 004d5b47
    ADD ECX,EAX                         ; 004d5b49
    MOV dword ptr [ESP + 0xc98],ECX     ; 004d5b4b
    XOR EAX,EAX                         ; 004d5b52
        ;   Label: LAB_004d5b52
    MOV AL,byte ptr [EBX]               ; 004d5b54
    PUSH EAX                            ; 004d5b56
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d5b57 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d5b5e
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d5b63
    CMP ESI,EAX                         ; 004d5b66
    JNZ 0x004d5b71                      ; 004d5b68
        ;   XREF to: 004d5b71 (CONDITIONAL_JUMP)  ; LAB_004d5b71
    INC dword ptr [ESP + 0xbc8]         ; 004d5b6a
    MOV ESI,dword ptr [ESP + 0xc98]     ; 004d5b71
        ;   Label: LAB_004d5b71
    DEC EDI                             ; 004d5b78
    INC EBX                             ; 004d5b79
    CMP EDI,ESI                         ; 004d5b7a
    JG 0x004d5b52                       ; 004d5b7c
        ;   XREF to: 004d5b52 (CONDITIONAL_JUMP)  ; LAB_004d5b52
    MOV EAX,dword ptr [ESP + 0xbc8]     ; 004d5b7e
        ;   Label: LAB_004d5b7e
    CMP EAX,dword ptr [ESP + 0xbc4]     ; 004d5b85
    JNZ 0x004d5bc4                      ; 004d5b8c
        ;   XREF to: 004d5bc4 (CONDITIONAL_JUMP)  ; LAB_004d5bc4
    MOV ESI,0x5e2dfe                    ; 004d5b8e | = "CGun"
    PUSH 0x31c                          ; 004d5b93
    XOR BH,BH                           ; 004d5b98
    MOV EDI,0x7                         ; 004d5b9a
    MOV byte ptr [0x01cd0c68],BH        ; 004d5b9f | DAT_01cd0c68
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d5ba5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d5baa
    TEST EAX,EAX                        ; 004d5bad
    JZ 0x004d5bba                       ; 004d5baf
        ;   XREF to: 004d5bba (CONDITIONAL_JUMP)  ; LAB_004d5bba
    PUSH EAX                            ; 004d5bb1
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d5bb2
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004d5bb7
    MOV EBX,EAX                         ; 004d5bba
        ;   Label: LAB_004d5bba
    TEST EBX,EBX                        ; 004d5bbc
    JNZ 0x004d5d81                      ; 004d5bbe
        ;   XREF to: 004d5d81 (CONDITIONAL_JUMP)  ; LAB_004d5d81
    PUSH 0x5e2e03                       ; 004d5bc4 | DAT_005e2e03
        ;   Label: LAB_004d5bc4
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5bc9
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV EBX,EAX                         ; 004d5bce
    ADD ESP,0x4                         ; 004d5bd0
    MOV EDI,EAX                         ; 004d5bd3
    XOR EDX,EDX                         ; 004d5bd5
    SUB ECX,ECX                         ; 004d5bd7
    DEC ECX                             ; 004d5bd9
    XOR EAX,EAX                         ; 004d5bda
    SCASB.REPNE ES:EDI                  ; 004d5bdc
    NOT ECX                             ; 004d5bde
    DEC ECX                             ; 004d5be0
    MOV dword ptr [ESP + 0xbd0],EDX     ; 004d5be1
    MOV dword ptr [ESP + 0xbcc],ECX     ; 004d5be8
    TEST ECX,ECX                        ; 004d5bef
    JLE 0x004d5c2e                      ; 004d5bf1
        ;   XREF to: 004d5c2e (CONDITIONAL_JUMP)  ; LAB_004d5c2e
    MOV EAX,ECX                         ; 004d5bf3
    NEG EAX                             ; 004d5bf5
    MOV EDI,ECX                         ; 004d5bf7
    ADD ECX,EAX                         ; 004d5bf9
    MOV dword ptr [ESP + 0xc9c],ECX     ; 004d5bfb
    XOR EAX,EAX                         ; 004d5c02
        ;   Label: LAB_004d5c02
    MOV AL,byte ptr [EBX]               ; 004d5c04
    PUSH EAX                            ; 004d5c06
    MOVZX ESI,byte ptr [EDI + 0x1cd0c67] ; 004d5c07 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d5c0e
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d5c13
    CMP ESI,EAX                         ; 004d5c16
    JNZ 0x004d5c21                      ; 004d5c18
        ;   XREF to: 004d5c21 (CONDITIONAL_JUMP)  ; LAB_004d5c21
    INC dword ptr [ESP + 0xbd0]         ; 004d5c1a
    MOV ESI,dword ptr [ESP + 0xc9c]     ; 004d5c21
        ;   Label: LAB_004d5c21
    DEC EDI                             ; 004d5c28
    INC EBX                             ; 004d5c29
    CMP EDI,ESI                         ; 004d5c2a
    JG 0x004d5c02                       ; 004d5c2c
        ;   XREF to: 004d5c02 (CONDITIONAL_JUMP)  ; LAB_004d5c02
    MOV EAX,dword ptr [ESP + 0xbd0]     ; 004d5c2e
        ;   Label: LAB_004d5c2e
    CMP EAX,dword ptr [ESP + 0xbcc]     ; 004d5c35
    JNZ 0x004d5c74                      ; 004d5c3c
        ;   XREF to: 004d5c74 (CONDITIONAL_JUMP)  ; LAB_004d5c74
    MOV EDI,0x5e2e3c                    ; 004d5c3e | = "CGun"
    PUSH 0x31c                          ; 004d5c43
    XOR CL,CL                           ; 004d5c48
    MOV ESI,0x8                         ; 004d5c4a
    MOV byte ptr [0x01cd0c68],CL        ; 004d5c4f | DAT_01cd0c68
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004d5c55
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004d5c5a
    TEST EAX,EAX                        ; 004d5c5d
    JZ 0x004d5c6a                       ; 004d5c5f
        ;   XREF to: 004d5c6a (CONDITIONAL_JUMP)  ; LAB_004d5c6a
    PUSH EAX                            ; 004d5c61
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d5c62
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004d5c67
    MOV EBX,EAX                         ; 004d5c6a
        ;   Label: LAB_004d5c6a
    TEST EBX,EBX                        ; 004d5c6c
    JNZ 0x004d5dd8                      ; 004d5c6e
        ;   XREF to: 004d5dd8 (CONDITIONAL_JUMP)  ; LAB_004d5dd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5c74
        ;   Label: LAB_004d5c74
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d5c77
    JZ 0x004d285f                       ; 004d5c7e
        ;   XREF to: 004d285f (CONDITIONAL_JUMP)  ; LAB_004d285f
    PUSH 0x5e2e41                       ; 004d5c84 | DAT_005e2e41
    CALL support_newmsg.cpp_decryptMessage_FUN_00531110 ; 004d5c89
        ;   XREF to: 00531110 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00531110(char * encrypted_msg)
    MOV ESI,EAX                         ; 004d5c8e
    ADD ESP,0x4                         ; 004d5c90
    XOR ECX,ECX                         ; 004d5c93
    MOV EDI,EAX                         ; 004d5c95
    MOV dword ptr [ESP + 0xbd8],ECX     ; 004d5c97
    SUB ECX,ECX                         ; 004d5c9e
    DEC ECX                             ; 004d5ca0
    XOR EAX,EAX                         ; 004d5ca1
    SCASB.REPNE ES:EDI                  ; 004d5ca3
    NOT ECX                             ; 004d5ca5
    DEC ECX                             ; 004d5ca7
    MOV dword ptr [ESP + 0xbd4],ECX     ; 004d5ca8
    TEST ECX,ECX                        ; 004d5caf
    JLE 0x004d5ceb                      ; 004d5cb1
        ;   XREF to: 004d5ceb (CONDITIONAL_JUMP)  ; LAB_004d5ceb
    MOV EAX,ECX                         ; 004d5cb3
    NEG EAX                             ; 004d5cb5
    MOV EBX,ECX                         ; 004d5cb7
    ADD ECX,EAX                         ; 004d5cb9
    MOV dword ptr [ESP + 0xca0],ECX     ; 004d5cbb
    XOR EAX,EAX                         ; 004d5cc2
        ;   Label: LAB_004d5cc2
    MOV AL,byte ptr [ESI]               ; 004d5cc4
    PUSH EAX                            ; 004d5cc6
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d5cc7 | DAT_01cd0c68
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d5cce
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d5cd3
    CMP EDI,EAX                         ; 004d5cd6
    JZ 0x004d5e2f                       ; 004d5cd8
        ;   XREF to: 004d5e2f (CONDITIONAL_JUMP)  ; LAB_004d5e2f
    MOV EDI,dword ptr [ESP + 0xca0]     ; 004d5cde
        ;   Label: LAB_004d5cde
    DEC EBX                             ; 004d5ce5
    INC ESI                             ; 004d5ce6
    CMP EBX,EDI                         ; 004d5ce7
    JG 0x004d5cc2                       ; 004d5ce9
        ;   XREF to: 004d5cc2 (CONDITIONAL_JUMP)  ; LAB_004d5cc2
    MOV EAX,dword ptr [ESP + 0xbd8]     ; 004d5ceb
        ;   Label: LAB_004d5ceb
    CMP EAX,dword ptr [ESP + 0xbd4]     ; 004d5cf2
    JNZ 0x004d285f                      ; 004d5cf9
        ;   XREF to: 004d285f (CONDITIONAL_JUMP)  ; LAB_004d285f
    XOR CH,CH                           ; 004d5cff
    MOV byte ptr [0x01cd0c68],CH        ; 004d5d01 | DAT_01cd0c68
    CMP dword ptr [0x01cd0c48],0x0      ; 004d5d07 | DAT_01cd0c48
    SETZ AL                             ; 004d5d0e
    AND EAX,0xff                        ; 004d5d11
    MOV [0x01cd0c48],EAX                ; 004d5d16 | DAT_01cd0c48
    JMP 0x004d285f                      ; 004d5d1b
        ;   XREF to: 004d285f (UNCONDITIONAL_JUMP)  ; LAB_004d285f
    PUSH 0x5e288a                       ; 004d5d20 | = "stranger-hat.kfm"
        ;   Label: LAB_004d5d20
    JMP 0x004d50cb                      ; 004d5d25
        ;   XREF to: 004d50cb (UNCONDITIONAL_JUMP)  ; LAB_004d50cb
    PUSH EBX                            ; 004d5d2a
        ;   Label: LAB_004d5d2a
    MOV EAX,[0x0061f650]                ; 004d5d2b | DAT_0061f650
    PUSH EAX                            ; 004d5d30 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d5d31
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d5d36
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5d39
    PUSH EBX                            ; 004d5d3f
    CALL dword ptr [EAX]                ; 004d5d40
    ADD ESP,0x4                         ; 004d5d42
    PUSH ESI                            ; 004d5d45 | = "CGun"
    PUSH EBX                            ; 004d5d46
    MOV dword ptr [EBX + 0x318],EDI     ; 004d5d47
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d5d4d
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d5d52
    MOV EAX,[0x01d06ab4]                ; 004d5d55 | DAT_01d06ab4
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d5d5a
    PUSH 0x1                            ; 004d5d64
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d5d66
    PUSH EBX                            ; 004d5d6d
    ADD EAX,0x1fae8                     ; 004d5d6e
    PUSH EAX                            ; 004d5d73
    CALL core_inv.cpp_FUN_004f7690      ; 004d5d74
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d5d79
    JMP 0x004d5b14                      ; 004d5d7c
        ;   XREF to: 004d5b14 (UNCONDITIONAL_JUMP)  ; LAB_004d5b14
    PUSH EBX                            ; 004d5d81
        ;   Label: LAB_004d5d81
    MOV EAX,[0x0061f650]                ; 004d5d82 | DAT_0061f650
    PUSH EAX                            ; 004d5d87 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d5d88
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d5d8d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5d90
    PUSH EBX                            ; 004d5d96
    CALL dword ptr [EAX]                ; 004d5d97
    ADD ESP,0x4                         ; 004d5d99
    PUSH ESI                            ; 004d5d9c | = "CGun"
    PUSH EBX                            ; 004d5d9d
    MOV dword ptr [EBX + 0x318],EDI     ; 004d5d9e
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d5da4
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d5da9
    MOV EAX,[0x01d06ab4]                ; 004d5dac | DAT_01d06ab4
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d5db1
    PUSH 0x1                            ; 004d5dbb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d5dbd
    PUSH EBX                            ; 004d5dc4
    ADD EAX,0x1fae8                     ; 004d5dc5
    PUSH EAX                            ; 004d5dca
    CALL core_inv.cpp_FUN_004f7690      ; 004d5dcb
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d5dd0
    JMP 0x004d5bc4                      ; 004d5dd3
        ;   XREF to: 004d5bc4 (UNCONDITIONAL_JUMP)  ; LAB_004d5bc4
    PUSH EBX                            ; 004d5dd8
        ;   Label: LAB_004d5dd8
    MOV EAX,[0x0061f650]                ; 004d5dd9 | DAT_0061f650
    PUSH EAX                            ; 004d5dde | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d5ddf
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d5de4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5de7
    PUSH EBX                            ; 004d5ded
    CALL dword ptr [EAX]                ; 004d5dee
    ADD ESP,0x4                         ; 004d5df0
    PUSH EDI                            ; 004d5df3 | = "CGun"
    PUSH EBX                            ; 004d5df4
    MOV dword ptr [EBX + 0x318],ESI     ; 004d5df5
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d5dfb
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d5e00
    MOV EAX,[0x01d06ab4]                ; 004d5e03 | DAT_01d06ab4
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d5e08
    PUSH 0x1                            ; 004d5e12
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d5e14
    PUSH EBX                            ; 004d5e1b
    ADD EAX,0x1fae8                     ; 004d5e1c
    PUSH EAX                            ; 004d5e21
    CALL core_inv.cpp_FUN_004f7690      ; 004d5e22
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d5e27
    JMP 0x004d5c74                      ; 004d5e2a
        ;   XREF to: 004d5c74 (UNCONDITIONAL_JUMP)  ; LAB_004d5c74
    INC dword ptr [ESP + 0xbd8]         ; 004d5e2f
        ;   Label: LAB_004d5e2f
    JMP 0x004d5cde                      ; 004d5e36
        ;   XREF to: 004d5cde (UNCONDITIONAL_JUMP)  ; LAB_004d5cde

