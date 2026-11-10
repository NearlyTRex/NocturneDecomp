; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spirindi_cpp_CSpiritIndian_process_FUN_0059a2b0(CSpiritIndian *this_ptr,float delta_time)
;
; Parameters:
; CSpiritIndian *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_STAND_005d9a78
;   TerminatedCString s_s_confused_while_walking_005d9a7e
;   undefined4 DAT_005d9aa8
;   undefined4 DAT_005d9aac
;   TerminatedCString s_STAND_005d9ab1
;   undefined4 DAT_005d9ab9
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   undefined4 DAT_00600530
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_gore.cpp_CGore_createBloodPool_FUN_004cec40
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_FUN_004f6f10
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a2b0
        ;   Label: core_spirindi.cpp_CSpiritIndian_process_FUN_0059a2b0
    PUSH ESI                            ; 0059a2b1
    PUSH EDI                            ; 0059a2b2
    PUSH EBP                            ; 0059a2b3
    MOV EBP,ESP                         ; 0059a2b4
    SUB ESP,0xa0                        ; 0059a2b6
    AND ESP,0xfffffff8                  ; 0059a2bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059a2bf
    PUSH dword ptr [EBP + 0x18]         ; 0059a2c2
    PUSH EBX                            ; 0059a2c5
    CALL core_charactr.cpp_FUN_00433c60 ; 0059a2c6
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    LEA EAX,[EBX + 0x249c]              ; 0059a2cb
    MOV EDX,0x1                         ; 0059a2d1
    ADD ESP,0x8                         ; 0059a2d6
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a2d9
    FLD float ptr [EBP + 0x18]          ; 0059a2e0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059a2e3
    MOV dword ptr [EAX + 0x4],ECX       ; 0059a2e6
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059a2e9
    MOV dword ptr [EAX],ECX             ; 0059a2ec
    FMUL float ptr [EBX + 0x34168]      ; 0059a2ee
    MOV dword ptr [ESP + 0x9c],EDX      ; 0059a2f4
    LEA ESI,[EBX + 0x158]               ; 0059a2fb
    FSTP float ptr [ESP]                ; 0059a301
    FLD float ptr [ESP]                 ; 0059a304
        ;   Label: LAB_0059a304
    FLDZ                                ; 0059a307
    FCOMPP                              ; 0059a309
    FNSTSW AX                           ; 0059a30b
    SAHF                                ; 0059a30d
    JC 0x0059a562                       ; 0059a30e
        ;   XREF to: 0059a562 (CONDITIONAL_JUMP)  ; LAB_0059a562
    PUSH EBX                            ; 0059a314
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059a315
    CALL dword ptr [EAX + 0x10c]        ; 0059a31b
    ADD ESP,0x4                         ; 0059a321
    CMP EAX,0x1                         ; 0059a324
    JLE 0x0059a3af                      ; 0059a327
        ;   XREF to: 0059a3af (CONDITIONAL_JUMP)  ; LAB_0059a3af
    CMP dword ptr [EBX + 0x70],0x1      ; 0059a32d
    JNZ 0x0059a3af                      ; 0059a331
        ;   XREF to: 0059a3af (CONDITIONAL_JUMP)  ; LAB_0059a3af
    MOV EDI,dword ptr [EBX + 0x34164]   ; 0059a337
    TEST EDI,EDI                        ; 0059a33d
    JNZ 0x0059a3af                      ; 0059a33f
        ;   XREF to: 0059a3af (CONDITIONAL_JUMP)  ; LAB_0059a3af
    CMP dword ptr [EBX + 0xdc],0x0      ; 0059a341
    JNZ 0x0059a3af                      ; 0059a348
        ;   XREF to: 0059a3af (CONDITIONAL_JUMP)  ; LAB_0059a3af
    PUSH EDI                            ; 0059a34a
    PUSH ESI                            ; 0059a34b
    LEA ESI,[ESP + 0x84]                ; 0059a34c
    LEA EDI,[ESP + 0x78]                ; 0059a353
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0059a357
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0059a35c
    LEA EAX,[ESP + 0x70]                ; 0059a35f
    LEA ESI,[ESP + 0x7c]                ; 0059a363
    PUSH EAX                            ; 0059a367
    MOVSD ES:EDI,ESI                    ; 0059a368
    MOVSD ES:EDI,ESI                    ; 0059a369
    MOVSD ES:EDI,ESI                    ; 0059a36a
    PUSH EBX                            ; 0059a36b
    LEA ESI,[ESP + 0x18]                ; 0059a36c
    CALL core_actor.cpp_FUN_00408b80    ; 0059a370
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0059a375
    PUSH 0x0                            ; 0059a378
    LEA EAX,[ESP + 0x44]                ; 0059a37a
    LEA EDI,[ESP + 0x44]                ; 0059a37e
    PUSH EAX                            ; 0059a382
    MOV EDX,dword ptr [0x005fed24]      ; 0059a383 | g_CGorePtr
    LEA ESI,[ESP + 0x18]                ; 0059a389
    PUSH EDX                            ; 0059a38d
    MOVSD ES:EDI,ESI                    ; 0059a38e
    MOVSD ES:EDI,ESI                    ; 0059a38f
    MOVSD ES:EDI,ESI                    ; 0059a390
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0059a391
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    MOV ECX,0x1                         ; 0059a396
    ADD ESP,0xc                         ; 0059a39b
    MOV dword ptr [EBX + 0x34164],0x1   ; 0059a39e
    MOV dword ptr [ESP + 0x9c],ECX      ; 0059a3a8
    FLD float ptr [EBP + 0x18]          ; 0059a3af
        ;   Label: LAB_0059a3af
    FMUL float ptr [EBX + 0x34168]      ; 0059a3b2
    FLD float ptr [EBX + 0x24a4]        ; 0059a3b8
    SUB ESP,0x4                         ; 0059a3be
    FSTP float ptr [EBX + 0x2524]       ; 0059a3c1
    FSTP float ptr [ESP]                ; 0059a3c7
    PUSH EBX                            ; 0059a3ca
    CALL core_charactr.cpp_FUN_00434850 ; 0059a3cb
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0059a3d0
    PUSH dword ptr [EBP + 0x18]         ; 0059a3d3
    PUSH EBX                            ; 0059a3d6
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0059a3d7
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059a3dc
    LEA ESI,[EBX + 0x158]               ; 0059a3df
    TEST EAX,EAX                        ; 0059a3e5
    JZ 0x0059a5e6                       ; 0059a3e7
        ;   XREF to: 0059a5e6 (CONDITIONAL_JUMP)  ; LAB_0059a5e6
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0059a3ed
    CMP EAX,0x2                         ; 0059a3f3
    JNC 0x0059a5d3                      ; 0059a3f6
        ;   XREF to: 0059a5d3 (CONDITIONAL_JUMP)  ; LAB_0059a5d3
    CMP EAX,0x1                         ; 0059a3fc
    JNZ 0x0059a5da                      ; 0059a3ff
        ;   XREF to: 0059a5da (CONDITIONAL_JUMP)  ; LAB_0059a5da
    PUSH 0x1                            ; 0059a405
        ;   Label: LAB_0059a405
    PUSH 0x5d9aac                       ; 0059a407 | DAT_005d9aac
    LEA EAX,[EBX + 0x158]               ; 0059a40c
        ;   Label: LAB_0059a40c
    PUSH EAX                            ; 0059a412
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 0059a413
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0059a418
        ;   Label: LAB_0059a418
    LEA EAX,[EBX + 0x249c]              ; 0059a41b
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a421
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059a428
    MOV dword ptr [EAX + 0x4],EDX       ; 0059a42b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059a42e
    MOV dword ptr [EAX],EDX             ; 0059a431
    PUSH dword ptr [EBP + 0x18]         ; 0059a433
        ;   Label: LAB_0059a433
    PUSH EBX                            ; 0059a436
    LEA ESI,[EBX + 0x2518]              ; 0059a437
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0059a43d
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    ADD ESP,0x8                         ; 0059a442
    FLD float ptr [ESI]                 ; 0059a445
    FMUL float ptr [EBP + 0x18]         ; 0059a447
    FLD float ptr [ESI + 0x4]           ; 0059a44a
    FMUL float ptr [EBP + 0x18]         ; 0059a44d
    FLD float ptr [ESI + 0x8]           ; 0059a450
    FMUL float ptr [EBP + 0x18]         ; 0059a453
    LEA EDI,[ESP + 0x4]                 ; 0059a456
    LEA ESI,[ESP + 0x28]                ; 0059a45a
    FXCH ST2                            ; 0059a45e
    FSTP float ptr [ESP + 0x28]         ; 0059a460
    FSTP float ptr [ESP + 0x2c]         ; 0059a464
    FSTP float ptr [ESP + 0x30]         ; 0059a468
    MOVSD ES:EDI,ESI                    ; 0059a46c
    MOVSD ES:EDI,ESI                    ; 0059a46d
    MOVSD ES:EDI,ESI                    ; 0059a46e
    LEA EDX,[EBX + 0x250c]              ; 0059a46f
    FLD float ptr [ESP + 0x4]           ; 0059a475
    FLD float ptr [ESP + 0x8]           ; 0059a479
    FLD float ptr [ESP + 0xc]           ; 0059a47d
    LEA EDI,[ESP + 0x88]                ; 0059a481
    LEA ESI,[ESP + 0x64]                ; 0059a488
    FXCH ST2                            ; 0059a48c
    FADD float ptr [EDX]                ; 0059a48e
    FXCH                                ; 0059a490
    FADD float ptr [EDX + 0x4]          ; 0059a492
    FXCH ST2                            ; 0059a495
    FADD float ptr [EDX + 0x8]          ; 0059a497
    FXCH                                ; 0059a49a
    FSTP float ptr [ESP + 0x64]         ; 0059a49c
    FXCH                                ; 0059a4a0
    FSTP float ptr [ESP + 0x68]         ; 0059a4a2
    FSTP float ptr [ESP + 0x6c]         ; 0059a4a6
    MOVSD ES:EDI,ESI                    ; 0059a4aa
    MOVSD ES:EDI,ESI                    ; 0059a4ab
    MOVSD ES:EDI,ESI                    ; 0059a4ac
    LEA EAX,[EBX + 0x249c]              ; 0059a4ad
    FLD float ptr [ESP + 0x88]          ; 0059a4b3
    FLD float ptr [ESP + 0x8c]          ; 0059a4ba
    FLD float ptr [ESP + 0x90]          ; 0059a4c1
    LEA EDI,[ESP + 0x1c]                ; 0059a4c8
    LEA ESI,[ESP + 0x4c]                ; 0059a4cc
    FXCH ST2                            ; 0059a4d0
    FADD float ptr [EAX]                ; 0059a4d2
    FXCH                                ; 0059a4d4
    FADD float ptr [EAX + 0x4]          ; 0059a4d6
    FXCH ST2                            ; 0059a4d9
    FADD float ptr [EAX + 0x8]          ; 0059a4db
    FXCH                                ; 0059a4de
    FSTP float ptr [ESP + 0x4c]         ; 0059a4e0
    FXCH                                ; 0059a4e4
    FSTP float ptr [ESP + 0x50]         ; 0059a4e6
    FSTP float ptr [ESP + 0x54]         ; 0059a4ea
    MOVSD ES:EDI,ESI                    ; 0059a4ee
    MOVSD ES:EDI,ESI                    ; 0059a4ef
    MOVSD ES:EDI,ESI                    ; 0059a4f0
    MOV dword ptr [EDX + 0x8],0x0       ; 0059a4f1
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059a4f8
    MOV dword ptr [EDX + 0x4],ECX       ; 0059a4fb
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059a4fe
    MOV dword ptr [EDX],ECX             ; 0059a501
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a503
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059a50a
    MOV dword ptr [EAX + 0x4],EDX       ; 0059a50d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059a510
    MOV dword ptr [EAX],EDX             ; 0059a513
    LEA EAX,[ESP + 0x1c]                ; 0059a515
    PUSH EAX                            ; 0059a519
    PUSH EBX                            ; 0059a51a
    CALL core_charactr.cpp_FUN_0042c230 ; 0059a51b
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0059a520
    PUSH EBX                            ; 0059a523
    CALL core_charactr.cpp_FUN_0042cd30 ; 0059a524
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059a529
    LEA EAX,[EBX + 0x158]               ; 0059a52c
    PUSH EAX                            ; 0059a532
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0059a533
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a538
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0059a53b
    PUSH ESI                            ; 0059a542
    PUSH dword ptr [EBP + 0x18]         ; 0059a543
    PUSH EBX                            ; 0059a546
    CALL core_charactr.cpp_FUN_00432330 ; 0059a547
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    ADD ESP,0xc                         ; 0059a54c
    PUSH dword ptr [EBP + 0x18]         ; 0059a54f
    PUSH EBX                            ; 0059a552
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0059a553
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059a558
    MOV ESP,EBP                         ; 0059a55b
        ;   Label: LAB_0059a55b
    POP EBP                             ; 0059a55d
    POP EDI                             ; 0059a55e
    POP ESI                             ; 0059a55f
    POP EBX                             ; 0059a560
    RET                                 ; 0059a561
    MOV EAX,ESP                         ; 0059a562
        ;   Label: LAB_0059a562
    PUSH EAX                            ; 0059a564
    PUSH ESI                            ; 0059a565
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 0059a566
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0059a56b
    PUSH EAX                            ; 0059a56e
    PUSH EBX                            ; 0059a56f
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059a570
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059a575
    JMP 0x0059a304                      ; 0059a578
        ;   XREF to: 0059a304 (UNCONDITIONAL_JUMP)  ; LAB_0059a304
    PUSH 0x1                            ; 0059a57d
        ;   Label: LAB_0059a57d
    PUSH 0x5d9a78                       ; 0059a57f | = "STAND"
    PUSH ESI                            ; 0059a584
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 0059a585
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0059a58a
    PUSH EBX                            ; 0059a58d
    PUSH 0x5d9a7e                       ; 0059a58e | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005f1690]      ; 0059a593 | g_CConsolePtr
    PUSH ECX                            ; 0059a599 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0059a59a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0059a418                      ; 0059a59f
        ;   XREF to: 0059a418 (UNCONDITIONAL_JUMP)  ; LAB_0059a418
    PUSH 0x0                            ; 0059a5a4
        ;   Label: LAB_0059a5a4
    PUSH 0x5d9aa8                       ; 0059a5a6 | DAT_005d9aa8
    PUSH ESI                            ; 0059a5ab
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0059a5ac
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059a5b1
    PUSH EAX                            ; 0059a5b4
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50 ; 0059a5b5
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059a5ba
    TEST EAX,EAX                        ; 0059a5bd
    JL 0x0059a405                       ; 0059a5bf
        ;   XREF to: 0059a405 (CONDITIONAL_JUMP)  ; LAB_0059a405
    PUSH 0x1                            ; 0059a5c5
    PUSH EAX                            ; 0059a5c7
    PUSH ESI                            ; 0059a5c8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059a5c9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    JMP 0x0059a418                      ; 0059a5ce
        ;   XREF to: 0059a418 (UNCONDITIONAL_JUMP)  ; LAB_0059a418
    JBE 0x0059a5a4                      ; 0059a5d3
        ;   XREF to: 0059a5a4 (CONDITIONAL_JUMP)  ; LAB_0059a5a4
        ;   Label: LAB_0059a5d3
    CMP EAX,0x3                         ; 0059a5d5
    JZ 0x0059a57d                       ; 0059a5d8
        ;   XREF to: 0059a57d (CONDITIONAL_JUMP)  ; LAB_0059a57d
    PUSH 0x1                            ; 0059a5da
        ;   Label: LAB_0059a5da
    PUSH 0x5d9ab1                       ; 0059a5dc | = "STAND"
    JMP 0x0059a40c                      ; 0059a5e1
        ;   XREF to: 0059a40c (UNCONDITIONAL_JUMP)  ; LAB_0059a40c
    FLD float ptr [EBX + 0x34da0]       ; 0059a5e6
        ;   Label: LAB_0059a5e6
    FLD1                                ; 0059a5ec
    FCOMPP                              ; 0059a5ee
    FNSTSW AX                           ; 0059a5f0
    SAHF                                ; 0059a5f2
    JBE 0x0059a55b                      ; 0059a5f3
        ;   XREF to: 0059a55b (CONDITIONAL_JUMP)  ; LAB_0059a55b
    PUSH ESI                            ; 0059a5f9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059a5fa
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059a5ff
    ADD ESP,0x4                         ; 0059a602
    MOV dword ptr [EBX + 0x3416c],EAX   ; 0059a605
    CMP EAX,0x91                        ; 0059a60b
    JZ 0x0059a6b3                       ; 0059a610
        ;   XREF to: 0059a6b3 (CONDITIONAL_JUMP)  ; LAB_0059a6b3
    CMP EAX,0x92                        ; 0059a616
    JZ 0x0059a6b3                       ; 0059a61b
        ;   XREF to: 0059a6b3 (CONDITIONAL_JUMP)  ; LAB_0059a6b3
    CMP dword ptr [EBX + 0x3416c],0x0   ; 0059a621
        ;   Label: LAB_0059a621
    JZ 0x0059a693                       ; 0059a628
        ;   XREF to: 0059a693 (CONDITIONAL_JUMP)  ; LAB_0059a693
    LEA EAX,[EBX + 0x249c]              ; 0059a62a
    PUSH EAX                            ; 0059a630
    PUSH EBX                            ; 0059a631
    LEA ESI,[ESP + 0x60]                ; 0059a632
    LEA EDI,[ESP + 0x3c]                ; 0059a636
    CALL core_actor.cpp_FUN_00408b00    ; 0059a63a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x60]                ; 0059a63f
    ADD ESP,0x8                         ; 0059a643
    LEA EAX,[EBX + 0x20]                ; 0059a646
    MOVSD ES:EDI,ESI                    ; 0059a649
    MOVSD ES:EDI,ESI                    ; 0059a64a
    MOVSD ES:EDI,ESI                    ; 0059a64b
    FLD float ptr [EAX]                 ; 0059a64c
    FLD float ptr [EAX + 0x4]           ; 0059a64e
    FLD float ptr [EAX + 0x8]           ; 0059a651
    FXCH ST2                            ; 0059a654
    FADD float ptr [ESP + 0x34]         ; 0059a656
    FXCH                                ; 0059a65a
    FADD float ptr [ESP + 0x38]         ; 0059a65c
    FXCH ST2                            ; 0059a660
    FADD float ptr [ESP + 0x3c]         ; 0059a662
    FXCH                                ; 0059a666
    FSTP float ptr [EAX]                ; 0059a668
    FXCH                                ; 0059a66a
    FSTP float ptr [EAX + 0x4]          ; 0059a66c
    FSTP float ptr [EAX + 0x8]          ; 0059a66f
    MOV EDX,dword ptr [EBX + 0x34170]   ; 0059a672
    TEST EDX,EDX                        ; 0059a678
    JZ 0x0059a693                       ; 0059a67a
        ;   XREF to: 0059a693 (CONDITIONAL_JUMP)  ; LAB_0059a693
    MOV ECX,dword ptr [EAX]             ; 0059a67c
    MOV dword ptr [EDX + 0x20],ECX      ; 0059a67e
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059a681
    MOV dword ptr [EDX + 0x24],ECX      ; 0059a684
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059a687
    MOV dword ptr [EDX + 0x28],ECX      ; 0059a68a
    MOV EAX,dword ptr [EAX + 0xc]       ; 0059a68d
    MOV dword ptr [EDX + 0x2c],EAX      ; 0059a690
    LEA EAX,[EBX + 0x158]               ; 0059a693
        ;   Label: LAB_0059a693
    PUSH EAX                            ; 0059a699
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0059a69a
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a69f
    PUSH dword ptr [EBP + 0x18]         ; 0059a6a2
    PUSH EBX                            ; 0059a6a5
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0059a6a6
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059a6ab
    JMP 0x0059a433                      ; 0059a6ae
        ;   XREF to: 0059a433 (UNCONDITIONAL_JUMP)  ; LAB_0059a433
    CMP dword ptr [EBX + 0x3416c],0x92  ; 0059a6b3
        ;   Label: LAB_0059a6b3
    JNZ 0x0059a621                      ; 0059a6bd
        ;   XREF to: 0059a621 (CONDITIONAL_JUMP)  ; LAB_0059a621
    FLD float ptr [EBP + 0x18]          ; 0059a6c3
    FMUL double ptr [0x005d9ab9]        ; 0059a6c6 | DAT_005d9ab9
    FADD float ptr [EBX + 0x34da0]      ; 0059a6cc
    FST float ptr [EBX + 0x34da0]       ; 0059a6d2
    FLD1                                ; 0059a6d8
    FCOMPP                              ; 0059a6da
    FNSTSW AX                           ; 0059a6dc
    SAHF                                ; 0059a6de
    JA 0x0059a621                       ; 0059a6df
        ;   XREF to: 0059a621 (CONDITIONAL_JUMP)  ; LAB_0059a621
    MOV EDX,dword ptr [EBX + 0x34170]   ; 0059a6e5
    TEST EDX,EDX                        ; 0059a6eb
    JZ 0x0059a621                       ; 0059a6ed
        ;   XREF to: 0059a621 (CONDITIONAL_JUMP)  ; LAB_0059a621
    PUSH EDX                            ; 0059a6f3
    MOV ESI,dword ptr [0x00600530]      ; 0059a6f4 | DAT_00600530
    PUSH ESI                            ; 0059a6fa | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0059a6fb
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059a700
    PUSH 0x1                            ; 0059a703
    PUSH EBX                            ; 0059a705
    MOV EDI,dword ptr [0x00600530]      ; 0059a706 | DAT_00600530
    PUSH EDI                            ; 0059a70c | DAT_01d81080
    MOV dword ptr [EBX + 0x34170],0x0   ; 0059a70d
    CALL core_mission.cpp_FUN_004f6f10  ; 0059a717
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    ADD ESP,0xc                         ; 0059a71c
    JMP 0x0059a621                      ; 0059a71f
        ;   XREF to: 0059a621 (UNCONDITIONAL_JUMP)  ; LAB_0059a621

