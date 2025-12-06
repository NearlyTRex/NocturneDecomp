; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_emitter.cpp_CEmitter_load_FUN_004a8b30()
;
;
; Referenced Globals:
;   TerminatedCString s_emitterType_006240d2
;   TerminatedCString s_emitterSize_006240de
;   TerminatedCString s_eventOn_006240ea
;   TerminatedCString s_eventOff_006240f2
;   TerminatedCString s_emitterState_006240fb
;   TerminatedCString s_laserR_00624108
;   TerminatedCString s_laserG_0062410f
;   TerminatedCString s_laserB_00624116
;   TerminatedCString s_laserType_0062411d
;   TerminatedCString s_maxEmitTime_00624127
;   TerminatedCString s_emitPeriod_00624133
;   TerminatedCString s_modelName_0062413e
;   TerminatedCString s_rockSpeed_00624148
;   TerminatedCString s_periodicFlag_00624152
;   TerminatedCString s_maxWaitTime_0062415f
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8b30
        ;   Label: core_emitter.cpp_CEmitter_load_FUN_004a8b30
    PUSH ESI                            ; 004a8b31
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a8b32
    PUSH EBX                            ; 004a8b36
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004a8b37 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a8b3c
    PUSH 0x6240d2                       ; 004a8b3f | = "emitterType" | s_emitterType_006240d2 = emitterType
    LEA EAX,[EBX + 0x158]               ; 004a8b44
    PUSH EAX                            ; 004a8b4a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8b4b | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8b50
    PUSH 0x6240de                       ; 004a8b53 | = "emitterSize" | s_emitterSize_006240de = emitterSize
    LEA EAX,[EBX + 0x15c]               ; 004a8b58
    PUSH EAX                            ; 004a8b5e
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 004a8b5f | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8b64
    PUSH 0x6240ea                       ; 004a8b67 | = "eventOn" | s_eventOn_006240ea = eventOn
    LEA EAX,[EBX + 0x16c]               ; 004a8b6c
    PUSH EAX                            ; 004a8b72
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004a8b73 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8b78
    PUSH 0x6240f2                       ; 004a8b7b | = "eventOff" | s_eventOff_006240f2 = eventOff
    LEA EAX,[EBX + 0x1d0]               ; 004a8b80
    PUSH EAX                            ; 004a8b86
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004a8b87 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00679354]      ; 004a8b8c | undefined4 g_CEmitterClassVersion
    ADD ESP,0x8                         ; 004a8b92
    CMP EDX,0x2                         ; 004a8b95
    JGE 0x004a8cbe                      ; 004a8b98 | LAB_004a8cbe
        ;   XREF to: 004a8cbe (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x158],0x3     ; 004a8b9e
        ;   Label: LAB_004a8b9e
    JNZ 0x004a8c02                      ; 004a8ba5 | LAB_004a8c02
        ;   XREF to: 004a8c02 (CONDITIONAL_JUMP)
    PUSH 0x624108                       ; 004a8ba7 | = "laserR" | s_laserR_00624108 = laserR
    LEA EAX,[EBX + 0x23c]               ; 004a8bac
    PUSH EAX                            ; 004a8bb2
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8bb3 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8bb8
    PUSH 0x62410f                       ; 004a8bbb | = "laserG" | s_laserG_0062410f = laserG
    LEA EAX,[EBX + 0x240]               ; 004a8bc0
    PUSH EAX                            ; 004a8bc6
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8bc7 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8bcc
    PUSH 0x624116                       ; 004a8bcf | = "laserB" | s_laserB_00624116 = laserB
    LEA EAX,[EBX + 0x244]               ; 004a8bd4
    PUSH EAX                            ; 004a8bda
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8bdb | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x00679354]      ; 004a8be0 | undefined4 g_CEmitterClassVersion
    ADD ESP,0x8                         ; 004a8be6
    CMP ESI,0x3                         ; 004a8be9
    JL 0x004a8c02                       ; 004a8bec | LAB_004a8c02
        ;   XREF to: 004a8c02 (CONDITIONAL_JUMP)
    PUSH 0x62411d                       ; 004a8bee | = "laserType" | s_laserType_0062411d = laserType
    LEA EAX,[EBX + 0x238]               ; 004a8bf3
    PUSH EAX                            ; 004a8bf9
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8bfa | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8bff
    CMP dword ptr [0x00679354],0x3      ; 004a8c02 | undefined4 g_CEmitterClassVersion
        ;   Label: LAB_004a8c02
    JL 0x004a8c33                       ; 004a8c09 | LAB_004a8c33
        ;   XREF to: 004a8c33 (CONDITIONAL_JUMP)
    PUSH 0x624127                       ; 004a8c0b | = "maxEmitTime" | s_maxEmitTime_00624127 = maxEmitTime
    LEA EAX,[EBX + 0x234]               ; 004a8c10
    PUSH EAX                            ; 004a8c16
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004a8c17 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8c1c
    PUSH 0x624133                       ; 004a8c1f | = "emitPeriod" | s_emitPeriod_00624133 = emitPeriod
    LEA EAX,[EBX + 0x444]               ; 004a8c24
    PUSH EAX                            ; 004a8c2a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004a8c2b | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8c30
    CMP dword ptr [0x00679354],0x4      ; 004a8c33 | undefined4 g_CEmitterClassVersion
        ;   Label: LAB_004a8c33
    JL 0x004a8c64                       ; 004a8c3a | LAB_004a8c64
        ;   XREF to: 004a8c64 (CONDITIONAL_JUMP)
    PUSH 0x62413e                       ; 004a8c3c | = "modelName" | s_modelName_0062413e = modelName
    LEA EAX,[EBX + 0x248]               ; 004a8c41
    PUSH EAX                            ; 004a8c47
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 004a8c48 | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8c4d
    PUSH 0x624148                       ; 004a8c50 | = "rockSpeed" | s_rockSpeed_00624148 = rockSpeed
    LEA EAX,[EBX + 0x3c4]               ; 004a8c55
    PUSH EAX                            ; 004a8c5b
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004a8c5c | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8c61
    CMP dword ptr [0x00679354],0x5      ; 004a8c64 | undefined4 g_CEmitterClassVersion
        ;   Label: LAB_004a8c64
    JL 0x004a8c95                       ; 004a8c6b | LAB_004a8c95
        ;   XREF to: 004a8c95 (CONDITIONAL_JUMP)
    PUSH 0x624152                       ; 004a8c6d | = "periodicFlag" | s_periodicFlag_00624152 = periodicFlag
    LEA EAX,[EBX + 0x3c8]               ; 004a8c72
    PUSH EAX                            ; 004a8c78
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8c79 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8c7e
    PUSH 0x62415f                       ; 004a8c81 | = "maxWaitTime" | s_maxWaitTime_0062415f = maxWaitTime
    LEA EAX,[EBX + 0x3cc]               ; 004a8c86
    PUSH EAX                            ; 004a8c8c
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004a8c8d | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8c92
    CMP dword ptr [0x00679354],0x6      ; 004a8c95 | undefined4 g_CEmitterClassVersion
        ;   Label: LAB_004a8c95
    JL 0x004a8cb2                       ; 004a8c9c | LAB_004a8cb2
        ;   XREF to: 004a8cb2 (CONDITIONAL_JUMP)
    PUSH 0x62416b                       ; 004a8c9e | = "destActor" | s_destActor_0062416b = destActor
    LEA EAX,[EBX + 0x3d0]               ; 004a8ca3
    PUSH EAX                            ; 004a8ca9
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 004a8caa | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8caf
    CMP dword ptr [0x00679354],0x7      ; 004a8cb2 | undefined4 g_CEmitterClassVersion
        ;   Label: LAB_004a8cb2
    JGE 0x004a8cd7                      ; 004a8cb9 | LAB_004a8cd7
        ;   XREF to: 004a8cd7 (CONDITIONAL_JUMP)
    POP ESI                             ; 004a8cbb
    POP EBX                             ; 004a8cbc
    RET                                 ; 004a8cbd
    PUSH 0x6240fb                       ; 004a8cbe | = "emitterState" | s_emitterState_006240fb = emitterState
        ;   Label: LAB_004a8cbe
    LEA EAX,[EBX + 0x168]               ; 004a8cc3
    PUSH EAX                            ; 004a8cc9
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8cca | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8ccf
    JMP 0x004a8b9e                      ; 004a8cd2 | LAB_004a8b9e
        ;   XREF to: 004a8b9e (UNCONDITIONAL_JUMP)
    PUSH 0x624175                       ; 004a8cd7 | = "wavName" | s_wavName_00624175 = wavName
        ;   Label: LAB_004a8cd7
    LEA EAX,[EBX + 0x3d4]               ; 004a8cdc
    PUSH EAX                            ; 004a8ce2
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004a8ce3 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8ce8
    PUSH 0x62417d                       ; 004a8ceb | = "sfxType" | s_sfxType_0062417d = sfxType
    ADD EBX,0x43c                       ; 004a8cf0
    PUSH EBX                            ; 004a8cf6
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004a8cf7 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a8cfc
    POP ESI                             ; 004a8cff
    POP EBX                             ; 004a8d00
    RET                                 ; 004a8d01

