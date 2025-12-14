; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0(CTVBat * this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_homePos_006568ae
;   TerminatedCString s_modelName_006568b6
;   TerminatedCString s_speed_006568c0
;   TerminatedCString s_maxDistance_006568c6
;   TerminatedCString s_maxHeight_006568d2
;   TerminatedCString s_rotSpeed_006568dc
;   TerminatedCString s_moveSpeed_006568e5
;   TerminatedCString s_followOrders_006568ef
;   TerminatedCString s_state_006568fc
;   TerminatedCString s_periodicSoundTimerMin_00656902
;   TerminatedCString s_periodicSoundTimerMax_00656918
;   int g_CTVBatClassVersion = 0x5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e40c0
        ;   Label: core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e40c1
    CMP dword ptr [0x00684450],0x3      ; 005e40c5 | g_CTVBatClassVersion
    JL 0x005e41ae                       ; 005e40cc
        ;   XREF to: 005e41ae (CONDITIONAL_JUMP)  ; LAB_005e41ae
    PUSH EBX                            ; 005e40d2
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 005e40d3
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005e40d8
        ;   Label: LAB_005e40d8
    PUSH 0x6568ae                       ; 005e40db | = "homePos"
    LEA EAX,[EBX + 0xc044]              ; 005e40e0
    PUSH EAX                            ; 005e40e6
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 005e40e7
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e40ec
    PUSH 0x6568b6                       ; 005e40ef | = "modelName"
    LEA EAX,[EBX + 0xbec0]              ; 005e40f4
    PUSH EAX                            ; 005e40fa
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 005e40fb
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x00684450]      ; 005e4100 | g_CTVBatClassVersion
    ADD ESP,0x8                         ; 005e4106
    CMP ECX,0x2                         ; 005e4109
    JL 0x005e4186                       ; 005e410c
        ;   XREF to: 005e4186 (CONDITIONAL_JUMP)  ; LAB_005e4186
    PUSH 0x6568c0                       ; 005e410e | = "speed"
    LEA EAX,[EBX + 0xc03c]              ; 005e4113
    PUSH EAX                            ; 005e4119
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e411a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e411f
    PUSH 0x6568c6                       ; 005e4122 | = "maxDistance"
    LEA EAX,[EBX + 0xc050]              ; 005e4127
    PUSH EAX                            ; 005e412d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e412e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e4133
    PUSH 0x6568d2                       ; 005e4136 | = "maxHeight"
    LEA EAX,[EBX + 0xc054]              ; 005e413b
    PUSH EAX                            ; 005e4141
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e4142
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e4147
    PUSH 0x6568dc                       ; 005e414a | = "rotSpeed"
    LEA EAX,[EBX + 0xc058]              ; 005e414f
    PUSH EAX                            ; 005e4155
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e4156
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e415b
    PUSH 0x6568e5                       ; 005e415e | = "moveSpeed"
    LEA EAX,[EBX + 0xc05c]              ; 005e4163
    PUSH EAX                            ; 005e4169
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e416a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e416f
    PUSH 0x6568ef                       ; 005e4172 | = "followOrders"
    LEA EAX,[EBX + 0xc064]              ; 005e4177
    PUSH EAX                            ; 005e417d
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e417e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e4183
    CMP dword ptr [0x00684450],0x4      ; 005e4186 | g_CTVBatClassVersion
        ;   Label: LAB_005e4186
    JL 0x005e41b9                       ; 005e418d
        ;   XREF to: 005e41b9 (CONDITIONAL_JUMP)  ; LAB_005e41b9
    PUSH 0x6568fc                       ; 005e418f | = "state"
    LEA EAX,[EBX + 0xc078]              ; 005e4194
    PUSH EAX                            ; 005e419a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e419b
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e41a0
    CMP dword ptr [0x00684450],0x5      ; 005e41a3 | g_CTVBatClassVersion
    JGE 0x005e41ce                      ; 005e41aa
        ;   XREF to: 005e41ce (CONDITIONAL_JUMP)  ; LAB_005e41ce
    POP EBX                             ; 005e41ac
    RET                                 ; 005e41ad
    PUSH EBX                            ; 005e41ae
        ;   Label: LAB_005e41ae
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005e41af
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    JMP 0x005e40d8                      ; 005e41b4
        ;   XREF to: 005e40d8 (UNCONDITIONAL_JUMP)  ; LAB_005e40d8
    MOV dword ptr [EBX + 0xc078],0x0    ; 005e41b9
        ;   Label: LAB_005e41b9
    CMP dword ptr [0x00684450],0x5      ; 005e41c3 | g_CTVBatClassVersion
    JGE 0x005e41ce                      ; 005e41ca
        ;   XREF to: 005e41ce (CONDITIONAL_JUMP)  ; LAB_005e41ce
    POP EBX                             ; 005e41cc
    RET                                 ; 005e41cd
    PUSH 0x0                            ; 005e41ce
        ;   Label: LAB_005e41ce
    LEA EAX,[EBX + 0xc07c]              ; 005e41d0
    PUSH EAX                            ; 005e41d6
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e41d7
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005e41dc
    PUSH 0x656902                       ; 005e41df | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0xc0e0]              ; 005e41e4
    PUSH EAX                            ; 005e41ea
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e41eb
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e41f0
    PUSH 0x656918                       ; 005e41f3 | = "periodicSoundTimerMax"
    ADD EBX,0xc0e4                      ; 005e41f8
    PUSH EBX                            ; 005e41fe
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e41ff
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e4204
    POP EBX                             ; 005e4207
    RET                                 ; 005e4208

