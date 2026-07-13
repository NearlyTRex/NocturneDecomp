; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004134a0(int param_1)
;
;
; Referenced Globals:
;   string s_Bip01_Head_00578aa7
;   string s_Bip01_L_ForeArm_00578ab2
;   string s_Bip01_R_ForeArm_00578ac2
;   string s_Bip01_L_UpperArm_00578ad2
;   string s_Bip01_R_UpperArm_00578ae3
;   string s_Bip01_L_Foot_00578af4
;   string s_Bip01_R_Foot_00578b01
;   string s_Bip01_L_Hand_00578b0e
;   string s_Bip01_R_Hand_00578b1b
;   string s_Bip01_Spine_00578b28
;   string s_Bip01_Spine1_00578b34
;   string s_Bip01_Spine2_00578b41
;   string s_Bip01_Head_00578b4e
;   string s_Bip01_L_UpperArm_00578b59
;   string s_Bip01_R_UpperArm_00578b6a
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

    PUSH EBX                            ; 004134a0
        ;   Label: FUN_004134a0
    PUSH ESI                            ; 004134a1
    PUSH EDI                            ; 004134a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004134a3
    PUSH ESI                            ; 004134a7
    CALL FUN_004796b0                   ; 004134a8
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 004134ad
    LEA EDI,[ESI + 0x150]               ; 004134b0
    PUSH EDI                            ; 004134b6
    CALL FUN_0051dcd0                   ; 004134b7
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 004134bc
    PUSH EDI                            ; 004134bf
    CALL FUN_0051e0a0                   ; 004134c0
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 004134c5
    PUSH 0x1                            ; 004134c8
    PUSH 0x578aa7                       ; 004134ca | = "Bip01 Head"
    PUSH EAX                            ; 004134cf
    MOV EBX,EAX                         ; 004134d0
    CALL FUN_005179d0                   ; 004134d2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004134d7
    PUSH 0x1                            ; 004134da
    PUSH 0x578ab2                       ; 004134dc | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004134e1
    MOV [0x00764608],EAX                ; 004134e2 | DAT_00764608
    CALL FUN_005179d0                   ; 004134e7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004134ec
    PUSH 0x1                            ; 004134ef
    PUSH 0x578ac2                       ; 004134f1 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004134f6
    MOV [0x00764614],EAX                ; 004134f7 | DAT_00764614
    CALL FUN_005179d0                   ; 004134fc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00413501
    PUSH 0x1                            ; 00413504
    PUSH 0x578ad2                       ; 00413506 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041350b
    MOV [0x00764618],EAX                ; 0041350c | DAT_00764618
    CALL FUN_005179d0                   ; 00413511
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00413516
    PUSH 0x1                            ; 00413519
    PUSH 0x578ae3                       ; 0041351b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00413520
    MOV [0x0076461c],EAX                ; 00413521 | DAT_0076461c
    CALL FUN_005179d0                   ; 00413526
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0041352b
    PUSH 0x1                            ; 0041352e
    PUSH 0x578af4                       ; 00413530 | = "Bip01 L Foot"
    PUSH EBX                            ; 00413535
    MOV [0x00764620],EAX                ; 00413536 | DAT_00764620
    CALL FUN_005179d0                   ; 0041353b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00413540
    PUSH 0x1                            ; 00413543
    PUSH 0x578b01                       ; 00413545 | = "Bip01 R Foot"
    PUSH EBX                            ; 0041354a
    MOV [0x00764624],EAX                ; 0041354b | DAT_00764624
    CALL FUN_005179d0                   ; 00413550
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00413555
    PUSH 0x1                            ; 00413558
    PUSH 0x578b0e                       ; 0041355a | = "Bip01 L Hand"
    PUSH EBX                            ; 0041355f
    MOV [0x00764628],EAX                ; 00413560 | DAT_00764628
    CALL FUN_005179d0                   ; 00413565
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0041356a
    MOV [0x0076460c],EAX                ; 0041356d | DAT_0076460c
    PUSH 0x1                            ; 00413572
    PUSH 0x578b1b                       ; 00413574 | = "Bip01 R Hand"
    PUSH EBX                            ; 00413579
    CALL FUN_005179d0                   ; 0041357a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0041357f
    PUSH 0x1                            ; 00413582
    PUSH 0x578b28                       ; 00413584 | = "Bip01 Spine"
    PUSH EBX                            ; 00413589
    MOV [0x00764610],EAX                ; 0041358a | DAT_00764610
    CALL FUN_005179d0                   ; 0041358f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00413594
    PUSH 0x1                            ; 00413597
    PUSH 0x578b34                       ; 00413599 | = "Bip01 Spine1"
    PUSH EBX                            ; 0041359e
    MOV [0x0076462c],EAX                ; 0041359f | DAT_0076462c
    CALL FUN_005179d0                   ; 004135a4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004135a9
    PUSH 0x1                            ; 004135ac
    PUSH 0x578b41                       ; 004135ae | = "Bip01 Spine2"
    PUSH EBX                            ; 004135b3
    MOV [0x00764630],EAX                ; 004135b4 | DAT_00764630
    CALL FUN_005179d0                   ; 004135b9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004135be
    PUSH 0x1                            ; 004135c1
    PUSH 0x578b4e                       ; 004135c3 | = "Bip01 Head"
    PUSH EBX                            ; 004135c8
    MOV [0x00764634],EAX                ; 004135c9 | DAT_00764634
    CALL FUN_005179d0                   ; 004135ce
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004135d3
    PUSH 0x1                            ; 004135d6
    PUSH 0x578b59                       ; 004135d8 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004135dd
    MOV [0x00764608],EAX                ; 004135de | DAT_00764608
    CALL FUN_005179d0                   ; 004135e3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004135e8
    PUSH 0x1                            ; 004135eb
    PUSH 0x578b6a                       ; 004135ed | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004135f2
    MOV [0x0076461c],EAX                ; 004135f3 | DAT_0076461c
    CALL FUN_005179d0                   ; 004135f8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004135fd
    PUSH 0x1                            ; 00413600
    PUSH 0x578b7b                       ; 00413602 | = "Bip01 Spine"
    PUSH EBX                            ; 00413607
    MOV [0x00764620],EAX                ; 00413608 | DAT_00764620
    CALL FUN_005179d0                   ; 0041360d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00413612
    PUSH 0x1                            ; 00413615
    PUSH 0x578b87                       ; 00413617 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041361c
    MOV [0x0076462c],EAX                ; 0041361d | DAT_0076462c
    CALL FUN_005179d0                   ; 00413622
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00413627
    PUSH EDI                            ; 0041362a
    MOV [0x00764634],EAX                ; 0041362b | DAT_00764634
    CALL FUN_0051e020                   ; 00413630
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    MOV EBX,EAX                         ; 00413635
    ADD ESP,0x4                         ; 00413637
    PUSH 0x1                            ; 0041363a
    PUSH 0x578b94                       ; 0041363c | = "head01"
    PUSH EAX                            ; 00413641
    CALL FUN_00519b30                   ; 00413642
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00413647
    PUSH 0x1                            ; 0041364a
    PUSH 0x578b9b                       ; 0041364c | = "torso01"
    PUSH EBX                            ; 00413651
    MOV dword ptr [ESI + 0xbd88],EAX    ; 00413652
    CALL FUN_00519b30                   ; 00413658
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0041365d
    PUSH 0x1                            ; 00413660
    PUSH 0x578ba3                       ; 00413662 | = "larm01"
    PUSH EBX                            ; 00413667
    MOV dword ptr [ESI + 0xbd8c],EAX    ; 00413668
    CALL FUN_00519b30                   ; 0041366e
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00413673
    PUSH 0x1                            ; 00413676
    PUSH 0x578baa                       ; 00413678 | = "l4arm01"
    PUSH EBX                            ; 0041367d
    MOV dword ptr [ESI + 0xbd90],EAX    ; 0041367e
    CALL FUN_00519b30                   ; 00413684
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00413689
    PUSH 0x1                            ; 0041368c
    PUSH 0x578bb2                       ; 0041368e | = "rarm01"
    PUSH EBX                            ; 00413693
    MOV dword ptr [ESI + 0xbd94],EAX    ; 00413694
    CALL FUN_00519b30                   ; 0041369a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0041369f
    PUSH 0x1                            ; 004136a2
    PUSH 0x578bb9                       ; 004136a4 | = "r4arm01"
    PUSH EBX                            ; 004136a9
    MOV dword ptr [ESI + 0xbd98],EAX    ; 004136aa
    CALL FUN_00519b30                   ; 004136b0
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004136b5
    PUSH 0x1                            ; 004136b8
    PUSH 0x578bc1                       ; 004136ba | = "ass01"
    PUSH EBX                            ; 004136bf
    MOV dword ptr [ESI + 0xbd9c],EAX    ; 004136c0
    CALL FUN_00519b30                   ; 004136c6
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004136cb
    PUSH 0x1                            ; 004136ce
    PUSH 0x578bc7                       ; 004136d0 | = "tail01"
    PUSH EBX                            ; 004136d5
    MOV dword ptr [ESI + 0xbda0],EAX    ; 004136d6
    CALL FUN_00519b30                   ; 004136dc
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004136e1
    PUSH 0x1                            ; 004136e4
    PUSH 0x578bce                       ; 004136e6 | = "lthigh01"
    PUSH EBX                            ; 004136eb
    MOV dword ptr [ESI + 0xbda4],EAX    ; 004136ec
    CALL FUN_00519b30                   ; 004136f2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004136f7
    MOV dword ptr [ESI + 0xbda8],EAX    ; 004136fa
    PUSH 0x1                            ; 00413700
    PUSH 0x578bd7                       ; 00413702 | = "lshin01"
    PUSH EBX                            ; 00413707
    CALL FUN_00519b30                   ; 00413708
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0041370d
    PUSH 0x1                            ; 00413710
    PUSH 0x578bdf                       ; 00413712 | = "rthigh01"
    PUSH EBX                            ; 00413717
    MOV dword ptr [ESI + 0xbdac],EAX    ; 00413718
    CALL FUN_00519b30                   ; 0041371e
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00413723
    PUSH 0x1                            ; 00413726
    PUSH 0x578be8                       ; 00413728 | = "rshin01"
    PUSH EBX                            ; 0041372d
    MOV dword ptr [ESI + 0xbdb0],EAX    ; 0041372e
    CALL FUN_00519b30                   ; 00413734
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00413739
    PUSH 0x1                            ; 0041373c
    PUSH 0x578bf0                       ; 0041373e | = "lfoot01"
    PUSH EBX                            ; 00413743
    MOV dword ptr [ESI + 0xbdb4],EAX    ; 00413744
    CALL FUN_00519b30                   ; 0041374a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0041374f
    PUSH 0x1                            ; 00413752
    PUSH 0x578bf8                       ; 00413754 | = "rfoot01"
    PUSH EBX                            ; 00413759
    MOV dword ptr [ESI + 0xbdb8],EAX    ; 0041375a
    CALL FUN_00519b30                   ; 00413760
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 00413765
    MOV dword ptr [ESI + 0xbdbc],EAX    ; 00413768
    POP EDI                             ; 0041376e
    POP ESI                             ; 0041376f
    POP EBX                             ; 00413770
    RET                                 ; 00413771

