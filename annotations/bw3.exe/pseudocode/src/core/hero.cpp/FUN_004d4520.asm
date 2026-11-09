; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d4520(CHero *param_1)
;
;
; XREF[1]:
;   unkafter_prye.cpp_FUN_00525a20 at 00525c88
;
; Referenced Globals:
;   undefined1* switchdataD_004d44e0 = 004d453a
;   undefined4 s_CHero_doHeroAction_type_005c4e8c+1
;   TerminatedCString s_CHero_doHeroAction_type_005c4ed2
;   TerminatedCString s_CHero_doHeroAction_pull_005c4f1b
;   TerminatedCString s_CHero_doHeroAction_type_005c4f3d
;   TerminatedCString s_CHero_doHeroAction_type_005c4f91
;   TerminatedCString s_CHero_doHeroAction_type_005c4fe3
;   TerminatedCString s_CHero_doHeroAction_type_005c502a
;   TerminatedCString s_CHero_doHeroAction_type_005c5088
;   CConsole* g_CConsolePtr = 007f7ea4
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba60
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CDoorClassInfo.name_hash
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_door.cpp_CDoor_onOpened_FUN_00463d10
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0
;   core_hero.cpp_FUN_004d3210
;   core_hero.cpp_FUN_004d3250
;   core_hero.cpp_FUN_004d3460
;   engine_console.cpp_FUN_00441ff0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4520
        ;   Label: core_hero.cpp_FUN_004d4520
    PUSH ESI                            ; 004d4521
    PUSH EDI                            ; 004d4522
    PUSH EBP                            ; 004d4523
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d4524
    MOV EAX,dword ptr [EBX + 0x20b68]   ; 004d4528
    CMP EAX,0xc                         ; 004d452e
    JA 0x004d453a                       ; 004d4531
        ;   XREF to: 004d453a (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x4d44e0]  ; 004d4533 | caseD_c | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EBX                            ; 004d453a
        ;   Label: caseD_0
    CALL core_hero.cpp_FUN_004d3210     ; 004d453b
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4540
    POP EBP                             ; 004d4543
    POP EDI                             ; 004d4544
    POP ESI                             ; 004d4545
    POP EBX                             ; 004d4546
    RET                                 ; 004d4547
    MOV EDX,dword ptr [EBX + 0x20b6c]   ; 004d4548
        ;   Label: caseD_6
    TEST EDX,EDX                        ; 004d454e
    JZ 0x004d457d                       ; 004d4550
        ;   XREF to: 004d457d (CONDITIONAL_JUMP)  ; LAB_004d457d
    CMP dword ptr [EBX + 0x20b74],0x0   ; 004d4552
    JNZ 0x004d459f                      ; 004d4559
        ;   XREF to: 004d459f (CONDITIONAL_JUMP)  ; LAB_004d459f
    PUSH 0x5c4ed2                       ; 004d455b | = "CHero::doHeroAction - type=eHeroActio..."
    MOV ESI,dword ptr [0x005fb140]      ; 004d4560 | g_CEditorToolsPtr
    PUSH ESI                            ; 004d4566
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004d4567
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d456c
    PUSH EBX                            ; 004d456f
    CALL core_hero.cpp_FUN_004d3210     ; 004d4570
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4575
    POP EBP                             ; 004d4578
    POP EDI                             ; 004d4579
    POP ESI                             ; 004d457a
    POP EBX                             ; 004d457b
    RET                                 ; 004d457c
    PUSH 0x5c4e8d                       ; 004d457d | s_CHero_doHeroAction_type_005c4e8c+1
        ;   Label: LAB_004d457d
    MOV EDI,dword ptr [0x005fb140]      ; 004d4582 | g_CEditorToolsPtr
    PUSH EDI                            ; 004d4588
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004d4589
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d458e
    PUSH EBX                            ; 004d4591
    CALL core_hero.cpp_FUN_004d3210     ; 004d4592
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4597
    POP EBP                             ; 004d459a
    POP EDI                             ; 004d459b
    POP ESI                             ; 004d459c
    POP EBX                             ; 004d459d
    RET                                 ; 004d459e
    MOV ESI,EDX                         ; 004d459f
        ;   Label: LAB_004d459f
    MOV EAX,dword ptr [EBX + 0x20b74]   ; 004d45a1
    MOV ECX,dword ptr [EDX + 0x154]     ; 004d45a7
    LEA EDX,[EAX + 0x30]                ; 004d45ad
    PUSH EDX                            ; 004d45b0
    ADD EAX,0x20                        ; 004d45b1
    PUSH EAX                            ; 004d45b4
    PUSH ESI                            ; 004d45b5
    CALL dword ptr [ECX + 0x68]         ; 004d45b6
    ADD ESP,0xc                         ; 004d45b9
    PUSH EBX                            ; 004d45bc
    CALL core_hero.cpp_FUN_004d3210     ; 004d45bd
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d45c2
    POP EBP                             ; 004d45c5
    POP EDI                             ; 004d45c6
    POP ESI                             ; 004d45c7
    POP EBX                             ; 004d45c8
    RET                                 ; 004d45c9
    PUSH 0x5c4f1b                       ; 004d45ca | = "CHero::doHeroAction - pull lever\n"
        ;   Label: caseD_8
    MOV ESI,dword ptr [0x005f1690]      ; 004d45cf | g_CConsolePtr
    PUSH ESI                            ; 004d45d5 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004d45d6
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 004d45db
    MOV EDI,dword ptr [0x01d70c34]      ; 004d45de | g_CLeverClassInfo.name_hash
    PUSH EDI                            ; 004d45e4
    MOV EBP,dword ptr [EBX + 0x20b6c]   ; 004d45e5
    PUSH EBP                            ; 004d45eb
    MOV dword ptr [EBX + 0xcde0],0x0    ; 004d45ec
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d45f6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 004d45fb
    ADD ESP,0x8                         ; 004d45fd
    TEST EAX,EAX                        ; 004d4600
    JZ 0x004d4637                       ; 004d4602
        ;   XREF to: 004d4637 (CONDITIONAL_JUMP)  ; LAB_004d4637
    ADD EAX,0x420                       ; 004d4604
    PUSH EAX                            ; 004d4609
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0 ; 004d460a
        ;   XREF to: 00495db0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004d460f
    TEST EAX,EAX                        ; 004d4612
    JNZ 0x004d453a                      ; 004d4614
        ;   XREF to: 004d453a (CONDITIONAL_JUMP)  ; caseD_c
    PUSH EBX                            ; 004d461a
    MOV dword ptr [EBX + 0x20ba0],ESI   ; 004d461b
    CALL core_hero.cpp_FUN_004d3460     ; 004d4621
        ;   XREF to: 004d3460 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3460()
    ADD ESP,0x4                         ; 004d4626
    PUSH EBX                            ; 004d4629
    CALL core_hero.cpp_FUN_004d3210     ; 004d462a
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d462f
    POP EBP                             ; 004d4632
    POP EDI                             ; 004d4633
    POP ESI                             ; 004d4634
    POP EBX                             ; 004d4635
    RET                                 ; 004d4636
    PUSH 0x5c4f3d                       ; 004d4637 | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d4637
    MOV EAX,[0x005fb140]                ; 004d463c | g_CEditorToolsPtr
    PUSH EAX                            ; 004d4641
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004d4642
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d4647
    PUSH EBX                            ; 004d464a
    CALL core_hero.cpp_FUN_004d3210     ; 004d464b
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4650
    POP EBP                             ; 004d4653
    POP EDI                             ; 004d4654
    POP ESI                             ; 004d4655
    POP EBX                             ; 004d4656
    RET                                 ; 004d4657
    MOV EBP,dword ptr [0x01b85178]      ; 004d4658 | g_CDoorClassInfo.name_hash
        ;   Label: caseD_3
    PUSH EBP                            ; 004d465e
    MOV EAX,dword ptr [EBX + 0x20b6c]   ; 004d465f
    PUSH EAX                            ; 004d4665
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d4666
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 004d466b
    ADD ESP,0x8                         ; 004d466d
    TEST EAX,EAX                        ; 004d4670
    JZ 0x004d46aa                       ; 004d4672
        ;   XREF to: 004d46aa (CONDITIONAL_JUMP)  ; LAB_004d46aa
    ADD EAX,0x478                       ; 004d4674
    PUSH EAX                            ; 004d4679
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0 ; 004d467a
        ;   XREF to: 00495db0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004d467f
    TEST EAX,EAX                        ; 004d4682
    JNZ 0x004d453a                      ; 004d4684
        ;   XREF to: 004d453a (CONDITIONAL_JUMP)  ; caseD_c
    CMP dword ptr [EBX + 0x20b74],0x1   ; 004d468a
    JNZ 0x004d46cc                      ; 004d4691
        ;   XREF to: 004d46cc (CONDITIONAL_JUMP)  ; LAB_004d46cc
    PUSH ESI                            ; 004d4693
    CALL core_door.cpp_CDoor_onOpened_FUN_00463d10 ; 004d4694
        ;   XREF to: 00463d10 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_onOpened_FUN_00463d10(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004d4699
    PUSH EBX                            ; 004d469c
    CALL core_hero.cpp_FUN_004d3210     ; 004d469d
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d46a2
    POP EBP                             ; 004d46a5
    POP EDI                             ; 004d46a6
    POP ESI                             ; 004d46a7
    POP EBX                             ; 004d46a8
    RET                                 ; 004d46a9
    PUSH 0x5c4f91                       ; 004d46aa | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d46aa
    MOV ECX,dword ptr [0x005fb140]      ; 004d46af | g_CEditorToolsPtr
    PUSH ECX                            ; 004d46b5
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004d46b6
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d46bb
    PUSH EBX                            ; 004d46be
    CALL core_hero.cpp_FUN_004d3210     ; 004d46bf
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d46c4
    POP EBP                             ; 004d46c7
    POP EDI                             ; 004d46c8
    POP ESI                             ; 004d46c9
    POP EBX                             ; 004d46ca
    RET                                 ; 004d46cb
    PUSH EBX                            ; 004d46cc
        ;   Label: LAB_004d46cc
    MOV dword ptr [EBX + 0x20b94],ESI   ; 004d46cd
    CALL core_hero.cpp_FUN_004d3250     ; 004d46d3
        ;   XREF to: 004d3250 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004d3250(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d46d8
    PUSH EBX                            ; 004d46db
    CALL core_hero.cpp_FUN_004d3210     ; 004d46dc
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d46e1
    POP EBP                             ; 004d46e4
    POP EDI                             ; 004d46e5
    POP ESI                             ; 004d46e6
    POP EBX                             ; 004d46e7
    RET                                 ; 004d46e8
    MOV EDX,dword ptr [EBX + 0x20b6c]   ; 004d46e9
        ;   Label: caseD_1
    TEST EDX,EDX                        ; 004d46ef
    JZ 0x004d4720                       ; 004d46f1
        ;   XREF to: 004d4720 (CONDITIONAL_JUMP)  ; LAB_004d4720
    PUSH EDX                            ; 004d46f3
    MOV ESI,dword ptr [EDX + 0x154]     ; 004d46f4
    CALL dword ptr [ESI + 0x64]         ; 004d46fa
    ADD ESP,0x4                         ; 004d46fd
    TEST EAX,EAX                        ; 004d4700
    JZ 0x004d453a                       ; 004d4702
        ;   XREF to: 004d453a (CONDITIONAL_JUMP)  ; caseD_c
    MOV dword ptr [EBX + 0xcde0],0x0    ; 004d4708
    PUSH EBX                            ; 004d4712
    CALL core_hero.cpp_FUN_004d3210     ; 004d4713
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4718
    POP EBP                             ; 004d471b
    POP EDI                             ; 004d471c
    POP ESI                             ; 004d471d
    POP EBX                             ; 004d471e
    RET                                 ; 004d471f
    MOV EAX,0x5c4fe3                    ; 004d4720 | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d4720
    PUSH EAX                            ; 004d4725 | = "CHero::doHeroAction - type=eHeroActio..."
    MOV ECX,dword ptr [0x005fb140]      ; 004d4726 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d472c
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004d472d
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d4732
    PUSH EBX                            ; 004d4735
    CALL core_hero.cpp_FUN_004d3210     ; 004d4736
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d473b
    POP EBP                             ; 004d473e
    POP EDI                             ; 004d473f
    POP ESI                             ; 004d4740
    POP EBX                             ; 004d4741
    RET                                 ; 004d4742
    MOV ESI,dword ptr [0x007e2cec]      ; 004d4743 | g_CCharacterClassInfo.name_hash
        ;   Label: caseD_2
    PUSH ESI                            ; 004d4749
    MOV EDI,dword ptr [EBX + 0x20b6c]   ; 004d474a
    PUSH EDI                            ; 004d4750
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d4751
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004d4756
    TEST EAX,EAX                        ; 004d4759
    JNZ 0x004d477e                      ; 004d475b
        ;   XREF to: 004d477e (CONDITIONAL_JUMP)  ; LAB_004d477e
    PUSH 0x5c502a                       ; 004d475d | = "CHero::doHeroAction - type=eHeroActio..."
    MOV EAX,[0x005fb140]                ; 004d4762 | g_CEditorToolsPtr
    PUSH EAX                            ; 004d4767
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004d4768
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d476d
    PUSH EBX                            ; 004d4770
    CALL core_hero.cpp_FUN_004d3210     ; 004d4771
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4776
    POP EBP                             ; 004d4779
    POP EDI                             ; 004d477a
    POP ESI                             ; 004d477b
    POP EBX                             ; 004d477c
    RET                                 ; 004d477d
    ADD EAX,0x2698                      ; 004d477e
        ;   Label: LAB_004d477e
    PUSH EAX                            ; 004d4783
    MOV EBP,dword ptr [0x005fba60]      ; 004d4784 | DAT_005fba60
    PUSH EBP                            ; 004d478a
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004d478b
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d4790
    PUSH EBX                            ; 004d4793
    CALL core_hero.cpp_FUN_004d3210     ; 004d4794
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d4799
    POP EBP                             ; 004d479c
    POP EDI                             ; 004d479d
    POP ESI                             ; 004d479e
    POP EBX                             ; 004d479f
    RET                                 ; 004d47a0
    MOV EDX,dword ptr [EBX + 0x20b6c]   ; 004d47a1
        ;   Label: caseD_a
    TEST EDX,EDX                        ; 004d47a7
    JZ 0x004d47de                       ; 004d47a9
        ;   XREF to: 004d47de (CONDITIONAL_JUMP)  ; LAB_004d47de
    PUSH EBX                            ; 004d47ab
    MOV ESI,dword ptr [EDX + 0x154]     ; 004d47ac
    PUSH EDX                            ; 004d47b2
    CALL dword ptr [ESI + 0x9c]         ; 004d47b3
    ADD ESP,0x8                         ; 004d47b9
    TEST EAX,EAX                        ; 004d47bc
    JZ 0x004d453a                       ; 004d47be
        ;   XREF to: 004d453a (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0x20b6c]   ; 004d47c4
    MOV dword ptr [EBX + 0x20ba8],EAX   ; 004d47ca
    PUSH EBX                            ; 004d47d0
    CALL core_hero.cpp_FUN_004d3210     ; 004d47d1
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d47d6
    POP EBP                             ; 004d47d9
    POP EDI                             ; 004d47da
    POP ESI                             ; 004d47db
    POP EBX                             ; 004d47dc
    RET                                 ; 004d47dd
    PUSH 0x5c5088                       ; 004d47de | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d47de
    MOV ECX,dword ptr [0x005fb140]      ; 004d47e3 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d47e9
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004d47ea
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d47ef
    PUSH EBX                            ; 004d47f2
    CALL core_hero.cpp_FUN_004d3210     ; 004d47f3
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004d47f8
    POP EBP                             ; 004d47fb
    POP EDI                             ; 004d47fc
    POP ESI                             ; 004d47fd
    POP EBX                             ; 004d47fe
    RET                                 ; 004d47ff

