; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b32d0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* switchdataD_004b32a4 = 004b35d3
;   TerminatedCString s_s_confused_while_walking_0058554e
;   double DOUBLE_0058557d = 12.5663706140000
;   double DOUBLE_00585585 = 0.333333333333333
;   double DOUBLE_0058558d = 32
;   double DOUBLE_00585595 = -1.57079632675000
;   float FLOAT_0058559d = 3.141593
;   double DOUBLE_005855a5 = 1.57079632675000
;   double DOUBLE_005855ad = 1.59386252192652E-314
;   double DOUBLE_005855b5 = 3.14159265350000
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b9354
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01c77814
;   undefined4 DAT_01cae018
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_haystack.cpp_CHaystack_advanceMotion_FUN_004b3e00
;   core_haystack.cpp_CHaystack_updateAI_FUN_004b3880
;   core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
;   core_hero.cpp_CHero_tryInteract_FUN_004b4e90
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b32d0
        ;   Label: FUN_004b32d0
    PUSH ESI                            ; 004b32d1
    PUSH EDI                            ; 004b32d2
    PUSH EBP                            ; 004b32d3
    MOV EBP,ESP                         ; 004b32d4
    SUB ESP,0x7c                        ; 004b32d6
    AND ESP,0xfffffff8                  ; 004b32d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b32dc
    PUSH dword ptr [EBP + 0x18]         ; 004b32df
    PUSH EBX                            ; 004b32e2
    CALL core_charactr.cpp_FUN_004259f0 ; 004b32e3
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 004b32e8
    TEST EAX,EAX                        ; 004b32eb
    JZ 0x004b3578                       ; 004b32ed
        ;   XREF to: 004b3578 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0xbc90],0x2    ; 004b32f3
    JZ 0x004b357f                       ; 004b32fa
        ;   XREF to: 004b357f (CONDITIONAL_JUMP)  ; LAB_004b357f
    FLD float ptr [EBP + 0x18]          ; 004b3300
        ;   Label: LAB_004b3300
    FMUL double ptr [0x0058557d]        ; 004b3303 | DOUBLE_0058557d
    MOV EAX,[0x005b9354]                ; 004b3309 | DAT_005b9354
    FSTP float ptr [EBX + 0x2430]       ; 004b330e
    CMP dword ptr [EAX + 0x228],0x0     ; 004b3314 | DAT_01c77814
    JZ 0x004b332f                       ; 004b331b
        ;   XREF to: 004b332f (CONDITIONAL_JUMP)  ; LAB_004b332f
    FLD float ptr [EBX + 0x2430]        ; 004b331d
    FMUL double ptr [0x00585585]        ; 004b3323 | DOUBLE_00585585
    FSTP float ptr [EBX + 0x2430]       ; 004b3329
    FLD float ptr [EBX + 0xbc8c]        ; 004b332f
        ;   Label: LAB_004b332f
    FSUB float ptr [EBP + 0x18]         ; 004b3335
    FST float ptr [EBX + 0xbc8c]        ; 004b3338
    FLDZ                                ; 004b333e
    FCOMPP                              ; 004b3340
    FNSTSW AX                           ; 004b3342
    SAHF                                ; 004b3344
    JBE 0x004b3351                      ; 004b3345
        ;   XREF to: 004b3351 (CONDITIONAL_JUMP)  ; LAB_004b3351
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 004b3347
    LEA EAX,[EBX + 0x23a4]              ; 004b3351
        ;   Label: LAB_004b3351
    PUSH dword ptr [EBP + 0x18]         ; 004b3357
    MOV dword ptr [EAX + 0x8],0x0       ; 004b335a
    PUSH EBX                            ; 004b3361
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b3362
    MOV dword ptr [EAX + 0x4],EDX       ; 004b3365
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b3368
    MOV dword ptr [EAX],EDX             ; 004b336b
    CALL core_haystack.cpp_CHaystack_advanceMotion_FUN_004b3e00 ; 004b336d
        ;   XREF to: 004b3e00 (UNCONDITIONAL_CALL)  ; undefined core_haystack.cpp_CHaystack_advanceMotion_FUN_004b3e00()
    ADD ESP,0x8                         ; 004b3372
    PUSH dword ptr [EBP + 0x18]         ; 004b3375
    PUSH EBX                            ; 004b3378
    CALL core_charactr.cpp_FUN_00428c00 ; 004b3379
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    MOV ESI,EAX                         ; 004b337e
    ADD ESP,0x8                         ; 004b3380
    LEA EAX,[EBX + 0x150]               ; 004b3383
    TEST ESI,ESI                        ; 004b3389
    JZ 0x004b3749                       ; 004b338b
        ;   XREF to: 004b3749 (CONDITIONAL_JUMP)  ; LAB_004b3749
    MOV ESI,dword ptr [EBX + 0x25a8]    ; 004b3391
    CMP ESI,0x2                         ; 004b3397
    JNC 0x004b35bd                      ; 004b339a
        ;   XREF to: 004b35bd (CONDITIONAL_JUMP)  ; LAB_004b35bd
    CMP ESI,0x1                         ; 004b33a0
    JNZ 0x004b35c4                      ; 004b33a3
        ;   XREF to: 004b35c4 (CONDITIONAL_JUMP)  ; LAB_004b35c4
    PUSH ESI                            ; 004b33a9
    PUSH ESI                            ; 004b33aa
    PUSH EAX                            ; 004b33ab
        ;   Label: LAB_004b33ab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b33ac
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_004b33ac
    ADD ESP,0xc                         ; 004b33b1
        ;   Label: LAB_004b33b1
    MOV EAX,dword ptr [EBX + 0x2590]    ; 004b33b4
        ;   Label: caseD_4
    TEST EAX,EAX                        ; 004b33ba
    JZ 0x004b3787                       ; 004b33bc
        ;   XREF to: 004b3787 (CONDITIONAL_JUMP)  ; LAB_004b3787
    CMP dword ptr [EBX + 0x2594],0x0    ; 004b33c2
    JNZ 0x004b3483                      ; 004b33c9
        ;   XREF to: 004b3483 (CONDITIONAL_JUMP)  ; LAB_004b3483
    ADD EAX,0x20                        ; 004b33cf
    PUSH EAX                            ; 004b33d2
    LEA EAX,[ESP + 0x34]                ; 004b33d3
    PUSH EAX                            ; 004b33d7
    PUSH EBX                            ; 004b33d8
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004b33d9
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004b33de
    PUSH EAX                            ; 004b33e1
    LEA EAX,[ESP + 0x40]                ; 004b33e2
    PUSH EAX                            ; 004b33e6
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b33e7
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004b33ec
    PUSH dword ptr [EAX + 0x4]          ; 004b33ef
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b33f2
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x7c],EAX      ; 004b33f7
    FLD float ptr [ESP + 0x7c]          ; 004b33fb
    ADD ESP,0x4                         ; 004b33ff
    FST float ptr [ESP]                 ; 004b3402
    FCOMP double ptr [0x00585595]       ; 004b3405 | DOUBLE_00585595
    FNSTSW AX                           ; 004b340b
    SAHF                                ; 004b340d
    JNC 0x004b341c                      ; 004b340e
        ;   XREF to: 004b341c (CONDITIONAL_JUMP)  ; LAB_004b341c
    FLD float ptr [ESP]                 ; 004b3410
    FADD float ptr [0x0058559d]         ; 004b3413 | FLOAT_0058559d
    FSTP float ptr [ESP]                ; 004b3419
    FLD float ptr [ESP]                 ; 004b341c
        ;   Label: LAB_004b341c
    FCOMP double ptr [0x005855a5]       ; 004b341f | DOUBLE_005855a5
    FNSTSW AX                           ; 004b3425
    SAHF                                ; 004b3427
    JBE 0x004b3436                      ; 004b3428
        ;   XREF to: 004b3436 (CONDITIONAL_JUMP)  ; LAB_004b3436
    FLD float ptr [ESP]                 ; 004b342a
    FADD float ptr [0x005855ad]         ; 004b342d | DOUBLE_005855ad
    FSTP float ptr [ESP]                ; 004b3433
    FLD float ptr [EBP + 0x18]          ; 004b3436
        ;   Label: LAB_004b3436
    FMUL double ptr [0x005855b5]        ; 004b3439 | DOUBLE_005855b5
    FLD float ptr [ESP]                 ; 004b343f
    FXCH                                ; 004b3442
    FST float ptr [ESP + 0x70]          ; 004b3444
    FCHS                                ; 004b3448
    FSTP float ptr [ESP + 0x68]         ; 004b344a
    FCOMP float ptr [ESP + 0x68]        ; 004b344e
    FNSTSW AX                           ; 004b3452
    SAHF                                ; 004b3454
    JNC 0x004b345e                      ; 004b3455
        ;   XREF to: 004b345e (CONDITIONAL_JUMP)  ; LAB_004b345e
    MOV EAX,dword ptr [ESP + 0x68]      ; 004b3457
    MOV dword ptr [ESP],EAX             ; 004b345b
    FLD float ptr [ESP]                 ; 004b345e
        ;   Label: LAB_004b345e
    FCOMP float ptr [ESP + 0x70]        ; 004b3461
    FNSTSW AX                           ; 004b3465
    SAHF                                ; 004b3467
    JBE 0x004b3471                      ; 004b3468
        ;   XREF to: 004b3471 (CONDITIONAL_JUMP)  ; LAB_004b3471
    MOV EAX,dword ptr [ESP + 0x70]      ; 004b346a
    MOV dword ptr [ESP],EAX             ; 004b346e
    FLD float ptr [EBX + 0x34]          ; 004b3471
        ;   Label: LAB_004b3471
    FADD float ptr [ESP]                ; 004b3474
    PUSH EBX                            ; 004b3477
    FSTP float ptr [EBX + 0x34]         ; 004b3478
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004b347b
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 004b3480
    MOV ESI,dword ptr [EBX + 0x2590]    ; 004b3483
        ;   Label: LAB_004b3483
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004b3489
    PUSH 0x0                            ; 004b348f
    MOV dword ptr [ESP + 0x7c],EAX      ; 004b3491
    LEA EAX,[ESP + 0x4c]                ; 004b3495
    PUSH EAX                            ; 004b3499
    LEA EDI,[EBX + 0x150]               ; 004b349a
    PUSH EDI                            ; 004b34a0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004b34a1
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004b34a6
    PUSH EAX                            ; 004b34a9
    PUSH EBX                            ; 004b34aa
    MOV EAX,dword ptr [ESP + 0x80]      ; 004b34ab
    PUSH ESI                            ; 004b34b2
    CALL dword ptr [EAX + 0x108]        ; 004b34b3
    ADD ESP,0xc                         ; 004b34b9
    TEST EAX,EAX                        ; 004b34bc
    JZ 0x004b3765                       ; 004b34be
        ;   XREF to: 004b3765 (CONDITIONAL_JUMP)  ; LAB_004b3765
    CMP dword ptr [EBX + 0x2590],0x0    ; 004b34c4
    JNZ 0x004b3770                      ; 004b34cb
        ;   XREF to: 004b3770 (CONDITIONAL_JUMP)  ; LAB_004b3770
    PUSH 0x1                            ; 004b34d1
        ;   Label: LAB_004b34d1
    PUSH 0x0                            ; 004b34d3
    LEA EAX,[EBX + 0x150]               ; 004b34d5
    PUSH EAX                            ; 004b34db
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b34dc
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_004b34dc
    ADD ESP,0xc                         ; 004b34e1
    PUSH EBX                            ; 004b34e4
        ;   Label: LAB_004b34e4
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004b34e5
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 004b34ea
    LEA EAX,[EBX + 0x150]               ; 004b34ed
    PUSH EAX                            ; 004b34f3
    MOV dword ptr [ESP + 0x70],EAX      ; 004b34f4
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004b34f8
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 004b34fd
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b3500
    PUSH EBX                            ; 004b3506
    CALL dword ptr [EAX + 0x104]        ; 004b3507
    ADD ESP,0x4                         ; 004b350d
    TEST EAX,EAX                        ; 004b3510
    JNZ 0x004b356c                      ; 004b3512
        ;   XREF to: 004b356c (CONDITIONAL_JUMP)  ; LAB_004b356c
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004b3514
    PUSH ESI                            ; 004b3518
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b3519
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b351e
    ADD ESP,0x4                         ; 004b3521
    CMP EAX,0x13                        ; 004b3524
    JZ 0x004b356c                       ; 004b3527
        ;   XREF to: 004b356c (CONDITIONAL_JUMP)  ; LAB_004b356c
    PUSH 0x51b650                       ; 004b3529
    MOV EDI,dword ptr [0x01cae018]      ; 004b352e | DAT_01cae018
    PUSH EDI                            ; 004b3534
    LEA EAX,[EBX + 0x1fa44]             ; 004b3535
    PUSH dword ptr [EBX + 0x1fa50]      ; 004b353b
    PUSH EAX                            ; 004b3541
    LEA ESI,[ESP + 0x14]                ; 004b3542
    CALL core_xform.cpp_FUN_0055d610    ; 004b3546
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    ADD ESP,0x4                         ; 004b354b
    LEA EAX,[ESP + 0x20]                ; 004b354e
    LEA EDI,[ESP + 0x20]                ; 004b3552
    PUSH EAX                            ; 004b3556
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004b3557
    LEA ESI,[ESP + 0x14]                ; 004b355b
    PUSH EAX                            ; 004b355f
    MOVSD ES:EDI,ESI                    ; 004b3560
    MOVSD ES:EDI,ESI                    ; 004b3561
    MOVSD ES:EDI,ESI                    ; 004b3562
    MOVSD ES:EDI,ESI                    ; 004b3563
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 004b3564
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0()
    ADD ESP,0x14                        ; 004b3569
    PUSH dword ptr [EBP + 0x18]         ; 004b356c
        ;   Label: LAB_004b356c
    PUSH EBX                            ; 004b356f
    CALL core_charactr.cpp_FUN_0042a150 ; 004b3570
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 004b3575
    MOV ESP,EBP                         ; 004b3578
        ;   Label: caseD_9
    POP EBP                             ; 004b357a
    POP EDI                             ; 004b357b
    POP ESI                             ; 004b357c
    POP EBX                             ; 004b357d
    RET                                 ; 004b357e
    PUSH dword ptr [EBP + 0x18]         ; 004b357f
        ;   Label: LAB_004b357f
    PUSH EBX                            ; 004b3582
    CALL core_haystack.cpp_CHaystack_updateAI_FUN_004b3880 ; 004b3583
        ;   XREF to: 004b3880 (UNCONDITIONAL_CALL)  ; undefined core_haystack.cpp_CHaystack_updateAI_FUN_004b3880()
    ADD ESP,0x8                         ; 004b3588
    JMP 0x004b3300                      ; 004b358b
        ;   XREF to: 004b3300 (UNCONDITIONAL_JUMP)  ; LAB_004b3300
    PUSH 0x1                            ; 004b3590
        ;   Label: LAB_004b3590
    PUSH 0x0                            ; 004b3592
    PUSH EAX                            ; 004b3594
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b3595
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004b359a
    PUSH EBX                            ; 004b359d
    PUSH 0x58554e                       ; 004b359e | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005ad350]      ; 004b35a3 | PTR_DAT_005ad350
    PUSH EDI                            ; 004b35a9 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b35aa
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004b33b1                      ; 004b35af
        ;   XREF to: 004b33b1 (UNCONDITIONAL_JUMP)  ; LAB_004b33b1
    PUSH 0x1                            ; 004b35b4
        ;   Label: LAB_004b35b4
    PUSH 0x2                            ; 004b35b6
    JMP 0x004b33ab                      ; 004b35b8
        ;   XREF to: 004b33ab (UNCONDITIONAL_JUMP)  ; LAB_004b33ab
    JBE 0x004b35b4                      ; 004b35bd
        ;   XREF to: 004b35b4 (CONDITIONAL_JUMP)  ; LAB_004b35b4
        ;   Label: LAB_004b35bd
    CMP ESI,0x3                         ; 004b35bf
    JZ 0x004b3590                       ; 004b35c2
        ;   XREF to: 004b3590 (CONDITIONAL_JUMP)  ; LAB_004b3590
    PUSH 0x1                            ; 004b35c4
        ;   Label: LAB_004b35c4
    PUSH 0x0                            ; 004b35c6
    LEA EAX,[EBX + 0x150]               ; 004b35c8
    JMP 0x004b33ab                      ; 004b35ce
        ;   XREF to: 004b33ab (UNCONDITIONAL_JUMP)  ; LAB_004b33ab
    CMP dword ptr [EBX + 0x2408],0x0    ; 004b35d3
        ;   Label: caseD_0
    JZ 0x004b33b4                       ; 004b35da
        ;   XREF to: 004b33b4 (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0x1fa3c]   ; 004b35e0
    XOR ESI,ESI                         ; 004b35e6
    TEST EDI,EDI                        ; 004b35e8
    JZ 0x004b35f1                       ; 004b35ea
        ;   XREF to: 004b35f1 (CONDITIONAL_JUMP)  ; LAB_004b35f1
    MOV ESI,0xa                         ; 004b35ec
    CMP dword ptr [EBX + 0xbc94],0x0    ; 004b35f1
        ;   Label: LAB_004b35f1
    JZ 0x004b360c                       ; 004b35f8
        ;   XREF to: 004b360c (CONDITIONAL_JUMP)  ; LAB_004b360c
    CMP dword ptr [EBX + 0xbc9c],0x0    ; 004b35fa
    JZ 0x004b36bc                       ; 004b3601
        ;   XREF to: 004b36bc (CONDITIONAL_JUMP)  ; LAB_004b36bc
    MOV ESI,0x2                         ; 004b3607
    CMP dword ptr [EBX + 0xbc98],0x0    ; 004b360c
        ;   Label: LAB_004b360c
    JZ 0x004b361a                       ; 004b3613
        ;   XREF to: 004b361a (CONDITIONAL_JUMP)  ; LAB_004b361a
    MOV ESI,0x3                         ; 004b3615
    CMP dword ptr [EBX + 0xbcac],0x0    ; 004b361a
        ;   Label: LAB_004b361a
    JZ 0x004b364e                       ; 004b3621
        ;   XREF to: 004b364e (CONDITIONAL_JUMP)  ; LAB_004b364e
    MOV EDX,dword ptr [EBX + 0x1fa3c]   ; 004b3623
    MOV dword ptr [EBX + 0xbcac],0x0    ; 004b3629
    TEST EDX,EDX                        ; 004b3633
    SETZ AL                             ; 004b3635
    AND EAX,0xff                        ; 004b3638
    MOV dword ptr [EBX + 0x1fa3c],EAX   ; 004b363d
    JZ 0x004b36c6                       ; 004b3643
        ;   XREF to: 004b36c6 (CONDITIONAL_JUMP)  ; LAB_004b36c6
    MOV ESI,0xa                         ; 004b3649
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004b364e
        ;   Label: LAB_004b364e
    JZ 0x004b3687                       ; 004b3655
        ;   XREF to: 004b3687 (CONDITIONAL_JUMP)  ; LAB_004b3687
    MOV EAX,dword ptr [EBX + 0x1fa3c]   ; 004b3657
    MOV EDI,0x1                         ; 004b365d
    TEST EAX,EAX                        ; 004b3662
    JZ 0x004b36ca                       ; 004b3664
        ;   XREF to: 004b36ca (CONDITIONAL_JUMP)  ; LAB_004b36ca
    TEST EDI,EDI                        ; 004b3666
        ;   Label: LAB_004b3666
    JZ 0x004b3687                       ; 004b3668
        ;   XREF to: 004b3687 (CONDITIONAL_JUMP)  ; LAB_004b3687
    MOV ESI,dword ptr [EBX + 0x1fa40]   ; 004b366a
        ;   Label: LAB_004b366a
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004b3670
    TEST ESI,ESI                        ; 004b367a
    JZ 0x004b373f                       ; 004b367c
        ;   XREF to: 004b373f (CONDITIONAL_JUMP)  ; LAB_004b373f
    MOV ESI,0xe                         ; 004b3682
    FLD float ptr [EBX + 0xbcb8]        ; 004b3687
        ;   Label: LAB_004b3687
    LEA EDI,[EBX + 0x150]               ; 004b368d
    FMUL float ptr [EBX + 0x2430]       ; 004b3693
    PUSH EDI                            ; 004b3699
    FSTP float ptr [EBX + 0x2410]       ; 004b369a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b36a0
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b36a5
    ADD ESP,0x4                         ; 004b36a8
    CMP ESI,EAX                         ; 004b36ab
    JZ 0x004b33b4                       ; 004b36ad
        ;   XREF to: 004b33b4 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004b36b3
    PUSH ESI                            ; 004b36b5
    PUSH EDI                            ; 004b36b6
    JMP 0x004b33ac                      ; 004b36b7
        ;   XREF to: 004b33ac (UNCONDITIONAL_JUMP)  ; LAB_004b33ac
    MOV ESI,0x1                         ; 004b36bc
        ;   Label: LAB_004b36bc
    JMP 0x004b360c                      ; 004b36c1
        ;   XREF to: 004b360c (UNCONDITIONAL_JUMP)  ; LAB_004b360c
    XOR ESI,ESI                         ; 004b36c6
        ;   Label: LAB_004b36c6
    JMP 0x004b364e                      ; 004b36c8
        ;   XREF to: 004b364e (UNCONDITIONAL_JUMP)  ; LAB_004b364e
    CMP dword ptr [EBX + 0xbc90],0x2    ; 004b36ca
        ;   Label: LAB_004b36ca
    JZ 0x004b3666                       ; 004b36d1
        ;   XREF to: 004b3666 (CONDITIONAL_JUMP)  ; LAB_004b3666
    PUSH EBX                            ; 004b36d3
    CALL core_hero.cpp_CHero_tryInteract_FUN_004b4e90 ; 004b36d4
        ;   XREF to: 004b4e90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_tryInteract_FUN_004b4e90()
    XOR EDI,EDI                         ; 004b36d9
    ADD ESP,0x4                         ; 004b36db
    TEST EAX,EAX                        ; 004b36de
    JNZ 0x004b3666                      ; 004b36e0
        ;   XREF to: 004b3666 (CONDITIONAL_JUMP)  ; LAB_004b3666
    PUSH EBX                            ; 004b36e2
    CALL FUN_004b5110                   ; 004b36e3
        ;   XREF to: 004b5110 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5110()
    ADD ESP,0x4                         ; 004b36e8
    MOV dword ptr [ESP + 0x74],EAX      ; 004b36eb
    TEST EAX,EAX                        ; 004b36ef
    JBE 0x004b36f8                      ; 004b36f1
        ;   XREF to: 004b36f8 (CONDITIONAL_JUMP)  ; LAB_004b36f8
    CMP EAX,0x1                         ; 004b36f3
    JNZ 0x004b3726                      ; 004b36f6
        ;   XREF to: 004b3726 (CONDITIONAL_JUMP)  ; LAB_004b3726
    CMP dword ptr [ESP + 0x74],0x0      ; 004b36f8
        ;   Label: LAB_004b36f8
    JNZ 0x004b3666                      ; 004b36fd
        ;   XREF to: 004b3666 (CONDITIONAL_JUMP)  ; LAB_004b3666
    PUSH EBX                            ; 004b3703
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0 ; 004b3704
        ;   XREF to: 004b4fe0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0()
    ADD ESP,0x4                         ; 004b3709
    TEST EAX,EAX                        ; 004b370c
    JNZ 0x004b3666                      ; 004b370e
        ;   XREF to: 004b3666 (CONDITIONAL_JUMP)  ; LAB_004b3666
    PUSH EBX                            ; 004b3714
    CALL FUN_004b52f0                   ; 004b3715
        ;   XREF to: 004b52f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b52f0()
    ADD ESP,0x4                         ; 004b371a
    TEST EAX,EAX                        ; 004b371d
    JNZ 0x004b3731                      ; 004b371f
        ;   XREF to: 004b3731 (CONDITIONAL_JUMP)  ; LAB_004b3731
    JMP 0x004b366a                      ; 004b3721
        ;   XREF to: 004b366a (UNCONDITIONAL_JUMP)  ; LAB_004b366a
    PUSH EBX                            ; 004b3726
        ;   Label: LAB_004b3726
    CALL FUN_004b5270                   ; 004b3727
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5270()
    ADD ESP,0x4                         ; 004b372c
    JMP 0x004b36f8                      ; 004b372f
        ;   XREF to: 004b36f8 (UNCONDITIONAL_JUMP)  ; LAB_004b36f8
    PUSH EBX                            ; 004b3731
        ;   Label: LAB_004b3731
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004b5490 ; 004b3732
        ;   XREF to: 004b5490 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_executeLeverPull_FUN_004b5490()
    ADD ESP,0x4                         ; 004b3737
    JMP 0x004b3666                      ; 004b373a
        ;   XREF to: 004b3666 (UNCONDITIONAL_JUMP)  ; LAB_004b3666
    MOV ESI,0xf                         ; 004b373f
        ;   Label: LAB_004b373f
    JMP 0x004b3687                      ; 004b3744
        ;   XREF to: 004b3687 (UNCONDITIONAL_JUMP)  ; LAB_004b3687
    PUSH EAX                            ; 004b3749
        ;   Label: LAB_004b3749
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b374a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b374f
    ADD ESP,0x4                         ; 004b3752
    CMP EAX,0xa                         ; 004b3755
    JA 0x004b33b4                       ; 004b3758
        ;   XREF to: 004b33b4 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x4b32a4]  ; 004b375e | caseD_a | caseD_8 | caseD_9
        ;   Label: switchD
    MOV dword ptr [EBX + 0x2590],EAX    ; 004b3765
        ;   Label: LAB_004b3765
    JMP 0x004b34d1                      ; 004b376b
        ;   XREF to: 004b34d1 (UNCONDITIONAL_JUMP)  ; LAB_004b34d1
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004b3770
        ;   Label: LAB_004b3770
    JZ 0x004b34e4                       ; 004b3777
        ;   XREF to: 004b34e4 (CONDITIONAL_JUMP)  ; LAB_004b34e4
    PUSH 0x1                            ; 004b377d
    PUSH 0x11                           ; 004b377f
    PUSH EDI                            ; 004b3781
    JMP 0x004b34dc                      ; 004b3782
        ;   XREF to: 004b34dc (UNCONDITIONAL_JUMP)  ; LAB_004b34dc
    FLD float ptr [EBP + 0x18]          ; 004b3787
        ;   Label: LAB_004b3787
    FMUL double ptr [0x0058558d]        ; 004b378a | DOUBLE_0058558d
    LEA ESI,[EBX + 0x23a4]              ; 004b3790
    FLD float ptr [EBX + 0x2424]        ; 004b3796
    FXCH                                ; 004b379c
    FSUBR ST0,ST1                       ; 004b379e
    LEA EAX,[EBX + 0x2414]              ; 004b37a0
    FSTP ST1                            ; 004b37a6
    FSTP float ptr [EBX + 0x2424]       ; 004b37a8
    FLD float ptr [ESI]                 ; 004b37ae
    FADD float ptr [EAX]                ; 004b37b0
    FSTP float ptr [ESP + 0x54]         ; 004b37b2
    FLD float ptr [ESI + 0x4]           ; 004b37b6
    FADD float ptr [EAX + 0x4]          ; 004b37b9
    FSTP float ptr [ESP + 0x58]         ; 004b37bc
    FLD float ptr [ESI + 0x8]           ; 004b37c0
    FADD float ptr [EAX + 0x8]          ; 004b37c3
    FSTP float ptr [ESP + 0x5c]         ; 004b37c6
    MOV dword ptr [ESI + 0x8],0x0       ; 004b37ca
    MOV EDX,dword ptr [ESI + 0x8]       ; 004b37d1
    MOV dword ptr [ESI + 0x4],EDX       ; 004b37d4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004b37d7
    MOV dword ptr [ESI],EDX             ; 004b37da
    MOV dword ptr [EAX + 0x8],0x0       ; 004b37dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b37e3
    MOV dword ptr [EAX + 0x4],EDX       ; 004b37e6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b37e9
    MOV dword ptr [EAX],EDX             ; 004b37ec
    LEA EAX,[EBX + 0x150]               ; 004b37ee
    PUSH EAX                            ; 004b37f4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b37f5
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b37fa
    ADD ESP,0x4                         ; 004b37fd
    CMP EAX,0xe                         ; 004b3800
    JNZ 0x004b3871                      ; 004b3803
        ;   XREF to: 004b3871 (CONDITIONAL_JUMP)  ; LAB_004b3871
    XOR EDX,EDX                         ; 004b3805
        ;   Label: LAB_004b3805
    MOV dword ptr [ESP + 0x58],EDX      ; 004b3807
    MOV dword ptr [ESP + 0x54],EDX      ; 004b380b
    MOV dword ptr [ESP + 0x5c],EDX      ; 004b380f
    LEA EAX,[EBX + 0x2420]              ; 004b3813
        ;   Label: LAB_004b3813
    FLD float ptr [EBP + 0x18]          ; 004b3819
    FLD float ptr [EAX]                 ; 004b381c
    FMUL ST1                            ; 004b381e
    FSTP float ptr [ESP + 0x24]         ; 004b3820
    FLD float ptr [EAX + 0x4]           ; 004b3824
    FMUL ST1                            ; 004b3827
    FSTP float ptr [ESP + 0x28]         ; 004b3829
    FMUL float ptr [EAX + 0x8]          ; 004b382d
    FLD float ptr [ESP + 0x58]          ; 004b3830
    FLD float ptr [ESP + 0x54]          ; 004b3834
    FADD float ptr [ESP + 0x24]         ; 004b3838
    FLD float ptr [ESP + 0x5c]          ; 004b383c
    FXCH                                ; 004b3840
    FSTP float ptr [ESP + 0x54]         ; 004b3842
    FXCH                                ; 004b3846
    FADD float ptr [ESP + 0x28]         ; 004b3848
    LEA EAX,[ESP + 0x54]                ; 004b384c
    FSTP float ptr [ESP + 0x58]         ; 004b3850
    FXCH                                ; 004b3854
    FSTP float ptr [ESP + 0x2c]         ; 004b3856
    PUSH EAX                            ; 004b385a
    FADD float ptr [ESP + 0x30]         ; 004b385b
    PUSH EBX                            ; 004b385f
    FSTP float ptr [ESP + 0x64]         ; 004b3860
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004b3864
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 004b3869
    JMP 0x004b34e4                      ; 004b386c
        ;   XREF to: 004b34e4 (UNCONDITIONAL_JUMP)  ; LAB_004b34e4
    CMP EAX,0xf                         ; 004b3871
        ;   Label: LAB_004b3871
    JZ 0x004b3805                       ; 004b3874
        ;   XREF to: 004b3805 (CONDITIONAL_JUMP)  ; LAB_004b3805
    JMP 0x004b3813                      ; 004b3876
        ;   XREF to: 004b3813 (UNCONDITIONAL_JUMP)  ; LAB_004b3813

