; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ba540(int param_1)
;
;
; XREF[1]:
;   FUN_004b7f90 at 004b8421
;
; Referenced Globals:
;   TerminatedCString s_GoToMap_005c2848
;   TerminatedCString s_voodoo_doll_005c2850
;   TerminatedCString s_UseSPS_005c285c
;   TerminatedCString s_SPOOKHOUSE_005c2863
;   TerminatedCString s_quicksavedgame_sav_005c286e
;   TerminatedCString s_Quick_Save_005c2881
;   undefined4 DAT_005c288c
;   TerminatedCString s_quicksavedgame_sav_005c288f
;   undefined4 DAT_005c28a2
;   TerminatedCString s_Restore_quick_saved_game_005c28a7
;   TerminatedCString s_quicksavedgame_sav_005c28c1
;   undefined4 s_quicksavedgame_sav_005c28c1+1
;   undefined4 s_quicksavedgame_sav_005c28c1+2
;   undefined4 s_quicksavedgame_sav_005c28c1+3
;   TerminatedCString s_No_quicked_saved_game_to_005c28d4
;   ... and 29 more
;
; Called Functions:
;   FUN_004659c0
;   FUN_0047d8c0
;   FUN_0048c150
;   FUN_004b46b0
;   FUN_004bda10
;   FUN_004bfa40
;   FUN_004db990
;   FUN_00508960
;   FUN_00530500
;   FUN_00534890
;   FUN_005353b0
;   FUN_0053b1c0
;   FUN_0053b280
;   FUN_0053f940
;   FUN_00556750
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba540
        ;   Label: FUN_004ba540
    PUSH ESI                            ; 004ba541
    PUSH EDI                            ; 004ba542
    PUSH EBP                            ; 004ba543
    MOV EBP,ESP                         ; 004ba544
    SUB ESP,0x20c                       ; 004ba546
    AND ESP,0xfffffff8                  ; 004ba54c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ba54f
    CMP dword ptr [0x01d22200],0x0      ; 004ba552 | DAT_01d22200
    JNZ 0x004ba9d1                      ; 004ba559
        ;   XREF to: 004ba9d1 (CONDITIONAL_JUMP)  ; LAB_004ba9d1
    CMP dword ptr [EBX + 0xe8],0x0      ; 004ba55f
    JZ 0x004ba9d8                       ; 004ba566
        ;   XREF to: 004ba9d8 (CONDITIONAL_JUMP)  ; LAB_004ba9d8
    CMP dword ptr [EBX + 0x234],0x0     ; 004ba56c
        ;   Label: LAB_004ba56c
    JZ 0x004ba5cb                       ; 004ba573
        ;   XREF to: 004ba5cb (CONDITIONAL_JUMP)  ; LAB_004ba5cb
    PUSH 0x1d                           ; 004ba575
    MOV EAX,[0x00600284]                ; 004ba577 | DAT_00600284
    PUSH EAX                            ; 004ba57c | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba57d | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba57f
    ADD ESP,0x8                         ; 004ba581
    TEST EAX,EAX                        ; 004ba584
    JZ 0x004ba5cb                       ; 004ba586
        ;   XREF to: 004ba5cb (CONDITIONAL_JUMP)  ; LAB_004ba5cb
    PUSH 0x15                           ; 004ba588
    MOV EAX,[0x00600284]                ; 004ba58a | DAT_00600284
    PUSH EAX                            ; 004ba58f | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba590 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba592
    ADD ESP,0x8                         ; 004ba595
    TEST EAX,EAX                        ; 004ba598
    JZ 0x004ba5cb                       ; 004ba59a
        ;   XREF to: 004ba5cb (CONDITIONAL_JUMP)  ; LAB_004ba5cb
    MOV EAX,0x1                         ; 004ba59c
    MOV ECX,dword ptr [EBX + 0x220]     ; 004ba5a1
    SUB EAX,ECX                         ; 004ba5a7
    MOV dword ptr [EBX + 0x220],EAX     ; 004ba5a9
    JZ 0x004babb2                       ; 004ba5af
        ;   XREF to: 004babb2 (CONDITIONAL_JUMP)  ; LAB_004babb2
    MOV EDX,dword ptr [0x006045f8]      ; 004ba5b5 | DAT_006045f8
    XOR EAX,EAX                         ; 004ba5bb
    PUSH EDX                            ; 004ba5bd
    MOV [0x01c5fae4],EAX                ; 004ba5be | DAT_01c5fae4
    CALL FUN_0055fee0                   ; 004ba5c3
        ;   XREF to: 0055fee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055fee0()
    ADD ESP,0x4                         ; 004ba5c8
        ;   Label: LAB_004ba5c8
    CMP dword ptr [EBX + 0x234],0x0     ; 004ba5cb
        ;   Label: LAB_004ba5cb
    JZ 0x004babc3                       ; 004ba5d2
        ;   XREF to: 004babc3 (CONDITIONAL_JUMP)  ; LAB_004babc3
    PUSH 0x1d                           ; 004ba5d8
        ;   Label: LAB_004ba5d8
    MOV EAX,[0x00600284]                ; 004ba5da | DAT_00600284
    PUSH EAX                            ; 004ba5df | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba5e0 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba5e2
    ADD ESP,0x8                         ; 004ba5e4
    TEST EAX,EAX                        ; 004ba5e7
    JZ 0x004ba612                       ; 004ba5e9
        ;   XREF to: 004ba612 (CONDITIONAL_JUMP)  ; LAB_004ba612
    PUSH 0x2c                           ; 004ba5eb
    MOV EAX,[0x00600284]                ; 004ba5ed | DAT_00600284
    PUSH EAX                            ; 004ba5f2 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba5f3 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba5f5
    ADD ESP,0x8                         ; 004ba5f8
    TEST EAX,EAX                        ; 004ba5fb
    JZ 0x004ba612                       ; 004ba5fd
        ;   XREF to: 004ba612 (CONDITIONAL_JUMP)  ; LAB_004ba612
    MOV EAX,0x1                         ; 004ba5ff
    MOV ESI,dword ptr [EBX + 0x208]     ; 004ba604
    SUB EAX,ESI                         ; 004ba60a
    MOV dword ptr [EBX + 0x208],EAX     ; 004ba60c
    PUSH 0x38                           ; 004ba612
        ;   Label: LAB_004ba612
    MOV EAX,[0x00600284]                ; 004ba614 | DAT_00600284
    PUSH EAX                            ; 004ba619 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba61a | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba61c
    ADD ESP,0x8                         ; 004ba61e
    TEST EAX,EAX                        ; 004ba621
    JZ 0x004ba64d                       ; 004ba623
        ;   XREF to: 004ba64d (CONDITIONAL_JUMP)  ; LAB_004ba64d
    PUSH 0x32                           ; 004ba625
    MOV EAX,[0x00600284]                ; 004ba627 | DAT_00600284
    PUSH EAX                            ; 004ba62c | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba62d | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba62f
    ADD ESP,0x8                         ; 004ba632
    TEST EAX,EAX                        ; 004ba635
    JZ 0x004ba64d                       ; 004ba637
        ;   XREF to: 004ba64d (CONDITIONAL_JUMP)  ; LAB_004ba64d
    CMP dword ptr [0x01d8e40c],0x0      ; 004ba639 | DAT_01d8e40c
    SETZ AL                             ; 004ba640
    AND EAX,0xff                        ; 004ba643
    MOV [0x01d8e40c],EAX                ; 004ba648 | DAT_01d8e40c
    CMP dword ptr [EBX + 0x200],0x0     ; 004ba64d
        ;   Label: LAB_004ba64d
    JZ 0x004babdd                       ; 004ba654
        ;   XREF to: 004babdd (CONDITIONAL_JUMP)  ; LAB_004babdd
    PUSH 0x1d                           ; 004ba65a
        ;   Label: LAB_004ba65a
    MOV EAX,[0x00600284]                ; 004ba65c | DAT_00600284
    PUSH EAX                            ; 004ba661 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba662 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba664
    ADD ESP,0x8                         ; 004ba666
    TEST EAX,EAX                        ; 004ba669
    JZ 0x004ba6a7                       ; 004ba66b
        ;   XREF to: 004ba6a7 (CONDITIONAL_JUMP)  ; LAB_004ba6a7
    PUSH 0x32                           ; 004ba66d
    MOV EAX,[0x00600284]                ; 004ba66f | DAT_00600284
    PUSH EAX                            ; 004ba674 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba675 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba677
    ADD ESP,0x8                         ; 004ba67a
    TEST EAX,EAX                        ; 004ba67d
    JZ 0x004ba6a7                       ; 004ba67f
        ;   XREF to: 004ba6a7 (CONDITIONAL_JUMP)  ; LAB_004ba6a7
    CALL FUN_00556750                   ; 004ba681
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; undefined FUN_00556750()
        ;   Label: LAB_004ba681
    TEST EAX,EAX                        ; 004ba686
    JZ 0x004babfa                       ; 004ba688
        ;   XREF to: 004babfa (CONDITIONAL_JUMP)  ; LAB_004babfa
    PUSH 0x0                            ; 004ba68e
    CALL FUN_00556760                   ; 004ba690
        ;   XREF to: 00556760 (UNCONDITIONAL_CALL)  ; undefined FUN_00556760()
    ADD ESP,0x4                         ; 004ba695
    MOV ECX,dword ptr [0x006045f8]      ; 004ba698 | DAT_006045f8
    PUSH ECX                            ; 004ba69e
    CALL FUN_0055fd30                   ; 004ba69f
        ;   XREF to: 0055fd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0055fd30()
    ADD ESP,0x4                         ; 004ba6a4
        ;   Label: LAB_004ba6a4
    CMP dword ptr [EBX + 0x234],0x0     ; 004ba6a7
        ;   Label: LAB_004ba6a7
    JZ 0x004ba70f                       ; 004ba6ae
        ;   XREF to: 004ba70f (CONDITIONAL_JUMP)  ; LAB_004ba70f
    PUSH 0x1d                           ; 004ba6b0
    MOV EAX,[0x00600284]                ; 004ba6b2 | DAT_00600284
    PUSH EAX                            ; 004ba6b7 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba6b8 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba6ba
    ADD ESP,0x8                         ; 004ba6bc
    TEST EAX,EAX                        ; 004ba6bf
    JZ 0x004ba70f                       ; 004ba6c1
        ;   XREF to: 004ba70f (CONDITIONAL_JUMP)  ; LAB_004ba70f
    PUSH 0x11                           ; 004ba6c3
    MOV EAX,[0x00600284]                ; 004ba6c5 | DAT_00600284
    PUSH EAX                            ; 004ba6ca | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba6cb | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba6cd
    ADD ESP,0x8                         ; 004ba6d0
    TEST EAX,EAX                        ; 004ba6d3
    JZ 0x004ba70f                       ; 004ba6d5
        ;   XREF to: 004ba70f (CONDITIONAL_JUMP)  ; LAB_004ba70f
    MOV EDI,dword ptr [0x005fba1c]      ; 004ba6d7 | DAT_005fba1c
    CMP EDI,0x1e0                       ; 004ba6dd
    JL 0x004ba70f                       ; 004ba6e3
        ;   XREF to: 004ba70f (CONDITIONAL_JUMP)  ; LAB_004ba70f
    MOV EAX,0x1                         ; 004ba6e5
    MOV EDX,dword ptr [EBX + 0x328]     ; 004ba6ea
    SUB EAX,EDX                         ; 004ba6f0
    MOV dword ptr [EBX + 0x328],EAX     ; 004ba6f2
    JNZ 0x004bac15                      ; 004ba6f8
        ;   XREF to: 004bac15 (CONDITIONAL_JUMP)  ; LAB_004bac15
    PUSH EDI                            ; 004ba6fe
    PUSH EAX                            ; 004ba6ff
    PUSH EAX                            ; 004ba700
    MOV EAX,[0x00603b28]                ; 004ba701 | DAT_00603b28
    PUSH EAX                            ; 004ba706 | DAT_01ed78c8
    CALL FUN_005353b0                   ; 004ba707
        ;   XREF to: 005353b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005353b0()
        ;   Label: LAB_004ba707
    ADD ESP,0x10                        ; 004ba70c
    CMP dword ptr [EBX + 0x234],0x0     ; 004ba70f
        ;   Label: LAB_004ba70f
    JZ 0x004ba725                       ; 004ba716
        ;   XREF to: 004ba725 (CONDITIONAL_JUMP)  ; LAB_004ba725
    CMP dword ptr [0x01d22c40],0x0      ; 004ba718 | DAT_01d22c40
    JZ 0x004bac2a                       ; 004ba71f
        ;   XREF to: 004bac2a (CONDITIONAL_JUMP)  ; LAB_004bac2a
    PUSH 0x1d                           ; 004ba725
        ;   Label: LAB_004ba725
    MOV EAX,[0x00600284]                ; 004ba727 | DAT_00600284
    PUSH EAX                            ; 004ba72c | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba72d | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba72f
    ADD ESP,0x8                         ; 004ba731
    TEST EAX,EAX                        ; 004ba734
    JZ 0x004ba75a                       ; 004ba736
        ;   XREF to: 004ba75a (CONDITIONAL_JUMP)  ; LAB_004ba75a
    PUSH 0x1f                           ; 004ba738
    MOV EAX,[0x00600284]                ; 004ba73a | DAT_00600284
    PUSH EAX                            ; 004ba73f | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba740 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba742
    ADD ESP,0x8                         ; 004ba745
    TEST EAX,EAX                        ; 004ba748
    JZ 0x004ba75a                       ; 004ba74a
        ;   XREF to: 004ba75a (CONDITIONAL_JUMP)  ; LAB_004ba75a
    MOV EAX,dword ptr [EBX + 0x24c]     ; 004ba74c
    TEST EAX,EAX                        ; 004ba752
    JZ 0x004bac83                       ; 004ba754
        ;   XREF to: 004bac83 (CONDITIONAL_JUMP)  ; LAB_004bac83
    PUSH 0x1d                           ; 004ba75a
        ;   Label: LAB_004ba75a
    MOV EAX,[0x00600284]                ; 004ba75c | DAT_00600284
    PUSH EAX                            ; 004ba761 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba762 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba764
    ADD ESP,0x8                         ; 004ba766
    TEST EAX,EAX                        ; 004ba769
    JZ 0x004ba78c                       ; 004ba76b
        ;   XREF to: 004ba78c (CONDITIONAL_JUMP)  ; LAB_004ba78c
    PUSH 0x7                            ; 004ba76d
    MOV EAX,[0x00600284]                ; 004ba76f | DAT_00600284
    PUSH EAX                            ; 004ba774 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba775 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba777
    ADD ESP,0x8                         ; 004ba77a
    TEST EAX,EAX                        ; 004ba77d
    JZ 0x004ba78c                       ; 004ba77f
        ;   XREF to: 004ba78c (CONDITIONAL_JUMP)  ; LAB_004ba78c
    PUSH 0x0                            ; 004ba781
    PUSH EBX                            ; 004ba783
    CALL FUN_004bda10                   ; 004ba784
        ;   XREF to: 004bda10 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda10()
    ADD ESP,0x8                         ; 004ba789
    PUSH 0x3c                           ; 004ba78c
        ;   Label: LAB_004ba78c
    MOV EAX,[0x00600284]                ; 004ba78e | DAT_00600284
    PUSH EAX                            ; 004ba793 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba794 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba796
    ADD ESP,0x8                         ; 004ba798
    TEST EAX,EAX                        ; 004ba79b
    JZ 0x004ba7ad                       ; 004ba79d
        ;   XREF to: 004ba7ad (CONDITIONAL_JUMP)  ; LAB_004ba7ad
    MOV EDX,dword ptr [EBX + 0x24c]     ; 004ba79f
    TEST EDX,EDX                        ; 004ba7a5
    JZ 0x004bac92                       ; 004ba7a7
        ;   XREF to: 004bac92 (CONDITIONAL_JUMP)  ; LAB_004bac92
    PUSH 0x3d                           ; 004ba7ad
        ;   Label: LAB_004ba7ad
    MOV EAX,[0x00600284]                ; 004ba7af | DAT_00600284
    PUSH EAX                            ; 004ba7b4 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba7b5 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba7b7
    ADD ESP,0x8                         ; 004ba7b9
    TEST EAX,EAX                        ; 004ba7bc
    JZ 0x004ba7c9                       ; 004ba7be
        ;   XREF to: 004ba7c9 (CONDITIONAL_JUMP)  ; LAB_004ba7c9
    PUSH EBX                            ; 004ba7c0
    CALL FUN_004bfa40                   ; 004ba7c1
        ;   XREF to: 004bfa40 (UNCONDITIONAL_CALL)  ; undefined FUN_004bfa40()
    ADD ESP,0x4                         ; 004ba7c6
    PUSH 0x40                           ; 004ba7c9
        ;   Label: LAB_004ba7c9
    MOV EAX,[0x00600284]                ; 004ba7cb | DAT_00600284
    PUSH EAX                            ; 004ba7d0 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba7d1 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba7d3
    ADD ESP,0x8                         ; 004ba7d5
    TEST EAX,EAX                        ; 004ba7d8
    JZ 0x004ba7e9                       ; 004ba7da
        ;   XREF to: 004ba7e9 (CONDITIONAL_JUMP)  ; LAB_004ba7e9
    CMP dword ptr [EBX + 0x24c],0x0     ; 004ba7dc
    JZ 0x004baca1                       ; 004ba7e3
        ;   XREF to: 004baca1 (CONDITIONAL_JUMP)  ; LAB_004baca1
    CMP dword ptr [EBX + 0x200],0x0     ; 004ba7e9
        ;   Label: LAB_004ba7e9
    JZ 0x004bacd0                       ; 004ba7f0
        ;   XREF to: 004bacd0 (CONDITIONAL_JUMP)  ; LAB_004bacd0
    PUSH 0x3b                           ; 004ba7f6
        ;   Label: LAB_004ba7f6
    MOV EAX,[0x00600284]                ; 004ba7f8 | DAT_00600284
    PUSH EAX                            ; 004ba7fd | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba7fe | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba800
    ADD ESP,0x8                         ; 004ba803
    TEST EAX,EAX                        ; 004ba806
    JZ 0x004ba81f                       ; 004ba808
        ;   XREF to: 004ba81f (CONDITIONAL_JUMP)  ; LAB_004ba81f
    CMP dword ptr [EBX + 0xb7c],0x0     ; 004ba80a
    SETZ AL                             ; 004ba811
    AND EAX,0xff                        ; 004ba814
    MOV dword ptr [EBX + 0xb7c],EAX     ; 004ba819
    CMP dword ptr [EBX + 0x234],0x0     ; 004ba81f
        ;   Label: LAB_004ba81f
    JZ 0x004bad85                       ; 004ba826
        ;   XREF to: 004bad85 (CONDITIONAL_JUMP)  ; LAB_004bad85
    PUSH 0xe                            ; 004ba82c
        ;   Label: LAB_004ba82c
    MOV EAX,[0x00600284]                ; 004ba82e | DAT_00600284
    PUSH EAX                            ; 004ba833 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba834 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba836
    ADD ESP,0x8                         ; 004ba839
    TEST EAX,EAX                        ; 004ba83c
    JZ 0x004ba855                       ; 004ba83e
        ;   XREF to: 004ba855 (CONDITIONAL_JUMP)  ; LAB_004ba855
    CMP dword ptr [EBX + 0x330],0x0     ; 004ba840
    SETZ AL                             ; 004ba847
    AND EAX,0xff                        ; 004ba84a
    MOV dword ptr [EBX + 0x330],EAX     ; 004ba84f
    CMP dword ptr [EBX + 0x220],0x0     ; 004ba855
        ;   Label: LAB_004ba855
    JZ 0x004bad9f                       ; 004ba85c
        ;   XREF to: 004bad9f (CONDITIONAL_JUMP)  ; LAB_004bad9f
    PUSH 0x57                           ; 004ba862
        ;   Label: LAB_004ba862
    MOV EAX,[0x00600284]                ; 004ba864 | DAT_00600284
    PUSH EAX                            ; 004ba869 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba86a | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba86c
    ADD ESP,0x8                         ; 004ba86f
    TEST EAX,EAX                        ; 004ba872
    JZ 0x004ba8ed                       ; 004ba874
        ;   XREF to: 004ba8ed (CONDITIONAL_JUMP)  ; LAB_004ba8ed
    MOV ESI,dword ptr [EBX + 0x248]     ; 004ba876
    SUB ESI,0x400                       ; 004ba87c
    MOV dword ptr [EBX + 0x248],ESI     ; 004ba882
    CMP ESI,0x8000                      ; 004ba888
    JGE 0x004ba89a                      ; 004ba88e
        ;   XREF to: 004ba89a (CONDITIONAL_JUMP)  ; LAB_004ba89a
    MOV dword ptr [EBX + 0x248],0x8000  ; 004ba890
    FILD dword ptr [EBX + 0x248]        ; 004ba89a
        ;   Label: LAB_004ba89a
    FMUL double ptr [0x005c2918]        ; 004ba8a0 | DAT_005c2918
    SUB ESP,0x8                         ; 004ba8a6
    FSTP double ptr [ESP]               ; 004ba8a9
    PUSH 0x5c28fd                       ; 004ba8ac | = "Gamma : %f"
    LEA EAX,[ESP + 0x110]               ; 004ba8b1
    PUSH EAX                            ; 004ba8b8
    CALL FUN_005a28c0                   ; 004ba8b9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 004ba8be
    LEA EAX,[ESP + 0x104]               ; 004ba8c1
    PUSH 0x3f800000                     ; 004ba8c8
    PUSH EAX                            ; 004ba8cd
    PUSH EBX                            ; 004ba8ce
    CALL FUN_004b46b0                   ; 004ba8cf
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 004ba8d4
    MOV EAX,dword ptr [EBX + 0x248]     ; 004ba8d7
    PUSH EAX                            ; 004ba8dd
    MOV EDX,dword ptr [0x00603b28]      ; 004ba8de | DAT_00603b28
    PUSH EDX                            ; 004ba8e4 | DAT_01ed78c8
    CALL FUN_0053b1c0                   ; 004ba8e5
        ;   XREF to: 0053b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b1c0()
    ADD ESP,0x8                         ; 004ba8ea
    PUSH 0x58                           ; 004ba8ed
        ;   Label: LAB_004ba8ed
    MOV EAX,[0x00600284]                ; 004ba8ef | DAT_00600284
    PUSH EAX                            ; 004ba8f4 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba8f5 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba8f7
    ADD ESP,0x8                         ; 004ba8fa
    TEST EAX,EAX                        ; 004ba8fd
    JZ 0x004ba971                       ; 004ba8ff
        ;   XREF to: 004ba971 (CONDITIONAL_JUMP)  ; LAB_004ba971
    MOV ECX,dword ptr [EBX + 0x248]     ; 004ba901
    ADD ECX,0x400                       ; 004ba907
    MOV dword ptr [EBX + 0x248],ECX     ; 004ba90d
    CMP ECX,0x10000                     ; 004ba913
    JLE 0x004ba925                      ; 004ba919
        ;   XREF to: 004ba925 (CONDITIONAL_JUMP)  ; LAB_004ba925
    MOV dword ptr [EBX + 0x248],0x10000 ; 004ba91b
    FILD dword ptr [EBX + 0x248]        ; 004ba925
        ;   Label: LAB_004ba925
    FMUL double ptr [0x005c2918]        ; 004ba92b | DAT_005c2918
    SUB ESP,0x8                         ; 004ba931
    FSTP double ptr [ESP]               ; 004ba934
    PUSH 0x5c2908                       ; 004ba937 | = "Gamma : %f"
    LEA EAX,[ESP + 0x10]                ; 004ba93c
    PUSH EAX                            ; 004ba940
    CALL FUN_005a28c0                   ; 004ba941
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 004ba946
    LEA EAX,[ESP + 0x4]                 ; 004ba949
    PUSH 0x3f800000                     ; 004ba94d
    PUSH EAX                            ; 004ba952
    PUSH EBX                            ; 004ba953
    CALL FUN_004b46b0                   ; 004ba954
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 004ba959
    MOV EDI,dword ptr [EBX + 0x248]     ; 004ba95c
    PUSH EDI                            ; 004ba962
    MOV EAX,[0x00603b28]                ; 004ba963 | DAT_00603b28
    PUSH EAX                            ; 004ba968 | DAT_01ed78c8
    CALL FUN_0053b1c0                   ; 004ba969
        ;   XREF to: 0053b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b1c0()
    ADD ESP,0x8                         ; 004ba96e
    CMP dword ptr [EBX + 0x234],0x0     ; 004ba971
        ;   Label: LAB_004ba971
    JZ 0x004ba9c4                       ; 004ba978
        ;   XREF to: 004ba9c4 (CONDITIONAL_JUMP)  ; LAB_004ba9c4
    PUSH 0x1d                           ; 004ba97a
    MOV EAX,[0x00600284]                ; 004ba97c | DAT_00600284
    PUSH EAX                            ; 004ba981 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba982 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ba984
    ADD ESP,0x8                         ; 004ba986
    TEST EAX,EAX                        ; 004ba989
    JZ 0x004ba9c4                       ; 004ba98b
        ;   XREF to: 004ba9c4 (CONDITIONAL_JUMP)  ; LAB_004ba9c4
    PUSH 0x23                           ; 004ba98d
    MOV EAX,[0x00600284]                ; 004ba98f | DAT_00600284
    PUSH EAX                            ; 004ba994 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ba995 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba997
    ADD ESP,0x8                         ; 004ba99a
    TEST EAX,EAX                        ; 004ba99d
    JZ 0x004ba9c4                       ; 004ba99f
        ;   XREF to: 004ba9c4 (CONDITIONAL_JUMP)  ; LAB_004ba9c4
    MOV EAX,[0x00603b28]                ; 004ba9a1 | DAT_00603b28
    MOV EAX,dword ptr [EAX + 0x15aeb4]  ; 004ba9a6 | DAT_0203277c
    TEST EAX,EAX                        ; 004ba9ac
    SETZ AL                             ; 004ba9ae
    MOV EDI,EAX                         ; 004ba9b1
    MOV EAX,[0x00603b28]                ; 004ba9b3 | DAT_00603b28 | DAT_01ed78c8
    AND EDI,0xff                        ; 004ba9b8
    MOV dword ptr [EAX + 0x15aeb4],EDI  ; 004ba9be | DAT_0203277c
    CMP dword ptr [EBX + 0x234],0x0     ; 004ba9c4
        ;   Label: LAB_004ba9c4
    JNZ 0x004bae8d                      ; 004ba9cb
        ;   XREF to: 004bae8d (CONDITIONAL_JUMP)  ; LAB_004bae8d
    MOV ESP,EBP                         ; 004ba9d1
        ;   Label: LAB_004ba9d1
    POP EBP                             ; 004ba9d3
    POP EDI                             ; 004ba9d4
    POP ESI                             ; 004ba9d5
    POP EBX                             ; 004ba9d6
    RET                                 ; 004ba9d7
    MOV ESI,dword ptr [EBX + 0x60]      ; 004ba9d8
        ;   Label: LAB_004ba9d8
    MOV EAX,[0x00600284]                ; 004ba9db | DAT_00600284
    PUSH ESI                            ; 004ba9e0
    MOV EDI,dword ptr [EAX]             ; 004ba9e1 | DAT_01d70a78
    PUSH EAX                            ; 004ba9e3 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004ba9e4
    ADD ESP,0x8                         ; 004ba9e7
    TEST EAX,EAX                        ; 004ba9ea
    JZ 0x004baa02                       ; 004ba9ec
        ;   XREF to: 004baa02 (CONDITIONAL_JUMP)  ; LAB_004baa02
    PUSH 0x5c2848                       ; 004ba9ee | = "GoToMap"
    MOV EDI,dword ptr [0x005fba60]      ; 004ba9f3 | DAT_005fba60
    PUSH EDI                            ; 004ba9f9
    CALL FUN_0048c150                   ; 004ba9fa
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 004ba9ff
    MOV EDX,dword ptr [EBX + 0x68]      ; 004baa02
        ;   Label: LAB_004baa02
    MOV EAX,[0x00600284]                ; 004baa05 | DAT_00600284
    PUSH EDX                            ; 004baa0a
    MOV EDI,dword ptr [EAX]             ; 004baa0b | DAT_01d70a78
    PUSH EAX                            ; 004baa0d | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004baa0e
    ADD ESP,0x8                         ; 004baa11
    TEST EAX,EAX                        ; 004baa14
    JZ 0x004baa4f                       ; 004baa16
        ;   XREF to: 004baa4f (CONDITIONAL_JUMP)  ; LAB_004baa4f
    MOV EAX,[0x01d5ba14]                ; 004baa18 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004baa1d
    PUSH 0x5c2850                       ; 004baa24 | = "voodoo_doll"
    ADD EAX,0x206e8                     ; 004baa29
    PUSH EAX                            ; 004baa2e
    CALL FUN_004db990                   ; 004baa2f
        ;   XREF to: 004db990 (UNCONDITIONAL_CALL)  ; undefined FUN_004db990()
    ADD ESP,0x8                         ; 004baa34
    TEST EAX,EAX                        ; 004baa37
    JZ 0x004baa4f                       ; 004baa39
        ;   XREF to: 004baa4f (CONDITIONAL_JUMP)  ; LAB_004baa4f
    PUSH 0x5c285c                       ; 004baa3b | = "UseSPS"
    MOV ECX,dword ptr [0x005fba60]      ; 004baa40 | DAT_005fba60
    PUSH ECX                            ; 004baa46
    CALL FUN_0048c150                   ; 004baa47
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 004baa4c
    MOV ESI,dword ptr [EBX + 0x5c]      ; 004baa4f
        ;   Label: LAB_004baa4f
    MOV EAX,[0x00600284]                ; 004baa52 | DAT_00600284
    PUSH ESI                            ; 004baa57
    MOV EDI,dword ptr [EAX]             ; 004baa58 | DAT_01d70a78
    PUSH EAX                            ; 004baa5a | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004baa5b
    ADD ESP,0x8                         ; 004baa5e
    TEST EAX,EAX                        ; 004baa61
    JZ 0x004baa7c                       ; 004baa63
        ;   XREF to: 004baa7c (CONDITIONAL_JUMP)  ; LAB_004baa7c
    MOV EAX,[0x005fe4b0]                ; 004baa65 | DAT_005fe4b0
    MOV EDI,dword ptr [EAX + 0x40]      ; 004baa6a | DAT_01d1a09c
    TEST EDI,EDI                        ; 004baa6d
    JZ 0x004bab67                       ; 004baa6f
        ;   XREF to: 004bab67 (CONDITIONAL_JUMP)  ; LAB_004bab67
    MOV dword ptr [EAX + 0x40],0x0      ; 004baa75 | DAT_01d1a09c
        ;   Label: LAB_004baa75
    MOV EAX,[0x005fe4b0]                ; 004baa7c | DAT_005fe4b0
        ;   Label: LAB_004baa7c
    CMP byte ptr [EAX],0x0              ; 004baa81 | DAT_01d1a05c
    JNZ 0x004baa8d                      ; 004baa84
        ;   XREF to: 004baa8d (CONDITIONAL_JUMP)  ; LAB_004baa8d
    MOV dword ptr [EAX + 0x40],0x0      ; 004baa86 | DAT_01d1a09c
    CMP dword ptr [EBX + 0x234],0x0     ; 004baa8d
        ;   Label: LAB_004baa8d
    JZ 0x004baaf8                       ; 004baa94
        ;   XREF to: 004baaf8 (CONDITIONAL_JUMP)  ; LAB_004baaf8
    PUSH 0x1d                           ; 004baa96
    MOV EAX,[0x00600284]                ; 004baa98 | DAT_00600284
    PUSH EAX                            ; 004baa9d | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004baa9e | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004baaa0
    ADD ESP,0x8                         ; 004baaa2
    TEST EAX,EAX                        ; 004baaa5
    JZ 0x004baaf8                       ; 004baaa7
        ;   XREF to: 004baaf8 (CONDITIONAL_JUMP)  ; LAB_004baaf8
    PUSH 0x12                           ; 004baaa9
    MOV EAX,[0x00600284]                ; 004baaab | DAT_00600284
    PUSH EAX                            ; 004baab0 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004baab1 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004baab3
    ADD ESP,0x8                         ; 004baab6
    TEST EAX,EAX                        ; 004baab9
    JZ 0x004baaf8                       ; 004baabb
        ;   XREF to: 004baaf8 (CONDITIONAL_JUMP)  ; LAB_004baaf8
    MOV EAX,0x1                         ; 004baabd
    MOV EDI,dword ptr [EBX + 0x324]     ; 004baac2
    SUB EAX,EDI                         ; 004baac8
    MOV dword ptr [EBX + 0x324],EAX     ; 004baaca
    JZ 0x004baaf8                       ; 004baad0
        ;   XREF to: 004baaf8 (CONDITIONAL_JUMP)  ; LAB_004baaf8
    MOV EAX,[0x006039e0]                ; 004baad2 | DAT_006039e0
    PUSH 0x1                            ; 004baad7
    MOV EDX,dword ptr [EAX + 0xc]       ; 004baad9 | DAT_01ed73ec
    PUSH EDX                            ; 004baadc
    MOV ECX,dword ptr [0x00603b28]      ; 004baadd | DAT_00603b28
    PUSH ECX                            ; 004baae3 | DAT_01ed78c8
    CALL FUN_0053f940                   ; 004baae4
        ;   XREF to: 0053f940 (UNCONDITIONAL_CALL)  ; undefined FUN_0053f940()
    MOV EAX,[0x006039e0]                ; 004baae9 | DAT_006039e0
    ADD ESP,0xc                         ; 004baaee
    MOV dword ptr [EAX + 0x10],0x0      ; 004baaf1 | DAT_01ed73f0
    MOV ESI,dword ptr [EBX + 0x324]     ; 004baaf8
        ;   Label: LAB_004baaf8
    TEST ESI,ESI                        ; 004baafe
    JNZ 0x004ba56c                      ; 004bab00
        ;   XREF to: 004ba56c (CONDITIONAL_JUMP)  ; LAB_004ba56c
    PUSH 0x2e                           ; 004bab06
    MOV EAX,[0x00600284]                ; 004bab08 | DAT_00600284
    PUSH EAX                            ; 004bab0d | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bab0e | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004bab10
    ADD ESP,0x8                         ; 004bab13
    TEST EAX,EAX                        ; 004bab16
    JZ 0x004ba56c                       ; 004bab18
        ;   XREF to: 004ba56c (CONDITIONAL_JUMP)  ; LAB_004ba56c
    PUSH 0x2a                           ; 004bab1e
    MOV EAX,[0x00600284]                ; 004bab20 | DAT_00600284
    PUSH EAX                            ; 004bab25 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bab26 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004bab28
    ADD ESP,0x8                         ; 004bab2a
    TEST EAX,EAX                        ; 004bab2d
    JNZ 0x004bab91                      ; 004bab2f
        ;   XREF to: 004bab91 (CONDITIONAL_JUMP)  ; LAB_004bab91
    MOV EDI,dword ptr [EBX + 0x320]     ; 004bab31
    INC EDI                             ; 004bab37
    MOV EAX,[0x00603b28]                ; 004bab38 | DAT_00603b28
    MOV dword ptr [EBX + 0x320],EDI     ; 004bab3d
    CMP EDI,dword ptr [EAX]             ; 004bab43 | DAT_01ed78c8
    JL 0x004bab4d                       ; 004bab45
        ;   XREF to: 004bab4d (CONDITIONAL_JUMP)  ; LAB_004bab4d
    MOV dword ptr [EBX + 0x320],ESI     ; 004bab47
    MOV EDI,dword ptr [EBX + 0x320]     ; 004bab4d
        ;   Label: LAB_004bab4d
    PUSH EDI                            ; 004bab53
    MOV EAX,[0x00603b28]                ; 004bab54 | DAT_00603b28
    PUSH EAX                            ; 004bab59 | DAT_01ed78c8
    CALL FUN_00534890                   ; 004bab5a
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; undefined FUN_00534890()
    ADD ESP,0x8                         ; 004bab5f
    JMP 0x004ba56c                      ; 004bab62
        ;   XREF to: 004ba56c (UNCONDITIONAL_JUMP)  ; LAB_004ba56c
    MOV dword ptr [EAX + 0x40],0x1      ; 004bab67 | DAT_01d1a09c
        ;   Label: LAB_004bab67
    CMP dword ptr [EBX + 0x24c],0x0     ; 004bab6e
    JZ 0x004bab7a                       ; 004bab75
        ;   XREF to: 004bab7a (CONDITIONAL_JUMP)  ; LAB_004bab7a
    MOV dword ptr [EAX + 0x40],EDI      ; 004bab77 | DAT_01d1a09c
    CMP dword ptr [0x007dffb4],0x0      ; 004bab7a | DAT_007dffb4
        ;   Label: LAB_004bab7a
    JZ 0x004baa7c                       ; 004bab81
        ;   XREF to: 004baa7c (CONDITIONAL_JUMP)  ; LAB_004baa7c
    MOV EAX,[0x005fe4b0]                ; 004bab87 | DAT_005fe4b0
    JMP 0x004baa75                      ; 004bab8c
        ;   XREF to: 004baa75 (UNCONDITIONAL_JUMP)  ; LAB_004baa75
    MOV ECX,dword ptr [EBX + 0x320]     ; 004bab91
        ;   Label: LAB_004bab91
    DEC ECX                             ; 004bab97
    MOV dword ptr [EBX + 0x320],ECX     ; 004bab98
    TEST ECX,ECX                        ; 004bab9e
    JGE 0x004bab4d                      ; 004baba0
        ;   XREF to: 004bab4d (CONDITIONAL_JUMP)  ; LAB_004bab4d
    MOV EAX,[0x00603b28]                ; 004baba2 | DAT_00603b28
    MOV EAX,dword ptr [EAX]             ; 004baba7 | DAT_01ed78c8
    DEC EAX                             ; 004baba9
    MOV dword ptr [EBX + 0x320],EAX     ; 004babaa
    JMP 0x004bab4d                      ; 004babb0
        ;   XREF to: 004bab4d (UNCONDITIONAL_JUMP)  ; LAB_004bab4d
    MOV EDI,dword ptr [0x006045f8]      ; 004babb2 | DAT_006045f8
        ;   Label: LAB_004babb2
    PUSH EDI                            ; 004babb8
    CALL FUN_0055fd30                   ; 004babb9
        ;   XREF to: 0055fd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0055fd30()
    JMP 0x004ba5c8                      ; 004babbe
        ;   XREF to: 004ba5c8 (UNCONDITIONAL_JUMP)  ; LAB_004ba5c8
    PUSH 0x5c2863                       ; 004babc3 | = "SPOOKHOUSE"
        ;   Label: LAB_004babc3
    CALL FUN_005a5ec0                   ; 004babc8
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5ec0()
    ADD ESP,0x4                         ; 004babcd
    TEST EAX,EAX                        ; 004babd0
    JNZ 0x004ba5d8                      ; 004babd2
        ;   XREF to: 004ba5d8 (CONDITIONAL_JUMP)  ; LAB_004ba5d8
    JMP 0x004ba612                      ; 004babd8
        ;   XREF to: 004ba612 (UNCONDITIONAL_JUMP)  ; LAB_004ba612
    PUSH 0x3f                           ; 004babdd
        ;   Label: LAB_004babdd
    MOV EAX,[0x00600284]                ; 004babdf | DAT_00600284
    PUSH EAX                            ; 004babe4 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004babe5 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004babe7
    ADD ESP,0x8                         ; 004babea
    TEST EAX,EAX                        ; 004babed
    JNZ 0x004ba681                      ; 004babef
        ;   XREF to: 004ba681 (CONDITIONAL_JUMP)  ; LAB_004ba681
    JMP 0x004ba65a                      ; 004babf5
        ;   XREF to: 004ba65a (UNCONDITIONAL_JUMP)  ; LAB_004ba65a
    MOV EDX,dword ptr [0x006045f8]      ; 004babfa | DAT_006045f8
        ;   Label: LAB_004babfa
    PUSH EDX                            ; 004bac00
    CALL FUN_0055fee0                   ; 004bac01
        ;   XREF to: 0055fee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055fee0()
    ADD ESP,0x4                         ; 004bac06
    PUSH 0x1                            ; 004bac09
    CALL FUN_00556760                   ; 004bac0b
        ;   XREF to: 00556760 (UNCONDITIONAL_CALL)  ; undefined FUN_00556760()
    JMP 0x004ba6a4                      ; 004bac10
        ;   XREF to: 004ba6a4 (UNCONDITIONAL_JUMP)  ; LAB_004ba6a4
    PUSH 0xf0                           ; 004bac15
        ;   Label: LAB_004bac15
    PUSH 0x1                            ; 004bac1a
    PUSH 0x1                            ; 004bac1c
    MOV ESI,dword ptr [0x00603b28]      ; 004bac1e | DAT_00603b28
    PUSH ESI                            ; 004bac24 | DAT_01ed78c8
    JMP 0x004ba707                      ; 004bac25
        ;   XREF to: 004ba707 (UNCONDITIONAL_JUMP)  ; LAB_004ba707
    PUSH 0x1d                           ; 004bac2a
        ;   Label: LAB_004bac2a
    MOV EAX,[0x00600284]                ; 004bac2c | DAT_00600284
    PUSH EAX                            ; 004bac31 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bac32 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004bac34
    ADD ESP,0x8                         ; 004bac36
    TEST EAX,EAX                        ; 004bac39
    JZ 0x004ba725                       ; 004bac3b
        ;   XREF to: 004ba725 (CONDITIONAL_JUMP)  ; LAB_004ba725
    PUSH 0x2f                           ; 004bac41
    MOV EAX,[0x00600284]                ; 004bac43 | DAT_00600284
    PUSH EAX                            ; 004bac48 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bac49 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004bac4b
    ADD ESP,0x8                         ; 004bac4e
    TEST EAX,EAX                        ; 004bac51
    JZ 0x004ba725                       ; 004bac53
        ;   XREF to: 004ba725 (CONDITIONAL_JUMP)  ; LAB_004ba725
    CMP dword ptr [0x005fba1c],0x1e0    ; 004bac59 | DAT_005fba1c
    JL 0x004ba725                       ; 004bac63
        ;   XREF to: 004ba725 (CONDITIONAL_JUMP)  ; LAB_004ba725
    CMP dword ptr [EBX + 0x20c],0x0     ; 004bac69
    SETZ AL                             ; 004bac70
    AND EAX,0xff                        ; 004bac73
    MOV dword ptr [EBX + 0x20c],EAX     ; 004bac78
    JMP 0x004ba725                      ; 004bac7e
        ;   XREF to: 004ba725 (UNCONDITIONAL_JUMP)  ; LAB_004ba725
    PUSH EAX                            ; 004bac83
        ;   Label: LAB_004bac83
    PUSH EBX                            ; 004bac84
    CALL FUN_004bda10                   ; 004bac85
        ;   XREF to: 004bda10 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda10()
    ADD ESP,0x8                         ; 004bac8a
    JMP 0x004ba75a                      ; 004bac8d
        ;   XREF to: 004ba75a (UNCONDITIONAL_JUMP)  ; LAB_004ba75a
    PUSH EDX                            ; 004bac92
        ;   Label: LAB_004bac92
    PUSH EBX                            ; 004bac93
    CALL FUN_004bda10                   ; 004bac94
        ;   XREF to: 004bda10 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda10()
    ADD ESP,0x8                         ; 004bac99
    JMP 0x004ba7ad                      ; 004bac9c
        ;   XREF to: 004ba7ad (UNCONDITIONAL_JUMP)  ; LAB_004ba7ad
    PUSH 0x5c286e                       ; 004baca1 | = "quicksavedgame.sav"
        ;   Label: LAB_004baca1
    PUSH EBX                            ; 004baca6
    CALL FUN_004bda10                   ; 004baca7
        ;   XREF to: 004bda10 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda10()
    ADD ESP,0x8                         ; 004bacac
    PUSH 0x40000000                     ; 004bacaf
    PUSH 0x5c2881                       ; 004bacb4 | = "Quick Save"
    CALL FUN_00508960                   ; 004bacb9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004bacbe
    PUSH EAX                            ; 004bacc1
    PUSH EBX                            ; 004bacc2
    CALL FUN_004b46b0                   ; 004bacc3
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 004bacc8
    JMP 0x004ba7e9                      ; 004baccb
        ;   XREF to: 004ba7e9 (UNCONDITIONAL_JUMP)  ; LAB_004ba7e9
    PUSH 0x43                           ; 004bacd0
        ;   Label: LAB_004bacd0
    MOV EAX,[0x00600284]                ; 004bacd2 | DAT_00600284
    PUSH EAX                            ; 004bacd7 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bacd8 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004bacda
    ADD ESP,0x8                         ; 004bacdc
    TEST EAX,EAX                        ; 004bacdf
    JZ 0x004ba7f6                       ; 004bace1
        ;   XREF to: 004ba7f6 (CONDITIONAL_JUMP)  ; LAB_004ba7f6
    PUSH 0x5c288c                       ; 004bace7 | DAT_005c288c
    PUSH 0x5c288f                       ; 004bacec | = "quicksavedgame.sav"
    PUSH 0x5c28a2                       ; 004bacf1 | DAT_005c28a2
    CALL FUN_004659c0                   ; 004bacf6
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004bacfb
    TEST EAX,EAX                        ; 004bacfe
    JZ 0x004bad64                       ; 004bad00
        ;   XREF to: 004bad64 (CONDITIONAL_JUMP)  ; LAB_004bad64
    PUSH EAX                            ; 004bad02
    CALL FUN_005a3a90                   ; 004bad03
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004bad08
    PUSH 0x5c28a7                       ; 004bad0b | = "Restore quick saved game?"
    CALL FUN_00508960                   ; 004bad10
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004bad15
    PUSH EAX                            ; 004bad18
    MOV EDI,dword ptr [0x005fb140]      ; 004bad19 | DAT_005fb140
    PUSH EDI                            ; 004bad1f
    CALL FUN_0047d8c0                   ; 004bad20
        ;   XREF to: 0047d8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047d8c0()
    ADD ESP,0x8                         ; 004bad25
    TEST EAX,EAX                        ; 004bad28
    JZ 0x004ba7f6                       ; 004bad2a
        ;   XREF to: 004ba7f6 (CONDITIONAL_JUMP)  ; LAB_004ba7f6
    MOV ESI,0x5c28c1                    ; 004bad30 | = "quicksavedgame.sav"
    LEA EDI,[EBX + 0xa7c]               ; 004bad35
    MOV dword ptr [EBX + 0xa78],0x1     ; 004bad3b
    PUSH EDI                            ; 004bad45
    MOV AL,byte ptr [ESI]               ; 004bad46 | = "quicksavedgame.sav" | s_quicksavedgame_sav_005c28c1+2
        ;   Label: LAB_004bad46
    MOV byte ptr [EDI],AL               ; 004bad48
    CMP AL,0x0                          ; 004bad4a
    JZ 0x004bad5e                       ; 004bad4c
        ;   XREF to: 004bad5e (CONDITIONAL_JUMP)  ; LAB_004bad5e
    MOV AL,byte ptr [ESI + 0x1]         ; 004bad4e | s_quicksavedgame_sav_005c28c1+1 | s_quicksavedgame_sav_005c28c1+3
    ADD ESI,0x2                         ; 004bad51
    MOV byte ptr [EDI + 0x1],AL         ; 004bad54
    ADD EDI,0x2                         ; 004bad57
    CMP AL,0x0                          ; 004bad5a
    JNZ 0x004bad46                      ; 004bad5c
        ;   XREF to: 004bad46 (CONDITIONAL_JUMP)  ; LAB_004bad46
    POP EDI                             ; 004bad5e
        ;   Label: LAB_004bad5e
    JMP 0x004ba7f6                      ; 004bad5f
        ;   XREF to: 004ba7f6 (UNCONDITIONAL_JUMP)  ; LAB_004ba7f6
    PUSH 0x40000000                     ; 004bad64
        ;   Label: LAB_004bad64
    PUSH 0x5c28d4                       ; 004bad69 | = "No quicked saved game to load"
    CALL FUN_00508960                   ; 004bad6e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004bad73
    PUSH EAX                            ; 004bad76
    PUSH EBX                            ; 004bad77
    CALL FUN_004b46b0                   ; 004bad78
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 004bad7d
    JMP 0x004ba7f6                      ; 004bad80
        ;   XREF to: 004ba7f6 (UNCONDITIONAL_JUMP)  ; LAB_004ba7f6
    PUSH 0x5c28f2                       ; 004bad85 | = "SPOOKHOUSE"
        ;   Label: LAB_004bad85
    CALL FUN_005a5ec0                   ; 004bad8a
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5ec0()
    ADD ESP,0x4                         ; 004bad8f
    TEST EAX,EAX                        ; 004bad92
    JNZ 0x004ba82c                      ; 004bad94
        ;   XREF to: 004ba82c (CONDITIONAL_JUMP)  ; LAB_004ba82c
    JMP 0x004ba855                      ; 004bad9a
        ;   XREF to: 004ba855 (UNCONDITIONAL_JUMP)  ; LAB_004ba855
    MOV EAX,[0x006039e0]                ; 004bad9f | DAT_006039e0
        ;   Label: LAB_004bad9f
    CMP dword ptr [EAX + 0x1c],0x2      ; 004bada4 | DAT_01ed73fc
    JZ 0x004badfe                       ; 004bada8
        ;   XREF to: 004badfe (CONDITIONAL_JUMP)  ; LAB_004badfe
    PUSH 0x3f                           ; 004badaa
    MOV EAX,[0x00600284]                ; 004badac | DAT_00600284
    PUSH EAX                            ; 004badb1 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004badb2 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004badb4
    ADD ESP,0x8                         ; 004badb7
    TEST EAX,EAX                        ; 004badba
    JZ 0x004badfe                       ; 004badbc
        ;   XREF to: 004badfe (CONDITIONAL_JUMP)  ; LAB_004badfe
    PUSH 0xf0                           ; 004badbe
    PUSH 0x0                            ; 004badc3
    PUSH 0x0                            ; 004badc5
    MOV ECX,dword ptr [0x00603b28]      ; 004badc7 | DAT_00603b28
    PUSH ECX                            ; 004badcd | DAT_01ed78c8
    MOV dword ptr [EBX + 0x328],0x1     ; 004badce
    CALL FUN_005353b0                   ; 004badd8
        ;   XREF to: 005353b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005353b0()
    MOV EAX,[0x006039e0]                ; 004baddd | DAT_006039e0
    MOV dword ptr [EBX + 0x200],0x1     ; 004bade2
    MOV ESI,dword ptr [EAX + 0x1c]      ; 004badec | DAT_01ed73fc
    ADD ESP,0x10                        ; 004badef
    CMP ESI,0x1                         ; 004badf2
    JNZ 0x004bae62                      ; 004badf5
        ;   XREF to: 004bae62 (CONDITIONAL_JUMP)  ; LAB_004bae62
    MOV dword ptr [EAX + 0x1c],0x0      ; 004badf7 | DAT_01ed73fc
    CMP dword ptr [EBX + 0x200],0x0     ; 004badfe
        ;   Label: LAB_004badfe
    JZ 0x004ba862                       ; 004bae05
        ;   XREF to: 004ba862 (CONDITIONAL_JUMP)  ; LAB_004ba862
    MOV EAX,[0x006039e0]                ; 004bae0b | DAT_006039e0
    CMP dword ptr [EAX + 0x1c],0x2      ; 004bae10 | DAT_01ed73fc
    JZ 0x004bae6b                       ; 004bae14
        ;   XREF to: 004bae6b (CONDITIONAL_JUMP)  ; LAB_004bae6b
    PUSH 0x3f                           ; 004bae16
        ;   Label: LAB_004bae16
    MOV EAX,[0x00600284]                ; 004bae18 | DAT_00600284
    PUSH EAX                            ; 004bae1d | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bae1e | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004bae20
    ADD ESP,0x8                         ; 004bae23
    TEST EAX,EAX                        ; 004bae26
    JZ 0x004bae36                       ; 004bae28
        ;   XREF to: 004bae36 (CONDITIONAL_JUMP)  ; LAB_004bae36
    MOV EAX,[0x006039e0]                ; 004bae2a | DAT_006039e0
    MOV dword ptr [EAX + 0x1c],0x0      ; 004bae2f | DAT_01ed73fc
    PUSH 0x43                           ; 004bae36
        ;   Label: LAB_004bae36
    MOV EAX,[0x00600284]                ; 004bae38 | DAT_00600284
    PUSH EAX                            ; 004bae3d | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bae3e | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004bae40
    ADD ESP,0x8                         ; 004bae43
    TEST EAX,EAX                        ; 004bae46
    JZ 0x004ba862                       ; 004bae48
        ;   XREF to: 004ba862 (CONDITIONAL_JUMP)  ; LAB_004ba862
    MOV ECX,dword ptr [0x006039e0]      ; 004bae4e | DAT_006039e0
    PUSH ECX                            ; 004bae54 | DAT_01ed73e0
    CALL FUN_00530500                   ; 004bae55
        ;   XREF to: 00530500 (UNCONDITIONAL_CALL)  ; undefined FUN_00530500()
    ADD ESP,0x4                         ; 004bae5a
    JMP 0x004ba862                      ; 004bae5d
        ;   XREF to: 004ba862 (UNCONDITIONAL_JUMP)  ; LAB_004ba862
    MOV dword ptr [EAX + 0x1c],0x1      ; 004bae62 | DAT_01ed73fc
        ;   Label: LAB_004bae62
    JMP 0x004badfe                      ; 004bae69
        ;   XREF to: 004badfe (UNCONDITIONAL_JUMP)  ; LAB_004badfe
    PUSH 0x44                           ; 004bae6b
        ;   Label: LAB_004bae6b
    MOV EAX,[0x00600284]                ; 004bae6d | DAT_00600284
    PUSH EAX                            ; 004bae72 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004bae73 | DAT_01d70a78
    CALL dword ptr [EDI + 0x4]          ; 004bae75
    ADD ESP,0x8                         ; 004bae78
    TEST EAX,EAX                        ; 004bae7b
    JZ 0x004bae16                       ; 004bae7d
        ;   XREF to: 004bae16 (CONDITIONAL_JUMP)  ; LAB_004bae16
    MOV EAX,[0x006039e0]                ; 004bae7f | DAT_006039e0
    MOV dword ptr [EAX + 0x1c],0x1      ; 004bae84 | DAT_01ed73fc
    JMP 0x004bae16                      ; 004bae8b
        ;   XREF to: 004bae16 (UNCONDITIONAL_JUMP)  ; LAB_004bae16
    PUSH 0x38                           ; 004bae8d
        ;   Label: LAB_004bae8d
    MOV EAX,[0x00600284]                ; 004bae8f | DAT_00600284
    PUSH EAX                            ; 004bae94 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 004bae95 | DAT_01d70a78
    CALL dword ptr [EBX]                ; 004bae97
    ADD ESP,0x8                         ; 004bae99
    TEST EAX,EAX                        ; 004bae9c
    JZ 0x004ba9d1                       ; 004bae9e
        ;   XREF to: 004ba9d1 (CONDITIONAL_JUMP)  ; LAB_004ba9d1
    PUSH 0x1e                           ; 004baea4
    MOV EAX,[0x00600284]                ; 004baea6 | DAT_00600284
    PUSH EAX                            ; 004baeab | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 004baeac | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 004baeae
    ADD ESP,0x8                         ; 004baeb1
    TEST EAX,EAX                        ; 004baeb4
    JZ 0x004ba9d1                       ; 004baeb6
        ;   XREF to: 004ba9d1 (CONDITIONAL_JUMP)  ; LAB_004ba9d1
    PUSH 0x2a                           ; 004baebc
    MOV EAX,[0x00600284]                ; 004baebe | DAT_00600284
    MOV EBX,0x3ca3d70a                  ; 004baec3
    PUSH EAX                            ; 004baec8 | DAT_01d70a78
    MOV dword ptr [ESP + 0x20c],EBX     ; 004baec9
    MOV EBX,dword ptr [EAX]             ; 004baed0 | DAT_01d70a78
    CALL dword ptr [EBX]                ; 004baed2
    ADD ESP,0x8                         ; 004baed4
    TEST EAX,EAX                        ; 004baed7
    JNZ 0x004baf37                      ; 004baed9
        ;   XREF to: 004baf37 (CONDITIONAL_JUMP)  ; LAB_004baf37
    MOV EAX,[0x0203a134]                ; 004baedb | DAT_0203a134
        ;   Label: LAB_004baedb
    MOV dword ptr [ESP + 0x208],EAX     ; 004baee0
    FILD dword ptr [ESP + 0x208]        ; 004baee7
    FMUL double ptr [0x005c2920]        ; 004baeee | DAT_005c2920
    FADD float ptr [ESP + 0x204]        ; 004baef4
    FST float ptr [ESP]                 ; 004baefb
    FLDZ                                ; 004baefe
    FCOMPP                              ; 004baf00
    FNSTSW AX                           ; 004baf02
    SAHF                                ; 004baf04
    JBE 0x004baf0c                      ; 004baf05
        ;   XREF to: 004baf0c (CONDITIONAL_JUMP)  ; LAB_004baf0c
    XOR EDI,EDI                         ; 004baf07
    MOV dword ptr [ESP],EDI             ; 004baf09
    FLD float ptr [ESP]                 ; 004baf0c
        ;   Label: LAB_004baf0c
    FLD1                                ; 004baf0f
    FCOMPP                              ; 004baf11
    FNSTSW AX                           ; 004baf13
    SAHF                                ; 004baf15
    JC 0x004baf44                       ; 004baf16
        ;   XREF to: 004baf44 (CONDITIONAL_JUMP)  ; LAB_004baf44
    XOR EBX,EBX                         ; 004baf18
        ;   Label: LAB_004baf18
    MOV EAX,[0x00603b28]                ; 004baf1a | DAT_00603b28 | DAT_01ed78c8
        ;   Label: LAB_004baf1a
    CMP EBX,dword ptr [EAX]             ; 004baf1f | DAT_01ed78c8
    JGE 0x004ba9d1                      ; 004baf21
        ;   XREF to: 004ba9d1 (CONDITIONAL_JUMP)  ; LAB_004ba9d1
    PUSH dword ptr [ESP]                ; 004baf27
    PUSH EBX                            ; 004baf2a
    PUSH EAX                            ; 004baf2b | DAT_01ed78c8
    CALL FUN_0053b280                   ; 004baf2c
        ;   XREF to: 0053b280 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b280()
    INC EBX                             ; 004baf31
    ADD ESP,0xc                         ; 004baf32
    JMP 0x004baf1a                      ; 004baf35
        ;   XREF to: 004baf1a (UNCONDITIONAL_JUMP)  ; LAB_004baf1a
    MOV dword ptr [ESP + 0x204],0xbca3d70a ; 004baf37
        ;   Label: LAB_004baf37
    JMP 0x004baedb                      ; 004baf42
        ;   XREF to: 004baedb (UNCONDITIONAL_JUMP)  ; LAB_004baedb
    MOV dword ptr [ESP],0x3f800000      ; 004baf44
        ;   Label: LAB_004baf44
    JMP 0x004baf18                      ; 004baf4b
        ;   XREF to: 004baf18 (UNCONDITIONAL_JUMP)  ; LAB_004baf18

