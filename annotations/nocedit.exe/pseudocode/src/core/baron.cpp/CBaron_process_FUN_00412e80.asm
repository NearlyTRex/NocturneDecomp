; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_process_FUN_00412e80(CBaron *this_ptr,float delta_time)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0xa4]:1  local_a4
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   void* switchdataD_00412e68 = 004133c2
;   TerminatedCString s_s_confused_while_walking_00614ff9
;   double DOUBLE_00615029 = 12.5663706140000
;   double DOUBLE_00615031 = 0.333333333333333
;   double DOUBLE_00615039 = 32
;   SMRGLTextureBasic SMRGLTextureBasic_0066e460
;   CConsole* g_CConsolePtr = 0083b1a4
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   int INT_00822498
;   int INT_008224cc
;   int INT_008224d0
;   float FLOAT_008224dc
;   CConsole g_CConsoleInstance
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_baron.cpp_CBaron_FUN_004135e0
;   core_baron.cpp_CBaron_FUN_00413a00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;   core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412e80
        ;   Label: core_baron.cpp_CBaron_process_FUN_00412e80
    PUSH ESI                            ; 00412e81
    PUSH EBP                            ; 00412e82
    SUB ESP,0x98                        ; 00412e83
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00412e89
    MOV EDX,dword ptr [EBP + 0x1fccc]   ; 00412e90
    LEA EBX,[EBP + 0x158]               ; 00412e96
    TEST EDX,EDX                        ; 00412e9c
    JZ 0x00412ee3                       ; 00412e9e
        ;   XREF to: 00412ee3 (CONDITIONAL_JUMP)  ; LAB_00412ee3
    LEA EAX,[EBP + 0x1fc38]             ; 00412ea0
    PUSH EAX                            ; 00412ea6
    MOV ECX,dword ptr [0x006793d0]      ; 00412ea7 | g_CEventListPtr
    PUSH ECX                            ; 00412ead | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00412eae
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00412eb3
    TEST EAX,EAX                        ; 00412eb6
    JZ 0x00412ec7                       ; 00412eb8
        ;   XREF to: 00412ec7 (CONDITIONAL_JUMP)  ; LAB_00412ec7
    PUSH 0x1                            ; 00412eba
    PUSH 0x7                            ; 00412ebc
    PUSH EBX                            ; 00412ebe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00412ebf
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412ec4
    CMP dword ptr [EBP + 0x1fccc],0x0   ; 00412ec7
        ;   Label: LAB_00412ec7
    JNZ 0x00412f20                      ; 00412ece
        ;   XREF to: 00412f20 (CONDITIONAL_JUMP)  ; LAB_00412f20
    CMP dword ptr [EBP + 0xbe28],0x2    ; 00412ed0
    JNZ 0x00412f20                      ; 00412ed7
        ;   XREF to: 00412f20 (CONDITIONAL_JUMP)  ; LAB_00412f20
    ADD ESP,0x98                        ; 00412ed9
        ;   Label: LAB_00412ed9
    POP EBP                             ; 00412edf
    POP ESI                             ; 00412ee0
    POP EBX                             ; 00412ee1
    RET                                 ; 00412ee2
    LEA EAX,[EBP + 0x1fbd4]             ; 00412ee3
        ;   Label: LAB_00412ee3
    PUSH EAX                            ; 00412ee9
    MOV ESI,dword ptr [0x006793d0]      ; 00412eea | g_CEventListPtr
    PUSH ESI                            ; 00412ef0 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00412ef1
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00412ef6
    TEST EAX,EAX                        ; 00412ef9
    JZ 0x00412ec7                       ; 00412efb
        ;   XREF to: 00412ec7 (CONDITIONAL_JUMP)  ; LAB_00412ec7
    PUSH 0x1                            ; 00412efd
    PUSH 0x6                            ; 00412eff
    PUSH EBX                            ; 00412f01
    MOV dword ptr [EBP + 0x1fccc],0x1   ; 00412f02
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00412f0c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412f11
    MOV dword ptr [EBP + 0x1fcd0],0x1   ; 00412f14
    JMP 0x00412ec7                      ; 00412f1e
        ;   XREF to: 00412ec7 (UNCONDITIONAL_JUMP)  ; LAB_00412ec7
    PUSH dword ptr [ESP + 0xac]         ; 00412f20
        ;   Label: LAB_00412f20
    PUSH EBP                            ; 00412f27
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 00412f28
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412f2d
    TEST EAX,EAX                        ; 00412f30
    JZ 0x00412ed9                       ; 00412f32
        ;   XREF to: 00412ed9 (CONDITIONAL_JUMP)  ; LAB_00412ed9
    CMP dword ptr [EBP + 0xbe28],0x2    ; 00412f34
    JZ 0x004131ef                       ; 00412f3b
        ;   XREF to: 004131ef (CONDITIONAL_JUMP)  ; LAB_004131ef
    FLD float ptr [ESP + 0xac]          ; 00412f41
        ;   Label: LAB_00412f41
    FMUL double ptr [0x00615029]        ; 00412f48 | DOUBLE_00615029
    MOV EAX,[0x0067b654]                ; 00412f4e | g_CGamePtr
    FSTP float ptr [EBP + 0x2438]       ; 00412f53
    CMP dword ptr [EAX + 0x228],0x0     ; 00412f59 | DAT_02d81cc4
    JZ 0x00412f74                       ; 00412f60
        ;   XREF to: 00412f74 (CONDITIONAL_JUMP)  ; LAB_00412f74
    FLD float ptr [EBP + 0x2438]        ; 00412f62
    FMUL double ptr [0x00615031]        ; 00412f68 | DOUBLE_00615031
    FSTP float ptr [EBP + 0x2438]       ; 00412f6e
    FLD float ptr [EBP + 0xbe24]        ; 00412f74
        ;   Label: LAB_00412f74
    FSUB float ptr [ESP + 0xac]         ; 00412f7a
    FST float ptr [EBP + 0xbe24]        ; 00412f81
    FLDZ                                ; 00412f87
    FCOMPP                              ; 00412f89
    FNSTSW AX                           ; 00412f8b
    SAHF                                ; 00412f8d
    JBE 0x00412f9a                      ; 00412f8e
        ;   XREF to: 00412f9a (CONDITIONAL_JUMP)  ; LAB_00412f9a
    MOV dword ptr [EBP + 0xbe24],0x0    ; 00412f90
    LEA EAX,[EBP + 0x23ac]              ; 00412f9a
        ;   Label: LAB_00412f9a
    PUSH dword ptr [ESP + 0xac]         ; 00412fa0
    MOV dword ptr [EAX + 0x8],0x0       ; 00412fa7
    PUSH EBP                            ; 00412fae
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412faf
    MOV dword ptr [EAX + 0x4],EDX       ; 00412fb2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412fb5
    MOV dword ptr [EAX],EDX             ; 00412fb8
    CALL core_baron.cpp_CBaron_FUN_00413a00 ; 00412fba
        ;   XREF to: 00413a00 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_FUN_00413a00(CBaron * this_ptr, float param_2)
    MOV EBX,dword ptr [EBP + 0x1fccc]   ; 00412fbf
    ADD ESP,0x8                         ; 00412fc5
    TEST EBX,EBX                        ; 00412fc8
    JZ 0x00412ed9                       ; 00412fca
        ;   XREF to: 00412ed9 (CONDITIONAL_JUMP)  ; LAB_00412ed9
    PUSH EDI                            ; 00412fd0
    PUSH dword ptr [ESP + 0xb0]         ; 00412fd1
    PUSH EBP                            ; 00412fd8
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 00412fd9
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    MOV EBX,EAX                         ; 00412fde
    ADD ESP,0x8                         ; 00412fe0
    LEA EAX,[EBP + 0x158]               ; 00412fe3
    TEST EBX,EBX                        ; 00412fe9
    JZ 0x00413448                       ; 00412feb
        ;   XREF to: 00413448 (CONDITIONAL_JUMP)  ; LAB_00413448
    MOV EBX,dword ptr [EBP + 0x25b0]    ; 00412ff1
    CMP EBX,0x2                         ; 00412ff7
    JNC 0x00413230                      ; 00412ffa
        ;   XREF to: 00413230 (CONDITIONAL_JUMP)  ; LAB_00413230
    CMP EBX,0x1                         ; 00413000
    JNZ 0x00413237                      ; 00413003
        ;   XREF to: 00413237 (CONDITIONAL_JUMP)  ; LAB_00413237
    PUSH EBX                            ; 00413009
    PUSH EBX                            ; 0041300a
    PUSH EAX                            ; 0041300b
        ;   Label: LAB_0041300b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041300c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0041300c
    ADD ESP,0xc                         ; 00413011
        ;   Label: LAB_00413011
    FLD float ptr [ESP + 0xb0]          ; 00413014
        ;   Label: default
    XOR EDX,EDX                         ; 0041301b
    LEA EBX,[EBP + 0x23ac]              ; 0041301d
    MOV dword ptr [ESP + 0x3c],EDX      ; 00413023
    MOV dword ptr [ESP + 0x40],EDX      ; 00413027
    MOV dword ptr [ESP + 0x44],EDX      ; 0041302b
    FMUL double ptr [0x00615039]        ; 0041302f | DOUBLE_00615039
    MOV EAX,dword ptr [EBX]             ; 00413035
    MOV dword ptr [ESP + 0x3c],EAX      ; 00413037
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041303b
    MOV dword ptr [ESP + 0x40],EAX      ; 0041303e
    MOV EAX,dword ptr [EBX + 0x8]       ; 00413042
    MOV dword ptr [ESP + 0x44],EAX      ; 00413045
    MOV dword ptr [EBX + 0x8],EDX       ; 00413049
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041304c
    MOV dword ptr [EBX + 0x4],EAX       ; 0041304f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00413052
    MOV dword ptr [EBX],EAX             ; 00413055
    FLD float ptr [EBP + 0x242c]        ; 00413057
    FXCH                                ; 0041305d
    FSUBR ST0,ST1                       ; 0041305f
    LEA EAX,[EBP + 0x2428]              ; 00413061
    FSTP ST1                            ; 00413067
    FSTP float ptr [EBP + 0x242c]       ; 00413069
    FLD float ptr [EAX]                 ; 0041306f
    FMUL float ptr [ESP + 0xb0]         ; 00413071
    FSTP float ptr [ESP + 0x6c]         ; 00413078
    FLD float ptr [EAX + 0x4]           ; 0041307c
    FMUL float ptr [ESP + 0xb0]         ; 0041307f
    FSTP float ptr [ESP + 0x70]         ; 00413086
    FLD float ptr [EAX + 0x8]           ; 0041308a
    FMUL float ptr [ESP + 0xb0]         ; 0041308d
    PUSH EBP                            ; 00413094
    FLD float ptr [ESP + 0x44]          ; 00413095
    FLD float ptr [ESP + 0x40]          ; 00413099
    FADD float ptr [ESP + 0x70]         ; 0041309d
    FLD float ptr [ESP + 0x48]          ; 004130a1
    FXCH                                ; 004130a5
    FSTP float ptr [ESP + 0x40]         ; 004130a7
    FXCH                                ; 004130ab
    FADD float ptr [ESP + 0x74]         ; 004130ad
    FXCH ST2                            ; 004130b1
    FSTP float ptr [ESP + 0x78]         ; 004130b3
    FADD float ptr [ESP + 0x78]         ; 004130b7
    FXCH                                ; 004130bb
    FSTP float ptr [ESP + 0x44]         ; 004130bd
    FSTP float ptr [ESP + 0x48]         ; 004130c1
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 004130c5
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004130ca
    LEA EBX,[EBP + 0x158]               ; 004130cd
    PUSH EBX                            ; 004130d3
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004130d4
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004130d9
    PUSH 0x59ddb0                       ; 004130dc
    MOV ESI,dword ptr [0x00822498]      ; 004130e1 | INT_00822498
    PUSH ESI                            ; 004130e7
    LEA EAX,[EBP + 0x1fc9c]             ; 004130e8
    PUSH dword ptr [EBP + 0x1fca8]      ; 004130ee
    PUSH EAX                            ; 004130f4
    LEA ESI,[ESP + 0x14]                ; 004130f5
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 004130f9
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 004130fe
    LEA EAX,[ESP + 0x20]                ; 00413101
    PUSH EAX                            ; 00413105
    LEA EDI,[ESP + 0x24]                ; 00413106
    LEA ESI,[ESP + 0x14]                ; 0041310a
    PUSH EBX                            ; 0041310e
    MOVSD ES:EDI,ESI                    ; 0041310f
    MOVSD ES:EDI,ESI                    ; 00413110
    MOVSD ES:EDI,ESI                    ; 00413111
    MOVSD ES:EDI,ESI                    ; 00413112
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 00413113
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00413118
    PUSH dword ptr [ESP + 0xb0]         ; 0041311b
    PUSH EBP                            ; 00413122
    MOV EDI,0x40000000                  ; 00413123
    XOR EBX,EBX                         ; 00413128
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 0041312a
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041312f
    LEA ESI,[EBP + 0x20]                ; 00413132
    PUSH 0x40000000                     ; 00413135
        ;   Label: LAB_00413135
    PUSH 0xc0000000                     ; 0041313a
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041313f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa0],EAX      ; 00413144
    FLD float ptr [ESP + 0xa0]          ; 0041314b
    ADD ESP,0x8                         ; 00413152
    INC EBX                             ; 00413155
    PUSH 0x40000000                     ; 00413156
    FSTP float ptr [ESP + 0x4c]         ; 0041315b
    PUSH 0xc0000000                     ; 0041315f
    MOV dword ptr [ESP + 0x54],EDI      ; 00413164
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00413168
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa0],EAX      ; 0041316d
    MOV EBP,dword ptr [0x0067a3d0]      ; 00413174 | g_CFireEffectPtr
    FLD float ptr [ESP + 0xa0]          ; 0041317a
    ADD ESP,0x8                         ; 00413181
    LEA EAX,[ESP + 0x48]                ; 00413184
    FLD float ptr [ESP + 0x48]          ; 00413188
    FLD float ptr [ESP + 0x4c]          ; 0041318c
    FXCH ST2                            ; 00413190
    FSTP float ptr [ESP + 0x50]         ; 00413192
    PUSH 0xffff                         ; 00413196
    FLD float ptr [ESP + 0x54]          ; 0041319b
    PUSH 0x0                            ; 0041319f
    FXCH                                ; 004131a1
    FADD float ptr [ESI]                ; 004131a3
    PUSH 0x40000000                     ; 004131a5
    FSTP float ptr [ESP + 0x54]         ; 004131aa
    FXCH                                ; 004131ae
    FADD float ptr [ESI + 0x4]          ; 004131b0
    PUSH EAX                            ; 004131b3
    FSTP float ptr [ESP + 0x5c]         ; 004131b4
    FADD float ptr [ESI + 0x8]          ; 004131b8
    PUSH EBP                            ; 004131bb | g_CFireEffectInstance
    FSTP float ptr [ESP + 0x64]         ; 004131bc
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004131c0
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004131c5
    CMP EBX,0x2                         ; 004131c8
    JL 0x00413135                       ; 004131cb
        ;   XREF to: 00413135 (CONDITIONAL_JUMP)  ; LAB_00413135
    FLD float ptr [0x008224dc]          ; 004131d1 | FLOAT_008224dc
    FADD float ptr [ESP + 0xb0]         ; 004131d7
    FSTP float ptr [0x008224dc]         ; 004131de | FLOAT_008224dc
    POP EDI                             ; 004131e4
    ADD ESP,0x98                        ; 004131e5
    POP EBP                             ; 004131eb
    POP ESI                             ; 004131ec
    POP EBX                             ; 004131ed
    RET                                 ; 004131ee
    PUSH dword ptr [ESP + 0xac]         ; 004131ef
        ;   Label: LAB_004131ef
    PUSH EBP                            ; 004131f6
    CALL core_baron.cpp_CBaron_FUN_004135e0 ; 004131f7
        ;   XREF to: 004135e0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_FUN_004135e0(CBaron * this_ptr)
    ADD ESP,0x8                         ; 004131fc
    JMP 0x00412f41                      ; 004131ff
        ;   XREF to: 00412f41 (UNCONDITIONAL_JUMP)  ; LAB_00412f41
    PUSH 0x1                            ; 00413204
        ;   Label: LAB_00413204
    PUSH 0x0                            ; 00413206
    PUSH EAX                            ; 00413208
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00413209
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041320e
    PUSH EBP                            ; 00413211
    PUSH 0x614ff9                       ; 00413212 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x0066e8e0]                ; 00413217 | g_CConsolePtr
    PUSH EAX                            ; 0041321c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041321d
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x00413011                      ; 00413222
        ;   XREF to: 00413011 (UNCONDITIONAL_JUMP)  ; LAB_00413011
    PUSH 0x1                            ; 00413227
        ;   Label: LAB_00413227
    PUSH 0x3                            ; 00413229
    JMP 0x0041300b                      ; 0041322b
        ;   XREF to: 0041300b (UNCONDITIONAL_JUMP)  ; LAB_0041300b
    JBE 0x00413227                      ; 00413230
        ;   XREF to: 00413227 (CONDITIONAL_JUMP)  ; LAB_00413227
        ;   Label: LAB_00413230
    CMP EBX,0x3                         ; 00413232
    JZ 0x00413204                       ; 00413235
        ;   XREF to: 00413204 (CONDITIONAL_JUMP)  ; LAB_00413204
    PUSH 0x1                            ; 00413237
        ;   Label: LAB_00413237
    PUSH 0x0                            ; 00413239
    LEA EAX,[EBP + 0x158]               ; 0041323b
    JMP 0x0041300b                      ; 00413241
        ;   XREF to: 0041300b (UNCONDITIONAL_JUMP)  ; LAB_0041300b
    MOV EBX,dword ptr [0x008224cc]      ; 00413246 | INT_008224cc
        ;   Label: caseD_4
    LEA EAX,[EBX*0x4 + 0x0]             ; 0041324c
    SUB EAX,EBX                         ; 00413253
    SHL EAX,0x4                         ; 00413255
    LEA EBX,[EBP + 0xfd8]               ; 00413258
    ADD EAX,EBX                         ; 0041325e
    PUSH EAX                            ; 00413260
    PUSH 0x3f87558                      ; 00413261 | g_ZeroVector
    LEA EAX,[ESP + 0x2c]                ; 00413266
    PUSH EAX                            ; 0041326a
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0041326b
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00413270
    PUSH EAX                            ; 00413273
    LEA EAX,[ESP + 0x64]                ; 00413274
    PUSH EAX                            ; 00413278
    PUSH EBP                            ; 00413279
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041327a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 0041327f
    LEA EAX,[ESP + 0x84]                ; 00413281
    ADD ESP,0xc                         ; 00413288
    CMP EAX,EBX                         ; 0041328b
    JZ 0x004132a6                       ; 0041328d
        ;   XREF to: 004132a6 (CONDITIONAL_JUMP)  ; LAB_004132a6
    MOV EAX,dword ptr [EBX]             ; 0041328f
    MOV dword ptr [ESP + 0x78],EAX      ; 00413291
    MOV EAX,dword ptr [EBX + 0x4]       ; 00413295
    MOV dword ptr [ESP + 0x7c],EAX      ; 00413298
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041329c
    MOV dword ptr [ESP + 0x80],EAX      ; 0041329f
    MOV EBX,dword ptr [0x008224d0]      ; 004132a6 | INT_008224d0
        ;   Label: LAB_004132a6
    LEA EAX,[EBX*0x4 + 0x0]             ; 004132ac
    SUB EAX,EBX                         ; 004132b3
    SHL EAX,0x4                         ; 004132b5
    LEA EBX,[EBP + 0xfd8]               ; 004132b8
    ADD EAX,EBX                         ; 004132be
    PUSH EAX                            ; 004132c0
    PUSH 0x3f87558                      ; 004132c1 | g_ZeroVector
    LEA EAX,[ESP + 0x8c]                ; 004132c6
    PUSH EAX                            ; 004132cd
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004132ce
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004132d3
    PUSH EAX                            ; 004132d6
    LEA EAX,[ESP + 0x34]                ; 004132d7
    PUSH EAX                            ; 004132db
    PUSH EBP                            ; 004132dc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004132dd
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 004132e2
    LEA EAX,[ESP + 0x60]                ; 004132e4
    ADD ESP,0xc                         ; 004132e8
    CMP EAX,EBX                         ; 004132eb
    JZ 0x00413303                       ; 004132ed
        ;   XREF to: 00413303 (CONDITIONAL_JUMP)  ; LAB_00413303
    MOV EAX,dword ptr [EBX]             ; 004132ef
    MOV dword ptr [ESP + 0x54],EAX      ; 004132f1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004132f5
    MOV dword ptr [ESP + 0x58],EAX      ; 004132f8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004132fc
    MOV dword ptr [ESP + 0x5c],EAX      ; 004132ff
    CMP dword ptr [EBP + 0x1fcb0],0x0   ; 00413303
        ;   Label: LAB_00413303
    JNZ 0x0041336c                      ; 0041330a
        ;   XREF to: 0041336c (CONDITIONAL_JUMP)  ; LAB_0041336c
    PUSH 0x66e460                       ; 0041330c | SMRGLTextureBasic_0066e460
    PUSH 0x3f000000                     ; 00413311
    PUSH 0x3f000000                     ; 00413316
    LEA EAX,[EBP + 0x1fcb4]             ; 0041331b
    PUSH 0x40000000                     ; 00413321
    PUSH EAX                            ; 00413326
    LEA EAX,[ESP + 0x8c]                ; 00413327
    PUSH EAX                            ; 0041332e
    MOV EDI,dword ptr [0x0067a3d0]      ; 0041332f | g_CFireEffectPtr
    PUSH EDI                            ; 00413335 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0 ; 00413336
        ;   XREF to: 004c90c0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 0041333b
    PUSH 0x66e460                       ; 0041333e | SMRGLTextureBasic_0066e460
    PUSH 0x3f000000                     ; 00413343
    PUSH 0x3f000000                     ; 00413348
    LEA EAX,[EBP + 0x1fcc0]             ; 0041334d
    PUSH 0x40000000                     ; 00413353
    PUSH EAX                            ; 00413358
    LEA EAX,[ESP + 0x68]                ; 00413359
    PUSH EAX                            ; 0041335d
    MOV EAX,[0x0067a3d0]                ; 0041335e | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 00413363 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0 ; 00413364
        ;   XREF to: 004c90c0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 00413369
    LEA EAX,[ESP + 0x78]                ; 0041336c
        ;   Label: LAB_0041336c
    LEA EBX,[EBP + 0x1fcb4]             ; 00413370
    CMP EBX,EAX                         ; 00413376
    JZ 0x00413391                       ; 00413378
        ;   XREF to: 00413391 (CONDITIONAL_JUMP)  ; LAB_00413391
    MOV EAX,dword ptr [ESP + 0x78]      ; 0041337a
    MOV dword ptr [EBX],EAX             ; 0041337e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00413380
    MOV dword ptr [EBX + 0x4],EAX       ; 00413384
    MOV EAX,dword ptr [ESP + 0x80]      ; 00413387
    MOV dword ptr [EBX + 0x8],EAX       ; 0041338e
    LEA EAX,[ESP + 0x54]                ; 00413391
        ;   Label: LAB_00413391
    LEA EBX,[EBP + 0x1fcc0]             ; 00413395
    CMP EBX,EAX                         ; 0041339b
    JZ 0x004133b3                       ; 0041339d
        ;   XREF to: 004133b3 (CONDITIONAL_JUMP)  ; LAB_004133b3
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041339f
    MOV dword ptr [EBX],EAX             ; 004133a3
    MOV EAX,dword ptr [ESP + 0x58]      ; 004133a5
    MOV dword ptr [EBX + 0x4],EAX       ; 004133a9
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004133ac
    MOV dword ptr [EBX + 0x8],EAX       ; 004133b0
    MOV dword ptr [EBP + 0x1fcb0],0x0   ; 004133b3
        ;   Label: LAB_004133b3
    JMP 0x00413014                      ; 004133bd
        ;   XREF to: 00413014 (UNCONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBP + 0xbe2c]    ; 004133c2
        ;   Label: caseD_0
    XOR EBX,EBX                         ; 004133c8
    TEST EDX,EDX                        ; 004133ca
    JZ 0x004133dc                       ; 004133cc
        ;   XREF to: 004133dc (CONDITIONAL_JUMP)  ; LAB_004133dc
    CMP dword ptr [EBP + 0xbe34],0x0    ; 004133ce
    JZ 0x00413441                       ; 004133d5
        ;   XREF to: 00413441 (CONDITIONAL_JUMP)  ; LAB_00413441
    MOV EBX,0x3                         ; 004133d7
    CMP dword ptr [EBP + 0xbe30],0x0    ; 004133dc
        ;   Label: LAB_004133dc
    JZ 0x004133ea                       ; 004133e3
        ;   XREF to: 004133ea (CONDITIONAL_JUMP)  ; LAB_004133ea
    MOV EBX,0x2                         ; 004133e5
    CMP dword ptr [EBP + 0xbe38],0x0    ; 004133ea
        ;   Label: LAB_004133ea
    JZ 0x0041340c                       ; 004133f1
        ;   XREF to: 0041340c (CONDITIONAL_JUMP)  ; LAB_0041340c
    MOV dword ptr [EBP + 0x1fcb0],0x1   ; 004133f3
    MOV EBX,0x4                         ; 004133fd
    MOV dword ptr [EBP + 0xbe38],0x0    ; 00413402
    FLD float ptr [EBP + 0xbe50]        ; 0041340c
        ;   Label: LAB_0041340c
    LEA ESI,[EBP + 0x158]               ; 00413412
    FMUL float ptr [EBP + 0x2438]       ; 00413418
    PUSH ESI                            ; 0041341e
    FSTP float ptr [EBP + 0x2418]       ; 0041341f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00413425
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041342a
    ADD ESP,0x4                         ; 0041342d
    CMP EBX,EAX                         ; 00413430
    JZ 0x00413014                       ; 00413432
        ;   XREF to: 00413014 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00413438
    PUSH EBX                            ; 0041343a
    PUSH ESI                            ; 0041343b
    JMP 0x0041300c                      ; 0041343c
        ;   XREF to: 0041300c (UNCONDITIONAL_JUMP)  ; LAB_0041300c
    MOV EBX,0x1                         ; 00413441
        ;   Label: LAB_00413441
    JMP 0x004133dc                      ; 00413446
        ;   XREF to: 004133dc (UNCONDITIONAL_JUMP)  ; LAB_004133dc
    PUSH EAX                            ; 00413448
        ;   Label: LAB_00413448
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00413449
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041344e
    ADD ESP,0x4                         ; 00413451
    CMP EAX,0x4                         ; 00413454
    JA 0x00413014                       ; 00413457
        ;   XREF to: 00413014 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x412e68]  ; 0041345d | caseD_3 | caseD_4 | switchdataD_00412e68
        ;   Label: switchD

