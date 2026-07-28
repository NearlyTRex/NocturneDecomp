; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_FUN_00541d00(CSvetlana *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00541ccc = 005420de
;   TerminatedCString s_s_confused_while_walking_0059634b
;   double DOUBLE_00596379 = 100
;   double DOUBLE_00596381 = 12.5663706140000
;   double DOUBLE_00596389 = 32
;   double DOUBLE_00596391 = 3
;   double DOUBLE_00596399 = -1.57079632675000
;   float FLOAT_005963a1 = 3.141593
;   double DOUBLE_005963a9 = 1.57079632675000
;   double DOUBLE_005963b1 = 1.59386252192652E-314
;   double DOUBLE_005963b9 = 3.14159265350000
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_02dca058
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_cloth.cpp_CCloth_process_FUN_00436e50
;   core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
;   core_hero.cpp_CHero_tryInteract_FUN_004b4e90
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270
;   core_hero.cpp_CHero_tryPullLever_FUN_004b52f0
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541d00
        ;   Label: core_svetlana.cpp_FUN_00541d00
    PUSH ESI                            ; 00541d01
    PUSH EDI                            ; 00541d02
    PUSH EBP                            ; 00541d03
    MOV EBP,ESP                         ; 00541d04
    SUB ESP,0x88                        ; 00541d06
    AND ESP,0xfffffff8                  ; 00541d0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00541d0f
    FLD float ptr [EBX + 0x2434]        ; 00541d12
    FCOMP double ptr [0x00596379]       ; 00541d18 | DOUBLE_00596379
    FNSTSW AX                           ; 00541d1e
    SAHF                                ; 00541d20
    JNC 0x00541d47                      ; 00541d21
        ;   XREF to: 00541d47 (CONDITIONAL_JUMP)  ; LAB_00541d47
    FLD float ptr [EBX + 0x2434]        ; 00541d23
    FADD float ptr [EBP + 0x18]         ; 00541d29
    FST float ptr [EBX + 0x2434]        ; 00541d2c
    FCOMP double ptr [0x00596379]       ; 00541d32 | DOUBLE_00596379
    FNSTSW AX                           ; 00541d38
    SAHF                                ; 00541d3a
    JBE 0x00541d47                      ; 00541d3b
        ;   XREF to: 00541d47 (CONDITIONAL_JUMP)  ; LAB_00541d47
    MOV dword ptr [EBX + 0x2434],0x42c80000 ; 00541d3d
    PUSH dword ptr [EBP + 0x18]         ; 00541d47
        ;   Label: LAB_00541d47
    PUSH EBX                            ; 00541d4a
    CALL core_charactr.cpp_FUN_004259f0 ; 00541d4b
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 00541d50
    TEST EAX,EAX                        ; 00541d53
    JZ 0x00541d60                       ; 00541d55
        ;   XREF to: 00541d60 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0x1fa38],0x4   ; 00541d57
    JNZ 0x00541d67                      ; 00541d5e
        ;   XREF to: 00541d67 (CONDITIONAL_JUMP)  ; LAB_00541d67
    MOV ESP,EBP                         ; 00541d60
        ;   Label: caseD_9
    POP EBP                             ; 00541d62
    POP EDI                             ; 00541d63
    POP ESI                             ; 00541d64
    POP EBX                             ; 00541d65
    RET                                 ; 00541d66
    PUSH dword ptr [EBP + 0x18]         ; 00541d67
        ;   Label: LAB_00541d67
    PUSH EBX                            ; 00541d6a
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0 ; 00541d6b
        ;   XREF to: 0042abd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541d70
    FLD float ptr [EBP + 0x18]          ; 00541d73
    FLD float ptr [EBX + 0xbc8c]        ; 00541d76
    FSUB float ptr [EBP + 0x18]         ; 00541d7c
    FXCH                                ; 00541d7f
    FMUL double ptr [0x00596381]        ; 00541d81 | DOUBLE_00596381
    FXCH                                ; 00541d87
    FST float ptr [EBX + 0xbc8c]        ; 00541d89
    FXCH                                ; 00541d8f
    FSTP float ptr [EBX + 0x2430]       ; 00541d91
    FLDZ                                ; 00541d97
    FCOMPP                              ; 00541d99
    FNSTSW AX                           ; 00541d9b
    SAHF                                ; 00541d9d
    JBE 0x00541daa                      ; 00541d9e
        ;   XREF to: 00541daa (CONDITIONAL_JUMP)  ; LAB_00541daa
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 00541da0
    LEA ESI,[EBX + 0x23a4]              ; 00541daa
        ;   Label: LAB_00541daa
    PUSH dword ptr [EBP + 0x18]         ; 00541db0
    MOV dword ptr [ESI + 0x8],0x0       ; 00541db3
    PUSH EBX                            ; 00541dba
    MOV EAX,dword ptr [ESI + 0x8]       ; 00541dbb
    MOV dword ptr [ESI + 0x4],EAX       ; 00541dbe
    MOV EAX,dword ptr [ESI + 0x4]       ; 00541dc1
    MOV dword ptr [ESI],EAX             ; 00541dc4
    CALL core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00542ad0 ; 00541dc6
        ;   XREF to: 00542ad0 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00542ad0(CSvetlana * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541dcb
    PUSH dword ptr [EBP + 0x18]         ; 00541dce
    FLD float ptr [EBX + 0x23ac]        ; 00541dd1
    PUSH EBX                            ; 00541dd7
    FSTP float ptr [EBX + 0x242c]       ; 00541dd8
    CALL core_charactr.cpp_FUN_00428c00 ; 00541dde
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    ADD ESP,0x8                         ; 00541de3
    TEST EAX,EAX                        ; 00541de6
    JZ 0x005420a7                       ; 00541de8
        ;   XREF to: 005420a7 (CONDITIONAL_JUMP)  ; LAB_005420a7
    LEA EAX,[EBX + 0x150]               ; 00541dee
    PUSH EAX                            ; 00541df4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00541df5
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541dfa
    ADD ESP,0x4                         ; 00541dfd
    CMP EAX,0x1a                        ; 00541e00
    JZ 0x00541e1c                       ; 00541e03
        ;   XREF to: 00541e1c (CONDITIONAL_JUMP)  ; LAB_00541e1c
    CMP EAX,0x1b                        ; 00541e05
    JZ 0x00541e1c                       ; 00541e08
        ;   XREF to: 00541e1c (CONDITIONAL_JUMP)  ; LAB_00541e1c
    MOV dword ptr [ESI + 0x8],0x0       ; 00541e0a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00541e11
    MOV dword ptr [ESI + 0x4],EAX       ; 00541e14
    MOV EAX,dword ptr [ESI + 0x4]       ; 00541e17
    MOV dword ptr [ESI],EAX             ; 00541e1a
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00541e1c
        ;   Label: LAB_00541e1c
    LEA ESI,[EBX + 0x150]               ; 00541e22
    CMP EAX,0x2                         ; 00541e28
    JNC 0x00542090                      ; 00541e2b
        ;   XREF to: 00542090 (CONDITIONAL_JUMP)  ; LAB_00542090
    CMP EAX,0x1                         ; 00541e31
    JNZ 0x00542097                      ; 00541e34
        ;   XREF to: 00542097 (CONDITIONAL_JUMP)  ; LAB_00542097
    PUSH EAX                            ; 00541e3a
    PUSH EAX                            ; 00541e3b
    PUSH ESI                            ; 00541e3c
        ;   Label: LAB_00541e3c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00541e3d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00541e3d
    ADD ESP,0xc                         ; 00541e42
        ;   Label: LAB_00541e42
    MOV EAX,dword ptr [EBX + 0x2590]    ; 00541e45
        ;   Label: caseD_4
    TEST EAX,EAX                        ; 00541e4b
    JZ 0x00542276                       ; 00541e4d
        ;   XREF to: 00542276 (CONDITIONAL_JUMP)  ; LAB_00542276
    CMP dword ptr [EBX + 0x2594],0x0    ; 00541e53
    JNZ 0x00541f23                      ; 00541e5a
        ;   XREF to: 00541f23 (CONDITIONAL_JUMP)  ; LAB_00541f23
    ADD EAX,0x20                        ; 00541e60
    PUSH EAX                            ; 00541e63
    LEA EAX,[ESP + 0x34]                ; 00541e64
    PUSH EAX                            ; 00541e68
    PUSH EBX                            ; 00541e69
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00541e6a
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00541e6f
    PUSH EAX                            ; 00541e72
    LEA EAX,[ESP + 0x4c]                ; 00541e73
    PUSH EAX                            ; 00541e77
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00541e78
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 00541e7d
    PUSH dword ptr [EAX + 0x4]          ; 00541e80
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00541e83
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x88],EAX      ; 00541e88
    FLD float ptr [ESP + 0x88]          ; 00541e8f
    ADD ESP,0x4                         ; 00541e96
    FST float ptr [ESP]                 ; 00541e99
    FCOMP double ptr [0x00596399]       ; 00541e9c | DOUBLE_00596399
    FNSTSW AX                           ; 00541ea2
    SAHF                                ; 00541ea4
    JNC 0x00541eb3                      ; 00541ea5
        ;   XREF to: 00541eb3 (CONDITIONAL_JUMP)  ; LAB_00541eb3
    FLD float ptr [ESP]                 ; 00541ea7
    FADD float ptr [0x005963a1]         ; 00541eaa | FLOAT_005963a1
    FSTP float ptr [ESP]                ; 00541eb0
    FLD float ptr [ESP]                 ; 00541eb3
        ;   Label: LAB_00541eb3
    FCOMP double ptr [0x005963a9]       ; 00541eb6 | DOUBLE_005963a9
    FNSTSW AX                           ; 00541ebc
    SAHF                                ; 00541ebe
    JBE 0x00541ecd                      ; 00541ebf
        ;   XREF to: 00541ecd (CONDITIONAL_JUMP)  ; LAB_00541ecd
    FLD float ptr [ESP]                 ; 00541ec1
    FADD float ptr [0x005963b1]         ; 00541ec4 | DOUBLE_005963b1
    FSTP float ptr [ESP]                ; 00541eca
    FLD float ptr [EBP + 0x18]          ; 00541ecd
        ;   Label: LAB_00541ecd
    FMUL double ptr [0x005963b9]        ; 00541ed0 | DOUBLE_005963b9
    FLD float ptr [ESP]                 ; 00541ed6
    FXCH                                ; 00541ed9
    FST float ptr [ESP + 0x80]          ; 00541edb
    FCHS                                ; 00541ee2
    FSTP float ptr [ESP + 0x78]         ; 00541ee4
    FCOMP float ptr [ESP + 0x78]        ; 00541ee8
    FNSTSW AX                           ; 00541eec
    SAHF                                ; 00541eee
    JNC 0x00541ef8                      ; 00541eef
        ;   XREF to: 00541ef8 (CONDITIONAL_JUMP)  ; LAB_00541ef8
    MOV EAX,dword ptr [ESP + 0x78]      ; 00541ef1
    MOV dword ptr [ESP],EAX             ; 00541ef5
    FLD float ptr [ESP]                 ; 00541ef8
        ;   Label: LAB_00541ef8
    FCOMP float ptr [ESP + 0x80]        ; 00541efb
    FNSTSW AX                           ; 00541f02
    SAHF                                ; 00541f04
    JBE 0x00541f11                      ; 00541f05
        ;   XREF to: 00541f11 (CONDITIONAL_JUMP)  ; LAB_00541f11
    MOV EAX,dword ptr [ESP + 0x80]      ; 00541f07
    MOV dword ptr [ESP],EAX             ; 00541f0e
    FLD float ptr [EBX + 0x34]          ; 00541f11
        ;   Label: LAB_00541f11
    FADD float ptr [ESP]                ; 00541f14
    PUSH EBX                            ; 00541f17
    FSTP float ptr [EBX + 0x34]         ; 00541f18
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00541f1b
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00541f20
    MOV ESI,dword ptr [EBX + 0x2590]    ; 00541f23
        ;   Label: LAB_00541f23
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00541f29
    PUSH 0x0                            ; 00541f2f
    MOV dword ptr [ESP + 0x88],EAX      ; 00541f31
    LEA EAX,[ESP + 0x64]                ; 00541f38
    PUSH EAX                            ; 00541f3c
    LEA EDI,[EBX + 0x150]               ; 00541f3d
    PUSH EDI                            ; 00541f43
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00541f44
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00541f49
    PUSH EAX                            ; 00541f4c
    PUSH EBX                            ; 00541f4d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00541f4e
    PUSH ESI                            ; 00541f55
    CALL dword ptr [EAX + 0x108]        ; 00541f56
    ADD ESP,0xc                         ; 00541f5c
    TEST EAX,EAX                        ; 00541f5f
    JZ 0x00542254                       ; 00541f61
        ;   XREF to: 00542254 (CONDITIONAL_JUMP)  ; LAB_00542254
    CMP dword ptr [EBX + 0x2590],0x0    ; 00541f67
    JNZ 0x0054225f                      ; 00541f6e
        ;   XREF to: 0054225f (CONDITIONAL_JUMP)  ; LAB_0054225f
    PUSH 0x1                            ; 00541f74
        ;   Label: LAB_00541f74
    PUSH 0x0                            ; 00541f76
    LEA EAX,[EBX + 0x150]               ; 00541f78
    PUSH EAX                            ; 00541f7e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00541f7f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00541f7f
    ADD ESP,0xc                         ; 00541f84
    PUSH EBX                            ; 00541f87
        ;   Label: LAB_00541f87
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00541f88
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00541f8d
    LEA EAX,[EBX + 0x150]               ; 00541f90
    PUSH EAX                            ; 00541f96
    MOV dword ptr [ESP + 0x80],EAX      ; 00541f97
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00541f9e
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00541fa3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00541fa6
    PUSH EBX                            ; 00541fac
    CALL dword ptr [EAX + 0x104]        ; 00541fad
    ADD ESP,0x4                         ; 00541fb3
    TEST EAX,EAX                        ; 00541fb6
    JNZ 0x00542000                      ; 00541fb8
        ;   XREF to: 00542000 (CONDITIONAL_JUMP)  ; LAB_00542000
    PUSH 0x51b650                       ; 00541fba
    MOV ESI,dword ptr [0x02dca058]      ; 00541fbf | DAT_02dca058
    PUSH ESI                            ; 00541fc5
    LEA EAX,[EBX + 0x950a8]             ; 00541fc6
    PUSH dword ptr [EBX + 0x950b4]      ; 00541fcc
    PUSH EAX                            ; 00541fd2
    LEA ESI,[ESP + 0x24]                ; 00541fd3
    LEA EDI,[ESP + 0x14]                ; 00541fd7
    CALL core_xform.cpp_eulerToQuaternion_FUN_0055d610 ; 00541fdb
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_eulerToQuaternion_FUN_0055d610()
    LEA ESI,[ESP + 0x24]                ; 00541fe0
    ADD ESP,0x4                         ; 00541fe4
    LEA EAX,[ESP + 0x10]                ; 00541fe7
    MOVSD ES:EDI,ESI                    ; 00541feb
    MOVSD ES:EDI,ESI                    ; 00541fec
    MOVSD ES:EDI,ESI                    ; 00541fed
    MOVSD ES:EDI,ESI                    ; 00541fee
    PUSH EAX                            ; 00541fef
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00541ff0
    PUSH EDI                            ; 00541ff7
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 00541ff8
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00541ffd
    PUSH dword ptr [EBP + 0x18]         ; 00542000
        ;   Label: LAB_00542000
    PUSH EBX                            ; 00542003
    CALL core_charactr.cpp_FUN_0042a150 ; 00542004
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 00542009
    LEA ESI,[EBX + 0x150]               ; 0054200c
    PUSH ESI                            ; 00542012
    PUSH dword ptr [EBX + 0x240c]       ; 00542013
    LEA EDI,[EBX + 0x30]                ; 00542019
    PUSH dword ptr [EBP + 0x18]         ; 0054201c
    PUSH EDI                            ; 0054201f
    LEA EAX,[EBX + 0x20]                ; 00542020
    PUSH EAX                            ; 00542023
    MOV dword ptr [ESP + 0x98],EAX      ; 00542024
    LEA EAX,[EBX + 0x1fa44]             ; 0054202b
    PUSH EAX                            ; 00542031
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 00542032
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00436e50(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00542037
    PUSH ESI                            ; 0054203a
    PUSH dword ptr [EBX + 0x240c]       ; 0054203b
    PUSH dword ptr [EBP + 0x18]         ; 00542041
    PUSH EDI                            ; 00542044
    MOV EDX,dword ptr [ESP + 0x94]      ; 00542045
    PUSH EDX                            ; 0054204c
    ADD EBX,0x5a574                     ; 0054204d
    PUSH EBX                            ; 00542053
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 00542054
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00436e50(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00542059
    MOV ESP,EBP                         ; 0054205c
    POP EBP                             ; 0054205e
    POP EDI                             ; 0054205f
    POP ESI                             ; 00542060
    POP EBX                             ; 00542061
    RET                                 ; 00542062
    PUSH 0x1                            ; 00542063
        ;   Label: LAB_00542063
    PUSH 0x0                            ; 00542065
    PUSH ESI                            ; 00542067
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00542068
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054206d
    PUSH EBX                            ; 00542070
    PUSH 0x59634b                       ; 00542071 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005ad350]      ; 00542076 | PTR_DAT_005ad350
    PUSH EDI                            ; 0054207c | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0054207d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x00541e42                      ; 00542082
        ;   XREF to: 00541e42 (UNCONDITIONAL_JUMP)  ; LAB_00541e42
    PUSH 0x1                            ; 00542087
        ;   Label: LAB_00542087
    PUSH 0x2                            ; 00542089
    JMP 0x00541e3c                      ; 0054208b
        ;   XREF to: 00541e3c (UNCONDITIONAL_JUMP)  ; LAB_00541e3c
    JBE 0x00542087                      ; 00542090
        ;   XREF to: 00542087 (CONDITIONAL_JUMP)  ; LAB_00542087
        ;   Label: LAB_00542090
    CMP EAX,0x3                         ; 00542092
    JZ 0x00542063                       ; 00542095
        ;   XREF to: 00542063 (CONDITIONAL_JUMP)  ; LAB_00542063
    PUSH 0x1                            ; 00542097
        ;   Label: LAB_00542097
    PUSH 0x0                            ; 00542099
    LEA EAX,[EBX + 0x150]               ; 0054209b
    PUSH EAX                            ; 005420a1
    JMP 0x00541e3d                      ; 005420a2
        ;   XREF to: 00541e3d (UNCONDITIONAL_JUMP)  ; LAB_00541e3d
    CMP dword ptr [EBX + 0xbc90],0x2    ; 005420a7
        ;   Label: LAB_005420a7
    JNZ 0x005420bc                      ; 005420ae
        ;   XREF to: 005420bc (CONDITIONAL_JUMP)  ; LAB_005420bc
    PUSH dword ptr [EBP + 0x18]         ; 005420b0
    PUSH EBX                            ; 005420b3
    CALL core_svetlana.cpp_FUN_005423c0 ; 005420b4
        ;   XREF to: 005423c0 (UNCONDITIONAL_CALL)  ; undefined core_svetlana.cpp_FUN_005423c0()
    ADD ESP,0x8                         ; 005420b9
    LEA EAX,[EBX + 0x150]               ; 005420bc
        ;   Label: LAB_005420bc
    PUSH EAX                            ; 005420c2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005420c3
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005420c8
    ADD ESP,0x4                         ; 005420cb
    CMP EAX,0xa                         ; 005420ce
    JA 0x00541e45                       ; 005420d1
        ;   XREF to: 00541e45 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x541ccc]  ; 005420d7 | caseD_a | caseD_8 | caseD_9
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2408],0x0    ; 005420de
        ;   Label: caseD_0
    JZ 0x00541e45                       ; 005420e5
        ;   XREF to: 00541e45 (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0x1fa3c]   ; 005420eb
    XOR ESI,ESI                         ; 005420f1
    TEST EDI,EDI                        ; 005420f3
    JZ 0x005420fc                       ; 005420f5
        ;   XREF to: 005420fc (CONDITIONAL_JUMP)  ; LAB_005420fc
    MOV ESI,0xa                         ; 005420f7
    CMP dword ptr [EBX + 0xbc94],0x0    ; 005420fc
        ;   Label: LAB_005420fc
    JZ 0x00542117                       ; 00542103
        ;   XREF to: 00542117 (CONDITIONAL_JUMP)  ; LAB_00542117
    CMP dword ptr [EBX + 0xbc9c],0x0    ; 00542105
    JZ 0x005421c7                       ; 0054210c
        ;   XREF to: 005421c7 (CONDITIONAL_JUMP)  ; LAB_005421c7
    MOV ESI,0x2                         ; 00542112
    CMP dword ptr [EBX + 0xbc98],0x0    ; 00542117
        ;   Label: LAB_00542117
    JZ 0x00542125                       ; 0054211e
        ;   XREF to: 00542125 (CONDITIONAL_JUMP)  ; LAB_00542125
    MOV ESI,0x3                         ; 00542120
    CMP dword ptr [EBX + 0xbcac],0x0    ; 00542125
        ;   Label: LAB_00542125
    JZ 0x00542159                       ; 0054212c
        ;   XREF to: 00542159 (CONDITIONAL_JUMP)  ; LAB_00542159
    MOV EDX,dword ptr [EBX + 0x1fa3c]   ; 0054212e
    MOV dword ptr [EBX + 0xbcac],0x0    ; 00542134
    TEST EDX,EDX                        ; 0054213e
    SETZ AL                             ; 00542140
    AND EAX,0xff                        ; 00542143
    MOV dword ptr [EBX + 0x1fa3c],EAX   ; 00542148
    JZ 0x005421d1                       ; 0054214e
        ;   XREF to: 005421d1 (CONDITIONAL_JUMP)  ; LAB_005421d1
    MOV ESI,0xa                         ; 00542154
    CMP dword ptr [EBX + 0xbca0],0x0    ; 00542159
        ;   Label: LAB_00542159
    JZ 0x00542192                       ; 00542160
        ;   XREF to: 00542192 (CONDITIONAL_JUMP)  ; LAB_00542192
    MOV EAX,dword ptr [EBX + 0x1fa3c]   ; 00542162
    MOV EDI,0x1                         ; 00542168
    TEST EAX,EAX                        ; 0054216d
    JZ 0x005421d5                       ; 0054216f
        ;   XREF to: 005421d5 (CONDITIONAL_JUMP)  ; LAB_005421d5
    TEST EDI,EDI                        ; 00542171
        ;   Label: LAB_00542171
    JZ 0x00542192                       ; 00542173
        ;   XREF to: 00542192 (CONDITIONAL_JUMP)  ; LAB_00542192
    MOV ESI,dword ptr [EBX + 0x1fa40]   ; 00542175
        ;   Label: LAB_00542175
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0054217b
    TEST ESI,ESI                        ; 00542185
    JZ 0x0054224a                       ; 00542187
        ;   XREF to: 0054224a (CONDITIONAL_JUMP)  ; LAB_0054224a
    MOV ESI,0xe                         ; 0054218d
    FLD float ptr [EBX + 0xbcb8]        ; 00542192
        ;   Label: LAB_00542192
    LEA EDI,[EBX + 0x150]               ; 00542198
    FMUL float ptr [EBX + 0x2430]       ; 0054219e
    PUSH EDI                            ; 005421a4
    FSTP float ptr [EBX + 0x2410]       ; 005421a5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005421ab
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005421b0
    ADD ESP,0x4                         ; 005421b3
    CMP ESI,EAX                         ; 005421b6
    JZ 0x00541e45                       ; 005421b8
        ;   XREF to: 00541e45 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 005421be
    PUSH ESI                            ; 005421c0
    PUSH EDI                            ; 005421c1
    JMP 0x00541e3d                      ; 005421c2
        ;   XREF to: 00541e3d (UNCONDITIONAL_JUMP)  ; LAB_00541e3d
    MOV ESI,0x1                         ; 005421c7
        ;   Label: LAB_005421c7
    JMP 0x00542117                      ; 005421cc
        ;   XREF to: 00542117 (UNCONDITIONAL_JUMP)  ; LAB_00542117
    XOR ESI,ESI                         ; 005421d1
        ;   Label: LAB_005421d1
    JMP 0x00542159                      ; 005421d3
        ;   XREF to: 00542159 (UNCONDITIONAL_JUMP)  ; LAB_00542159
    CMP dword ptr [EBX + 0xbc90],0x2    ; 005421d5
        ;   Label: LAB_005421d5
    JZ 0x00542171                       ; 005421dc
        ;   XREF to: 00542171 (CONDITIONAL_JUMP)  ; LAB_00542171
    PUSH EBX                            ; 005421de
    CALL core_hero.cpp_CHero_tryInteract_FUN_004b4e90 ; 005421df
        ;   XREF to: 004b4e90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004b4e90(CHero * this_ptr)
    XOR EDI,EDI                         ; 005421e4
    ADD ESP,0x4                         ; 005421e6
    TEST EAX,EAX                        ; 005421e9
    JNZ 0x00542171                      ; 005421eb
        ;   XREF to: 00542171 (CONDITIONAL_JUMP)  ; LAB_00542171
    PUSH EBX                            ; 005421ed
    CALL core_hero.cpp_FUN_004b5110     ; 005421ee
        ;   XREF to: 004b5110 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b5110()
    ADD ESP,0x4                         ; 005421f3
    MOV dword ptr [ESP + 0x74],EAX      ; 005421f6
    TEST EAX,EAX                        ; 005421fa
    JBE 0x00542203                      ; 005421fc
        ;   XREF to: 00542203 (CONDITIONAL_JUMP)  ; LAB_00542203
    CMP EAX,0x1                         ; 005421fe
    JNZ 0x00542231                      ; 00542201
        ;   XREF to: 00542231 (CONDITIONAL_JUMP)  ; LAB_00542231
    CMP dword ptr [ESP + 0x74],0x0      ; 00542203
        ;   Label: LAB_00542203
    JNZ 0x00542171                      ; 00542208
        ;   XREF to: 00542171 (CONDITIONAL_JUMP)  ; LAB_00542171
    PUSH EBX                            ; 0054220e
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0 ; 0054220f
        ;   XREF to: 004b4fe0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00542214
    TEST EAX,EAX                        ; 00542217
    JNZ 0x00542171                      ; 00542219
        ;   XREF to: 00542171 (CONDITIONAL_JUMP)  ; LAB_00542171
    PUSH EBX                            ; 0054221f
    CALL core_hero.cpp_CHero_tryPullLever_FUN_004b52f0 ; 00542220
        ;   XREF to: 004b52f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPullLever_FUN_004b52f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00542225
    TEST EAX,EAX                        ; 00542228
    JNZ 0x0054223c                      ; 0054222a
        ;   XREF to: 0054223c (CONDITIONAL_JUMP)  ; LAB_0054223c
    JMP 0x00542175                      ; 0054222c
        ;   XREF to: 00542175 (UNCONDITIONAL_JUMP)  ; LAB_00542175
    PUSH EBX                            ; 00542231
        ;   Label: LAB_00542231
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270 ; 00542232
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270(CHero * this_ptr)
    ADD ESP,0x4                         ; 00542237
    JMP 0x00542203                      ; 0054223a
        ;   XREF to: 00542203 (UNCONDITIONAL_JUMP)  ; LAB_00542203
    PUSH EBX                            ; 0054223c
        ;   Label: LAB_0054223c
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004b5490 ; 0054223d
        ;   XREF to: 004b5490 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_executeLeverPull_FUN_004b5490(CHero * this_ptr)
    ADD ESP,0x4                         ; 00542242
    JMP 0x00542171                      ; 00542245
        ;   XREF to: 00542171 (UNCONDITIONAL_JUMP)  ; LAB_00542171
    MOV ESI,0xf                         ; 0054224a
        ;   Label: LAB_0054224a
    JMP 0x00542192                      ; 0054224f
        ;   XREF to: 00542192 (UNCONDITIONAL_JUMP)  ; LAB_00542192
    MOV dword ptr [EBX + 0x2590],EAX    ; 00542254
        ;   Label: LAB_00542254
    JMP 0x00541f74                      ; 0054225a
        ;   XREF to: 00541f74 (UNCONDITIONAL_JUMP)  ; LAB_00541f74
    CMP dword ptr [EBX + 0xbca0],0x0    ; 0054225f
        ;   Label: LAB_0054225f
    JZ 0x00541f87                       ; 00542266
        ;   XREF to: 00541f87 (CONDITIONAL_JUMP)  ; LAB_00541f87
    PUSH 0x1                            ; 0054226c
    PUSH 0x10                           ; 0054226e
    PUSH EDI                            ; 00542270
    JMP 0x00541f7f                      ; 00542271
        ;   XREF to: 00541f7f (UNCONDITIONAL_JUMP)  ; LAB_00541f7f
    MOV dword ptr [ESP + 0x3c],EAX      ; 00542276
        ;   Label: LAB_00542276
    LEA ESI,[EBX + 0x23a4]              ; 0054227a
    MOV dword ptr [ESP + 0x40],EAX      ; 00542280
    MOV dword ptr [ESP + 0x44],EAX      ; 00542284
    MOV EAX,dword ptr [ESI]             ; 00542288
    MOV dword ptr [ESP + 0x3c],EAX      ; 0054228a
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054228e
    MOV dword ptr [ESP + 0x40],EAX      ; 00542291
    MOV EAX,dword ptr [ESI + 0x8]       ; 00542295
    MOV dword ptr [ESP + 0x44],EAX      ; 00542298
    LEA EAX,[EBX + 0x150]               ; 0054229c
    PUSH EAX                            ; 005422a2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005422a3
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005422a8
    ADD ESP,0x4                         ; 005422ab
    CMP EAX,0x1a                        ; 005422ae
    JZ 0x005422c8                       ; 005422b1
        ;   XREF to: 005422c8 (CONDITIONAL_JUMP)  ; LAB_005422c8
    FLD float ptr [EBP + 0x18]          ; 005422b3
    FMUL double ptr [0x00596389]        ; 005422b6 | DOUBLE_00596389
    FSUBR float ptr [EBX + 0x2424]      ; 005422bc
    FSTP float ptr [EBX + 0x2424]       ; 005422c2
    LEA ESI,[EBX + 0x2420]              ; 005422c8
        ;   Label: LAB_005422c8
    FLD float ptr [EBP + 0x18]          ; 005422ce
    FLD float ptr [ESI]                 ; 005422d1
    FMUL ST1                            ; 005422d3
    FSTP float ptr [ESP + 0x54]         ; 005422d5
    FLD float ptr [ESI + 0x4]           ; 005422d9
    FMUL ST1                            ; 005422dc
    FSTP float ptr [ESP + 0x58]         ; 005422de
    FMUL float ptr [ESI + 0x8]          ; 005422e2
    FLD float ptr [ESP + 0x3c]          ; 005422e5
    FLD float ptr [ESP + 0x40]          ; 005422e9
    FLD float ptr [ESP + 0x44]          ; 005422ed
    LEA EAX,[EBX + 0x2414]              ; 005422f1
    FLD float ptr [ESP + 0x54]          ; 005422f7
    FLD float ptr [ESP + 0x58]          ; 005422fb
    FXCH ST5                            ; 005422ff
    FSTP float ptr [ESP + 0x5c]         ; 00542301
    FADD float ptr [EAX]                ; 00542305
    FLD float ptr [ESP + 0x5c]          ; 00542307
    FXCH                                ; 0054230b
    FSTP float ptr [ESP + 0x24]         ; 0054230d
    FXCH ST4                            ; 00542311
    FADD float ptr [EAX + 0x4]          ; 00542313
    FXCH ST3                            ; 00542316
    FADD float ptr [ESP + 0x24]         ; 00542318
    FXCH ST3                            ; 0054231c
    FSTP float ptr [ESP + 0x28]         ; 0054231e
    FXCH ST3                            ; 00542322
    FADD float ptr [EAX + 0x8]          ; 00542324
    FXCH                                ; 00542327
    FADD float ptr [ESP + 0x28]         ; 00542329
    FXCH                                ; 0054232d
    FSTP float ptr [ESP + 0x2c]         ; 0054232f
    FXCH                                ; 00542333
    FSTP float ptr [ESP + 0x3c]         ; 00542335
    FSTP float ptr [ESP + 0x40]         ; 00542339
    LEA EAX,[EBX + 0x150]               ; 0054233d
    FADD float ptr [ESP + 0x2c]         ; 00542343
    PUSH EAX                            ; 00542347
    FSTP float ptr [ESP + 0x48]         ; 00542348
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0054234c
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00542351
    ADD ESP,0x4                         ; 00542354
    CMP EAX,0x17                        ; 00542357
    JZ 0x00542388                       ; 0054235a
        ;   XREF to: 00542388 (CONDITIONAL_JUMP)  ; LAB_00542388
    CMP EAX,0x18                        ; 0054235c
    JZ 0x00542388                       ; 0054235f
        ;   XREF to: 00542388 (CONDITIONAL_JUMP)  ; LAB_00542388
    CMP EAX,0x19                        ; 00542361
    JZ 0x00542388                       ; 00542364
        ;   XREF to: 00542388 (CONDITIONAL_JUMP)  ; LAB_00542388
    CMP EAX,0x25                        ; 00542366
    JZ 0x00542388                       ; 00542369
        ;   XREF to: 00542388 (CONDITIONAL_JUMP)  ; LAB_00542388
    CMP EAX,0x26                        ; 0054236b
    JZ 0x00542388                       ; 0054236e
        ;   XREF to: 00542388 (CONDITIONAL_JUMP)  ; LAB_00542388
    CMP EAX,0x27                        ; 00542370
    JZ 0x00542388                       ; 00542373
        ;   XREF to: 00542388 (CONDITIONAL_JUMP)  ; LAB_00542388
    CMP EAX,0x28                        ; 00542375
    JZ 0x00542388                       ; 00542378
        ;   XREF to: 00542388 (CONDITIONAL_JUMP)  ; LAB_00542388
    LEA EAX,[ESP + 0x3c]                ; 0054237a
    PUSH EAX                            ; 0054237e
    PUSH EBX                            ; 0054237f
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00542380
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00542385
    LEA EAX,[EBX + 0x150]               ; 00542388
        ;   Label: LAB_00542388
    PUSH EAX                            ; 0054238e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0054238f
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00542394
    ADD ESP,0x4                         ; 00542397
    CMP EAX,0x1a                        ; 0054239a
    JNZ 0x00541f87                      ; 0054239d
        ;   XREF to: 00541f87 (CONDITIONAL_JUMP)  ; LAB_00541f87
    FLD float ptr [EBP + 0x18]          ; 005423a3
    FMUL double ptr [0x00596391]        ; 005423a6 | DOUBLE_00596391
    FADD float ptr [EBX + 0x24]         ; 005423ac
    FSTP float ptr [EBX + 0x24]         ; 005423af
    JMP 0x00541f87                      ; 005423b2
        ;   XREF to: 00541f87 (UNCONDITIONAL_JUMP)  ; LAB_00541f87

