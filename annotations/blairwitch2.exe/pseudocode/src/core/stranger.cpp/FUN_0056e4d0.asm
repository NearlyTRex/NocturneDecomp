; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_0056e4d0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stranger.cpp_FUN_00563060 at 00563ba3
;
; Referenced Globals:
;   void* switchdataD_0056e4b0 = 0056e559
;   undefined4 s_eDoorMoveNone_returned_b_005ebdac+1
;   TerminatedCString s_eDoorMoveNone_returned_b_005ebdea
;   TerminatedCString s_CBodyPart_005ebe27
;   TerminatedCString s_CBodyPart_005ebe32
;   undefined4 DAT_005ebe3d
;   undefined4 DAT_005ebe45
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;
; Called Functions:
;   core_charactr.cpp_FUN_0042a5a0
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
;   core_hero.cpp_FUN_004cec50
;   core_hero.cpp_FUN_004cf030
;   core_hero.cpp_FUN_004cf230
;   core_hero.cpp_FUN_004cf2b0
;   core_hero.cpp_FUN_004cf4e0
;   core_hero.cpp_FUN_004cf890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005038a0
;   core_stranger.cpp_FUN_00569620
;   core_stranger.cpp_FUN_0056a240
;   core_stranger.cpp_FUN_0056a780
;   core_stranger.cpp_FUN_0056acd0
;   core_stranger.cpp_FUN_0056e7c0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e4d0
        ;   Label: core_stranger.cpp_FUN_0056e4d0
    PUSH ESI                            ; 0056e4d1
    PUSH EDI                            ; 0056e4d2
    SUB ESP,0x8                         ; 0056e4d3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056e4d6
    CMP dword ptr [EBX + 0x10a74],0x0   ; 0056e4da
    JZ 0x0056e4ec                       ; 0056e4e1
        ;   XREF to: 0056e4ec (CONDITIONAL_JUMP)  ; LAB_0056e4ec
    CMP dword ptr [EBX + 0x256a4],0x0   ; 0056e4e3
    JZ 0x0056e4f3                       ; 0056e4ea
        ;   XREF to: 0056e4f3 (CONDITIONAL_JUMP)  ; LAB_0056e4f3
    ADD ESP,0x8                         ; 0056e4ec
        ;   Label: LAB_0056e4ec
    POP EDI                             ; 0056e4ef
    POP ESI                             ; 0056e4f0
    POP EBX                             ; 0056e4f1
    RET                                 ; 0056e4f2
    PUSH EBX                            ; 0056e4f3
        ;   Label: LAB_0056e4f3
    CALL core_stranger.cpp_FUN_0056e7c0 ; 0056e4f4
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_FUN_0056e7c0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0056e4f9
    TEST EAX,EAX                        ; 0056e4fc
    JNZ 0x0056e4ec                      ; 0056e4fe
        ;   XREF to: 0056e4ec (CONDITIONAL_JUMP)  ; LAB_0056e4ec
    CMP dword ptr [EBX + 0x25640],0x0   ; 0056e500
    JNZ 0x0056e4ec                      ; 0056e507
        ;   XREF to: 0056e4ec (CONDITIONAL_JUMP)  ; LAB_0056e4ec
    PUSH EAX                            ; 0056e509
    LEA ESI,[EBX + 0x2b4]               ; 0056e50a
    PUSH ESI                            ; 0056e510
    CALL core_motion.cpp_FUN_005038a0   ; 0056e511
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0056e516
    ADD ESP,0x8                         ; 0056e51a
    PUSH 0x1                            ; 0056e51d
    PUSH ESI                            ; 0056e51f
    CALL core_motion.cpp_FUN_005038a0   ; 0056e520
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0056e525
    FLD float ptr [ESP + 0xc]           ; 0056e529
    ADD ESP,0x8                         ; 0056e52d
    FADD float ptr [ESP]                ; 0056e530
    FCOMP double ptr [0x005ebe3d]       ; 0056e533 | DAT_005ebe3d
    FNSTSW AX                           ; 0056e539
    SAHF                                ; 0056e53b
    JBE 0x0056e578                      ; 0056e53c
        ;   XREF to: 0056e578 (CONDITIONAL_JUMP)  ; LAB_0056e578
    PUSH 0x0                            ; 0056e53e
    PUSH EBX                            ; 0056e540
    CALL core_hero.cpp_FUN_004cf030     ; 0056e541
        ;   XREF to: 004cf030 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf030()
    ADD ESP,0x8                         ; 0056e546
    CMP EAX,0x5                         ; 0056e549
    JA 0x0056e658                       ; 0056e54c
        ;   XREF to: 0056e658 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x56e4b0]  ; 0056e552 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [EBX + 0x25604]   ; 0056e559
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 0056e55f
    JZ 0x0056e578                       ; 0056e561
        ;   XREF to: 0056e578 (CONDITIONAL_JUMP)  ; LAB_0056e578
    PUSH EDX                            ; 0056e563
    PUSH 0x5ebdea                       ; 0056e564 | = "eDoorMoveNone returned by checkDoorOp..."
    MOV ESI,dword ptr [0x006138e0]      ; 0056e569 | g_CEditorToolsPtr
    PUSH ESI                            ; 0056e56f
    CALL shape_edittool.cpp_FUN_0047be40 ; 0056e570
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0xc                         ; 0056e575
    PUSH EBX                            ; 0056e578
        ;   Label: LAB_0056e578
    CALL core_stranger.cpp_FUN_0056acd0 ; 0056e579
        ;   XREF to: 0056acd0 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_FUN_0056acd0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0056e57e
    TEST EAX,EAX                        ; 0056e581
    JZ 0x0056e672                       ; 0056e583
        ;   XREF to: 0056e672 (CONDITIONAL_JUMP)  ; LAB_0056e672
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e589
    ADD ESP,0x8                         ; 0056e593
    POP EDI                             ; 0056e596
    POP ESI                             ; 0056e597
    POP EBX                             ; 0056e598
    RET                                 ; 0056e599
    MOV EDI,dword ptr [EBX + 0x25604]   ; 0056e59a
        ;   Label: caseD_1
    TEST EDI,EDI                        ; 0056e5a0
    JNZ 0x0056e5b5                      ; 0056e5a2
        ;   XREF to: 0056e5b5 (CONDITIONAL_JUMP)  ; LAB_0056e5b5
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e5a4
    ADD ESP,0x8                         ; 0056e5ae
    POP EDI                             ; 0056e5b1
    POP ESI                             ; 0056e5b2
    POP EBX                             ; 0056e5b3
    RET                                 ; 0056e5b4
    PUSH EDI                            ; 0056e5b5
        ;   Label: LAB_0056e5b5
    PUSH 0x5ebdad                       ; 0056e5b6 | s_eDoorMoveNone_returned_b_005ebdac+1
    MOV EAX,[0x006138e0]                ; 0056e5bb | g_CEditorToolsPtr
    PUSH EAX                            ; 0056e5c0
    CALL shape_edittool.cpp_FUN_0047be40 ; 0056e5c1
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0xc                         ; 0056e5c6
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e5c9
    ADD ESP,0x8                         ; 0056e5d3
    POP EDI                             ; 0056e5d6
    POP ESI                             ; 0056e5d7
    POP EBX                             ; 0056e5d8
    RET                                 ; 0056e5d9
    PUSH 0x1                            ; 0056e5da
        ;   Label: caseD_2
    PUSH 0x1c                           ; 0056e5dc
    LEA EAX,[EBX + 0x2b4]               ; 0056e5de
    PUSH EAX                            ; 0056e5e4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056e5e5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x256a4],0x5   ; 0056e5ea
    ADD ESP,0xc                         ; 0056e5f4
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e5f7
    ADD ESP,0x8                         ; 0056e601
    POP EDI                             ; 0056e604
    POP ESI                             ; 0056e605
    POP EBX                             ; 0056e606
    RET                                 ; 0056e607
    PUSH 0x1                            ; 0056e608
        ;   Label: caseD_4
    PUSH 0x1d                           ; 0056e60a
    PUSH ESI                            ; 0056e60c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056e60d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x256a4],0x5   ; 0056e612
    ADD ESP,0xc                         ; 0056e61c
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e61f
    ADD ESP,0x8                         ; 0056e629
    POP EDI                             ; 0056e62c
    POP ESI                             ; 0056e62d
    POP EBX                             ; 0056e62e
    RET                                 ; 0056e62f
    PUSH 0x1                            ; 0056e630
        ;   Label: caseD_5
    PUSH 0x1e                           ; 0056e632
    PUSH ESI                            ; 0056e634
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056e635
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x256a4],0x5   ; 0056e63a
    ADD ESP,0xc                         ; 0056e644
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e647
    ADD ESP,0x8                         ; 0056e651
    POP EDI                             ; 0056e654
    POP ESI                             ; 0056e655
    POP EBX                             ; 0056e656
    RET                                 ; 0056e657
    PUSH EBX                            ; 0056e658
        ;   Label: default
    CALL core_hero.cpp_FUN_004cf230     ; 0056e659
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf230(CHero * this_ptr)
    ADD ESP,0x4                         ; 0056e65e
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e661
    ADD ESP,0x8                         ; 0056e66b
    POP EDI                             ; 0056e66e
    POP ESI                             ; 0056e66f
    POP EBX                             ; 0056e670
    RET                                 ; 0056e671
    PUSH 0x5ebe27                       ; 0056e672 | = "!CBodyPart"
        ;   Label: LAB_0056e672
    PUSH EBX                            ; 0056e677
    CALL core_stranger.cpp_FUN_00569620 ; 0056e678
        ;   XREF to: 00569620 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_FUN_00569620(CStranger * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056e67d
    TEST EAX,EAX                        ; 0056e680
    JZ 0x0056e695                       ; 0056e682
        ;   XREF to: 0056e695 (CONDITIONAL_JUMP)  ; LAB_0056e695
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e684
    ADD ESP,0x8                         ; 0056e68e
    POP EDI                             ; 0056e691
    POP ESI                             ; 0056e692
    POP EBX                             ; 0056e693
    RET                                 ; 0056e694
    PUSH EBX                            ; 0056e695
        ;   Label: LAB_0056e695
    CALL core_hero.cpp_FUN_004cec50     ; 0056e696
        ;   XREF to: 004cec50 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cec50()
    ADD ESP,0x4                         ; 0056e69b
    TEST EAX,EAX                        ; 0056e69e
    JNZ 0x0056e4ec                      ; 0056e6a0
        ;   XREF to: 0056e4ec (CONDITIONAL_JUMP)  ; LAB_0056e4ec
    PUSH EBX                            ; 0056e6a6
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90 ; 0056e6a7
        ;   XREF to: 004cee90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(CHero * this_ptr)
    ADD ESP,0x4                         ; 0056e6ac
    TEST EAX,EAX                        ; 0056e6af
    JZ 0x0056e6c4                       ; 0056e6b1
        ;   XREF to: 0056e6c4 (CONDITIONAL_JUMP)  ; LAB_0056e6c4
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e6b3
    ADD ESP,0x8                         ; 0056e6bd
    POP EDI                             ; 0056e6c0
    POP ESI                             ; 0056e6c1
    POP EBX                             ; 0056e6c2
    RET                                 ; 0056e6c3
    PUSH EBX                            ; 0056e6c4
        ;   Label: LAB_0056e6c4
    CALL core_hero.cpp_FUN_004cf4e0     ; 0056e6c5
        ;   XREF to: 004cf4e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf4e0()
    ADD ESP,0x4                         ; 0056e6ca
    LEA ESI,[EBX + 0x2b4]               ; 0056e6cd
    TEST EAX,EAX                        ; 0056e6d3
    JNZ 0x0056e6f2                      ; 0056e6d5
        ;   XREF to: 0056e6f2 (CONDITIONAL_JUMP)  ; LAB_0056e6f2
    MOV EDI,dword ptr [EBX + 0x2698]    ; 0056e6d7
    TEST EDI,EDI                        ; 0056e6dd
    JZ 0x0056e706                       ; 0056e6df
        ;   XREF to: 0056e706 (CONDITIONAL_JUMP)  ; LAB_0056e706
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0056e6e1
        ;   Label: LAB_0056e6e1
    ADD ESP,0x8                         ; 0056e6eb
    POP EDI                             ; 0056e6ee
    POP ESI                             ; 0056e6ef
    POP EBX                             ; 0056e6f0
    RET                                 ; 0056e6f1
    PUSH 0x1                            ; 0056e6f2
        ;   Label: LAB_0056e6f2
    PUSH 0x6                            ; 0056e6f4
    PUSH ESI                            ; 0056e6f6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056e6f7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056e6fc
    ADD ESP,0x8                         ; 0056e6ff
    POP EDI                             ; 0056e702
    POP ESI                             ; 0056e703
    POP EBX                             ; 0056e704
    RET                                 ; 0056e705
    PUSH EAX                            ; 0056e706
        ;   Label: LAB_0056e706
    PUSH EBX                            ; 0056e707
    CALL core_charactr.cpp_FUN_0042a5a0 ; 0056e708
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0056e70d
    FLD float ptr [ESP + 0xc]           ; 0056e711
    ADD ESP,0x8                         ; 0056e715
    FCOMP double ptr [0x005ebe45]       ; 0056e718 | DAT_005ebe45
    FNSTSW AX                           ; 0056e71e
    SAHF                                ; 0056e720
    JBE 0x0056e6e1                      ; 0056e721
        ;   XREF to: 0056e6e1 (CONDITIONAL_JUMP)  ; LAB_0056e6e1
    PUSH EBX                            ; 0056e723
    CALL core_hero.cpp_FUN_004cf2b0     ; 0056e724
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf2b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0056e729
    TEST EAX,EAX                        ; 0056e72c
    JNZ 0x0056e74a                      ; 0056e72e
        ;   XREF to: 0056e74a (CONDITIONAL_JUMP)  ; LAB_0056e74a
    PUSH EBX                            ; 0056e730
    CALL core_stranger.cpp_FUN_0056a240 ; 0056e731
        ;   XREF to: 0056a240 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_FUN_0056a240(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0056e736
    TEST EAX,EAX                        ; 0056e739
    JZ 0x0056e764                       ; 0056e73b
        ;   XREF to: 0056e764 (CONDITIONAL_JUMP)  ; LAB_0056e764
    MOV dword ptr [EBX + 0x10a74],EDI   ; 0056e73d
    ADD ESP,0x8                         ; 0056e743
    POP EDI                             ; 0056e746
    POP ESI                             ; 0056e747
    POP EBX                             ; 0056e748
    RET                                 ; 0056e749
    PUSH 0x1                            ; 0056e74a
        ;   Label: LAB_0056e74a
    PUSH 0x1f                           ; 0056e74c
    PUSH ESI                            ; 0056e74e
    MOV dword ptr [EBX + 0x10a74],EDI   ; 0056e74f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056e755
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056e75a
    ADD ESP,0x8                         ; 0056e75d
    POP EDI                             ; 0056e760
    POP ESI                             ; 0056e761
    POP EBX                             ; 0056e762
    RET                                 ; 0056e763
    PUSH EBX                            ; 0056e764
        ;   Label: LAB_0056e764
    CALL core_stranger.cpp_FUN_0056a780 ; 0056e765
        ;   XREF to: 0056a780 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_FUN_0056a780(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0056e76a
    TEST EAX,EAX                        ; 0056e76d
    JZ 0x0056e77e                       ; 0056e76f
        ;   XREF to: 0056e77e (CONDITIONAL_JUMP)  ; LAB_0056e77e
    MOV dword ptr [EBX + 0x10a74],EDI   ; 0056e771
    ADD ESP,0x8                         ; 0056e777
    POP EDI                             ; 0056e77a
    POP ESI                             ; 0056e77b
    POP EBX                             ; 0056e77c
    RET                                 ; 0056e77d
    PUSH EBX                            ; 0056e77e
        ;   Label: LAB_0056e77e
    CALL core_hero.cpp_FUN_004cf890     ; 0056e77f
        ;   XREF to: 004cf890 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf890(CHero * this_ptr)
    ADD ESP,0x4                         ; 0056e784
    TEST EAX,EAX                        ; 0056e787
    JZ 0x0056e798                       ; 0056e789
        ;   XREF to: 0056e798 (CONDITIONAL_JUMP)  ; LAB_0056e798
    MOV dword ptr [EBX + 0x10a74],EDI   ; 0056e78b
    ADD ESP,0x8                         ; 0056e791
    POP EDI                             ; 0056e794
    POP ESI                             ; 0056e795
    POP EBX                             ; 0056e796
    RET                                 ; 0056e797
    PUSH 0x5ebe32                       ; 0056e798 | = "CBodyPart"
        ;   Label: LAB_0056e798
    PUSH EBX                            ; 0056e79d
    CALL core_stranger.cpp_FUN_00569620 ; 0056e79e
        ;   XREF to: 00569620 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_FUN_00569620(CStranger * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056e7a3
    TEST EAX,EAX                        ; 0056e7a6
    JZ 0x0056e6e1                       ; 0056e7a8
        ;   XREF to: 0056e6e1 (CONDITIONAL_JUMP)  ; LAB_0056e6e1
    MOV dword ptr [EBX + 0x10a74],EDI   ; 0056e7ae
    ADD ESP,0x8                         ; 0056e7b4
    POP EDI                             ; 0056e7b7
    POP ESI                             ; 0056e7b8
    POP EBX                             ; 0056e7b9
    RET                                 ; 0056e7ba

