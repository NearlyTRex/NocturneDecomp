; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_00583160(CVampireBoss *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_voicuhurt_wav_005edb30
;   TerminatedCString s_VampireBossBitesIt_005edb3e
;   TerminatedCString s_voicudeath_wav_2_5_005edb51
;   undefined4 DAT_005edb6c
;   undefined4 DAT_005edb74
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   undefined4 DAT_00618170
;   undefined4 DAT_0061c068
;   undefined4 g_CHeroClassInfo.name_hash
;   undefined4 g_CMeleeClassInfo.name_hash
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_inv.cpp_CInventory_findItemByName_FUN_004db830
;   core_inv.cpp_FUN_004db8e0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_sound.cpp_CSound_playSound_FUN_0055ae30
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583160
        ;   Label: core_vampboss.cpp_CVampireBoss_processDamage_FUN_00583160
    PUSH ESI                            ; 00583161
    PUSH EDI                            ; 00583162
    PUSH EBP                            ; 00583163
    SUB ESP,0x20                        ; 00583164
    MOV EBP,dword ptr [ESP + 0x34]      ; 00583167
    CMP dword ptr [EBP + 0x281c],0x0    ; 0058316b
    JNZ 0x00583215                      ; 00583172
        ;   XREF to: 00583215 (CONDITIONAL_JUMP)  ; LAB_00583215
    MOV EAX,dword ptr [ESP + 0x38]      ; 00583178
    CMP dword ptr [EAX + 0x28],0x7      ; 0058317c
    JZ 0x0058321d                       ; 00583180
        ;   XREF to: 0058321d (CONDITIONAL_JUMP)  ; LAB_0058321d
    LEA EAX,[EAX]                       ; 00583186
    LEA EDX,[EDX]                       ; 0058318c
    MOV EAX,dword ptr [EBP + 0xc2f3c]   ; 00583190
        ;   Label: LAB_00583190
    TEST EAX,EAX                        ; 00583196
    JBE 0x005832b2                      ; 00583198
        ;   XREF to: 005832b2 (CONDITIONAL_JUMP)  ; LAB_005832b2
    CMP EAX,0x2                         ; 0058319e
    JNZ 0x005833bb                      ; 005831a1
        ;   XREF to: 005833bb (CONDITIONAL_JUMP)  ; LAB_005833bb
    MOV EAX,dword ptr [ESP + 0x38]      ; 005831a7
    FLD float ptr [EAX + 0x4]           ; 005831ab
    FSUBR float ptr [EBP + 0x25a8]      ; 005831ae
    FST float ptr [EBP + 0x25a8]        ; 005831b4
    FCOMP double ptr [0x005edb74]       ; 005831ba | DAT_005edb74
    FNSTSW AX                           ; 005831c0
    SAHF                                ; 005831c2
    JNC 0x005831cf                      ; 005831c3
        ;   XREF to: 005831cf (CONDITIONAL_JUMP)  ; LAB_005831cf
    MOV dword ptr [EBP + 0x25a8],0x41c7fdf4 ; 005831c5
    PUSH 0x2                            ; 005831cf
        ;   Label: LAB_005831cf
    PUSH 0x0                            ; 005831d1
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 005831d3
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005831d8
    LEA EBX,[EBP + 0x10af8]             ; 005831db
    TEST EAX,EAX                        ; 005831e1
    JBE 0x00583279                      ; 005831e3
        ;   XREF to: 00583279 (CONDITIONAL_JUMP)  ; LAB_00583279
    CMP EAX,0x1                         ; 005831e9
    JNZ 0x00583282                      ; 005831ec
        ;   XREF to: 00583282 (CONDITIONAL_JUMP)  ; LAB_00583282
    PUSH EAX                            ; 005831f2
    PUSH 0x4                            ; 005831f3
    PUSH EBX                            ; 005831f5
        ;   Label: LAB_005831f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005831f6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005831f6
    ADD ESP,0xc                         ; 005831fb
    MOV EDX,dword ptr [EBP + 0xc3b7c]   ; 005831fe
    PUSH EDX                            ; 00583204
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 00583205
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0058320a
    TEST EAX,EAX                        ; 0058320d
    JZ 0x00583292                       ; 0058320f
        ;   XREF to: 00583292 (CONDITIONAL_JUMP)  ; LAB_00583292
    ADD ESP,0x20                        ; 00583215
        ;   Label: LAB_00583215
    POP EBP                             ; 00583218
    POP EDI                             ; 00583219
    POP ESI                             ; 0058321a
    POP EBX                             ; 0058321b
    RET                                 ; 0058321c
    FLD float ptr [EAX + 0x4]           ; 0058321d
        ;   Label: LAB_0058321d
    ADD EAX,0x1c                        ; 00583220
    FLD ST0                             ; 00583223
    FMUL double ptr [0x005edb6c]        ; 00583225 | DAT_005edb6c
    PUSH EAX                            ; 0058322b
    LEA ESI,[ESP + 0x10]                ; 0058322c
    LEA EDI,[ESP + 0x4]                 ; 00583230
    PUSH EBP                            ; 00583234
    FSTP ST1                            ; 00583235
    FSTP float ptr [EAX + -0x18]        ; 00583237
    CALL core_actor.cpp_FUN_00408d70    ; 0058323a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 0058323f
    ADD ESP,0x8                         ; 00583243
    XOR EBX,EBX                         ; 00583246
    MOVSD ES:EDI,ESI                    ; 00583248
    MOVSD ES:EDI,ESI                    ; 00583249
    MOVSD ES:EDI,ESI                    ; 0058324a
    MOV EDI,0x4000                      ; 0058324b
    XOR ESI,ESI                         ; 00583250
    PUSH 0xffff                         ; 00583252
        ;   Label: LAB_00583252
    PUSH ESI                            ; 00583257
    PUSH EDI                            ; 00583258
    PUSH EDI                            ; 00583259
    PUSH ESI                            ; 0058325a
    LEA EAX,[ESP + 0x14]                ; 0058325b
    PUSH EAX                            ; 0058325f
    MOV EAX,[0x00614d30]                ; 00583260 | DAT_00614d30
    PUSH EAX                            ; 00583265
    INC EBX                             ; 00583266
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 00583267
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0058326c
    CMP EBX,0x5                         ; 0058326f
    JL 0x00583252                       ; 00583272
        ;   XREF to: 00583252 (CONDITIONAL_JUMP)  ; LAB_00583252
    JMP 0x00583190                      ; 00583274
        ;   XREF to: 00583190 (UNCONDITIONAL_JUMP)  ; LAB_00583190
    PUSH 0x1                            ; 00583279
        ;   Label: LAB_00583279
    PUSH 0x3                            ; 0058327b
    JMP 0x005831f5                      ; 0058327d
        ;   XREF to: 005831f5 (UNCONDITIONAL_JUMP)  ; LAB_005831f5
    PUSH 0x1                            ; 00583282
        ;   Label: LAB_00583282
    PUSH 0x5                            ; 00583284
    LEA EAX,[EBP + 0x10af8]             ; 00583286
    PUSH EAX                            ; 0058328c
    JMP 0x005831f6                      ; 0058328d
        ;   XREF to: 005831f6 (UNCONDITIONAL_JUMP)  ; LAB_005831f6
    PUSH 0x5edb30                       ; 00583292 | = "voicuhurt.wav"
        ;   Label: LAB_00583292
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00583297
    PUSH EBP                            ; 0058329d
    CALL dword ptr [EAX + 0x34]         ; 0058329e
    ADD ESP,0x8                         ; 005832a1
    MOV dword ptr [EBP + 0xc3b7c],EAX   ; 005832a4
    ADD ESP,0x20                        ; 005832aa
    POP EBP                             ; 005832ad
    POP EDI                             ; 005832ae
    POP ESI                             ; 005832af
    POP EBX                             ; 005832b0
    RET                                 ; 005832b1
    MOV EAX,dword ptr [ESP + 0x38]      ; 005832b2
        ;   Label: LAB_005832b2
    CMP dword ptr [EAX + 0x28],0x1      ; 005832b6
    JNZ 0x00583215                      ; 005832ba
        ;   XREF to: 00583215 (CONDITIONAL_JUMP)  ; LAB_00583215
    MOV EBX,dword ptr [0x01d0557c]      ; 005832c0 | g_CMeleeClassInfo.name_hash
    PUSH EBX                            ; 005832c6
    MOV ESI,dword ptr [EAX + 0x34]      ; 005832c7
    PUSH ESI                            ; 005832ca
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005832cb
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005832d0
    ADD ESP,0x8                         ; 005832d2
    MOV EDI,EAX                         ; 005832d5
    TEST EAX,EAX                        ; 005832d7
    JZ 0x00583215                       ; 005832d9
        ;   XREF to: 00583215 (CONDITIONAL_JUMP)  ; LAB_00583215
    PUSH 0x1                            ; 005832df
    PUSH 0xa                            ; 005832e1
    LEA EAX,[EBP + 0x2b4]               ; 005832e3
    PUSH EAX                            ; 005832e9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005832ea
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005832ef
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005832f2
    PUSH EBX                            ; 005832f8
    CALL dword ptr [EAX + 0x9c]         ; 005832f9
    MOV ESI,EAX                         ; 005832ff
    ADD ESP,0x4                         ; 00583301
    TEST EAX,EAX                        ; 00583304
    JZ 0x0058335e                       ; 00583306
        ;   XREF to: 0058335e (CONDITIONAL_JUMP)  ; LAB_0058335e
    PUSH 0x0                            ; 00583308
    PUSH EBX                            ; 0058330a
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0058330b
    PUSH ESI                            ; 00583311
    CALL dword ptr [EAX + 0x98]         ; 00583312
    ADD ESP,0xc                         ; 00583318
    MOV EAX,[0x01cedf50]                ; 0058331b | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 00583320
    PUSH ESI                            ; 00583321
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00583322
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00583327
    TEST EAX,EAX                        ; 0058332a
    JZ 0x0058335e                       ; 0058332c
        ;   XREF to: 0058335e (CONDITIONAL_JUMP)  ; LAB_0058335e
    PUSH EBX                            ; 0058332e
    LEA ESI,[EAX + 0x2437c]             ; 0058332f
    PUSH ESI                            ; 00583335
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004db830 ; 00583336
        ;   XREF to: 004db830 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004db830(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 0058333b
    CMP EAX,EBX                         ; 0058333e
    JNZ 0x0058335e                      ; 00583340
        ;   XREF to: 0058335e (CONDITIONAL_JUMP)  ; LAB_0058335e
    PUSH 0x0                            ; 00583342
    PUSH EBX                            ; 00583344
    PUSH ESI                            ; 00583345
    CALL core_inv.cpp_FUN_004db8e0      ; 00583346
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db8e0()
    ADD ESP,0xc                         ; 0058334b
    PUSH EBX                            ; 0058334e
    MOV EDX,dword ptr [0x00618170]      ; 0058334f | DAT_00618170
    PUSH EDX                            ; 00583355 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 00583356
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058335b
    PUSH 0x0                            ; 0058335e
        ;   Label: LAB_0058335e
    PUSH 0x3e4ccccd                     ; 00583360
    PUSH EDI                            ; 00583365
    PUSH 0x0                            ; 00583366
    PUSH EBP                            ; 00583368
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10 ; 00583369
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter * this_ptr, int param_2, int param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 0058336e
    PUSH 0x5edb3e                       ; 00583371 | = "VampireBossBitesIt"
    MOV ECX,dword ptr [0x006141f0]      ; 00583376 | DAT_006141f0
    PUSH ECX                            ; 0058337c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0058337d
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00583382
    MOV EBX,dword ptr [EBP + 0xc3b7c]   ; 00583385
    PUSH EBX                            ; 0058338b
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0058338c
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00583391
    PUSH 0x5edb51                       ; 00583394 | = "voicudeath.wav @ 2.5"
    PUSH EBP                            ; 00583399
    MOV ESI,dword ptr [0x0061c068]      ; 0058339a | DAT_0061c068
    PUSH ESI                            ; 005833a0
    CALL core_sound.cpp_CSound_playSound_FUN_0055ae30 ; 005833a1
        ;   XREF to: 0055ae30 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0055ae30(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005833a6
    MOV dword ptr [EBP + 0x25a8],0x0    ; 005833a9
    ADD ESP,0x20                        ; 005833b3
    POP EBP                             ; 005833b6
    POP EDI                             ; 005833b7
    POP ESI                             ; 005833b8
    POP EBX                             ; 005833b9
    RET                                 ; 005833ba
    MOV EAX,dword ptr [ESP + 0x38]      ; 005833bb
        ;   Label: LAB_005833bb
    MOV dword ptr [EAX + 0x4],0x0       ; 005833bf
    ADD ESP,0x20                        ; 005833c6
    POP EBP                             ; 005833c9
    POP EDI                             ; 005833ca
    POP ESI                             ; 005833cb
    POP EBX                             ; 005833cc
    RET                                 ; 005833cd

