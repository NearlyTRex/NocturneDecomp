; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051a4f0(undefined4 *param_1,undefined4 param_2,int param_3)
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
;   FUN_004d6990 at 004d6f3b
;   FUN_0051a3f0 at 0051a43a
;
; Referenced Globals:
;   TerminatedCString s_d_d_005e9117
;   TerminatedCString s_core_mission_cpp_005e911e
;   TerminatedCString s_Invalid_mission_version_005e9132
;   TerminatedCString s_core_mission_cpp_005e918e
;   TerminatedCString s_This_mission_uses_actor_005e91a2
;   TerminatedCString s_core_mission_cpp_005e91ed
;   TerminatedCString s_No_name_in_mission_005e9201
;   undefined4 DAT_005e9214
;   undefined4 DAT_005e9218
;   undefined4 DAT_005e921c
;   undefined4 DAT_005e9220
;   TerminatedCString s_s_d_005e9224
;   TerminatedCString s_core_mission_cpp_005e922b
;   TerminatedCString s_Actor_type_s_is_saved_in_005e923f
;   undefined4 DAT_005e92a8
;   ... and 22 more
;
; Called Functions:
;   FUN_0040aed0
;   FUN_0040c240
;   FUN_0040c2b0
;   FUN_0040c600
;   FUN_0040c660
;   FUN_004e5c00
;   FUN_004e6680
;   FUN_004f9ae0
;   FUN_005030e0
;   FUN_0051a3b0
;   FUN_0051b160
;   FUN_0051bf10
;   FUN_005c04b0
;   FUN_005c0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a4f0
        ;   Label: FUN_0051a4f0
    PUSH ESI                            ; 0051a4f1
    PUSH EDI                            ; 0051a4f2
    PUSH EBP                            ; 0051a4f3
    SUB ESP,0x148                       ; 0051a4f4
    MOV EBX,dword ptr [ESP + 0x15c]     ; 0051a4fa
    PUSH EBX                            ; 0051a501
    CALL FUN_0051a3b0                   ; 0051a502
        ;   XREF to: 0051a3b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a3b0()
    ADD ESP,0x4                         ; 0051a507
    CMP dword ptr [ESP + 0x164],0x0     ; 0051a50a
    JZ 0x0051a9f6                       ; 0051a512
        ;   XREF to: 0051a9f6 (CONDITIONAL_JUMP)  ; LAB_0051a9f6
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a518
        ;   Label: LAB_0051a518
    PUSH ESI                            ; 0051a51f
        ;   Label: LAB_0051a51f
    CALL FUN_005c0530                   ; 0051a520
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a525
    TEST EAX,EAX                        ; 0051a528
    JL 0x0051a531                       ; 0051a52a
        ;   XREF to: 0051a531 (CONDITIONAL_JUMP)  ; LAB_0051a531
    CMP EAX,0xa                         ; 0051a52c
    JNZ 0x0051a51f                      ; 0051a52f
        ;   XREF to: 0051a51f (CONDITIONAL_JUMP)  ; LAB_0051a51f
    LEA EAX,[ESP + 0x12c]               ; 0051a531
        ;   Label: LAB_0051a531
    PUSH EAX                            ; 0051a538
    LEA EAX,[EBX + 0x100c]              ; 0051a539
    PUSH EAX                            ; 0051a53f
    PUSH 0x5e9117                       ; 0051a540 | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0051a545
    PUSH ECX                            ; 0051a54c
    CALL FUN_005c04b0                   ; 0051a54d
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    MOV ESI,dword ptr [EBX + 0x100c]    ; 0051a552
    ADD ESP,0x10                        ; 0051a558
    CMP ESI,0x7                         ; 0051a55b
    JLE 0x0051a586                      ; 0051a55e
        ;   XREF to: 0051a586 (CONDITIONAL_JUMP)  ; LAB_0051a586
    PUSH 0x7                            ; 0051a560
    PUSH ESI                            ; 0051a562
    MOV EDI,0x5e911e                    ; 0051a563 | = "..\\core\\mission.cpp"
    MOV EBP,0xe9                        ; 0051a568
    PUSH 0x5e9132                       ; 0051a56d | = "Invalid mission version number: %d, c..."
    MOV dword ptr [0x01d1d400],EDI      ; 0051a572 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0051a578 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a57e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0051a583
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0051a586
        ;   Label: LAB_0051a586
    CMP EDX,0x4                         ; 0051a58d
    JGE 0x0051a5b6                      ; 0051a590
        ;   XREF to: 0051a5b6 (CONDITIONAL_JUMP)  ; LAB_0051a5b6
    PUSH EDX                            ; 0051a592
    MOV ECX,0x5e918e                    ; 0051a593 | = "..\\core\\mission.cpp"
    MOV ESI,0xec                        ; 0051a598
    PUSH 0x5e91a2                       ; 0051a59d | = "This mission uses actor format versio..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051a5a2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051a5a8 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a5ae
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0051a5b3
    CMP dword ptr [EBX + 0x100c],0x2    ; 0051a5b6
        ;   Label: LAB_0051a5b6
    JL 0x0051aa04                       ; 0051a5bd
        ;   XREF to: 0051aa04 (CONDITIONAL_JUMP)  ; LAB_0051aa04
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a5c3
        ;   Label: LAB_0051a5c3
    PUSH ESI                            ; 0051a5ca
        ;   Label: LAB_0051a5ca
    CALL FUN_005c0530                   ; 0051a5cb
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a5d0
    TEST EAX,EAX                        ; 0051a5d3
    JL 0x0051a5dc                       ; 0051a5d5
        ;   XREF to: 0051a5dc (CONDITIONAL_JUMP)  ; LAB_0051a5dc
    CMP EAX,0xa                         ; 0051a5d7
    JNZ 0x0051a5ca                      ; 0051a5da
        ;   XREF to: 0051a5ca (CONDITIONAL_JUMP)  ; LAB_0051a5ca
    LEA EAX,[EBX + 0x1018]              ; 0051a5dc
        ;   Label: LAB_0051a5dc
    PUSH EAX                            ; 0051a5e2
    PUSH 0x5e9214                       ; 0051a5e3 | DAT_005e9214
    MOV ECX,dword ptr [ESP + 0x168]     ; 0051a5e8
    PUSH ECX                            ; 0051a5ef
    CALL FUN_005c04b0                   ; 0051a5f0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 0051a5f5
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a5f8
    PUSH ESI                            ; 0051a5ff
        ;   Label: LAB_0051a5ff
    CALL FUN_005c0530                   ; 0051a600
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a605
    TEST EAX,EAX                        ; 0051a608
    JL 0x0051a611                       ; 0051a60a
        ;   XREF to: 0051a611 (CONDITIONAL_JUMP)  ; LAB_0051a611
    CMP EAX,0xa                         ; 0051a60c
    JNZ 0x0051a5ff                      ; 0051a60f
        ;   XREF to: 0051a5ff (CONDITIONAL_JUMP)  ; LAB_0051a5ff
    LEA EAX,[EBX + 0x4]                 ; 0051a611
        ;   Label: LAB_0051a611
    PUSH EAX                            ; 0051a614
    PUSH 0x5e9218                       ; 0051a615 | DAT_005e9218
    MOV ESI,dword ptr [ESP + 0x168]     ; 0051a61a
    PUSH ESI                            ; 0051a621
    XOR EBP,EBP                         ; 0051a622
    CALL FUN_005c04b0                   ; 0051a624
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    MOV EDI,dword ptr [EBX + 0x4]       ; 0051a629
    ADD ESP,0xc                         ; 0051a62c
    TEST EDI,EDI                        ; 0051a62f
    JLE 0x0051a660                      ; 0051a631
        ;   XREF to: 0051a660 (CONDITIONAL_JUMP)  ; LAB_0051a660
    LEA ESI,[EBX + 0x8]                 ; 0051a633
    PUSH ESI                            ; 0051a636
        ;   Label: LAB_0051a636
    PUSH 0x5e921c                       ; 0051a637 | DAT_005e921c
    MOV EAX,dword ptr [ESP + 0x168]     ; 0051a63c
    PUSH EAX                            ; 0051a643
    INC EBP                             ; 0051a644
    ADD ESI,0x100                       ; 0051a645
    CALL FUN_005c04b0                   ; 0051a64b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051a650
    ADD ESP,0xc                         ; 0051a653
    CMP EBP,EDX                         ; 0051a656
    JL 0x0051a636                       ; 0051a658
        ;   XREF to: 0051a636 (CONDITIONAL_JUMP)  ; LAB_0051a636
    LEA EAX,[EAX]                       ; 0051a65a
    CALL FUN_0040c660                   ; 0051a660
        ;   XREF to: 0040c660 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c660()
        ;   Label: LAB_0051a660
    CMP dword ptr [EBX + 0x100c],0x3    ; 0051a665
    JL 0x0051a758                       ; 0051a66c
        ;   XREF to: 0051a758 (CONDITIONAL_JUMP)  ; LAB_0051a758
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a672
    PUSH ESI                            ; 0051a679
        ;   Label: LAB_0051a679
    CALL FUN_005c0530                   ; 0051a67a
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a67f
    TEST EAX,EAX                        ; 0051a682
    JL 0x0051a68b                       ; 0051a684
        ;   XREF to: 0051a68b (CONDITIONAL_JUMP)  ; LAB_0051a68b
    CMP EAX,0xa                         ; 0051a686
    JNZ 0x0051a679                      ; 0051a689
        ;   XREF to: 0051a679 (CONDITIONAL_JUMP)  ; LAB_0051a679
    LEA EAX,[ESP + 0x138]               ; 0051a68b
        ;   Label: LAB_0051a68b
    PUSH EAX                            ; 0051a692
    PUSH 0x5e9220                       ; 0051a693 | DAT_005e9220
    MOV ESI,dword ptr [ESP + 0x168]     ; 0051a698
    PUSH ESI                            ; 0051a69f
    CALL FUN_005c04b0                   ; 0051a6a0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 0051a6a5
    MOV EDI,dword ptr [ESP + 0x138]     ; 0051a6a8
    XOR EBP,EBP                         ; 0051a6af
    TEST EDI,EDI                        ; 0051a6b1
    JLE 0x0051a758                      ; 0051a6b3
        ;   XREF to: 0051a758 (CONDITIONAL_JUMP)  ; LAB_0051a758
    LEA EAX,[ESP + 0x13c]               ; 0051a6b9
        ;   Label: LAB_0051a6b9
    PUSH EAX                            ; 0051a6c0
    LEA EAX,[ESP + 0x4]                 ; 0051a6c1
    PUSH EAX                            ; 0051a6c5
    MOV ECX,0x19                        ; 0051a6c6
    LEA EDI,[ESP + 0x8]                 ; 0051a6cb
    PUSH 0x5e9224                       ; 0051a6cf | = "%s %d\n"
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0051a6d4
    MOV ESI,0x61f658                    ; 0051a6db | = "corrupt!"
    PUSH EDX                            ; 0051a6e0
    MOVSD.REP ES:EDI,ESI                ; 0051a6e1 | = "corrupt!" | s_corrupt_0061f658+4
    CALL FUN_005c04b0                   ; 0051a6e3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x10                        ; 0051a6e8
    MOV EAX,ESP                         ; 0051a6eb
    PUSH EAX                            ; 0051a6ed
    CALL FUN_0040c240                   ; 0051a6ee
        ;   XREF to: 0040c240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c240()
    MOV ESI,EAX                         ; 0051a6f3
    ADD ESP,0x4                         ; 0051a6f5
    MOV EDI,EAX                         ; 0051a6f8
    TEST EAX,EAX                        ; 0051a6fa
    JZ 0x0051a748                       ; 0051a6fc
        ;   XREF to: 0051a748 (CONDITIONAL_JUMP)  ; LAB_0051a748
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0051a6fe
    MOV ECX,dword ptr [ESI + 0x34]      ; 0051a705
    CMP EAX,ECX                         ; 0051a708
    JLE 0x0051a73c                      ; 0051a70a
        ;   XREF to: 0051a73c (CONDITIONAL_JUMP)  ; LAB_0051a73c
    PUSH ECX                            ; 0051a70c
    MOV ESI,dword ptr [ESP + 0x140]     ; 0051a70d
    MOV EAX,0x5e922b                    ; 0051a714 | = "..\\core\\mission.cpp"
    PUSH ESI                            ; 0051a719
    MOV [0x01d1d400],EAX                ; 0051a71a | DAT_01d1d400
    LEA EAX,[ESP + 0x8]                 ; 0051a71f
    PUSH EAX                            ; 0051a723
    MOV EDX,0x10f                       ; 0051a724
    PUSH 0x5e923f                       ; 0051a729 | = "Actor type %s is saved in mission in ..."
    MOV dword ptr [0x01d1d404],EDX      ; 0051a72e | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a734
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x10                        ; 0051a739
    MOV ESI,dword ptr [EDI + 0x30]      ; 0051a73c
        ;   Label: LAB_0051a73c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0051a73f
    MOV dword ptr [ESI],EAX             ; 0051a746
    MOV EAX,dword ptr [ESP + 0x138]     ; 0051a748
        ;   Label: LAB_0051a748
    INC EBP                             ; 0051a74f
    CMP EBP,EAX                         ; 0051a750
    JL 0x0051a6b9                       ; 0051a752
        ;   XREF to: 0051a6b9 (CONDITIONAL_JUMP)  ; LAB_0051a6b9
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a758
        ;   Label: LAB_0051a758
    PUSH ESI                            ; 0051a75f
        ;   Label: LAB_0051a75f
    CALL FUN_005c0530                   ; 0051a760
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a765
    TEST EAX,EAX                        ; 0051a768
    JL 0x0051a771                       ; 0051a76a
        ;   XREF to: 0051a771 (CONDITIONAL_JUMP)  ; LAB_0051a771
    CMP EAX,0xa                         ; 0051a76c
    JNZ 0x0051a75f                      ; 0051a76f
        ;   XREF to: 0051a75f (CONDITIONAL_JUMP)  ; LAB_0051a75f
    LEA EAX,[ESP + 0x130]               ; 0051a771
        ;   Label: LAB_0051a771
    PUSH EAX                            ; 0051a778
    PUSH 0x5e92a8                       ; 0051a779 | DAT_005e92a8
    MOV EDI,dword ptr [ESP + 0x168]     ; 0051a77e
    PUSH EDI                            ; 0051a785
    XOR EBP,EBP                         ; 0051a786
    CALL FUN_005c04b0                   ; 0051a788
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 0051a78d
    MOV dword ptr [ESP + 0x134],EBP     ; 0051a790
    CMP dword ptr [EBX + 0x100c],0x6    ; 0051a797
    JL 0x0051aa2b                       ; 0051a79e
        ;   XREF to: 0051aa2b (CONDITIONAL_JUMP)  ; LAB_0051aa2b
    MOV ESI,EDI                         ; 0051a7a4
    PUSH ESI                            ; 0051a7a6
        ;   Label: LAB_0051a7a6
    CALL FUN_005c0530                   ; 0051a7a7
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a7ac
    TEST EAX,EAX                        ; 0051a7af
    JL 0x0051a7b8                       ; 0051a7b1
        ;   XREF to: 0051a7b8 (CONDITIONAL_JUMP)  ; LAB_0051a7b8
    CMP EAX,0xa                         ; 0051a7b3
    JNZ 0x0051a7a6                      ; 0051a7b6
        ;   XREF to: 0051a7a6 (CONDITIONAL_JUMP)  ; LAB_0051a7a6
    LEA EAX,[ESP + 0x134]               ; 0051a7b8
        ;   Label: LAB_0051a7b8
    PUSH EAX                            ; 0051a7bf
    PUSH 0x5e92ac                       ; 0051a7c0 | DAT_005e92ac
    MOV EDX,dword ptr [ESP + 0x168]     ; 0051a7c5
    PUSH EDX                            ; 0051a7cc
    CALL FUN_005c04b0                   ; 0051a7cd
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 0051a7d2
    MOV dword ptr [EBX + 0x1010],0x1    ; 0051a7d5
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a7df
        ;   Label: LAB_0051a7df
    PUSH ESI                            ; 0051a7e6
        ;   Label: LAB_0051a7e6
    CALL FUN_005c0530                   ; 0051a7e7
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a7ec
    TEST EAX,EAX                        ; 0051a7ef
    JL 0x0051a7f8                       ; 0051a7f1
        ;   XREF to: 0051a7f8 (CONDITIONAL_JUMP)  ; LAB_0051a7f8
    CMP EAX,0xa                         ; 0051a7f3
    JNZ 0x0051a7e6                      ; 0051a7f6
        ;   XREF to: 0051a7e6 (CONDITIONAL_JUMP)  ; LAB_0051a7e6
    MOV dword ptr [EBX + 0x145c],0x0    ; 0051a7f8
        ;   Label: LAB_0051a7f8
    XOR ECX,ECX                         ; 0051a802
    MOV dword ptr [EBX + 0x1458],0x0    ; 0051a804
    MOV dword ptr [ESP + 0x144],ECX     ; 0051a80e
    MOV EAX,dword ptr [ESP + 0x130]     ; 0051a815
        ;   Label: LAB_0051a815
    MOV ESI,dword ptr [ESP + 0x134]     ; 0051a81c
    MOV EDI,dword ptr [ESP + 0x144]     ; 0051a823
    ADD EAX,ESI                         ; 0051a82a
    CMP EAX,EDI                         ; 0051a82c
    JG 0x0051aa36                       ; 0051a82e
        ;   XREF to: 0051aa36 (CONDITIONAL_JUMP)  ; LAB_0051aa36
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a834
    PUSH ESI                            ; 0051a83b
        ;   Label: LAB_0051a83b
    CALL FUN_005c0530                   ; 0051a83c
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a841
    TEST EAX,EAX                        ; 0051a844
    JL 0x0051a84d                       ; 0051a846
        ;   XREF to: 0051a84d (CONDITIONAL_JUMP)  ; LAB_0051a84d
    CMP EAX,0xa                         ; 0051a848
    JNZ 0x0051a83b                      ; 0051a84b
        ;   XREF to: 0051a83b (CONDITIONAL_JUMP)  ; LAB_0051a83b
    MOV EDX,dword ptr [ESP + 0x130]     ; 0051a84d
        ;   Label: LAB_0051a84d
    MOV ESI,dword ptr [EBX + 0x1118]    ; 0051a854
    XOR EBP,EBP                         ; 0051a85a
    TEST EDX,EDX                        ; 0051a85c
    JLE 0x0051a8aa                      ; 0051a85e
        ;   XREF to: 0051a8aa (CONDITIONAL_JUMP)  ; LAB_0051a8aa
    TEST ESI,ESI                        ; 0051a860
        ;   Label: LAB_0051a860
    JNZ 0x0051a887                      ; 0051a862
        ;   XREF to: 0051a887 (CONDITIONAL_JUMP)  ; LAB_0051a887
    MOV EDX,0x5e92e0                    ; 0051a864 | = "..\\core\\mission.cpp"
    MOV ECX,0x149                       ; 0051a869
    PUSH 0x5e92f4                       ; 0051a86e | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01d1d400],EDX      ; 0051a873 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0051a879 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a87f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051a884
    MOV ECX,dword ptr [ESP + 0x160]     ; 0051a887
        ;   Label: LAB_0051a887
    PUSH ECX                            ; 0051a88e
    PUSH ESI                            ; 0051a88f
    CALL FUN_0040aed0                   ; 0051a890
        ;   XREF to: 0040aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040aed0()
    ADD ESP,0x8                         ; 0051a895
    INC EBP                             ; 0051a898
    MOV EDI,dword ptr [ESP + 0x130]     ; 0051a899
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0051a8a0
    CMP EBP,EDI                         ; 0051a8a6
    JL 0x0051a860                       ; 0051a8a8
        ;   XREF to: 0051a860 (CONDITIONAL_JUMP)  ; LAB_0051a860
    CMP dword ptr [EBX + 0x1010],0x0    ; 0051a8aa
        ;   Label: LAB_0051a8aa
    JZ 0x0051a92e                       ; 0051a8b1
        ;   XREF to: 0051a92e (CONDITIONAL_JUMP)  ; LAB_0051a92e
    MOV EAX,dword ptr [ESP + 0x130]     ; 0051a8b7
    MOV ESI,dword ptr [EBX + 0x1118]    ; 0051a8be
    XOR EBP,EBP                         ; 0051a8c4
    TEST EAX,EAX                        ; 0051a8c6
    JLE 0x0051a924                      ; 0051a8c8
        ;   XREF to: 0051a924 (CONDITIONAL_JUMP)  ; LAB_0051a924
    TEST ESI,ESI                        ; 0051a8ca
        ;   Label: LAB_0051a8ca
    JNZ 0x0051a8f0                      ; 0051a8cc
        ;   XREF to: 0051a8f0 (CONDITIONAL_JUMP)  ; LAB_0051a8f0
    MOV EAX,0x5e9328                    ; 0051a8ce | = "..\\core\\mission.cpp"
    MOV EDX,0x155                       ; 0051a8d3
    PUSH 0x5e933c                       ; 0051a8d8 | = "CDemonMission::load - actor list coun..."
    MOV [0x01d1d400],EAX                ; 0051a8dd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0051a8e2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a8e8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051a8ed
    MOV ECX,dword ptr [0x01d06b10]      ; 0051a8f0 | DAT_01d06b10
        ;   Label: LAB_0051a8f0
    PUSH ECX                            ; 0051a8f6
    PUSH ESI                            ; 0051a8f7
    CALL FUN_0040c600                   ; 0051a8f8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 0051a8fd
    TEST EAX,EAX                        ; 0051a900
    JZ 0x0051a912                       ; 0051a902
        ;   XREF to: 0051a912 (CONDITIONAL_JUMP)  ; LAB_0051a912
    ADD EAX,0x1fae8                     ; 0051a904
    PUSH EAX                            ; 0051a909
    CALL FUN_004f9ae0                   ; 0051a90a
        ;   XREF to: 004f9ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9ae0()
    ADD ESP,0x4                         ; 0051a90f
    MOV EDI,dword ptr [ESP + 0x130]     ; 0051a912
        ;   Label: LAB_0051a912
    INC EBP                             ; 0051a919
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0051a91a
    CMP EBP,EDI                         ; 0051a920
    JL 0x0051a8ca                       ; 0051a922
        ;   XREF to: 0051a8ca (CONDITIONAL_JUMP)  ; LAB_0051a8ca
    MOV dword ptr [EBX + 0x1010],0x0    ; 0051a924
        ;   Label: LAB_0051a924
    TEST ESI,ESI                        ; 0051a92e
        ;   Label: LAB_0051a92e
    JZ 0x0051a955                       ; 0051a930
        ;   XREF to: 0051a955 (CONDITIONAL_JUMP)  ; LAB_0051a955
    MOV ESI,0x5e9370                    ; 0051a932 | = "..\\core\\mission.cpp"
    MOV EDI,0x15c                       ; 0051a937
    PUSH 0x5e9384                       ; 0051a93c | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01d1d400],ESI      ; 0051a941 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0051a947 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a94d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051a952
    CMP dword ptr [EBX + 0x1458],0x0    ; 0051a955
        ;   Label: LAB_0051a955
    JZ 0x0051a980                       ; 0051a95c
        ;   XREF to: 0051a980 (CONDITIONAL_JUMP)  ; LAB_0051a980
    MOV EAX,0x5e93b8                    ; 0051a95e | = "..\\core\\mission.cpp"
    MOV EDX,0x15d                       ; 0051a963
    PUSH 0x5e93cc                       ; 0051a968 | = "CDemonMission::load - actor list coun..."
    MOV [0x01d1d400],EAX                ; 0051a96d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0051a972 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a978
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051a97d
    MOV ECX,dword ptr [EBX + 0x100c]    ; 0051a980
        ;   Label: LAB_0051a980
    MOV dword ptr [EBX + 0x145c],0x0    ; 0051a986
    CMP ECX,0x4                         ; 0051a990
    JGE 0x0051a9c7                      ; 0051a993
        ;   XREF to: 0051a9c7 (CONDITIONAL_JUMP)  ; LAB_0051a9c7
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a995
    PUSH ESI                            ; 0051a99c
        ;   Label: LAB_0051a99c
    CALL FUN_005c0530                   ; 0051a99d
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a9a2
    TEST EAX,EAX                        ; 0051a9a5
    JL 0x0051a9ae                       ; 0051a9a7
        ;   XREF to: 0051a9ae (CONDITIONAL_JUMP)  ; LAB_0051a9ae
    CMP EAX,0xa                         ; 0051a9a9
    JNZ 0x0051a99c                      ; 0051a9ac
        ;   XREF to: 0051a99c (CONDITIONAL_JUMP)  ; LAB_0051a99c
    MOV ESI,dword ptr [ESP + 0x160]     ; 0051a9ae
        ;   Label: LAB_0051a9ae
    PUSH ESI                            ; 0051a9b5
        ;   Label: LAB_0051a9b5
    CALL FUN_005c0530                   ; 0051a9b6
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051a9bb
    TEST EAX,EAX                        ; 0051a9be
    JL 0x0051a9c7                       ; 0051a9c0
        ;   XREF to: 0051a9c7 (CONDITIONAL_JUMP)  ; LAB_0051a9c7
    CMP EAX,0xa                         ; 0051a9c2
    JNZ 0x0051a9b5                      ; 0051a9c5
        ;   XREF to: 0051a9b5 (CONDITIONAL_JUMP)  ; LAB_0051a9b5
    MOV ESI,dword ptr [0x0061dca4]      ; 0051a9c7 | DAT_0061dca4
        ;   Label: LAB_0051a9c7
    PUSH ESI                            ; 0051a9cd
    MOV dword ptr [EBX],0xffffffff      ; 0051a9ce
    CALL FUN_004e5c00                   ; 0051a9d4
        ;   XREF to: 004e5c00 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5c00()
    MOV EDI,dword ptr [EBX + 0x100c]    ; 0051a9d9
    ADD ESP,0x4                         ; 0051a9df
    CMP EDI,0x7                         ; 0051a9e2
    JGE 0x0051ab38                      ; 0051a9e5
        ;   XREF to: 0051ab38 (CONDITIONAL_JUMP)  ; LAB_0051ab38
    ADD ESP,0x148                       ; 0051a9eb
    POP EBP                             ; 0051a9f1
    POP EDI                             ; 0051a9f2
    POP ESI                             ; 0051a9f3
    POP EBX                             ; 0051a9f4
    RET                                 ; 0051a9f5
    PUSH EBX                            ; 0051a9f6
        ;   Label: LAB_0051a9f6
    CALL FUN_0051bf10                   ; 0051a9f7
        ;   XREF to: 0051bf10 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bf10()
    ADD ESP,0x4                         ; 0051a9fc
    JMP 0x0051a518                      ; 0051a9ff
        ;   XREF to: 0051a518 (UNCONDITIONAL_JUMP)  ; LAB_0051a518
    MOV EAX,0x5e91ed                    ; 0051aa04 | = "..\\core\\mission.cpp"
        ;   Label: LAB_0051aa04
    MOV EDX,0xf1                        ; 0051aa09
    PUSH 0x5e9201                       ; 0051aa0e | = "No name in mission"
    MOV [0x01d1d400],EAX                ; 0051aa13 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0051aa18 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051aa1e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051aa23
    JMP 0x0051a5c3                      ; 0051aa26
        ;   XREF to: 0051a5c3 (UNCONDITIONAL_JUMP)  ; LAB_0051a5c3
    MOV dword ptr [EBX + 0x1010],EBP    ; 0051aa2b
        ;   Label: LAB_0051aa2b
    JMP 0x0051a7df                      ; 0051aa31
        ;   XREF to: 0051a7df (UNCONDITIONAL_JUMP)  ; LAB_0051a7df
    MOV ECX,0x19                        ; 0051aa36
        ;   Label: LAB_0051aa36
    LEA EDI,[ESP + 0xc8]                ; 0051aa3b
    LEA EAX,[ESP + 0x64]                ; 0051aa42
    MOV ESI,0x61f6c0                    ; 0051aa46 | DAT_0061f6c0
    PUSH EAX                            ; 0051aa4b
    LEA EAX,[ESP + 0xcc]                ; 0051aa4c
    MOVSD.REP ES:EDI,ESI                ; 0051aa53 | DAT_0061f6c0 | DAT_0061f6c4
    PUSH EAX                            ; 0051aa55
    MOV EBP,dword ptr [ESP + 0x168]     ; 0051aa56
    MOV ECX,0x19                        ; 0051aa5d
    PUSH 0x5e92b0                       ; 0051aa62 | = "%s \"%[^\"]\"\n"
    LEA EDI,[ESP + 0x70]                ; 0051aa67
    MOV ESI,0x61f728                    ; 0051aa6b | DAT_0061f728
    PUSH EBP                            ; 0051aa70
    MOVSD.REP ES:EDI,ESI                ; 0051aa71 | DAT_0061f728 | DAT_0061f72c
    CALL FUN_005c04b0                   ; 0051aa73
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x10                        ; 0051aa78
    LEA EAX,[ESP + 0xc8]                ; 0051aa7b
    PUSH EAX                            ; 0051aa82
    LEA ESI,[ESP + 0x68]                ; 0051aa83
    CALL FUN_0040c2b0                   ; 0051aa87
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c2b0()
    MOV EBP,EAX                         ; 0051aa8c
    ADD ESP,0x4                         ; 0051aa8e
    MOV EDI,EAX                         ; 0051aa91
    MOV dword ptr [ESP + 0x140],EAX     ; 0051aa93
    PUSH EDI                            ; 0051aa9a
    MOV AL,byte ptr [ESI]               ; 0051aa9b
        ;   Label: LAB_0051aa9b
    MOV byte ptr [EDI],AL               ; 0051aa9d
    CMP AL,0x0                          ; 0051aa9f
    JZ 0x0051aab3                       ; 0051aaa1
        ;   XREF to: 0051aab3 (CONDITIONAL_JUMP)  ; LAB_0051aab3
    MOV AL,byte ptr [ESI + 0x1]         ; 0051aaa3
    ADD ESI,0x2                         ; 0051aaa6
    MOV byte ptr [EDI + 0x1],AL         ; 0051aaa9
    ADD EDI,0x2                         ; 0051aaac
    CMP AL,0x0                          ; 0051aaaf
    JNZ 0x0051aa9b                      ; 0051aab1
        ;   XREF to: 0051aa9b (CONDITIONAL_JUMP)  ; LAB_0051aa9b
    POP EDI                             ; 0051aab3
        ;   Label: LAB_0051aab3
    PUSH EBP                            ; 0051aab4
    PUSH EBX                            ; 0051aab5
    CALL FUN_0051b160                   ; 0051aab6
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b160()
    ADD ESP,0x8                         ; 0051aabb
    MOV EAX,dword ptr [ESP + 0x144]     ; 0051aabe
    CMP EAX,dword ptr [ESP + 0x130]     ; 0051aac5
    JNZ 0x0051aad4                      ; 0051aacc
        ;   XREF to: 0051aad4 (CONDITIONAL_JUMP)  ; LAB_0051aad4
    MOV dword ptr [EBX + 0x1458],EBP    ; 0051aace
    CMP dword ptr [EBX + 0x145c],0x1770 ; 0051aad4
        ;   Label: LAB_0051aad4
    JL 0x0051ab03                       ; 0051aade
        ;   XREF to: 0051ab03 (CONDITIONAL_JUMP)  ; LAB_0051ab03
    MOV ESI,0x5e92bc                    ; 0051aae0 | = "..\\core\\mission.cpp"
    MOV EDI,0x13c                       ; 0051aae5
    PUSH 0x5e92d0                       ; 0051aaea | = "Too many actors"
    MOV dword ptr [0x01d1d400],ESI      ; 0051aaef | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0051aaf5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051aafb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051ab00
    MOV EAX,dword ptr [EBX + 0x145c]    ; 0051ab03
        ;   Label: LAB_0051ab03
    MOV ESI,dword ptr [ESP + 0x140]     ; 0051ab09
    MOV dword ptr [EBX + EAX*0x4 + 0x1460],ESI ; 0051ab10
    MOV EAX,dword ptr [ESP + 0x144]     ; 0051ab17
    MOV EBP,dword ptr [EBX + 0x145c]    ; 0051ab1e
    INC EAX                             ; 0051ab24
    INC EBP                             ; 0051ab25
    MOV dword ptr [ESP + 0x144],EAX     ; 0051ab26
    MOV dword ptr [EBX + 0x145c],EBP    ; 0051ab2d
    JMP 0x0051a815                      ; 0051ab33
        ;   XREF to: 0051a815 (UNCONDITIONAL_JUMP)  ; LAB_0051a815
    MOV EBP,dword ptr [ESP + 0x160]     ; 0051ab38
        ;   Label: LAB_0051ab38
    PUSH EBP                            ; 0051ab3f
    MOV EAX,[0x0061dca4]                ; 0051ab40 | DAT_0061dca4
    PUSH EAX                            ; 0051ab45
    CALL FUN_004e6680                   ; 0051ab46
        ;   XREF to: 004e6680 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6680()
    ADD ESP,0x8                         ; 0051ab4b
    ADD ESP,0x148                       ; 0051ab4e
    POP EBP                             ; 0051ab54
    POP EDI                             ; 0051ab55
    POP ESI                             ; 0051ab56
    POP EBX                             ; 0051ab57
    RET                                 ; 0051ab58

