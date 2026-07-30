; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hostage_cpp_CHostage_archive_FUN_004b8320(CNPC *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_followState_00585cbd
;   TerminatedCString s_hostageState_00585cc9
;   TerminatedCString s_goalWayPoint_00585cd6
;   TerminatedCString s_modelName_00585ce3
;   TerminatedCString s_motion_state_00585ced
;   TerminatedCString s_partStatus_00585cfa
;   TerminatedCString s_rescueDistance_00585d05
;   TerminatedCString s_rescueCondition_00585d14
;   TerminatedCString s_clothList_00585d24
;   TerminatedCString s_rescueEvent_00585d2e
;   TerminatedCString s_heroFoundMeEvent_00585d3a
;   TerminatedCString s_heroLeftMeEvent_00585d4b
;   TerminatedCString s_heroCameBackEvent_00585d5b
;   TerminatedCString s_goingToSitDownEvent_00585d6d
;   TerminatedCString s_sitDownEvent_00585d81
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveClothList_FUN_0040cf70
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveLocalizedString_FUN_0040c7f0
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_npc.cpp_CNPC_archive_FUN_004eed10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8320
        ;   Label: core_hostage.cpp_CHostage_archive_FUN_004b8320
    PUSH ESI                            ; 004b8321
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b8322
    PUSH EBX                            ; 004b8326
    CALL core_npc.cpp_CNPC_archive_FUN_004eed10 ; 004b8327
        ;   XREF to: 004eed10 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_004eed10(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004b832c
    PUSH 0x585cbd                       ; 004b832f | = "followState"
    LEA ESI,[EBX + 0x1f91c]             ; 004b8334
    PUSH ESI                            ; 004b833a
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b833b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b8340
    PUSH 0x585cc9                       ; 004b8343 | = "hostageState"
    LEA ESI,[EBX + 0x1f924]             ; 004b8348
    PUSH ESI                            ; 004b834e
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b834f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b8354
    PUSH 0x585cd6                       ; 004b8357 | = "goalWayPoint"
    LEA ESI,[EBX + 0x1f928]             ; 004b835c
    PUSH ESI                            ; 004b8362
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b8363
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    MOV EDX,dword ptr [0x005ba980]      ; 004b8368 | INT_005ba980
    ADD ESP,0x8                         ; 004b836e
    CMP EDX,0xa                         ; 004b8371
    JL 0x004b84eb                       ; 004b8374
        ;   XREF to: 004b84eb (CONDITIONAL_JUMP)  ; LAB_004b84eb
    PUSH 0x585cfa                       ; 004b837a | = "partStatus"
        ;   Label: LAB_004b837a
    LEA ESI,[EBX + 0x150]               ; 004b837f
    PUSH ESI                            ; 004b8385
    CALL core_actor.cpp_archivePartStatus_FUN_0040cbf0 ; 004b8386
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b838b
    PUSH 0x585d05                       ; 004b838e | = "rescueDistance"
    LEA ESI,[EBX + 0x1f570]             ; 004b8393
    PUSH ESI                            ; 004b8399
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004b839a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b839f
    PUSH 0x585d14                       ; 004b83a2 | = "rescueCondition"
    LEA ESI,[EBX + 0x1f574]             ; 004b83a7
    PUSH ESI                            ; 004b83ad
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b83ae
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    MOV ECX,dword ptr [0x005ba980]      ; 004b83b3 | INT_005ba980
    ADD ESP,0x8                         ; 004b83b9
    CMP ECX,0x2                         ; 004b83bc
    JL 0x004b83da                       ; 004b83bf
        ;   XREF to: 004b83da (CONDITIONAL_JUMP)  ; LAB_004b83da
    CMP ECX,0x5                         ; 004b83c1
    JGE 0x004b83da                      ; 004b83c4
        ;   XREF to: 004b83da (CONDITIONAL_JUMP)  ; LAB_004b83da
    PUSH 0x585d24                       ; 004b83c6 | = "clothList"
    LEA ESI,[EBX + 0x2a8c]              ; 004b83cb
    PUSH ESI                            ; 004b83d1
    CALL core_actor.cpp_archiveClothList_FUN_0040cf70 ; 004b83d2
        ;   XREF to: 0040cf70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040cf70(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 004b83d7
    CMP dword ptr [0x005ba980],0x3      ; 004b83da | INT_005ba980
        ;   Label: LAB_004b83da
    JL 0x004b83f7                       ; 004b83e1
        ;   XREF to: 004b83f7 (CONDITIONAL_JUMP)  ; LAB_004b83f7
    PUSH 0x585d2e                       ; 004b83e3 | = "rescueEvent"
    LEA ESI,[EBX + 0x1f5d8]             ; 004b83e8
    PUSH ESI                            ; 004b83ee
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b83ef
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b83f4
    CMP dword ptr [0x005ba980],0x4      ; 004b83f7 | INT_005ba980
        ;   Label: LAB_004b83f7
    JL 0x004b8464                       ; 004b83fe
        ;   XREF to: 004b8464 (CONDITIONAL_JUMP)  ; LAB_004b8464
    PUSH 0x585d3a                       ; 004b8400 | = "heroFoundMeEvent"
    LEA ESI,[EBX + 0x1f5f8]             ; 004b8405
    PUSH ESI                            ; 004b840b
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b840c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b8411
    PUSH 0x585d4b                       ; 004b8414 | = "heroLeftMeEvent"
    LEA ESI,[EBX + 0x1f65c]             ; 004b8419
    PUSH ESI                            ; 004b841f
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b8420
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b8425
    PUSH 0x585d5b                       ; 004b8428 | = "heroCameBackEvent"
    LEA ESI,[EBX + 0x1f6c0]             ; 004b842d
    PUSH ESI                            ; 004b8433
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b8434
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b8439
    PUSH 0x585d6d                       ; 004b843c | = "goingToSitDownEvent"
    LEA ESI,[EBX + 0x1f788]             ; 004b8441
    PUSH ESI                            ; 004b8447
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b8448
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b844d
    PUSH 0x585d81                       ; 004b8450 | = "sitDownEvent"
    LEA ESI,[EBX + 0x1f7ec]             ; 004b8455
    PUSH ESI                            ; 004b845b
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b845c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b8461
    CMP dword ptr [0x005ba980],0x6      ; 004b8464 | INT_005ba980
        ;   Label: LAB_004b8464
    JL 0x004b8481                       ; 004b846b
        ;   XREF to: 004b8481 (CONDITIONAL_JUMP)  ; LAB_004b8481
    PUSH 0x585d8e                       ; 004b846d | = "noShadowsWhenSaved"
    LEA ESI,[EBX + 0x1f944]             ; 004b8472
    PUSH ESI                            ; 004b8478
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b8479
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b847e
    CMP dword ptr [0x005ba980],0x7      ; 004b8481 | INT_005ba980
        ;   Label: LAB_004b8481
    JL 0x004b849e                       ; 004b8488
        ;   XREF to: 004b849e (CONDITIONAL_JUMP)  ; LAB_004b849e
    PUSH 0x585da1                       ; 004b848a | = "getEatenEvent"
    LEA ESI,[EBX + 0x1f724]             ; 004b848f
    PUSH ESI                            ; 004b8495
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b8496
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b849b
    MOV ECX,dword ptr [0x005ba980]      ; 004b849e | INT_005ba980
        ;   Label: LAB_004b849e
    CMP ECX,0x8                         ; 004b84a4
    JL 0x004b84c2                       ; 004b84a7
        ;   XREF to: 004b84c2 (CONDITIONAL_JUMP)  ; LAB_004b84c2
    CMP ECX,0xc                         ; 004b84a9
    JGE 0x004b84c2                      ; 004b84ac
        ;   XREF to: 004b84c2 (CONDITIONAL_JUMP)  ; LAB_004b84c2
    PUSH 0x585daf                       ; 004b84ae | = "descriptiveName"
    LEA ESI,[EBX + 0x2440]              ; 004b84b3
    PUSH ESI                            ; 004b84b9
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040c7f0 ; 004b84ba
        ;   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040c7f0(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 004b84bf
    CMP dword ptr [0x005ba980],0x9      ; 004b84c2 | INT_005ba980
        ;   Label: LAB_004b84c2
    JL 0x004b84df                       ; 004b84c9
        ;   XREF to: 004b84df (CONDITIONAL_JUMP)  ; LAB_004b84df
    PUSH 0x585dbf                       ; 004b84cb | = "sitDownWayPoint"
    LEA ESI,[EBX + 0x1f92c]             ; 004b84d0
    PUSH ESI                            ; 004b84d6
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b84d7
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b84dc
    CMP dword ptr [0x005ba980],0xb      ; 004b84df | INT_005ba980
        ;   Label: LAB_004b84df
    JGE 0x004b8512                      ; 004b84e6
        ;   XREF to: 004b8512 (CONDITIONAL_JUMP)  ; LAB_004b8512
    POP ESI                             ; 004b84e8
    POP EBX                             ; 004b84e9
    RET                                 ; 004b84ea
    PUSH 0x585ce3                       ; 004b84eb | = "modelName"
        ;   Label: LAB_004b84eb
    LEA ESI,[EBX + 0x150]               ; 004b84f0
    PUSH ESI                            ; 004b84f6
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004b84f7
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b84fc
    PUSH 0x585ced                       ; 004b84ff | = "motion state"
    PUSH ESI                            ; 004b8504
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 004b8505
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004b850a
    JMP 0x004b837a                      ; 004b850d
        ;   XREF to: 004b837a (UNCONDITIONAL_JUMP)  ; LAB_004b837a
    PUSH 0x585dcf                       ; 004b8512 | = "damageSound"
        ;   Label: LAB_004b8512
    LEA ESI,[EBX + 0x1f850]             ; 004b8517
    PUSH ESI                            ; 004b851d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b851e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b8523
    PUSH 0x585ddb                       ; 004b8526 | = "dieSound"
    ADD EBX,0x1f8b4                     ; 004b852b
    PUSH EBX                            ; 004b8531
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b8532
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b8537
    POP ESI                             ; 004b853a
    POP EBX                             ; 004b853b
    RET                                 ; 004b853c

