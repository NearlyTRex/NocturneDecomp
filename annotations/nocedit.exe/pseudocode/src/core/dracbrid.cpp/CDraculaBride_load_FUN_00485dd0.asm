; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_speed_00621b1e
;   TerminatedCString s_modelName_00621b24
;   TerminatedCString s_guardDistance_00621b2e
;   TerminatedCString s_riseEvent_00621b3c
;   TerminatedCString s_initialState_00621b46
;   TerminatedCString s_vincoffin_00621b53
;   TerminatedCString s_incoffin_00621b5d
;   TerminatedCString s_motionState_00621b66
;   TerminatedCString s_clothCount_00621b72
;   TerminatedCString s_freakyVoiceNumber_00621b7d
;   TerminatedCString s_exploded_00621b8f
;   TerminatedCString s_partCount_00621b98
;   TerminatedCString s_fadeTimer_00621ba2
;   TerminatedCString s_partList_00621bac
;   TerminatedCString s_mistState_00621bb5
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485dd0
        ;   Label: core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0
    PUSH ESI                            ; 00485dd1
    PUSH EDI                            ; 00485dd2
    PUSH EBP                            ; 00485dd3
    SUB ESP,0x4                         ; 00485dd4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00485dd7
    PUSH EDI                            ; 00485ddb
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00485ddc
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    MOV EDX,dword ptr [0x006703b0]      ; 00485de1 | g_CDraculaBrideClassVersion
    ADD ESP,0x4                         ; 00485de7
    CMP EDX,0x2                         ; 00485dea
    JL 0x00485fb1                       ; 00485ded
        ;   XREF to: 00485fb1 (CONDITIONAL_JUMP)  ; LAB_00485fb1
    PUSH 0x621b24                       ; 00485df3 | = "modelName"
        ;   Label: LAB_00485df3
    LEA EAX,[EDI + 0x158]               ; 00485df8
    PUSH EAX                            ; 00485dfe
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 00485dff
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x006703b0]      ; 00485e04 | g_CDraculaBrideClassVersion
    ADD ESP,0x8                         ; 00485e0a
    CMP ECX,0x2                         ; 00485e0d
    JL 0x00485e2b                       ; 00485e10
        ;   XREF to: 00485e2b (CONDITIONAL_JUMP)  ; LAB_00485e2b
    CMP ECX,0x6                         ; 00485e12
    JGE 0x00485e2b                      ; 00485e15
        ;   XREF to: 00485e2b (CONDITIONAL_JUMP)  ; LAB_00485e2b
    PUSH 0x621b2e                       ; 00485e17 | = "guardDistance"
    LEA EAX,[EDI + 0xbe34]              ; 00485e1c
    PUSH EAX                            ; 00485e22
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00485e23
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485e28
    CMP dword ptr [0x006703b0],0x3      ; 00485e2b | g_CDraculaBrideClassVersion
        ;   Label: LAB_00485e2b
    JL 0x00485e91                       ; 00485e32
        ;   XREF to: 00485e91 (CONDITIONAL_JUMP)  ; LAB_00485e91
    PUSH 0x621b3c                       ; 00485e34 | = "riseEvent"
    LEA EAX,[EDI + 0xbee0]              ; 00485e39
    PUSH EAX                            ; 00485e3f
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00485e40
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    MOV EBP,dword ptr [0x006703b0]      ; 00485e45 | g_CDraculaBrideClassVersion
    ADD ESP,0x8                         ; 00485e4b
    CMP EBP,0x4                         ; 00485e4e
    JGE 0x00485e91                      ; 00485e51
        ;   XREF to: 00485e91 (CONDITIONAL_JUMP)  ; LAB_00485e91
    PUSH 0x621b46                       ; 00485e53 | = "initialState"
    LEA EAX,[ESP + 0x4]                 ; 00485e58
    PUSH EAX                            ; 00485e5c
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00485e5d
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EAX,[0x00822038]                ; 00485e62 | g_ActorReadingMode
    ADD ESP,0x8                         ; 00485e67
    CMP EAX,0x1                         ; 00485e6a
    JNZ 0x00485e91                      ; 00485e6d
        ;   XREF to: 00485e91 (CONDITIONAL_JUMP)  ; LAB_00485e91
    MOV EDX,dword ptr [ESP]             ; 00485e6f
    LEA EAX,[EDI + 0x158]               ; 00485e72
    CMP EDX,0x1                         ; 00485e78
    JNZ 0x00485fca                      ; 00485e7b
        ;   XREF to: 00485fca (CONDITIONAL_JUMP)  ; LAB_00485fca
    PUSH 0x0                            ; 00485e81
    PUSH 0x621b53                       ; 00485e83 | = "vincoffin"
    PUSH EAX                            ; 00485e88
        ;   Label: LAB_00485e88
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 00485e89
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00485e8e
    CMP dword ptr [0x006703b0],0x4      ; 00485e91 | g_CDraculaBrideClassVersion
        ;   Label: LAB_00485e91
    JL 0x00485eae                       ; 00485e98
        ;   XREF to: 00485eae (CONDITIONAL_JUMP)  ; LAB_00485eae
    PUSH 0x621b66                       ; 00485e9a | = "motionState"
    LEA EAX,[EDI + 0x158]               ; 00485e9f
    PUSH EAX                            ; 00485ea5
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 00485ea6
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00485eab
    CMP dword ptr [0x006703b0],0x4      ; 00485eae | g_CDraculaBrideClassVersion
        ;   Label: LAB_00485eae
    JNZ 0x00485f00                      ; 00485eb5
        ;   XREF to: 00485f00 (CONDITIONAL_JUMP)  ; LAB_00485f00
    PUSH 0x621b72                       ; 00485eb7 | = "clothCount"
    LEA EAX,[EDI + 0x2a94]              ; 00485ebc
    PUSH EAX                            ; 00485ec2
    XOR EBX,EBX                         ; 00485ec3
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00485ec5
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [EDI + 0x2a94]    ; 00485eca
    ADD ESP,0x8                         ; 00485ed0
    TEST ESI,ESI                        ; 00485ed3
    JLE 0x00485f00                      ; 00485ed5
        ;   XREF to: 00485f00 (CONDITIONAL_JUMP)  ; LAB_00485f00
    LEA ESI,[EDI + 0x2a98]              ; 00485ed7
    PUSH 0x0                            ; 00485edd
        ;   Label: LAB_00485edd
    PUSH ESI                            ; 00485edf
    INC EBX                             ; 00485ee0
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00485ee1
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00485ee6
    MOV EBP,dword ptr [EDI + 0x2a94]    ; 00485ee9
    ADD ESI,0x28                        ; 00485eef
    CMP EBX,EBP                         ; 00485ef2
    JL 0x00485edd                       ; 00485ef4
        ;   XREF to: 00485edd (CONDITIONAL_JUMP)  ; LAB_00485edd
    LEA EAX,[EAX]                       ; 00485ef6
    LEA EDX,[EDX]                       ; 00485efc
    CMP dword ptr [0x006703b0],0x7      ; 00485f00 | g_CDraculaBrideClassVersion
        ;   Label: LAB_00485f00
    JL 0x00485f1d                       ; 00485f07
        ;   XREF to: 00485f1d (CONDITIONAL_JUMP)  ; LAB_00485f1d
    PUSH 0x621b7d                       ; 00485f09 | = "freakyVoiceNumber"
    LEA EAX,[EDI + 0xbf44]              ; 00485f0e
    PUSH EAX                            ; 00485f14
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00485f15
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485f1a
    CMP dword ptr [0x006703b0],0x8      ; 00485f1d | g_CDraculaBrideClassVersion
        ;   Label: LAB_00485f1d
    JL 0x00485fa0                       ; 00485f24
        ;   XREF to: 00485fa0 (CONDITIONAL_JUMP)  ; LAB_00485fa0
    PUSH 0x621b8f                       ; 00485f2a | = "exploded"
    LEA EAX,[EDI + 0xbfe4]              ; 00485f2f
    PUSH EAX                            ; 00485f35
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00485f36
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485f3b
    PUSH 0x621b98                       ; 00485f3e | = "partCount"
    LEA EAX,[EDI + 0xbf68]              ; 00485f43
    PUSH EAX                            ; 00485f49
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00485f4a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485f4f
    PUSH 0x621ba2                       ; 00485f52 | = "fadeTimer"
    LEA EAX,[EDI + 0xbfe8]              ; 00485f57
    PUSH EAX                            ; 00485f5d
    XOR EBX,EBX                         ; 00485f5e
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00485f60
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV ECX,dword ptr [EDI + 0xbf68]    ; 00485f65
    ADD ESP,0x8                         ; 00485f6b
    TEST ECX,ECX                        ; 00485f6e
    JLE 0x00485fa0                      ; 00485f70
        ;   XREF to: 00485fa0 (CONDITIONAL_JUMP)  ; LAB_00485fa0
    LEA ESI,[EDI + 0xbf6c]              ; 00485f72
    PUSH 0x621bac                       ; 00485f78 | = "partList"
        ;   Label: LAB_00485f78
    PUSH ESI                            ; 00485f7d
    INC EBX                             ; 00485f7e
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 00485f7f
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485f84
    MOV EBP,dword ptr [EDI + 0xbf68]    ; 00485f87
    ADD ESI,0x4                         ; 00485f8d
    CMP EBX,EBP                         ; 00485f90
    JL 0x00485f78                       ; 00485f92
        ;   XREF to: 00485f78 (CONDITIONAL_JUMP)  ; LAB_00485f78
    LEA EAX,[EAX]                       ; 00485f94
    LEA EDX,[EDX]                       ; 00485f9a
    CMP dword ptr [0x006703b0],0x9      ; 00485fa0 | g_CDraculaBrideClassVersion
        ;   Label: LAB_00485fa0
    JGE 0x00485fd6                      ; 00485fa7
        ;   XREF to: 00485fd6 (CONDITIONAL_JUMP)  ; LAB_00485fd6
    ADD ESP,0x4                         ; 00485fa9
    POP EBP                             ; 00485fac
    POP EDI                             ; 00485fad
    POP ESI                             ; 00485fae
    POP EBX                             ; 00485faf
    RET                                 ; 00485fb0
    PUSH 0x621b1e                       ; 00485fb1 | = "speed"
        ;   Label: LAB_00485fb1
    LEA EAX,[EDI + 0xbe24]              ; 00485fb6
    PUSH EAX                            ; 00485fbc
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00485fbd
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485fc2
    JMP 0x00485df3                      ; 00485fc5
        ;   XREF to: 00485df3 (UNCONDITIONAL_JUMP)  ; LAB_00485df3
    PUSH 0x0                            ; 00485fca
        ;   Label: LAB_00485fca
    PUSH 0x621b5d                       ; 00485fcc | = "incoffin"
    JMP 0x00485e88                      ; 00485fd1
        ;   XREF to: 00485e88 (UNCONDITIONAL_JUMP)  ; LAB_00485e88
    PUSH 0x621bb5                       ; 00485fd6 | = "mistState"
        ;   Label: LAB_00485fd6
    LEA EAX,[EDI + 0xbf48]              ; 00485fdb
    PUSH EAX                            ; 00485fe1
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00485fe2
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485fe7
    PUSH 0x621bbf                       ; 00485fea | = "vanishTimer"
    LEA EAX,[EDI + 0xbf4c]              ; 00485fef
    PUSH EAX                            ; 00485ff5
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00485ff6
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485ffb
    PUSH 0x621bcb                       ; 00485ffe | = "newPos"
    ADD EDI,0xbf58                      ; 00486003
    PUSH EDI                            ; 00486009
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0048600a
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048600f
    ADD ESP,0x4                         ; 00486012
    POP EBP                             ; 00486015
    POP EDI                             ; 00486016
    POP ESI                             ; 00486017
    POP EBX                             ; 00486018
    RET                                 ; 00486019

