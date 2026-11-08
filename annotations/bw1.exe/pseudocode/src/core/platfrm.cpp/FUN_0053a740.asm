; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053a740(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00447a40 at 00447a46
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ed43b
;   TerminatedCString s_toStartEvent_005ed445
;   TerminatedCString s_toEndEvent_005ed452
;   TerminatedCString s_stopEvent_005ed45d
;   TerminatedCString s_startSound_005ed467
;   TerminatedCString s_stopSound_005ed472
;   TerminatedCString s_activeSound_005ed47c
;   TerminatedCString s_courseFilename_005ed488
;   TerminatedCString s_startPos_005ed497
;   TerminatedCString s_origOrient_005ed4a0
;   TerminatedCString s_endPos_005ed4ab
;   TerminatedCString s_endOrient_005ed4b2
;   TerminatedCString s_state_005ed4bc
;   TerminatedCString s_param_005ed4c2
;   TerminatedCString s_travelTimeToStart_005ed4c8
;   ... and 22 more
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b3a0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b770
;   FUN_0040c040
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a740
        ;   Label: FUN_0053a740
    PUSH ESI                            ; 0053a741
    PUSH EDI                            ; 0053a742
    PUSH EBP                            ; 0053a743
    SUB ESP,0xc                         ; 0053a744
    MOV EDI,dword ptr [ESP + 0x20]      ; 0053a747
    PUSH EDI                            ; 0053a74b
    CALL FUN_0040c040                   ; 0053a74c
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0053a751
    PUSH 0x5ed43b                       ; 0053a754 | = "modelName"
    LEA EAX,[EDI + 0x158]               ; 0053a759
    PUSH EAX                            ; 0053a75f
    CALL FUN_0040b770                   ; 0053a760
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 0053a765
    PUSH 0x5ed445                       ; 0053a768 | = "toStartEvent"
    LEA EAX,[EDI + 0x354]               ; 0053a76d
    PUSH EAX                            ; 0053a773
    CALL FUN_0040b440                   ; 0053a774
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0053a779
    PUSH 0x5ed452                       ; 0053a77c | = "toEndEvent"
    LEA EAX,[EDI + 0x3b8]               ; 0053a781
    PUSH EAX                            ; 0053a787
    CALL FUN_0040b440                   ; 0053a788
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0053a78d
    PUSH 0x5ed45d                       ; 0053a790 | = "stopEvent"
    LEA EAX,[EDI + 0x41c]               ; 0053a795
    PUSH EAX                            ; 0053a79b
    CALL FUN_0040b440                   ; 0053a79c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0053a7a1
    PUSH 0x5ed467                       ; 0053a7a4 | = "startSound"
    LEA EAX,[EDI + 0x480]               ; 0053a7a9
    PUSH EAX                            ; 0053a7af
    CALL FUN_0040b440                   ; 0053a7b0
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0053a7b5
    PUSH 0x5ed472                       ; 0053a7b8 | = "stopSound"
    LEA EAX,[EDI + 0x494]               ; 0053a7bd
    PUSH EAX                            ; 0053a7c3
    CALL FUN_0040b440                   ; 0053a7c4
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0053a7c9
    PUSH 0x5ed47c                       ; 0053a7cc | = "activeSound"
    LEA EAX,[EDI + 0x4a8]               ; 0053a7d1
    PUSH EAX                            ; 0053a7d7
    CALL FUN_0040b440                   ; 0053a7d8
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0053a7dd
    PUSH 0x5ed488                       ; 0053a7e0 | = "courseFilename"
    LEA EAX,[EDI + 0x2f0]               ; 0053a7e5
    PUSH EAX                            ; 0053a7eb
    CALL FUN_0040b440                   ; 0053a7ec
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    MOV AH,byte ptr [EDI + 0x2f0]       ; 0053a7f1
    ADD ESP,0x8                         ; 0053a7f7
    TEST AH,AH                          ; 0053a7fa
    JZ 0x0053a9ff                       ; 0053a7fc
        ;   XREF to: 0053a9ff (CONDITIONAL_JUMP)  ; LAB_0053a9ff
    PUSH 0x5ed4bc                       ; 0053a802 | = "state"
        ;   Label: LAB_0053a802
    LEA EAX,[EDI + 0x2d4]               ; 0053a807
    PUSH EAX                            ; 0053a80d
    CALL FUN_0040b670                   ; 0053a80e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053a813
    PUSH 0x5ed4c2                       ; 0053a816 | = "param"
    LEA EAX,[EDI + 0x2dc]               ; 0053a81b
    PUSH EAX                            ; 0053a821
    CALL FUN_0040b5f0                   ; 0053a822
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0053a827
    PUSH 0x5ed4c8                       ; 0053a82a | = "travelTimeToStart"
    LEA EAX,[EDI + 0x2ec]               ; 0053a82f
    PUSH EAX                            ; 0053a835
    CALL FUN_0040b5f0                   ; 0053a836
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x0062283c]      ; 0053a83b | DAT_0062283c
    ADD ESP,0x8                         ; 0053a841
    CMP EDX,0x7                         ; 0053a844
    JL 0x0053aa54                       ; 0053a847
        ;   XREF to: 0053aa54 (CONDITIONAL_JUMP)  ; LAB_0053aa54
    PUSH 0x5ed4da                       ; 0053a84d | = "travelTimeToEnd"
    LEA EAX,[EDI + 0x2e8]               ; 0053a852
    PUSH EAX                            ; 0053a858
    CALL FUN_0040b5f0                   ; 0053a859
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0053a85e
    PUSH 0x5ed4ea                       ; 0053a861 | = "groundType"
        ;   Label: LAB_0053a861
    LEA EAX,[EDI + 0x2d8]               ; 0053a866
    PUSH EAX                            ; 0053a86c
    CALL FUN_0040b670                   ; 0053a86d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV ECX,dword ptr [0x0062283c]      ; 0053a872 | DAT_0062283c
    ADD ESP,0x8                         ; 0053a878
    CMP ECX,0x2                         ; 0053a87b
    JL 0x0053a894                       ; 0053a87e
        ;   XREF to: 0053a894 (CONDITIONAL_JUMP)  ; LAB_0053a894
    PUSH 0x5ed4f5                       ; 0053a880 | = "oneShot"
    LEA EAX,[EDI + 0x4c0]               ; 0053a885
    PUSH EAX                            ; 0053a88b
    CALL FUN_0040b670                   ; 0053a88c
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053a891
    CMP dword ptr [0x0062283c],0x3      ; 0053a894 | DAT_0062283c
        ;   Label: LAB_0053a894
    JL 0x0053a8b1                       ; 0053a89b
        ;   XREF to: 0053a8b1 (CONDITIONAL_JUMP)  ; LAB_0053a8b1
    PUSH 0x5ed4fd                       ; 0053a89d | = "blockVirtualDirectorFlag"
    LEA EAX,[EDI + 0x4c4]               ; 0053a8a2
    PUSH EAX                            ; 0053a8a8
    CALL FUN_0040b670                   ; 0053a8a9
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053a8ae
    CMP dword ptr [0x0062283c],0x4      ; 0053a8b1 | DAT_0062283c
        ;   Label: LAB_0053a8b1
    JL 0x0053a8ce                       ; 0053a8b8
        ;   XREF to: 0053a8ce (CONDITIONAL_JUMP)  ; LAB_0053a8ce
    PUSH 0x5ed516                       ; 0053a8ba | = "renderInBackgroundWhenNotMovingFlag"
    LEA EAX,[EDI + 0x4c8]               ; 0053a8bf
    PUSH EAX                            ; 0053a8c5
    CALL FUN_0040b670                   ; 0053a8c6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053a8cb
    CMP dword ptr [0x0062283c],0x5      ; 0053a8ce | DAT_0062283c
        ;   Label: LAB_0053a8ce
    JL 0x0053a8eb                       ; 0053a8d5
        ;   XREF to: 0053a8eb (CONDITIONAL_JUMP)  ; LAB_0053a8eb
    PUSH 0x5ed53a                       ; 0053a8d7 | = "cameraWhileMoving"
    LEA EAX,[EDI + 0x4cc]               ; 0053a8dc
    PUSH EAX                            ; 0053a8e2
    CALL FUN_0040b440                   ; 0053a8e3
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0053a8e8
    CMP dword ptr [0x0062283c],0x6      ; 0053a8eb | DAT_0062283c
        ;   Label: LAB_0053a8eb
    JL 0x0053a908                       ; 0053a8f2
        ;   XREF to: 0053a908 (CONDITIONAL_JUMP)  ; LAB_0053a908
    PUSH 0x5ed54c                       ; 0053a8f4 | = "plotAsBoxInShadow"
    LEA EAX,[EDI + 0x50c]               ; 0053a8f9
    PUSH EAX                            ; 0053a8ff
    CALL FUN_0040b670                   ; 0053a900
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053a905
    CMP dword ptr [0x0062283c],0x8      ; 0053a908 | DAT_0062283c
        ;   Label: LAB_0053a908
    JL 0x0053a9b0                       ; 0053a90f
        ;   XREF to: 0053a9b0 (CONDITIONAL_JUMP)  ; LAB_0053a9b0
    PUSH 0x5ed55e                       ; 0053a915 | = "goalParam"
    LEA EAX,[EDI + 0x2e0]               ; 0053a91a
    PUSH EAX                            ; 0053a920
    CALL FUN_0040b5f0                   ; 0053a921
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0053a926
    PUSH 0x5ed568                       ; 0053a929 | = "currentMovementRate"
    LEA EAX,[EDI + 0x2e4]               ; 0053a92e
    PUSH EAX                            ; 0053a934
    CALL FUN_0040b5f0                   ; 0053a935
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV ECX,dword ptr [0x007c3038]      ; 0053a93a | DAT_007c3038
    ADD ESP,0x8                         ; 0053a940
    CMP ECX,0x1                         ; 0053a943
    JZ 0x0053aa65                       ; 0053a946
        ;   XREF to: 0053aa65 (CONDITIONAL_JUMP)  ; LAB_0053aa65
    MOV EAX,EDI                         ; 0053a94c
    XOR EBX,EBX                         ; 0053a94e
    LEA ESI,[EDI + 0x208]               ; 0053a950
    MOV dword ptr [ESP + 0x8],EBX       ; 0053a956
    CMP dword ptr [EAX + 0x51c],0x0     ; 0053a95a
        ;   Label: LAB_0053a95a
    JZ 0x0053a967                       ; 0053a961
        ;   XREF to: 0053a967 (CONDITIONAL_JUMP)  ; LAB_0053a967
    INC dword ptr [ESP + 0x8]           ; 0053a963
    ADD EAX,0x34                        ; 0053a967
        ;   Label: LAB_0053a967
    CMP EAX,ESI                         ; 0053a96a
    JNZ 0x0053a95a                      ; 0053a96c
        ;   XREF to: 0053a95a (CONDITIONAL_JUMP)  ; LAB_0053a95a
    PUSH 0x5ed5d8                       ; 0053a96e | = "attachCount"
    LEA EAX,[ESP + 0xc]                 ; 0053a973
    PUSH EAX                            ; 0053a977
    LEA EBP,[EDI + 0x51c]               ; 0053a978
    XOR EBX,EBX                         ; 0053a97e
    CALL FUN_0040b670                   ; 0053a980
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV ESI,EDI                         ; 0053a985
    ADD ESP,0x8                         ; 0053a987
    IMUL EAX,EBX,0x34                   ; 0053a98a
        ;   Label: LAB_0053a98a
    CMP dword ptr [ESI + 0x51c],0x0     ; 0053a98d
    JZ 0x0053a9a6                       ; 0053a994
        ;   XREF to: 0053a9a6 (CONDITIONAL_JUMP)  ; LAB_0053a9a6
    PUSH 0x5ed5e4                       ; 0053a996 | = "attach actor"
    ADD EAX,EBP                         ; 0053a99b
    PUSH EAX                            ; 0053a99d
    CALL FUN_0040b6f0                   ; 0053a99e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 0053a9a3
    INC EBX                             ; 0053a9a6
        ;   Label: LAB_0053a9a6
    ADD ESI,0x34                        ; 0053a9a7
    CMP EBX,0xa                         ; 0053a9aa
    JL 0x0053a98a                       ; 0053a9ad
        ;   XREF to: 0053a98a (CONDITIONAL_JUMP)  ; LAB_0053a98a
    NOP                                 ; 0053a9af
    CMP dword ptr [0x0062283c],0x9      ; 0053a9b0 | DAT_0062283c
        ;   Label: LAB_0053a9b0
    JL 0x0053a9cd                       ; 0053a9b7
        ;   XREF to: 0053a9cd (CONDITIONAL_JUMP)  ; LAB_0053a9cd
    PUSH 0x5ed5f1                       ; 0053a9b9 | = "pushFlag"
    LEA EAX,[EDI + 0x510]               ; 0053a9be
    PUSH EAX                            ; 0053a9c4
    CALL FUN_0040b670                   ; 0053a9c5
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053a9ca
    CMP dword ptr [0x0062283c],0xa      ; 0053a9cd | DAT_0062283c
        ;   Label: LAB_0053a9cd
    JL 0x0053a9ea                       ; 0053a9d4
        ;   XREF to: 0053a9ea (CONDITIONAL_JUMP)  ; LAB_0053a9ea
    PUSH 0x5ed5fa                       ; 0053a9d6 | = "recomputeFog"
    LEA EAX,[EDI + 0x514]               ; 0053a9db
    PUSH EAX                            ; 0053a9e1
    CALL FUN_0040b670                   ; 0053a9e2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053a9e7
    CMP dword ptr [0x0062283c],0xb      ; 0053a9ea | DAT_0062283c
        ;   Label: LAB_0053a9ea
    JGE 0x0053aada                      ; 0053a9f1
        ;   XREF to: 0053aada (CONDITIONAL_JUMP)  ; LAB_0053aada
    ADD ESP,0xc                         ; 0053a9f7
    POP EBP                             ; 0053a9fa
    POP EDI                             ; 0053a9fb
    POP ESI                             ; 0053a9fc
    POP EBX                             ; 0053a9fd
    RET                                 ; 0053a9fe
    PUSH 0x5ed497                       ; 0053a9ff | = "startPos"
        ;   Label: LAB_0053a9ff
    LEA EAX,[EDI + 0x31c]               ; 0053aa04
    PUSH EAX                            ; 0053aa0a
    CALL FUN_0040b1c0                   ; 0053aa0b
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 0053aa10
    PUSH 0x5ed4a0                       ; 0053aa13 | = "origOrient"
    LEA EAX,[EDI + 0x334]               ; 0053aa18
    PUSH EAX                            ; 0053aa1e
    CALL FUN_0040b3a0                   ; 0053aa1f
        ;   XREF to: 0040b3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b3a0()
    ADD ESP,0x8                         ; 0053aa24
    PUSH 0x5ed4ab                       ; 0053aa27 | = "endPos"
    LEA EAX,[EDI + 0x328]               ; 0053aa2c
    PUSH EAX                            ; 0053aa32
    CALL FUN_0040b1c0                   ; 0053aa33
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 0053aa38
    PUSH 0x5ed4b2                       ; 0053aa3b | = "endOrient"
    LEA EAX,[EDI + 0x344]               ; 0053aa40
    PUSH EAX                            ; 0053aa46
    CALL FUN_0040b3a0                   ; 0053aa47
        ;   XREF to: 0040b3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b3a0()
    ADD ESP,0x8                         ; 0053aa4c
    JMP 0x0053a802                      ; 0053aa4f
        ;   XREF to: 0053a802 (UNCONDITIONAL_JUMP)  ; LAB_0053a802
    MOV EAX,dword ptr [EDI + 0x2ec]     ; 0053aa54
        ;   Label: LAB_0053aa54
    MOV dword ptr [EDI + 0x2e8],EAX     ; 0053aa5a
    JMP 0x0053a861                      ; 0053aa60
        ;   XREF to: 0053a861 (UNCONDITIONAL_JUMP)  ; LAB_0053a861
    PUSH 0x5ed57c                       ; 0053aa65 | = "attachCount"
        ;   Label: LAB_0053aa65
    LEA EAX,[ESP + 0x4]                 ; 0053aa6a
    PUSH EAX                            ; 0053aa6e
    CALL FUN_0040b670                   ; 0053aa6f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053aa74
    CMP dword ptr [ESP],0xa             ; 0053aa77
    JLE 0x0053aa9f                      ; 0053aa7b
        ;   XREF to: 0053aa9f (CONDITIONAL_JUMP)  ; LAB_0053aa9f
    MOV EBP,0x5ed588                    ; 0053aa7d | = "..\\core\\platfrm.cpp"
    MOV EAX,0x316                       ; 0053aa82
    PUSH 0x5ed59c                       ; 0053aa87 | = "CPlatform::archive - too many attache..."
    MOV dword ptr [0x01d1d400],EBP      ; 0053aa8c | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053aa92 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0053aa97
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0053aa9c
    MOV EDX,dword ptr [ESP]             ; 0053aa9f
        ;   Label: LAB_0053aa9f
    XOR ESI,ESI                         ; 0053aaa2
    TEST EDX,EDX                        ; 0053aaa4
    JLE 0x0053a9b0                      ; 0053aaa6
        ;   XREF to: 0053a9b0 (CONDITIONAL_JUMP)  ; LAB_0053a9b0
    MOV EBX,EDI                         ; 0053aaac
    PUSH 0x5ed5cb                       ; 0053aaae | = "attach actor"
        ;   Label: LAB_0053aaae
    LEA EAX,[ESP + 0x8]                 ; 0053aab3
    PUSH EAX                            ; 0053aab7
    CALL FUN_0040b6f0                   ; 0053aab8
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 0053aabd
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053aac0
    MOV dword ptr [EBX + 0x51c],EAX     ; 0053aac4
    INC ESI                             ; 0053aaca
    MOV ECX,dword ptr [ESP]             ; 0053aacb
    ADD EBX,0x34                        ; 0053aace
    CMP ESI,ECX                         ; 0053aad1
    JL 0x0053aaae                       ; 0053aad3
        ;   XREF to: 0053aaae (CONDITIONAL_JUMP)  ; LAB_0053aaae
    JMP 0x0053a9b0                      ; 0053aad5
        ;   XREF to: 0053a9b0 (UNCONDITIONAL_JUMP)  ; LAB_0053a9b0
    PUSH 0x5ed607                       ; 0053aada | = "plotInShadowFlag"
        ;   Label: LAB_0053aada
    ADD EDI,0x518                       ; 0053aadf
    PUSH EDI                            ; 0053aae5
    CALL FUN_0040b670                   ; 0053aae6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0053aaeb
    ADD ESP,0xc                         ; 0053aaee
    POP EBP                             ; 0053aaf1
    POP EDI                             ; 0053aaf2
    POP ESI                             ; 0053aaf3
    POP EBX                             ; 0053aaf4
    RET                                 ; 0053aaf5

