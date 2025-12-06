; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ghoul.cpp_CGhoul_load_FUN_004e81c0()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0062ddfa
;   TerminatedCString s_modelName_0062de00
;   TerminatedCString s_guardDistance_0062de0a
;   TerminatedCString s_livesLeft_0062de18
;   TerminatedCString s_motion_state_0062de22
;   TerminatedCString s_partStatus_0062de2f
;   TerminatedCString s_spasmCount_0062de3a
;   TerminatedCString s_livesLeft_0062de45
;   TerminatedCString s_ariseTimer_0062de4f
;   int g_CGhoulClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializePartStatus_FUN_0040bae0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e81c0
        ;   Label: core_ghoul.cpp_CGhoul_load_FUN_004e81c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e81c1
    PUSH EBX                            ; 004e81c5
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 004e81c6 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067b92c]      ; 004e81cb | int g_CGhoulClassVersion
    ADD ESP,0x4                         ; 004e81d1
    CMP EDX,0x4                         ; 004e81d4
    JL 0x004e825a                       ; 004e81d7 | LAB_004e825a
        ;   XREF to: 004e825a (CONDITIONAL_JUMP)
    PUSH 0x62de00                       ; 004e81dd | = "modelName" | s_modelName_0062de00 = modelName
        ;   Label: LAB_004e81dd
    LEA EAX,[EBX + 0x158]               ; 004e81e2
    PUSH EAX                            ; 004e81e8
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 004e81e9 | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0067b92c]      ; 004e81ee | int g_CGhoulClassVersion
    ADD ESP,0x8                         ; 004e81f4
    CMP ECX,0x2                         ; 004e81f7
    JL 0x004e8215                       ; 004e81fa | LAB_004e8215
        ;   XREF to: 004e8215 (CONDITIONAL_JUMP)
    CMP ECX,0x7                         ; 004e81fc
    JGE 0x004e8215                      ; 004e81ff | LAB_004e8215
        ;   XREF to: 004e8215 (CONDITIONAL_JUMP)
    PUSH 0x62de0a                       ; 004e8201 | = "guardDistance" | s_guardDistance_0062de0a = guardDistance
    LEA EAX,[EBX + 0xbe34]              ; 004e8206
    PUSH EAX                            ; 004e820c
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004e820d | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e8212
    CMP dword ptr [0x0067b92c],0x3      ; 004e8215 | int g_CGhoulClassVersion
        ;   Label: LAB_004e8215
    JL 0x004e8232                       ; 004e821c | LAB_004e8232
        ;   XREF to: 004e8232 (CONDITIONAL_JUMP)
    PUSH 0x62de18                       ; 004e821e | = "livesLeft" | s_livesLeft_0062de18 = livesLeft
    LEA EAX,[EBX + 0xbed8]              ; 004e8223
    PUSH EAX                            ; 004e8229
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004e822a | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e822f
    CMP dword ptr [0x0067b92c],0x5      ; 004e8232 | int g_CGhoulClassVersion
        ;   Label: LAB_004e8232
    JL 0x004e824f                       ; 004e8239 | LAB_004e824f
        ;   XREF to: 004e824f (CONDITIONAL_JUMP)
    PUSH 0x62de22                       ; 004e823b | = "motion state" | s_motion_state_0062de22 = motion state
    LEA EAX,[EBX + 0x158]               ; 004e8240
    PUSH EAX                            ; 004e8246
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 004e8247 | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e824c
    CMP dword ptr [0x0067b92c],0x6      ; 004e824f | int g_CGhoulClassVersion
        ;   Label: LAB_004e824f
    JGE 0x004e8273                      ; 004e8256 | LAB_004e8273
        ;   XREF to: 004e8273 (CONDITIONAL_JUMP)
    POP EBX                             ; 004e8258
    RET                                 ; 004e8259
    PUSH 0x62ddfa                       ; 004e825a | = "speed" | s_speed_0062ddfa = speed
        ;   Label: LAB_004e825a
    LEA EAX,[EBX + 0xbe24]              ; 004e825f
    PUSH EAX                            ; 004e8265
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004e8266 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e826b
    JMP 0x004e81dd                      ; 004e826e | LAB_004e81dd
        ;   XREF to: 004e81dd (UNCONDITIONAL_JUMP)
    PUSH 0x62de2f                       ; 004e8273 | = "partStatus" | s_partStatus_0062de2f = partStatus
        ;   Label: LAB_004e8273
    LEA EAX,[EBX + 0x158]               ; 004e8278
    PUSH EAX                            ; 004e827e
    CALL core_actor.cpp_serializePartStatus_FUN_0040bae0 ; 004e827f | void core_actor.cpp_serializePartStatus_FUN_0040bae0(void * part, char * property_name)
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e8284
    PUSH 0x62de3a                       ; 004e8287 | = "spasmCount" | s_spasmCount_0062de3a = spasmCount
    LEA EAX,[EBX + 0xbedc]              ; 004e828c
    PUSH EAX                            ; 004e8292
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004e8293 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e8298
    PUSH 0x62de45                       ; 004e829b | = "livesLeft" | s_livesLeft_0062de45 = livesLeft
    LEA EAX,[EBX + 0xbed8]              ; 004e82a0
    PUSH EAX                            ; 004e82a6
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004e82a7 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e82ac
    PUSH 0x62de4f                       ; 004e82af | = "ariseTimer" | s_ariseTimer_0062de4f = ariseTimer
    ADD EBX,0xbec8                      ; 004e82b4
    PUSH EBX                            ; 004e82ba
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004e82bb | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e82c0
    POP EBX                             ; 004e82c3
    RET                                 ; 004e82c4

