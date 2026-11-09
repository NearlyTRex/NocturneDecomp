; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_FUN_0049fff0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_emitterType_005dc9a6+1
;   TerminatedCString s_emitterSize_005dc9b3
;   TerminatedCString s_eventOn_005dc9bf
;   TerminatedCString s_eventOff_005dc9c7
;   TerminatedCString s_emitterState_005dc9d0
;   TerminatedCString s_laserR_005dc9dd
;   TerminatedCString s_laserG_005dc9e4
;   TerminatedCString s_laserB_005dc9eb
;   TerminatedCString s_laserType_005dc9f2
;   TerminatedCString s_maxEmitTime_005dc9fc
;   TerminatedCString s_emitPeriod_005dca08
;   TerminatedCString s_modelName_005dca13
;   TerminatedCString s_rockSpeed_005dca1d
;   TerminatedCString s_periodicFlag_005dca27
;   TerminatedCString s_maxWaitTime_005dca34
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049fff0
        ;   Label: core_emitter.cpp_FUN_0049fff0
    PUSH ESI                            ; 0049fff1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049fff2
    PUSH EBX                            ; 0049fff6
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0049fff7
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0049fffc
    PUSH 0x5dc9a7                       ; 0049ffff | s_emitterType_005dc9a6+1
    LEA EAX,[EBX + 0x158]               ; 004a0004
    PUSH EAX                            ; 004a000a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a000b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0010
    PUSH 0x5dc9b3                       ; 004a0013 | = "emitterSize"
    LEA EAX,[EBX + 0x15c]               ; 004a0018
    PUSH EAX                            ; 004a001e
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 004a001f
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 004a0024
    PUSH 0x5dc9bf                       ; 004a0027 | = "eventOn"
    LEA EAX,[EBX + 0x16c]               ; 004a002c
    PUSH EAX                            ; 004a0032
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004a0033
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a0038
    PUSH 0x5dc9c7                       ; 004a003b | = "eventOff"
    LEA EAX,[EBX + 0x1d0]               ; 004a0040
    PUSH EAX                            ; 004a0046
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004a0047
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x0061b46c]      ; 004a004c | g_CEmitterClassVersion
    ADD ESP,0x8                         ; 004a0052
    CMP EDX,0x2                         ; 004a0055
    JGE 0x004a0299                      ; 004a0058
        ;   XREF to: 004a0299 (CONDITIONAL_JUMP)  ; LAB_004a0299
    CMP dword ptr [EBX + 0x158],0x3     ; 004a005e
        ;   Label: LAB_004a005e
    JNZ 0x004a00c2                      ; 004a0065
        ;   XREF to: 004a00c2 (CONDITIONAL_JUMP)  ; LAB_004a00c2
    PUSH 0x5dc9dd                       ; 004a0067 | = "laserR"
    LEA EAX,[EBX + 0x23c]               ; 004a006c
    PUSH EAX                            ; 004a0072
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a0073
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0078
    PUSH 0x5dc9e4                       ; 004a007b | = "laserG"
    LEA EAX,[EBX + 0x240]               ; 004a0080
    PUSH EAX                            ; 004a0086
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a0087
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a008c
    PUSH 0x5dc9eb                       ; 004a008f | = "laserB"
    LEA EAX,[EBX + 0x244]               ; 004a0094
    PUSH EAX                            ; 004a009a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a009b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [0x0061b46c]      ; 004a00a0 | g_CEmitterClassVersion
    ADD ESP,0x8                         ; 004a00a6
    CMP ESI,0x3                         ; 004a00a9
    JL 0x004a00c2                       ; 004a00ac
        ;   XREF to: 004a00c2 (CONDITIONAL_JUMP)  ; LAB_004a00c2
    PUSH 0x5dc9f2                       ; 004a00ae | = "laserType"
    LEA EAX,[EBX + 0x238]               ; 004a00b3
    PUSH EAX                            ; 004a00b9
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a00ba
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a00bf
    CMP dword ptr [0x0061b46c],0x3      ; 004a00c2 | g_CEmitterClassVersion
        ;   Label: LAB_004a00c2
    JL 0x004a00f3                       ; 004a00c9
        ;   XREF to: 004a00f3 (CONDITIONAL_JUMP)  ; LAB_004a00f3
    PUSH 0x5dc9fc                       ; 004a00cb | = "maxEmitTime"
    LEA EAX,[EBX + 0x234]               ; 004a00d0
    PUSH EAX                            ; 004a00d6
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a00d7
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a00dc
    PUSH 0x5dca08                       ; 004a00df | = "emitPeriod"
    LEA EAX,[EBX + 0x468]               ; 004a00e4
    PUSH EAX                            ; 004a00ea
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a00eb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a00f0
    CMP dword ptr [0x0061b46c],0x4      ; 004a00f3 | g_CEmitterClassVersion
        ;   Label: LAB_004a00f3
    JL 0x004a0124                       ; 004a00fa
        ;   XREF to: 004a0124 (CONDITIONAL_JUMP)  ; LAB_004a0124
    PUSH 0x5dca13                       ; 004a00fc | = "modelName"
    LEA EAX,[EBX + 0x248]               ; 004a0101
    PUSH EAX                            ; 004a0107
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004a0108
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 004a010d
    PUSH 0x5dca1d                       ; 004a0110 | = "rockSpeed"
    LEA EAX,[EBX + 0x3c4]               ; 004a0115
    PUSH EAX                            ; 004a011b
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a011c
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a0121
    CMP dword ptr [0x0061b46c],0x5      ; 004a0124 | g_CEmitterClassVersion
        ;   Label: LAB_004a0124
    JL 0x004a0155                       ; 004a012b
        ;   XREF to: 004a0155 (CONDITIONAL_JUMP)  ; LAB_004a0155
    PUSH 0x5dca27                       ; 004a012d | = "periodicFlag"
    LEA EAX,[EBX + 0x3e4]               ; 004a0132
    PUSH EAX                            ; 004a0138
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a0139
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a013e
    PUSH 0x5dca34                       ; 004a0141 | = "maxWaitTime"
    LEA EAX,[EBX + 0x3e8]               ; 004a0146
    PUSH EAX                            ; 004a014c
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a014d
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a0152
    CMP dword ptr [0x0061b46c],0x6      ; 004a0155 | g_CEmitterClassVersion
        ;   Label: LAB_004a0155
    JL 0x004a0172                       ; 004a015c
        ;   XREF to: 004a0172 (CONDITIONAL_JUMP)  ; LAB_004a0172
    PUSH 0x5dca40                       ; 004a015e | = "destActor"
    LEA EAX,[EBX + 0x3f0]               ; 004a0163
    PUSH EAX                            ; 004a0169
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004a016a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004a016f
    CMP dword ptr [0x0061b46c],0x7      ; 004a0172 | g_CEmitterClassVersion
        ;   Label: LAB_004a0172
    JL 0x004a01a3                       ; 004a0179
        ;   XREF to: 004a01a3 (CONDITIONAL_JUMP)  ; LAB_004a01a3
    PUSH 0x5dca4a                       ; 004a017b | = "wavName"
    LEA EAX,[EBX + 0x3f8]               ; 004a0180
    PUSH EAX                            ; 004a0186
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004a0187
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a018c
    PUSH 0x5dca52                       ; 004a018f | = "sfxType"
    LEA EAX,[EBX + 0x460]               ; 004a0194
    PUSH EAX                            ; 004a019a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a019b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a01a0
    CMP dword ptr [0x0061b46c],0x8      ; 004a01a3 | g_CEmitterClassVersion
        ;   Label: LAB_004a01a3
    JL 0x004a01c0                       ; 004a01aa
        ;   XREF to: 004a01c0 (CONDITIONAL_JUMP)  ; LAB_004a01c0
    PUSH 0x5dca5a                       ; 004a01ac | = "windResist"
    LEA EAX,[EBX + 0x3c8]               ; 004a01b1
    PUSH EAX                            ; 004a01b7
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a01b8
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a01bd
    CMP dword ptr [0x0061b46c],0x9      ; 004a01c0 | g_CEmitterClassVersion
        ;   Label: LAB_004a01c0
    JL 0x004a01dd                       ; 004a01c7
        ;   XREF to: 004a01dd (CONDITIONAL_JUMP)  ; LAB_004a01dd
    PUSH 0x5dca65                       ; 004a01c9 | = "soundRadius"
    LEA EAX,[EBX + 0x3f4]               ; 004a01ce
    PUSH EAX                            ; 004a01d4
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a01d5
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a01da
    CMP dword ptr [0x0061b46c],0xa      ; 004a01dd | g_CEmitterClassVersion
        ;   Label: LAB_004a01dd
    JL 0x004a01fa                       ; 004a01e4
        ;   XREF to: 004a01fa (CONDITIONAL_JUMP)  ; LAB_004a01fa
    PUSH 0x5dca71                       ; 004a01e6 | = "maxSpeed"
    LEA EAX,[EBX + 0x3cc]               ; 004a01eb
    PUSH EAX                            ; 004a01f1
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a01f2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a01f7
    CMP dword ptr [0x0061b46c],0xb      ; 004a01fa | g_CEmitterClassVersion
        ;   Label: LAB_004a01fa
    JL 0x004a0253                       ; 004a0201
        ;   XREF to: 004a0253 (CONDITIONAL_JUMP)  ; LAB_004a0253
    PUSH 0x5dca7a                       ; 004a0203 | = "EFireflyType"
    LEA EAX,[EBX + 0x3d0]               ; 004a0208
    PUSH EAX                            ; 004a020e
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a020f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0214
    PUSH 0x5dca87                       ; 004a0217 | = "fizzle"
    LEA EAX,[EBX + 0x3d4]               ; 004a021c
    PUSH EAX                            ; 004a0222
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a0223
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0228
    PUSH 0x5dca8e                       ; 004a022b | = "bright"
    LEA EAX,[EBX + 0x3d8]               ; 004a0230
    PUSH EAX                            ; 004a0236
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a0237
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a023c
    PUSH 0x5dca95                       ; 004a023f | = "deltaMult"
    LEA EAX,[EBX + 0x3dc]               ; 004a0244
    PUSH EAX                            ; 004a024a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a024b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0250
    CMP dword ptr [0x0061b46c],0xc      ; 004a0253 | g_CEmitterClassVersion
        ;   Label: LAB_004a0253
    JL 0x004a0270                       ; 004a025a
        ;   XREF to: 004a0270 (CONDITIONAL_JUMP)  ; LAB_004a0270
    PUSH 0x5dca9f                       ; 004a025c | = "FFSize"
    LEA EAX,[EBX + 0x3e0]               ; 004a0261
    PUSH EAX                            ; 004a0267
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a0268
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a026d
    CMP dword ptr [0x0061b46c],0xd      ; 004a0270 | g_CEmitterClassVersion
        ;   Label: LAB_004a0270
    JL 0x004a028d                       ; 004a0277
        ;   XREF to: 004a028d (CONDITIONAL_JUMP)  ; LAB_004a028d
    PUSH 0x5dcaa6                       ; 004a0279 | = "emitRadius"
    LEA EAX,[EBX + 0x4b8]               ; 004a027e
    PUSH EAX                            ; 004a0284
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a0285
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a028a
    CMP dword ptr [0x0061b46c],0xe      ; 004a028d | g_CEmitterClassVersion
        ;   Label: LAB_004a028d
    JGE 0x004a02b2                      ; 004a0294
        ;   XREF to: 004a02b2 (CONDITIONAL_JUMP)  ; LAB_004a02b2
    POP ESI                             ; 004a0296
    POP EBX                             ; 004a0297
    RET                                 ; 004a0298
    PUSH 0x5dc9d0                       ; 004a0299 | = "emitterState"
        ;   Label: LAB_004a0299
    LEA EAX,[EBX + 0x168]               ; 004a029e
    PUSH EAX                            ; 004a02a4
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004a02a5
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a02aa
    JMP 0x004a005e                      ; 004a02ad
        ;   XREF to: 004a005e (UNCONDITIONAL_JUMP)  ; LAB_004a005e
    PUSH 0x5dcab1                       ; 004a02b2 | = "bloodVel"
        ;   Label: LAB_004a02b2
    ADD EBX,0x4bc                       ; 004a02b7
    PUSH EBX                            ; 004a02bd
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004a02be
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004a02c3
    POP ESI                             ; 004a02c6
    POP EBX                             ; 004a02c7
    RET                                 ; 004a02c8

