; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet *this_ptr,uint dirty_flags_mask)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   dirty_flags_mask
; Local Variables:
; undefined8       Stack[-0xdc]:8  local_dc
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_set.cpp_CDemonSet_renderDecals_FUN_00534c20 at 00534c29
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f0b9
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e478
;   core_set.cpp_FUN_0052f2a0 at 0052f5a3
;   core_set.cpp_FUN_0052fad0 at 0052fc71
;   core_set.cpp_FUN_0052fea0 at 0053002e
;
; Referenced Globals:
;   TerminatedCString s_buildDispList_d_items_3_005e5b46
;   undefined4 DAT_005e5b6a
;   undefined4 DAT_005e5b72
;   undefined4 DAT_005e5b7a
;   undefined4 DAT_005e5b82
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01ba5c50
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.profile_mode
;   undefined4 g_CGameInstance.goggles_active
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01cedef4
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_set.cpp_CDemonSet_isCameraPanning_FUN_00534b80
;   crt_stdlib.c__qsort_FUN_005b78b8
;   engine_console.cpp_FUN_00436710
;   engine_drender.cpp_FUN_0046b5c0
;   engine_drender.cpp_FUN_0046b5e0
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005332f0
        ;   Label: core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0
    PUSH ESI                            ; 005332f1
    PUSH EDI                            ; 005332f2
    PUSH EBP                            ; 005332f3
    SUB ESP,0xc4                        ; 005332f4
    MOV EAX,[0x00616494]                ; 005332fa | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 005332ff | g_CGameInstance.profile_mode
    JNZ 0x00533490                      ; 00533306
        ;   XREF to: 00533490 (CONDITIONAL_JUMP)  ; LAB_00533490
    MOV EBX,dword ptr [0x0060b280]      ; 0053330c | DAT_0060b280
        ;   Label: LAB_0053330c
    XOR ECX,ECX                         ; 00533312
    PUSH EBX                            ; 00533314 | DAT_01ba5c50
    LEA ESI,[ESP + 0x64]                ; 00533315
    MOV dword ptr [0x0208f774],ECX      ; 00533319 | DAT_0208f774
    CALL engine_drender.cpp_FUN_0046b5c0 ; 0053331f
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5c0()
    ADD ESP,0x4                         ; 00533324
    MOV ESI,dword ptr [0x0060b280]      ; 00533327 | DAT_0060b280
    PUSH ESI                            ; 0053332d | DAT_01ba5c50
    LEA ESI,[ESP + 0x70]                ; 0053332e
    LEA EDI,[ESP + 0x34]                ; 00533332
    CALL engine_drender.cpp_FUN_0046b5e0 ; 00533336
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5e0()
    LEA ESI,[ESP + 0x70]                ; 0053333b
    ADD ESP,0x4                         ; 0053333f
    MOVSD ES:EDI,ESI                    ; 00533342
    MOVSD ES:EDI,ESI                    ; 00533343
    MOVSD ES:EDI,ESI                    ; 00533344
    MOV EDI,0xc                         ; 00533345
    MOV EBP,dword ptr [0x01fc9608]      ; 0053334a | DAT_01fc9608
    MOV dword ptr [ESP + 0xac],EDI      ; 00533350
    TEST EBP,EBP                        ; 00533357
    JZ 0x005334a1                       ; 00533359
        ;   XREF to: 005334a1 (CONDITIONAL_JUMP)  ; LAB_005334a1
    OR byte ptr [ESP + 0xac],0x1        ; 0053335f
        ;   Label: LAB_0053335f
    CMP dword ptr [0x01fc8e84],0x0      ; 00533367 | DAT_01fc8e84
        ;   Label: LAB_00533367
    JZ 0x00533378                       ; 0053336e
        ;   XREF to: 00533378 (CONDITIONAL_JUMP)  ; LAB_00533378
    OR byte ptr [ESP + 0xac],0x22       ; 00533370
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00533378
        ;   Label: LAB_00533378
    MOV EBX,dword ptr [EAX + 0x158cfc]  ; 0053337f
    XOR EBP,EBP                         ; 00533385
    TEST EBX,EBX                        ; 00533387
    JLE 0x005333eb                      ; 00533389
        ;   XREF to: 005333eb (CONDITIONAL_JUMP)  ; LAB_005333eb
    LEA EAX,[ESP + 0x18]                ; 0053338b
    ADD EAX,0xc                         ; 0053338f
    MOV dword ptr [ESP + 0xbc],EAX      ; 00533392
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00533399
    MOV dword ptr [ESP + 0xb0],EAX      ; 005333a0
    MOV EAX,[0x01cedef4]                ; 005333a7 | DAT_01cedef4
        ;   Label: LAB_005333a7
    MOV EBX,dword ptr [ESP + 0xb0]      ; 005333ac
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 005333b3
    MOV EBX,dword ptr [EBX + 0x158d00]  ; 005333ba
    CMP EBX,ESI                         ; 005333c0
    JNZ 0x005334b8                      ; 005333c2
        ;   XREF to: 005334b8 (CONDITIONAL_JUMP)  ; LAB_005334b8
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005333c8
        ;   Label: LAB_005333c8
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005333cf
    INC EBP                             ; 005333d6
    ADD ESI,0x4                         ; 005333d7
    MOV EDI,dword ptr [EAX + 0x158cfc]  ; 005333da
    MOV dword ptr [ESP + 0xb0],ESI      ; 005333e0
    CMP EBP,EDI                         ; 005333e7
    JL 0x005333a7                       ; 005333e9
        ;   XREF to: 005333a7 (CONDITIONAL_JUMP)  ; LAB_005333a7
    PUSH 0x5332c0                       ; 005333eb
        ;   Label: LAB_005333eb
    PUSH 0x8                            ; 005333f0
    MOV EBP,dword ptr [0x0208f774]      ; 005333f2 | DAT_0208f774
    PUSH EBP                            ; 005333f8
    PUSH 0x208f778                      ; 005333f9 | DAT_0208f778
    CALL crt_stdlib.c__qsort_FUN_005b78b8 ; 005333fe
        ;   XREF to: 005b78b8 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005b78b8()
    MOV ESI,dword ptr [0x01cedef4]      ; 00533403 | DAT_01cedef4
    SHL ESI,0x2                         ; 00533409
    MOV EAX,dword ptr [ESI + 0x1cedee4] ; 0053340c
    ADD ESP,0x10                        ; 00533412
    TEST EAX,EAX                        ; 00533415
    JZ 0x005336f4                       ; 00533417
        ;   XREF to: 005336f4 (CONDITIONAL_JUMP)  ; LAB_005336f4
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0053341d
    MOV ECX,dword ptr [0x0208f774]      ; 00533424 | DAT_0208f774
    XOR ESI,ESI                         ; 0053342a
    MOV dword ptr [EDX + 0x15f6fc],EAX  ; 0053342c
    TEST ECX,ECX                        ; 00533432
    JLE 0x00533460                      ; 00533434
        ;   XREF to: 00533460 (CONDITIONAL_JUMP)  ; LAB_00533460
    MOV ECX,EDX                         ; 00533436
    XOR EDX,EDX                         ; 00533438
    MOV EDI,dword ptr [0x0208f774]      ; 0053343a | DAT_0208f774
        ;   Label: LAB_0053343a
    ADD ECX,0x4                         ; 00533440
    MOV EAX,dword ptr [EDX + 0x208f778] ; 00533443
    ADD EDX,0x8                         ; 00533449
    INC ESI                             ; 0053344c
    MOV dword ptr [ECX + 0x15f6fc],EAX  ; 0053344d
    CMP ESI,EDI                         ; 00533453
    JL 0x0053343a                       ; 00533455
        ;   XREF to: 0053343a (CONDITIONAL_JUMP)  ; LAB_0053343a
    LEA EAX,[EAX]                       ; 00533457
    LEA EDX,[EDX]                       ; 0053345d
    MOV EAX,[0x0208f774]                ; 00533460 | DAT_0208f774
        ;   Label: LAB_00533460
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00533465
    INC EAX                             ; 0053346c
    MOV dword ptr [EDX + 0x15f6f8],EAX  ; 0053346d
        ;   Label: LAB_0053346d
    MOV EAX,[0x00616494]                ; 00533473 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x228],0x0     ; 00533478 | g_CGameInstance.profile_mode
    JNZ 0x00533741                      ; 0053347f
        ;   XREF to: 00533741 (CONDITIONAL_JUMP)  ; LAB_00533741
    ADD ESP,0xc4                        ; 00533485
    POP EBP                             ; 0053348b
    POP EDI                             ; 0053348c
    POP ESI                             ; 0053348d
    POP EBX                             ; 0053348e
    RET                                 ; 0053348f
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 00533490
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_00533490
    MOV dword ptr [ESP + 0xb4],EAX      ; 00533495
    JMP 0x0053330c                      ; 0053349c
        ;   XREF to: 0053330c (UNCONDITIONAL_JUMP)  ; LAB_0053330c
    MOV EAX,[0x00616494]                ; 005334a1 | g_CGamePtr
        ;   Label: LAB_005334a1
    CMP dword ptr [EAX + 0x25c],0x0     ; 005334a6 | g_CGameInstance.goggles_active
    JNZ 0x0053335f                      ; 005334ad
        ;   XREF to: 0053335f (CONDITIONAL_JUMP)  ; LAB_0053335f
    JMP 0x00533367                      ; 005334b3
        ;   XREF to: 00533367 (UNCONDITIONAL_JUMP)  ; LAB_00533367
    MOV EAX,[0x00616494]                ; 005334b8 | g_CGamePtr
        ;   Label: LAB_005334b8
    CMP dword ptr [EAX + 0x25c],0x0     ; 005334bd | g_CGameInstance.goggles_active
    JZ 0x00533607                       ; 005334c4
        ;   XREF to: 00533607 (CONDITIONAL_JUMP)  ; LAB_00533607
    LEA ECX,[EBX + 0x20]                ; 005334ca
        ;   Label: LAB_005334ca
    LEA EDX,[EBX + 0x12c]               ; 005334cd
    FLD float ptr [ECX]                 ; 005334d3
    FCOMP float ptr [EDX]               ; 005334d5
    FNSTSW AX                           ; 005334d7
    SAHF                                ; 005334d9
    JZ 0x0053368a                       ; 005334da
        ;   XREF to: 0053368a (CONDITIONAL_JUMP)  ; LAB_0053368a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005334e0
        ;   Label: LAB_005334e0
    OR dword ptr [EBX + 0x144],EAX      ; 005334e7
    MOV EDI,dword ptr [ESP + 0xac]      ; 005334ed
        ;   Label: LAB_005334ed
    TEST dword ptr [EBX + 0x144],EDI    ; 005334f4
    JZ 0x005333c8                       ; 005334fa
        ;   XREF to: 005333c8 (CONDITIONAL_JUMP)  ; LAB_005333c8
        ;   Label: LAB_005334fa
    PUSH EBX                            ; 00533500
        ;   Label: LAB_00533500
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00533501
    LEA ESI,[ESP + 0x4]                 ; 00533507
    LEA EDI,[ESP + 0x1c]                ; 0053350b
    CALL dword ptr [EAX + 0x24]         ; 0053350f
    MOV ECX,0x6                         ; 00533512
    LEA ESI,[ESP + 0x4]                 ; 00533517
    ADD ESP,0x4                         ; 0053351b
    MOVSD.REP ES:EDI,ESI                ; 0053351e
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00533520
    FLD float ptr [ESP + 0x18]          ; 00533527
    FLD float ptr [ESP + 0x1c]          ; 0053352b
    FLD float ptr [ESP + 0x20]          ; 0053352f
    LEA EDI,[ESP + 0x90]                ; 00533533
    LEA ESI,[ESP + 0x48]                ; 0053353a
    FXCH ST2                            ; 0053353e
    FADD float ptr [EAX]                ; 00533540
    FXCH                                ; 00533542
    FADD float ptr [EAX + 0x4]          ; 00533544
    FXCH ST2                            ; 00533547
    FADD float ptr [EAX + 0x8]          ; 00533549
    FXCH                                ; 0053354c
    FSTP float ptr [ESP + 0x48]         ; 0053354e
    FXCH                                ; 00533552
    FSTP float ptr [ESP + 0x4c]         ; 00533554
    FSTP float ptr [ESP + 0x50]         ; 00533558
    MOVSD ES:EDI,ESI                    ; 0053355c
    MOVSD ES:EDI,ESI                    ; 0053355d
    MOVSD ES:EDI,ESI                    ; 0053355e
    FLD float ptr [0x005e5b6a]          ; 0053355f | DAT_005e5b6a
    FLD float ptr [ESP + 0x90]          ; 00533565
    FMUL ST1                            ; 0053356c
    FLD float ptr [ESP + 0x94]          ; 0053356e
    FMUL ST2                            ; 00533575
    LEA EAX,[ESP + 0x84]                ; 00533577
    FLD float ptr [ESP + 0x98]          ; 0053357e
    FMULP ST3                           ; 00533585
    PUSH EAX                            ; 00533587
    LEA EDI,[ESP + 0x88]                ; 00533588
    LEA ESI,[ESP + 0x7c]                ; 0053358f
    FXCH                                ; 00533593
    FSTP float ptr [ESP + 0x7c]         ; 00533595
    FSTP float ptr [ESP + 0x80]         ; 00533599
    FSTP float ptr [ESP + 0x84]         ; 005335a0
    MOVSD ES:EDI,ESI                    ; 005335a7
    MOVSD ES:EDI,ESI                    ; 005335a8
    MOVSD ES:EDI,ESI                    ; 005335a9
    PUSH EBX                            ; 005335aa
    LEA ESI,[ESP + 0x5c]                ; 005335ab
    LEA EDI,[ESP + 0x44]                ; 005335af
    CALL core_actor.cpp_FUN_00408d70    ; 005335b3
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 005335b8
    ADD ESP,0x8                         ; 005335bc
    MOVSD ES:EDI,ESI                    ; 005335bf
    MOVSD ES:EDI,ESI                    ; 005335c0
    MOVSD ES:EDI,ESI                    ; 005335c1
    FLD float ptr [ESP + 0x30]          ; 005335c2
    FSUB float ptr [ESP + 0x3c]         ; 005335c6
    FMUL ST0                            ; 005335ca
    FLD float ptr [ESP + 0x34]          ; 005335cc
    FSUB float ptr [ESP + 0x40]         ; 005335d0
    FMUL ST0                            ; 005335d4
    MOV EDX,dword ptr [0x0208f774]      ; 005335d6 | DAT_0208f774
    FLD float ptr [ESP + 0x38]          ; 005335dc
    FXCH                                ; 005335e0
    FADDP ST2,ST0                       ; 005335e2
    FSUB float ptr [ESP + 0x44]         ; 005335e4
    FMUL ST0                            ; 005335e8
    LEA EAX,[EDX + 0x1]                 ; 005335ea
    MOV dword ptr [EDX*0x8 + 0x208f778],EBX ; 005335ed | DAT_0208f778
    FADDP                               ; 005335f4
    MOV [0x0208f774],EAX                ; 005335f6 | DAT_0208f774
    FSTP float ptr [EDX*0x8 + 0x208f77c] ; 005335fb | DAT_0208f77c
    JMP 0x005333c8                      ; 00533602
        ;   XREF to: 005333c8 (UNCONDITIONAL_JUMP)  ; LAB_005333c8
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00533607
        ;   Label: LAB_00533607
    PUSH EAX                            ; 0053360e
    CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00534b80 ; 0053360f
        ;   XREF to: 00534b80 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_isCameraPanning_FUN_00534b80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00533614
    TEST EAX,EAX                        ; 00533617
    JZ 0x005334ca                       ; 00533619
        ;   XREF to: 005334ca (CONDITIONAL_JUMP)  ; LAB_005334ca
    LEA EDX,[EBX + 0x20]                ; 0053361f
    LEA ECX,[EBX + 0x12c]               ; 00533622
    FLD float ptr [EDX]                 ; 00533628
    FCOMP float ptr [ECX]               ; 0053362a
    FNSTSW AX                           ; 0053362c
    SAHF                                ; 0053362e
    JZ 0x00533640                       ; 0053362f
        ;   XREF to: 00533640 (CONDITIONAL_JUMP)  ; LAB_00533640
    MOV dword ptr [EBX + 0x148],0x1     ; 00533631
        ;   Label: LAB_00533631
    JMP 0x00533500                      ; 0053363b
        ;   XREF to: 00533500 (UNCONDITIONAL_JUMP)  ; LAB_00533500
    FLD float ptr [EDX + 0x4]           ; 00533640
        ;   Label: LAB_00533640
    FCOMP float ptr [ECX + 0x4]         ; 00533643
    FNSTSW AX                           ; 00533646
    SAHF                                ; 00533648
    JNZ 0x00533631                      ; 00533649
        ;   XREF to: 00533631 (CONDITIONAL_JUMP)  ; LAB_00533631
    FLD float ptr [EDX + 0x8]           ; 0053364b
    FCOMP float ptr [ECX + 0x8]         ; 0053364e
    FNSTSW AX                           ; 00533651
    SAHF                                ; 00533653
    JNZ 0x00533631                      ; 00533654
        ;   XREF to: 00533631 (CONDITIONAL_JUMP)  ; LAB_00533631
    LEA ECX,[EBX + 0x30]                ; 00533656
    LEA EDX,[EBX + 0x138]               ; 00533659
    FLD float ptr [ECX]                 ; 0053365f
    FCOMP float ptr [EDX]               ; 00533661
    FNSTSW AX                           ; 00533663
    SAHF                                ; 00533665
    JNZ 0x00533631                      ; 00533666
        ;   XREF to: 00533631 (CONDITIONAL_JUMP)  ; LAB_00533631
    FLD float ptr [ECX + 0x4]           ; 00533668
    FCOMP float ptr [EDX + 0x4]         ; 0053366b
    FNSTSW AX                           ; 0053366e
    SAHF                                ; 00533670
    JNZ 0x00533631                      ; 00533671
        ;   XREF to: 00533631 (CONDITIONAL_JUMP)  ; LAB_00533631
    FLD float ptr [ECX + 0x8]           ; 00533673
    FCOMP float ptr [EDX + 0x8]         ; 00533676
    FNSTSW AX                           ; 00533679
    SAHF                                ; 0053367b
    JNZ 0x00533631                      ; 0053367c
        ;   XREF to: 00533631 (CONDITIONAL_JUMP)  ; LAB_00533631
    CMP dword ptr [EBX + 0x148],0x0     ; 0053367e
    JMP 0x005334fa                      ; 00533685
        ;   XREF to: 005334fa (UNCONDITIONAL_JUMP)  ; LAB_005334fa
    FLD float ptr [ECX + 0x4]           ; 0053368a
        ;   Label: LAB_0053368a
    FCOMP float ptr [EDX + 0x4]         ; 0053368d
    FNSTSW AX                           ; 00533690
    SAHF                                ; 00533692
    JNZ 0x005334e0                      ; 00533693
        ;   XREF to: 005334e0 (CONDITIONAL_JUMP)  ; LAB_005334e0
    FLD float ptr [ECX + 0x8]           ; 00533699
    FCOMP float ptr [EDX + 0x8]         ; 0053369c
    FNSTSW AX                           ; 0053369f
    SAHF                                ; 005336a1
    JNZ 0x005334e0                      ; 005336a2
        ;   XREF to: 005334e0 (CONDITIONAL_JUMP)  ; LAB_005334e0
    LEA ECX,[EBX + 0x30]                ; 005336a8
    LEA EDX,[EBX + 0x138]               ; 005336ab
    FLD float ptr [ECX]                 ; 005336b1
    FCOMP float ptr [EDX]               ; 005336b3
    FNSTSW AX                           ; 005336b5
    SAHF                                ; 005336b7
    JNZ 0x005334e0                      ; 005336b8
        ;   XREF to: 005334e0 (CONDITIONAL_JUMP)  ; LAB_005334e0
    FLD float ptr [ECX + 0x4]           ; 005336be
    FCOMP float ptr [EDX + 0x4]         ; 005336c1
    FNSTSW AX                           ; 005336c4
    SAHF                                ; 005336c6
    JNZ 0x005334e0                      ; 005336c7
        ;   XREF to: 005334e0 (CONDITIONAL_JUMP)  ; LAB_005334e0
    FLD float ptr [ECX + 0x8]           ; 005336cd
    FCOMP float ptr [EDX + 0x8]         ; 005336d0
    FNSTSW AX                           ; 005336d3
    SAHF                                ; 005336d5
    JNZ 0x005334e0                      ; 005336d6
        ;   XREF to: 005334e0 (CONDITIONAL_JUMP)  ; LAB_005334e0
    MOV ESI,dword ptr [ESP + 0xac]      ; 005336dc
    TEST dword ptr [EBX + 0x144],ESI    ; 005336e3
    JZ 0x005333c8                       ; 005336e9
        ;   XREF to: 005333c8 (CONDITIONAL_JUMP)  ; LAB_005333c8
    JMP 0x005334ed                      ; 005336ef
        ;   XREF to: 005334ed (UNCONDITIONAL_JUMP)  ; LAB_005334ed
    MOV EDX,dword ptr [0x0208f774]      ; 005336f4 | DAT_0208f774
        ;   Label: LAB_005336f4
    XOR ESI,ESI                         ; 005336fa
    TEST EDX,EDX                        ; 005336fc
    JLE 0x00533730                      ; 005336fe
        ;   XREF to: 00533730 (CONDITIONAL_JUMP)  ; LAB_00533730
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00533700
    XOR ECX,ECX                         ; 00533707
    MOV EBX,dword ptr [0x0208f774]      ; 00533709 | DAT_0208f774
        ;   Label: LAB_00533709
    ADD EDX,0x4                         ; 0053370f
    MOV EAX,dword ptr [ECX + 0x208f778] ; 00533712
    ADD ECX,0x8                         ; 00533718
    INC ESI                             ; 0053371b
    MOV dword ptr [EDX + 0x15f6f8],EAX  ; 0053371c
    CMP ESI,EBX                         ; 00533722
    JL 0x00533709                       ; 00533724
        ;   XREF to: 00533709 (CONDITIONAL_JUMP)  ; LAB_00533709
    LEA EAX,[EAX]                       ; 00533726
    LEA EDX,[EDX]                       ; 0053372c
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00533730
        ;   Label: LAB_00533730
    MOV EAX,[0x0208f774]                ; 00533737 | DAT_0208f774
    JMP 0x0053346d                      ; 0053373c
        ;   XREF to: 0053346d (UNCONDITIONAL_JUMP)  ; LAB_0053346d
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 00533741
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_00533741
    MOV EDX,dword ptr [ESP + 0xb4]      ; 00533746
    SUB EAX,EDX                         ; 0053374d
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053374f
    FILD dword ptr [ESP + 0xc0]         ; 00533756
    FMUL double ptr [0x005e5b72]        ; 0053375d | DAT_005e5b72
    MOV EAX,[0x00616494]                ; 00533763 | g_CGamePtr
    FMUL double ptr [0x005e5b7a]        ; 00533768 | DAT_005e5b7a
    FLD float ptr [EAX + 0x284]         ; 0053376e | g_CGameInstance.delta_time_float
    FXCH                                ; 00533774
    FMUL double ptr [0x005e5b82]        ; 00533776 | DAT_005e5b82
    FDIVRP                              ; 0053377c
    SUB ESP,0x8                         ; 0053377e
    MOV ECX,dword ptr [0x0208f774]      ; 00533781 | DAT_0208f774
    FSTP double ptr [ESP]               ; 00533787
    PUSH ECX                            ; 0053378a
    PUSH 0x5e5b46                       ; 0053378b | = "buildDispList %d items : %3.2f ms\n"
    MOV EBX,dword ptr [0x00609ed0]      ; 00533790 | g_CConsolePtr
    PUSH EBX                            ; 00533796 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00533797
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 0053379c
    ADD ESP,0xc4                        ; 0053379f
    POP EBP                             ; 005337a5
    POP EDI                             ; 005337a6
    POP ESI                             ; 005337a7
    POP EBX                             ; 005337a8
    RET                                 ; 005337a9

