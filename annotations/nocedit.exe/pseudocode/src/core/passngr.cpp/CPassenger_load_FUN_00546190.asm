; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_passngr.cpp_CPassenger_load_FUN_00546190()
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
;   undefined4 g_CPassengerClassVersion
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
    CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0 ; 00546197 | void core_npc.cpp_CNPC_serialize_FUN_00544ba0(CNPC * this_ptr)
        ;   XREF to: 00544ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054619c
    PUSH 0x63e7d8                       ; 0054619f | = "transformEvent" | s_transformEvent_0063e7d8 = transformEvent
    LEA ESI,[EBX + 0x1f708]             ; 005461a4
    PUSH ESI                            ; 005461aa
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005461ab | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005461b0
    PUSH 0x63e7e7                       ; 005461b3 | = "wolfModelName" | s_wolfModelName_0063e7e7 = wolfModelName
    LEA ESI,[EBX + 0x1f76c]             ; 005461b8
    PUSH ESI                            ; 005461be
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005461bf | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005461c4
    PUSH 0x63e7f5                       ; 005461c7 | = "morphTime" | s_morphTime_0063e7f5 = morphTime
    LEA ESI,[EBX + 0x20440]             ; 005461cc
    PUSH ESI                            ; 005461d2
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005461d3 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00680b98]      ; 005461d8 | undefined4 g_CPassengerClassVersion
    ADD ESP,0x8                         ; 005461de
    CMP EDX,0x2                         ; 005461e1
    JL 0x0054620d                       ; 005461e4 | LAB_0054620d
        ;   XREF to: 0054620d (CONDITIONAL_JUMP)
    CMP EDX,0x5                         ; 005461e6
    JGE 0x0054620d                      ; 005461e9 | LAB_0054620d
        ;   XREF to: 0054620d (CONDITIONAL_JUMP)
    PUSH 0x63e7ff                       ; 005461eb | = "modelName" | s_modelName_0063e7ff = modelName
    LEA ESI,[EBX + 0x158]               ; 005461f0
    PUSH ESI                            ; 005461f6
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 005461f7 | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005461fc
    PUSH 0x63e809                       ; 005461ff | = "motion state" | s_motion_state_0063e809 = motion state
    PUSH ESI                            ; 00546204
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 00546205 | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054620a
    CMP dword ptr [0x00680b98],0x3      ; 0054620d | undefined4 g_CPassengerClassVersion
        ;   Label: LAB_0054620d
    JL 0x0054622a                       ; 00546214 | LAB_0054622a
        ;   XREF to: 0054622a (CONDITIONAL_JUMP)
    PUSH 0x63e816                       ; 00546216 | = "wolfSize" | s_wolfSize_0063e816 = wolfSize
    LEA ESI,[EBX + 0x20444]             ; 0054621b
    PUSH ESI                            ; 00546221
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00546222 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00546227
    CMP dword ptr [0x00680b98],0x4      ; 0054622a | undefined4 g_CPassengerClassVersion
        ;   Label: LAB_0054622a
    JL 0x00546247                       ; 00546231 | LAB_00546247
        ;   XREF to: 00546247 (CONDITIONAL_JUMP)
    PUSH 0x63e81f                       ; 00546233 | = "nameOfWolf" | s_nameOfWolf_0063e81f = nameOfWolf
    LEA ESI,[EBX + 0x1f78c]             ; 00546238
    PUSH ESI                            ; 0054623e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054623f | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00546244
    CMP dword ptr [0x00680b98],0x6      ; 00546247 | undefined4 g_CPassengerClassVersion
        ;   Label: LAB_00546247
    JGE 0x00546253                      ; 0054624e | LAB_00546253
        ;   XREF to: 00546253 (CONDITIONAL_JUMP)
    POP ESI                             ; 00546250
    POP EBX                             ; 00546251
    RET                                 ; 00546252
    PUSH 0x63e82a                       ; 00546253 | = "transformWav" | s_transformWav_0063e82a = transformWav
        ;   Label: LAB_00546253
    ADD EBX,0x1f7ac                     ; 00546258
    PUSH EBX                            ; 0054625e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054625f | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00546264
    POP ESI                             ; 00546267
    POP EBX                             ; 00546268
    RET                                 ; 00546269

