; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_archive_FUN_00527230(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_0063992e
;   TerminatedCString s_modelName_00639934
;   TerminatedCString s_guardDistance_0063993e
;   TerminatedCString s_motion_state_0063994c
;   TerminatedCString s_clothList_00639959
;   TerminatedCString s_postMode_00639963
;   TerminatedCString s_ourPost_0063996c
;   TerminatedCString s_vehicle_00639974
;   TerminatedCString s_sideOfCar_0063997c
;   TerminatedCString s_holdPosFlag_00639986
;   TerminatedCString s_holdPosCond_00639992
;   int g_CMobsterClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveClothList_FUN_0040be60
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527230
        ;   Label: core_mobster.cpp_CMobster_archive_FUN_00527230
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527231
    PUSH EBX                            ; 00527235
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a9660 ; 00527236
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0052723b
    PUSH 0x63992e                       ; 0052723e | = "speed"
    LEA EAX,[EBX + 0xbe24]              ; 00527243
    PUSH EAX                            ; 00527249
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0052724a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0052724f
    PUSH 0x639934                       ; 00527252 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00527257
    PUSH EAX                            ; 0052725d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970 ; 0052725e
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067d6e4]      ; 00527263 | g_CMobsterClassVersion
    ADD ESP,0x8                         ; 00527269
    CMP EDX,0x4                         ; 0052726c
    JL 0x00527315                       ; 0052726f
        ;   XREF to: 00527315 (CONDITIONAL_JUMP)  ; LAB_00527315
    PUSH 0x63994c                       ; 00527275 | = "motion state"
        ;   Label: LAB_00527275
    LEA EAX,[EBX + 0x158]               ; 0052727a
    PUSH EAX                            ; 00527280
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 00527281
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    MOV ECX,dword ptr [0x0067d6e4]      ; 00527286 | g_CMobsterClassVersion
    ADD ESP,0x8                         ; 0052728c
    CMP ECX,0x2                         ; 0052728f
    JNZ 0x005272a8                      ; 00527292
        ;   XREF to: 005272a8 (CONDITIONAL_JUMP)  ; LAB_005272a8
    PUSH 0x639959                       ; 00527294 | = "clothList"
    LEA EAX,[EBX + 0x2a94]              ; 00527299
    PUSH EAX                            ; 0052729f
    CALL core_actor.cpp_archiveClothList_FUN_0040be60 ; 005272a0
        ;   XREF to: 0040be60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040be60(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 005272a5
    CMP dword ptr [0x0067d6e4],0x5      ; 005272a8 | g_CMobsterClassVersion
        ;   Label: LAB_005272a8
    JL 0x005272d9                       ; 005272af
        ;   XREF to: 005272d9 (CONDITIONAL_JUMP)  ; LAB_005272d9
    PUSH 0x639963                       ; 005272b1 | = "postMode"
    LEA EAX,[EBX + 0xbed8]              ; 005272b6
    PUSH EAX                            ; 005272bc
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005272bd
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005272c2
    PUSH 0x63996c                       ; 005272c5 | = "ourPost"
    LEA EAX,[EBX + 0xbedc]              ; 005272ca
    PUSH EAX                            ; 005272d0
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005272d1
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005272d6
    CMP dword ptr [0x0067d6e4],0x6      ; 005272d9 | g_CMobsterClassVersion
        ;   Label: LAB_005272d9
    JL 0x0052730a                       ; 005272e0
        ;   XREF to: 0052730a (CONDITIONAL_JUMP)  ; LAB_0052730a
    PUSH 0x639974                       ; 005272e2 | = "vehicle"
    LEA EAX,[EBX + 0xbee0]              ; 005272e7
    PUSH EAX                            ; 005272ed
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005272ee
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005272f3
    PUSH 0x63997c                       ; 005272f6 | = "sideOfCar"
    LEA EAX,[EBX + 0xbee4]              ; 005272fb
    PUSH EAX                            ; 00527301
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00527302
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00527307
    CMP dword ptr [0x0067d6e4],0x7      ; 0052730a | g_CMobsterClassVersion
        ;   Label: LAB_0052730a
    JGE 0x0052732e                      ; 00527311
        ;   XREF to: 0052732e (CONDITIONAL_JUMP)  ; LAB_0052732e
    POP EBX                             ; 00527313
    RET                                 ; 00527314
    PUSH 0x63993e                       ; 00527315 | = "guardDistance"
        ;   Label: LAB_00527315
    LEA EAX,[EBX + 0xbe34]              ; 0052731a
    PUSH EAX                            ; 00527320
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 00527321
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00527326
    JMP 0x00527275                      ; 00527329
        ;   XREF to: 00527275 (UNCONDITIONAL_JUMP)  ; LAB_00527275
    PUSH 0x639986                       ; 0052732e | = "holdPosFlag"
        ;   Label: LAB_0052732e
    LEA EAX,[EBX + 0xbee8]              ; 00527333
    PUSH EAX                            ; 00527339
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0052733a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0052733f
    PUSH 0x639992                       ; 00527342 | = "holdPosCond"
    ADD EBX,0xbeec                      ; 00527347
    PUSH EBX                            ; 0052734d
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0052734e
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00527353
    POP EBX                             ; 00527356
    RET                                 ; 00527357

