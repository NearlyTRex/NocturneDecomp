; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_CEmitter_archive_FUN_004791a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_emitterType_0057f204
;   TerminatedCString s_emitterSize_0057f210
;   TerminatedCString s_eventOn_0057f21c
;   TerminatedCString s_eventOff_0057f224
;   TerminatedCString s_emitterState_0057f22d
;   TerminatedCString s_laserR_0057f23a
;   TerminatedCString s_laserG_0057f241
;   TerminatedCString s_laserB_0057f248
;   TerminatedCString s_laserType_0057f24f
;   TerminatedCString s_maxEmitTime_0057f259
;   TerminatedCString s_emitPeriod_0057f265
;   TerminatedCString s_modelName_0057f270
;   TerminatedCString s_rockSpeed_0057f27a
;   TerminatedCString s_periodicFlag_0057f284
;   TerminatedCString s_maxWaitTime_0057f291
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004791a0
        ;   Label: core_emitter.cpp_CEmitter_archive_FUN_004791a0
    PUSH ESI                            ; 004791a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004791a2
    PUSH EBX                            ; 004791a6
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004791a7
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 004791ac
    PUSH 0x57f204                       ; 004791af | = "emitterType"
    LEA EAX,[EBX + 0x150]               ; 004791b4
    PUSH EAX                            ; 004791ba
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004791bb
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004791c0
    PUSH 0x57f210                       ; 004791c3 | = "emitterSize"
    LEA EAX,[EBX + 0x154]               ; 004791c8
    PUSH EAX                            ; 004791ce
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 004791cf
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 004791d4
    PUSH 0x57f21c                       ; 004791d7 | = "eventOn"
    LEA EAX,[EBX + 0x164]               ; 004791dc
    PUSH EAX                            ; 004791e2
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004791e3
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004791e8
    PUSH 0x57f224                       ; 004791eb | = "eventOff"
    LEA EAX,[EBX + 0x1c8]               ; 004791f0
    PUSH EAX                            ; 004791f6
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004791f7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    MOV EDX,dword ptr [0x005b75dc]      ; 004791fc | DAT_005b75dc
    ADD ESP,0x8                         ; 00479202
    CMP EDX,0x2                         ; 00479205
    JGE 0x0047932e                      ; 00479208
        ;   XREF to: 0047932e (CONDITIONAL_JUMP)  ; LAB_0047932e
    CMP dword ptr [EBX + 0x150],0x3     ; 0047920e
        ;   Label: LAB_0047920e
    JNZ 0x00479272                      ; 00479215
        ;   XREF to: 00479272 (CONDITIONAL_JUMP)  ; LAB_00479272
    PUSH 0x57f23a                       ; 00479217 | = "laserR"
    LEA EAX,[EBX + 0x234]               ; 0047921c
    PUSH EAX                            ; 00479222
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00479223
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00479228
    PUSH 0x57f241                       ; 0047922b | = "laserG"
    LEA EAX,[EBX + 0x238]               ; 00479230
    PUSH EAX                            ; 00479236
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00479237
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0047923c
    PUSH 0x57f248                       ; 0047923f | = "laserB"
    LEA EAX,[EBX + 0x23c]               ; 00479244
    PUSH EAX                            ; 0047924a
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0047924b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    MOV ESI,dword ptr [0x005b75dc]      ; 00479250 | DAT_005b75dc
    ADD ESP,0x8                         ; 00479256
    CMP ESI,0x3                         ; 00479259
    JL 0x00479272                       ; 0047925c
        ;   XREF to: 00479272 (CONDITIONAL_JUMP)  ; LAB_00479272
    PUSH 0x57f24f                       ; 0047925e | = "laserType"
    LEA EAX,[EBX + 0x230]               ; 00479263
    PUSH EAX                            ; 00479269
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0047926a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0047926f
    CMP dword ptr [0x005b75dc],0x3      ; 00479272 | DAT_005b75dc
        ;   Label: LAB_00479272
    JL 0x004792a3                       ; 00479279
        ;   XREF to: 004792a3 (CONDITIONAL_JUMP)  ; LAB_004792a3
    PUSH 0x57f259                       ; 0047927b | = "maxEmitTime"
    LEA EAX,[EBX + 0x22c]               ; 00479280
    PUSH EAX                            ; 00479286
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00479287
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0047928c
    PUSH 0x57f265                       ; 0047928f | = "emitPeriod"
    LEA EAX,[EBX + 0x43c]               ; 00479294
    PUSH EAX                            ; 0047929a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0047929b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004792a0
    CMP dword ptr [0x005b75dc],0x4      ; 004792a3 | DAT_005b75dc
        ;   Label: LAB_004792a3
    JL 0x004792d4                       ; 004792aa
        ;   XREF to: 004792d4 (CONDITIONAL_JUMP)  ; LAB_004792d4
    PUSH 0x57f270                       ; 004792ac | = "modelName"
    LEA EAX,[EBX + 0x240]               ; 004792b1
    PUSH EAX                            ; 004792b7
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 004792b8
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 004792bd
    PUSH 0x57f27a                       ; 004792c0 | = "rockSpeed"
    LEA EAX,[EBX + 0x3bc]               ; 004792c5
    PUSH EAX                            ; 004792cb
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004792cc
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004792d1
    CMP dword ptr [0x005b75dc],0x5      ; 004792d4 | DAT_005b75dc
        ;   Label: LAB_004792d4
    JL 0x00479305                       ; 004792db
        ;   XREF to: 00479305 (CONDITIONAL_JUMP)  ; LAB_00479305
    PUSH 0x57f284                       ; 004792dd | = "periodicFlag"
    LEA EAX,[EBX + 0x3c0]               ; 004792e2
    PUSH EAX                            ; 004792e8
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004792e9
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004792ee
    PUSH 0x57f291                       ; 004792f1 | = "maxWaitTime"
    LEA EAX,[EBX + 0x3c4]               ; 004792f6
    PUSH EAX                            ; 004792fc
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004792fd
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00479302
    CMP dword ptr [0x005b75dc],0x6      ; 00479305 | DAT_005b75dc
        ;   Label: LAB_00479305
    JL 0x00479322                       ; 0047930c
        ;   XREF to: 00479322 (CONDITIONAL_JUMP)  ; LAB_00479322
    PUSH 0x57f29d                       ; 0047930e | = "destActor"
    LEA EAX,[EBX + 0x3c8]               ; 00479313
    PUSH EAX                            ; 00479319
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0047931a
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0047931f
    CMP dword ptr [0x005b75dc],0x7      ; 00479322 | DAT_005b75dc
        ;   Label: LAB_00479322
    JGE 0x00479347                      ; 00479329
        ;   XREF to: 00479347 (CONDITIONAL_JUMP)  ; LAB_00479347
    POP ESI                             ; 0047932b
    POP EBX                             ; 0047932c
    RET                                 ; 0047932d
    PUSH 0x57f22d                       ; 0047932e | = "emitterState"
        ;   Label: LAB_0047932e
    LEA EAX,[EBX + 0x160]               ; 00479333
    PUSH EAX                            ; 00479339
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0047933a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0047933f
    JMP 0x0047920e                      ; 00479342
        ;   XREF to: 0047920e (UNCONDITIONAL_JUMP)  ; LAB_0047920e
    PUSH 0x57f2a7                       ; 00479347 | = "wavName"
        ;   Label: LAB_00479347
    LEA EAX,[EBX + 0x3cc]               ; 0047934c
    PUSH EAX                            ; 00479352
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00479353
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00479358
    PUSH 0x57f2af                       ; 0047935b | = "sfxType"
    ADD EBX,0x434                       ; 00479360
    PUSH EBX                            ; 00479366
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00479367
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0047936c
    POP ESI                             ; 0047936f
    POP EBX                             ; 00479370
    RET                                 ; 00479371

