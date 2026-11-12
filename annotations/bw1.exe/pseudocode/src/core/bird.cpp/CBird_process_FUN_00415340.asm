; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_process_FUN_00415340(CBird *this_ptr,float delta_time)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_STAND_005d3cb5
;   TerminatedCString s_s_confused_while_walking_005d3cbb
;   undefined4 DAT_005d3ce5
;   undefined4 DAT_005d3ce9
;   TerminatedCString s_WPPerch_005d3ced
;   TerminatedCString s_LAND_TREE_005d3cf6
;   TerminatedCString s_LAND_GROUND_005d3d00
;   TerminatedCString s_STAND_005d3d0c
;   CConsole* g_CConsolePtr = 007db5f0
;   CGore* g_CGorePtr = 01cd0e3c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00432f10
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   core_gore.cpp_CGore_createBloodPool_FUN_004e62e0
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415340
        ;   Label: core_bird.cpp_CBird_process_FUN_00415340
    PUSH ESI                            ; 00415341
    PUSH EDI                            ; 00415342
    PUSH EBP                            ; 00415343
    MOV EBP,ESP                         ; 00415344
    SUB ESP,0x80                        ; 00415346
    AND ESP,0xfffffff8                  ; 0041534c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041534f
    PUSH dword ptr [EBP + 0x18]         ; 00415352
    PUSH EBX                            ; 00415355
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00415356
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041535b
    TEST EAX,EAX                        ; 0041535e
    JNZ 0x00415369                      ; 00415360
        ;   XREF to: 00415369 (CONDITIONAL_JUMP)  ; LAB_00415369
    MOV ESP,EBP                         ; 00415362
    POP EBP                             ; 00415364
    POP EDI                             ; 00415365
    POP ESI                             ; 00415366
    POP EBX                             ; 00415367
    RET                                 ; 00415368
    PUSH dword ptr [EBP + 0x18]         ; 00415369
        ;   Label: LAB_00415369
    PUSH EBX                            ; 0041536c
    CALL core_charactr.cpp_FUN_00434790 ; 0041536d
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    LEA EAX,[EBX + 0x249c]              ; 00415372
    XOR EDX,EDX                         ; 00415378
    ADD ESP,0x8                         ; 0041537a
    MOV dword ptr [EAX + 0x8],EDX       ; 0041537d
    MOV dword ptr [ESP + 0x7c],EDX      ; 00415380
    MOV EDX,dword ptr [EAX + 0x8]       ; 00415384
    MOV dword ptr [EAX + 0x4],EDX       ; 00415387
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041538a
    MOV dword ptr [EAX],EDX             ; 0041538d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0041538f
    LEA ESI,[EBX + 0x158]               ; 00415392
    MOV dword ptr [ESP],EAX             ; 00415398
    FLD float ptr [ESP]                 ; 0041539b
        ;   Label: LAB_0041539b
    FLDZ                                ; 0041539e
    FCOMPP                              ; 004153a0
    FNSTSW AX                           ; 004153a2
    SAHF                                ; 004153a4
    JNC 0x004153bf                      ; 004153a5
        ;   XREF to: 004153bf (CONDITIONAL_JUMP)  ; LAB_004153bf
    MOV EAX,ESP                         ; 004153a7
    PUSH EAX                            ; 004153a9
    PUSH ESI                            ; 004153aa
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004153ab
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004153b0
    PUSH EAX                            ; 004153b3
    PUSH EBX                            ; 004153b4
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004153b5
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004153ba
    JMP 0x0041539b                      ; 004153bd
        ;   XREF to: 0041539b (UNCONDITIONAL_JUMP)  ; LAB_0041539b
    PUSH EBX                            ; 004153bf
        ;   Label: LAB_004153bf
    MOV EAX,dword ptr [EBX + 0x154]     ; 004153c0
    CALL dword ptr [EAX + 0x10c]        ; 004153c6
    ADD ESP,0x4                         ; 004153cc
    CMP EAX,0x1                         ; 004153cf
    JLE 0x00415450                      ; 004153d2
        ;   XREF to: 00415450 (CONDITIONAL_JUMP)  ; LAB_00415450
    CMP dword ptr [EBX + 0x70],0x1      ; 004153d8
    JNZ 0x00415450                      ; 004153dc
        ;   XREF to: 00415450 (CONDITIONAL_JUMP)  ; LAB_00415450
    MOV EDI,dword ptr [EBX + 0x1fab0]   ; 004153de
    TEST EDI,EDI                        ; 004153e4
    JNZ 0x00415450                      ; 004153e6
        ;   XREF to: 00415450 (CONDITIONAL_JUMP)  ; LAB_00415450
    CMP dword ptr [EBX + 0xdc],0x0      ; 004153e8
    JNZ 0x00415450                      ; 004153ef
        ;   XREF to: 00415450 (CONDITIONAL_JUMP)  ; LAB_00415450
    PUSH EDI                            ; 004153f1
    PUSH ESI                            ; 004153f2
    LEA ESI,[ESP + 0x54]                ; 004153f3
    LEA EDI,[ESP + 0x48]                ; 004153f7
    CALL core_skeleton.cpp_FUN_00569040 ; 004153fb
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00415400
    LEA EAX,[ESP + 0x40]                ; 00415403
    LEA ESI,[ESP + 0x4c]                ; 00415407
    PUSH EAX                            ; 0041540b
    MOVSD ES:EDI,ESI                    ; 0041540c
    MOVSD ES:EDI,ESI                    ; 0041540d
    MOVSD ES:EDI,ESI                    ; 0041540e
    PUSH EBX                            ; 0041540f
    LEA ESI,[ESP + 0x3c]                ; 00415410
    CALL core_actor.cpp_FUN_00408b40    ; 00415414
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00415419
    PUSH 0x0                            ; 0041541c
    LEA EAX,[ESP + 0x74]                ; 0041541e
    LEA EDI,[ESP + 0x74]                ; 00415422
    PUSH EAX                            ; 00415426
    MOV EDX,dword ptr [0x0061dca4]      ; 00415427 | g_CGorePtr
    LEA ESI,[ESP + 0x3c]                ; 0041542d
    PUSH EDX                            ; 00415431
    MOVSD ES:EDI,ESI                    ; 00415432
    MOVSD ES:EDI,ESI                    ; 00415433
    MOVSD ES:EDI,ESI                    ; 00415434
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 00415435
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    MOV ECX,0x1                         ; 0041543a
    ADD ESP,0xc                         ; 0041543f
    MOV dword ptr [EBX + 0x1fab0],0x1   ; 00415442
    MOV dword ptr [ESP + 0x7c],ECX      ; 0041544c
    PUSH dword ptr [EBP + 0x18]         ; 00415450
        ;   Label: LAB_00415450
    FLD float ptr [EBX + 0x24a4]        ; 00415453
    PUSH EBX                            ; 00415459
    FSTP float ptr [EBX + 0x2524]       ; 0041545a
    CALL core_charactr.cpp_FUN_00435320 ; 00415460
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00415465
    PUSH dword ptr [EBP + 0x18]         ; 00415468
    PUSH EBX                            ; 0041546b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0041546c
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00415471
    TEST EAX,EAX                        ; 00415474
    JZ 0x004154bd                       ; 00415476
        ;   XREF to: 004154bd (CONDITIONAL_JUMP)  ; LAB_004154bd
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00415478
    LEA EDX,[EBX + 0x158]               ; 0041547e
    CMP EAX,0x2                         ; 00415484
    JNC 0x0041562a                      ; 00415487
        ;   XREF to: 0041562a (CONDITIONAL_JUMP)  ; LAB_0041562a
    CMP EAX,0x1                         ; 0041548d
    JNZ 0x00415631                      ; 00415490
        ;   XREF to: 00415631 (CONDITIONAL_JUMP)  ; LAB_00415631
    PUSH EAX                            ; 00415496
    PUSH 0x5d3ce9                       ; 00415497 | DAT_005d3ce9
    PUSH EDX                            ; 0041549c
        ;   Label: LAB_0041549c
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850 ; 0041549d
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController * this_ptr, char * state_name, int force_immediate)
        ;   Label: LAB_0041549d
    ADD ESP,0xc                         ; 004154a2
        ;   Label: LAB_004154a2
    LEA EAX,[EBX + 0x249c]              ; 004154a5
    MOV dword ptr [EAX + 0x8],0x0       ; 004154ab
    MOV EDX,dword ptr [EAX + 0x8]       ; 004154b2
    MOV dword ptr [EAX + 0x4],EDX       ; 004154b5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004154b8
    MOV dword ptr [EAX],EDX             ; 004154bb
    PUSH dword ptr [EBP + 0x18]         ; 004154bd
        ;   Label: LAB_004154bd
    PUSH EBX                            ; 004154c0
    LEA ESI,[EBX + 0x2518]              ; 004154c1
    CALL core_charactr.cpp_FUN_0042d700 ; 004154c7
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    ADD ESP,0x8                         ; 004154cc
    FLD float ptr [ESI]                 ; 004154cf
    FMUL float ptr [EBP + 0x18]         ; 004154d1
    FLD float ptr [ESI + 0x4]           ; 004154d4
    FMUL float ptr [EBP + 0x18]         ; 004154d7
    FLD float ptr [ESI + 0x8]           ; 004154da
    FMUL float ptr [EBP + 0x18]         ; 004154dd
    LEA EDI,[ESP + 0x4]                 ; 004154e0
    LEA ESI,[ESP + 0x10]                ; 004154e4
    FXCH ST2                            ; 004154e8
    FSTP float ptr [ESP + 0x10]         ; 004154ea
    FSTP float ptr [ESP + 0x14]         ; 004154ee
    FSTP float ptr [ESP + 0x18]         ; 004154f2
    MOVSD ES:EDI,ESI                    ; 004154f6
    MOVSD ES:EDI,ESI                    ; 004154f7
    MOVSD ES:EDI,ESI                    ; 004154f8
    LEA EDX,[EBX + 0x250c]              ; 004154f9
    FLD float ptr [ESP + 0x4]           ; 004154ff
    FLD float ptr [ESP + 0x8]           ; 00415503
    FLD float ptr [ESP + 0xc]           ; 00415507
    LEA EDI,[ESP + 0x58]                ; 0041550b
    LEA ESI,[ESP + 0x64]                ; 0041550f
    FXCH ST2                            ; 00415513
    FADD float ptr [EDX]                ; 00415515
    FXCH                                ; 00415517
    FADD float ptr [EDX + 0x4]          ; 00415519
    FXCH ST2                            ; 0041551c
    FADD float ptr [EDX + 0x8]          ; 0041551e
    FXCH                                ; 00415521
    FSTP float ptr [ESP + 0x64]         ; 00415523
    FXCH                                ; 00415527
    FSTP float ptr [ESP + 0x68]         ; 00415529
    FSTP float ptr [ESP + 0x6c]         ; 0041552d
    MOVSD ES:EDI,ESI                    ; 00415531
    MOVSD ES:EDI,ESI                    ; 00415532
    MOVSD ES:EDI,ESI                    ; 00415533
    LEA EAX,[EBX + 0x249c]              ; 00415534
    FLD float ptr [ESP + 0x58]          ; 0041553a
    FLD float ptr [ESP + 0x5c]          ; 0041553e
    FLD float ptr [ESP + 0x60]          ; 00415542
    LEA EDI,[ESP + 0x1c]                ; 00415546
    LEA ESI,[ESP + 0x28]                ; 0041554a
    FXCH ST2                            ; 0041554e
    FADD float ptr [EAX]                ; 00415550
    FXCH                                ; 00415552
    FADD float ptr [EAX + 0x4]          ; 00415554
    FXCH ST2                            ; 00415557
    FADD float ptr [EAX + 0x8]          ; 00415559
    FXCH                                ; 0041555c
    FSTP float ptr [ESP + 0x28]         ; 0041555e
    FXCH                                ; 00415562
    FSTP float ptr [ESP + 0x2c]         ; 00415564
    FSTP float ptr [ESP + 0x30]         ; 00415568
    MOVSD ES:EDI,ESI                    ; 0041556c
    MOVSD ES:EDI,ESI                    ; 0041556d
    MOVSD ES:EDI,ESI                    ; 0041556e
    MOV dword ptr [EDX + 0x8],0x0       ; 0041556f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00415576
    MOV dword ptr [EDX + 0x4],ECX       ; 00415579
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041557c
    MOV dword ptr [EDX],ECX             ; 0041557f
    MOV dword ptr [EAX + 0x8],0x0       ; 00415581
    MOV EDX,dword ptr [EAX + 0x8]       ; 00415588
    MOV dword ptr [EAX + 0x4],EDX       ; 0041558b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041558e
    MOV dword ptr [EAX],EDX             ; 00415591
    LEA EAX,[ESP + 0x1c]                ; 00415593
    PUSH EAX                            ; 00415597
    PUSH EBX                            ; 00415598
    CALL core_charactr.cpp_FUN_0042d750 ; 00415599
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0041559e
    PUSH EBX                            ; 004155a1
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 004155a2
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004155a7
    LEA EAX,[EBX + 0x158]               ; 004155aa
    PUSH EAX                            ; 004155b0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004155b1
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004155b6
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004155b9
    PUSH EDX                            ; 004155bd
    PUSH dword ptr [EBP + 0x18]         ; 004155be
    PUSH EBX                            ; 004155c1
    CALL core_charactr.cpp_FUN_00432f10 ; 004155c2
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432f10()
    ADD ESP,0xc                         ; 004155c7
    PUSH dword ptr [EBP + 0x18]         ; 004155ca
    PUSH EBX                            ; 004155cd
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 004155ce
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004155d3
    MOV ESP,EBP                         ; 004155d6
    POP EBP                             ; 004155d8
    POP EDI                             ; 004155d9
    POP ESI                             ; 004155da
    POP EBX                             ; 004155db
    RET                                 ; 004155dc
    PUSH 0x1                            ; 004155dd
        ;   Label: LAB_004155dd
    PUSH 0x5d3cb5                       ; 004155df | = "STAND"
    PUSH EDX                            ; 004155e4
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850 ; 004155e5
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004155ea
    PUSH EBX                            ; 004155ed
    PUSH 0x5d3cbb                       ; 004155ee | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 004155f3 | g_CConsolePtr
    PUSH ESI                            ; 004155f9 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004155fa
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x004154a2                      ; 004155ff
        ;   XREF to: 004154a2 (UNCONDITIONAL_JUMP)  ; LAB_004154a2
    PUSH 0x1                            ; 00415604
        ;   Label: LAB_00415604
    PUSH 0x5d3ce5                       ; 00415606 | DAT_005d3ce5
    JMP 0x0041549c                      ; 0041560b
        ;   XREF to: 0041549c (UNCONDITIONAL_JUMP)  ; LAB_0041549c
    PUSH 0x1                            ; 00415610
        ;   Label: LAB_00415610
    PUSH 0x5d3d00                       ; 00415612 | = "LAND_GROUND"
    PUSH ESI                            ; 00415617
    JMP 0x0041549d                      ; 00415618
        ;   XREF to: 0041549d (UNCONDITIONAL_JUMP)  ; LAB_0041549d
    PUSH 0x1                            ; 0041561d
        ;   Label: LAB_0041561d
    PUSH 0x5d3d0c                       ; 0041561f | = "STAND"
    PUSH ESI                            ; 00415624
    JMP 0x0041549d                      ; 00415625
        ;   XREF to: 0041549d (UNCONDITIONAL_JUMP)  ; LAB_0041549d
    JBE 0x00415604                      ; 0041562a
        ;   XREF to: 00415604 (CONDITIONAL_JUMP)  ; LAB_00415604
        ;   Label: LAB_0041562a
    CMP EAX,0x3                         ; 0041562c
    JZ 0x004155dd                       ; 0041562f
        ;   XREF to: 004155dd (CONDITIONAL_JUMP)  ; LAB_004155dd
    MOV EDI,dword ptr [EBX + 0x2704]    ; 00415631
        ;   Label: LAB_00415631
    LEA ESI,[EBX + 0x158]               ; 00415637
    TEST EDI,EDI                        ; 0041563d
    JZ 0x0041561d                       ; 0041563f
        ;   XREF to: 0041561d (CONDITIONAL_JUMP)  ; LAB_0041561d
    PUSH 0x5d3ced                       ; 00415641 | = "WPPerch*"
    PUSH EDI                            ; 00415646
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 00415647
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0041564c
    CMP EAX,0x1                         ; 0041564f
    JNZ 0x00415610                      ; 00415652
        ;   XREF to: 00415610 (CONDITIONAL_JUMP)  ; LAB_00415610
    PUSH EAX                            ; 00415654
    PUSH 0x5d3cf6                       ; 00415655 | = "LAND_TREE"
    PUSH ESI                            ; 0041565a
    JMP 0x0041549d                      ; 0041565b
        ;   XREF to: 0041549d (UNCONDITIONAL_JUMP)  ; LAB_0041549d

