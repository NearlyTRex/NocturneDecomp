; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004ec640(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_doc.cpp_CDoc_doHeroAction_FUN_00474fc0 at 00475228
;
; Referenced Globals:
;   void* switchdataD_004ec604 = 004ec65a
;   TerminatedCString s_CHero_doHeroAction_type_005e4945
;   TerminatedCString s_CHero_doHeroAction_type_005e498a
;   TerminatedCString s_CHero_doHeroAction_pull_005e49d3
;   TerminatedCString s_CHero_doHeroAction_type_005e49f5
;   TerminatedCString s_CHero_doHeroAction_type_005e4a49
;   TerminatedCString s_CHero_doHeroAction_type_005e4a9b
;   TerminatedCString s_CHero_doHeroAction_type_005e4ae2
;   TerminatedCString s_CHero_doHeroAction_type_005e4b40
;   CConsole* g_CConsolePtr = 007db5f0
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061b4d0
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CDoorClassInfo.name_hash
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_door.cpp_CDoor_onOpened_FUN_004774d0
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   core_hero.cpp_FUN_004eb5b0
;   core_hero.cpp_FUN_004eb7f0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   shape_edittool.cpp_CEditorTools_showError_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec640
        ;   Label: core_hero.cpp_CHero_doHeroAction_FUN_004ec640
    PUSH ESI                            ; 004ec641
    PUSH EDI                            ; 004ec642
    PUSH EBP                            ; 004ec643
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ec644
    MOV EAX,dword ptr [EBX + 0x1ff60]   ; 004ec648
    CMP EAX,0xb                         ; 004ec64e
    JA 0x004ec65a                       ; 004ec651
        ;   XREF to: 004ec65a (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x4ec604]  ; 004ec653 | caseD_b | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EBX                            ; 004ec65a
        ;   Label: caseD_0
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec65b
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec660
    POP EBP                             ; 004ec663
    POP EDI                             ; 004ec664
    POP ESI                             ; 004ec665
    POP EBX                             ; 004ec666
    RET                                 ; 004ec667
    MOV EDX,dword ptr [EBX + 0x1ff64]   ; 004ec668
        ;   Label: caseD_5
    TEST EDX,EDX                        ; 004ec66e
    JZ 0x004ec69d                       ; 004ec670
        ;   XREF to: 004ec69d (CONDITIONAL_JUMP)  ; LAB_004ec69d
    CMP dword ptr [EBX + 0x1ff6c],0x0   ; 004ec672
    JNZ 0x004ec6bf                      ; 004ec679
        ;   XREF to: 004ec6bf (CONDITIONAL_JUMP)  ; LAB_004ec6bf
    PUSH 0x5e498a                       ; 004ec67b | = "CHero::doHeroAction - type=eHeroActio..."
    MOV ESI,dword ptr [0x0061abc0]      ; 004ec680 | g_CEditorToolsPtr
    PUSH ESI                            ; 004ec686
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004ec687
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec68c
    PUSH EBX                            ; 004ec68f
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec690
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec695
    POP EBP                             ; 004ec698
    POP EDI                             ; 004ec699
    POP ESI                             ; 004ec69a
    POP EBX                             ; 004ec69b
    RET                                 ; 004ec69c
    PUSH 0x5e4945                       ; 004ec69d | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004ec69d
    MOV EDI,dword ptr [0x0061abc0]      ; 004ec6a2 | g_CEditorToolsPtr
    PUSH EDI                            ; 004ec6a8
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004ec6a9
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec6ae
    PUSH EBX                            ; 004ec6b1
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec6b2
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec6b7
    POP EBP                             ; 004ec6ba
    POP EDI                             ; 004ec6bb
    POP ESI                             ; 004ec6bc
    POP EBX                             ; 004ec6bd
    RET                                 ; 004ec6be
    MOV ESI,EDX                         ; 004ec6bf
        ;   Label: LAB_004ec6bf
    MOV EAX,dword ptr [EBX + 0x1ff6c]   ; 004ec6c1
    MOV ECX,dword ptr [EDX + 0x154]     ; 004ec6c7
    LEA EDX,[EAX + 0x30]                ; 004ec6cd
    PUSH EDX                            ; 004ec6d0
    ADD EAX,0x20                        ; 004ec6d1
    PUSH EAX                            ; 004ec6d4
    PUSH ESI                            ; 004ec6d5
    CALL dword ptr [ECX + 0x68]         ; 004ec6d6
    ADD ESP,0xc                         ; 004ec6d9
    PUSH EBX                            ; 004ec6dc
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec6dd
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec6e2
    POP EBP                             ; 004ec6e5
    POP EDI                             ; 004ec6e6
    POP ESI                             ; 004ec6e7
    POP EBX                             ; 004ec6e8
    RET                                 ; 004ec6e9
    PUSH 0x5e49d3                       ; 004ec6ea | = "CHero::doHeroAction - pull lever\n"
        ;   Label: caseD_7
    MOV ESI,dword ptr [0x00611100]      ; 004ec6ef | g_CConsolePtr
    PUSH ESI                            ; 004ec6f5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004ec6f6
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec6fb
    MOV EDI,dword ptr [0x01d1c21c]      ; 004ec6fe | g_CLeverClassInfo.name_hash
    PUSH EDI                            ; 004ec704
    MOV EBP,dword ptr [EBX + 0x1ff64]   ; 004ec705
    PUSH EBP                            ; 004ec70b
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004ec70c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ec716
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004ec71b
    ADD ESP,0x8                         ; 004ec71d
    TEST EAX,EAX                        ; 004ec720
    JZ 0x004ec757                       ; 004ec722
        ;   XREF to: 004ec757 (CONDITIONAL_JUMP)  ; LAB_004ec757
    ADD EAX,0x420                       ; 004ec724
    PUSH EAX                            ; 004ec729
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30 ; 004ec72a
        ;   XREF to: 004aaf30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004ec72f
    TEST EAX,EAX                        ; 004ec732
    JNZ 0x004ec65a                      ; 004ec734
        ;   XREF to: 004ec65a (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EBX                            ; 004ec73a
    MOV dword ptr [EBX + 0x1ff80],ESI   ; 004ec73b
    CALL core_hero.cpp_FUN_004eb7f0     ; 004ec741
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb7f0()
    ADD ESP,0x4                         ; 004ec746
    PUSH EBX                            ; 004ec749
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec74a
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec74f
    POP EBP                             ; 004ec752
    POP EDI                             ; 004ec753
    POP ESI                             ; 004ec754
    POP EBX                             ; 004ec755
    RET                                 ; 004ec756
    PUSH 0x5e49f5                       ; 004ec757 | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004ec757
    MOV EAX,[0x0061abc0]                ; 004ec75c | g_CEditorToolsPtr
    PUSH EAX                            ; 004ec761
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004ec762
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec767
    PUSH EBX                            ; 004ec76a
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec76b
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec770
    POP EBP                             ; 004ec773
    POP EDI                             ; 004ec774
    POP ESI                             ; 004ec775
    POP EBX                             ; 004ec776
    RET                                 ; 004ec777
    MOV EBP,dword ptr [0x01b68928]      ; 004ec778 | g_CDoorClassInfo.name_hash
        ;   Label: caseD_3
    PUSH EBP                            ; 004ec77e
    MOV EAX,dword ptr [EBX + 0x1ff64]   ; 004ec77f
    PUSH EAX                            ; 004ec785
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ec786
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004ec78b
    ADD ESP,0x8                         ; 004ec78d
    TEST EAX,EAX                        ; 004ec790
    JZ 0x004ec7ca                       ; 004ec792
        ;   XREF to: 004ec7ca (CONDITIONAL_JUMP)  ; LAB_004ec7ca
    ADD EAX,0x478                       ; 004ec794
    PUSH EAX                            ; 004ec799
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30 ; 004ec79a
        ;   XREF to: 004aaf30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004ec79f
    TEST EAX,EAX                        ; 004ec7a2
    JNZ 0x004ec65a                      ; 004ec7a4
        ;   XREF to: 004ec65a (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x1ff6c],0x1   ; 004ec7aa
    JNZ 0x004ec7ec                      ; 004ec7b1
        ;   XREF to: 004ec7ec (CONDITIONAL_JUMP)  ; LAB_004ec7ec
    PUSH ESI                            ; 004ec7b3
    CALL core_door.cpp_CDoor_onOpened_FUN_004774d0 ; 004ec7b4
        ;   XREF to: 004774d0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_onOpened_FUN_004774d0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004ec7b9
    PUSH EBX                            ; 004ec7bc
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec7bd
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec7c2
    POP EBP                             ; 004ec7c5
    POP EDI                             ; 004ec7c6
    POP ESI                             ; 004ec7c7
    POP EBX                             ; 004ec7c8
    RET                                 ; 004ec7c9
    PUSH 0x5e4a49                       ; 004ec7ca | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004ec7ca
    MOV ECX,dword ptr [0x0061abc0]      ; 004ec7cf | g_CEditorToolsPtr
    PUSH ECX                            ; 004ec7d5
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004ec7d6
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec7db
    PUSH EBX                            ; 004ec7de
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec7df
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec7e4
    POP EBP                             ; 004ec7e7
    POP EDI                             ; 004ec7e8
    POP ESI                             ; 004ec7e9
    POP EBX                             ; 004ec7ea
    RET                                 ; 004ec7eb
    PUSH EBX                            ; 004ec7ec
        ;   Label: LAB_004ec7ec
    MOV dword ptr [EBX + 0x1ff74],ESI   ; 004ec7ed
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 004ec7f3
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ec7f8
    PUSH EBX                            ; 004ec7fb
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec7fc
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec801
    POP EBP                             ; 004ec804
    POP EDI                             ; 004ec805
    POP ESI                             ; 004ec806
    POP EBX                             ; 004ec807
    RET                                 ; 004ec808
    MOV EDX,dword ptr [EBX + 0x1ff64]   ; 004ec809
        ;   Label: caseD_1
    TEST EDX,EDX                        ; 004ec80f
    JZ 0x004ec840                       ; 004ec811
        ;   XREF to: 004ec840 (CONDITIONAL_JUMP)  ; LAB_004ec840
    PUSH EDX                            ; 004ec813
    MOV ESI,dword ptr [EDX + 0x154]     ; 004ec814
    CALL dword ptr [ESI + 0x64]         ; 004ec81a
    ADD ESP,0x4                         ; 004ec81d
    TEST EAX,EAX                        ; 004ec820
    JZ 0x004ec65a                       ; 004ec822
        ;   XREF to: 004ec65a (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004ec828
    PUSH EBX                            ; 004ec832
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec833
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec838
    POP EBP                             ; 004ec83b
    POP EDI                             ; 004ec83c
    POP ESI                             ; 004ec83d
    POP EBX                             ; 004ec83e
    RET                                 ; 004ec83f
    MOV EAX,0x5e4a9b                    ; 004ec840 | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004ec840
    PUSH EAX                            ; 004ec845 | = "CHero::doHeroAction - type=eHeroActio..."
    MOV ECX,dword ptr [0x0061abc0]      ; 004ec846 | g_CEditorToolsPtr
    PUSH ECX                            ; 004ec84c
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004ec84d
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec852
    PUSH EBX                            ; 004ec855
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec856
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec85b
    POP EBP                             ; 004ec85e
    POP EDI                             ; 004ec85f
    POP ESI                             ; 004ec860
    POP EBX                             ; 004ec861
    RET                                 ; 004ec862
    MOV ESI,dword ptr [0x007c637c]      ; 004ec863 | g_CCharacterClassInfo.name_hash
        ;   Label: caseD_2
    PUSH ESI                            ; 004ec869
    MOV EDI,dword ptr [EBX + 0x1ff64]   ; 004ec86a
    PUSH EDI                            ; 004ec870
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ec871
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ec876
    TEST EAX,EAX                        ; 004ec879
    JNZ 0x004ec89e                      ; 004ec87b
        ;   XREF to: 004ec89e (CONDITIONAL_JUMP)  ; LAB_004ec89e
    PUSH 0x5e4ae2                       ; 004ec87d | = "CHero::doHeroAction - type=eHeroActio..."
    MOV EAX,[0x0061abc0]                ; 004ec882 | g_CEditorToolsPtr
    PUSH EAX                            ; 004ec887
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004ec888
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec88d
    PUSH EBX                            ; 004ec890
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec891
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec896
    POP EBP                             ; 004ec899
    POP EDI                             ; 004ec89a
    POP ESI                             ; 004ec89b
    POP EBX                             ; 004ec89c
    RET                                 ; 004ec89d
    ADD EAX,0x2698                      ; 004ec89e
        ;   Label: LAB_004ec89e
    PUSH EAX                            ; 004ec8a3
    MOV EBP,dword ptr [0x0061b4d0]      ; 004ec8a4 | DAT_0061b4d0
    PUSH EBP                            ; 004ec8aa
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ec8ab
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ec8b0
    PUSH EBX                            ; 004ec8b3
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec8b4
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec8b9
    POP EBP                             ; 004ec8bc
    POP EDI                             ; 004ec8bd
    POP ESI                             ; 004ec8be
    POP EBX                             ; 004ec8bf
    RET                                 ; 004ec8c0
    MOV EDX,dword ptr [EBX + 0x1ff64]   ; 004ec8c1
        ;   Label: caseD_9
    TEST EDX,EDX                        ; 004ec8c7
    JZ 0x004ec8fe                       ; 004ec8c9
        ;   XREF to: 004ec8fe (CONDITIONAL_JUMP)  ; LAB_004ec8fe
    PUSH EBX                            ; 004ec8cb
    MOV ESI,dword ptr [EDX + 0x154]     ; 004ec8cc
    PUSH EDX                            ; 004ec8d2
    CALL dword ptr [ESI + 0x9c]         ; 004ec8d3
    ADD ESP,0x8                         ; 004ec8d9
    TEST EAX,EAX                        ; 004ec8dc
    JZ 0x004ec65a                       ; 004ec8de
        ;   XREF to: 004ec65a (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x1ff64]   ; 004ec8e4
    MOV dword ptr [EBX + 0x1ff88],EAX   ; 004ec8ea
    PUSH EBX                            ; 004ec8f0
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec8f1
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec8f6
    POP EBP                             ; 004ec8f9
    POP EDI                             ; 004ec8fa
    POP ESI                             ; 004ec8fb
    POP EBX                             ; 004ec8fc
    RET                                 ; 004ec8fd
    PUSH 0x5e4b40                       ; 004ec8fe | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004ec8fe
    MOV ECX,dword ptr [0x0061abc0]      ; 004ec903 | g_CEditorToolsPtr
    PUSH ECX                            ; 004ec909
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004ec90a
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ec90f
    PUSH EBX                            ; 004ec912
    CALL core_hero.cpp_FUN_004eb5b0     ; 004ec913
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004ec918
    POP EBP                             ; 004ec91b
    POP EDI                             ; 004ec91c
    POP ESI                             ; 004ec91d
    POP EBX                             ; 004ec91e
    RET                                 ; 004ec91f

