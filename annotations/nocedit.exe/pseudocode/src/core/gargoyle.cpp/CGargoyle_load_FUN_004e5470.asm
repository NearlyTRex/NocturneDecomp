; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gargoyle.cpp_CGargoyle_load_FUN_004e5470()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0062d9bf
;   TerminatedCString s_modelName_0062d9c5
;   TerminatedCString s_motion_state_0062d9cf
;   TerminatedCString s_stoneRed_0062d9dc
;   TerminatedCString s_stoneGreen_0062d9e5
;   TerminatedCString s_stoneBlue_0062d9f0
;   TerminatedCString s_homeBase_0062d9fa
;   int g_CGargoyleClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5470
        ;   Label: core_gargoyle.cpp_CGargoyle_load_FUN_004e5470
    PUSH ESI                            ; 004e5471
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e5472
    PUSH EBX                            ; 004e5476
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 004e5477 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e547c
    PUSH 0x62d9bf                       ; 004e547f | = "speed" | s_speed_0062d9bf = speed
    LEA ESI,[EBX + 0xbe24]              ; 004e5484
    PUSH ESI                            ; 004e548a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004e548b | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e5490
    PUSH 0x62d9c5                       ; 004e5493 | = "modelName" | s_modelName_0062d9c5 = modelName
    LEA ESI,[EBX + 0x158]               ; 004e5498
    PUSH ESI                            ; 004e549e
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 004e549f | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e54a4
    PUSH 0x62d9cf                       ; 004e54a7 | = "motion state" | s_motion_state_0062d9cf = motion state
    PUSH ESI                            ; 004e54ac
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 004e54ad | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067b900]      ; 004e54b2 | int g_CGargoyleClassVersion
    ADD ESP,0x8                         ; 004e54b8
    CMP EDX,0x2                         ; 004e54bb
    JGE 0x004e54c3                      ; 004e54be | LAB_004e54c3
        ;   XREF to: 004e54c3 (CONDITIONAL_JUMP)
    POP ESI                             ; 004e54c0
    POP EBX                             ; 004e54c1
    RET                                 ; 004e54c2
    PUSH 0x62d9dc                       ; 004e54c3 | = "stoneRed" | s_stoneRed_0062d9dc = stoneRed
        ;   Label: LAB_004e54c3
    LEA ESI,[EBX + 0xbeec]              ; 004e54c8
    PUSH ESI                            ; 004e54ce
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004e54cf | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e54d4
    PUSH 0x62d9e5                       ; 004e54d7 | = "stoneGreen" | s_stoneGreen_0062d9e5 = stoneGreen
    LEA ESI,[EBX + 0xbef0]              ; 004e54dc
    PUSH ESI                            ; 004e54e2
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004e54e3 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e54e8
    PUSH 0x62d9f0                       ; 004e54eb | = "stoneBlue" | s_stoneBlue_0062d9f0 = stoneBlue
    LEA ESI,[EBX + 0xbef4]              ; 004e54f0
    PUSH ESI                            ; 004e54f6
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004e54f7 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e54fc
    PUSH 0x62d9fa                       ; 004e54ff | = "homeBase" | s_homeBase_0062d9fa = homeBase
    ADD EBX,0xbef8                      ; 004e5504
    PUSH EBX                            ; 004e550a
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 004e550b | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e5510
    POP ESI                             ; 004e5513
    POP EBX                             ; 004e5514
    RET                                 ; 004e5515

