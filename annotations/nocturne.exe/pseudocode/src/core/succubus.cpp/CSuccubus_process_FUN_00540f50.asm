; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_CSuccubus_process_FUN_00540f50(CSuccubus *this_ptr,float delta_time)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_0059614c
;   TerminatedCString s_succubus_morph_wav_00596176
;   TerminatedCString s_hdwing_cth_00596189
;   undefined4 s_hdwing_cth_00596189+1
;   undefined4 s_hdwing_cth_00596189+2
;   undefined4 s_hdwing_cth_00596189+3
;   TerminatedCString s_succubusShutUp_00596194
;   TerminatedCString s_succubus_horny_wav_005961a3
;   double DOUBLE_005961bc = 3.14159265350000
;   double DOUBLE_005961c4 = 32
;   float FLOAT_005a28c8 = 1.5
;   float FLOAT_005a28d4 = 15
;   float FLOAT_005a28d8 = 4
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005b7650
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_FUN_004259f0
;   core_charactr.cpp_CCharacter_FUN_00428c00
;   core_charactr.cpp_CCharacter_FUN_0042a150
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_cloth.cpp_CClothList_process_FUN_00438550
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540f50
        ;   Label: core_succubus.cpp_CSuccubus_process_FUN_00540f50
    PUSH ESI                            ; 00540f51
    PUSH EDI                            ; 00540f52
    PUSH EBP                            ; 00540f53
    MOV EBP,ESP                         ; 00540f54
    SUB ESP,0x64                        ; 00540f56
    MOV EBX,dword ptr [EBP + 0x14]      ; 00540f59
    PUSH dword ptr [EBP + 0x18]         ; 00540f5c
    PUSH EBX                            ; 00540f5f
    CALL core_charactr.cpp_CCharacter_FUN_004259f0 ; 00540f60
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00540f65
    TEST EAX,EAX                        ; 00540f68
    JZ 0x0054139a                       ; 00540f6a
        ;   XREF to: 0054139a (CONDITIONAL_JUMP)  ; LAB_0054139a
    LEA EAX,[EBX + 0x23a4]              ; 00540f70
    MOV dword ptr [EAX + 0x8],0x0       ; 00540f76
    FLD float ptr [EBP + 0x18]          ; 00540f7d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00540f80
    MOV dword ptr [EAX + 0x4],EDX       ; 00540f83
    MOV EDX,dword ptr [EAX + 0x4]       ; 00540f86
    MOV dword ptr [EAX],EDX             ; 00540f89
    FMUL float ptr [EBX + 0xbc8c]       ; 00540f8b
    LEA ESI,[EBX + 0x150]               ; 00540f91
    FSTP float ptr [EBP + -0x14]        ; 00540f97
    FLD float ptr [EBP + -0x14]         ; 00540f9a
        ;   Label: LAB_00540f9a
    FLDZ                                ; 00540f9d
    FCOMPP                              ; 00540f9f
    FNSTSW AX                           ; 00540fa1
    SAHF                                ; 00540fa3
    JC 0x00540feb                       ; 00540fa4
        ;   XREF to: 00540feb (CONDITIONAL_JUMP)  ; LAB_00540feb
    LEA EAX,[EBX + 0xdf78]              ; 00540fa6
    MOV dword ptr [EAX + 0x8],0x0       ; 00540fac
    FLD float ptr [EBP + 0x18]          ; 00540fb3
    MOV EDX,dword ptr [EAX + 0x8]       ; 00540fb6
    MOV dword ptr [EAX + 0x4],EDX       ; 00540fb9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00540fbc
    MOV dword ptr [EAX],EDX             ; 00540fbf
    FMUL float ptr [EBX + 0xbc8c]       ; 00540fc1
    LEA ESI,[EBX + 0xbd24]              ; 00540fc7
    FSTP float ptr [EBP + -0x14]        ; 00540fcd
    FLD float ptr [EBP + -0x14]         ; 00540fd0
        ;   Label: LAB_00540fd0
    FLDZ                                ; 00540fd3
    FCOMPP                              ; 00540fd5
    FNSTSW AX                           ; 00540fd7
    SAHF                                ; 00540fd9
    JNC 0x00541004                      ; 00540fda
        ;   XREF to: 00541004 (CONDITIONAL_JUMP)  ; LAB_00541004
    LEA EAX,[EBP + -0x14]               ; 00540fdc
    PUSH EAX                            ; 00540fdf
    PUSH ESI                            ; 00540fe0
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00540fe1
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00540fe6
    JMP 0x00540fd0                      ; 00540fe9
        ;   XREF to: 00540fd0 (UNCONDITIONAL_JUMP)  ; LAB_00540fd0
    LEA EAX,[EBP + -0x14]               ; 00540feb
        ;   Label: LAB_00540feb
    PUSH EAX                            ; 00540fee
    PUSH ESI                            ; 00540fef
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00540ff0
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00540ff5
    PUSH EAX                            ; 00540ff8
    PUSH EBX                            ; 00540ff9
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00540ffa
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00540fff
    JMP 0x00540f9a                      ; 00541002
        ;   XREF to: 00540f9a (UNCONDITIONAL_JUMP)  ; LAB_00540f9a
    FLD float ptr [EBX + 0xbc8c]        ; 00541004
        ;   Label: LAB_00541004
    FLD float ptr [EBP + 0x18]          ; 0054100a
    FMUL double ptr [0x005961bc]        ; 0054100d | DOUBLE_005961bc
    FMULP                               ; 00541013
    FLD float ptr [EBX + 0x23ac]        ; 00541015
    LEA ESI,[EBX + 0x150]               ; 0054101b
    FSTP float ptr [EBX + 0x242c]       ; 00541021
    PUSH ESI                            ; 00541027
    FSTP float ptr [EBX + 0x2430]       ; 00541028
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0054102e
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00541033
    PUSH dword ptr [EBP + 0x18]         ; 00541036
    PUSH EBX                            ; 00541039
    MOV EDI,dword ptr [EAX + 0x24]      ; 0054103a
    CALL core_charactr.cpp_CCharacter_FUN_00428c00 ; 0054103d
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541042
    TEST EAX,EAX                        ; 00541045
    JZ 0x005415be                       ; 00541047
        ;   XREF to: 005415be (CONDITIONAL_JUMP)  ; LAB_005415be
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 0054104d
    CMP EAX,0x2                         ; 00541053
    JNC 0x005413c5                      ; 00541056
        ;   XREF to: 005413c5 (CONDITIONAL_JUMP)  ; LAB_005413c5
    CMP EAX,0x1                         ; 0054105c
    JNZ 0x005413d0                      ; 0054105f
        ;   XREF to: 005413d0 (CONDITIONAL_JUMP)  ; LAB_005413d0
    PUSH 0x1                            ; 00541065
        ;   Label: LAB_00541065
    PUSH 0x1                            ; 00541067
    LEA EAX,[EBX + 0x150]               ; 00541069
        ;   Label: LAB_00541069
    PUSH EAX                            ; 0054106f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00541070
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00541075
        ;   Label: LAB_00541075
    LEA EAX,[EBX + 0x23a4]              ; 00541078
    MOV dword ptr [EAX + 0x8],0x0       ; 0054107e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00541085
    MOV dword ptr [EAX + 0x4],EDX       ; 00541088
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054108b
    MOV dword ptr [EAX],EDX             ; 0054108e
    FLD float ptr [EBX + 0xbca0]        ; 00541090
        ;   Label: LAB_00541090
    FLDZ                                ; 00541096
    FCOMPP                              ; 00541098
    FNSTSW AX                           ; 0054109a
    SAHF                                ; 0054109c
    JNC 0x005410ae                      ; 0054109d
        ;   XREF to: 005410ae (CONDITIONAL_JUMP)  ; LAB_005410ae
    FLD float ptr [EBX + 0xbca0]        ; 0054109f
    FSUB float ptr [EBP + 0x18]         ; 005410a5
    FSTP float ptr [EBX + 0xbca0]       ; 005410a8
    PUSH EBX                            ; 005410ae
        ;   Label: LAB_005410ae
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 005410af
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005410b4
    TEST EAX,EAX                        ; 005410b7
    JZ 0x00541174                       ; 005410b9
        ;   XREF to: 00541174 (CONDITIONAL_JUMP)  ; LAB_00541174
    FLD float ptr [EBP + 0x18]          ; 005410bf
    FLD ST0                             ; 005410c2
    FMUL double ptr [0x005961c4]        ; 005410c4 | DOUBLE_005961c4
    FLD float ptr [EBX + 0x2424]        ; 005410ca
    FXCH                                ; 005410d0
    FSUBR ST0,ST1                       ; 005410d2
    LEA EDI,[EBX + 0x2420]              ; 005410d4
    FSTP ST1                            ; 005410da
    FSTP float ptr [EBX + 0x2424]       ; 005410dc
    FLD float ptr [EDI]                 ; 005410e2
    FMUL ST1                            ; 005410e4
    FSTP float ptr [EBP + -0x4c]        ; 005410e6
    FLD float ptr [EDI + 0x4]           ; 005410e9
    FMUL ST1                            ; 005410ec
    LEA ESI,[EBX + 0x2414]              ; 005410ee
    FSTP float ptr [EBP + -0x48]        ; 005410f4
    FMUL float ptr [EDI + 0x8]          ; 005410f7
    LEA EAX,[EBX + 0x23a4]              ; 005410fa
    FLD float ptr [EBP + -0x4c]         ; 00541100
    FXCH                                ; 00541103
    FSTP float ptr [EBP + -0x44]        ; 00541105
    FADD float ptr [ESI]                ; 00541108
    FLD float ptr [EBP + -0x48]         ; 0054110a
    FXCH                                ; 0054110d
    FSTP float ptr [EBP + -0x40]        ; 0054110f
    FADD float ptr [ESI + 0x4]          ; 00541112
    FLD float ptr [EBP + -0x44]         ; 00541115
    FXCH                                ; 00541118
    FSTP float ptr [EBP + -0x3c]        ; 0054111a
    FADD float ptr [ESI + 0x8]          ; 0054111d
    FLD float ptr [EBP + -0x40]         ; 00541120
    FXCH                                ; 00541123
    FSTP float ptr [EBP + -0x38]        ; 00541125
    FADD float ptr [EAX]                ; 00541128
    FLD float ptr [EBP + -0x3c]         ; 0054112a
    FXCH                                ; 0054112d
    FSTP float ptr [EBP + -0x34]        ; 0054112f
    FADD float ptr [EAX + 0x4]          ; 00541132
    FLD float ptr [EBP + -0x38]         ; 00541135
    FXCH                                ; 00541138
    FSTP float ptr [EBP + -0x30]        ; 0054113a
    FADD float ptr [EAX + 0x8]          ; 0054113d
    FSTP float ptr [EBP + -0x2c]        ; 00541140
    MOV dword ptr [ESI + 0x8],0x0       ; 00541143
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054114a
    MOV dword ptr [ESI + 0x4],EDX       ; 0054114d
    MOV EDX,dword ptr [ESI + 0x4]       ; 00541150
    MOV dword ptr [ESI],EDX             ; 00541153
    MOV dword ptr [EAX + 0x8],0x0       ; 00541155
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054115c
    MOV dword ptr [EAX + 0x4],EDX       ; 0054115f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00541162
    MOV dword ptr [EAX],EDX             ; 00541165
    LEA EAX,[EBP + -0x34]               ; 00541167
    PUSH EAX                            ; 0054116a
    PUSH EBX                            ; 0054116b
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 0054116c
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00541171
    PUSH EBX                            ; 00541174
        ;   Label: LAB_00541174
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00541175
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0054117a
    LEA ESI,[EBX + 0x150]               ; 0054117d
    PUSH ESI                            ; 00541183
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00541184
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00541189
    PUSH dword ptr [EBP + 0x18]         ; 0054118c
    PUSH EBX                            ; 0054118f
    CALL core_charactr.cpp_CCharacter_FUN_0042a150 ; 00541190
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541195
    PUSH ESI                            ; 00541198
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00541199
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0054119e
    MOV ESI,dword ptr [ESI + 0x8]       ; 005411a1
    PUSH ESI                            ; 005411a4
    PUSH EAX                            ; 005411a5
    MOV dword ptr [EBP + -0xc],ESI      ; 005411a6
    LEA ESI,[EBX + 0xbd24]              ; 005411a9
    PUSH ESI                            ; 005411af
    MOV dword ptr [EBP + -0x10],EAX     ; 005411b0
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 005411b3
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005411b8
    PUSH ESI                            ; 005411bb
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 005411bc
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance * this_ptr)
    MOV ESI,dword ptr [EBX + 0xe19c]    ; 005411c1
    ADD ESP,0x4                         ; 005411c7
    TEST ESI,ESI                        ; 005411ca
    JZ 0x0054131f                       ; 005411cc
        ;   XREF to: 0054131f (CONDITIONAL_JUMP)  ; LAB_0054131f
    FLD float ptr [EBX + 0xe1a0]        ; 005411d2
    FADD float ptr [EBP + 0x18]         ; 005411d8
    FST float ptr [EBX + 0xe1a0]        ; 005411db
    FCOMP float ptr [0x005a28d8]        ; 005411e1 | FLOAT_005a28d8
    FNSTSW AX                           ; 005411e7
    SAHF                                ; 005411e9
    JBE 0x0054131f                      ; 005411ea
        ;   XREF to: 0054131f (CONDITIONAL_JUMP)  ; LAB_0054131f
    PUSH 0xbd58                         ; 005411f0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 005411f5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 005411fa
    TEST EAX,EAX                        ; 005411fd
    JZ 0x0054120a                       ; 005411ff
        ;   XREF to: 0054120a (CONDITIONAL_JUMP)  ; LAB_0054120a
    PUSH EAX                            ; 00541201
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0 ; 00541202
        ;   XREF to: 004b8ca0 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 00541207
    MOV ESI,EAX                         ; 0054120a
        ;   Label: LAB_0054120a
    MOV dword ptr [EBP + -0x8],ESI      ; 0054120c
    TEST ESI,ESI                        ; 0054120f
    JZ 0x0054131f                       ; 00541211
        ;   XREF to: 0054131f (CONDITIONAL_JUMP)  ; LAB_0054131f
    PUSH ESI                            ; 00541217
    MOV EDI,dword ptr [0x005baf90]      ; 00541218 | g_CDemonMission_PTR_005baf90
    PUSH EDI                            ; 0054121e | DAT_01cc9450
    MOV dword ptr [EBX + 0x70],0x2      ; 0054121f
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 00541226
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    LEA EAX,[EBX + 0x20]                ; 0054122b
    LEA EDI,[ESI + 0x20]                ; 0054122e
    MOV EDX,dword ptr [EAX]             ; 00541231
    MOV dword ptr [EDI],EDX             ; 00541233
    MOV EDX,dword ptr [EAX + 0x4]       ; 00541235
    MOV dword ptr [EDI + 0x4],EDX       ; 00541238
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054123b
    MOV dword ptr [EDI + 0x8],EDX       ; 0054123e
    MOV EAX,dword ptr [EAX + 0xc]       ; 00541241
    ADD ESI,0x30                        ; 00541244
    MOV dword ptr [EDI + 0xc],EAX       ; 00541247
    LEA EAX,[EBX + 0x30]                ; 0054124a
    ADD ESP,0x8                         ; 0054124d
    CMP ESI,EAX                         ; 00541250
    JZ 0x00541264                       ; 00541252
        ;   XREF to: 00541264 (CONDITIONAL_JUMP)  ; LAB_00541264
    MOV EDX,dword ptr [EAX]             ; 00541254
    MOV dword ptr [ESI],EDX             ; 00541256
    MOV EDX,dword ptr [EAX + 0x4]       ; 00541258
    MOV dword ptr [ESI + 0x4],EDX       ; 0054125b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054125e
    MOV dword ptr [ESI + 0x8],EDX       ; 00541261
    MOV EAX,dword ptr [EBP + -0x8]      ; 00541264
        ;   Label: LAB_00541264
    MOV ESI,0x596189                    ; 00541267 | = "hdwing.cth"
    MOV EDX,dword ptr [EBP + -0x8]      ; 0054126c
    LEA EDI,[EAX + 0x2a90]              ; 0054126f
    MOV dword ptr [EAX + 0x2a8c],0x1    ; 00541275
    PUSH EDI                            ; 0054127f
    MOV AL,byte ptr [ESI]               ; 00541280 | = "hdwing.cth" | s_hdwing_cth_00596189+2
        ;   Label: LAB_00541280
    MOV byte ptr [EDI],AL               ; 00541282
    CMP AL,0x0                          ; 00541284
    JZ 0x00541298                       ; 00541286
        ;   XREF to: 00541298 (CONDITIONAL_JUMP)  ; LAB_00541298
    MOV AL,byte ptr [ESI + 0x1]         ; 00541288 | s_hdwing_cth_00596189+1 | s_hdwing_cth_00596189+3
    ADD ESI,0x2                         ; 0054128b
    MOV byte ptr [EDI + 0x1],AL         ; 0054128e
    ADD EDI,0x2                         ; 00541291
    CMP AL,0x0                          ; 00541294
    JNZ 0x00541280                      ; 00541296
        ;   XREF to: 00541280 (CONDITIONAL_JUMP)  ; LAB_00541280
    POP EDI                             ; 00541298
        ;   Label: LAB_00541298
    MOV EAX,dword ptr [EBP + -0x8]      ; 00541299
    PUSH EDX                            ; 0054129c
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0054129d
    CALL dword ptr [EAX]                ; 005412a3
    ADD ESP,0x4                         ; 005412a5
    MOV ECX,dword ptr [EBP + -0x10]     ; 005412a8
    PUSH dword ptr [EBP + -0xc]         ; 005412ab
    MOV ESI,dword ptr [EBP + -0x8]      ; 005412ae
    PUSH ECX                            ; 005412b1
    ADD ESI,0x150                       ; 005412b2
    PUSH ESI                            ; 005412b8
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 005412b9
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005412be
    PUSH ESI                            ; 005412c1
    MOV ESI,dword ptr [EBP + -0x8]      ; 005412c2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 005412c5
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x108]     ; 005412ca
    MOV dword ptr [ESI + 0x108],EAX     ; 005412d0
    ADD ESP,0x4                         ; 005412d6
    MOV EAX,dword ptr [EBX + 0x10c]     ; 005412d9
    PUSH ESI                            ; 005412df
    MOV dword ptr [ESI + 0x10c],EAX     ; 005412e0
    MOV EDI,dword ptr [0x005baf90]      ; 005412e6 | g_CDemonMission_PTR_005baf90
    MOV EAX,dword ptr [EBX + 0x110]     ; 005412ec
    PUSH EDI                            ; 005412f2 | DAT_01cc9450
    MOV dword ptr [ESI + 0x110],EAX     ; 005412f3
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 005412f9
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBP + -0x8]      ; 005412fe
    MOV EAX,dword ptr [EAX + 0x2c20]    ; 00541301
    MOV ESI,dword ptr [EBX + 0xe16c]    ; 00541307
    MOV dword ptr [EBX + 0xe16c],EAX    ; 0054130d
    MOV EAX,dword ptr [EBP + -0x8]      ; 00541313
    ADD ESP,0x8                         ; 00541316
    MOV dword ptr [EAX + 0x2c20],ESI    ; 00541319
    CMP dword ptr [EBX + 0x2618],0x0    ; 0054131f
        ;   Label: LAB_0054131f
    JZ 0x0054134f                       ; 00541326
        ;   XREF to: 0054134f (CONDITIONAL_JUMP)  ; LAB_0054134f
    LEA EAX,[EBX + 0xbd24]              ; 00541328
    PUSH EAX                            ; 0054132e
    PUSH dword ptr [EBX + 0x240c]       ; 0054132f
    LEA EAX,[EBX + 0x30]                ; 00541335
    PUSH dword ptr [EBP + 0x18]         ; 00541338
    PUSH EAX                            ; 0054133b
    LEA EAX,[EBX + 0x20]                ; 0054133c
    PUSH EAX                            ; 0054133f
    LEA EAX,[EBX + 0xdfd8]              ; 00541340
    PUSH EAX                            ; 00541346
    CALL core_cloth.cpp_CClothList_process_FUN_00438550 ; 00541347
        ;   XREF to: 00438550 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_00438550(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0054134c
    PUSH 0x596194                       ; 0054134f | = "succubusShutUp"
        ;   Label: LAB_0054134f
    MOV EDX,dword ptr [0x005b7650]      ; 00541354 | DAT_005b7650
    PUSH EDX                            ; 0054135a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0054135b
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00541360
    TEST EAX,EAX                        ; 00541363
    JNZ 0x005415e4                      ; 00541365
        ;   XREF to: 005415e4 (CONDITIONAL_JUMP)  ; LAB_005415e4
    MOV ECX,dword ptr [EBX + 0xe194]    ; 0054136b
    PUSH ECX                            ; 00541371
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00541372
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00541377
    TEST EAX,EAX                        ; 0054137a
    JNZ 0x0054139a                      ; 0054137c
        ;   XREF to: 0054139a (CONDITIONAL_JUMP)  ; LAB_0054139a
    FLD float ptr [EBX + 0xe198]        ; 0054137e
    FSUB float ptr [EBP + 0x18]         ; 00541384
    FST float ptr [EBX + 0xe198]        ; 00541387
    FLDZ                                ; 0054138d
    FCOMPP                              ; 0054138f
    FNSTSW AX                           ; 00541391
    SAHF                                ; 00541393
    JA 0x005415fa                       ; 00541394
        ;   XREF to: 005415fa (CONDITIONAL_JUMP)  ; LAB_005415fa
    MOV ESP,EBP                         ; 0054139a
        ;   Label: LAB_0054139a
    POP EBP                             ; 0054139c
    POP EDI                             ; 0054139d
    POP ESI                             ; 0054139e
    POP EBX                             ; 0054139f
    RET                                 ; 005413a0
    PUSH 0x1                            ; 005413a1
        ;   Label: LAB_005413a1
    PUSH 0x0                            ; 005413a3
    PUSH ESI                            ; 005413a5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005413a6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005413ab
    PUSH EBX                            ; 005413ae
    PUSH 0x59614c                       ; 005413af | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005ad350]      ; 005413b4 | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 005413ba | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005413bb
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    JMP 0x00541075                      ; 005413c0
        ;   XREF to: 00541075 (UNCONDITIONAL_JUMP)  ; LAB_00541075
    JBE 0x00541065                      ; 005413c5
        ;   XREF to: 00541065 (CONDITIONAL_JUMP)  ; LAB_00541065
        ;   Label: LAB_005413c5
    CMP EAX,0x3                         ; 005413cb
    JZ 0x005413a1                       ; 005413ce
        ;   XREF to: 005413a1 (CONDITIONAL_JUMP)  ; LAB_005413a1
    PUSH 0x1                            ; 005413d0
        ;   Label: LAB_005413d0
    PUSH 0x0                            ; 005413d2
    JMP 0x00541069                      ; 005413d4
        ;   XREF to: 00541069 (UNCONDITIONAL_JUMP)  ; LAB_00541069
    PUSH dword ptr [EBP + 0x18]         ; 005413d9
        ;   Label: LAB_005413d9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005413dc
    PUSH EBX                            ; 005413e2
    CALL dword ptr [EAX + 0x13c]        ; 005413e3
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 005413e9
    ADD ESP,0x8                         ; 005413ef
    TEST EDX,EDX                        ; 005413f2
    JZ 0x00541447                       ; 005413f4
        ;   XREF to: 00541447 (CONDITIONAL_JUMP)  ; LAB_00541447
    LEA EDI,[EBX + 0x20]                ; 005413f6
    FLD float ptr [EDI]                 ; 005413f9
    FSUB float ptr [EDX + 0x20]         ; 005413fb
    FSTP float ptr [EBP + -0x28]        ; 005413fe
    FLD float ptr [EDI + 0x4]           ; 00541401
    FSUB float ptr [EDX + 0x24]         ; 00541404
    FST float ptr [EBP + -0x24]         ; 00541407
    FMUL float ptr [EBP + -0x24]        ; 0054140a
    FLD float ptr [EBP + -0x28]         ; 0054140d
    FMUL ST0                            ; 00541410
    FLD float ptr [EDI + 0x8]           ; 00541412
    FSUB float ptr [EDX + 0x28]         ; 00541415
    FXCH                                ; 00541418
    FADDP ST2,ST0                       ; 0054141a
    FST float ptr [EBP + -0x20]         ; 0054141c
    FMUL float ptr [EBP + -0x20]        ; 0054141f
    FADDP                               ; 00541422
    FSQRT                               ; 00541424
    FCOMP float ptr [EBX + 0xbc9c]      ; 00541426
    FNSTSW AX                           ; 0054142c
    SAHF                                ; 0054142e
    JNC 0x00541090                      ; 0054142f
        ;   XREF to: 00541090 (CONDITIONAL_JUMP)  ; LAB_00541090
    PUSH 0x1                            ; 00541435
    PUSH 0x1                            ; 00541437
    PUSH ESI                            ; 00541439
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054143a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054143f
    JMP 0x00541090                      ; 00541442
        ;   XREF to: 00541090 (UNCONDITIONAL_JUMP)  ; LAB_00541090
    PUSH dword ptr [EBP + 0x18]         ; 00541447
        ;   Label: LAB_00541447
    PUSH EBX                            ; 0054144a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 0054144b
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541450
    TEST EAX,EAX                        ; 00541453
    JZ 0x00541090                       ; 00541455
        ;   XREF to: 00541090 (CONDITIONAL_JUMP)  ; LAB_00541090
    PUSH 0x1                            ; 0054145b
    PUSH 0x1                            ; 0054145d
    PUSH ESI                            ; 0054145f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00541460
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00541465
    JMP 0x00541090                      ; 00541468
        ;   XREF to: 00541090 (UNCONDITIONAL_JUMP)  ; LAB_00541090
    PUSH dword ptr [EBP + 0x18]         ; 0054146d
        ;   Label: LAB_0054146d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00541470
    PUSH EBX                            ; 00541476
    CALL dword ptr [EAX + 0x13c]        ; 00541477
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 0054147d
    ADD ESP,0x8                         ; 00541483
    TEST EDX,EDX                        ; 00541486
    JNZ 0x005414c3                      ; 00541488
        ;   XREF to: 005414c3 (CONDITIONAL_JUMP)  ; LAB_005414c3
    PUSH dword ptr [EBP + 0x18]         ; 0054148a
    PUSH EBX                            ; 0054148d
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 0054148e
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541493
    LEA ESI,[EBX + 0x150]               ; 00541496
    TEST EAX,EAX                        ; 0054149c
    JZ 0x005414b2                       ; 0054149e
        ;   XREF to: 005414b2 (CONDITIONAL_JUMP)  ; LAB_005414b2
    PUSH 0x1                            ; 005414a0
    PUSH 0x1                            ; 005414a2
    PUSH ESI                            ; 005414a4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005414a5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005414aa
    JMP 0x00541090                      ; 005414ad
        ;   XREF to: 00541090 (UNCONDITIONAL_JUMP)  ; LAB_00541090
    PUSH 0x1                            ; 005414b2
        ;   Label: LAB_005414b2
    PUSH EAX                            ; 005414b4
    PUSH ESI                            ; 005414b5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005414b6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005414bb
    JMP 0x00541090                      ; 005414be
        ;   XREF to: 00541090 (UNCONDITIONAL_JUMP)  ; LAB_00541090
    PUSH 0x3e32b8c2                     ; 005414c3
        ;   Label: LAB_005414c3
    LEA EAX,[EBX + 0x23a4]              ; 005414c8
    PUSH 0x3f000000                     ; 005414ce
    MOV dword ptr [EAX + 0x8],0x0       ; 005414d3
    XOR ECX,ECX                         ; 005414da
    MOV EDX,dword ptr [EAX + 0x8]       ; 005414dc
    MOV dword ptr [EAX + 0x4],EDX       ; 005414df
    MOV EDX,dword ptr [EAX + 0x4]       ; 005414e2
    MOV dword ptr [EAX],EDX             ; 005414e5
    MOV EAX,[0x005a28c8]                ; 005414e7 | FLOAT_005a28c8
    MOV dword ptr [EBP + -0x58],ECX     ; 005414ec
    MOV dword ptr [EBP + -0x50],EAX     ; 005414ef
    LEA EAX,[EBP + -0x58]               ; 005414f2
    MOV dword ptr [EBP + -0x54],ECX     ; 005414f5
    PUSH EAX                            ; 005414f8
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 005414f9
    PUSH EAX                            ; 005414ff
    MOV ESI,dword ptr [EAX + 0x14c]     ; 00541500
    CALL dword ptr [ESI + 0xbc]         ; 00541506
    ADD ESP,0x4                         ; 0054150c
    PUSH EAX                            ; 0054150f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00541510
    ADD EAX,0x20                        ; 00541516
    PUSH EAX                            ; 00541519
    PUSH EBX                            ; 0054151a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0054151b
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00541520
    TEST EAX,EAX                        ; 00541523
    JL 0x00541090                       ; 00541525
        ;   XREF to: 00541090 (CONDITIONAL_JUMP)  ; LAB_00541090
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0054152b
    LEA ESI,[EBX + 0x20]                ; 00541531
    FLD float ptr [EAX + 0x20]          ; 00541534
    FSUB float ptr [ESI]                ; 00541537
    FSTP float ptr [EBP + -0x64]        ; 00541539
    FLD float ptr [EAX + 0x24]          ; 0054153c
    FSUB float ptr [ESI + 0x4]          ; 0054153f
    FST float ptr [EBP + -0x60]         ; 00541542
    FMUL float ptr [EBP + -0x60]        ; 00541545
    FLD float ptr [EBP + -0x64]         ; 00541548
    FMUL ST0                            ; 0054154b
    FLD float ptr [EAX + 0x28]          ; 0054154d
    FSUB float ptr [ESI + 0x8]          ; 00541550
    FXCH                                ; 00541553
    FADDP ST2,ST0                       ; 00541555
    FST float ptr [EBP + -0x5c]         ; 00541557
    FMUL float ptr [EBP + -0x5c]        ; 0054155a
    FADDP                               ; 0054155d
    FSQRT                               ; 0054155f
    FCOMP float ptr [0x005a28d4]        ; 00541561 | FLOAT_005a28d4
    FNSTSW AX                           ; 00541567
    SAHF                                ; 00541569
    JNC 0x00541090                      ; 0054156a
        ;   XREF to: 00541090 (CONDITIONAL_JUMP)  ; LAB_00541090
    MOV EDI,dword ptr [EBX + 0xe19c]    ; 00541570
    TEST EDI,EDI                        ; 00541576
    JNZ 0x00541090                      ; 00541578
        ;   XREF to: 00541090 (CONDITIONAL_JUMP)  ; LAB_00541090
    MOV EAX,dword ptr [EBX + 0xe194]    ; 0054157e
    MOV dword ptr [EBX + 0xe19c],0x1    ; 00541584
    PUSH EAX                            ; 0054158e
    MOV dword ptr [EBX + 0xe1a0],EDI    ; 0054158f
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00541595
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0054159a
    PUSH 0x596176                       ; 0054159d | = "succubus-morph.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005415a2
    PUSH EBX                            ; 005415a8
    MOV dword ptr [EBX + 0xe198],0x461c3f9a ; 005415a9
    CALL dword ptr [EAX + 0x28]         ; 005415b3
    ADD ESP,0x8                         ; 005415b6
    JMP 0x00541090                      ; 005415b9
        ;   XREF to: 00541090 (UNCONDITIONAL_JUMP)  ; LAB_00541090
    CMP EDI,0x1                         ; 005415be
        ;   Label: LAB_005415be
    JNC 0x005415d0                      ; 005415c1
        ;   XREF to: 005415d0 (CONDITIONAL_JUMP)  ; LAB_005415d0
    TEST EDI,EDI                        ; 005415c3
    JZ 0x005413d9                       ; 005415c5
        ;   XREF to: 005413d9 (CONDITIONAL_JUMP)  ; LAB_005413d9
    JMP 0x00541090                      ; 005415cb
        ;   XREF to: 00541090 (UNCONDITIONAL_JUMP)  ; LAB_00541090
    JBE 0x0054146d                      ; 005415d0
        ;   XREF to: 0054146d (CONDITIONAL_JUMP)  ; LAB_0054146d
        ;   Label: LAB_005415d0
    CMP EDI,0x2                         ; 005415d6
    JZ 0x0054146d                       ; 005415d9
        ;   XREF to: 0054146d (CONDITIONAL_JUMP)  ; LAB_0054146d
    JMP 0x00541090                      ; 005415df
        ;   XREF to: 00541090 (UNCONDITIONAL_JUMP)  ; LAB_00541090
    MOV ESI,dword ptr [EBX + 0xe194]    ; 005415e4
        ;   Label: LAB_005415e4
    PUSH ESI                            ; 005415ea
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 005415eb
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 005415f0
    MOV ESP,EBP                         ; 005415f3
    POP EBP                             ; 005415f5
    POP EDI                             ; 005415f6
    POP ESI                             ; 005415f7
    POP EBX                             ; 005415f8
    RET                                 ; 005415f9
    PUSH 0x41200000                     ; 005415fa
        ;   Label: LAB_005415fa
    PUSH 0x40a00000                     ; 005415ff
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00541604
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    ADD ESP,0x8                         ; 00541609
    MOV dword ptr [EBP + -0x4],EAX      ; 0054160c
    PUSH 0x5961a3                       ; 0054160f | = "succubus-horny-?.wav"
    FLD float ptr [EBP + -0x4]          ; 00541614
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00541617
    PUSH EBX                            ; 0054161d
    FSTP float ptr [EBX + 0xe198]       ; 0054161e
    CALL dword ptr [EAX + 0x24]         ; 00541624
    ADD ESP,0x8                         ; 00541627
    MOV dword ptr [EBX + 0xe194],EAX    ; 0054162a
    MOV ESP,EBP                         ; 00541630
    POP EBP                             ; 00541632
    POP EDI                             ; 00541633
    POP ESI                             ; 00541634
    POP EBX                             ; 00541635
    RET                                 ; 00541636

