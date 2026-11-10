; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004d03b0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_doc.cpp_CDoc_doHeroAction_FUN_0045ca30 at 0045cc98
;
; Referenced Globals:
;   void* switchdataD_004d0374 = 004d03ca
;   undefined4 s_CHero_doHeroAction_type_005d9de3+1
;   TerminatedCString s_CHero_doHeroAction_type_005d9e29
;   TerminatedCString s_CHero_doHeroAction_pull_005d9e72
;   TerminatedCString s_CHero_doHeroAction_type_005d9e94
;   TerminatedCString s_CHero_doHeroAction_type_005d9ee8
;   TerminatedCString s_CHero_doHeroAction_type_005d9f3a
;   TerminatedCString s_CHero_doHeroAction_type_005d9f81
;   TerminatedCString s_CHero_doHeroAction_type_005d9fdf
;   CConsole* g_CConsolePtr = 007c158c
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141f0
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CDoorClassInfo.name_hash
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_door.cpp_FUN_0045efc0
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230
;   core_hero.cpp_FUN_004cf200
;   core_hero.cpp_FUN_004cf440
;   engine_console.cpp_FUN_00436710
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d03b0
        ;   Label: core_hero.cpp_CHero_doHeroAction_FUN_004d03b0
    PUSH ESI                            ; 004d03b1
    PUSH EDI                            ; 004d03b2
    PUSH EBP                            ; 004d03b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d03b4
    MOV EAX,dword ptr [EBX + 0x255f0]   ; 004d03b8
    CMP EAX,0xb                         ; 004d03be
    JA 0x004d03ca                       ; 004d03c1
        ;   XREF to: 004d03ca (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x4d0374]  ; 004d03c3 | caseD_b | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EBX                            ; 004d03ca
        ;   Label: caseD_0
    CALL core_hero.cpp_FUN_004cf200     ; 004d03cb
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d03d0
    POP EBP                             ; 004d03d3
    POP EDI                             ; 004d03d4
    POP ESI                             ; 004d03d5
    POP EBX                             ; 004d03d6
    RET                                 ; 004d03d7
    MOV EDX,dword ptr [EBX + 0x255f4]   ; 004d03d8
        ;   Label: caseD_5
    TEST EDX,EDX                        ; 004d03de
    JZ 0x004d040d                       ; 004d03e0
        ;   XREF to: 004d040d (CONDITIONAL_JUMP)  ; LAB_004d040d
    CMP dword ptr [EBX + 0x255fc],0x0   ; 004d03e2
    JNZ 0x004d042f                      ; 004d03e9
        ;   XREF to: 004d042f (CONDITIONAL_JUMP)  ; LAB_004d042f
    PUSH 0x5d9e29                       ; 004d03eb | = "CHero::doHeroAction - type=eHeroActio..."
    MOV ESI,dword ptr [0x006138e0]      ; 004d03f0 | g_CEditorToolsPtr
    PUSH ESI                            ; 004d03f6
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004d03f7
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d03fc
    PUSH EBX                            ; 004d03ff
    CALL core_hero.cpp_FUN_004cf200     ; 004d0400
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0405
    POP EBP                             ; 004d0408
    POP EDI                             ; 004d0409
    POP ESI                             ; 004d040a
    POP EBX                             ; 004d040b
    RET                                 ; 004d040c
    PUSH 0x5d9de4                       ; 004d040d | s_CHero_doHeroAction_type_005d9de3+1
        ;   Label: LAB_004d040d
    MOV EDI,dword ptr [0x006138e0]      ; 004d0412 | g_CEditorToolsPtr
    PUSH EDI                            ; 004d0418
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004d0419
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d041e
    PUSH EBX                            ; 004d0421
    CALL core_hero.cpp_FUN_004cf200     ; 004d0422
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0427
    POP EBP                             ; 004d042a
    POP EDI                             ; 004d042b
    POP ESI                             ; 004d042c
    POP EBX                             ; 004d042d
    RET                                 ; 004d042e
    MOV ESI,EDX                         ; 004d042f
        ;   Label: LAB_004d042f
    MOV EAX,dword ptr [EBX + 0x255fc]   ; 004d0431
    MOV ECX,dword ptr [EDX + 0x2b0]     ; 004d0437
    LEA EDX,[EAX + 0x30]                ; 004d043d
    PUSH EDX                            ; 004d0440
    ADD EAX,0x20                        ; 004d0441
    PUSH EAX                            ; 004d0444
    PUSH ESI                            ; 004d0445
    CALL dword ptr [ECX + 0x70]         ; 004d0446
    ADD ESP,0xc                         ; 004d0449
    PUSH EBX                            ; 004d044c
    CALL core_hero.cpp_FUN_004cf200     ; 004d044d
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0452
    POP EBP                             ; 004d0455
    POP EDI                             ; 004d0456
    POP ESI                             ; 004d0457
    POP EBX                             ; 004d0458
    RET                                 ; 004d0459
    PUSH 0x5d9e72                       ; 004d045a | = "CHero::doHeroAction - pull lever\n"
        ;   Label: caseD_7
    MOV ESI,dword ptr [0x00609ed0]      ; 004d045f | g_CConsolePtr
    PUSH ESI                            ; 004d0465 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004d0466
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 004d046b
    MOV EDI,dword ptr [0x01d03500]      ; 004d046e | g_CLeverClassInfo.name_hash
    PUSH EDI                            ; 004d0474
    MOV EBP,dword ptr [EBX + 0x255f4]   ; 004d0475
    PUSH EBP                            ; 004d047b
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004d047c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d0486
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ESI,EAX                         ; 004d048b
    ADD ESP,0x8                         ; 004d048d
    TEST EAX,EAX                        ; 004d0490
    JZ 0x004d04c7                       ; 004d0492
        ;   XREF to: 004d04c7 (CONDITIONAL_JUMP)  ; LAB_004d04c7
    ADD EAX,0x57c                       ; 004d0494
    PUSH EAX                            ; 004d0499
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0 ; 004d049a
        ;   XREF to: 004925c0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004d049f
    TEST EAX,EAX                        ; 004d04a2
    JNZ 0x004d03ca                      ; 004d04a4
        ;   XREF to: 004d03ca (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EBX                            ; 004d04aa
    MOV dword ptr [EBX + 0x25610],ESI   ; 004d04ab
    CALL core_hero.cpp_FUN_004cf440     ; 004d04b1
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf440()
    ADD ESP,0x4                         ; 004d04b6
    PUSH EBX                            ; 004d04b9
    CALL core_hero.cpp_FUN_004cf200     ; 004d04ba
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d04bf
    POP EBP                             ; 004d04c2
    POP EDI                             ; 004d04c3
    POP ESI                             ; 004d04c4
    POP EBX                             ; 004d04c5
    RET                                 ; 004d04c6
    PUSH 0x5d9e94                       ; 004d04c7 | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d04c7
    MOV EAX,[0x006138e0]                ; 004d04cc | g_CEditorToolsPtr
    PUSH EAX                            ; 004d04d1
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004d04d2
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d04d7
    PUSH EBX                            ; 004d04da
    CALL core_hero.cpp_FUN_004cf200     ; 004d04db
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d04e0
    POP EBP                             ; 004d04e3
    POP EDI                             ; 004d04e4
    POP ESI                             ; 004d04e5
    POP EBX                             ; 004d04e6
    RET                                 ; 004d04e7
    MOV EBP,dword ptr [0x01b4d36c]      ; 004d04e8 | g_CDoorClassInfo.name_hash
        ;   Label: caseD_3
    PUSH EBP                            ; 004d04ee
    MOV EAX,dword ptr [EBX + 0x255f4]   ; 004d04ef
    PUSH EAX                            ; 004d04f5
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d04f6
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ESI,EAX                         ; 004d04fb
    ADD ESP,0x8                         ; 004d04fd
    TEST EAX,EAX                        ; 004d0500
    JZ 0x004d053a                       ; 004d0502
        ;   XREF to: 004d053a (CONDITIONAL_JUMP)  ; LAB_004d053a
    ADD EAX,0x5d4                       ; 004d0504
    PUSH EAX                            ; 004d0509
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0 ; 004d050a
        ;   XREF to: 004925c0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004d050f
    TEST EAX,EAX                        ; 004d0512
    JNZ 0x004d03ca                      ; 004d0514
        ;   XREF to: 004d03ca (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x255fc],0x1   ; 004d051a
    JNZ 0x004d055c                      ; 004d0521
        ;   XREF to: 004d055c (CONDITIONAL_JUMP)  ; LAB_004d055c
    PUSH ESI                            ; 004d0523
    CALL core_door.cpp_FUN_0045efc0     ; 004d0524
        ;   XREF to: 0045efc0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_FUN_0045efc0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004d0529
    PUSH EBX                            ; 004d052c
    CALL core_hero.cpp_FUN_004cf200     ; 004d052d
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0532
    POP EBP                             ; 004d0535
    POP EDI                             ; 004d0536
    POP ESI                             ; 004d0537
    POP EBX                             ; 004d0538
    RET                                 ; 004d0539
    PUSH 0x5d9ee8                       ; 004d053a | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d053a
    MOV ECX,dword ptr [0x006138e0]      ; 004d053f | g_CEditorToolsPtr
    PUSH ECX                            ; 004d0545
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004d0546
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d054b
    PUSH EBX                            ; 004d054e
    CALL core_hero.cpp_FUN_004cf200     ; 004d054f
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0554
    POP EBP                             ; 004d0557
    POP EDI                             ; 004d0558
    POP ESI                             ; 004d0559
    POP EBX                             ; 004d055a
    RET                                 ; 004d055b
    PUSH EBX                            ; 004d055c
        ;   Label: LAB_004d055c
    MOV dword ptr [EBX + 0x25604],ESI   ; 004d055d
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230 ; 004d0563
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d0568
    PUSH EBX                            ; 004d056b
    CALL core_hero.cpp_FUN_004cf200     ; 004d056c
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0571
    POP EBP                             ; 004d0574
    POP EDI                             ; 004d0575
    POP ESI                             ; 004d0576
    POP EBX                             ; 004d0577
    RET                                 ; 004d0578
    MOV EDX,dword ptr [EBX + 0x255f4]   ; 004d0579
        ;   Label: caseD_1
    TEST EDX,EDX                        ; 004d057f
    JZ 0x004d05b0                       ; 004d0581
        ;   XREF to: 004d05b0 (CONDITIONAL_JUMP)  ; LAB_004d05b0
    PUSH EDX                            ; 004d0583
    MOV ESI,dword ptr [EDX + 0x2b0]     ; 004d0584
    CALL dword ptr [ESI + 0x6c]         ; 004d058a
    ADD ESP,0x4                         ; 004d058d
    TEST EAX,EAX                        ; 004d0590
    JZ 0x004d03ca                       ; 004d0592
        ;   XREF to: 004d03ca (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004d0598
    PUSH EBX                            ; 004d05a2
    CALL core_hero.cpp_FUN_004cf200     ; 004d05a3
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d05a8
    POP EBP                             ; 004d05ab
    POP EDI                             ; 004d05ac
    POP ESI                             ; 004d05ad
    POP EBX                             ; 004d05ae
    RET                                 ; 004d05af
    MOV EAX,0x5d9f3a                    ; 004d05b0 | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d05b0
    PUSH EAX                            ; 004d05b5 | = "CHero::doHeroAction - type=eHeroActio..."
    MOV ECX,dword ptr [0x006138e0]      ; 004d05b6 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d05bc
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004d05bd
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d05c2
    PUSH EBX                            ; 004d05c5
    CALL core_hero.cpp_FUN_004cf200     ; 004d05c6
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d05cb
    POP EBP                             ; 004d05ce
    POP EDI                             ; 004d05cf
    POP ESI                             ; 004d05d0
    POP EBX                             ; 004d05d1
    RET                                 ; 004d05d2
    MOV ESI,dword ptr [0x007bdc94]      ; 004d05d3 | g_CCharacterClassInfo.name_hash
        ;   Label: caseD_2
    PUSH ESI                            ; 004d05d9
    MOV EDI,dword ptr [EBX + 0x255f4]   ; 004d05da
    PUSH EDI                            ; 004d05e0
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d05e1
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d05e6
    TEST EAX,EAX                        ; 004d05e9
    JNZ 0x004d060e                      ; 004d05eb
        ;   XREF to: 004d060e (CONDITIONAL_JUMP)  ; LAB_004d060e
    PUSH 0x5d9f81                       ; 004d05ed | = "CHero::doHeroAction - type=eHeroActio..."
    MOV EAX,[0x006138e0]                ; 004d05f2 | g_CEditorToolsPtr
    PUSH EAX                            ; 004d05f7
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004d05f8
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d05fd
    PUSH EBX                            ; 004d0600
    CALL core_hero.cpp_FUN_004cf200     ; 004d0601
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0606
    POP EBP                             ; 004d0609
    POP EDI                             ; 004d060a
    POP ESI                             ; 004d060b
    POP EBX                             ; 004d060c
    RET                                 ; 004d060d
    ADD EAX,0x2708                      ; 004d060e
        ;   Label: LAB_004d060e
    PUSH EAX                            ; 004d0613
    MOV EBP,dword ptr [0x006141f0]      ; 004d0614 | DAT_006141f0
    PUSH EBP                            ; 004d061a
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004d061b
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d0620
    PUSH EBX                            ; 004d0623
    CALL core_hero.cpp_FUN_004cf200     ; 004d0624
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0629
    POP EBP                             ; 004d062c
    POP EDI                             ; 004d062d
    POP ESI                             ; 004d062e
    POP EBX                             ; 004d062f
    RET                                 ; 004d0630
    MOV EDX,dword ptr [EBX + 0x255f4]   ; 004d0631
        ;   Label: caseD_9
    TEST EDX,EDX                        ; 004d0637
    JZ 0x004d066e                       ; 004d0639
        ;   XREF to: 004d066e (CONDITIONAL_JUMP)  ; LAB_004d066e
    PUSH EBX                            ; 004d063b
    MOV ESI,dword ptr [EDX + 0x2b0]     ; 004d063c
    PUSH EDX                            ; 004d0642
    CALL dword ptr [ESI + 0xa4]         ; 004d0643
    ADD ESP,0x8                         ; 004d0649
    TEST EAX,EAX                        ; 004d064c
    JZ 0x004d03ca                       ; 004d064e
        ;   XREF to: 004d03ca (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x255f4]   ; 004d0654
    MOV dword ptr [EBX + 0x25618],EAX   ; 004d065a
    PUSH EBX                            ; 004d0660
    CALL core_hero.cpp_FUN_004cf200     ; 004d0661
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0666
    POP EBP                             ; 004d0669
    POP EDI                             ; 004d066a
    POP ESI                             ; 004d066b
    POP EBX                             ; 004d066c
    RET                                 ; 004d066d
    PUSH 0x5d9fdf                       ; 004d066e | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_004d066e
    MOV ECX,dword ptr [0x006138e0]      ; 004d0673 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d0679
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004d067a
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d067f
    PUSH EBX                            ; 004d0682
    CALL core_hero.cpp_FUN_004cf200     ; 004d0683
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 004d0688
    POP EBP                             ; 004d068b
    POP EDI                             ; 004d068c
    POP ESI                             ; 004d068d
    POP EBX                             ; 004d068e
    RET                                 ; 004d068f

