; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411280(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005d3693
;   TerminatedCString s_Bip01_L_ForeArm_005d369e
;   TerminatedCString s_Bip01_R_ForeArm_005d36ae
;   TerminatedCString s_Bip01_L_UpperArm_005d36be
;   TerminatedCString s_Bip01_R_UpperArm_005d36cf
;   TerminatedCString s_Bip01_L_Foot_005d36e0
;   TerminatedCString s_Bip01_R_Foot_005d36ed
;   TerminatedCString s_Bip01_L_Hand_005d36fa
;   TerminatedCString s_Bip01_R_Hand_005d3707
;   TerminatedCString s_Bip01_Spine_005d3714
;   TerminatedCString s_Bip01_Spine1_005d3720
;   TerminatedCString s_Bip01_Spine2_005d372d
;   TerminatedCString s_Bip01_Head_005d373a
;   TerminatedCString s_Bip01_L_UpperArm_005d3745
;   TerminatedCString s_Bip01_R_UpperArm_005d3756
;   ... and 28 more
;
; Called Functions:
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00565780
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411280
        ;   Label: FUN_00411280
    PUSH ESI                            ; 00411281
    MOV EBX,dword ptr [ESP + 0xc]       ; 00411282
    PUSH EDI                            ; 00411286
    PUSH EBX                            ; 00411287
    MOV dword ptr [EBX + 0xc268],0x0    ; 00411288
    CALL FUN_004a0510                   ; 00411292
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 00411297
    LEA EDI,[EBX + 0x158]               ; 0041129a
    PUSH EDI                            ; 004112a0
    CALL FUN_00569b20                   ; 004112a1
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 004112a6
    PUSH EDI                            ; 004112a9
    CALL FUN_00569f30                   ; 004112aa
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004112af
    PUSH 0x1                            ; 004112b2
    PUSH 0x5d3693                       ; 004112b4 | = "Bip01 Head"
    PUSH EAX                            ; 004112b9
    MOV ESI,EAX                         ; 004112ba
    CALL FUN_005634f0                   ; 004112bc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004112c1
    PUSH 0x1                            ; 004112c4
    PUSH 0x5d369e                       ; 004112c6 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004112cb
    MOV [0x007c374c],EAX                ; 004112cc | DAT_007c374c
    CALL FUN_005634f0                   ; 004112d1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004112d6
    PUSH 0x1                            ; 004112d9
    PUSH 0x5d36ae                       ; 004112db | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004112e0
    MOV [0x007c3758],EAX                ; 004112e1 | DAT_007c3758
    CALL FUN_005634f0                   ; 004112e6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004112eb
    PUSH 0x1                            ; 004112ee
    PUSH 0x5d36be                       ; 004112f0 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004112f5
    MOV [0x007c375c],EAX                ; 004112f6 | DAT_007c375c
    CALL FUN_005634f0                   ; 004112fb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00411300
    PUSH 0x1                            ; 00411303
    PUSH 0x5d36cf                       ; 00411305 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0041130a
    MOV [0x007c3760],EAX                ; 0041130b | DAT_007c3760
    CALL FUN_005634f0                   ; 00411310
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00411315
    PUSH 0x1                            ; 00411318
    PUSH 0x5d36e0                       ; 0041131a | = "Bip01 L Foot"
    PUSH ESI                            ; 0041131f
    MOV [0x007c3764],EAX                ; 00411320 | DAT_007c3764
    CALL FUN_005634f0                   ; 00411325
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0041132a
    PUSH 0x1                            ; 0041132d
    PUSH 0x5d36ed                       ; 0041132f | = "Bip01 R Foot"
    PUSH ESI                            ; 00411334
    MOV [0x007c3768],EAX                ; 00411335 | DAT_007c3768
    CALL FUN_005634f0                   ; 0041133a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0041133f
    PUSH 0x1                            ; 00411342
    PUSH 0x5d36fa                       ; 00411344 | = "Bip01 L Hand"
    PUSH ESI                            ; 00411349
    MOV [0x007c376c],EAX                ; 0041134a | DAT_007c376c
    CALL FUN_005634f0                   ; 0041134f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00411354
    MOV [0x007c3750],EAX                ; 00411357 | DAT_007c3750
    PUSH 0x1                            ; 0041135c
    PUSH 0x5d3707                       ; 0041135e | = "Bip01 R Hand"
    PUSH ESI                            ; 00411363
    CALL FUN_005634f0                   ; 00411364
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00411369
    PUSH 0x1                            ; 0041136c
    PUSH 0x5d3714                       ; 0041136e | = "Bip01 Spine"
    PUSH ESI                            ; 00411373
    MOV [0x007c3754],EAX                ; 00411374 | DAT_007c3754
    CALL FUN_005634f0                   ; 00411379
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0041137e
    PUSH 0x1                            ; 00411381
    PUSH 0x5d3720                       ; 00411383 | = "Bip01 Spine1"
    PUSH ESI                            ; 00411388
    MOV [0x007c3770],EAX                ; 00411389 | DAT_007c3770
    CALL FUN_005634f0                   ; 0041138e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00411393
    PUSH 0x1                            ; 00411396
    PUSH 0x5d372d                       ; 00411398 | = "Bip01 Spine2"
    PUSH ESI                            ; 0041139d
    MOV [0x007c3774],EAX                ; 0041139e | DAT_007c3774
    CALL FUN_005634f0                   ; 004113a3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004113a8
    PUSH 0x1                            ; 004113ab
    PUSH 0x5d373a                       ; 004113ad | = "Bip01 Head"
    PUSH ESI                            ; 004113b2
    MOV [0x007c3778],EAX                ; 004113b3 | DAT_007c3778
    CALL FUN_005634f0                   ; 004113b8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004113bd
    PUSH 0x1                            ; 004113c0
    PUSH 0x5d3745                       ; 004113c2 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004113c7
    MOV [0x007c374c],EAX                ; 004113c8 | DAT_007c374c
    CALL FUN_005634f0                   ; 004113cd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004113d2
    PUSH 0x1                            ; 004113d5
    PUSH 0x5d3756                       ; 004113d7 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004113dc
    MOV [0x007c3760],EAX                ; 004113dd | DAT_007c3760
    CALL FUN_005634f0                   ; 004113e2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004113e7
    PUSH 0x1                            ; 004113ea
    PUSH 0x5d3767                       ; 004113ec | = "Bip01 Spine"
    PUSH ESI                            ; 004113f1
    MOV [0x007c3764],EAX                ; 004113f2 | DAT_007c3764
    CALL FUN_005634f0                   ; 004113f7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004113fc
    PUSH 0x1                            ; 004113ff
    PUSH 0x5d3773                       ; 00411401 | = "Bip01 Spine2"
    PUSH ESI                            ; 00411406
    MOV [0x007c3770],EAX                ; 00411407 | DAT_007c3770
    CALL FUN_005634f0                   ; 0041140c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00411411
    PUSH EDI                            ; 00411414
    MOV [0x007c3778],EAX                ; 00411415 | DAT_007c3778
    CALL FUN_00569eb0                   ; 0041141a
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    MOV ESI,EAX                         ; 0041141f
    ADD ESP,0x4                         ; 00411421
    POP EDI                             ; 00411424
    PUSH 0x1                            ; 00411425
    PUSH 0x5d3780                       ; 00411427 | = "head01"
    PUSH EAX                            ; 0041142c
    CALL FUN_00565780                   ; 0041142d
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00411432
    PUSH 0x1                            ; 00411435
    PUSH 0x5d3787                       ; 00411437 | = "torso01"
    PUSH ESI                            ; 0041143c
    MOV dword ptr [EBX + 0xc26c],EAX    ; 0041143d
    CALL FUN_00565780                   ; 00411443
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00411448
    PUSH 0x1                            ; 0041144b
    PUSH 0x5d378f                       ; 0041144d | = "ass01"
    PUSH ESI                            ; 00411452
    MOV dword ptr [EBX + 0xc270],EAX    ; 00411453
    CALL FUN_00565780                   ; 00411459
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0041145e
    PUSH 0x1                            ; 00411461
    PUSH 0x5d3795                       ; 00411463 | = "tail01"
    PUSH ESI                            ; 00411468
    MOV dword ptr [EBX + 0xc274],EAX    ; 00411469
    CALL FUN_00565780                   ; 0041146f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00411474
    PUSH 0x1                            ; 00411477
    PUSH 0x5d379c                       ; 00411479 | = "lthigh01"
    PUSH ESI                            ; 0041147e
    MOV dword ptr [EBX + 0xc278],EAX    ; 0041147f
    CALL FUN_00565780                   ; 00411485
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0041148a
    PUSH 0x1                            ; 0041148d
    PUSH 0x5d37a5                       ; 0041148f | = "lshin01"
    PUSH ESI                            ; 00411494
    MOV dword ptr [EBX + 0xc27c],EAX    ; 00411495
    CALL FUN_00565780                   ; 0041149b
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004114a0
    PUSH 0x1                            ; 004114a3
    PUSH 0x5d37ad                       ; 004114a5 | = "rthigh01"
    PUSH ESI                            ; 004114aa
    MOV dword ptr [EBX + 0xc280],EAX    ; 004114ab
    CALL FUN_00565780                   ; 004114b1
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004114b6
    PUSH 0x1                            ; 004114b9
    PUSH 0x5d37b6                       ; 004114bb | = "rshin01"
    PUSH ESI                            ; 004114c0
    MOV dword ptr [EBX + 0xc284],EAX    ; 004114c1
    CALL FUN_00565780                   ; 004114c7
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004114cc
    PUSH 0x1                            ; 004114cf
    PUSH 0x5d37be                       ; 004114d1 | = "larm01"
    PUSH ESI                            ; 004114d6
    MOV dword ptr [EBX + 0xc288],EAX    ; 004114d7
    CALL FUN_00565780                   ; 004114dd
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004114e2
    MOV dword ptr [EBX + 0xc28c],EAX    ; 004114e5
    PUSH 0x1                            ; 004114eb
    PUSH 0x5d37c5                       ; 004114ed | = "l4arm01"
    PUSH ESI                            ; 004114f2
    CALL FUN_00565780                   ; 004114f3
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004114f8
    PUSH 0x1                            ; 004114fb
    PUSH 0x5d37cd                       ; 004114fd | = "rarm01"
    PUSH ESI                            ; 00411502
    MOV dword ptr [EBX + 0xc290],EAX    ; 00411503
    CALL FUN_00565780                   ; 00411509
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0041150e
    PUSH 0x1                            ; 00411511
    PUSH 0x5d37d4                       ; 00411513 | = "r4arm01"
    PUSH ESI                            ; 00411518
    MOV dword ptr [EBX + 0xc294],EAX    ; 00411519
    CALL FUN_00565780                   ; 0041151f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00411524
    PUSH 0x1                            ; 00411527
    PUSH 0x5d37dc                       ; 00411529 | = "lwing"
    PUSH ESI                            ; 0041152e
    MOV dword ptr [EBX + 0xc298],EAX    ; 0041152f
    CALL FUN_00565780                   ; 00411535
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0041153a
    PUSH 0x1                            ; 0041153d
    PUSH 0x5d37e2                       ; 0041153f | = "rwing"
    PUSH ESI                            ; 00411544
    MOV dword ptr [EBX + 0xc29c],EAX    ; 00411545
    CALL FUN_00565780                   ; 0041154b
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 00411550
    MOV dword ptr [EBX + 0xc2a8],0x0    ; 0041155a
    MOV dword ptr [EBX + 0xc2ac],0x0    ; 00411564
    MOV dword ptr [EBX + 0xc2b0],0x0    ; 0041156e
    ADD ESP,0xc                         ; 00411578
    MOV dword ptr [EBX + 0xc2a0],EAX    ; 0041157b
    POP ESI                             ; 00411581
    POP EBX                             ; 00411582
    RET                                 ; 00411583

