; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_batman.cpp_CBatman_serialize_FUN_00417580(CBatman * this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_006158f5
;   TerminatedCString s_modelName_006158fb
;   TerminatedCString s_motion_state_00615905
;   TerminatedCString s_fallEvent_00615912
;   TerminatedCString s_mistState_0061591c
;   TerminatedCString s_vanishTimer_00615926
;   TerminatedCString s_newPos_00615932
;   undefined4 g_CBatmanClassVersion
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417580
        ;   Label: core_batman.cpp_CBatman_serialize_FUN_00417580
    PUSH ESI                            ; 00417581
    MOV EBX,dword ptr [ESP + 0xc]       ; 00417582
    PUSH EBX                            ; 00417586
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00417587 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041758c
    PUSH 0x6158f5                       ; 0041758f | = "speed" | s_speed_006158f5 = speed
    LEA ESI,[EBX + 0xbe24]              ; 00417594
    PUSH ESI                            ; 0041759a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041759b | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004175a0
    PUSH 0x6158fb                       ; 004175a3 | = "modelName" | s_modelName_006158fb = modelName
    LEA ESI,[EBX + 0x158]               ; 004175a8
    PUSH ESI                            ; 004175ae
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 004175af | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004175b4
    PUSH 0x615905                       ; 004175b7 | = "motion state" | s_motion_state_00615905 = motion state
    PUSH ESI                            ; 004175bc
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 004175bd | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0066e4dc]      ; 004175c2 | undefined4 g_CBatmanClassVersion
    ADD ESP,0x8                         ; 004175c8
    CMP EDX,0x2                         ; 004175cb
    JGE 0x004175dc                      ; 004175ce | LAB_004175dc
        ;   XREF to: 004175dc (CONDITIONAL_JUMP)
    CMP dword ptr [0x0066e4dc],0x3      ; 004175d0 | undefined4 g_CBatmanClassVersion
    JGE 0x004175fc                      ; 004175d7 | LAB_004175fc
        ;   XREF to: 004175fc (CONDITIONAL_JUMP)
    POP ESI                             ; 004175d9
    POP EBX                             ; 004175da
    RET                                 ; 004175db
    PUSH 0x615912                       ; 004175dc | = "fallEvent" | s_fallEvent_00615912 = fallEvent
        ;   Label: LAB_004175dc
    LEA ESI,[EBX + 0xbebc]              ; 004175e1
    PUSH ESI                            ; 004175e7
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004175e8 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004175ed
    CMP dword ptr [0x0066e4dc],0x3      ; 004175f0 | undefined4 g_CBatmanClassVersion
    JGE 0x004175fc                      ; 004175f7 | LAB_004175fc
        ;   XREF to: 004175fc (CONDITIONAL_JUMP)
    POP ESI                             ; 004175f9
    POP EBX                             ; 004175fa
    RET                                 ; 004175fb
    PUSH 0x61591c                       ; 004175fc | = "mistState" | s_mistState_0061591c = mistState
        ;   Label: LAB_004175fc
    LEA ESI,[EBX + 0xbf58]              ; 00417601
    PUSH ESI                            ; 00417607
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00417608 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041760d
    PUSH 0x615926                       ; 00417610 | = "vanishTimer" | s_vanishTimer_00615926 = vanishTimer
    LEA ESI,[EBX + 0xbf5c]              ; 00417615
    PUSH ESI                            ; 0041761b
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041761c | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417621
    PUSH 0x615932                       ; 00417624 | = "newPos" | s_newPos_00615932 = newPos
    ADD EBX,0xbf60                      ; 00417629
    PUSH EBX                            ; 0041762f
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 00417630 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417635
    POP ESI                             ; 00417638
    POP EBX                             ; 00417639
    RET                                 ; 0041763a

