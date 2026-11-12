; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_archive_FUN_004d2df0(CHostage *this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_followState_005da3b9
;   TerminatedCString s_hostageState_005da3c5
;   TerminatedCString s_goalWayPoint_005da3d2
;   TerminatedCString s_modelName_005da3df
;   TerminatedCString s_motion_state_005da3e9
;   TerminatedCString s_partStatus_005da3f6
;   TerminatedCString s_rescueDistance_005da401
;   TerminatedCString s_rescueCondition_005da410
;   TerminatedCString s_clothList_005da420
;   TerminatedCString s_rescueEvent_005da42a
;   TerminatedCString s_heroFoundMeEvent_005da436
;   TerminatedCString s_heroLeftMeEvent_005da447
;   TerminatedCString s_heroCameBackEvent_005da457
;   TerminatedCString s_goingToSitDownEvent_005da469
;   TerminatedCString s_sitDownEvent_005da47d
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveClothList_FUN_0040bfd0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveLocalizedString_FUN_0040b850
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archivePartStatus_FUN_0040bc50
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_npc.cpp_CNPC_archive_FUN_005109e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2df0
        ;   Label: core_hostage.cpp_CHostage_archive_FUN_004d2df0
    PUSH ESI                            ; 004d2df1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d2df2
    PUSH EBX                            ; 004d2df6
    CALL core_npc.cpp_CNPC_archive_FUN_005109e0 ; 004d2df7
        ;   XREF to: 005109e0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_005109e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004d2dfc
    PUSH 0x5da3b9                       ; 004d2dff | = "followState"
    LEA ESI,[EBX + 0x246f4]             ; 004d2e04
    PUSH ESI                            ; 004d2e0a
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004d2e0b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2e10
    PUSH 0x5da3c5                       ; 004d2e13 | = "hostageState"
    LEA ESI,[EBX + 0x246fc]             ; 004d2e18
    PUSH ESI                            ; 004d2e1e
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004d2e1f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2e24
    PUSH 0x5da3d2                       ; 004d2e27 | = "goalWayPoint"
    LEA ESI,[EBX + 0x24700]             ; 004d2e2c
    PUSH ESI                            ; 004d2e32
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004d2e33
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    MOV EDX,dword ptr [0x00617ac8]      ; 004d2e38 | g_CHostageClassVersion
    ADD ESP,0x8                         ; 004d2e3e
    CMP EDX,0xa                         ; 004d2e41
    JL 0x004d2fbb                       ; 004d2e44
        ;   XREF to: 004d2fbb (CONDITIONAL_JUMP)  ; LAB_004d2fbb
    PUSH 0x5da3f6                       ; 004d2e4a | = "partStatus"
        ;   Label: LAB_004d2e4a
    LEA ESI,[EBX + 0x2b4]               ; 004d2e4f
    PUSH ESI                            ; 004d2e55
    CALL core_actor.cpp_archivePartStatus_FUN_0040bc50 ; 004d2e56
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2e5b
    PUSH 0x5da401                       ; 004d2e5e | = "rescueDistance"
    LEA ESI,[EBX + 0x24348]             ; 004d2e63
    PUSH ESI                            ; 004d2e69
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004d2e6a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2e6f
    PUSH 0x5da410                       ; 004d2e72 | = "rescueCondition"
    LEA ESI,[EBX + 0x2434c]             ; 004d2e77
    PUSH ESI                            ; 004d2e7d
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2e7e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    MOV ECX,dword ptr [0x00617ac8]      ; 004d2e83 | g_CHostageClassVersion
    ADD ESP,0x8                         ; 004d2e89
    CMP ECX,0x2                         ; 004d2e8c
    JL 0x004d2eaa                       ; 004d2e8f
        ;   XREF to: 004d2eaa (CONDITIONAL_JUMP)  ; LAB_004d2eaa
    CMP ECX,0x5                         ; 004d2e91
    JGE 0x004d2eaa                      ; 004d2e94
        ;   XREF to: 004d2eaa (CONDITIONAL_JUMP)  ; LAB_004d2eaa
    PUSH 0x5da420                       ; 004d2e96 | = "clothList"
    LEA ESI,[EBX + 0x2d0c]              ; 004d2e9b
    PUSH ESI                            ; 004d2ea1
    CALL core_actor.cpp_archiveClothList_FUN_0040bfd0 ; 004d2ea2
        ;   XREF to: 0040bfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040bfd0(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 004d2ea7
    CMP dword ptr [0x00617ac8],0x3      ; 004d2eaa | g_CHostageClassVersion
        ;   Label: LAB_004d2eaa
    JL 0x004d2ec7                       ; 004d2eb1
        ;   XREF to: 004d2ec7 (CONDITIONAL_JUMP)  ; LAB_004d2ec7
    PUSH 0x5da42a                       ; 004d2eb3 | = "rescueEvent"
    LEA ESI,[EBX + 0x243b0]             ; 004d2eb8
    PUSH ESI                            ; 004d2ebe
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2ebf
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2ec4
    CMP dword ptr [0x00617ac8],0x4      ; 004d2ec7 | g_CHostageClassVersion
        ;   Label: LAB_004d2ec7
    JL 0x004d2f34                       ; 004d2ece
        ;   XREF to: 004d2f34 (CONDITIONAL_JUMP)  ; LAB_004d2f34
    PUSH 0x5da436                       ; 004d2ed0 | = "heroFoundMeEvent"
    LEA ESI,[EBX + 0x243d0]             ; 004d2ed5
    PUSH ESI                            ; 004d2edb
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2edc
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2ee1
    PUSH 0x5da447                       ; 004d2ee4 | = "heroLeftMeEvent"
    LEA ESI,[EBX + 0x24434]             ; 004d2ee9
    PUSH ESI                            ; 004d2eef
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2ef0
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2ef5
    PUSH 0x5da457                       ; 004d2ef8 | = "heroCameBackEvent"
    LEA ESI,[EBX + 0x24498]             ; 004d2efd
    PUSH ESI                            ; 004d2f03
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2f04
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2f09
    PUSH 0x5da469                       ; 004d2f0c | = "goingToSitDownEvent"
    LEA ESI,[EBX + 0x24560]             ; 004d2f11
    PUSH ESI                            ; 004d2f17
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2f18
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2f1d
    PUSH 0x5da47d                       ; 004d2f20 | = "sitDownEvent"
    LEA ESI,[EBX + 0x245c4]             ; 004d2f25
    PUSH ESI                            ; 004d2f2b
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2f2c
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2f31
    CMP dword ptr [0x00617ac8],0x6      ; 004d2f34 | g_CHostageClassVersion
        ;   Label: LAB_004d2f34
    JL 0x004d2f51                       ; 004d2f3b
        ;   XREF to: 004d2f51 (CONDITIONAL_JUMP)  ; LAB_004d2f51
    PUSH 0x5da48a                       ; 004d2f3d | = "noShadowsWhenSaved"
    LEA ESI,[EBX + 0x2471c]             ; 004d2f42
    PUSH ESI                            ; 004d2f48
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004d2f49
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2f4e
    CMP dword ptr [0x00617ac8],0x7      ; 004d2f51 | g_CHostageClassVersion
        ;   Label: LAB_004d2f51
    JL 0x004d2f6e                       ; 004d2f58
        ;   XREF to: 004d2f6e (CONDITIONAL_JUMP)  ; LAB_004d2f6e
    PUSH 0x5da49d                       ; 004d2f5a | = "getEatenEvent"
    LEA ESI,[EBX + 0x244fc]             ; 004d2f5f
    PUSH ESI                            ; 004d2f65
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2f66
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2f6b
    MOV ECX,dword ptr [0x00617ac8]      ; 004d2f6e | g_CHostageClassVersion
        ;   Label: LAB_004d2f6e
    CMP ECX,0x8                         ; 004d2f74
    JL 0x004d2f92                       ; 004d2f77
        ;   XREF to: 004d2f92 (CONDITIONAL_JUMP)  ; LAB_004d2f92
    CMP ECX,0xc                         ; 004d2f79
    JGE 0x004d2f92                      ; 004d2f7c
        ;   XREF to: 004d2f92 (CONDITIONAL_JUMP)  ; LAB_004d2f92
    PUSH 0x5da4ab                       ; 004d2f7e | = "descriptiveName"
    LEA ESI,[EBX + 0x25b4]              ; 004d2f83
    PUSH ESI                            ; 004d2f89
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b850 ; 004d2f8a
        ;   XREF to: 0040b850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b850(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 004d2f8f
    CMP dword ptr [0x00617ac8],0x9      ; 004d2f92 | g_CHostageClassVersion
        ;   Label: LAB_004d2f92
    JL 0x004d2faf                       ; 004d2f99
        ;   XREF to: 004d2faf (CONDITIONAL_JUMP)  ; LAB_004d2faf
    PUSH 0x5da4bb                       ; 004d2f9b | = "sitDownWayPoint"
    LEA ESI,[EBX + 0x24704]             ; 004d2fa0
    PUSH ESI                            ; 004d2fa6
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004d2fa7
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2fac
    CMP dword ptr [0x00617ac8],0xb      ; 004d2faf | g_CHostageClassVersion
        ;   Label: LAB_004d2faf
    JGE 0x004d2fe2                      ; 004d2fb6
        ;   XREF to: 004d2fe2 (CONDITIONAL_JUMP)  ; LAB_004d2fe2
    POP ESI                             ; 004d2fb8
    POP EBX                             ; 004d2fb9
    RET                                 ; 004d2fba
    PUSH 0x5da3df                       ; 004d2fbb | = "modelName"
        ;   Label: LAB_004d2fbb
    LEA ESI,[EBX + 0x2b4]               ; 004d2fc0
    PUSH ESI                            ; 004d2fc6
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004d2fc7
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2fcc
    PUSH 0x5da3e9                       ; 004d2fcf | = "motion state"
    PUSH ESI                            ; 004d2fd4
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004d2fd5
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004d2fda
    JMP 0x004d2e4a                      ; 004d2fdd
        ;   XREF to: 004d2e4a (UNCONDITIONAL_JUMP)  ; LAB_004d2e4a
    PUSH 0x5da4cb                       ; 004d2fe2 | = "damageSound"
        ;   Label: LAB_004d2fe2
    LEA ESI,[EBX + 0x24628]             ; 004d2fe7
    PUSH ESI                            ; 004d2fed
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d2fee
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d2ff3
    PUSH 0x5da4d7                       ; 004d2ff6 | = "dieSound"
    ADD EBX,0x2468c                     ; 004d2ffb
    PUSH EBX                            ; 004d3001
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d3002
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d3007
    POP ESI                             ; 004d300a
    POP EBX                             ; 004d300b
    RET                                 ; 004d300c

