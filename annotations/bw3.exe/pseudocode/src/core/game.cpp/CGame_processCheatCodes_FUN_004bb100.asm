; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004bb100(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x388]:1  local_388
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf887
;
; Referenced Globals:
;   undefined4 s_Enter_Movie_FPS_005c210b+1
;   TerminatedCString s_Enter_number_of_frames_t_005c211c
;   TerminatedCString s_Enter_image_width_005c2166
;   TerminatedCString s_Enter_image_height_005c2178
;   TerminatedCString s_Press_CTRL_V_to_begin_re_005c218b
;   TerminatedCString s_headOfHorror_005c295f
;   TerminatedCString s_The_horror_has_been_unle_005c296c
;   TerminatedCString s_cheat_1_wav_005c298b
;   TerminatedCString s_Enter_cheat_code_005c2997
;   undefined4 DAT_005c29a8
;   TerminatedCString s_Cheats_turned_on_005c29de
;   TerminatedCString s_Cheats_turned_off_005c29ef
;   undefined4 DAT_005c2a01
;   TerminatedCString s_FPS_3_2lf_005c2a35
;   undefined4 DAT_005c2a41
;   ... and 134 more
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00450a40
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_event.cpp_CEventList_validateCommands_FUN_00491b40
;   core_game.cpp_CGame_displayMessage_FUN_004b46b0
;   core_game.cpp_giveHeroWeapon_FUN_004bafd0
;   core_game.cpp_scaleBoneRecursive_FUN_004bb090
;   core_inv.cpp_FUN_004da880
;   core_inv.cpp_FUN_004db990
;   core_set.cpp_CDemonSet_reinitCamera_FUN_005353b0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb100
        ;   Label: core_game.cpp_CGame_processCheatCodes_FUN_004bb100
    PUSH ESI                            ; 004bb101
    PUSH EDI                            ; 004bb102
    PUSH EBP                            ; 004bb103
    MOV EBP,ESP                         ; 004bb104
    SUB ESP,0x378                       ; 004bb106
    AND ESP,0xfffffff8                  ; 004bb10c
    CMP dword ptr [0x01d22200],0x0      ; 004bb10f | DAT_01d22200
    JZ 0x004bb11f                       ; 004bb116
        ;   XREF to: 004bb11f (CONDITIONAL_JUMP)  ; LAB_004bb11f
    MOV ESP,EBP                         ; 004bb118
        ;   Label: LAB_004bb118
    POP EBP                             ; 004bb11a
    POP EDI                             ; 004bb11b
    POP ESI                             ; 004bb11c
    POP EBX                             ; 004bb11d
    RET                                 ; 004bb11e
    PUSH 0x5c295f                       ; 004bb11f | = "headOfHorror"
        ;   Label: LAB_004bb11f
    MOV ECX,dword ptr [0x005fba60]      ; 004bb124 | DAT_005fba60
    PUSH ECX                            ; 004bb12a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004bb12b
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004bb130
    TEST EAX,EAX                        ; 004bb133
    JZ 0x004bb187                       ; 004bb135
        ;   XREF to: 004bb187 (CONDITIONAL_JUMP)  ; LAB_004bb187
    MOV EAX,[0x005fe9dc]                ; 004bb137 | g_CGamePtr
    CMP dword ptr [EAX + 0x238],0x29a   ; 004bb13c | g_CGameInstance.head_of_horror_cheat
    JZ 0x004bb187                       ; 004bb146
        ;   XREF to: 004bb187 (CONDITIONAL_JUMP)  ; LAB_004bb187
    PUSH 0x40a00000                     ; 004bb148
    PUSH 0x5c296c                       ; 004bb14d | = "The horror has been unleashed."
    MOV dword ptr [EAX + 0x238],0x29a   ; 004bb152 | g_CGameInstance.head_of_horror_cheat
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bb15c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bb161
    PUSH EAX                            ; 004bb164
    MOV ESI,dword ptr [EBP + 0x14]      ; 004bb165
    PUSH ESI                            ; 004bb168
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bb169
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bb16e
    PUSH 0x5c298b                       ; 004bb171 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bb176
    MOV EDI,dword ptr [0x006045f8]      ; 004bb178 | DAT_006045f8
    PUSH EDI                            ; 004bb17e
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bb17f
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bb184
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb187
        ;   Label: LAB_004bb187
    CMP dword ptr [EAX + 0x200],0x0     ; 004bb18a
    JZ 0x004bc189                       ; 004bb191
        ;   XREF to: 004bc189 (CONDITIONAL_JUMP)  ; LAB_004bc189
    LEA EAX,[EAX]                       ; 004bb197
    LEA EDX,[EDX]                       ; 004bb19d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb1a0
        ;   Label: LAB_004bb1a0
    ADD EAX,0x210                       ; 004bb1a3
    MOV dword ptr [ESP + 0x254],EAX     ; 004bb1a8
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00580800 ; 004bb1af
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00580800()
        ;   Label: LAB_004bb1af
    TEST EAX,EAX                        ; 004bb1b4
    JZ 0x004bb118                       ; 004bb1b6
        ;   XREF to: 004bb118 (CONDITIONAL_JUMP)  ; LAB_004bb118
    MOV EBX,dword ptr [0x00600284]      ; 004bb1bc | DAT_00600284
    PUSH EBX                            ; 004bb1c2 | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590 ; 004bb1c3
        ;   XREF to: 004df590 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590(CKeys * this_ptr)
    MOV EBX,0x13                        ; 004bb1c8
    ADD ESP,0x4                         ; 004bb1cd
    MOV AH,AL                           ; 004bb1d0
    DEC EBX                             ; 004bb1d2
        ;   Label: LAB_004bb1d2
    MOV AL,byte ptr [EBX + 0x1d22c70]   ; 004bb1d3 | DAT_01d22c82 | DAT_01d22c81
    MOV byte ptr [EBX + 0x1d22c71],AL   ; 004bb1d9 | DAT_01d22c83 | DAT_01d22c82
    TEST EBX,EBX                        ; 004bb1df
    JG 0x004bb1d2                       ; 004bb1e1
        ;   XREF to: 004bb1d2 (CONDITIONAL_JUMP)  ; LAB_004bb1d2
    PUSH 0x5c29a8                       ; 004bb1e3 | DAT_005c29a8
    MOV byte ptr [0x01d22c70],AH        ; 004bb1e8 | DAT_01d22c70
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb1ee
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bb1f3
    ADD ESP,0x4                         ; 004bb1f5
    MOV EDI,EAX                         ; 004bb1f8
    MOV EBX,EAX                         ; 004bb1fa
    SUB ECX,ECX                         ; 004bb1fc
    DEC ECX                             ; 004bb1fe
    XOR EAX,EAX                         ; 004bb1ff
    SCASB.REPNE ES:EDI                  ; 004bb201
    NOT ECX                             ; 004bb203
    DEC ECX                             ; 004bb205
    MOV dword ptr [ESP + 0x1c4],ESI     ; 004bb206
    MOV dword ptr [ESP + 0x1c0],ECX     ; 004bb20d
    TEST ECX,ECX                        ; 004bb214
    JLE 0x004bb250                      ; 004bb216
        ;   XREF to: 004bb250 (CONDITIONAL_JUMP)  ; LAB_004bb250
    MOV EAX,ECX                         ; 004bb218
    NEG EAX                             ; 004bb21a
    MOV EDI,ECX                         ; 004bb21c
    ADD ECX,EAX                         ; 004bb21e
    MOV dword ptr [ESP + 0x2d8],ECX     ; 004bb220
    XOR EAX,EAX                         ; 004bb227
        ;   Label: LAB_004bb227
    MOV AL,byte ptr [EBX]               ; 004bb229
    PUSH EAX                            ; 004bb22b
    MOVZX ESI,byte ptr [EDI + 0x1d22c6f] ; 004bb22c | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb233
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb238
    CMP ESI,EAX                         ; 004bb23b
    JZ 0x004bc206                       ; 004bb23d
        ;   XREF to: 004bc206 (CONDITIONAL_JUMP)  ; LAB_004bc206
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 004bb243
        ;   Label: LAB_004bb243
    DEC EDI                             ; 004bb24a
    INC EBX                             ; 004bb24b
    CMP EDI,EAX                         ; 004bb24c
    JG 0x004bb227                       ; 004bb24e
        ;   XREF to: 004bb227 (CONDITIONAL_JUMP)  ; LAB_004bb227
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004bb250
        ;   Label: LAB_004bb250
    CMP EAX,dword ptr [ESP + 0x1c0]     ; 004bb257
    JNZ 0x004bb2a6                      ; 004bb25e
        ;   XREF to: 004bb2a6 (CONDITIONAL_JUMP)  ; LAB_004bb2a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb260
    XOR DH,DH                           ; 004bb263
    MOV ECX,dword ptr [EAX + 0x234]     ; 004bb265
    MOV byte ptr [0x01d22c70],DH        ; 004bb26b | DAT_01d22c70
    TEST ECX,ECX                        ; 004bb271
    SETZ AL                             ; 004bb273
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bb276
    AND EAX,0xff                        ; 004bb279
    MOV dword ptr [EBX + 0x234],EAX     ; 004bb27e
    JZ 0x004bc212                       ; 004bb284
        ;   XREF to: 004bc212 (CONDITIONAL_JUMP)  ; LAB_004bc212
    PUSH 0x40a00000                     ; 004bb28a
    PUSH 0x5c29de                       ; 004bb28f | = "Cheats turned on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bb294
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004bb294
    ADD ESP,0x4                         ; 004bb299
    PUSH EAX                            ; 004bb29c
    PUSH EBX                            ; 004bb29d
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bb29e
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bb2a3
    PUSH 0x5c2a01                       ; 004bb2a6 | DAT_005c2a01
        ;   Label: LAB_004bb2a6
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb2ab
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bb2b0
    ADD ESP,0x4                         ; 004bb2b2
    XOR EAX,EAX                         ; 004bb2b5
    MOV EDI,EBX                         ; 004bb2b7
    MOV dword ptr [ESP + 0x1cc],EAX     ; 004bb2b9
    SUB ECX,ECX                         ; 004bb2c0
    DEC ECX                             ; 004bb2c2
    XOR EAX,EAX                         ; 004bb2c3
    SCASB.REPNE ES:EDI                  ; 004bb2c5
    NOT ECX                             ; 004bb2c7
    DEC ECX                             ; 004bb2c9
    MOV dword ptr [ESP + 0x1c8],ECX     ; 004bb2ca
    TEST ECX,ECX                        ; 004bb2d1
    JLE 0x004bb310                      ; 004bb2d3
        ;   XREF to: 004bb310 (CONDITIONAL_JUMP)  ; LAB_004bb310
    MOV EAX,ECX                         ; 004bb2d5
    NEG EAX                             ; 004bb2d7
    MOV EDI,ECX                         ; 004bb2d9
    ADD ECX,EAX                         ; 004bb2db
    MOV dword ptr [ESP + 0x2dc],ECX     ; 004bb2dd
    XOR EAX,EAX                         ; 004bb2e4
        ;   Label: LAB_004bb2e4
    MOV AL,byte ptr [EBX]               ; 004bb2e6
    PUSH EAX                            ; 004bb2e8
    MOVZX ESI,byte ptr [EDI + 0x1d22c6f] ; 004bb2e9 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb2f0
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb2f5
    CMP ESI,EAX                         ; 004bb2f8
    JNZ 0x004bb303                      ; 004bb2fa
        ;   XREF to: 004bb303 (CONDITIONAL_JUMP)  ; LAB_004bb303
    INC dword ptr [ESP + 0x1cc]         ; 004bb2fc
    MOV ECX,dword ptr [ESP + 0x2dc]     ; 004bb303
        ;   Label: LAB_004bb303
    DEC EDI                             ; 004bb30a
    INC EBX                             ; 004bb30b
    CMP EDI,ECX                         ; 004bb30c
    JG 0x004bb2e4                       ; 004bb30e
        ;   XREF to: 004bb2e4 (CONDITIONAL_JUMP)  ; LAB_004bb2e4
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 004bb310
        ;   Label: LAB_004bb310
    CMP EAX,dword ptr [ESP + 0x1c8]     ; 004bb317
    JNZ 0x004bb357                      ; 004bb31e
        ;   XREF to: 004bb357 (CONDITIONAL_JUMP)  ; LAB_004bb357
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb320
    XOR BL,BL                           ; 004bb323
    MOV ESI,dword ptr [EAX + 0x22c]     ; 004bb325
    MOV byte ptr [0x01d22c70],BL        ; 004bb32b | DAT_01d22c70
    TEST ESI,ESI                        ; 004bb331
    JNZ 0x004bc221                      ; 004bb333
        ;   XREF to: 004bc221 (CONDITIONAL_JUMP)  ; LAB_004bc221
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bb339
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bb33c
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV dword ptr [EBX + 0x22c],0x1     ; 004bb341
    MOV dword ptr [EBX + 0x318],EAX     ; 004bb34b
    MOV dword ptr [EBX + 0x31c],ESI     ; 004bb351
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb357
        ;   Label: LAB_004bb357
    CMP dword ptr [EAX + 0x234],0x0     ; 004bb35a
    JZ 0x004bb408                       ; 004bb361
        ;   XREF to: 004bb408 (CONDITIONAL_JUMP)  ; LAB_004bb408
    PUSH 0x5c2a41                       ; 004bb367 | DAT_005c2a41
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb36c
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR EDI,EDI                         ; 004bb371
    ADD ESP,0x4                         ; 004bb373
    MOV dword ptr [ESP + 0x1d4],EDI     ; 004bb376
    MOV EDI,EAX                         ; 004bb37d
    MOV ESI,EAX                         ; 004bb37f
    SUB ECX,ECX                         ; 004bb381
    DEC ECX                             ; 004bb383
    XOR EAX,EAX                         ; 004bb384
    SCASB.REPNE ES:EDI                  ; 004bb386
    NOT ECX                             ; 004bb388
    DEC ECX                             ; 004bb38a
    MOV dword ptr [ESP + 0x1d0],ECX     ; 004bb38b
    TEST ECX,ECX                        ; 004bb392
    JLE 0x004bb3d1                      ; 004bb394
        ;   XREF to: 004bb3d1 (CONDITIONAL_JUMP)  ; LAB_004bb3d1
    MOV EAX,ECX                         ; 004bb396
    NEG EAX                             ; 004bb398
    MOV EBX,ECX                         ; 004bb39a
    ADD ECX,EAX                         ; 004bb39c
    MOV dword ptr [ESP + 0x2e0],ECX     ; 004bb39e
    XOR EAX,EAX                         ; 004bb3a5
        ;   Label: LAB_004bb3a5
    MOV AL,byte ptr [ESI]               ; 004bb3a7
    PUSH EAX                            ; 004bb3a9
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bb3aa | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb3b1
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb3b6
    CMP EDI,EAX                         ; 004bb3b9
    JNZ 0x004bb3c4                      ; 004bb3bb
        ;   XREF to: 004bb3c4 (CONDITIONAL_JUMP)  ; LAB_004bb3c4
    INC dword ptr [ESP + 0x1d4]         ; 004bb3bd
    MOV EDX,dword ptr [ESP + 0x2e0]     ; 004bb3c4
        ;   Label: LAB_004bb3c4
    DEC EBX                             ; 004bb3cb
    INC ESI                             ; 004bb3cc
    CMP EBX,EDX                         ; 004bb3cd
    JG 0x004bb3a5                       ; 004bb3cf
        ;   XREF to: 004bb3a5 (CONDITIONAL_JUMP)  ; LAB_004bb3a5
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004bb3d1
        ;   Label: LAB_004bb3d1
    CMP EAX,dword ptr [ESP + 0x1d0]     ; 004bb3d8
    JNZ 0x004bb408                      ; 004bb3df
        ;   XREF to: 004bb408 (CONDITIONAL_JUMP)  ; LAB_004bb408
    XOR BH,BH                           ; 004bb3e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb3e3
    MOV byte ptr [0x01d22c70],BH        ; 004bb3e6 | DAT_01d22c70
    MOV EBX,dword ptr [EAX + 0x230]     ; 004bb3ec
    INC EBX                             ; 004bb3f2
    MOV dword ptr [EAX + 0x230],EBX     ; 004bb3f3
    CMP EBX,0x2                         ; 004bb3f9
    JLE 0x004bb408                      ; 004bb3fc
        ;   XREF to: 004bb408 (CONDITIONAL_JUMP)  ; LAB_004bb408
    MOV dword ptr [EAX + 0x230],0x0     ; 004bb3fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb408
        ;   Label: LAB_004bb408
    CMP dword ptr [EAX + 0x234],0x0     ; 004bb40b
    JZ 0x004bb4ee                       ; 004bb412
        ;   XREF to: 004bb4ee (CONDITIONAL_JUMP)  ; LAB_004bb4ee
    PUSH 0x5c2a76                       ; 004bb418 | DAT_005c2a76
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb41d
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bb422
    ADD ESP,0x4                         ; 004bb424
    XOR ECX,ECX                         ; 004bb427
    MOV EDI,EAX                         ; 004bb429
    MOV dword ptr [ESP + 0x1dc],ECX     ; 004bb42b
    SUB ECX,ECX                         ; 004bb432
    DEC ECX                             ; 004bb434
    XOR EAX,EAX                         ; 004bb435
    SCASB.REPNE ES:EDI                  ; 004bb437
    NOT ECX                             ; 004bb439
    DEC ECX                             ; 004bb43b
    MOV dword ptr [ESP + 0x1d8],ECX     ; 004bb43c
    TEST ECX,ECX                        ; 004bb443
    JLE 0x004bb484                      ; 004bb445
        ;   XREF to: 004bb484 (CONDITIONAL_JUMP)  ; LAB_004bb484
    MOV EAX,ECX                         ; 004bb447
    MOV ESI,EBX                         ; 004bb449
    NEG EAX                             ; 004bb44b
    MOV EBX,ECX                         ; 004bb44d
    ADD ECX,EAX                         ; 004bb44f
    MOV dword ptr [ESP + 0x2e4],ECX     ; 004bb451
    XOR EAX,EAX                         ; 004bb458
        ;   Label: LAB_004bb458
    MOV AL,byte ptr [ESI]               ; 004bb45a
    PUSH EAX                            ; 004bb45c
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bb45d | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb464
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb469
    CMP EDI,EAX                         ; 004bb46c
    JNZ 0x004bb477                      ; 004bb46e
        ;   XREF to: 004bb477 (CONDITIONAL_JUMP)  ; LAB_004bb477
    INC dword ptr [ESP + 0x1dc]         ; 004bb470
    MOV EDI,dword ptr [ESP + 0x2e4]     ; 004bb477
        ;   Label: LAB_004bb477
    DEC EBX                             ; 004bb47e
    INC ESI                             ; 004bb47f
    CMP EBX,EDI                         ; 004bb480
    JG 0x004bb458                       ; 004bb482
        ;   XREF to: 004bb458 (CONDITIONAL_JUMP)  ; LAB_004bb458
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 004bb484
        ;   Label: LAB_004bb484
    CMP EAX,dword ptr [ESP + 0x1d8]     ; 004bb48b
    JNZ 0x004bb4ee                      ; 004bb492
        ;   XREF to: 004bb4ee (CONDITIONAL_JUMP)  ; LAB_004bb4ee
    XOR CL,CL                           ; 004bb494
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb496
    MOV byte ptr [0x01d22c70],CL        ; 004bb499 | DAT_01d22c70
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004bb49f
    SETZ AL                             ; 004bb4a6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bb4a9
    AND EAX,0xff                        ; 004bb4ac
    MOV dword ptr [EBX + 0x1fc],EAX     ; 004bb4b1
    JZ 0x004bc2ac                       ; 004bb4b7
        ;   XREF to: 004bc2ac (CONDITIONAL_JUMP)  ; LAB_004bc2ac
    PUSH 0x40a00000                     ; 004bb4bd
    PUSH 0x5c2aa9                       ; 004bb4c2 | = "Event debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bb4c7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004bb4c7
    ADD ESP,0x4                         ; 004bb4cc
    PUSH EAX                            ; 004bb4cf
    PUSH EBX                            ; 004bb4d0
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bb4d1
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bb4d6
    PUSH 0x5c2ac8                       ; 004bb4d9 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bb4de
    MOV EAX,[0x006045f8]                ; 004bb4e0 | DAT_006045f8
    PUSH EAX                            ; 004bb4e5
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bb4e6
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bb4eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb4ee
        ;   Label: LAB_004bb4ee
    CMP dword ptr [EAX + 0x234],0x0     ; 004bb4f1
    JZ 0x004bb5f7                       ; 004bb4f8
        ;   XREF to: 004bb5f7 (CONDITIONAL_JUMP)  ; LAB_004bb5f7
    PUSH 0x5c2ad4                       ; 004bb4fe | DAT_005c2ad4
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb503
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bb508
    ADD ESP,0x4                         ; 004bb50a
    MOV EDI,EAX                         ; 004bb50d
    MOV EBX,EAX                         ; 004bb50f
    SUB ECX,ECX                         ; 004bb511
    DEC ECX                             ; 004bb513
    XOR EAX,EAX                         ; 004bb514
    SCASB.REPNE ES:EDI                  ; 004bb516
    NOT ECX                             ; 004bb518
    DEC ECX                             ; 004bb51a
    MOV dword ptr [ESP + 0x1e4],ESI     ; 004bb51b
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004bb522
    TEST ECX,ECX                        ; 004bb529
    JLE 0x004bb56a                      ; 004bb52b
        ;   XREF to: 004bb56a (CONDITIONAL_JUMP)  ; LAB_004bb56a
    MOV EAX,ECX                         ; 004bb52d
    MOV ESI,EBX                         ; 004bb52f
    NEG EAX                             ; 004bb531
    MOV EBX,ECX                         ; 004bb533
    ADD ECX,EAX                         ; 004bb535
    MOV dword ptr [ESP + 0x2e8],ECX     ; 004bb537
    XOR EAX,EAX                         ; 004bb53e
        ;   Label: LAB_004bb53e
    MOV AL,byte ptr [ESI]               ; 004bb540
    PUSH EAX                            ; 004bb542
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bb543 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb54a
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb54f
    CMP EDI,EAX                         ; 004bb552
    JNZ 0x004bb55d                      ; 004bb554
        ;   XREF to: 004bb55d (CONDITIONAL_JUMP)  ; LAB_004bb55d
    INC dword ptr [ESP + 0x1e4]         ; 004bb556
    MOV EDI,dword ptr [ESP + 0x2e8]     ; 004bb55d
        ;   Label: LAB_004bb55d
    DEC EBX                             ; 004bb564
    INC ESI                             ; 004bb565
    CMP EBX,EDI                         ; 004bb566
    JG 0x004bb53e                       ; 004bb568
        ;   XREF to: 004bb53e (CONDITIONAL_JUMP)  ; LAB_004bb53e
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004bb56a
        ;   Label: LAB_004bb56a
    CMP EAX,dword ptr [ESP + 0x1e0]     ; 004bb571
    JNZ 0x004bb5f7                      ; 004bb578
        ;   XREF to: 004bb5f7 (CONDITIONAL_JUMP)  ; LAB_004bb5f7
    XOR CH,CH                           ; 004bb57a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb57c
    MOV byte ptr [0x01d22c70],CH        ; 004bb57f | DAT_01d22c70
    CMP dword ptr [EAX + 0x200],0x0     ; 004bb585
    SETZ AL                             ; 004bb58c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bb58f
    AND EAX,0xff                        ; 004bb592
    MOV dword ptr [EBX + 0x200],EAX     ; 004bb597
    JZ 0x004bc2bb                       ; 004bb59d
        ;   XREF to: 004bc2bb (CONDITIONAL_JUMP)  ; LAB_004bc2bb
    PUSH 0x40a00000                     ; 004bb5a3
    PUSH 0x5c2b08                       ; 004bb5a8 | = "Script debug on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bb5ad
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bb5b2
    PUSH EAX                            ; 004bb5b5
    PUSH EBX                            ; 004bb5b6
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bb5b7
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bb5bc
    PUSH 0xf0                           ; 004bb5bf
    PUSH 0x0                            ; 004bb5c4
    PUSH 0x0                            ; 004bb5c6
    MOV ECX,dword ptr [0x00603b28]      ; 004bb5c8 | g_CDemonSetPtr
    PUSH ECX                            ; 004bb5ce | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x328],0x1     ; 004bb5cf
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_005353b0 ; 004bb5d9
        ;   XREF to: 005353b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_005353b0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
        ;   Label: LAB_004bb5d9
    ADD ESP,0x10                        ; 004bb5de
    PUSH 0x5c2b29                       ; 004bb5e1 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bb5e6
    MOV EBX,dword ptr [0x006045f8]      ; 004bb5e8 | DAT_006045f8
    PUSH EBX                            ; 004bb5ee
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bb5ef
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bb5f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb5f7
        ;   Label: LAB_004bb5f7
    CMP dword ptr [EAX + 0x234],0x0     ; 004bb5fa
    JZ 0x004bb6de                       ; 004bb601
        ;   XREF to: 004bb6de (CONDITIONAL_JUMP)  ; LAB_004bb6de
    PUSH 0x5c2b35                       ; 004bb607 | DAT_005c2b35
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb60c
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bb611
    ADD ESP,0x4                         ; 004bb613
    XOR ECX,ECX                         ; 004bb616
    MOV EDI,EAX                         ; 004bb618
    MOV dword ptr [ESP + 0x1ec],ECX     ; 004bb61a
    SUB ECX,ECX                         ; 004bb621
    DEC ECX                             ; 004bb623
    XOR EAX,EAX                         ; 004bb624
    SCASB.REPNE ES:EDI                  ; 004bb626
    NOT ECX                             ; 004bb628
    DEC ECX                             ; 004bb62a
    MOV dword ptr [ESP + 0x1e8],ECX     ; 004bb62b
    TEST ECX,ECX                        ; 004bb632
    JLE 0x004bb673                      ; 004bb634
        ;   XREF to: 004bb673 (CONDITIONAL_JUMP)  ; LAB_004bb673
    MOV EAX,ECX                         ; 004bb636
    MOV ESI,EBX                         ; 004bb638
    NEG EAX                             ; 004bb63a
    MOV EBX,ECX                         ; 004bb63c
    ADD ECX,EAX                         ; 004bb63e
    MOV dword ptr [ESP + 0x2ec],ECX     ; 004bb640
    XOR EAX,EAX                         ; 004bb647
        ;   Label: LAB_004bb647
    MOV AL,byte ptr [ESI]               ; 004bb649
    PUSH EAX                            ; 004bb64b
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bb64c | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb653
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb658
    CMP EDI,EAX                         ; 004bb65b
    JNZ 0x004bb666                      ; 004bb65d
        ;   XREF to: 004bb666 (CONDITIONAL_JUMP)  ; LAB_004bb666
    INC dword ptr [ESP + 0x1ec]         ; 004bb65f
    MOV EDI,dword ptr [ESP + 0x2ec]     ; 004bb666
        ;   Label: LAB_004bb666
    DEC EBX                             ; 004bb66d
    INC ESI                             ; 004bb66e
    CMP EBX,EDI                         ; 004bb66f
    JG 0x004bb647                       ; 004bb671
        ;   XREF to: 004bb647 (CONDITIONAL_JUMP)  ; LAB_004bb647
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004bb673
        ;   Label: LAB_004bb673
    MOV EDX,dword ptr [ESP + 0x1e8]     ; 004bb67a
    CMP EAX,EDX                         ; 004bb681
    JNZ 0x004bb6de                      ; 004bb683
        ;   XREF to: 004bb6de (CONDITIONAL_JUMP)  ; LAB_004bb6de
    XOR AL,DL                           ; 004bb685
    MOV [0x01d22c70],AL                 ; 004bb687 | DAT_01d22c70
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb68c
    CMP dword ptr [EAX + 0x21c],0x0     ; 004bb68f
    SETZ AL                             ; 004bb696
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bb699
    AND EAX,0xff                        ; 004bb69c
    MOV dword ptr [EBX + 0x21c],EAX     ; 004bb6a1
    JZ 0x004bc2f7                       ; 004bb6a7
        ;   XREF to: 004bc2f7 (CONDITIONAL_JUMP)  ; LAB_004bc2f7
    PUSH 0x40a00000                     ; 004bb6ad
    PUSH 0x5c2b69                       ; 004bb6b2 | = "Memory debugging on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bb6b7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004bb6b7
    ADD ESP,0x4                         ; 004bb6bc
    PUSH EAX                            ; 004bb6bf
    PUSH EBX                            ; 004bb6c0
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bb6c1
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bb6c6
    PUSH 0x5c2b92                       ; 004bb6c9 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bb6ce
    MOV EAX,[0x006045f8]                ; 004bb6d0 | DAT_006045f8
    PUSH EAX                            ; 004bb6d5
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bb6d6
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bb6db
    PUSH 0x5c2b9e                       ; 004bb6de | DAT_005c2b9e
        ;   Label: LAB_004bb6de
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb6e3
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bb6e8
    ADD ESP,0x4                         ; 004bb6ea
    MOV EDI,EAX                         ; 004bb6ed
    MOV EBX,EAX                         ; 004bb6ef
    SUB ECX,ECX                         ; 004bb6f1
    DEC ECX                             ; 004bb6f3
    XOR EAX,EAX                         ; 004bb6f4
    SCASB.REPNE ES:EDI                  ; 004bb6f6
    NOT ECX                             ; 004bb6f8
    DEC ECX                             ; 004bb6fa
    MOV dword ptr [ESP + 0x1f0],ECX     ; 004bb6fb
    TEST ECX,ECX                        ; 004bb702
    JLE 0x004bb748                      ; 004bb704
        ;   XREF to: 004bb748 (CONDITIONAL_JUMP)  ; LAB_004bb748
    MOV EAX,ECX                         ; 004bb706
    NEG EAX                             ; 004bb708
    MOV EDI,ECX                         ; 004bb70a
    ADD ECX,EAX                         ; 004bb70c
    MOV dword ptr [ESP + 0x2f0],ECX     ; 004bb70e
    XOR EAX,EAX                         ; 004bb715
        ;   Label: LAB_004bb715
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bb717 | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bb71d
    XOR EAX,EAX                         ; 004bb724
    MOV AL,byte ptr [EBX]               ; 004bb726
    PUSH EAX                            ; 004bb728
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb729
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb72e
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bb731
    JNZ 0x004bb73b                      ; 004bb738
        ;   XREF to: 004bb73b (CONDITIONAL_JUMP)  ; LAB_004bb73b
    INC ESI                             ; 004bb73a
    MOV ECX,dword ptr [ESP + 0x2f0]     ; 004bb73b
        ;   Label: LAB_004bb73b
    DEC EDI                             ; 004bb742
    INC EBX                             ; 004bb743
    CMP EDI,ECX                         ; 004bb744
    JG 0x004bb715                       ; 004bb746
        ;   XREF to: 004bb715 (CONDITIONAL_JUMP)  ; LAB_004bb715
    CMP ESI,dword ptr [ESP + 0x1f0]     ; 004bb748
        ;   Label: LAB_004bb748
    JNZ 0x004bb7b3                      ; 004bb74f
        ;   XREF to: 004bb7b3 (CONDITIONAL_JUMP)  ; LAB_004bb7b3
    XOR AH,AH                           ; 004bb751
    PUSH 0x40a00000                     ; 004bb753
    MOV byte ptr [0x01d22c70],AH        ; 004bb758 | DAT_01d22c70
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb75e
    PUSH 0x5c2bd2                       ; 004bb761 | = "Manual aim enabled"
    MOV dword ptr [EAX + 0xdc],0x2      ; 004bb766
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bb770
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bb775
    PUSH EAX                            ; 004bb778
    MOV ESI,dword ptr [EBP + 0x14]      ; 004bb779
    PUSH ESI                            ; 004bb77c
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bb77d
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bb782
    PUSH 0x5c2be5                       ; 004bb785 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bb78a
    MOV EDI,dword ptr [0x006045f8]      ; 004bb78c | DAT_006045f8
    PUSH EDI                            ; 004bb792
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bb793
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    MOV EAX,[0x01d5ba14]                ; 004bb798 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bb79d
    MOV EBX,dword ptr [ESI + 0xdc]      ; 004bb7a4
    ADD ESP,0xc                         ; 004bb7aa
    MOV dword ptr [EAX + 0x206e4],EBX   ; 004bb7ad
    PUSH 0x5c2bf1                       ; 004bb7b3 | DAT_005c2bf1
        ;   Label: LAB_004bb7b3
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb7b8
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bb7bd
    ADD ESP,0x4                         ; 004bb7bf
    MOV EDI,EAX                         ; 004bb7c2
    MOV EBX,EAX                         ; 004bb7c4
    SUB ECX,ECX                         ; 004bb7c6
    DEC ECX                             ; 004bb7c8
    XOR EAX,EAX                         ; 004bb7c9
    SCASB.REPNE ES:EDI                  ; 004bb7cb
    NOT ECX                             ; 004bb7cd
    DEC ECX                             ; 004bb7cf
    MOV dword ptr [ESP + 0x1f4],ECX     ; 004bb7d0
    TEST ECX,ECX                        ; 004bb7d7
    JLE 0x004bb81d                      ; 004bb7d9
        ;   XREF to: 004bb81d (CONDITIONAL_JUMP)  ; LAB_004bb81d
    MOV EAX,ECX                         ; 004bb7db
    NEG EAX                             ; 004bb7dd
    MOV EDI,ECX                         ; 004bb7df
    ADD ECX,EAX                         ; 004bb7e1
    MOV dword ptr [ESP + 0x2f4],ECX     ; 004bb7e3
    XOR EAX,EAX                         ; 004bb7ea
        ;   Label: LAB_004bb7ea
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bb7ec | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bb7f2
    XOR EAX,EAX                         ; 004bb7f9
    MOV AL,byte ptr [EBX]               ; 004bb7fb
    PUSH EAX                            ; 004bb7fd
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb7fe
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb803
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bb806
    JNZ 0x004bb810                      ; 004bb80d
        ;   XREF to: 004bb810 (CONDITIONAL_JUMP)  ; LAB_004bb810
    INC ESI                             ; 004bb80f
    MOV ECX,dword ptr [ESP + 0x2f4]     ; 004bb810
        ;   Label: LAB_004bb810
    DEC EDI                             ; 004bb817
    INC EBX                             ; 004bb818
    CMP EDI,ECX                         ; 004bb819
    JG 0x004bb7ea                       ; 004bb81b
        ;   XREF to: 004bb7ea (CONDITIONAL_JUMP)  ; LAB_004bb7ea
    CMP ESI,dword ptr [ESP + 0x1f4]     ; 004bb81d
        ;   Label: LAB_004bb81d
    JNZ 0x004bb888                      ; 004bb824
        ;   XREF to: 004bb888 (CONDITIONAL_JUMP)  ; LAB_004bb888
    PUSH 0x40a00000                     ; 004bb826
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb82b
    XOR DL,DL                           ; 004bb82e
    PUSH 0x5c2c23                       ; 004bb830 | = "Auto aim enabled"
    MOV byte ptr [0x01d22c70],DL        ; 004bb835 | DAT_01d22c70
    MOV dword ptr [EAX + 0xdc],0x0      ; 004bb83b
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bb845
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bb84a
    PUSH EAX                            ; 004bb84d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004bb84e
    PUSH ESI                            ; 004bb851
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bb852
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bb857
    PUSH 0x5c2c34                       ; 004bb85a | = "cheat-1.wav"
    PUSH 0x0                            ; 004bb85f
    MOV EDI,dword ptr [0x006045f8]      ; 004bb861 | DAT_006045f8
    PUSH EDI                            ; 004bb867
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bb868
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    MOV EAX,[0x01d5ba14]                ; 004bb86d | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bb872
    MOV EBX,dword ptr [ESI + 0xdc]      ; 004bb879
    ADD ESP,0xc                         ; 004bb87f
    MOV dword ptr [EAX + 0x206e4],EBX   ; 004bb882
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb888
        ;   Label: LAB_004bb888
    CMP dword ptr [EAX + 0x234],0x0     ; 004bb88b
    JZ 0x004bb9f2                       ; 004bb892
        ;   XREF to: 004bb9f2 (CONDITIONAL_JUMP)  ; LAB_004bb9f2
    PUSH 0x5c2c40                       ; 004bb898 | DAT_005c2c40
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bb89d
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bb8a2
    ADD ESP,0x4                         ; 004bb8a4
    XOR ECX,ECX                         ; 004bb8a7
    MOV EDI,EAX                         ; 004bb8a9
    MOV dword ptr [ESP + 0x1fc],ECX     ; 004bb8ab
    SUB ECX,ECX                         ; 004bb8b2
    DEC ECX                             ; 004bb8b4
    XOR EAX,EAX                         ; 004bb8b5
    SCASB.REPNE ES:EDI                  ; 004bb8b7
    NOT ECX                             ; 004bb8b9
    DEC ECX                             ; 004bb8bb
    MOV dword ptr [ESP + 0x1f8],ECX     ; 004bb8bc
    TEST ECX,ECX                        ; 004bb8c3
    JLE 0x004bb904                      ; 004bb8c5
        ;   XREF to: 004bb904 (CONDITIONAL_JUMP)  ; LAB_004bb904
    MOV EAX,ECX                         ; 004bb8c7
    MOV ESI,EBX                         ; 004bb8c9
    NEG EAX                             ; 004bb8cb
    MOV EBX,ECX                         ; 004bb8cd
    ADD ECX,EAX                         ; 004bb8cf
    MOV dword ptr [ESP + 0x2f8],ECX     ; 004bb8d1
    XOR EAX,EAX                         ; 004bb8d8
        ;   Label: LAB_004bb8d8
    MOV AL,byte ptr [ESI]               ; 004bb8da
    PUSH EAX                            ; 004bb8dc
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bb8dd | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bb8e4
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bb8e9
    CMP EDI,EAX                         ; 004bb8ec
    JNZ 0x004bb8f7                      ; 004bb8ee
        ;   XREF to: 004bb8f7 (CONDITIONAL_JUMP)  ; LAB_004bb8f7
    INC dword ptr [ESP + 0x1fc]         ; 004bb8f0
    MOV ECX,dword ptr [ESP + 0x2f8]     ; 004bb8f7
        ;   Label: LAB_004bb8f7
    DEC EBX                             ; 004bb8fe
    INC ESI                             ; 004bb8ff
    CMP EBX,ECX                         ; 004bb900
    JG 0x004bb8d8                       ; 004bb902
        ;   XREF to: 004bb8d8 (CONDITIONAL_JUMP)  ; LAB_004bb8d8
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 004bb904
        ;   Label: LAB_004bb904
    CMP EAX,dword ptr [ESP + 0x1f8]     ; 004bb90b
    JNZ 0x004bb9f2                      ; 004bb912
        ;   XREF to: 004bb9f2 (CONDITIONAL_JUMP)  ; LAB_004bb9f2
    PUSH 0x1                            ; 004bb918
    PUSH 0x43700000                     ; 004bb91a
    PUSH 0x3e800000                     ; 004bb91f
    PUSH 0x1                            ; 004bb924
    PUSH 0x5fe9e8                       ; 004bb926 | DAT_005fe9e8
    MOV EAX,[0x005fb140]                ; 004bb92b | g_CEditorToolsPtr
    XOR DH,DH                           ; 004bb930
    PUSH 0x5c210c                       ; 004bb932 | s_Enter_Movie_FPS_005c210b+1
    XOR ESI,ESI                         ; 004bb937
    MOV byte ptr [0x01d22c70],DH        ; 004bb939 | DAT_01d22c70
    PUSH EAX                            ; 004bb93f
    MOV dword ptr [0x01d22c44],ESI      ; 004bb940 | DAT_01d22c44
    MOV dword ptr [0x01d22c4c],ESI      ; 004bb946 | DAT_01d22c4c
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10 ; 004bb94c
        ;   XREF to: 0047ea10 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004bb951
    TEST EAX,EAX                        ; 004bb954
    JZ 0x004bb9f2                       ; 004bb956
        ;   XREF to: 004bb9f2 (CONDITIONAL_JUMP)  ; LAB_004bb9f2
    PUSH 0x1                            ; 004bb95c
    PUSH 0x1869f                        ; 004bb95e
    PUSH ESI                            ; 004bb963
    PUSH 0x1                            ; 004bb964
    PUSH 0x1d22c48                      ; 004bb966 | DAT_01d22c48
    PUSH 0x5c211c                       ; 004bb96b | = "Enter number of frames to record (or ..."
    MOV EDX,dword ptr [0x005fb140]      ; 004bb970 | g_CEditorToolsPtr
    PUSH EDX                            ; 004bb976
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940 ; 004bb977
        ;   XREF to: 0047e940 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004bb97c
    TEST EAX,EAX                        ; 004bb97f
    JZ 0x004bb9f2                       ; 004bb981
        ;   XREF to: 004bb9f2 (CONDITIONAL_JUMP)  ; LAB_004bb9f2
    PUSH 0x1                            ; 004bb983
    PUSH 0x270f                         ; 004bb985
    PUSH 0x1                            ; 004bb98a
    PUSH 0x1                            ; 004bb98c
    PUSH 0x5fe9ec                       ; 004bb98e | DAT_005fe9ec
    PUSH 0x5c2166                       ; 004bb993 | = "Enter image width"
    MOV ECX,dword ptr [0x005fb140]      ; 004bb998 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bb99e
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940 ; 004bb99f
        ;   XREF to: 0047e940 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004bb9a4
    TEST EAX,EAX                        ; 004bb9a7
    JZ 0x004bb9f2                       ; 004bb9a9
        ;   XREF to: 004bb9f2 (CONDITIONAL_JUMP)  ; LAB_004bb9f2
    PUSH 0x1                            ; 004bb9ab
    PUSH 0x270f                         ; 004bb9ad
    PUSH 0x1                            ; 004bb9b2
    PUSH 0x1                            ; 004bb9b4
    PUSH 0x5fe9f0                       ; 004bb9b6 | DAT_005fe9f0
    PUSH 0x5c2178                       ; 004bb9bb | = "Enter image height"
    MOV EBX,dword ptr [0x005fb140]      ; 004bb9c0 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bb9c6
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940 ; 004bb9c7
        ;   XREF to: 0047e940 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004bb9cc
    TEST EAX,EAX                        ; 004bb9cf
    JZ 0x004bb9f2                       ; 004bb9d1
        ;   XREF to: 004bb9f2 (CONDITIONAL_JUMP)  ; LAB_004bb9f2
    PUSH 0x5c218b                       ; 004bb9d3 | = "Press CTRL+V to begin recording."
    MOV ESI,dword ptr [0x005fb140]      ; 004bb9d8 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bb9de
    MOV EDI,0x1                         ; 004bb9df
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 004bb9e4
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bb9e9
    MOV dword ptr [0x01d22c40],EDI      ; 004bb9ec | DAT_01d22c40
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb9f2
        ;   Label: LAB_004bb9f2
    CMP dword ptr [EAX + 0x234],0x0     ; 004bb9f5
    JZ 0x004bbaa2                       ; 004bb9fc
        ;   XREF to: 004bbaa2 (CONDITIONAL_JUMP)  ; LAB_004bbaa2
    PUSH 0x5c2c73                       ; 004bba02 | DAT_005c2c73
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bba07
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bba0c
    ADD ESP,0x4                         ; 004bba0e
    XOR ECX,ECX                         ; 004bba11
    MOV EDI,EAX                         ; 004bba13
    MOV dword ptr [ESP + 0x204],ECX     ; 004bba15
    SUB ECX,ECX                         ; 004bba1c
    DEC ECX                             ; 004bba1e
    XOR EAX,EAX                         ; 004bba1f
    SCASB.REPNE ES:EDI                  ; 004bba21
    NOT ECX                             ; 004bba23
    DEC ECX                             ; 004bba25
    MOV dword ptr [ESP + 0x200],ECX     ; 004bba26
    TEST ECX,ECX                        ; 004bba2d
    JLE 0x004bba6e                      ; 004bba2f
        ;   XREF to: 004bba6e (CONDITIONAL_JUMP)  ; LAB_004bba6e
    MOV EAX,ECX                         ; 004bba31
    MOV ESI,EBX                         ; 004bba33
    NEG EAX                             ; 004bba35
    MOV EBX,ECX                         ; 004bba37
    ADD ECX,EAX                         ; 004bba39
    MOV dword ptr [ESP + 0x2fc],ECX     ; 004bba3b
    XOR EAX,EAX                         ; 004bba42
        ;   Label: LAB_004bba42
    MOV AL,byte ptr [ESI]               ; 004bba44
    PUSH EAX                            ; 004bba46
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bba47 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bba4e
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bba53
    CMP EDI,EAX                         ; 004bba56
    JNZ 0x004bba61                      ; 004bba58
        ;   XREF to: 004bba61 (CONDITIONAL_JUMP)  ; LAB_004bba61
    INC dword ptr [ESP + 0x204]         ; 004bba5a
    MOV EDI,dword ptr [ESP + 0x2fc]     ; 004bba61
        ;   Label: LAB_004bba61
    DEC EBX                             ; 004bba68
    INC ESI                             ; 004bba69
    CMP EBX,EDI                         ; 004bba6a
    JG 0x004bba42                       ; 004bba6c
        ;   XREF to: 004bba42 (CONDITIONAL_JUMP)  ; LAB_004bba42
    MOV EAX,dword ptr [ESP + 0x204]     ; 004bba6e
        ;   Label: LAB_004bba6e
    CMP EAX,dword ptr [ESP + 0x200]     ; 004bba75
    JNZ 0x004bbaa2                      ; 004bba7c
        ;   XREF to: 004bbaa2 (CONDITIONAL_JUMP)  ; LAB_004bbaa2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bba7e
    XOR BL,BL                           ; 004bba81
    MOV ECX,dword ptr [EAX + 0x240]     ; 004bba83
    MOV byte ptr [0x01d22c70],BL        ; 004bba89 | DAT_01d22c70
    TEST ECX,ECX                        ; 004bba8f
    SETZ AL                             ; 004bba91
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bba94
    AND EAX,0xff                        ; 004bba97
    MOV dword ptr [EBX + 0x240],EAX     ; 004bba9c
    PUSH 0x5c2caa                       ; 004bbaa2 | DAT_005c2caa
        ;   Label: LAB_004bbaa2
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bbaa7
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR EBX,EBX                         ; 004bbaac
    ADD ESP,0x4                         ; 004bbaae
    MOV EDI,EAX                         ; 004bbab1
    MOV ESI,EAX                         ; 004bbab3
    SUB ECX,ECX                         ; 004bbab5
    DEC ECX                             ; 004bbab7
    XOR EAX,EAX                         ; 004bbab8
    SCASB.REPNE ES:EDI                  ; 004bbaba
    NOT ECX                             ; 004bbabc
    DEC ECX                             ; 004bbabe
    MOV dword ptr [ESP + 0x208],ECX     ; 004bbabf
    TEST ECX,ECX                        ; 004bbac6
    JLE 0x004bbb0c                      ; 004bbac8
        ;   XREF to: 004bbb0c (CONDITIONAL_JUMP)  ; LAB_004bbb0c
    MOV EAX,ECX                         ; 004bbaca
    NEG EAX                             ; 004bbacc
    MOV EDI,ECX                         ; 004bbace
    ADD ECX,EAX                         ; 004bbad0
    MOV dword ptr [ESP + 0x300],ECX     ; 004bbad2
    XOR EAX,EAX                         ; 004bbad9
        ;   Label: LAB_004bbad9
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bbadb | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bbae1
    XOR EAX,EAX                         ; 004bbae8
    MOV AL,byte ptr [ESI]               ; 004bbaea
    PUSH EAX                            ; 004bbaec
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bbaed
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bbaf2
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bbaf5
    JNZ 0x004bbaff                      ; 004bbafc
        ;   XREF to: 004bbaff (CONDITIONAL_JUMP)  ; LAB_004bbaff
    INC EBX                             ; 004bbafe
    MOV EAX,dword ptr [ESP + 0x300]     ; 004bbaff
        ;   Label: LAB_004bbaff
    DEC EDI                             ; 004bbb06
    INC ESI                             ; 004bbb07
    CMP EDI,EAX                         ; 004bbb08
    JG 0x004bbad9                       ; 004bbb0a
        ;   XREF to: 004bbad9 (CONDITIONAL_JUMP)  ; LAB_004bbad9
    MOV EDX,dword ptr [ESP + 0x208]     ; 004bbb0c
        ;   Label: LAB_004bbb0c
    CMP EBX,EDX                         ; 004bbb13
    JNZ 0x004bbbe2                      ; 004bbb15
        ;   XREF to: 004bbbe2 (CONDITIONAL_JUMP)  ; LAB_004bbbe2
    MOV EAX,[0x01d5ba14]                ; 004bbb1b | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bbb20
    PUSH 0x5c2ce3                       ; 004bbb27 | = "Skeleton_key"
    ADD EAX,0x206e8                     ; 004bbb2c
    XOR BH,DH                           ; 004bbb31
    PUSH EAX                            ; 004bbb33
    MOV byte ptr [0x01d22c70],BH        ; 004bbb34 | DAT_01d22c70
    CALL core_inv.cpp_FUN_004db990      ; 004bbb3a
        ;   XREF to: 004db990 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_FUN_004db990(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 004bbb3f
    TEST EAX,EAX                        ; 004bbb42
    JNZ 0x004bbbe2                      ; 004bbb44
        ;   XREF to: 004bbbe2 (CONDITIONAL_JUMP)  ; LAB_004bbbe2
    PUSH 0x5c2cf0                       ; 004bbb4a | = "CKeyActor"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004bbb4f
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 004bbb54
    MOV EBX,EAX                         ; 004bbb57
    PUSH EBX                            ; 004bbb59
    MOV EAX,dword ptr [EAX + 0x154]     ; 004bbb5a
    MOV ESI,0x5c2cfa                    ; 004bbb60 | = "Skeleton_key"
    CALL dword ptr [EAX]                ; 004bbb65
    ADD ESP,0x4                         ; 004bbb67
    MOV EDI,EBX                         ; 004bbb6a
    MOV dword ptr [EBX + 0x2d4],0xffffffff ; 004bbb6c
    PUSH EDI                            ; 004bbb76
    MOV AL,byte ptr [ESI]               ; 004bbb77 | = "Skeleton_key" | s_eleton_key_005c2cfa+2
        ;   Label: LAB_004bbb77
    MOV byte ptr [EDI],AL               ; 004bbb79
    CMP AL,0x0                          ; 004bbb7b
    JZ 0x004bbb8f                       ; 004bbb7d
        ;   XREF to: 004bbb8f (CONDITIONAL_JUMP)  ; LAB_004bbb8f
    MOV AL,byte ptr [ESI + 0x1]         ; 004bbb7f | s_keleton_key_005c2cfa+1 | s_leton_key_005c2cfa+3
    ADD ESI,0x2                         ; 004bbb82
    MOV byte ptr [EDI + 0x1],AL         ; 004bbb85
    ADD EDI,0x2                         ; 004bbb88
    CMP AL,0x0                          ; 004bbb8b
    JNZ 0x004bbb77                      ; 004bbb8d
        ;   XREF to: 004bbb77 (CONDITIONAL_JUMP)  ; LAB_004bbb77
    POP EDI                             ; 004bbb8f
        ;   Label: LAB_004bbb8f
    PUSH 0x5c2d07                       ; 004bbb90 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bbb95
    MOV ECX,dword ptr [0x006045f8]      ; 004bbb97 | DAT_006045f8
    PUSH ECX                            ; 004bbb9d
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bbb9e
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bbba3
    MOV EAX,[0x01d5ba14]                ; 004bbba6 | DAT_01d5ba14
    PUSH 0x1                            ; 004bbbab
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bbbad
    PUSH EBX                            ; 004bbbb4
    ADD EAX,0x206e8                     ; 004bbbb5
    PUSH EAX                            ; 004bbbba
    CALL core_inv.cpp_FUN_004da880      ; 004bbbbb
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004bbbc0
    PUSH 0x40a00000                     ; 004bbbc3
    PUSH 0x5c2d13                       ; 004bbbc8 | = "You have the skeleton key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bbbcd
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bbbd2
    PUSH EAX                            ; 004bbbd5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bbbd6
    PUSH EBX                            ; 004bbbd9
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bbbda
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bbbdf
    PUSH 0x5c2d2d                       ; 004bbbe2 | DAT_005c2d2d
        ;   Label: LAB_004bbbe2
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bbbe7
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bbbec
    ADD ESP,0x4                         ; 004bbbee
    MOV EDI,EAX                         ; 004bbbf1
    MOV EBX,EAX                         ; 004bbbf3
    SUB ECX,ECX                         ; 004bbbf5
    DEC ECX                             ; 004bbbf7
    XOR EAX,EAX                         ; 004bbbf8
    SCASB.REPNE ES:EDI                  ; 004bbbfa
    NOT ECX                             ; 004bbbfc
    DEC ECX                             ; 004bbbfe
    MOV dword ptr [ESP + 0x20c],ECX     ; 004bbbff
    TEST ECX,ECX                        ; 004bbc06
    JLE 0x004bbc4c                      ; 004bbc08
        ;   XREF to: 004bbc4c (CONDITIONAL_JUMP)  ; LAB_004bbc4c
    MOV EAX,ECX                         ; 004bbc0a
    NEG EAX                             ; 004bbc0c
    MOV EDI,ECX                         ; 004bbc0e
    ADD ECX,EAX                         ; 004bbc10
    MOV dword ptr [ESP + 0x304],ECX     ; 004bbc12
    XOR EAX,EAX                         ; 004bbc19
        ;   Label: LAB_004bbc19
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bbc1b | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bbc21
    XOR EAX,EAX                         ; 004bbc28
    MOV AL,byte ptr [EBX]               ; 004bbc2a
    PUSH EAX                            ; 004bbc2c
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bbc2d
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bbc32
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bbc35
    JNZ 0x004bbc3f                      ; 004bbc3c
        ;   XREF to: 004bbc3f (CONDITIONAL_JUMP)  ; LAB_004bbc3f
    INC ESI                             ; 004bbc3e
    MOV ECX,dword ptr [ESP + 0x304]     ; 004bbc3f
        ;   Label: LAB_004bbc3f
    DEC EDI                             ; 004bbc46
    INC EBX                             ; 004bbc47
    CMP EDI,ECX                         ; 004bbc48
    JG 0x004bbc19                       ; 004bbc4a
        ;   XREF to: 004bbc19 (CONDITIONAL_JUMP)  ; LAB_004bbc19
    CMP ESI,dword ptr [ESP + 0x20c]     ; 004bbc4c
        ;   Label: LAB_004bbc4c
    JNZ 0x004bc306                      ; 004bbc53
        ;   XREF to: 004bc306 (CONDITIONAL_JUMP)  ; LAB_004bc306
    XOR CL,CL                           ; 004bbc59
    MOV byte ptr [0x01d22c70],CL        ; 004bbc5b | DAT_01d22c70
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bbc61
        ;   Label: LAB_004bbc61
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004bbc64
    SETZ AL                             ; 004bbc6b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bbc6e
    AND EAX,0xff                        ; 004bbc71
    MOV dword ptr [EBX + 0x1f4],EAX     ; 004bbc76
    JZ 0x004bc393                       ; 004bbc7c
        ;   XREF to: 004bc393 (CONDITIONAL_JUMP)  ; LAB_004bc393
    PUSH 0x40a00000                     ; 004bbc82
    PUSH 0x5c2d94                       ; 004bbc87 | = "God mode enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bbc8c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bbc91
    PUSH EAX                            ; 004bbc94
    PUSH EBX                            ; 004bbc95
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bbc96
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x01d5ba14]                ; 004bbc9b | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bbca0
    ADD ESP,0xc                         ; 004bbca7
    MOV dword ptr [EAX + 0x2538],0x42c80000 ; 004bbcaa
    PUSH 0x5c2db7                       ; 004bbcb4 | = "cheat-1.wav"
        ;   Label: LAB_004bbcb4
    PUSH 0x0                            ; 004bbcb9
    MOV EDI,dword ptr [0x006045f8]      ; 004bbcbb | DAT_006045f8
    PUSH EDI                            ; 004bbcc1
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bbcc2
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bbcc7
    PUSH 0x5c2dc3                       ; 004bbcca | DAT_005c2dc3
        ;   Label: LAB_004bbcca
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bbccf
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bbcd4
    ADD ESP,0x4                         ; 004bbcd6
    MOV EDI,EAX                         ; 004bbcd9
    MOV EBX,EAX                         ; 004bbcdb
    SUB ECX,ECX                         ; 004bbcdd
    DEC ECX                             ; 004bbcdf
    XOR EAX,EAX                         ; 004bbce0
    SCASB.REPNE ES:EDI                  ; 004bbce2
    NOT ECX                             ; 004bbce4
    DEC ECX                             ; 004bbce6
    MOV dword ptr [ESP + 0x218],ECX     ; 004bbce7
    TEST ECX,ECX                        ; 004bbcee
    JLE 0x004bbd34                      ; 004bbcf0
        ;   XREF to: 004bbd34 (CONDITIONAL_JUMP)  ; LAB_004bbd34
    MOV EAX,ECX                         ; 004bbcf2
    NEG EAX                             ; 004bbcf4
    MOV EDI,ECX                         ; 004bbcf6
    ADD ECX,EAX                         ; 004bbcf8
    MOV dword ptr [ESP + 0x30c],ECX     ; 004bbcfa
    XOR EAX,EAX                         ; 004bbd01
        ;   Label: LAB_004bbd01
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bbd03 | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bbd09
    XOR EAX,EAX                         ; 004bbd10
    MOV AL,byte ptr [EBX]               ; 004bbd12
    PUSH EAX                            ; 004bbd14
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bbd15
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bbd1a
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bbd1d
    JNZ 0x004bbd27                      ; 004bbd24
        ;   XREF to: 004bbd27 (CONDITIONAL_JUMP)  ; LAB_004bbd27
    INC ESI                             ; 004bbd26
    MOV EAX,dword ptr [ESP + 0x30c]     ; 004bbd27
        ;   Label: LAB_004bbd27
    DEC EDI                             ; 004bbd2e
    INC EBX                             ; 004bbd2f
    CMP EDI,EAX                         ; 004bbd30
    JG 0x004bbd01                       ; 004bbd32
        ;   XREF to: 004bbd01 (CONDITIONAL_JUMP)  ; LAB_004bbd01
    CMP ESI,dword ptr [ESP + 0x218]     ; 004bbd34
        ;   Label: LAB_004bbd34
    JNZ 0x004bbd96                      ; 004bbd3b
        ;   XREF to: 004bbd96 (CONDITIONAL_JUMP)  ; LAB_004bbd96
    XOR AL,AL                           ; 004bbd3d
    MOV [0x01d22c70],AL                 ; 004bbd3f | DAT_01d22c70
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bbd44
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004bbd47
    SETZ AL                             ; 004bbd4e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bbd51
    AND EAX,0xff                        ; 004bbd54
    MOV dword ptr [EBX + 0x1f8],EAX     ; 004bbd59
    JZ 0x004bc3b4                       ; 004bbd5f
        ;   XREF to: 004bc3b4 (CONDITIONAL_JUMP)  ; LAB_004bc3b4
    PUSH 0x40a00000                     ; 004bbd65
    PUSH 0x5c2df8                       ; 004bbd6a | = "Enemies frozen"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bbd6f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004bbd6f
    ADD ESP,0x4                         ; 004bbd74
    PUSH EAX                            ; 004bbd77
    PUSH EBX                            ; 004bbd78
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bbd79
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bbd7e
    PUSH 0x5c2e16                       ; 004bbd81 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bbd86
    MOV EAX,[0x006045f8]                ; 004bbd88 | DAT_006045f8
    PUSH EAX                            ; 004bbd8d
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bbd8e
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bbd93
    PUSH 0x5c2e22                       ; 004bbd96 | DAT_005c2e22
        ;   Label: LAB_004bbd96
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bbd9b
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bbda0
    ADD ESP,0x4                         ; 004bbda2
    MOV EDI,EAX                         ; 004bbda5
    XOR EDX,EDX                         ; 004bbda7
    SUB ECX,ECX                         ; 004bbda9
    DEC ECX                             ; 004bbdab
    XOR EAX,EAX                         ; 004bbdac
    SCASB.REPNE ES:EDI                  ; 004bbdae
    NOT ECX                             ; 004bbdb0
    DEC ECX                             ; 004bbdb2
    MOV dword ptr [ESP + 0x220],EDX     ; 004bbdb3
    MOV dword ptr [ESP + 0x21c],ECX     ; 004bbdba
    TEST ECX,ECX                        ; 004bbdc1
    JLE 0x004bbe00                      ; 004bbdc3
        ;   XREF to: 004bbe00 (CONDITIONAL_JUMP)  ; LAB_004bbe00
    MOV EAX,ECX                         ; 004bbdc5
    NEG EAX                             ; 004bbdc7
    MOV EDI,ECX                         ; 004bbdc9
    ADD ECX,EAX                         ; 004bbdcb
    MOV dword ptr [ESP + 0x310],ECX     ; 004bbdcd
    XOR EAX,EAX                         ; 004bbdd4
        ;   Label: LAB_004bbdd4
    MOV AL,byte ptr [EBX]               ; 004bbdd6
    PUSH EAX                            ; 004bbdd8
    MOVZX ESI,byte ptr [EDI + 0x1d22c6f] ; 004bbdd9 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bbde0
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bbde5
    CMP ESI,EAX                         ; 004bbde8
    JNZ 0x004bbdf3                      ; 004bbdea
        ;   XREF to: 004bbdf3 (CONDITIONAL_JUMP)  ; LAB_004bbdf3
    INC dword ptr [ESP + 0x220]         ; 004bbdec
    MOV ESI,dword ptr [ESP + 0x310]     ; 004bbdf3
        ;   Label: LAB_004bbdf3
    DEC EDI                             ; 004bbdfa
    INC EBX                             ; 004bbdfb
    CMP EDI,ESI                         ; 004bbdfc
    JG 0x004bbdd4                       ; 004bbdfe
        ;   XREF to: 004bbdd4 (CONDITIONAL_JUMP)  ; LAB_004bbdd4
    MOV EAX,dword ptr [ESP + 0x220]     ; 004bbe00
        ;   Label: LAB_004bbe00
    CMP EAX,dword ptr [ESP + 0x21c]     ; 004bbe07
    JNZ 0x004bc3c3                      ; 004bbe0e
        ;   XREF to: 004bc3c3 (CONDITIONAL_JUMP)  ; LAB_004bc3c3
    XOR AH,AH                           ; 004bbe14
    MOV byte ptr [0x01d22c70],AH        ; 004bbe16 | DAT_01d22c70
    PUSH 0x5c2e8d                       ; 004bbe1c | = "CFlintlock"
        ;   Label: LAB_004bbe1c
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe21
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe26
    PUSH 0x5c2e98                       ; 004bbe29 | = "CBlunderbus"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe2e
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe33
    PUSH 0x5c2ea4                       ; 004bbe36 | = "CFirestaff"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe3b
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe40
    PUSH 0x5c2eaf                       ; 004bbe43 | = "CBurncross"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe48
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe4d
    PUSH 0x5c2eba                       ; 004bbe50 | = "CExorcism"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe55
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe5a
    PUSH 0x5c2ec4                       ; 004bbe5d | = "CStorm"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe62
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe67
    PUSH 0x5c2ecb                       ; 004bbe6a | = "CBindEvil"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe6f
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe74
    PUSH 0x5c2ed5                       ; 004bbe77 | = "CDisease"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe7c
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe81
    PUSH 0x5c2ede                       ; 004bbe84 | = "CHeal"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe89
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe8e
    PUSH 0x5c2ee4                       ; 004bbe91 | = "CLightStaff"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbe96
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbe9b
    PUSH 0x5c2ef0                       ; 004bbe9e | = "CHolycross"
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbea3
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbea8
    PUSH 0x5c2efb                       ; 004bbeab | DAT_005c2efb
    CALL core_game.cpp_giveHeroWeapon_FUN_004bafd0 ; 004bbeb0
        ;   XREF to: 004bafd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_giveHeroWeapon_FUN_004bafd0(char * class_name)
    ADD ESP,0x4                         ; 004bbeb5
    PUSH 0x40a00000                     ; 004bbeb8
    PUSH 0x5c2f00                       ; 004bbebd | = "You've got all the weapons"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bbec2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bbec7
    PUSH EAX                            ; 004bbeca
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bbecb
    PUSH EAX                            ; 004bbece
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bbecf
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bbed4
    PUSH 0x5c2f1b                       ; 004bbed7 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bbedc
    MOV EDX,dword ptr [0x006045f8]      ; 004bbede | DAT_006045f8
    PUSH EDX                            ; 004bbee4
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bbee5
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bbeea
    PUSH 0x5c2f27                       ; 004bbeed | DAT_005c2f27
        ;   Label: LAB_004bbeed
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bbef2
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bbef7
    ADD ESP,0x4                         ; 004bbef9
    XOR ECX,ECX                         ; 004bbefc
    MOV EDI,EAX                         ; 004bbefe
    MOV dword ptr [ESP + 0x230],ECX     ; 004bbf00
    SUB ECX,ECX                         ; 004bbf07
    DEC ECX                             ; 004bbf09
    XOR EAX,EAX                         ; 004bbf0a
    SCASB.REPNE ES:EDI                  ; 004bbf0c
    NOT ECX                             ; 004bbf0e
    DEC ECX                             ; 004bbf10
    MOV dword ptr [ESP + 0x22c],ECX     ; 004bbf11
    TEST ECX,ECX                        ; 004bbf18
    JLE 0x004bbf57                      ; 004bbf1a
        ;   XREF to: 004bbf57 (CONDITIONAL_JUMP)  ; LAB_004bbf57
    MOV EAX,ECX                         ; 004bbf1c
    NEG EAX                             ; 004bbf1e
    MOV EDI,ECX                         ; 004bbf20
    ADD ECX,EAX                         ; 004bbf22
    MOV dword ptr [ESP + 0x318],ECX     ; 004bbf24
    XOR EAX,EAX                         ; 004bbf2b
        ;   Label: LAB_004bbf2b
    MOV AL,byte ptr [EBX]               ; 004bbf2d
    PUSH EAX                            ; 004bbf2f
    MOVZX ESI,byte ptr [EDI + 0x1d22c6f] ; 004bbf30 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bbf37
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bbf3c
    CMP ESI,EAX                         ; 004bbf3f
    JNZ 0x004bbf4a                      ; 004bbf41
        ;   XREF to: 004bbf4a (CONDITIONAL_JUMP)  ; LAB_004bbf4a
    INC dword ptr [ESP + 0x230]         ; 004bbf43
    MOV ESI,dword ptr [ESP + 0x318]     ; 004bbf4a
        ;   Label: LAB_004bbf4a
    DEC EDI                             ; 004bbf51
    INC EBX                             ; 004bbf52
    CMP EDI,ESI                         ; 004bbf53
    JG 0x004bbf2b                       ; 004bbf55
        ;   XREF to: 004bbf2b (CONDITIONAL_JUMP)  ; LAB_004bbf2b
    MOV EAX,dword ptr [ESP + 0x230]     ; 004bbf57
        ;   Label: LAB_004bbf57
    CMP EAX,dword ptr [ESP + 0x22c]     ; 004bbf5e
    JNZ 0x004bbfc6                      ; 004bbf65
        ;   XREF to: 004bbfc6 (CONDITIONAL_JUMP)  ; LAB_004bbfc6
    MOV EAX,[0x01d5ba14]                ; 004bbf67 | DAT_01d5ba14
    XOR DH,DH                           ; 004bbf6c
    MOV EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bbf6e
    MOV byte ptr [0x01d22c70],DH        ; 004bbf75 | DAT_01d22c70
    MOV dword ptr [EBX + 0x2538],0x42c80000 ; 004bbf7b
    MOV EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bbf85
    MOV dword ptr [EBX + 0x20b80],0x64  ; 004bbf8c
    PUSH 0x40a00000                     ; 004bbf96
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bbf9b
    PUSH 0x5c2f5b                       ; 004bbfa2 | = "You just got more bullets, mana, and ..."
    MOV dword ptr [EAX + 0x20b84],0x32  ; 004bbfa7
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bbfb1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bbfb6
    PUSH EAX                            ; 004bbfb9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bbfba
    PUSH EAX                            ; 004bbfbd
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bbfbe
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bbfc3
    PUSH 0x5c2f87                       ; 004bbfc6 | DAT_005c2f87
        ;   Label: LAB_004bbfc6
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bbfcb
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bbfd0
    ADD ESP,0x4                         ; 004bbfd2
    MOV EDI,EAX                         ; 004bbfd5
    MOV EBX,EAX                         ; 004bbfd7
    SUB ECX,ECX                         ; 004bbfd9
    DEC ECX                             ; 004bbfdb
    XOR EAX,EAX                         ; 004bbfdc
    SCASB.REPNE ES:EDI                  ; 004bbfde
    NOT ECX                             ; 004bbfe0
    DEC ECX                             ; 004bbfe2
    MOV dword ptr [ESP + 0x234],ECX     ; 004bbfe3
    TEST ECX,ECX                        ; 004bbfea
    JLE 0x004bc030                      ; 004bbfec
        ;   XREF to: 004bc030 (CONDITIONAL_JUMP)  ; LAB_004bc030
    MOV EAX,ECX                         ; 004bbfee
    NEG EAX                             ; 004bbff0
    MOV EDI,ECX                         ; 004bbff2
    ADD ECX,EAX                         ; 004bbff4
    MOV dword ptr [ESP + 0x31c],ECX     ; 004bbff6
    XOR EAX,EAX                         ; 004bbffd
        ;   Label: LAB_004bbffd
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bbfff | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bc005
    XOR EAX,EAX                         ; 004bc00c
    MOV AL,byte ptr [EBX]               ; 004bc00e
    PUSH EAX                            ; 004bc010
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc011
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc016
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bc019
    JNZ 0x004bc023                      ; 004bc020
        ;   XREF to: 004bc023 (CONDITIONAL_JUMP)  ; LAB_004bc023
    INC ESI                             ; 004bc022
    MOV ECX,dword ptr [ESP + 0x31c]     ; 004bc023
        ;   Label: LAB_004bc023
    DEC EDI                             ; 004bc02a
    INC EBX                             ; 004bc02b
    CMP EDI,ECX                         ; 004bc02c
    JG 0x004bbffd                       ; 004bc02e
        ;   XREF to: 004bbffd (CONDITIONAL_JUMP)  ; LAB_004bbffd
    CMP ESI,dword ptr [ESP + 0x234]     ; 004bc030
        ;   Label: LAB_004bc030
    JNZ 0x004bc08c                      ; 004bc037
        ;   XREF to: 004bc08c (CONDITIONAL_JUMP)  ; LAB_004bc08c
    MOV EAX,[0x01d5ba14]                ; 004bc039 | DAT_01d5ba14
    PUSH 0x40a00000                     ; 004bc03e
    XOR BL,BL                           ; 004bc043
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bc045
    PUSH 0x5c2fbd                       ; 004bc04c | = "You just got more bullets"
    MOV byte ptr [0x01d22c70],BL        ; 004bc051 | DAT_01d22c70
    MOV dword ptr [EAX + 0x20b84],0x32  ; 004bc057
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bc061
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bc066
    PUSH EAX                            ; 004bc069
    MOV ESI,dword ptr [EBP + 0x14]      ; 004bc06a
    PUSH ESI                            ; 004bc06d
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bc06e
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bc073
    PUSH 0x5c2fd7                       ; 004bc076 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bc07b
    MOV EDI,dword ptr [0x006045f8]      ; 004bc07d | DAT_006045f8
    PUSH EDI                            ; 004bc083
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bc084
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bc089
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bc08c
        ;   Label: LAB_004bc08c
    CMP dword ptr [EAX + 0x234],0x0     ; 004bc08f
    JZ 0x004bc479                       ; 004bc096
        ;   XREF to: 004bc479 (CONDITIONAL_JUMP)  ; LAB_004bc479
    PUSH 0x5c2fe3                       ; 004bc09c | DAT_005c2fe3
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc0a1
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bc0a6
    ADD ESP,0x4                         ; 004bc0a8
    XOR ECX,ECX                         ; 004bc0ab
    MOV EDI,EAX                         ; 004bc0ad
    MOV dword ptr [ESP + 0x23c],ECX     ; 004bc0af
    SUB ECX,ECX                         ; 004bc0b6
    DEC ECX                             ; 004bc0b8
    XOR EAX,EAX                         ; 004bc0b9
    SCASB.REPNE ES:EDI                  ; 004bc0bb
    NOT ECX                             ; 004bc0bd
    DEC ECX                             ; 004bc0bf
    MOV dword ptr [ESP + 0x238],ECX     ; 004bc0c0
    TEST ECX,ECX                        ; 004bc0c7
    JLE 0x004bc108                      ; 004bc0c9
        ;   XREF to: 004bc108 (CONDITIONAL_JUMP)  ; LAB_004bc108
    MOV EAX,ECX                         ; 004bc0cb
    MOV ESI,EBX                         ; 004bc0cd
    NEG EAX                             ; 004bc0cf
    MOV EBX,ECX                         ; 004bc0d1
    ADD ECX,EAX                         ; 004bc0d3
    MOV dword ptr [ESP + 0x320],ECX     ; 004bc0d5
    XOR EAX,EAX                         ; 004bc0dc
        ;   Label: LAB_004bc0dc
    MOV AL,byte ptr [ESI]               ; 004bc0de
    PUSH EAX                            ; 004bc0e0
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bc0e1 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc0e8
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc0ed
    CMP EDI,EAX                         ; 004bc0f0
    JNZ 0x004bc0fb                      ; 004bc0f2
        ;   XREF to: 004bc0fb (CONDITIONAL_JUMP)  ; LAB_004bc0fb
    INC dword ptr [ESP + 0x23c]         ; 004bc0f4
    MOV ECX,dword ptr [ESP + 0x320]     ; 004bc0fb
        ;   Label: LAB_004bc0fb
    DEC EBX                             ; 004bc102
    INC ESI                             ; 004bc103
    CMP EBX,ECX                         ; 004bc104
    JG 0x004bc0dc                       ; 004bc106
        ;   XREF to: 004bc0dc (CONDITIONAL_JUMP)  ; LAB_004bc0dc
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004bc108
        ;   Label: LAB_004bc108
    CMP EAX,dword ptr [ESP + 0x238]     ; 004bc10f
    JNZ 0x004bc44e                      ; 004bc116
        ;   XREF to: 004bc44e (CONDITIONAL_JUMP)  ; LAB_004bc44e
    XOR BH,BH                           ; 004bc11c
    MOV byte ptr [0x01d22c70],BH        ; 004bc11e | DAT_01d22c70
    PUSH 0x5c3016                       ; 004bc124 | = "cheat-1.wav"
        ;   Label: LAB_004bc124
    PUSH 0x0                            ; 004bc129
    MOV ESI,dword ptr [0x006045f8]      ; 004bc12b | DAT_006045f8
    PUSH ESI                            ; 004bc131
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bc132
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bc137
    MOV EDI,0x5fe970                    ; 004bc13a | DAT_005fe970
    PUSH 0x1                            ; 004bc13f
        ;   Label: LAB_004bc13f
    PUSH 0x64                           ; 004bc141
    PUSH EDI                            ; 004bc143 | DAT_005fe970
    PUSH 0x5c3022                       ; 004bc144 | = "Raise an event"
    MOV EAX,[0x005fb140]                ; 004bc149 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bc14e
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 ; 004bc14f
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004bc154
    TEST EAX,EAX                        ; 004bc157
    JZ 0x004bc479                       ; 004bc159
        ;   XREF to: 004bc479 (CONDITIONAL_JUMP)  ; LAB_004bc479
    PUSH EDI                            ; 004bc15f | DAT_005fe970
    MOV EDX,dword ptr [0x005fba60]      ; 004bc160 | DAT_005fba60
    PUSH EDX                            ; 004bc166
    CALL core_event.cpp_CEventList_validateCommands_FUN_00491b40 ; 004bc167
        ;   XREF to: 00491b40 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_00491b40(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004bc16c
    TEST EAX,EAX                        ; 004bc16f
    JZ 0x004bc5e3                       ; 004bc171
        ;   XREF to: 004bc5e3 (CONDITIONAL_JUMP)  ; LAB_004bc5e3
    PUSH EAX                            ; 004bc177
    MOV ECX,dword ptr [0x005fb140]      ; 004bc178 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bc17e
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004bc17f
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bc184
    JMP 0x004bc13f                      ; 004bc187
        ;   XREF to: 004bc13f (UNCONDITIONAL_JUMP)  ; LAB_004bc13f
    PUSH 0x44                           ; 004bc189
        ;   Label: LAB_004bc189
    MOV EAX,[0x00600284]                ; 004bc18b | DAT_00600284
    PUSH EAX                            ; 004bc190 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 004bc191 | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 004bc193
    ADD ESP,0x8                         ; 004bc196
    TEST EAX,EAX                        ; 004bc199
    JZ 0x004bb1a0                       ; 004bc19b
        ;   XREF to: 004bb1a0 (CONDITIONAL_JUMP)  ; LAB_004bb1a0
    PUSH 0x0                            ; 004bc1a1
    PUSH 0x64                           ; 004bc1a3
    LEA EAX,[ESP + 0x108]               ; 004bc1a5
    PUSH EAX                            ; 004bc1ac
    PUSH 0x5c2997                       ; 004bc1ad | = "Enter cheat code"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bc1b2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bc1b7
    PUSH EAX                            ; 004bc1ba
    MOV ECX,dword ptr [0x005fb140]      ; 004bc1bb | g_CEditorToolsPtr
    PUSH ECX                            ; 004bc1c1
    CALL shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20 ; 004bc1c2
        ;   XREF to: 0047ed20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004bc1c7
    TEST EAX,EAX                        ; 004bc1ca
    JZ 0x004bb1a0                       ; 004bc1cc
        ;   XREF to: 004bb1a0 (CONDITIONAL_JUMP)  ; LAB_004bb1a0
    MOV AH,byte ptr [ESP + 0x100]       ; 004bc1d2
    XOR EBX,EBX                         ; 004bc1d9
    TEST AH,AH                          ; 004bc1db
    JZ 0x004bb1a0                       ; 004bc1dd
        ;   XREF to: 004bb1a0 (CONDITIONAL_JUMP)  ; LAB_004bb1a0
    XOR EAX,EAX                         ; 004bc1e3
        ;   Label: LAB_004bc1e3
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x100] ; 004bc1e5
    PUSH EAX                            ; 004bc1ec
    CALL wincore_winrun.cpp_enqueueInput_FUN_00580830 ; 004bc1ed
        ;   XREF to: 00580830 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_00580830(int input_value)
    ADD ESP,0x4                         ; 004bc1f2
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x101] ; 004bc1f5
    INC EBX                             ; 004bc1fc
    TEST DL,DL                          ; 004bc1fd
    JNZ 0x004bc1e3                      ; 004bc1ff
        ;   XREF to: 004bc1e3 (CONDITIONAL_JUMP)  ; LAB_004bc1e3
    JMP 0x004bb1a0                      ; 004bc201
        ;   XREF to: 004bb1a0 (UNCONDITIONAL_JUMP)  ; LAB_004bb1a0
    INC dword ptr [ESP + 0x1c4]         ; 004bc206
        ;   Label: LAB_004bc206
    JMP 0x004bb243                      ; 004bc20d
        ;   XREF to: 004bb243 (UNCONDITIONAL_JUMP)  ; LAB_004bb243
    PUSH 0x40a00000                     ; 004bc212
        ;   Label: LAB_004bc212
    PUSH 0x5c29ef                       ; 004bc217 | = "Cheats turned off"
    JMP 0x004bb294                      ; 004bc21c
        ;   XREF to: 004bb294 (UNCONDITIONAL_JUMP)  ; LAB_004bb294
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bc221
        ;   Label: LAB_004bc221
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bc224
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDI,dword ptr [EBX + 0x318]     ; 004bc229
    SUB EAX,EDI                         ; 004bc22f
    MOV dword ptr [ESP + 0x374],EAX     ; 004bc231
    FILD dword ptr [ESP + 0x374]        ; 004bc238
    FMUL double ptr [0x005c3528]        ; 004bc23f | DAT_005c3528
    MOV dword ptr [EBX + 0x22c],0x0     ; 004bc245
    MOV EAX,EBX                         ; 004bc24f
    FMUL double ptr [0x005c3530]        ; 004bc251 | DAT_005c3530
    FILD dword ptr [EAX + 0x31c]        ; 004bc257
    FXCH                                ; 004bc25d
    FSTP double ptr [ESP + 0x1b8]       ; 004bc25f
    FDIV double ptr [ESP + 0x1b8]       ; 004bc266
    FSTP double ptr [ESP + 0x1b8]       ; 004bc26d
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 004bc274
    PUSH EAX                            ; 004bc27b
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 004bc27c
    PUSH EDX                            ; 004bc283
    PUSH 0x5c2a35                       ; 004bc284 | = "FPS: %3.2lf"
    LEA EAX,[ESP + 0xc]                 ; 004bc289
    PUSH EAX                            ; 004bc28d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004bc28e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004bc293
    MOV EAX,ESP                         ; 004bc296
    PUSH 0x40a00000                     ; 004bc298
    PUSH EAX                            ; 004bc29d
    PUSH EBX                            ; 004bc29e
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bc29f
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bc2a4
    JMP 0x004bb357                      ; 004bc2a7
        ;   XREF to: 004bb357 (UNCONDITIONAL_JUMP)  ; LAB_004bb357
    PUSH 0x40a00000                     ; 004bc2ac
        ;   Label: LAB_004bc2ac
    PUSH 0x5c2ab8                       ; 004bc2b1 | = "Event debug off"
    JMP 0x004bb4c7                      ; 004bc2b6
        ;   XREF to: 004bb4c7 (UNCONDITIONAL_JUMP)  ; LAB_004bb4c7
    PUSH 0x40a00000                     ; 004bc2bb
        ;   Label: LAB_004bc2bb
    PUSH 0x5c2b18                       ; 004bc2c0 | = "Script debug off"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bc2c5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bc2ca
    PUSH EAX                            ; 004bc2cd
    PUSH EBX                            ; 004bc2ce
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bc2cf
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bc2d4
    MOV EDI,dword ptr [0x005fba1c]      ; 004bc2d7 | DAT_005fba1c
    PUSH EDI                            ; 004bc2dd
    PUSH 0x0                            ; 004bc2de
    PUSH 0x0                            ; 004bc2e0
    MOV EAX,[0x00603b28]                ; 004bc2e2 | g_CDemonSetPtr
    PUSH EAX                            ; 004bc2e7 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x328],0x0     ; 004bc2e8
    JMP 0x004bb5d9                      ; 004bc2f2
        ;   XREF to: 004bb5d9 (UNCONDITIONAL_JUMP)  ; LAB_004bb5d9
    PUSH 0x40a00000                     ; 004bc2f7
        ;   Label: LAB_004bc2f7
    PUSH 0x5c2b7d                       ; 004bc2fc | = "Memory debugging off"
    JMP 0x004bb6b7                      ; 004bc301
        ;   XREF to: 004bb6b7 (UNCONDITIONAL_JUMP)  ; LAB_004bb6b7
    PUSH 0x5c2d63                       ; 004bc306 | DAT_005c2d63
        ;   Label: LAB_004bc306
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc30b
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bc310
    ADD ESP,0x4                         ; 004bc312
    MOV EDI,EAX                         ; 004bc315
    MOV EBX,EAX                         ; 004bc317
    SUB ECX,ECX                         ; 004bc319
    DEC ECX                             ; 004bc31b
    XOR EAX,EAX                         ; 004bc31c
    SCASB.REPNE ES:EDI                  ; 004bc31e
    NOT ECX                             ; 004bc320
    DEC ECX                             ; 004bc322
    MOV dword ptr [ESP + 0x214],ESI     ; 004bc323
    MOV dword ptr [ESP + 0x210],ECX     ; 004bc32a
    TEST ECX,ECX                        ; 004bc331
    JLE 0x004bc372                      ; 004bc333
        ;   XREF to: 004bc372 (CONDITIONAL_JUMP)  ; LAB_004bc372
    MOV EAX,ECX                         ; 004bc335
    MOV ESI,EBX                         ; 004bc337
    NEG EAX                             ; 004bc339
    MOV EBX,ECX                         ; 004bc33b
    ADD ECX,EAX                         ; 004bc33d
    MOV dword ptr [ESP + 0x308],ECX     ; 004bc33f
    XOR EAX,EAX                         ; 004bc346
        ;   Label: LAB_004bc346
    MOV AL,byte ptr [ESI]               ; 004bc348
    PUSH EAX                            ; 004bc34a
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bc34b | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc352
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc357
    CMP EDI,EAX                         ; 004bc35a
    JNZ 0x004bc365                      ; 004bc35c
        ;   XREF to: 004bc365 (CONDITIONAL_JUMP)  ; LAB_004bc365
    INC dword ptr [ESP + 0x214]         ; 004bc35e
    MOV ECX,dword ptr [ESP + 0x308]     ; 004bc365
        ;   Label: LAB_004bc365
    DEC EBX                             ; 004bc36c
    INC ESI                             ; 004bc36d
    CMP EBX,ECX                         ; 004bc36e
    JG 0x004bc346                       ; 004bc370
        ;   XREF to: 004bc346 (CONDITIONAL_JUMP)  ; LAB_004bc346
    MOV EAX,dword ptr [ESP + 0x214]     ; 004bc372
        ;   Label: LAB_004bc372
    CMP EAX,dword ptr [ESP + 0x210]     ; 004bc379
    JNZ 0x004bbcca                      ; 004bc380
        ;   XREF to: 004bbcca (CONDITIONAL_JUMP)  ; LAB_004bbcca
    XOR CH,CH                           ; 004bc386
    MOV byte ptr [0x01d22c70],CH        ; 004bc388 | DAT_01d22c70
    JMP 0x004bbc61                      ; 004bc38e
        ;   XREF to: 004bbc61 (UNCONDITIONAL_JUMP)  ; LAB_004bbc61
    PUSH 0x40a00000                     ; 004bc393
        ;   Label: LAB_004bc393
    PUSH 0x5c2da5                       ; 004bc398 | = "God mode disabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bc39d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bc3a2
    PUSH EAX                            ; 004bc3a5
    PUSH EBX                            ; 004bc3a6
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bc3a7
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bc3ac
    JMP 0x004bbcb4                      ; 004bc3af
        ;   XREF to: 004bbcb4 (UNCONDITIONAL_JUMP)  ; LAB_004bbcb4
    PUSH 0x40a00000                     ; 004bc3b4
        ;   Label: LAB_004bc3b4
    PUSH 0x5c2e07                       ; 004bc3b9 | = "Enemies thawed"
    JMP 0x004bbd6f                      ; 004bc3be
        ;   XREF to: 004bbd6f (UNCONDITIONAL_JUMP)  ; LAB_004bbd6f
    PUSH 0x5c2e58                       ; 004bc3c3 | DAT_005c2e58
        ;   Label: LAB_004bc3c3
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc3c8
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV ESI,EAX                         ; 004bc3cd
    ADD ESP,0x4                         ; 004bc3cf
    XOR EAX,EAX                         ; 004bc3d2
    MOV EDI,ESI                         ; 004bc3d4
    MOV dword ptr [ESP + 0x228],EAX     ; 004bc3d6
    SUB ECX,ECX                         ; 004bc3dd
    DEC ECX                             ; 004bc3df
    XOR EAX,EAX                         ; 004bc3e0
    SCASB.REPNE ES:EDI                  ; 004bc3e2
    NOT ECX                             ; 004bc3e4
    DEC ECX                             ; 004bc3e6
    MOV dword ptr [ESP + 0x224],ECX     ; 004bc3e7
    TEST ECX,ECX                        ; 004bc3ee
    JLE 0x004bc42d                      ; 004bc3f0
        ;   XREF to: 004bc42d (CONDITIONAL_JUMP)  ; LAB_004bc42d
    MOV EAX,ECX                         ; 004bc3f2
    NEG EAX                             ; 004bc3f4
    MOV EBX,ECX                         ; 004bc3f6
    ADD ECX,EAX                         ; 004bc3f8
    MOV dword ptr [ESP + 0x314],ECX     ; 004bc3fa
    XOR EAX,EAX                         ; 004bc401
        ;   Label: LAB_004bc401
    MOV AL,byte ptr [ESI]               ; 004bc403
    PUSH EAX                            ; 004bc405
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bc406 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc40d
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc412
    CMP EDI,EAX                         ; 004bc415
    JNZ 0x004bc420                      ; 004bc417
        ;   XREF to: 004bc420 (CONDITIONAL_JUMP)  ; LAB_004bc420
    INC dword ptr [ESP + 0x228]         ; 004bc419
    MOV ECX,dword ptr [ESP + 0x314]     ; 004bc420
        ;   Label: LAB_004bc420
    DEC EBX                             ; 004bc427
    INC ESI                             ; 004bc428
    CMP EBX,ECX                         ; 004bc429
    JG 0x004bc401                       ; 004bc42b
        ;   XREF to: 004bc401 (CONDITIONAL_JUMP)  ; LAB_004bc401
    MOV EAX,dword ptr [ESP + 0x228]     ; 004bc42d
        ;   Label: LAB_004bc42d
    CMP EAX,dword ptr [ESP + 0x224]     ; 004bc434
    JNZ 0x004bbeed                      ; 004bc43b
        ;   XREF to: 004bbeed (CONDITIONAL_JUMP)  ; LAB_004bbeed
    XOR DL,DL                           ; 004bc441
    MOV byte ptr [0x01d22c70],DL        ; 004bc443 | DAT_01d22c70
    JMP 0x004bbe1c                      ; 004bc449
        ;   XREF to: 004bbe1c (UNCONDITIONAL_JUMP)  ; LAB_004bbe1c
    PUSH 0x1d                           ; 004bc44e
        ;   Label: LAB_004bc44e
    MOV EAX,[0x00600284]                ; 004bc450 | DAT_00600284
    PUSH EAX                            ; 004bc455 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 004bc456 | DAT_01d70a78
    CALL dword ptr [EBX]                ; 004bc458
    ADD ESP,0x8                         ; 004bc45a
    TEST EAX,EAX                        ; 004bc45d
    JZ 0x004bc479                       ; 004bc45f
        ;   XREF to: 004bc479 (CONDITIONAL_JUMP)  ; LAB_004bc479
    PUSH 0x13                           ; 004bc461
    MOV EAX,[0x00600284]                ; 004bc463 | DAT_00600284
    PUSH EAX                            ; 004bc468 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 004bc469 | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 004bc46b
    ADD ESP,0x8                         ; 004bc46e
    TEST EAX,EAX                        ; 004bc471
    JNZ 0x004bc124                      ; 004bc473
        ;   XREF to: 004bc124 (CONDITIONAL_JUMP)  ; LAB_004bc124
    PUSH 0x5c3031                       ; 004bc479 | DAT_005c3031
        ;   Label: LAB_004bc479
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc47e
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bc483
    ADD ESP,0x4                         ; 004bc485
    MOV EDI,EAX                         ; 004bc488
    MOV EBX,EAX                         ; 004bc48a
    SUB ECX,ECX                         ; 004bc48c
    DEC ECX                             ; 004bc48e
    XOR EAX,EAX                         ; 004bc48f
    SCASB.REPNE ES:EDI                  ; 004bc491
    NOT ECX                             ; 004bc493
    DEC ECX                             ; 004bc495
    MOV dword ptr [ESP + 0x244],ESI     ; 004bc496
    MOV dword ptr [ESP + 0x240],ECX     ; 004bc49d
    TEST ECX,ECX                        ; 004bc4a4
    JLE 0x004bc4e5                      ; 004bc4a6
        ;   XREF to: 004bc4e5 (CONDITIONAL_JUMP)  ; LAB_004bc4e5
    MOV EAX,ECX                         ; 004bc4a8
    MOV ESI,EBX                         ; 004bc4aa
    NEG EAX                             ; 004bc4ac
    MOV EBX,ECX                         ; 004bc4ae
    ADD ECX,EAX                         ; 004bc4b0
    MOV dword ptr [ESP + 0x324],ECX     ; 004bc4b2
    XOR EAX,EAX                         ; 004bc4b9
        ;   Label: LAB_004bc4b9
    MOV AL,byte ptr [ESI]               ; 004bc4bb
    PUSH EAX                            ; 004bc4bd
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bc4be | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc4c5
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc4ca
    CMP EDI,EAX                         ; 004bc4cd
    JNZ 0x004bc4d8                      ; 004bc4cf
        ;   XREF to: 004bc4d8 (CONDITIONAL_JUMP)  ; LAB_004bc4d8
    INC dword ptr [ESP + 0x244]         ; 004bc4d1
    MOV EDI,dword ptr [ESP + 0x324]     ; 004bc4d8
        ;   Label: LAB_004bc4d8
    DEC EBX                             ; 004bc4df
    INC ESI                             ; 004bc4e0
    CMP EBX,EDI                         ; 004bc4e1
    JG 0x004bc4b9                       ; 004bc4e3
        ;   XREF to: 004bc4b9 (CONDITIONAL_JUMP)  ; LAB_004bc4b9
    MOV EAX,dword ptr [ESP + 0x244]     ; 004bc4e5
        ;   Label: LAB_004bc4e5
    CMP EAX,dword ptr [ESP + 0x240]     ; 004bc4ec
    JNZ 0x004bc632                      ; 004bc4f3
        ;   XREF to: 004bc632 (CONDITIONAL_JUMP)  ; LAB_004bc632
    PUSH 0x5c3066                       ; 004bc4f9 | = "cheat-1.wav"
    XOR CL,CL                           ; 004bc4fe
    PUSH 0x0                            ; 004bc500
    MOV byte ptr [0x01d22c70],CL        ; 004bc502 | DAT_01d22c70
    MOV ECX,dword ptr [0x006045f8]      ; 004bc508 | DAT_006045f8
    PUSH ECX                            ; 004bc50e
    XOR EBX,EBX                         ; 004bc50f
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bc511
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bc516
    MOV dword ptr [ESP + 0x370],EBX     ; 004bc519
    MOV dword ptr [ESP + 0x328],EBX     ; 004bc520
    MOV EAX,[0x00603b28]                ; 004bc527 | g_CDemonSetPtr
        ;   Label: LAB_004bc527
    MOV EBX,dword ptr [ESP + 0x370]     ; 004bc52c
    CMP EBX,dword ptr [EAX + 0x150fec]  ; 004bc533 | g_CDemonSetInstance.enemy_count
    JGE 0x004bc632                      ; 004bc539
        ;   XREF to: 004bc632 (CONDITIONAL_JUMP)  ; LAB_004bc632
    ADD EAX,dword ptr [ESP + 0x328]     ; 004bc53f
    MOV EBX,dword ptr [EAX + 0x150ff0]  ; 004bc546
    MOV EAX,[0x01d5ba14]                ; 004bc54c | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bc551
    LEA ESI,[EBX + 0x20]                ; 004bc558
    FLD float ptr [EAX + 0x20]          ; 004bc55b
    FSUB float ptr [ESI]                ; 004bc55e
    FSTP float ptr [ESP + 0x1ac]        ; 004bc560
    FLD float ptr [EAX + 0x24]          ; 004bc567
    FSUB float ptr [ESI + 0x4]          ; 004bc56a
    LEA EDI,[ESP + 0x1a0]               ; 004bc56d
    FSTP float ptr [ESP + 0x1b0]        ; 004bc574
    FLD float ptr [EAX + 0x28]          ; 004bc57b
    FSUB float ptr [ESI + 0x8]          ; 004bc57e
    LEA ESI,[ESP + 0x1ac]               ; 004bc581
    FSTP float ptr [ESP + 0x1b4]        ; 004bc588
    MOVSD ES:EDI,ESI                    ; 004bc58f
    MOVSD ES:EDI,ESI                    ; 004bc590
    MOVSD ES:EDI,ESI                    ; 004bc591
    FLD float ptr [ESP + 0x1a4]         ; 004bc592
    FMUL ST0                            ; 004bc599
    FLD float ptr [ESP + 0x1a0]         ; 004bc59b
    FMUL ST0                            ; 004bc5a2
    FADDP                               ; 004bc5a4
    FLD float ptr [ESP + 0x1a8]         ; 004bc5a6
    FMUL ST0                            ; 004bc5ad
    FADDP                               ; 004bc5af
    FSQRT                               ; 004bc5b1
    FCOMP double ptr [0x005c3538]       ; 004bc5b3 | DAT_005c3538
    FNSTSW AX                           ; 004bc5b9
    SAHF                                ; 004bc5bb
    JBE 0x004bc5fc                      ; 004bc5bc
        ;   XREF to: 004bc5fc (CONDITIONAL_JUMP)  ; LAB_004bc5fc
    MOV EAX,dword ptr [ESP + 0x370]     ; 004bc5be
        ;   Label: LAB_004bc5be
    MOV EDI,dword ptr [ESP + 0x328]     ; 004bc5c5
    INC EAX                             ; 004bc5cc
    ADD EDI,0x4                         ; 004bc5cd
    MOV dword ptr [ESP + 0x370],EAX     ; 004bc5d0
    MOV dword ptr [ESP + 0x328],EDI     ; 004bc5d7
    JMP 0x004bc527                      ; 004bc5de
        ;   XREF to: 004bc527 (UNCONDITIONAL_JUMP)  ; LAB_004bc527
    PUSH 0x5fe970                       ; 004bc5e3 | DAT_005fe970
        ;   Label: LAB_004bc5e3
    MOV EBX,dword ptr [0x005fba60]      ; 004bc5e8 | DAT_005fba60
    PUSH EBX                            ; 004bc5ee
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004bc5ef
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004bc5f4
    JMP 0x004bc479                      ; 004bc5f7
        ;   XREF to: 004bc479 (UNCONDITIONAL_JUMP)  ; LAB_004bc479
    LEA EAX,[ESP + 0x164]               ; 004bc5fc
        ;   Label: LAB_004bc5fc
    PUSH EAX                            ; 004bc603
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004bc604
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004bc609
    LEA EAX,[ESP + 0x164]               ; 004bc60c
    MOV ESI,0x42c80000                  ; 004bc613
    PUSH EAX                            ; 004bc618
    MOV dword ptr [ESP + 0x16c],ESI     ; 004bc619
    PUSH EBX                            ; 004bc620
    MOV ESI,dword ptr [EBX + 0x154]     ; 004bc621
    CALL dword ptr [ESI + 0x108]        ; 004bc627
    ADD ESP,0x8                         ; 004bc62d
    JMP 0x004bc5be                      ; 004bc630
        ;   XREF to: 004bc5be (UNCONDITIONAL_JUMP)  ; LAB_004bc5be
    PUSH 0x5c3072                       ; 004bc632 | DAT_005c3072
        ;   Label: LAB_004bc632
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc637
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bc63c
    ADD ESP,0x4                         ; 004bc63e
    MOV EDI,EAX                         ; 004bc641
    MOV EBX,EAX                         ; 004bc643
    SUB ECX,ECX                         ; 004bc645
    DEC ECX                             ; 004bc647
    XOR EAX,EAX                         ; 004bc648
    SCASB.REPNE ES:EDI                  ; 004bc64a
    NOT ECX                             ; 004bc64c
    DEC ECX                             ; 004bc64e
    MOV dword ptr [ESP + 0x248],ECX     ; 004bc64f
    TEST ECX,ECX                        ; 004bc656
    JLE 0x004bc69c                      ; 004bc658
        ;   XREF to: 004bc69c (CONDITIONAL_JUMP)  ; LAB_004bc69c
    MOV EAX,ECX                         ; 004bc65a
    NEG EAX                             ; 004bc65c
    MOV EDI,ECX                         ; 004bc65e
    ADD ECX,EAX                         ; 004bc660
    MOV dword ptr [ESP + 0x32c],ECX     ; 004bc662
    XOR EAX,EAX                         ; 004bc669
        ;   Label: LAB_004bc669
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bc66b | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bc671
    XOR EAX,EAX                         ; 004bc678
    MOV AL,byte ptr [EBX]               ; 004bc67a
    PUSH EAX                            ; 004bc67c
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc67d
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc682
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bc685
    JNZ 0x004bc68f                      ; 004bc68c
        ;   XREF to: 004bc68f (CONDITIONAL_JUMP)  ; LAB_004bc68f
    INC ESI                             ; 004bc68e
    MOV EDX,dword ptr [ESP + 0x32c]     ; 004bc68f
        ;   Label: LAB_004bc68f
    DEC EDI                             ; 004bc696
    INC EBX                             ; 004bc697
    CMP EDI,EDX                         ; 004bc698
    JG 0x004bc669                       ; 004bc69a
        ;   XREF to: 004bc669 (CONDITIONAL_JUMP)  ; LAB_004bc669
    CMP ESI,dword ptr [ESP + 0x248]     ; 004bc69c
        ;   Label: LAB_004bc69c
    JNZ 0x004bc701                      ; 004bc6a3
        ;   XREF to: 004bc701 (CONDITIONAL_JUMP)  ; LAB_004bc701
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bc6a5
    XOR CH,CH                           ; 004bc6a8
    MOV EBX,dword ptr [EAX + 0x204]     ; 004bc6aa
    MOV byte ptr [0x01d22c70],CH        ; 004bc6b0 | DAT_01d22c70
    TEST EBX,EBX                        ; 004bc6b6
    SETZ AL                             ; 004bc6b8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bc6bb
    AND EAX,0xff                        ; 004bc6be
    MOV dword ptr [EBX + 0x204],EAX     ; 004bc6c3
    JZ 0x004bcf7d                       ; 004bc6c9
        ;   XREF to: 004bcf7d (CONDITIONAL_JUMP)  ; LAB_004bcf7d
    PUSH 0x40a00000                     ; 004bc6cf
    PUSH 0x5c30a8                       ; 004bc6d4 | = "Gratuitous dismemberment enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bc6d9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004bc6d9
    ADD ESP,0x4                         ; 004bc6de
    PUSH EAX                            ; 004bc6e1
    PUSH EBX                            ; 004bc6e2
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bc6e3
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bc6e8
    PUSH 0x5c30eb                       ; 004bc6eb | = "cheat-1.wav"
    PUSH 0x0                            ; 004bc6f0
    MOV EDX,dword ptr [0x006045f8]      ; 004bc6f2 | DAT_006045f8
    PUSH EDX                            ; 004bc6f8
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bc6f9
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bc6fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bc701
        ;   Label: LAB_004bc701
    CMP dword ptr [EAX + 0x234],0x0     ; 004bc704
    JZ 0x004bc7e2                       ; 004bc70b
        ;   XREF to: 004bc7e2 (CONDITIONAL_JUMP)  ; LAB_004bc7e2
    PUSH 0x5c30f7                       ; 004bc711 | DAT_005c30f7
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc716
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bc71b
    ADD ESP,0x4                         ; 004bc71d
    MOV EDI,EAX                         ; 004bc720
    MOV EBX,EAX                         ; 004bc722
    SUB ECX,ECX                         ; 004bc724
    DEC ECX                             ; 004bc726
    XOR EAX,EAX                         ; 004bc727
    SCASB.REPNE ES:EDI                  ; 004bc729
    NOT ECX                             ; 004bc72b
    DEC ECX                             ; 004bc72d
    MOV dword ptr [ESP + 0x250],ESI     ; 004bc72e
    MOV dword ptr [ESP + 0x24c],ECX     ; 004bc735
    TEST ECX,ECX                        ; 004bc73c
    JLE 0x004bc77d                      ; 004bc73e
        ;   XREF to: 004bc77d (CONDITIONAL_JUMP)  ; LAB_004bc77d
    MOV EAX,ECX                         ; 004bc740
    MOV ESI,EBX                         ; 004bc742
    NEG EAX                             ; 004bc744
    MOV EBX,ECX                         ; 004bc746
    ADD ECX,EAX                         ; 004bc748
    MOV dword ptr [ESP + 0x330],ECX     ; 004bc74a
    XOR EAX,EAX                         ; 004bc751
        ;   Label: LAB_004bc751
    MOV AL,byte ptr [ESI]               ; 004bc753
    PUSH EAX                            ; 004bc755
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bc756 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc75d
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc762
    CMP EDI,EAX                         ; 004bc765
    JNZ 0x004bc770                      ; 004bc767
        ;   XREF to: 004bc770 (CONDITIONAL_JUMP)  ; LAB_004bc770
    INC dword ptr [ESP + 0x250]         ; 004bc769
    MOV ECX,dword ptr [ESP + 0x330]     ; 004bc770
        ;   Label: LAB_004bc770
    DEC EBX                             ; 004bc777
    INC ESI                             ; 004bc778
    CMP EBX,ECX                         ; 004bc779
    JG 0x004bc751                       ; 004bc77b
        ;   XREF to: 004bc751 (CONDITIONAL_JUMP)  ; LAB_004bc751
    MOV EAX,dword ptr [ESP + 0x250]     ; 004bc77d
        ;   Label: LAB_004bc77d
    MOV EBX,dword ptr [ESP + 0x24c]     ; 004bc784
    CMP EAX,EBX                         ; 004bc78b
    JNZ 0x004bc7e2                      ; 004bc78d
        ;   XREF to: 004bc7e2 (CONDITIONAL_JUMP)  ; LAB_004bc7e2
    PUSH 0x5c3129                       ; 004bc78f | = "cheat-1.wav"
    PUSH 0x0                            ; 004bc794
    MOV ESI,dword ptr [0x006045f8]      ; 004bc796 | DAT_006045f8
    XOR AL,BL                           ; 004bc79c
    PUSH ESI                            ; 004bc79e
    MOV [0x01d22c70],AL                 ; 004bc79f | DAT_01d22c70
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bc7a4
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bc7a9
    PUSH 0x1                            ; 004bc7ac
    PUSH 0x40800000                     ; 004bc7ae
    PUSH 0x3c23d70a                     ; 004bc7b3
    PUSH 0x1                            ; 004bc7b8
    MOV EDI,dword ptr [ESP + 0x264]     ; 004bc7ba
    PUSH EDI                            ; 004bc7c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bc7c2
    PUSH 0x5c3135                       ; 004bc7c5 | = "Enter time factor"
    MOV dword ptr [EAX + 0x288],0x2     ; 004bc7ca
    MOV EAX,[0x005fb140]                ; 004bc7d4 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bc7d9
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10 ; 004bc7da
        ;   XREF to: 0047ea10 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004bc7df
    PUSH 0x5c3147                       ; 004bc7e2 | DAT_005c3147
        ;   Label: LAB_004bc7e2
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc7e7
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bc7ec
    ADD ESP,0x4                         ; 004bc7ee
    MOV EDI,EAX                         ; 004bc7f1
    MOV EBX,EAX                         ; 004bc7f3
    SUB ECX,ECX                         ; 004bc7f5
    DEC ECX                             ; 004bc7f7
    XOR EAX,EAX                         ; 004bc7f8
    SCASB.REPNE ES:EDI                  ; 004bc7fa
    NOT ECX                             ; 004bc7fc
    DEC ECX                             ; 004bc7fe
    MOV dword ptr [ESP + 0x258],ECX     ; 004bc7ff
    TEST ECX,ECX                        ; 004bc806
    JLE 0x004bc84c                      ; 004bc808
        ;   XREF to: 004bc84c (CONDITIONAL_JUMP)  ; LAB_004bc84c
    MOV EAX,ECX                         ; 004bc80a
    NEG EAX                             ; 004bc80c
    MOV EDI,ECX                         ; 004bc80e
    ADD ECX,EAX                         ; 004bc810
    MOV dword ptr [ESP + 0x334],ECX     ; 004bc812
    XOR EAX,EAX                         ; 004bc819
        ;   Label: LAB_004bc819
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bc81b | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bc821
    XOR EAX,EAX                         ; 004bc828
    MOV AL,byte ptr [EBX]               ; 004bc82a
    PUSH EAX                            ; 004bc82c
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc82d
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc832
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bc835
    JNZ 0x004bc83f                      ; 004bc83c
        ;   XREF to: 004bc83f (CONDITIONAL_JUMP)  ; LAB_004bc83f
    INC ESI                             ; 004bc83e
    MOV ECX,dword ptr [ESP + 0x334]     ; 004bc83f
        ;   Label: LAB_004bc83f
    DEC EDI                             ; 004bc846
    INC EBX                             ; 004bc847
    CMP EDI,ECX                         ; 004bc848
    JG 0x004bc819                       ; 004bc84a
        ;   XREF to: 004bc819 (CONDITIONAL_JUMP)  ; LAB_004bc819
    CMP ESI,dword ptr [ESP + 0x258]     ; 004bc84c
        ;   Label: LAB_004bc84c
    JNZ 0x004bc88e                      ; 004bc853
        ;   XREF to: 004bc88e (CONDITIONAL_JUMP)  ; LAB_004bc88e
    PUSH 0x5c317a                       ; 004bc855 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bc85a
    MOV ESI,dword ptr [0x006045f8]      ; 004bc85c | DAT_006045f8
    XOR AH,AH                           ; 004bc862
    PUSH ESI                            ; 004bc864
    MOV byte ptr [0x01d22c70],AH        ; 004bc865 | DAT_01d22c70
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bc86b
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bc870
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bc873
    CMP dword ptr [EAX + 0x214],0x0     ; 004bc876
    SETZ AL                             ; 004bc87d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bc880
    AND EAX,0xff                        ; 004bc883
    MOV dword ptr [EBX + 0x214],EAX     ; 004bc888
    PUSH 0x5c3186                       ; 004bc88e | DAT_005c3186
        ;   Label: LAB_004bc88e
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc893
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bc898
    ADD ESP,0x4                         ; 004bc89a
    MOV EDI,EAX                         ; 004bc89d
    MOV EBX,EAX                         ; 004bc89f
    SUB ECX,ECX                         ; 004bc8a1
    DEC ECX                             ; 004bc8a3
    XOR EAX,EAX                         ; 004bc8a4
    SCASB.REPNE ES:EDI                  ; 004bc8a6
    NOT ECX                             ; 004bc8a8
    DEC ECX                             ; 004bc8aa
    MOV dword ptr [ESP + 0x25c],ECX     ; 004bc8ab
    TEST ECX,ECX                        ; 004bc8b2
    JLE 0x004bc8f8                      ; 004bc8b4
        ;   XREF to: 004bc8f8 (CONDITIONAL_JUMP)  ; LAB_004bc8f8
    MOV EAX,ECX                         ; 004bc8b6
    NEG EAX                             ; 004bc8b8
    MOV EDI,ECX                         ; 004bc8ba
    ADD ECX,EAX                         ; 004bc8bc
    MOV dword ptr [ESP + 0x338],ECX     ; 004bc8be
    XOR EAX,EAX                         ; 004bc8c5
        ;   Label: LAB_004bc8c5
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bc8c7 | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bc8cd
    XOR EAX,EAX                         ; 004bc8d4
    MOV AL,byte ptr [EBX]               ; 004bc8d6
    PUSH EAX                            ; 004bc8d8
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc8d9
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc8de
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bc8e1
    JNZ 0x004bc8eb                      ; 004bc8e8
        ;   XREF to: 004bc8eb (CONDITIONAL_JUMP)  ; LAB_004bc8eb
    INC ESI                             ; 004bc8ea
    MOV ECX,dword ptr [ESP + 0x338]     ; 004bc8eb
        ;   Label: LAB_004bc8eb
    DEC EDI                             ; 004bc8f2
    INC EBX                             ; 004bc8f3
    CMP EDI,ECX                         ; 004bc8f4
    JG 0x004bc8c5                       ; 004bc8f6
        ;   XREF to: 004bc8c5 (CONDITIONAL_JUMP)  ; LAB_004bc8c5
    CMP ESI,dword ptr [ESP + 0x25c]     ; 004bc8f8
        ;   Label: LAB_004bc8f8
    JNZ 0x004bc93a                      ; 004bc8ff
        ;   XREF to: 004bc93a (CONDITIONAL_JUMP)  ; LAB_004bc93a
    PUSH 0x5c31b9                       ; 004bc901 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bc906
    MOV ESI,dword ptr [0x006045f8]      ; 004bc908 | DAT_006045f8
    XOR DL,DL                           ; 004bc90e
    PUSH ESI                            ; 004bc910
    MOV byte ptr [0x01d22c70],DL        ; 004bc911 | DAT_01d22c70
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bc917
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bc91c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bc91f
    CMP dword ptr [EAX + 0x218],0x0     ; 004bc922
    SETZ AL                             ; 004bc929
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bc92c
    AND EAX,0xff                        ; 004bc92f
    MOV dword ptr [EBX + 0x218],EAX     ; 004bc934
    PUSH 0x5c31c5                       ; 004bc93a | DAT_005c31c5
        ;   Label: LAB_004bc93a
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bc93f
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bc944
    ADD ESP,0x4                         ; 004bc946
    MOV EDI,EAX                         ; 004bc949
    MOV EBX,EAX                         ; 004bc94b
    SUB ECX,ECX                         ; 004bc94d
    DEC ECX                             ; 004bc94f
    XOR EAX,EAX                         ; 004bc950
    SCASB.REPNE ES:EDI                  ; 004bc952
    NOT ECX                             ; 004bc954
    DEC ECX                             ; 004bc956
    MOV dword ptr [ESP + 0x260],ECX     ; 004bc957
    TEST ECX,ECX                        ; 004bc95e
    JLE 0x004bc9a4                      ; 004bc960
        ;   XREF to: 004bc9a4 (CONDITIONAL_JUMP)  ; LAB_004bc9a4
    MOV EAX,ECX                         ; 004bc962
    NEG EAX                             ; 004bc964
    MOV EDI,ECX                         ; 004bc966
    ADD ECX,EAX                         ; 004bc968
    MOV dword ptr [ESP + 0x33c],ECX     ; 004bc96a
    XOR EAX,EAX                         ; 004bc971
        ;   Label: LAB_004bc971
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bc973 | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bc979
    XOR EAX,EAX                         ; 004bc980
    MOV AL,byte ptr [EBX]               ; 004bc982
    PUSH EAX                            ; 004bc984
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bc985
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bc98a
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bc98d
    JNZ 0x004bc997                      ; 004bc994
        ;   XREF to: 004bc997 (CONDITIONAL_JUMP)  ; LAB_004bc997
    INC ESI                             ; 004bc996
    MOV ECX,dword ptr [ESP + 0x33c]     ; 004bc997
        ;   Label: LAB_004bc997
    DEC EDI                             ; 004bc99e
    INC EBX                             ; 004bc99f
    CMP EDI,ECX                         ; 004bc9a0
    JG 0x004bc971                       ; 004bc9a2
        ;   XREF to: 004bc971 (CONDITIONAL_JUMP)  ; LAB_004bc971
    CMP ESI,dword ptr [ESP + 0x260]     ; 004bc9a4
        ;   Label: LAB_004bc9a4
    JNZ 0x004bca17                      ; 004bc9ab
        ;   XREF to: 004bca17 (CONDITIONAL_JUMP)  ; LAB_004bca17
    MOV EAX,[0x01d5ba14]                ; 004bc9ad | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bc9b2
    XOR DH,DH                           ; 004bc9b9
    MOV EBX,dword ptr [EAX + 0x20a20]   ; 004bc9bb
    MOV byte ptr [0x01d22c70],DH        ; 004bc9c1 | DAT_01d22c70
    TEST EBX,EBX                        ; 004bc9c7
    JZ 0x004bca01                       ; 004bc9c9
        ;   XREF to: 004bca01 (CONDITIONAL_JUMP)  ; LAB_004bca01
    CMP dword ptr [EBX + 0x56c],0x5     ; 004bc9cb
    JNZ 0x004bcf8c                      ; 004bc9d2
        ;   XREF to: 004bcf8c (CONDITIONAL_JUMP)  ; LAB_004bcf8c
    PUSH 0x40a00000                     ; 004bc9d8
    PUSH 0x5c31ff                       ; 004bc9dd | = "Flaming ammo disabled"
    MOV dword ptr [EBX + 0x56c],0x0     ; 004bc9e2
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bc9ec
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bc9f1
    PUSH EAX                            ; 004bc9f4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004bc9f5
    PUSH EDX                            ; 004bc9f8
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bc9f9
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
        ;   Label: LAB_004bc9f9
    ADD ESP,0xc                         ; 004bc9fe
    PUSH 0x5c3264                       ; 004bca01 | = "cheat-1.wav"
        ;   Label: LAB_004bca01
    PUSH 0x0                            ; 004bca06
    MOV ECX,dword ptr [0x006045f8]      ; 004bca08 | DAT_006045f8
    PUSH ECX                            ; 004bca0e
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bca0f
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bca14
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bca17
        ;   Label: LAB_004bca17
    CMP dword ptr [EAX + 0x234],0x0     ; 004bca1a
    JZ 0x004bcad3                       ; 004bca21
        ;   XREF to: 004bcad3 (CONDITIONAL_JUMP)  ; LAB_004bcad3
    PUSH 0x5c3270                       ; 004bca27 | DAT_005c3270
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bca2c
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bca31
    ADD ESP,0x4                         ; 004bca33
    MOV EDI,EAX                         ; 004bca36
    MOV EBX,EAX                         ; 004bca38
    SUB ECX,ECX                         ; 004bca3a
    DEC ECX                             ; 004bca3c
    XOR EAX,EAX                         ; 004bca3d
    SCASB.REPNE ES:EDI                  ; 004bca3f
    NOT ECX                             ; 004bca41
    DEC ECX                             ; 004bca43
    MOV dword ptr [ESP + 0x268],ESI     ; 004bca44
    MOV dword ptr [ESP + 0x264],ECX     ; 004bca4b
    TEST ECX,ECX                        ; 004bca52
    JLE 0x004bca93                      ; 004bca54
        ;   XREF to: 004bca93 (CONDITIONAL_JUMP)  ; LAB_004bca93
    MOV EAX,ECX                         ; 004bca56
    MOV ESI,EBX                         ; 004bca58
    NEG EAX                             ; 004bca5a
    MOV EBX,ECX                         ; 004bca5c
    ADD ECX,EAX                         ; 004bca5e
    MOV dword ptr [ESP + 0x340],ECX     ; 004bca60
    XOR EAX,EAX                         ; 004bca67
        ;   Label: LAB_004bca67
    MOV AL,byte ptr [ESI]               ; 004bca69
    PUSH EAX                            ; 004bca6b
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bca6c | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bca73
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bca78
    CMP EDI,EAX                         ; 004bca7b
    JNZ 0x004bca86                      ; 004bca7d
        ;   XREF to: 004bca86 (CONDITIONAL_JUMP)  ; LAB_004bca86
    INC dword ptr [ESP + 0x268]         ; 004bca7f
    MOV ECX,dword ptr [ESP + 0x340]     ; 004bca86
        ;   Label: LAB_004bca86
    DEC EBX                             ; 004bca8d
    INC ESI                             ; 004bca8e
    CMP EBX,ECX                         ; 004bca8f
    JG 0x004bca67                       ; 004bca91
        ;   XREF to: 004bca67 (CONDITIONAL_JUMP)  ; LAB_004bca67
    MOV EAX,dword ptr [ESP + 0x268]     ; 004bca93
        ;   Label: LAB_004bca93
    CMP EAX,dword ptr [ESP + 0x264]     ; 004bca9a
    JNZ 0x004bcad3                      ; 004bcaa1
        ;   XREF to: 004bcad3 (CONDITIONAL_JUMP)  ; LAB_004bcad3
    PUSH 0xff00ff                       ; 004bcaa3
    XOR BL,BL                           ; 004bcaa8
    PUSH 0x2038f4c                      ; 004bcaaa
    MOV byte ptr [0x01d22c70],BL        ; 004bcaaf | DAT_01d22c70
    CALL core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00450a40 ; 004bcab5
        ;   XREF to: 00450a40 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00450a40(CDemonCamera * this_ptr, int clear_color)
    ADD ESP,0x8                         ; 004bcaba
    PUSH 0x5c32a3                       ; 004bcabd | = "cheat-1.wav"
    PUSH 0x0                            ; 004bcac2
    MOV ESI,dword ptr [0x006045f8]      ; 004bcac4 | DAT_006045f8
    PUSH ESI                            ; 004bcaca
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bcacb
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bcad0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bcad3
        ;   Label: LAB_004bcad3
    CMP dword ptr [EAX + 0x234],0x0     ; 004bcad6
    JZ 0x004bcb85                       ; 004bcadd
        ;   XREF to: 004bcb85 (CONDITIONAL_JUMP)  ; LAB_004bcb85
    PUSH 0x5c32af                       ; 004bcae3 | DAT_005c32af
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bcae8
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bcaed
    ADD ESP,0x4                         ; 004bcaef
    XOR ECX,ECX                         ; 004bcaf2
    MOV EDI,EAX                         ; 004bcaf4
    MOV dword ptr [ESP + 0x270],ECX     ; 004bcaf6
    SUB ECX,ECX                         ; 004bcafd
    DEC ECX                             ; 004bcaff
    XOR EAX,EAX                         ; 004bcb00
    SCASB.REPNE ES:EDI                  ; 004bcb02
    NOT ECX                             ; 004bcb04
    DEC ECX                             ; 004bcb06
    MOV dword ptr [ESP + 0x26c],ECX     ; 004bcb07
    TEST ECX,ECX                        ; 004bcb0e
    JLE 0x004bcb4f                      ; 004bcb10
        ;   XREF to: 004bcb4f (CONDITIONAL_JUMP)  ; LAB_004bcb4f
    MOV EAX,ECX                         ; 004bcb12
    MOV ESI,EBX                         ; 004bcb14
    NEG EAX                             ; 004bcb16
    MOV EBX,ECX                         ; 004bcb18
    ADD ECX,EAX                         ; 004bcb1a
    MOV dword ptr [ESP + 0x344],ECX     ; 004bcb1c
    XOR EAX,EAX                         ; 004bcb23
        ;   Label: LAB_004bcb23
    MOV AL,byte ptr [ESI]               ; 004bcb25
    PUSH EAX                            ; 004bcb27
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bcb28 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bcb2f
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bcb34
    CMP EDI,EAX                         ; 004bcb37
    JNZ 0x004bcb42                      ; 004bcb39
        ;   XREF to: 004bcb42 (CONDITIONAL_JUMP)  ; LAB_004bcb42
    INC dword ptr [ESP + 0x270]         ; 004bcb3b
    MOV EDI,dword ptr [ESP + 0x344]     ; 004bcb42
        ;   Label: LAB_004bcb42
    DEC EBX                             ; 004bcb49
    INC ESI                             ; 004bcb4a
    CMP EBX,EDI                         ; 004bcb4b
    JG 0x004bcb23                       ; 004bcb4d
        ;   XREF to: 004bcb23 (CONDITIONAL_JUMP)  ; LAB_004bcb23
    MOV EAX,dword ptr [ESP + 0x270]     ; 004bcb4f
        ;   Label: LAB_004bcb4f
    CMP EAX,dword ptr [ESP + 0x26c]     ; 004bcb56
    JNZ 0x004bcb85                      ; 004bcb5d
        ;   XREF to: 004bcb85 (CONDITIONAL_JUMP)  ; LAB_004bcb85
    PUSH 0x0                            ; 004bcb5f
    MOV EAX,[0x00603b28]                ; 004bcb61 | g_CDemonSetPtr
    XOR BH,BH                           ; 004bcb66
    PUSH 0x2038f4c                      ; 004bcb68
    MOV byte ptr [0x01d22c70],BH        ; 004bcb6d | DAT_01d22c70
    MOV dword ptr [EAX + 0x14d150],0x0  ; 004bcb73 | g_CDemonSetInstance.min_ambient_value
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680 ; 004bcb7d
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 004bcb82
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bcb85
        ;   Label: LAB_004bcb85
    CMP dword ptr [EAX + 0x234],0x0     ; 004bcb88
    JZ 0x004bcc56                       ; 004bcb8f
        ;   XREF to: 004bcc56 (CONDITIONAL_JUMP)  ; LAB_004bcc56
    PUSH 0x5c32e1                       ; 004bcb95 | DAT_005c32e1
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bcb9a
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bcb9f
    ADD ESP,0x4                         ; 004bcba1
    MOV EDI,EAX                         ; 004bcba4
    MOV EBX,EAX                         ; 004bcba6
    SUB ECX,ECX                         ; 004bcba8
    DEC ECX                             ; 004bcbaa
    XOR EAX,EAX                         ; 004bcbab
    SCASB.REPNE ES:EDI                  ; 004bcbad
    NOT ECX                             ; 004bcbaf
    DEC ECX                             ; 004bcbb1
    MOV dword ptr [ESP + 0x278],ESI     ; 004bcbb2
    MOV dword ptr [ESP + 0x274],ECX     ; 004bcbb9
    TEST ECX,ECX                        ; 004bcbc0
    JLE 0x004bcc01                      ; 004bcbc2
        ;   XREF to: 004bcc01 (CONDITIONAL_JUMP)  ; LAB_004bcc01
    MOV EAX,ECX                         ; 004bcbc4
    MOV ESI,EBX                         ; 004bcbc6
    NEG EAX                             ; 004bcbc8
    MOV EBX,ECX                         ; 004bcbca
    ADD ECX,EAX                         ; 004bcbcc
    MOV dword ptr [ESP + 0x348],ECX     ; 004bcbce
    XOR EAX,EAX                         ; 004bcbd5
        ;   Label: LAB_004bcbd5
    MOV AL,byte ptr [ESI]               ; 004bcbd7
    PUSH EAX                            ; 004bcbd9
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bcbda | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bcbe1
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bcbe6
    CMP EDI,EAX                         ; 004bcbe9
    JNZ 0x004bcbf4                      ; 004bcbeb
        ;   XREF to: 004bcbf4 (CONDITIONAL_JUMP)  ; LAB_004bcbf4
    INC dword ptr [ESP + 0x278]         ; 004bcbed
    MOV EDI,dword ptr [ESP + 0x348]     ; 004bcbf4
        ;   Label: LAB_004bcbf4
    DEC EBX                             ; 004bcbfb
    INC ESI                             ; 004bcbfc
    CMP EBX,EDI                         ; 004bcbfd
    JG 0x004bcbd5                       ; 004bcbff
        ;   XREF to: 004bcbd5 (CONDITIONAL_JUMP)  ; LAB_004bcbd5
    MOV EAX,dword ptr [ESP + 0x278]     ; 004bcc01
        ;   Label: LAB_004bcc01
    CMP EAX,dword ptr [ESP + 0x274]     ; 004bcc08
    JNZ 0x004bcc56                      ; 004bcc0f
        ;   XREF to: 004bcc56 (CONDITIONAL_JUMP)  ; LAB_004bcc56
    XOR CL,CL                           ; 004bcc11
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bcc13
    MOV byte ptr [0x01d22c70],CL        ; 004bcc16 | DAT_01d22c70
    CMP dword ptr [EAX + 0x224],0x0     ; 004bcc1c
    SETZ AL                             ; 004bcc23
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bcc26
    AND EAX,0xff                        ; 004bcc29
    MOV dword ptr [EBX + 0x224],EAX     ; 004bcc2e
    JZ 0x004bcfe0                       ; 004bcc34
        ;   XREF to: 004bcfe0 (CONDITIONAL_JUMP)  ; LAB_004bcfe0
    PUSH 0x40a00000                     ; 004bcc3a
    PUSH 0x5c3313                       ; 004bcc3f | = "Single step enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bcc44
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004bcc44
    ADD ESP,0x4                         ; 004bcc49
    PUSH EAX                            ; 004bcc4c
    PUSH EBX                            ; 004bcc4d
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bcc4e
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bcc53
    PUSH 0x5c333c                       ; 004bcc56 | DAT_005c333c
        ;   Label: LAB_004bcc56
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bcc5b
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bcc60
    ADD ESP,0x4                         ; 004bcc62
    MOV EDI,EAX                         ; 004bcc65
    MOV EBX,EAX                         ; 004bcc67
    SUB ECX,ECX                         ; 004bcc69
    DEC ECX                             ; 004bcc6b
    XOR EAX,EAX                         ; 004bcc6c
    SCASB.REPNE ES:EDI                  ; 004bcc6e
    NOT ECX                             ; 004bcc70
    DEC ECX                             ; 004bcc72
    MOV dword ptr [ESP + 0x27c],ECX     ; 004bcc73
    TEST ECX,ECX                        ; 004bcc7a
    JLE 0x004bccc0                      ; 004bcc7c
        ;   XREF to: 004bccc0 (CONDITIONAL_JUMP)  ; LAB_004bccc0
    MOV EAX,ECX                         ; 004bcc7e
    NEG EAX                             ; 004bcc80
    MOV EDI,ECX                         ; 004bcc82
    ADD ECX,EAX                         ; 004bcc84
    MOV dword ptr [ESP + 0x34c],ECX     ; 004bcc86
    XOR EAX,EAX                         ; 004bcc8d
        ;   Label: LAB_004bcc8d
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bcc8f | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bcc95
    XOR EAX,EAX                         ; 004bcc9c
    MOV AL,byte ptr [EBX]               ; 004bcc9e
    PUSH EAX                            ; 004bcca0
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bcca1
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bcca6
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bcca9
    JNZ 0x004bccb3                      ; 004bccb0
        ;   XREF to: 004bccb3 (CONDITIONAL_JUMP)  ; LAB_004bccb3
    INC ESI                             ; 004bccb2
    MOV EDX,dword ptr [ESP + 0x34c]     ; 004bccb3
        ;   Label: LAB_004bccb3
    DEC EDI                             ; 004bccba
    INC EBX                             ; 004bccbb
    CMP EDI,EDX                         ; 004bccbc
    JG 0x004bcc8d                       ; 004bccbe
        ;   XREF to: 004bcc8d (CONDITIONAL_JUMP)  ; LAB_004bcc8d
    CMP ESI,dword ptr [ESP + 0x27c]     ; 004bccc0
        ;   Label: LAB_004bccc0
    JNZ 0x004bcd1c                      ; 004bccc7
        ;   XREF to: 004bcd1c (CONDITIONAL_JUMP)  ; LAB_004bcd1c
    MOV EAX,[0x01d5ba14]                ; 004bccc9 | DAT_01d5ba14
    PUSH 0x40a00000                     ; 004bccce
    XOR CH,CH                           ; 004bccd3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bccd5
    PUSH 0x5c3372                       ; 004bccdc | = "Flashlight battery restored"
    MOV byte ptr [0x01d22c70],CH        ; 004bcce1 | DAT_01d22c70
    MOV dword ptr [EAX + 0x206e8],0x42c80000 ; 004bcce7
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bccf1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bccf6
    PUSH EAX                            ; 004bccf9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bccfa
    PUSH EBX                            ; 004bccfd
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bccfe
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bcd03
    PUSH 0x5c338e                       ; 004bcd06 | = "cheat-1.wav"
    PUSH 0x0                            ; 004bcd0b
    MOV ESI,dword ptr [0x006045f8]      ; 004bcd0d | DAT_006045f8
    PUSH ESI                            ; 004bcd13
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bcd14
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004bcd19
    PUSH 0x5c339a                       ; 004bcd1c | DAT_005c339a
        ;   Label: LAB_004bcd1c
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bcd21
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bcd26
    ADD ESP,0x4                         ; 004bcd28
    MOV EDI,EAX                         ; 004bcd2b
    MOV EBX,EAX                         ; 004bcd2d
    SUB ECX,ECX                         ; 004bcd2f
    DEC ECX                             ; 004bcd31
    XOR EAX,EAX                         ; 004bcd32
    SCASB.REPNE ES:EDI                  ; 004bcd34
    NOT ECX                             ; 004bcd36
    DEC ECX                             ; 004bcd38
    MOV dword ptr [ESP + 0x280],ECX     ; 004bcd39
    TEST ECX,ECX                        ; 004bcd40
    JLE 0x004bcd86                      ; 004bcd42
        ;   XREF to: 004bcd86 (CONDITIONAL_JUMP)  ; LAB_004bcd86
    MOV EAX,ECX                         ; 004bcd44
    NEG EAX                             ; 004bcd46
    MOV EDI,ECX                         ; 004bcd48
    ADD ECX,EAX                         ; 004bcd4a
    MOV dword ptr [ESP + 0x350],ECX     ; 004bcd4c
    XOR EAX,EAX                         ; 004bcd53
        ;   Label: LAB_004bcd53
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bcd55 | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bcd5b
    XOR EAX,EAX                         ; 004bcd62
    MOV AL,byte ptr [EBX]               ; 004bcd64
    PUSH EAX                            ; 004bcd66
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bcd67
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bcd6c
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bcd6f
    JNZ 0x004bcd79                      ; 004bcd76
        ;   XREF to: 004bcd79 (CONDITIONAL_JUMP)  ; LAB_004bcd79
    INC ESI                             ; 004bcd78
    MOV ECX,dword ptr [ESP + 0x350]     ; 004bcd79
        ;   Label: LAB_004bcd79
    DEC EDI                             ; 004bcd80
    INC EBX                             ; 004bcd81
    CMP EDI,ECX                         ; 004bcd82
    JG 0x004bcd53                       ; 004bcd84
        ;   XREF to: 004bcd53 (CONDITIONAL_JUMP)  ; LAB_004bcd53
    CMP ESI,dword ptr [ESP + 0x280]     ; 004bcd86
        ;   Label: LAB_004bcd86
    JNZ 0x004bcda7                      ; 004bcd8d
        ;   XREF to: 004bcda7 (CONDITIONAL_JUMP)  ; LAB_004bcda7
    PUSH 0x1                            ; 004bcd8f
    MOV ESI,dword ptr [0x006071f0]      ; 004bcd91 | DAT_006071f0
    XOR AL,AL                           ; 004bcd97
    PUSH ESI                            ; 004bcd99
    MOV [0x01d22c70],AL                 ; 004bcd9a | DAT_01d22c70
    CALL core_weather.cpp_FUN_0057d050  ; 004bcd9f
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d050()
    ADD ESP,0x8                         ; 004bcda4
    PUSH 0x5c33d4                       ; 004bcda7 | DAT_005c33d4
        ;   Label: LAB_004bcda7
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bcdac
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR ESI,ESI                         ; 004bcdb1
    ADD ESP,0x4                         ; 004bcdb3
    MOV EDI,EAX                         ; 004bcdb6
    MOV EBX,EAX                         ; 004bcdb8
    SUB ECX,ECX                         ; 004bcdba
    DEC ECX                             ; 004bcdbc
    XOR EAX,EAX                         ; 004bcdbd
    SCASB.REPNE ES:EDI                  ; 004bcdbf
    NOT ECX                             ; 004bcdc1
    DEC ECX                             ; 004bcdc3
    MOV dword ptr [ESP + 0x284],ECX     ; 004bcdc4
    TEST ECX,ECX                        ; 004bcdcb
    JLE 0x004bce11                      ; 004bcdcd
        ;   XREF to: 004bce11 (CONDITIONAL_JUMP)  ; LAB_004bce11
    MOV EAX,ECX                         ; 004bcdcf
    NEG EAX                             ; 004bcdd1
    MOV EDI,ECX                         ; 004bcdd3
    ADD ECX,EAX                         ; 004bcdd5
    MOV dword ptr [ESP + 0x354],ECX     ; 004bcdd7
    XOR EAX,EAX                         ; 004bcdde
        ;   Label: LAB_004bcdde
    MOV AL,byte ptr [EDI + 0x1d22c6f]   ; 004bcde0 | DAT_01d22c70
    MOV dword ptr [ESP + 0x374],EAX     ; 004bcde6
    XOR EAX,EAX                         ; 004bcded
    MOV AL,byte ptr [EBX]               ; 004bcdef
    PUSH EAX                            ; 004bcdf1
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bcdf2
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bcdf7
    CMP EAX,dword ptr [ESP + 0x374]     ; 004bcdfa
    JNZ 0x004bce04                      ; 004bce01
        ;   XREF to: 004bce04 (CONDITIONAL_JUMP)  ; LAB_004bce04
    INC ESI                             ; 004bce03
    MOV ECX,dword ptr [ESP + 0x354]     ; 004bce04
        ;   Label: LAB_004bce04
    DEC EDI                             ; 004bce0b
    INC EBX                             ; 004bce0c
    CMP EDI,ECX                         ; 004bce0d
    JG 0x004bcdde                       ; 004bce0f
        ;   XREF to: 004bcdde (CONDITIONAL_JUMP)  ; LAB_004bcdde
    CMP ESI,dword ptr [ESP + 0x284]     ; 004bce11
        ;   Label: LAB_004bce11
    JNZ 0x004bce33                      ; 004bce18
        ;   XREF to: 004bce33 (CONDITIONAL_JUMP)  ; LAB_004bce33
    PUSH 0x2                            ; 004bce1a
    MOV ESI,dword ptr [0x006071f0]      ; 004bce1c | DAT_006071f0
    XOR AH,AH                           ; 004bce22
    PUSH ESI                            ; 004bce24
    MOV byte ptr [0x01d22c70],AH        ; 004bce25 | DAT_01d22c70
    CALL core_weather.cpp_FUN_0057d050  ; 004bce2b
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d050()
    ADD ESP,0x8                         ; 004bce30
    PUSH 0x5c340b                       ; 004bce33 | DAT_005c340b
        ;   Label: LAB_004bce33
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bce38
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR EDI,EDI                         ; 004bce3d
    ADD ESP,0x4                         ; 004bce3f
    MOV dword ptr [ESP + 0x28c],EDI     ; 004bce42
    MOV EDI,EAX                         ; 004bce49
    MOV EBX,EAX                         ; 004bce4b
    SUB ECX,ECX                         ; 004bce4d
    DEC ECX                             ; 004bce4f
    XOR EAX,EAX                         ; 004bce50
    SCASB.REPNE ES:EDI                  ; 004bce52
    NOT ECX                             ; 004bce54
    DEC ECX                             ; 004bce56
    MOV dword ptr [ESP + 0x288],ECX     ; 004bce57
    TEST ECX,ECX                        ; 004bce5e
    JLE 0x004bce9f                      ; 004bce60
        ;   XREF to: 004bce9f (CONDITIONAL_JUMP)  ; LAB_004bce9f
    MOV EAX,ECX                         ; 004bce62
    MOV ESI,EBX                         ; 004bce64
    NEG EAX                             ; 004bce66
    MOV EBX,ECX                         ; 004bce68
    ADD ECX,EAX                         ; 004bce6a
    MOV dword ptr [ESP + 0x358],ECX     ; 004bce6c
    XOR EAX,EAX                         ; 004bce73
        ;   Label: LAB_004bce73
    MOV AL,byte ptr [ESI]               ; 004bce75
    PUSH EAX                            ; 004bce77
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bce78 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bce7f
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bce84
    CMP EDI,EAX                         ; 004bce87
    JNZ 0x004bce92                      ; 004bce89
        ;   XREF to: 004bce92 (CONDITIONAL_JUMP)  ; LAB_004bce92
    INC dword ptr [ESP + 0x28c]         ; 004bce8b
    MOV ECX,dword ptr [ESP + 0x358]     ; 004bce92
        ;   Label: LAB_004bce92
    DEC EBX                             ; 004bce99
    INC ESI                             ; 004bce9a
    CMP EBX,ECX                         ; 004bce9b
    JG 0x004bce73                       ; 004bce9d
        ;   XREF to: 004bce73 (CONDITIONAL_JUMP)  ; LAB_004bce73
    MOV EAX,dword ptr [ESP + 0x28c]     ; 004bce9f
        ;   Label: LAB_004bce9f
    CMP EAX,dword ptr [ESP + 0x288]     ; 004bcea6
    JNZ 0x004bd216                      ; 004bcead
        ;   XREF to: 004bd216 (CONDITIONAL_JUMP)  ; LAB_004bd216
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bceb3
    XOR DL,DL                           ; 004bceb6
    MOV ESI,dword ptr [EAX + 0x228]     ; 004bceb8
    MOV byte ptr [0x01d22c70],DL        ; 004bcebe | DAT_01d22c70
    TEST ESI,ESI                        ; 004bcec4
    SETZ AL                             ; 004bcec6
    MOV EDI,0x3e800000                  ; 004bcec9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bcece
    MOV dword ptr [ESP + 0x290],EDI     ; 004bced1
    AND EAX,0xff                        ; 004bced8
    MOV dword ptr [EBX + 0x228],EAX     ; 004bcedd
    JZ 0x004bcfef                       ; 004bcee3
        ;   XREF to: 004bcfef (CONDITIONAL_JUMP)  ; LAB_004bcfef
    PUSH 0x5c3440                       ; 004bcee9 | = "burp2.wav"
    PUSH 0x0                            ; 004bceee
    MOV ESI,dword ptr [0x006045f8]      ; 004bcef0 | DAT_006045f8
    MOV EBX,0x40800000                  ; 004bcef6
    PUSH ESI                            ; 004bcefb
    MOV dword ptr [ESP + 0x29c],EBX     ; 004bcefc
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004bcf03
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
        ;   Label: LAB_004bcf03
    ADD ESP,0xc                         ; 004bcf08
    XOR EDI,EDI                         ; 004bcf0b
    MOV dword ptr [ESP + 0x35c],EDI     ; 004bcf0d
    MOV dword ptr [ESP + 0x36c],EDI     ; 004bcf14
    MOV EAX,[0x00603b28]                ; 004bcf1b | g_CDemonSetPtr
        ;   Label: LAB_004bcf1b
    MOV EBX,dword ptr [ESP + 0x36c]     ; 004bcf20
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 004bcf27 | g_CDemonSetInstance.character_count
    JGE 0x004bd216                      ; 004bcf2d
        ;   XREF to: 004bd216 (CONDITIONAL_JUMP)  ; LAB_004bd216
    ADD EAX,dword ptr [ESP + 0x35c]     ; 004bcf33
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 004bcf3a
    LEA ECX,[EAX + 0x158]               ; 004bcf40
    MOV DH,byte ptr [EAX + 0x24a8]      ; 004bcf46
    MOV dword ptr [ESP + 0x294],ECX     ; 004bcf4c
    TEST DH,DH                          ; 004bcf53
    JNZ 0x004bd001                      ; 004bcf55
        ;   XREF to: 004bd001 (CONDITIONAL_JUMP)  ; LAB_004bd001
    MOV ESI,dword ptr [ESP + 0x36c]     ; 004bcf5b
        ;   Label: LAB_004bcf5b
    MOV EBX,dword ptr [ESP + 0x35c]     ; 004bcf62
    INC ESI                             ; 004bcf69
    ADD EBX,0x4                         ; 004bcf6a
    MOV dword ptr [ESP + 0x36c],ESI     ; 004bcf6d
    MOV dword ptr [ESP + 0x35c],EBX     ; 004bcf74
    JMP 0x004bcf1b                      ; 004bcf7b
        ;   XREF to: 004bcf1b (UNCONDITIONAL_JUMP)  ; LAB_004bcf1b
    PUSH 0x40a00000                     ; 004bcf7d
        ;   Label: LAB_004bcf7d
    PUSH 0x5c30c9                       ; 004bcf82 | = "Gratuitous dismemberment disabled"
    JMP 0x004bc6d9                      ; 004bcf87
        ;   XREF to: 004bc6d9 (UNCONDITIONAL_JUMP)  ; LAB_004bc6d9
    PUSH 0x5c3215                       ; 004bcf8c | = "CCrossbow"
        ;   Label: LAB_004bcf8c
    PUSH EBX                            ; 004bcf91
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004bcf92
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bcf97
    TEST EAX,EAX                        ; 004bcf9a
    JZ 0x004bcfc4                       ; 004bcf9c
        ;   XREF to: 004bcfc4 (CONDITIONAL_JUMP)  ; LAB_004bcfc4
    PUSH 0x40a00000                     ; 004bcf9e
    PUSH 0x5c324e                       ; 004bcfa3 | = "Flaming ammo enabled."
    MOV dword ptr [EBX + 0x56c],0x5     ; 004bcfa8
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bcfb2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bcfb7
    PUSH EAX                            ; 004bcfba
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bcfbb
    PUSH EAX                            ; 004bcfbe
    JMP 0x004bc9f9                      ; 004bcfbf
        ;   XREF to: 004bc9f9 (UNCONDITIONAL_JUMP)  ; LAB_004bc9f9
    PUSH 0x40a00000                     ; 004bcfc4
        ;   Label: LAB_004bcfc4
    PUSH 0x5c321f                       ; 004bcfc9 | = "You can only use flaming ammo on the ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bcfce
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bcfd3
    PUSH EAX                            ; 004bcfd6
    MOV EDI,dword ptr [EBP + 0x14]      ; 004bcfd7
    PUSH EDI                            ; 004bcfda
    JMP 0x004bc9f9                      ; 004bcfdb
        ;   XREF to: 004bc9f9 (UNCONDITIONAL_JUMP)  ; LAB_004bc9f9
    PUSH 0x40a00000                     ; 004bcfe0
        ;   Label: LAB_004bcfe0
    PUSH 0x5c3327                       ; 004bcfe5 | = "Single step disabled"
    JMP 0x004bcc44                      ; 004bcfea
        ;   XREF to: 004bcc44 (UNCONDITIONAL_JUMP)  ; LAB_004bcc44
    PUSH 0x5c344a                       ; 004bcfef | = "burp1.wav"
        ;   Label: LAB_004bcfef
    PUSH EAX                            ; 004bcff4
    MOV ECX,dword ptr [0x006045f8]      ; 004bcff5 | DAT_006045f8
    PUSH ECX                            ; 004bcffb
    JMP 0x004bcf03                      ; 004bcffc
        ;   XREF to: 004bcf03 (UNCONDITIONAL_JUMP)  ; LAB_004bcf03
    PUSH ECX                            ; 004bd001
        ;   Label: LAB_004bd001
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 004bd002
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bd007
    PUSH 0x0                            ; 004bd00a
    PUSH 0x5c3454                       ; 004bd00c | = "Bip01 head"
    PUSH EAX                            ; 004bd011
    MOV ESI,EAX                         ; 004bd012
    MOV dword ptr [ESP + 0x2a4],EAX     ; 004bd014
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004bd01b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bd020
    CMP EAX,-0x1                        ; 004bd023
    JZ 0x004bd0b2                       ; 004bd026
        ;   XREF to: 004bd0b2 (CONDITIONAL_JUMP)  ; LAB_004bd0b2
    MOV EDX,dword ptr [ESP + 0x294]     ; 004bd02c
    MOV dword ptr [ESP + 0x2a4],EAX     ; 004bd033
    SHL EAX,0x2                         ; 004bd03a
    ADD EAX,EDX                         ; 004bd03d
    MOV EBX,dword ptr [ESP + 0x294]     ; 004bd03f
    FLD float ptr [EAX + 0x514]         ; 004bd046
    FMUL float ptr [ESP + 0x290]        ; 004bd04c
    MOV dword ptr [ESP + 0x29c],EBX     ; 004bd053
    MOV EBX,dword ptr [ESP + 0x290]     ; 004bd05a
    MOV EDI,ESI                         ; 004bd061
    MOV dword ptr [ESP + 0x2a0],EBX     ; 004bd063
    FSTP float ptr [EAX + 0x514]        ; 004bd06a
    MOV ECX,dword ptr [ESI + 0x1de78]   ; 004bd070
    XOR EBX,EBX                         ; 004bd076
    TEST ECX,ECX                        ; 004bd078
    JLE 0x004bd0b2                      ; 004bd07a
        ;   XREF to: 004bd0b2 (CONDITIONAL_JUMP)  ; LAB_004bd0b2
    MOV EDX,dword ptr [ESP + 0x2a4]     ; 004bd07c
        ;   Label: LAB_004bd07c
    CMP EDX,dword ptr [ESI + 0x1de9c]   ; 004bd083
    JNZ 0x004bd0a4                      ; 004bd089
        ;   XREF to: 004bd0a4 (CONDITIONAL_JUMP)  ; LAB_004bd0a4
    PUSH EBX                            ; 004bd08b
    PUSH dword ptr [ESP + 0x2a4]        ; 004bd08c
    PUSH EDI                            ; 004bd093
    MOV ECX,dword ptr [ESP + 0x2a8]     ; 004bd094
    PUSH ECX                            ; 004bd09b
    CALL core_game.cpp_scaleBoneRecursive_FUN_004bb090 ; 004bd09c
        ;   XREF to: 004bb090 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004bb090(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004bd0a1
    INC EBX                             ; 004bd0a4
        ;   Label: LAB_004bd0a4
    MOV EAX,dword ptr [EDI + 0x1de78]   ; 004bd0a5
    ADD ESI,0x24                        ; 004bd0ab
    CMP EBX,EAX                         ; 004bd0ae
    JL 0x004bd07c                       ; 004bd0b0
        ;   XREF to: 004bd07c (CONDITIONAL_JUMP)  ; LAB_004bd07c
    PUSH 0x0                            ; 004bd0b2
        ;   Label: LAB_004bd0b2
    PUSH 0x5c345f                       ; 004bd0b4 | = "bipltit02"
    MOV EBX,dword ptr [ESP + 0x2a0]     ; 004bd0b9
    PUSH EBX                            ; 004bd0c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004bd0c1
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bd0c6
    CMP EAX,-0x1                        ; 004bd0c9
    JZ 0x004bd15f                       ; 004bd0cc
        ;   XREF to: 004bd15f (CONDITIONAL_JUMP)  ; LAB_004bd15f
    MOV ESI,dword ptr [ESP + 0x294]     ; 004bd0d2
    MOV dword ptr [ESP + 0x2b0],EAX     ; 004bd0d9
    SHL EAX,0x2                         ; 004bd0e0
    ADD EAX,ESI                         ; 004bd0e3
    MOV EBX,dword ptr [ESP + 0x294]     ; 004bd0e5
    FLD float ptr [EAX + 0x514]         ; 004bd0ec
    FMUL float ptr [ESP + 0x290]        ; 004bd0f2
    MOV dword ptr [ESP + 0x2a8],EBX     ; 004bd0f9
    MOV EBX,dword ptr [ESP + 0x290]     ; 004bd100
    MOV EDI,dword ptr [ESP + 0x298]     ; 004bd107
    MOV dword ptr [ESP + 0x2ac],EBX     ; 004bd10e
    FSTP float ptr [EAX + 0x514]        ; 004bd115
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 004bd11b
    XOR EBX,EBX                         ; 004bd121
    TEST EDX,EDX                        ; 004bd123
    JLE 0x004bd15f                      ; 004bd125
        ;   XREF to: 004bd15f (CONDITIONAL_JUMP)  ; LAB_004bd15f
    MOV ESI,EDI                         ; 004bd127
    MOV EDX,dword ptr [ESP + 0x2b0]     ; 004bd129
        ;   Label: LAB_004bd129
    CMP EDX,dword ptr [ESI + 0x1de9c]   ; 004bd130
    JNZ 0x004bd151                      ; 004bd136
        ;   XREF to: 004bd151 (CONDITIONAL_JUMP)  ; LAB_004bd151
    PUSH EBX                            ; 004bd138
    PUSH dword ptr [ESP + 0x2b0]        ; 004bd139
    PUSH EDI                            ; 004bd140
    MOV ECX,dword ptr [ESP + 0x2b4]     ; 004bd141
    PUSH ECX                            ; 004bd148
    CALL core_game.cpp_scaleBoneRecursive_FUN_004bb090 ; 004bd149
        ;   XREF to: 004bb090 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004bb090(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004bd14e
    INC EBX                             ; 004bd151
        ;   Label: LAB_004bd151
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 004bd152
    ADD ESI,0x24                        ; 004bd158
    CMP EBX,ECX                         ; 004bd15b
    JL 0x004bd129                       ; 004bd15d
        ;   XREF to: 004bd129 (CONDITIONAL_JUMP)  ; LAB_004bd129
    PUSH 0x0                            ; 004bd15f
        ;   Label: LAB_004bd15f
    PUSH 0x5c3469                       ; 004bd161 | = "biprtit02"
    MOV EBX,dword ptr [ESP + 0x2a0]     ; 004bd166
    PUSH EBX                            ; 004bd16d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004bd16e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bd173
    CMP EAX,-0x1                        ; 004bd176
    JZ 0x004bcf5b                       ; 004bd179
        ;   XREF to: 004bcf5b (CONDITIONAL_JUMP)  ; LAB_004bcf5b
    MOV ESI,dword ptr [ESP + 0x294]     ; 004bd17f
    MOV dword ptr [ESP + 0x2bc],EAX     ; 004bd186
    SHL EAX,0x2                         ; 004bd18d
    ADD EAX,ESI                         ; 004bd190
    MOV EBX,dword ptr [ESP + 0x294]     ; 004bd192
    FLD float ptr [EAX + 0x514]         ; 004bd199
    FMUL float ptr [ESP + 0x290]        ; 004bd19f
    MOV dword ptr [ESP + 0x2b4],EBX     ; 004bd1a6
    MOV EBX,dword ptr [ESP + 0x290]     ; 004bd1ad
    MOV EDI,dword ptr [ESP + 0x298]     ; 004bd1b4
    MOV dword ptr [ESP + 0x2b8],EBX     ; 004bd1bb
    FSTP float ptr [EAX + 0x514]        ; 004bd1c2
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 004bd1c8
    XOR EBX,EBX                         ; 004bd1ce
    TEST EDX,EDX                        ; 004bd1d0
    JLE 0x004bcf5b                      ; 004bd1d2
        ;   XREF to: 004bcf5b (CONDITIONAL_JUMP)  ; LAB_004bcf5b
    MOV ESI,EDI                         ; 004bd1d8
    MOV EDX,dword ptr [ESP + 0x2bc]     ; 004bd1da
        ;   Label: LAB_004bd1da
    CMP EDX,dword ptr [ESI + 0x1de9c]   ; 004bd1e1
    JNZ 0x004bd202                      ; 004bd1e7
        ;   XREF to: 004bd202 (CONDITIONAL_JUMP)  ; LAB_004bd202
    PUSH EBX                            ; 004bd1e9
    PUSH dword ptr [ESP + 0x2bc]        ; 004bd1ea
    PUSH EDI                            ; 004bd1f1
    MOV ECX,dword ptr [ESP + 0x2c0]     ; 004bd1f2
    PUSH ECX                            ; 004bd1f9
    CALL core_game.cpp_scaleBoneRecursive_FUN_004bb090 ; 004bd1fa
        ;   XREF to: 004bb090 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004bb090(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004bd1ff
    INC EBX                             ; 004bd202
        ;   Label: LAB_004bd202
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 004bd203
    ADD ESI,0x24                        ; 004bd209
    CMP EBX,ECX                         ; 004bd20c
    JGE 0x004bcf5b                      ; 004bd20e
        ;   XREF to: 004bcf5b (CONDITIONAL_JUMP)  ; LAB_004bcf5b
    JMP 0x004bd1da                      ; 004bd214
        ;   XREF to: 004bd1da (UNCONDITIONAL_JUMP)  ; LAB_004bd1da
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bd216
        ;   Label: LAB_004bd216
    CMP dword ptr [EAX + 0x234],0x0     ; 004bd219
    JZ 0x004bd2c5                       ; 004bd220
        ;   XREF to: 004bd2c5 (CONDITIONAL_JUMP)  ; LAB_004bd2c5
    PUSH 0x5c3473                       ; 004bd226 | DAT_005c3473
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bd22b
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bd230
    ADD ESP,0x4                         ; 004bd232
    XOR EAX,EAX                         ; 004bd235
    MOV EDI,EBX                         ; 004bd237
    MOV dword ptr [ESP + 0x2c4],EAX     ; 004bd239
    SUB ECX,ECX                         ; 004bd240
    DEC ECX                             ; 004bd242
    XOR EAX,EAX                         ; 004bd243
    SCASB.REPNE ES:EDI                  ; 004bd245
    NOT ECX                             ; 004bd247
    DEC ECX                             ; 004bd249
    MOV dword ptr [ESP + 0x2c0],ECX     ; 004bd24a
    TEST ECX,ECX                        ; 004bd251
    JLE 0x004bd292                      ; 004bd253
        ;   XREF to: 004bd292 (CONDITIONAL_JUMP)  ; LAB_004bd292
    MOV EAX,ECX                         ; 004bd255
    MOV ESI,EBX                         ; 004bd257
    NEG EAX                             ; 004bd259
    MOV EBX,ECX                         ; 004bd25b
    ADD ECX,EAX                         ; 004bd25d
    MOV dword ptr [ESP + 0x360],ECX     ; 004bd25f
    XOR EAX,EAX                         ; 004bd266
        ;   Label: LAB_004bd266
    MOV AL,byte ptr [ESI]               ; 004bd268
    PUSH EAX                            ; 004bd26a
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bd26b | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bd272
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bd277
    CMP EDI,EAX                         ; 004bd27a
    JNZ 0x004bd285                      ; 004bd27c
        ;   XREF to: 004bd285 (CONDITIONAL_JUMP)  ; LAB_004bd285
    INC dword ptr [ESP + 0x2c4]         ; 004bd27e
    MOV EDX,dword ptr [ESP + 0x360]     ; 004bd285
        ;   Label: LAB_004bd285
    DEC EBX                             ; 004bd28c
    INC ESI                             ; 004bd28d
    CMP EBX,EDX                         ; 004bd28e
    JG 0x004bd266                       ; 004bd290
        ;   XREF to: 004bd266 (CONDITIONAL_JUMP)  ; LAB_004bd266
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 004bd292
        ;   Label: LAB_004bd292
    CMP EAX,dword ptr [ESP + 0x2c0]     ; 004bd299
    JNZ 0x004bd2c5                      ; 004bd2a0
        ;   XREF to: 004bd2c5 (CONDITIONAL_JUMP)  ; LAB_004bd2c5
    XOR BL,BL                           ; 004bd2a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bd2a4
    MOV byte ptr [0x01d22c70],BL        ; 004bd2a7 | DAT_01d22c70
    CMP dword ptr [EAX + 0x23c],0x0     ; 004bd2ad
    SETZ AL                             ; 004bd2b4
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bd2b7
    AND EAX,0xff                        ; 004bd2ba
    MOV dword ptr [EBX + 0x23c],EAX     ; 004bd2bf
    PUSH 0x5c34a7                       ; 004bd2c5 | DAT_005c34a7
        ;   Label: LAB_004bd2c5
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bd2ca
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    MOV EBX,EAX                         ; 004bd2cf
    ADD ESP,0x4                         ; 004bd2d1
    XOR EAX,EAX                         ; 004bd2d4
    MOV EDI,EBX                         ; 004bd2d6
    MOV dword ptr [ESP + 0x2cc],EAX     ; 004bd2d8
    SUB ECX,ECX                         ; 004bd2df
    DEC ECX                             ; 004bd2e1
    XOR EAX,EAX                         ; 004bd2e2
    SCASB.REPNE ES:EDI                  ; 004bd2e4
    NOT ECX                             ; 004bd2e6
    DEC ECX                             ; 004bd2e8
    MOV dword ptr [ESP + 0x2c8],ECX     ; 004bd2e9
    TEST ECX,ECX                        ; 004bd2f0
    JLE 0x004bd32f                      ; 004bd2f2
        ;   XREF to: 004bd32f (CONDITIONAL_JUMP)  ; LAB_004bd32f
    MOV EAX,ECX                         ; 004bd2f4
    NEG EAX                             ; 004bd2f6
    MOV EDI,ECX                         ; 004bd2f8
    ADD ECX,EAX                         ; 004bd2fa
    MOV dword ptr [ESP + 0x364],ECX     ; 004bd2fc
    XOR EAX,EAX                         ; 004bd303
        ;   Label: LAB_004bd303
    MOV AL,byte ptr [EBX]               ; 004bd305
    PUSH EAX                            ; 004bd307
    MOVZX ESI,byte ptr [EDI + 0x1d22c6f] ; 004bd308 | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bd30f
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bd314
    CMP ESI,EAX                         ; 004bd317
    JNZ 0x004bd322                      ; 004bd319
        ;   XREF to: 004bd322 (CONDITIONAL_JUMP)  ; LAB_004bd322
    INC dword ptr [ESP + 0x2cc]         ; 004bd31b
    MOV EDX,dword ptr [ESP + 0x364]     ; 004bd322
        ;   Label: LAB_004bd322
    DEC EDI                             ; 004bd329
    INC EBX                             ; 004bd32a
    CMP EDI,EDX                         ; 004bd32b
    JG 0x004bd303                       ; 004bd32d
        ;   XREF to: 004bd303 (CONDITIONAL_JUMP)  ; LAB_004bd303
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 004bd32f
        ;   Label: LAB_004bd32f
    CMP EAX,dword ptr [ESP + 0x2c8]     ; 004bd336
    JNZ 0x004bd37c                      ; 004bd33d
        ;   XREF to: 004bd37c (CONDITIONAL_JUMP)  ; LAB_004bd37c
    MOV EAX,[0x01d5ba14]                ; 004bd33f | DAT_01d5ba14
    PUSH 0x40a00000                     ; 004bd344
    XOR BH,BH                           ; 004bd349
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bd34b
    PUSH 0x5c34db                       ; 004bd352 | = "Health restored."
    MOV byte ptr [0x01d22c70],BH        ; 004bd357 | DAT_01d22c70
    MOV dword ptr [EAX + 0x2538],0x42c80000 ; 004bd35d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bd367
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bd36c
    PUSH EAX                            ; 004bd36f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bd370
    PUSH EBX                            ; 004bd373
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004bd374
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bd379
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bd37c
        ;   Label: LAB_004bd37c
    CMP dword ptr [EAX + 0x234],0x0     ; 004bd37f
    JZ 0x004bb1af                       ; 004bd386
        ;   XREF to: 004bb1af (CONDITIONAL_JUMP)  ; LAB_004bb1af
    PUSH 0x5c34ec                       ; 004bd38c | DAT_005c34ec
    CALL support_newmsg.cpp_decryptMessage_FUN_005089e0 ; 004bd391
        ;   XREF to: 005089e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_005089e0(char * encrypted_msg)
    XOR EDI,EDI                         ; 004bd396
    ADD ESP,0x4                         ; 004bd398
    MOV dword ptr [ESP + 0x2d4],EDI     ; 004bd39b
    MOV EDI,EAX                         ; 004bd3a2
    MOV ESI,EAX                         ; 004bd3a4
    SUB ECX,ECX                         ; 004bd3a6
    DEC ECX                             ; 004bd3a8
    XOR EAX,EAX                         ; 004bd3a9
    SCASB.REPNE ES:EDI                  ; 004bd3ab
    NOT ECX                             ; 004bd3ad
    DEC ECX                             ; 004bd3af
    MOV dword ptr [ESP + 0x2d0],ECX     ; 004bd3b0
    TEST ECX,ECX                        ; 004bd3b7
    JLE 0x004bd3ef                      ; 004bd3b9
        ;   XREF to: 004bd3ef (CONDITIONAL_JUMP)  ; LAB_004bd3ef
    MOV EAX,ECX                         ; 004bd3bb
    NEG EAX                             ; 004bd3bd
    MOV EBX,ECX                         ; 004bd3bf
    ADD ECX,EAX                         ; 004bd3c1
    MOV dword ptr [ESP + 0x368],ECX     ; 004bd3c3
    XOR EAX,EAX                         ; 004bd3ca
        ;   Label: LAB_004bd3ca
    MOV AL,byte ptr [ESI]               ; 004bd3cc
    PUSH EAX                            ; 004bd3ce
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004bd3cf | DAT_01d22c70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004bd3d6
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004bd3db
    CMP EDI,EAX                         ; 004bd3de
    JZ 0x004bd425                       ; 004bd3e0
        ;   XREF to: 004bd425 (CONDITIONAL_JUMP)  ; LAB_004bd425
    MOV EDX,dword ptr [ESP + 0x368]     ; 004bd3e2
        ;   Label: LAB_004bd3e2
    DEC EBX                             ; 004bd3e9
    INC ESI                             ; 004bd3ea
    CMP EBX,EDX                         ; 004bd3eb
    JG 0x004bd3ca                       ; 004bd3ed
        ;   XREF to: 004bd3ca (CONDITIONAL_JUMP)  ; LAB_004bd3ca
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004bd3ef
        ;   Label: LAB_004bd3ef
    CMP EAX,dword ptr [ESP + 0x2d0]     ; 004bd3f6
    JNZ 0x004bb1af                      ; 004bd3fd
        ;   XREF to: 004bb1af (CONDITIONAL_JUMP)  ; LAB_004bb1af
    XOR CL,CL                           ; 004bd403
    MOV EBX,dword ptr [0x01d22c50]      ; 004bd405 | DAT_01d22c50
    MOV byte ptr [0x01d22c70],CL        ; 004bd40b | DAT_01d22c70
    TEST EBX,EBX                        ; 004bd411
    SETZ AL                             ; 004bd413
    AND EAX,0xff                        ; 004bd416
    MOV [0x01d22c50],EAX                ; 004bd41b | DAT_01d22c50
    JMP 0x004bb1af                      ; 004bd420
        ;   XREF to: 004bb1af (UNCONDITIONAL_JUMP)  ; LAB_004bb1af
    INC dword ptr [ESP + 0x2d4]         ; 004bd425
        ;   Label: LAB_004bd425
    JMP 0x004bd3e2                      ; 004bd42c
        ;   XREF to: 004bd3e2 (UNCONDITIONAL_JUMP)  ; LAB_004bd3e2

