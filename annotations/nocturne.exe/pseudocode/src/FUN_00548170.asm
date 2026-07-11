; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548170(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_triggerState_005969c6+1
;   string s_triggerSize_005969d4
;   string s_triggerType_005969e0
;   string s_onName_005969ec
;   string s_offName_005969f3
;   string s_whoTriggers_005969fb
;   string s_actorTriggerName_00596a07
;   string s_lightMin_00596a18
;   string s_lightMax_00596a21
;   string s_laserType_00596a2a
;   string s_actorTriggerTypes_00596a34
;   string s_hitPoints_00596a46
;   string s_pressurePlate_00596a50
;   string s_whoTriggers_00596a5e
;   string s_actorTriggerName_00596a6a
;   ... and 11 more
;
; Called Functions:
;   FUN_0040c450
;   FUN_0040c6d0
;   FUN_0040c880
;   FUN_0040c900
;   FUN_0040d2d0
;   FUN_00548680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548170
        ;   Label: FUN_00548170
    PUSH ESI                            ; 00548171
    MOV EBX,dword ptr [ESP + 0xc]       ; 00548172
    PUSH EBX                            ; 00548176
    CALL FUN_0040d2d0                   ; 00548177
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 0054817c
    PUSH 0x5969c7                       ; 0054817f | s_triggerState_005969c6+1
    LEA EAX,[EBX + 0x164]               ; 00548184
    PUSH EAX                            ; 0054818a
    CALL FUN_0040c900                   ; 0054818b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 00548190
    PUSH 0x5969d4                       ; 00548193 | = "triggerSize"
    LEA EAX,[EBX + 0x158]               ; 00548198
    PUSH EAX                            ; 0054819e
    CALL FUN_0040c450                   ; 0054819f
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x8                         ; 005481a4
    PUSH 0x5969e0                       ; 005481a7 | = "triggerType"
    LEA EAX,[EBX + 0x154]               ; 005481ac
    PUSH EAX                            ; 005481b2
    CALL FUN_0040c900                   ; 005481b3
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 005481b8
    PUSH 0x5969ec                       ; 005481bb | = "onName"
    LEA EAX,[EBX + 0x21c]               ; 005481c0
    PUSH EAX                            ; 005481c6
    CALL FUN_0040c6d0                   ; 005481c7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 005481cc
    PUSH 0x5969f3                       ; 005481cf | = "offName"
    LEA EAX,[EBX + 0x280]               ; 005481d4
    PUSH EAX                            ; 005481da
    LEA ESI,[EBX + 0x170]               ; 005481db
    CALL FUN_0040c6d0                   ; 005481e1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    MOV EDX,dword ptr [0x005c1130]      ; 005481e6 | DAT_005c1130
    ADD ESP,0x8                         ; 005481ec
    LEA EAX,[EBX + 0x16c]               ; 005481ef
    CMP EDX,0x7                         ; 005481f5
    JGE 0x005482e5                      ; 005481f8
        ;   XREF to: 005482e5 (CONDITIONAL_JUMP)  ; LAB_005482e5
    CMP EDX,0x2                         ; 005481fe
    JGE 0x005482ad                      ; 00548201
        ;   XREF to: 005482ad (CONDITIONAL_JUMP)  ; LAB_005482ad
    CMP dword ptr [0x005c1130],0x3      ; 00548207 | DAT_005c1130
        ;   Label: LAB_00548207
    JL 0x00548238                       ; 0054820e
        ;   XREF to: 00548238 (CONDITIONAL_JUMP)  ; LAB_00548238
    PUSH 0x596a18                       ; 00548210 | = "lightMin"
    LEA EAX,[EBX + 0x214]               ; 00548215
    PUSH EAX                            ; 0054821b
    CALL FUN_0040c880                   ; 0054821c
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00548221
    PUSH 0x596a21                       ; 00548224 | = "lightMax"
    LEA EAX,[EBX + 0x218]               ; 00548229
    PUSH EAX                            ; 0054822f
    CALL FUN_0040c880                   ; 00548230
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00548235
    CMP dword ptr [0x005c1130],0x4      ; 00548238 | DAT_005c1130
        ;   Label: LAB_00548238
    JL 0x0054825e                       ; 0054823f
        ;   XREF to: 0054825e (CONDITIONAL_JUMP)  ; LAB_0054825e
    CMP dword ptr [EBX + 0x16c],0x5     ; 00548241
    JNZ 0x0054825e                      ; 00548248
        ;   XREF to: 0054825e (CONDITIONAL_JUMP)  ; LAB_0054825e
    PUSH 0x596a2a                       ; 0054824a | = "laserType"
    LEA EAX,[EBX + 0x2ec]               ; 0054824f
    PUSH EAX                            ; 00548255
    CALL FUN_0040c900                   ; 00548256
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0054825b
    CMP dword ptr [0x005c1130],0x5      ; 0054825e | DAT_005c1130
        ;   Label: LAB_0054825e
    JL 0x005482a1                       ; 00548265
        ;   XREF to: 005482a1 (CONDITIONAL_JUMP)  ; LAB_005482a1
    CMP dword ptr [EBX + 0x16c],0x1     ; 00548267
    JNZ 0x00548284                      ; 0054826e
        ;   XREF to: 00548284 (CONDITIONAL_JUMP)  ; LAB_00548284
    PUSH 0x596a34                       ; 00548270 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x1c0]               ; 00548275
    PUSH EAX                            ; 0054827b
    CALL FUN_0040c6d0                   ; 0054827c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 00548281
    CMP dword ptr [EBX + 0x16c],0x7     ; 00548284
        ;   Label: LAB_00548284
    JNZ 0x005482a1                      ; 0054828b
        ;   XREF to: 005482a1 (CONDITIONAL_JUMP)  ; LAB_005482a1
    PUSH 0x596a46                       ; 0054828d | = "hitPoints"
    LEA EAX,[EBX + 0x2f0]               ; 00548292
    PUSH EAX                            ; 00548298
    CALL FUN_0040c880                   ; 00548299
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 0054829e
    CMP dword ptr [0x005c1130],0x6      ; 005482a1 | DAT_005c1130
        ;   Label: LAB_005482a1
    JGE 0x005482ce                      ; 005482a8
        ;   XREF to: 005482ce (CONDITIONAL_JUMP)  ; LAB_005482ce
    POP ESI                             ; 005482aa
        ;   Label: LAB_005482aa
    POP EBX                             ; 005482ab
    RET                                 ; 005482ac
    PUSH 0x5969fb                       ; 005482ad | = "whoTriggers"
        ;   Label: LAB_005482ad
    PUSH EAX                            ; 005482b2
    CALL FUN_0040c900                   ; 005482b3
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 005482b8
    PUSH 0x596a07                       ; 005482bb | = "actorTriggerName"
    PUSH ESI                            ; 005482c0
    CALL FUN_0040c6d0                   ; 005482c1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 005482c6
    JMP 0x00548207                      ; 005482c9
        ;   XREF to: 00548207 (UNCONDITIONAL_JUMP)  ; LAB_00548207
    PUSH 0x596a50                       ; 005482ce | = "pressurePlate"
        ;   Label: LAB_005482ce
    ADD EBX,0x210                       ; 005482d3
    PUSH EBX                            ; 005482d9
    CALL FUN_0040c900                   ; 005482da
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 005482df
    POP ESI                             ; 005482e2
    POP EBX                             ; 005482e3
    RET                                 ; 005482e4
    PUSH 0x596a5e                       ; 005482e5 | = "whoTriggers"
        ;   Label: LAB_005482e5
    PUSH EAX                            ; 005482ea
    CALL FUN_0040c900                   ; 005482eb
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 005482f0
    PUSH 0x596a6a                       ; 005482f3 | = "actorTriggerName"
    PUSH ESI                            ; 005482f8
    CALL FUN_0040c6d0                   ; 005482f9
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 005482fe
    PUSH 0x596a7b                       ; 00548301 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x1c0]               ; 00548306
    PUSH EAX                            ; 0054830c
    CALL FUN_0040c6d0                   ; 0054830d
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 00548312
    PUSH 0x596a8d                       ; 00548315 | = "lightMin"
    LEA EAX,[EBX + 0x214]               ; 0054831a
    PUSH EAX                            ; 00548320
    CALL FUN_0040c880                   ; 00548321
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00548326
    PUSH 0x596a96                       ; 00548329 | = "lightMax"
    LEA EAX,[EBX + 0x218]               ; 0054832e
    PUSH EAX                            ; 00548334
    CALL FUN_0040c880                   ; 00548335
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 0054833a
    PUSH 0x596a9f                       ; 0054833d | = "laserType"
    LEA EAX,[EBX + 0x2ec]               ; 00548342
    PUSH EAX                            ; 00548348
    CALL FUN_0040c900                   ; 00548349
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0054834e
    PUSH 0x596aa9                       ; 00548351 | = "hitPoints"
    LEA EAX,[EBX + 0x2f0]               ; 00548356
    PUSH EAX                            ; 0054835c
    CALL FUN_0040c880                   ; 0054835d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00548362
    PUSH 0x596ab3                       ; 00548365 | = "pressurePlate"
    LEA EAX,[EBX + 0x210]               ; 0054836a
    PUSH EAX                            ; 00548370
    CALL FUN_0040c900                   ; 00548371
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    MOV ECX,dword ptr [0x005c1130]      ; 00548376 | DAT_005c1130
    ADD ESP,0x8                         ; 0054837c
    CMP ECX,0x8                         ; 0054837f
    JL 0x005483f6                       ; 00548382
        ;   XREF to: 005483f6 (CONDITIONAL_JUMP)  ; LAB_005483f6
    PUSH 0x596ac1                       ; 00548384 | = "testRadius"
    LEA EAX,[EBX + 0x150]               ; 00548389
    PUSH EAX                            ; 0054838f
    CALL FUN_0040c880                   ; 00548390
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00548395
    CMP dword ptr [0x005c1130],0x9      ; 00548398 | DAT_005c1130
        ;   Label: LAB_00548398
    JL 0x005483b5                       ; 0054839f
        ;   XREF to: 005483b5 (CONDITIONAL_JUMP)  ; LAB_005483b5
    PUSH 0x596acc                       ; 005483a1 | = "autoAimAtMe"
    LEA EAX,[EBX + 0x2f8]               ; 005483a6
    PUSH EAX                            ; 005483ac
    CALL FUN_0040c900                   ; 005483ad
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 005483b2
    CMP dword ptr [0x005c1130],0xa      ; 005483b5 | DAT_005c1130
        ;   Label: LAB_005483b5
    JL 0x005483d2                       ; 005483bc
        ;   XREF to: 005483d2 (CONDITIONAL_JUMP)  ; LAB_005483d2
    PUSH 0x596ad8                       ; 005483be | = "shape"
    LEA EAX,[EBX + 0x168]               ; 005483c3
    PUSH EAX                            ; 005483c9
    CALL FUN_0040c900                   ; 005483ca
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 005483cf
    CMP dword ptr [0x005c1130],0xb      ; 005483d2 | DAT_005c1130
        ;   Label: LAB_005483d2
    JL 0x005482aa                       ; 005483d9
        ;   XREF to: 005482aa (CONDITIONAL_JUMP)  ; LAB_005482aa
    PUSH 0x596ade                       ; 005483df | = "damageActorWildcard"
    ADD EBX,0x2fc                       ; 005483e4
    PUSH EBX                            ; 005483ea
    CALL FUN_0040c6d0                   ; 005483eb
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 005483f0
    POP ESI                             ; 005483f3
    POP EBX                             ; 005483f4
    RET                                 ; 005483f5
    PUSH EBX                            ; 005483f6
        ;   Label: LAB_005483f6
    CALL FUN_00548680                   ; 005483f7
        ;   XREF to: 00548680 (UNCONDITIONAL_CALL)  ; undefined FUN_00548680()
    ADD ESP,0x4                         ; 005483fc
    JMP 0x00548398                      ; 005483ff
        ;   XREF to: 00548398 (UNCONDITIONAL_JUMP)  ; LAB_00548398

