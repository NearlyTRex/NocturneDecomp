; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_FUN_00445130(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00445114 = 004454fa
;   TerminatedCString s_s_confused_while_walking_005b992a
;   TerminatedCString s_cow_wav_005b9954
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005b995d
;   undefined4 DAT_005ddba8
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   CConsole g_CConsoleInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_0040ce40
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00431660
;   core_charactr.cpp_FUN_00433350
;   core_charactr.cpp_FUN_00433fb0
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_enemy.cpp_FUN_004893f0
;   core_enemy.cpp_FUN_00489ff0
;   core_gore.cpp_FUN_004cec40
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445130
        ;   Label: core_cow.cpp_FUN_00445130
    PUSH ESI                            ; 00445131
    PUSH EDI                            ; 00445132
    PUSH EBP                            ; 00445133
    MOV EBP,ESP                         ; 00445134
    SUB ESP,0xfc                        ; 00445136
    SUB EBP,0x7a                        ; 0044513c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0044513f
    PUSH dword ptr [EBP + 0x92]         ; 00445145
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044514b
    PUSH EBX                            ; 00445151
    CALL dword ptr [EAX + 0x148]        ; 00445152
    ADD ESP,0x8                         ; 00445158
    TEST EAX,EAX                        ; 0044515b
    JZ 0x00445394                       ; 0044515d
        ;   XREF to: 00445394 (CONDITIONAL_JUMP)  ; LAB_00445394
    LEA EAX,[EBX + 0x249c]              ; 00445163
    MOV dword ptr [EAX + 0x8],0x0       ; 00445169
    FLD float ptr [EBP + 0x92]          ; 00445170
    MOV EDX,dword ptr [EAX + 0x8]       ; 00445176
    MOV dword ptr [EAX + 0x4],EDX       ; 00445179
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044517c
    MOV dword ptr [EAX],EDX             ; 0044517f
    FMUL float ptr [EBX + 0xcdcc]       ; 00445181
    LEA ESI,[EBX + 0x158]               ; 00445187
    FSTP float ptr [EBP + 0x6e]         ; 0044518d
    FLD float ptr [EBP + 0x6e]          ; 00445190
        ;   Label: LAB_00445190
    FLDZ                                ; 00445193
    FCOMPP                              ; 00445195
    FNSTSW AX                           ; 00445197
    SAHF                                ; 00445199
    JC 0x0044539c                       ; 0044519a
        ;   XREF to: 0044539c (CONDITIONAL_JUMP)  ; LAB_0044539c
    FLD float ptr [EBP + 0x92]          ; 004451a0
    FMUL float ptr [EBX + 0xcdcc]       ; 004451a6
    SUB ESP,0x4                         ; 004451ac
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004451af
    MOV dword ptr [EBX + 0x2524],EAX    ; 004451b5
    FSTP float ptr [ESP]                ; 004451bb
    PUSH EBX                            ; 004451be
    CALL core_charactr.cpp_FUN_00434850 ; 004451bf
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 004451c4
    PUSH ESI                            ; 004451c7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004451c8
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004451cd
    PUSH dword ptr [EBP + 0x92]         ; 004451d0
    PUSH EBX                            ; 004451d6
    MOV EDI,dword ptr [EAX + 0x24]      ; 004451d7
    CALL core_charactr.cpp_FUN_00431660 ; 004451da
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004451df
    TEST EAX,EAX                        ; 004451e2
    JZ 0x0044569a                       ; 004451e4
        ;   XREF to: 0044569a (CONDITIONAL_JUMP)  ; LAB_0044569a
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004451ea
    CMP EAX,0x2                         ; 004451f0
    JNC 0x004453dc                      ; 004451f3
        ;   XREF to: 004453dc (CONDITIONAL_JUMP)  ; LAB_004453dc
    CMP EAX,0x1                         ; 004451f9
    JNZ 0x004453e7                      ; 004451fc
        ;   XREF to: 004453e7 (CONDITIONAL_JUMP)  ; LAB_004453e7
    PUSH 0x1                            ; 00445202
        ;   Label: LAB_00445202
    PUSH 0x1                            ; 00445204
    LEA EAX,[EBX + 0x158]               ; 00445206
        ;   Label: LAB_00445206
    PUSH EAX                            ; 0044520c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0044520d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00445212
        ;   Label: LAB_00445212
    LEA EAX,[EBX + 0x249c]              ; 00445215
    MOV dword ptr [EAX + 0x8],0x0       ; 0044521b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00445222
    MOV dword ptr [EAX + 0x4],EDX       ; 00445225
    MOV EDX,dword ptr [EAX + 0x4]       ; 00445228
    MOV dword ptr [EAX],EDX             ; 0044522b
    FLD float ptr [EBX + 0xcde0]        ; 0044522d
        ;   Label: caseD_3
    FLDZ                                ; 00445233
    FCOMPP                              ; 00445235
    FNSTSW AX                           ; 00445237
    SAHF                                ; 00445239
    JNC 0x0044524e                      ; 0044523a
        ;   XREF to: 0044524e (CONDITIONAL_JUMP)  ; LAB_0044524e
    FLD float ptr [EBX + 0xcde0]        ; 0044523c
    FSUB float ptr [EBP + 0x92]         ; 00445242
    FSTP float ptr [EBX + 0xcde0]       ; 00445248
    PUSH EBX                            ; 0044524e
        ;   Label: LAB_0044524e
    CALL core_charactr.cpp_FUN_0042ccf0 ; 0044524f
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00445254
    TEST EAX,EAX                        ; 00445257
    JZ 0x0044536d                       ; 00445259
        ;   XREF to: 0044536d (CONDITIONAL_JUMP)  ; LAB_0044536d
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0044525f
    TEST ECX,ECX                        ; 00445265
    JZ 0x00445293                       ; 00445267
        ;   XREF to: 00445293 (CONDITIONAL_JUMP)  ; LAB_00445293
    PUSH ECX                            ; 00445269
    MOV EDX,dword ptr [ECX + 0x154]     ; 0044526a
    CALL dword ptr [EDX + 0xf4]         ; 00445270
    ADD ESP,0x4                         ; 00445276
    CMP EAX,EBX                         ; 00445279
    JNZ 0x00445293                      ; 0044527b
        ;   XREF to: 00445293 (CONDITIONAL_JUMP)  ; LAB_00445293
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0044527d
    PUSH ESI                            ; 00445283
    MOV EDI,dword ptr [0x00603b28]      ; 00445284 | g_CDemonSetPtr
    PUSH EDI                            ; 0044528a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0044528b
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00445290
    PUSH dword ptr [EBP + 0x92]         ; 00445293
        ;   Label: LAB_00445293
    PUSH EBX                            ; 00445299
    LEA ESI,[EBX + 0x2518]              ; 0044529a
    CALL core_charactr.cpp_FUN_0042c1e0 ; 004452a0
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 004452a5
    FMUL float ptr [EBP + 0x92]         ; 004452a7
    FLD float ptr [ESI + 0x4]           ; 004452ad
    FMUL float ptr [EBP + 0x92]         ; 004452b0
    FLD float ptr [ESI + 0x8]           ; 004452b6
    FMUL float ptr [EBP + 0x92]         ; 004452b9
    LEA EDI,[EBP + 0x1a]                ; 004452bf
    LEA ESI,[EBP + -0x3a]               ; 004452c2
    FXCH ST2                            ; 004452c5
    FSTP float ptr [EBP + -0x3a]        ; 004452c7
    FSTP float ptr [EBP + -0x36]        ; 004452ca
    FSTP float ptr [EBP + -0x32]        ; 004452cd
    MOVSD ES:EDI,ESI                    ; 004452d0
    MOVSD ES:EDI,ESI                    ; 004452d1
    MOVSD ES:EDI,ESI                    ; 004452d2
    LEA EDX,[EBX + 0x250c]              ; 004452d3
    FLD float ptr [EBP + 0x1a]          ; 004452d9
    FLD float ptr [EBP + 0x1e]          ; 004452dc
    FLD float ptr [EBP + 0x22]          ; 004452df
    LEA EDI,[EBP + 0x62]                ; 004452e2
    LEA ESI,[EBP + -0xa]                ; 004452e5
    FXCH ST2                            ; 004452e8
    FADD float ptr [EDX]                ; 004452ea
    FXCH                                ; 004452ec
    FADD float ptr [EDX + 0x4]          ; 004452ee
    FXCH ST2                            ; 004452f1
    FADD float ptr [EDX + 0x8]          ; 004452f3
    FXCH                                ; 004452f6
    FSTP float ptr [EBP + -0xa]         ; 004452f8
    FXCH                                ; 004452fb
    FSTP float ptr [EBP + -0x6]         ; 004452fd
    FSTP float ptr [EBP + -0x2]         ; 00445300
    MOVSD ES:EDI,ESI                    ; 00445303
    MOVSD ES:EDI,ESI                    ; 00445304
    MOVSD ES:EDI,ESI                    ; 00445305
    LEA EAX,[EBX + 0x249c]              ; 00445306
    FLD float ptr [EBP + 0x62]          ; 0044530c
    FLD float ptr [EBP + 0x66]          ; 0044530f
    FLD float ptr [EBP + 0x6a]          ; 00445312
    LEA EDI,[EBP + 0xe]                 ; 00445315
    LEA ESI,[EBP + -0x22]               ; 00445318
    FXCH ST2                            ; 0044531b
    FADD float ptr [EAX]                ; 0044531d
    FXCH                                ; 0044531f
    FADD float ptr [EAX + 0x4]          ; 00445321
    FXCH ST2                            ; 00445324
    FADD float ptr [EAX + 0x8]          ; 00445326
    FXCH                                ; 00445329
    FSTP float ptr [EBP + -0x22]        ; 0044532b
    FXCH                                ; 0044532e
    FSTP float ptr [EBP + -0x1e]        ; 00445330
    FSTP float ptr [EBP + -0x1a]        ; 00445333
    MOVSD ES:EDI,ESI                    ; 00445336
    MOVSD ES:EDI,ESI                    ; 00445337
    MOVSD ES:EDI,ESI                    ; 00445338
    MOV dword ptr [EDX + 0x8],0x0       ; 00445339
    MOV ECX,dword ptr [EDX + 0x8]       ; 00445340
    MOV dword ptr [EDX + 0x4],ECX       ; 00445343
    MOV ECX,dword ptr [EDX + 0x4]       ; 00445346
    MOV dword ptr [EDX],ECX             ; 00445349
    MOV dword ptr [EAX + 0x8],0x0       ; 0044534b
    ADD ESP,0x8                         ; 00445352
    MOV EDX,dword ptr [EAX + 0x8]       ; 00445355
    MOV dword ptr [EAX + 0x4],EDX       ; 00445358
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044535b
    MOV dword ptr [EAX],EDX             ; 0044535e
    LEA EAX,[EBP + 0xe]                 ; 00445360
    PUSH EAX                            ; 00445363
    PUSH EBX                            ; 00445364
    CALL core_charactr.cpp_FUN_0042c230 ; 00445365
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0044536a
    PUSH EBX                            ; 0044536d
        ;   Label: LAB_0044536d
    CALL core_charactr.cpp_FUN_0042cd30 ; 0044536e
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00445373
    LEA EAX,[EBX + 0x158]               ; 00445376
    PUSH EAX                            ; 0044537c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0044537d
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00445382
    PUSH dword ptr [EBP + 0x92]         ; 00445385
    PUSH EBX                            ; 0044538b
    CALL core_charactr.cpp_FUN_00433350 ; 0044538c
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00445391
    LEA ESP,[EBP + 0x7a]                ; 00445394
        ;   Label: LAB_00445394
    POP EBP                             ; 00445397
    POP EDI                             ; 00445398
    POP ESI                             ; 00445399
    POP EBX                             ; 0044539a
    RET                                 ; 0044539b
    LEA EAX,[EBP + 0x6e]                ; 0044539c
        ;   Label: LAB_0044539c
    PUSH EAX                            ; 0044539f
    PUSH ESI                            ; 004453a0
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 004453a1
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004453a6
    PUSH EAX                            ; 004453a9
    PUSH EBX                            ; 004453aa
    CALL core_charactr.cpp_FUN_00433fb0 ; 004453ab
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004453b0
    JMP 0x00445190                      ; 004453b3
        ;   XREF to: 00445190 (UNCONDITIONAL_JUMP)  ; LAB_00445190
    PUSH 0x1                            ; 004453b8
        ;   Label: LAB_004453b8
    PUSH 0x0                            ; 004453ba
    PUSH ESI                            ; 004453bc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004453bd
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004453c2
    PUSH EBX                            ; 004453c5
    PUSH 0x5b992a                       ; 004453c6 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 004453cb | g_CConsolePtr
    PUSH EDX                            ; 004453d1 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004453d2
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x00445212                      ; 004453d7
        ;   XREF to: 00445212 (UNCONDITIONAL_JUMP)  ; LAB_00445212
    JBE 0x00445202                      ; 004453dc
        ;   XREF to: 00445202 (CONDITIONAL_JUMP)  ; LAB_00445202
        ;   Label: LAB_004453dc
    CMP EAX,0x3                         ; 004453e2
    JZ 0x004453b8                       ; 004453e5
        ;   XREF to: 004453b8 (CONDITIONAL_JUMP)  ; LAB_004453b8
    PUSH 0x1                            ; 004453e7
        ;   Label: LAB_004453e7
    PUSH 0x0                            ; 004453e9
    JMP 0x00445206                      ; 004453eb
        ;   XREF to: 00445206 (UNCONDITIONAL_JUMP)  ; LAB_00445206
    LEA EAX,[EBP + 0xffffff7e]          ; 004453f0
        ;   Label: caseD_2
    PUSH EAX                            ; 004453f6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004453f7
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004453fc
    PUSH 0x41700000                     ; 004453ff
    PUSH 0x40e00000                     ; 00445404
    CALL core_actor.cpp_FUN_0040ce40    ; 00445409
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 0044540e
    MOV dword ptr [EBP + -0x4e],EBX     ; 00445411
    MOV dword ptr [EBP + -0x4a],EBX     ; 00445414
    ADD ESP,0x8                         ; 00445417
    FLD float ptr [EBP + 0x76]          ; 0044541a
    LEA EAX,[EBP + 0xffffff7e]          ; 0044541d
    FSTP float ptr [EBP + -0x7e]        ; 00445423
    MOV EDX,dword ptr [EBX + 0xd058]    ; 00445426
    PUSH EAX                            ; 0044542c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044542d
    SUB EAX,EDX                         ; 00445434
    MOV EDX,EAX                         ; 00445436
    SHL EDX,0x4                         ; 00445438
    LEA EAX,[EBX + 0xfd8]               ; 0044543b
    ADD EAX,EDX                         ; 00445441
    PUSH 0x3f333333                     ; 00445443
    PUSH EAX                            ; 00445448
    PUSH 0x2cfd900                      ; 00445449 | DAT_02cfd900
    LEA ESI,[EBP + -0x46]               ; 0044544e
    LEA EDI,[EBP + 0x32]                ; 00445451
    CALL core_xform.cpp_FUN_00583260    ; 00445454
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00445459
    LEA EAX,[EBP + 0x32]                ; 0044545c
    LEA ESI,[EBP + -0x46]               ; 0044545f
    PUSH EAX                            ; 00445462
    MOVSD ES:EDI,ESI                    ; 00445463
    MOVSD ES:EDI,ESI                    ; 00445464
    MOVSD ES:EDI,ESI                    ; 00445465
    PUSH EBX                            ; 00445466
    LEA ESI,[EBP + 0x2]                 ; 00445467
    CALL core_actor.cpp_FUN_00408b80    ; 0044546a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0044546f
    LEA EAX,[EBP + -0x16]               ; 00445472
    PUSH EAX                            ; 00445475
    LEA EDI,[EBP + -0x16]               ; 00445476
    LEA ESI,[EBP + 0x2]                 ; 00445479
    PUSH EBX                            ; 0044547c
    MOVSD ES:EDI,ESI                    ; 0044547d
    MOVSD ES:EDI,ESI                    ; 0044547e
    MOVSD ES:EDI,ESI                    ; 0044547f
    CALL core_enemy.cpp_FUN_004893f0    ; 00445480
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 00445485
    JMP 0x0044522d                      ; 00445488
        ;   XREF to: 0044522d (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 0044548d
        ;   Label: caseD_5
    JNZ 0x0044522d                      ; 00445494
        ;   XREF to: 0044522d (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 0044549a
    JNZ 0x0044522d                      ; 004454a1
        ;   XREF to: 0044522d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EAX                            ; 004454a7
    PUSH ESI                            ; 004454a8
    LEA ESI,[EBP + 0x56]                ; 004454a9
    LEA EDI,[EBP + 0x4a]                ; 004454ac
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004454af
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004454b4
    LEA EAX,[EBP + 0x4a]                ; 004454b7
    LEA ESI,[EBP + 0x56]                ; 004454ba
    PUSH EAX                            ; 004454bd
    MOVSD ES:EDI,ESI                    ; 004454be
    MOVSD ES:EDI,ESI                    ; 004454bf
    MOVSD ES:EDI,ESI                    ; 004454c0
    PUSH EBX                            ; 004454c1
    LEA ESI,[EBP + -0x2e]               ; 004454c2
    LEA EDI,[EBP + 0x3e]                ; 004454c5
    CALL core_actor.cpp_FUN_00408b80    ; 004454c8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004454cd
    LEA ESI,[EBP + -0x2e]               ; 004454d0
    LEA EAX,[EBP + 0x3e]                ; 004454d3
    PUSH 0x0                            ; 004454d6
    MOVSD ES:EDI,ESI                    ; 004454d8
    MOVSD ES:EDI,ESI                    ; 004454d9
    MOVSD ES:EDI,ESI                    ; 004454da
    PUSH EAX                            ; 004454db
    MOV ESI,dword ptr [0x005fed24]      ; 004454dc | g_CGorePtr
    PUSH ESI                            ; 004454e2
    CALL core_gore.cpp_FUN_004cec40     ; 004454e3
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004454e8
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 004454eb
    JMP 0x0044522d                      ; 004454f5
        ;   XREF to: 0044522d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004454fa
        ;   Label: caseD_0
    PUSH EBX                            ; 00445500
    CALL core_enemy.cpp_FUN_00489ff0    ; 00445501
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00445506
    TEST EAX,EAX                        ; 00445509
    JZ 0x0044551f                       ; 0044550b
        ;   XREF to: 0044551f (CONDITIONAL_JUMP)  ; LAB_0044551f
    PUSH 0x1                            ; 0044550d
    PUSH 0x1                            ; 0044550f
    PUSH ESI                            ; 00445511
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00445512
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00445517
    JMP 0x0044522d                      ; 0044551a
        ;   XREF to: 0044522d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0044551f
        ;   Label: LAB_0044551f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445525
    PUSH EBX                            ; 0044552b
    CALL dword ptr [EAX + 0x144]        ; 0044552c
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00445532
    ADD ESP,0x8                         ; 00445538
    TEST ESI,ESI                        ; 0044553b
    JZ 0x0044522d                       ; 0044553d
        ;   XREF to: 0044522d (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [EBX + 0xd05c]    ; 00445543
    PUSH EDI                            ; 00445549
    MOV EAX,[0x006045f8]                ; 0044554a | DAT_006045f8
    PUSH EAX                            ; 0044554f
    CALL core_sound.cpp_FUN_00560af0    ; 00445550
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00445555
    TEST EAX,EAX                        ; 00445558
    JNZ 0x00445574                      ; 0044555a
        ;   XREF to: 00445574 (CONDITIONAL_JUMP)  ; LAB_00445574
    PUSH 0x5b9954                       ; 0044555c | = "cow?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445561
    PUSH EBX                            ; 00445567
    CALL dword ptr [EAX + 0x2c]         ; 00445568
    ADD ESP,0x8                         ; 0044556b
    MOV dword ptr [EBX + 0xd05c],EAX    ; 0044556e
    PUSH 0x1                            ; 00445574
        ;   Label: LAB_00445574
    PUSH 0x1                            ; 00445576
    LEA EAX,[EBX + 0x158]               ; 00445578
    PUSH EAX                            ; 0044557e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0044557f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00445584
    JMP 0x0044522d                      ; 00445587
        ;   XREF to: 0044522d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0044558c
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445592
    PUSH EBX                            ; 00445598
    CALL dword ptr [EAX + 0x144]        ; 00445599
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0044559f
    ADD ESP,0x8                         ; 004455a5
    TEST EDI,EDI                        ; 004455a8
    JNZ 0x004455d4                      ; 004455aa
        ;   XREF to: 004455d4 (CONDITIONAL_JUMP)  ; LAB_004455d4
    PUSH dword ptr [EBP + 0x92]         ; 004455ac
    PUSH EBX                            ; 004455b2
    CALL core_enemy.cpp_FUN_00489ff0    ; 004455b3
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004455b8
    TEST EAX,EAX                        ; 004455bb
    JNZ 0x0044522d                      ; 004455bd
        ;   XREF to: 0044522d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004455c3
    PUSH EDI                            ; 004455c5
    PUSH ESI                            ; 004455c6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004455c7
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004455cc
    JMP 0x0044522d                      ; 004455cf
        ;   XREF to: 0044522d (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x005ddba8]                ; 004455d4 | DAT_005ddba8
        ;   Label: LAB_004455d4
    MOV dword ptr [EBP + 0x72],EAX      ; 004455d9
    LEA EAX,[EBX + 0x249c]              ; 004455dc
    MOV dword ptr [EAX + 0x8],0x0       ; 004455e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004455e9
    MOV dword ptr [EAX + 0x4],EDX       ; 004455ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 004455ef
    MOV dword ptr [EAX],EDX             ; 004455f2
    XOR EAX,EAX                         ; 004455f4
    MOV dword ptr [EBP + 0x26],EAX      ; 004455f6
    MOV dword ptr [EBP + 0x2a],EAX      ; 004455f9
    MOV EAX,dword ptr [EBP + 0x72]      ; 004455fc
    PUSH 0x3e32b8c2                     ; 004455ff
    MOV dword ptr [EBP + 0x2e],EAX      ; 00445604
    LEA EAX,[EBP + 0x26]                ; 00445607
    PUSH 0x3f000000                     ; 0044560a
    PUSH EAX                            ; 0044560f
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00445610
    PUSH EAX                            ; 00445616
    MOV EDX,dword ptr [EAX + 0x154]     ; 00445617
    CALL dword ptr [EDX + 0xc4]         ; 0044561d
    ADD ESP,0x4                         ; 00445623
    PUSH EAX                            ; 00445626
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00445627
    ADD EAX,0x20                        ; 0044562d
    PUSH EAX                            ; 00445630
    PUSH EBX                            ; 00445631
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00445632
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00445637
    TEST EAX,EAX                        ; 0044563a
    JL 0x00445673                       ; 0044563c
        ;   XREF to: 00445673 (CONDITIONAL_JUMP)  ; LAB_00445673
    JLE 0x0044522d                      ; 0044563e
        ;   XREF to: 0044522d (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xcde0]        ; 00445644
    FLDZ                                ; 0044564a
    FCOMPP                              ; 0044564c
    FNSTSW AX                           ; 0044564e
    SAHF                                ; 00445650
    JC 0x0044522d                       ; 00445651
        ;   XREF to: 0044522d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00445657
    PUSH 0x2                            ; 00445659
    PUSH ESI                            ; 0044565b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0044565c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00445661
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00445664
    JMP 0x0044522d                      ; 0044566e
        ;   XREF to: 0044522d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 00445673
        ;   Label: LAB_00445673
    PUSH 0x5b995d                       ; 00445674 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005f1690]      ; 00445679 | g_CConsolePtr
    PUSH ECX                            ; 0044567f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00445680
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00445685
    PUSH 0x1                            ; 00445688
    PUSH 0x0                            ; 0044568a
    PUSH ESI                            ; 0044568c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0044568d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00445692
    JMP 0x0044522d                      ; 00445695
        ;   XREF to: 0044522d (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP EDI,0x5                         ; 0044569a
        ;   Label: LAB_0044569a
    JA 0x0044522d                       ; 0044569d
        ;   XREF to: 0044522d (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x445114]  ; 004456a3 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

