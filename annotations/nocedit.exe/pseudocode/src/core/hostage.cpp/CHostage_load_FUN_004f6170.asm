; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hostage.cpp_CHostage_load_FUN_004f6170()
;
;
; Referenced Globals:
;   TerminatedCString s_followState_0062f0fd
;   TerminatedCString s_hostageState_0062f109
;   TerminatedCString s_goalWayPoint_0062f116
;   TerminatedCString s_modelName_0062f123
;   TerminatedCString s_motion_state_0062f12d
;   TerminatedCString s_partStatus_0062f13a
;   TerminatedCString s_rescueDistance_0062f145
;   TerminatedCString s_rescueCondition_0062f154
;   TerminatedCString s_clothList_0062f164
;   TerminatedCString s_rescueEvent_0062f16e
;   TerminatedCString s_heroFoundMeEvent_0062f17a
;   TerminatedCString s_heroLeftMeEvent_0062f18b
;   TerminatedCString s_heroCameBackEvent_0062f19b
;   TerminatedCString s_goingToSitDownEvent_0062f1ad
;   TerminatedCString s_sitDownEvent_0062f1c1
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeClothList_FUN_0040be60
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializePartStatus_FUN_0040bae0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_npc.cpp_CNPC_serialize_FUN_00544ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6170
        ;   Label: core_hostage.cpp_CHostage_load_FUN_004f6170
    PUSH ESI                            ; 004f6171
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f6172
    PUSH EBX                            ; 004f6176
    CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0 ; 004f6177 | void core_npc.cpp_CNPC_serialize_FUN_00544ba0(CNPC * this_ptr)
        ;   XREF to: 00544ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f617c
    PUSH 0x62f0fd                       ; 004f617f | = "followState" | s_followState_0062f0fd = followState
    LEA ESI,[EBX + 0x1fab4]             ; 004f6184
    PUSH ESI                            ; 004f618a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004f618b | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6190
    PUSH 0x62f109                       ; 004f6193 | = "hostageState" | s_hostageState_0062f109 = hostageState
    LEA ESI,[EBX + 0x1fabc]             ; 004f6198
    PUSH ESI                            ; 004f619e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004f619f | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f61a4
    PUSH 0x62f116                       ; 004f61a7 | = "goalWayPoint" | s_goalWayPoint_0062f116 = goalWayPoint
    LEA ESI,[EBX + 0x1fac0]             ; 004f61ac
    PUSH ESI                            ; 004f61b2
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 004f61b3 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067cc5c]      ; 004f61b8 | undefined4 g_CHostageClassVersion
    ADD ESP,0x8                         ; 004f61be
    CMP EDX,0xa                         ; 004f61c1
    JL 0x004f633b                       ; 004f61c4 | LAB_004f633b
        ;   XREF to: 004f633b (CONDITIONAL_JUMP)
    PUSH 0x62f13a                       ; 004f61ca | = "partStatus" | s_partStatus_0062f13a = partStatus
        ;   Label: LAB_004f61ca
    LEA ESI,[EBX + 0x158]               ; 004f61cf
    PUSH ESI                            ; 004f61d5
    CALL core_actor.cpp_serializePartStatus_FUN_0040bae0 ; 004f61d6 | void core_actor.cpp_serializePartStatus_FUN_0040bae0(void * part, char * property_name)
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f61db
    PUSH 0x62f145                       ; 004f61de | = "rescueDistance" | s_rescueDistance_0062f145 = rescueDistance
    LEA ESI,[EBX + 0x1f708]             ; 004f61e3
    PUSH ESI                            ; 004f61e9
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004f61ea | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f61ef
    PUSH 0x62f154                       ; 004f61f2 | = "rescueCondition" | s_rescueCondition_0062f154 = rescueCondition
    LEA ESI,[EBX + 0x1f70c]             ; 004f61f7
    PUSH ESI                            ; 004f61fd
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f61fe | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0067cc5c]      ; 004f6203 | undefined4 g_CHostageClassVersion
    ADD ESP,0x8                         ; 004f6209
    CMP ECX,0x2                         ; 004f620c
    JL 0x004f622a                       ; 004f620f | LAB_004f622a
        ;   XREF to: 004f622a (CONDITIONAL_JUMP)
    CMP ECX,0x5                         ; 004f6211
    JGE 0x004f622a                      ; 004f6214 | LAB_004f622a
        ;   XREF to: 004f622a (CONDITIONAL_JUMP)
    PUSH 0x62f164                       ; 004f6216 | = "clothList" | s_clothList_0062f164 = clothList
    LEA ESI,[EBX + 0x2a94]              ; 004f621b
    PUSH ESI                            ; 004f6221
    CALL core_actor.cpp_serializeClothList_FUN_0040be60 ; 004f6222 | void core_actor.cpp_serializeClothList_FUN_0040be60(CClothList * cloth_list, char * property_name)
        ;   XREF to: 0040be60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6227
    CMP dword ptr [0x0067cc5c],0x3      ; 004f622a | undefined4 g_CHostageClassVersion
        ;   Label: LAB_004f622a
    JL 0x004f6247                       ; 004f6231 | LAB_004f6247
        ;   XREF to: 004f6247 (CONDITIONAL_JUMP)
    PUSH 0x62f16e                       ; 004f6233 | = "rescueEvent" | s_rescueEvent_0062f16e = rescueEvent
    LEA ESI,[EBX + 0x1f770]             ; 004f6238
    PUSH ESI                            ; 004f623e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f623f | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6244
    CMP dword ptr [0x0067cc5c],0x4      ; 004f6247 | undefined4 g_CHostageClassVersion
        ;   Label: LAB_004f6247
    JL 0x004f62b4                       ; 004f624e | LAB_004f62b4
        ;   XREF to: 004f62b4 (CONDITIONAL_JUMP)
    PUSH 0x62f17a                       ; 004f6250 | = "heroFoundMeEvent" | s_heroFoundMeEvent_0062f17a = heroFoundMeEvent
    LEA ESI,[EBX + 0x1f790]             ; 004f6255
    PUSH ESI                            ; 004f625b
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f625c | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6261
    PUSH 0x62f18b                       ; 004f6264 | = "heroLeftMeEvent" | s_heroLeftMeEvent_0062f18b = heroLeftMeEvent
    LEA ESI,[EBX + 0x1f7f4]             ; 004f6269
    PUSH ESI                            ; 004f626f
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f6270 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6275
    PUSH 0x62f19b                       ; 004f6278 | = "heroCameBackEvent" | s_heroCameBackEvent_0062f19b = heroCameBackEvent
    LEA ESI,[EBX + 0x1f858]             ; 004f627d
    PUSH ESI                            ; 004f6283
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f6284 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6289
    PUSH 0x62f1ad                       ; 004f628c | = "goingToSitDownEvent" | s_goingToSitDownEvent_0062f1ad = goingToSitDownEvent
    LEA ESI,[EBX + 0x1f920]             ; 004f6291
    PUSH ESI                            ; 004f6297
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f6298 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f629d
    PUSH 0x62f1c1                       ; 004f62a0 | = "sitDownEvent" | s_sitDownEvent_0062f1c1 = sitDownEvent
    LEA ESI,[EBX + 0x1f984]             ; 004f62a5
    PUSH ESI                            ; 004f62ab
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f62ac | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f62b1
    CMP dword ptr [0x0067cc5c],0x6      ; 004f62b4 | undefined4 g_CHostageClassVersion
        ;   Label: LAB_004f62b4
    JL 0x004f62d1                       ; 004f62bb | LAB_004f62d1
        ;   XREF to: 004f62d1 (CONDITIONAL_JUMP)
    PUSH 0x62f1ce                       ; 004f62bd | = "noShadowsWhenSaved" | s_noShadowsWhenSaved_0062f1ce = noShadowsWhenSaved
    LEA ESI,[EBX + 0x1fadc]             ; 004f62c2
    PUSH ESI                            ; 004f62c8
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004f62c9 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f62ce
    CMP dword ptr [0x0067cc5c],0x7      ; 004f62d1 | undefined4 g_CHostageClassVersion
        ;   Label: LAB_004f62d1
    JL 0x004f62ee                       ; 004f62d8 | LAB_004f62ee
        ;   XREF to: 004f62ee (CONDITIONAL_JUMP)
    PUSH 0x62f1e1                       ; 004f62da | = "getEatenEvent" | s_getEatenEvent_0062f1e1 = getEatenEvent
    LEA ESI,[EBX + 0x1f8bc]             ; 004f62df
    PUSH ESI                            ; 004f62e5
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f62e6 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f62eb
    MOV ECX,dword ptr [0x0067cc5c]      ; 004f62ee | undefined4 g_CHostageClassVersion
        ;   Label: LAB_004f62ee
    CMP ECX,0x8                         ; 004f62f4
    JL 0x004f6312                       ; 004f62f7 | LAB_004f6312
        ;   XREF to: 004f6312 (CONDITIONAL_JUMP)
    CMP ECX,0xc                         ; 004f62f9
    JGE 0x004f6312                      ; 004f62fc | LAB_004f6312
        ;   XREF to: 004f6312 (CONDITIONAL_JUMP)
    PUSH 0x62f1ef                       ; 004f62fe | = "descriptiveName" | s_descriptiveName_0062f1ef = descriptiveName
    LEA ESI,[EBX + 0x2448]              ; 004f6303
    PUSH ESI                            ; 004f6309
    CALL core_actor.cpp_serializeLocalizedString_FUN_0040b6e0 ; 004f630a | void core_actor.cpp_serializeLocalizedString_FUN_0040b6e0(char * * string_buffer, char * localization_key)
        ;   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f630f
    CMP dword ptr [0x0067cc5c],0x9      ; 004f6312 | undefined4 g_CHostageClassVersion
        ;   Label: LAB_004f6312
    JL 0x004f632f                       ; 004f6319 | LAB_004f632f
        ;   XREF to: 004f632f (CONDITIONAL_JUMP)
    PUSH 0x62f1ff                       ; 004f631b | = "sitDownWayPoint" | s_sitDownWayPoint_0062f1ff = sitDownWayPoint
    LEA ESI,[EBX + 0x1fac4]             ; 004f6320
    PUSH ESI                            ; 004f6326
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 004f6327 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f632c
    CMP dword ptr [0x0067cc5c],0xb      ; 004f632f | undefined4 g_CHostageClassVersion
        ;   Label: LAB_004f632f
    JGE 0x004f6362                      ; 004f6336 | LAB_004f6362
        ;   XREF to: 004f6362 (CONDITIONAL_JUMP)
    POP ESI                             ; 004f6338
    POP EBX                             ; 004f6339
    RET                                 ; 004f633a
    PUSH 0x62f123                       ; 004f633b | = "modelName" | s_modelName_0062f123 = modelName
        ;   Label: LAB_004f633b
    LEA ESI,[EBX + 0x158]               ; 004f6340
    PUSH ESI                            ; 004f6346
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 004f6347 | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f634c
    PUSH 0x62f12d                       ; 004f634f | = "motion state" | s_motion_state_0062f12d = motion state
    PUSH ESI                            ; 004f6354
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 004f6355 | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f635a
    JMP 0x004f61ca                      ; 004f635d | LAB_004f61ca
        ;   XREF to: 004f61ca (UNCONDITIONAL_JUMP)
    PUSH 0x62f20f                       ; 004f6362 | = "damageSound" | s_damageSound_0062f20f = damageSound
        ;   Label: LAB_004f6362
    LEA ESI,[EBX + 0x1f9e8]             ; 004f6367
    PUSH ESI                            ; 004f636d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f636e | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6373
    PUSH 0x62f21b                       ; 004f6376 | = "dieSound" | s_dieSound_0062f21b = dieSound
    ADD EBX,0x1fa4c                     ; 004f637b
    PUSH EBX                            ; 004f6381
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f6382 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f6387
    POP ESI                             ; 004f638a
    POP EBX                             ; 004f638b
    RET                                 ; 004f638c

