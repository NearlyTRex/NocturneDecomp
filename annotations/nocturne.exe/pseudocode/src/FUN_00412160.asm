; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00412160(int param_1)
;
;
; Referenced Globals:
;   string s_Bip01_Head_00578849
;   string s_Bip01_L_ForeArm_00578854
;   string s_Bip01_R_ForeArm_00578864
;   string s_Bip01_L_UpperArm_00578874
;   string s_Bip01_R_UpperArm_00578885
;   string s_Bip01_L_Foot_00578896
;   string s_Bip01_R_Foot_005788a3
;   string s_Bip01_L_Hand_005788b0
;   string s_Bip01_R_Hand_005788bd
;   string s_Bip01_Spine_005788ca
;   string s_Bip01_Spine1_005788d6
;   string s_Bip01_Spine2_005788e3
;   string s_Bip01_Head_005788f0
;   string s_Bip01_L_UpperArm_005788fb
;   string s_Bip01_R_UpperArm_0057890c
;   ... and 28 more
;
; Called Functions:
;   FUN_004796b0
;   FUN_005179d0
;   FUN_00519b30
;   FUN_0051dcd0
;   FUN_0051e020
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412160
        ;   Label: FUN_00412160
    PUSH ESI                            ; 00412161
    MOV EBX,dword ptr [ESP + 0xc]       ; 00412162
    PUSH EDI                            ; 00412166
    PUSH EBX                            ; 00412167
    CALL FUN_004796b0                   ; 00412168
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 0041216d
    LEA EDI,[EBX + 0x150]               ; 00412170
    PUSH EDI                            ; 00412176
    CALL FUN_0051dcd0                   ; 00412177
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 0041217c
    PUSH EDI                            ; 0041217f
    CALL FUN_0051e0a0                   ; 00412180
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 00412185
    PUSH 0x1                            ; 00412188
    PUSH 0x578849                       ; 0041218a | = "Bip01 Head"
    PUSH EAX                            ; 0041218f
    MOV ESI,EAX                         ; 00412190
    CALL FUN_005179d0                   ; 00412192
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00412197
    PUSH 0x1                            ; 0041219a
    PUSH 0x578854                       ; 0041219c | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004121a1
    MOV [0x0076459c],EAX                ; 004121a2 | DAT_0076459c
    CALL FUN_005179d0                   ; 004121a7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004121ac
    PUSH 0x1                            ; 004121af
    PUSH 0x578864                       ; 004121b1 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004121b6
    MOV [0x007645a8],EAX                ; 004121b7 | DAT_007645a8
    CALL FUN_005179d0                   ; 004121bc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004121c1
    PUSH 0x1                            ; 004121c4
    PUSH 0x578874                       ; 004121c6 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004121cb
    MOV [0x007645ac],EAX                ; 004121cc | DAT_007645ac
    CALL FUN_005179d0                   ; 004121d1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004121d6
    PUSH 0x1                            ; 004121d9
    PUSH 0x578885                       ; 004121db | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004121e0
    MOV [0x007645b0],EAX                ; 004121e1 | DAT_007645b0
    CALL FUN_005179d0                   ; 004121e6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004121eb
    PUSH 0x1                            ; 004121ee
    PUSH 0x578896                       ; 004121f0 | = "Bip01 L Foot"
    PUSH ESI                            ; 004121f5
    MOV [0x007645b4],EAX                ; 004121f6 | DAT_007645b4
    CALL FUN_005179d0                   ; 004121fb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00412200
    PUSH 0x1                            ; 00412203
    PUSH 0x5788a3                       ; 00412205 | = "Bip01 R Foot"
    PUSH ESI                            ; 0041220a
    MOV [0x007645b8],EAX                ; 0041220b | DAT_007645b8
    CALL FUN_005179d0                   ; 00412210
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00412215
    PUSH 0x1                            ; 00412218
    PUSH 0x5788b0                       ; 0041221a | = "Bip01 L Hand"
    PUSH ESI                            ; 0041221f
    MOV [0x007645bc],EAX                ; 00412220 | DAT_007645bc
    CALL FUN_005179d0                   ; 00412225
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0041222a
    MOV [0x007645a0],EAX                ; 0041222d | DAT_007645a0
    PUSH 0x1                            ; 00412232
    PUSH 0x5788bd                       ; 00412234 | = "Bip01 R Hand"
    PUSH ESI                            ; 00412239
    CALL FUN_005179d0                   ; 0041223a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0041223f
    PUSH 0x1                            ; 00412242
    PUSH 0x5788ca                       ; 00412244 | = "Bip01 Spine"
    PUSH ESI                            ; 00412249
    MOV [0x007645a4],EAX                ; 0041224a | DAT_007645a4
    CALL FUN_005179d0                   ; 0041224f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00412254
    PUSH 0x1                            ; 00412257
    PUSH 0x5788d6                       ; 00412259 | = "Bip01 Spine1"
    PUSH ESI                            ; 0041225e
    MOV [0x007645c0],EAX                ; 0041225f | DAT_007645c0
    CALL FUN_005179d0                   ; 00412264
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00412269
    PUSH 0x1                            ; 0041226c
    PUSH 0x5788e3                       ; 0041226e | = "Bip01 Spine2"
    PUSH ESI                            ; 00412273
    MOV [0x007645c4],EAX                ; 00412274 | DAT_007645c4
    CALL FUN_005179d0                   ; 00412279
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0041227e
    PUSH 0x1                            ; 00412281
    PUSH 0x5788f0                       ; 00412283 | = "Bip01 Head"
    PUSH ESI                            ; 00412288
    MOV [0x007645c8],EAX                ; 00412289 | DAT_007645c8
    CALL FUN_005179d0                   ; 0041228e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00412293
    PUSH 0x1                            ; 00412296
    PUSH 0x5788fb                       ; 00412298 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0041229d
    MOV [0x0076459c],EAX                ; 0041229e | DAT_0076459c
    CALL FUN_005179d0                   ; 004122a3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004122a8
    PUSH 0x1                            ; 004122ab
    PUSH 0x57890c                       ; 004122ad | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004122b2
    MOV [0x007645b0],EAX                ; 004122b3 | DAT_007645b0
    CALL FUN_005179d0                   ; 004122b8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004122bd
    PUSH 0x1                            ; 004122c0
    PUSH 0x57891d                       ; 004122c2 | = "Bip01 Spine"
    PUSH ESI                            ; 004122c7
    MOV [0x007645b4],EAX                ; 004122c8 | DAT_007645b4
    CALL FUN_005179d0                   ; 004122cd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004122d2
    PUSH 0x1                            ; 004122d5
    PUSH 0x578929                       ; 004122d7 | = "Bip01 Spine2"
    PUSH ESI                            ; 004122dc
    MOV [0x007645c0],EAX                ; 004122dd | DAT_007645c0
    CALL FUN_005179d0                   ; 004122e2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004122e7
    PUSH EDI                            ; 004122ea
    MOV [0x007645c8],EAX                ; 004122eb | DAT_007645c8
    CALL FUN_0051e020                   ; 004122f0
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    MOV ESI,EAX                         ; 004122f5
    ADD ESP,0x4                         ; 004122f7
    POP EDI                             ; 004122fa
    PUSH 0x1                            ; 004122fb
    PUSH 0x578936                       ; 004122fd | = "head01"
    PUSH EAX                            ; 00412302
    CALL FUN_00519b30                   ; 00412303
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00412308
    PUSH 0x1                            ; 0041230b
    PUSH 0x57893d                       ; 0041230d | = "torso01"
    PUSH ESI                            ; 00412312
    MOV dword ptr [EBX + 0xbd24],EAX    ; 00412313
    CALL FUN_00519b30                   ; 00412319
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0041231e
    PUSH 0x1                            ; 00412321
    PUSH 0x578945                       ; 00412323 | = "ass01"
    PUSH ESI                            ; 00412328
    MOV dword ptr [EBX + 0xbd28],EAX    ; 00412329
    CALL FUN_00519b30                   ; 0041232f
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00412334
    PUSH 0x1                            ; 00412337
    PUSH 0x57894b                       ; 00412339 | = "tail01"
    PUSH ESI                            ; 0041233e
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 0041233f
    CALL FUN_00519b30                   ; 00412345
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0041234a
    PUSH 0x1                            ; 0041234d
    PUSH 0x578952                       ; 0041234f | = "lthigh01"
    PUSH ESI                            ; 00412354
    MOV dword ptr [EBX + 0xbd30],EAX    ; 00412355
    CALL FUN_00519b30                   ; 0041235b
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00412360
    PUSH 0x1                            ; 00412363
    PUSH 0x57895b                       ; 00412365 | = "lshin01"
    PUSH ESI                            ; 0041236a
    MOV dword ptr [EBX + 0xbd34],EAX    ; 0041236b
    CALL FUN_00519b30                   ; 00412371
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00412376
    PUSH 0x1                            ; 00412379
    PUSH 0x578963                       ; 0041237b | = "rthigh01"
    PUSH ESI                            ; 00412380
    MOV dword ptr [EBX + 0xbd38],EAX    ; 00412381
    CALL FUN_00519b30                   ; 00412387
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0041238c
    PUSH 0x1                            ; 0041238f
    PUSH 0x57896c                       ; 00412391 | = "rshin01"
    PUSH ESI                            ; 00412396
    MOV dword ptr [EBX + 0xbd3c],EAX    ; 00412397
    CALL FUN_00519b30                   ; 0041239d
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004123a2
    PUSH 0x1                            ; 004123a5
    PUSH 0x578974                       ; 004123a7 | = "larm01"
    PUSH ESI                            ; 004123ac
    MOV dword ptr [EBX + 0xbd40],EAX    ; 004123ad
    CALL FUN_00519b30                   ; 004123b3
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004123b8
    MOV dword ptr [EBX + 0xbd44],EAX    ; 004123bb
    PUSH 0x1                            ; 004123c1
    PUSH 0x57897b                       ; 004123c3 | = "l4arm01"
    PUSH ESI                            ; 004123c8
    CALL FUN_00519b30                   ; 004123c9
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004123ce
    PUSH 0x1                            ; 004123d1
    PUSH 0x578983                       ; 004123d3 | = "rarm01"
    PUSH ESI                            ; 004123d8
    MOV dword ptr [EBX + 0xbd48],EAX    ; 004123d9
    CALL FUN_00519b30                   ; 004123df
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004123e4
    PUSH 0x1                            ; 004123e7
    PUSH 0x57898a                       ; 004123e9 | = "r4arm01"
    PUSH ESI                            ; 004123ee
    MOV dword ptr [EBX + 0xbd4c],EAX    ; 004123ef
    CALL FUN_00519b30                   ; 004123f5
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004123fa
    PUSH 0x1                            ; 004123fd
    PUSH 0x578992                       ; 004123ff | = "lwing"
    PUSH ESI                            ; 00412404
    MOV dword ptr [EBX + 0xbd50],EAX    ; 00412405
    CALL FUN_00519b30                   ; 0041240b
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00412410
    PUSH 0x1                            ; 00412413
    PUSH 0x578998                       ; 00412415 | = "rwing"
    PUSH ESI                            ; 0041241a
    MOV dword ptr [EBX + 0xbd54],EAX    ; 0041241b
    CALL FUN_00519b30                   ; 00412421
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    MOV dword ptr [EBX + 0xbd5c],0x0    ; 00412426
    MOV dword ptr [EBX + 0xbd60],0x0    ; 00412430
    MOV dword ptr [EBX + 0xbd64],0x0    ; 0041243a
    MOV dword ptr [EBX + 0xbd68],0x0    ; 00412444
    ADD ESP,0xc                         ; 0041244e
    MOV dword ptr [EBX + 0xbd58],EAX    ; 00412451
    POP ESI                             ; 00412457
    POP EBX                             ; 00412458
    RET                                 ; 00412459

