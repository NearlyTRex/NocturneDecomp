; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004597a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005d0426+1
;   TerminatedCString s_doorToOpen_005d0436
;   TerminatedCString s_leverToPull_005d0441
;   TerminatedCString s_ladderToClimb_005d044d
;   TerminatedCString s_lhCarryObject_005d045b
;   TerminatedCString s_rhCarryObject_005d0469
;   TerminatedCString s_ladderToDescend_005d0477
;   TerminatedCString s_gunDrawn_005d0487
;   TerminatedCString s_weapon_005d0490
;   TerminatedCString s_actionPending_005d0497
;   TerminatedCString s_layerActionIndex_005d04a5
;   TerminatedCString s_layerActionT_005d04b6
;   TerminatedCString s_lanternMode_005d04c3
;   TerminatedCString s_lanternTweenPct_005d04cf
;   TerminatedCString s_LanternPointer_005d04df
;   ... and 3 more
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_004ce590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004597a0
        ;   Label: FUN_004597a0
    SUB ESP,0xc                         ; 004597a1
    MOV EBX,dword ptr [ESP + 0x14]      ; 004597a4
    PUSH EBX                            ; 004597a8
    CALL FUN_004ce590                   ; 004597a9
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce590()
    MOV EDX,dword ptr [0x0060b1ec]      ; 004597ae | DAT_0060b1ec
    ADD ESP,0x4                         ; 004597b4
    CMP EDX,0x2                         ; 004597b7
    JL 0x00459811                       ; 004597ba
        ;   XREF to: 00459811 (CONDITIONAL_JUMP)  ; LAB_00459811
    CMP EDX,0x4                         ; 004597bc
    JG 0x00459811                       ; 004597bf
        ;   XREF to: 00459811 (CONDITIONAL_JUMP)  ; LAB_00459811
    PUSH 0x5d0427                       ; 004597c1 | s_objectToPickUp_005d0426+1
    LEA EAX,[EBX + 0x25608]             ; 004597c6
    PUSH EAX                            ; 004597cc
    CALL FUN_0040b9e0                   ; 004597cd
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004597d2
    PUSH 0x5d0436                       ; 004597d5 | = "doorToOpen"
    LEA EAX,[EBX + 0x25604]             ; 004597da
    PUSH EAX                            ; 004597e0
    CALL FUN_0040b9e0                   ; 004597e1
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004597e6
    PUSH 0x5d0441                       ; 004597e9 | = "leverToPull"
    LEA EAX,[EBX + 0x25610]             ; 004597ee
    PUSH EAX                            ; 004597f4
    CALL FUN_0040b9e0                   ; 004597f5
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004597fa
    PUSH 0x5d044d                       ; 004597fd | = "ladderToClimb"
    LEA EAX,[EBX + 0x25614]             ; 00459802
    PUSH EAX                            ; 00459808
    CALL FUN_0040b9e0                   ; 00459809
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0045980e
    CMP dword ptr [0x0060b1ec],0x2      ; 00459811 | DAT_0060b1ec
        ;   Label: LAB_00459811
    JNZ 0x00459842                      ; 00459818
        ;   XREF to: 00459842 (CONDITIONAL_JUMP)  ; LAB_00459842
    PUSH 0x5d045b                       ; 0045981a | = "lhCarryObject"
    LEA EAX,[EBX + 0x2620]              ; 0045981f
    PUSH EAX                            ; 00459825
    CALL FUN_0040b9e0                   ; 00459826
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0045982b
    PUSH 0x5d0469                       ; 0045982e | = "rhCarryObject"
    LEA EAX,[EBX + 0x2698]              ; 00459833
    PUSH EAX                            ; 00459839
    CALL FUN_0040b9e0                   ; 0045983a
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0045983f
    CMP dword ptr [0x0060b1ec],0x4      ; 00459842 | DAT_0060b1ec
        ;   Label: LAB_00459842
    JL 0x0045985f                       ; 00459849
        ;   XREF to: 0045985f (CONDITIONAL_JUMP)  ; LAB_0045985f
    PUSH 0x5d0477                       ; 0045984b | = "ladderToDescend"
    LEA EAX,[EBX + 0x25694]             ; 00459850
    PUSH EAX                            ; 00459856
    CALL FUN_0040b9e0                   ; 00459857
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0045985c
    CMP dword ptr [0x0060b1ec],0x6      ; 0045985f | DAT_0060b1ec
        ;   Label: LAB_0045985f
    JL 0x0045987c                       ; 00459866
        ;   XREF to: 0045987c (CONDITIONAL_JUMP)  ; LAB_0045987c
    PUSH 0x5d0487                       ; 00459868 | = "gunDrawn"
    LEA EAX,[EBX + 0x25640]             ; 0045986d
    PUSH EAX                            ; 00459873
    CALL FUN_0040b960                   ; 00459874
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00459879
    CMP dword ptr [0x0060b1ec],0x7      ; 0045987c | DAT_0060b1ec
        ;   Label: LAB_0045987c
    JL 0x00459899                       ; 00459883
        ;   XREF to: 00459899 (CONDITIONAL_JUMP)  ; LAB_00459899
    PUSH 0x5d0490                       ; 00459885 | = "weapon"
    LEA EAX,[EBX + 0x25698]             ; 0045988a
    PUSH EAX                            ; 00459890
    CALL FUN_0040b9e0                   ; 00459891
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00459896
    CMP dword ptr [0x0060b1ec],0x8      ; 00459899 | DAT_0060b1ec
        ;   Label: LAB_00459899
    JL 0x004598b6                       ; 004598a0
        ;   XREF to: 004598b6 (CONDITIONAL_JUMP)  ; LAB_004598b6
    PUSH 0x5d0497                       ; 004598a2 | = "actionPending"
    LEA EAX,[EBX + 0x256a4]             ; 004598a7
    PUSH EAX                            ; 004598ad
    CALL FUN_0040b960                   ; 004598ae
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004598b3
    CMP dword ptr [0x0060b1ec],0x9      ; 004598b6 | DAT_0060b1ec
        ;   Label: LAB_004598b6
    JL 0x004598e7                       ; 004598bd
        ;   XREF to: 004598e7 (CONDITIONAL_JUMP)  ; LAB_004598e7
    PUSH 0x5d04a5                       ; 004598bf | = "layerActionIndex"
    LEA EAX,[EBX + 0x2d04]              ; 004598c4
    PUSH EAX                            ; 004598ca
    CALL FUN_0040b960                   ; 004598cb
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004598d0
    PUSH 0x5d04b6                       ; 004598d3 | = "layerActionT"
    LEA EAX,[EBX + 0x2d08]              ; 004598d8
    PUSH EAX                            ; 004598de
    CALL FUN_0040b8e0                   ; 004598df
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004598e4
    CMP dword ptr [0x0060b1ec],0xa      ; 004598e7 | DAT_0060b1ec
        ;   Label: LAB_004598e7
    JGE 0x004598f5                      ; 004598ee
        ;   XREF to: 004598f5 (CONDITIONAL_JUMP)  ; LAB_004598f5
    ADD ESP,0xc                         ; 004598f0
    POP EBX                             ; 004598f3
    RET                                 ; 004598f4
    PUSH EDI                            ; 004598f5
        ;   Label: LAB_004598f5
    PUSH 0x5d04c3                       ; 004598f6 | = "lanternMode"
    LEA EAX,[ESP + 0x8]                 ; 004598fb
    XOR EDI,EDI                         ; 004598ff
    PUSH EAX                            ; 00459901
    MOV dword ptr [ESP + 0x14],EDI      ; 00459902
    CALL FUN_0040b960                   ; 00459906
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0045990b
    PUSH 0x5d04cf                       ; 0045990e | = "lanternTweenPct"
    LEA EAX,[ESP + 0xc]                 ; 00459913
    PUSH EAX                            ; 00459917
    CALL FUN_0040b8e0                   ; 00459918
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0045991d
    PUSH 0x5d04df                       ; 00459920 | = "LanternPointer"
    LEA EAX,[ESP + 0x10]                ; 00459925
    PUSH EAX                            ; 00459929
    CALL FUN_0040b9e0                   ; 0045992a
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0045992f
    PUSH 0x5d04ee                       ; 00459932 | = "modelName"
    LEA EAX,[EBX + 0x257b0]             ; 00459937
    PUSH EAX                            ; 0045993d
    CALL FUN_0040b730                   ; 0045993e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00459943
    PUSH 0x5d04f8                       ; 00459946 | = "clothName"
    ADD EBX,0x258b0                     ; 0045994b
    PUSH EBX                            ; 00459951
    CALL FUN_0040b730                   ; 00459952
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00459957
    POP EDI                             ; 0045995a
    ADD ESP,0xc                         ; 0045995b
    POP EBX                             ; 0045995e
    RET                                 ; 0045995f

