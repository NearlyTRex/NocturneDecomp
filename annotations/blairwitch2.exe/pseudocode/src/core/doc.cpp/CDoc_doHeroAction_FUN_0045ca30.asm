; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_doHeroAction_FUN_0045ca30(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_0045c9cc = 0045cb70
;   undefined1* switchdataD_0045c9e4 = 0045ce4b
;   undefined1* switchdataD_0045c9f4 = 0045ca53
;   undefined4 s_CDoc_doHeroAction_pull_l_005d0666+1
;   TerminatedCString s_CDoc_doHeroAction_type_e_005d0688
;   TerminatedCString s_lever_s_005d06db
;   TerminatedCString s_CHero_doHeroAction_type_005d06e9
;   TerminatedCString s_Picking_up_heavy_s_shelf_005d073b
;   TerminatedCString s_Picking_up_heavy_s_crate_005d0756
;   TerminatedCString s_Picking_up_s_waist_level_005d0771
;   TerminatedCString s_Picking_up_s_off_ground_005d078c
;   TerminatedCString s_Rummaging_s_005d07a6
;   undefined4 DAT_005d07b7
;   undefined4 DAT_005d07bf
;   undefined4 DAT_005d07c7
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0
;   core_hero.cpp_CHero_doHeroAction_FUN_004d03b0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230
;   core_hero.cpp_FUN_004cf200
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_skeleton.cpp_FUN_005469a0
;   engine_console.cpp_FUN_00436710
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ca30
        ;   Label: core_doc.cpp_CDoc_doHeroAction_FUN_0045ca30
    PUSH ESI                            ; 0045ca31
    PUSH EDI                            ; 0045ca32
    PUSH EBP                            ; 0045ca33
    SUB ESP,0xd8                        ; 0045ca34
    MOV EBX,dword ptr [ESP + 0xec]      ; 0045ca3a
    MOV EAX,dword ptr [EBX + 0x255f0]   ; 0045ca41
    CMP EAX,0xb                         ; 0045ca47
    JA 0x0045ca53                       ; 0045ca4a
        ;   XREF to: 0045ca53 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x45c9f4]  ; 0045ca4c | caseD_b | caseD_9 | caseD_3
        ;   Label: switchD
    PUSH EBX                            ; 0045ca53
        ;   Label: caseD_0
    CALL core_hero.cpp_FUN_004cf200     ; 0045ca54
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045ca59
    ADD ESP,0xd8                        ; 0045ca5c
    POP EBP                             ; 0045ca62
    POP EDI                             ; 0045ca63
    POP ESI                             ; 0045ca64
    POP EBX                             ; 0045ca65
    RET                                 ; 0045ca66
    PUSH 0x5d0667                       ; 0045ca67 | s_CDoc_doHeroAction_pull_l_005d0666+1
        ;   Label: caseD_7
    MOV EDX,dword ptr [0x00609ed0]      ; 0045ca6c | g_CConsolePtr
    PUSH EDX                            ; 0045ca72 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0045ca73
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0045ca78
    MOV ECX,dword ptr [0x01d03500]      ; 0045ca7b | g_CLeverClassInfo.name_hash
    PUSH ECX                            ; 0045ca81
    MOV ESI,dword ptr [EBX + 0x255f4]   ; 0045ca82
    PUSH ESI                            ; 0045ca88
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0045ca89
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045ca93
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ESI,EAX                         ; 0045ca98
    ADD ESP,0x8                         ; 0045ca9a
    TEST EAX,EAX                        ; 0045ca9d
    JZ 0x0045caf6                       ; 0045ca9f
        ;   XREF to: 0045caf6 (CONDITIONAL_JUMP)  ; LAB_0045caf6
    PUSH EAX                            ; 0045caa1
    PUSH 0x5d06db                       ; 0045caa2 | = "  lever = %s\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0045caa7 | g_CConsolePtr
    PUSH EDI                            ; 0045caad | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0045caae
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0045cab3
    LEA EAX,[ESI + 0x57c]               ; 0045cab6
    PUSH EAX                            ; 0045cabc
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0 ; 0045cabd
        ;   XREF to: 004925c0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 0045cac2
    TEST EAX,EAX                        ; 0045cac5
    JNZ 0x0045ca53                      ; 0045cac7
        ;   XREF to: 0045ca53 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 0045cac9
    PUSH 0x21                           ; 0045cacb
    LEA EAX,[EBX + 0x2b4]               ; 0045cacd
    PUSH EAX                            ; 0045cad3
    MOV dword ptr [EBX + 0x25610],ESI   ; 0045cad4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045cada
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045cadf
    PUSH EBX                            ; 0045cae2
    CALL core_hero.cpp_FUN_004cf200     ; 0045cae3
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cae8
    ADD ESP,0xd8                        ; 0045caeb
    POP EBP                             ; 0045caf1
    POP EDI                             ; 0045caf2
    POP ESI                             ; 0045caf3
    POP EBX                             ; 0045caf4
    RET                                 ; 0045caf5
    PUSH 0x5d0688                       ; 0045caf6 | = "CDoc::doHeroAction - type=eHeroAction..."
        ;   Label: LAB_0045caf6
    MOV EBP,dword ptr [0x006138e0]      ; 0045cafb | g_CEditorToolsPtr
    PUSH EBP                            ; 0045cb01
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0045cb02
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0045cb07
    PUSH EBX                            ; 0045cb0a
    CALL core_hero.cpp_FUN_004cf200     ; 0045cb0b
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cb10
    ADD ESP,0xd8                        ; 0045cb13
    POP EBP                             ; 0045cb19
    POP EDI                             ; 0045cb1a
    POP ESI                             ; 0045cb1b
    POP EBX                             ; 0045cb1c
    RET                                 ; 0045cb1d
    MOV EBP,dword ptr [0x01b4d36c]      ; 0045cb1e | g_CDoorClassInfo.name_hash
        ;   Label: caseD_3
    PUSH EBP                            ; 0045cb24
    MOV EAX,dword ptr [EBX + 0x255f4]   ; 0045cb25
    PUSH EAX                            ; 0045cb2b
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0045cb2c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045cb36
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045cb3b
    MOV dword ptr [EBX + 0x25604],EAX   ; 0045cb3e
    TEST EAX,EAX                        ; 0045cb44
    JZ 0x0045cb8e                       ; 0045cb46
        ;   XREF to: 0045cb8e (CONDITIONAL_JUMP)  ; LAB_0045cb8e
    ADD EAX,0x5d4                       ; 0045cb48
    PUSH EAX                            ; 0045cb4d
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0 ; 0045cb4e
        ;   XREF to: 004925c0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 0045cb53
    TEST EAX,EAX                        ; 0045cb56
    JNZ 0x0045cb70                      ; 0045cb58
        ;   XREF to: 0045cb70 (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBX + 0x255fc]   ; 0045cb5a
    CMP EAX,0x5                         ; 0045cb60
    JA 0x0045cc7a                       ; 0045cb63
        ;   XREF to: 0045cc7a (CONDITIONAL_JUMP)  ; caseD_1
    JMP dword ptr [EAX*0x4 + 0x45c9cc]  ; 0045cb69 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [EBX + 0x25604],0x0   ; 0045cb70
        ;   Label: caseD_0
    PUSH EBX                            ; 0045cb7a
    CALL core_hero.cpp_FUN_004cf200     ; 0045cb7b
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cb80
    ADD ESP,0xd8                        ; 0045cb83
    POP EBP                             ; 0045cb89
    POP EDI                             ; 0045cb8a
    POP ESI                             ; 0045cb8b
    POP EBX                             ; 0045cb8c
    RET                                 ; 0045cb8d
    PUSH 0x5d06e9                       ; 0045cb8e | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_0045cb8e
    MOV ECX,dword ptr [0x006138e0]      ; 0045cb93 | g_CEditorToolsPtr
    PUSH ECX                            ; 0045cb99
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0045cb9a
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0045cb9f
    PUSH EBX                            ; 0045cba2
    CALL core_hero.cpp_FUN_004cf200     ; 0045cba3
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cba8
    ADD ESP,0xd8                        ; 0045cbab
    POP EBP                             ; 0045cbb1
    POP EDI                             ; 0045cbb2
    POP ESI                             ; 0045cbb3
    POP EBX                             ; 0045cbb4
    RET                                 ; 0045cbb5
    PUSH 0x1                            ; 0045cbb6
        ;   Label: caseD_3
    PUSH 0x20                           ; 0045cbb8
    LEA EAX,[EBX + 0x2b4]               ; 0045cbba
    PUSH EAX                            ; 0045cbc0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045cbc1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045cbc6
    MOV dword ptr [EBX + 0x256a4],0x5   ; 0045cbc9
    PUSH EBX                            ; 0045cbd3
    CALL core_hero.cpp_FUN_004cf200     ; 0045cbd4
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cbd9
    ADD ESP,0xd8                        ; 0045cbdc
    POP EBP                             ; 0045cbe2
    POP EDI                             ; 0045cbe3
    POP ESI                             ; 0045cbe4
    POP EBX                             ; 0045cbe5
    RET                                 ; 0045cbe6
    PUSH 0x1                            ; 0045cbe7
        ;   Label: caseD_2
    PUSH 0x1f                           ; 0045cbe9
    LEA EAX,[EBX + 0x2b4]               ; 0045cbeb
    PUSH EAX                            ; 0045cbf1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045cbf2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045cbf7
    MOV dword ptr [EBX + 0x256a4],0x5   ; 0045cbfa
    PUSH EBX                            ; 0045cc04
    CALL core_hero.cpp_FUN_004cf200     ; 0045cc05
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cc0a
    ADD ESP,0xd8                        ; 0045cc0d
    POP EBP                             ; 0045cc13
    POP EDI                             ; 0045cc14
    POP ESI                             ; 0045cc15
    POP EBX                             ; 0045cc16
    RET                                 ; 0045cc17
    PUSH 0x1                            ; 0045cc18
        ;   Label: caseD_4
    PUSH 0x1d                           ; 0045cc1a
    LEA EAX,[EBX + 0x2b4]               ; 0045cc1c
    PUSH EAX                            ; 0045cc22
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045cc23
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045cc28
    MOV dword ptr [EBX + 0x256a4],0x5   ; 0045cc2b
    PUSH EBX                            ; 0045cc35
    CALL core_hero.cpp_FUN_004cf200     ; 0045cc36
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cc3b
    ADD ESP,0xd8                        ; 0045cc3e
    POP EBP                             ; 0045cc44
    POP EDI                             ; 0045cc45
    POP ESI                             ; 0045cc46
    POP EBX                             ; 0045cc47
    RET                                 ; 0045cc48
    PUSH 0x1                            ; 0045cc49
        ;   Label: caseD_5
    PUSH 0x1e                           ; 0045cc4b
    LEA EAX,[EBX + 0x2b4]               ; 0045cc4d
    PUSH EAX                            ; 0045cc53
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045cc54
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045cc59
    MOV dword ptr [EBX + 0x256a4],0x5   ; 0045cc5c
    PUSH EBX                            ; 0045cc66
    CALL core_hero.cpp_FUN_004cf200     ; 0045cc67
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cc6c
    ADD ESP,0xd8                        ; 0045cc6f
    POP EBP                             ; 0045cc75
    POP EDI                             ; 0045cc76
    POP ESI                             ; 0045cc77
    POP EBX                             ; 0045cc78
    RET                                 ; 0045cc79
    PUSH EBX                            ; 0045cc7a
        ;   Label: caseD_1
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230 ; 0045cc7b
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230(CHero * this_ptr)
    ADD ESP,0x4                         ; 0045cc80
    PUSH EBX                            ; 0045cc83
    CALL core_hero.cpp_FUN_004cf200     ; 0045cc84
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cc89
    ADD ESP,0xd8                        ; 0045cc8c
    POP EBP                             ; 0045cc92
    POP EDI                             ; 0045cc93
    POP ESI                             ; 0045cc94
    POP EBX                             ; 0045cc95
    RET                                 ; 0045cc96
    PUSH EBX                            ; 0045cc97
        ;   Label: caseD_1
    CALL core_hero.cpp_CHero_doHeroAction_FUN_004d03b0 ; 0045cc98
        ;   XREF to: 004d03b0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_doHeroAction_FUN_004d03b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0045cc9d
    PUSH EBX                            ; 0045cca0
    CALL core_hero.cpp_FUN_004cf200     ; 0045cca1
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045cca6
    ADD ESP,0xd8                        ; 0045cca9
    POP EBP                             ; 0045ccaf
    POP EDI                             ; 0045ccb0
    POP ESI                             ; 0045ccb1
    POP EBX                             ; 0045ccb2
    RET                                 ; 0045ccb3
    MOV EAX,dword ptr [EBX + 0x255f4]   ; 0045ccb4
        ;   Label: caseD_4
    MOV dword ptr [EBX + 0x25608],EAX   ; 0045ccba
    TEST EAX,EAX                        ; 0045ccc0
    JZ 0x0045ca53                       ; 0045ccc2
        ;   XREF to: 0045ca53 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EBX                            ; 0045ccc8
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045ccc9
    PUSH EAX                            ; 0045cccf
    CALL dword ptr [EDX + 0x8c]         ; 0045ccd0
    ADD ESP,0x8                         ; 0045ccd6
    MOV EBP,EAX                         ; 0045ccd9
    MOV EAX,dword ptr [EBX + 0x25608]   ; 0045ccdb
    PUSH EAX                            ; 0045cce1
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045cce2
    LEA ESI,[ESP + 0x4]                 ; 0045cce8
    LEA EDI,[ESP + 0x1c]                ; 0045ccec
    CALL dword ptr [EDX + 0x24]         ; 0045ccf0
    MOV ECX,0x6                         ; 0045ccf3
    LEA ESI,[ESP + 0x4]                 ; 0045ccf8
    ADD ESP,0x4                         ; 0045ccfc
    MOVSD.REP ES:EDI,ESI                ; 0045ccff
    LEA EDX,[EBX + 0x2570c]             ; 0045cd01
    LEA EDI,[ESP + 0x18]                ; 0045cd07
    MOV ESI,EDX                         ; 0045cd0b
    CMP EDX,EDI                         ; 0045cd0d
    JNZ 0x0045cea4                      ; 0045cd0f
        ;   XREF to: 0045cea4 (CONDITIONAL_JUMP)  ; LAB_0045cea4
    LEA EAX,[EDI + 0xc]                 ; 0045cd15
        ;   Label: LAB_0045cd15
    LEA EDX,[ESI + 0xc]                 ; 0045cd18
    CMP EDX,EAX                         ; 0045cd1b
    JZ 0x0045cd2f                       ; 0045cd1d
        ;   XREF to: 0045cd2f (CONDITIONAL_JUMP)  ; LAB_0045cd2f
    MOV ECX,dword ptr [EAX]             ; 0045cd1f
    MOV dword ptr [EDX],ECX             ; 0045cd21
    MOV ECX,dword ptr [EAX + 0x4]       ; 0045cd23
    MOV dword ptr [EDX + 0x4],ECX       ; 0045cd26
    MOV ECX,dword ptr [EAX + 0x8]       ; 0045cd29
    MOV dword ptr [EDX + 0x8],ECX       ; 0045cd2c
    LEA EDX,[EBX + 0x2570c]             ; 0045cd2f
        ;   Label: LAB_0045cd2f
    LEA EDI,[ESP + 0x90]                ; 0045cd35
    LEA ESI,[ESP + 0xc0]                ; 0045cd3c
    FLD float ptr [EDX]                 ; 0045cd43
    FLD float ptr [EDX + 0x4]           ; 0045cd45
    LEA EAX,[EBX + 0x25718]             ; 0045cd48
    FLD float ptr [EDX + 0x8]           ; 0045cd4e
    FXCH ST2                            ; 0045cd51
    FADD float ptr [EAX]                ; 0045cd53
    FXCH                                ; 0045cd55
    FADD float ptr [EAX + 0x4]          ; 0045cd57
    FXCH ST2                            ; 0045cd5a
    FADD float ptr [EAX + 0x8]          ; 0045cd5c
    FXCH                                ; 0045cd5f
    FSTP float ptr [ESP + 0xc0]         ; 0045cd61
    FXCH                                ; 0045cd68
    FSTP float ptr [ESP + 0xc4]         ; 0045cd6a
    FSTP float ptr [ESP + 0xc8]         ; 0045cd71
    MOVSD ES:EDI,ESI                    ; 0045cd78
    MOVSD ES:EDI,ESI                    ; 0045cd79
    MOVSD ES:EDI,ESI                    ; 0045cd7a
    FLD float ptr [0x005d07b7]          ; 0045cd7b | DAT_005d07b7
    FLD float ptr [ESP + 0x90]          ; 0045cd81
    FMUL ST1                            ; 0045cd88
    FLD float ptr [ESP + 0x94]          ; 0045cd8a
    FMUL ST2                            ; 0045cd91
    FLD float ptr [ESP + 0x98]          ; 0045cd93
    FMULP ST3                           ; 0045cd9a
    LEA EAX,[ESP + 0x9c]                ; 0045cd9c
    LEA EDI,[ESP + 0x9c]                ; 0045cda3
    LEA ESI,[ESP + 0x84]                ; 0045cdaa
    FXCH                                ; 0045cdb1
    FSTP float ptr [ESP + 0x84]         ; 0045cdb3
    FSTP float ptr [ESP + 0x88]         ; 0045cdba
    FSTP float ptr [ESP + 0x8c]         ; 0045cdc1
    MOVSD ES:EDI,ESI                    ; 0045cdc8
    MOVSD ES:EDI,ESI                    ; 0045cdc9
    MOVSD ES:EDI,ESI                    ; 0045cdca
    PUSH EAX                            ; 0045cdcb
    MOV EDX,dword ptr [EBX + 0x25608]   ; 0045cdcc
    PUSH EDX                            ; 0045cdd2
    LEA ESI,[ESP + 0x38]                ; 0045cdd3
    LEA EDI,[ESP + 0xbc]                ; 0045cdd7
    CALL core_actor.cpp_FUN_00408d70    ; 0045cdde
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0045cde3
    LEA EAX,[ESP + 0xb4]                ; 0045cde6
    LEA ESI,[ESP + 0x30]                ; 0045cded
    PUSH EAX                            ; 0045cdf1
    MOVSD ES:EDI,ESI                    ; 0045cdf2
    MOVSD ES:EDI,ESI                    ; 0045cdf3
    MOVSD ES:EDI,ESI                    ; 0045cdf4
    PUSH EBX                            ; 0045cdf5
    LEA ESI,[ESP + 0x5c]                ; 0045cdf6
    LEA EDI,[ESP + 0x80]                ; 0045cdfa
    CALL core_actor.cpp_FUN_00408de0    ; 0045ce01
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x5c]                ; 0045ce06
    LEA EAX,[ESP + 0x80]                ; 0045ce0a
    ADD ESP,0x8                         ; 0045ce11
    LEA EDX,[EBX + 0x25700]             ; 0045ce14
    MOVSD ES:EDI,ESI                    ; 0045ce1a
    MOVSD ES:EDI,ESI                    ; 0045ce1b
    MOVSD ES:EDI,ESI                    ; 0045ce1c
    CMP EDX,EAX                         ; 0045ce1d
    JZ 0x0045ce38                       ; 0045ce1f
        ;   XREF to: 0045ce38 (CONDITIONAL_JUMP)  ; LAB_0045ce38
    MOV EAX,dword ptr [ESP + 0x78]      ; 0045ce21
    MOV dword ptr [EDX],EAX             ; 0045ce25
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045ce27
    MOV dword ptr [EDX + 0x4],EAX       ; 0045ce2b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0045ce2e
    MOV dword ptr [EDX + 0x8],EAX       ; 0045ce35
    LEA EAX,[EBP + -0x1]                ; 0045ce38
        ;   Label: LAB_0045ce38
    CMP EAX,0x3                         ; 0045ce3b
    JA 0x0045d068                       ; 0045ce3e
        ;   XREF to: 0045d068 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x45c9e4]  ; 0045ce44 | caseD_1 | caseD_4 | switchdataD_0045c9e4
        ;   Label: switchD
    PUSH 0x1                            ; 0045ce4b
        ;   Label: caseD_1
    PUSH 0x1b                           ; 0045ce4d
    LEA EAX,[EBX + 0x2b4]               ; 0045ce4f
    PUSH EAX                            ; 0045ce55
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045ce56
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045ce5b
    MOV ECX,dword ptr [EBX + 0x25608]   ; 0045ce5e
    PUSH ECX                            ; 0045ce64
    PUSH 0x5d07a6                       ; 0045ce65 | = "Rummaging %s\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 0045ce6a | g_CConsolePtr
    PUSH ESI                            ; 0045ce70 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0045ce71
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
        ;   Label: LAB_0045ce71
    ADD ESP,0xc                         ; 0045ce76
    CMP dword ptr [EBX + 0x25608],0x0   ; 0045ce79
    JZ 0x0045ca53                       ; 0045ce80
        ;   XREF to: 0045ca53 (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0x256a4],0x4   ; 0045ce86
    PUSH EBX                            ; 0045ce90
    CALL core_hero.cpp_FUN_004cf200     ; 0045ce91
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045ce96
    ADD ESP,0xd8                        ; 0045ce99
    POP EBP                             ; 0045ce9f
    POP EDI                             ; 0045cea0
    POP ESI                             ; 0045cea1
    POP EBX                             ; 0045cea2
    RET                                 ; 0045cea3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045cea4
        ;   Label: LAB_0045cea4
    MOV dword ptr [EDX],EAX             ; 0045cea8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045ceaa
    MOV dword ptr [EDX + 0x4],EAX       ; 0045ceae
    MOV EAX,dword ptr [ESP + 0x20]      ; 0045ceb1
    MOV dword ptr [EDX + 0x8],EAX       ; 0045ceb5
    JMP 0x0045cd15                      ; 0045ceb8
        ;   XREF to: 0045cd15 (UNCONDITIONAL_JUMP)  ; LAB_0045cd15
    MOV EAX,dword ptr [EBX + 0x25608]   ; 0045cebd
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 0045cec3
    JNZ 0x0045cf32                      ; 0045cec5
        ;   XREF to: 0045cf32 (CONDITIONAL_JUMP)  ; LAB_0045cf32
    FLD float ptr [EBX + 0x25704]       ; 0045cec7
        ;   Label: LAB_0045cec7
    LEA EDI,[EBX + 0x2b4]               ; 0045cecd
    FCOMP double ptr [0x005d07c7]       ; 0045ced3 | DAT_005d07c7
    FNSTSW AX                           ; 0045ced9
    SAHF                                ; 0045cedb
    JBE 0x0045d043                      ; 0045cedc
        ;   XREF to: 0045d043 (CONDITIONAL_JUMP)  ; LAB_0045d043
    MOV ESI,dword ptr [0x01b4d290]      ; 0045cee2 | DAT_01b4d290
    PUSH ESI                            ; 0045cee8
    PUSH EDI                            ; 0045cee9
    LEA ESI,[ESP + 0x44]                ; 0045ceea
    CALL core_skeleton.cpp_FUN_005469a0 ; 0045ceee
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0045cef3
    MOV EBP,dword ptr [0x01b4d268]      ; 0045cef6 | DAT_01b4d268
    PUSH EBP                            ; 0045cefc
    PUSH EDI                            ; 0045cefd
    LEA ESI,[ESP + 0xb0]                ; 0045cefe
    CALL core_skeleton.cpp_FUN_005469a0 ; 0045cf05
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0045cf0a
    PUSH 0x1                            ; 0045cf0d
    PUSH 0x15                           ; 0045cf0f
    PUSH EDI                            ; 0045cf11
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045cf12
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045cf17
    MOV EAX,dword ptr [EBX + 0x25608]   ; 0045cf1a
    PUSH EAX                            ; 0045cf20
    PUSH 0x5d0771                       ; 0045cf21 | = "Picking up %s waist level\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0045cf26 | g_CConsolePtr
    PUSH EDX                            ; 0045cf2c | g_CConsoleInstance
    JMP 0x0045ce71                      ; 0045cf2d
        ;   XREF to: 0045ce71 (UNCONDITIONAL_JUMP)  ; LAB_0045ce71
    PUSH EBX                            ; 0045cf32
        ;   Label: LAB_0045cf32
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045cf33
    PUSH EAX                            ; 0045cf39
    CALL dword ptr [EDX + 0x8c]         ; 0045cf3a
    ADD ESP,0x8                         ; 0045cf40
    CMP EAX,0x4                         ; 0045cf43
    SETZ AL                             ; 0045cf46
    AND EAX,0xff                        ; 0045cf49
    JZ 0x0045cec7                       ; 0045cf4e
        ;   XREF to: 0045cec7 (CONDITIONAL_JUMP)  ; LAB_0045cec7
    LEA EAX,[EBX + 0x20]                ; 0045cf54
    PUSH EAX                            ; 0045cf57
    MOV ECX,dword ptr [EBX + 0x25608]   ; 0045cf58
    PUSH ECX                            ; 0045cf5e
    LEA ESI,[ESP + 0x74]                ; 0045cf5f
    LEA EDI,[ESP + 0x50]                ; 0045cf63
    CALL core_actor.cpp_FUN_00408de0    ; 0045cf67
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x74]                ; 0045cf6c
    ADD ESP,0x8                         ; 0045cf70
    MOVSD ES:EDI,ESI                    ; 0045cf73
    MOVSD ES:EDI,ESI                    ; 0045cf74
    MOVSD ES:EDI,ESI                    ; 0045cf75
    FLD float ptr [ESP + 0x50]          ; 0045cf76
    FLDZ                                ; 0045cf7a
    FCOMPP                              ; 0045cf7c
    FNSTSW AX                           ; 0045cf7e
    SAHF                                ; 0045cf80
    JNC 0x0045d017                      ; 0045cf81
        ;   XREF to: 0045d017 (CONDITIONAL_JUMP)  ; LAB_0045d017
    MOV EAX,0x1                         ; 0045cf87
    FLD float ptr [EBX + 0x25704]       ; 0045cf8c
        ;   Label: LAB_0045cf8c
    LEA EDX,[EBX + 0x2b4]               ; 0045cf92
    MOV dword ptr [EBX + 0x256f0],EAX   ; 0045cf98
    FCOMP double ptr [0x005d07bf]       ; 0045cf9e | DAT_005d07bf
    FNSTSW AX                           ; 0045cfa4
    SAHF                                ; 0045cfa6
    JBE 0x0045d01e                      ; 0045cfa7
        ;   XREF to: 0045d01e (CONDITIONAL_JUMP)  ; LAB_0045d01e
    PUSH 0x1                            ; 0045cfa9
    PUSH 0x18                           ; 0045cfab
    PUSH EDX                            ; 0045cfad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045cfae
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0x25608]   ; 0045cfb3
    ADD ESP,0xc                         ; 0045cfb9
    ADD EAX,0x20                        ; 0045cfbc
    PUSH EAX                            ; 0045cfbf
    PUSH EBX                            ; 0045cfc0
    LEA ESI,[ESP + 0xd4]                ; 0045cfc1
    LEA EDI,[ESP + 0x68]                ; 0045cfc8
    CALL core_actor.cpp_FUN_00408de0    ; 0045cfcc
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xd4]                ; 0045cfd1
    LEA EAX,[ESP + 0x68]                ; 0045cfd8
    ADD ESP,0x8                         ; 0045cfdc
    LEA EDX,[EBX + 0x25700]             ; 0045cfdf
    MOVSD ES:EDI,ESI                    ; 0045cfe5
    MOVSD ES:EDI,ESI                    ; 0045cfe6
    MOVSD ES:EDI,ESI                    ; 0045cfe7
    CMP EDX,EAX                         ; 0045cfe8
    JZ 0x0045d000                       ; 0045cfea
        ;   XREF to: 0045d000 (CONDITIONAL_JUMP)  ; LAB_0045d000
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045cfec
    MOV dword ptr [EDX],EAX             ; 0045cff0
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045cff2
    MOV dword ptr [EDX + 0x4],EAX       ; 0045cff6
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045cff9
    MOV dword ptr [EDX + 0x8],EAX       ; 0045cffd
    MOV EBP,dword ptr [EBX + 0x25608]   ; 0045d000
        ;   Label: LAB_0045d000
    PUSH EBP                            ; 0045d006
    PUSH 0x5d073b                       ; 0045d007 | = "Picking up heavy %s shelf\n"
    MOV EAX,[0x00609ed0]                ; 0045d00c | g_CConsolePtr
    PUSH EAX                            ; 0045d011 | g_CConsoleInstance
    JMP 0x0045ce71                      ; 0045d012
        ;   XREF to: 0045ce71 (UNCONDITIONAL_JUMP)  ; LAB_0045ce71
    XOR EAX,EAX                         ; 0045d017
        ;   Label: LAB_0045d017
    JMP 0x0045cf8c                      ; 0045d019
        ;   XREF to: 0045cf8c (UNCONDITIONAL_JUMP)  ; LAB_0045cf8c
    PUSH 0x1                            ; 0045d01e
        ;   Label: LAB_0045d01e
    PUSH 0x17                           ; 0045d020
    PUSH EDX                            ; 0045d022
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045d023
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045d028
    MOV ESI,dword ptr [EBX + 0x25608]   ; 0045d02b
    PUSH ESI                            ; 0045d031
    PUSH 0x5d0756                       ; 0045d032 | = "Picking up heavy %s crate\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0045d037 | g_CConsolePtr
    PUSH EDI                            ; 0045d03d | g_CConsoleInstance
    JMP 0x0045ce71                      ; 0045d03e
        ;   XREF to: 0045ce71 (UNCONDITIONAL_JUMP)  ; LAB_0045ce71
    PUSH 0x1                            ; 0045d043
        ;   Label: LAB_0045d043
    PUSH 0x13                           ; 0045d045
    PUSH EDI                            ; 0045d047
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045d048
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045d04d
    MOV EDX,dword ptr [EBX + 0x25608]   ; 0045d050
    PUSH EDX                            ; 0045d056
    PUSH 0x5d078c                       ; 0045d057 | = "Picking up %s off ground\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0045d05c | g_CConsolePtr
    PUSH ECX                            ; 0045d062 | g_CConsoleInstance
    JMP 0x0045ce71                      ; 0045d063
        ;   XREF to: 0045ce71 (UNCONDITIONAL_JUMP)  ; LAB_0045ce71
    MOV dword ptr [EBX + 0x25608],0x0   ; 0045d068
        ;   Label: default
    PUSH EBX                            ; 0045d072
    CALL core_hero.cpp_FUN_004cf200     ; 0045d073
        ;   XREF to: 004cf200 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf200()
    ADD ESP,0x4                         ; 0045d078
    ADD ESP,0xd8                        ; 0045d07b
    POP EBP                             ; 0045d081
    POP EDI                             ; 0045d082
    POP ESI                             ; 0045d083
    POP EBX                             ; 0045d084
    RET                                 ; 0045d085

