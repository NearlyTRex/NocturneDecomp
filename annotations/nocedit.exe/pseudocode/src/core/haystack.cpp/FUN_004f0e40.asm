; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_haystack_cpp_FUN_004f0e40(void)
;
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x54]:1  local_54
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   void* switchdataD_004f0e14 = 004f1143
;   TerminatedCString s_s_confused_while_walking_0062e8f9
;   double DOUBLE_0062e923 = 12.5663706140000
;   double DOUBLE_0062e92b = 0.333333333333333
;   double DOUBLE_0062e933 = 32
;   double DOUBLE_0062e93b = -1.57079632675000
;   float FLOAT_0062e943 = 3.141593
;   double DOUBLE_0062e94b = 1.57079632675000
;   float FLOAT_0062e953 = -3.141593
;   double DOUBLE_0062e95b = 3.14159265350000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGame* g_CGamePtr = 02d81a9c
;   CConsole g_ConsolePtr
;   undefined4 DAT_02d81cc4
;   int INT_02db8700
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_haystack.cpp_FUN_004f13f0
;   core_haystack.cpp_FUN_004f1970
;   core_hero.cpp_FUN_004f2af0
;   core_hero.cpp_FUN_004f2c40
;   core_hero.cpp_FUN_004f2d70
;   core_hero.cpp_FUN_004f2ed0
;   core_hero.cpp_FUN_004f2f50
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0e40
        ;   Label: core_haystack.cpp_FUN_004f0e40
    PUSH ESI                            ; 004f0e41
    PUSH EDI                            ; 004f0e42
    PUSH EBP                            ; 004f0e43
    MOV EBP,ESP                         ; 004f0e44
    SUB ESP,0x7c                        ; 004f0e46
    AND ESP,0xfffffff8                  ; 004f0e49
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f0e4c
    PUSH dword ptr [EBP + 0x18]         ; 004f0e4f
    PUSH EBX                            ; 004f0e52
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 004f0e53
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f0e58
    TEST EAX,EAX                        ; 004f0e5b
    JZ 0x004f10e8                       ; 004f0e5d
        ;   XREF to: 004f10e8 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0xbe28],0x2    ; 004f0e63
    JZ 0x004f10ef                       ; 004f0e6a
        ;   XREF to: 004f10ef (CONDITIONAL_JUMP)  ; LAB_004f10ef
    FLD float ptr [EBP + 0x18]          ; 004f0e70
        ;   Label: LAB_004f0e70
    FMUL double ptr [0x0062e923]        ; 004f0e73 | DOUBLE_0062e923
    MOV EAX,[0x0067b654]                ; 004f0e79 | g_CGamePtr
    FSTP float ptr [EBX + 0x2438]       ; 004f0e7e
    CMP dword ptr [EAX + 0x228],0x0     ; 004f0e84 | DAT_02d81cc4
    JZ 0x004f0e9f                       ; 004f0e8b
        ;   XREF to: 004f0e9f (CONDITIONAL_JUMP)  ; LAB_004f0e9f
    FLD float ptr [EBX + 0x2438]        ; 004f0e8d
    FMUL double ptr [0x0062e92b]        ; 004f0e93 | DOUBLE_0062e92b
    FSTP float ptr [EBX + 0x2438]       ; 004f0e99
    FLD float ptr [EBX + 0xbe24]        ; 004f0e9f
        ;   Label: LAB_004f0e9f
    FSUB float ptr [EBP + 0x18]         ; 004f0ea5
    FST float ptr [EBX + 0xbe24]        ; 004f0ea8
    FLDZ                                ; 004f0eae
    FCOMPP                              ; 004f0eb0
    FNSTSW AX                           ; 004f0eb2
    SAHF                                ; 004f0eb4
    JBE 0x004f0ec1                      ; 004f0eb5
        ;   XREF to: 004f0ec1 (CONDITIONAL_JUMP)  ; LAB_004f0ec1
    MOV dword ptr [EBX + 0xbe24],0x0    ; 004f0eb7
    LEA EAX,[EBX + 0x23ac]              ; 004f0ec1
        ;   Label: LAB_004f0ec1
    PUSH dword ptr [EBP + 0x18]         ; 004f0ec7
    MOV dword ptr [EAX + 0x8],0x0       ; 004f0eca
    PUSH EBX                            ; 004f0ed1
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f0ed2
    MOV dword ptr [EAX + 0x4],EDX       ; 004f0ed5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f0ed8
    MOV dword ptr [EAX],EDX             ; 004f0edb
    CALL core_haystack.cpp_FUN_004f1970 ; 004f0edd
        ;   XREF to: 004f1970 (UNCONDITIONAL_CALL)  ; undefined core_haystack.cpp_FUN_004f1970()
    ADD ESP,0x8                         ; 004f0ee2
    PUSH dword ptr [EBP + 0x18]         ; 004f0ee5
    PUSH EBX                            ; 004f0ee8
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 004f0ee9
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    MOV ESI,EAX                         ; 004f0eee
    ADD ESP,0x8                         ; 004f0ef0
    LEA EAX,[EBX + 0x158]               ; 004f0ef3
    TEST ESI,ESI                        ; 004f0ef9
    JZ 0x004f12b9                       ; 004f0efb
        ;   XREF to: 004f12b9 (CONDITIONAL_JUMP)  ; LAB_004f12b9
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 004f0f01
    CMP ESI,0x2                         ; 004f0f07
    JNC 0x004f112d                      ; 004f0f0a
        ;   XREF to: 004f112d (CONDITIONAL_JUMP)  ; LAB_004f112d
    CMP ESI,0x1                         ; 004f0f10
    JNZ 0x004f1134                      ; 004f0f13
        ;   XREF to: 004f1134 (CONDITIONAL_JUMP)  ; LAB_004f1134
    PUSH ESI                            ; 004f0f19
    PUSH ESI                            ; 004f0f1a
    PUSH EAX                            ; 004f0f1b
        ;   Label: LAB_004f0f1b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f0f1c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f0f1c
    ADD ESP,0xc                         ; 004f0f21
        ;   Label: LAB_004f0f21
    MOV EAX,dword ptr [EBX + 0x2598]    ; 004f0f24
        ;   Label: caseD_8
    TEST EAX,EAX                        ; 004f0f2a
    JZ 0x004f12f7                       ; 004f0f2c
        ;   XREF to: 004f12f7 (CONDITIONAL_JUMP)  ; LAB_004f12f7
    CMP dword ptr [EBX + 0x259c],0x0    ; 004f0f32
    JNZ 0x004f0ff3                      ; 004f0f39
        ;   XREF to: 004f0ff3 (CONDITIONAL_JUMP)  ; LAB_004f0ff3
    ADD EAX,0x20                        ; 004f0f3f
    PUSH EAX                            ; 004f0f42
    LEA EAX,[ESP + 0x34]                ; 004f0f43
    PUSH EAX                            ; 004f0f47
    PUSH EBX                            ; 004f0f48
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f0f49
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004f0f4e
    PUSH EAX                            ; 004f0f51
    LEA EAX,[ESP + 0x40]                ; 004f0f52
    PUSH EAX                            ; 004f0f56
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f0f57
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004f0f5c
    PUSH dword ptr [EAX + 0x4]          ; 004f0f5f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f0f62
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f0f67
    FLD float ptr [ESP + 0x7c]          ; 004f0f6b
    ADD ESP,0x4                         ; 004f0f6f
    FST float ptr [ESP]                 ; 004f0f72
    FCOMP double ptr [0x0062e93b]       ; 004f0f75 | DOUBLE_0062e93b
    FNSTSW AX                           ; 004f0f7b
    SAHF                                ; 004f0f7d
    JNC 0x004f0f8c                      ; 004f0f7e
        ;   XREF to: 004f0f8c (CONDITIONAL_JUMP)  ; LAB_004f0f8c
    FLD float ptr [ESP]                 ; 004f0f80
    FADD float ptr [0x0062e943]         ; 004f0f83 | FLOAT_0062e943
    FSTP float ptr [ESP]                ; 004f0f89
    FLD float ptr [ESP]                 ; 004f0f8c
        ;   Label: LAB_004f0f8c
    FCOMP double ptr [0x0062e94b]       ; 004f0f8f | DOUBLE_0062e94b
    FNSTSW AX                           ; 004f0f95
    SAHF                                ; 004f0f97
    JBE 0x004f0fa6                      ; 004f0f98
        ;   XREF to: 004f0fa6 (CONDITIONAL_JUMP)  ; LAB_004f0fa6
    FLD float ptr [ESP]                 ; 004f0f9a
    FADD float ptr [0x0062e953]         ; 004f0f9d | FLOAT_0062e953
    FSTP float ptr [ESP]                ; 004f0fa3
    FLD float ptr [EBP + 0x18]          ; 004f0fa6
        ;   Label: LAB_004f0fa6
    FMUL double ptr [0x0062e95b]        ; 004f0fa9 | DOUBLE_0062e95b
    FLD float ptr [ESP]                 ; 004f0faf
    FXCH                                ; 004f0fb2
    FST float ptr [ESP + 0x70]          ; 004f0fb4
    FCHS                                ; 004f0fb8
    FSTP float ptr [ESP + 0x68]         ; 004f0fba
    FCOMP float ptr [ESP + 0x68]        ; 004f0fbe
    FNSTSW AX                           ; 004f0fc2
    SAHF                                ; 004f0fc4
    JNC 0x004f0fce                      ; 004f0fc5
        ;   XREF to: 004f0fce (CONDITIONAL_JUMP)  ; LAB_004f0fce
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f0fc7
    MOV dword ptr [ESP],EAX             ; 004f0fcb
    FLD float ptr [ESP]                 ; 004f0fce
        ;   Label: LAB_004f0fce
    FCOMP float ptr [ESP + 0x70]        ; 004f0fd1
    FNSTSW AX                           ; 004f0fd5
    SAHF                                ; 004f0fd7
    JBE 0x004f0fe1                      ; 004f0fd8
        ;   XREF to: 004f0fe1 (CONDITIONAL_JUMP)  ; LAB_004f0fe1
    MOV EAX,dword ptr [ESP + 0x70]      ; 004f0fda
    MOV dword ptr [ESP],EAX             ; 004f0fde
    FLD float ptr [EBX + 0x34]          ; 004f0fe1
        ;   Label: LAB_004f0fe1
    FADD float ptr [ESP]                ; 004f0fe4
    PUSH EBX                            ; 004f0fe7
    FSTP float ptr [EBX + 0x34]         ; 004f0fe8
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004f0feb
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f0ff0
    MOV ESI,dword ptr [EBX + 0x2598]    ; 004f0ff3
        ;   Label: LAB_004f0ff3
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f0ff9
    PUSH 0x0                            ; 004f0fff
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f1001
    LEA EAX,[ESP + 0x4c]                ; 004f1005
    PUSH EAX                            ; 004f1009
    LEA EDI,[EBX + 0x158]               ; 004f100a
    PUSH EDI                            ; 004f1010
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f1011
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f1016
    PUSH EAX                            ; 004f1019
    PUSH EBX                            ; 004f101a
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f101b
    PUSH ESI                            ; 004f1022
    CALL dword ptr [EAX + 0x124]        ; 004f1023
    ADD ESP,0xc                         ; 004f1029
    TEST EAX,EAX                        ; 004f102c
    JZ 0x004f12d5                       ; 004f102e
        ;   XREF to: 004f12d5 (CONDITIONAL_JUMP)  ; LAB_004f12d5
    CMP dword ptr [EBX + 0x2598],0x0    ; 004f1034
    JNZ 0x004f12e0                      ; 004f103b
        ;   XREF to: 004f12e0 (CONDITIONAL_JUMP)  ; LAB_004f12e0
    PUSH 0x1                            ; 004f1041
        ;   Label: LAB_004f1041
    PUSH 0x0                            ; 004f1043
    LEA EAX,[EBX + 0x158]               ; 004f1045
    PUSH EAX                            ; 004f104b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f104c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f104c
    ADD ESP,0xc                         ; 004f1051
    PUSH EBX                            ; 004f1054
        ;   Label: LAB_004f1054
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 004f1055
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f105a
    LEA EAX,[EBX + 0x158]               ; 004f105d
    PUSH EAX                            ; 004f1063
    MOV dword ptr [ESP + 0x70],EAX      ; 004f1064
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004f1068
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f106d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f1070
    PUSH EBX                            ; 004f1076
    CALL dword ptr [EAX + 0x120]        ; 004f1077
    ADD ESP,0x4                         ; 004f107d
    TEST EAX,EAX                        ; 004f1080
    JNZ 0x004f10dc                      ; 004f1082
        ;   XREF to: 004f10dc (CONDITIONAL_JUMP)  ; LAB_004f10dc
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004f1084
    PUSH ESI                            ; 004f1088
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f1089
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f108e
    ADD ESP,0x4                         ; 004f1091
    CMP EAX,0x13                        ; 004f1094
    JZ 0x004f10dc                       ; 004f1097
        ;   XREF to: 004f10dc (CONDITIONAL_JUMP)  ; LAB_004f10dc
    PUSH 0x59ddb0                       ; 004f1099
    MOV EDI,dword ptr [0x02db8700]      ; 004f109e | INT_02db8700
    PUSH EDI                            ; 004f10a4
    LEA EAX,[EBX + 0x1fbdc]             ; 004f10a5
    PUSH dword ptr [EBX + 0x1fbe8]      ; 004f10ab
    PUSH EAX                            ; 004f10b1
    LEA ESI,[ESP + 0x14]                ; 004f10b2
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 004f10b6
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 004f10bb
    LEA EAX,[ESP + 0x20]                ; 004f10be
    LEA EDI,[ESP + 0x20]                ; 004f10c2
    PUSH EAX                            ; 004f10c6
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004f10c7
    LEA ESI,[ESP + 0x14]                ; 004f10cb
    PUSH EAX                            ; 004f10cf
    MOVSD ES:EDI,ESI                    ; 004f10d0
    MOVSD ES:EDI,ESI                    ; 004f10d1
    MOVSD ES:EDI,ESI                    ; 004f10d2
    MOVSD ES:EDI,ESI                    ; 004f10d3
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 004f10d4
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004f10d9
    PUSH dword ptr [EBP + 0x18]         ; 004f10dc
        ;   Label: LAB_004f10dc
    PUSH EBX                            ; 004f10df
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004f10e0
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f10e5
    MOV ESP,EBP                         ; 004f10e8
        ;   Label: caseD_9
    POP EBP                             ; 004f10ea
    POP EDI                             ; 004f10eb
    POP ESI                             ; 004f10ec
    POP EBX                             ; 004f10ed
    RET                                 ; 004f10ee
    PUSH dword ptr [EBP + 0x18]         ; 004f10ef
        ;   Label: LAB_004f10ef
    PUSH EBX                            ; 004f10f2
    CALL core_haystack.cpp_FUN_004f13f0 ; 004f10f3
        ;   XREF to: 004f13f0 (UNCONDITIONAL_CALL)  ; undefined core_haystack.cpp_FUN_004f13f0()
    ADD ESP,0x8                         ; 004f10f8
    JMP 0x004f0e70                      ; 004f10fb
        ;   XREF to: 004f0e70 (UNCONDITIONAL_JUMP)  ; LAB_004f0e70
    PUSH 0x1                            ; 004f1100
        ;   Label: LAB_004f1100
    PUSH 0x0                            ; 004f1102
    PUSH EAX                            ; 004f1104
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f1105
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f110a
    PUSH EBX                            ; 004f110d
    PUSH 0x62e8f9                       ; 004f110e | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x0066e8e0]      ; 004f1113 | g_CConsolePtr
    PUSH EDI                            ; 004f1119 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f111a
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004f0f21                      ; 004f111f
        ;   XREF to: 004f0f21 (UNCONDITIONAL_JUMP)  ; LAB_004f0f21
    PUSH 0x1                            ; 004f1124
        ;   Label: LAB_004f1124
    PUSH 0x2                            ; 004f1126
    JMP 0x004f0f1b                      ; 004f1128
        ;   XREF to: 004f0f1b (UNCONDITIONAL_JUMP)  ; LAB_004f0f1b
    JBE 0x004f1124                      ; 004f112d
        ;   XREF to: 004f1124 (CONDITIONAL_JUMP)  ; LAB_004f1124
        ;   Label: LAB_004f112d
    CMP ESI,0x3                         ; 004f112f
    JZ 0x004f1100                       ; 004f1132
        ;   XREF to: 004f1100 (CONDITIONAL_JUMP)  ; LAB_004f1100
    PUSH 0x1                            ; 004f1134
        ;   Label: LAB_004f1134
    PUSH 0x0                            ; 004f1136
    LEA EAX,[EBX + 0x158]               ; 004f1138
    JMP 0x004f0f1b                      ; 004f113e
        ;   XREF to: 004f0f1b (UNCONDITIONAL_JUMP)  ; LAB_004f0f1b
    CMP dword ptr [EBX + 0x2410],0x0    ; 004f1143
        ;   Label: caseD_a
    JZ 0x004f0f24                       ; 004f114a
        ;   XREF to: 004f0f24 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [EBX + 0x1fbd4]   ; 004f1150
    XOR ESI,ESI                         ; 004f1156
    TEST EDI,EDI                        ; 004f1158
    JZ 0x004f1161                       ; 004f115a
        ;   XREF to: 004f1161 (CONDITIONAL_JUMP)  ; LAB_004f1161
    MOV ESI,0xa                         ; 004f115c
    CMP dword ptr [EBX + 0xbe2c],0x0    ; 004f1161
        ;   Label: LAB_004f1161
    JZ 0x004f117c                       ; 004f1168
        ;   XREF to: 004f117c (CONDITIONAL_JUMP)  ; LAB_004f117c
    CMP dword ptr [EBX + 0xbe34],0x0    ; 004f116a
    JZ 0x004f122c                       ; 004f1171
        ;   XREF to: 004f122c (CONDITIONAL_JUMP)  ; LAB_004f122c
    MOV ESI,0x2                         ; 004f1177
    CMP dword ptr [EBX + 0xbe30],0x0    ; 004f117c
        ;   Label: LAB_004f117c
    JZ 0x004f118a                       ; 004f1183
        ;   XREF to: 004f118a (CONDITIONAL_JUMP)  ; LAB_004f118a
    MOV ESI,0x3                         ; 004f1185
    CMP dword ptr [EBX + 0xbe44],0x0    ; 004f118a
        ;   Label: LAB_004f118a
    JZ 0x004f11be                       ; 004f1191
        ;   XREF to: 004f11be (CONDITIONAL_JUMP)  ; LAB_004f11be
    MOV EDX,dword ptr [EBX + 0x1fbd4]   ; 004f1193
    MOV dword ptr [EBX + 0xbe44],0x0    ; 004f1199
    TEST EDX,EDX                        ; 004f11a3
    SETZ AL                             ; 004f11a5
    AND EAX,0xff                        ; 004f11a8
    MOV dword ptr [EBX + 0x1fbd4],EAX   ; 004f11ad
    JZ 0x004f1236                       ; 004f11b3
        ;   XREF to: 004f1236 (CONDITIONAL_JUMP)  ; LAB_004f1236
    MOV ESI,0xa                         ; 004f11b9
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004f11be
        ;   Label: LAB_004f11be
    JZ 0x004f11f7                       ; 004f11c5
        ;   XREF to: 004f11f7 (CONDITIONAL_JUMP)  ; LAB_004f11f7
    MOV EAX,dword ptr [EBX + 0x1fbd4]   ; 004f11c7
    MOV EDI,0x1                         ; 004f11cd
    TEST EAX,EAX                        ; 004f11d2
    JZ 0x004f123a                       ; 004f11d4
        ;   XREF to: 004f123a (CONDITIONAL_JUMP)  ; LAB_004f123a
    TEST EDI,EDI                        ; 004f11d6
        ;   Label: LAB_004f11d6
    JZ 0x004f11f7                       ; 004f11d8
        ;   XREF to: 004f11f7 (CONDITIONAL_JUMP)  ; LAB_004f11f7
    MOV ESI,dword ptr [EBX + 0x1fbd8]   ; 004f11da
        ;   Label: LAB_004f11da
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004f11e0
    TEST ESI,ESI                        ; 004f11ea
    JZ 0x004f12af                       ; 004f11ec
        ;   XREF to: 004f12af (CONDITIONAL_JUMP)  ; LAB_004f12af
    MOV ESI,0xe                         ; 004f11f2
    FLD float ptr [EBX + 0xbe50]        ; 004f11f7
        ;   Label: LAB_004f11f7
    LEA EDI,[EBX + 0x158]               ; 004f11fd
    FMUL float ptr [EBX + 0x2438]       ; 004f1203
    PUSH EDI                            ; 004f1209
    FSTP float ptr [EBX + 0x2418]       ; 004f120a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f1210
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f1215
    ADD ESP,0x4                         ; 004f1218
    CMP ESI,EAX                         ; 004f121b
    JZ 0x004f0f24                       ; 004f121d
        ;   XREF to: 004f0f24 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004f1223
    PUSH ESI                            ; 004f1225
    PUSH EDI                            ; 004f1226
    JMP 0x004f0f1c                      ; 004f1227
        ;   XREF to: 004f0f1c (UNCONDITIONAL_JUMP)  ; LAB_004f0f1c
    MOV ESI,0x1                         ; 004f122c
        ;   Label: LAB_004f122c
    JMP 0x004f117c                      ; 004f1231
        ;   XREF to: 004f117c (UNCONDITIONAL_JUMP)  ; LAB_004f117c
    XOR ESI,ESI                         ; 004f1236
        ;   Label: LAB_004f1236
    JMP 0x004f11be                      ; 004f1238
        ;   XREF to: 004f11be (UNCONDITIONAL_JUMP)  ; LAB_004f11be
    CMP dword ptr [EBX + 0xbe28],0x2    ; 004f123a
        ;   Label: LAB_004f123a
    JZ 0x004f11d6                       ; 004f1241
        ;   XREF to: 004f11d6 (CONDITIONAL_JUMP)  ; LAB_004f11d6
    PUSH EBX                            ; 004f1243
    CALL core_hero.cpp_FUN_004f2af0     ; 004f1244
        ;   XREF to: 004f2af0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2af0()
    XOR EDI,EDI                         ; 004f1249
    ADD ESP,0x4                         ; 004f124b
    TEST EAX,EAX                        ; 004f124e
    JNZ 0x004f11d6                      ; 004f1250
        ;   XREF to: 004f11d6 (CONDITIONAL_JUMP)  ; LAB_004f11d6
    PUSH EBX                            ; 004f1252
    CALL core_hero.cpp_FUN_004f2d70     ; 004f1253
        ;   XREF to: 004f2d70 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2d70()
    ADD ESP,0x4                         ; 004f1258
    MOV dword ptr [ESP + 0x74],EAX      ; 004f125b
    TEST EAX,EAX                        ; 004f125f
    JBE 0x004f1268                      ; 004f1261
        ;   XREF to: 004f1268 (CONDITIONAL_JUMP)  ; LAB_004f1268
    CMP EAX,0x1                         ; 004f1263
    JNZ 0x004f1296                      ; 004f1266
        ;   XREF to: 004f1296 (CONDITIONAL_JUMP)  ; LAB_004f1296
    CMP dword ptr [ESP + 0x74],0x0      ; 004f1268
        ;   Label: LAB_004f1268
    JNZ 0x004f11d6                      ; 004f126d
        ;   XREF to: 004f11d6 (CONDITIONAL_JUMP)  ; LAB_004f11d6
    PUSH EBX                            ; 004f1273
    CALL core_hero.cpp_FUN_004f2c40     ; 004f1274
        ;   XREF to: 004f2c40 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2c40()
    ADD ESP,0x4                         ; 004f1279
    TEST EAX,EAX                        ; 004f127c
    JNZ 0x004f11d6                      ; 004f127e
        ;   XREF to: 004f11d6 (CONDITIONAL_JUMP)  ; LAB_004f11d6
    PUSH EBX                            ; 004f1284
    CALL core_hero.cpp_FUN_004f2f50     ; 004f1285
        ;   XREF to: 004f2f50 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2f50()
    ADD ESP,0x4                         ; 004f128a
    TEST EAX,EAX                        ; 004f128d
    JNZ 0x004f12a1                      ; 004f128f
        ;   XREF to: 004f12a1 (CONDITIONAL_JUMP)  ; LAB_004f12a1
    JMP 0x004f11da                      ; 004f1291
        ;   XREF to: 004f11da (UNCONDITIONAL_JUMP)  ; LAB_004f11da
    PUSH EBX                            ; 004f1296
        ;   Label: LAB_004f1296
    CALL core_hero.cpp_FUN_004f2ed0     ; 004f1297
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2ed0()
    ADD ESP,0x4                         ; 004f129c
    JMP 0x004f1268                      ; 004f129f
        ;   XREF to: 004f1268 (UNCONDITIONAL_JUMP)  ; LAB_004f1268
    PUSH EBX                            ; 004f12a1
        ;   Label: LAB_004f12a1
    CALL core_hero.cpp_FUN_004f30f0     ; 004f12a2
        ;   XREF to: 004f30f0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f30f0()
    ADD ESP,0x4                         ; 004f12a7
    JMP 0x004f11d6                      ; 004f12aa
        ;   XREF to: 004f11d6 (UNCONDITIONAL_JUMP)  ; LAB_004f11d6
    MOV ESI,0xf                         ; 004f12af
        ;   Label: LAB_004f12af
    JMP 0x004f11f7                      ; 004f12b4
        ;   XREF to: 004f11f7 (UNCONDITIONAL_JUMP)  ; LAB_004f11f7
    PUSH EAX                            ; 004f12b9
        ;   Label: LAB_004f12b9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f12ba
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f12bf
    ADD ESP,0x4                         ; 004f12c2
    CMP EAX,0xa                         ; 004f12c5
    JA 0x004f0f24                       ; 004f12c8
        ;   XREF to: 004f0f24 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x4f0e14]  ; 004f12ce | caseD_7 | caseD_9 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0x2598],EAX    ; 004f12d5
        ;   Label: LAB_004f12d5
    JMP 0x004f1041                      ; 004f12db
        ;   XREF to: 004f1041 (UNCONDITIONAL_JUMP)  ; LAB_004f1041
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004f12e0
        ;   Label: LAB_004f12e0
    JZ 0x004f1054                       ; 004f12e7
        ;   XREF to: 004f1054 (CONDITIONAL_JUMP)  ; LAB_004f1054
    PUSH 0x1                            ; 004f12ed
    PUSH 0x11                           ; 004f12ef
    PUSH EDI                            ; 004f12f1
    JMP 0x004f104c                      ; 004f12f2
        ;   XREF to: 004f104c (UNCONDITIONAL_JUMP)  ; LAB_004f104c
    FLD float ptr [EBP + 0x18]          ; 004f12f7
        ;   Label: LAB_004f12f7
    FMUL double ptr [0x0062e933]        ; 004f12fa | DOUBLE_0062e933
    LEA ESI,[EBX + 0x23ac]              ; 004f1300
    FLD float ptr [EBX + 0x242c]        ; 004f1306
    FXCH                                ; 004f130c
    FSUBR ST0,ST1                       ; 004f130e
    LEA EAX,[EBX + 0x241c]              ; 004f1310
    FSTP ST1                            ; 004f1316
    FSTP float ptr [EBX + 0x242c]       ; 004f1318
    FLD float ptr [ESI]                 ; 004f131e
    FADD float ptr [EAX]                ; 004f1320
    FSTP float ptr [ESP + 0x54]         ; 004f1322
    FLD float ptr [ESI + 0x4]           ; 004f1326
    FADD float ptr [EAX + 0x4]          ; 004f1329
    FSTP float ptr [ESP + 0x58]         ; 004f132c
    FLD float ptr [ESI + 0x8]           ; 004f1330
    FADD float ptr [EAX + 0x8]          ; 004f1333
    FSTP float ptr [ESP + 0x5c]         ; 004f1336
    MOV dword ptr [ESI + 0x8],0x0       ; 004f133a
    MOV EDX,dword ptr [ESI + 0x8]       ; 004f1341
    MOV dword ptr [ESI + 0x4],EDX       ; 004f1344
    MOV EDX,dword ptr [ESI + 0x4]       ; 004f1347
    MOV dword ptr [ESI],EDX             ; 004f134a
    MOV dword ptr [EAX + 0x8],0x0       ; 004f134c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f1353
    MOV dword ptr [EAX + 0x4],EDX       ; 004f1356
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f1359
    MOV dword ptr [EAX],EDX             ; 004f135c
    LEA EAX,[EBX + 0x158]               ; 004f135e
    PUSH EAX                            ; 004f1364
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f1365
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f136a
    ADD ESP,0x4                         ; 004f136d
    CMP EAX,0xe                         ; 004f1370
    JNZ 0x004f13e1                      ; 004f1373
        ;   XREF to: 004f13e1 (CONDITIONAL_JUMP)  ; LAB_004f13e1
    XOR EDX,EDX                         ; 004f1375
        ;   Label: LAB_004f1375
    MOV dword ptr [ESP + 0x58],EDX      ; 004f1377
    MOV dword ptr [ESP + 0x54],EDX      ; 004f137b
    MOV dword ptr [ESP + 0x5c],EDX      ; 004f137f
    LEA EAX,[EBX + 0x2428]              ; 004f1383
        ;   Label: LAB_004f1383
    FLD float ptr [EBP + 0x18]          ; 004f1389
    FLD float ptr [EAX]                 ; 004f138c
    FMUL ST1                            ; 004f138e
    FSTP float ptr [ESP + 0x24]         ; 004f1390
    FLD float ptr [EAX + 0x4]           ; 004f1394
    FMUL ST1                            ; 004f1397
    FSTP float ptr [ESP + 0x28]         ; 004f1399
    FMUL float ptr [EAX + 0x8]          ; 004f139d
    FLD float ptr [ESP + 0x58]          ; 004f13a0
    FLD float ptr [ESP + 0x54]          ; 004f13a4
    FADD float ptr [ESP + 0x24]         ; 004f13a8
    FLD float ptr [ESP + 0x5c]          ; 004f13ac
    FXCH                                ; 004f13b0
    FSTP float ptr [ESP + 0x54]         ; 004f13b2
    FXCH                                ; 004f13b6
    FADD float ptr [ESP + 0x28]         ; 004f13b8
    LEA EAX,[ESP + 0x54]                ; 004f13bc
    FSTP float ptr [ESP + 0x58]         ; 004f13c0
    FXCH                                ; 004f13c4
    FSTP float ptr [ESP + 0x2c]         ; 004f13c6
    PUSH EAX                            ; 004f13ca
    FADD float ptr [ESP + 0x30]         ; 004f13cb
    PUSH EBX                            ; 004f13cf
    FSTP float ptr [ESP + 0x64]         ; 004f13d0
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 004f13d4
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f13d9
    JMP 0x004f1054                      ; 004f13dc
        ;   XREF to: 004f1054 (UNCONDITIONAL_JUMP)  ; LAB_004f1054
    CMP EAX,0xf                         ; 004f13e1
        ;   Label: LAB_004f13e1
    JZ 0x004f1375                       ; 004f13e4
        ;   XREF to: 004f1375 (CONDITIONAL_JUMP)  ; LAB_004f1375
    JMP 0x004f1383                      ; 004f13e6
        ;   XREF to: 004f1383 (UNCONDITIONAL_JUMP)  ; LAB_004f1383

