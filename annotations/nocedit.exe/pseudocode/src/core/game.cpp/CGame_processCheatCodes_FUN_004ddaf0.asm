; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; char[256]        Stack[-0x460]:256  local_460
; byte[100]        Stack[-0x360]:100  abStack_360
; SDamageInfo      Stack[-0x2fc]:60  SStack_2fc
; float            Stack[-0x2c0]:4  fStack_2c0
; float            Stack[-0x2bc]:4  fStack_2bc
; float            Stack[-0x2b8]:4  fStack_2b8
; undefined8       Stack[-0x2b4]:8  local_2b4
; int              Stack[-0x2ac]:4  local_2ac
; int              Stack[-0x2a8]:4  local_2a8
; int              Stack[-0x2a4]:4  local_2a4
; int              Stack[-0x2a0]:4  local_2a0
; int              Stack[-0x29c]:4  local_29c
; int              Stack[-0x298]:4  local_298
; int              Stack[-0x294]:4  local_294
; int              Stack[-0x290]:4  local_290
; int              Stack[-0x28c]:4  local_28c
; int              Stack[-0x288]:4  local_288
; int              Stack[-0x284]:4  local_284
; int              Stack[-0x280]:4  local_280
; int              Stack[-0x27c]:4  local_27c
; int              Stack[-0x278]:4  local_278
; int              Stack[-0x274]:4  local_274
; int              Stack[-0x270]:4  local_270
; int              Stack[-0x26c]:4  local_26c
; int              Stack[-0x268]:4  local_268
; int              Stack[-0x264]:4  local_264
; int              Stack[-0x260]:4  local_260
; int              Stack[-0x25c]:4  local_25c
; int              Stack[-0x258]:4  local_258
; int              Stack[-0x254]:4  local_254
; int              Stack[-0x250]:4  iStack_250
; int              Stack[-0x24c]:4  iStack_24c
; int              Stack[-0x248]:4  iStack_248
; char *           Stack[-0x244]:4  pcStack_244
; char *           Stack[-0x240]:4  pcStack_240
; int              Stack[-0x23c]:4  iStack_23c
; int              Stack[-0x238]:4  iStack_238
; char *           Stack[-0x234]:4  pcStack_234
; char *           Stack[-0x230]:4  pcStack_230
; int              Stack[-0x22c]:4  iStack_22c
; int              Stack[-0x228]:4  iStack_228
; char *           Stack[-0x224]:4  pcStack_224
; char *           Stack[-0x220]:4  pcStack_220
; int              Stack[-0x21c]:4  iStack_21c
; int              Stack[-0x218]:4  iStack_218
; char *           Stack[-0x214]:4  pcStack_214
; char *           Stack[-0x210]:4  pcStack_210
; int              Stack[-0x20c]:4  iStack_20c
; int              Stack[-0x208]:4  iStack_208
; char *           Stack[-0x204]:4  pcStack_204
; char *           Stack[-0x200]:4  pcStack_200
; int              Stack[-0x1fc]:4  iStack_1fc
; int              Stack[-0x1f8]:4  iStack_1f8
; char *           Stack[-0x1f4]:4  pcStack_1f4
; char *           Stack[-0x1f0]:4  pcStack_1f0
; int              Stack[-0x1ec]:4  iStack_1ec
; int              Stack[-0x1e8]:4  iStack_1e8
; char *           Stack[-0x1e4]:4  pcStack_1e4
; char *           Stack[-0x1e0]:4  pcStack_1e0
; int              Stack[-0x1dc]:4  iStack_1dc
; int              Stack[-0x1d8]:4  iStack_1d8
; char *           Stack[-0x1d4]:4  pcStack_1d4
; char *           Stack[-0x1d0]:4  pcStack_1d0
; int              Stack[-0x1cc]:4  iStack_1cc
; int              Stack[-0x1c8]:4  iStack_1c8
; int              Stack[-0x1c4]:4  iStack_1c4
; int              Stack[-0x1c0]:4  iStack_1c0
; int              Stack[-0x1bc]:4  iStack_1bc
; int              Stack[-0x1b8]:4  iStack_1b8
; int              Stack[-0x1b4]:4  iStack_1b4
; int              Stack[-0x1b0]:4  iStack_1b0
; int              Stack[-0x1ac]:4  iStack_1ac
; int              Stack[-0x1a8]:4  iStack_1a8
; int              Stack[-0x1a4]:4  iStack_1a4
; int              Stack[-0x1a0]:4  iStack_1a0
; int              Stack[-0x19c]:4  iStack_19c
; int              Stack[-0x198]:4  iStack_198
; float *          Stack[-0x194]:4  local_194
; int              Stack[-0x190]:4  iStack_190
; int              Stack[-0x18c]:4  iStack_18c
; int              Stack[-0x188]:4  iStack_188
; int              Stack[-0x184]:4  iStack_184
; int              Stack[-0x180]:4  iStack_180
; int              Stack[-0x17c]:4  iStack_17c
; int              Stack[-0x178]:4  iStack_178
; int              Stack[-0x174]:4  iStack_174
; int              Stack[-0x170]:4  iStack_170
; int              Stack[-0x16c]:4  iStack_16c
; int              Stack[-0x168]:4  iStack_168
; int              Stack[-0x164]:4  iStack_164
; int              Stack[-0x160]:4  iStack_160
; int              Stack[-0x15c]:4  iStack_15c
; int              Stack[-0x158]:4  iStack_158
; int              Stack[-0x154]:4  iStack_154
; int              Stack[-0x150]:4  iStack_150
; int              Stack[-0x14c]:4  iStack_14c
; int              Stack[-0x148]:4  iStack_148
; float            Stack[-0x144]:4  fStack_144
; CDeformableModelInstance * Stack[-0x140]:4  pCStack_140
; CSkeleton *      Stack[-0x13c]:4  pCStack_13c
; CDeformableModelInstance * Stack[-0x138]:4  pCStack_138
; float            Stack[-0x134]:4  fStack_134
; int              Stack[-0x130]:4  iStack_130
; CDeformableModelInstance * Stack[-0x12c]:4  pCStack_12c
; float            Stack[-0x128]:4  fStack_128
; int              Stack[-0x124]:4  iStack_124
; CDeformableModelInstance * Stack[-0x120]:4  pCStack_120
; float            Stack[-0x11c]:4  fStack_11c
; int              Stack[-0x118]:4  iStack_118
; int              Stack[-0x114]:4  iStack_114
; int              Stack[-0x110]:4  iStack_110
; int              Stack[-0x10c]:4  iStack_10c
; int              Stack[-0x108]:4  iStack_108
; int              Stack[-0x104]:4  iStack_104
; int              Stack[-0x100]:4  iStack_100
; int              Stack[-0xfc]:4  iStack_fc
; int              Stack[-0xf8]:4  iStack_f8
; int              Stack[-0xf4]:4  iStack_f4
; int              Stack[-0xf0]:4  iStack_f0
; int              Stack[-0xec]:4  iStack_ec
; int              Stack[-0xe8]:4  iStack_e8
; int              Stack[-0xe4]:4  iStack_e4
; int              Stack[-0xe0]:4  iStack_e0
; int              Stack[-0xdc]:4  iStack_dc
; int              Stack[-0xd8]:4  iStack_d8
; int              Stack[-0xd4]:4  local_d4
; int              Stack[-0xd0]:4  local_d0
; int              Stack[-0xcc]:4  local_cc
; int              Stack[-0xc8]:4  local_c8
; int              Stack[-0xc4]:4  local_c4
; int              Stack[-0xc0]:4  local_c0
; int              Stack[-0xbc]:4  local_bc
; int              Stack[-0xb8]:4  local_b8
; int              Stack[-0xb4]:4  local_b4
; int              Stack[-0xb0]:4  local_b0
; int              Stack[-0xac]:4  iStack_ac
; int              Stack[-0xa8]:4  iStack_a8
; int              Stack[-0xa4]:4  iStack_a4
; int              Stack[-0xa0]:4  iStack_a0
; int              Stack[-0x9c]:4  iStack_9c
; int              Stack[-0x98]:4  iStack_98
; int              Stack[-0x94]:4  iStack_94
; int              Stack[-0x90]:4  iStack_90
; int              Stack[-0x8c]:4  iStack_8c
; int              Stack[-0x88]:4  iStack_88
; int              Stack[-0x84]:4  iStack_84
; int              Stack[-0x80]:4  iStack_80
; int              Stack[-0x7c]:4  iStack_7c
; int              Stack[-0x78]:4  iStack_78
; int              Stack[-0x74]:4  iStack_74
; int              Stack[-0x70]:4  iStack_70
; int              Stack[-0x6c]:4  iStack_6c
; int              Stack[-0x68]:4  iStack_68
; int              Stack[-0x64]:4  iStack_64
; int              Stack[-0x60]:4  iStack_60
; int              Stack[-0x5c]:4  iStack_5c
; int              Stack[-0x58]:4  iStack_58
; int              Stack[-0x54]:4  iStack_54
; int              Stack[-0x50]:4  iStack_50
; int              Stack[-0x4c]:4  iStack_4c
; int              Stack[-0x48]:4  iStack_48
; int              Stack[-0x44]:4  iStack_44
; int              Stack[-0x40]:4  iStack_40
; int              Stack[-0x3c]:4  iStack_3c
; int              Stack[-0x38]:4  iStack_38
; int              Stack[-0x34]:4  iStack_34
; int              Stack[-0x30]:4  iStack_30
; int              Stack[-0x2c]:4  iStack_2c
; int              Stack[-0x28]:4  iStack_28
; int              Stack[-0x24]:4  iStack_24
; int              Stack[-0x20]:4  iStack_20
; int              Stack[-0x1c]:4  iStack_1c
; uint             Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3567
;
; Referenced Globals:
;   TerminatedCString s_Enter_Movie_FPS_0062b161
;   TerminatedCString s_Enter_number_of_frames_t_0062b171
;   TerminatedCString s_Enter_image_width_0062b1bb
;   TerminatedCString s_Enter_image_height_0062b1cd
;   TerminatedCString s_Press_CTRL_V_to_begin_re_0062b1e0
;   TerminatedCString s_cheat_1_wav_0062b9dd
;   TerminatedCString s_headOfHorror_0062b9e9
;   TerminatedCString s_The_horror_has_been_unle_0062b9f6
;   TerminatedCString s_cheat_1_wav_0062ba15
;   TerminatedCString s_Enter_cheat_code_0062ba21
;   char[54] g_CheatStr_DebugMode
;   TerminatedCString s_Buy_Fly_today_0062ba68
;   TerminatedCString s_buy_fly_today_wav_4_0_0062ba78
;   char[52] g_CheatStr_ShowFPS
;   TerminatedCString s_FPS_3_2lf_0062bac4
;   ... and 182 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_event.cpp_CEventList_validateCommands_FUN_004add40
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   core_game.cpp_giveHeroWeapon_FUN_004dd870
;   core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930
;   core_game.cpp_scaleBoneRecursive_FUN_004dda80
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddaf0
        ;   Label: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
    PUSH ESI                            ; 004ddaf1
    PUSH EDI                            ; 004ddaf2
    PUSH EBP                            ; 004ddaf3
    MOV EBP,ESP                         ; 004ddaf4
    SUB ESP,0x44c                       ; 004ddaf6
    AND ESP,0xfffffff8                  ; 004ddafc
    CMP dword ptr [0x02d828d0],0x0      ; 004ddaff | g_CheatSystemEnabled
    JZ 0x004ddb0f                       ; 004ddb06
        ;   XREF to: 004ddb0f (CONDITIONAL_JUMP)  ; LAB_004ddb0f
    MOV ESP,EBP                         ; 004ddb08
        ;   Label: LAB_004ddb08
    POP EBP                             ; 004ddb0a
    POP EDI                             ; 004ddb0b
    POP ESI                             ; 004ddb0c
    POP EBX                             ; 004ddb0d
    RET                                 ; 004ddb0e
    PUSH 0x62b9e9                       ; 004ddb0f | = "headOfHorror"
        ;   Label: LAB_004ddb0f
    MOV ECX,dword ptr [0x006793d0]      ; 004ddb14 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 004ddb1a | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004ddb1b
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ddb20
    TEST EAX,EAX                        ; 004ddb23
    JZ 0x004ddb77                       ; 004ddb25
        ;   XREF to: 004ddb77 (CONDITIONAL_JUMP)  ; LAB_004ddb77
    MOV EAX,[0x0067b654]                ; 004ddb27 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x214],0x29a   ; 004ddb2c | DAT_02d81cb0
    JZ 0x004ddb77                       ; 004ddb36
        ;   XREF to: 004ddb77 (CONDITIONAL_JUMP)  ; LAB_004ddb77
    PUSH 0x40a00000                     ; 004ddb38
    PUSH 0x62b9f6                       ; 004ddb3d | = "The horror has been unleashed."
    MOV dword ptr [EAX + 0x214],0x29a   ; 004ddb42 | DAT_02d81cb0
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004ddb4c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004ddb51
    PUSH EAX                            ; 004ddb54
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ddb55
    PUSH ESI                            ; 004ddb58
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004ddb59
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004ddb5e
    PUSH 0x62ba15                       ; 004ddb61 | = "cheat-1.wav"
    PUSH 0x0                            ; 004ddb66
    MOV EDI,dword ptr [0x00681ef8]      ; 004ddb68 | g_CSoundPtr
    PUSH EDI                            ; 004ddb6e | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004ddb6f
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004ddb74
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddb77
        ;   Label: LAB_004ddb77
    CMP dword ptr [EAX + 0x1dc],0x0     ; 004ddb7a
    JZ 0x004df23f                       ; 004ddb81
        ;   XREF to: 004df23f (CONDITIONAL_JUMP)  ; LAB_004df23f
    LEA EAX,[EAX]                       ; 004ddb87
    LEA EDX,[EDX]                       ; 004ddb8d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddb90
        ;   Label: LAB_004ddb90
    ADD EAX,0x1ec                       ; 004ddb93
    MOV dword ptr [ESP + 0x2cc],EAX     ; 004ddb98
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 004ddb9f
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_004ddb9f
    TEST EAX,EAX                        ; 004ddba4
    JZ 0x004ddb08                       ; 004ddba6
        ;   XREF to: 004ddb08 (CONDITIONAL_JUMP)  ; LAB_004ddb08
    MOV EBX,dword ptr [0x0067cf44]      ; 004ddbac | g_CKeysInstance | g_CKeysPtr
    PUSH EBX                            ; 004ddbb2 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 004ddbb3
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    MOV EBX,0x13                        ; 004ddbb8
    ADD ESP,0x4                         ; 004ddbbd
    MOV AH,AL                           ; 004ddbc0
    DEC EBX                             ; 004ddbc2
        ;   Label: LAB_004ddbc2
    MOV CL,byte ptr [EBX + 0x2d831d8]   ; 004ddbc3
    MOV byte ptr [EBX + 0x2d831d9],CL   ; 004ddbc9
    TEST EBX,EBX                        ; 004ddbcf
    JG 0x004ddbc2                       ; 004ddbd1
        ;   XREF to: 004ddbc2 (CONDITIONAL_JUMP)  ; LAB_004ddbc2
    PUSH 0x62ba32                       ; 004ddbd3 | g_CheatStr_DebugMode
    MOV byte ptr [0x02d831d8],AH        ; 004ddbd8 | g_InputHistory+1
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004ddbde
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004ddbe3
    ADD ESP,0x4                         ; 004ddbe5
    MOV EDI,EAX                         ; 004ddbe8
    MOV EBX,EAX                         ; 004ddbea
    SUB ECX,ECX                         ; 004ddbec
    DEC ECX                             ; 004ddbee
    XOR EAX,EAX                         ; 004ddbef
    SCASB.REPNE ES:EDI                  ; 004ddbf1
    NOT ECX                             ; 004ddbf3
    DEC ECX                             ; 004ddbf5
    MOV dword ptr [ESP + 0x1bc],ESI     ; 004ddbf6
    MOV dword ptr [ESP + 0x1b8],ECX     ; 004ddbfd
    TEST ECX,ECX                        ; 004ddc04
    JLE 0x004ddc40                      ; 004ddc06
        ;   XREF to: 004ddc40 (CONDITIONAL_JUMP)  ; LAB_004ddc40
    MOV EAX,ECX                         ; 004ddc08
    NEG EAX                             ; 004ddc0a
    MOV EDI,ECX                         ; 004ddc0c
    ADD ECX,EAX                         ; 004ddc0e
    MOV dword ptr [ESP + 0x38c],ECX     ; 004ddc10
    XOR EAX,EAX                         ; 004ddc17
        ;   Label: LAB_004ddc17
    MOV AL,byte ptr [EBX]               ; 004ddc19
    PUSH EAX                            ; 004ddc1b
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004ddc1c | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004ddc23
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004ddc28
    CMP ESI,EAX                         ; 004ddc2b
    JZ 0x004df2bc                       ; 004ddc2d
        ;   XREF to: 004df2bc (CONDITIONAL_JUMP)  ; LAB_004df2bc
    MOV EAX,dword ptr [ESP + 0x38c]     ; 004ddc33
        ;   Label: LAB_004ddc33
    DEC EDI                             ; 004ddc3a
    INC EBX                             ; 004ddc3b
    CMP EDI,EAX                         ; 004ddc3c
    JG 0x004ddc17                       ; 004ddc3e
        ;   XREF to: 004ddc17 (CONDITIONAL_JUMP)  ; LAB_004ddc17
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 004ddc40
        ;   Label: LAB_004ddc40
    CMP EAX,dword ptr [ESP + 0x1b8]     ; 004ddc47
    JNZ 0x004ddcaa                      ; 004ddc4e
        ;   XREF to: 004ddcaa (CONDITIONAL_JUMP)  ; LAB_004ddcaa
    PUSH 0x40a00000                     ; 004ddc50
    XOR DH,DH                           ; 004ddc55
    PUSH 0x62ba68                       ; 004ddc57 | = "Buy Fly! today!"
    MOV byte ptr [0x02d831d8],DH        ; 004ddc5c | g_InputHistory+1
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004ddc62
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004ddc67
    PUSH EAX                            ; 004ddc6a
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ddc6b
    PUSH ECX                            ; 004ddc6e
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004ddc6f
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004ddc74
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddc77
    CMP dword ptr [EAX + 0x210],0x0     ; 004ddc7a
    SETZ AL                             ; 004ddc81
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ddc84
    AND EAX,0xff                        ; 004ddc87
    MOV dword ptr [EBX + 0x210],EAX     ; 004ddc8c
    JZ 0x004ddcaa                       ; 004ddc92
        ;   XREF to: 004ddcaa (CONDITIONAL_JUMP)  ; LAB_004ddcaa
    PUSH 0x62ba78                       ; 004ddc94 | = "buy-fly-today.wav @ 4.0"
    PUSH 0x0                            ; 004ddc99
    MOV EDI,dword ptr [0x00681ef8]      ; 004ddc9b | g_CSoundPtr
    PUSH EDI                            ; 004ddca1 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004ddca2
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004ddca7
    PUSH 0x62ba90                       ; 004ddcaa | g_CheatStr_ShowFPS
        ;   Label: LAB_004ddcaa
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004ddcaf
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004ddcb4
    ADD ESP,0x4                         ; 004ddcb6
    XOR EAX,EAX                         ; 004ddcb9
    MOV EDI,EBX                         ; 004ddcbb
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004ddcbd
    SUB ECX,ECX                         ; 004ddcc4
    DEC ECX                             ; 004ddcc6
    XOR EAX,EAX                         ; 004ddcc7
    SCASB.REPNE ES:EDI                  ; 004ddcc9
    NOT ECX                             ; 004ddccb
    DEC ECX                             ; 004ddccd
    MOV dword ptr [ESP + 0x1c0],ECX     ; 004ddcce
    TEST ECX,ECX                        ; 004ddcd5
    JLE 0x004ddd14                      ; 004ddcd7
        ;   XREF to: 004ddd14 (CONDITIONAL_JUMP)  ; LAB_004ddd14
    MOV EAX,ECX                         ; 004ddcd9
    NEG EAX                             ; 004ddcdb
    MOV EDI,ECX                         ; 004ddcdd
    ADD ECX,EAX                         ; 004ddcdf
    MOV dword ptr [ESP + 0x1b4],ECX     ; 004ddce1
    XOR EAX,EAX                         ; 004ddce8
        ;   Label: LAB_004ddce8
    MOV AL,byte ptr [EBX]               ; 004ddcea
    PUSH EAX                            ; 004ddcec
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004ddced | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004ddcf4
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004ddcf9
    CMP ESI,EAX                         ; 004ddcfc
    JNZ 0x004ddd07                      ; 004ddcfe
        ;   XREF to: 004ddd07 (CONDITIONAL_JUMP)  ; LAB_004ddd07
    INC dword ptr [ESP + 0x1c4]         ; 004ddd00
    MOV ECX,dword ptr [ESP + 0x1b4]     ; 004ddd07
        ;   Label: LAB_004ddd07
    DEC EDI                             ; 004ddd0e
    INC EBX                             ; 004ddd0f
    CMP EDI,ECX                         ; 004ddd10
    JG 0x004ddce8                       ; 004ddd12
        ;   XREF to: 004ddce8 (CONDITIONAL_JUMP)  ; LAB_004ddce8
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004ddd14
        ;   Label: LAB_004ddd14
    CMP EAX,dword ptr [ESP + 0x1c0]     ; 004ddd1b
    JNZ 0x004ddd5b                      ; 004ddd22
        ;   XREF to: 004ddd5b (CONDITIONAL_JUMP)  ; LAB_004ddd5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddd24
    XOR BL,BL                           ; 004ddd27
    MOV ESI,dword ptr [EAX + 0x208]     ; 004ddd29
    MOV byte ptr [0x02d831d8],BL        ; 004ddd2f | g_InputHistory+1
    TEST ESI,ESI                        ; 004ddd35
    JNZ 0x004df2c8                      ; 004ddd37
        ;   XREF to: 004df2c8 (CONDITIONAL_JUMP)  ; LAB_004df2c8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ddd3d
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004ddd40
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV dword ptr [EBX + 0x208],0x1     ; 004ddd45
    MOV dword ptr [EBX + 0x268],EAX     ; 004ddd4f
    MOV dword ptr [EBX + 0x26c],ESI     ; 004ddd55
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddd5b
        ;   Label: LAB_004ddd5b
    CMP dword ptr [EAX + 0x210],0x0     ; 004ddd5e
    JZ 0x004dde0c                       ; 004ddd65
        ;   XREF to: 004dde0c (CONDITIONAL_JUMP)  ; LAB_004dde0c
    PUSH 0x62bad0                       ; 004ddd6b | g_CheatStr_ProfileMode
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004ddd70
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004ddd75
    ADD ESP,0x4                         ; 004ddd77
    MOV dword ptr [ESP + 0x1cc],EDI     ; 004ddd7a
    MOV EDI,EAX                         ; 004ddd81
    MOV ESI,EAX                         ; 004ddd83
    SUB ECX,ECX                         ; 004ddd85
    DEC ECX                             ; 004ddd87
    XOR EAX,EAX                         ; 004ddd88
    SCASB.REPNE ES:EDI                  ; 004ddd8a
    NOT ECX                             ; 004ddd8c
    DEC ECX                             ; 004ddd8e
    MOV dword ptr [ESP + 0x1c8],ECX     ; 004ddd8f
    TEST ECX,ECX                        ; 004ddd96
    JLE 0x004dddd5                      ; 004ddd98
        ;   XREF to: 004dddd5 (CONDITIONAL_JUMP)  ; LAB_004dddd5
    MOV EAX,ECX                         ; 004ddd9a
    NEG EAX                             ; 004ddd9c
    MOV EBX,ECX                         ; 004ddd9e
    ADD ECX,EAX                         ; 004ddda0
    MOV dword ptr [ESP + 0x390],ECX     ; 004ddda2
    XOR EAX,EAX                         ; 004ddda9
        ;   Label: LAB_004ddda9
    MOV AL,byte ptr [ESI]               ; 004dddab
    PUSH EAX                            ; 004dddad
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004dddae | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dddb5
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dddba
    CMP EDI,EAX                         ; 004dddbd
    JNZ 0x004dddc8                      ; 004dddbf
        ;   XREF to: 004dddc8 (CONDITIONAL_JUMP)  ; LAB_004dddc8
    INC dword ptr [ESP + 0x1cc]         ; 004dddc1
    MOV EDX,dword ptr [ESP + 0x390]     ; 004dddc8
        ;   Label: LAB_004dddc8
    DEC EBX                             ; 004dddcf
    INC ESI                             ; 004dddd0
    CMP EBX,EDX                         ; 004dddd1
    JG 0x004ddda9                       ; 004dddd3
        ;   XREF to: 004ddda9 (CONDITIONAL_JUMP)  ; LAB_004ddda9
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 004dddd5
        ;   Label: LAB_004dddd5
    CMP EAX,dword ptr [ESP + 0x1c8]     ; 004ddddc
    JNZ 0x004dde0c                      ; 004ddde3
        ;   XREF to: 004dde0c (CONDITIONAL_JUMP)  ; LAB_004dde0c
    XOR BH,BH                           ; 004ddde5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddde7
    MOV byte ptr [0x02d831d8],BH        ; 004dddea | g_InputHistory+1
    MOV EBX,dword ptr [EAX + 0x20c]     ; 004dddf0
    INC EBX                             ; 004dddf6
    MOV dword ptr [EAX + 0x20c],EBX     ; 004dddf7
    CMP EBX,0x2                         ; 004dddfd
    JLE 0x004dde0c                      ; 004dde00
        ;   XREF to: 004dde0c (CONDITIONAL_JUMP)  ; LAB_004dde0c
    MOV dword ptr [EAX + 0x20c],0x0     ; 004dde02
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dde0c
        ;   Label: LAB_004dde0c
    CMP dword ptr [EAX + 0x210],0x0     ; 004dde0f
    JZ 0x004ddef2                       ; 004dde16
        ;   XREF to: 004ddef2 (CONDITIONAL_JUMP)  ; LAB_004ddef2
    PUSH 0x62bb05                       ; 004dde1c | g_CheatStr_EventDebug
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dde21
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004dde26
    ADD ESP,0x4                         ; 004dde28
    XOR ECX,ECX                         ; 004dde2b
    MOV EDI,EAX                         ; 004dde2d
    MOV dword ptr [ESP + 0x1d4],ECX     ; 004dde2f
    SUB ECX,ECX                         ; 004dde36
    DEC ECX                             ; 004dde38
    XOR EAX,EAX                         ; 004dde39
    SCASB.REPNE ES:EDI                  ; 004dde3b
    NOT ECX                             ; 004dde3d
    DEC ECX                             ; 004dde3f
    MOV dword ptr [ESP + 0x1d0],ECX     ; 004dde40
    TEST ECX,ECX                        ; 004dde47
    JLE 0x004dde88                      ; 004dde49
        ;   XREF to: 004dde88 (CONDITIONAL_JUMP)  ; LAB_004dde88
    MOV EAX,ECX                         ; 004dde4b
    MOV ESI,EBX                         ; 004dde4d
    NEG EAX                             ; 004dde4f
    MOV EBX,ECX                         ; 004dde51
    ADD ECX,EAX                         ; 004dde53
    MOV dword ptr [ESP + 0x394],ECX     ; 004dde55
    XOR EAX,EAX                         ; 004dde5c
        ;   Label: LAB_004dde5c
    MOV AL,byte ptr [ESI]               ; 004dde5e
    PUSH EAX                            ; 004dde60
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004dde61 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dde68
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dde6d
    CMP EDI,EAX                         ; 004dde70
    JNZ 0x004dde7b                      ; 004dde72
        ;   XREF to: 004dde7b (CONDITIONAL_JUMP)  ; LAB_004dde7b
    INC dword ptr [ESP + 0x1d4]         ; 004dde74
    MOV EDI,dword ptr [ESP + 0x394]     ; 004dde7b
        ;   Label: LAB_004dde7b
    DEC EBX                             ; 004dde82
    INC ESI                             ; 004dde83
    CMP EBX,EDI                         ; 004dde84
    JG 0x004dde5c                       ; 004dde86
        ;   XREF to: 004dde5c (CONDITIONAL_JUMP)  ; LAB_004dde5c
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004dde88
        ;   Label: LAB_004dde88
    CMP EAX,dword ptr [ESP + 0x1d0]     ; 004dde8f
    JNZ 0x004ddef2                      ; 004dde96
        ;   XREF to: 004ddef2 (CONDITIONAL_JUMP)  ; LAB_004ddef2
    XOR CL,CL                           ; 004dde98
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dde9a
    MOV byte ptr [0x02d831d8],CL        ; 004dde9d | g_InputHistory+1
    CMP dword ptr [EAX + 0x1d8],0x0     ; 004ddea3
    SETZ AL                             ; 004ddeaa
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ddead
    AND EAX,0xff                        ; 004ddeb0
    MOV dword ptr [EBX + 0x1d8],EAX     ; 004ddeb5
    JZ 0x004df353                       ; 004ddebb
        ;   XREF to: 004df353 (CONDITIONAL_JUMP)  ; LAB_004df353
    PUSH 0x40a00000                     ; 004ddec1
    PUSH 0x62bb38                       ; 004ddec6 | = "Event debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004ddecb
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_004ddecb
    ADD ESP,0x4                         ; 004dded0
    PUSH EAX                            ; 004dded3
    PUSH EBX                            ; 004dded4
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dded5
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004ddeda
    PUSH 0x62bb57                       ; 004ddedd | = "cheat-1.wav"
    PUSH 0x0                            ; 004ddee2
    MOV EAX,[0x00681ef8]                ; 004ddee4 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004ddee9 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004ddeea
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004ddeef
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddef2
        ;   Label: LAB_004ddef2
    CMP dword ptr [EAX + 0x210],0x0     ; 004ddef5
    JZ 0x004ddffb                       ; 004ddefc
        ;   XREF to: 004ddffb (CONDITIONAL_JUMP)  ; LAB_004ddffb
    PUSH 0x62bb63                       ; 004ddf02 | g_CheatStr_ScriptDebug
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004ddf07
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004ddf0c
    ADD ESP,0x4                         ; 004ddf0e
    MOV EDI,EAX                         ; 004ddf11
    MOV EBX,EAX                         ; 004ddf13
    SUB ECX,ECX                         ; 004ddf15
    DEC ECX                             ; 004ddf17
    XOR EAX,EAX                         ; 004ddf18
    SCASB.REPNE ES:EDI                  ; 004ddf1a
    NOT ECX                             ; 004ddf1c
    DEC ECX                             ; 004ddf1e
    MOV dword ptr [ESP + 0x1dc],ESI     ; 004ddf1f
    MOV dword ptr [ESP + 0x1d8],ECX     ; 004ddf26
    TEST ECX,ECX                        ; 004ddf2d
    JLE 0x004ddf6e                      ; 004ddf2f
        ;   XREF to: 004ddf6e (CONDITIONAL_JUMP)  ; LAB_004ddf6e
    MOV EAX,ECX                         ; 004ddf31
    MOV ESI,EBX                         ; 004ddf33
    NEG EAX                             ; 004ddf35
    MOV EBX,ECX                         ; 004ddf37
    ADD ECX,EAX                         ; 004ddf39
    MOV dword ptr [ESP + 0x398],ECX     ; 004ddf3b
    XOR EAX,EAX                         ; 004ddf42
        ;   Label: LAB_004ddf42
    MOV AL,byte ptr [ESI]               ; 004ddf44
    PUSH EAX                            ; 004ddf46
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004ddf47 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004ddf4e
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004ddf53
    CMP EDI,EAX                         ; 004ddf56
    JNZ 0x004ddf61                      ; 004ddf58
        ;   XREF to: 004ddf61 (CONDITIONAL_JUMP)  ; LAB_004ddf61
    INC dword ptr [ESP + 0x1dc]         ; 004ddf5a
    MOV EDI,dword ptr [ESP + 0x398]     ; 004ddf61
        ;   Label: LAB_004ddf61
    DEC EBX                             ; 004ddf68
    INC ESI                             ; 004ddf69
    CMP EBX,EDI                         ; 004ddf6a
    JG 0x004ddf42                       ; 004ddf6c
        ;   XREF to: 004ddf42 (CONDITIONAL_JUMP)  ; LAB_004ddf42
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 004ddf6e
        ;   Label: LAB_004ddf6e
    CMP EAX,dword ptr [ESP + 0x1d8]     ; 004ddf75
    JNZ 0x004ddffb                      ; 004ddf7c
        ;   XREF to: 004ddffb (CONDITIONAL_JUMP)  ; LAB_004ddffb
    XOR CH,CH                           ; 004ddf7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddf80
    MOV byte ptr [0x02d831d8],CH        ; 004ddf83 | g_InputHistory+1
    CMP dword ptr [EAX + 0x1dc],0x0     ; 004ddf89
    SETZ AL                             ; 004ddf90
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ddf93
    AND EAX,0xff                        ; 004ddf96
    MOV dword ptr [EBX + 0x1dc],EAX     ; 004ddf9b
    JZ 0x004df362                       ; 004ddfa1
        ;   XREF to: 004df362 (CONDITIONAL_JUMP)  ; LAB_004df362
    PUSH 0x40a00000                     ; 004ddfa7
    PUSH 0x62bb97                       ; 004ddfac | = "Script debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004ddfb1
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004ddfb6
    PUSH EAX                            ; 004ddfb9
    PUSH EBX                            ; 004ddfba
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004ddfbb
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004ddfc0
    PUSH 0xf0                           ; 004ddfc3
    PUSH 0x0                            ; 004ddfc8
    PUSH 0x0                            ; 004ddfca
    MOV ECX,dword ptr [0x006810c8]      ; 004ddfcc | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004ddfd2 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x278],0x1     ; 004ddfd3
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0 ; 004ddfdd
        ;   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height) | g_CDemonSetInstance
        ;   Label: LAB_004ddfdd
    ADD ESP,0x10                        ; 004ddfe2
    PUSH 0x62bbb8                       ; 004ddfe5 | = "cheat-1.wav"
    PUSH 0x0                            ; 004ddfea
    MOV EBX,dword ptr [0x00681ef8]      ; 004ddfec | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004ddff2 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004ddff3
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004ddff8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddffb
        ;   Label: LAB_004ddffb
    CMP dword ptr [EAX + 0x210],0x0     ; 004ddffe
    JZ 0x004de0e2                       ; 004de005
        ;   XREF to: 004de0e2 (CONDITIONAL_JUMP)  ; LAB_004de0e2
    PUSH 0x62bbc4                       ; 004de00b | g_CheatStr_MemoryDebug
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de010
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004de015
    ADD ESP,0x4                         ; 004de017
    XOR ECX,ECX                         ; 004de01a
    MOV EDI,EAX                         ; 004de01c
    MOV dword ptr [ESP + 0x1e4],ECX     ; 004de01e
    SUB ECX,ECX                         ; 004de025
    DEC ECX                             ; 004de027
    XOR EAX,EAX                         ; 004de028
    SCASB.REPNE ES:EDI                  ; 004de02a
    NOT ECX                             ; 004de02c
    DEC ECX                             ; 004de02e
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004de02f
    TEST ECX,ECX                        ; 004de036
    JLE 0x004de077                      ; 004de038
        ;   XREF to: 004de077 (CONDITIONAL_JUMP)  ; LAB_004de077
    MOV EAX,ECX                         ; 004de03a
    MOV ESI,EBX                         ; 004de03c
    NEG EAX                             ; 004de03e
    MOV EBX,ECX                         ; 004de040
    ADD ECX,EAX                         ; 004de042
    MOV dword ptr [ESP + 0x39c],ECX     ; 004de044
    XOR EAX,EAX                         ; 004de04b
        ;   Label: LAB_004de04b
    MOV AL,byte ptr [ESI]               ; 004de04d
    PUSH EAX                            ; 004de04f
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004de050 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de057
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de05c
    CMP EDI,EAX                         ; 004de05f
    JNZ 0x004de06a                      ; 004de061
        ;   XREF to: 004de06a (CONDITIONAL_JUMP)  ; LAB_004de06a
    INC dword ptr [ESP + 0x1e4]         ; 004de063
    MOV EDI,dword ptr [ESP + 0x39c]     ; 004de06a
        ;   Label: LAB_004de06a
    DEC EBX                             ; 004de071
    INC ESI                             ; 004de072
    CMP EBX,EDI                         ; 004de073
    JG 0x004de04b                       ; 004de075
        ;   XREF to: 004de04b (CONDITIONAL_JUMP)  ; LAB_004de04b
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004de077
        ;   Label: LAB_004de077
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004de07e
    CMP EAX,EDX                         ; 004de085
    JNZ 0x004de0e2                      ; 004de087
        ;   XREF to: 004de0e2 (CONDITIONAL_JUMP)  ; LAB_004de0e2
    XOR AL,DL                           ; 004de089
    MOV [0x02d831d8],AL                 ; 004de08b | g_InputHistory+1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de090
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004de093
    SETZ AL                             ; 004de09a
    MOV EBX,dword ptr [EBP + 0x14]      ; 004de09d
    AND EAX,0xff                        ; 004de0a0
    MOV dword ptr [EBX + 0x1f8],EAX     ; 004de0a5
    JZ 0x004df39e                       ; 004de0ab
        ;   XREF to: 004df39e (CONDITIONAL_JUMP)  ; LAB_004df39e
    PUSH 0x40a00000                     ; 004de0b1
    PUSH 0x62bbf8                       ; 004de0b6 | = "Memory debugging on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de0bb
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_004de0bb
    ADD ESP,0x4                         ; 004de0c0
    PUSH EAX                            ; 004de0c3
    PUSH EBX                            ; 004de0c4
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de0c5
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de0ca
    PUSH 0x62bc21                       ; 004de0cd | = "cheat-1.wav"
    PUSH 0x0                            ; 004de0d2
    MOV EAX,[0x00681ef8]                ; 004de0d4 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004de0d9 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de0da
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de0df
    PUSH 0x62bc2d                       ; 004de0e2 | g_CheatStr_ManualAim
        ;   Label: LAB_004de0e2
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de0e7
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004de0ec
    ADD ESP,0x4                         ; 004de0ee
    XOR ECX,ECX                         ; 004de0f1
    MOV EDI,EAX                         ; 004de0f3
    MOV dword ptr [ESP + 0x1ec],ECX     ; 004de0f5
    SUB ECX,ECX                         ; 004de0fc
    DEC ECX                             ; 004de0fe
    XOR EAX,EAX                         ; 004de0ff
    SCASB.REPNE ES:EDI                  ; 004de101
    NOT ECX                             ; 004de103
    DEC ECX                             ; 004de105
    MOV dword ptr [ESP + 0x1e8],ECX     ; 004de106
    TEST ECX,ECX                        ; 004de10d
    JLE 0x004de14c                      ; 004de10f
        ;   XREF to: 004de14c (CONDITIONAL_JUMP)  ; LAB_004de14c
    MOV EAX,ECX                         ; 004de111
    NEG EAX                             ; 004de113
    MOV EDI,ECX                         ; 004de115
    ADD ECX,EAX                         ; 004de117
    MOV dword ptr [ESP + 0x3a0],ECX     ; 004de119
    XOR EAX,EAX                         ; 004de120
        ;   Label: LAB_004de120
    MOV AL,byte ptr [EBX]               ; 004de122
    PUSH EAX                            ; 004de124
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004de125 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de12c
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de131
    CMP ESI,EAX                         ; 004de134
    JNZ 0x004de13f                      ; 004de136
        ;   XREF to: 004de13f (CONDITIONAL_JUMP)  ; LAB_004de13f
    INC dword ptr [ESP + 0x1ec]         ; 004de138
    MOV ESI,dword ptr [ESP + 0x3a0]     ; 004de13f
        ;   Label: LAB_004de13f
    DEC EDI                             ; 004de146
    INC EBX                             ; 004de147
    CMP EDI,ESI                         ; 004de148
    JG 0x004de120                       ; 004de14a
        ;   XREF to: 004de120 (CONDITIONAL_JUMP)  ; LAB_004de120
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004de14c
        ;   Label: LAB_004de14c
    CMP EAX,dword ptr [ESP + 0x1e8]     ; 004de153
    JNZ 0x004de1c2                      ; 004de15a
        ;   XREF to: 004de1c2 (CONDITIONAL_JUMP)  ; LAB_004de1c2
    XOR AH,AH                           ; 004de15c
    PUSH 0x40a00000                     ; 004de15e
    MOV byte ptr [0x02d831d8],AH        ; 004de163 | g_InputHistory+1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de169
    PUSH 0x62bc61                       ; 004de16c | = "Manual aim enabled"
    MOV dword ptr [EAX + 0xc4],0x2      ; 004de171
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de17b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004de180
    PUSH EAX                            ; 004de183
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de184
    PUSH EAX                            ; 004de187
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de188
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de18d
    PUSH 0x62bc74                       ; 004de190 | = "cheat-1.wav"
    PUSH 0x0                            ; 004de195
    MOV EDX,dword ptr [0x00681ef8]      ; 004de197 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 004de19d | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de19e
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de1a3
    MOV EBX,dword ptr [0x02db87d0]      ; 004de1a6 | g_LocalHeroIndex
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de1ac
    MOV EBX,dword ptr [EBX*0x4 + 0x2db87c0] ; 004de1af | g_HeroActors
    MOV EAX,dword ptr [EAX + 0xc4]      ; 004de1b6
    MOV dword ptr [EBX + 0x1f734],EAX   ; 004de1bc
    PUSH 0x62bc80                       ; 004de1c2 | g_CheatStr_AutoAim
        ;   Label: LAB_004de1c2
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de1c7
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004de1cc
    ADD ESP,0x4                         ; 004de1ce
    XOR ECX,ECX                         ; 004de1d1
    MOV EDI,EAX                         ; 004de1d3
    MOV dword ptr [ESP + 0x1f4],ECX     ; 004de1d5
    SUB ECX,ECX                         ; 004de1dc
    DEC ECX                             ; 004de1de
    XOR EAX,EAX                         ; 004de1df
    SCASB.REPNE ES:EDI                  ; 004de1e1
    NOT ECX                             ; 004de1e3
    DEC ECX                             ; 004de1e5
    MOV dword ptr [ESP + 0x1f0],ECX     ; 004de1e6
    TEST ECX,ECX                        ; 004de1ed
    JLE 0x004de22c                      ; 004de1ef
        ;   XREF to: 004de22c (CONDITIONAL_JUMP)  ; LAB_004de22c
    MOV EAX,ECX                         ; 004de1f1
    NEG EAX                             ; 004de1f3
    MOV EDI,ECX                         ; 004de1f5
    ADD ECX,EAX                         ; 004de1f7
    MOV dword ptr [ESP + 0x3a4],ECX     ; 004de1f9
    XOR EAX,EAX                         ; 004de200
        ;   Label: LAB_004de200
    MOV AL,byte ptr [EBX]               ; 004de202
    PUSH EAX                            ; 004de204
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004de205 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de20c
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de211
    CMP ESI,EAX                         ; 004de214
    JNZ 0x004de21f                      ; 004de216
        ;   XREF to: 004de21f (CONDITIONAL_JUMP)  ; LAB_004de21f
    INC dword ptr [ESP + 0x1f4]         ; 004de218
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 004de21f
        ;   Label: LAB_004de21f
    DEC EDI                             ; 004de226
    INC EBX                             ; 004de227
    CMP EDI,EAX                         ; 004de228
    JG 0x004de200                       ; 004de22a
        ;   XREF to: 004de200 (CONDITIONAL_JUMP)  ; LAB_004de200
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 004de22c
        ;   Label: LAB_004de22c
    CMP EAX,dword ptr [ESP + 0x1f0]     ; 004de233
    JNZ 0x004de2a1                      ; 004de23a
        ;   XREF to: 004de2a1 (CONDITIONAL_JUMP)  ; LAB_004de2a1
    PUSH 0x40a00000                     ; 004de23c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de241
    XOR DL,DL                           ; 004de244
    PUSH 0x62bcb2                       ; 004de246 | = "Auto aim enabled"
    MOV byte ptr [0x02d831d8],DL        ; 004de24b | g_InputHistory+1
    MOV dword ptr [EAX + 0xc4],0x0      ; 004de251
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de25b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004de260
    PUSH EAX                            ; 004de263
    MOV ECX,dword ptr [EBP + 0x14]      ; 004de264
    PUSH ECX                            ; 004de267
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de268
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de26d
    PUSH 0x62bcc3                       ; 004de270 | = "cheat-1.wav"
    PUSH 0x0                            ; 004de275
    MOV EBX,dword ptr [0x00681ef8]      ; 004de277 | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004de27d | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de27e
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de283
    MOV EAX,[0x02db87d0]                ; 004de286 | g_LocalHeroIndex
    MOV EBX,dword ptr [EBP + 0x14]      ; 004de28b
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004de28e | g_HeroActors
    MOV EBX,dword ptr [EBX + 0xc4]      ; 004de295
    MOV dword ptr [EAX + 0x1f734],EBX   ; 004de29b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de2a1
        ;   Label: LAB_004de2a1
    CMP dword ptr [EAX + 0x210],0x0     ; 004de2a4
    JZ 0x004de409                       ; 004de2ab
        ;   XREF to: 004de409 (CONDITIONAL_JUMP)  ; LAB_004de409
    PUSH 0x62bccf                       ; 004de2b1 | g_CheatStr_MovieRecording
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de2b6
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004de2bb
    ADD ESP,0x4                         ; 004de2bd
    MOV dword ptr [ESP + 0x1fc],EDI     ; 004de2c0
    MOV EDI,EAX                         ; 004de2c7
    MOV ESI,EAX                         ; 004de2c9
    SUB ECX,ECX                         ; 004de2cb
    DEC ECX                             ; 004de2cd
    XOR EAX,EAX                         ; 004de2ce
    SCASB.REPNE ES:EDI                  ; 004de2d0
    NOT ECX                             ; 004de2d2
    DEC ECX                             ; 004de2d4
    MOV dword ptr [ESP + 0x1f8],ECX     ; 004de2d5
    TEST ECX,ECX                        ; 004de2dc
    JLE 0x004de31b                      ; 004de2de
        ;   XREF to: 004de31b (CONDITIONAL_JUMP)  ; LAB_004de31b
    MOV EAX,ECX                         ; 004de2e0
    NEG EAX                             ; 004de2e2
    MOV EBX,ECX                         ; 004de2e4
    ADD ECX,EAX                         ; 004de2e6
    MOV dword ptr [ESP + 0x3a8],ECX     ; 004de2e8
    XOR EAX,EAX                         ; 004de2ef
        ;   Label: LAB_004de2ef
    MOV AL,byte ptr [ESI]               ; 004de2f1
    PUSH EAX                            ; 004de2f3
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004de2f4 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de2fb
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de300
    CMP EDI,EAX                         ; 004de303
    JNZ 0x004de30e                      ; 004de305
        ;   XREF to: 004de30e (CONDITIONAL_JUMP)  ; LAB_004de30e
    INC dword ptr [ESP + 0x1fc]         ; 004de307
    MOV EDX,dword ptr [ESP + 0x3a8]     ; 004de30e
        ;   Label: LAB_004de30e
    DEC EBX                             ; 004de315
    INC ESI                             ; 004de316
    CMP EBX,EDX                         ; 004de317
    JG 0x004de2ef                       ; 004de319
        ;   XREF to: 004de2ef (CONDITIONAL_JUMP)  ; LAB_004de2ef
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 004de31b
        ;   Label: LAB_004de31b
    CMP EAX,dword ptr [ESP + 0x1f8]     ; 004de322
    JNZ 0x004de409                      ; 004de329
        ;   XREF to: 004de409 (CONDITIONAL_JUMP)  ; LAB_004de409
    PUSH 0x1                            ; 004de32f
    PUSH 0x43700000                     ; 004de331
    PUSH 0x3e800000                     ; 004de336
    PUSH 0x1                            ; 004de33b
    PUSH 0x67b660                       ; 004de33d | g_MovieRecordingTargetFPS
    MOV EDI,dword ptr [0x00678a60]      ; 004de342 | g_CEditorToolsPtr
    XOR DH,DH                           ; 004de348
    PUSH 0x62b161                       ; 004de34a | = "Enter Movie FPS"
    XOR EBX,EBX                         ; 004de34f
    MOV byte ptr [0x02d831d8],DH        ; 004de351 | g_InputHistory+1
    PUSH EDI                            ; 004de357 | g_CEditorToolsInstance
    MOV dword ptr [0x02d831b4],EBX      ; 004de358 | g_MovieRecordingActive
    MOV dword ptr [0x02d831bc],EBX      ; 004de35e | g_MovieRecordingFrameCounter
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 004de364
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004de369
    TEST EAX,EAX                        ; 004de36c
    JZ 0x004de409                       ; 004de36e
        ;   XREF to: 004de409 (CONDITIONAL_JUMP)  ; LAB_004de409
    PUSH 0x1                            ; 004de374
    PUSH 0x1869f                        ; 004de376
    PUSH EBX                            ; 004de37b
    PUSH 0x1                            ; 004de37c
    PUSH 0x2d831b8                      ; 004de37e | g_MovieRecordingMaxFrames
    PUSH 0x62b171                       ; 004de383 | = "Enter number of frames to record (or ..."
    MOV EAX,[0x00678a60]                ; 004de388 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004de38d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 004de38e
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004de393
    TEST EAX,EAX                        ; 004de396
    JZ 0x004de409                       ; 004de398
        ;   XREF to: 004de409 (CONDITIONAL_JUMP)  ; LAB_004de409
    PUSH 0x1                            ; 004de39a
    PUSH 0x270f                         ; 004de39c
    PUSH 0x1                            ; 004de3a1
    PUSH 0x1                            ; 004de3a3
    PUSH 0x67b664                       ; 004de3a5 | g_MovieRecordingWidth
    PUSH 0x62b1bb                       ; 004de3aa | = "Enter image width"
    MOV EDX,dword ptr [0x00678a60]      ; 004de3af | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004de3b5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 004de3b6
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004de3bb
    TEST EAX,EAX                        ; 004de3be
    JZ 0x004de409                       ; 004de3c0
        ;   XREF to: 004de409 (CONDITIONAL_JUMP)  ; LAB_004de409
    PUSH 0x1                            ; 004de3c2
    PUSH 0x270f                         ; 004de3c4
    PUSH 0x1                            ; 004de3c9
    PUSH 0x1                            ; 004de3cb
    PUSH 0x67b668                       ; 004de3cd | g_MovieRecordingHeight
    PUSH 0x62b1cd                       ; 004de3d2 | = "Enter image height"
    MOV ECX,dword ptr [0x00678a60]      ; 004de3d7 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004de3dd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 004de3de
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004de3e3
    TEST EAX,EAX                        ; 004de3e6
    JZ 0x004de409                       ; 004de3e8
        ;   XREF to: 004de409 (CONDITIONAL_JUMP)  ; LAB_004de409
    PUSH 0x62b1e0                       ; 004de3ea | = "Press CTRL+V to begin recording."
    MOV EBX,dword ptr [0x00678a60]      ; 004de3ef | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004de3f5 | g_CEditorToolsInstance
    MOV ESI,0x1                         ; 004de3f6
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004de3fb
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004de400
    MOV dword ptr [0x02d831b0],ESI      ; 004de403 | g_MovieRecordingArmed
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de409
        ;   Label: LAB_004de409
    CMP dword ptr [EAX + 0x210],0x0     ; 004de40c
    JZ 0x004de4b9                       ; 004de413
        ;   XREF to: 004de4b9 (CONDITIONAL_JUMP)  ; LAB_004de4b9
    PUSH 0x62bd02                       ; 004de419 | g_CheatStr_CollisionDebug
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de41e
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004de423
    ADD ESP,0x4                         ; 004de425
    XOR ECX,ECX                         ; 004de428
    MOV EDI,EAX                         ; 004de42a
    MOV dword ptr [ESP + 0x204],ECX     ; 004de42c
    SUB ECX,ECX                         ; 004de433
    DEC ECX                             ; 004de435
    XOR EAX,EAX                         ; 004de436
    SCASB.REPNE ES:EDI                  ; 004de438
    NOT ECX                             ; 004de43a
    DEC ECX                             ; 004de43c
    MOV dword ptr [ESP + 0x200],ECX     ; 004de43d
    TEST ECX,ECX                        ; 004de444
    JLE 0x004de485                      ; 004de446
        ;   XREF to: 004de485 (CONDITIONAL_JUMP)  ; LAB_004de485
    MOV EAX,ECX                         ; 004de448
    MOV ESI,EBX                         ; 004de44a
    NEG EAX                             ; 004de44c
    MOV EBX,ECX                         ; 004de44e
    ADD ECX,EAX                         ; 004de450
    MOV dword ptr [ESP + 0x3ac],ECX     ; 004de452
    XOR EAX,EAX                         ; 004de459
        ;   Label: LAB_004de459
    MOV AL,byte ptr [ESI]               ; 004de45b
    PUSH EAX                            ; 004de45d
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004de45e | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de465
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de46a
    CMP EDI,EAX                         ; 004de46d
    JNZ 0x004de478                      ; 004de46f
        ;   XREF to: 004de478 (CONDITIONAL_JUMP)  ; LAB_004de478
    INC dword ptr [ESP + 0x204]         ; 004de471
    MOV EDI,dword ptr [ESP + 0x3ac]     ; 004de478
        ;   Label: LAB_004de478
    DEC EBX                             ; 004de47f
    INC ESI                             ; 004de480
    CMP EBX,EDI                         ; 004de481
    JG 0x004de459                       ; 004de483
        ;   XREF to: 004de459 (CONDITIONAL_JUMP)  ; LAB_004de459
    MOV EAX,dword ptr [ESP + 0x204]     ; 004de485
        ;   Label: LAB_004de485
    CMP EAX,dword ptr [ESP + 0x200]     ; 004de48c
    JNZ 0x004de4b9                      ; 004de493
        ;   XREF to: 004de4b9 (CONDITIONAL_JUMP)  ; LAB_004de4b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de495
    XOR BL,BL                           ; 004de498
    MOV ECX,dword ptr [EAX + 0x21c]     ; 004de49a
    MOV byte ptr [0x02d831d8],BL        ; 004de4a0 | g_InputHistory+1
    TEST ECX,ECX                        ; 004de4a6
    SETZ AL                             ; 004de4a8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004de4ab
    AND EAX,0xff                        ; 004de4ae
    MOV dword ptr [EBX + 0x21c],EAX     ; 004de4b3
    PUSH 0x62bd39                       ; 004de4b9 | g_CheatStr_SkeletonKey
        ;   Label: LAB_004de4b9
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de4be
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004de4c3
    ADD ESP,0x4                         ; 004de4c5
    XOR EAX,EAX                         ; 004de4c8
    MOV EDI,EBX                         ; 004de4ca
    MOV dword ptr [ESP + 0x20c],EAX     ; 004de4cc
    SUB ECX,ECX                         ; 004de4d3
    DEC ECX                             ; 004de4d5
    XOR EAX,EAX                         ; 004de4d6
    SCASB.REPNE ES:EDI                  ; 004de4d8
    NOT ECX                             ; 004de4da
    DEC ECX                             ; 004de4dc
    MOV dword ptr [ESP + 0x208],ECX     ; 004de4dd
    TEST ECX,ECX                        ; 004de4e4
    JLE 0x004de526                      ; 004de4e6
        ;   XREF to: 004de526 (CONDITIONAL_JUMP)  ; LAB_004de526
    MOV EAX,ECX                         ; 004de4e8
    NEG EAX                             ; 004de4ea
    MOV EDI,ECX                         ; 004de4ec
    ADD ECX,EAX                         ; 004de4ee
    MOV ESI,EBX                         ; 004de4f0
    MOV dword ptr [ESP + 0x3b0],ECX     ; 004de4f2
    XOR EAX,EAX                         ; 004de4f9
        ;   Label: LAB_004de4f9
    MOV AL,byte ptr [ESI]               ; 004de4fb
    XOR EBX,EBX                         ; 004de4fd
    PUSH EAX                            ; 004de4ff
    MOV BL,byte ptr [EDI + 0x2d831d7]   ; 004de500 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de506
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de50b
    CMP EBX,EAX                         ; 004de50e
    JNZ 0x004de519                      ; 004de510
        ;   XREF to: 004de519 (CONDITIONAL_JUMP)  ; LAB_004de519
    INC dword ptr [ESP + 0x20c]         ; 004de512
    MOV EDX,dword ptr [ESP + 0x3b0]     ; 004de519
        ;   Label: LAB_004de519
    DEC EDI                             ; 004de520
    INC ESI                             ; 004de521
    CMP EDI,EDX                         ; 004de522
    JG 0x004de4f9                       ; 004de524
        ;   XREF to: 004de4f9 (CONDITIONAL_JUMP)  ; LAB_004de4f9
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004de526
        ;   Label: LAB_004de526
    CMP EAX,dword ptr [ESP + 0x208]     ; 004de52d
    JNZ 0x004de601                      ; 004de534
        ;   XREF to: 004de601 (CONDITIONAL_JUMP)  ; LAB_004de601
    MOV EAX,[0x02db87d0]                ; 004de53a | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004de53f | g_HeroActors
    PUSH 0x62bd72                       ; 004de546 | = "Skeleton_key"
    ADD EAX,0x1f738                     ; 004de54b
    XOR BH,BH                           ; 004de550
    PUSH EAX                            ; 004de552
    MOV byte ptr [0x02d831d8],BH        ; 004de553 | g_InputHistory+1
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0 ; 004de559
        ;   XREF to: 004fe9d0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 004de55e
    TEST EAX,EAX                        ; 004de561
    JNZ 0x004de601                      ; 004de563
        ;   XREF to: 004de601 (CONDITIONAL_JUMP)  ; LAB_004de601
    PUSH 0x62bd7f                       ; 004de569 | = "CKeyActor"
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004de56e
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004de573
    MOV EBX,EAX                         ; 004de576
    PUSH EBX                            ; 004de578
    MOV EAX,dword ptr [EAX + 0x154]     ; 004de579
    MOV ESI,0x62bd89                    ; 004de57f | = "Skeleton_key"
    CALL dword ptr [EAX]                ; 004de584
    ADD ESP,0x4                         ; 004de586
    MOV EDI,EBX                         ; 004de589
    MOV dword ptr [EBX + 0x2d4],0xffffffff ; 004de58b
    PUSH EDI                            ; 004de595
    MOV AL,byte ptr [ESI]               ; 004de596 | = "Skeleton_key" | s_eleton_key_0062bd8b
        ;   Label: LAB_004de596
    MOV byte ptr [EDI],AL               ; 004de598
    CMP AL,0x0                          ; 004de59a
    JZ 0x004de5ae                       ; 004de59c
        ;   XREF to: 004de5ae (CONDITIONAL_JUMP)  ; LAB_004de5ae
    MOV AL,byte ptr [ESI + 0x1]         ; 004de59e | s_keleton_key_0062bd8a | s_leton_key_0062bd8c
    ADD ESI,0x2                         ; 004de5a1
    MOV byte ptr [EDI + 0x1],AL         ; 004de5a4
    ADD EDI,0x2                         ; 004de5a7
    CMP AL,0x0                          ; 004de5aa
    JNZ 0x004de596                      ; 004de5ac
        ;   XREF to: 004de596 (CONDITIONAL_JUMP)  ; LAB_004de596
    POP EDI                             ; 004de5ae
        ;   Label: LAB_004de5ae
    PUSH 0x62bd96                       ; 004de5af | = "cheat-1.wav"
    PUSH 0x0                            ; 004de5b4
    MOV ESI,dword ptr [0x00681ef8]      ; 004de5b6 | g_CSoundPtr
    PUSH ESI                            ; 004de5bc | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de5bd
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de5c2
    MOV EAX,[0x02db87d0]                ; 004de5c5 | g_LocalHeroIndex
    PUSH 0x1                            ; 004de5ca
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004de5cc | g_HeroActors
    PUSH EBX                            ; 004de5d3
    ADD EAX,0x1f738                     ; 004de5d4
    PUSH EAX                            ; 004de5d9
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004de5da
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004de5df
    PUSH 0x40a00000                     ; 004de5e2
    PUSH 0x62bda2                       ; 004de5e7 | = "You have the skeleton key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de5ec
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004de5f1
    PUSH EAX                            ; 004de5f4
    MOV EDI,dword ptr [EBP + 0x14]      ; 004de5f5
    PUSH EDI                            ; 004de5f8
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de5f9
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de5fe
    PUSH 0x62bdbc                       ; 004de601 | g_CheatStr_GodMode
        ;   Label: LAB_004de601
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de606
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004de60b
    ADD ESP,0x4                         ; 004de60d
    XOR EAX,EAX                         ; 004de610
    MOV EDI,EBX                         ; 004de612
    MOV dword ptr [ESP + 0x214],EAX     ; 004de614
    SUB ECX,ECX                         ; 004de61b
    DEC ECX                             ; 004de61d
    XOR EAX,EAX                         ; 004de61e
    SCASB.REPNE ES:EDI                  ; 004de620
    NOT ECX                             ; 004de622
    DEC ECX                             ; 004de624
    MOV dword ptr [ESP + 0x210],ECX     ; 004de625
    TEST ECX,ECX                        ; 004de62c
    JLE 0x004de66b                      ; 004de62e
        ;   XREF to: 004de66b (CONDITIONAL_JUMP)  ; LAB_004de66b
    MOV EAX,ECX                         ; 004de630
    NEG EAX                             ; 004de632
    MOV EDI,ECX                         ; 004de634
    ADD ECX,EAX                         ; 004de636
    MOV dword ptr [ESP + 0x3b4],ECX     ; 004de638
    XOR EAX,EAX                         ; 004de63f
        ;   Label: LAB_004de63f
    MOV AL,byte ptr [EBX]               ; 004de641
    PUSH EAX                            ; 004de643
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004de644 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de64b
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de650
    CMP ESI,EAX                         ; 004de653
    JNZ 0x004de65e                      ; 004de655
        ;   XREF to: 004de65e (CONDITIONAL_JUMP)  ; LAB_004de65e
    INC dword ptr [ESP + 0x214]         ; 004de657
    MOV ECX,dword ptr [ESP + 0x3b4]     ; 004de65e
        ;   Label: LAB_004de65e
    DEC EDI                             ; 004de665
    INC EBX                             ; 004de666
    CMP EDI,ECX                         ; 004de667
    JG 0x004de63f                       ; 004de669
        ;   XREF to: 004de63f (CONDITIONAL_JUMP)  ; LAB_004de63f
    MOV EAX,dword ptr [ESP + 0x214]     ; 004de66b
        ;   Label: LAB_004de66b
    CMP EAX,dword ptr [ESP + 0x210]     ; 004de672
    JNZ 0x004de6ed                      ; 004de679
        ;   XREF to: 004de6ed (CONDITIONAL_JUMP)  ; LAB_004de6ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de67b
    XOR CL,CL                           ; 004de67e
    MOV ESI,dword ptr [EAX + 0x1d0]     ; 004de680
    MOV byte ptr [0x02d831d8],CL        ; 004de686 | g_InputHistory+1
    TEST ESI,ESI                        ; 004de68c
    SETZ AL                             ; 004de68e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004de691
    AND EAX,0xff                        ; 004de694
    MOV dword ptr [EBX + 0x1d0],EAX     ; 004de699
    JZ 0x004df3ad                       ; 004de69f
        ;   XREF to: 004df3ad (CONDITIONAL_JUMP)  ; LAB_004df3ad
    PUSH 0x40a00000                     ; 004de6a5
    PUSH 0x62bdf2                       ; 004de6aa | = "God mode enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de6af
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004de6b4
    PUSH EAX                            ; 004de6b7
    PUSH EBX                            ; 004de6b8
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de6b9
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x02db87d0]                ; 004de6be | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004de6c3 | g_HeroActors
    ADD ESP,0xc                         ; 004de6ca
    MOV dword ptr [EAX + 0x243c],0x42c80000 ; 004de6cd
    PUSH 0x62be15                       ; 004de6d7 | = "cheat-1.wav"
        ;   Label: LAB_004de6d7
    PUSH 0x0                            ; 004de6dc
    MOV ECX,dword ptr [0x00681ef8]      ; 004de6de | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 004de6e4 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de6e5
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de6ea
    PUSH 0x62be21                       ; 004de6ed | g_CheatStr_FreezeEnemies
        ;   Label: LAB_004de6ed
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de6f2
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004de6f7
    ADD ESP,0x4                         ; 004de6f9
    MOV EDI,EAX                         ; 004de6fc
    MOV EBX,EAX                         ; 004de6fe
    SUB ECX,ECX                         ; 004de700
    DEC ECX                             ; 004de702
    XOR EAX,EAX                         ; 004de703
    SCASB.REPNE ES:EDI                  ; 004de705
    NOT ECX                             ; 004de707
    DEC ECX                             ; 004de709
    MOV dword ptr [ESP + 0x218],ECX     ; 004de70a
    TEST ECX,ECX                        ; 004de711
    JLE 0x004de757                      ; 004de713
        ;   XREF to: 004de757 (CONDITIONAL_JUMP)  ; LAB_004de757
    MOV EAX,ECX                         ; 004de715
    NEG EAX                             ; 004de717
    MOV EDI,ECX                         ; 004de719
    ADD ECX,EAX                         ; 004de71b
    MOV dword ptr [ESP + 0x3b8],ECX     ; 004de71d
    XOR EAX,EAX                         ; 004de724
        ;   Label: LAB_004de724
    MOV AL,byte ptr [EDI + 0x2d831d7]   ; 004de726 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    MOV dword ptr [ESP + 0x448],EAX     ; 004de72c
    XOR EAX,EAX                         ; 004de733
    MOV AL,byte ptr [EBX]               ; 004de735
    PUSH EAX                            ; 004de737
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de738
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de73d
    CMP EAX,dword ptr [ESP + 0x448]     ; 004de740
    JNZ 0x004de74a                      ; 004de747
        ;   XREF to: 004de74a (CONDITIONAL_JUMP)  ; LAB_004de74a
    INC ESI                             ; 004de749
    MOV EAX,dword ptr [ESP + 0x3b8]     ; 004de74a
        ;   Label: LAB_004de74a
    DEC EDI                             ; 004de751
    INC EBX                             ; 004de752
    CMP EDI,EAX                         ; 004de753
    JG 0x004de724                       ; 004de755
        ;   XREF to: 004de724 (CONDITIONAL_JUMP)  ; LAB_004de724
    CMP ESI,dword ptr [ESP + 0x218]     ; 004de757
        ;   Label: LAB_004de757
    JNZ 0x004de7ba                      ; 004de75e
        ;   XREF to: 004de7ba (CONDITIONAL_JUMP)  ; LAB_004de7ba
    XOR CH,CH                           ; 004de760
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de762
    MOV byte ptr [0x02d831d8],CH        ; 004de765 | g_InputHistory+1
    CMP dword ptr [EAX + 0x1d4],0x0     ; 004de76b
    SETZ AL                             ; 004de772
    MOV EBX,dword ptr [EBP + 0x14]      ; 004de775
    AND EAX,0xff                        ; 004de778
    MOV dword ptr [EBX + 0x1d4],EAX     ; 004de77d
    JZ 0x004df3ce                       ; 004de783
        ;   XREF to: 004df3ce (CONDITIONAL_JUMP)  ; LAB_004df3ce
    PUSH 0x40a00000                     ; 004de789
    PUSH 0x62be56                       ; 004de78e | = "Enemies frozen"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de793
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_004de793
    ADD ESP,0x4                         ; 004de798
    PUSH EAX                            ; 004de79b
    PUSH EBX                            ; 004de79c
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de79d
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de7a2
    PUSH 0x62be74                       ; 004de7a5 | = "cheat-1.wav"
    PUSH 0x0                            ; 004de7aa
    MOV EAX,[0x00681ef8]                ; 004de7ac | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004de7b1 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de7b2
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de7b7
    PUSH 0x62be80                       ; 004de7ba | = "You have the shotgun"
        ;   Label: LAB_004de7ba
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de7bf
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004de7c4
    PUSH 0x62be9e                       ; 004de7c7 | g_CheatStr_Shotgun
    MOV EBX,EAX                         ; 004de7cc
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de7ce
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EDX,0x62be95                    ; 004de7d3 | = "CShotgun"
    MOV ESI,EAX                         ; 004de7d8
    ADD ESP,0x4                         ; 004de7da
    MOV EDI,EAX                         ; 004de7dd
    XOR ECX,ECX                         ; 004de7df
    MOV dword ptr [ESP + 0x21c],EDX     ; 004de7e1 | = "CShotgun"
    MOV dword ptr [ESP + 0x220],EBX     ; 004de7e8
    MOV dword ptr [ESP + 0x228],ECX     ; 004de7ef
    SUB ECX,ECX                         ; 004de7f6
    DEC ECX                             ; 004de7f8
    XOR EAX,EAX                         ; 004de7f9
    SCASB.REPNE ES:EDI                  ; 004de7fb
    NOT ECX                             ; 004de7fd
    DEC ECX                             ; 004de7ff
    MOV dword ptr [ESP + 0x224],ECX     ; 004de800
    TEST ECX,ECX                        ; 004de807
    JLE 0x004de848                      ; 004de809
        ;   XREF to: 004de848 (CONDITIONAL_JUMP)  ; LAB_004de848
    MOV EAX,ECX                         ; 004de80b
    NEG EAX                             ; 004de80d
    MOV EDI,ECX                         ; 004de80f
    ADD ECX,EAX                         ; 004de811
    MOV EBX,ESI                         ; 004de813
    MOV dword ptr [ESP + 0x3bc],ECX     ; 004de815
    XOR EAX,EAX                         ; 004de81c
        ;   Label: LAB_004de81c
    MOV AL,byte ptr [EBX]               ; 004de81e
    PUSH EAX                            ; 004de820
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004de821 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de828
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de82d
    CMP ESI,EAX                         ; 004de830
    JNZ 0x004de83b                      ; 004de832
        ;   XREF to: 004de83b (CONDITIONAL_JUMP)  ; LAB_004de83b
    INC dword ptr [ESP + 0x228]         ; 004de834
    MOV ECX,dword ptr [ESP + 0x3bc]     ; 004de83b
        ;   Label: LAB_004de83b
    DEC EDI                             ; 004de842
    INC EBX                             ; 004de843
    CMP EDI,ECX                         ; 004de844
    JG 0x004de81c                       ; 004de846
        ;   XREF to: 004de81c (CONDITIONAL_JUMP)  ; LAB_004de81c
    MOV EAX,dword ptr [ESP + 0x228]     ; 004de848
        ;   Label: LAB_004de848
    MOV EBX,dword ptr [ESP + 0x224]     ; 004de84f
    CMP EAX,EBX                         ; 004de856
    JNZ 0x004de8a2                      ; 004de858
        ;   XREF to: 004de8a2 (CONDITIONAL_JUMP)  ; LAB_004de8a2
    MOV ESI,dword ptr [ESP + 0x21c]     ; 004de85a
    XOR AL,BL                           ; 004de861
    PUSH ESI                            ; 004de863 | = "CShotgun"
    MOV [0x02d831d8],AL                 ; 004de864 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004de869
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004de86e
    MOV EDI,dword ptr [ESP + 0x220]     ; 004de871
    PUSH 0x40a00000                     ; 004de878
    PUSH EDI                            ; 004de87d
    MOV EAX,[0x0067b654]                ; 004de87e | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 004de883 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de884
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de889
    PUSH 0x62b9dd                       ; 004de88c | = "cheat-1.wav"
    PUSH 0x0                            ; 004de891
    MOV EDX,dword ptr [0x00681ef8]      ; 004de893 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 004de899 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de89a
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de89f
    PUSH 0x62bed3                       ; 004de8a2 | = "You have the crossbow"
        ;   Label: LAB_004de8a2
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de8a7
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004de8ac
    PUSH 0x62bef3                       ; 004de8af | g_CheatStr_Crossbow
    MOV EBX,EAX                         ; 004de8b4
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de8b6
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV ECX,0x62bee9                    ; 004de8bb | = "CCrossbow"
    MOV ESI,EAX                         ; 004de8c0
    ADD ESP,0x4                         ; 004de8c2
    MOV EDI,EAX                         ; 004de8c5
    MOV dword ptr [ESP + 0x22c],ECX     ; 004de8c7 | = "CCrossbow"
    MOV dword ptr [ESP + 0x230],EBX     ; 004de8ce
    SUB ECX,ECX                         ; 004de8d5
    DEC ECX                             ; 004de8d7
    XOR EAX,EAX                         ; 004de8d8
    SCASB.REPNE ES:EDI                  ; 004de8da
    NOT ECX                             ; 004de8dc
    DEC ECX                             ; 004de8de
    XOR EBX,EBX                         ; 004de8df
    MOV dword ptr [ESP + 0x234],ECX     ; 004de8e1
    MOV dword ptr [ESP + 0x238],EBX     ; 004de8e8
    TEST ECX,ECX                        ; 004de8ef
    JLE 0x004de930                      ; 004de8f1
        ;   XREF to: 004de930 (CONDITIONAL_JUMP)  ; LAB_004de930
    MOV EAX,ECX                         ; 004de8f3
    NEG EAX                             ; 004de8f5
    MOV EDI,ECX                         ; 004de8f7
    ADD ECX,EAX                         ; 004de8f9
    MOV EBX,ESI                         ; 004de8fb
    MOV dword ptr [ESP + 0x3c0],ECX     ; 004de8fd
    XOR EAX,EAX                         ; 004de904
        ;   Label: LAB_004de904
    MOV AL,byte ptr [EBX]               ; 004de906
    PUSH EAX                            ; 004de908
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004de909 | DAT_02d831d6 | g_InputHistory
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de910
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de915
    CMP ESI,EAX                         ; 004de918
    JNZ 0x004de923                      ; 004de91a
        ;   XREF to: 004de923 (CONDITIONAL_JUMP)  ; LAB_004de923
    INC dword ptr [ESP + 0x238]         ; 004de91c
    MOV EAX,dword ptr [ESP + 0x3c0]     ; 004de923
        ;   Label: LAB_004de923
    DEC EDI                             ; 004de92a
    INC EBX                             ; 004de92b
    CMP EDI,EAX                         ; 004de92c
    JG 0x004de904                       ; 004de92e
        ;   XREF to: 004de904 (CONDITIONAL_JUMP)  ; LAB_004de904
    MOV EAX,dword ptr [ESP + 0x238]     ; 004de930
        ;   Label: LAB_004de930
    MOV EDX,dword ptr [ESP + 0x234]     ; 004de937
    CMP EAX,EDX                         ; 004de93e
    JNZ 0x004de98c                      ; 004de940
        ;   XREF to: 004de98c (CONDITIONAL_JUMP)  ; LAB_004de98c
    MOV ECX,dword ptr [ESP + 0x22c]     ; 004de942 | = "CCrossbow"
    XOR AH,DH                           ; 004de949
    PUSH ECX                            ; 004de94b | = "CCrossbow"
    MOV byte ptr [0x02d831d8],AH        ; 004de94c | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004de952
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004de957
    MOV EBX,dword ptr [ESP + 0x230]     ; 004de95a
    PUSH 0x40a00000                     ; 004de961
    PUSH EBX                            ; 004de966
    MOV ESI,dword ptr [0x0067b654]      ; 004de967 | g_CGamePtr
    PUSH ESI                            ; 004de96d | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004de96e
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de973
    PUSH 0x62b9dd                       ; 004de976 | = "cheat-1.wav"
    PUSH 0x0                            ; 004de97b
    MOV EDI,dword ptr [0x00681ef8]      ; 004de97d | g_CSoundPtr
    PUSH EDI                            ; 004de983 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004de984
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004de989
    PUSH 0x62bf29                       ; 004de98c | = "DY-NO-MITE"
        ;   Label: LAB_004de98c
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004de991
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004de996
    PUSH 0x62bf3e                       ; 004de999 | g_CheatStr_Dynamite
    MOV EBX,EAX                         ; 004de99e
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004de9a0
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV ESI,EAX                         ; 004de9a5
    ADD ESP,0x4                         ; 004de9a7
    XOR EDX,EDX                         ; 004de9aa
    MOV EAX,0x62bf34                    ; 004de9ac | = "CDynamite"
    MOV dword ptr [ESP + 0x240],EBX     ; 004de9b1
    MOV dword ptr [ESP + 0x248],EDX     ; 004de9b8
    MOV EDI,ESI                         ; 004de9bf
    MOV dword ptr [ESP + 0x23c],EAX     ; 004de9c1 | = "CDynamite"
    SUB ECX,ECX                         ; 004de9c8
    DEC ECX                             ; 004de9ca
    XOR EAX,EAX                         ; 004de9cb
    SCASB.REPNE ES:EDI                  ; 004de9cd
    NOT ECX                             ; 004de9cf
    DEC ECX                             ; 004de9d1
    MOV dword ptr [ESP + 0x244],ECX     ; 004de9d2
    TEST ECX,ECX                        ; 004de9d9
    JLE 0x004dea1a                      ; 004de9db
        ;   XREF to: 004dea1a (CONDITIONAL_JUMP)  ; LAB_004dea1a
    MOV EAX,ECX                         ; 004de9dd
    NEG EAX                             ; 004de9df
    MOV EDI,ECX                         ; 004de9e1
    ADD ECX,EAX                         ; 004de9e3
    MOV EBX,ESI                         ; 004de9e5
    MOV dword ptr [ESP + 0x3c4],ECX     ; 004de9e7
    XOR EAX,EAX                         ; 004de9ee
        ;   Label: LAB_004de9ee
    MOV AL,byte ptr [EBX]               ; 004de9f0
    PUSH EAX                            ; 004de9f2
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004de9f3 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004de9fa
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004de9ff
    CMP ESI,EAX                         ; 004dea02
    JNZ 0x004dea0d                      ; 004dea04
        ;   XREF to: 004dea0d (CONDITIONAL_JUMP)  ; LAB_004dea0d
    INC dword ptr [ESP + 0x248]         ; 004dea06
    MOV ESI,dword ptr [ESP + 0x3c4]     ; 004dea0d
        ;   Label: LAB_004dea0d
    DEC EDI                             ; 004dea14
    INC EBX                             ; 004dea15
    CMP EDI,ESI                         ; 004dea16
    JG 0x004de9ee                       ; 004dea18
        ;   XREF to: 004de9ee (CONDITIONAL_JUMP)  ; LAB_004de9ee
    MOV EAX,dword ptr [ESP + 0x248]     ; 004dea1a
        ;   Label: LAB_004dea1a
    CMP EAX,dword ptr [ESP + 0x244]     ; 004dea21
    JNZ 0x004dea74                      ; 004dea28
        ;   XREF to: 004dea74 (CONDITIONAL_JUMP)  ; LAB_004dea74
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004dea2a | = "CDynamite"
    XOR DL,DL                           ; 004dea31
    PUSH EAX                            ; 004dea33 | = "CDynamite"
    MOV byte ptr [0x02d831d8],DL        ; 004dea34 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004dea3a
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004dea3f
    MOV EDX,dword ptr [ESP + 0x240]     ; 004dea42
    PUSH 0x40a00000                     ; 004dea49
    PUSH EDX                            ; 004dea4e
    MOV ECX,dword ptr [0x0067b654]      ; 004dea4f | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 004dea55 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dea56
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dea5b
    PUSH 0x62b9dd                       ; 004dea5e | = "cheat-1.wav"
    PUSH 0x0                            ; 004dea63
    MOV EBX,dword ptr [0x00681ef8]      ; 004dea65 | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004dea6b | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004dea6c
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dea71
    PUSH 0x62bf72                       ; 004dea74 | = "Fire! Fire! Fire!"
        ;   Label: LAB_004dea74
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dea79
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dea7e
    PUSH 0x62bf92                       ; 004dea81 | g_CheatStr_FlameThrower
    MOV EDI,0x62bf84                    ; 004dea86 | = "CFlameThrower"
    MOV EBX,EAX                         ; 004dea8b
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dea8d
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    ADD ESP,0x4                         ; 004dea92
    MOV ESI,EAX                         ; 004dea95
    MOV dword ptr [ESP + 0x24c],EDI     ; 004dea97 | = "CFlameThrower"
    MOV dword ptr [ESP + 0x250],EBX     ; 004dea9e
    XOR EAX,EAX                         ; 004deaa5
    MOV EDI,ESI                         ; 004deaa7
    MOV dword ptr [ESP + 0x258],EAX     ; 004deaa9
    SUB ECX,ECX                         ; 004deab0
    DEC ECX                             ; 004deab2
    XOR EAX,EAX                         ; 004deab3
    SCASB.REPNE ES:EDI                  ; 004deab5
    NOT ECX                             ; 004deab7
    DEC ECX                             ; 004deab9
    MOV dword ptr [ESP + 0x254],ECX     ; 004deaba
    TEST ECX,ECX                        ; 004deac1
    JLE 0x004deb02                      ; 004deac3
        ;   XREF to: 004deb02 (CONDITIONAL_JUMP)  ; LAB_004deb02
    MOV EAX,ECX                         ; 004deac5
    NEG EAX                             ; 004deac7
    MOV EDI,ECX                         ; 004deac9
    ADD ECX,EAX                         ; 004deacb
    MOV EBX,ESI                         ; 004deacd
    MOV dword ptr [ESP + 0x3c8],ECX     ; 004deacf
    XOR EAX,EAX                         ; 004dead6
        ;   Label: LAB_004dead6
    MOV AL,byte ptr [EBX]               ; 004dead8
    PUSH EAX                            ; 004deada
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004deadb | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004deae2
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004deae7
    CMP ESI,EAX                         ; 004deaea
    JNZ 0x004deaf5                      ; 004deaec
        ;   XREF to: 004deaf5 (CONDITIONAL_JUMP)  ; LAB_004deaf5
    INC dword ptr [ESP + 0x258]         ; 004deaee
    MOV ECX,dword ptr [ESP + 0x3c8]     ; 004deaf5
        ;   Label: LAB_004deaf5
    DEC EDI                             ; 004deafc
    INC EBX                             ; 004deafd
    CMP EDI,ECX                         ; 004deafe
    JG 0x004dead6                       ; 004deb00
        ;   XREF to: 004dead6 (CONDITIONAL_JUMP)  ; LAB_004dead6
    MOV EAX,dword ptr [ESP + 0x258]     ; 004deb02
        ;   Label: LAB_004deb02
    CMP EAX,dword ptr [ESP + 0x254]     ; 004deb09
    JNZ 0x004deb5b                      ; 004deb10
        ;   XREF to: 004deb5b (CONDITIONAL_JUMP)  ; LAB_004deb5b
    MOV ESI,dword ptr [ESP + 0x24c]     ; 004deb12
    XOR DH,DH                           ; 004deb19
    PUSH ESI                            ; 004deb1b | = "CFlameThrower"
    MOV byte ptr [0x02d831d8],DH        ; 004deb1c | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004deb22
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004deb27
    MOV EDI,dword ptr [ESP + 0x250]     ; 004deb2a
    PUSH 0x40a00000                     ; 004deb31
    PUSH EDI                            ; 004deb36
    MOV EAX,[0x0067b654]                ; 004deb37 | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 004deb3c | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004deb3d
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004deb42
    PUSH 0x62b9dd                       ; 004deb45 | = "cheat-1.wav"
    PUSH 0x0                            ; 004deb4a
    MOV EDX,dword ptr [0x00681ef8]      ; 004deb4c | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 004deb52 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004deb53
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004deb58
    PUSH 0x62bfc8                       ; 004deb5b | = "You have the tommy gun"
        ;   Label: LAB_004deb5b
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004deb60
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004deb65
    PUSH 0x62bfe9                       ; 004deb68 | g_CheatStr_TommyGun
    MOV EBX,EAX                         ; 004deb6d
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004deb6f
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV ECX,0x62bfdf                    ; 004deb74 | = "CTommyGun"
    MOV ESI,EAX                         ; 004deb79
    ADD ESP,0x4                         ; 004deb7b
    MOV EDI,EAX                         ; 004deb7e
    MOV dword ptr [ESP + 0x25c],ECX     ; 004deb80 | = "CTommyGun"
    MOV dword ptr [ESP + 0x260],EBX     ; 004deb87
    SUB ECX,ECX                         ; 004deb8e
    DEC ECX                             ; 004deb90
    XOR EAX,EAX                         ; 004deb91
    SCASB.REPNE ES:EDI                  ; 004deb93
    NOT ECX                             ; 004deb95
    DEC ECX                             ; 004deb97
    XOR EBX,EBX                         ; 004deb98
    MOV dword ptr [ESP + 0x264],ECX     ; 004deb9a
    MOV dword ptr [ESP + 0x268],EBX     ; 004deba1
    TEST ECX,ECX                        ; 004deba8
    JLE 0x004debe9                      ; 004debaa
        ;   XREF to: 004debe9 (CONDITIONAL_JUMP)  ; LAB_004debe9
    MOV EAX,ECX                         ; 004debac
    NEG EAX                             ; 004debae
    MOV EDI,ECX                         ; 004debb0
    ADD ECX,EAX                         ; 004debb2
    MOV EBX,ESI                         ; 004debb4
    MOV dword ptr [ESP + 0x3cc],ECX     ; 004debb6
    XOR EAX,EAX                         ; 004debbd
        ;   Label: LAB_004debbd
    MOV AL,byte ptr [EBX]               ; 004debbf
    PUSH EAX                            ; 004debc1
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004debc2 | DAT_02d831d6 | g_InputHistory
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004debc9
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004debce
    CMP ESI,EAX                         ; 004debd1
    JNZ 0x004debdc                      ; 004debd3
        ;   XREF to: 004debdc (CONDITIONAL_JUMP)  ; LAB_004debdc
    INC dword ptr [ESP + 0x268]         ; 004debd5
    MOV EAX,dword ptr [ESP + 0x3cc]     ; 004debdc
        ;   Label: LAB_004debdc
    DEC EDI                             ; 004debe3
    INC EBX                             ; 004debe4
    CMP EDI,EAX                         ; 004debe5
    JG 0x004debbd                       ; 004debe7
        ;   XREF to: 004debbd (CONDITIONAL_JUMP)  ; LAB_004debbd
    MOV EAX,dword ptr [ESP + 0x268]     ; 004debe9
        ;   Label: LAB_004debe9
    CMP EAX,dword ptr [ESP + 0x264]     ; 004debf0
    JNZ 0x004dec43                      ; 004debf7
        ;   XREF to: 004dec43 (CONDITIONAL_JUMP)  ; LAB_004dec43
    MOV ECX,dword ptr [ESP + 0x25c]     ; 004debf9 | = "CTommyGun"
    XOR BL,BL                           ; 004dec00
    PUSH ECX                            ; 004dec02 | = "CTommyGun"
    MOV byte ptr [0x02d831d8],BL        ; 004dec03 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004dec09
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004dec0e
    MOV EBX,dword ptr [ESP + 0x260]     ; 004dec11
    PUSH 0x40a00000                     ; 004dec18
    PUSH EBX                            ; 004dec1d
    MOV ESI,dword ptr [0x0067b654]      ; 004dec1e | g_CGamePtr
    PUSH ESI                            ; 004dec24 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dec25
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dec2a
    PUSH 0x62b9dd                       ; 004dec2d | = "cheat-1.wav"
    PUSH 0x0                            ; 004dec32
    MOV EDI,dword ptr [0x00681ef8]      ; 004dec34 | g_CSoundPtr
    PUSH EDI                            ; 004dec3a | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004dec3b
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dec40
    PUSH 0x62c021                       ; 004dec43 | = "You can now summon the baron"
        ;   Label: LAB_004dec43
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dec48
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dec4d
    PUSH 0x62c04b                       ; 004dec50 | g_CheatStr_BaronWeapon
    MOV EBX,EAX                         ; 004dec55
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dec57
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV ESI,EAX                         ; 004dec5c
    ADD ESP,0x4                         ; 004dec5e
    XOR EDX,EDX                         ; 004dec61
    MOV EAX,0x62c03e                    ; 004dec63 | = "CBaronWeapon"
    MOV dword ptr [ESP + 0x270],EBX     ; 004dec68
    MOV dword ptr [ESP + 0x278],EDX     ; 004dec6f
    MOV EDI,ESI                         ; 004dec76
    MOV dword ptr [ESP + 0x26c],EAX     ; 004dec78 | = "CBaronWeapon"
    SUB ECX,ECX                         ; 004dec7f
    DEC ECX                             ; 004dec81
    XOR EAX,EAX                         ; 004dec82
    SCASB.REPNE ES:EDI                  ; 004dec84
    NOT ECX                             ; 004dec86
    DEC ECX                             ; 004dec88
    MOV dword ptr [ESP + 0x274],ECX     ; 004dec89
    TEST ECX,ECX                        ; 004dec90
    JLE 0x004decd1                      ; 004dec92
        ;   XREF to: 004decd1 (CONDITIONAL_JUMP)  ; LAB_004decd1
    MOV EAX,ECX                         ; 004dec94
    NEG EAX                             ; 004dec96
    MOV EDI,ECX                         ; 004dec98
    ADD ECX,EAX                         ; 004dec9a
    MOV EBX,ESI                         ; 004dec9c
    MOV dword ptr [ESP + 0x3d0],ECX     ; 004dec9e
    XOR EAX,EAX                         ; 004deca5
        ;   Label: LAB_004deca5
    MOV AL,byte ptr [EBX]               ; 004deca7
    PUSH EAX                            ; 004deca9
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004decaa | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004decb1
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004decb6
    CMP ESI,EAX                         ; 004decb9
    JNZ 0x004decc4                      ; 004decbb
        ;   XREF to: 004decc4 (CONDITIONAL_JUMP)  ; LAB_004decc4
    INC dword ptr [ESP + 0x278]         ; 004decbd
    MOV ESI,dword ptr [ESP + 0x3d0]     ; 004decc4
        ;   Label: LAB_004decc4
    DEC EDI                             ; 004deccb
    INC EBX                             ; 004deccc
    CMP EDI,ESI                         ; 004deccd
    JG 0x004deca5                       ; 004deccf
        ;   XREF to: 004deca5 (CONDITIONAL_JUMP)  ; LAB_004deca5
    MOV EAX,dword ptr [ESP + 0x278]     ; 004decd1
        ;   Label: LAB_004decd1
    CMP EAX,dword ptr [ESP + 0x274]     ; 004decd8
    JNZ 0x004ded2b                      ; 004decdf
        ;   XREF to: 004ded2b (CONDITIONAL_JUMP)  ; LAB_004ded2b
    MOV EAX,dword ptr [ESP + 0x26c]     ; 004dece1 | = "CBaronWeapon"
    XOR BH,BH                           ; 004dece8
    PUSH EAX                            ; 004decea | = "CBaronWeapon"
    MOV byte ptr [0x02d831d8],BH        ; 004deceb | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004decf1
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004decf6
    MOV EDX,dword ptr [ESP + 0x270]     ; 004decf9
    PUSH 0x40a00000                     ; 004ded00
    PUSH EDX                            ; 004ded05
    MOV ECX,dword ptr [0x0067b654]      ; 004ded06 | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 004ded0c | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004ded0d
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004ded12
    PUSH 0x62b9dd                       ; 004ded15 | = "cheat-1.wav"
    PUSH 0x0                            ; 004ded1a
    MOV EBX,dword ptr [0x00681ef8]      ; 004ded1c | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004ded22 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004ded23
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004ded28
    PUSH 0x62c081                       ; 004ded2b | = "You have the elephant gun"
        ;   Label: LAB_004ded2b
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004ded30
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004ded35
    PUSH 0x62c0a8                       ; 004ded38 | g_CheatStr_ElephantGun
    MOV EDI,0x62c09b                    ; 004ded3d | = "CElephantGun"
    MOV EBX,EAX                         ; 004ded42
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004ded44
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    ADD ESP,0x4                         ; 004ded49
    MOV ESI,EAX                         ; 004ded4c
    MOV dword ptr [ESP + 0x27c],EDI     ; 004ded4e | = "CElephantGun"
    MOV dword ptr [ESP + 0x280],EBX     ; 004ded55
    XOR EAX,EAX                         ; 004ded5c
    MOV EDI,ESI                         ; 004ded5e
    MOV dword ptr [ESP + 0x288],EAX     ; 004ded60
    SUB ECX,ECX                         ; 004ded67
    DEC ECX                             ; 004ded69
    XOR EAX,EAX                         ; 004ded6a
    SCASB.REPNE ES:EDI                  ; 004ded6c
    NOT ECX                             ; 004ded6e
    DEC ECX                             ; 004ded70
    MOV dword ptr [ESP + 0x284],ECX     ; 004ded71
    TEST ECX,ECX                        ; 004ded78
    JLE 0x004dedb9                      ; 004ded7a
        ;   XREF to: 004dedb9 (CONDITIONAL_JUMP)  ; LAB_004dedb9
    MOV EAX,ECX                         ; 004ded7c
    NEG EAX                             ; 004ded7e
    MOV EDI,ECX                         ; 004ded80
    ADD ECX,EAX                         ; 004ded82
    MOV EBX,ESI                         ; 004ded84
    MOV dword ptr [ESP + 0x3d4],ECX     ; 004ded86
    XOR EAX,EAX                         ; 004ded8d
        ;   Label: LAB_004ded8d
    MOV AL,byte ptr [EBX]               ; 004ded8f
    PUSH EAX                            ; 004ded91
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004ded92 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004ded99
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004ded9e
    CMP ESI,EAX                         ; 004deda1
    JNZ 0x004dedac                      ; 004deda3
        ;   XREF to: 004dedac (CONDITIONAL_JUMP)  ; LAB_004dedac
    INC dword ptr [ESP + 0x288]         ; 004deda5
    MOV ECX,dword ptr [ESP + 0x3d4]     ; 004dedac
        ;   Label: LAB_004dedac
    DEC EDI                             ; 004dedb3
    INC EBX                             ; 004dedb4
    CMP EDI,ECX                         ; 004dedb5
    JG 0x004ded8d                       ; 004dedb7
        ;   XREF to: 004ded8d (CONDITIONAL_JUMP)  ; LAB_004ded8d
    MOV EAX,dword ptr [ESP + 0x288]     ; 004dedb9
        ;   Label: LAB_004dedb9
    CMP EAX,dword ptr [ESP + 0x284]     ; 004dedc0
    JNZ 0x004dee12                      ; 004dedc7
        ;   XREF to: 004dee12 (CONDITIONAL_JUMP)  ; LAB_004dee12
    MOV ESI,dword ptr [ESP + 0x27c]     ; 004dedc9
    XOR CL,CL                           ; 004dedd0
    PUSH ESI                            ; 004dedd2 | = "CElephantGun"
    MOV byte ptr [0x02d831d8],CL        ; 004dedd3 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004dedd9
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004dedde
    MOV EDI,dword ptr [ESP + 0x280]     ; 004dede1
    PUSH 0x40a00000                     ; 004dede8
    PUSH EDI                            ; 004deded
    MOV EAX,[0x0067b654]                ; 004dedee | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 004dedf3 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dedf4
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dedf9
    PUSH 0x62b9dd                       ; 004dedfc | = "cheat-1.wav"
    PUSH 0x0                            ; 004dee01
    MOV EDX,dword ptr [0x00681ef8]      ; 004dee03 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 004dee09 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004dee0a
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dee0f
    PUSH 0x62c0dc                       ; 004dee12 | = "You have the charged radiance emitter"
        ;   Label: LAB_004dee12
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dee17
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dee1c
    PUSH 0x62c10c                       ; 004dee1f | g_CheatStr_LightGun
    MOV EBX,EAX                         ; 004dee24
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dee26
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV ECX,0x62c102                    ; 004dee2b | = "CLightGun"
    MOV ESI,EAX                         ; 004dee30
    ADD ESP,0x4                         ; 004dee32
    MOV EDI,EAX                         ; 004dee35
    MOV dword ptr [ESP + 0x28c],ECX     ; 004dee37 | = "CLightGun"
    MOV dword ptr [ESP + 0x290],EBX     ; 004dee3e
    SUB ECX,ECX                         ; 004dee45
    DEC ECX                             ; 004dee47
    XOR EAX,EAX                         ; 004dee48
    SCASB.REPNE ES:EDI                  ; 004dee4a
    NOT ECX                             ; 004dee4c
    DEC ECX                             ; 004dee4e
    XOR EBX,EBX                         ; 004dee4f
    MOV dword ptr [ESP + 0x294],ECX     ; 004dee51
    MOV dword ptr [ESP + 0x298],EBX     ; 004dee58
    TEST ECX,ECX                        ; 004dee5f
    JLE 0x004deea0                      ; 004dee61
        ;   XREF to: 004deea0 (CONDITIONAL_JUMP)  ; LAB_004deea0
    MOV EAX,ECX                         ; 004dee63
    NEG EAX                             ; 004dee65
    MOV EDI,ECX                         ; 004dee67
    ADD ECX,EAX                         ; 004dee69
    MOV EBX,ESI                         ; 004dee6b
    MOV dword ptr [ESP + 0x3d8],ECX     ; 004dee6d
    XOR EAX,EAX                         ; 004dee74
        ;   Label: LAB_004dee74
    MOV AL,byte ptr [EBX]               ; 004dee76
    PUSH EAX                            ; 004dee78
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004dee79 | DAT_02d831d6 | g_InputHistory
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dee80
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dee85
    CMP ESI,EAX                         ; 004dee88
    JNZ 0x004dee93                      ; 004dee8a
        ;   XREF to: 004dee93 (CONDITIONAL_JUMP)  ; LAB_004dee93
    INC dword ptr [ESP + 0x298]         ; 004dee8c
    MOV EAX,dword ptr [ESP + 0x3d8]     ; 004dee93
        ;   Label: LAB_004dee93
    DEC EDI                             ; 004dee9a
    INC EBX                             ; 004dee9b
    CMP EDI,EAX                         ; 004dee9c
    JG 0x004dee74                       ; 004dee9e
        ;   XREF to: 004dee74 (CONDITIONAL_JUMP)  ; LAB_004dee74
    MOV EAX,dword ptr [ESP + 0x298]     ; 004deea0
        ;   Label: LAB_004deea0
    CMP EAX,dword ptr [ESP + 0x294]     ; 004deea7
    JNZ 0x004deefa                      ; 004deeae
        ;   XREF to: 004deefa (CONDITIONAL_JUMP)  ; LAB_004deefa
    XOR CH,CH                           ; 004deeb0
    MOV byte ptr [0x02d831d8],CH        ; 004deeb2 | g_InputHistory+1
    MOV ECX,dword ptr [ESP + 0x28c]     ; 004deeb8 | = "CLightGun"
    PUSH ECX                            ; 004deebf | = "CLightGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004deec0
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004deec5
    MOV EBX,dword ptr [ESP + 0x290]     ; 004deec8
    PUSH 0x40a00000                     ; 004deecf
    PUSH EBX                            ; 004deed4
    MOV ESI,dword ptr [0x0067b654]      ; 004deed5 | g_CGamePtr
    PUSH ESI                            ; 004deedb | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004deedc
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004deee1
    PUSH 0x62b9dd                       ; 004deee4 | = "cheat-1.wav"
    PUSH 0x0                            ; 004deee9
    MOV EDI,dword ptr [0x00681ef8]      ; 004deeeb | g_CSoundPtr
    PUSH EDI                            ; 004deef1 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004deef2
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004deef7
    PUSH 0x62c141                       ; 004deefa | g_CheatStr_AllWeapons
        ;   Label: LAB_004deefa
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004deeff
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004def04
    ADD ESP,0x4                         ; 004def06
    XOR EAX,EAX                         ; 004def09
    MOV EDI,EBX                         ; 004def0b
    MOV dword ptr [ESP + 0x2a0],EAX     ; 004def0d
    SUB ECX,ECX                         ; 004def14
    DEC ECX                             ; 004def16
    XOR EAX,EAX                         ; 004def17
    SCASB.REPNE ES:EDI                  ; 004def19
    NOT ECX                             ; 004def1b
    DEC ECX                             ; 004def1d
    MOV dword ptr [ESP + 0x29c],ECX     ; 004def1e
    TEST ECX,ECX                        ; 004def25
    JLE 0x004def64                      ; 004def27
        ;   XREF to: 004def64 (CONDITIONAL_JUMP)  ; LAB_004def64
    MOV EAX,ECX                         ; 004def29
    NEG EAX                             ; 004def2b
    MOV EDI,ECX                         ; 004def2d
    ADD ECX,EAX                         ; 004def2f
    MOV dword ptr [ESP + 0x3dc],ECX     ; 004def31
    XOR EAX,EAX                         ; 004def38
        ;   Label: LAB_004def38
    MOV AL,byte ptr [EBX]               ; 004def3a
    PUSH EAX                            ; 004def3c
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004def3d | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004def44
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004def49
    CMP ESI,EAX                         ; 004def4c
    JNZ 0x004def57                      ; 004def4e
        ;   XREF to: 004def57 (CONDITIONAL_JUMP)  ; LAB_004def57
    INC dword ptr [ESP + 0x2a0]         ; 004def50
    MOV ECX,dword ptr [ESP + 0x3dc]     ; 004def57
        ;   Label: LAB_004def57
    DEC EDI                             ; 004def5e
    INC EBX                             ; 004def5f
    CMP EDI,ECX                         ; 004def60
    JG 0x004def38                       ; 004def62
        ;   XREF to: 004def38 (CONDITIONAL_JUMP)  ; LAB_004def38
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 004def64
        ;   Label: LAB_004def64
    MOV EBX,dword ptr [ESP + 0x29c]     ; 004def6b
    CMP EAX,EBX                         ; 004def72
    JNZ 0x004df06d                      ; 004def74
        ;   XREF to: 004df06d (CONDITIONAL_JUMP)  ; LAB_004df06d
    PUSH 0x3                            ; 004def7a
    XOR AL,BL                           ; 004def7c
    PUSH 0x62c177                       ; 004def7e | = "CGun"
    MOV [0x02d831d8],AL                 ; 004def83 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 ; 004def88
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930(char * p1, EAmmoType p3)
    ADD ESP,0x8                         ; 004def8d
    PUSH 0x7                            ; 004def90
    PUSH 0x62c17c                       ; 004def92 | = "CGun"
    CALL core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 ; 004def97
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930(char * p1, EAmmoType p3)
    ADD ESP,0x8                         ; 004def9c
    PUSH 0x8                            ; 004def9f
    PUSH 0x62c181                       ; 004defa1 | = "CGun"
    CALL core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 ; 004defa6
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930(char * p1, EAmmoType p3)
    ADD ESP,0x8                         ; 004defab
    PUSH 0x62c186                       ; 004defae | = "CShotgun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004defb3
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004defb8
    PUSH 0x62c18f                       ; 004defbb | = "CCrossbow"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004defc0
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004defc5
    PUSH 0x1                            ; 004defc8
    PUSH 0x62c199                       ; 004defca | = "CCrossbow"
    CALL core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 ; 004defcf
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930(char * p1, EAmmoType p3)
    ADD ESP,0x8                         ; 004defd4
    PUSH 0x62c1a3                       ; 004defd7 | = "CDynamite"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004defdc
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004defe1
    PUSH 0x62c1ad                       ; 004defe4 | = "CFlameThrower"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004defe9
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004defee
    PUSH 0x62c1bb                       ; 004deff1 | = "CTommyGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004deff6
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004deffb
    PUSH 0x62c1c5                       ; 004deffe | = "CElephantGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004df003
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004df008
    PUSH 0x62c1d2                       ; 004df00b | = "CLightGun"
    CALL core_game.cpp_giveHeroWeapon_FUN_004dd870 ; 004df010
        ;   XREF to: 004dd870 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * class_name)
    ADD ESP,0x4                         ; 004df015
    PUSH 0x40a00000                     ; 004df018
    PUSH 0x62c1dc                       ; 004df01d | = "You've got all the weapons"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004df022
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004df027
    PUSH EAX                            ; 004df02a
    MOV ESI,dword ptr [EBP + 0x14]      ; 004df02b
    PUSH ESI                            ; 004df02e
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004df02f
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004df034
    PUSH 0x62c1f7                       ; 004df037 | = "cheat-1.wav"
    MOV EAX,[0x02db87d0]                ; 004df03c | g_LocalHeroIndex
    MOV dword ptr [ESI + 0x1d0],0x1     ; 004df041
    PUSH 0x0                            ; 004df04b
    MOV EDI,dword ptr [0x00681ef8]      ; 004df04d | g_CSoundPtr
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004df053 | g_HeroActors
    PUSH EDI                            ; 004df05a | g_CSoundInstance
    MOV dword ptr [EAX + 0x243c],0x42c80000 ; 004df05b
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df065
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df06a
    PUSH 0x62c203                       ; 004df06d | g_CheatStr_MoreAmmo
        ;   Label: LAB_004df06d
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df072
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004df077
    ADD ESP,0x4                         ; 004df079
    XOR EAX,EAX                         ; 004df07c
    MOV EDI,EBX                         ; 004df07e
    MOV dword ptr [ESP + 0x2a8],EAX     ; 004df080
    SUB ECX,ECX                         ; 004df087
    DEC ECX                             ; 004df089
    XOR EAX,EAX                         ; 004df08a
    SCASB.REPNE ES:EDI                  ; 004df08c
    NOT ECX                             ; 004df08e
    DEC ECX                             ; 004df090
    MOV dword ptr [ESP + 0x2a4],ECX     ; 004df091
    TEST ECX,ECX                        ; 004df098
    JLE 0x004df0d7                      ; 004df09a
        ;   XREF to: 004df0d7 (CONDITIONAL_JUMP)  ; LAB_004df0d7
    MOV EAX,ECX                         ; 004df09c
    NEG EAX                             ; 004df09e
    MOV EDI,ECX                         ; 004df0a0
    ADD ECX,EAX                         ; 004df0a2
    MOV dword ptr [ESP + 0x3e0],ECX     ; 004df0a4
    XOR EAX,EAX                         ; 004df0ab
        ;   Label: LAB_004df0ab
    MOV AL,byte ptr [EBX]               ; 004df0ad
    PUSH EAX                            ; 004df0af
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004df0b0 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df0b7
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df0bc
    CMP ESI,EAX                         ; 004df0bf
    JNZ 0x004df0ca                      ; 004df0c1
        ;   XREF to: 004df0ca (CONDITIONAL_JUMP)  ; LAB_004df0ca
    INC dword ptr [ESP + 0x2a8]         ; 004df0c3
    MOV ECX,dword ptr [ESP + 0x3e0]     ; 004df0ca
        ;   Label: LAB_004df0ca
    DEC EDI                             ; 004df0d1
    INC EBX                             ; 004df0d2
    CMP EDI,ECX                         ; 004df0d3
    JG 0x004df0ab                       ; 004df0d5
        ;   XREF to: 004df0ab (CONDITIONAL_JUMP)  ; LAB_004df0ab
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 004df0d7
        ;   Label: LAB_004df0d7
    MOV EBX,dword ptr [ESP + 0x2a4]     ; 004df0de
    CMP EAX,EBX                         ; 004df0e5
    JNZ 0x004df142                      ; 004df0e7
        ;   XREF to: 004df142 (CONDITIONAL_JUMP)  ; LAB_004df142
    XOR AH,BH                           ; 004df0e9
    MOV byte ptr [0x02d831d8],AH        ; 004df0eb | g_InputHistory+1
    MOV EAX,[0x02db87d0]                ; 004df0f1 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004df0f6 | g_HeroActors
    MOV EAX,dword ptr [EAX + 0x1fa68]   ; 004df0fd
    TEST EAX,EAX                        ; 004df103
    JZ 0x004df10e                       ; 004df105
        ;   XREF to: 004df10e (CONDITIONAL_JUMP)  ; LAB_004df10e
    ADD dword ptr [EAX + 0x568],0x64    ; 004df107
    PUSH 0x40a00000                     ; 004df10e
        ;   Label: LAB_004df10e
    PUSH 0x62c239                       ; 004df113 | = "You just got 100 more bullets"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004df118
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004df11d
    PUSH EAX                            ; 004df120
    MOV EDI,dword ptr [EBP + 0x14]      ; 004df121
    PUSH EDI                            ; 004df124
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004df125
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004df12a
    PUSH 0x62c257                       ; 004df12d | = "cheat-1.wav"
    PUSH 0x0                            ; 004df132
    MOV EAX,[0x00681ef8]                ; 004df134 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004df139 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df13a
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df13f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df142
        ;   Label: LAB_004df142
    CMP dword ptr [EAX + 0x210],0x0     ; 004df145
    JZ 0x004df408                       ; 004df14c
        ;   XREF to: 004df408 (CONDITIONAL_JUMP)  ; LAB_004df408
    PUSH 0x62c263                       ; 004df152 | g_CheatStr_RaiseEvent
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df157
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004df15c
    ADD ESP,0x4                         ; 004df15e
    XOR ECX,ECX                         ; 004df161
    MOV EDI,EAX                         ; 004df163
    MOV dword ptr [ESP + 0x2b0],ECX     ; 004df165
    SUB ECX,ECX                         ; 004df16c
    DEC ECX                             ; 004df16e
    XOR EAX,EAX                         ; 004df16f
    SCASB.REPNE ES:EDI                  ; 004df171
    NOT ECX                             ; 004df173
    DEC ECX                             ; 004df175
    MOV dword ptr [ESP + 0x2ac],ECX     ; 004df176
    TEST ECX,ECX                        ; 004df17d
    JLE 0x004df1be                      ; 004df17f
        ;   XREF to: 004df1be (CONDITIONAL_JUMP)  ; LAB_004df1be
    MOV EAX,ECX                         ; 004df181
    MOV ESI,EBX                         ; 004df183
    NEG EAX                             ; 004df185
    MOV EBX,ECX                         ; 004df187
    ADD ECX,EAX                         ; 004df189
    MOV dword ptr [ESP + 0x3e4],ECX     ; 004df18b
    XOR EAX,EAX                         ; 004df192
        ;   Label: LAB_004df192
    MOV AL,byte ptr [ESI]               ; 004df194
    PUSH EAX                            ; 004df196
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004df197 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df19e
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df1a3
    CMP EDI,EAX                         ; 004df1a6
    JNZ 0x004df1b1                      ; 004df1a8
        ;   XREF to: 004df1b1 (CONDITIONAL_JUMP)  ; LAB_004df1b1
    INC dword ptr [ESP + 0x2b0]         ; 004df1aa
    MOV EDI,dword ptr [ESP + 0x3e4]     ; 004df1b1
        ;   Label: LAB_004df1b1
    DEC EBX                             ; 004df1b8
    INC ESI                             ; 004df1b9
    CMP EBX,EDI                         ; 004df1ba
    JG 0x004df192                       ; 004df1bc
        ;   XREF to: 004df192 (CONDITIONAL_JUMP)  ; LAB_004df192
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 004df1be
        ;   Label: LAB_004df1be
    CMP EAX,dword ptr [ESP + 0x2ac]     ; 004df1c5
    JNZ 0x004df3dd                      ; 004df1cc
        ;   XREF to: 004df3dd (CONDITIONAL_JUMP)  ; LAB_004df3dd
    XOR DL,DL                           ; 004df1d2
    MOV byte ptr [0x02d831d8],DL        ; 004df1d4 | g_InputHistory+1
    PUSH 0x62c296                       ; 004df1da | = "cheat-1.wav"
        ;   Label: LAB_004df1da
    PUSH 0x0                            ; 004df1df
    MOV ECX,dword ptr [0x00681ef8]      ; 004df1e1 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 004df1e7 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df1e8
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df1ed
    MOV EDI,0x67b5f0                    ; 004df1f0 | g_EventCommandBuffer
    PUSH 0x1                            ; 004df1f5
        ;   Label: LAB_004df1f5
    PUSH 0x64                           ; 004df1f7
    PUSH EDI                            ; 004df1f9 | g_EventCommandBuffer
    PUSH 0x62c2a2                       ; 004df1fa | = "Raise an event"
    MOV EAX,[0x00678a60]                ; 004df1ff | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004df204 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004df205
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004df20a
    TEST EAX,EAX                        ; 004df20d
    JZ 0x004df408                       ; 004df20f
        ;   XREF to: 004df408 (CONDITIONAL_JUMP)  ; LAB_004df408
    PUSH EDI                            ; 004df215 | g_EventCommandBuffer
    MOV EDX,dword ptr [0x006793d0]      ; 004df216 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 004df21c | g_CEventListInstance
    CALL core_event.cpp_CEventList_validateCommands_FUN_004add40 ; 004df21d
        ;   XREF to: 004add40 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_004add40(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004df222
    TEST EAX,EAX                        ; 004df225
    JZ 0x004df543                       ; 004df227
        ;   XREF to: 004df543 (CONDITIONAL_JUMP)  ; LAB_004df543
    PUSH EAX                            ; 004df22d
    MOV ECX,dword ptr [0x00678a60]      ; 004df22e | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004df234 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004df235
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004df23a
    JMP 0x004df1f5                      ; 004df23d
        ;   XREF to: 004df1f5 (UNCONDITIONAL_JUMP)  ; LAB_004df1f5
    PUSH 0x44                           ; 004df23f
        ;   Label: LAB_004df23f
    MOV EAX,[0x0067cf44]                ; 004df241 | g_CKeysPtr
    PUSH EAX                            ; 004df246 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 004df247 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 004df249
    ADD ESP,0x8                         ; 004df24c
    TEST EAX,EAX                        ; 004df24f
    JZ 0x004ddb90                       ; 004df251
        ;   XREF to: 004ddb90 (CONDITIONAL_JUMP)  ; LAB_004ddb90
    PUSH 0x0                            ; 004df257
    PUSH 0x64                           ; 004df259
    LEA EAX,[ESP + 0x108]               ; 004df25b
    PUSH EAX                            ; 004df262
    PUSH 0x62ba21                       ; 004df263 | = "Enter cheat code"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004df268
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004df26d
    PUSH EAX                            ; 004df270
    MOV ECX,dword ptr [0x00678a60]      ; 004df271 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004df277 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400 ; 004df278
        ;   XREF to: 004a0400 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004df27d
    TEST EAX,EAX                        ; 004df280
    JZ 0x004ddb90                       ; 004df282
        ;   XREF to: 004ddb90 (CONDITIONAL_JUMP)  ; LAB_004ddb90
    MOV AH,byte ptr [ESP + 0x100]       ; 004df288
    XOR EBX,EBX                         ; 004df28f
    TEST AH,AH                          ; 004df291
    JZ 0x004ddb90                       ; 004df293
        ;   XREF to: 004ddb90 (CONDITIONAL_JUMP)  ; LAB_004ddb90
    XOR EAX,EAX                         ; 004df299
        ;   Label: LAB_004df299
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x100] ; 004df29b
    PUSH EAX                            ; 004df2a2
    CALL wincore_winrun.cpp_enqueueInput_FUN_005f2f30 ; 004df2a3
        ;   XREF to: 005f2f30 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_005f2f30(int input_value)
    ADD ESP,0x4                         ; 004df2a8
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x101] ; 004df2ab
    INC EBX                             ; 004df2b2
    TEST DL,DL                          ; 004df2b3
    JNZ 0x004df299                      ; 004df2b5
        ;   XREF to: 004df299 (CONDITIONAL_JUMP)  ; LAB_004df299
    JMP 0x004ddb90                      ; 004df2b7
        ;   XREF to: 004ddb90 (UNCONDITIONAL_JUMP)  ; LAB_004ddb90
    INC dword ptr [ESP + 0x1bc]         ; 004df2bc
        ;   Label: LAB_004df2bc
    JMP 0x004ddc33                      ; 004df2c3
        ;   XREF to: 004ddc33 (UNCONDITIONAL_JUMP)  ; LAB_004ddc33
    MOV EBX,dword ptr [EBP + 0x14]      ; 004df2c8
        ;   Label: LAB_004df2c8
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004df2cb
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDI,dword ptr [EBX + 0x268]     ; 004df2d0
    SUB EAX,EDI                         ; 004df2d6
    MOV dword ptr [ESP + 0x448],EAX     ; 004df2d8
    FILD dword ptr [ESP + 0x448]        ; 004df2df
    FMUL double ptr [0x0062c915]        ; 004df2e6 | DOUBLE_0062c915
    MOV dword ptr [EBX + 0x208],0x0     ; 004df2ec
    MOV EAX,EBX                         ; 004df2f6
    FMUL double ptr [0x0062c91d]        ; 004df2f8 | DOUBLE_0062c91d
    FILD dword ptr [EAX + 0x26c]        ; 004df2fe
    FXCH                                ; 004df304
    FSTP double ptr [ESP + 0x1ac]       ; 004df306
    FDIV double ptr [ESP + 0x1ac]       ; 004df30d
    FSTP double ptr [ESP + 0x1ac]       ; 004df314
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 004df31b
    PUSH EAX                            ; 004df322
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 004df323
    PUSH EDX                            ; 004df32a
    PUSH 0x62bac4                       ; 004df32b | = "FPS: %3.2lf"
    LEA EAX,[ESP + 0xc]                 ; 004df330
    PUSH EAX                            ; 004df334
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004df335
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004df33a
    MOV EAX,ESP                         ; 004df33d
    PUSH 0x40a00000                     ; 004df33f
    PUSH EAX                            ; 004df344
    PUSH EBX                            ; 004df345
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004df346
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004df34b
    JMP 0x004ddd5b                      ; 004df34e
        ;   XREF to: 004ddd5b (UNCONDITIONAL_JUMP)  ; LAB_004ddd5b
    PUSH 0x40a00000                     ; 004df353
        ;   Label: LAB_004df353
    PUSH 0x62bb47                       ; 004df358 | = "Event debug off"
    JMP 0x004ddecb                      ; 004df35d
        ;   XREF to: 004ddecb (UNCONDITIONAL_JUMP)  ; LAB_004ddecb
    PUSH 0x40a00000                     ; 004df362
        ;   Label: LAB_004df362
    PUSH 0x62bba7                       ; 004df367 | = "Script debug off"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004df36c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004df371
    PUSH EAX                            ; 004df374
    PUSH EBX                            ; 004df375
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004df376
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004df37b
    MOV EDI,dword ptr [0x00679398]      ; 004df37e | g_WindowHeight
    PUSH EDI                            ; 004df384
    PUSH 0x0                            ; 004df385
    PUSH 0x0                            ; 004df387
    MOV EAX,[0x006810c8]                ; 004df389 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004df38e | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x278],0x0     ; 004df38f
    JMP 0x004ddfdd                      ; 004df399
        ;   XREF to: 004ddfdd (UNCONDITIONAL_JUMP)  ; LAB_004ddfdd
    PUSH 0x40a00000                     ; 004df39e
        ;   Label: LAB_004df39e
    PUSH 0x62bc0c                       ; 004df3a3 | = "Memory debugging off"
    JMP 0x004de0bb                      ; 004df3a8
        ;   XREF to: 004de0bb (UNCONDITIONAL_JUMP)  ; LAB_004de0bb
    PUSH 0x40a00000                     ; 004df3ad
        ;   Label: LAB_004df3ad
    PUSH 0x62be03                       ; 004df3b2 | = "God mode disabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004df3b7
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004df3bc
    PUSH EAX                            ; 004df3bf
    PUSH EBX                            ; 004df3c0
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004df3c1
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004df3c6
    JMP 0x004de6d7                      ; 004df3c9
        ;   XREF to: 004de6d7 (UNCONDITIONAL_JUMP)  ; LAB_004de6d7
    PUSH 0x40a00000                     ; 004df3ce
        ;   Label: LAB_004df3ce
    PUSH 0x62be65                       ; 004df3d3 | = "Enemies thawed"
    JMP 0x004de793                      ; 004df3d8
        ;   XREF to: 004de793 (UNCONDITIONAL_JUMP)  ; LAB_004de793
    PUSH 0x1d                           ; 004df3dd
        ;   Label: LAB_004df3dd
    MOV EAX,[0x0067cf44]                ; 004df3df | g_CKeysPtr
    PUSH EAX                            ; 004df3e4 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 004df3e5 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 004df3e7
    ADD ESP,0x8                         ; 004df3e9
    TEST EAX,EAX                        ; 004df3ec
    JZ 0x004df408                       ; 004df3ee
        ;   XREF to: 004df408 (CONDITIONAL_JUMP)  ; LAB_004df408
    PUSH 0x13                           ; 004df3f0
    MOV EAX,[0x0067cf44]                ; 004df3f2 | g_CKeysPtr
    PUSH EAX                            ; 004df3f7 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 004df3f8 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 004df3fa
    ADD ESP,0x8                         ; 004df3fd
    TEST EAX,EAX                        ; 004df400
    JNZ 0x004df1da                      ; 004df402
        ;   XREF to: 004df1da (CONDITIONAL_JUMP)  ; LAB_004df1da
    PUSH 0x62c2b1                       ; 004df408 | g_CheatStr_KillNearby
        ;   Label: LAB_004df408
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df40d
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004df412
    ADD ESP,0x4                         ; 004df414
    MOV EDI,EAX                         ; 004df417
    MOV EBX,EAX                         ; 004df419
    SUB ECX,ECX                         ; 004df41b
    DEC ECX                             ; 004df41d
    XOR EAX,EAX                         ; 004df41e
    SCASB.REPNE ES:EDI                  ; 004df420
    NOT ECX                             ; 004df422
    DEC ECX                             ; 004df424
    MOV dword ptr [ESP + 0x2b8],ESI     ; 004df425
    MOV dword ptr [ESP + 0x2b4],ECX     ; 004df42c
    TEST ECX,ECX                        ; 004df433
    JLE 0x004df474                      ; 004df435
        ;   XREF to: 004df474 (CONDITIONAL_JUMP)  ; LAB_004df474
    MOV EAX,ECX                         ; 004df437
    MOV EDI,EBX                         ; 004df439
    NEG EAX                             ; 004df43b
    MOV EBX,ECX                         ; 004df43d
    ADD ECX,EAX                         ; 004df43f
    MOV dword ptr [ESP + 0x3e8],ECX     ; 004df441
    XOR EAX,EAX                         ; 004df448
        ;   Label: LAB_004df448
    MOV AL,byte ptr [EDI]               ; 004df44a
    PUSH EAX                            ; 004df44c
    MOVZX ESI,byte ptr [EBX + 0x2d831d7] ; 004df44d | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df454
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df459
    CMP ESI,EAX                         ; 004df45c
    JNZ 0x004df467                      ; 004df45e
        ;   XREF to: 004df467 (CONDITIONAL_JUMP)  ; LAB_004df467
    INC dword ptr [ESP + 0x2b8]         ; 004df460
    MOV EAX,dword ptr [ESP + 0x3e8]     ; 004df467
        ;   Label: LAB_004df467
    DEC EBX                             ; 004df46e
    INC EDI                             ; 004df46f
    CMP EBX,EAX                         ; 004df470
    JG 0x004df448                       ; 004df472
        ;   XREF to: 004df448 (CONDITIONAL_JUMP)  ; LAB_004df448
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 004df474
        ;   Label: LAB_004df474
    CMP EAX,dword ptr [ESP + 0x2b4]     ; 004df47b
    JNZ 0x004df592                      ; 004df482
        ;   XREF to: 004df592 (CONDITIONAL_JUMP)  ; LAB_004df592
    PUSH 0x62c2e6                       ; 004df488 | = "cheat-1.wav"
    PUSH 0x0                            ; 004df48d
    MOV ECX,dword ptr [0x00681ef8]      ; 004df48f | g_CSoundInstance | g_CSoundPtr
    XOR DH,DH                           ; 004df495
    PUSH ECX                            ; 004df497 | g_CSoundInstance
    XOR EDI,EDI                         ; 004df498
    MOV byte ptr [0x02d831d8],DH        ; 004df49a | g_InputHistory+1
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df4a0
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df4a5
    MOV dword ptr [ESP + 0x3ec],EDI     ; 004df4a8
    MOV EAX,[0x006810c8]                ; 004df4af | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004df4af
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 004df4b4 | g_CDemonSetInstance.enemy_count
    JGE 0x004df592                      ; 004df4ba
        ;   XREF to: 004df592 (CONDITIONAL_JUMP)  ; LAB_004df592
    ADD EAX,dword ptr [ESP + 0x3ec]     ; 004df4c0
    MOV EBX,dword ptr [EAX + 0x150fe0]  ; 004df4c7 | DAT_03265258 | DAT_0326525c
    MOV EAX,[0x02db87d0]                ; 004df4cd | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004df4d2 | g_HeroActors
    LEA ESI,[EBX + 0x20]                ; 004df4d9
    FLD float ptr [EAX + 0x20]          ; 004df4dc
    FSUB float ptr [ESI]                ; 004df4df
    FSTP float ptr [ESP + 0x1a0]        ; 004df4e1
    FLD float ptr [EAX + 0x24]          ; 004df4e8
    FSUB float ptr [ESI + 0x4]          ; 004df4eb
    FST float ptr [ESP + 0x1a4]         ; 004df4ee
    FMUL float ptr [ESP + 0x1a4]        ; 004df4f5
    FLD float ptr [ESP + 0x1a0]         ; 004df4fc
    FMUL ST0                            ; 004df503
    FLD float ptr [EAX + 0x28]          ; 004df505
    FSUB float ptr [ESI + 0x8]          ; 004df508
    FXCH                                ; 004df50b
    FADDP ST2,ST0                       ; 004df50d
    FST float ptr [ESP + 0x1a8]         ; 004df50f
    FMUL float ptr [ESP + 0x1a8]        ; 004df516
    FADDP                               ; 004df51d
    FSQRT                               ; 004df51f
    FCOMP double ptr [0x0062c925]       ; 004df521 | DOUBLE_0062c925
    FNSTSW AX                           ; 004df527
    SAHF                                ; 004df529
    JBE 0x004df55c                      ; 004df52a
        ;   XREF to: 004df55c (CONDITIONAL_JUMP)  ; LAB_004df55c
    MOV EAX,dword ptr [ESP + 0x3ec]     ; 004df52c
        ;   Label: LAB_004df52c
    ADD EAX,0x4                         ; 004df533
    INC EDI                             ; 004df536
    MOV dword ptr [ESP + 0x3ec],EAX     ; 004df537
    JMP 0x004df4af                      ; 004df53e
        ;   XREF to: 004df4af (UNCONDITIONAL_JUMP)  ; LAB_004df4af
    PUSH 0x67b5f0                       ; 004df543 | g_EventCommandBuffer
        ;   Label: LAB_004df543
    MOV EBX,dword ptr [0x006793d0]      ; 004df548 | g_CEventListInstance | g_CEventListPtr
    PUSH EBX                            ; 004df54e | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004df54f
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004df554
    JMP 0x004df408                      ; 004df557
        ;   XREF to: 004df408 (UNCONDITIONAL_JUMP)  ; LAB_004df408
    LEA EAX,[ESP + 0x164]               ; 004df55c
        ;   Label: LAB_004df55c
    PUSH EAX                            ; 004df563
    MOV ESI,0x42c80000                  ; 004df564
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004df569
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004df56e
    MOV dword ptr [ESP + 0x168],ESI     ; 004df571
    LEA ESI,[ESP + 0x164]               ; 004df578
    PUSH ESI                            ; 004df57f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004df580
    PUSH EBX                            ; 004df586
    CALL dword ptr [EAX + 0x11c]        ; 004df587
    ADD ESP,0x8                         ; 004df58d
    JMP 0x004df52c                      ; 004df590
        ;   XREF to: 004df52c (UNCONDITIONAL_JUMP)  ; LAB_004df52c
    PUSH 0x62c2f2                       ; 004df592 | g_CheatStr_Dismemberment
        ;   Label: LAB_004df592
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df597
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004df59c
    ADD ESP,0x4                         ; 004df59e
    MOV EDI,EAX                         ; 004df5a1
    XOR EDX,EDX                         ; 004df5a3
    SUB ECX,ECX                         ; 004df5a5
    DEC ECX                             ; 004df5a7
    XOR EAX,EAX                         ; 004df5a8
    SCASB.REPNE ES:EDI                  ; 004df5aa
    NOT ECX                             ; 004df5ac
    DEC ECX                             ; 004df5ae
    MOV dword ptr [ESP + 0x2c0],EDX     ; 004df5af
    MOV dword ptr [ESP + 0x2bc],ECX     ; 004df5b6
    TEST ECX,ECX                        ; 004df5bd
    JLE 0x004df5fc                      ; 004df5bf
        ;   XREF to: 004df5fc (CONDITIONAL_JUMP)  ; LAB_004df5fc
    MOV EAX,ECX                         ; 004df5c1
    NEG EAX                             ; 004df5c3
    MOV EDI,ECX                         ; 004df5c5
    ADD ECX,EAX                         ; 004df5c7
    MOV dword ptr [ESP + 0x3f0],ECX     ; 004df5c9
    XOR EAX,EAX                         ; 004df5d0
        ;   Label: LAB_004df5d0
    MOV AL,byte ptr [EBX]               ; 004df5d2
    PUSH EAX                            ; 004df5d4
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004df5d5 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df5dc
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df5e1
    CMP ESI,EAX                         ; 004df5e4
    JNZ 0x004df5ef                      ; 004df5e6
        ;   XREF to: 004df5ef (CONDITIONAL_JUMP)  ; LAB_004df5ef
    INC dword ptr [ESP + 0x2c0]         ; 004df5e8
    MOV ECX,dword ptr [ESP + 0x3f0]     ; 004df5ef
        ;   Label: LAB_004df5ef
    DEC EDI                             ; 004df5f6
    INC EBX                             ; 004df5f7
    CMP EDI,ECX                         ; 004df5f8
    JG 0x004df5d0                       ; 004df5fa
        ;   XREF to: 004df5d0 (CONDITIONAL_JUMP)  ; LAB_004df5d0
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004df5fc
        ;   Label: LAB_004df5fc
    CMP EAX,dword ptr [ESP + 0x2bc]     ; 004df603
    JNZ 0x004df668                      ; 004df60a
        ;   XREF to: 004df668 (CONDITIONAL_JUMP)  ; LAB_004df668
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df60c
    XOR BL,BL                           ; 004df60f
    MOV ESI,dword ptr [EAX + 0x1e0]     ; 004df611
    MOV byte ptr [0x02d831d8],BL        ; 004df617 | g_InputHistory+1
    TEST ESI,ESI                        ; 004df61d
    SETZ AL                             ; 004df61f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004df622
    AND EAX,0xff                        ; 004df625
    MOV dword ptr [EBX + 0x1e0],EAX     ; 004df62a
    JZ 0x004dfefb                       ; 004df630
        ;   XREF to: 004dfefb (CONDITIONAL_JUMP)  ; LAB_004dfefb
    PUSH 0x40a00000                     ; 004df636
    PUSH 0x62c328                       ; 004df63b | = "Gratuitous dismemberment enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004df640
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_004df640
    ADD ESP,0x4                         ; 004df645
    PUSH EAX                            ; 004df648
    PUSH EBX                            ; 004df649
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004df64a
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004df64f
    PUSH 0x62c36b                       ; 004df652 | = "cheat-1.wav"
    PUSH 0x0                            ; 004df657
    MOV ECX,dword ptr [0x00681ef8]      ; 004df659 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 004df65f | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df660
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df665
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df668
        ;   Label: LAB_004df668
    CMP dword ptr [EAX + 0x210],0x0     ; 004df66b
    JZ 0x004df73a                       ; 004df672
        ;   XREF to: 004df73a (CONDITIONAL_JUMP)  ; LAB_004df73a
    PUSH 0x62c377                       ; 004df678 | g_CheatStr_TimeFactor
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df67d
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004df682
    ADD ESP,0x4                         ; 004df684
    MOV dword ptr [ESP + 0x2c8],EDI     ; 004df687
    MOV EDI,EAX                         ; 004df68e
    MOV ESI,EAX                         ; 004df690
    SUB ECX,ECX                         ; 004df692
    DEC ECX                             ; 004df694
    XOR EAX,EAX                         ; 004df695
    SCASB.REPNE ES:EDI                  ; 004df697
    NOT ECX                             ; 004df699
    DEC ECX                             ; 004df69b
    MOV dword ptr [ESP + 0x2c4],ECX     ; 004df69c
    TEST ECX,ECX                        ; 004df6a3
    JLE 0x004df6e2                      ; 004df6a5
        ;   XREF to: 004df6e2 (CONDITIONAL_JUMP)  ; LAB_004df6e2
    MOV EAX,ECX                         ; 004df6a7
    NEG EAX                             ; 004df6a9
    MOV EBX,ECX                         ; 004df6ab
    ADD ECX,EAX                         ; 004df6ad
    MOV dword ptr [ESP + 0x3f4],ECX     ; 004df6af
    XOR EAX,EAX                         ; 004df6b6
        ;   Label: LAB_004df6b6
    MOV AL,byte ptr [ESI]               ; 004df6b8
    PUSH EAX                            ; 004df6ba
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004df6bb | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df6c2
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df6c7
    CMP EDI,EAX                         ; 004df6ca
    JNZ 0x004df6d5                      ; 004df6cc
        ;   XREF to: 004df6d5 (CONDITIONAL_JUMP)  ; LAB_004df6d5
    INC dword ptr [ESP + 0x2c8]         ; 004df6ce
    MOV EDX,dword ptr [ESP + 0x3f4]     ; 004df6d5
        ;   Label: LAB_004df6d5
    DEC EBX                             ; 004df6dc
    INC ESI                             ; 004df6dd
    CMP EBX,EDX                         ; 004df6de
    JG 0x004df6b6                       ; 004df6e0
        ;   XREF to: 004df6b6 (CONDITIONAL_JUMP)  ; LAB_004df6b6
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 004df6e2
        ;   Label: LAB_004df6e2
    CMP EAX,dword ptr [ESP + 0x2c4]     ; 004df6e9
    JNZ 0x004df73a                      ; 004df6f0
        ;   XREF to: 004df73a (CONDITIONAL_JUMP)  ; LAB_004df73a
    PUSH 0x62c3a9                       ; 004df6f2 | = "cheat-1.wav"
    XOR BH,BH                           ; 004df6f7
    PUSH 0x0                            ; 004df6f9
    MOV byte ptr [0x02d831d8],BH        ; 004df6fb | g_InputHistory+1
    MOV EBX,dword ptr [0x00681ef8]      ; 004df701 | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004df707 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df708
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df70d
    PUSH 0x1                            ; 004df710
    PUSH 0x40800000                     ; 004df712
    PUSH 0x3c23d70a                     ; 004df717
    PUSH 0x1                            ; 004df71c
    MOV ESI,dword ptr [ESP + 0x2dc]     ; 004df71e
    PUSH ESI                            ; 004df725
    PUSH 0x62c3b5                       ; 004df726 | = "Enter time factor"
    MOV EDI,dword ptr [0x00678a60]      ; 004df72b | g_CEditorToolsPtr
    PUSH EDI                            ; 004df731 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 004df732
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004df737
    PUSH 0x62c3c7                       ; 004df73a | g_CheatStr_ToggleCutscene
        ;   Label: LAB_004df73a
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df73f
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004df744
    ADD ESP,0x4                         ; 004df746
    MOV EDI,EAX                         ; 004df749
    MOV EBX,EAX                         ; 004df74b
    SUB ECX,ECX                         ; 004df74d
    DEC ECX                             ; 004df74f
    XOR EAX,EAX                         ; 004df750
    SCASB.REPNE ES:EDI                  ; 004df752
    NOT ECX                             ; 004df754
    DEC ECX                             ; 004df756
    MOV dword ptr [ESP + 0x2d0],ECX     ; 004df757
    TEST ECX,ECX                        ; 004df75e
    JLE 0x004df7a4                      ; 004df760
        ;   XREF to: 004df7a4 (CONDITIONAL_JUMP)  ; LAB_004df7a4
    MOV EAX,ECX                         ; 004df762
    NEG EAX                             ; 004df764
    MOV EDI,ECX                         ; 004df766
    ADD ECX,EAX                         ; 004df768
    MOV dword ptr [ESP + 0x3f8],ECX     ; 004df76a
    XOR EAX,EAX                         ; 004df771
        ;   Label: LAB_004df771
    MOV AL,byte ptr [EDI + 0x2d831d7]   ; 004df773 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    MOV dword ptr [ESP + 0x448],EAX     ; 004df779
    XOR EAX,EAX                         ; 004df780
    MOV AL,byte ptr [EBX]               ; 004df782
    PUSH EAX                            ; 004df784
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df785
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df78a
    CMP EAX,dword ptr [ESP + 0x448]     ; 004df78d
    JNZ 0x004df797                      ; 004df794
        ;   XREF to: 004df797 (CONDITIONAL_JUMP)  ; LAB_004df797
    INC ESI                             ; 004df796
    MOV EDX,dword ptr [ESP + 0x3f8]     ; 004df797
        ;   Label: LAB_004df797
    DEC EDI                             ; 004df79e
    INC EBX                             ; 004df79f
    CMP EDI,EDX                         ; 004df7a0
    JG 0x004df771                       ; 004df7a2
        ;   XREF to: 004df771 (CONDITIONAL_JUMP)  ; LAB_004df771
    CMP ESI,dword ptr [ESP + 0x2d0]     ; 004df7a4
        ;   Label: LAB_004df7a4
    JNZ 0x004df7e6                      ; 004df7ab
        ;   XREF to: 004df7e6 (CONDITIONAL_JUMP)  ; LAB_004df7e6
    PUSH 0x62c3fa                       ; 004df7ad | = "cheat-1.wav"
    PUSH 0x0                            ; 004df7b2
    MOV EBX,dword ptr [0x00681ef8]      ; 004df7b4 | g_CSoundInstance | g_CSoundPtr
    XOR CL,CL                           ; 004df7ba
    PUSH EBX                            ; 004df7bc | g_CSoundInstance
    MOV byte ptr [0x02d831d8],CL        ; 004df7bd | g_InputHistory+1
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df7c3
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df7c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df7cb
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004df7ce
    SETZ AL                             ; 004df7d5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004df7d8
    AND EAX,0xff                        ; 004df7db
    MOV dword ptr [EBX + 0x1f0],EAX     ; 004df7e0
    PUSH 0x62c406                       ; 004df7e6 | g_CheatStr_ToggleRenderMode
        ;   Label: LAB_004df7e6
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df7eb
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004df7f0
    ADD ESP,0x4                         ; 004df7f2
    MOV dword ptr [ESP + 0x2d8],EDI     ; 004df7f5
    MOV EDI,EAX                         ; 004df7fc
    MOV EBX,EAX                         ; 004df7fe
    SUB ECX,ECX                         ; 004df800
    DEC ECX                             ; 004df802
    XOR EAX,EAX                         ; 004df803
    SCASB.REPNE ES:EDI                  ; 004df805
    NOT ECX                             ; 004df807
    DEC ECX                             ; 004df809
    MOV dword ptr [ESP + 0x2d4],ECX     ; 004df80a
    TEST ECX,ECX                        ; 004df811
    JLE 0x004df850                      ; 004df813
        ;   XREF to: 004df850 (CONDITIONAL_JUMP)  ; LAB_004df850
    MOV EAX,ECX                         ; 004df815
    NEG EAX                             ; 004df817
    MOV EDI,ECX                         ; 004df819
    ADD ECX,EAX                         ; 004df81b
    MOV dword ptr [ESP + 0x3fc],ECX     ; 004df81d
    XOR EAX,EAX                         ; 004df824
        ;   Label: LAB_004df824
    MOV AL,byte ptr [EBX]               ; 004df826
    PUSH EAX                            ; 004df828
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004df829 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df830
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df835
    CMP ESI,EAX                         ; 004df838
    JNZ 0x004df843                      ; 004df83a
        ;   XREF to: 004df843 (CONDITIONAL_JUMP)  ; LAB_004df843
    INC dword ptr [ESP + 0x2d8]         ; 004df83c
    MOV ECX,dword ptr [ESP + 0x3fc]     ; 004df843
        ;   Label: LAB_004df843
    DEC EDI                             ; 004df84a
    INC EBX                             ; 004df84b
    CMP EDI,ECX                         ; 004df84c
    JG 0x004df824                       ; 004df84e
        ;   XREF to: 004df824 (CONDITIONAL_JUMP)  ; LAB_004df824
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 004df850
        ;   Label: LAB_004df850
    CMP EAX,dword ptr [ESP + 0x2d4]     ; 004df857
    JNZ 0x004df899                      ; 004df85e
        ;   XREF to: 004df899 (CONDITIONAL_JUMP)  ; LAB_004df899
    PUSH 0x62c439                       ; 004df860 | = "cheat-1.wav"
    PUSH 0x0                            ; 004df865
    MOV ESI,dword ptr [0x00681ef8]      ; 004df867 | g_CSoundPtr
    XOR CH,CH                           ; 004df86d
    PUSH ESI                            ; 004df86f | g_CSoundInstance
    MOV byte ptr [0x02d831d8],CH        ; 004df870 | g_InputHistory+1
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df876
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df87b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df87e
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004df881
    SETZ AL                             ; 004df888
    MOV EBX,dword ptr [EBP + 0x14]      ; 004df88b
    AND EAX,0xff                        ; 004df88e
    MOV dword ptr [EBX + 0x1f4],EAX     ; 004df893
    PUSH 0x62c445                       ; 004df899 | g_CheatStr_FlamingAmmo
        ;   Label: LAB_004df899
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df89e
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004df8a3
    ADD ESP,0x4                         ; 004df8a5
    XOR EAX,EAX                         ; 004df8a8
    MOV EDI,EBX                         ; 004df8aa
    MOV dword ptr [ESP + 0x2e0],EAX     ; 004df8ac
    SUB ECX,ECX                         ; 004df8b3
    DEC ECX                             ; 004df8b5
    XOR EAX,EAX                         ; 004df8b6
    SCASB.REPNE ES:EDI                  ; 004df8b8
    NOT ECX                             ; 004df8ba
    DEC ECX                             ; 004df8bc
    MOV dword ptr [ESP + 0x2dc],ECX     ; 004df8bd
    TEST ECX,ECX                        ; 004df8c4
    JLE 0x004df903                      ; 004df8c6
        ;   XREF to: 004df903 (CONDITIONAL_JUMP)  ; LAB_004df903
    MOV EAX,ECX                         ; 004df8c8
    NEG EAX                             ; 004df8ca
    MOV EDI,ECX                         ; 004df8cc
    ADD ECX,EAX                         ; 004df8ce
    MOV dword ptr [ESP + 0x400],ECX     ; 004df8d0
    XOR EAX,EAX                         ; 004df8d7
        ;   Label: LAB_004df8d7
    MOV AL,byte ptr [EBX]               ; 004df8d9
    PUSH EAX                            ; 004df8db
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004df8dc | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df8e3
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df8e8
    CMP ESI,EAX                         ; 004df8eb
    JNZ 0x004df8f6                      ; 004df8ed
        ;   XREF to: 004df8f6 (CONDITIONAL_JUMP)  ; LAB_004df8f6
    INC dword ptr [ESP + 0x2e0]         ; 004df8ef
    MOV ECX,dword ptr [ESP + 0x400]     ; 004df8f6
        ;   Label: LAB_004df8f6
    DEC EDI                             ; 004df8fd
    INC EBX                             ; 004df8fe
    CMP EDI,ECX                         ; 004df8ff
    JG 0x004df8d7                       ; 004df901
        ;   XREF to: 004df8d7 (CONDITIONAL_JUMP)  ; LAB_004df8d7
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 004df903
        ;   Label: LAB_004df903
    MOV EBX,dword ptr [ESP + 0x2dc]     ; 004df90a
    CMP EAX,EBX                         ; 004df911
    JNZ 0x004df97e                      ; 004df913
        ;   XREF to: 004df97e (CONDITIONAL_JUMP)  ; LAB_004df97e
    XOR AL,BL                           ; 004df915
    MOV [0x02d831d8],AL                 ; 004df917 | g_InputHistory+1
    MOV EAX,[0x02db87d0]                ; 004df91c | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004df921 | g_HeroActors
    MOV EBX,dword ptr [EAX + 0x1fa68]   ; 004df928
    TEST EBX,EBX                        ; 004df92e
    JZ 0x004df968                       ; 004df930
        ;   XREF to: 004df968 (CONDITIONAL_JUMP)  ; LAB_004df968
    CMP dword ptr [EBX + 0x56c],0x5     ; 004df932
    JNZ 0x004dff0a                      ; 004df939
        ;   XREF to: 004dff0a (CONDITIONAL_JUMP)  ; LAB_004dff0a
    PUSH 0x40a00000                     ; 004df93f
    PUSH 0x62c47f                       ; 004df944 | = "Flaming ammo disabled"
    MOV dword ptr [EBX + 0x56c],0x0     ; 004df949
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004df953
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004df958
    PUSH EAX                            ; 004df95b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004df95c
    PUSH EDX                            ; 004df95f
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004df960
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
        ;   Label: LAB_004df960
    ADD ESP,0xc                         ; 004df965
    PUSH 0x62c4e4                       ; 004df968 | = "cheat-1.wav"
        ;   Label: LAB_004df968
    PUSH 0x0                            ; 004df96d
    MOV ECX,dword ptr [0x00681ef8]      ; 004df96f | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 004df975 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004df976
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004df97b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df97e
        ;   Label: LAB_004df97e
    CMP dword ptr [EAX + 0x210],0x0     ; 004df981
    JZ 0x004dfa3a                       ; 004df988
        ;   XREF to: 004dfa3a (CONDITIONAL_JUMP)  ; LAB_004dfa3a
    PUSH 0x62c4f0                       ; 004df98e | g_CheatStr_ClearFramebuffer
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004df993
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004df998
    ADD ESP,0x4                         ; 004df99a
    MOV dword ptr [ESP + 0x2e8],EDI     ; 004df99d
    MOV EDI,EAX                         ; 004df9a4
    MOV ESI,EAX                         ; 004df9a6
    SUB ECX,ECX                         ; 004df9a8
    DEC ECX                             ; 004df9aa
    XOR EAX,EAX                         ; 004df9ab
    SCASB.REPNE ES:EDI                  ; 004df9ad
    NOT ECX                             ; 004df9af
    DEC ECX                             ; 004df9b1
    MOV dword ptr [ESP + 0x2e4],ECX     ; 004df9b2
    TEST ECX,ECX                        ; 004df9b9
    JLE 0x004df9f8                      ; 004df9bb
        ;   XREF to: 004df9f8 (CONDITIONAL_JUMP)  ; LAB_004df9f8
    MOV EAX,ECX                         ; 004df9bd
    NEG EAX                             ; 004df9bf
    MOV EBX,ECX                         ; 004df9c1
    ADD ECX,EAX                         ; 004df9c3
    MOV dword ptr [ESP + 0x404],ECX     ; 004df9c5
    XOR EAX,EAX                         ; 004df9cc
        ;   Label: LAB_004df9cc
    MOV AL,byte ptr [ESI]               ; 004df9ce
    PUSH EAX                            ; 004df9d0
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004df9d1 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004df9d8
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004df9dd
    CMP EDI,EAX                         ; 004df9e0
    JNZ 0x004df9eb                      ; 004df9e2
        ;   XREF to: 004df9eb (CONDITIONAL_JUMP)  ; LAB_004df9eb
    INC dword ptr [ESP + 0x2e8]         ; 004df9e4
    MOV EDX,dword ptr [ESP + 0x404]     ; 004df9eb
        ;   Label: LAB_004df9eb
    DEC EBX                             ; 004df9f2
    INC ESI                             ; 004df9f3
    CMP EBX,EDX                         ; 004df9f4
    JG 0x004df9cc                       ; 004df9f6
        ;   XREF to: 004df9cc (CONDITIONAL_JUMP)  ; LAB_004df9cc
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 004df9f8
        ;   Label: LAB_004df9f8
    MOV ECX,dword ptr [ESP + 0x2e4]     ; 004df9ff
    CMP EAX,ECX                         ; 004dfa06
    JNZ 0x004dfa3a                      ; 004dfa08
        ;   XREF to: 004dfa3a (CONDITIONAL_JUMP)  ; LAB_004dfa3a
    PUSH 0xff00ff                       ; 004dfa0a | g_ColorMagenta
    XOR AH,CH                           ; 004dfa0f
    PUSH 0x32758e4                      ; 004dfa11 | g_CDemonCameraInstance
    MOV byte ptr [0x02d831d8],AH        ; 004dfa16 | g_InputHistory+1
    CALL core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90 ; 004dfa1c
        ;   XREF to: 00453c90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90(CDemonCamera * this_ptr, int clear_color)
    ADD ESP,0x8                         ; 004dfa21
    PUSH 0x62c523                       ; 004dfa24 | = "cheat-1.wav"
    PUSH 0x0                            ; 004dfa29
    MOV EBX,dword ptr [0x00681ef8]      ; 004dfa2b | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004dfa31 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004dfa32
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dfa37
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dfa3a
        ;   Label: LAB_004dfa3a
    CMP dword ptr [EAX + 0x210],0x0     ; 004dfa3d
    JZ 0x004dfaec                       ; 004dfa44
        ;   XREF to: 004dfaec (CONDITIONAL_JUMP)  ; LAB_004dfaec
    PUSH 0x62c52f                       ; 004dfa4a | g_CheatStr_ResetEffects
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dfa4f
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004dfa54
    ADD ESP,0x4                         ; 004dfa56
    XOR ECX,ECX                         ; 004dfa59
    MOV EDI,EAX                         ; 004dfa5b
    MOV dword ptr [ESP + 0x2f0],ECX     ; 004dfa5d
    SUB ECX,ECX                         ; 004dfa64
    DEC ECX                             ; 004dfa66
    XOR EAX,EAX                         ; 004dfa67
    SCASB.REPNE ES:EDI                  ; 004dfa69
    NOT ECX                             ; 004dfa6b
    DEC ECX                             ; 004dfa6d
    MOV dword ptr [ESP + 0x2ec],ECX     ; 004dfa6e
    TEST ECX,ECX                        ; 004dfa75
    JLE 0x004dfab6                      ; 004dfa77
        ;   XREF to: 004dfab6 (CONDITIONAL_JUMP)  ; LAB_004dfab6
    MOV EAX,ECX                         ; 004dfa79
    MOV ESI,EBX                         ; 004dfa7b
    NEG EAX                             ; 004dfa7d
    MOV EBX,ECX                         ; 004dfa7f
    ADD ECX,EAX                         ; 004dfa81
    MOV dword ptr [ESP + 0x408],ECX     ; 004dfa83
    XOR EAX,EAX                         ; 004dfa8a
        ;   Label: LAB_004dfa8a
    MOV AL,byte ptr [ESI]               ; 004dfa8c
    PUSH EAX                            ; 004dfa8e
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004dfa8f | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dfa96
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dfa9b
    CMP EDI,EAX                         ; 004dfa9e
    JNZ 0x004dfaa9                      ; 004dfaa0
        ;   XREF to: 004dfaa9 (CONDITIONAL_JUMP)  ; LAB_004dfaa9
    INC dword ptr [ESP + 0x2f0]         ; 004dfaa2
    MOV EDI,dword ptr [ESP + 0x408]     ; 004dfaa9
        ;   Label: LAB_004dfaa9
    DEC EBX                             ; 004dfab0
    INC ESI                             ; 004dfab1
    CMP EBX,EDI                         ; 004dfab2
    JG 0x004dfa8a                       ; 004dfab4
        ;   XREF to: 004dfa8a (CONDITIONAL_JUMP)  ; LAB_004dfa8a
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 004dfab6
        ;   Label: LAB_004dfab6
    CMP EAX,dword ptr [ESP + 0x2ec]     ; 004dfabd
    JNZ 0x004dfaec                      ; 004dfac4
        ;   XREF to: 004dfaec (CONDITIONAL_JUMP)  ; LAB_004dfaec
    PUSH 0x0                            ; 004dfac6
    MOV EAX,[0x006810c8]                ; 004dfac8 | g_CDemonSetInstance | g_CDemonSetPtr
    XOR DL,DL                           ; 004dfacd
    PUSH 0x32758e4                      ; 004dfacf | g_CDemonCameraInstance
    MOV byte ptr [0x02d831d8],DL        ; 004dfad4 | g_InputHistory+1
    MOV dword ptr [EAX + 0x14d150],0x0  ; 004dfada | DAT_032613c8
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 004dfae4
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 004dfae9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dfaec
        ;   Label: LAB_004dfaec
    CMP dword ptr [EAX + 0x210],0x0     ; 004dfaef
    JZ 0x004dfbbe                       ; 004dfaf6
        ;   XREF to: 004dfbbe (CONDITIONAL_JUMP)  ; LAB_004dfbbe
    PUSH 0x62c561                       ; 004dfafc | g_CheatStr_SingleStep
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dfb01
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004dfb06
    ADD ESP,0x4                         ; 004dfb08
    MOV EDI,EAX                         ; 004dfb0b
    MOV EBX,EAX                         ; 004dfb0d
    SUB ECX,ECX                         ; 004dfb0f
    DEC ECX                             ; 004dfb11
    XOR EAX,EAX                         ; 004dfb12
    SCASB.REPNE ES:EDI                  ; 004dfb14
    NOT ECX                             ; 004dfb16
    DEC ECX                             ; 004dfb18
    MOV dword ptr [ESP + 0x2f8],ESI     ; 004dfb19
    MOV dword ptr [ESP + 0x2f4],ECX     ; 004dfb20
    TEST ECX,ECX                        ; 004dfb27
    JLE 0x004dfb68                      ; 004dfb29
        ;   XREF to: 004dfb68 (CONDITIONAL_JUMP)  ; LAB_004dfb68
    MOV EAX,ECX                         ; 004dfb2b
    MOV ESI,EBX                         ; 004dfb2d
    NEG EAX                             ; 004dfb2f
    MOV EBX,ECX                         ; 004dfb31
    ADD ECX,EAX                         ; 004dfb33
    MOV dword ptr [ESP + 0x40c],ECX     ; 004dfb35
    XOR EAX,EAX                         ; 004dfb3c
        ;   Label: LAB_004dfb3c
    MOV AL,byte ptr [ESI]               ; 004dfb3e
    PUSH EAX                            ; 004dfb40
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004dfb41 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dfb48
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dfb4d
    CMP EDI,EAX                         ; 004dfb50
    JNZ 0x004dfb5b                      ; 004dfb52
        ;   XREF to: 004dfb5b (CONDITIONAL_JUMP)  ; LAB_004dfb5b
    INC dword ptr [ESP + 0x2f8]         ; 004dfb54
    MOV EDI,dword ptr [ESP + 0x40c]     ; 004dfb5b
        ;   Label: LAB_004dfb5b
    DEC EBX                             ; 004dfb62
    INC ESI                             ; 004dfb63
    CMP EBX,EDI                         ; 004dfb64
    JG 0x004dfb3c                       ; 004dfb66
        ;   XREF to: 004dfb3c (CONDITIONAL_JUMP)  ; LAB_004dfb3c
    MOV EAX,dword ptr [ESP + 0x2f8]     ; 004dfb68
        ;   Label: LAB_004dfb68
    CMP EAX,dword ptr [ESP + 0x2f4]     ; 004dfb6f
    JNZ 0x004dfbbe                      ; 004dfb76
        ;   XREF to: 004dfbbe (CONDITIONAL_JUMP)  ; LAB_004dfbbe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dfb78
    XOR DH,DH                           ; 004dfb7b
    MOV ECX,dword ptr [EAX + 0x200]     ; 004dfb7d
    MOV byte ptr [0x02d831d8],DH        ; 004dfb83 | g_InputHistory+1
    TEST ECX,ECX                        ; 004dfb89
    SETZ AL                             ; 004dfb8b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dfb8e
    AND EAX,0xff                        ; 004dfb91
    MOV dword ptr [EBX + 0x200],EAX     ; 004dfb96
    JZ 0x004dff5e                       ; 004dfb9c
        ;   XREF to: 004dff5e (CONDITIONAL_JUMP)  ; LAB_004dff5e
    PUSH 0x40a00000                     ; 004dfba2
    PUSH 0x62c593                       ; 004dfba7 | = "Single step enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dfbac
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_004dfbac
    ADD ESP,0x4                         ; 004dfbb1
    PUSH EAX                            ; 004dfbb4
    PUSH EBX                            ; 004dfbb5
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dfbb6
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dfbbb
    PUSH 0x62c5bc                       ; 004dfbbe | g_CheatStr_RestoreBattery
        ;   Label: LAB_004dfbbe
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dfbc3
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004dfbc8
    ADD ESP,0x4                         ; 004dfbca
    MOV EDI,EAX                         ; 004dfbcd
    XOR EDX,EDX                         ; 004dfbcf
    SUB ECX,ECX                         ; 004dfbd1
    DEC ECX                             ; 004dfbd3
    XOR EAX,EAX                         ; 004dfbd4
    SCASB.REPNE ES:EDI                  ; 004dfbd6
    NOT ECX                             ; 004dfbd8
    DEC ECX                             ; 004dfbda
    MOV dword ptr [ESP + 0x300],EDX     ; 004dfbdb
    MOV dword ptr [ESP + 0x2fc],ECX     ; 004dfbe2
    TEST ECX,ECX                        ; 004dfbe9
    JLE 0x004dfc28                      ; 004dfbeb
        ;   XREF to: 004dfc28 (CONDITIONAL_JUMP)  ; LAB_004dfc28
    MOV EAX,ECX                         ; 004dfbed
    NEG EAX                             ; 004dfbef
    MOV EDI,ECX                         ; 004dfbf1
    ADD ECX,EAX                         ; 004dfbf3
    MOV dword ptr [ESP + 0x410],ECX     ; 004dfbf5
    XOR EAX,EAX                         ; 004dfbfc
        ;   Label: LAB_004dfbfc
    MOV AL,byte ptr [EBX]               ; 004dfbfe
    PUSH EAX                            ; 004dfc00
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004dfc01 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dfc08
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dfc0d
    CMP ESI,EAX                         ; 004dfc10
    JNZ 0x004dfc1b                      ; 004dfc12
        ;   XREF to: 004dfc1b (CONDITIONAL_JUMP)  ; LAB_004dfc1b
    INC dword ptr [ESP + 0x300]         ; 004dfc14
    MOV ECX,dword ptr [ESP + 0x410]     ; 004dfc1b
        ;   Label: LAB_004dfc1b
    DEC EDI                             ; 004dfc22
    INC EBX                             ; 004dfc23
    CMP EDI,ECX                         ; 004dfc24
    JG 0x004dfbfc                       ; 004dfc26
        ;   XREF to: 004dfbfc (CONDITIONAL_JUMP)  ; LAB_004dfbfc
    MOV EAX,dword ptr [ESP + 0x300]     ; 004dfc28
        ;   Label: LAB_004dfc28
    CMP EAX,dword ptr [ESP + 0x2fc]     ; 004dfc2f
    JNZ 0x004dfc8b                      ; 004dfc36
        ;   XREF to: 004dfc8b (CONDITIONAL_JUMP)  ; LAB_004dfc8b
    MOV EAX,[0x02db87d0]                ; 004dfc38 | g_LocalHeroIndex
    PUSH 0x40a00000                     ; 004dfc3d
    XOR BL,BL                           ; 004dfc42
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dfc44 | g_HeroActors
    PUSH 0x62c5f2                       ; 004dfc4b | = "Flashlight battery restored"
    MOV byte ptr [0x02d831d8],BL        ; 004dfc50 | g_InputHistory+1
    MOV dword ptr [EAX + 0x1f738],0x42c80000 ; 004dfc56
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dfc60
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dfc65
    PUSH EAX                            ; 004dfc68
    MOV ESI,dword ptr [EBP + 0x14]      ; 004dfc69
    PUSH ESI                            ; 004dfc6c
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dfc6d
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dfc72
    PUSH 0x62c60e                       ; 004dfc75 | = "cheat-1.wav"
    PUSH 0x0                            ; 004dfc7a
    MOV EDI,dword ptr [0x00681ef8]      ; 004dfc7c | g_CSoundPtr
    PUSH EDI                            ; 004dfc82 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004dfc83
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dfc88
    PUSH 0x62c61a                       ; 004dfc8b | g_CheatStr_WeatherRain
        ;   Label: LAB_004dfc8b
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dfc90
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004dfc95
    ADD ESP,0x4                         ; 004dfc97
    XOR EAX,EAX                         ; 004dfc9a
    MOV EDI,EBX                         ; 004dfc9c
    MOV dword ptr [ESP + 0x308],EAX     ; 004dfc9e
    SUB ECX,ECX                         ; 004dfca5
    DEC ECX                             ; 004dfca7
    XOR EAX,EAX                         ; 004dfca8
    SCASB.REPNE ES:EDI                  ; 004dfcaa
    NOT ECX                             ; 004dfcac
    DEC ECX                             ; 004dfcae
    MOV dword ptr [ESP + 0x304],ECX     ; 004dfcaf
    TEST ECX,ECX                        ; 004dfcb6
    JLE 0x004dfcf5                      ; 004dfcb8
        ;   XREF to: 004dfcf5 (CONDITIONAL_JUMP)  ; LAB_004dfcf5
    MOV EAX,ECX                         ; 004dfcba
    NEG EAX                             ; 004dfcbc
    MOV EDI,ECX                         ; 004dfcbe
    ADD ECX,EAX                         ; 004dfcc0
    MOV dword ptr [ESP + 0x414],ECX     ; 004dfcc2
    XOR EAX,EAX                         ; 004dfcc9
        ;   Label: LAB_004dfcc9
    MOV AL,byte ptr [EBX]               ; 004dfccb
    PUSH EAX                            ; 004dfccd
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004dfcce | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dfcd5
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dfcda
    CMP ESI,EAX                         ; 004dfcdd
    JNZ 0x004dfce8                      ; 004dfcdf
        ;   XREF to: 004dfce8 (CONDITIONAL_JUMP)  ; LAB_004dfce8
    INC dword ptr [ESP + 0x308]         ; 004dfce1
    MOV ECX,dword ptr [ESP + 0x414]     ; 004dfce8
        ;   Label: LAB_004dfce8
    DEC EDI                             ; 004dfcef
    INC EBX                             ; 004dfcf0
    CMP EDI,ECX                         ; 004dfcf1
    JG 0x004dfcc9                       ; 004dfcf3
        ;   XREF to: 004dfcc9 (CONDITIONAL_JUMP)  ; LAB_004dfcc9
    MOV EAX,dword ptr [ESP + 0x308]     ; 004dfcf5
        ;   Label: LAB_004dfcf5
    CMP EAX,dword ptr [ESP + 0x304]     ; 004dfcfc
    JNZ 0x004dfd1e                      ; 004dfd03
        ;   XREF to: 004dfd1e (CONDITIONAL_JUMP)  ; LAB_004dfd1e
    PUSH 0x1                            ; 004dfd05
    MOV ESI,dword ptr [0x006848fc]      ; 004dfd07 | g_CWeatherPtr
    XOR BH,BH                           ; 004dfd0d
    PUSH ESI                            ; 004dfd0f | g_CWeatherInstance
    MOV byte ptr [0x02d831d8],BH        ; 004dfd10 | g_InputHistory+1
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0 ; 004dfd16
        ;   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 004dfd1b
    PUSH 0x62c654                       ; 004dfd1e | g_CheatStr_WeatherSnow
        ;   Label: LAB_004dfd1e
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dfd23
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004dfd28
    ADD ESP,0x4                         ; 004dfd2a
    MOV dword ptr [ESP + 0x310],EDI     ; 004dfd2d
    MOV EDI,EAX                         ; 004dfd34
    MOV EBX,EAX                         ; 004dfd36
    SUB ECX,ECX                         ; 004dfd38
    DEC ECX                             ; 004dfd3a
    XOR EAX,EAX                         ; 004dfd3b
    SCASB.REPNE ES:EDI                  ; 004dfd3d
    NOT ECX                             ; 004dfd3f
    DEC ECX                             ; 004dfd41
    MOV dword ptr [ESP + 0x30c],ECX     ; 004dfd42
    TEST ECX,ECX                        ; 004dfd49
    JLE 0x004dfd88                      ; 004dfd4b
        ;   XREF to: 004dfd88 (CONDITIONAL_JUMP)  ; LAB_004dfd88
    MOV EAX,ECX                         ; 004dfd4d
    NEG EAX                             ; 004dfd4f
    MOV EDI,ECX                         ; 004dfd51
    ADD ECX,EAX                         ; 004dfd53
    MOV dword ptr [ESP + 0x418],ECX     ; 004dfd55
    XOR EAX,EAX                         ; 004dfd5c
        ;   Label: LAB_004dfd5c
    MOV AL,byte ptr [EBX]               ; 004dfd5e
    PUSH EAX                            ; 004dfd60
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004dfd61 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dfd68
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dfd6d
    CMP ESI,EAX                         ; 004dfd70
    JNZ 0x004dfd7b                      ; 004dfd72
        ;   XREF to: 004dfd7b (CONDITIONAL_JUMP)  ; LAB_004dfd7b
    INC dword ptr [ESP + 0x310]         ; 004dfd74
    MOV EDX,dword ptr [ESP + 0x418]     ; 004dfd7b
        ;   Label: LAB_004dfd7b
    DEC EDI                             ; 004dfd82
    INC EBX                             ; 004dfd83
    CMP EDI,EDX                         ; 004dfd84
    JG 0x004dfd5c                       ; 004dfd86
        ;   XREF to: 004dfd5c (CONDITIONAL_JUMP)  ; LAB_004dfd5c
    MOV EAX,dword ptr [ESP + 0x310]     ; 004dfd88
        ;   Label: LAB_004dfd88
    CMP EAX,dword ptr [ESP + 0x30c]     ; 004dfd8f
    JNZ 0x004dfdb1                      ; 004dfd96
        ;   XREF to: 004dfdb1 (CONDITIONAL_JUMP)  ; LAB_004dfdb1
    PUSH 0x2                            ; 004dfd98
    MOV EBX,dword ptr [0x006848fc]      ; 004dfd9a | g_CWeatherInstance | g_CWeatherPtr
    XOR CL,CL                           ; 004dfda0
    PUSH EBX                            ; 004dfda2 | g_CWeatherInstance
    MOV byte ptr [0x02d831d8],CL        ; 004dfda3 | g_InputHistory+1
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0 ; 004dfda9
        ;   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 004dfdae
    PUSH 0x62c68b                       ; 004dfdb1 | g_CheatStr_BigHat
        ;   Label: LAB_004dfdb1
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004dfdb6
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004dfdbb
    ADD ESP,0x4                         ; 004dfdbd
    MOV EDI,EAX                         ; 004dfdc0
    MOV EBX,EAX                         ; 004dfdc2
    SUB ECX,ECX                         ; 004dfdc4
    DEC ECX                             ; 004dfdc6
    XOR EAX,EAX                         ; 004dfdc7
    SCASB.REPNE ES:EDI                  ; 004dfdc9
    NOT ECX                             ; 004dfdcb
    DEC ECX                             ; 004dfdcd
    MOV dword ptr [ESP + 0x318],ESI     ; 004dfdce
    MOV dword ptr [ESP + 0x314],ECX     ; 004dfdd5
    TEST ECX,ECX                        ; 004dfddc
    JLE 0x004dfe1d                      ; 004dfdde
        ;   XREF to: 004dfe1d (CONDITIONAL_JUMP)  ; LAB_004dfe1d
    MOV EAX,ECX                         ; 004dfde0
    MOV ESI,EBX                         ; 004dfde2
    NEG EAX                             ; 004dfde4
    MOV EBX,ECX                         ; 004dfde6
    ADD ECX,EAX                         ; 004dfde8
    MOV dword ptr [ESP + 0x41c],ECX     ; 004dfdea
    XOR EAX,EAX                         ; 004dfdf1
        ;   Label: LAB_004dfdf1
    MOV AL,byte ptr [ESI]               ; 004dfdf3
    PUSH EAX                            ; 004dfdf5
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004dfdf6 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dfdfd
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004dfe02
    CMP EDI,EAX                         ; 004dfe05
    JNZ 0x004dfe10                      ; 004dfe07
        ;   XREF to: 004dfe10 (CONDITIONAL_JUMP)  ; LAB_004dfe10
    INC dword ptr [ESP + 0x318]         ; 004dfe09
    MOV EDX,dword ptr [ESP + 0x41c]     ; 004dfe10
        ;   Label: LAB_004dfe10
    DEC EBX                             ; 004dfe17
    INC ESI                             ; 004dfe18
    CMP EBX,EDX                         ; 004dfe19
    JG 0x004dfdf1                       ; 004dfe1b
        ;   XREF to: 004dfdf1 (CONDITIONAL_JUMP)  ; LAB_004dfdf1
    MOV EAX,dword ptr [ESP + 0x318]     ; 004dfe1d
        ;   Label: LAB_004dfe1d
    CMP EAX,dword ptr [ESP + 0x314]     ; 004dfe24
    JNZ 0x004e01e0                      ; 004dfe2b
        ;   XREF to: 004e01e0 (CONDITIONAL_JUMP)  ; LAB_004e01e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dfe31
    XOR CH,CH                           ; 004dfe34
    MOV EBX,dword ptr [EAX + 0x204]     ; 004dfe36
    MOV byte ptr [0x02d831d8],CH        ; 004dfe3c | g_InputHistory+1
    TEST EBX,EBX                        ; 004dfe42
    SETZ AL                             ; 004dfe44
    MOV ESI,0x3e800000                  ; 004dfe47
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dfe4c
    MOV dword ptr [ESP + 0x31c],ESI     ; 004dfe4f
    AND EAX,0xff                        ; 004dfe56
    MOV dword ptr [EBX + 0x204],EAX     ; 004dfe5b
    JZ 0x004dff6d                       ; 004dfe61
        ;   XREF to: 004dff6d (CONDITIONAL_JUMP)  ; LAB_004dff6d
    PUSH 0x62c6c0                       ; 004dfe67 | = "burp2.wav"
    PUSH 0x0                            ; 004dfe6c
    MOV ECX,dword ptr [0x00681ef8]      ; 004dfe6e | g_CSoundInstance | g_CSoundPtr
    MOV EDX,0x40800000                  ; 004dfe74
    PUSH ECX                            ; 004dfe79 | g_CSoundInstance
    MOV dword ptr [ESP + 0x328],EDX     ; 004dfe7a
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004dfe81
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
        ;   Label: LAB_004dfe81
    ADD ESP,0xc                         ; 004dfe86
    XOR EBX,EBX                         ; 004dfe89
    MOV dword ptr [ESP + 0x420],EBX     ; 004dfe8b
    MOV dword ptr [ESP + 0x444],EBX     ; 004dfe92
    MOV EAX,[0x006810c8]                ; 004dfe99 | g_CDemonSetPtr
        ;   Label: LAB_004dfe99
    MOV EBX,dword ptr [ESP + 0x444]     ; 004dfe9e
    CMP EBX,dword ptr [EAX + 0x14f098]  ; 004dfea5 | g_CDemonSetInstance.character_count
    JGE 0x004e0193                      ; 004dfeab
        ;   XREF to: 004e0193 (CONDITIONAL_JUMP)  ; LAB_004e0193
    ADD EAX,dword ptr [ESP + 0x420]     ; 004dfeb1
    MOV EAX,dword ptr [EAX + 0x14f09c]  ; 004dfeb8 | g_CDemonSetInstance.characters[0] | DAT_03263318
    LEA ECX,[EAX + 0x158]               ; 004dfebe
    MOV DL,byte ptr [EAX + 0x23b8]      ; 004dfec4
    MOV dword ptr [ESP + 0x320],ECX     ; 004dfeca
    TEST DL,DL                          ; 004dfed1
    JNZ 0x004dff7e                      ; 004dfed3
        ;   XREF to: 004dff7e (CONDITIONAL_JUMP)  ; LAB_004dff7e
    MOV ESI,dword ptr [ESP + 0x444]     ; 004dfed9
        ;   Label: LAB_004dfed9
    MOV EBX,dword ptr [ESP + 0x420]     ; 004dfee0
    INC ESI                             ; 004dfee7
    ADD EBX,0x4                         ; 004dfee8
    MOV dword ptr [ESP + 0x444],ESI     ; 004dfeeb
    MOV dword ptr [ESP + 0x420],EBX     ; 004dfef2
    JMP 0x004dfe99                      ; 004dfef9
        ;   XREF to: 004dfe99 (UNCONDITIONAL_JUMP)  ; LAB_004dfe99
    PUSH 0x40a00000                     ; 004dfefb
        ;   Label: LAB_004dfefb
    PUSH 0x62c349                       ; 004dff00 | = "Gratuitous dismemberment disabled"
    JMP 0x004df640                      ; 004dff05
        ;   XREF to: 004df640 (UNCONDITIONAL_JUMP)  ; LAB_004df640
    PUSH 0x62c495                       ; 004dff0a | = "CCrossbow"
        ;   Label: LAB_004dff0a
    PUSH EBX                            ; 004dff0f
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004dff10
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dff15
    TEST EAX,EAX                        ; 004dff18
    JZ 0x004dff42                       ; 004dff1a
        ;   XREF to: 004dff42 (CONDITIONAL_JUMP)  ; LAB_004dff42
    PUSH 0x40a00000                     ; 004dff1c
    PUSH 0x62c4ce                       ; 004dff21 | = "Flaming ammo enabled."
    MOV dword ptr [EBX + 0x56c],0x5     ; 004dff26
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dff30
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dff35
    PUSH EAX                            ; 004dff38
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dff39
    PUSH EAX                            ; 004dff3c
    JMP 0x004df960                      ; 004dff3d
        ;   XREF to: 004df960 (UNCONDITIONAL_JUMP)  ; LAB_004df960
    PUSH 0x40a00000                     ; 004dff42
        ;   Label: LAB_004dff42
    PUSH 0x62c49f                       ; 004dff47 | = "You can only use flaming ammo on the ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dff4c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dff51
    PUSH EAX                            ; 004dff54
    MOV EDI,dword ptr [EBP + 0x14]      ; 004dff55
    PUSH EDI                            ; 004dff58
    JMP 0x004df960                      ; 004dff59
        ;   XREF to: 004df960 (UNCONDITIONAL_JUMP)  ; LAB_004df960
    PUSH 0x40a00000                     ; 004dff5e
        ;   Label: LAB_004dff5e
    PUSH 0x62c5a7                       ; 004dff63 | = "Single step disabled"
    JMP 0x004dfbac                      ; 004dff68
        ;   XREF to: 004dfbac (UNCONDITIONAL_JUMP)  ; LAB_004dfbac
    PUSH 0x62c6ca                       ; 004dff6d | = "burp1.wav"
        ;   Label: LAB_004dff6d
    PUSH EAX                            ; 004dff72
    MOV EAX,[0x00681ef8]                ; 004dff73 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004dff78 | g_CSoundInstance
    JMP 0x004dfe81                      ; 004dff79
        ;   XREF to: 004dfe81 (UNCONDITIONAL_JUMP)  ; LAB_004dfe81
    PUSH ECX                            ; 004dff7e
        ;   Label: LAB_004dff7e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004dff7f
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004dff84
    PUSH 0x0                            ; 004dff87
    PUSH 0x62c6d4                       ; 004dff89 | = "Bip01 head"
    PUSH EAX                            ; 004dff8e
    MOV ESI,EAX                         ; 004dff8f
    MOV dword ptr [ESP + 0x330],EAX     ; 004dff91
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004dff98
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dff9d
    CMP EAX,-0x1                        ; 004dffa0
    JZ 0x004e002f                       ; 004dffa3
        ;   XREF to: 004e002f (CONDITIONAL_JUMP)  ; LAB_004e002f
    MOV EDX,dword ptr [ESP + 0x320]     ; 004dffa9
    MOV dword ptr [ESP + 0x330],EAX     ; 004dffb0
    SHL EAX,0x2                         ; 004dffb7
    ADD EAX,EDX                         ; 004dffba
    MOV EBX,dword ptr [ESP + 0x320]     ; 004dffbc
    FLD float ptr [EAX + 0x514]         ; 004dffc3
    FMUL float ptr [ESP + 0x31c]        ; 004dffc9
    MOV dword ptr [ESP + 0x328],EBX     ; 004dffd0
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004dffd7
    MOV EDI,ESI                         ; 004dffde
    MOV dword ptr [ESP + 0x32c],EBX     ; 004dffe0
    FSTP float ptr [EAX + 0x514]        ; 004dffe7
    MOV ECX,dword ptr [ESI + 0x28558]   ; 004dffed
    XOR EBX,EBX                         ; 004dfff3
    TEST ECX,ECX                        ; 004dfff5
    JLE 0x004e002f                      ; 004dfff7
        ;   XREF to: 004e002f (CONDITIONAL_JUMP)  ; LAB_004e002f
    MOV EDX,dword ptr [ESP + 0x330]     ; 004dfff9
        ;   Label: LAB_004dfff9
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 004e0000
    JNZ 0x004e0021                      ; 004e0006
        ;   XREF to: 004e0021 (CONDITIONAL_JUMP)  ; LAB_004e0021
    PUSH EBX                            ; 004e0008
    PUSH dword ptr [ESP + 0x330]        ; 004e0009
    PUSH EDI                            ; 004e0010
    MOV ECX,dword ptr [ESP + 0x334]     ; 004e0011
    PUSH ECX                            ; 004e0018
    CALL core_game.cpp_scaleBoneRecursive_FUN_004dda80 ; 004e0019
        ;   XREF to: 004dda80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004dda80(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004e001e
    INC EBX                             ; 004e0021
        ;   Label: LAB_004e0021
    MOV EAX,dword ptr [EDI + 0x28558]   ; 004e0022
    ADD ESI,0x24                        ; 004e0028
    CMP EBX,EAX                         ; 004e002b
    JL 0x004dfff9                       ; 004e002d
        ;   XREF to: 004dfff9 (CONDITIONAL_JUMP)  ; LAB_004dfff9
    PUSH 0x0                            ; 004e002f
        ;   Label: LAB_004e002f
    PUSH 0x62c6df                       ; 004e0031 | = "bipltit02"
    MOV EBX,dword ptr [ESP + 0x32c]     ; 004e0036
    PUSH EBX                            ; 004e003d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e003e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e0043
    CMP EAX,-0x1                        ; 004e0046
    JZ 0x004e00dc                       ; 004e0049
        ;   XREF to: 004e00dc (CONDITIONAL_JUMP)  ; LAB_004e00dc
    MOV ESI,dword ptr [ESP + 0x320]     ; 004e004f
    MOV dword ptr [ESP + 0x33c],EAX     ; 004e0056
    SHL EAX,0x2                         ; 004e005d
    ADD EAX,ESI                         ; 004e0060
    MOV EBX,dword ptr [ESP + 0x320]     ; 004e0062
    FLD float ptr [EAX + 0x514]         ; 004e0069
    FMUL float ptr [ESP + 0x31c]        ; 004e006f
    MOV dword ptr [ESP + 0x334],EBX     ; 004e0076
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004e007d
    MOV EDI,dword ptr [ESP + 0x324]     ; 004e0084
    MOV dword ptr [ESP + 0x338],EBX     ; 004e008b
    FSTP float ptr [EAX + 0x514]        ; 004e0092
    MOV EDX,dword ptr [EDI + 0x28558]   ; 004e0098
    XOR EBX,EBX                         ; 004e009e
    TEST EDX,EDX                        ; 004e00a0
    JLE 0x004e00dc                      ; 004e00a2
        ;   XREF to: 004e00dc (CONDITIONAL_JUMP)  ; LAB_004e00dc
    MOV ESI,EDI                         ; 004e00a4
    MOV EDX,dword ptr [ESP + 0x33c]     ; 004e00a6
        ;   Label: LAB_004e00a6
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 004e00ad
    JNZ 0x004e00ce                      ; 004e00b3
        ;   XREF to: 004e00ce (CONDITIONAL_JUMP)  ; LAB_004e00ce
    PUSH EBX                            ; 004e00b5
    PUSH dword ptr [ESP + 0x33c]        ; 004e00b6
    PUSH EDI                            ; 004e00bd
    MOV ECX,dword ptr [ESP + 0x340]     ; 004e00be
    PUSH ECX                            ; 004e00c5
    CALL core_game.cpp_scaleBoneRecursive_FUN_004dda80 ; 004e00c6
        ;   XREF to: 004dda80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004dda80(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004e00cb
    INC EBX                             ; 004e00ce
        ;   Label: LAB_004e00ce
    MOV ECX,dword ptr [EDI + 0x28558]   ; 004e00cf
    ADD ESI,0x24                        ; 004e00d5
    CMP EBX,ECX                         ; 004e00d8
    JL 0x004e00a6                       ; 004e00da
        ;   XREF to: 004e00a6 (CONDITIONAL_JUMP)  ; LAB_004e00a6
    PUSH 0x0                            ; 004e00dc
        ;   Label: LAB_004e00dc
    PUSH 0x62c6e9                       ; 004e00de | = "biprtit02"
    MOV EBX,dword ptr [ESP + 0x32c]     ; 004e00e3
    PUSH EBX                            ; 004e00ea
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e00eb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e00f0
    CMP EAX,-0x1                        ; 004e00f3
    JZ 0x004dfed9                       ; 004e00f6
        ;   XREF to: 004dfed9 (CONDITIONAL_JUMP)  ; LAB_004dfed9
    MOV ESI,dword ptr [ESP + 0x320]     ; 004e00fc
    MOV dword ptr [ESP + 0x348],EAX     ; 004e0103
    SHL EAX,0x2                         ; 004e010a
    ADD EAX,ESI                         ; 004e010d
    MOV EBX,dword ptr [ESP + 0x320]     ; 004e010f
    FLD float ptr [EAX + 0x514]         ; 004e0116
    FMUL float ptr [ESP + 0x31c]        ; 004e011c
    MOV dword ptr [ESP + 0x340],EBX     ; 004e0123
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004e012a
    MOV EDI,dword ptr [ESP + 0x324]     ; 004e0131
    MOV dword ptr [ESP + 0x344],EBX     ; 004e0138
    FSTP float ptr [EAX + 0x514]        ; 004e013f
    MOV EDX,dword ptr [EDI + 0x28558]   ; 004e0145
    XOR EBX,EBX                         ; 004e014b
    TEST EDX,EDX                        ; 004e014d
    JLE 0x004dfed9                      ; 004e014f
        ;   XREF to: 004dfed9 (CONDITIONAL_JUMP)  ; LAB_004dfed9
    MOV ESI,EDI                         ; 004e0155
    MOV EDX,dword ptr [ESP + 0x348]     ; 004e0157
        ;   Label: LAB_004e0157
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 004e015e
    JNZ 0x004e017f                      ; 004e0164
        ;   XREF to: 004e017f (CONDITIONAL_JUMP)  ; LAB_004e017f
    PUSH EBX                            ; 004e0166
    PUSH dword ptr [ESP + 0x348]        ; 004e0167
    PUSH EDI                            ; 004e016e
    MOV ECX,dword ptr [ESP + 0x34c]     ; 004e016f
    PUSH ECX                            ; 004e0176
    CALL core_game.cpp_scaleBoneRecursive_FUN_004dda80 ; 004e0177
        ;   XREF to: 004dda80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004dda80(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004e017c
    INC EBX                             ; 004e017f
        ;   Label: LAB_004e017f
    MOV ECX,dword ptr [EDI + 0x28558]   ; 004e0180
    ADD ESI,0x24                        ; 004e0186
    CMP EBX,ECX                         ; 004e0189
    JGE 0x004dfed9                      ; 004e018b
        ;   XREF to: 004dfed9 (CONDITIONAL_JUMP)  ; LAB_004dfed9
    JMP 0x004e0157                      ; 004e0191
        ;   XREF to: 004e0157 (UNCONDITIONAL_JUMP)  ; LAB_004e0157
    MOV ECX,dword ptr [0x03f6bb60]      ; 004e0193 | g_CStrangerClassInfo.name_hash
        ;   Label: LAB_004e0193
    MOV EAX,[0x02db87d0]                ; 004e0199 | g_LocalHeroIndex
    PUSH ECX                            ; 004e019e
    MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e019f | g_HeroActors
    PUSH EBX                            ; 004e01a6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004e01a7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e01ac
    TEST EAX,EAX                        ; 004e01af
    JZ 0x004e01e0                       ; 004e01b1
        ;   XREF to: 004e01e0 (CONDITIONAL_JUMP)  ; LAB_004e01e0
    LEA EBX,[EAX + 0x1fcd8]             ; 004e01b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e01b9
    CMP dword ptr [EAX + 0x204],0x0     ; 004e01bc
    JZ 0x004e077f                       ; 004e01c3
        ;   XREF to: 004e077f (CONDITIONAL_JUMP)  ; LAB_004e077f
    PUSH 0x62c6f3                       ; 004e01c9 | = "big-hat.kfm"
    PUSH EBX                            ; 004e01ce
        ;   Label: LAB_004e01ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004e01cf
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e01d4
    PUSH EBX                            ; 004e01d7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004e01d8
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e01dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e01e0
        ;   Label: LAB_004e01e0
    CMP dword ptr [EAX + 0x210],0x0     ; 004e01e3
    JZ 0x004e0290                       ; 004e01ea
        ;   XREF to: 004e0290 (CONDITIONAL_JUMP)  ; LAB_004e0290
    PUSH 0x62c710                       ; 004e01f0 | g_CheatStr_GeometryDebug
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e01f5
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004e01fa
    ADD ESP,0x4                         ; 004e01fc
    XOR EAX,EAX                         ; 004e01ff
    MOV EDI,EBX                         ; 004e0201
    MOV dword ptr [ESP + 0x350],EAX     ; 004e0203
    SUB ECX,ECX                         ; 004e020a
    DEC ECX                             ; 004e020c
    XOR EAX,EAX                         ; 004e020d
    SCASB.REPNE ES:EDI                  ; 004e020f
    NOT ECX                             ; 004e0211
    DEC ECX                             ; 004e0213
    MOV dword ptr [ESP + 0x34c],ECX     ; 004e0214
    TEST ECX,ECX                        ; 004e021b
    JLE 0x004e025c                      ; 004e021d
        ;   XREF to: 004e025c (CONDITIONAL_JUMP)  ; LAB_004e025c
    MOV EAX,ECX                         ; 004e021f
    MOV ESI,EBX                         ; 004e0221
    NEG EAX                             ; 004e0223
    MOV EBX,ECX                         ; 004e0225
    ADD ECX,EAX                         ; 004e0227
    MOV dword ptr [ESP + 0x424],ECX     ; 004e0229
    XOR EAX,EAX                         ; 004e0230
        ;   Label: LAB_004e0230
    MOV AL,byte ptr [ESI]               ; 004e0232
    PUSH EAX                            ; 004e0234
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004e0235 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e023c
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e0241
    CMP EDI,EAX                         ; 004e0244
    JNZ 0x004e024f                      ; 004e0246
        ;   XREF to: 004e024f (CONDITIONAL_JUMP)  ; LAB_004e024f
    INC dword ptr [ESP + 0x350]         ; 004e0248
    MOV EDX,dword ptr [ESP + 0x424]     ; 004e024f
        ;   Label: LAB_004e024f
    DEC EBX                             ; 004e0256
    INC ESI                             ; 004e0257
    CMP EBX,EDX                         ; 004e0258
    JG 0x004e0230                       ; 004e025a
        ;   XREF to: 004e0230 (CONDITIONAL_JUMP)  ; LAB_004e0230
    MOV EAX,dword ptr [ESP + 0x350]     ; 004e025c
        ;   Label: LAB_004e025c
    CMP EAX,dword ptr [ESP + 0x34c]     ; 004e0263
    JNZ 0x004e0290                      ; 004e026a
        ;   XREF to: 004e0290 (CONDITIONAL_JUMP)  ; LAB_004e0290
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e026c
    XOR DH,DH                           ; 004e026f
    MOV EBX,dword ptr [EAX + 0x218]     ; 004e0271
    MOV byte ptr [0x02d831d8],DH        ; 004e0277 | g_InputHistory+1
    TEST EBX,EBX                        ; 004e027d
    SETZ AL                             ; 004e027f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e0282
    AND EAX,0xff                        ; 004e0285
    MOV dword ptr [EBX + 0x218],EAX     ; 004e028a
    PUSH 0x62c744                       ; 004e0290 | g_CheatStr_GasMask
        ;   Label: LAB_004e0290
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e0295
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004e029a
    ADD ESP,0x4                         ; 004e029c
    XOR EAX,EAX                         ; 004e029f
    MOV EDI,EBX                         ; 004e02a1
    MOV dword ptr [ESP + 0x358],EAX     ; 004e02a3
    SUB ECX,ECX                         ; 004e02aa
    DEC ECX                             ; 004e02ac
    XOR EAX,EAX                         ; 004e02ad
    SCASB.REPNE ES:EDI                  ; 004e02af
    NOT ECX                             ; 004e02b1
    DEC ECX                             ; 004e02b3
    MOV dword ptr [ESP + 0x354],ECX     ; 004e02b4
    TEST ECX,ECX                        ; 004e02bb
    JLE 0x004e02fa                      ; 004e02bd
        ;   XREF to: 004e02fa (CONDITIONAL_JUMP)  ; LAB_004e02fa
    MOV EAX,ECX                         ; 004e02bf
    NEG EAX                             ; 004e02c1
    MOV EDI,ECX                         ; 004e02c3
    ADD ECX,EAX                         ; 004e02c5
    MOV dword ptr [ESP + 0x428],ECX     ; 004e02c7
    XOR EAX,EAX                         ; 004e02ce
        ;   Label: LAB_004e02ce
    MOV AL,byte ptr [EBX]               ; 004e02d0
    PUSH EAX                            ; 004e02d2
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004e02d3 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e02da
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e02df
    CMP ESI,EAX                         ; 004e02e2
    JNZ 0x004e02ed                      ; 004e02e4
        ;   XREF to: 004e02ed (CONDITIONAL_JUMP)  ; LAB_004e02ed
    INC dword ptr [ESP + 0x358]         ; 004e02e6
    MOV EDX,dword ptr [ESP + 0x428]     ; 004e02ed
        ;   Label: LAB_004e02ed
    DEC EDI                             ; 004e02f4
    INC EBX                             ; 004e02f5
    CMP EDI,EDX                         ; 004e02f6
    JG 0x004e02ce                       ; 004e02f8
        ;   XREF to: 004e02ce (CONDITIONAL_JUMP)  ; LAB_004e02ce
    MOV EAX,dword ptr [ESP + 0x358]     ; 004e02fa
        ;   Label: LAB_004e02fa
    CMP EAX,dword ptr [ESP + 0x354]     ; 004e0301
    JNZ 0x004e0394                      ; 004e0308
        ;   XREF to: 004e0394 (CONDITIONAL_JUMP)  ; LAB_004e0394
    PUSH 0xbb0                          ; 004e030e
    PUSH 0x62c779                       ; 004e0313 | = "..\\core\\game.cpp"
    XOR BL,BL                           ; 004e0318
    PUSH 0x2d8                          ; 004e031a
    MOV byte ptr [0x02d831d8],BL        ; 004e031f | g_InputHistory+1
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004e0325
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004e032a
    TEST EAX,EAX                        ; 004e032d
    JZ 0x004e033a                       ; 004e032f
        ;   XREF to: 004e033a (CONDITIONAL_JUMP)  ; LAB_004e033a
    PUSH EAX                            ; 004e0331
    CALL core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00 ; 004e0332
        ;   XREF to: 004e5d00 (UNCONDITIONAL_CALL)  ; CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00(CGasMask * this_ptr)
    ADD ESP,0x4                         ; 004e0337
    MOV EBX,EAX                         ; 004e033a
        ;   Label: LAB_004e033a
    PUSH EBX                            ; 004e033c
    MOV ESI,dword ptr [0x0067d550]      ; 004e033d | g_CDemonMissionPtr
    PUSH ESI                            ; 004e0343 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004e0344
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e0349
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e034c
    PUSH EBX                            ; 004e0352
    CALL dword ptr [EAX]                ; 004e0353
    ADD ESP,0x4                         ; 004e0355
    MOV EAX,[0x02db87d0]                ; 004e0358 | g_LocalHeroIndex
    PUSH 0x1                            ; 004e035d
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e035f | g_HeroActors
    PUSH EBX                            ; 004e0366
    ADD EAX,0x1f738                     ; 004e0367
    PUSH EAX                            ; 004e036c
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004e036d
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004e0372
    PUSH 0x40a00000                     ; 004e0375
    PUSH 0x62c78a                       ; 004e037a | = "You've got a gasmask!"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e037f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e0384
    PUSH EAX                            ; 004e0387
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e0388
    PUSH EDI                            ; 004e038b
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004e038c
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004e0391
    PUSH 0x62c7a0                       ; 004e0394 | g_CheatStr_RestoreHealth
        ;   Label: LAB_004e0394
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e0399
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004e039e
    ADD ESP,0x4                         ; 004e03a0
    XOR EAX,EAX                         ; 004e03a3
    MOV EDI,EBX                         ; 004e03a5
    MOV dword ptr [ESP + 0x360],EAX     ; 004e03a7
    SUB ECX,ECX                         ; 004e03ae
    DEC ECX                             ; 004e03b0
    XOR EAX,EAX                         ; 004e03b1
    SCASB.REPNE ES:EDI                  ; 004e03b3
    NOT ECX                             ; 004e03b5
    DEC ECX                             ; 004e03b7
    MOV dword ptr [ESP + 0x35c],ECX     ; 004e03b8
    TEST ECX,ECX                        ; 004e03bf
    JLE 0x004e03fe                      ; 004e03c1
        ;   XREF to: 004e03fe (CONDITIONAL_JUMP)  ; LAB_004e03fe
    MOV EAX,ECX                         ; 004e03c3
    NEG EAX                             ; 004e03c5
    MOV EDI,ECX                         ; 004e03c7
    ADD ECX,EAX                         ; 004e03c9
    MOV dword ptr [ESP + 0x42c],ECX     ; 004e03cb
    XOR EAX,EAX                         ; 004e03d2
        ;   Label: LAB_004e03d2
    MOV AL,byte ptr [EBX]               ; 004e03d4
    PUSH EAX                            ; 004e03d6
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004e03d7 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e03de
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e03e3
    CMP ESI,EAX                         ; 004e03e6
    JNZ 0x004e03f1                      ; 004e03e8
        ;   XREF to: 004e03f1 (CONDITIONAL_JUMP)  ; LAB_004e03f1
    INC dword ptr [ESP + 0x360]         ; 004e03ea
    MOV ECX,dword ptr [ESP + 0x42c]     ; 004e03f1
        ;   Label: LAB_004e03f1
    DEC EDI                             ; 004e03f8
    INC EBX                             ; 004e03f9
    CMP EDI,ECX                         ; 004e03fa
    JG 0x004e03d2                       ; 004e03fc
        ;   XREF to: 004e03d2 (CONDITIONAL_JUMP)  ; LAB_004e03d2
    MOV EAX,dword ptr [ESP + 0x360]     ; 004e03fe
        ;   Label: LAB_004e03fe
    CMP EAX,dword ptr [ESP + 0x35c]     ; 004e0405
    JNZ 0x004e044b                      ; 004e040c
        ;   XREF to: 004e044b (CONDITIONAL_JUMP)  ; LAB_004e044b
    MOV EAX,[0x02db87d0]                ; 004e040e | g_LocalHeroIndex
    PUSH 0x40a00000                     ; 004e0413
    XOR BH,BH                           ; 004e0418
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e041a | g_HeroActors
    PUSH 0x62c7d4                       ; 004e0421 | = "Health restored."
    MOV byte ptr [0x02d831d8],BH        ; 004e0426 | g_InputHistory+1
    MOV dword ptr [EAX + 0x243c],0x42c80000 ; 004e042c
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e0436
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e043b
    PUSH EAX                            ; 004e043e
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e043f
    PUSH ESI                            ; 004e0442
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004e0443
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004e0448
    PUSH 0x62c7e5                       ; 004e044b | g_CheatStr_OldHat
        ;   Label: LAB_004e044b
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e0450
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004e0455
    ADD ESP,0x4                         ; 004e0457
    MOV dword ptr [ESP + 0x368],EDI     ; 004e045a
    MOV EDI,EAX                         ; 004e0461
    MOV EBX,EAX                         ; 004e0463
    SUB ECX,ECX                         ; 004e0465
    DEC ECX                             ; 004e0467
    XOR EAX,EAX                         ; 004e0468
    SCASB.REPNE ES:EDI                  ; 004e046a
    NOT ECX                             ; 004e046c
    DEC ECX                             ; 004e046e
    MOV dword ptr [ESP + 0x364],ECX     ; 004e046f
    TEST ECX,ECX                        ; 004e0476
    JLE 0x004e04b5                      ; 004e0478
        ;   XREF to: 004e04b5 (CONDITIONAL_JUMP)  ; LAB_004e04b5
    MOV EAX,ECX                         ; 004e047a
    NEG EAX                             ; 004e047c
    MOV EDI,ECX                         ; 004e047e
    ADD ECX,EAX                         ; 004e0480
    MOV dword ptr [ESP + 0x430],ECX     ; 004e0482
    XOR EAX,EAX                         ; 004e0489
        ;   Label: LAB_004e0489
    MOV AL,byte ptr [EBX]               ; 004e048b
    PUSH EAX                            ; 004e048d
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004e048e | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e0495
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e049a
    CMP ESI,EAX                         ; 004e049d
    JNZ 0x004e04a8                      ; 004e049f
        ;   XREF to: 004e04a8 (CONDITIONAL_JUMP)  ; LAB_004e04a8
    INC dword ptr [ESP + 0x368]         ; 004e04a1
    MOV EDX,dword ptr [ESP + 0x430]     ; 004e04a8
        ;   Label: LAB_004e04a8
    DEC EDI                             ; 004e04af
    INC EBX                             ; 004e04b0
    CMP EDI,EDX                         ; 004e04b1
    JG 0x004e0489                       ; 004e04b3
        ;   XREF to: 004e0489 (CONDITIONAL_JUMP)  ; LAB_004e0489
    MOV EAX,dword ptr [ESP + 0x368]     ; 004e04b5
        ;   Label: LAB_004e04b5
    CMP EAX,dword ptr [ESP + 0x364]     ; 004e04bc
    JNZ 0x004e0520                      ; 004e04c3
        ;   XREF to: 004e0520 (CONDITIONAL_JUMP)  ; LAB_004e0520
    MOV EBX,dword ptr [0x03f6bb60]      ; 004e04c5 | g_CStrangerClassInfo.name_hash
    MOV EAX,[0x02db87d0]                ; 004e04cb | g_LocalHeroIndex
    PUSH EBX                            ; 004e04d0
    MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e04d1 | g_HeroActors
    XOR CL,CL                           ; 004e04d8
    PUSH ESI                            ; 004e04da
    MOV byte ptr [0x02d831d8],CL        ; 004e04db | g_InputHistory+1
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004e04e1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e04e6
    TEST EAX,EAX                        ; 004e04e9
    JZ 0x004e0520                       ; 004e04eb
        ;   XREF to: 004e0520 (CONDITIONAL_JUMP)  ; LAB_004e0520
    PUSH 0x62c819                       ; 004e04ed | = "oldhat.kfm"
    LEA EBX,[EAX + 0x1fcd8]             ; 004e04f2
    PUSH EBX                            ; 004e04f8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004e04f9
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e04fe
    PUSH EBX                            ; 004e0501
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004e0502
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e0507
    PUSH 0x62c824                       ; 004e050a | = "cheat-1.wav"
    PUSH 0x0                            ; 004e050f
    MOV EDI,dword ptr [0x00681ef8]      ; 004e0511 | g_CSoundPtr
    PUSH EDI                            ; 004e0517 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004e0518
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004e051d
    PUSH 0x62c830                       ; 004e0520 | g_CheatStr_SilverAmmo
        ;   Label: LAB_004e0520
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e0525
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    MOV EBX,EAX                         ; 004e052a
    ADD ESP,0x4                         ; 004e052c
    XOR EAX,EAX                         ; 004e052f
    MOV EDI,EBX                         ; 004e0531
    MOV dword ptr [ESP + 0x370],EAX     ; 004e0533
    SUB ECX,ECX                         ; 004e053a
    DEC ECX                             ; 004e053c
    XOR EAX,EAX                         ; 004e053d
    SCASB.REPNE ES:EDI                  ; 004e053f
    NOT ECX                             ; 004e0541
    DEC ECX                             ; 004e0543
    MOV dword ptr [ESP + 0x36c],ECX     ; 004e0544
    TEST ECX,ECX                        ; 004e054b
    JLE 0x004e058a                      ; 004e054d
        ;   XREF to: 004e058a (CONDITIONAL_JUMP)  ; LAB_004e058a
    MOV EAX,ECX                         ; 004e054f
    NEG EAX                             ; 004e0551
    MOV EDI,ECX                         ; 004e0553
    ADD ECX,EAX                         ; 004e0555
    MOV dword ptr [ESP + 0x434],ECX     ; 004e0557
    XOR EAX,EAX                         ; 004e055e
        ;   Label: LAB_004e055e
    MOV AL,byte ptr [EBX]               ; 004e0560
    PUSH EAX                            ; 004e0562
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004e0563 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e056a
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e056f
    CMP ESI,EAX                         ; 004e0572
    JNZ 0x004e057d                      ; 004e0574
        ;   XREF to: 004e057d (CONDITIONAL_JUMP)  ; LAB_004e057d
    INC dword ptr [ESP + 0x370]         ; 004e0576
    MOV ECX,dword ptr [ESP + 0x434]     ; 004e057d
        ;   Label: LAB_004e057d
    DEC EDI                             ; 004e0584
    INC EBX                             ; 004e0585
    CMP EDI,ECX                         ; 004e0586
    JG 0x004e055e                       ; 004e0588
        ;   XREF to: 004e055e (CONDITIONAL_JUMP)  ; LAB_004e055e
    MOV EAX,dword ptr [ESP + 0x370]     ; 004e058a
        ;   Label: LAB_004e058a
    CMP EAX,dword ptr [ESP + 0x36c]     ; 004e0591
    JNZ 0x004e05b1                      ; 004e0598
        ;   XREF to: 004e05b1 (CONDITIONAL_JUMP)  ; LAB_004e05b1
    PUSH 0x3                            ; 004e059a
    XOR CH,CH                           ; 004e059c
    PUSH 0x62c864                       ; 004e059e | = "CGun"
    MOV byte ptr [0x02d831d8],CH        ; 004e05a3 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 ; 004e05a9
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930(char * p1, EAmmoType p3)
    ADD ESP,0x8                         ; 004e05ae
    PUSH 0x62c869                       ; 004e05b1 | g_CheatStr_LithiumAmmo
        ;   Label: LAB_004e05b1
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e05b6
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004e05bb
    ADD ESP,0x4                         ; 004e05bd
    MOV EDI,EAX                         ; 004e05c0
    MOV EBX,EAX                         ; 004e05c2
    SUB ECX,ECX                         ; 004e05c4
    DEC ECX                             ; 004e05c6
    XOR EAX,EAX                         ; 004e05c7
    SCASB.REPNE ES:EDI                  ; 004e05c9
    NOT ECX                             ; 004e05cb
    DEC ECX                             ; 004e05cd
    MOV dword ptr [ESP + 0x378],ESI     ; 004e05ce
    MOV dword ptr [ESP + 0x374],ECX     ; 004e05d5
    TEST ECX,ECX                        ; 004e05dc
    JLE 0x004e061b                      ; 004e05de
        ;   XREF to: 004e061b (CONDITIONAL_JUMP)  ; LAB_004e061b
    MOV EAX,ECX                         ; 004e05e0
    NEG EAX                             ; 004e05e2
    MOV EDI,ECX                         ; 004e05e4
    ADD ECX,EAX                         ; 004e05e6
    MOV dword ptr [ESP + 0x438],ECX     ; 004e05e8
    XOR EAX,EAX                         ; 004e05ef
        ;   Label: LAB_004e05ef
    MOV AL,byte ptr [EBX]               ; 004e05f1
    PUSH EAX                            ; 004e05f3
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004e05f4 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e05fb
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e0600
    CMP ESI,EAX                         ; 004e0603
    JNZ 0x004e060e                      ; 004e0605
        ;   XREF to: 004e060e (CONDITIONAL_JUMP)  ; LAB_004e060e
    INC dword ptr [ESP + 0x378]         ; 004e0607
    MOV EDX,dword ptr [ESP + 0x438]     ; 004e060e
        ;   Label: LAB_004e060e
    DEC EDI                             ; 004e0615
    INC EBX                             ; 004e0616
    CMP EDI,EDX                         ; 004e0617
    JG 0x004e05ef                       ; 004e0619
        ;   XREF to: 004e05ef (CONDITIONAL_JUMP)  ; LAB_004e05ef
    MOV EAX,dword ptr [ESP + 0x378]     ; 004e061b
        ;   Label: LAB_004e061b
    MOV ECX,dword ptr [ESP + 0x374]     ; 004e0622
    CMP EAX,ECX                         ; 004e0629
    JNZ 0x004e0643                      ; 004e062b
        ;   XREF to: 004e0643 (CONDITIONAL_JUMP)  ; LAB_004e0643
    PUSH 0x7                            ; 004e062d
    XOR AL,CL                           ; 004e062f
    PUSH 0x62c89b                       ; 004e0631 | = "CGun"
    MOV [0x02d831d8],AL                 ; 004e0636 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 ; 004e063b
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930(char * p1, EAmmoType p3)
    ADD ESP,0x8                         ; 004e0640
    PUSH 0x62c8a0                       ; 004e0643 | g_CheatStr_MercuryAmmo
        ;   Label: LAB_004e0643
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e0648
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR ESI,ESI                         ; 004e064d
    ADD ESP,0x4                         ; 004e064f
    MOV EDI,EAX                         ; 004e0652
    MOV EBX,EAX                         ; 004e0654
    SUB ECX,ECX                         ; 004e0656
    DEC ECX                             ; 004e0658
    XOR EAX,EAX                         ; 004e0659
    SCASB.REPNE ES:EDI                  ; 004e065b
    NOT ECX                             ; 004e065d
    DEC ECX                             ; 004e065f
    MOV dword ptr [ESP + 0x380],ESI     ; 004e0660
    MOV dword ptr [ESP + 0x37c],ECX     ; 004e0667
    TEST ECX,ECX                        ; 004e066e
    JLE 0x004e06ad                      ; 004e0670
        ;   XREF to: 004e06ad (CONDITIONAL_JUMP)  ; LAB_004e06ad
    MOV EAX,ECX                         ; 004e0672
    NEG EAX                             ; 004e0674
    MOV EDI,ECX                         ; 004e0676
    ADD ECX,EAX                         ; 004e0678
    MOV dword ptr [ESP + 0x43c],ECX     ; 004e067a
    XOR EAX,EAX                         ; 004e0681
        ;   Label: LAB_004e0681
    MOV AL,byte ptr [EBX]               ; 004e0683
    PUSH EAX                            ; 004e0685
    MOVZX ESI,byte ptr [EDI + 0x2d831d7] ; 004e0686 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e068d
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e0692
    CMP ESI,EAX                         ; 004e0695
    JNZ 0x004e06a0                      ; 004e0697
        ;   XREF to: 004e06a0 (CONDITIONAL_JUMP)  ; LAB_004e06a0
    INC dword ptr [ESP + 0x380]         ; 004e0699
    MOV EDX,dword ptr [ESP + 0x43c]     ; 004e06a0
        ;   Label: LAB_004e06a0
    DEC EDI                             ; 004e06a7
    INC EBX                             ; 004e06a8
    CMP EDI,EDX                         ; 004e06a9
    JG 0x004e0681                       ; 004e06ab
        ;   XREF to: 004e0681 (CONDITIONAL_JUMP)  ; LAB_004e0681
    MOV EAX,dword ptr [ESP + 0x380]     ; 004e06ad
        ;   Label: LAB_004e06ad
    MOV ECX,dword ptr [ESP + 0x37c]     ; 004e06b4
    CMP EAX,ECX                         ; 004e06bb
    JNZ 0x004e06d6                      ; 004e06bd
        ;   XREF to: 004e06d6 (CONDITIONAL_JUMP)  ; LAB_004e06d6
    PUSH 0x8                            ; 004e06bf
    XOR AH,CH                           ; 004e06c1
    PUSH 0x62c8d5                       ; 004e06c3 | = "CGun"
    MOV byte ptr [0x02d831d8],AH        ; 004e06c8 | g_InputHistory+1
    CALL core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 ; 004e06ce
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930(char * p1, EAmmoType p3)
    ADD ESP,0x8                         ; 004e06d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e06d6
        ;   Label: LAB_004e06d6
    CMP dword ptr [EAX + 0x210],0x0     ; 004e06d9
    JZ 0x004ddb9f                       ; 004e06e0
        ;   XREF to: 004ddb9f (CONDITIONAL_JUMP)  ; LAB_004ddb9f
    PUSH 0x62c8da                       ; 004e06e6 | g_CheatStr_SoundDebug
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 004e06eb
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    XOR EDI,EDI                         ; 004e06f0
    ADD ESP,0x4                         ; 004e06f2
    MOV dword ptr [ESP + 0x388],EDI     ; 004e06f5
    MOV EDI,EAX                         ; 004e06fc
    MOV ESI,EAX                         ; 004e06fe
    SUB ECX,ECX                         ; 004e0700
    DEC ECX                             ; 004e0702
    XOR EAX,EAX                         ; 004e0703
    SCASB.REPNE ES:EDI                  ; 004e0705
    NOT ECX                             ; 004e0707
    DEC ECX                             ; 004e0709
    MOV dword ptr [ESP + 0x384],ECX     ; 004e070a
    TEST ECX,ECX                        ; 004e0711
    JLE 0x004e0749                      ; 004e0713
        ;   XREF to: 004e0749 (CONDITIONAL_JUMP)  ; LAB_004e0749
    MOV EAX,ECX                         ; 004e0715
    NEG EAX                             ; 004e0717
    MOV EBX,ECX                         ; 004e0719
    ADD ECX,EAX                         ; 004e071b
    MOV dword ptr [ESP + 0x440],ECX     ; 004e071d
    XOR EAX,EAX                         ; 004e0724
        ;   Label: LAB_004e0724
    MOV AL,byte ptr [ESI]               ; 004e0726
    PUSH EAX                            ; 004e0728
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004e0729 | DAT_02d831d6 | g_InputHistory | g_InputHistory+1
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004e0730
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004e0735
    CMP EDI,EAX                         ; 004e0738
    JZ 0x004e0789                       ; 004e073a
        ;   XREF to: 004e0789 (CONDITIONAL_JUMP)  ; LAB_004e0789
    MOV EDX,dword ptr [ESP + 0x440]     ; 004e073c
        ;   Label: LAB_004e073c
    DEC EBX                             ; 004e0743
    INC ESI                             ; 004e0744
    CMP EBX,EDX                         ; 004e0745
    JG 0x004e0724                       ; 004e0747
        ;   XREF to: 004e0724 (CONDITIONAL_JUMP)  ; LAB_004e0724
    MOV EAX,dword ptr [ESP + 0x388]     ; 004e0749
        ;   Label: LAB_004e0749
    CMP EAX,dword ptr [ESP + 0x384]     ; 004e0750
    JNZ 0x004ddb9f                      ; 004e0757
        ;   XREF to: 004ddb9f (CONDITIONAL_JUMP)  ; LAB_004ddb9f
    XOR DL,DL                           ; 004e075d
    MOV EBX,dword ptr [0x02d831c0]      ; 004e075f | g_SoundDebugEnabled
    MOV byte ptr [0x02d831d8],DL        ; 004e0765 | g_InputHistory+1
    TEST EBX,EBX                        ; 004e076b
    SETZ AL                             ; 004e076d
    AND EAX,0xff                        ; 004e0770
    MOV [0x02d831c0],EAX                ; 004e0775 | g_SoundDebugEnabled
    JMP 0x004ddb9f                      ; 004e077a
        ;   XREF to: 004ddb9f (UNCONDITIONAL_JUMP)  ; LAB_004ddb9f
    PUSH 0x62c6ff                       ; 004e077f | = "stranger-hat.kfm"
        ;   Label: LAB_004e077f
    JMP 0x004e01ce                      ; 004e0784
        ;   XREF to: 004e01ce (UNCONDITIONAL_JUMP)  ; LAB_004e01ce
    INC dword ptr [ESP + 0x388]         ; 004e0789
        ;   Label: LAB_004e0789
    JMP 0x004e073c                      ; 004e0790
        ;   XREF to: 004e073c (UNCONDITIONAL_JUMP)  ; LAB_004e073c

