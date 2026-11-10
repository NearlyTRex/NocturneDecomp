; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_archive_FUN_00487990(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_emitterType_005d2c0d+1
;   TerminatedCString s_emitterSize_005d2c1a
;   TerminatedCString s_eventOn_005d2c26
;   TerminatedCString s_eventOff_005d2c2e
;   TerminatedCString s_emitterState_005d2c37
;   TerminatedCString s_laserR_005d2c44
;   TerminatedCString s_laserG_005d2c4b
;   TerminatedCString s_laserB_005d2c52
;   TerminatedCString s_laserType_005d2c59
;   TerminatedCString s_maxEmitTime_005d2c63
;   TerminatedCString s_emitPeriod_005d2c6f
;   TerminatedCString s_modelName_005d2c7a
;   TerminatedCString s_rockSpeed_005d2c84
;   TerminatedCString s_periodicFlag_005d2c8e
;   TerminatedCString s_maxWaitTime_005d2c9b
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487990
        ;   Label: core_emitter.cpp_CEmitter_archive_FUN_00487990
    PUSH ESI                            ; 00487991
    MOV EBX,dword ptr [ESP + 0xc]       ; 00487992
    PUSH EBX                            ; 00487996
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00487997
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048799c
    PUSH 0x5d2c0e                       ; 0048799f | s_emitterType_005d2c0d+1
    LEA EAX,[EBX + 0x2b4]               ; 004879a4
    PUSH EAX                            ; 004879aa
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004879ab
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004879b0
    PUSH 0x5d2c1a                       ; 004879b3 | = "emitterSize"
    LEA EAX,[EBX + 0x2b8]               ; 004879b8
    PUSH EAX                            ; 004879be
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 004879bf
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 004879c4
    PUSH 0x5d2c26                       ; 004879c7 | = "eventOn"
    LEA EAX,[EBX + 0x2c8]               ; 004879cc
    PUSH EAX                            ; 004879d2
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004879d3
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004879d8
    PUSH 0x5d2c2e                       ; 004879db | = "eventOff"
    LEA EAX,[EBX + 0x32c]               ; 004879e0
    PUSH EAX                            ; 004879e6
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004879e7
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x0061418c]      ; 004879ec | g_CEmitterClassVersion
    ADD ESP,0x8                         ; 004879f2
    CMP EDX,0x2                         ; 004879f5
    JGE 0x00487c39                      ; 004879f8
        ;   XREF to: 00487c39 (CONDITIONAL_JUMP)  ; LAB_00487c39
    CMP dword ptr [EBX + 0x2b4],0x3     ; 004879fe
        ;   Label: LAB_004879fe
    JNZ 0x00487a62                      ; 00487a05
        ;   XREF to: 00487a62 (CONDITIONAL_JUMP)  ; LAB_00487a62
    PUSH 0x5d2c44                       ; 00487a07 | = "laserR"
    LEA EAX,[EBX + 0x398]               ; 00487a0c
    PUSH EAX                            ; 00487a12
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487a13
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487a18
    PUSH 0x5d2c4b                       ; 00487a1b | = "laserG"
    LEA EAX,[EBX + 0x39c]               ; 00487a20
    PUSH EAX                            ; 00487a26
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487a27
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487a2c
    PUSH 0x5d2c52                       ; 00487a2f | = "laserB"
    LEA EAX,[EBX + 0x3a0]               ; 00487a34
    PUSH EAX                            ; 00487a3a
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487a3b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [0x0061418c]      ; 00487a40 | g_CEmitterClassVersion
    ADD ESP,0x8                         ; 00487a46
    CMP ESI,0x3                         ; 00487a49
    JL 0x00487a62                       ; 00487a4c
        ;   XREF to: 00487a62 (CONDITIONAL_JUMP)  ; LAB_00487a62
    PUSH 0x5d2c59                       ; 00487a4e | = "laserType"
    LEA EAX,[EBX + 0x394]               ; 00487a53
    PUSH EAX                            ; 00487a59
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487a5a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487a5f
    CMP dword ptr [0x0061418c],0x3      ; 00487a62 | g_CEmitterClassVersion
        ;   Label: LAB_00487a62
    JL 0x00487a93                       ; 00487a69
        ;   XREF to: 00487a93 (CONDITIONAL_JUMP)  ; LAB_00487a93
    PUSH 0x5d2c63                       ; 00487a6b | = "maxEmitTime"
    LEA EAX,[EBX + 0x390]               ; 00487a70
    PUSH EAX                            ; 00487a76
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487a77
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487a7c
    PUSH 0x5d2c6f                       ; 00487a7f | = "emitPeriod"
    LEA EAX,[EBX + 0x5c4]               ; 00487a84
    PUSH EAX                            ; 00487a8a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487a8b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487a90
    CMP dword ptr [0x0061418c],0x4      ; 00487a93 | g_CEmitterClassVersion
        ;   Label: LAB_00487a93
    JL 0x00487ac4                       ; 00487a9a
        ;   XREF to: 00487ac4 (CONDITIONAL_JUMP)  ; LAB_00487ac4
    PUSH 0x5d2c7a                       ; 00487a9c | = "modelName"
    LEA EAX,[EBX + 0x3a4]               ; 00487aa1
    PUSH EAX                            ; 00487aa7
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 00487aa8
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 00487aad
    PUSH 0x5d2c84                       ; 00487ab0 | = "rockSpeed"
    LEA EAX,[EBX + 0x520]               ; 00487ab5
    PUSH EAX                            ; 00487abb
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487abc
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487ac1
    CMP dword ptr [0x0061418c],0x5      ; 00487ac4 | g_CEmitterClassVersion
        ;   Label: LAB_00487ac4
    JL 0x00487af5                       ; 00487acb
        ;   XREF to: 00487af5 (CONDITIONAL_JUMP)  ; LAB_00487af5
    PUSH 0x5d2c8e                       ; 00487acd | = "periodicFlag"
    LEA EAX,[EBX + 0x540]               ; 00487ad2
    PUSH EAX                            ; 00487ad8
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487ad9
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487ade
    PUSH 0x5d2c9b                       ; 00487ae1 | = "maxWaitTime"
    LEA EAX,[EBX + 0x544]               ; 00487ae6
    PUSH EAX                            ; 00487aec
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487aed
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487af2
    CMP dword ptr [0x0061418c],0x6      ; 00487af5 | g_CEmitterClassVersion
        ;   Label: LAB_00487af5
    JL 0x00487b12                       ; 00487afc
        ;   XREF to: 00487b12 (CONDITIONAL_JUMP)  ; LAB_00487b12
    PUSH 0x5d2ca7                       ; 00487afe | = "destActor"
    LEA EAX,[EBX + 0x54c]               ; 00487b03
    PUSH EAX                            ; 00487b09
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00487b0a
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 00487b0f
    CMP dword ptr [0x0061418c],0x7      ; 00487b12 | g_CEmitterClassVersion
        ;   Label: LAB_00487b12
    JL 0x00487b43                       ; 00487b19
        ;   XREF to: 00487b43 (CONDITIONAL_JUMP)  ; LAB_00487b43
    PUSH 0x5d2cb1                       ; 00487b1b | = "wavName"
    LEA EAX,[EBX + 0x554]               ; 00487b20
    PUSH EAX                            ; 00487b26
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00487b27
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00487b2c
    PUSH 0x5d2cb9                       ; 00487b2f | = "sfxType"
    LEA EAX,[EBX + 0x5bc]               ; 00487b34
    PUSH EAX                            ; 00487b3a
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487b3b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487b40
    CMP dword ptr [0x0061418c],0x8      ; 00487b43 | g_CEmitterClassVersion
        ;   Label: LAB_00487b43
    JL 0x00487b60                       ; 00487b4a
        ;   XREF to: 00487b60 (CONDITIONAL_JUMP)  ; LAB_00487b60
    PUSH 0x5d2cc1                       ; 00487b4c | = "windResist"
    LEA EAX,[EBX + 0x524]               ; 00487b51
    PUSH EAX                            ; 00487b57
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487b58
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487b5d
    CMP dword ptr [0x0061418c],0x9      ; 00487b60 | g_CEmitterClassVersion
        ;   Label: LAB_00487b60
    JL 0x00487b7d                       ; 00487b67
        ;   XREF to: 00487b7d (CONDITIONAL_JUMP)  ; LAB_00487b7d
    PUSH 0x5d2ccc                       ; 00487b69 | = "soundRadius"
    LEA EAX,[EBX + 0x550]               ; 00487b6e
    PUSH EAX                            ; 00487b74
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487b75
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487b7a
    CMP dword ptr [0x0061418c],0xa      ; 00487b7d | g_CEmitterClassVersion
        ;   Label: LAB_00487b7d
    JL 0x00487b9a                       ; 00487b84
        ;   XREF to: 00487b9a (CONDITIONAL_JUMP)  ; LAB_00487b9a
    PUSH 0x5d2cd8                       ; 00487b86 | = "maxSpeed"
    LEA EAX,[EBX + 0x528]               ; 00487b8b
    PUSH EAX                            ; 00487b91
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487b92
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487b97
    CMP dword ptr [0x0061418c],0xb      ; 00487b9a | g_CEmitterClassVersion
        ;   Label: LAB_00487b9a
    JL 0x00487bf3                       ; 00487ba1
        ;   XREF to: 00487bf3 (CONDITIONAL_JUMP)  ; LAB_00487bf3
    PUSH 0x5d2ce1                       ; 00487ba3 | = "EFireflyType"
    LEA EAX,[EBX + 0x52c]               ; 00487ba8
    PUSH EAX                            ; 00487bae
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487baf
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487bb4
    PUSH 0x5d2cee                       ; 00487bb7 | = "fizzle"
    LEA EAX,[EBX + 0x530]               ; 00487bbc
    PUSH EAX                            ; 00487bc2
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487bc3
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487bc8
    PUSH 0x5d2cf5                       ; 00487bcb | = "bright"
    LEA EAX,[EBX + 0x534]               ; 00487bd0
    PUSH EAX                            ; 00487bd6
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487bd7
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487bdc
    PUSH 0x5d2cfc                       ; 00487bdf | = "deltaMult"
    LEA EAX,[EBX + 0x538]               ; 00487be4
    PUSH EAX                            ; 00487bea
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487beb
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487bf0
    CMP dword ptr [0x0061418c],0xc      ; 00487bf3 | g_CEmitterClassVersion
        ;   Label: LAB_00487bf3
    JL 0x00487c10                       ; 00487bfa
        ;   XREF to: 00487c10 (CONDITIONAL_JUMP)  ; LAB_00487c10
    PUSH 0x5d2d06                       ; 00487bfc | = "FFSize"
    LEA EAX,[EBX + 0x53c]               ; 00487c01
    PUSH EAX                            ; 00487c07
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487c08
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487c0d
    CMP dword ptr [0x0061418c],0xd      ; 00487c10 | g_CEmitterClassVersion
        ;   Label: LAB_00487c10
    JL 0x00487c2d                       ; 00487c17
        ;   XREF to: 00487c2d (CONDITIONAL_JUMP)  ; LAB_00487c2d
    PUSH 0x5d2d0d                       ; 00487c19 | = "emitRadius"
    LEA EAX,[EBX + 0x614]               ; 00487c1e
    PUSH EAX                            ; 00487c24
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487c25
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487c2a
    CMP dword ptr [0x0061418c],0xe      ; 00487c2d | g_CEmitterClassVersion
        ;   Label: LAB_00487c2d
    JGE 0x00487c52                      ; 00487c34
        ;   XREF to: 00487c52 (CONDITIONAL_JUMP)  ; LAB_00487c52
    POP ESI                             ; 00487c36
    POP EBX                             ; 00487c37
    RET                                 ; 00487c38
    PUSH 0x5d2c37                       ; 00487c39 | = "emitterState"
        ;   Label: LAB_00487c39
    LEA EAX,[EBX + 0x2c4]               ; 00487c3e
    PUSH EAX                            ; 00487c44
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00487c45
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00487c4a
    JMP 0x004879fe                      ; 00487c4d
        ;   XREF to: 004879fe (UNCONDITIONAL_JUMP)  ; LAB_004879fe
    PUSH 0x5d2d18                       ; 00487c52 | = "bloodVel"
        ;   Label: LAB_00487c52
    ADD EBX,0x618                       ; 00487c57
    PUSH EBX                            ; 00487c5d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00487c5e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487c63
    POP ESI                             ; 00487c66
    POP EBX                             ; 00487c67
    RET                                 ; 00487c68

