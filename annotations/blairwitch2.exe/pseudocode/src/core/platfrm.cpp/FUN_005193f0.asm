; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005193f0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00438780 at 00438786
;
; Referenced Globals:
;   undefined4 s_modelName_005e21df+1
;   TerminatedCString s_toStartEvent_005e21ea
;   TerminatedCString s_toEndEvent_005e21f7
;   TerminatedCString s_stopEvent_005e2202
;   TerminatedCString s_startSound_005e220c
;   TerminatedCString s_stopSound_005e2217
;   TerminatedCString s_activeSound_005e2221
;   TerminatedCString s_courseFilename_005e222d
;   TerminatedCString s_startPos_005e223c
;   TerminatedCString s_origOrient_005e2245
;   TerminatedCString s_endPos_005e2250
;   TerminatedCString s_endOrient_005e2257
;   TerminatedCString s_state_005e2261
;   TerminatedCString s_param_005e2267
;   TerminatedCString s_travelTimeToStart_005e226d
;   ... and 22 more
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b690
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040ba60
;   FUN_0040c330
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005193f0
        ;   Label: FUN_005193f0
    PUSH ESI                            ; 005193f1
    PUSH EDI                            ; 005193f2
    PUSH EBP                            ; 005193f3
    SUB ESP,0xc                         ; 005193f4
    MOV EDI,dword ptr [ESP + 0x20]      ; 005193f7
    PUSH EDI                            ; 005193fb
    CALL FUN_0040c330                   ; 005193fc
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 00519401
    PUSH 0x5e21e0                       ; 00519404 | s_modelName_005e21df+1
    LEA EAX,[EDI + 0x2b4]               ; 00519409
    PUSH EAX                            ; 0051940f
    CALL FUN_0040ba60                   ; 00519410
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 00519415
    PUSH 0x5e21ea                       ; 00519418 | = "toStartEvent"
    LEA EAX,[EDI + 0x4b0]               ; 0051941d
    PUSH EAX                            ; 00519423
    CALL FUN_0040b730                   ; 00519424
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00519429
    PUSH 0x5e21f7                       ; 0051942c | = "toEndEvent"
    LEA EAX,[EDI + 0x514]               ; 00519431
    PUSH EAX                            ; 00519437
    CALL FUN_0040b730                   ; 00519438
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0051943d
    PUSH 0x5e2202                       ; 00519440 | = "stopEvent"
    LEA EAX,[EDI + 0x578]               ; 00519445
    PUSH EAX                            ; 0051944b
    CALL FUN_0040b730                   ; 0051944c
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00519451
    PUSH 0x5e220c                       ; 00519454 | = "startSound"
    LEA EAX,[EDI + 0x5dc]               ; 00519459
    PUSH EAX                            ; 0051945f
    CALL FUN_0040b730                   ; 00519460
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00519465
    PUSH 0x5e2217                       ; 00519468 | = "stopSound"
    LEA EAX,[EDI + 0x5f0]               ; 0051946d
    PUSH EAX                            ; 00519473
    CALL FUN_0040b730                   ; 00519474
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00519479
    PUSH 0x5e2221                       ; 0051947c | = "activeSound"
    LEA EAX,[EDI + 0x604]               ; 00519481
    PUSH EAX                            ; 00519487
    CALL FUN_0040b730                   ; 00519488
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0051948d
    PUSH 0x5e222d                       ; 00519490 | = "courseFilename"
    LEA EAX,[EDI + 0x44c]               ; 00519495
    PUSH EAX                            ; 0051949b
    CALL FUN_0040b730                   ; 0051949c
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    MOV AH,byte ptr [EDI + 0x44c]       ; 005194a1
    ADD ESP,0x8                         ; 005194a7
    TEST AH,AH                          ; 005194aa
    JZ 0x005196af                       ; 005194ac
        ;   XREF to: 005196af (CONDITIONAL_JUMP)  ; LAB_005196af
    PUSH 0x5e2261                       ; 005194b2 | = "state"
        ;   Label: LAB_005194b2
    LEA EAX,[EDI + 0x430]               ; 005194b7
    PUSH EAX                            ; 005194bd
    CALL FUN_0040b960                   ; 005194be
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005194c3
    PUSH 0x5e2267                       ; 005194c6 | = "param"
    LEA EAX,[EDI + 0x438]               ; 005194cb
    PUSH EAX                            ; 005194d1
    CALL FUN_0040b8e0                   ; 005194d2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005194d7
    PUSH 0x5e226d                       ; 005194da | = "travelTimeToStart"
    LEA EAX,[EDI + 0x448]               ; 005194df
    PUSH EAX                            ; 005194e5
    CALL FUN_0040b8e0                   ; 005194e6
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    MOV EDX,dword ptr [0x0061b3dc]      ; 005194eb | DAT_0061b3dc
    ADD ESP,0x8                         ; 005194f1
    CMP EDX,0x7                         ; 005194f4
    JL 0x00519704                       ; 005194f7
        ;   XREF to: 00519704 (CONDITIONAL_JUMP)  ; LAB_00519704
    PUSH 0x5e227f                       ; 005194fd | = "travelTimeToEnd"
    LEA EAX,[EDI + 0x444]               ; 00519502
    PUSH EAX                            ; 00519508
    CALL FUN_0040b8e0                   ; 00519509
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0051950e
    PUSH 0x5e228f                       ; 00519511 | = "groundType"
        ;   Label: LAB_00519511
    LEA EAX,[EDI + 0x434]               ; 00519516
    PUSH EAX                            ; 0051951c
    CALL FUN_0040b960                   ; 0051951d
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV ECX,dword ptr [0x0061b3dc]      ; 00519522 | DAT_0061b3dc
    ADD ESP,0x8                         ; 00519528
    CMP ECX,0x2                         ; 0051952b
    JL 0x00519544                       ; 0051952e
        ;   XREF to: 00519544 (CONDITIONAL_JUMP)  ; LAB_00519544
    PUSH 0x5e229a                       ; 00519530 | = "oneShot"
    LEA EAX,[EDI + 0x61c]               ; 00519535
    PUSH EAX                            ; 0051953b
    CALL FUN_0040b960                   ; 0051953c
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00519541
    CMP dword ptr [0x0061b3dc],0x3      ; 00519544 | DAT_0061b3dc
        ;   Label: LAB_00519544
    JL 0x00519561                       ; 0051954b
        ;   XREF to: 00519561 (CONDITIONAL_JUMP)  ; LAB_00519561
    PUSH 0x5e22a2                       ; 0051954d | = "blockVirtualDirectorFlag"
    LEA EAX,[EDI + 0x620]               ; 00519552
    PUSH EAX                            ; 00519558
    CALL FUN_0040b960                   ; 00519559
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0051955e
    CMP dword ptr [0x0061b3dc],0x4      ; 00519561 | DAT_0061b3dc
        ;   Label: LAB_00519561
    JL 0x0051957e                       ; 00519568
        ;   XREF to: 0051957e (CONDITIONAL_JUMP)  ; LAB_0051957e
    PUSH 0x5e22bb                       ; 0051956a | = "renderInBackgroundWhenNotMovingFlag"
    LEA EAX,[EDI + 0x624]               ; 0051956f
    PUSH EAX                            ; 00519575
    CALL FUN_0040b960                   ; 00519576
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0051957b
    CMP dword ptr [0x0061b3dc],0x5      ; 0051957e | DAT_0061b3dc
        ;   Label: LAB_0051957e
    JL 0x0051959b                       ; 00519585
        ;   XREF to: 0051959b (CONDITIONAL_JUMP)  ; LAB_0051959b
    PUSH 0x5e22df                       ; 00519587 | = "cameraWhileMoving"
    LEA EAX,[EDI + 0x628]               ; 0051958c
    PUSH EAX                            ; 00519592
    CALL FUN_0040b730                   ; 00519593
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00519598
    CMP dword ptr [0x0061b3dc],0x6      ; 0051959b | DAT_0061b3dc
        ;   Label: LAB_0051959b
    JL 0x005195b8                       ; 005195a2
        ;   XREF to: 005195b8 (CONDITIONAL_JUMP)  ; LAB_005195b8
    PUSH 0x5e22f1                       ; 005195a4 | = "plotAsBoxInShadow"
    LEA EAX,[EDI + 0x668]               ; 005195a9
    PUSH EAX                            ; 005195af
    CALL FUN_0040b960                   ; 005195b0
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005195b5
    CMP dword ptr [0x0061b3dc],0x8      ; 005195b8 | DAT_0061b3dc
        ;   Label: LAB_005195b8
    JL 0x00519660                       ; 005195bf
        ;   XREF to: 00519660 (CONDITIONAL_JUMP)  ; LAB_00519660
    PUSH 0x5e2303                       ; 005195c5 | = "goalParam"
    LEA EAX,[EDI + 0x43c]               ; 005195ca
    PUSH EAX                            ; 005195d0
    CALL FUN_0040b8e0                   ; 005195d1
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005195d6
    PUSH 0x5e230d                       ; 005195d9 | = "currentMovementRate"
    LEA EAX,[EDI + 0x440]               ; 005195de
    PUSH EAX                            ; 005195e4
    CALL FUN_0040b8e0                   ; 005195e5
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    MOV ECX,dword ptr [0x007bc038]      ; 005195ea | DAT_007bc038
    ADD ESP,0x8                         ; 005195f0
    CMP ECX,0x1                         ; 005195f3
    JZ 0x00519715                       ; 005195f6
        ;   XREF to: 00519715 (CONDITIONAL_JUMP)  ; LAB_00519715
    MOV EAX,EDI                         ; 005195fc
    XOR EBX,EBX                         ; 005195fe
    LEA ESI,[EDI + 0x208]               ; 00519600
    MOV dword ptr [ESP + 0x8],EBX       ; 00519606
    CMP dword ptr [EAX + 0x678],0x0     ; 0051960a
        ;   Label: LAB_0051960a
    JZ 0x00519617                       ; 00519611
        ;   XREF to: 00519617 (CONDITIONAL_JUMP)  ; LAB_00519617
    INC dword ptr [ESP + 0x8]           ; 00519613
    ADD EAX,0x34                        ; 00519617
        ;   Label: LAB_00519617
    CMP EAX,ESI                         ; 0051961a
    JNZ 0x0051960a                      ; 0051961c
        ;   XREF to: 0051960a (CONDITIONAL_JUMP)  ; LAB_0051960a
    PUSH 0x5e237d                       ; 0051961e | = "attachCount"
    LEA EAX,[ESP + 0xc]                 ; 00519623
    PUSH EAX                            ; 00519627
    LEA EBP,[EDI + 0x678]               ; 00519628
    XOR EBX,EBX                         ; 0051962e
    CALL FUN_0040b960                   ; 00519630
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV ESI,EDI                         ; 00519635
    ADD ESP,0x8                         ; 00519637
    IMUL EAX,EBX,0x34                   ; 0051963a
        ;   Label: LAB_0051963a
    CMP dword ptr [ESI + 0x678],0x0     ; 0051963d
    JZ 0x00519656                       ; 00519644
        ;   XREF to: 00519656 (CONDITIONAL_JUMP)  ; LAB_00519656
    PUSH 0x5e2389                       ; 00519646 | = "attach actor"
    ADD EAX,EBP                         ; 0051964b
    PUSH EAX                            ; 0051964d
    CALL FUN_0040b9e0                   ; 0051964e
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00519653
    INC EBX                             ; 00519656
        ;   Label: LAB_00519656
    ADD ESI,0x34                        ; 00519657
    CMP EBX,0xa                         ; 0051965a
    JL 0x0051963a                       ; 0051965d
        ;   XREF to: 0051963a (CONDITIONAL_JUMP)  ; LAB_0051963a
    NOP                                 ; 0051965f
    CMP dword ptr [0x0061b3dc],0x9      ; 00519660 | DAT_0061b3dc
        ;   Label: LAB_00519660
    JL 0x0051967d                       ; 00519667
        ;   XREF to: 0051967d (CONDITIONAL_JUMP)  ; LAB_0051967d
    PUSH 0x5e2396                       ; 00519669 | = "pushFlag"
    LEA EAX,[EDI + 0x66c]               ; 0051966e
    PUSH EAX                            ; 00519674
    CALL FUN_0040b960                   ; 00519675
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0051967a
    CMP dword ptr [0x0061b3dc],0xa      ; 0051967d | DAT_0061b3dc
        ;   Label: LAB_0051967d
    JL 0x0051969a                       ; 00519684
        ;   XREF to: 0051969a (CONDITIONAL_JUMP)  ; LAB_0051969a
    PUSH 0x5e239f                       ; 00519686 | = "recomputeFog"
    LEA EAX,[EDI + 0x670]               ; 0051968b
    PUSH EAX                            ; 00519691
    CALL FUN_0040b960                   ; 00519692
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00519697
    CMP dword ptr [0x0061b3dc],0xb      ; 0051969a | DAT_0061b3dc
        ;   Label: LAB_0051969a
    JGE 0x0051978a                      ; 005196a1
        ;   XREF to: 0051978a (CONDITIONAL_JUMP)  ; LAB_0051978a
    ADD ESP,0xc                         ; 005196a7
    POP EBP                             ; 005196aa
    POP EDI                             ; 005196ab
    POP ESI                             ; 005196ac
    POP EBX                             ; 005196ad
    RET                                 ; 005196ae
    PUSH 0x5e223c                       ; 005196af | = "startPos"
        ;   Label: LAB_005196af
    LEA EAX,[EDI + 0x478]               ; 005196b4
    PUSH EAX                            ; 005196ba
    CALL FUN_0040b4b0                   ; 005196bb
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 005196c0
    PUSH 0x5e2245                       ; 005196c3 | = "origOrient"
    LEA EAX,[EDI + 0x490]               ; 005196c8
    PUSH EAX                            ; 005196ce
    CALL FUN_0040b690                   ; 005196cf
        ;   XREF to: 0040b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b690()
    ADD ESP,0x8                         ; 005196d4
    PUSH 0x5e2250                       ; 005196d7 | = "endPos"
    LEA EAX,[EDI + 0x484]               ; 005196dc
    PUSH EAX                            ; 005196e2
    CALL FUN_0040b4b0                   ; 005196e3
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 005196e8
    PUSH 0x5e2257                       ; 005196eb | = "endOrient"
    LEA EAX,[EDI + 0x4a0]               ; 005196f0
    PUSH EAX                            ; 005196f6
    CALL FUN_0040b690                   ; 005196f7
        ;   XREF to: 0040b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b690()
    ADD ESP,0x8                         ; 005196fc
    JMP 0x005194b2                      ; 005196ff
        ;   XREF to: 005194b2 (UNCONDITIONAL_JUMP)  ; LAB_005194b2
    MOV EAX,dword ptr [EDI + 0x448]     ; 00519704
        ;   Label: LAB_00519704
    MOV dword ptr [EDI + 0x444],EAX     ; 0051970a
    JMP 0x00519511                      ; 00519710
        ;   XREF to: 00519511 (UNCONDITIONAL_JUMP)  ; LAB_00519511
    PUSH 0x5e2321                       ; 00519715 | = "attachCount"
        ;   Label: LAB_00519715
    LEA EAX,[ESP + 0x4]                 ; 0051971a
    PUSH EAX                            ; 0051971e
    CALL FUN_0040b960                   ; 0051971f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00519724
    CMP dword ptr [ESP],0xa             ; 00519727
    JLE 0x0051974f                      ; 0051972b
        ;   XREF to: 0051974f (CONDITIONAL_JUMP)  ; LAB_0051974f
    MOV EBP,0x5e232d                    ; 0051972d | = "..\\core\\platfrm.cpp"
    MOV EAX,0x316                       ; 00519732
    PUSH 0x5e2341                       ; 00519737 | = "CPlatform::archive - too many attache..."
    MOV dword ptr [0x01d046a0],EBP      ; 0051973c | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00519742 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00519747
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0051974c
    MOV EDX,dword ptr [ESP]             ; 0051974f
        ;   Label: LAB_0051974f
    XOR ESI,ESI                         ; 00519752
    TEST EDX,EDX                        ; 00519754
    JLE 0x00519660                      ; 00519756
        ;   XREF to: 00519660 (CONDITIONAL_JUMP)  ; LAB_00519660
    MOV EBX,EDI                         ; 0051975c
    PUSH 0x5e2370                       ; 0051975e | = "attach actor"
        ;   Label: LAB_0051975e
    LEA EAX,[ESP + 0x8]                 ; 00519763
    PUSH EAX                            ; 00519767
    CALL FUN_0040b9e0                   ; 00519768
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0051976d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00519770
    MOV dword ptr [EBX + 0x678],EAX     ; 00519774
    INC ESI                             ; 0051977a
    MOV ECX,dword ptr [ESP]             ; 0051977b
    ADD EBX,0x34                        ; 0051977e
    CMP ESI,ECX                         ; 00519781
    JL 0x0051975e                       ; 00519783
        ;   XREF to: 0051975e (CONDITIONAL_JUMP)  ; LAB_0051975e
    JMP 0x00519660                      ; 00519785
        ;   XREF to: 00519660 (UNCONDITIONAL_JUMP)  ; LAB_00519660
    PUSH 0x5e23ac                       ; 0051978a | = "plotInShadowFlag"
        ;   Label: LAB_0051978a
    ADD EDI,0x674                       ; 0051978f
    PUSH EDI                            ; 00519795
    CALL FUN_0040b960                   ; 00519796
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0051979b
    ADD ESP,0xc                         ; 0051979e
    POP EBP                             ; 005197a1
    POP EDI                             ; 005197a2
    POP ESI                             ; 005197a3
    POP EBX                             ; 005197a4
    RET                                 ; 005197a5

