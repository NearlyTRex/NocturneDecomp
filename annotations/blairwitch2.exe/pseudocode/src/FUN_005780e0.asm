; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005780e0(int param_1)
;
;
; XREF[1]:
;   FUN_00588230 at 0058823c
;
; Referenced Globals:
;   undefined4 s_triggerState_005ecda1+1
;   TerminatedCString s_triggerSize_005ecdaf
;   TerminatedCString s_triggerType_005ecdbb
;   TerminatedCString s_onName_005ecdc7
;   TerminatedCString s_offName_005ecdce
;   TerminatedCString s_whoTriggers_005ecdd6
;   TerminatedCString s_actorTriggerName_005ecde2
;   TerminatedCString s_lightMin_005ecdf3
;   TerminatedCString s_lightMax_005ecdfc
;   TerminatedCString s_laserType_005ece05
;   TerminatedCString s_actorTriggerTypes_005ece0f
;   TerminatedCString s_hitPoints_005ece21
;   TerminatedCString s_pressurePlate_005ece2b
;   TerminatedCString s_whoTriggers_005ece39
;   TerminatedCString s_actorTriggerName_005ece45
;   ... and 12 more
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040c330
;   FUN_00578650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005780e0
        ;   Label: FUN_005780e0
    PUSH ESI                            ; 005780e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005780e2
    PUSH EBX                            ; 005780e6
    CALL FUN_0040c330                   ; 005780e7
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 005780ec
    PUSH 0x5ecda2                       ; 005780ef | s_triggerState_005ecda1+1
    LEA EAX,[EBX + 0x2c8]               ; 005780f4
    PUSH EAX                            ; 005780fa
    CALL FUN_0040b960                   ; 005780fb
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00578100
    PUSH 0x5ecdaf                       ; 00578103 | = "triggerSize"
    LEA EAX,[EBX + 0x2bc]               ; 00578108
    PUSH EAX                            ; 0057810e
    CALL FUN_0040b4b0                   ; 0057810f
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 00578114
    PUSH 0x5ecdbb                       ; 00578117 | = "triggerType"
    LEA EAX,[EBX + 0x2b8]               ; 0057811c
    PUSH EAX                            ; 00578122
    CALL FUN_0040b960                   ; 00578123
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00578128
    PUSH 0x5ecdc7                       ; 0057812b | = "onName"
    LEA EAX,[EBX + 0x380]               ; 00578130
    PUSH EAX                            ; 00578136
    CALL FUN_0040b730                   ; 00578137
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0057813c
    PUSH 0x5ecdce                       ; 0057813f | = "offName"
    LEA EAX,[EBX + 0x3e4]               ; 00578144
    PUSH EAX                            ; 0057814a
    LEA ESI,[EBX + 0x2d4]               ; 0057814b
    CALL FUN_0040b730                   ; 00578151
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    MOV EDX,dword ptr [0x0061e420]      ; 00578156 | DAT_0061e420
    ADD ESP,0x8                         ; 0057815c
    LEA EAX,[EBX + 0x2d0]               ; 0057815f
    CMP EDX,0x7                         ; 00578165
    JGE 0x00578255                      ; 00578168
        ;   XREF to: 00578255 (CONDITIONAL_JUMP)  ; LAB_00578255
    CMP EDX,0x2                         ; 0057816e
    JGE 0x0057821d                      ; 00578171
        ;   XREF to: 0057821d (CONDITIONAL_JUMP)  ; LAB_0057821d
    CMP dword ptr [0x0061e420],0x3      ; 00578177 | DAT_0061e420
        ;   Label: LAB_00578177
    JL 0x005781a8                       ; 0057817e
        ;   XREF to: 005781a8 (CONDITIONAL_JUMP)  ; LAB_005781a8
    PUSH 0x5ecdf3                       ; 00578180 | = "lightMin"
    LEA EAX,[EBX + 0x378]               ; 00578185
    PUSH EAX                            ; 0057818b
    CALL FUN_0040b8e0                   ; 0057818c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00578191
    PUSH 0x5ecdfc                       ; 00578194 | = "lightMax"
    LEA EAX,[EBX + 0x37c]               ; 00578199
    PUSH EAX                            ; 0057819f
    CALL FUN_0040b8e0                   ; 005781a0
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005781a5
    CMP dword ptr [0x0061e420],0x4      ; 005781a8 | DAT_0061e420
        ;   Label: LAB_005781a8
    JL 0x005781ce                       ; 005781af
        ;   XREF to: 005781ce (CONDITIONAL_JUMP)  ; LAB_005781ce
    CMP dword ptr [EBX + 0x2d0],0x5     ; 005781b1
    JNZ 0x005781ce                      ; 005781b8
        ;   XREF to: 005781ce (CONDITIONAL_JUMP)  ; LAB_005781ce
    PUSH 0x5ece05                       ; 005781ba | = "laserType"
    LEA EAX,[EBX + 0x450]               ; 005781bf
    PUSH EAX                            ; 005781c5
    CALL FUN_0040b960                   ; 005781c6
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005781cb
    CMP dword ptr [0x0061e420],0x5      ; 005781ce | DAT_0061e420
        ;   Label: LAB_005781ce
    JL 0x00578211                       ; 005781d5
        ;   XREF to: 00578211 (CONDITIONAL_JUMP)  ; LAB_00578211
    CMP dword ptr [EBX + 0x2d0],0x1     ; 005781d7
    JNZ 0x005781f4                      ; 005781de
        ;   XREF to: 005781f4 (CONDITIONAL_JUMP)  ; LAB_005781f4
    PUSH 0x5ece0f                       ; 005781e0 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x324]               ; 005781e5
    PUSH EAX                            ; 005781eb
    CALL FUN_0040b730                   ; 005781ec
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 005781f1
    CMP dword ptr [EBX + 0x2d0],0x7     ; 005781f4
        ;   Label: LAB_005781f4
    JNZ 0x00578211                      ; 005781fb
        ;   XREF to: 00578211 (CONDITIONAL_JUMP)  ; LAB_00578211
    PUSH 0x5ece21                       ; 005781fd | = "hitPoints"
    LEA EAX,[EBX + 0x454]               ; 00578202
    PUSH EAX                            ; 00578208
    CALL FUN_0040b8e0                   ; 00578209
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0057820e
    CMP dword ptr [0x0061e420],0x6      ; 00578211 | DAT_0061e420
        ;   Label: LAB_00578211
    JGE 0x0057823e                      ; 00578218
        ;   XREF to: 0057823e (CONDITIONAL_JUMP)  ; LAB_0057823e
    POP ESI                             ; 0057821a
        ;   Label: LAB_0057821a
    POP EBX                             ; 0057821b
    RET                                 ; 0057821c
    PUSH 0x5ecdd6                       ; 0057821d | = "whoTriggers"
        ;   Label: LAB_0057821d
    PUSH EAX                            ; 00578222
    CALL FUN_0040b960                   ; 00578223
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00578228
    PUSH 0x5ecde2                       ; 0057822b | = "actorTriggerName"
    PUSH ESI                            ; 00578230
    CALL FUN_0040b730                   ; 00578231
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00578236
    JMP 0x00578177                      ; 00578239
        ;   XREF to: 00578177 (UNCONDITIONAL_JUMP)  ; LAB_00578177
    PUSH 0x5ece2b                       ; 0057823e | = "pressurePlate"
        ;   Label: LAB_0057823e
    ADD EBX,0x374                       ; 00578243
    PUSH EBX                            ; 00578249
    CALL FUN_0040b960                   ; 0057824a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0057824f
    POP ESI                             ; 00578252
    POP EBX                             ; 00578253
    RET                                 ; 00578254
    PUSH 0x5ece39                       ; 00578255 | = "whoTriggers"
        ;   Label: LAB_00578255
    PUSH EAX                            ; 0057825a
    CALL FUN_0040b960                   ; 0057825b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00578260
    PUSH 0x5ece45                       ; 00578263 | = "actorTriggerName"
    PUSH ESI                            ; 00578268
    CALL FUN_0040b730                   ; 00578269
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0057826e
    PUSH 0x5ece56                       ; 00578271 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x324]               ; 00578276
    PUSH EAX                            ; 0057827c
    CALL FUN_0040b730                   ; 0057827d
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00578282
    PUSH 0x5ece68                       ; 00578285 | = "lightMin"
    LEA EAX,[EBX + 0x378]               ; 0057828a
    PUSH EAX                            ; 00578290
    CALL FUN_0040b8e0                   ; 00578291
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00578296
    PUSH 0x5ece71                       ; 00578299 | = "lightMax"
    LEA EAX,[EBX + 0x37c]               ; 0057829e
    PUSH EAX                            ; 005782a4
    CALL FUN_0040b8e0                   ; 005782a5
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005782aa
    PUSH 0x5ece7a                       ; 005782ad | = "laserType"
    LEA EAX,[EBX + 0x450]               ; 005782b2
    PUSH EAX                            ; 005782b8
    CALL FUN_0040b960                   ; 005782b9
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005782be
    PUSH 0x5ece84                       ; 005782c1 | = "hitPoints"
    LEA EAX,[EBX + 0x454]               ; 005782c6
    PUSH EAX                            ; 005782cc
    CALL FUN_0040b8e0                   ; 005782cd
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005782d2
    PUSH 0x5ece8e                       ; 005782d5 | = "pressurePlate"
    LEA EAX,[EBX + 0x374]               ; 005782da
    PUSH EAX                            ; 005782e0
    CALL FUN_0040b960                   ; 005782e1
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV ECX,dword ptr [0x0061e420]      ; 005782e6 | DAT_0061e420
    ADD ESP,0x8                         ; 005782ec
    CMP ECX,0x8                         ; 005782ef
    JL 0x00578387                       ; 005782f2
        ;   XREF to: 00578387 (CONDITIONAL_JUMP)  ; LAB_00578387
    PUSH 0x5ece9c                       ; 005782f8 | = "testRadius"
    LEA EAX,[EBX + 0x2b4]               ; 005782fd
    PUSH EAX                            ; 00578303
    CALL FUN_0040b8e0                   ; 00578304
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00578309
    CMP dword ptr [0x0061e420],0x9      ; 0057830c | DAT_0061e420
        ;   Label: LAB_0057830c
    JL 0x00578329                       ; 00578313
        ;   XREF to: 00578329 (CONDITIONAL_JUMP)  ; LAB_00578329
    PUSH 0x5ecea7                       ; 00578315 | = "autoAimAtMe"
    LEA EAX,[EBX + 0x460]               ; 0057831a
    PUSH EAX                            ; 00578320
    CALL FUN_0040b960                   ; 00578321
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00578326
    CMP dword ptr [0x0061e420],0xa      ; 00578329 | DAT_0061e420
        ;   Label: LAB_00578329
    JL 0x00578346                       ; 00578330
        ;   XREF to: 00578346 (CONDITIONAL_JUMP)  ; LAB_00578346
    PUSH 0x5eceb3                       ; 00578332 | = "shape"
    LEA EAX,[EBX + 0x2cc]               ; 00578337
    PUSH EAX                            ; 0057833d
    CALL FUN_0040b960                   ; 0057833e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00578343
    CMP dword ptr [0x0061e420],0xb      ; 00578346 | DAT_0061e420
        ;   Label: LAB_00578346
    JL 0x00578363                       ; 0057834d
        ;   XREF to: 00578363 (CONDITIONAL_JUMP)  ; LAB_00578363
    PUSH 0x5eceb9                       ; 0057834f | = "damageActorWildcard"
    LEA EAX,[EBX + 0x464]               ; 00578354
    PUSH EAX                            ; 0057835a
    CALL FUN_0040b730                   ; 0057835b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00578360
    CMP dword ptr [0x0061e420],0xc      ; 00578363 | DAT_0061e420
        ;   Label: LAB_00578363
    JL 0x0057821a                       ; 0057836a
        ;   XREF to: 0057821a (CONDITIONAL_JUMP)  ; LAB_0057821a
    PUSH 0x5ececd                       ; 00578370 | = "hiliteActor"
    ADD EBX,0x458                       ; 00578375
    PUSH EBX                            ; 0057837b
    CALL FUN_0040b9e0                   ; 0057837c
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00578381
    POP ESI                             ; 00578384
    POP EBX                             ; 00578385
    RET                                 ; 00578386
    PUSH EBX                            ; 00578387
        ;   Label: LAB_00578387
    CALL FUN_00578650                   ; 00578388
        ;   XREF to: 00578650 (UNCONDITIONAL_CALL)  ; undefined FUN_00578650()
    ADD ESP,0x4                         ; 0057838d
    JMP 0x0057830c                      ; 00578390
        ;   XREF to: 0057830c (UNCONDITIONAL_JUMP)  ; LAB_0057830c

