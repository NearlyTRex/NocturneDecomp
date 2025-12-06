; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bride.cpp_CBride_load_FUN_00424560()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00616c45
;   TerminatedCString s_modelName_00616c4b
;   TerminatedCString s_guardDistance_00616c55
;   TerminatedCString s_state_00616c63
;   int g_CBrideClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424560
        ;   Label: core_bride.cpp_CBride_load_FUN_00424560
    MOV EBX,dword ptr [ESP + 0x8]       ; 00424561
    PUSH EBX                            ; 00424565
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00424566 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0066e648]      ; 0042456b | int g_CBrideClassVersion
    ADD ESP,0x4                         ; 00424571
    CMP EDX,0x2                         ; 00424574
    JL 0x004245bc                       ; 00424577 | LAB_004245bc
        ;   XREF to: 004245bc (CONDITIONAL_JUMP)
    PUSH 0x616c4b                       ; 00424579 | = "modelName" | s_modelName_00616c4b = modelName
        ;   Label: LAB_00424579
    LEA EAX,[EBX + 0x158]               ; 0042457e
    PUSH EAX                            ; 00424584
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 00424585 | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0066e648]      ; 0042458a | int g_CBrideClassVersion
    ADD ESP,0x8                         ; 00424590
    CMP ECX,0x2                         ; 00424593
    JL 0x004245b1                       ; 00424596 | LAB_004245b1
        ;   XREF to: 004245b1 (CONDITIONAL_JUMP)
    CMP ECX,0x4                         ; 00424598
    JGE 0x004245b1                      ; 0042459b | LAB_004245b1
        ;   XREF to: 004245b1 (CONDITIONAL_JUMP)
    PUSH 0x616c55                       ; 0042459d | = "guardDistance" | s_guardDistance_00616c55 = guardDistance
    LEA EAX,[EBX + 0xbe34]              ; 004245a2
    PUSH EAX                            ; 004245a8
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004245a9 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004245ae
    CMP dword ptr [0x0066e648],0x3      ; 004245b1 | int g_CBrideClassVersion
        ;   Label: LAB_004245b1
    JGE 0x004245d2                      ; 004245b8 | LAB_004245d2
        ;   XREF to: 004245d2 (CONDITIONAL_JUMP)
    POP EBX                             ; 004245ba
    RET                                 ; 004245bb
    PUSH 0x616c45                       ; 004245bc | = "speed" | s_speed_00616c45 = speed
        ;   Label: LAB_004245bc
    LEA EAX,[EBX + 0xbe24]              ; 004245c1
    PUSH EAX                            ; 004245c7
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004245c8 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004245cd
    JMP 0x00424579                      ; 004245d0 | LAB_00424579
        ;   XREF to: 00424579 (UNCONDITIONAL_JUMP)
    PUSH 0x616c63                       ; 004245d2 | = "state" | s_state_00616c63 = state
        ;   Label: LAB_004245d2
    ADD EBX,0x158                       ; 004245d7
    PUSH EBX                            ; 004245dd
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 004245de | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004245e3
    POP EBX                             ; 004245e6
    RET                                 ; 004245e7

