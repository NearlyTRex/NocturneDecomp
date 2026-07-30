; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_CIcePick_process_FUN_004b9fe0(CIcePick *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_004b9fc8 = 004ba562
;   TerminatedCString s_s_confused_while_walking_00586116
;   TerminatedCString s_icepick_miss_wav_00586140
;   double DOUBLE_00586152 = 12.5663706140000
;   double DOUBLE_0058615a = 32
;   double DOUBLE_00586162 = -1.57079632675000
;   float FLOAT_0058616a = 3.141593
;   double DOUBLE_00586172 = 1.57079632675000
;   double DOUBLE_0058617a = 1.59386252192652E-314
;   double DOUBLE_00586182 = 3.14159265350000
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01cae288
;   undefined4 g_CWeaponActorType_02ddf970.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
;   core_hero.cpp_CHero_tryInteract_FUN_004b4e90
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270
;   core_hero.cpp_CHero_tryPullLever_FUN_004b52f0
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
;   core_hero.cpp_FUN_004b5110
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9fe0
        ;   Label: core_icepick.cpp_CIcePick_process_FUN_004b9fe0
    PUSH ESI                            ; 004b9fe1
    PUSH EDI                            ; 004b9fe2
    PUSH EBP                            ; 004b9fe3
    MOV EBP,ESP                         ; 004b9fe4
    SUB ESP,0x88                        ; 004b9fe6
    AND ESP,0xfffffff8                  ; 004b9fec
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9fef
    PUSH dword ptr [EBP + 0x18]         ; 004b9ff2
    PUSH EBX                            ; 004b9ff5
    CALL core_charactr.cpp_FUN_004259f0 ; 004b9ff6
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b9ffb
    TEST EAX,EAX                        ; 004b9ffe
    JZ 0x004ba2fb                       ; 004ba000
        ;   XREF to: 004ba2fb (CONDITIONAL_JUMP)  ; LAB_004ba2fb
    CMP dword ptr [EBX + 0x1fa38],0x4   ; 004ba006
    JZ 0x004ba2fb                       ; 004ba00d
        ;   XREF to: 004ba2fb (CONDITIONAL_JUMP)  ; LAB_004ba2fb
    CMP dword ptr [EBX + 0xbc90],0x2    ; 004ba013
    JZ 0x004ba302                       ; 004ba01a
        ;   XREF to: 004ba302 (CONDITIONAL_JUMP)  ; LAB_004ba302
    CMP dword ptr [EBX + 0x24f0],0x0    ; 004ba020
        ;   Label: LAB_004ba020
    SETNZ AL                            ; 004ba027
    FLD float ptr [EBP + 0x18]          ; 004ba02a
    FLD ST0                             ; 004ba02d
    FMUL double ptr [0x00586152]        ; 004ba02f | DOUBLE_00586152
    AND EAX,0xff                        ; 004ba035
    FLD float ptr [EBX + 0xbc8c]        ; 004ba03a
    MOV dword ptr [EBX + 0x1fa5c],EAX   ; 004ba040
    FSUBRP ST2,ST0                      ; 004ba046
    FSTP float ptr [EBX + 0x2430]       ; 004ba048
    FST float ptr [EBX + 0xbc8c]        ; 004ba04e
    FLDZ                                ; 004ba054
    FCOMPP                              ; 004ba056
    FNSTSW AX                           ; 004ba058
    SAHF                                ; 004ba05a
    JBE 0x004ba067                      ; 004ba05b
        ;   XREF to: 004ba067 (CONDITIONAL_JUMP)  ; LAB_004ba067
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 004ba05d
    LEA ESI,[EBX + 0x23a4]              ; 004ba067
        ;   Label: LAB_004ba067
    PUSH dword ptr [EBP + 0x18]         ; 004ba06d
    MOV dword ptr [ESI + 0x8],0x0       ; 004ba070
    PUSH EBX                            ; 004ba077
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ba078
    MOV dword ptr [ESI + 0x4],EAX       ; 004ba07b
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ba07e
    MOV dword ptr [ESI],EAX             ; 004ba081
    CALL core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0 ; 004ba083
        ;   XREF to: 004bb2d0 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ba088
    PUSH dword ptr [EBP + 0x18]         ; 004ba08b
    FLD float ptr [EBX + 0x23ac]        ; 004ba08e
    PUSH EBX                            ; 004ba094
    FSTP float ptr [EBX + 0x242c]       ; 004ba095
    CALL core_charactr.cpp_FUN_00428c00 ; 004ba09b
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ba0a0
    LEA EDX,[EBX + 0x150]               ; 004ba0a3
    TEST EAX,EAX                        ; 004ba0a9
    JZ 0x004ba5d0                       ; 004ba0ab
        ;   XREF to: 004ba5d0 (CONDITIONAL_JUMP)  ; LAB_004ba5d0
    MOV dword ptr [ESI + 0x8],0x0       ; 004ba0b1
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ba0b8
    MOV dword ptr [ESI + 0x4],EAX       ; 004ba0bb
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ba0be
    MOV dword ptr [ESI],EAX             ; 004ba0c1
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004ba0c3
    CMP EAX,0x2                         ; 004ba0c9
    JNC 0x004ba340                      ; 004ba0cc
        ;   XREF to: 004ba340 (CONDITIONAL_JUMP)  ; LAB_004ba340
    CMP EAX,0x1                         ; 004ba0d2
    JNZ 0x004ba347                      ; 004ba0d5
        ;   XREF to: 004ba347 (CONDITIONAL_JUMP)  ; LAB_004ba347
    PUSH EAX                            ; 004ba0db
    PUSH EAX                            ; 004ba0dc
    PUSH EDX                            ; 004ba0dd
        ;   Label: LAB_004ba0dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ba0de
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004ba0de
    ADD ESP,0xc                         ; 004ba0e3
        ;   Label: LAB_004ba0e3
    MOV ECX,dword ptr [EBX + 0x2590]    ; 004ba0e6
        ;   Label: LAB_004ba0e6
    TEST ECX,ECX                        ; 004ba0ec
    JZ 0x004ba668                       ; 004ba0ee
        ;   XREF to: 004ba668 (CONDITIONAL_JUMP)  ; LAB_004ba668
    CMP dword ptr [EBX + 0x2594],0x0    ; 004ba0f4
    JNZ 0x004ba1c4                      ; 004ba0fb
        ;   XREF to: 004ba1c4 (CONDITIONAL_JUMP)  ; LAB_004ba1c4
    LEA EAX,[ECX + 0x20]                ; 004ba101
    PUSH EAX                            ; 004ba104
    LEA EAX,[ESP + 0x34]                ; 004ba105
    PUSH EAX                            ; 004ba109
    PUSH EBX                            ; 004ba10a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004ba10b
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004ba110
    PUSH EAX                            ; 004ba113
    LEA EAX,[ESP + 0x58]                ; 004ba114
    PUSH EAX                            ; 004ba118
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004ba119
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004ba11e
    PUSH dword ptr [EAX + 0x4]          ; 004ba121
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004ba124
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x88],EAX      ; 004ba129
    FLD float ptr [ESP + 0x88]          ; 004ba130
    ADD ESP,0x4                         ; 004ba137
    FST float ptr [ESP]                 ; 004ba13a
    FCOMP double ptr [0x00586162]       ; 004ba13d | DOUBLE_00586162
    FNSTSW AX                           ; 004ba143
    SAHF                                ; 004ba145
    JNC 0x004ba154                      ; 004ba146
        ;   XREF to: 004ba154 (CONDITIONAL_JUMP)  ; LAB_004ba154
    FLD float ptr [ESP]                 ; 004ba148
    FADD float ptr [0x0058616a]         ; 004ba14b | FLOAT_0058616a
    FSTP float ptr [ESP]                ; 004ba151
    FLD float ptr [ESP]                 ; 004ba154
        ;   Label: LAB_004ba154
    FCOMP double ptr [0x00586172]       ; 004ba157 | DOUBLE_00586172
    FNSTSW AX                           ; 004ba15d
    SAHF                                ; 004ba15f
    JBE 0x004ba16e                      ; 004ba160
        ;   XREF to: 004ba16e (CONDITIONAL_JUMP)  ; LAB_004ba16e
    FLD float ptr [ESP]                 ; 004ba162
    FADD float ptr [0x0058617a]         ; 004ba165 | DOUBLE_0058617a
    FSTP float ptr [ESP]                ; 004ba16b
    FLD float ptr [EBP + 0x18]          ; 004ba16e
        ;   Label: LAB_004ba16e
    FMUL double ptr [0x00586182]        ; 004ba171 | DOUBLE_00586182
    FLD float ptr [ESP]                 ; 004ba177
    FXCH                                ; 004ba17a
    FST float ptr [ESP + 0x80]          ; 004ba17c
    FCHS                                ; 004ba183
    FSTP float ptr [ESP + 0x7c]         ; 004ba185
    FCOMP float ptr [ESP + 0x7c]        ; 004ba189
    FNSTSW AX                           ; 004ba18d
    SAHF                                ; 004ba18f
    JNC 0x004ba199                      ; 004ba190
        ;   XREF to: 004ba199 (CONDITIONAL_JUMP)  ; LAB_004ba199
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ba192
    MOV dword ptr [ESP],EAX             ; 004ba196
    FLD float ptr [ESP]                 ; 004ba199
        ;   Label: LAB_004ba199
    FCOMP float ptr [ESP + 0x80]        ; 004ba19c
    FNSTSW AX                           ; 004ba1a3
    SAHF                                ; 004ba1a5
    JBE 0x004ba1b2                      ; 004ba1a6
        ;   XREF to: 004ba1b2 (CONDITIONAL_JUMP)  ; LAB_004ba1b2
    MOV EAX,dword ptr [ESP + 0x80]      ; 004ba1a8
    MOV dword ptr [ESP],EAX             ; 004ba1af
    FLD float ptr [EBX + 0x34]          ; 004ba1b2
        ;   Label: LAB_004ba1b2
    FADD float ptr [ESP]                ; 004ba1b5
    PUSH EBX                            ; 004ba1b8
    FSTP float ptr [EBX + 0x34]         ; 004ba1b9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004ba1bc
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ba1c1
    MOV ESI,dword ptr [EBX + 0x2590]    ; 004ba1c4
        ;   Label: LAB_004ba1c4
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004ba1ca
    PUSH 0x0                            ; 004ba1d0
    MOV dword ptr [ESP + 0x88],EAX      ; 004ba1d2
    LEA EAX,[ESP + 0x28]                ; 004ba1d9
    PUSH EAX                            ; 004ba1dd
    LEA EDI,[EBX + 0x150]               ; 004ba1de
    PUSH EDI                            ; 004ba1e4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ba1e5
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004ba1ea
    PUSH EAX                            ; 004ba1ed
    PUSH EBX                            ; 004ba1ee
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004ba1ef
    PUSH ESI                            ; 004ba1f6
    CALL dword ptr [EAX + 0x108]        ; 004ba1f7
    ADD ESP,0xc                         ; 004ba1fd
    TEST EAX,EAX                        ; 004ba200
    JZ 0x004ba646                       ; 004ba202
        ;   XREF to: 004ba646 (CONDITIONAL_JUMP)  ; LAB_004ba646
    CMP dword ptr [EBX + 0x2590],0x0    ; 004ba208
    JNZ 0x004ba651                      ; 004ba20f
        ;   XREF to: 004ba651 (CONDITIONAL_JUMP)  ; LAB_004ba651
    PUSH 0x1                            ; 004ba215
        ;   Label: LAB_004ba215
    PUSH 0x0                            ; 004ba217
    LEA EAX,[EBX + 0x150]               ; 004ba219
    PUSH EAX                            ; 004ba21f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ba220
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004ba220
    ADD ESP,0xc                         ; 004ba225
    LEA EAX,[EBX + 0x1f5a0]             ; 004ba228
        ;   Label: LAB_004ba228
    PUSH EAX                            ; 004ba22e
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004c1850 ; 004ba22f
        ;   XREF to: 004c1850 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateInventory_FUN_004c1850(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004ba234
    MOV EDI,dword ptr [0x02ddf9a8]      ; 004ba237 | g_CWeaponActorType_02ddf970.name_hash
    PUSH EDI                            ; 004ba23d
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 004ba23e
    PUSH EAX                            ; 004ba244
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004ba245
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004ba24a
    ADD ESP,0x8                         ; 004ba24c
    TEST EAX,EAX                        ; 004ba24f
    JZ 0x004ba26d                       ; 004ba251
        ;   XREF to: 004ba26d (CONDITIONAL_JUMP)  ; LAB_004ba26d
    PUSH dword ptr [EBP + 0x18]         ; 004ba253
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004ba256
    PUSH ESI                            ; 004ba25c
    CALL dword ptr [EAX + 0x4]          ; 004ba25d
    ADD ESP,0x8                         ; 004ba260
    MOV dword ptr [ESI + 0x560],0x64    ; 004ba263
    PUSH EBX                            ; 004ba26d
        ;   Label: LAB_004ba26d
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004ba26e
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ba273
    LEA EAX,[EBX + 0x150]               ; 004ba276
    PUSH EAX                            ; 004ba27c
    MOV dword ptr [ESP + 0x7c],EAX      ; 004ba27d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004ba281
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ba286
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ba289
    PUSH EBX                            ; 004ba28f
    CALL dword ptr [EAX + 0x104]        ; 004ba290
    ADD ESP,0x4                         ; 004ba296
    TEST EAX,EAX                        ; 004ba299
    JNZ 0x004ba2e3                      ; 004ba29b
        ;   XREF to: 004ba2e3 (CONDITIONAL_JUMP)  ; LAB_004ba2e3
    PUSH 0x51b650                       ; 004ba29d
    MOV ECX,dword ptr [0x01cae288]      ; 004ba2a2 | DAT_01cae288
    PUSH ECX                            ; 004ba2a8
    LEA EAX,[EBX + 0x1fa4c]             ; 004ba2a9
    PUSH dword ptr [EBX + 0x1fa58]      ; 004ba2af
    PUSH EAX                            ; 004ba2b5
    LEA ESI,[ESP + 0x14]                ; 004ba2b6
    LEA EDI,[ESP + 0x24]                ; 004ba2ba
    CALL core_xform.cpp_eulerToQuaternion_FUN_0055d610 ; 004ba2be
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_eulerToQuaternion_FUN_0055d610()
    LEA ESI,[ESP + 0x14]                ; 004ba2c3
    ADD ESP,0x4                         ; 004ba2c7
    LEA EAX,[ESP + 0x20]                ; 004ba2ca
    MOVSD ES:EDI,ESI                    ; 004ba2ce
    MOVSD ES:EDI,ESI                    ; 004ba2cf
    MOVSD ES:EDI,ESI                    ; 004ba2d0
    MOVSD ES:EDI,ESI                    ; 004ba2d1
    PUSH EAX                            ; 004ba2d2
    MOV ESI,dword ptr [ESP + 0x88]      ; 004ba2d3
    PUSH ESI                            ; 004ba2da
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 004ba2db
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004ba2e0
    PUSH dword ptr [EBP + 0x18]         ; 004ba2e3
        ;   Label: LAB_004ba2e3
    PUSH EBX                            ; 004ba2e6
    CALL core_icepick.cpp_FUN_004ba740  ; 004ba2e7
        ;   XREF to: 004ba740 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_FUN_004ba740(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ba2ec
    PUSH dword ptr [EBP + 0x18]         ; 004ba2ef
    PUSH EBX                            ; 004ba2f2
    CALL core_charactr.cpp_FUN_0042a150 ; 004ba2f3
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ba2f8
    MOV ESP,EBP                         ; 004ba2fb
        ;   Label: LAB_004ba2fb
    POP EBP                             ; 004ba2fd
    POP EDI                             ; 004ba2fe
    POP ESI                             ; 004ba2ff
    POP EBX                             ; 004ba300
    RET                                 ; 004ba301
    PUSH dword ptr [EBP + 0x18]         ; 004ba302
        ;   Label: LAB_004ba302
    PUSH EBX                            ; 004ba305
    CALL core_icepick.cpp_FUN_004baba0  ; 004ba306
        ;   XREF to: 004baba0 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_FUN_004baba0(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ba30b
    JMP 0x004ba020                      ; 004ba30e
        ;   XREF to: 004ba020 (UNCONDITIONAL_JUMP)  ; LAB_004ba020
    PUSH 0x1                            ; 004ba313
        ;   Label: LAB_004ba313
    PUSH 0x0                            ; 004ba315
    PUSH EDX                            ; 004ba317
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ba318
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ba31d
    PUSH EBX                            ; 004ba320
    PUSH 0x586116                       ; 004ba321 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005ad350]      ; 004ba326 | PTR_DAT_005ad350
    PUSH EDX                            ; 004ba32c | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004ba32d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004ba0e3                      ; 004ba332
        ;   XREF to: 004ba0e3 (UNCONDITIONAL_JUMP)  ; LAB_004ba0e3
    PUSH 0x1                            ; 004ba337
        ;   Label: LAB_004ba337
    PUSH 0x2                            ; 004ba339
    JMP 0x004ba0dd                      ; 004ba33b
        ;   XREF to: 004ba0dd (UNCONDITIONAL_JUMP)  ; LAB_004ba0dd
    JBE 0x004ba337                      ; 004ba340
        ;   XREF to: 004ba337 (CONDITIONAL_JUMP)  ; LAB_004ba337
        ;   Label: LAB_004ba340
    CMP EAX,0x3                         ; 004ba342
    JZ 0x004ba313                       ; 004ba345
        ;   XREF to: 004ba313 (CONDITIONAL_JUMP)  ; LAB_004ba313
    PUSH 0x1                            ; 004ba347
        ;   Label: LAB_004ba347
    PUSH 0x0                            ; 004ba349
    LEA EAX,[EBX + 0x150]               ; 004ba34b
    PUSH EAX                            ; 004ba351
    JMP 0x004ba0de                      ; 004ba352
        ;   XREF to: 004ba0de (UNCONDITIONAL_JUMP)  ; LAB_004ba0de
    CMP dword ptr [EBX + 0x2408],0x0    ; 004ba357
        ;   Label: LAB_004ba357
    JZ 0x004ba0e6                       ; 004ba35e
        ;   XREF to: 004ba0e6 (CONDITIONAL_JUMP)  ; LAB_004ba0e6
    MOV EAX,dword ptr [EBX + 0x1fa3c]   ; 004ba364
    XOR ESI,ESI                         ; 004ba36a
    TEST EAX,EAX                        ; 004ba36c
    JZ 0x004ba37d                       ; 004ba36e
        ;   XREF to: 004ba37d (CONDITIONAL_JUMP)  ; LAB_004ba37d
    CMP dword ptr [EBX + 0x1fa5c],0x0   ; 004ba370
    JZ 0x004ba4c7                       ; 004ba377
        ;   XREF to: 004ba4c7 (CONDITIONAL_JUMP)  ; LAB_004ba4c7
    CMP dword ptr [EBX + 0xbc94],0x0    ; 004ba37d
        ;   Label: LAB_004ba37d
    JZ 0x004ba398                       ; 004ba384
        ;   XREF to: 004ba398 (CONDITIONAL_JUMP)  ; LAB_004ba398
    CMP dword ptr [EBX + 0xbc9c],0x0    ; 004ba386
    JZ 0x004ba4d1                       ; 004ba38d
        ;   XREF to: 004ba4d1 (CONDITIONAL_JUMP)  ; LAB_004ba4d1
    MOV ESI,0x2                         ; 004ba393
    CMP dword ptr [EBX + 0xbc98],0x0    ; 004ba398
        ;   Label: LAB_004ba398
    JZ 0x004ba3a6                       ; 004ba39f
        ;   XREF to: 004ba3a6 (CONDITIONAL_JUMP)  ; LAB_004ba3a6
    MOV ESI,0x3                         ; 004ba3a1
    CMP dword ptr [EBX + 0xbcac],0x0    ; 004ba3a6
        ;   Label: LAB_004ba3a6
    JZ 0x004ba3e0                       ; 004ba3ad
        ;   XREF to: 004ba3e0 (CONDITIONAL_JUMP)  ; LAB_004ba3e0
    MOV EDX,dword ptr [EBX + 0x1fa3c]   ; 004ba3af
    MOV dword ptr [EBX + 0xbcac],0x0    ; 004ba3b5
    TEST EDX,EDX                        ; 004ba3bf
    SETZ AL                             ; 004ba3c1
    AND EAX,0xff                        ; 004ba3c4
    MOV dword ptr [EBX + 0x1fa3c],EAX   ; 004ba3c9
    JZ 0x004ba3de                       ; 004ba3cf
        ;   XREF to: 004ba3de (CONDITIONAL_JUMP)  ; LAB_004ba3de
    CMP dword ptr [EBX + 0x1fa5c],0x0   ; 004ba3d1
    JZ 0x004ba4db                       ; 004ba3d8
        ;   XREF to: 004ba4db (CONDITIONAL_JUMP)  ; LAB_004ba4db
    XOR ESI,ESI                         ; 004ba3de
        ;   Label: LAB_004ba3de
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004ba3e0
        ;   Label: LAB_004ba3e0
    JZ 0x004ba441                       ; 004ba3e7
        ;   XREF to: 004ba441 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x1fa3c]   ; 004ba3e9
    MOV EDI,0x1                         ; 004ba3ef
    TEST EAX,EAX                        ; 004ba3f4
    JZ 0x004ba4e5                       ; 004ba3f6
        ;   XREF to: 004ba4e5 (CONDITIONAL_JUMP)  ; LAB_004ba4e5
    TEST EDI,EDI                        ; 004ba3fc
        ;   Label: LAB_004ba3fc
    JZ 0x004ba441                       ; 004ba3fe
        ;   XREF to: 004ba441 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004ba400
        ;   Label: LAB_004ba400
    JZ 0x004ba441                       ; 004ba407
        ;   XREF to: 004ba441 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x1fa5c]   ; 004ba409
    TEST EAX,EAX                        ; 004ba40f
    JZ 0x004ba580                       ; 004ba411
        ;   XREF to: 004ba580 (CONDITIONAL_JUMP)  ; LAB_004ba580
    MOV EDX,dword ptr [0x02ddf9a8]      ; 004ba417 | g_CWeaponActorType_02ddf970.name_hash
    PUSH EDX                            ; 004ba41d
    MOV ECX,dword ptr [EBX + 0x24f0]    ; 004ba41e
    PUSH ECX                            ; 004ba424
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004ba425
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ba42a
    TEST EAX,EAX                        ; 004ba42d
    JZ 0x004ba441                       ; 004ba42f
        ;   XREF to: 004ba441 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 004ba431
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004ba432
    CALL dword ptr [EDX + 0xdc]         ; 004ba438
    ADD ESP,0x4                         ; 004ba43e
    FLD float ptr [EBX + 0xbcb8]        ; 004ba441
        ;   Label: default
    LEA EAX,[EBX + 0x150]               ; 004ba447
    FMUL float ptr [EBX + 0x2430]       ; 004ba44d
    PUSH EAX                            ; 004ba453
    FSTP float ptr [EBX + 0x2410]       ; 004ba454
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004ba45a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ba45f
    ADD ESP,0x4                         ; 004ba462
    CMP ESI,EAX                         ; 004ba465
    JZ 0x004ba49b                       ; 004ba467
        ;   XREF to: 004ba49b (CONDITIONAL_JUMP)  ; LAB_004ba49b
    CMP ESI,0xe                         ; 004ba469
    JNZ 0x004ba59c                      ; 004ba46c
        ;   XREF to: 004ba59c (CONDITIONAL_JUMP)  ; LAB_004ba59c
    MOV EDI,dword ptr [EBX + 0x1fa44]   ; 004ba472
        ;   Label: LAB_004ba472
    PUSH EDI                            ; 004ba478
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004ba479
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004ba47e
    TEST EAX,EAX                        ; 004ba481
    JZ 0x004ba5b3                       ; 004ba483
        ;   XREF to: 004ba5b3 (CONDITIONAL_JUMP)  ; LAB_004ba5b3
    PUSH 0x1                            ; 004ba489
        ;   Label: LAB_004ba489
    PUSH ESI                            ; 004ba48b
    LEA EAX,[EBX + 0x150]               ; 004ba48c
    PUSH EAX                            ; 004ba492
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ba493
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ba498
    CMP dword ptr [EBX + 0xbca4],0x0    ; 004ba49b
        ;   Label: LAB_004ba49b
    JZ 0x004ba0e6                       ; 004ba4a2
        ;   XREF to: 004ba0e6 (CONDITIONAL_JUMP)  ; LAB_004ba0e6
    PUSH EBX                            ; 004ba4a8
    CALL core_icepick.cpp_CIcePick_findAndPickupGun_FUN_004ba8a0 ; 004ba4a9
        ;   XREF to: 004ba8a0 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004ba4ae
    TEST EAX,EAX                        ; 004ba4b1
    JNZ 0x004ba0e6                      ; 004ba4b3
        ;   XREF to: 004ba0e6 (CONDITIONAL_JUMP)  ; LAB_004ba0e6
    PUSH EBX                            ; 004ba4b9
    CALL core_icepick.cpp_CIcePick_startThrowAttack_FUN_004baa00 ; 004ba4ba
        ;   XREF to: 004baa00 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_CIcePick_startThrowAttack_FUN_004baa00(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004ba4bf
    JMP 0x004ba0e6                      ; 004ba4c2
        ;   XREF to: 004ba0e6 (UNCONDITIONAL_JUMP)  ; LAB_004ba0e6
    MOV ESI,0xa                         ; 004ba4c7
        ;   Label: LAB_004ba4c7
    JMP 0x004ba37d                      ; 004ba4cc
        ;   XREF to: 004ba37d (UNCONDITIONAL_JUMP)  ; LAB_004ba37d
    MOV ESI,0x1                         ; 004ba4d1
        ;   Label: LAB_004ba4d1
    JMP 0x004ba398                      ; 004ba4d6
        ;   XREF to: 004ba398 (UNCONDITIONAL_JUMP)  ; LAB_004ba398
    MOV ESI,0xa                         ; 004ba4db
        ;   Label: LAB_004ba4db
    JMP 0x004ba3e0                      ; 004ba4e0
        ;   XREF to: 004ba3e0 (UNCONDITIONAL_JUMP)  ; LAB_004ba3e0
    CMP dword ptr [EBX + 0xbc90],0x2    ; 004ba4e5
        ;   Label: LAB_004ba4e5
    JZ 0x004ba3fc                       ; 004ba4ec
        ;   XREF to: 004ba3fc (CONDITIONAL_JUMP)  ; LAB_004ba3fc
    PUSH EBX                            ; 004ba4f2
    CALL core_hero.cpp_CHero_tryInteract_FUN_004b4e90 ; 004ba4f3
        ;   XREF to: 004b4e90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004b4e90(CHero * this_ptr)
    XOR EDI,EDI                         ; 004ba4f8
    ADD ESP,0x4                         ; 004ba4fa
    TEST EAX,EAX                        ; 004ba4fd
    JNZ 0x004ba3fc                      ; 004ba4ff
        ;   XREF to: 004ba3fc (CONDITIONAL_JUMP)  ; LAB_004ba3fc
    PUSH EBX                            ; 004ba505
    CALL core_hero.cpp_FUN_004b5110     ; 004ba506
        ;   XREF to: 004b5110 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004b5110(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ba50b
    MOV dword ptr [ESP + 0x74],EAX      ; 004ba50e
    TEST EAX,EAX                        ; 004ba512
    JBE 0x004ba51b                      ; 004ba514
        ;   XREF to: 004ba51b (CONDITIONAL_JUMP)  ; LAB_004ba51b
    CMP EAX,0x1                         ; 004ba516
    JNZ 0x004ba549                      ; 004ba519
        ;   XREF to: 004ba549 (CONDITIONAL_JUMP)  ; LAB_004ba549
    CMP dword ptr [ESP + 0x74],0x0      ; 004ba51b
        ;   Label: LAB_004ba51b
    JNZ 0x004ba3fc                      ; 004ba520
        ;   XREF to: 004ba3fc (CONDITIONAL_JUMP)  ; LAB_004ba3fc
    PUSH EBX                            ; 004ba526
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0 ; 004ba527
        ;   XREF to: 004b4fe0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ba52c
    TEST EAX,EAX                        ; 004ba52f
    JNZ 0x004ba3fc                      ; 004ba531
        ;   XREF to: 004ba3fc (CONDITIONAL_JUMP)  ; LAB_004ba3fc
    PUSH EBX                            ; 004ba537
    CALL core_hero.cpp_CHero_tryPullLever_FUN_004b52f0 ; 004ba538
        ;   XREF to: 004b52f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPullLever_FUN_004b52f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ba53d
    TEST EAX,EAX                        ; 004ba540
    JNZ 0x004ba554                      ; 004ba542
        ;   XREF to: 004ba554 (CONDITIONAL_JUMP)  ; LAB_004ba554
    JMP 0x004ba400                      ; 004ba544
        ;   XREF to: 004ba400 (UNCONDITIONAL_JUMP)  ; LAB_004ba400
    PUSH EBX                            ; 004ba549
        ;   Label: LAB_004ba549
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270 ; 004ba54a
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ba54f
    JMP 0x004ba51b                      ; 004ba552
        ;   XREF to: 004ba51b (UNCONDITIONAL_JUMP)  ; LAB_004ba51b
    PUSH EBX                            ; 004ba554
        ;   Label: LAB_004ba554
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004b5490 ; 004ba555
        ;   XREF to: 004b5490 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_executeLeverPull_FUN_004b5490(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ba55a
    JMP 0x004ba3fc                      ; 004ba55d
        ;   XREF to: 004ba3fc (UNCONDITIONAL_JUMP)  ; LAB_004ba3fc
    MOV ESI,0xe                         ; 004ba562
        ;   Label: caseD_0
    JMP 0x004ba441                      ; 004ba567
        ;   XREF to: 004ba441 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0xf                         ; 004ba56c
        ;   Label: caseD_1
    JMP 0x004ba441                      ; 004ba571
        ;   XREF to: 004ba441 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0x10                        ; 004ba576
        ;   Label: caseD_4
    JMP 0x004ba441                      ; 004ba57b
        ;   XREF to: 004ba441 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xbca0],EAX    ; 004ba580
        ;   Label: LAB_004ba580
    MOV EAX,dword ptr [EBX + 0x1fa40]   ; 004ba586
    CMP EAX,0x4                         ; 004ba58c
    JA 0x004ba441                       ; 004ba58f
        ;   XREF to: 004ba441 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b9fc8]  ; 004ba595 | caseD_2 | caseD_3 | caseD_4
        ;   Label: switchD
    CMP ESI,0xf                         ; 004ba59c
        ;   Label: LAB_004ba59c
    JZ 0x004ba472                       ; 004ba59f
        ;   XREF to: 004ba472 (CONDITIONAL_JUMP)  ; LAB_004ba472
    CMP ESI,0x10                        ; 004ba5a5
    JZ 0x004ba472                       ; 004ba5a8
        ;   XREF to: 004ba472 (CONDITIONAL_JUMP)  ; LAB_004ba472
    JMP 0x004ba489                      ; 004ba5ae
        ;   XREF to: 004ba489 (UNCONDITIONAL_JUMP)  ; LAB_004ba489
    PUSH 0x586140                       ; 004ba5b3 | = "icepick-miss?.wav"
        ;   Label: LAB_004ba5b3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ba5b8
    PUSH EBX                            ; 004ba5be
    CALL dword ptr [EAX + 0x24]         ; 004ba5bf
    ADD ESP,0x8                         ; 004ba5c2
    MOV dword ptr [EBX + 0x1fa44],EAX   ; 004ba5c5
    JMP 0x004ba489                      ; 004ba5cb
        ;   XREF to: 004ba489 (UNCONDITIONAL_JUMP)  ; LAB_004ba489
    PUSH EDX                            ; 004ba5d0
        ;   Label: LAB_004ba5d0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004ba5d1
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ba5d6
    ADD ESP,0x4                         ; 004ba5d9
    CMP EAX,0x9                         ; 004ba5dc
    JNC 0x004ba5f3                      ; 004ba5df
        ;   XREF to: 004ba5f3 (CONDITIONAL_JUMP)  ; LAB_004ba5f3
    CMP EAX,0x1                         ; 004ba5e1
    JNC 0x004ba629                      ; 004ba5e4
        ;   XREF to: 004ba629 (CONDITIONAL_JUMP)  ; LAB_004ba629
    TEST EAX,EAX                        ; 004ba5e6
    JZ 0x004ba357                       ; 004ba5e8
        ;   XREF to: 004ba357 (CONDITIONAL_JUMP)  ; LAB_004ba357
    JMP 0x004ba0e6                      ; 004ba5ee
        ;   XREF to: 004ba0e6 (UNCONDITIONAL_JUMP)  ; LAB_004ba0e6
    JBE 0x004ba2fb                      ; 004ba5f3
        ;   XREF to: 004ba2fb (CONDITIONAL_JUMP)  ; LAB_004ba2fb
        ;   Label: LAB_004ba5f3
    CMP EAX,0xf                         ; 004ba5f9
    JNC 0x004ba60c                      ; 004ba5fc
        ;   XREF to: 004ba60c (CONDITIONAL_JUMP)  ; LAB_004ba60c
    CMP EAX,0xa                         ; 004ba5fe
    JBE 0x004ba357                      ; 004ba601
        ;   XREF to: 004ba357 (CONDITIONAL_JUMP)  ; LAB_004ba357
    JMP 0x004ba0e6                      ; 004ba607
        ;   XREF to: 004ba0e6 (UNCONDITIONAL_JUMP)  ; LAB_004ba0e6
    JBE 0x004ba0e6                      ; 004ba60c
        ;   XREF to: 004ba0e6 (CONDITIONAL_JUMP)  ; LAB_004ba0e6
        ;   Label: LAB_004ba60c
    CMP EAX,0x10                        ; 004ba612
    JBE 0x004ba0e6                      ; 004ba615
        ;   XREF to: 004ba0e6 (CONDITIONAL_JUMP)  ; LAB_004ba0e6
    CMP EAX,0x15                        ; 004ba61b
    JZ 0x004ba357                       ; 004ba61e
        ;   XREF to: 004ba357 (CONDITIONAL_JUMP)  ; LAB_004ba357
    JMP 0x004ba0e6                      ; 004ba624
        ;   XREF to: 004ba0e6 (UNCONDITIONAL_JUMP)  ; LAB_004ba0e6
    JBE 0x004ba357                      ; 004ba629
        ;   XREF to: 004ba357 (CONDITIONAL_JUMP)  ; LAB_004ba357
        ;   Label: LAB_004ba629
    CMP EAX,0x2                         ; 004ba62f
    JBE 0x004ba357                      ; 004ba632
        ;   XREF to: 004ba357 (CONDITIONAL_JUMP)  ; LAB_004ba357
    CMP EAX,0x3                         ; 004ba638
    JZ 0x004ba357                       ; 004ba63b
        ;   XREF to: 004ba357 (CONDITIONAL_JUMP)  ; LAB_004ba357
    JMP 0x004ba0e6                      ; 004ba641
        ;   XREF to: 004ba0e6 (UNCONDITIONAL_JUMP)  ; LAB_004ba0e6
    MOV dword ptr [EBX + 0x2590],EAX    ; 004ba646
        ;   Label: LAB_004ba646
    JMP 0x004ba215                      ; 004ba64c
        ;   XREF to: 004ba215 (UNCONDITIONAL_JUMP)  ; LAB_004ba215
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004ba651
        ;   Label: LAB_004ba651
    JZ 0x004ba228                       ; 004ba658
        ;   XREF to: 004ba228 (CONDITIONAL_JUMP)  ; LAB_004ba228
    PUSH 0x1                            ; 004ba65e
    PUSH 0x11                           ; 004ba660
    PUSH EDI                            ; 004ba662
    JMP 0x004ba220                      ; 004ba663
        ;   XREF to: 004ba220 (UNCONDITIONAL_JUMP)  ; LAB_004ba220
    MOV dword ptr [ESP + 0x60],ECX      ; 004ba668
        ;   Label: LAB_004ba668
    MOV dword ptr [ESP + 0x64],ECX      ; 004ba66c
    MOV dword ptr [ESP + 0x68],ECX      ; 004ba670
    LEA EDX,[EBX + 0x23a4]              ; 004ba674
    FLD float ptr [EBP + 0x18]          ; 004ba67a
    FLD ST0                             ; 004ba67d
    MOV EAX,dword ptr [EDX]             ; 004ba67f
    FMUL double ptr [0x0058615a]        ; 004ba681 | DOUBLE_0058615a
    MOV dword ptr [ESP + 0x60],EAX      ; 004ba687
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ba68b
    MOV dword ptr [ESP + 0x64],EAX      ; 004ba68e
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ba692
    MOV dword ptr [ESP + 0x68],EAX      ; 004ba695
    FLD float ptr [EBX + 0x2424]        ; 004ba699
    FXCH                                ; 004ba69f
    FSUBR ST0,ST1                       ; 004ba6a1
    LEA EDX,[EBX + 0x2420]              ; 004ba6a3
    FSTP ST1                            ; 004ba6a9
    FSTP float ptr [EBX + 0x2424]       ; 004ba6ab
    FLD float ptr [EDX]                 ; 004ba6b1
    FMUL ST1                            ; 004ba6b3
    FSTP float ptr [ESP + 0x48]         ; 004ba6b5
    FLD float ptr [EDX + 0x4]           ; 004ba6b9
    FMUL ST1                            ; 004ba6bc
    FSTP float ptr [ESP + 0x4c]         ; 004ba6be
    FMUL float ptr [EDX + 0x8]          ; 004ba6c2
    LEA EAX,[EBX + 0x2414]              ; 004ba6c5
    FLD float ptr [ESP + 0x60]          ; 004ba6cb
    FLD float ptr [ESP + 0x64]          ; 004ba6cf
    FLD float ptr [ESP + 0x68]          ; 004ba6d3
    FLD float ptr [ESP + 0x48]          ; 004ba6d7
    FLD float ptr [ESP + 0x4c]          ; 004ba6db
    FXCH ST5                            ; 004ba6df
    FSTP float ptr [ESP + 0x50]         ; 004ba6e1
    FADD float ptr [EAX]                ; 004ba6e5
    FLD float ptr [ESP + 0x50]          ; 004ba6e7
    FXCH                                ; 004ba6eb
    FSTP float ptr [ESP + 0x3c]         ; 004ba6ed
    FXCH ST4                            ; 004ba6f1
    FADD float ptr [EAX + 0x4]          ; 004ba6f3
    FXCH ST3                            ; 004ba6f6
    FADD float ptr [ESP + 0x3c]         ; 004ba6f8
    FXCH ST3                            ; 004ba6fc
    FSTP float ptr [ESP + 0x40]         ; 004ba6fe
    FXCH ST3                            ; 004ba702
    FADD float ptr [EAX + 0x8]          ; 004ba704
    FXCH                                ; 004ba707
    FADD float ptr [ESP + 0x40]         ; 004ba709
    FXCH                                ; 004ba70d
    FSTP float ptr [ESP + 0x44]         ; 004ba70f
    FXCH                                ; 004ba713
    FSTP float ptr [ESP + 0x60]         ; 004ba715
    LEA EAX,[ESP + 0x60]                ; 004ba719
    FSTP float ptr [ESP + 0x64]         ; 004ba71d
    PUSH EAX                            ; 004ba721
    FADD float ptr [ESP + 0x48]         ; 004ba722
    PUSH EBX                            ; 004ba726
    FSTP float ptr [ESP + 0x70]         ; 004ba727
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004ba72b
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004ba730
    JMP 0x004ba228                      ; 004ba733
        ;   XREF to: 004ba228 (UNCONDITIONAL_JUMP)  ; LAB_004ba228

