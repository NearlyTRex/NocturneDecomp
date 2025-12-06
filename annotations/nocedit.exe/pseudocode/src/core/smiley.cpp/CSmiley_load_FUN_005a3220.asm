; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_smiley.cpp_CSmiley_load_FUN_005a3220()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0064f326
;   TerminatedCString s_modelName_0064f32c
;   TerminatedCString s_guardDistance_0064f336
;   TerminatedCString s_motion_state_0064f344
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3220
        ;   Label: core_smiley.cpp_CSmiley_load_FUN_005a3220
    PUSH ESI                            ; 005a3221
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a3222
    PUSH ESI                            ; 005a3226
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 005a3227 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a322c
    PUSH 0x64f326                       ; 005a322f | = "speed" | s_speed_0064f326 = speed
    LEA EBX,[ESI + 0xbe24]              ; 005a3234
    PUSH EBX                            ; 005a323a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005a323b | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a3240
    PUSH 0x64f32c                       ; 005a3243 | = "modelName" | s_modelName_0064f32c = modelName
    LEA EBX,[ESI + 0x158]               ; 005a3248
    PUSH EBX                            ; 005a324e
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 005a324f | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a3254
    PUSH 0x64f336                       ; 005a3257 | = "guardDistance" | s_guardDistance_0064f336 = guardDistance
    ADD ESI,0xbec0                      ; 005a325c
    PUSH ESI                            ; 005a3262
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005a3263 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a3268
    PUSH 0x64f344                       ; 005a326b | = "motion state" | s_motion_state_0064f344 = motion state
    PUSH EBX                            ; 005a3270
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 005a3271 | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a3276
    POP ESI                             ; 005a3279
    POP EBX                             ; 005a327a
    RET                                 ; 005a327b

