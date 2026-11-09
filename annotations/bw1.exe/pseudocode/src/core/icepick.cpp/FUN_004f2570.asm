; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004f2570(CDemonActor *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_icepick_die01_wav_005e5462
;   TerminatedCString s_icepick_injured_wav_005e5474
;   undefined4 DAT_00602628
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 g_CGameInstance.field492_0x1ec
;   undefined4 g_CGameInstance.field584_0x248
;
; Called Functions:
;   core_charactr.cpp_FUN_004319e0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2570
        ;   Label: core_icepick.cpp_FUN_004f2570
    PUSH ESI                            ; 004f2571
    PUSH EDI                            ; 004f2572
    PUSH EBP                            ; 004f2573
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f2574
    MOV EDI,dword ptr [ESP + 0x18]      ; 004f2578
    MOV EDX,dword ptr [EBX + 0x1ffb4]   ; 004f257c
    PUSH EDX                            ; 004f2582
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004f2583
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0xc1d0]    ; 004f2588
    ADD ESP,0x4                         ; 004f258e
    TEST ECX,0x7fffffff                 ; 004f2591
    JNZ 0x004f263a                      ; 004f2597
        ;   XREF to: 004f263a (CONDITIONAL_JUMP)  ; LAB_004f263a
    MOV EAX,[0x0061d95c]                ; 004f259d | g_CGamePtr
        ;   Label: LAB_004f259d
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004f25a2 | g_CGameInstance.field492_0x1ec
    JZ 0x004f25b2                       ; 004f25a9
        ;   XREF to: 004f25b2 (CONDITIONAL_JUMP)  ; LAB_004f25b2
    MOV dword ptr [EDI + 0x4],0x0       ; 004f25ab
    MOV EAX,[0x0061d95c]                ; 004f25b2 | g_CGamePtr
        ;   Label: LAB_004f25b2
    MOV EBP,dword ptr [EAX + 0x248]     ; 004f25b7 | g_CGameInstance.field584_0x248
    TEST EBP,EBP                        ; 004f25bd
    JZ 0x004f2646                       ; 004f25bf
        ;   XREF to: 004f2646 (CONDITIONAL_JUMP)  ; LAB_004f2646
    MOV EAX,[0x00602628]                ; 004f25c5 | DAT_00602628
        ;   Label: LAB_004f25c5
    MOV dword ptr [EBX + 0xc1d0],EAX    ; 004f25ca
    FLD float ptr [EDI + 0x4]           ; 004f25d0
    FSUBR float ptr [EBX + 0x2538]      ; 004f25d3
    LEA ESI,[EBX + 0x158]               ; 004f25d9
    FST float ptr [EBX + 0x2538]        ; 004f25df
    FLDZ                                ; 004f25e5
    FCOMPP                              ; 004f25e7
    FNSTSW AX                           ; 004f25e9
    SAHF                                ; 004f25eb
    JNC 0x004f264e                      ; 004f25ec
        ;   XREF to: 004f264e (CONDITIONAL_JUMP)  ; LAB_004f264e
    FLD float ptr [EDI + 0x4]           ; 004f25ee
    FLDZ                                ; 004f25f1
    FCOMPP                              ; 004f25f3
    FNSTSW AX                           ; 004f25f5
    SAHF                                ; 004f25f7
    JNC 0x004f262b                      ; 004f25f8
        ;   XREF to: 004f262b (CONDITIONAL_JUMP)  ; LAB_004f262b
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004f25fa
    JNZ 0x004f26ee                      ; 004f2601
        ;   XREF to: 004f26ee (CONDITIONAL_JUMP)  ; LAB_004f26ee
    PUSH 0x1                            ; 004f2607
    PUSH 0x4                            ; 004f2609
    PUSH ESI                            ; 004f260b
        ;   Label: LAB_004f260b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f260c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f2611
    MOV EDX,dword ptr [EBX + 0x1ffb8]   ; 004f2614
    PUSH EDX                            ; 004f261a
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f261b
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f2620
    TEST EAX,EAX                        ; 004f2623
    JZ 0x004f26f7                       ; 004f2625
        ;   XREF to: 004f26f7 (CONDITIONAL_JUMP)  ; LAB_004f26f7
    PUSH EDI                            ; 004f262b
        ;   Label: LAB_004f262b
    PUSH EBX                            ; 004f262c
    CALL core_charactr.cpp_FUN_004319e0 ; 004f262d
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319e0()
    ADD ESP,0x8                         ; 004f2632
    POP EBP                             ; 004f2635
    POP EDI                             ; 004f2636
    POP ESI                             ; 004f2637
    POP EBX                             ; 004f2638
    RET                                 ; 004f2639
    MOV dword ptr [EDI + 0x4],0x0       ; 004f263a
        ;   Label: LAB_004f263a
    JMP 0x004f259d                      ; 004f2641
        ;   XREF to: 004f259d (UNCONDITIONAL_JUMP)  ; LAB_004f259d
    MOV dword ptr [EDI + 0x4],EBP       ; 004f2646
        ;   Label: LAB_004f2646
    JMP 0x004f25c5                      ; 004f2649
        ;   XREF to: 004f25c5 (UNCONDITIONAL_JUMP)  ; LAB_004f25c5
    PUSH ESI                            ; 004f264e
        ;   Label: LAB_004f264e
    MOV dword ptr [EBX + 0x2538],0x0    ; 004f264f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f2659
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f265e
    ADD ESP,0x4                         ; 004f2661
    CMP EAX,0x9                         ; 004f2664
    JZ 0x004f262b                       ; 004f2667
        ;   XREF to: 004f262b (CONDITIONAL_JUMP)  ; LAB_004f262b
    PUSH ESI                            ; 004f2669
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f266a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f266f
    ADD ESP,0x4                         ; 004f2672
    CMP EAX,0x8                         ; 004f2675
    JZ 0x004f262b                       ; 004f2678
        ;   XREF to: 004f262b (CONDITIONAL_JUMP)  ; LAB_004f262b
    PUSH 0x1                            ; 004f267a
    PUSH 0x8                            ; 004f267c
    PUSH ESI                            ; 004f267e
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004f267f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f2689
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f268e
    PUSH 0x0                            ; 004f2691
    PUSH 0x1                            ; 004f2693
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f2695
    PUSH EBX                            ; 004f269b
    CALL dword ptr [EAX + 0x128]        ; 004f269c
    ADD ESP,0xc                         ; 004f26a2
    PUSH 0x0                            ; 004f26a5
    PUSH 0x42480000                     ; 004f26a7
    PUSH 0x32                           ; 004f26ac
    PUSH EBX                            ; 004f26ae
    MOV ECX,dword ptr [0x0061dca4]      ; 004f26af | g_CGorePtr
    PUSH ECX                            ; 004f26b5
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0 ; 004f26b6
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 004f26bb
    MOV ESI,dword ptr [EBX + 0x1ffb8]   ; 004f26be
    PUSH ESI                            ; 004f26c4
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004f26c5
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004f26ca
    PUSH 0x5e5462                       ; 004f26cd | = "icepick_die01.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f26d2
    PUSH EBX                            ; 004f26d8
    CALL dword ptr [EAX + 0x2c]         ; 004f26d9
    ADD ESP,0x8                         ; 004f26dc
    PUSH EDI                            ; 004f26df
    PUSH EBX                            ; 004f26e0
    CALL core_charactr.cpp_FUN_004319e0 ; 004f26e1
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319e0()
    ADD ESP,0x8                         ; 004f26e6
    POP EBP                             ; 004f26e9
    POP EDI                             ; 004f26ea
    POP ESI                             ; 004f26eb
    POP EBX                             ; 004f26ec
    RET                                 ; 004f26ed
    PUSH 0x1                            ; 004f26ee
        ;   Label: LAB_004f26ee
    PUSH 0xb                            ; 004f26f0
    JMP 0x004f260b                      ; 004f26f2
        ;   XREF to: 004f260b (UNCONDITIONAL_JUMP)  ; LAB_004f260b
    PUSH 0x5e5474                       ; 004f26f7 | = "icepick_injured??.wav"
        ;   Label: LAB_004f26f7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f26fc
    PUSH EBX                            ; 004f2702
    CALL dword ptr [EAX + 0x2c]         ; 004f2703
    ADD ESP,0x8                         ; 004f2706
    MOV dword ptr [EBX + 0x1ffb8],EAX   ; 004f2709
    PUSH EDI                            ; 004f270f
    PUSH EBX                            ; 004f2710
    CALL core_charactr.cpp_FUN_004319e0 ; 004f2711
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319e0()
    ADD ESP,0x8                         ; 004f2716
    POP EBP                             ; 004f2719
    POP EDI                             ; 004f271a
    POP ESI                             ; 004f271b
    POP EBX                             ; 004f271c
    RET                                 ; 004f271d

