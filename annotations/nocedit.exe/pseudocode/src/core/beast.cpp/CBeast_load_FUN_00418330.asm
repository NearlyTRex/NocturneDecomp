; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_beast.cpp_CBeast_load_FUN_00418330()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00615a78
;   TerminatedCString s_modelName_00615a7e
;   TerminatedCString s_motion_state_00615a88
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418330
        ;   Label: core_beast.cpp_CBeast_load_FUN_00418330
    PUSH ESI                            ; 00418331
    MOV ESI,dword ptr [ESP + 0xc]       ; 00418332
    PUSH ESI                            ; 00418336
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00418337 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041833c
    PUSH 0x615a78                       ; 0041833f | = "speed" | s_speed_00615a78 = speed
    LEA EBX,[ESI + 0xbe24]              ; 00418344
    PUSH EBX                            ; 0041834a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041834b | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418350
    PUSH 0x615a7e                       ; 00418353 | = "modelName" | s_modelName_00615a7e = modelName
    LEA EBX,[ESI + 0x158]               ; 00418358
    PUSH EBX                            ; 0041835e
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 0041835f | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418364
    PUSH 0x615a88                       ; 00418367 | = "motion state" | s_motion_state_00615a88 = motion state
    PUSH EBX                            ; 0041836c
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 0041836d | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418372
    POP ESI                             ; 00418375
    POP EBX                             ; 00418376
    RET                                 ; 00418377

