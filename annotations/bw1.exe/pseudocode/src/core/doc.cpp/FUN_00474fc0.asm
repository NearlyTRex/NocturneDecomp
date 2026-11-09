; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00474fc0(CHero *param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00474f64 = 00475100
;   undefined1* switchdataD_00474f7c = 004753db
;   undefined1* switchdataD_00474f8c = 00474fe3
;   undefined4 s_CDoc_doHeroAction_pull_l_005da44b+1
;   TerminatedCString s_CDoc_doHeroAction_type_e_005da46d
;   TerminatedCString s_lever_s_005da4c0
;   TerminatedCString s_CHero_doHeroAction_type_005da4ce
;   TerminatedCString s_Picking_up_heavy_s_shelf_005da520
;   TerminatedCString s_Picking_up_heavy_s_crate_005da53b
;   TerminatedCString s_Picking_up_s_waist_level_005da556
;   TerminatedCString s_Picking_up_s_off_ground_005da571
;   TerminatedCString s_Rummaging_s_005da58b
;   undefined4 DAT_005da59c
;   undefined4 DAT_005da5a4
;   undefined4 DAT_005da5ac
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30
;   core_hero.cpp_FUN_004eb5b0
;   core_hero.cpp_FUN_004eb5e0
;   core_hero.cpp_FUN_004ec640
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_skeleton.cpp_FUN_00569040
;   engine_console.cpp_FUN_00445430
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474fc0
        ;   Label: core_doc.cpp_FUN_00474fc0
    PUSH ESI                            ; 00474fc1
    PUSH EDI                            ; 00474fc2
    PUSH EBP                            ; 00474fc3
    SUB ESP,0xd8                        ; 00474fc4
    MOV EBX,dword ptr [ESP + 0xec]      ; 00474fca
    MOV EAX,dword ptr [EBX + 0x1ff60]   ; 00474fd1
    CMP EAX,0xb                         ; 00474fd7
    JA 0x00474fe3                       ; 00474fda
        ;   XREF to: 00474fe3 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x474f8c]  ; 00474fdc | caseD_b | caseD_9 | caseD_3
        ;   Label: switchD
    PUSH EBX                            ; 00474fe3
        ;   Label: caseD_0
    CALL core_hero.cpp_FUN_004eb5b0     ; 00474fe4
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00474fe9
    ADD ESP,0xd8                        ; 00474fec
    POP EBP                             ; 00474ff2
    POP EDI                             ; 00474ff3
    POP ESI                             ; 00474ff4
    POP EBX                             ; 00474ff5
    RET                                 ; 00474ff6
    PUSH 0x5da44c                       ; 00474ff7 | s_CDoc_doHeroAction_pull_l_005da44b+1
        ;   Label: caseD_7
    MOV EDX,dword ptr [0x00611100]      ; 00474ffc | g_CConsolePtr
    PUSH EDX                            ; 00475002 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00475003
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00475008
    MOV ECX,dword ptr [0x01d1c21c]      ; 0047500b | g_CLeverClassInfo.name_hash
    PUSH ECX                            ; 00475011
    MOV ESI,dword ptr [EBX + 0x1ff64]   ; 00475012
    PUSH ESI                            ; 00475018
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00475019
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00475023
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ESI,EAX                         ; 00475028
    ADD ESP,0x8                         ; 0047502a
    TEST EAX,EAX                        ; 0047502d
    JZ 0x00475086                       ; 0047502f
        ;   XREF to: 00475086 (CONDITIONAL_JUMP)  ; LAB_00475086
    PUSH EAX                            ; 00475031
    PUSH 0x5da4c0                       ; 00475032 | = "  lever = %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 00475037 | g_CConsolePtr
    PUSH EDI                            ; 0047503d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0047503e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00475043
    LEA EAX,[ESI + 0x420]               ; 00475046
    PUSH EAX                            ; 0047504c
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30 ; 0047504d
        ;   XREF to: 004aaf30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 00475052
    TEST EAX,EAX                        ; 00475055
    JNZ 0x00474fe3                      ; 00475057
        ;   XREF to: 00474fe3 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 00475059
    PUSH 0x24                           ; 0047505b
    LEA EAX,[EBX + 0x158]               ; 0047505d
    PUSH EAX                            ; 00475063
    MOV dword ptr [EBX + 0x1ff80],ESI   ; 00475064
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047506a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047506f
    PUSH EBX                            ; 00475072
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475073
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475078
    ADD ESP,0xd8                        ; 0047507b
    POP EBP                             ; 00475081
    POP EDI                             ; 00475082
    POP ESI                             ; 00475083
    POP EBX                             ; 00475084
    RET                                 ; 00475085
    PUSH 0x5da46d                       ; 00475086 | = "CDoc::doHeroAction - type=eHeroAction..."
        ;   Label: LAB_00475086
    MOV EBP,dword ptr [0x0061abc0]      ; 0047508b | g_CEditorToolsPtr
    PUSH EBP                            ; 00475091
    CALL shape_edittool.cpp_FUN_004943a0 ; 00475092
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x8                         ; 00475097
    PUSH EBX                            ; 0047509a
    CALL core_hero.cpp_FUN_004eb5b0     ; 0047509b
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004750a0
    ADD ESP,0xd8                        ; 004750a3
    POP EBP                             ; 004750a9
    POP EDI                             ; 004750aa
    POP ESI                             ; 004750ab
    POP EBX                             ; 004750ac
    RET                                 ; 004750ad
    MOV EBP,dword ptr [0x01b68928]      ; 004750ae | g_CDoorClassInfo.name_hash
        ;   Label: caseD_3
    PUSH EBP                            ; 004750b4
    MOV EAX,dword ptr [EBX + 0x1ff64]   ; 004750b5
    PUSH EAX                            ; 004750bb
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004750bc
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004750c6
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004750cb
    MOV dword ptr [EBX + 0x1ff74],EAX   ; 004750ce
    TEST EAX,EAX                        ; 004750d4
    JZ 0x0047511e                       ; 004750d6
        ;   XREF to: 0047511e (CONDITIONAL_JUMP)  ; LAB_0047511e
    ADD EAX,0x478                       ; 004750d8
    PUSH EAX                            ; 004750dd
    CALL core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30 ; 004750de
        ;   XREF to: 004aaf30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004750e3
    TEST EAX,EAX                        ; 004750e6
    JNZ 0x00475100                      ; 004750e8
        ;   XREF to: 00475100 (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBX + 0x1ff6c]   ; 004750ea
    CMP EAX,0x5                         ; 004750f0
    JA 0x0047520a                       ; 004750f3
        ;   XREF to: 0047520a (CONDITIONAL_JUMP)  ; caseD_1
    JMP dword ptr [EAX*0x4 + 0x474f64]  ; 004750f9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [EBX + 0x1ff74],0x0   ; 00475100
        ;   Label: caseD_0
    PUSH EBX                            ; 0047510a
    CALL core_hero.cpp_FUN_004eb5b0     ; 0047510b
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475110
    ADD ESP,0xd8                        ; 00475113
    POP EBP                             ; 00475119
    POP EDI                             ; 0047511a
    POP ESI                             ; 0047511b
    POP EBX                             ; 0047511c
    RET                                 ; 0047511d
    PUSH 0x5da4ce                       ; 0047511e | = "CHero::doHeroAction - type=eHeroActio..."
        ;   Label: LAB_0047511e
    MOV ECX,dword ptr [0x0061abc0]      ; 00475123 | g_CEditorToolsPtr
    PUSH ECX                            ; 00475129
    CALL shape_edittool.cpp_FUN_004943a0 ; 0047512a
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x8                         ; 0047512f
    PUSH EBX                            ; 00475132
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475133
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475138
    ADD ESP,0xd8                        ; 0047513b
    POP EBP                             ; 00475141
    POP EDI                             ; 00475142
    POP ESI                             ; 00475143
    POP EBX                             ; 00475144
    RET                                 ; 00475145
    PUSH 0x1                            ; 00475146
        ;   Label: caseD_3
    PUSH 0x23                           ; 00475148
    LEA EAX,[EBX + 0x158]               ; 0047514a
    PUSH EAX                            ; 00475150
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00475151
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00475156
    MOV dword ptr [EBX + 0x1ff5c],0x5   ; 00475159
    PUSH EBX                            ; 00475163
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475164
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475169
    ADD ESP,0xd8                        ; 0047516c
    POP EBP                             ; 00475172
    POP EDI                             ; 00475173
    POP ESI                             ; 00475174
    POP EBX                             ; 00475175
    RET                                 ; 00475176
    PUSH 0x1                            ; 00475177
        ;   Label: caseD_2
    PUSH 0x22                           ; 00475179
    LEA EAX,[EBX + 0x158]               ; 0047517b
    PUSH EAX                            ; 00475181
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00475182
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00475187
    MOV dword ptr [EBX + 0x1ff5c],0x5   ; 0047518a
    PUSH EBX                            ; 00475194
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475195
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 0047519a
    ADD ESP,0xd8                        ; 0047519d
    POP EBP                             ; 004751a3
    POP EDI                             ; 004751a4
    POP ESI                             ; 004751a5
    POP EBX                             ; 004751a6
    RET                                 ; 004751a7
    PUSH 0x1                            ; 004751a8
        ;   Label: caseD_4
    PUSH 0x20                           ; 004751aa
    LEA EAX,[EBX + 0x158]               ; 004751ac
    PUSH EAX                            ; 004751b2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004751b3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004751b8
    MOV dword ptr [EBX + 0x1ff5c],0x5   ; 004751bb
    PUSH EBX                            ; 004751c5
    CALL core_hero.cpp_FUN_004eb5b0     ; 004751c6
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004751cb
    ADD ESP,0xd8                        ; 004751ce
    POP EBP                             ; 004751d4
    POP EDI                             ; 004751d5
    POP ESI                             ; 004751d6
    POP EBX                             ; 004751d7
    RET                                 ; 004751d8
    PUSH 0x1                            ; 004751d9
        ;   Label: caseD_5
    PUSH 0x21                           ; 004751db
    LEA EAX,[EBX + 0x158]               ; 004751dd
    PUSH EAX                            ; 004751e3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004751e4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004751e9
    MOV dword ptr [EBX + 0x1ff5c],0x5   ; 004751ec
    PUSH EBX                            ; 004751f6
    CALL core_hero.cpp_FUN_004eb5b0     ; 004751f7
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 004751fc
    ADD ESP,0xd8                        ; 004751ff
    POP EBP                             ; 00475205
    POP EDI                             ; 00475206
    POP ESI                             ; 00475207
    POP EBX                             ; 00475208
    RET                                 ; 00475209
    PUSH EBX                            ; 0047520a
        ;   Label: caseD_1
    CALL core_hero.cpp_FUN_004eb5e0     ; 0047520b
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00475210
    PUSH EBX                            ; 00475213
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475214
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475219
    ADD ESP,0xd8                        ; 0047521c
    POP EBP                             ; 00475222
    POP EDI                             ; 00475223
    POP ESI                             ; 00475224
    POP EBX                             ; 00475225
    RET                                 ; 00475226
    PUSH EBX                            ; 00475227
        ;   Label: caseD_1
    CALL core_hero.cpp_FUN_004ec640     ; 00475228
        ;   XREF to: 004ec640 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ec640()
    ADD ESP,0x4                         ; 0047522d
    PUSH EBX                            ; 00475230
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475231
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475236
    ADD ESP,0xd8                        ; 00475239
    POP EBP                             ; 0047523f
    POP EDI                             ; 00475240
    POP ESI                             ; 00475241
    POP EBX                             ; 00475242
    RET                                 ; 00475243
    MOV EAX,dword ptr [EBX + 0x1ff64]   ; 00475244
        ;   Label: caseD_4
    MOV dword ptr [EBX + 0x1ff78],EAX   ; 0047524a
    TEST EAX,EAX                        ; 00475250
    JZ 0x00474fe3                       ; 00475252
        ;   XREF to: 00474fe3 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EBX                            ; 00475258
    MOV EDX,dword ptr [EAX + 0x154]     ; 00475259
    PUSH EAX                            ; 0047525f
    CALL dword ptr [EDX + 0x84]         ; 00475260
    ADD ESP,0x8                         ; 00475266
    MOV EBP,EAX                         ; 00475269
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 0047526b
    PUSH EAX                            ; 00475271
    MOV EDX,dword ptr [EAX + 0x154]     ; 00475272
    LEA ESI,[ESP + 0x4]                 ; 00475278
    LEA EDI,[ESP + 0x1c]                ; 0047527c
    CALL dword ptr [EDX + 0x1c]         ; 00475280
    MOV ECX,0x6                         ; 00475283
    LEA ESI,[ESP + 0x4]                 ; 00475288
    ADD ESP,0x4                         ; 0047528c
    MOVSD.REP ES:EDI,ESI                ; 0047528f
    LEA EDX,[EBX + 0x20078]             ; 00475291
    LEA EDI,[ESP + 0x18]                ; 00475297
    MOV ESI,EDX                         ; 0047529b
    CMP EDX,EDI                         ; 0047529d
    JNZ 0x00475434                      ; 0047529f
        ;   XREF to: 00475434 (CONDITIONAL_JUMP)  ; LAB_00475434
    LEA EAX,[EDI + 0xc]                 ; 004752a5
        ;   Label: LAB_004752a5
    LEA EDX,[ESI + 0xc]                 ; 004752a8
    CMP EDX,EAX                         ; 004752ab
    JZ 0x004752bf                       ; 004752ad
        ;   XREF to: 004752bf (CONDITIONAL_JUMP)  ; LAB_004752bf
    MOV ECX,dword ptr [EAX]             ; 004752af
    MOV dword ptr [EDX],ECX             ; 004752b1
    MOV ECX,dword ptr [EAX + 0x4]       ; 004752b3
    MOV dword ptr [EDX + 0x4],ECX       ; 004752b6
    MOV ECX,dword ptr [EAX + 0x8]       ; 004752b9
    MOV dword ptr [EDX + 0x8],ECX       ; 004752bc
    LEA EDX,[EBX + 0x20078]             ; 004752bf
        ;   Label: LAB_004752bf
    LEA EDI,[ESP + 0x90]                ; 004752c5
    LEA ESI,[ESP + 0xc0]                ; 004752cc
    FLD float ptr [EDX]                 ; 004752d3
    FLD float ptr [EDX + 0x4]           ; 004752d5
    LEA EAX,[EBX + 0x20084]             ; 004752d8
    FLD float ptr [EDX + 0x8]           ; 004752de
    FXCH ST2                            ; 004752e1
    FADD float ptr [EAX]                ; 004752e3
    FXCH                                ; 004752e5
    FADD float ptr [EAX + 0x4]          ; 004752e7
    FXCH ST2                            ; 004752ea
    FADD float ptr [EAX + 0x8]          ; 004752ec
    FXCH                                ; 004752ef
    FSTP float ptr [ESP + 0xc0]         ; 004752f1
    FXCH                                ; 004752f8
    FSTP float ptr [ESP + 0xc4]         ; 004752fa
    FSTP float ptr [ESP + 0xc8]         ; 00475301
    MOVSD ES:EDI,ESI                    ; 00475308
    MOVSD ES:EDI,ESI                    ; 00475309
    MOVSD ES:EDI,ESI                    ; 0047530a
    FLD float ptr [0x005da59c]          ; 0047530b | DAT_005da59c
    FLD float ptr [ESP + 0x90]          ; 00475311
    FMUL ST1                            ; 00475318
    FLD float ptr [ESP + 0x94]          ; 0047531a
    FMUL ST2                            ; 00475321
    FLD float ptr [ESP + 0x98]          ; 00475323
    FMULP ST3                           ; 0047532a
    LEA EAX,[ESP + 0x9c]                ; 0047532c
    LEA EDI,[ESP + 0x9c]                ; 00475333
    LEA ESI,[ESP + 0x84]                ; 0047533a
    FXCH                                ; 00475341
    FSTP float ptr [ESP + 0x84]         ; 00475343
    FSTP float ptr [ESP + 0x88]         ; 0047534a
    FSTP float ptr [ESP + 0x8c]         ; 00475351
    MOVSD ES:EDI,ESI                    ; 00475358
    MOVSD ES:EDI,ESI                    ; 00475359
    MOVSD ES:EDI,ESI                    ; 0047535a
    PUSH EAX                            ; 0047535b
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 0047535c
    PUSH EDX                            ; 00475362
    LEA ESI,[ESP + 0x38]                ; 00475363
    LEA EDI,[ESP + 0xbc]                ; 00475367
    CALL core_actor.cpp_FUN_00408b40    ; 0047536e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00475373
    LEA EAX,[ESP + 0xb4]                ; 00475376
    LEA ESI,[ESP + 0x30]                ; 0047537d
    PUSH EAX                            ; 00475381
    MOVSD ES:EDI,ESI                    ; 00475382
    MOVSD ES:EDI,ESI                    ; 00475383
    MOVSD ES:EDI,ESI                    ; 00475384
    PUSH EBX                            ; 00475385
    LEA ESI,[ESP + 0x5c]                ; 00475386
    LEA EDI,[ESP + 0x80]                ; 0047538a
    CALL core_actor.cpp_FUN_00408bb0    ; 00475391
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x5c]                ; 00475396
    LEA EAX,[ESP + 0x80]                ; 0047539a
    ADD ESP,0x8                         ; 004753a1
    LEA EDX,[EBX + 0x2006c]             ; 004753a4
    MOVSD ES:EDI,ESI                    ; 004753aa
    MOVSD ES:EDI,ESI                    ; 004753ab
    MOVSD ES:EDI,ESI                    ; 004753ac
    CMP EDX,EAX                         ; 004753ad
    JZ 0x004753c8                       ; 004753af
        ;   XREF to: 004753c8 (CONDITIONAL_JUMP)  ; LAB_004753c8
    MOV EAX,dword ptr [ESP + 0x78]      ; 004753b1
    MOV dword ptr [EDX],EAX             ; 004753b5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004753b7
    MOV dword ptr [EDX + 0x4],EAX       ; 004753bb
    MOV EAX,dword ptr [ESP + 0x80]      ; 004753be
    MOV dword ptr [EDX + 0x8],EAX       ; 004753c5
    LEA EAX,[EBP + -0x1]                ; 004753c8
        ;   Label: LAB_004753c8
    CMP EAX,0x3                         ; 004753cb
    JA 0x004755f8                       ; 004753ce
        ;   XREF to: 004755f8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x474f7c]  ; 004753d4 | caseD_1 | caseD_4 | switchdataD_00474f7c
        ;   Label: switchD
    PUSH 0x1                            ; 004753db
        ;   Label: caseD_1
    PUSH 0x1e                           ; 004753dd
    LEA EAX,[EBX + 0x158]               ; 004753df
    PUSH EAX                            ; 004753e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004753e6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004753eb
    MOV ECX,dword ptr [EBX + 0x1ff78]   ; 004753ee
    PUSH ECX                            ; 004753f4
    PUSH 0x5da58b                       ; 004753f5 | = "Rummaging %s\n"
    MOV ESI,dword ptr [0x00611100]      ; 004753fa | g_CConsolePtr
    PUSH ESI                            ; 00475400 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00475401
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
        ;   Label: LAB_00475401
    ADD ESP,0xc                         ; 00475406
    CMP dword ptr [EBX + 0x1ff78],0x0   ; 00475409
    JZ 0x00474fe3                       ; 00475410
        ;   XREF to: 00474fe3 (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0x1ff5c],0x4   ; 00475416
    PUSH EBX                            ; 00475420
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475421
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475426
    ADD ESP,0xd8                        ; 00475429
    POP EBP                             ; 0047542f
    POP EDI                             ; 00475430
    POP ESI                             ; 00475431
    POP EBX                             ; 00475432
    RET                                 ; 00475433
    MOV EAX,dword ptr [ESP + 0x18]      ; 00475434
        ;   Label: LAB_00475434
    MOV dword ptr [EDX],EAX             ; 00475438
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047543a
    MOV dword ptr [EDX + 0x4],EAX       ; 0047543e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00475441
    MOV dword ptr [EDX + 0x8],EAX       ; 00475445
    JMP 0x004752a5                      ; 00475448
        ;   XREF to: 004752a5 (UNCONDITIONAL_JUMP)  ; LAB_004752a5
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 0047544d
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 00475453
    JNZ 0x004754c2                      ; 00475455
        ;   XREF to: 004754c2 (CONDITIONAL_JUMP)  ; LAB_004754c2
    FLD float ptr [EBX + 0x20070]       ; 00475457
        ;   Label: LAB_00475457
    LEA EDI,[EBX + 0x158]               ; 0047545d
    FCOMP double ptr [0x005da5ac]       ; 00475463 | DAT_005da5ac
    FNSTSW AX                           ; 00475469
    SAHF                                ; 0047546b
    JBE 0x004755d3                      ; 0047546c
        ;   XREF to: 004755d3 (CONDITIONAL_JUMP)  ; LAB_004755d3
    MOV ESI,dword ptr [0x01b6884c]      ; 00475472 | DAT_01b6884c
    PUSH ESI                            ; 00475478
    PUSH EDI                            ; 00475479
    LEA ESI,[ESP + 0x44]                ; 0047547a
    CALL core_skeleton.cpp_FUN_00569040 ; 0047547e
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00475483
    MOV EBP,dword ptr [0x01b68824]      ; 00475486 | DAT_01b68824
    PUSH EBP                            ; 0047548c
    PUSH EDI                            ; 0047548d
    LEA ESI,[ESP + 0xb0]                ; 0047548e
    CALL core_skeleton.cpp_FUN_00569040 ; 00475495
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 0047549a
    PUSH 0x1                            ; 0047549d
    PUSH 0x18                           ; 0047549f
    PUSH EDI                            ; 004754a1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004754a2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004754a7
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 004754aa
    PUSH EAX                            ; 004754b0
    PUSH 0x5da556                       ; 004754b1 | = "Picking up %s waist level\n"
    MOV EDX,dword ptr [0x00611100]      ; 004754b6 | g_CConsolePtr
    PUSH EDX                            ; 004754bc | g_CConsoleInstance
    JMP 0x00475401                      ; 004754bd
        ;   XREF to: 00475401 (UNCONDITIONAL_JUMP)  ; LAB_00475401
    PUSH EBX                            ; 004754c2
        ;   Label: LAB_004754c2
    MOV EDX,dword ptr [EAX + 0x154]     ; 004754c3
    PUSH EAX                            ; 004754c9
    CALL dword ptr [EDX + 0x84]         ; 004754ca
    ADD ESP,0x8                         ; 004754d0
    CMP EAX,0x4                         ; 004754d3
    SETZ AL                             ; 004754d6
    AND EAX,0xff                        ; 004754d9
    JZ 0x00475457                       ; 004754de
        ;   XREF to: 00475457 (CONDITIONAL_JUMP)  ; LAB_00475457
    LEA EAX,[EBX + 0x20]                ; 004754e4
    PUSH EAX                            ; 004754e7
    MOV ECX,dword ptr [EBX + 0x1ff78]   ; 004754e8
    PUSH ECX                            ; 004754ee
    LEA ESI,[ESP + 0x74]                ; 004754ef
    LEA EDI,[ESP + 0x50]                ; 004754f3
    CALL core_actor.cpp_FUN_00408bb0    ; 004754f7
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x74]                ; 004754fc
    ADD ESP,0x8                         ; 00475500
    MOVSD ES:EDI,ESI                    ; 00475503
    MOVSD ES:EDI,ESI                    ; 00475504
    MOVSD ES:EDI,ESI                    ; 00475505
    FLD float ptr [ESP + 0x50]          ; 00475506
    FLDZ                                ; 0047550a
    FCOMPP                              ; 0047550c
    FNSTSW AX                           ; 0047550e
    SAHF                                ; 00475510
    JNC 0x004755a7                      ; 00475511
        ;   XREF to: 004755a7 (CONDITIONAL_JUMP)  ; LAB_004755a7
    MOV EAX,0x1                         ; 00475517
    FLD float ptr [EBX + 0x20070]       ; 0047551c
        ;   Label: LAB_0047551c
    LEA EDX,[EBX + 0x158]               ; 00475522
    MOV dword ptr [EBX + 0x2005c],EAX   ; 00475528
    FCOMP double ptr [0x005da5a4]       ; 0047552e | DAT_005da5a4
    FNSTSW AX                           ; 00475534
    SAHF                                ; 00475536
    JBE 0x004755ae                      ; 00475537
        ;   XREF to: 004755ae (CONDITIONAL_JUMP)  ; LAB_004755ae
    PUSH 0x1                            ; 00475539
    PUSH 0x1b                           ; 0047553b
    PUSH EDX                            ; 0047553d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047553e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 00475543
    ADD ESP,0xc                         ; 00475549
    ADD EAX,0x20                        ; 0047554c
    PUSH EAX                            ; 0047554f
    PUSH EBX                            ; 00475550
    LEA ESI,[ESP + 0xd4]                ; 00475551
    LEA EDI,[ESP + 0x68]                ; 00475558
    CALL core_actor.cpp_FUN_00408bb0    ; 0047555c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xd4]                ; 00475561
    LEA EAX,[ESP + 0x68]                ; 00475568
    ADD ESP,0x8                         ; 0047556c
    LEA EDX,[EBX + 0x2006c]             ; 0047556f
    MOVSD ES:EDI,ESI                    ; 00475575
    MOVSD ES:EDI,ESI                    ; 00475576
    MOVSD ES:EDI,ESI                    ; 00475577
    CMP EDX,EAX                         ; 00475578
    JZ 0x00475590                       ; 0047557a
        ;   XREF to: 00475590 (CONDITIONAL_JUMP)  ; LAB_00475590
    MOV EAX,dword ptr [ESP + 0x60]      ; 0047557c
    MOV dword ptr [EDX],EAX             ; 00475580
    MOV EAX,dword ptr [ESP + 0x64]      ; 00475582
    MOV dword ptr [EDX + 0x4],EAX       ; 00475586
    MOV EAX,dword ptr [ESP + 0x68]      ; 00475589
    MOV dword ptr [EDX + 0x8],EAX       ; 0047558d
    MOV EBP,dword ptr [EBX + 0x1ff78]   ; 00475590
        ;   Label: LAB_00475590
    PUSH EBP                            ; 00475596
    PUSH 0x5da520                       ; 00475597 | = "Picking up heavy %s shelf\n"
    MOV EAX,[0x00611100]                ; 0047559c | g_CConsolePtr
    PUSH EAX                            ; 004755a1 | g_CConsoleInstance
    JMP 0x00475401                      ; 004755a2
        ;   XREF to: 00475401 (UNCONDITIONAL_JUMP)  ; LAB_00475401
    XOR EAX,EAX                         ; 004755a7
        ;   Label: LAB_004755a7
    JMP 0x0047551c                      ; 004755a9
        ;   XREF to: 0047551c (UNCONDITIONAL_JUMP)  ; LAB_0047551c
    PUSH 0x1                            ; 004755ae
        ;   Label: LAB_004755ae
    PUSH 0x1a                           ; 004755b0
    PUSH EDX                            ; 004755b2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004755b3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004755b8
    MOV ESI,dword ptr [EBX + 0x1ff78]   ; 004755bb
    PUSH ESI                            ; 004755c1
    PUSH 0x5da53b                       ; 004755c2 | = "Picking up heavy %s crate\n"
    MOV EDI,dword ptr [0x00611100]      ; 004755c7 | g_CConsolePtr
    PUSH EDI                            ; 004755cd | g_CConsoleInstance
    JMP 0x00475401                      ; 004755ce
        ;   XREF to: 00475401 (UNCONDITIONAL_JUMP)  ; LAB_00475401
    PUSH 0x1                            ; 004755d3
        ;   Label: LAB_004755d3
    PUSH 0x16                           ; 004755d5
    PUSH EDI                            ; 004755d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004755d8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004755dd
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 004755e0
    PUSH EDX                            ; 004755e6
    PUSH 0x5da571                       ; 004755e7 | = "Picking up %s off ground\n"
    MOV ECX,dword ptr [0x00611100]      ; 004755ec | g_CConsolePtr
    PUSH ECX                            ; 004755f2 | g_CConsoleInstance
    JMP 0x00475401                      ; 004755f3
        ;   XREF to: 00475401 (UNCONDITIONAL_JUMP)  ; LAB_00475401
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 004755f8
        ;   Label: default
    PUSH EBX                            ; 00475602
    CALL core_hero.cpp_FUN_004eb5b0     ; 00475603
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 00475608
    ADD ESP,0xd8                        ; 0047560b
    POP EBP                             ; 00475611
    POP EDI                             ; 00475612
    POP ESI                             ; 00475613
    POP EBX                             ; 00475614
    RET                                 ; 00475615

