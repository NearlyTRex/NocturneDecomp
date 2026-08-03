; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00544470(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005965a8
;   TerminatedCString s_guardDistance_005965b2
;   TerminatedCString s_motion_state_005965c0
;   TerminatedCString s_partStatus_005965cd
;   TerminatedCString s_graveActor_005965d8
;   int INT_005c10b0 = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544470
        ;   Label: core_tentacle.cpp_CTentacle_archive_FUN_00544470
    PUSH ESI                            ; 00544471
    MOV EBX,dword ptr [ESP + 0xc]       ; 00544472
    PUSH EBX                            ; 00544476
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00544477
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054447c
    PUSH 0x5965a8                       ; 0054447f | = "modelName"
    LEA ESI,[EBX + 0x150]               ; 00544484
    PUSH ESI                            ; 0054448a
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0054448b
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x005c10b0]      ; 00544490 | INT_005c10b0
    ADD ESP,0x8                         ; 00544496
    CMP EDX,0x2                         ; 00544499
    JL 0x005444d7                       ; 0054449c
        ;   XREF to: 005444d7 (CONDITIONAL_JUMP)  ; LAB_005444d7
    PUSH 0x5965c0                       ; 0054449e | = "motion state"
        ;   Label: LAB_0054449e
    LEA ESI,[EBX + 0x150]               ; 005444a3
    PUSH ESI                            ; 005444a9
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 005444aa
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005444af
    PUSH 0x5965cd                       ; 005444b2 | = "partStatus"
    PUSH ESI                            ; 005444b7
    CALL core_actor.cpp_archivePartStatus_FUN_0040cbf0 ; 005444b8
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005444bd
    PUSH 0x5965d8                       ; 005444c0 | = "graveActor"
    ADD EBX,0xbd2c                      ; 005444c5
    PUSH EBX                            ; 005444cb
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 005444cc
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005444d1
    POP ESI                             ; 005444d4
    POP EBX                             ; 005444d5
    RET                                 ; 005444d6
    PUSH 0x5965b2                       ; 005444d7 | = "guardDistance"
        ;   Label: LAB_005444d7
    LEA ESI,[EBX + 0xbc9c]              ; 005444dc
    PUSH ESI                            ; 005444e2
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 005444e3
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005444e8
    JMP 0x0054449e                      ; 005444eb
        ;   XREF to: 0054449e (UNCONDITIONAL_JUMP)  ; LAB_0054449e

