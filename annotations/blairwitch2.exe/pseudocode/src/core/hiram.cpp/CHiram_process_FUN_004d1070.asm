; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_process_FUN_004d1070(CHiram *this_ptr,float delta_time)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_GlassHiram_005da0f3
;   undefined4 DAT_006141f0
;   undefined4 DAT_00618170
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_glass.cpp_FUN_004c6d40
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740
;   core_mission.cpp_FUN_004fc7b0
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1070
        ;   Label: core_hiram.cpp_CHiram_process_FUN_004d1070
    PUSH ESI                            ; 004d1071
    PUSH EDI                            ; 004d1072
    PUSH EBP                            ; 004d1073
    MOV EBP,ESP                         ; 004d1074
    SUB ESP,0x4                         ; 004d1076
    AND ESP,0xfffffff8                  ; 004d1079
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d107c
    PUSH dword ptr [EBP + 0x18]         ; 004d107f
    PUSH EBX                            ; 004d1082
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004d1083
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d1088
    TEST EAX,EAX                        ; 004d108b
    JNZ 0x004d1096                      ; 004d108d
        ;   XREF to: 004d1096 (CONDITIONAL_JUMP)  ; LAB_004d1096
    MOV ESP,EBP                         ; 004d108f
    POP EBP                             ; 004d1091
    POP EDI                             ; 004d1092
    POP ESI                             ; 004d1093
    POP EBX                             ; 004d1094
    RET                                 ; 004d1095
    LEA ESI,[EBX + 0x2b4]               ; 004d1096
        ;   Label: LAB_004d1096
    PUSH ESI                            ; 004d109c
    CALL core_motion.cpp_FUN_005035c0   ; 004d109d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d10a2
    ADD ESP,0x4                         ; 004d10a5
    CMP EAX,0x1                         ; 004d10a8
    JNZ 0x004d110c                      ; 004d10ab
        ;   XREF to: 004d110c (CONDITIONAL_JUMP)  ; LAB_004d110c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d10ad
        ;   Label: LAB_004d10ad
    MOV dword ptr [ESP],EAX             ; 004d10b0
    LEA EAX,[EBX + 0x2508]              ; 004d10b3
    MOV dword ptr [EAX + 0x8],0x0       ; 004d10b9
    LEA ESI,[EBX + 0x2b4]               ; 004d10c0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d10c6
    MOV dword ptr [EAX + 0x4],EDX       ; 004d10c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d10cc
    MOV dword ptr [EAX],EDX             ; 004d10cf
    FLD float ptr [ESP]                 ; 004d10d1
        ;   Label: LAB_004d10d1
    FLDZ                                ; 004d10d4
    FCOMPP                              ; 004d10d6
    FNSTSW AX                           ; 004d10d8
    SAHF                                ; 004d10da
    JNC 0x004d1180                      ; 004d10db
        ;   XREF to: 004d1180 (CONDITIONAL_JUMP)  ; LAB_004d1180
    MOV EAX,ESP                         ; 004d10e1
    PUSH EAX                            ; 004d10e3
    PUSH ESI                            ; 004d10e4
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004d10e5
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004d10ea
    CMP EAX,0x29a                       ; 004d10ed
    JNZ 0x004d1171                      ; 004d10f2
        ;   XREF to: 004d1171 (CONDITIONAL_JUMP)  ; LAB_004d1171
    PUSH 0x1                            ; 004d10f8
    PUSH EBX                            ; 004d10fa
    MOV EDI,dword ptr [0x00618170]      ; 004d10fb | DAT_00618170
    PUSH EDI                            ; 004d1101 | DAT_01d182f0
    CALL core_mission.cpp_FUN_004fc7b0  ; 004d1102
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    ADD ESP,0xc                         ; 004d1107
    JMP 0x004d10d1                      ; 004d110a
        ;   XREF to: 004d10d1 (UNCONDITIONAL_JUMP)  ; LAB_004d10d1
    LEA EAX,[EBX + 0x24348]             ; 004d110c
        ;   Label: LAB_004d110c
    PUSH EAX                            ; 004d1112
    MOV EDX,dword ptr [0x006141f0]      ; 004d1113 | DAT_006141f0
    PUSH EDX                            ; 004d1119
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004d111a
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004d111f
    TEST EAX,EAX                        ; 004d1122
    JZ 0x004d10ad                       ; 004d1124
        ;   XREF to: 004d10ad (CONDITIONAL_JUMP)  ; LAB_004d10ad
    PUSH 0x1                            ; 004d1126
    PUSH 0x1                            ; 004d1128
    PUSH ESI                            ; 004d112a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d112b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d1130
    MOV ECX,dword ptr [0x01cb8280]      ; 004d1133 | g_CGlassClassInfo.name_hash
    PUSH ECX                            ; 004d1139
    PUSH 0x5da0f3                       ; 004d113a | = "GlassHiram"
    MOV ESI,dword ptr [0x00618170]      ; 004d113f | DAT_00618170
    PUSH ESI                            ; 004d1145 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740 ; 004d1146
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004d114b
    PUSH EAX                            ; 004d114e
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d114f
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d1154
    TEST EAX,EAX                        ; 004d1157
    JZ 0x004d10ad                       ; 004d1159
        ;   XREF to: 004d10ad (CONDITIONAL_JUMP)  ; LAB_004d10ad
    LEA ESI,[EAX + 0x20]                ; 004d115f
    PUSH ESI                            ; 004d1162
    PUSH EAX                            ; 004d1163
    CALL core_glass.cpp_FUN_004c6d40    ; 004d1164
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 004d1169
    JMP 0x004d10ad                      ; 004d116c
        ;   XREF to: 004d10ad (UNCONDITIONAL_JUMP)  ; LAB_004d10ad
    PUSH EAX                            ; 004d1171
        ;   Label: LAB_004d1171
    PUSH EBX                            ; 004d1172
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004d1173
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d1178
    JMP 0x004d10d1                      ; 004d117b
        ;   XREF to: 004d10d1 (UNCONDITIONAL_JUMP)  ; LAB_004d10d1
    PUSH ESI                            ; 004d1180
        ;   Label: LAB_004d1180
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004d1181
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d1186
    PUSH EBX                            ; 004d1189
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 004d118a
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d118f
    PUSH ESI                            ; 004d1192
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004d1193
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d1198
    PUSH dword ptr [EBP + 0x18]         ; 004d119b
    PUSH EBX                            ; 004d119e
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 004d119f
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d11a4
    MOV ESP,EBP                         ; 004d11a7
    POP EBP                             ; 004d11a9
    POP EDI                             ; 004d11aa
    POP ESI                             ; 004d11ab
    POP EBX                             ; 004d11ac
    RET                                 ; 004d11ad

