; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_prye_cpp_FUN_00525a20(CHero *param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005259b8 = 00525b60
;   undefined1* switchdataD_005259d0 = 00525e3b
;   undefined1* switchdataD_005259e0 = 00525a43
;   undefined4 s_CPrye_doHeroAction_pull_005cd7f6+1
;   TerminatedCString s_CPrye_doHeroAction_type_005cd819
;   TerminatedCString s_lever_s_005cd86d
;   TerminatedCString s_CHero_doHeroAction_type_005cd87b
;   TerminatedCString s_Picking_up_heavy_s_shelf_005cd8cd
;   TerminatedCString s_Picking_up_heavy_s_crate_005cd8e8
;   TerminatedCString s_Picking_up_s_waist_level_005cd903
;   TerminatedCString s_Picking_up_s_off_ground_005cd91e
;   TerminatedCString s_Rummaging_s_005cd938
;   undefined4 DAT_005cd947
;   undefined4 DAT_005cd94f
;   undefined4 DAT_005cd957
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0
;   core_hero.cpp_FUN_004d3210
;   core_hero.cpp_FUN_004d3250
;   core_hero.cpp_FUN_004d4520
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_skeleton.cpp_FUN_0054dbd0
;   engine_console.cpp_FUN_00441ff0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525a20
        ;   Label: unkafter_prye.cpp_FUN_00525a20
    PUSH ESI                            ; 00525a21
    PUSH EDI                            ; 00525a22
    PUSH EBP                            ; 00525a23
    SUB ESP,0xd8                        ; 00525a24
    MOV EBX,dword ptr [ESP + 0xec]      ; 00525a2a
    MOV EAX,dword ptr [EBX + 0x20b68]   ; 00525a31
    CMP EAX,0xc                         ; 00525a37
    JA 0x00525a43                       ; 00525a3a
        ;   XREF to: 00525a43 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x5259e0]  ; 00525a3c | caseD_c | caseD_a | caseD_3
        ;   Label: switchD
    PUSH EBX                            ; 00525a43
        ;   Label: caseD_0
    CALL core_hero.cpp_FUN_004d3210     ; 00525a44
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525a49
    ADD ESP,0xd8                        ; 00525a4c
    POP EBP                             ; 00525a52
    POP EDI                             ; 00525a53
    POP ESI                             ; 00525a54
    POP EBX                             ; 00525a55
    RET                                 ; 00525a56
    PUSH 0x5cd7f7                       ; 00525a57 | s_CPrye_doHeroAction_pull_005cd7f6+1
        ;   Label: caseD_8
    MOV EDX,dword ptr [0x005f1690]      ; 00525a5c | g_CConsolePtr
    PUSH EDX                            ; 00525a62 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00525a63
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 00525a68
    MOV ECX,dword ptr [0x01d70c34]      ; 00525a6b | g_CLeverClassInfo.name_hash
    PUSH ECX                            ; 00525a71
    MOV ESI,dword ptr [EBX + 0x20b6c]   ; 00525a72
    PUSH ESI                            ; 00525a78
    MOV dword ptr [EBX + 0xcde0],0x0    ; 00525a79
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525a83
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 00525a88
    ADD ESP,0x8                         ; 00525a8a
    TEST EAX,EAX                        ; 00525a8d
    JZ 0x00525ae6                       ; 00525a8f
        ;   XREF to: 00525ae6 (CONDITIONAL_JUMP)  ; LAB_00525ae6
    PUSH EAX                            ; 00525a91
    PUSH 0x5cd86d                       ; 00525a92 | = "  lever = %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00525a97 | g_CConsolePtr
    PUSH EDI                            ; 00525a9d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00525a9e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00525aa3
    LEA EAX,[ESI + 0x420]               ; 00525aa6
    PUSH EAX                            ; 00525aac
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0 ; 00525aad
        ;   XREF to: 00495db0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 00525ab2
    TEST EAX,EAX                        ; 00525ab5
    JNZ 0x00525a43                      ; 00525ab7
        ;   XREF to: 00525a43 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00525ab9
    PUSH 0x2c                           ; 00525abb
    LEA EAX,[EBX + 0x158]               ; 00525abd
    PUSH EAX                            ; 00525ac3
    MOV dword ptr [EBX + 0x20ba0],ESI   ; 00525ac4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525aca
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525acf
    PUSH EBX                            ; 00525ad2
    CALL core_hero.cpp_FUN_004d3210     ; 00525ad3
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525ad8
    ADD ESP,0xd8                        ; 00525adb
    POP EBP                             ; 00525ae1
    POP EDI                             ; 00525ae2
    POP ESI                             ; 00525ae3
    POP EBX                             ; 00525ae4
    RET                                 ; 00525ae5
    PUSH 0x5cd819                       ; 00525ae6 | = "CPrye::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_00525ae6
    MOV EBP,dword ptr [0x005fb140]      ; 00525aeb | g_CEditorToolsPtr
    PUSH EBP                            ; 00525af1
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 00525af2
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00525af7
    PUSH EBX                            ; 00525afa
    CALL core_hero.cpp_FUN_004d3210     ; 00525afb
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525b00
    ADD ESP,0xd8                        ; 00525b03
    POP EBP                             ; 00525b09
    POP EDI                             ; 00525b0a
    POP ESI                             ; 00525b0b
    POP EBX                             ; 00525b0c
    RET                                 ; 00525b0d
    MOV EBP,dword ptr [0x01b85178]      ; 00525b0e | g_CDoorClassInfo.name_hash
        ;   Label: caseD_3
    PUSH EBP                            ; 00525b14
    MOV EAX,dword ptr [EBX + 0x20b6c]   ; 00525b15
    PUSH EAX                            ; 00525b1b
    MOV dword ptr [EBX + 0xcde0],0x0    ; 00525b1c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525b26
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00525b2b
    MOV dword ptr [EBX + 0x20b94],EAX   ; 00525b2e
    TEST EAX,EAX                        ; 00525b34
    JZ 0x00525b7e                       ; 00525b36
        ;   XREF to: 00525b7e (CONDITIONAL_JUMP)  ; LAB_00525b7e
    ADD EAX,0x478                       ; 00525b38
    PUSH EAX                            ; 00525b3d
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0 ; 00525b3e
        ;   XREF to: 00495db0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 00525b43
    TEST EAX,EAX                        ; 00525b46
    JNZ 0x00525b60                      ; 00525b48
        ;   XREF to: 00525b60 (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBX + 0x20b74]   ; 00525b4a
    CMP EAX,0x5                         ; 00525b50
    JA 0x00525c6a                       ; 00525b53
        ;   XREF to: 00525c6a (CONDITIONAL_JUMP)  ; caseD_1
    JMP dword ptr [EAX*0x4 + 0x5259b8]  ; 00525b59 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [EBX + 0x20b94],0x0   ; 00525b60
        ;   Label: caseD_0
    PUSH EBX                            ; 00525b6a
    CALL core_hero.cpp_FUN_004d3210     ; 00525b6b
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525b70
    ADD ESP,0xd8                        ; 00525b73
    POP EBP                             ; 00525b79
    POP EDI                             ; 00525b7a
    POP ESI                             ; 00525b7b
    POP EBX                             ; 00525b7c
    RET                                 ; 00525b7d
    PUSH 0x5cd87b                       ; 00525b7e | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_00525b7e
    MOV ECX,dword ptr [0x005fb140]      ; 00525b83 | g_CEditorToolsPtr
    PUSH ECX                            ; 00525b89
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 00525b8a
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00525b8f
    PUSH EBX                            ; 00525b92
    CALL core_hero.cpp_FUN_004d3210     ; 00525b93
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525b98
    ADD ESP,0xd8                        ; 00525b9b
    POP EBP                             ; 00525ba1
    POP EDI                             ; 00525ba2
    POP ESI                             ; 00525ba3
    POP EBX                             ; 00525ba4
    RET                                 ; 00525ba5
    PUSH 0x1                            ; 00525ba6
        ;   Label: caseD_3
    PUSH 0x2b                           ; 00525ba8
    LEA EAX,[EBX + 0x158]               ; 00525baa
    PUSH EAX                            ; 00525bb0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525bb1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525bb6
    MOV dword ptr [EBX + 0x20b64],0x5   ; 00525bb9
    PUSH EBX                            ; 00525bc3
    CALL core_hero.cpp_FUN_004d3210     ; 00525bc4
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525bc9
    ADD ESP,0xd8                        ; 00525bcc
    POP EBP                             ; 00525bd2
    POP EDI                             ; 00525bd3
    POP ESI                             ; 00525bd4
    POP EBX                             ; 00525bd5
    RET                                 ; 00525bd6
    PUSH 0x1                            ; 00525bd7
        ;   Label: caseD_2
    PUSH 0x2a                           ; 00525bd9
    LEA EAX,[EBX + 0x158]               ; 00525bdb
    PUSH EAX                            ; 00525be1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525be2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525be7
    MOV dword ptr [EBX + 0x20b64],0x5   ; 00525bea
    PUSH EBX                            ; 00525bf4
    CALL core_hero.cpp_FUN_004d3210     ; 00525bf5
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525bfa
    ADD ESP,0xd8                        ; 00525bfd
    POP EBP                             ; 00525c03
    POP EDI                             ; 00525c04
    POP ESI                             ; 00525c05
    POP EBX                             ; 00525c06
    RET                                 ; 00525c07
    PUSH 0x1                            ; 00525c08
        ;   Label: caseD_4
    PUSH 0x28                           ; 00525c0a
    LEA EAX,[EBX + 0x158]               ; 00525c0c
    PUSH EAX                            ; 00525c12
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525c13
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525c18
    MOV dword ptr [EBX + 0x20b64],0x5   ; 00525c1b
    PUSH EBX                            ; 00525c25
    CALL core_hero.cpp_FUN_004d3210     ; 00525c26
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525c2b
    ADD ESP,0xd8                        ; 00525c2e
    POP EBP                             ; 00525c34
    POP EDI                             ; 00525c35
    POP ESI                             ; 00525c36
    POP EBX                             ; 00525c37
    RET                                 ; 00525c38
    PUSH 0x1                            ; 00525c39
        ;   Label: caseD_5
    PUSH 0x29                           ; 00525c3b
    LEA EAX,[EBX + 0x158]               ; 00525c3d
    PUSH EAX                            ; 00525c43
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525c44
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525c49
    MOV dword ptr [EBX + 0x20b64],0x5   ; 00525c4c
    PUSH EBX                            ; 00525c56
    CALL core_hero.cpp_FUN_004d3210     ; 00525c57
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525c5c
    ADD ESP,0xd8                        ; 00525c5f
    POP EBP                             ; 00525c65
    POP EDI                             ; 00525c66
    POP ESI                             ; 00525c67
    POP EBX                             ; 00525c68
    RET                                 ; 00525c69
    PUSH EBX                            ; 00525c6a
        ;   Label: caseD_1
    CALL core_hero.cpp_FUN_004d3250     ; 00525c6b
        ;   XREF to: 004d3250 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004d3250(CHero * this_ptr)
    ADD ESP,0x4                         ; 00525c70
    PUSH EBX                            ; 00525c73
    CALL core_hero.cpp_FUN_004d3210     ; 00525c74
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525c79
    ADD ESP,0xd8                        ; 00525c7c
    POP EBP                             ; 00525c82
    POP EDI                             ; 00525c83
    POP ESI                             ; 00525c84
    POP EBX                             ; 00525c85
    RET                                 ; 00525c86
    PUSH EBX                            ; 00525c87
        ;   Label: caseD_1
    CALL core_hero.cpp_FUN_004d4520     ; 00525c88
        ;   XREF to: 004d4520 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d4520()
    ADD ESP,0x4                         ; 00525c8d
    PUSH EBX                            ; 00525c90
    CALL core_hero.cpp_FUN_004d3210     ; 00525c91
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525c96
    ADD ESP,0xd8                        ; 00525c99
    POP EBP                             ; 00525c9f
    POP EDI                             ; 00525ca0
    POP ESI                             ; 00525ca1
    POP EBX                             ; 00525ca2
    RET                                 ; 00525ca3
    MOV EAX,dword ptr [EBX + 0x20b6c]   ; 00525ca4
        ;   Label: caseD_4
    MOV dword ptr [EBX + 0x20b98],EAX   ; 00525caa
    TEST EAX,EAX                        ; 00525cb0
    JZ 0x00525a43                       ; 00525cb2
        ;   XREF to: 00525a43 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH EBX                            ; 00525cb8
    MOV EDX,dword ptr [EAX + 0x154]     ; 00525cb9
    PUSH EAX                            ; 00525cbf
    CALL dword ptr [EDX + 0x84]         ; 00525cc0
    ADD ESP,0x8                         ; 00525cc6
    MOV EBP,EAX                         ; 00525cc9
    MOV EAX,dword ptr [EBX + 0x20b98]   ; 00525ccb
    PUSH EAX                            ; 00525cd1
    MOV EDX,dword ptr [EAX + 0x154]     ; 00525cd2
    LEA ESI,[ESP + 0x4]                 ; 00525cd8
    LEA EDI,[ESP + 0x1c]                ; 00525cdc
    CALL dword ptr [EDX + 0x1c]         ; 00525ce0
    MOV ECX,0x6                         ; 00525ce3
    LEA ESI,[ESP + 0x4]                 ; 00525ce8
    ADD ESP,0x4                         ; 00525cec
    MOVSD.REP ES:EDI,ESI                ; 00525cef
    LEA EDX,[EBX + 0x20c98]             ; 00525cf1
    LEA EDI,[ESP + 0x18]                ; 00525cf7
    MOV ESI,EDX                         ; 00525cfb
    CMP EDX,EDI                         ; 00525cfd
    JNZ 0x00525e94                      ; 00525cff
        ;   XREF to: 00525e94 (CONDITIONAL_JUMP)  ; LAB_00525e94
    LEA EAX,[EDI + 0xc]                 ; 00525d05
        ;   Label: LAB_00525d05
    LEA EDX,[ESI + 0xc]                 ; 00525d08
    CMP EDX,EAX                         ; 00525d0b
    JZ 0x00525d1f                       ; 00525d0d
        ;   XREF to: 00525d1f (CONDITIONAL_JUMP)  ; LAB_00525d1f
    MOV ECX,dword ptr [EAX]             ; 00525d0f
    MOV dword ptr [EDX],ECX             ; 00525d11
    MOV ECX,dword ptr [EAX + 0x4]       ; 00525d13
    MOV dword ptr [EDX + 0x4],ECX       ; 00525d16
    MOV ECX,dword ptr [EAX + 0x8]       ; 00525d19
    MOV dword ptr [EDX + 0x8],ECX       ; 00525d1c
    LEA EDX,[EBX + 0x20c98]             ; 00525d1f
        ;   Label: LAB_00525d1f
    LEA EDI,[ESP + 0x90]                ; 00525d25
    LEA ESI,[ESP + 0xc0]                ; 00525d2c
    FLD float ptr [EDX]                 ; 00525d33
    FLD float ptr [EDX + 0x4]           ; 00525d35
    LEA EAX,[EBX + 0x20ca4]             ; 00525d38
    FLD float ptr [EDX + 0x8]           ; 00525d3e
    FXCH ST2                            ; 00525d41
    FADD float ptr [EAX]                ; 00525d43
    FXCH                                ; 00525d45
    FADD float ptr [EAX + 0x4]          ; 00525d47
    FXCH ST2                            ; 00525d4a
    FADD float ptr [EAX + 0x8]          ; 00525d4c
    FXCH                                ; 00525d4f
    FSTP float ptr [ESP + 0xc0]         ; 00525d51
    FXCH                                ; 00525d58
    FSTP float ptr [ESP + 0xc4]         ; 00525d5a
    FSTP float ptr [ESP + 0xc8]         ; 00525d61
    MOVSD ES:EDI,ESI                    ; 00525d68
    MOVSD ES:EDI,ESI                    ; 00525d69
    MOVSD ES:EDI,ESI                    ; 00525d6a
    FLD float ptr [0x005cd947]          ; 00525d6b | DAT_005cd947
    FLD float ptr [ESP + 0x90]          ; 00525d71
    FMUL ST1                            ; 00525d78
    FLD float ptr [ESP + 0x94]          ; 00525d7a
    FMUL ST2                            ; 00525d81
    FLD float ptr [ESP + 0x98]          ; 00525d83
    FMULP ST3                           ; 00525d8a
    LEA EAX,[ESP + 0x9c]                ; 00525d8c
    LEA EDI,[ESP + 0x9c]                ; 00525d93
    LEA ESI,[ESP + 0x84]                ; 00525d9a
    FXCH                                ; 00525da1
    FSTP float ptr [ESP + 0x84]         ; 00525da3
    FSTP float ptr [ESP + 0x88]         ; 00525daa
    FSTP float ptr [ESP + 0x8c]         ; 00525db1
    MOVSD ES:EDI,ESI                    ; 00525db8
    MOVSD ES:EDI,ESI                    ; 00525db9
    MOVSD ES:EDI,ESI                    ; 00525dba
    PUSH EAX                            ; 00525dbb
    MOV EDX,dword ptr [EBX + 0x20b98]   ; 00525dbc
    PUSH EDX                            ; 00525dc2
    LEA ESI,[ESP + 0x38]                ; 00525dc3
    LEA EDI,[ESP + 0xbc]                ; 00525dc7
    CALL core_actor.cpp_FUN_00408b80    ; 00525dce
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00525dd3
    LEA EAX,[ESP + 0xb4]                ; 00525dd6
    LEA ESI,[ESP + 0x30]                ; 00525ddd
    PUSH EAX                            ; 00525de1
    MOVSD ES:EDI,ESI                    ; 00525de2
    MOVSD ES:EDI,ESI                    ; 00525de3
    MOVSD ES:EDI,ESI                    ; 00525de4
    PUSH EBX                            ; 00525de5
    LEA ESI,[ESP + 0x5c]                ; 00525de6
    LEA EDI,[ESP + 0x80]                ; 00525dea
    CALL core_actor.cpp_FUN_00408bf0    ; 00525df1
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x5c]                ; 00525df6
    LEA EAX,[ESP + 0x80]                ; 00525dfa
    ADD ESP,0x8                         ; 00525e01
    LEA EDX,[EBX + 0x20c8c]             ; 00525e04
    MOVSD ES:EDI,ESI                    ; 00525e0a
    MOVSD ES:EDI,ESI                    ; 00525e0b
    MOVSD ES:EDI,ESI                    ; 00525e0c
    CMP EDX,EAX                         ; 00525e0d
    JZ 0x00525e28                       ; 00525e0f
        ;   XREF to: 00525e28 (CONDITIONAL_JUMP)  ; LAB_00525e28
    MOV EAX,dword ptr [ESP + 0x78]      ; 00525e11
    MOV dword ptr [EDX],EAX             ; 00525e15
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00525e17
    MOV dword ptr [EDX + 0x4],EAX       ; 00525e1b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00525e1e
    MOV dword ptr [EDX + 0x8],EAX       ; 00525e25
    LEA EAX,[EBP + -0x1]                ; 00525e28
        ;   Label: LAB_00525e28
    CMP EAX,0x3                         ; 00525e2b
    JA 0x00526058                       ; 00525e2e
        ;   XREF to: 00526058 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5259d0]  ; 00525e34 | caseD_1 | caseD_4 | switchdataD_005259d0
        ;   Label: switchD
    PUSH 0x1                            ; 00525e3b
        ;   Label: caseD_1
    PUSH 0x26                           ; 00525e3d
    LEA EAX,[EBX + 0x158]               ; 00525e3f
    PUSH EAX                            ; 00525e45
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525e46
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525e4b
    MOV ECX,dword ptr [EBX + 0x20b98]   ; 00525e4e
    PUSH ECX                            ; 00525e54
    PUSH 0x5cd938                       ; 00525e55 | = "Rummaging %s\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00525e5a | g_CConsolePtr
    PUSH ESI                            ; 00525e60 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00525e61
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
        ;   Label: LAB_00525e61
    ADD ESP,0xc                         ; 00525e66
    CMP dword ptr [EBX + 0x20b98],0x0   ; 00525e69
    JZ 0x00525a43                       ; 00525e70
        ;   XREF to: 00525a43 (CONDITIONAL_JUMP)  ; caseD_c
    MOV dword ptr [EBX + 0x20b64],0x4   ; 00525e76
    PUSH EBX                            ; 00525e80
    CALL core_hero.cpp_FUN_004d3210     ; 00525e81
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00525e86
    ADD ESP,0xd8                        ; 00525e89
    POP EBP                             ; 00525e8f
    POP EDI                             ; 00525e90
    POP ESI                             ; 00525e91
    POP EBX                             ; 00525e92
    RET                                 ; 00525e93
    MOV EAX,dword ptr [ESP + 0x18]      ; 00525e94
        ;   Label: LAB_00525e94
    MOV dword ptr [EDX],EAX             ; 00525e98
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00525e9a
    MOV dword ptr [EDX + 0x4],EAX       ; 00525e9e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00525ea1
    MOV dword ptr [EDX + 0x8],EAX       ; 00525ea5
    JMP 0x00525d05                      ; 00525ea8
        ;   XREF to: 00525d05 (UNCONDITIONAL_JUMP)  ; LAB_00525d05
    MOV EAX,dword ptr [EBX + 0x20b98]   ; 00525ead
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 00525eb3
    JNZ 0x00525f22                      ; 00525eb5
        ;   XREF to: 00525f22 (CONDITIONAL_JUMP)  ; LAB_00525f22
    FLD float ptr [EBX + 0x20c90]       ; 00525eb7
        ;   Label: LAB_00525eb7
    LEA EDI,[EBX + 0x158]               ; 00525ebd
    FCOMP double ptr [0x005cd957]       ; 00525ec3 | DAT_005cd957
    FNSTSW AX                           ; 00525ec9
    SAHF                                ; 00525ecb
    JBE 0x00526033                      ; 00525ecc
        ;   XREF to: 00526033 (CONDITIONAL_JUMP)  ; LAB_00526033
    MOV ESI,dword ptr [0x01ed3714]      ; 00525ed2 | DAT_01ed3714
    PUSH ESI                            ; 00525ed8
    PUSH EDI                            ; 00525ed9
    LEA ESI,[ESP + 0x44]                ; 00525eda
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00525ede
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00525ee3
    MOV EBP,dword ptr [0x01ed36ec]      ; 00525ee6 | DAT_01ed36ec
    PUSH EBP                            ; 00525eec
    PUSH EDI                            ; 00525eed
    LEA ESI,[ESP + 0xb0]                ; 00525eee
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00525ef5
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00525efa
    PUSH 0x1                            ; 00525efd
    PUSH 0x20                           ; 00525eff
    PUSH EDI                            ; 00525f01
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525f02
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525f07
    MOV EAX,dword ptr [EBX + 0x20b98]   ; 00525f0a
    PUSH EAX                            ; 00525f10
    PUSH 0x5cd903                       ; 00525f11 | = "Picking up %s waist level\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00525f16 | g_CConsolePtr
    PUSH EDX                            ; 00525f1c | g_CConsoleInstance
    JMP 0x00525e61                      ; 00525f1d
        ;   XREF to: 00525e61 (UNCONDITIONAL_JUMP)  ; LAB_00525e61
    PUSH EBX                            ; 00525f22
        ;   Label: LAB_00525f22
    MOV EDX,dword ptr [EAX + 0x154]     ; 00525f23
    PUSH EAX                            ; 00525f29
    CALL dword ptr [EDX + 0x84]         ; 00525f2a
    ADD ESP,0x8                         ; 00525f30
    CMP EAX,0x4                         ; 00525f33
    SETZ AL                             ; 00525f36
    AND EAX,0xff                        ; 00525f39
    JZ 0x00525eb7                       ; 00525f3e
        ;   XREF to: 00525eb7 (CONDITIONAL_JUMP)  ; LAB_00525eb7
    LEA EAX,[EBX + 0x20]                ; 00525f44
    PUSH EAX                            ; 00525f47
    MOV ECX,dword ptr [EBX + 0x20b98]   ; 00525f48
    PUSH ECX                            ; 00525f4e
    LEA ESI,[ESP + 0x74]                ; 00525f4f
    LEA EDI,[ESP + 0x50]                ; 00525f53
    CALL core_actor.cpp_FUN_00408bf0    ; 00525f57
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x74]                ; 00525f5c
    ADD ESP,0x8                         ; 00525f60
    MOVSD ES:EDI,ESI                    ; 00525f63
    MOVSD ES:EDI,ESI                    ; 00525f64
    MOVSD ES:EDI,ESI                    ; 00525f65
    FLD float ptr [ESP + 0x50]          ; 00525f66
    FLDZ                                ; 00525f6a
    FCOMPP                              ; 00525f6c
    FNSTSW AX                           ; 00525f6e
    SAHF                                ; 00525f70
    JNC 0x00526007                      ; 00525f71
        ;   XREF to: 00526007 (CONDITIONAL_JUMP)  ; LAB_00526007
    MOV EAX,0x1                         ; 00525f77
    FLD float ptr [EBX + 0x20c90]       ; 00525f7c
        ;   Label: LAB_00525f7c
    LEA EDX,[EBX + 0x158]               ; 00525f82
    MOV dword ptr [EBX + 0x20c7c],EAX   ; 00525f88
    FCOMP double ptr [0x005cd94f]       ; 00525f8e | DAT_005cd94f
    FNSTSW AX                           ; 00525f94
    SAHF                                ; 00525f96
    JBE 0x0052600e                      ; 00525f97
        ;   XREF to: 0052600e (CONDITIONAL_JUMP)  ; LAB_0052600e
    PUSH 0x1                            ; 00525f99
    PUSH 0x23                           ; 00525f9b
    PUSH EDX                            ; 00525f9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00525f9e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0x20b98]   ; 00525fa3
    ADD ESP,0xc                         ; 00525fa9
    ADD EAX,0x20                        ; 00525fac
    PUSH EAX                            ; 00525faf
    PUSH EBX                            ; 00525fb0
    LEA ESI,[ESP + 0xd4]                ; 00525fb1
    LEA EDI,[ESP + 0x68]                ; 00525fb8
    CALL core_actor.cpp_FUN_00408bf0    ; 00525fbc
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0xd4]                ; 00525fc1
    LEA EAX,[ESP + 0x68]                ; 00525fc8
    ADD ESP,0x8                         ; 00525fcc
    LEA EDX,[EBX + 0x20c8c]             ; 00525fcf
    MOVSD ES:EDI,ESI                    ; 00525fd5
    MOVSD ES:EDI,ESI                    ; 00525fd6
    MOVSD ES:EDI,ESI                    ; 00525fd7
    CMP EDX,EAX                         ; 00525fd8
    JZ 0x00525ff0                       ; 00525fda
        ;   XREF to: 00525ff0 (CONDITIONAL_JUMP)  ; LAB_00525ff0
    MOV EAX,dword ptr [ESP + 0x60]      ; 00525fdc
    MOV dword ptr [EDX],EAX             ; 00525fe0
    MOV EAX,dword ptr [ESP + 0x64]      ; 00525fe2
    MOV dword ptr [EDX + 0x4],EAX       ; 00525fe6
    MOV EAX,dword ptr [ESP + 0x68]      ; 00525fe9
    MOV dword ptr [EDX + 0x8],EAX       ; 00525fed
    MOV EBP,dword ptr [EBX + 0x20b98]   ; 00525ff0
        ;   Label: LAB_00525ff0
    PUSH EBP                            ; 00525ff6
    PUSH 0x5cd8cd                       ; 00525ff7 | = "Picking up heavy %s shelf\n"
    MOV EAX,[0x005f1690]                ; 00525ffc | g_CConsolePtr
    PUSH EAX                            ; 00526001 | g_CConsoleInstance
    JMP 0x00525e61                      ; 00526002
        ;   XREF to: 00525e61 (UNCONDITIONAL_JUMP)  ; LAB_00525e61
    XOR EAX,EAX                         ; 00526007
        ;   Label: LAB_00526007
    JMP 0x00525f7c                      ; 00526009
        ;   XREF to: 00525f7c (UNCONDITIONAL_JUMP)  ; LAB_00525f7c
    PUSH 0x1                            ; 0052600e
        ;   Label: LAB_0052600e
    PUSH 0x22                           ; 00526010
    PUSH EDX                            ; 00526012
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00526013
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526018
    MOV ESI,dword ptr [EBX + 0x20b98]   ; 0052601b
    PUSH ESI                            ; 00526021
    PUSH 0x5cd8e8                       ; 00526022 | = "Picking up heavy %s crate\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00526027 | g_CConsolePtr
    PUSH EDI                            ; 0052602d | g_CConsoleInstance
    JMP 0x00525e61                      ; 0052602e
        ;   XREF to: 00525e61 (UNCONDITIONAL_JUMP)  ; LAB_00525e61
    PUSH 0x1                            ; 00526033
        ;   Label: LAB_00526033
    PUSH 0x1e                           ; 00526035
    PUSH EDI                            ; 00526037
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00526038
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052603d
    MOV EDX,dword ptr [EBX + 0x20b98]   ; 00526040
    PUSH EDX                            ; 00526046
    PUSH 0x5cd91e                       ; 00526047 | = "Picking up %s off ground\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0052604c | g_CConsolePtr
    PUSH ECX                            ; 00526052 | g_CConsoleInstance
    JMP 0x00525e61                      ; 00526053
        ;   XREF to: 00525e61 (UNCONDITIONAL_JUMP)  ; LAB_00525e61
    MOV dword ptr [EBX + 0x20b98],0x0   ; 00526058
        ;   Label: default
    PUSH EBX                            ; 00526062
    CALL core_hero.cpp_FUN_004d3210     ; 00526063
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 00526068
    ADD ESP,0xd8                        ; 0052606b
    POP EBP                             ; 00526071
    POP EDI                             ; 00526072
    POP ESI                             ; 00526073
    POP EBX                             ; 00526074
    RET                                 ; 00526075

