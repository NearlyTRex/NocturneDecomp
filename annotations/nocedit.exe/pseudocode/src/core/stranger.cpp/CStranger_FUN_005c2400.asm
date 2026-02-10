; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_stranger_cpp_CStranger_FUN_005c2400(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined1       Stack[-0xe8]:1  local_e8
; undefined1       Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5e23
;
; Referenced Globals:
;   TerminatedCString s_Ladder_dot_f_00653b1c
;   double DOUBLE_00653b34 = 0.990000000000000
;   float FLOAT_00653b3c = 0.5
;   double DOUBLE_00653b44 = 2
;   double DOUBLE_00653b4c = 4
;   double DOUBLE_00653b54 = -1
;   double DOUBLE_00653b5c = 0.261799387791667
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_ConsolePtr
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2400
        ;   Label: core_stranger.cpp_CStranger_FUN_005c2400
    PUSH ESI                            ; 005c2401
    PUSH EDI                            ; 005c2402
    PUSH EBP                            ; 005c2403
    MOV EBP,ESP                         ; 005c2404
    SUB ESP,0xe4                        ; 005c2406
    AND ESP,0xfffffff8                  ; 005c240c
    MOV EDI,dword ptr [EBP + 0x14]      ; 005c240f
    PUSH 0x0                            ; 005c2412
    PUSH EDI                            ; 005c2414
    MOV dword ptr [EDI + 0x1fc28],0x0   ; 005c2415
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c241f
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xe8],EAX      ; 005c2424
    FLD float ptr [ESP + 0xe8]          ; 005c242b
    ADD ESP,0x8                         ; 005c2432
    FCOMP double ptr [0x00653b34]       ; 005c2435 | DOUBLE_00653b34
    FNSTSW AX                           ; 005c243b
    SAHF                                ; 005c243d
    JC 0x005c247f                       ; 005c243e
        ;   XREF to: 005c247f (CONDITIONAL_JUMP)  ; LAB_005c247f
    MOV EDX,dword ptr [EDI + 0x24b4]    ; 005c2440
    TEST EDX,EDX                        ; 005c2446
    JNZ 0x005c247f                      ; 005c2448
        ;   XREF to: 005c247f (CONDITIONAL_JUMP)  ; LAB_005c247f
    CMP dword ptr [EDI + 0x24f8],0x0    ; 005c244a
    JNZ 0x005c247f                      ; 005c2451
        ;   XREF to: 005c247f (CONDITIONAL_JUMP)  ; LAB_005c247f
    MOV dword ptr [ESP + 0xdc],EDX      ; 005c2453
    LEA EAX,[EDI + 0x20]                ; 005c245a
    MOV dword ptr [ESP + 0xd8],EDX      ; 005c245d
    MOV dword ptr [ESP + 0xd0],EAX      ; 005c2464
    MOV EAX,[0x006810c8]                ; 005c246b | g_CDemonSetPtr
        ;   Label: LAB_005c246b
    MOV EDX,dword ptr [ESP + 0xdc]      ; 005c2470
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 005c2477 | g_CDemonSetInstance.actor_list_ptr
    JL 0x005c24aa                       ; 005c247d
        ;   XREF to: 005c24aa (CONDITIONAL_JUMP)  ; LAB_005c24aa
    XOR EAX,EAX                         ; 005c247f
        ;   Label: LAB_005c247f
    MOV ESP,EBP                         ; 005c2481
    POP EBP                             ; 005c2483
    POP EDI                             ; 005c2484
    POP ESI                             ; 005c2485
    POP EBX                             ; 005c2486
    RET                                 ; 005c2487
    MOV EBX,dword ptr [ESP + 0xdc]      ; 005c2488
        ;   Label: LAB_005c2488
    MOV ECX,dword ptr [ESP + 0xd8]      ; 005c248f
    INC EBX                             ; 005c2496
    ADD ECX,0x4                         ; 005c2497
    MOV dword ptr [ESP + 0xdc],EBX      ; 005c249a
    MOV dword ptr [ESP + 0xd8],ECX      ; 005c24a1
    JMP 0x005c246b                      ; 005c24a8
        ;   XREF to: 005c246b (UNCONDITIONAL_JUMP)  ; LAB_005c246b
    MOV EBX,dword ptr [ESP + 0xd8]      ; 005c24aa
        ;   Label: LAB_005c24aa
    MOV ESI,dword ptr [0x02dcd810]      ; 005c24b1 | g_CLadderClassInfo.name_hash
    ADD EAX,EBX                         ; 005c24b7
    PUSH ESI                            ; 005c24b9
    MOV EAX,dword ptr [EAX + 0x14d158]  ; 005c24ba | g_CDemonSetInstance.actor_list_data[0]
    PUSH EAX                            ; 005c24c0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c24c1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005c24c6
    ADD ESP,0x8                         ; 005c24c8
    MOV ESI,EAX                         ; 005c24cb
    TEST EAX,EAX                        ; 005c24cd
    JZ 0x005c2488                       ; 005c24cf
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    FLD float ptr [EBX + 0x24]          ; 005c24d1
    FADD float ptr [EAX + 0x2d8]        ; 005c24d4
    FSUBR float ptr [EDI + 0x24]        ; 005c24da
    FABS                                ; 005c24dd
    FCOMP double ptr [0x00653b44]       ; 005c24df | DOUBLE_00653b44
    FNSTSW AX                           ; 005c24e5
    SAHF                                ; 005c24e7
    JA 0x005c2488                       ; 005c24e8
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005c24ea
    PUSH EAX                            ; 005c24f1
    LEA EAX,[ESP + 0x2c]                ; 005c24f2
    PUSH EAX                            ; 005c24f6
    PUSH EBX                            ; 005c24f7
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c24f8
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005c24fd
    FLD float ptr [ESP + 0x30]          ; 005c2500
    FST double ptr [ESP + 0x8]          ; 005c2504
    FABS                                ; 005c2508
    FCOMP double ptr [0x00653b4c]       ; 005c250a | DOUBLE_00653b4c
    FNSTSW AX                           ; 005c2510
    SAHF                                ; 005c2512
    JA 0x005c2488                       ; 005c2513
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    FLDZ                                ; 005c2519
    FCOMP double ptr [ESP + 0x8]        ; 005c251b
    FNSTSW AX                           ; 005c251f
    SAHF                                ; 005c2521
    JC 0x005c2488                       ; 005c2522
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    LEA EAX,[ESP + 0x10]                ; 005c2528
    PUSH EAX                            ; 005c252c
    MOV EDX,dword ptr [EBX + 0x154]     ; 005c252d
    PUSH EBX                            ; 005c2533
    CALL dword ptr [EDX + 0x14]         ; 005c2534
    ADD ESP,0x8                         ; 005c2537
    FLD float ptr [ESP + 0x28]          ; 005c253a
    FCOMP float ptr [ESP + 0x1c]        ; 005c253e
    FNSTSW AX                           ; 005c2542
    SAHF                                ; 005c2544
    JBE 0x005c2566                      ; 005c2545
        ;   XREF to: 005c2566 (CONDITIONAL_JUMP)  ; LAB_005c2566
    FLD float ptr [ESP + 0x1c]          ; 005c2547
    FLD1                                ; 005c254b
    FADDP                               ; 005c254d
    FLD float ptr [ESP + 0x28]          ; 005c254f
    FCOMPP                              ; 005c2553
    FNSTSW AX                           ; 005c2555
    SAHF                                ; 005c2557
    JA 0x005c2488                       ; 005c2558
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c255e
    MOV dword ptr [ESP + 0x28],EAX      ; 005c2562
    FLD float ptr [ESP + 0x28]          ; 005c2566
        ;   Label: LAB_005c2566
    FCOMP float ptr [ESP + 0x10]        ; 005c256a
    FNSTSW AX                           ; 005c256e
    SAHF                                ; 005c2570
    JNC 0x005c2594                      ; 005c2571
        ;   XREF to: 005c2594 (CONDITIONAL_JUMP)  ; LAB_005c2594
    FLD float ptr [ESP + 0x10]          ; 005c2573
    FADD double ptr [0x00653b54]        ; 005c2577 | DOUBLE_00653b54
    FLD float ptr [ESP + 0x28]          ; 005c257d
    FCOMPP                              ; 005c2581
    FNSTSW AX                           ; 005c2583
    SAHF                                ; 005c2585
    JC 0x005c2488                       ; 005c2586
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c258c
    MOV dword ptr [ESP + 0x28],EAX      ; 005c2590
    FLD float ptr [ESP + 0x10]          ; 005c2594
        ;   Label: LAB_005c2594
    FADD float ptr [ESP + 0x1c]         ; 005c2598
    FST float ptr [ESP + 0x7c]          ; 005c259c
    FLD float ptr [0x00653b3c]          ; 005c25a0 | FLOAT_00653b3c
    FXCH                                ; 005c25a6
    FMUL ST1                            ; 005c25a8
    FLD float ptr [ESP + 0x14]          ; 005c25aa
    FLD float ptr [ESP + 0x18]          ; 005c25ae
    FADD float ptr [ESP + 0x24]         ; 005c25b2
    FXCH                                ; 005c25b6
    FADD float ptr [ESP + 0x20]         ; 005c25b8
    FXCH                                ; 005c25bc
    FST float ptr [ESP + 0x84]          ; 005c25be
    FMUL ST3                            ; 005c25c5
    FXCH                                ; 005c25c7
    FST float ptr [ESP + 0x80]          ; 005c25c9
    FMULP ST3                           ; 005c25d0
    FSTP float ptr [ESP + 0x6c]         ; 005c25d2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005c25d6
    MOV dword ptr [ESP + 0x30],EAX      ; 005c25da
    LEA EAX,[ESP + 0x28]                ; 005c25de
    PUSH EAX                            ; 005c25e2
    LEA EAX,[ESP + 0x74]                ; 005c25e3
    PUSH EAX                            ; 005c25e7
    FSTP float ptr [ESP + 0x6c]         ; 005c25e8
    PUSH ESI                            ; 005c25ec
    FSTP float ptr [ESP + 0x74]         ; 005c25ed
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c25f1
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 005c25f6
    LEA EAX,[ESP + 0x34]                ; 005c25f8
    ADD ESP,0xc                         ; 005c25fc
    CMP EAX,EBX                         ; 005c25ff
    JZ 0x005c2617                       ; 005c2601
        ;   XREF to: 005c2617 (CONDITIONAL_JUMP)  ; LAB_005c2617
    MOV EAX,dword ptr [EBX]             ; 005c2603
    MOV dword ptr [ESP + 0x28],EAX      ; 005c2605
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c2609
    MOV dword ptr [ESP + 0x2c],EAX      ; 005c260c
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c2610
    MOV dword ptr [ESP + 0x30],EAX      ; 005c2613
    FLD float ptr [ESP + 0x2c]          ; 005c2617
        ;   Label: LAB_005c2617
    FADD float ptr [ESI + 0x2d8]        ; 005c261b
    FSTP float ptr [ESP + 0x2c]         ; 005c2621
    MOV EAX,dword ptr [EDI + 0x44]      ; 005c2625
    MOV dword ptr [ESP + 0xd4],EAX      ; 005c2628
    MOV EAX,dword ptr [EDI + 0x50]      ; 005c262f
    MOV dword ptr [ESP + 0xb8],EAX      ; 005c2632
    MOV EAX,dword ptr [EDI + 0x5c]      ; 005c2639
    MOV dword ptr [ESP + 0xc8],EAX      ; 005c263c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005c2643
    MOV dword ptr [ESP + 0x4c],EAX      ; 005c264a
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005c264e
    MOV dword ptr [ESP + 0x50],EAX      ; 005c2655
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005c2659
    MOV dword ptr [ESP + 0x54],EAX      ; 005c2660
    MOV EAX,dword ptr [ESI + 0x44]      ; 005c2664
    MOV dword ptr [ESP + 0xbc],EAX      ; 005c2667
    MOV EAX,dword ptr [ESI + 0x50]      ; 005c266e
    MOV dword ptr [ESP + 0xc0],EAX      ; 005c2671
    MOV EAX,dword ptr [ESI + 0x5c]      ; 005c2678
    MOV dword ptr [ESP + 0xc4],EAX      ; 005c267b
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005c2682
    MOV dword ptr [ESP + 0x40],EAX      ; 005c2689
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005c268d
    MOV dword ptr [ESP + 0x44],EAX      ; 005c2694
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005c2698
    FLD double ptr [0x00653b5c]         ; 005c269f | DOUBLE_00653b5c
    MOV dword ptr [ESP + 0x48],EAX      ; 005c26a5
    FCOS                                ; 005c26a9
    FLD float ptr [ESP + 0xb8]          ; 005c26ab
    FMUL float ptr [ESP + 0xc0]         ; 005c26b2
    FLD float ptr [ESP + 0xd4]          ; 005c26b9
    FMUL float ptr [ESP + 0xbc]         ; 005c26c0
    FADDP                               ; 005c26c7
    FLD float ptr [ESP + 0xc8]          ; 005c26c9
    FMUL float ptr [ESP + 0xc4]         ; 005c26d0
    FADDP                               ; 005c26d7
    FABS                                ; 005c26d9
    FSTP double ptr [ESP]               ; 005c26db
    FCOMP double ptr [ESP]              ; 005c26de
    FNSTSW AX                           ; 005c26e1
    SAHF                                ; 005c26e3
    JA 0x005c2488                       ; 005c26e4
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    LEA EAX,[ESI + 0x20]                ; 005c26ea
    PUSH EAX                            ; 005c26ed
    LEA EAX,[ESP + 0x8c]                ; 005c26ee
    PUSH EAX                            ; 005c26f5
    PUSH EDI                            ; 005c26f6
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c26f7
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EAX + 0x8]           ; 005c26fc
    FLDZ                                ; 005c26ff
    ADD ESP,0xc                         ; 005c2701
    FCOMPP                              ; 005c2704
    FNSTSW AX                           ; 005c2706
    SAHF                                ; 005c2708
    JNC 0x005c2488                      ; 005c2709
        ;   XREF to: 005c2488 (CONDITIONAL_JUMP)  ; LAB_005c2488
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c270f
    PUSH EDX                            ; 005c2713
    MOV ECX,dword ptr [ESP + 0x4]       ; 005c2714
    PUSH ECX                            ; 005c2718
    PUSH 0x653b1c                       ; 005c2719 | = "Ladder dot : %f\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 005c271e | g_ConsolePtr | g_CConsolePtr
    PUSH EBX                            ; 005c2724 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c2725
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005c272a
    PUSH 0x1                            ; 005c272d
    PUSH 0x2b                           ; 005c272f
    LEA EAX,[EDI + 0x158]               ; 005c2731
    PUSH EAX                            ; 005c2737
    MOV dword ptr [EDI + 0x1fc28],ESI   ; 005c2738
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c273e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EDI + 0xbe38],0x0    ; 005c2743
    ADD ESP,0xc                         ; 005c274d
    MOV EAX,dword ptr [ESI + 0x2d8]     ; 005c2750
    MOV dword ptr [ESP + 0xcc],EAX      ; 005c2756
    XOR EAX,EAX                         ; 005c275d
    MOV dword ptr [ESP + 0x58],EAX      ; 005c275f
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005c2763
    MOV dword ptr [ESP + 0x5c],EAX      ; 005c276a
    LEA EAX,[ESP + 0x58]                ; 005c276e
    PUSH EAX                            ; 005c2772
    LEA EAX,[ESP + 0xa4]                ; 005c2773
    PUSH EAX                            ; 005c277a
    MOV EDX,0xbfc00000                  ; 005c277b
    PUSH ESI                            ; 005c2780
    LEA EBX,[EDI + 0x20]                ; 005c2781
    MOV dword ptr [ESP + 0x6c],EDX      ; 005c2784
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c2788
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 005c278d
    FSUB float ptr [EBX]                ; 005c278f
    ADD ESP,0xc                         ; 005c2791
    FSTP float ptr [ESP + 0x94]         ; 005c2794
    FLD float ptr [EAX + 0x4]           ; 005c279b
    FSUB float ptr [EBX + 0x4]          ; 005c279e
    LEA EDX,[EDI + 0x1fe54]             ; 005c27a1
    FSTP float ptr [ESP + 0x98]         ; 005c27a7
    FLD float ptr [EAX + 0x8]           ; 005c27ae
    FSUB float ptr [EBX + 0x8]          ; 005c27b1
    LEA EAX,[ESP + 0x94]                ; 005c27b4
    FSTP float ptr [ESP + 0x9c]         ; 005c27bb
    CMP EDX,EAX                         ; 005c27c2
    JZ 0x005c27e3                       ; 005c27c4
        ;   XREF to: 005c27e3 (CONDITIONAL_JUMP)  ; LAB_005c27e3
    MOV EAX,dword ptr [ESP + 0x94]      ; 005c27c6
    MOV dword ptr [EDX],EAX             ; 005c27cd
    MOV EAX,dword ptr [ESP + 0x98]      ; 005c27cf
    MOV dword ptr [EDX + 0x4],EAX       ; 005c27d6
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005c27d9
    MOV dword ptr [EDX + 0x8],EAX       ; 005c27e0
    LEA EAX,[EDI + 0x20]                ; 005c27e3
        ;   Label: LAB_005c27e3
    FLD float ptr [ESP + 0x28]          ; 005c27e6
    FSUB float ptr [EAX]                ; 005c27ea
    FLD float ptr [ESP + 0x2c]          ; 005c27ec
    FXCH                                ; 005c27f0
    FSTP float ptr [ESP + 0xac]         ; 005c27f2
    FSUB float ptr [EAX + 0x4]          ; 005c27f9
    FLD float ptr [ESP + 0x30]          ; 005c27fc
    FXCH                                ; 005c2800
    FSTP float ptr [ESP + 0xb0]         ; 005c2802
    FSUB float ptr [EAX + 0x8]          ; 005c2809
    LEA EAX,[ESP + 0xac]                ; 005c280c
    PUSH EAX                            ; 005c2813
    LEA EAX,[ESP + 0x38]                ; 005c2814
    PUSH EAX                            ; 005c2818
    FSTP float ptr [ESP + 0xbc]         ; 005c2819
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005c2820
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 005c2825
    ADD ESP,0x8                         ; 005c2828
    FSTP float ptr [EDI + 0x1fe60]      ; 005c282b
    MOV EAX,0x1                         ; 005c2831
    MOV dword ptr [EDI + 0x1fe64],0x3f800000 ; 005c2836
    MOV ESP,EBP                         ; 005c2840
    POP EBP                             ; 005c2842
    POP EDI                             ; 005c2843
    POP ESI                             ; 005c2844
    POP EBX                             ; 005c2845
    RET                                 ; 005c2846

