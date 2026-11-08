; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fb590(undefined4 *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004bbf70 at 004bc51e
;   FUN_004fb490 at 004fb4da
;
; Referenced Globals:
;   TerminatedCString s_d_d_005de0d4
;   TerminatedCString s_core_mission_cpp_005de0db
;   TerminatedCString s_Invalid_mission_version_005de0ef
;   TerminatedCString s_core_mission_cpp_005de14b
;   TerminatedCString s_This_mission_uses_actor_005de15f
;   TerminatedCString s_core_mission_cpp_005de1aa
;   TerminatedCString s_No_name_in_mission_005de1be
;   undefined4 DAT_005de1d1
;   undefined4 DAT_005de1d5
;   undefined4 DAT_005de1d9
;   undefined4 DAT_005de1dd
;   TerminatedCString s_s_d_005de1e1
;   TerminatedCString s_core_mission_cpp_005de1e8
;   TerminatedCString s_Actor_type_s_is_saved_in_005de1fc
;   undefined4 DAT_005de265
;   ... and 22 more
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040c530
;   FUN_0040c5a0
;   FUN_0040c8f0
;   FUN_0040c950
;   FUN_004c93f0
;   FUN_004c9e70
;   FUN_004dc810
;   FUN_004e4500
;   FUN_004fb450
;   FUN_004fc200
;   FUN_004fcf50
;   FUN_005b8100
;   FUN_005b8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb590
        ;   Label: FUN_004fb590
    PUSH ESI                            ; 004fb591
    PUSH EDI                            ; 004fb592
    PUSH EBP                            ; 004fb593
    SUB ESP,0x148                       ; 004fb594
    MOV EBX,dword ptr [ESP + 0x15c]     ; 004fb59a
    PUSH EBX                            ; 004fb5a1
    CALL FUN_004fb450                   ; 004fb5a2
        ;   XREF to: 004fb450 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb450()
    ADD ESP,0x4                         ; 004fb5a7
    CMP dword ptr [ESP + 0x164],0x0     ; 004fb5aa
    JZ 0x004fba96                       ; 004fb5b2
        ;   XREF to: 004fba96 (CONDITIONAL_JUMP)  ; LAB_004fba96
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fb5b8
        ;   Label: LAB_004fb5b8
    PUSH ESI                            ; 004fb5bf
        ;   Label: LAB_004fb5bf
    CALL FUN_005b8180                   ; 004fb5c0
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb5c5
    TEST EAX,EAX                        ; 004fb5c8
    JL 0x004fb5d1                       ; 004fb5ca
        ;   XREF to: 004fb5d1 (CONDITIONAL_JUMP)  ; LAB_004fb5d1
    CMP EAX,0xa                         ; 004fb5cc
    JNZ 0x004fb5bf                      ; 004fb5cf
        ;   XREF to: 004fb5bf (CONDITIONAL_JUMP)  ; LAB_004fb5bf
    LEA EAX,[ESP + 0x12c]               ; 004fb5d1
        ;   Label: LAB_004fb5d1
    PUSH EAX                            ; 004fb5d8
    LEA EAX,[EBX + 0x100c]              ; 004fb5d9
    PUSH EAX                            ; 004fb5df
    PUSH 0x5de0d4                       ; 004fb5e0 | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x16c]     ; 004fb5e5
    PUSH ECX                            ; 004fb5ec
    CALL FUN_005b8100                   ; 004fb5ed
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ESI,dword ptr [EBX + 0x100c]    ; 004fb5f2
    ADD ESP,0x10                        ; 004fb5f8
    CMP ESI,0x7                         ; 004fb5fb
    JLE 0x004fb626                      ; 004fb5fe
        ;   XREF to: 004fb626 (CONDITIONAL_JUMP)  ; LAB_004fb626
    PUSH 0x7                            ; 004fb600
    PUSH ESI                            ; 004fb602
    MOV EDI,0x5de0db                    ; 004fb603 | = "..\\core\\mission.cpp"
    MOV EBP,0xe6                        ; 004fb608
    PUSH 0x5de0ef                       ; 004fb60d | = "Invalid mission version number: %d, c..."
    MOV dword ptr [0x01d046a0],EDI      ; 004fb612 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004fb618 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fb61e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 004fb623
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004fb626
        ;   Label: LAB_004fb626
    CMP EDX,0x4                         ; 004fb62d
    JGE 0x004fb656                      ; 004fb630
        ;   XREF to: 004fb656 (CONDITIONAL_JUMP)  ; LAB_004fb656
    PUSH EDX                            ; 004fb632
    MOV ECX,0x5de14b                    ; 004fb633 | = "..\\core\\mission.cpp"
    MOV ESI,0xe9                        ; 004fb638
    PUSH 0x5de15f                       ; 004fb63d | = "This mission uses actor format versio..."
    MOV dword ptr [0x01d046a0],ECX      ; 004fb642 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fb648 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fb64e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 004fb653
    CMP dword ptr [EBX + 0x100c],0x2    ; 004fb656
        ;   Label: LAB_004fb656
    JL 0x004fbaa4                       ; 004fb65d
        ;   XREF to: 004fbaa4 (CONDITIONAL_JUMP)  ; LAB_004fbaa4
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fb663
        ;   Label: LAB_004fb663
    PUSH ESI                            ; 004fb66a
        ;   Label: LAB_004fb66a
    CALL FUN_005b8180                   ; 004fb66b
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb670
    TEST EAX,EAX                        ; 004fb673
    JL 0x004fb67c                       ; 004fb675
        ;   XREF to: 004fb67c (CONDITIONAL_JUMP)  ; LAB_004fb67c
    CMP EAX,0xa                         ; 004fb677
    JNZ 0x004fb66a                      ; 004fb67a
        ;   XREF to: 004fb66a (CONDITIONAL_JUMP)  ; LAB_004fb66a
    LEA EAX,[EBX + 0x1014]              ; 004fb67c
        ;   Label: LAB_004fb67c
    PUSH EAX                            ; 004fb682
    PUSH 0x5de1d1                       ; 004fb683 | DAT_005de1d1
    MOV ECX,dword ptr [ESP + 0x168]     ; 004fb688
    PUSH ECX                            ; 004fb68f
    CALL FUN_005b8100                   ; 004fb690
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 004fb695
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fb698
    PUSH ESI                            ; 004fb69f
        ;   Label: LAB_004fb69f
    CALL FUN_005b8180                   ; 004fb6a0
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb6a5
    TEST EAX,EAX                        ; 004fb6a8
    JL 0x004fb6b1                       ; 004fb6aa
        ;   XREF to: 004fb6b1 (CONDITIONAL_JUMP)  ; LAB_004fb6b1
    CMP EAX,0xa                         ; 004fb6ac
    JNZ 0x004fb69f                      ; 004fb6af
        ;   XREF to: 004fb69f (CONDITIONAL_JUMP)  ; LAB_004fb69f
    LEA EAX,[EBX + 0x4]                 ; 004fb6b1
        ;   Label: LAB_004fb6b1
    PUSH EAX                            ; 004fb6b4
    PUSH 0x5de1d5                       ; 004fb6b5 | DAT_005de1d5
    MOV ESI,dword ptr [ESP + 0x168]     ; 004fb6ba
    PUSH ESI                            ; 004fb6c1
    XOR EBP,EBP                         ; 004fb6c2
    CALL FUN_005b8100                   ; 004fb6c4
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EDI,dword ptr [EBX + 0x4]       ; 004fb6c9
    ADD ESP,0xc                         ; 004fb6cc
    TEST EDI,EDI                        ; 004fb6cf
    JLE 0x004fb700                      ; 004fb6d1
        ;   XREF to: 004fb700 (CONDITIONAL_JUMP)  ; LAB_004fb700
    LEA ESI,[EBX + 0x8]                 ; 004fb6d3
    PUSH ESI                            ; 004fb6d6
        ;   Label: LAB_004fb6d6
    PUSH 0x5de1d9                       ; 004fb6d7 | DAT_005de1d9
    MOV EAX,dword ptr [ESP + 0x168]     ; 004fb6dc
    PUSH EAX                            ; 004fb6e3
    INC EBP                             ; 004fb6e4
    ADD ESI,0x100                       ; 004fb6e5
    CALL FUN_005b8100                   ; 004fb6eb
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EDX,dword ptr [EBX + 0x4]       ; 004fb6f0
    ADD ESP,0xc                         ; 004fb6f3
    CMP EBP,EDX                         ; 004fb6f6
    JL 0x004fb6d6                       ; 004fb6f8
        ;   XREF to: 004fb6d6 (CONDITIONAL_JUMP)  ; LAB_004fb6d6
    LEA EAX,[EAX]                       ; 004fb6fa
    CALL FUN_0040c950                   ; 004fb700
        ;   XREF to: 0040c950 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c950()
        ;   Label: LAB_004fb700
    CMP dword ptr [EBX + 0x100c],0x3    ; 004fb705
    JL 0x004fb7f8                       ; 004fb70c
        ;   XREF to: 004fb7f8 (CONDITIONAL_JUMP)  ; LAB_004fb7f8
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fb712
    PUSH ESI                            ; 004fb719
        ;   Label: LAB_004fb719
    CALL FUN_005b8180                   ; 004fb71a
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb71f
    TEST EAX,EAX                        ; 004fb722
    JL 0x004fb72b                       ; 004fb724
        ;   XREF to: 004fb72b (CONDITIONAL_JUMP)  ; LAB_004fb72b
    CMP EAX,0xa                         ; 004fb726
    JNZ 0x004fb719                      ; 004fb729
        ;   XREF to: 004fb719 (CONDITIONAL_JUMP)  ; LAB_004fb719
    LEA EAX,[ESP + 0x138]               ; 004fb72b
        ;   Label: LAB_004fb72b
    PUSH EAX                            ; 004fb732
    PUSH 0x5de1dd                       ; 004fb733 | DAT_005de1dd
    MOV ESI,dword ptr [ESP + 0x168]     ; 004fb738
    PUSH ESI                            ; 004fb73f
    CALL FUN_005b8100                   ; 004fb740
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 004fb745
    MOV EDI,dword ptr [ESP + 0x138]     ; 004fb748
    XOR EBP,EBP                         ; 004fb74f
    TEST EDI,EDI                        ; 004fb751
    JLE 0x004fb7f8                      ; 004fb753
        ;   XREF to: 004fb7f8 (CONDITIONAL_JUMP)  ; LAB_004fb7f8
    LEA EAX,[ESP + 0x13c]               ; 004fb759
        ;   Label: LAB_004fb759
    PUSH EAX                            ; 004fb760
    LEA EAX,[ESP + 0x4]                 ; 004fb761
    PUSH EAX                            ; 004fb765
    MOV ECX,0x19                        ; 004fb766
    LEA EDI,[ESP + 0x8]                 ; 004fb76b
    PUSH 0x5de1e1                       ; 004fb76f | = "%s %d\n"
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004fb774
    MOV ESI,0x618178                    ; 004fb77b | = "corrupt!"
    PUSH EDX                            ; 004fb780
    MOVSD.REP ES:EDI,ESI                ; 004fb781 | = "corrupt!" | s_corrupt_00618178+4
    CALL FUN_005b8100                   ; 004fb783
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 004fb788
    MOV EAX,ESP                         ; 004fb78b
    PUSH EAX                            ; 004fb78d
    CALL FUN_0040c530                   ; 004fb78e
        ;   XREF to: 0040c530 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c530()
    MOV ESI,EAX                         ; 004fb793
    ADD ESP,0x4                         ; 004fb795
    MOV EDI,EAX                         ; 004fb798
    TEST EAX,EAX                        ; 004fb79a
    JZ 0x004fb7e8                       ; 004fb79c
        ;   XREF to: 004fb7e8 (CONDITIONAL_JUMP)  ; LAB_004fb7e8
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004fb79e
    MOV ECX,dword ptr [ESI + 0x34]      ; 004fb7a5
    CMP EAX,ECX                         ; 004fb7a8
    JLE 0x004fb7dc                      ; 004fb7aa
        ;   XREF to: 004fb7dc (CONDITIONAL_JUMP)  ; LAB_004fb7dc
    PUSH ECX                            ; 004fb7ac
    MOV ESI,dword ptr [ESP + 0x140]     ; 004fb7ad
    MOV EAX,0x5de1e8                    ; 004fb7b4 | = "..\\core\\mission.cpp"
    PUSH ESI                            ; 004fb7b9
    MOV [0x01d046a0],EAX                ; 004fb7ba | DAT_01d046a0
    LEA EAX,[ESP + 0x8]                 ; 004fb7bf
    PUSH EAX                            ; 004fb7c3
    MOV EDX,0x10c                       ; 004fb7c4
    PUSH 0x5de1fc                       ; 004fb7c9 | = "Actor type %s is saved in mission in ..."
    MOV dword ptr [0x01d046a4],EDX      ; 004fb7ce | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fb7d4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x10                        ; 004fb7d9
    MOV ESI,dword ptr [EDI + 0x30]      ; 004fb7dc
        ;   Label: LAB_004fb7dc
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004fb7df
    MOV dword ptr [ESI],EAX             ; 004fb7e6
    MOV EAX,dword ptr [ESP + 0x138]     ; 004fb7e8
        ;   Label: LAB_004fb7e8
    INC EBP                             ; 004fb7ef
    CMP EBP,EAX                         ; 004fb7f0
    JL 0x004fb759                       ; 004fb7f2
        ;   XREF to: 004fb759 (CONDITIONAL_JUMP)  ; LAB_004fb759
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fb7f8
        ;   Label: LAB_004fb7f8
    PUSH ESI                            ; 004fb7ff
        ;   Label: LAB_004fb7ff
    CALL FUN_005b8180                   ; 004fb800
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb805
    TEST EAX,EAX                        ; 004fb808
    JL 0x004fb811                       ; 004fb80a
        ;   XREF to: 004fb811 (CONDITIONAL_JUMP)  ; LAB_004fb811
    CMP EAX,0xa                         ; 004fb80c
    JNZ 0x004fb7ff                      ; 004fb80f
        ;   XREF to: 004fb7ff (CONDITIONAL_JUMP)  ; LAB_004fb7ff
    LEA EAX,[ESP + 0x130]               ; 004fb811
        ;   Label: LAB_004fb811
    PUSH EAX                            ; 004fb818
    PUSH 0x5de265                       ; 004fb819 | DAT_005de265
    MOV EDI,dword ptr [ESP + 0x168]     ; 004fb81e
    PUSH EDI                            ; 004fb825
    XOR EBP,EBP                         ; 004fb826
    CALL FUN_005b8100                   ; 004fb828
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 004fb82d
    MOV dword ptr [ESP + 0x134],EBP     ; 004fb830
    CMP dword ptr [EBX + 0x100c],0x6    ; 004fb837
    JL 0x004fbacb                       ; 004fb83e
        ;   XREF to: 004fbacb (CONDITIONAL_JUMP)  ; LAB_004fbacb
    MOV ESI,EDI                         ; 004fb844
    PUSH ESI                            ; 004fb846
        ;   Label: LAB_004fb846
    CALL FUN_005b8180                   ; 004fb847
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb84c
    TEST EAX,EAX                        ; 004fb84f
    JL 0x004fb858                       ; 004fb851
        ;   XREF to: 004fb858 (CONDITIONAL_JUMP)  ; LAB_004fb858
    CMP EAX,0xa                         ; 004fb853
    JNZ 0x004fb846                      ; 004fb856
        ;   XREF to: 004fb846 (CONDITIONAL_JUMP)  ; LAB_004fb846
    LEA EAX,[ESP + 0x134]               ; 004fb858
        ;   Label: LAB_004fb858
    PUSH EAX                            ; 004fb85f
    PUSH 0x5de269                       ; 004fb860 | DAT_005de269
    MOV EDX,dword ptr [ESP + 0x168]     ; 004fb865
    PUSH EDX                            ; 004fb86c
    CALL FUN_005b8100                   ; 004fb86d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 004fb872
    MOV dword ptr [EBX + 0x1010],0x1    ; 004fb875
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fb87f
        ;   Label: LAB_004fb87f
    PUSH ESI                            ; 004fb886
        ;   Label: LAB_004fb886
    CALL FUN_005b8180                   ; 004fb887
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb88c
    TEST EAX,EAX                        ; 004fb88f
    JL 0x004fb898                       ; 004fb891
        ;   XREF to: 004fb898 (CONDITIONAL_JUMP)  ; LAB_004fb898
    CMP EAX,0xa                         ; 004fb893
    JNZ 0x004fb886                      ; 004fb896
        ;   XREF to: 004fb886 (CONDITIONAL_JUMP)  ; LAB_004fb886
    MOV dword ptr [EBX + 0x1458],0x0    ; 004fb898
        ;   Label: LAB_004fb898
    XOR ECX,ECX                         ; 004fb8a2
    MOV dword ptr [EBX + 0x1454],0x0    ; 004fb8a4
    MOV dword ptr [ESP + 0x144],ECX     ; 004fb8ae
    MOV EAX,dword ptr [ESP + 0x130]     ; 004fb8b5
        ;   Label: LAB_004fb8b5
    MOV ESI,dword ptr [ESP + 0x134]     ; 004fb8bc
    MOV EDI,dword ptr [ESP + 0x144]     ; 004fb8c3
    ADD EAX,ESI                         ; 004fb8ca
    CMP EAX,EDI                         ; 004fb8cc
    JG 0x004fbad6                       ; 004fb8ce
        ;   XREF to: 004fbad6 (CONDITIONAL_JUMP)  ; LAB_004fbad6
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fb8d4
    PUSH ESI                            ; 004fb8db
        ;   Label: LAB_004fb8db
    CALL FUN_005b8180                   ; 004fb8dc
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fb8e1
    TEST EAX,EAX                        ; 004fb8e4
    JL 0x004fb8ed                       ; 004fb8e6
        ;   XREF to: 004fb8ed (CONDITIONAL_JUMP)  ; LAB_004fb8ed
    CMP EAX,0xa                         ; 004fb8e8
    JNZ 0x004fb8db                      ; 004fb8eb
        ;   XREF to: 004fb8db (CONDITIONAL_JUMP)  ; LAB_004fb8db
    MOV EDX,dword ptr [ESP + 0x130]     ; 004fb8ed
        ;   Label: LAB_004fb8ed
    MOV ESI,dword ptr [EBX + 0x1114]    ; 004fb8f4
    XOR EBP,EBP                         ; 004fb8fa
    TEST EDX,EDX                        ; 004fb8fc
    JLE 0x004fb94a                      ; 004fb8fe
        ;   XREF to: 004fb94a (CONDITIONAL_JUMP)  ; LAB_004fb94a
    TEST ESI,ESI                        ; 004fb900
        ;   Label: LAB_004fb900
    JNZ 0x004fb927                      ; 004fb902
        ;   XREF to: 004fb927 (CONDITIONAL_JUMP)  ; LAB_004fb927
    MOV EDX,0x5de29d                    ; 004fb904 | = "..\\core\\mission.cpp"
    MOV ECX,0x146                       ; 004fb909
    PUSH 0x5de2b1                       ; 004fb90e | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01d046a0],EDX      ; 004fb913 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004fb919 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fb91f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fb924
    MOV ECX,dword ptr [ESP + 0x160]     ; 004fb927
        ;   Label: LAB_004fb927
    PUSH ECX                            ; 004fb92e
    PUSH ESI                            ; 004fb92f
    CALL FUN_0040b1c0                   ; 004fb930
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 004fb935
    INC EBP                             ; 004fb938
    MOV EDI,dword ptr [ESP + 0x130]     ; 004fb939
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004fb940
    CMP EBP,EDI                         ; 004fb946
    JL 0x004fb900                       ; 004fb948
        ;   XREF to: 004fb900 (CONDITIONAL_JUMP)  ; LAB_004fb900
    CMP dword ptr [EBX + 0x1010],0x0    ; 004fb94a
        ;   Label: LAB_004fb94a
    JZ 0x004fb9ce                       ; 004fb951
        ;   XREF to: 004fb9ce (CONDITIONAL_JUMP)  ; LAB_004fb9ce
    MOV EAX,dword ptr [ESP + 0x130]     ; 004fb957
    MOV ESI,dword ptr [EBX + 0x1114]    ; 004fb95e
    XOR EBP,EBP                         ; 004fb964
    TEST EAX,EAX                        ; 004fb966
    JLE 0x004fb9c4                      ; 004fb968
        ;   XREF to: 004fb9c4 (CONDITIONAL_JUMP)  ; LAB_004fb9c4
    TEST ESI,ESI                        ; 004fb96a
        ;   Label: LAB_004fb96a
    JNZ 0x004fb990                      ; 004fb96c
        ;   XREF to: 004fb990 (CONDITIONAL_JUMP)  ; LAB_004fb990
    MOV EAX,0x5de2e5                    ; 004fb96e | = "..\\core\\mission.cpp"
    MOV EDX,0x152                       ; 004fb973
    PUSH 0x5de2f9                       ; 004fb978 | = "CDemonMission::load - actor list coun..."
    MOV [0x01d046a0],EAX                ; 004fb97d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004fb982 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fb988
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fb98d
    MOV ECX,dword ptr [0x01cedf50]      ; 004fb990 | DAT_01cedf50
        ;   Label: LAB_004fb990
    PUSH ECX                            ; 004fb996
    PUSH ESI                            ; 004fb997
    CALL FUN_0040c8f0                   ; 004fb998
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004fb99d
    TEST EAX,EAX                        ; 004fb9a0
    JZ 0x004fb9b2                       ; 004fb9a2
        ;   XREF to: 004fb9b2 (CONDITIONAL_JUMP)  ; LAB_004fb9b2
    ADD EAX,0x2437c                     ; 004fb9a4
    PUSH EAX                            ; 004fb9a9
    CALL FUN_004dc810                   ; 004fb9aa
        ;   XREF to: 004dc810 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc810()
    ADD ESP,0x4                         ; 004fb9af
    MOV EDI,dword ptr [ESP + 0x130]     ; 004fb9b2
        ;   Label: LAB_004fb9b2
    INC EBP                             ; 004fb9b9
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004fb9ba
    CMP EBP,EDI                         ; 004fb9c0
    JL 0x004fb96a                       ; 004fb9c2
        ;   XREF to: 004fb96a (CONDITIONAL_JUMP)  ; LAB_004fb96a
    MOV dword ptr [EBX + 0x1010],0x0    ; 004fb9c4
        ;   Label: LAB_004fb9c4
    TEST ESI,ESI                        ; 004fb9ce
        ;   Label: LAB_004fb9ce
    JZ 0x004fb9f5                       ; 004fb9d0
        ;   XREF to: 004fb9f5 (CONDITIONAL_JUMP)  ; LAB_004fb9f5
    MOV ESI,0x5de32d                    ; 004fb9d2 | = "..\\core\\mission.cpp"
    MOV EDI,0x159                       ; 004fb9d7
    PUSH 0x5de341                       ; 004fb9dc | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01d046a0],ESI      ; 004fb9e1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004fb9e7 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fb9ed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fb9f2
    CMP dword ptr [EBX + 0x1454],0x0    ; 004fb9f5
        ;   Label: LAB_004fb9f5
    JZ 0x004fba20                       ; 004fb9fc
        ;   XREF to: 004fba20 (CONDITIONAL_JUMP)  ; LAB_004fba20
    MOV EAX,0x5de375                    ; 004fb9fe | = "..\\core\\mission.cpp"
    MOV EDX,0x15a                       ; 004fba03
    PUSH 0x5de389                       ; 004fba08 | = "CDemonMission::load - actor list coun..."
    MOV [0x01d046a0],EAX                ; 004fba0d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004fba12 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fba18
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fba1d
    MOV ECX,dword ptr [EBX + 0x100c]    ; 004fba20
        ;   Label: LAB_004fba20
    MOV dword ptr [EBX + 0x1458],0x0    ; 004fba26
    CMP ECX,0x4                         ; 004fba30
    JGE 0x004fba67                      ; 004fba33
        ;   XREF to: 004fba67 (CONDITIONAL_JUMP)  ; LAB_004fba67
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fba35
    PUSH ESI                            ; 004fba3c
        ;   Label: LAB_004fba3c
    CALL FUN_005b8180                   ; 004fba3d
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fba42
    TEST EAX,EAX                        ; 004fba45
    JL 0x004fba4e                       ; 004fba47
        ;   XREF to: 004fba4e (CONDITIONAL_JUMP)  ; LAB_004fba4e
    CMP EAX,0xa                         ; 004fba49
    JNZ 0x004fba3c                      ; 004fba4c
        ;   XREF to: 004fba3c (CONDITIONAL_JUMP)  ; LAB_004fba3c
    MOV ESI,dword ptr [ESP + 0x160]     ; 004fba4e
        ;   Label: LAB_004fba4e
    PUSH ESI                            ; 004fba55
        ;   Label: LAB_004fba55
    CALL FUN_005b8180                   ; 004fba56
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fba5b
    TEST EAX,EAX                        ; 004fba5e
    JL 0x004fba67                       ; 004fba60
        ;   XREF to: 004fba67 (CONDITIONAL_JUMP)  ; LAB_004fba67
    CMP EAX,0xa                         ; 004fba62
    JNZ 0x004fba55                      ; 004fba65
        ;   XREF to: 004fba55 (CONDITIONAL_JUMP)  ; LAB_004fba55
    MOV ESI,dword ptr [0x006167e0]      ; 004fba67 | DAT_006167e0
        ;   Label: LAB_004fba67
    PUSH ESI                            ; 004fba6d
    MOV dword ptr [EBX],0xffffffff      ; 004fba6e
    CALL FUN_004c93f0                   ; 004fba74
        ;   XREF to: 004c93f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c93f0()
    MOV EDI,dword ptr [EBX + 0x100c]    ; 004fba79
    ADD ESP,0x4                         ; 004fba7f
    CMP EDI,0x7                         ; 004fba82
    JGE 0x004fbbd8                      ; 004fba85
        ;   XREF to: 004fbbd8 (CONDITIONAL_JUMP)  ; LAB_004fbbd8
    ADD ESP,0x148                       ; 004fba8b
    POP EBP                             ; 004fba91
    POP EDI                             ; 004fba92
    POP ESI                             ; 004fba93
    POP EBX                             ; 004fba94
    RET                                 ; 004fba95
    PUSH EBX                            ; 004fba96
        ;   Label: LAB_004fba96
    CALL FUN_004fcf50                   ; 004fba97
        ;   XREF to: 004fcf50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcf50()
    ADD ESP,0x4                         ; 004fba9c
    JMP 0x004fb5b8                      ; 004fba9f
        ;   XREF to: 004fb5b8 (UNCONDITIONAL_JUMP)  ; LAB_004fb5b8
    MOV EAX,0x5de1aa                    ; 004fbaa4 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004fbaa4
    MOV EDX,0xee                        ; 004fbaa9
    PUSH 0x5de1be                       ; 004fbaae | = "No name in mission"
    MOV [0x01d046a0],EAX                ; 004fbab3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004fbab8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fbabe
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fbac3
    JMP 0x004fb663                      ; 004fbac6
        ;   XREF to: 004fb663 (UNCONDITIONAL_JUMP)  ; LAB_004fb663
    MOV dword ptr [EBX + 0x1010],EBP    ; 004fbacb
        ;   Label: LAB_004fbacb
    JMP 0x004fb87f                      ; 004fbad1
        ;   XREF to: 004fb87f (UNCONDITIONAL_JUMP)  ; LAB_004fb87f
    MOV ECX,0x19                        ; 004fbad6
        ;   Label: LAB_004fbad6
    LEA EDI,[ESP + 0xc8]                ; 004fbadb
    LEA EAX,[ESP + 0x64]                ; 004fbae2
    MOV ESI,0x6181e0                    ; 004fbae6 | DAT_006181e0
    PUSH EAX                            ; 004fbaeb
    LEA EAX,[ESP + 0xcc]                ; 004fbaec
    MOVSD.REP ES:EDI,ESI                ; 004fbaf3 | DAT_006181e0 | DAT_006181e4
    PUSH EAX                            ; 004fbaf5
    MOV EBP,dword ptr [ESP + 0x168]     ; 004fbaf6
    MOV ECX,0x19                        ; 004fbafd
    PUSH 0x5de26d                       ; 004fbb02 | = "%s \"%[^\"]\"\n"
    LEA EDI,[ESP + 0x70]                ; 004fbb07
    MOV ESI,0x618248                    ; 004fbb0b | DAT_00618248
    PUSH EBP                            ; 004fbb10
    MOVSD.REP ES:EDI,ESI                ; 004fbb11 | DAT_00618248 | DAT_0061824c
    CALL FUN_005b8100                   ; 004fbb13
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 004fbb18
    LEA EAX,[ESP + 0xc8]                ; 004fbb1b
    PUSH EAX                            ; 004fbb22
    LEA ESI,[ESP + 0x68]                ; 004fbb23
    CALL FUN_0040c5a0                   ; 004fbb27
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    MOV EBP,EAX                         ; 004fbb2c
    ADD ESP,0x4                         ; 004fbb2e
    MOV EDI,EAX                         ; 004fbb31
    MOV dword ptr [ESP + 0x140],EAX     ; 004fbb33
    PUSH EDI                            ; 004fbb3a
    MOV AL,byte ptr [ESI]               ; 004fbb3b
        ;   Label: LAB_004fbb3b
    MOV byte ptr [EDI],AL               ; 004fbb3d
    CMP AL,0x0                          ; 004fbb3f
    JZ 0x004fbb53                       ; 004fbb41
        ;   XREF to: 004fbb53 (CONDITIONAL_JUMP)  ; LAB_004fbb53
    MOV AL,byte ptr [ESI + 0x1]         ; 004fbb43
    ADD ESI,0x2                         ; 004fbb46
    MOV byte ptr [EDI + 0x1],AL         ; 004fbb49
    ADD EDI,0x2                         ; 004fbb4c
    CMP AL,0x0                          ; 004fbb4f
    JNZ 0x004fbb3b                      ; 004fbb51
        ;   XREF to: 004fbb3b (CONDITIONAL_JUMP)  ; LAB_004fbb3b
    POP EDI                             ; 004fbb53
        ;   Label: LAB_004fbb53
    PUSH EBP                            ; 004fbb54
    PUSH EBX                            ; 004fbb55
    CALL FUN_004fc200                   ; 004fbb56
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc200()
    ADD ESP,0x8                         ; 004fbb5b
    MOV EAX,dword ptr [ESP + 0x144]     ; 004fbb5e
    CMP EAX,dword ptr [ESP + 0x130]     ; 004fbb65
    JNZ 0x004fbb74                      ; 004fbb6c
        ;   XREF to: 004fbb74 (CONDITIONAL_JUMP)  ; LAB_004fbb74
    MOV dword ptr [EBX + 0x1454],EBP    ; 004fbb6e
    CMP dword ptr [EBX + 0x1458],0xbb8  ; 004fbb74
        ;   Label: LAB_004fbb74
    JL 0x004fbba3                       ; 004fbb7e
        ;   XREF to: 004fbba3 (CONDITIONAL_JUMP)  ; LAB_004fbba3
    MOV ESI,0x5de279                    ; 004fbb80 | = "..\\core\\mission.cpp"
    MOV EDI,0x139                       ; 004fbb85
    PUSH 0x5de28d                       ; 004fbb8a | = "Too many actors"
    MOV dword ptr [0x01d046a0],ESI      ; 004fbb8f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004fbb95 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fbb9b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fbba0
    MOV EAX,dword ptr [EBX + 0x1458]    ; 004fbba3
        ;   Label: LAB_004fbba3
    MOV ESI,dword ptr [ESP + 0x140]     ; 004fbba9
    MOV dword ptr [EBX + EAX*0x4 + 0x145c],ESI ; 004fbbb0
    MOV EAX,dword ptr [ESP + 0x144]     ; 004fbbb7
    MOV EBP,dword ptr [EBX + 0x1458]    ; 004fbbbe
    INC EAX                             ; 004fbbc4
    INC EBP                             ; 004fbbc5
    MOV dword ptr [ESP + 0x144],EAX     ; 004fbbc6
    MOV dword ptr [EBX + 0x1458],EBP    ; 004fbbcd
    JMP 0x004fb8b5                      ; 004fbbd3
        ;   XREF to: 004fb8b5 (UNCONDITIONAL_JUMP)  ; LAB_004fb8b5
    MOV EBP,dword ptr [ESP + 0x160]     ; 004fbbd8
        ;   Label: LAB_004fbbd8
    PUSH EBP                            ; 004fbbdf
    MOV EAX,[0x006167e0]                ; 004fbbe0 | DAT_006167e0
    PUSH EAX                            ; 004fbbe5
    CALL FUN_004c9e70                   ; 004fbbe6
        ;   XREF to: 004c9e70 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9e70()
    ADD ESP,0x8                         ; 004fbbeb
    ADD ESP,0x148                       ; 004fbbee
    POP EBP                             ; 004fbbf4
    POP EDI                             ; 004fbbf5
    POP ESI                             ; 004fbbf6
    POP EBX                             ; 004fbbf7
    RET                                 ; 004fbbf8

