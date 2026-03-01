; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_004f8098 = 004f8632
;   TerminatedCString s_s_confused_while_walking_0062f6b3
;   TerminatedCString s_icepick_miss_wav_0062f6dd
;   double DOUBLE_0062f6f3 = 12.5663706140000
;   double DOUBLE_0062f6fb = 32
;   double DOUBLE_0062f703 = -1.57079632675000
;   float FLOAT_0062f70b = 3.141593
;   double DOUBLE_0062f713 = 1.57079632675000
;   float FLOAT_0062f71b = -3.141593
;   double DOUBLE_0062f723 = 3.14159265350000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;   int INT_02db8970
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_hero.cpp_CHero_FUN_004f2af0
;   core_hero.cpp_CHero_FUN_004f2c40
;   core_hero.cpp_CHero_FUN_004f2d70
;   core_hero.cpp_CHero_FUN_004f2ed0
;   core_hero.cpp_CHero_FUN_004f2f50
;   core_hero.cpp_CHero_FUN_004f30f0
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f80b0
        ;   Label: core_icepick.cpp_CIcePick_process_FUN_004f80b0
    PUSH ESI                            ; 004f80b1
    PUSH EDI                            ; 004f80b2
    PUSH EBP                            ; 004f80b3
    MOV EBP,ESP                         ; 004f80b4
    SUB ESP,0x88                        ; 004f80b6
    AND ESP,0xfffffff8                  ; 004f80bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f80bf
    PUSH dword ptr [EBP + 0x18]         ; 004f80c2
    PUSH EBX                            ; 004f80c5
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004f80c6
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f80cb
    TEST EAX,EAX                        ; 004f80ce
    JZ 0x004f83cb                       ; 004f80d0
        ;   XREF to: 004f83cb (CONDITIONAL_JUMP)  ; LAB_004f83cb
    CMP dword ptr [EBX + 0x1fbd0],0x4   ; 004f80d6
    JZ 0x004f83cb                       ; 004f80dd
        ;   XREF to: 004f83cb (CONDITIONAL_JUMP)  ; LAB_004f83cb
    CMP dword ptr [EBX + 0xbe28],0x2    ; 004f80e3
    JZ 0x004f83d2                       ; 004f80ea
        ;   XREF to: 004f83d2 (CONDITIONAL_JUMP)  ; LAB_004f83d2
    CMP dword ptr [EBX + 0x24f8],0x0    ; 004f80f0
        ;   Label: LAB_004f80f0
    SETNZ AL                            ; 004f80f7
    FLD float ptr [EBP + 0x18]          ; 004f80fa
    FLD ST0                             ; 004f80fd
    FMUL double ptr [0x0062f6f3]        ; 004f80ff | DOUBLE_0062f6f3
    AND EAX,0xff                        ; 004f8105
    FLD float ptr [EBX + 0xbe24]        ; 004f810a
    MOV dword ptr [EBX + 0x1fbf4],EAX   ; 004f8110
    FSUBRP ST2,ST0                      ; 004f8116
    FSTP float ptr [EBX + 0x2438]       ; 004f8118
    FST float ptr [EBX + 0xbe24]        ; 004f811e
    FLDZ                                ; 004f8124
    FCOMPP                              ; 004f8126
    FNSTSW AX                           ; 004f8128
    SAHF                                ; 004f812a
    JBE 0x004f8137                      ; 004f812b
        ;   XREF to: 004f8137 (CONDITIONAL_JUMP)  ; LAB_004f8137
    MOV dword ptr [EBX + 0xbe24],0x0    ; 004f812d
    LEA ESI,[EBX + 0x23ac]              ; 004f8137
        ;   Label: LAB_004f8137
    PUSH dword ptr [EBP + 0x18]         ; 004f813d
    MOV dword ptr [ESI + 0x8],0x0       ; 004f8140
    PUSH EBX                            ; 004f8147
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f8148
    MOV dword ptr [ESI + 0x4],EAX       ; 004f814b
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f814e
    MOV dword ptr [ESI],EAX             ; 004f8151
    CALL core_icepick.cpp_CIcePick_FUN_004f93a0 ; 004f8153
        ;   XREF to: 004f93a0 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_FUN_004f93a0(CIcePick * this_ptr)
    ADD ESP,0x8                         ; 004f8158
    PUSH dword ptr [EBP + 0x18]         ; 004f815b
    FLD float ptr [EBX + 0x23b4]        ; 004f815e
    PUSH EBX                            ; 004f8164
    FSTP float ptr [EBX + 0x2434]       ; 004f8165
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 004f816b
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f8170
    LEA EDX,[EBX + 0x158]               ; 004f8173
    TEST EAX,EAX                        ; 004f8179
    JZ 0x004f86a0                       ; 004f817b
        ;   XREF to: 004f86a0 (CONDITIONAL_JUMP)  ; LAB_004f86a0
    MOV dword ptr [ESI + 0x8],0x0       ; 004f8181
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f8188
    MOV dword ptr [ESI + 0x4],EAX       ; 004f818b
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f818e
    MOV dword ptr [ESI],EAX             ; 004f8191
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004f8193
    CMP EAX,0x2                         ; 004f8199
    JNC 0x004f8410                      ; 004f819c
        ;   XREF to: 004f8410 (CONDITIONAL_JUMP)  ; LAB_004f8410
    CMP EAX,0x1                         ; 004f81a2
    JNZ 0x004f8417                      ; 004f81a5
        ;   XREF to: 004f8417 (CONDITIONAL_JUMP)  ; LAB_004f8417
    PUSH EAX                            ; 004f81ab
    PUSH EAX                            ; 004f81ac
    PUSH EDX                            ; 004f81ad
        ;   Label: LAB_004f81ad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f81ae
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f81ae
    ADD ESP,0xc                         ; 004f81b3
        ;   Label: LAB_004f81b3
    MOV ECX,dword ptr [EBX + 0x2598]    ; 004f81b6
        ;   Label: LAB_004f81b6
    TEST ECX,ECX                        ; 004f81bc
    JZ 0x004f8738                       ; 004f81be
        ;   XREF to: 004f8738 (CONDITIONAL_JUMP)  ; LAB_004f8738
    CMP dword ptr [EBX + 0x259c],0x0    ; 004f81c4
    JNZ 0x004f8294                      ; 004f81cb
        ;   XREF to: 004f8294 (CONDITIONAL_JUMP)  ; LAB_004f8294
    LEA EAX,[ECX + 0x20]                ; 004f81d1
    PUSH EAX                            ; 004f81d4
    LEA EAX,[ESP + 0x34]                ; 004f81d5
    PUSH EAX                            ; 004f81d9
    PUSH EBX                            ; 004f81da
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f81db
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004f81e0
    PUSH EAX                            ; 004f81e3
    LEA EAX,[ESP + 0x58]                ; 004f81e4
    PUSH EAX                            ; 004f81e8
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f81e9
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004f81ee
    PUSH dword ptr [EAX + 0x4]          ; 004f81f1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f81f4
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x88],EAX      ; 004f81f9
    FLD float ptr [ESP + 0x88]          ; 004f8200
    ADD ESP,0x4                         ; 004f8207
    FST float ptr [ESP]                 ; 004f820a
    FCOMP double ptr [0x0062f703]       ; 004f820d | DOUBLE_0062f703
    FNSTSW AX                           ; 004f8213
    SAHF                                ; 004f8215
    JNC 0x004f8224                      ; 004f8216
        ;   XREF to: 004f8224 (CONDITIONAL_JUMP)  ; LAB_004f8224
    FLD float ptr [ESP]                 ; 004f8218
    FADD float ptr [0x0062f70b]         ; 004f821b | FLOAT_0062f70b
    FSTP float ptr [ESP]                ; 004f8221
    FLD float ptr [ESP]                 ; 004f8224
        ;   Label: LAB_004f8224
    FCOMP double ptr [0x0062f713]       ; 004f8227 | DOUBLE_0062f713
    FNSTSW AX                           ; 004f822d
    SAHF                                ; 004f822f
    JBE 0x004f823e                      ; 004f8230
        ;   XREF to: 004f823e (CONDITIONAL_JUMP)  ; LAB_004f823e
    FLD float ptr [ESP]                 ; 004f8232
    FADD float ptr [0x0062f71b]         ; 004f8235 | FLOAT_0062f71b
    FSTP float ptr [ESP]                ; 004f823b
    FLD float ptr [EBP + 0x18]          ; 004f823e
        ;   Label: LAB_004f823e
    FMUL double ptr [0x0062f723]        ; 004f8241 | DOUBLE_0062f723
    FLD float ptr [ESP]                 ; 004f8247
    FXCH                                ; 004f824a
    FST float ptr [ESP + 0x80]          ; 004f824c
    FCHS                                ; 004f8253
    FSTP float ptr [ESP + 0x7c]         ; 004f8255
    FCOMP float ptr [ESP + 0x7c]        ; 004f8259
    FNSTSW AX                           ; 004f825d
    SAHF                                ; 004f825f
    JNC 0x004f8269                      ; 004f8260
        ;   XREF to: 004f8269 (CONDITIONAL_JUMP)  ; LAB_004f8269
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004f8262
    MOV dword ptr [ESP],EAX             ; 004f8266
    FLD float ptr [ESP]                 ; 004f8269
        ;   Label: LAB_004f8269
    FCOMP float ptr [ESP + 0x80]        ; 004f826c
    FNSTSW AX                           ; 004f8273
    SAHF                                ; 004f8275
    JBE 0x004f8282                      ; 004f8276
        ;   XREF to: 004f8282 (CONDITIONAL_JUMP)  ; LAB_004f8282
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f8278
    MOV dword ptr [ESP],EAX             ; 004f827f
    FLD float ptr [EBX + 0x34]          ; 004f8282
        ;   Label: LAB_004f8282
    FADD float ptr [ESP]                ; 004f8285
    PUSH EBX                            ; 004f8288
    FSTP float ptr [EBX + 0x34]         ; 004f8289
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004f828c
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f8291
    MOV ESI,dword ptr [EBX + 0x2598]    ; 004f8294
        ;   Label: LAB_004f8294
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f829a
    PUSH 0x0                            ; 004f82a0
    MOV dword ptr [ESP + 0x88],EAX      ; 004f82a2
    LEA EAX,[ESP + 0x28]                ; 004f82a9
    PUSH EAX                            ; 004f82ad
    LEA EDI,[EBX + 0x158]               ; 004f82ae
    PUSH EDI                            ; 004f82b4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f82b5
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f82ba
    PUSH EAX                            ; 004f82bd
    PUSH EBX                            ; 004f82be
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004f82bf
    PUSH ESI                            ; 004f82c6
    CALL dword ptr [EAX + 0x124]        ; 004f82c7
    ADD ESP,0xc                         ; 004f82cd
    TEST EAX,EAX                        ; 004f82d0
    JZ 0x004f8716                       ; 004f82d2
        ;   XREF to: 004f8716 (CONDITIONAL_JUMP)  ; LAB_004f8716
    CMP dword ptr [EBX + 0x2598],0x0    ; 004f82d8
    JNZ 0x004f8721                      ; 004f82df
        ;   XREF to: 004f8721 (CONDITIONAL_JUMP)  ; LAB_004f8721
    PUSH 0x1                            ; 004f82e5
        ;   Label: LAB_004f82e5
    PUSH 0x0                            ; 004f82e7
    LEA EAX,[EBX + 0x158]               ; 004f82e9
    PUSH EAX                            ; 004f82ef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f82f0
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f82f0
    ADD ESP,0xc                         ; 004f82f5
    LEA EAX,[EBX + 0x1f738]             ; 004f82f8
        ;   Label: LAB_004f82f8
    PUSH EAX                            ; 004f82fe
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004ffad0 ; 004f82ff
        ;   XREF to: 004ffad0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateInventory_FUN_004ffad0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004f8304
    MOV EDI,dword ptr [0x03f95d78]      ; 004f8307 | g_CWeaponClassInfo.name_hash
    PUSH EDI                            ; 004f830d
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 004f830e
    PUSH EAX                            ; 004f8314
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f8315
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004f831a
    ADD ESP,0x8                         ; 004f831c
    TEST EAX,EAX                        ; 004f831f
    JZ 0x004f833d                       ; 004f8321
        ;   XREF to: 004f833d (CONDITIONAL_JUMP)  ; LAB_004f833d
    PUSH dword ptr [EBP + 0x18]         ; 004f8323
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f8326
    PUSH ESI                            ; 004f832c
    CALL dword ptr [EAX + 0x4]          ; 004f832d
    ADD ESP,0x8                         ; 004f8330
    MOV dword ptr [ESI + 0x568],0x64    ; 004f8333
    PUSH EBX                            ; 004f833d
        ;   Label: LAB_004f833d
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 004f833e
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f8343
    LEA EAX,[EBX + 0x158]               ; 004f8346
    PUSH EAX                            ; 004f834c
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f834d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004f8351
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f8356
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8359
    PUSH EBX                            ; 004f835f
    CALL dword ptr [EAX + 0x120]        ; 004f8360
    ADD ESP,0x4                         ; 004f8366
    TEST EAX,EAX                        ; 004f8369
    JNZ 0x004f83b3                      ; 004f836b
        ;   XREF to: 004f83b3 (CONDITIONAL_JUMP)  ; LAB_004f83b3
    PUSH 0x59ddb0                       ; 004f836d
    MOV ECX,dword ptr [0x02db8970]      ; 004f8372 | INT_02db8970
    PUSH ECX                            ; 004f8378
    LEA EAX,[EBX + 0x1fbe4]             ; 004f8379
    PUSH dword ptr [EBX + 0x1fbf0]      ; 004f837f
    PUSH EAX                            ; 004f8385
    LEA ESI,[ESP + 0x14]                ; 004f8386
    LEA EDI,[ESP + 0x24]                ; 004f838a
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 004f838e
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x14]                ; 004f8393
    ADD ESP,0x4                         ; 004f8397
    LEA EAX,[ESP + 0x20]                ; 004f839a
    MOVSD ES:EDI,ESI                    ; 004f839e
    MOVSD ES:EDI,ESI                    ; 004f839f
    MOVSD ES:EDI,ESI                    ; 004f83a0
    MOVSD ES:EDI,ESI                    ; 004f83a1
    PUSH EAX                            ; 004f83a2
    MOV ESI,dword ptr [ESP + 0x88]      ; 004f83a3
    PUSH ESI                            ; 004f83aa
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 004f83ab
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004f83b0
    PUSH dword ptr [EBP + 0x18]         ; 004f83b3
        ;   Label: LAB_004f83b3
    PUSH EBX                            ; 004f83b6
    CALL core_icepick.cpp_CIcePick_FUN_004f8810 ; 004f83b7
        ;   XREF to: 004f8810 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_FUN_004f8810(CIcePick * this_ptr)
    ADD ESP,0x8                         ; 004f83bc
    PUSH dword ptr [EBP + 0x18]         ; 004f83bf
    PUSH EBX                            ; 004f83c2
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004f83c3
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f83c8
    MOV ESP,EBP                         ; 004f83cb
        ;   Label: LAB_004f83cb
    POP EBP                             ; 004f83cd
    POP EDI                             ; 004f83ce
    POP ESI                             ; 004f83cf
    POP EBX                             ; 004f83d0
    RET                                 ; 004f83d1
    PUSH dword ptr [EBP + 0x18]         ; 004f83d2
        ;   Label: LAB_004f83d2
    PUSH EBX                            ; 004f83d5
    CALL core_icepick.cpp_CIcePick_FUN_004f8c70 ; 004f83d6
        ;   XREF to: 004f8c70 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_FUN_004f8c70(CIcePick * this_ptr)
    ADD ESP,0x8                         ; 004f83db
    JMP 0x004f80f0                      ; 004f83de
        ;   XREF to: 004f80f0 (UNCONDITIONAL_JUMP)  ; LAB_004f80f0
    PUSH 0x1                            ; 004f83e3
        ;   Label: LAB_004f83e3
    PUSH 0x0                            ; 004f83e5
    PUSH EDX                            ; 004f83e7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f83e8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f83ed
    PUSH EBX                            ; 004f83f0
    PUSH 0x62f6b3                       ; 004f83f1 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 004f83f6 | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 004f83fc | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f83fd
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004f81b3                      ; 004f8402
        ;   XREF to: 004f81b3 (UNCONDITIONAL_JUMP)  ; LAB_004f81b3
    PUSH 0x1                            ; 004f8407
        ;   Label: LAB_004f8407
    PUSH 0x2                            ; 004f8409
    JMP 0x004f81ad                      ; 004f840b
        ;   XREF to: 004f81ad (UNCONDITIONAL_JUMP)  ; LAB_004f81ad
    JBE 0x004f8407                      ; 004f8410
        ;   XREF to: 004f8407 (CONDITIONAL_JUMP)  ; LAB_004f8407
        ;   Label: LAB_004f8410
    CMP EAX,0x3                         ; 004f8412
    JZ 0x004f83e3                       ; 004f8415
        ;   XREF to: 004f83e3 (CONDITIONAL_JUMP)  ; LAB_004f83e3
    PUSH 0x1                            ; 004f8417
        ;   Label: LAB_004f8417
    PUSH 0x0                            ; 004f8419
    LEA EAX,[EBX + 0x158]               ; 004f841b
    PUSH EAX                            ; 004f8421
    JMP 0x004f81ae                      ; 004f8422
        ;   XREF to: 004f81ae (UNCONDITIONAL_JUMP)  ; LAB_004f81ae
    CMP dword ptr [EBX + 0x2410],0x0    ; 004f8427
        ;   Label: LAB_004f8427
    JZ 0x004f81b6                       ; 004f842e
        ;   XREF to: 004f81b6 (CONDITIONAL_JUMP)  ; LAB_004f81b6
    MOV EAX,dword ptr [EBX + 0x1fbd4]   ; 004f8434
    XOR ESI,ESI                         ; 004f843a
    TEST EAX,EAX                        ; 004f843c
    JZ 0x004f844d                       ; 004f843e
        ;   XREF to: 004f844d (CONDITIONAL_JUMP)  ; LAB_004f844d
    CMP dword ptr [EBX + 0x1fbf4],0x0   ; 004f8440
    JZ 0x004f8597                       ; 004f8447
        ;   XREF to: 004f8597 (CONDITIONAL_JUMP)  ; LAB_004f8597
    CMP dword ptr [EBX + 0xbe2c],0x0    ; 004f844d
        ;   Label: LAB_004f844d
    JZ 0x004f8468                       ; 004f8454
        ;   XREF to: 004f8468 (CONDITIONAL_JUMP)  ; LAB_004f8468
    CMP dword ptr [EBX + 0xbe34],0x0    ; 004f8456
    JZ 0x004f85a1                       ; 004f845d
        ;   XREF to: 004f85a1 (CONDITIONAL_JUMP)  ; LAB_004f85a1
    MOV ESI,0x2                         ; 004f8463
    CMP dword ptr [EBX + 0xbe30],0x0    ; 004f8468
        ;   Label: LAB_004f8468
    JZ 0x004f8476                       ; 004f846f
        ;   XREF to: 004f8476 (CONDITIONAL_JUMP)  ; LAB_004f8476
    MOV ESI,0x3                         ; 004f8471
    CMP dword ptr [EBX + 0xbe44],0x0    ; 004f8476
        ;   Label: LAB_004f8476
    JZ 0x004f84b0                       ; 004f847d
        ;   XREF to: 004f84b0 (CONDITIONAL_JUMP)  ; LAB_004f84b0
    MOV EDX,dword ptr [EBX + 0x1fbd4]   ; 004f847f
    MOV dword ptr [EBX + 0xbe44],0x0    ; 004f8485
    TEST EDX,EDX                        ; 004f848f
    SETZ AL                             ; 004f8491
    AND EAX,0xff                        ; 004f8494
    MOV dword ptr [EBX + 0x1fbd4],EAX   ; 004f8499
    JZ 0x004f84ae                       ; 004f849f
        ;   XREF to: 004f84ae (CONDITIONAL_JUMP)  ; LAB_004f84ae
    CMP dword ptr [EBX + 0x1fbf4],0x0   ; 004f84a1
    JZ 0x004f85ab                       ; 004f84a8
        ;   XREF to: 004f85ab (CONDITIONAL_JUMP)  ; LAB_004f85ab
    XOR ESI,ESI                         ; 004f84ae
        ;   Label: LAB_004f84ae
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004f84b0
        ;   Label: LAB_004f84b0
    JZ 0x004f8511                       ; 004f84b7
        ;   XREF to: 004f8511 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x1fbd4]   ; 004f84b9
    MOV EDI,0x1                         ; 004f84bf
    TEST EAX,EAX                        ; 004f84c4
    JZ 0x004f85b5                       ; 004f84c6
        ;   XREF to: 004f85b5 (CONDITIONAL_JUMP)  ; LAB_004f85b5
    TEST EDI,EDI                        ; 004f84cc
        ;   Label: LAB_004f84cc
    JZ 0x004f8511                       ; 004f84ce
        ;   XREF to: 004f8511 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f84d0
        ;   Label: LAB_004f84d0
    JZ 0x004f8511                       ; 004f84d7
        ;   XREF to: 004f8511 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x1fbf4]   ; 004f84d9
    TEST EAX,EAX                        ; 004f84df
    JZ 0x004f8650                       ; 004f84e1
        ;   XREF to: 004f8650 (CONDITIONAL_JUMP)  ; LAB_004f8650
    MOV EDX,dword ptr [0x03f95d78]      ; 004f84e7 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 004f84ed
    MOV ECX,dword ptr [EBX + 0x24f8]    ; 004f84ee
    PUSH ECX                            ; 004f84f4
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f84f5
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f84fa
    TEST EAX,EAX                        ; 004f84fd
    JZ 0x004f8511                       ; 004f84ff
        ;   XREF to: 004f8511 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 004f8501
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f8502
    CALL dword ptr [EDX + 0xf8]         ; 004f8508
    ADD ESP,0x4                         ; 004f850e
    FLD float ptr [EBX + 0xbe50]        ; 004f8511
        ;   Label: default
    LEA EAX,[EBX + 0x158]               ; 004f8517
    FMUL float ptr [EBX + 0x2438]       ; 004f851d
    PUSH EAX                            ; 004f8523
    FSTP float ptr [EBX + 0x2418]       ; 004f8524
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f852a
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f852f
    ADD ESP,0x4                         ; 004f8532
    CMP ESI,EAX                         ; 004f8535
    JZ 0x004f856b                       ; 004f8537
        ;   XREF to: 004f856b (CONDITIONAL_JUMP)  ; LAB_004f856b
    CMP ESI,0xe                         ; 004f8539
    JNZ 0x004f866c                      ; 004f853c
        ;   XREF to: 004f866c (CONDITIONAL_JUMP)  ; LAB_004f866c
    MOV EDI,dword ptr [EBX + 0x1fbdc]   ; 004f8542
        ;   Label: LAB_004f8542
    PUSH EDI                            ; 004f8548
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004f8549
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004f854e
    TEST EAX,EAX                        ; 004f8551
    JZ 0x004f8683                       ; 004f8553
        ;   XREF to: 004f8683 (CONDITIONAL_JUMP)  ; LAB_004f8683
    PUSH 0x1                            ; 004f8559
        ;   Label: LAB_004f8559
    PUSH ESI                            ; 004f855b
    LEA EAX,[EBX + 0x158]               ; 004f855c
    PUSH EAX                            ; 004f8562
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f8563
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f8568
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 004f856b
        ;   Label: LAB_004f856b
    JZ 0x004f81b6                       ; 004f8572
        ;   XREF to: 004f81b6 (CONDITIONAL_JUMP)  ; LAB_004f81b6
    PUSH EBX                            ; 004f8578
    CALL core_icepick.cpp_CIcePick_FUN_004f8970 ; 004f8579
        ;   XREF to: 004f8970 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_CIcePick_FUN_004f8970(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004f857e
    TEST EAX,EAX                        ; 004f8581
    JNZ 0x004f81b6                      ; 004f8583
        ;   XREF to: 004f81b6 (CONDITIONAL_JUMP)  ; LAB_004f81b6
    PUSH EBX                            ; 004f8589
    CALL core_icepick.cpp_CIcePick_FUN_004f8ad0 ; 004f858a
        ;   XREF to: 004f8ad0 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_CIcePick_FUN_004f8ad0(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004f858f
    JMP 0x004f81b6                      ; 004f8592
        ;   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)  ; LAB_004f81b6
    MOV ESI,0xa                         ; 004f8597
        ;   Label: LAB_004f8597
    JMP 0x004f844d                      ; 004f859c
        ;   XREF to: 004f844d (UNCONDITIONAL_JUMP)  ; LAB_004f844d
    MOV ESI,0x1                         ; 004f85a1
        ;   Label: LAB_004f85a1
    JMP 0x004f8468                      ; 004f85a6
        ;   XREF to: 004f8468 (UNCONDITIONAL_JUMP)  ; LAB_004f8468
    MOV ESI,0xa                         ; 004f85ab
        ;   Label: LAB_004f85ab
    JMP 0x004f84b0                      ; 004f85b0
        ;   XREF to: 004f84b0 (UNCONDITIONAL_JUMP)  ; LAB_004f84b0
    CMP dword ptr [EBX + 0xbe28],0x2    ; 004f85b5
        ;   Label: LAB_004f85b5
    JZ 0x004f84cc                       ; 004f85bc
        ;   XREF to: 004f84cc (CONDITIONAL_JUMP)  ; LAB_004f84cc
    PUSH EBX                            ; 004f85c2
    CALL core_hero.cpp_CHero_FUN_004f2af0 ; 004f85c3
        ;   XREF to: 004f2af0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2af0(CHero * this_ptr)
    XOR EDI,EDI                         ; 004f85c8
    ADD ESP,0x4                         ; 004f85ca
    TEST EAX,EAX                        ; 004f85cd
    JNZ 0x004f84cc                      ; 004f85cf
        ;   XREF to: 004f84cc (CONDITIONAL_JUMP)  ; LAB_004f84cc
    PUSH EBX                            ; 004f85d5
    CALL core_hero.cpp_CHero_FUN_004f2d70 ; 004f85d6
        ;   XREF to: 004f2d70 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2d70(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f85db
    MOV dword ptr [ESP + 0x74],EAX      ; 004f85de
    TEST EAX,EAX                        ; 004f85e2
    JBE 0x004f85eb                      ; 004f85e4
        ;   XREF to: 004f85eb (CONDITIONAL_JUMP)  ; LAB_004f85eb
    CMP EAX,0x1                         ; 004f85e6
    JNZ 0x004f8619                      ; 004f85e9
        ;   XREF to: 004f8619 (CONDITIONAL_JUMP)  ; LAB_004f8619
    CMP dword ptr [ESP + 0x74],0x0      ; 004f85eb
        ;   Label: LAB_004f85eb
    JNZ 0x004f84cc                      ; 004f85f0
        ;   XREF to: 004f84cc (CONDITIONAL_JUMP)  ; LAB_004f84cc
    PUSH EBX                            ; 004f85f6
    CALL core_hero.cpp_CHero_FUN_004f2c40 ; 004f85f7
        ;   XREF to: 004f2c40 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2c40(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f85fc
    TEST EAX,EAX                        ; 004f85ff
    JNZ 0x004f84cc                      ; 004f8601
        ;   XREF to: 004f84cc (CONDITIONAL_JUMP)  ; LAB_004f84cc
    PUSH EBX                            ; 004f8607
    CALL core_hero.cpp_CHero_FUN_004f2f50 ; 004f8608
        ;   XREF to: 004f2f50 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2f50(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f860d
    TEST EAX,EAX                        ; 004f8610
    JNZ 0x004f8624                      ; 004f8612
        ;   XREF to: 004f8624 (CONDITIONAL_JUMP)  ; LAB_004f8624
    JMP 0x004f84d0                      ; 004f8614
        ;   XREF to: 004f84d0 (UNCONDITIONAL_JUMP)  ; LAB_004f84d0
    PUSH EBX                            ; 004f8619
        ;   Label: LAB_004f8619
    CALL core_hero.cpp_CHero_FUN_004f2ed0 ; 004f861a
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2ed0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f861f
    JMP 0x004f85eb                      ; 004f8622
        ;   XREF to: 004f85eb (UNCONDITIONAL_JUMP)  ; LAB_004f85eb
    PUSH EBX                            ; 004f8624
        ;   Label: LAB_004f8624
    CALL core_hero.cpp_CHero_FUN_004f30f0 ; 004f8625
        ;   XREF to: 004f30f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f30f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f862a
    JMP 0x004f84cc                      ; 004f862d
        ;   XREF to: 004f84cc (UNCONDITIONAL_JUMP)  ; LAB_004f84cc
    MOV ESI,0xe                         ; 004f8632
        ;   Label: caseD_2
    JMP 0x004f8511                      ; 004f8637
        ;   XREF to: 004f8511 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0xf                         ; 004f863c
        ;   Label: caseD_3
    JMP 0x004f8511                      ; 004f8641
        ;   XREF to: 004f8511 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0x10                        ; 004f8646
        ;   Label: caseD_4
    JMP 0x004f8511                      ; 004f864b
        ;   XREF to: 004f8511 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xbe38],EAX    ; 004f8650
        ;   Label: LAB_004f8650
    MOV EAX,dword ptr [EBX + 0x1fbd8]   ; 004f8656
    CMP EAX,0x4                         ; 004f865c
    JA 0x004f8511                       ; 004f865f
        ;   XREF to: 004f8511 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f8098]  ; 004f8665 | caseD_0 | caseD_1 | caseD_4
        ;   Label: switchD
    CMP ESI,0xf                         ; 004f866c
        ;   Label: LAB_004f866c
    JZ 0x004f8542                       ; 004f866f
        ;   XREF to: 004f8542 (CONDITIONAL_JUMP)  ; LAB_004f8542
    CMP ESI,0x10                        ; 004f8675
    JZ 0x004f8542                       ; 004f8678
        ;   XREF to: 004f8542 (CONDITIONAL_JUMP)  ; LAB_004f8542
    JMP 0x004f8559                      ; 004f867e
        ;   XREF to: 004f8559 (UNCONDITIONAL_JUMP)  ; LAB_004f8559
    PUSH 0x62f6dd                       ; 004f8683 | = "icepick-miss?.wav"
        ;   Label: LAB_004f8683
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8688
    PUSH EBX                            ; 004f868e
    CALL dword ptr [EAX + 0x24]         ; 004f868f
    ADD ESP,0x8                         ; 004f8692
    MOV dword ptr [EBX + 0x1fbdc],EAX   ; 004f8695
    JMP 0x004f8559                      ; 004f869b
        ;   XREF to: 004f8559 (UNCONDITIONAL_JUMP)  ; LAB_004f8559
    PUSH EDX                            ; 004f86a0
        ;   Label: LAB_004f86a0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f86a1
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f86a6
    ADD ESP,0x4                         ; 004f86a9
    CMP EAX,0x9                         ; 004f86ac
    JNC 0x004f86c3                      ; 004f86af
        ;   XREF to: 004f86c3 (CONDITIONAL_JUMP)  ; LAB_004f86c3
    CMP EAX,0x1                         ; 004f86b1
    JNC 0x004f86f9                      ; 004f86b4
        ;   XREF to: 004f86f9 (CONDITIONAL_JUMP)  ; LAB_004f86f9
    TEST EAX,EAX                        ; 004f86b6
    JZ 0x004f8427                       ; 004f86b8
        ;   XREF to: 004f8427 (CONDITIONAL_JUMP)  ; LAB_004f8427
    JMP 0x004f81b6                      ; 004f86be
        ;   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)  ; LAB_004f81b6
    JBE 0x004f83cb                      ; 004f86c3
        ;   XREF to: 004f83cb (CONDITIONAL_JUMP)  ; LAB_004f83cb
        ;   Label: LAB_004f86c3
    CMP EAX,0xf                         ; 004f86c9
    JNC 0x004f86dc                      ; 004f86cc
        ;   XREF to: 004f86dc (CONDITIONAL_JUMP)  ; LAB_004f86dc
    CMP EAX,0xa                         ; 004f86ce
    JBE 0x004f8427                      ; 004f86d1
        ;   XREF to: 004f8427 (CONDITIONAL_JUMP)  ; LAB_004f8427
    JMP 0x004f81b6                      ; 004f86d7
        ;   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)  ; LAB_004f81b6
    JBE 0x004f81b6                      ; 004f86dc
        ;   XREF to: 004f81b6 (CONDITIONAL_JUMP)  ; LAB_004f81b6
        ;   Label: LAB_004f86dc
    CMP EAX,0x10                        ; 004f86e2
    JBE 0x004f81b6                      ; 004f86e5
        ;   XREF to: 004f81b6 (CONDITIONAL_JUMP)  ; LAB_004f81b6
    CMP EAX,0x15                        ; 004f86eb
    JZ 0x004f8427                       ; 004f86ee
        ;   XREF to: 004f8427 (CONDITIONAL_JUMP)  ; LAB_004f8427
    JMP 0x004f81b6                      ; 004f86f4
        ;   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)  ; LAB_004f81b6
    JBE 0x004f8427                      ; 004f86f9
        ;   XREF to: 004f8427 (CONDITIONAL_JUMP)  ; LAB_004f8427
        ;   Label: LAB_004f86f9
    CMP EAX,0x2                         ; 004f86ff
    JBE 0x004f8427                      ; 004f8702
        ;   XREF to: 004f8427 (CONDITIONAL_JUMP)  ; LAB_004f8427
    CMP EAX,0x3                         ; 004f8708
    JZ 0x004f8427                       ; 004f870b
        ;   XREF to: 004f8427 (CONDITIONAL_JUMP)  ; LAB_004f8427
    JMP 0x004f81b6                      ; 004f8711
        ;   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)  ; LAB_004f81b6
    MOV dword ptr [EBX + 0x2598],EAX    ; 004f8716
        ;   Label: LAB_004f8716
    JMP 0x004f82e5                      ; 004f871c
        ;   XREF to: 004f82e5 (UNCONDITIONAL_JUMP)  ; LAB_004f82e5
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004f8721
        ;   Label: LAB_004f8721
    JZ 0x004f82f8                       ; 004f8728
        ;   XREF to: 004f82f8 (CONDITIONAL_JUMP)  ; LAB_004f82f8
    PUSH 0x1                            ; 004f872e
    PUSH 0x11                           ; 004f8730
    PUSH EDI                            ; 004f8732
    JMP 0x004f82f0                      ; 004f8733
        ;   XREF to: 004f82f0 (UNCONDITIONAL_JUMP)  ; LAB_004f82f0
    MOV dword ptr [ESP + 0x60],ECX      ; 004f8738
        ;   Label: LAB_004f8738
    MOV dword ptr [ESP + 0x64],ECX      ; 004f873c
    MOV dword ptr [ESP + 0x68],ECX      ; 004f8740
    LEA EDX,[EBX + 0x23ac]              ; 004f8744
    FLD float ptr [EBP + 0x18]          ; 004f874a
    FLD ST0                             ; 004f874d
    MOV EAX,dword ptr [EDX]             ; 004f874f
    FMUL double ptr [0x0062f6fb]        ; 004f8751 | DOUBLE_0062f6fb
    MOV dword ptr [ESP + 0x60],EAX      ; 004f8757
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f875b
    MOV dword ptr [ESP + 0x64],EAX      ; 004f875e
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f8762
    MOV dword ptr [ESP + 0x68],EAX      ; 004f8765
    FLD float ptr [EBX + 0x242c]        ; 004f8769
    FXCH                                ; 004f876f
    FSUBR ST0,ST1                       ; 004f8771
    LEA EDX,[EBX + 0x2428]              ; 004f8773
    FSTP ST1                            ; 004f8779
    FSTP float ptr [EBX + 0x242c]       ; 004f877b
    FLD float ptr [EDX]                 ; 004f8781
    FMUL ST1                            ; 004f8783
    FSTP float ptr [ESP + 0x48]         ; 004f8785
    FLD float ptr [EDX + 0x4]           ; 004f8789
    FMUL ST1                            ; 004f878c
    FSTP float ptr [ESP + 0x4c]         ; 004f878e
    FMUL float ptr [EDX + 0x8]          ; 004f8792
    LEA EAX,[EBX + 0x241c]              ; 004f8795
    FLD float ptr [ESP + 0x60]          ; 004f879b
    FLD float ptr [ESP + 0x64]          ; 004f879f
    FLD float ptr [ESP + 0x68]          ; 004f87a3
    FLD float ptr [ESP + 0x48]          ; 004f87a7
    FLD float ptr [ESP + 0x4c]          ; 004f87ab
    FXCH ST5                            ; 004f87af
    FSTP float ptr [ESP + 0x50]         ; 004f87b1
    FADD float ptr [EAX]                ; 004f87b5
    FLD float ptr [ESP + 0x50]          ; 004f87b7
    FXCH                                ; 004f87bb
    FSTP float ptr [ESP + 0x3c]         ; 004f87bd
    FXCH ST4                            ; 004f87c1
    FADD float ptr [EAX + 0x4]          ; 004f87c3
    FXCH ST3                            ; 004f87c6
    FADD float ptr [ESP + 0x3c]         ; 004f87c8
    FXCH ST3                            ; 004f87cc
    FSTP float ptr [ESP + 0x40]         ; 004f87ce
    FXCH ST3                            ; 004f87d2
    FADD float ptr [EAX + 0x8]          ; 004f87d4
    FXCH                                ; 004f87d7
    FADD float ptr [ESP + 0x40]         ; 004f87d9
    FXCH                                ; 004f87dd
    FSTP float ptr [ESP + 0x44]         ; 004f87df
    FXCH                                ; 004f87e3
    FSTP float ptr [ESP + 0x60]         ; 004f87e5
    LEA EAX,[ESP + 0x60]                ; 004f87e9
    FSTP float ptr [ESP + 0x64]         ; 004f87ed
    PUSH EAX                            ; 004f87f1
    FADD float ptr [ESP + 0x48]         ; 004f87f2
    PUSH EBX                            ; 004f87f6
    FSTP float ptr [ESP + 0x70]         ; 004f87f7
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 004f87fb
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004f8800
    JMP 0x004f82f8                      ; 004f8803
        ;   XREF to: 004f82f8 (UNCONDITIONAL_JUMP)  ; LAB_004f82f8

