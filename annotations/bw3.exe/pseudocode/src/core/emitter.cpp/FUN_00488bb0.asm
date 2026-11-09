; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_FUN_00488bb0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_emitterType_005bda63+1
;   TerminatedCString s_emitterSize_005bda70
;   TerminatedCString s_eventOn_005bda7c
;   TerminatedCString s_eventOff_005bda84
;   TerminatedCString s_emitterState_005bda8d
;   TerminatedCString s_laserR_005bda9a
;   TerminatedCString s_laserG_005bdaa1
;   TerminatedCString s_laserB_005bdaa8
;   TerminatedCString s_laserType_005bdaaf
;   TerminatedCString s_maxEmitTime_005bdab9
;   TerminatedCString s_emitPeriod_005bdac5
;   TerminatedCString s_modelName_005bdad0
;   TerminatedCString s_rockSpeed_005bdada
;   TerminatedCString s_periodicFlag_005bdae4
;   TerminatedCString s_maxWaitTime_005bdaf1
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488bb0
        ;   Label: core_emitter.cpp_FUN_00488bb0
    PUSH ESI                            ; 00488bb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00488bb2
    PUSH EBX                            ; 00488bb6
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00488bb7
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00488bbc
    PUSH 0x5bda64                       ; 00488bbf | s_emitterType_005bda63+1
    LEA EAX,[EBX + 0x158]               ; 00488bc4
    PUSH EAX                            ; 00488bca
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488bcb
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488bd0
    PUSH 0x5bda70                       ; 00488bd3 | = "emitterSize"
    LEA EAX,[EBX + 0x15c]               ; 00488bd8
    PUSH EAX                            ; 00488bde
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00488bdf
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00488be4
    PUSH 0x5bda7c                       ; 00488be7 | = "eventOn"
    LEA EAX,[EBX + 0x16c]               ; 00488bec
    PUSH EAX                            ; 00488bf2
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00488bf3
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00488bf8
    PUSH 0x5bda84                       ; 00488bfb | = "eventOff"
    LEA EAX,[EBX + 0x1d0]               ; 00488c00
    PUSH EAX                            ; 00488c06
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00488c07
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x005fb9ec]      ; 00488c0c | g_CEmitterClassVersion
    ADD ESP,0x8                         ; 00488c12
    CMP EDX,0x2                         ; 00488c15
    JGE 0x00488e59                      ; 00488c18
        ;   XREF to: 00488e59 (CONDITIONAL_JUMP)  ; LAB_00488e59
    CMP dword ptr [EBX + 0x158],0x3     ; 00488c1e
        ;   Label: LAB_00488c1e
    JNZ 0x00488c82                      ; 00488c25
        ;   XREF to: 00488c82 (CONDITIONAL_JUMP)  ; LAB_00488c82
    PUSH 0x5bda9a                       ; 00488c27 | = "laserR"
    LEA EAX,[EBX + 0x23c]               ; 00488c2c
    PUSH EAX                            ; 00488c32
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488c33
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488c38
    PUSH 0x5bdaa1                       ; 00488c3b | = "laserG"
    LEA EAX,[EBX + 0x240]               ; 00488c40
    PUSH EAX                            ; 00488c46
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488c47
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488c4c
    PUSH 0x5bdaa8                       ; 00488c4f | = "laserB"
    LEA EAX,[EBX + 0x244]               ; 00488c54
    PUSH EAX                            ; 00488c5a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488c5b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [0x005fb9ec]      ; 00488c60 | g_CEmitterClassVersion
    ADD ESP,0x8                         ; 00488c66
    CMP ESI,0x3                         ; 00488c69
    JL 0x00488c82                       ; 00488c6c
        ;   XREF to: 00488c82 (CONDITIONAL_JUMP)  ; LAB_00488c82
    PUSH 0x5bdaaf                       ; 00488c6e | = "laserType"
    LEA EAX,[EBX + 0x238]               ; 00488c73
    PUSH EAX                            ; 00488c79
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488c7a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488c7f
    CMP dword ptr [0x005fb9ec],0x3      ; 00488c82 | g_CEmitterClassVersion
        ;   Label: LAB_00488c82
    JL 0x00488cb3                       ; 00488c89
        ;   XREF to: 00488cb3 (CONDITIONAL_JUMP)  ; LAB_00488cb3
    PUSH 0x5bdab9                       ; 00488c8b | = "maxEmitTime"
    LEA EAX,[EBX + 0x234]               ; 00488c90
    PUSH EAX                            ; 00488c96
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488c97
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488c9c
    PUSH 0x5bdac5                       ; 00488c9f | = "emitPeriod"
    LEA EAX,[EBX + 0x468]               ; 00488ca4
    PUSH EAX                            ; 00488caa
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488cab
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488cb0
    CMP dword ptr [0x005fb9ec],0x4      ; 00488cb3 | g_CEmitterClassVersion
        ;   Label: LAB_00488cb3
    JL 0x00488ce4                       ; 00488cba
        ;   XREF to: 00488ce4 (CONDITIONAL_JUMP)  ; LAB_00488ce4
    PUSH 0x5bdad0                       ; 00488cbc | = "modelName"
    LEA EAX,[EBX + 0x248]               ; 00488cc1
    PUSH EAX                            ; 00488cc7
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 00488cc8
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 00488ccd
    PUSH 0x5bdada                       ; 00488cd0 | = "rockSpeed"
    LEA EAX,[EBX + 0x3c4]               ; 00488cd5
    PUSH EAX                            ; 00488cdb
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488cdc
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488ce1
    CMP dword ptr [0x005fb9ec],0x5      ; 00488ce4 | g_CEmitterClassVersion
        ;   Label: LAB_00488ce4
    JL 0x00488d15                       ; 00488ceb
        ;   XREF to: 00488d15 (CONDITIONAL_JUMP)  ; LAB_00488d15
    PUSH 0x5bdae4                       ; 00488ced | = "periodicFlag"
    LEA EAX,[EBX + 0x3e4]               ; 00488cf2
    PUSH EAX                            ; 00488cf8
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488cf9
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488cfe
    PUSH 0x5bdaf1                       ; 00488d01 | = "maxWaitTime"
    LEA EAX,[EBX + 0x3e8]               ; 00488d06
    PUSH EAX                            ; 00488d0c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488d0d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488d12
    CMP dword ptr [0x005fb9ec],0x6      ; 00488d15 | g_CEmitterClassVersion
        ;   Label: LAB_00488d15
    JL 0x00488d32                       ; 00488d1c
        ;   XREF to: 00488d32 (CONDITIONAL_JUMP)  ; LAB_00488d32
    PUSH 0x5bdafd                       ; 00488d1e | = "destActor"
    LEA EAX,[EBX + 0x3f0]               ; 00488d23
    PUSH EAX                            ; 00488d29
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00488d2a
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00488d2f
    CMP dword ptr [0x005fb9ec],0x7      ; 00488d32 | g_CEmitterClassVersion
        ;   Label: LAB_00488d32
    JL 0x00488d63                       ; 00488d39
        ;   XREF to: 00488d63 (CONDITIONAL_JUMP)  ; LAB_00488d63
    PUSH 0x5bdb07                       ; 00488d3b | = "wavName"
    LEA EAX,[EBX + 0x3f8]               ; 00488d40
    PUSH EAX                            ; 00488d46
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00488d47
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00488d4c
    PUSH 0x5bdb0f                       ; 00488d4f | = "sfxType"
    LEA EAX,[EBX + 0x460]               ; 00488d54
    PUSH EAX                            ; 00488d5a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488d5b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488d60
    CMP dword ptr [0x005fb9ec],0x8      ; 00488d63 | g_CEmitterClassVersion
        ;   Label: LAB_00488d63
    JL 0x00488d80                       ; 00488d6a
        ;   XREF to: 00488d80 (CONDITIONAL_JUMP)  ; LAB_00488d80
    PUSH 0x5bdb17                       ; 00488d6c | = "windResist"
    LEA EAX,[EBX + 0x3c8]               ; 00488d71
    PUSH EAX                            ; 00488d77
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488d78
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488d7d
    CMP dword ptr [0x005fb9ec],0x9      ; 00488d80 | g_CEmitterClassVersion
        ;   Label: LAB_00488d80
    JL 0x00488d9d                       ; 00488d87
        ;   XREF to: 00488d9d (CONDITIONAL_JUMP)  ; LAB_00488d9d
    PUSH 0x5bdb22                       ; 00488d89 | = "soundRadius"
    LEA EAX,[EBX + 0x3f4]               ; 00488d8e
    PUSH EAX                            ; 00488d94
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488d95
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488d9a
    CMP dword ptr [0x005fb9ec],0xa      ; 00488d9d | g_CEmitterClassVersion
        ;   Label: LAB_00488d9d
    JL 0x00488dba                       ; 00488da4
        ;   XREF to: 00488dba (CONDITIONAL_JUMP)  ; LAB_00488dba
    PUSH 0x5bdb2e                       ; 00488da6 | = "maxSpeed"
    LEA EAX,[EBX + 0x3cc]               ; 00488dab
    PUSH EAX                            ; 00488db1
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488db2
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488db7
    CMP dword ptr [0x005fb9ec],0xb      ; 00488dba | g_CEmitterClassVersion
        ;   Label: LAB_00488dba
    JL 0x00488e13                       ; 00488dc1
        ;   XREF to: 00488e13 (CONDITIONAL_JUMP)  ; LAB_00488e13
    PUSH 0x5bdb37                       ; 00488dc3 | = "EFireflyType"
    LEA EAX,[EBX + 0x3d0]               ; 00488dc8
    PUSH EAX                            ; 00488dce
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488dcf
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488dd4
    PUSH 0x5bdb44                       ; 00488dd7 | = "fizzle"
    LEA EAX,[EBX + 0x3d4]               ; 00488ddc
    PUSH EAX                            ; 00488de2
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488de3
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488de8
    PUSH 0x5bdb4b                       ; 00488deb | = "bright"
    LEA EAX,[EBX + 0x3d8]               ; 00488df0
    PUSH EAX                            ; 00488df6
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488df7
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488dfc
    PUSH 0x5bdb52                       ; 00488dff | = "deltaMult"
    LEA EAX,[EBX + 0x3dc]               ; 00488e04
    PUSH EAX                            ; 00488e0a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488e0b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488e10
    CMP dword ptr [0x005fb9ec],0xc      ; 00488e13 | g_CEmitterClassVersion
        ;   Label: LAB_00488e13
    JL 0x00488e30                       ; 00488e1a
        ;   XREF to: 00488e30 (CONDITIONAL_JUMP)  ; LAB_00488e30
    PUSH 0x5bdb5c                       ; 00488e1c | = "FFSize"
    LEA EAX,[EBX + 0x3e0]               ; 00488e21
    PUSH EAX                            ; 00488e27
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488e28
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488e2d
    CMP dword ptr [0x005fb9ec],0xd      ; 00488e30 | g_CEmitterClassVersion
        ;   Label: LAB_00488e30
    JL 0x00488e4d                       ; 00488e37
        ;   XREF to: 00488e4d (CONDITIONAL_JUMP)  ; LAB_00488e4d
    PUSH 0x5bdb63                       ; 00488e39 | = "emitRadius"
    LEA EAX,[EBX + 0x4b8]               ; 00488e3e
    PUSH EAX                            ; 00488e44
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488e45
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488e4a
    CMP dword ptr [0x005fb9ec],0xe      ; 00488e4d | g_CEmitterClassVersion
        ;   Label: LAB_00488e4d
    JGE 0x00488e72                      ; 00488e54
        ;   XREF to: 00488e72 (CONDITIONAL_JUMP)  ; LAB_00488e72
    POP ESI                             ; 00488e56
    POP EBX                             ; 00488e57
    RET                                 ; 00488e58
    PUSH 0x5bda8d                       ; 00488e59 | = "emitterState"
        ;   Label: LAB_00488e59
    LEA EAX,[EBX + 0x168]               ; 00488e5e
    PUSH EAX                            ; 00488e64
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00488e65
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00488e6a
    JMP 0x00488c1e                      ; 00488e6d
        ;   XREF to: 00488c1e (UNCONDITIONAL_JUMP)  ; LAB_00488c1e
    PUSH 0x5bdb6e                       ; 00488e72 | = "bloodVel"
        ;   Label: LAB_00488e72
    ADD EBX,0x4bc                       ; 00488e77
    PUSH EBX                            ; 00488e7d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00488e7e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00488e83
    POP ESI                             ; 00488e86
    POP EBX                             ; 00488e87
    RET                                 ; 00488e88

