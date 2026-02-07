; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_005e7030 (CVampireBoss *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_voicuhurt_wav_00656c5f
;   TerminatedCString s_VampireBossBitesIt_00656c6d
;   TerminatedCString s_voicudeath_wav_2_5_00656c80
;   double DOUBLE_00656c9b = 2
;   double DOUBLE_00656ca3 = 25
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CSound* g_CSoundPtr = 03f6af64
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CHeroClassInfo.name_hash
;   undefined4 g_CMeleeClassInfo.name_hash
;   CDemonMission g_CDemonMissionInstance
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_event.cpp_CEventList_FUN_004aabe0
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
;   core_inv.cpp_CInventory_removeItem_FUN_004fea70
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7030
        ;   Label: core_vampboss.cpp_CVampireBoss_processDamage_FUN_005e7030
    PUSH ESI                            ; 005e7031
    PUSH EDI                            ; 005e7032
    PUSH EBP                            ; 005e7033
    SUB ESP,0x14                        ; 005e7034
    MOV ESI,dword ptr [ESP + 0x28]      ; 005e7037
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005e703b
    CMP dword ptr [EDI + 0x28],0x7      ; 005e703f
    JZ 0x005e70d5                       ; 005e7043
        ;   XREF to: 005e70d5 (CONDITIONAL_JUMP)  ; LAB_005e70d5
    LEA EAX,[EAX]                       ; 005e7049
    NOP                                 ; 005e704f
    MOV EAX,dword ptr [ESI + 0xcdcc0]   ; 005e7050
        ;   Label: LAB_005e7050
    TEST EAX,EAX                        ; 005e7056
    JBE 0x005e715e                      ; 005e7058
        ;   XREF to: 005e715e (CONDITIONAL_JUMP)  ; LAB_005e715e
    CMP EAX,0x2                         ; 005e705e
    JNZ 0x005e7260                      ; 005e7061
        ;   XREF to: 005e7260 (CONDITIONAL_JUMP)  ; LAB_005e7260
    FLD float ptr [EDI + 0x4]           ; 005e7067
    FSUBR float ptr [ESI + 0x243c]      ; 005e706a
    FST float ptr [ESI + 0x243c]        ; 005e7070
    FCOMP double ptr [0x00656ca3]       ; 005e7076 | DOUBLE_00656ca3
    FNSTSW AX                           ; 005e707c
    SAHF                                ; 005e707e
    JNC 0x005e708b                      ; 005e707f
        ;   XREF to: 005e708b (CONDITIONAL_JUMP)  ; LAB_005e708b
    MOV dword ptr [ESI + 0x243c],0x41c7fdf4 ; 005e7081
    PUSH 0x2                            ; 005e708b
        ;   Label: LAB_005e708b
    PUSH 0x0                            ; 005e708d
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005e708f
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005e7094
    LEA EBX,[ESI + 0xbebc]              ; 005e7097
    TEST EAX,EAX                        ; 005e709d
    JBE 0x005e7128                      ; 005e709f
        ;   XREF to: 005e7128 (CONDITIONAL_JUMP)  ; LAB_005e7128
    CMP EAX,0x1                         ; 005e70a5
    JNZ 0x005e712e                      ; 005e70a8
        ;   XREF to: 005e712e (CONDITIONAL_JUMP)  ; LAB_005e712e
    PUSH EAX                            ; 005e70ae
    PUSH 0x4                            ; 005e70af
    PUSH EBX                            ; 005e70b1
        ;   Label: LAB_005e70b1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005e70b2
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005e70b2
    ADD ESP,0xc                         ; 005e70b7
    MOV EBX,dword ptr [ESI + 0xce900]   ; 005e70ba
    PUSH EBX                            ; 005e70c0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005e70c1
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005e70c6
    TEST EAX,EAX                        ; 005e70c9
    JZ 0x005e713e                       ; 005e70cb
        ;   XREF to: 005e713e (CONDITIONAL_JUMP)  ; LAB_005e713e
    ADD ESP,0x14                        ; 005e70cd
        ;   Label: LAB_005e70cd
    POP EBP                             ; 005e70d0
    POP EDI                             ; 005e70d1
    POP ESI                             ; 005e70d2
    POP EBX                             ; 005e70d3
    RET                                 ; 005e70d4
    FLD float ptr [EDI + 0x4]           ; 005e70d5
        ;   Label: LAB_005e70d5
    LEA EAX,[EDI + 0x1c]                ; 005e70d8
    FLD ST0                             ; 005e70db
    FMUL double ptr [0x00656c9b]        ; 005e70dd | DOUBLE_00656c9b
    PUSH EAX                            ; 005e70e3
    LEA EAX,[ESP + 0x4]                 ; 005e70e4
    XOR EBX,EBX                         ; 005e70e8
    PUSH EAX                            ; 005e70ea
    FSTP ST1                            ; 005e70eb
    PUSH ESI                            ; 005e70ed
    FSTP float ptr [EDI + 0x4]          ; 005e70ee
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e70f1
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005e70f6
    MOV EBP,0x4000                      ; 005e70f9
    PUSH 0xffff                         ; 005e70fe
        ;   Label: LAB_005e70fe
    PUSH 0x0                            ; 005e7103
    PUSH EBP                            ; 005e7105
    PUSH EBP                            ; 005e7106
    PUSH 0x0                            ; 005e7107
    LEA EAX,[ESP + 0x14]                ; 005e7109
    PUSH EAX                            ; 005e710d
    MOV ECX,dword ptr [0x0067a3d0]      ; 005e710e | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 005e7114 | g_CFireEffectInstance
    INC EBX                             ; 005e7115
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 005e7116
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 005e711b
    CMP EBX,0x5                         ; 005e711e
    JL 0x005e70fe                       ; 005e7121
        ;   XREF to: 005e70fe (CONDITIONAL_JUMP)  ; LAB_005e70fe
    JMP 0x005e7050                      ; 005e7123
        ;   XREF to: 005e7050 (UNCONDITIONAL_JUMP)  ; LAB_005e7050
    PUSH 0x1                            ; 005e7128
        ;   Label: LAB_005e7128
    PUSH 0x3                            ; 005e712a
    JMP 0x005e70b1                      ; 005e712c
        ;   XREF to: 005e70b1 (UNCONDITIONAL_JUMP)  ; LAB_005e70b1
    PUSH 0x1                            ; 005e712e
        ;   Label: LAB_005e712e
    PUSH 0x5                            ; 005e7130
    LEA EAX,[ESI + 0xbebc]              ; 005e7132
    PUSH EAX                            ; 005e7138
    JMP 0x005e70b2                      ; 005e7139
        ;   XREF to: 005e70b2 (UNCONDITIONAL_JUMP)  ; LAB_005e70b2
    PUSH 0x656c5f                       ; 005e713e | = "voicuhurt.wav"
        ;   Label: LAB_005e713e
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e7143
    PUSH ESI                            ; 005e7149
    CALL dword ptr [EAX + 0x24]         ; 005e714a
    ADD ESP,0x8                         ; 005e714d
    MOV dword ptr [ESI + 0xce900],EAX   ; 005e7150
    ADD ESP,0x14                        ; 005e7156
    POP EBP                             ; 005e7159
    POP EDI                             ; 005e715a
    POP ESI                             ; 005e715b
    POP EBX                             ; 005e715c
    RET                                 ; 005e715d
    CMP dword ptr [EDI + 0x28],0x1      ; 005e715e
        ;   Label: LAB_005e715e
    JNZ 0x005e70cd                      ; 005e7162
        ;   XREF to: 005e70cd (CONDITIONAL_JUMP)  ; LAB_005e70cd
    MOV EAX,[0x02f0d928]                ; 005e7168 | g_CMeleeClassInfo.name_hash
    PUSH EAX                            ; 005e716d
    MOV EDX,dword ptr [EDI + 0x34]      ; 005e716e
    PUSH EDX                            ; 005e7171
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e7172
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005e7177
    ADD ESP,0x8                         ; 005e7179
    MOV EBP,EAX                         ; 005e717c
    TEST EAX,EAX                        ; 005e717e
    JZ 0x005e70cd                       ; 005e7180
        ;   XREF to: 005e70cd (CONDITIONAL_JUMP)  ; LAB_005e70cd
    PUSH 0x1                            ; 005e7186
    PUSH 0xa                            ; 005e7188
    LEA EAX,[ESI + 0x158]               ; 005e718a
    PUSH EAX                            ; 005e7190
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005e7191
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005e7196
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e7199
    PUSH EBX                            ; 005e719f
    CALL dword ptr [EAX + 0x8c]         ; 005e71a0
    MOV EDI,EAX                         ; 005e71a6
    ADD ESP,0x4                         ; 005e71a8
    TEST EAX,EAX                        ; 005e71ab
    JZ 0x005e7206                       ; 005e71ad
        ;   XREF to: 005e7206 (CONDITIONAL_JUMP)  ; LAB_005e7206
    PUSH 0x0                            ; 005e71af
    PUSH EBX                            ; 005e71b1
    MOV EAX,dword ptr [EAX + 0x154]     ; 005e71b2
    PUSH EDI                            ; 005e71b8
    CALL dword ptr [EAX + 0x88]         ; 005e71b9
    ADD ESP,0xc                         ; 005e71bf
    MOV ECX,dword ptr [0x02db880c]      ; 005e71c2 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 005e71c8
    PUSH EDI                            ; 005e71c9
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e71ca
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e71cf
    TEST EAX,EAX                        ; 005e71d2
    JZ 0x005e7206                       ; 005e71d4
        ;   XREF to: 005e7206 (CONDITIONAL_JUMP)  ; LAB_005e7206
    PUSH EBX                            ; 005e71d6
    LEA EDI,[EAX + 0x1f738]             ; 005e71d7
    PUSH EDI                            ; 005e71dd
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0 ; 005e71de
        ;   XREF to: 004fe9d0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 005e71e3
    CMP EAX,EBX                         ; 005e71e6
    JNZ 0x005e7206                      ; 005e71e8
        ;   XREF to: 005e7206 (CONDITIONAL_JUMP)  ; LAB_005e7206
    PUSH 0x0                            ; 005e71ea
    PUSH EBX                            ; 005e71ec
    PUSH EDI                            ; 005e71ed
    CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70 ; 005e71ee
        ;   XREF to: 004fea70 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 005e71f3
    PUSH EBX                            ; 005e71f6
    MOV EBX,dword ptr [0x0067d550]      ; 005e71f7 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 005e71fd | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 005e71fe
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e7203
    PUSH 0x3e4ccccd                     ; 005e7206
        ;   Label: LAB_005e7206
    PUSH EBP                            ; 005e720b
    PUSH 0x0                            ; 005e720c
    PUSH ESI                            ; 005e720e
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 005e720f
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 005e7214
    PUSH 0x656c6d                       ; 005e7217 | = "VampireBossBitesIt"
    MOV EDI,dword ptr [0x006793d0]      ; 005e721c | g_CEventListPtr
    PUSH EDI                            ; 005e7222 | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 005e7223
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
    ADD ESP,0x8                         ; 005e7228
    MOV EBP,dword ptr [ESI + 0xce900]   ; 005e722b
    PUSH EBP                            ; 005e7231
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005e7232
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005e7237
    PUSH 0x656c80                       ; 005e723a | = "voicudeath.wav @ 2.5"
    PUSH ESI                            ; 005e723f
    MOV EAX,[0x00681ef8]                ; 005e7240 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 005e7245 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 005e7246
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005e724b
    MOV dword ptr [ESI + 0x243c],0x0    ; 005e724e
    ADD ESP,0x14                        ; 005e7258
    POP EBP                             ; 005e725b
    POP EDI                             ; 005e725c
    POP ESI                             ; 005e725d
    POP EBX                             ; 005e725e
    RET                                 ; 005e725f
    MOV dword ptr [EDI + 0x4],0x0       ; 005e7260
        ;   Label: LAB_005e7260
    ADD ESP,0x14                        ; 005e7267
    POP EBP                             ; 005e726a
    POP EDI                             ; 005e726b
    POP ESI                             ; 005e726c
    POP EBX                             ; 005e726d
    RET                                 ; 005e726e

