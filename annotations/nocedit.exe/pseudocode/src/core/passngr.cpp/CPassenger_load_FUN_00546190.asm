; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_passngr_cpp_CPassenger_load_FUN_00546190(void)
;
;
; Referenced Globals:
;   TerminatedCString s_transformEvent_0063e7d8
;   TerminatedCString s_wolfModelName_0063e7e7
;   TerminatedCString s_morphTime_0063e7f5
;   TerminatedCString s_modelName_0063e7ff
;   TerminatedCString s_motion_state_0063e809
;   TerminatedCString s_wolfSize_0063e816
;   TerminatedCString s_nameOfWolf_0063e81f
;   TerminatedCString s_transformWav_0063e82a
;   int g_CPassengerClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_npc.cpp_CNPC_serialize_FUN_00544ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546190
        ;   Label: core_passngr.cpp_CPassenger_load_FUN_00546190
    PUSH ESI                            ; 00546191
    MOV EBX,dword ptr [ESP + 0xc]       ; 00546192
    PUSH EBX                            ; 00546196
    CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0 ; 00546197
        ;   XREF to: 00544ba0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_serialize_FUN_00544ba0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 0054619c
    PUSH 0x63e7d8                       ; 0054619f | = "transformEvent"
    LEA ESI,[EBX + 0x1f708]             ; 005461a4
    PUSH ESI                            ; 005461aa
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005461ab
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005461b0
    PUSH 0x63e7e7                       ; 005461b3 | = "wolfModelName"
    LEA ESI,[EBX + 0x1f76c]             ; 005461b8
    PUSH ESI                            ; 005461be
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005461bf
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005461c4
    PUSH 0x63e7f5                       ; 005461c7 | = "morphTime"
    LEA ESI,[EBX + 0x20440]             ; 005461cc
    PUSH ESI                            ; 005461d2
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005461d3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00680b98]      ; 005461d8 | g_CPassengerClassVersion
    ADD ESP,0x8                         ; 005461de
    CMP EDX,0x2                         ; 005461e1
    JL 0x0054620d                       ; 005461e4
        ;   XREF to: 0054620d (CONDITIONAL_JUMP)  ; LAB_0054620d
    CMP EDX,0x5                         ; 005461e6
    JGE 0x0054620d                      ; 005461e9
        ;   XREF to: 0054620d (CONDITIONAL_JUMP)  ; LAB_0054620d
    PUSH 0x63e7ff                       ; 005461eb | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 005461f0
    PUSH ESI                            ; 005461f6
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 005461f7
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005461fc
    PUSH 0x63e809                       ; 005461ff | = "motion state"
    PUSH ESI                            ; 00546204
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 00546205
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0054620a
    CMP dword ptr [0x00680b98],0x3      ; 0054620d | g_CPassengerClassVersion
        ;   Label: LAB_0054620d
    JL 0x0054622a                       ; 00546214
        ;   XREF to: 0054622a (CONDITIONAL_JUMP)  ; LAB_0054622a
    PUSH 0x63e816                       ; 00546216 | = "wolfSize"
    LEA ESI,[EBX + 0x20444]             ; 0054621b
    PUSH ESI                            ; 00546221
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00546222
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546227
    CMP dword ptr [0x00680b98],0x4      ; 0054622a | g_CPassengerClassVersion
        ;   Label: LAB_0054622a
    JL 0x00546247                       ; 00546231
        ;   XREF to: 00546247 (CONDITIONAL_JUMP)  ; LAB_00546247
    PUSH 0x63e81f                       ; 00546233 | = "nameOfWolf"
    LEA ESI,[EBX + 0x1f78c]             ; 00546238
    PUSH ESI                            ; 0054623e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054623f
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00546244
    CMP dword ptr [0x00680b98],0x6      ; 00546247 | g_CPassengerClassVersion
        ;   Label: LAB_00546247
    JGE 0x00546253                      ; 0054624e
        ;   XREF to: 00546253 (CONDITIONAL_JUMP)  ; LAB_00546253
    POP ESI                             ; 00546250
    POP EBX                             ; 00546251
    RET                                 ; 00546252
    PUSH 0x63e82a                       ; 00546253 | = "transformWav"
        ;   Label: LAB_00546253
    ADD EBX,0x1f7ac                     ; 00546258
    PUSH EBX                            ; 0054625e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054625f
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00546264
    POP ESI                             ; 00546267
    POP EBX                             ; 00546268
    RET                                 ; 00546269

