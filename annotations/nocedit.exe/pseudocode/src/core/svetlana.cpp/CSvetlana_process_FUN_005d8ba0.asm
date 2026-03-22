; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr,float delta_time)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; float[1520]      Stack[-0x1870]:6080  afStackY_1870
; float            Stack[-0x98]:4  local_98
; CQuaternion4f    Stack[-0x94]:16  CStack_94
; CQuaternion4f    Stack[-0x84]:16  CStack_84
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; CVector3f        Stack[-0x68]:12  local_68
; CVector3f        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; CVector3f        Stack[-0x38]:12  local_38
; int              Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; CDeformableModelInstance * Stack[-0x1c]:4  pCStack_1c
; float            Stack[-0x18]:4  local_18
; CCharacter_full_vtable * Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_005d8b6c = 005d8f7e
;   TerminatedCString s_s_confused_while_walking_00654a51
;   double DOUBLE_00654a82 = 100
;   double DOUBLE_00654a8a = 12.5663706140000
;   double DOUBLE_00654a92 = 32
;   double DOUBLE_00654a9a = 3
;   double DOUBLE_00654aa2 = -1.57079632675000
;   float FLOAT_00654aaa = 3.141593
;   double DOUBLE_00654ab2 = 1.57079632675000
;   float FLOAT_00654aba = -3.141593
;   double DOUBLE_00654ac2 = 3.14159265350000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;   int[19] g_SvetlanaBoneIndices
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_cloth.cpp_CCloth_process_FUN_0043ab80
;   core_hero.cpp_CHero_executeLeverPull_FUN_004f30f0
;   core_hero.cpp_CHero_tryInteract_FUN_004f2af0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0
;   core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70
;   core_hero.cpp_CHero_tryPullLever_FUN_004f2f50
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d8ba0
        ;   Label: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
    PUSH ESI                            ; 005d8ba1
    PUSH EDI                            ; 005d8ba2
    PUSH EBP                            ; 005d8ba3
    MOV EBP,ESP                         ; 005d8ba4
    SUB ESP,0x88                        ; 005d8ba6
    AND ESP,0xfffffff8                  ; 005d8bac
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d8baf
    FLD float ptr [EBX + 0x243c]        ; 005d8bb2
    FCOMP double ptr [0x00654a82]       ; 005d8bb8 | DOUBLE_00654a82
    FNSTSW AX                           ; 005d8bbe
    SAHF                                ; 005d8bc0
    JNC 0x005d8be7                      ; 005d8bc1
        ;   XREF to: 005d8be7 (CONDITIONAL_JUMP)  ; LAB_005d8be7
    FLD float ptr [EBX + 0x243c]        ; 005d8bc3
    FADD float ptr [EBP + 0x18]         ; 005d8bc9
    FST float ptr [EBX + 0x243c]        ; 005d8bcc
    FCOMP double ptr [0x00654a82]       ; 005d8bd2 | DOUBLE_00654a82
    FNSTSW AX                           ; 005d8bd8
    SAHF                                ; 005d8bda
    JBE 0x005d8be7                      ; 005d8bdb
        ;   XREF to: 005d8be7 (CONDITIONAL_JUMP)  ; LAB_005d8be7
    MOV dword ptr [EBX + 0x243c],0x42c80000 ; 005d8bdd
    PUSH dword ptr [EBP + 0x18]         ; 005d8be7
        ;   Label: LAB_005d8be7
    PUSH EBX                            ; 005d8bea
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 005d8beb
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005d8bf0
    TEST EAX,EAX                        ; 005d8bf3
    JZ 0x005d8c00                       ; 005d8bf5
        ;   XREF to: 005d8c00 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0x1fbd0],0x4   ; 005d8bf7
    JNZ 0x005d8c07                      ; 005d8bfe
        ;   XREF to: 005d8c07 (CONDITIONAL_JUMP)  ; LAB_005d8c07
    MOV ESP,EBP                         ; 005d8c00
        ;   Label: caseD_9
    POP EBP                             ; 005d8c02
    POP EDI                             ; 005d8c03
    POP ESI                             ; 005d8c04
    POP EBX                             ; 005d8c05
    RET                                 ; 005d8c06
    PUSH dword ptr [EBP + 0x18]         ; 005d8c07
        ;   Label: LAB_005d8c07
    PUSH EBX                            ; 005d8c0a
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40 ; 005d8c0b
        ;   XREF to: 0042ea40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005d8c10
    FLD float ptr [EBP + 0x18]          ; 005d8c13
    FLD float ptr [EBX + 0xbe24]        ; 005d8c16
    FSUB float ptr [EBP + 0x18]         ; 005d8c1c
    FXCH                                ; 005d8c1f
    FMUL double ptr [0x00654a8a]        ; 005d8c21 | DOUBLE_00654a8a
    FXCH                                ; 005d8c27
    FST float ptr [EBX + 0xbe24]        ; 005d8c29
    FXCH                                ; 005d8c2f
    FSTP float ptr [EBX + 0x2438]       ; 005d8c31
    FLDZ                                ; 005d8c37
    FCOMPP                              ; 005d8c39
    FNSTSW AX                           ; 005d8c3b
    SAHF                                ; 005d8c3d
    JBE 0x005d8c4a                      ; 005d8c3e
        ;   XREF to: 005d8c4a (CONDITIONAL_JUMP)  ; LAB_005d8c4a
    MOV dword ptr [EBX + 0xbe24],0x0    ; 005d8c40
    LEA ESI,[EBX + 0x23ac]              ; 005d8c4a
        ;   Label: LAB_005d8c4a
    PUSH dword ptr [EBP + 0x18]         ; 005d8c50
    MOV dword ptr [ESI + 0x8],0x0       ; 005d8c53
    PUSH EBX                            ; 005d8c5a
    MOV EAX,dword ptr [ESI + 0x8]       ; 005d8c5b
    MOV dword ptr [ESI + 0x4],EAX       ; 005d8c5e
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d8c61
    MOV dword ptr [ESI],EAX             ; 005d8c64
    CALL core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005d9970 ; 005d8c66
        ;   XREF to: 005d9970 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005d9970(CSvetlana * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005d8c6b
    PUSH dword ptr [EBP + 0x18]         ; 005d8c6e
    FLD float ptr [EBX + 0x23b4]        ; 005d8c71
    PUSH EBX                            ; 005d8c77
    FSTP float ptr [EBX + 0x2434]       ; 005d8c78
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 005d8c7e
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005d8c83
    TEST EAX,EAX                        ; 005d8c86
    JZ 0x005d8f47                       ; 005d8c88
        ;   XREF to: 005d8f47 (CONDITIONAL_JUMP)  ; LAB_005d8f47
    LEA EAX,[EBX + 0x158]               ; 005d8c8e
    PUSH EAX                            ; 005d8c94
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d8c95
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d8c9a
    ADD ESP,0x4                         ; 005d8c9d
    CMP EAX,0x1a                        ; 005d8ca0
    JZ 0x005d8cbc                       ; 005d8ca3
        ;   XREF to: 005d8cbc (CONDITIONAL_JUMP)  ; LAB_005d8cbc
    CMP EAX,0x1b                        ; 005d8ca5
    JZ 0x005d8cbc                       ; 005d8ca8
        ;   XREF to: 005d8cbc (CONDITIONAL_JUMP)  ; LAB_005d8cbc
    MOV dword ptr [ESI + 0x8],0x0       ; 005d8caa
    MOV EAX,dword ptr [ESI + 0x8]       ; 005d8cb1
    MOV dword ptr [ESI + 0x4],EAX       ; 005d8cb4
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d8cb7
    MOV dword ptr [ESI],EAX             ; 005d8cba
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005d8cbc
        ;   Label: LAB_005d8cbc
    LEA ESI,[EBX + 0x158]               ; 005d8cc2
    CMP EAX,0x2                         ; 005d8cc8
    JNC 0x005d8f30                      ; 005d8ccb
        ;   XREF to: 005d8f30 (CONDITIONAL_JUMP)  ; LAB_005d8f30
    CMP EAX,0x1                         ; 005d8cd1
    JNZ 0x005d8f37                      ; 005d8cd4
        ;   XREF to: 005d8f37 (CONDITIONAL_JUMP)  ; LAB_005d8f37
    PUSH EAX                            ; 005d8cda
    PUSH EAX                            ; 005d8cdb
    PUSH ESI                            ; 005d8cdc
        ;   Label: LAB_005d8cdc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005d8cdd
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005d8cdd
    ADD ESP,0xc                         ; 005d8ce2
        ;   Label: LAB_005d8ce2
    MOV EAX,dword ptr [EBX + 0x2598]    ; 005d8ce5
        ;   Label: caseD_8
    TEST EAX,EAX                        ; 005d8ceb
    JZ 0x005d9116                       ; 005d8ced
        ;   XREF to: 005d9116 (CONDITIONAL_JUMP)  ; LAB_005d9116
    CMP dword ptr [EBX + 0x259c],0x0    ; 005d8cf3
    JNZ 0x005d8dc3                      ; 005d8cfa
        ;   XREF to: 005d8dc3 (CONDITIONAL_JUMP)  ; LAB_005d8dc3
    ADD EAX,0x20                        ; 005d8d00
    PUSH EAX                            ; 005d8d03
    LEA EAX,[ESP + 0x34]                ; 005d8d04
    PUSH EAX                            ; 005d8d08
    PUSH EBX                            ; 005d8d09
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005d8d0a
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005d8d0f
    PUSH EAX                            ; 005d8d12
    LEA EAX,[ESP + 0x4c]                ; 005d8d13
    PUSH EAX                            ; 005d8d17
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005d8d18
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005d8d1d
    PUSH dword ptr [EAX + 0x4]          ; 005d8d20
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005d8d23
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x88],EAX      ; 005d8d28
    FLD float ptr [ESP + 0x88]          ; 005d8d2f
    ADD ESP,0x4                         ; 005d8d36
    FST float ptr [ESP]                 ; 005d8d39
    FCOMP double ptr [0x00654aa2]       ; 005d8d3c | DOUBLE_00654aa2
    FNSTSW AX                           ; 005d8d42
    SAHF                                ; 005d8d44
    JNC 0x005d8d53                      ; 005d8d45
        ;   XREF to: 005d8d53 (CONDITIONAL_JUMP)  ; LAB_005d8d53
    FLD float ptr [ESP]                 ; 005d8d47
    FADD float ptr [0x00654aaa]         ; 005d8d4a | FLOAT_00654aaa
    FSTP float ptr [ESP]                ; 005d8d50
    FLD float ptr [ESP]                 ; 005d8d53
        ;   Label: LAB_005d8d53
    FCOMP double ptr [0x00654ab2]       ; 005d8d56 | DOUBLE_00654ab2
    FNSTSW AX                           ; 005d8d5c
    SAHF                                ; 005d8d5e
    JBE 0x005d8d6d                      ; 005d8d5f
        ;   XREF to: 005d8d6d (CONDITIONAL_JUMP)  ; LAB_005d8d6d
    FLD float ptr [ESP]                 ; 005d8d61
    FADD float ptr [0x00654aba]         ; 005d8d64 | FLOAT_00654aba
    FSTP float ptr [ESP]                ; 005d8d6a
    FLD float ptr [EBP + 0x18]          ; 005d8d6d
        ;   Label: LAB_005d8d6d
    FMUL double ptr [0x00654ac2]        ; 005d8d70 | DOUBLE_00654ac2
    FLD float ptr [ESP]                 ; 005d8d76
    FXCH                                ; 005d8d79
    FST float ptr [ESP + 0x80]          ; 005d8d7b
    FCHS                                ; 005d8d82
    FSTP float ptr [ESP + 0x78]         ; 005d8d84
    FCOMP float ptr [ESP + 0x78]        ; 005d8d88
    FNSTSW AX                           ; 005d8d8c
    SAHF                                ; 005d8d8e
    JNC 0x005d8d98                      ; 005d8d8f
        ;   XREF to: 005d8d98 (CONDITIONAL_JUMP)  ; LAB_005d8d98
    MOV EAX,dword ptr [ESP + 0x78]      ; 005d8d91
    MOV dword ptr [ESP],EAX             ; 005d8d95
    FLD float ptr [ESP]                 ; 005d8d98
        ;   Label: LAB_005d8d98
    FCOMP float ptr [ESP + 0x80]        ; 005d8d9b
    FNSTSW AX                           ; 005d8da2
    SAHF                                ; 005d8da4
    JBE 0x005d8db1                      ; 005d8da5
        ;   XREF to: 005d8db1 (CONDITIONAL_JUMP)  ; LAB_005d8db1
    MOV EAX,dword ptr [ESP + 0x80]      ; 005d8da7
    MOV dword ptr [ESP],EAX             ; 005d8dae
    FLD float ptr [EBX + 0x34]          ; 005d8db1
        ;   Label: LAB_005d8db1
    FADD float ptr [ESP]                ; 005d8db4
    PUSH EBX                            ; 005d8db7
    FSTP float ptr [EBX + 0x34]         ; 005d8db8
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005d8dbb
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005d8dc0
    MOV ESI,dword ptr [EBX + 0x2598]    ; 005d8dc3
        ;   Label: LAB_005d8dc3
    MOV EAX,dword ptr [ESI + 0x154]     ; 005d8dc9
    PUSH 0x0                            ; 005d8dcf
    MOV dword ptr [ESP + 0x88],EAX      ; 005d8dd1
    LEA EAX,[ESP + 0x64]                ; 005d8dd8
    PUSH EAX                            ; 005d8ddc
    LEA EDI,[EBX + 0x158]               ; 005d8ddd
    PUSH EDI                            ; 005d8de3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005d8de4
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005d8de9
    PUSH EAX                            ; 005d8dec
    PUSH EBX                            ; 005d8ded
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005d8dee
    PUSH ESI                            ; 005d8df5
    CALL dword ptr [EAX + 0x124]        ; 005d8df6
    ADD ESP,0xc                         ; 005d8dfc
    TEST EAX,EAX                        ; 005d8dff
    JZ 0x005d90f4                       ; 005d8e01
        ;   XREF to: 005d90f4 (CONDITIONAL_JUMP)  ; LAB_005d90f4
    CMP dword ptr [EBX + 0x2598],0x0    ; 005d8e07
    JNZ 0x005d90ff                      ; 005d8e0e
        ;   XREF to: 005d90ff (CONDITIONAL_JUMP)  ; LAB_005d90ff
    PUSH 0x1                            ; 005d8e14
        ;   Label: LAB_005d8e14
    PUSH 0x0                            ; 005d8e16
    LEA EAX,[EBX + 0x158]               ; 005d8e18
    PUSH EAX                            ; 005d8e1e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005d8e1f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005d8e1f
    ADD ESP,0xc                         ; 005d8e24
    PUSH EBX                            ; 005d8e27
        ;   Label: LAB_005d8e27
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 005d8e28
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005d8e2d
    LEA EAX,[EBX + 0x158]               ; 005d8e30
    PUSH EAX                            ; 005d8e36
    MOV dword ptr [ESP + 0x80],EAX      ; 005d8e37
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005d8e3e
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005d8e43
    MOV EAX,dword ptr [EBX + 0x154]     ; 005d8e46
    PUSH EBX                            ; 005d8e4c
    CALL dword ptr [EAX + 0x120]        ; 005d8e4d
    ADD ESP,0x4                         ; 005d8e53
    TEST EAX,EAX                        ; 005d8e56
    JNZ 0x005d8ea0                      ; 005d8e58
        ;   XREF to: 005d8ea0 (CONDITIONAL_JUMP)  ; LAB_005d8ea0
    PUSH 0x59ddb0                       ; 005d8e5a
    MOV ESI,dword ptr [0x03f6cb90]      ; 005d8e5f | g_SvetlanaBoneIndices
    PUSH ESI                            ; 005d8e65
    LEA EAX,[EBX + 0x9f8c0]             ; 005d8e66
    PUSH dword ptr [EBX + 0x9f8cc]      ; 005d8e6c
    PUSH EAX                            ; 005d8e72
    LEA ESI,[ESP + 0x24]                ; 005d8e73
    LEA EDI,[ESP + 0x14]                ; 005d8e77
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 005d8e7b
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x24]                ; 005d8e80
    ADD ESP,0x4                         ; 005d8e84
    JMP 0x00604bd0                      ; 005d8e87
        ;   XREF to: 00604bd0 (UNCONDITIONAL_JUMP)  ; LAB_00604bd0
    PUSH EAX                            ; 005d8e8f
        ;   Label: LAB_005d8e8f
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005d8e90
    PUSH EDI                            ; 005d8e97
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 005d8e98
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005d8e9d
    PUSH dword ptr [EBP + 0x18]         ; 005d8ea0
        ;   Label: LAB_005d8ea0
    PUSH EBX                            ; 005d8ea3
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005d8ea4
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005d8ea9
    LEA ESI,[EBX + 0x158]               ; 005d8eac
    PUSH ESI                            ; 005d8eb2
    PUSH dword ptr [EBX + 0x2414]       ; 005d8eb3
    LEA EDI,[EBX + 0x30]                ; 005d8eb9
    PUSH dword ptr [EBP + 0x18]         ; 005d8ebc
    PUSH EDI                            ; 005d8ebf
    LEA EAX,[EBX + 0x20]                ; 005d8ec0
    PUSH EAX                            ; 005d8ec3
    MOV dword ptr [ESP + 0x98],EAX      ; 005d8ec4
    LEA EAX,[EBX + 0x1fbdc]             ; 005d8ecb
    PUSH EAX                            ; 005d8ed1
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005d8ed2
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005d8ed7
    PUSH ESI                            ; 005d8eda
    PUSH dword ptr [EBX + 0x2414]       ; 005d8edb
    PUSH dword ptr [EBP + 0x18]         ; 005d8ee1
    PUSH EDI                            ; 005d8ee4
    MOV EDX,dword ptr [ESP + 0x94]      ; 005d8ee5
    PUSH EDX                            ; 005d8eec
    ADD EBX,0x5fa4c                     ; 005d8eed
    PUSH EBX                            ; 005d8ef3
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005d8ef4
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005d8ef9
    MOV ESP,EBP                         ; 005d8efc
    POP EBP                             ; 005d8efe
    POP EDI                             ; 005d8eff
    POP ESI                             ; 005d8f00
    POP EBX                             ; 005d8f01
    RET                                 ; 005d8f02
    PUSH 0x1                            ; 005d8f03
        ;   Label: LAB_005d8f03
    PUSH 0x0                            ; 005d8f05
    PUSH ESI                            ; 005d8f07
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005d8f08
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005d8f0d
    PUSH EBX                            ; 005d8f10
    PUSH 0x654a51                       ; 005d8f11 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x0066e8e0]      ; 005d8f16 | g_CConsolePtr
    PUSH EDI                            ; 005d8f1c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005d8f1d
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x005d8ce2                      ; 005d8f22
        ;   XREF to: 005d8ce2 (UNCONDITIONAL_JUMP)  ; LAB_005d8ce2
    PUSH 0x1                            ; 005d8f27
        ;   Label: LAB_005d8f27
    PUSH 0x2                            ; 005d8f29
    JMP 0x005d8cdc                      ; 005d8f2b
        ;   XREF to: 005d8cdc (UNCONDITIONAL_JUMP)  ; LAB_005d8cdc
    JBE 0x005d8f27                      ; 005d8f30
        ;   XREF to: 005d8f27 (CONDITIONAL_JUMP)  ; LAB_005d8f27
        ;   Label: LAB_005d8f30
    CMP EAX,0x3                         ; 005d8f32
    JZ 0x005d8f03                       ; 005d8f35
        ;   XREF to: 005d8f03 (CONDITIONAL_JUMP)  ; LAB_005d8f03
    PUSH 0x1                            ; 005d8f37
        ;   Label: LAB_005d8f37
    PUSH 0x0                            ; 005d8f39
    LEA EAX,[EBX + 0x158]               ; 005d8f3b
    PUSH EAX                            ; 005d8f41
    JMP 0x005d8cdd                      ; 005d8f42
        ;   XREF to: 005d8cdd (UNCONDITIONAL_JUMP)  ; LAB_005d8cdd
    CMP dword ptr [EBX + 0xbe28],0x2    ; 005d8f47
        ;   Label: LAB_005d8f47
    JNZ 0x005d8f5c                      ; 005d8f4e
        ;   XREF to: 005d8f5c (CONDITIONAL_JUMP)  ; LAB_005d8f5c
    PUSH dword ptr [EBP + 0x18]         ; 005d8f50
    PUSH EBX                            ; 005d8f53
    CALL core_svetlana.cpp_CSvetlana_processAI_FUN_005d9260 ; 005d8f54
        ;   XREF to: 005d9260 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_processAI_FUN_005d9260(CSvetlana * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005d8f59
    LEA EAX,[EBX + 0x158]               ; 005d8f5c
        ;   Label: LAB_005d8f5c
    PUSH EAX                            ; 005d8f62
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d8f63
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d8f68
    ADD ESP,0x4                         ; 005d8f6b
    CMP EAX,0xa                         ; 005d8f6e
    JA 0x005d8ce5                       ; 005d8f71
        ;   XREF to: 005d8ce5 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x5d8b6c]  ; 005d8f77 | caseD_9 | caseD_7 | caseD_3
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2410],0x0    ; 005d8f7e
        ;   Label: caseD_a
    JZ 0x005d8ce5                       ; 005d8f85
        ;   XREF to: 005d8ce5 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [EBX + 0x1fbd4]   ; 005d8f8b
    XOR ESI,ESI                         ; 005d8f91
    TEST EDI,EDI                        ; 005d8f93
    JZ 0x005d8f9c                       ; 005d8f95
        ;   XREF to: 005d8f9c (CONDITIONAL_JUMP)  ; LAB_005d8f9c
    MOV ESI,0xa                         ; 005d8f97
    CMP dword ptr [EBX + 0xbe2c],0x0    ; 005d8f9c
        ;   Label: LAB_005d8f9c
    JZ 0x005d8fb7                       ; 005d8fa3
        ;   XREF to: 005d8fb7 (CONDITIONAL_JUMP)  ; LAB_005d8fb7
    CMP dword ptr [EBX + 0xbe34],0x0    ; 005d8fa5
    JZ 0x005d9067                       ; 005d8fac
        ;   XREF to: 005d9067 (CONDITIONAL_JUMP)  ; LAB_005d9067
    MOV ESI,0x2                         ; 005d8fb2
    CMP dword ptr [EBX + 0xbe30],0x0    ; 005d8fb7
        ;   Label: LAB_005d8fb7
    JZ 0x005d8fc5                       ; 005d8fbe
        ;   XREF to: 005d8fc5 (CONDITIONAL_JUMP)  ; LAB_005d8fc5
    MOV ESI,0x3                         ; 005d8fc0
    CMP dword ptr [EBX + 0xbe44],0x0    ; 005d8fc5
        ;   Label: LAB_005d8fc5
    JZ 0x005d8ff9                       ; 005d8fcc
        ;   XREF to: 005d8ff9 (CONDITIONAL_JUMP)  ; LAB_005d8ff9
    MOV EDX,dword ptr [EBX + 0x1fbd4]   ; 005d8fce
    MOV dword ptr [EBX + 0xbe44],0x0    ; 005d8fd4
    TEST EDX,EDX                        ; 005d8fde
    SETZ AL                             ; 005d8fe0
    AND EAX,0xff                        ; 005d8fe3
    MOV dword ptr [EBX + 0x1fbd4],EAX   ; 005d8fe8
    JZ 0x005d9071                       ; 005d8fee
        ;   XREF to: 005d9071 (CONDITIONAL_JUMP)  ; LAB_005d9071
    MOV ESI,0xa                         ; 005d8ff4
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005d8ff9
        ;   Label: LAB_005d8ff9
    JZ 0x005d9032                       ; 005d9000
        ;   XREF to: 005d9032 (CONDITIONAL_JUMP)  ; LAB_005d9032
    MOV EAX,dword ptr [EBX + 0x1fbd4]   ; 005d9002
    MOV EDI,0x1                         ; 005d9008
    TEST EAX,EAX                        ; 005d900d
    JZ 0x005d9075                       ; 005d900f
        ;   XREF to: 005d9075 (CONDITIONAL_JUMP)  ; LAB_005d9075
    TEST EDI,EDI                        ; 005d9011
        ;   Label: LAB_005d9011
    JZ 0x005d9032                       ; 005d9013
        ;   XREF to: 005d9032 (CONDITIONAL_JUMP)  ; LAB_005d9032
    MOV ESI,dword ptr [EBX + 0x1fbd8]   ; 005d9015
        ;   Label: LAB_005d9015
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005d901b
    TEST ESI,ESI                        ; 005d9025
    JZ 0x005d90ea                       ; 005d9027
        ;   XREF to: 005d90ea (CONDITIONAL_JUMP)  ; LAB_005d90ea
    MOV ESI,0xe                         ; 005d902d
    FLD float ptr [EBX + 0xbe50]        ; 005d9032
        ;   Label: LAB_005d9032
    LEA EDI,[EBX + 0x158]               ; 005d9038
    FMUL float ptr [EBX + 0x2438]       ; 005d903e
    PUSH EDI                            ; 005d9044
    FSTP float ptr [EBX + 0x2418]       ; 005d9045
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d904b
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d9050
    ADD ESP,0x4                         ; 005d9053
    CMP ESI,EAX                         ; 005d9056
    JZ 0x005d8ce5                       ; 005d9058
        ;   XREF to: 005d8ce5 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 005d905e
    PUSH ESI                            ; 005d9060
    PUSH EDI                            ; 005d9061
    JMP 0x005d8cdd                      ; 005d9062
        ;   XREF to: 005d8cdd (UNCONDITIONAL_JUMP)  ; LAB_005d8cdd
    MOV ESI,0x1                         ; 005d9067
        ;   Label: LAB_005d9067
    JMP 0x005d8fb7                      ; 005d906c
        ;   XREF to: 005d8fb7 (UNCONDITIONAL_JUMP)  ; LAB_005d8fb7
    XOR ESI,ESI                         ; 005d9071
        ;   Label: LAB_005d9071
    JMP 0x005d8ff9                      ; 005d9073
        ;   XREF to: 005d8ff9 (UNCONDITIONAL_JUMP)  ; LAB_005d8ff9
    CMP dword ptr [EBX + 0xbe28],0x2    ; 005d9075
        ;   Label: LAB_005d9075
    JZ 0x005d9011                       ; 005d907c
        ;   XREF to: 005d9011 (CONDITIONAL_JUMP)  ; LAB_005d9011
    PUSH EBX                            ; 005d907e
    CALL core_hero.cpp_CHero_tryInteract_FUN_004f2af0 ; 005d907f
        ;   XREF to: 004f2af0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004f2af0(CHero * this_ptr)
    XOR EDI,EDI                         ; 005d9084
    ADD ESP,0x4                         ; 005d9086
    TEST EAX,EAX                        ; 005d9089
    JNZ 0x005d9011                      ; 005d908b
        ;   XREF to: 005d9011 (CONDITIONAL_JUMP)  ; LAB_005d9011
    PUSH EBX                            ; 005d908d
    CALL core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70 ; 005d908e
        ;   XREF to: 004f2d70 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(CHero * this_ptr)
    ADD ESP,0x4                         ; 005d9093
    MOV dword ptr [ESP + 0x74],EAX      ; 005d9096
    TEST EAX,EAX                        ; 005d909a
    JBE 0x005d90a3                      ; 005d909c
        ;   XREF to: 005d90a3 (CONDITIONAL_JUMP)  ; LAB_005d90a3
    CMP EAX,0x1                         ; 005d909e
    JNZ 0x005d90d1                      ; 005d90a1
        ;   XREF to: 005d90d1 (CONDITIONAL_JUMP)  ; LAB_005d90d1
    CMP dword ptr [ESP + 0x74],0x0      ; 005d90a3
        ;   Label: LAB_005d90a3
    JNZ 0x005d9011                      ; 005d90a8
        ;   XREF to: 005d9011 (CONDITIONAL_JUMP)  ; LAB_005d9011
    PUSH EBX                            ; 005d90ae
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40 ; 005d90af
        ;   XREF to: 004f2c40 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(CHero * this_ptr)
    ADD ESP,0x4                         ; 005d90b4
    TEST EAX,EAX                        ; 005d90b7
    JNZ 0x005d9011                      ; 005d90b9
        ;   XREF to: 005d9011 (CONDITIONAL_JUMP)  ; LAB_005d9011
    PUSH EBX                            ; 005d90bf
    CALL core_hero.cpp_CHero_tryPullLever_FUN_004f2f50 ; 005d90c0
        ;   XREF to: 004f2f50 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPullLever_FUN_004f2f50(CHero * this_ptr)
    ADD ESP,0x4                         ; 005d90c5
    TEST EAX,EAX                        ; 005d90c8
    JNZ 0x005d90dc                      ; 005d90ca
        ;   XREF to: 005d90dc (CONDITIONAL_JUMP)  ; LAB_005d90dc
    JMP 0x005d9015                      ; 005d90cc
        ;   XREF to: 005d9015 (UNCONDITIONAL_JUMP)  ; LAB_005d9015
    PUSH EBX                            ; 005d90d1
        ;   Label: LAB_005d90d1
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0 ; 005d90d2
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005d90d7
    JMP 0x005d90a3                      ; 005d90da
        ;   XREF to: 005d90a3 (UNCONDITIONAL_JUMP)  ; LAB_005d90a3
    PUSH EBX                            ; 005d90dc
        ;   Label: LAB_005d90dc
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004f30f0 ; 005d90dd
        ;   XREF to: 004f30f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_executeLeverPull_FUN_004f30f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005d90e2
    JMP 0x005d9011                      ; 005d90e5
        ;   XREF to: 005d9011 (UNCONDITIONAL_JUMP)  ; LAB_005d9011
    MOV ESI,0xf                         ; 005d90ea
        ;   Label: LAB_005d90ea
    JMP 0x005d9032                      ; 005d90ef
        ;   XREF to: 005d9032 (UNCONDITIONAL_JUMP)  ; LAB_005d9032
    MOV dword ptr [EBX + 0x2598],EAX    ; 005d90f4
        ;   Label: LAB_005d90f4
    JMP 0x005d8e14                      ; 005d90fa
        ;   XREF to: 005d8e14 (UNCONDITIONAL_JUMP)  ; LAB_005d8e14
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005d90ff
        ;   Label: LAB_005d90ff
    JZ 0x005d8e27                       ; 005d9106
        ;   XREF to: 005d8e27 (CONDITIONAL_JUMP)  ; LAB_005d8e27
    PUSH 0x1                            ; 005d910c
    PUSH 0x10                           ; 005d910e
    PUSH EDI                            ; 005d9110
    JMP 0x005d8e1f                      ; 005d9111
        ;   XREF to: 005d8e1f (UNCONDITIONAL_JUMP)  ; LAB_005d8e1f
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d9116
        ;   Label: LAB_005d9116
    LEA ESI,[EBX + 0x23ac]              ; 005d911a
    MOV dword ptr [ESP + 0x40],EAX      ; 005d9120
    MOV dword ptr [ESP + 0x44],EAX      ; 005d9124
    MOV EAX,dword ptr [ESI]             ; 005d9128
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d912a
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d912e
    MOV dword ptr [ESP + 0x40],EAX      ; 005d9131
    MOV EAX,dword ptr [ESI + 0x8]       ; 005d9135
    MOV dword ptr [ESP + 0x44],EAX      ; 005d9138
    LEA EAX,[EBX + 0x158]               ; 005d913c
    PUSH EAX                            ; 005d9142
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d9143
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d9148
    ADD ESP,0x4                         ; 005d914b
    CMP EAX,0x1a                        ; 005d914e
    JZ 0x005d9168                       ; 005d9151
        ;   XREF to: 005d9168 (CONDITIONAL_JUMP)  ; LAB_005d9168
    FLD float ptr [EBP + 0x18]          ; 005d9153
    FMUL double ptr [0x00654a92]        ; 005d9156 | DOUBLE_00654a92
    FSUBR float ptr [EBX + 0x242c]      ; 005d915c
    FSTP float ptr [EBX + 0x242c]       ; 005d9162
    LEA ESI,[EBX + 0x2428]              ; 005d9168
        ;   Label: LAB_005d9168
    FLD float ptr [EBP + 0x18]          ; 005d916e
    FLD float ptr [ESI]                 ; 005d9171
    FMUL ST1                            ; 005d9173
    FSTP float ptr [ESP + 0x54]         ; 005d9175
    FLD float ptr [ESI + 0x4]           ; 005d9179
    FMUL ST1                            ; 005d917c
    FSTP float ptr [ESP + 0x58]         ; 005d917e
    FMUL float ptr [ESI + 0x8]          ; 005d9182
    FLD float ptr [ESP + 0x3c]          ; 005d9185
    FLD float ptr [ESP + 0x40]          ; 005d9189
    FLD float ptr [ESP + 0x44]          ; 005d918d
    LEA EAX,[EBX + 0x241c]              ; 005d9191
    FLD float ptr [ESP + 0x54]          ; 005d9197
    FLD float ptr [ESP + 0x58]          ; 005d919b
    FXCH ST5                            ; 005d919f
    FSTP float ptr [ESP + 0x5c]         ; 005d91a1
    FADD float ptr [EAX]                ; 005d91a5
    FLD float ptr [ESP + 0x5c]          ; 005d91a7
    FXCH                                ; 005d91ab
    FSTP float ptr [ESP + 0x24]         ; 005d91ad
    FXCH ST4                            ; 005d91b1
    FADD float ptr [EAX + 0x4]          ; 005d91b3
    FXCH ST3                            ; 005d91b6
    FADD float ptr [ESP + 0x24]         ; 005d91b8
    FXCH ST3                            ; 005d91bc
    FSTP float ptr [ESP + 0x28]         ; 005d91be
    FXCH ST3                            ; 005d91c2
    FADD float ptr [EAX + 0x8]          ; 005d91c4
    FXCH                                ; 005d91c7
    FADD float ptr [ESP + 0x28]         ; 005d91c9
    FXCH                                ; 005d91cd
    FSTP float ptr [ESP + 0x2c]         ; 005d91cf
    FXCH                                ; 005d91d3
    FSTP float ptr [ESP + 0x3c]         ; 005d91d5
    FSTP float ptr [ESP + 0x40]         ; 005d91d9
    LEA EAX,[EBX + 0x158]               ; 005d91dd
    FADD float ptr [ESP + 0x2c]         ; 005d91e3
    PUSH EAX                            ; 005d91e7
    FSTP float ptr [ESP + 0x48]         ; 005d91e8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d91ec
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d91f1
    ADD ESP,0x4                         ; 005d91f4
    CMP EAX,0x17                        ; 005d91f7
    JZ 0x005d9228                       ; 005d91fa
        ;   XREF to: 005d9228 (CONDITIONAL_JUMP)  ; LAB_005d9228
    CMP EAX,0x18                        ; 005d91fc
    JZ 0x005d9228                       ; 005d91ff
        ;   XREF to: 005d9228 (CONDITIONAL_JUMP)  ; LAB_005d9228
    CMP EAX,0x19                        ; 005d9201
    JZ 0x005d9228                       ; 005d9204
        ;   XREF to: 005d9228 (CONDITIONAL_JUMP)  ; LAB_005d9228
    CMP EAX,0x25                        ; 005d9206
    JZ 0x005d9228                       ; 005d9209
        ;   XREF to: 005d9228 (CONDITIONAL_JUMP)  ; LAB_005d9228
    CMP EAX,0x26                        ; 005d920b
    JZ 0x005d9228                       ; 005d920e
        ;   XREF to: 005d9228 (CONDITIONAL_JUMP)  ; LAB_005d9228
    CMP EAX,0x27                        ; 005d9210
    JZ 0x005d9228                       ; 005d9213
        ;   XREF to: 005d9228 (CONDITIONAL_JUMP)  ; LAB_005d9228
    CMP EAX,0x28                        ; 005d9215
    JZ 0x005d9228                       ; 005d9218
        ;   XREF to: 005d9228 (CONDITIONAL_JUMP)  ; LAB_005d9228
    LEA EAX,[ESP + 0x3c]                ; 005d921a
    PUSH EAX                            ; 005d921e
    PUSH EBX                            ; 005d921f
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 005d9220
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005d9225
    LEA EAX,[EBX + 0x158]               ; 005d9228
        ;   Label: LAB_005d9228
    PUSH EAX                            ; 005d922e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d922f
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d9234
    ADD ESP,0x4                         ; 005d9237
    CMP EAX,0x1a                        ; 005d923a
    JNZ 0x005d8e27                      ; 005d923d
        ;   XREF to: 005d8e27 (CONDITIONAL_JUMP)  ; LAB_005d8e27
    FLD float ptr [EBP + 0x18]          ; 005d9243
    FMUL double ptr [0x00654a9a]        ; 005d9246 | DOUBLE_00654a9a
    FADD float ptr [EBX + 0x24]         ; 005d924c
    FSTP float ptr [EBX + 0x24]         ; 005d924f
    JMP 0x005d8e27                      ; 005d9252
        ;   XREF to: 005d8e27 (UNCONDITIONAL_JUMP)  ; LAB_005d8e27
    LEA EAX,[ESP + 0x10]                ; 00604bd0
        ;   Label: LAB_00604bd0
    MOV ECX,dword ptr [ESI]             ; 00604bd4
    MOV dword ptr [EDI],ECX             ; 00604bd6
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604bd8
    MOV dword ptr [EDI + 0x4],ECX       ; 00604bdb
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604bde
    MOV dword ptr [EDI + 0x8],ECX       ; 00604be1
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604be4
    MOV dword ptr [EDI + 0xc],ECX       ; 00604be7
    ADD ESI,0x10                        ; 00604bea
    ADD EDI,0x10                        ; 00604bed
    JMP 0x005d8e8f                      ; 00604bf0
        ;   XREF to: 005d8e8f (UNCONDITIONAL_JUMP)  ; LAB_005d8e8f

