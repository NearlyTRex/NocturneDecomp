; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_FUN_004c0050(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004c0034 = 004c052c
;   undefined4 s_s_confused_while_walking_005d8d69+1
;   TerminatedCString s_gargoyle_alive_wav_005d8d94
;   TerminatedCString s_gargoyle_stone_wav_005d8da8
;   TerminatedCString s_gargoyle_stone_wav_005d8dbb
;   undefined4 DAT_005d8dd2
;   undefined4 DAT_005f75dc
;   undefined4 DAT_005f75e8
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01cb8128
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040d060
;   core_actor.cpp_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00424430
;   core_charactr.cpp_FUN_00424470
;   core_charactr.cpp_FUN_004287f0
;   core_charactr.cpp_FUN_00429e90
;   core_charactr.cpp_FUN_0042b2a0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0050
        ;   Label: core_gargoyle.cpp_FUN_004c0050
    PUSH ESI                            ; 004c0051
    PUSH EDI                            ; 004c0052
    PUSH EBP                            ; 004c0053
    MOV EBP,ESP                         ; 004c0054
    SUB ESP,0x16c                       ; 004c0056
    SUB EBP,0x7a                        ; 004c005c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004c005f
    PUSH dword ptr [EBP + 0x92]         ; 004c0065
    PUSH EBX                            ; 004c006b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004c006c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c0071
    TEST EAX,EAX                        ; 004c0074
    JZ 0x004c00d0                       ; 004c0076
        ;   XREF to: 004c00d0 (CONDITIONAL_JUMP)  ; LAB_004c00d0
    LEA EAX,[EBX + 0x2508]              ; 004c0078
        ;   Label: LAB_004c0078
    MOV dword ptr [EAX + 0x8],0x0       ; 004c007e
    FLD float ptr [EBP + 0x92]          ; 004c0085
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c008b
    MOV dword ptr [EAX + 0x4],EDX       ; 004c008e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c0091
    MOV dword ptr [EAX],EDX             ; 004c0094
    FMUL float ptr [EBX + 0x10a60]      ; 004c0096
    LEA EAX,[EBX + 0x2b4]               ; 004c009c
    FSTP float ptr [EBP + 0x56]         ; 004c00a2
    MOV dword ptr [EBP + 0x72],EAX      ; 004c00a5
    FLD float ptr [EBP + 0x56]          ; 004c00a8
        ;   Label: LAB_004c00a8
    FLDZ                                ; 004c00ab
    FCOMPP                              ; 004c00ad
    FNSTSW AX                           ; 004c00af
    SAHF                                ; 004c00b1
    JNC 0x004c00f4                      ; 004c00b2
        ;   XREF to: 004c00f4 (CONDITIONAL_JUMP)  ; LAB_004c00f4
    LEA EAX,[EBP + 0x56]                ; 004c00b4
    PUSH EAX                            ; 004c00b7
    MOV EAX,dword ptr [EBP + 0x72]      ; 004c00b8
    PUSH EAX                            ; 004c00bb
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004c00bc
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004c00c1
    PUSH EAX                            ; 004c00c4
    PUSH EBX                            ; 004c00c5
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004c00c6
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004c00cb
    JMP 0x004c00a8                      ; 004c00ce
        ;   XREF to: 004c00a8 (UNCONDITIONAL_JUMP)  ; LAB_004c00a8
    LEA EAX,[EBX + 0x2b4]               ; 004c00d0
        ;   Label: LAB_004c00d0
    PUSH EAX                            ; 004c00d6
    CALL core_motion.cpp_FUN_005035c0   ; 004c00d7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c00dc
    ADD ESP,0x4                         ; 004c00df
    CMP EAX,0x8                         ; 004c00e2
    JZ 0x004c00ec                       ; 004c00e5
        ;   XREF to: 004c00ec (CONDITIONAL_JUMP)  ; LAB_004c00ec
    CMP EAX,0x5                         ; 004c00e7
    JNZ 0x004c0078                      ; 004c00ea
        ;   XREF to: 004c0078 (CONDITIONAL_JUMP)  ; LAB_004c0078
    LEA ESP,[EBP + 0x7a]                ; 004c00ec
        ;   Label: LAB_004c00ec
    POP EBP                             ; 004c00ef
    POP EDI                             ; 004c00f0
    POP ESI                             ; 004c00f1
    POP EBX                             ; 004c00f2
    RET                                 ; 004c00f3
    FLD float ptr [EBP + 0x92]          ; 004c00f4
        ;   Label: LAB_004c00f4
    FMUL float ptr [EBX + 0x10a60]      ; 004c00fa
    SUB ESP,0x4                         ; 004c0100
    MOV EAX,dword ptr [EBX + 0x2510]    ; 004c0103
    MOV dword ptr [EBX + 0x2594],EAX    ; 004c0109
    FSTP float ptr [ESP]                ; 004c010f
    PUSH EBX                            ; 004c0112
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004c0113
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004c0118
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c011b
    PUSH EDX                            ; 004c011e
    CALL core_motion.cpp_FUN_005035c0   ; 004c011f
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004c0124
    PUSH dword ptr [EBP + 0x92]         ; 004c0127
    MOV ESI,dword ptr [EAX + 0x24]      ; 004c012d
    PUSH EBX                            ; 004c0130
    MOV dword ptr [EBP + 0x5e],ESI      ; 004c0131
    CALL core_charactr.cpp_FUN_004287f0 ; 004c0134
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c0139
    TEST EAX,EAX                        ; 004c013c
    JZ 0x004c0a64                       ; 004c013e
        ;   XREF to: 004c0a64 (CONDITIONAL_JUMP)  ; LAB_004c0a64
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004c0144
    CMP EAX,0x2                         ; 004c014a
    JNC 0x004c03d4                      ; 004c014d
        ;   XREF to: 004c03d4 (CONDITIONAL_JUMP)  ; LAB_004c03d4
    CMP EAX,0x1                         ; 004c0153
    JNZ 0x004c03df                      ; 004c0156
        ;   XREF to: 004c03df (CONDITIONAL_JUMP)  ; LAB_004c03df
    PUSH 0x1                            ; 004c015c
        ;   Label: LAB_004c015c
    PUSH 0x1                            ; 004c015e
    LEA EAX,[EBX + 0x2b4]               ; 004c0160
        ;   Label: LAB_004c0160
    PUSH EAX                            ; 004c0166
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0167
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c016c
        ;   Label: LAB_004c016c
    LEA EAX,[EBX + 0x2508]              ; 004c016f
    MOV dword ptr [EAX + 0x8],0x0       ; 004c0175
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c017c
    MOV dword ptr [EAX + 0x4],EDX       ; 004c017f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c0182
    MOV dword ptr [EAX],EDX             ; 004c0185
    FLD float ptr [EBX + 0x10a74]       ; 004c0187
        ;   Label: caseD_4
    FLDZ                                ; 004c018d
    FCOMPP                              ; 004c018f
    FNSTSW AX                           ; 004c0191
    SAHF                                ; 004c0193
    JNC 0x004c01a8                      ; 004c0194
        ;   XREF to: 004c01a8 (CONDITIONAL_JUMP)  ; LAB_004c01a8
    FLD float ptr [EBX + 0x10a74]       ; 004c0196
    FSUB float ptr [EBP + 0x92]         ; 004c019c
    FSTP float ptr [EBX + 0x10a74]      ; 004c01a2
    PUSH EBX                            ; 004c01a8
        ;   Label: LAB_004c01a8
    CALL core_charactr.cpp_FUN_00424430 ; 004c01a9
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c01ae
    TEST EAX,EAX                        ; 004c01b1
    JZ 0x004c029c                       ; 004c01b3
        ;   XREF to: 004c029c (CONDITIONAL_JUMP)  ; LAB_004c029c
    PUSH dword ptr [EBP + 0x92]         ; 004c01b9
    PUSH EBX                            ; 004c01bf
    LEA ESI,[EBX + 0x2588]              ; 004c01c0
    CALL core_charactr.cpp_FUN_00423a10 ; 004c01c6
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 004c01cb
    FMUL float ptr [EBP + 0x92]         ; 004c01cd
    FLD float ptr [ESI + 0x4]           ; 004c01d3
    FMUL float ptr [EBP + 0x92]         ; 004c01d6
    FLD float ptr [ESI + 0x8]           ; 004c01dc
    FMUL float ptr [EBP + 0x92]         ; 004c01df
    LEA EDI,[EBP + -0x62]               ; 004c01e5
    LEA ESI,[EBP + 0xffffff6e]          ; 004c01e8
    FXCH ST2                            ; 004c01ee
    FSTP float ptr [EBP + 0xffffff6e]   ; 004c01f0
    FSTP float ptr [EBP + 0xffffff72]   ; 004c01f6
    FSTP float ptr [EBP + 0xffffff76]   ; 004c01fc
    MOVSD ES:EDI,ESI                    ; 004c0202
    MOVSD ES:EDI,ESI                    ; 004c0203
    MOVSD ES:EDI,ESI                    ; 004c0204
    LEA EAX,[EBX + 0x257c]              ; 004c0205
    FLD float ptr [EBP + -0x62]         ; 004c020b
    FLD float ptr [EBP + -0x5e]         ; 004c020e
    FLD float ptr [EBP + -0x5a]         ; 004c0211
    LEA EDI,[EBP + -0x3e]               ; 004c0214
    LEA ESI,[EBP + -0x2]                ; 004c0217
    FXCH ST2                            ; 004c021a
    FADD float ptr [EAX]                ; 004c021c
    FXCH                                ; 004c021e
    FADD float ptr [EAX + 0x4]          ; 004c0220
    FXCH ST2                            ; 004c0223
    FADD float ptr [EAX + 0x8]          ; 004c0225
    FXCH                                ; 004c0228
    FSTP float ptr [EBP + -0x2]         ; 004c022a
    FXCH                                ; 004c022d
    FSTP float ptr [EBP + 0x2]          ; 004c022f
    FSTP float ptr [EBP + 0x6]          ; 004c0232
    MOVSD ES:EDI,ESI                    ; 004c0235
    MOVSD ES:EDI,ESI                    ; 004c0236
    MOVSD ES:EDI,ESI                    ; 004c0237
    LEA EDX,[EBX + 0x2508]              ; 004c0238
    FLD float ptr [EBP + -0x3e]         ; 004c023e
    FLD float ptr [EBP + -0x3a]         ; 004c0241
    FLD float ptr [EBP + -0x36]         ; 004c0244
    LEA EDI,[EBP + -0x1a]               ; 004c0247
    LEA ESI,[EBP + -0xe]                ; 004c024a
    FXCH ST2                            ; 004c024d
    FADD float ptr [EDX]                ; 004c024f
    FXCH                                ; 004c0251
    FADD float ptr [EDX + 0x4]          ; 004c0253
    FXCH ST2                            ; 004c0256
    FADD float ptr [EDX + 0x8]          ; 004c0258
    FXCH                                ; 004c025b
    FSTP float ptr [EBP + -0xe]         ; 004c025d
    FXCH                                ; 004c0260
    FSTP float ptr [EBP + -0xa]         ; 004c0262
    FSTP float ptr [EBP + -0x6]         ; 004c0265
    MOVSD ES:EDI,ESI                    ; 004c0268
    MOVSD ES:EDI,ESI                    ; 004c0269
    MOVSD ES:EDI,ESI                    ; 004c026a
    MOV dword ptr [EAX + 0x8],0x0       ; 004c026b
    ADD ESP,0x8                         ; 004c0272
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c0275
    MOV dword ptr [EAX + 0x4],ECX       ; 004c0278
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c027b
    MOV dword ptr [EAX],ECX             ; 004c027e
    MOV dword ptr [EDX + 0x8],0x0       ; 004c0280
    LEA EAX,[EBP + -0x1a]               ; 004c0287
    FLD float ptr [EDX + 0x8]           ; 004c028a
    PUSH EAX                            ; 004c028d
    FST float ptr [EDX + 0x4]           ; 004c028e
    PUSH EBX                            ; 004c0291
    FSTP float ptr [EDX]                ; 004c0292
    CALL core_charactr.cpp_FUN_00423a60 ; 004c0294
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004c0299
    PUSH EBX                            ; 004c029c
        ;   Label: LAB_004c029c
    CALL core_charactr.cpp_FUN_00424470 ; 004c029d
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c02a2
    LEA EAX,[EBX + 0x2b4]               ; 004c02a5
    PUSH EAX                            ; 004c02ab
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004c02ac
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c02b1
    PUSH dword ptr [EBP + 0x92]         ; 004c02b4
    PUSH EBX                            ; 004c02ba
    CALL core_charactr.cpp_FUN_00429e90 ; 004c02bb
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBP + 0x5e]      ; 004c02c0
    ADD ESP,0x8                         ; 004c02c3
    CMP ECX,0x5                         ; 004c02c6
    JNZ 0x004c0a74                      ; 004c02c9
        ;   XREF to: 004c0a74 (CONDITIONAL_JUMP)  ; LAB_004c0a74
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004c02cf
    SHL EAX,0x8                         ; 004c02d5
    MOV dword ptr [EBX + 0x10b40],EAX   ; 004c02d8
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 004c02de
    SHL EAX,0x8                         ; 004c02e4
    MOV dword ptr [EBX + 0x10b44],EAX   ; 004c02e7
    MOV EAX,dword ptr [EBX + 0x10b30]   ; 004c02ed
    SHL EAX,0x8                         ; 004c02f3
    MOV dword ptr [EBX + 0x10b48],EAX   ; 004c02f6
    MOV ESI,dword ptr [EBX + 0x10b40]   ; 004c02fc
        ;   Label: LAB_004c02fc
    MOV EAX,dword ptr [EBX + 0x108]     ; 004c0302
    CMP EAX,ESI                         ; 004c0308
    JGE 0x004c0a97                      ; 004c030a
        ;   XREF to: 004c0a97 (CONDITIONAL_JUMP)  ; LAB_004c0a97
    MOV EAX,[0x01c2a370]                ; 004c0310 | DAT_01c2a370
    MOV ESI,dword ptr [EBX + 0x108]     ; 004c0315
    ADD ESI,EAX                         ; 004c031b
    MOV EDI,dword ptr [EBX + 0x10b40]   ; 004c031d
    MOV dword ptr [EBX + 0x108],ESI     ; 004c0323
    CMP ESI,EDI                         ; 004c0329
    JLE 0x004c0333                      ; 004c032b
        ;   XREF to: 004c0333 (CONDITIONAL_JUMP)  ; LAB_004c0333
    MOV dword ptr [EBX + 0x108],EDI     ; 004c032d
    MOV EDX,dword ptr [EBX + 0x10b44]   ; 004c0333
        ;   Label: LAB_004c0333
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004c0339
    CMP EAX,EDX                         ; 004c033f
    JGE 0x004c0ac9                      ; 004c0341
        ;   XREF to: 004c0ac9 (CONDITIONAL_JUMP)  ; LAB_004c0ac9
    MOV EAX,[0x01c2a370]                ; 004c0347 | DAT_01c2a370
    MOV EDX,dword ptr [EBX + 0x10c]     ; 004c034c
    ADD EDX,EAX                         ; 004c0352
    MOV ECX,dword ptr [EBX + 0x10b44]   ; 004c0354
    MOV dword ptr [EBX + 0x10c],EDX     ; 004c035a
    CMP EDX,ECX                         ; 004c0360
    JLE 0x004c036a                      ; 004c0362
        ;   XREF to: 004c036a (CONDITIONAL_JUMP)  ; LAB_004c036a
    MOV dword ptr [EBX + 0x10c],ECX     ; 004c0364
    MOV ESI,dword ptr [EBX + 0x10b48]   ; 004c036a
        ;   Label: LAB_004c036a
    MOV EAX,dword ptr [EBX + 0x110]     ; 004c0370
    CMP EAX,ESI                         ; 004c0376
    JGE 0x004c0afb                      ; 004c0378
        ;   XREF to: 004c0afb (CONDITIONAL_JUMP)  ; LAB_004c0afb
    MOV EAX,[0x01c2a370]                ; 004c037e | DAT_01c2a370
    MOV ESI,dword ptr [EBX + 0x110]     ; 004c0383
    ADD ESI,EAX                         ; 004c0389
    MOV EDI,dword ptr [EBX + 0x10b48]   ; 004c038b
    MOV dword ptr [EBX + 0x110],ESI     ; 004c0391
    CMP ESI,EDI                         ; 004c0397
    JLE 0x004c00ec                      ; 004c0399
        ;   XREF to: 004c00ec (CONDITIONAL_JUMP)  ; LAB_004c00ec
    MOV dword ptr [EBX + 0x110],EDI     ; 004c039f
    LEA ESP,[EBP + 0x7a]                ; 004c03a5
    POP EBP                             ; 004c03a8
    POP EDI                             ; 004c03a9
    POP ESI                             ; 004c03aa
    POP EBX                             ; 004c03ab
    RET                                 ; 004c03ac
    PUSH 0x1                            ; 004c03ad
        ;   Label: LAB_004c03ad
    PUSH 0x0                            ; 004c03af
    MOV EAX,dword ptr [EBP + 0x72]      ; 004c03b1
    PUSH EAX                            ; 004c03b4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c03b5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c03ba
    PUSH EBX                            ; 004c03bd
    PUSH 0x5d8d6a                       ; 004c03be | s_s_confused_while_walking_005d8d69+1
    MOV EDX,dword ptr [0x00609ed0]      ; 004c03c3 | g_CConsolePtr
    PUSH EDX                            ; 004c03c9 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004c03ca
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x004c016c                      ; 004c03cf
        ;   XREF to: 004c016c (UNCONDITIONAL_JUMP)  ; LAB_004c016c
    JBE 0x004c015c                      ; 004c03d4
        ;   XREF to: 004c015c (CONDITIONAL_JUMP)  ; LAB_004c015c
        ;   Label: LAB_004c03d4
    CMP EAX,0x3                         ; 004c03da
    JZ 0x004c03ad                       ; 004c03dd
        ;   XREF to: 004c03ad (CONDITIONAL_JUMP)  ; LAB_004c03ad
    PUSH 0x1                            ; 004c03df
        ;   Label: LAB_004c03df
    PUSH 0x0                            ; 004c03e1
    JMP 0x004c0160                      ; 004c03e3
        ;   XREF to: 004c0160 (UNCONDITIONAL_JUMP)  ; LAB_004c0160
    LEA EAX,[EBP + 0xffffff0e]          ; 004c03e8
        ;   Label: caseD_3
    PUSH EAX                            ; 004c03ee
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004c03ef
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c03f4
    PUSH 0x40a00000                     ; 004c03f7
    PUSH 0x40400000                     ; 004c03fc
    LEA ESI,[EBP + -0x6e]               ; 004c0401
    CALL core_actor.cpp_FUN_0040cf60    ; 004c0404
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c0409
    ADD ESP,0x8                         ; 004c040c
    LEA EAX,[EBP + 0xffffff0e]          ; 004c040f
    MOV EDX,dword ptr [0x01cb8128]      ; 004c0415 | DAT_01cb8128
    PUSH EAX                            ; 004c041b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c041c
    MOV dword ptr [EBP + 0xffffff42],EBX ; 004c0423
    SUB EAX,EDX                         ; 004c0429
    MOV dword ptr [EBP + 0xffffff46],EBX ; 004c042b
    SHL EAX,0x4                         ; 004c0431
    LEA EDX,[EBX + 0x1134]              ; 004c0434
    PUSH 0x3ecccccd                     ; 004c043a
    ADD EAX,EDX                         ; 004c043f
    LEA EDI,[EBP + 0xffffff56]          ; 004c0441
    PUSH EAX                            ; 004c0447
    FLD float ptr [EBP + 0x76]          ; 004c0448
    PUSH 0x265370c                      ; 004c044b | DAT_0265370c
    FSTP float ptr [EBP + 0xffffff12]   ; 004c0450
    CALL core_xform.cpp_FUN_00591530    ; 004c0456
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004c045b
    LEA EAX,[EBP + 0xffffff56]          ; 004c045e
    LEA ESI,[EBP + -0x6e]               ; 004c0464
    PUSH EAX                            ; 004c0467
    MOVSD ES:EDI,ESI                    ; 004c0468
    MOVSD ES:EDI,ESI                    ; 004c0469
    MOVSD ES:EDI,ESI                    ; 004c046a
    PUSH EBX                            ; 004c046b
    LEA ESI,[EBP + -0x56]               ; 004c046c
    CALL core_actor.cpp_FUN_00408d70    ; 004c046f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c0474
    LEA EAX,[EBP + 0xffffff62]          ; 004c0477
    PUSH EAX                            ; 004c047d
    LEA EDI,[EBP + 0xffffff62]          ; 004c047e
    LEA ESI,[EBP + -0x56]               ; 004c0484
    PUSH EBX                            ; 004c0487
    MOVSD ES:EDI,ESI                    ; 004c0488
    MOVSD ES:EDI,ESI                    ; 004c0489
    MOVSD ES:EDI,ESI                    ; 004c048a
    CALL core_enemy.cpp_FUN_00488110    ; 004c048b
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004c0490
    JMP 0x004c0187                      ; 004c0493
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c0498
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c049e
    PUSH EBX                            ; 004c04a4
    CALL dword ptr [EAX + 0x150]        ; 004c04a5
    ADD ESP,0x8                         ; 004c04ab
    PUSH EBX                            ; 004c04ae
    CALL core_gargoyle.cpp_FUN_004bfea0 ; 004c04af
        ;   XREF to: 004bfea0 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_FUN_004bfea0()
    ADD ESP,0x4                         ; 004c04b4
    TEST EAX,EAX                        ; 004c04b7
    JZ 0x004c0187                       ; 004c04b9
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0x10b50]       ; 004c04bf
    FSUB float ptr [EBP + 0x92]         ; 004c04c5
    FST float ptr [EBX + 0x10b50]       ; 004c04cb
    FLDZ                                ; 004c04d1
    FCOMPP                              ; 004c04d3
    FNSTSW AX                           ; 004c04d5
    SAHF                                ; 004c04d7
    JBE 0x004c0187                      ; 004c04d8
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c04de
    PUSH 0x0                            ; 004c04e0
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c04e2
    PUSH ECX                            ; 004c04e5
    MOV dword ptr [EBX + 0x10b50],0x0   ; 004c04e6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c04f0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c04f5
    MOV ESI,dword ptr [EBX + 0x10b3c]   ; 004c04f8
    PUSH ESI                            ; 004c04fe
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004c04ff
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004c0504
    TEST EAX,EAX                        ; 004c0507
    JNZ 0x004c0187                      ; 004c0509
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5d8d94                       ; 004c050f | = "gargoyle-alive?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c0514
    PUSH EBX                            ; 004c051a
    CALL dword ptr [EAX + 0x34]         ; 004c051b
    ADD ESP,0x8                         ; 004c051e
    MOV dword ptr [EBX + 0x10b3c],EAX   ; 004c0521
    JMP 0x004c0187                      ; 004c0527
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c052c
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c0532
    PUSH EBX                            ; 004c0538
    CALL dword ptr [EAX + 0x150]        ; 004c0539
    ADD ESP,0x8                         ; 004c053f
    PUSH EBX                            ; 004c0542
    CALL core_gargoyle.cpp_FUN_004bfea0 ; 004c0543
        ;   XREF to: 004bfea0 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_FUN_004bfea0()
    ADD ESP,0x4                         ; 004c0548
    TEST EAX,EAX                        ; 004c054b
    JZ 0x004c0613                       ; 004c054d
        ;   XREF to: 004c0613 (CONDITIONAL_JUMP)  ; LAB_004c0613
    CMP dword ptr [EBX + 0x10b4c],0x0   ; 004c0553
    JNZ 0x004c0672                      ; 004c055a
        ;   XREF to: 004c0672 (CONDITIONAL_JUMP)  ; LAB_004c0672
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c0560
    TEST EDX,EDX                        ; 004c0566
    JZ 0x004c0714                       ; 004c0568
        ;   XREF to: 004c0714 (CONDITIONAL_JUMP)  ; LAB_004c0714
    FLD float ptr [EDX + 0x20]          ; 004c056e
    FLD float ptr [EDX + 0x24]          ; 004c0571
    FLD float ptr [EDX + 0x28]          ; 004c0574
    LEA EAX,[EBX + 0x20]                ; 004c0577
    LEA EDI,[EBP + 0x46]                ; 004c057a
    LEA ESI,[EBP + 0xffffff7a]          ; 004c057d
    FXCH ST2                            ; 004c0583
    FSUB float ptr [EAX]                ; 004c0585
    FXCH                                ; 004c0587
    FSUB float ptr [EAX + 0x4]          ; 004c0589
    FXCH ST2                            ; 004c058c
    FSUB float ptr [EAX + 0x8]          ; 004c058e
    FXCH                                ; 004c0591
    FSTP float ptr [EBP + 0xffffff7a]   ; 004c0593
    FXCH                                ; 004c0599
    FSTP float ptr [EBP + 0xffffff7e]   ; 004c059b
    FSTP float ptr [EBP + -0x7e]        ; 004c05a1
    MOVSD ES:EDI,ESI                    ; 004c05a4
    MOVSD ES:EDI,ESI                    ; 004c05a5
    MOVSD ES:EDI,ESI                    ; 004c05a6
    FLD float ptr [EBP + 0x4a]          ; 004c05a7
    FMUL ST0                            ; 004c05aa
    FLD float ptr [EBP + 0x46]          ; 004c05ac
    FMUL ST0                            ; 004c05af
    FADDP                               ; 004c05b1
    FLD float ptr [EBP + 0x4e]          ; 004c05b3
    FMUL ST0                            ; 004c05b6
    FADDP                               ; 004c05b8
    FSQRT                               ; 004c05ba
    FSTP float ptr [EBP + 0x52]         ; 004c05bc
    MOV EAX,dword ptr [EBP + 0x52]      ; 004c05bf
    FLD float ptr [EBP + 0x52]          ; 004c05c2
    MOV dword ptr [EBP + 0x62],EAX      ; 004c05c5
    FCOMP float ptr [0x005f75dc]        ; 004c05c8 | DAT_005f75dc
    FNSTSW AX                           ; 004c05ce
    SAHF                                ; 004c05d0
    JC 0x004c0687                       ; 004c05d1
        ;   XREF to: 004c0687 (CONDITIONAL_JUMP)  ; LAB_004c0687
    FLD float ptr [EBP + 0x62]          ; 004c05d7
        ;   Label: LAB_004c05d7
    FCOMP float ptr [EBX + 0x10a70]     ; 004c05da
    FNSTSW AX                           ; 004c05e0
    SAHF                                ; 004c05e2
    JNC 0x004c0187                      ; 004c05e3
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBP + 0x62]          ; 004c05e9
    LEA ESI,[EBX + 0x2b4]               ; 004c05ec
    FCOMP float ptr [0x005f75e8]        ; 004c05f2 | DAT_005f75e8
    FNSTSW AX                           ; 004c05f8
    SAHF                                ; 004c05fa
    JNC 0x004c06df                      ; 004c05fb
        ;   XREF to: 004c06df (CONDITIONAL_JUMP)  ; LAB_004c06df
    PUSH 0x1                            ; 004c0601
    PUSH 0x1                            ; 004c0603
    PUSH ESI                            ; 004c0605
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0606
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c060b
    JMP 0x004c0187                      ; 004c060e
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004c0613
        ;   Label: LAB_004c0613
    PUSH 0x0                            ; 004c0618
    CALL core_actor.cpp_FUN_0040cf60    ; 004c061a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 004c061f
    PUSH 0x1                            ; 004c0622
    MOV ESI,dword ptr [EBP + 0x72]      ; 004c0624
    MOV dword ptr [EBP + 0x76],EAX      ; 004c0627
    PUSH 0x5                            ; 004c062a
    FLD float ptr [EBP + 0x76]          ; 004c062c
    PUSH ESI                            ; 004c062f
    FSTP float ptr [EBX + 0x10b50]      ; 004c0630
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0636
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c063b
    MOV EDI,dword ptr [EBX + 0x10b3c]   ; 004c063e
    PUSH EDI                            ; 004c0644
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004c0645
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004c064a
    TEST EAX,EAX                        ; 004c064d
    JNZ 0x004c0187                      ; 004c064f
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5d8da8                       ; 004c0655 | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c065a
    PUSH EBX                            ; 004c0660
    CALL dword ptr [EAX + 0x34]         ; 004c0661
    ADD ESP,0x8                         ; 004c0664
    MOV dword ptr [EBX + 0x10b3c],EAX   ; 004c0667
    JMP 0x004c0187                      ; 004c066d
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c0672
        ;   Label: LAB_004c0672
    PUSH 0x1                            ; 004c0674
    MOV EDI,dword ptr [EBP + 0x72]      ; 004c0676
    PUSH EDI                            ; 004c0679
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c067a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c067f
    JMP 0x004c0187                      ; 004c0682
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + 0x46]                ; 004c0687
        ;   Label: LAB_004c0687
    PUSH EAX                            ; 004c068a
    LEA ESI,[EBP + -0x32]               ; 004c068b
    LEA EDI,[EBP + -0x26]               ; 004c068e
    CALL core_vecdir.cpp_FUN_005838f0   ; 004c0691
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + -0x32]               ; 004c0696
    MOVSD ES:EDI,ESI                    ; 004c0699
    MOVSD ES:EDI,ESI                    ; 004c069a
    MOVSD ES:EDI,ESI                    ; 004c069b
    ADD ESP,0x4                         ; 004c069c
    FLD float ptr [EBP + -0x22]         ; 004c069f
    FSUB float ptr [EBX + 0x34]         ; 004c06a2
    SUB ESP,0x4                         ; 004c06a5
    FSTP float ptr [ESP]                ; 004c06a8
    CALL core_actor.cpp_FUN_0040d0c0    ; 004c06ab
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c06b0
    FLD float ptr [EBP + 0x76]          ; 004c06b3
    FABS                                ; 004c06b6
    ADD ESP,0x4                         ; 004c06b8
    FCOMP double ptr [0x005d8dd2]       ; 004c06bb | DAT_005d8dd2
    FNSTSW AX                           ; 004c06c1
    SAHF                                ; 004c06c3
    JNC 0x004c05d7                      ; 004c06c4
        ;   XREF to: 004c05d7 (CONDITIONAL_JUMP)  ; LAB_004c05d7
    PUSH 0x1                            ; 004c06ca
    PUSH 0x3                            ; 004c06cc
    MOV ESI,dword ptr [EBP + 0x72]      ; 004c06ce
    PUSH ESI                            ; 004c06d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c06d2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c06d7
    JMP 0x004c05d7                      ; 004c06da
        ;   XREF to: 004c05d7 (UNCONDITIONAL_JUMP)  ; LAB_004c05d7
    PUSH 0x3dcccccd                     ; 004c06df
        ;   Label: LAB_004c06df
    CALL core_actor.cpp_FUN_0040d060    ; 004c06e4
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c06e9
    TEST EAX,EAX                        ; 004c06ec
    JZ 0x004c0702                       ; 004c06ee
        ;   XREF to: 004c0702 (CONDITIONAL_JUMP)  ; LAB_004c0702
    PUSH 0x1                            ; 004c06f0
    PUSH 0x4                            ; 004c06f2
    PUSH ESI                            ; 004c06f4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c06f5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c06fa
    JMP 0x004c0187                      ; 004c06fd
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c0702
        ;   Label: LAB_004c0702
    PUSH 0x2                            ; 004c0704
    PUSH ESI                            ; 004c0706
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0707
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c070c
    JMP 0x004c0187                      ; 004c070f
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c0714
        ;   Label: LAB_004c0714
    PUSH EBX                            ; 004c071a
    CALL core_enemy.cpp_FUN_00488970    ; 004c071b
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c0720
    TEST EAX,EAX                        ; 004c0723
    JZ 0x004c0187                       ; 004c0725
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c072b
    PUSH 0x1                            ; 004c072d
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c072f
    PUSH ECX                            ; 004c0732
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0733
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c0738
    JMP 0x004c0187                      ; 004c073b
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c0740
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c0746
    PUSH EBX                            ; 004c074c
    CALL dword ptr [EAX + 0x150]        ; 004c074d
    ADD ESP,0x8                         ; 004c0753
    PUSH EBX                            ; 004c0756
    CALL core_gargoyle.cpp_FUN_004bfea0 ; 004c0757
        ;   XREF to: 004bfea0 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_FUN_004bfea0()
    LEA EDX,[EBX + 0x2b4]               ; 004c075c
    ADD ESP,0x4                         ; 004c0762
    MOV dword ptr [EBP + 0x6e],EDX      ; 004c0765
    TEST EAX,EAX                        ; 004c0768
    JZ 0x004c07b9                       ; 004c076a
        ;   XREF to: 004c07b9 (CONDITIONAL_JUMP)  ; LAB_004c07b9
    MOV EDX,dword ptr [EBX + 0x10b4c]   ; 004c076c
    LEA EAX,[EBX + 0x2508]              ; 004c0772
    TEST EDX,EDX                        ; 004c0778
    JNZ 0x004c0818                      ; 004c077a
        ;   XREF to: 004c0818 (CONDITIONAL_JUMP)  ; LAB_004c0818
    CMP dword ptr [EBX + 0x10a78],0x0   ; 004c0780
    JNZ 0x004c0886                      ; 004c0787
        ;   XREF to: 004c0886 (CONDITIONAL_JUMP)  ; LAB_004c0886
    PUSH dword ptr [EBP + 0x92]         ; 004c078d
    PUSH EBX                            ; 004c0793
    CALL core_enemy.cpp_FUN_00488970    ; 004c0794
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c0799
    TEST EAX,EAX                        ; 004c079c
    JZ 0x004c0872                       ; 004c079e
        ;   XREF to: 004c0872 (CONDITIONAL_JUMP)  ; LAB_004c0872
    PUSH 0x1                            ; 004c07a4
    PUSH 0x1                            ; 004c07a6
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004c07a8
    PUSH EDI                            ; 004c07ab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c07ac
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c07b1
    JMP 0x004c0187                      ; 004c07b4
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004c07b9
        ;   Label: LAB_004c07b9
    PUSH 0x0                            ; 004c07be
    CALL core_actor.cpp_FUN_0040cf60    ; 004c07c0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 004c07c5
    PUSH 0x1                            ; 004c07c8
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004c07ca
    MOV dword ptr [EBP + 0x76],EAX      ; 004c07cd
    PUSH 0x5                            ; 004c07d0
    FLD float ptr [EBP + 0x76]          ; 004c07d2
    PUSH EDI                            ; 004c07d5
    FSTP float ptr [EBX + 0x10b50]      ; 004c07d6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c07dc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c07e1
    MOV EAX,dword ptr [EBX + 0x10b3c]   ; 004c07e4
    PUSH EAX                            ; 004c07ea
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004c07eb
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004c07f0
    TEST EAX,EAX                        ; 004c07f3
    JNZ 0x004c0187                      ; 004c07f5
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5d8dbb                       ; 004c07fb | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c0800
    PUSH EBX                            ; 004c0806
    CALL dword ptr [EAX + 0x34]         ; 004c0807
    ADD ESP,0x8                         ; 004c080a
    MOV dword ptr [EBX + 0x10b3c],EAX   ; 004c080d
    JMP 0x004c0187                      ; 004c0813
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EAX + 0x8],0x0       ; 004c0818
        ;   Label: LAB_004c0818
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c081f
    MOV dword ptr [EAX + 0x4],EDX       ; 004c0822
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c0825
    MOV dword ptr [EAX],EDX             ; 004c0828
    XOR EAX,EAX                         ; 004c082a
    PUSH 0x3e32b8c2                     ; 004c082c
    MOV dword ptr [EBP + -0x7a],EAX     ; 004c0831
    MOV dword ptr [EBP + -0x76],EAX     ; 004c0834
    MOV dword ptr [EBP + -0x72],EAX     ; 004c0837
    LEA EAX,[EBP + -0x7a]               ; 004c083a
    PUSH 0x3f000000                     ; 004c083d
    PUSH EAX                            ; 004c0842
    MOV EAX,dword ptr [EBX + 0x10b34]   ; 004c0843
    PUSH EAX                            ; 004c0849
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c084a
    CALL dword ptr [EDX + 0xcc]         ; 004c0850
    ADD ESP,0x4                         ; 004c0856
    PUSH EAX                            ; 004c0859
    MOV EAX,dword ptr [EBX + 0x10b34]   ; 004c085a
    ADD EAX,0x20                        ; 004c0860
    PUSH EAX                            ; 004c0863
    PUSH EBX                            ; 004c0864
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004c0865
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c086a
    JMP 0x004c0187                      ; 004c086d
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c0872
        ;   Label: LAB_004c0872
    PUSH EAX                            ; 004c0874
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004c0875
    PUSH ESI                            ; 004c0878
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0879
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c087e
    JMP 0x004c0187                      ; 004c0881
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e32b8c2                     ; 004c0886
        ;   Label: LAB_004c0886
    PUSH 0x3f000000                     ; 004c088b
    MOV EDX,dword ptr [0x005f75dc]      ; 004c0890 | DAT_005f75dc
    MOV dword ptr [EAX + 0x8],0x0       ; 004c0896
    XOR ESI,ESI                         ; 004c089d
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c089f
    MOV dword ptr [EAX + 0x4],ECX       ; 004c08a2
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c08a5
    MOV dword ptr [EAX],ECX             ; 004c08a8
    LEA EAX,[EBP + 0xa]                 ; 004c08aa
    MOV dword ptr [EBP + 0xa],ESI       ; 004c08ad
    MOV dword ptr [EBP + 0xe],ESI       ; 004c08b0
    MOV dword ptr [EBP + 0x12],EDX      ; 004c08b3
    PUSH EAX                            ; 004c08b6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c08b7
    PUSH EAX                            ; 004c08bd
    MOV dword ptr [EBP + 0x6a],EDX      ; 004c08be
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c08c1
    CALL dword ptr [EDX + 0xcc]         ; 004c08c7
    ADD ESP,0x4                         ; 004c08cd
    PUSH EAX                            ; 004c08d0
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c08d1
    ADD EAX,0x20                        ; 004c08d7
    PUSH EAX                            ; 004c08da
    PUSH EBX                            ; 004c08db
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004c08dc
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c08e1
    TEST EAX,EAX                        ; 004c08e4
    JL 0x004c0187                       ; 004c08e6
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    LEA EDI,[EBP + 0x3a]                ; 004c08ec
    LEA EAX,[EBX + 0x20]                ; 004c08ef
    LEA ESI,[EBP + -0x4a]               ; 004c08f2
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c08f5
    FLD float ptr [EAX]                 ; 004c08fb
    FLD float ptr [EAX + 0x4]           ; 004c08fd
    FLD float ptr [EAX + 0x8]           ; 004c0900
    FXCH ST2                            ; 004c0903
    FSUB float ptr [EDX + 0x20]         ; 004c0905
    FXCH                                ; 004c0908
    FSUB float ptr [EDX + 0x24]         ; 004c090a
    FXCH ST2                            ; 004c090d
    FSUB float ptr [EDX + 0x28]         ; 004c090f
    FXCH                                ; 004c0912
    FSTP float ptr [EBP + -0x4a]        ; 004c0914
    FXCH                                ; 004c0917
    FSTP float ptr [EBP + -0x46]        ; 004c0919
    FSTP float ptr [EBP + -0x42]        ; 004c091c
    MOVSD ES:EDI,ESI                    ; 004c091f
    MOVSD ES:EDI,ESI                    ; 004c0920
    MOVSD ES:EDI,ESI                    ; 004c0921
    FLD float ptr [EBP + 0x3a]          ; 004c0922
    FMUL ST0                            ; 004c0925
    FLD float ptr [EBP + 0x42]          ; 004c0927
    FMUL ST0                            ; 004c092a
    XOR EAX,EAX                         ; 004c092c
    FADDP                               ; 004c092e
    MOV dword ptr [EBP + 0x3e],EAX      ; 004c0930
    FSQRT                               ; 004c0933
    FSTP float ptr [EBP + 0x5a]         ; 004c0935
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004c0938
    FLD float ptr [EBP + 0x5a]          ; 004c093b
    MOV dword ptr [EBP + 0x66],EAX      ; 004c093e
    FCOMP float ptr [0x005f75e8]        ; 004c0941 | DAT_005f75e8
    FNSTSW AX                           ; 004c0947
    SAHF                                ; 004c0949
    JBE 0x004c0971                      ; 004c094a
        ;   XREF to: 004c0971 (CONDITIONAL_JUMP)  ; LAB_004c0971
    PUSH 0x3dcccccd                     ; 004c094c
    CALL core_actor.cpp_FUN_0040d060    ; 004c0951
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c0956
    TEST EAX,EAX                        ; 004c0959
    JZ 0x004c0a57                       ; 004c095b
        ;   XREF to: 004c0a57 (CONDITIONAL_JUMP)  ; LAB_004c0a57
    PUSH 0x1                            ; 004c0961
    PUSH 0x4                            ; 004c0963
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004c0965
    PUSH ECX                            ; 004c0968
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0969
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004c0969
    ADD ESP,0xc                         ; 004c096e
    FLD float ptr [EBP + 0x66]          ; 004c0971
        ;   Label: LAB_004c0971
    FCOMP float ptr [EBP + 0x6a]        ; 004c0974
    FNSTSW AX                           ; 004c0977
    SAHF                                ; 004c0979
    JA 0x004c0a2d                       ; 004c097a
        ;   XREF to: 004c0a2d (CONDITIONAL_JUMP)  ; LAB_004c0a2d
    FLD float ptr [EBX + 0x10a74]       ; 004c0980
    FLDZ                                ; 004c0986
    FCOMPP                              ; 004c0988
    FNSTSW AX                           ; 004c098a
    SAHF                                ; 004c098c
    JC 0x004c0a2d                       ; 004c098d
        ;   XREF to: 004c0a2d (CONDITIONAL_JUMP)  ; LAB_004c0a2d
    LEA EDI,[EBP + 0x16]                ; 004c0993
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c0996
    LEA ESI,[EBP + 0xffffff4a]          ; 004c099c
    LEA EDX,[EBX + 0x20]                ; 004c09a2
    FLD float ptr [EAX + 0x24]          ; 004c09a5
    FLD float ptr [EAX + 0x28]          ; 004c09a8
    FLD float ptr [EAX + 0x20]          ; 004c09ab
    LEA EAX,[EBP + 0x16]                ; 004c09ae
    FSUB float ptr [EDX]                ; 004c09b1
    FXCH ST2                            ; 004c09b3
    FSUB float ptr [EDX + 0x4]          ; 004c09b5
    FXCH                                ; 004c09b8
    FSUB float ptr [EDX + 0x8]          ; 004c09ba
    FXCH ST2                            ; 004c09bd
    FSTP float ptr [EBP + 0xffffff4a]   ; 004c09bf
    FSTP float ptr [EBP + 0xffffff4e]   ; 004c09c5
    FSTP float ptr [EBP + 0xffffff52]   ; 004c09cb
    MOVSD ES:EDI,ESI                    ; 004c09d1
    MOVSD ES:EDI,ESI                    ; 004c09d2
    MOVSD ES:EDI,ESI                    ; 004c09d3
    PUSH EAX                            ; 004c09d4
    LEA ESI,[EBP + 0x2e]                ; 004c09d5
    LEA EDI,[EBP + 0x22]                ; 004c09d8
    CALL core_vecdir.cpp_FUN_005838f0   ; 004c09db
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + 0x2e]                ; 004c09e0
    MOVSD ES:EDI,ESI                    ; 004c09e3
    MOVSD ES:EDI,ESI                    ; 004c09e4
    MOVSD ES:EDI,ESI                    ; 004c09e5
    ADD ESP,0x4                         ; 004c09e6
    FLD float ptr [EBP + 0x26]          ; 004c09e9
    FSUB float ptr [EBX + 0x34]         ; 004c09ec
    SUB ESP,0x4                         ; 004c09ef
    FSTP float ptr [ESP]                ; 004c09f2
    CALL core_actor.cpp_FUN_0040d0c0    ; 004c09f5
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c09fa
    FLD float ptr [EBP + 0x76]          ; 004c09fd
    FABS                                ; 004c0a00
    ADD ESP,0x4                         ; 004c0a02
    FCOMP double ptr [0x005d8dd2]       ; 004c0a05 | DAT_005d8dd2
    FNSTSW AX                           ; 004c0a0b
    SAHF                                ; 004c0a0d
    JNC 0x004c0a2d                      ; 004c0a0e
        ;   XREF to: 004c0a2d (CONDITIONAL_JUMP)  ; LAB_004c0a2d
    PUSH 0x1                            ; 004c0a10
    PUSH 0x3                            ; 004c0a12
    LEA EAX,[EBX + 0x2b4]               ; 004c0a14
    PUSH EAX                            ; 004c0a1a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0a1b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c0a20
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 004c0a23
    FLD float ptr [EBP + 0x66]          ; 004c0a2d
        ;   Label: LAB_004c0a2d
    FCOMP float ptr [EBX + 0x10a70]     ; 004c0a30
    FNSTSW AX                           ; 004c0a36
    SAHF                                ; 004c0a38
    JBE 0x004c0187                      ; 004c0a39
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c0a3f
    PUSH 0x0                            ; 004c0a41
    LEA EAX,[EBX + 0x2b4]               ; 004c0a43
    PUSH EAX                            ; 004c0a49
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c0a4a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c0a4f
    JMP 0x004c0187                      ; 004c0a52
        ;   XREF to: 004c0187 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c0a57
        ;   Label: LAB_004c0a57
    PUSH 0x2                            ; 004c0a59
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004c0a5b
    PUSH EDX                            ; 004c0a5e
    JMP 0x004c0969                      ; 004c0a5f
        ;   XREF to: 004c0969 (UNCONDITIONAL_JUMP)  ; LAB_004c0969
    CMP ESI,0x5                         ; 004c0a64
        ;   Label: LAB_004c0a64
    JA 0x004c0187                       ; 004c0a67
        ;   XREF to: 004c0187 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [ESI*0x4 + 0x4c0034]  ; 004c0a6d | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0x10b44],0xffff ; 004c0a74
        ;   Label: LAB_004c0a74
    MOV dword ptr [EBX + 0x10b48],0xffff ; 004c0a7e
    MOV dword ptr [EBX + 0x10b40],0xffff ; 004c0a88
    JMP 0x004c02fc                      ; 004c0a92
        ;   XREF to: 004c02fc (UNCONDITIONAL_JUMP)  ; LAB_004c02fc
    JLE 0x004c0333                      ; 004c0a97
        ;   XREF to: 004c0333 (CONDITIONAL_JUMP)  ; LAB_004c0333
        ;   Label: LAB_004c0a97
    MOV EAX,[0x01c2a370]                ; 004c0a9d | DAT_01c2a370
    MOV EDX,dword ptr [EBX + 0x108]     ; 004c0aa2
    SUB EDX,EAX                         ; 004c0aa8
    MOV ECX,dword ptr [EBX + 0x10b40]   ; 004c0aaa
    MOV dword ptr [EBX + 0x108],EDX     ; 004c0ab0
    CMP EDX,ECX                         ; 004c0ab6
    JGE 0x004c0333                      ; 004c0ab8
        ;   XREF to: 004c0333 (CONDITIONAL_JUMP)  ; LAB_004c0333
    MOV dword ptr [EBX + 0x108],ECX     ; 004c0abe
    JMP 0x004c0333                      ; 004c0ac4
        ;   XREF to: 004c0333 (UNCONDITIONAL_JUMP)  ; LAB_004c0333
    JLE 0x004c036a                      ; 004c0ac9
        ;   XREF to: 004c036a (CONDITIONAL_JUMP)  ; LAB_004c036a
        ;   Label: LAB_004c0ac9
    MOV EAX,[0x01c2a370]                ; 004c0acf | DAT_01c2a370
    MOV ESI,dword ptr [EBX + 0x10c]     ; 004c0ad4
    SUB ESI,EAX                         ; 004c0ada
    MOV EDI,dword ptr [EBX + 0x10b44]   ; 004c0adc
    MOV dword ptr [EBX + 0x10c],ESI     ; 004c0ae2
    CMP ESI,EDI                         ; 004c0ae8
    JGE 0x004c036a                      ; 004c0aea
        ;   XREF to: 004c036a (CONDITIONAL_JUMP)  ; LAB_004c036a
    MOV dword ptr [EBX + 0x10c],EDI     ; 004c0af0
    JMP 0x004c036a                      ; 004c0af6
        ;   XREF to: 004c036a (UNCONDITIONAL_JUMP)  ; LAB_004c036a
    JLE 0x004c00ec                      ; 004c0afb
        ;   XREF to: 004c00ec (CONDITIONAL_JUMP)  ; LAB_004c00ec
        ;   Label: LAB_004c0afb
    MOV EAX,[0x01c2a370]                ; 004c0b01 | DAT_01c2a370
    MOV EDX,dword ptr [EBX + 0x110]     ; 004c0b06
    SUB EDX,EAX                         ; 004c0b0c
    MOV ECX,dword ptr [EBX + 0x10b48]   ; 004c0b0e
    MOV dword ptr [EBX + 0x110],EDX     ; 004c0b14
    CMP EDX,ECX                         ; 004c0b1a
    JGE 0x004c00ec                      ; 004c0b1c
        ;   XREF to: 004c00ec (CONDITIONAL_JUMP)  ; LAB_004c00ec
    MOV dword ptr [EBX + 0x110],ECX     ; 004c0b22
    LEA ESP,[EBP + 0x7a]                ; 004c0b28
    POP EBP                             ; 004c0b2b
    POP EDI                             ; 004c0b2c
    POP ESI                             ; 004c0b2d
    POP EBX                             ; 004c0b2e
    RET                                 ; 004c0b2f

