; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   dirty_flags_mask
; Local Variables:
; undefined8       Stack[-0x8c]:8  local_8c
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_set.cpp_CDemonSet_FUN_00509a80 at 00509d41
;   core_set.cpp_CDemonSet_FUN_0050a260 at 0050a3e5
;   core_set.cpp_CDemonSet_FUN_0050aba0 at 0050acc4
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 00509899
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b1f
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005907aa
;   TerminatedCString s_CSet_buildActorDisplayLi_005907ba
;   TerminatedCString s_buildDispList_d_items_3_005907ed
;   float FLOAT_00590812 = 0.5
;   double DOUBLE_0059081a = 0.0555555555555556
;   double DOUBLE_00590822 = 0.0000152587890625
;   double DOUBLE_0059082a = 1000
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   CGame g_CGame_01c775ec
;   undefined4 g_CGame_01c775ec.profile_mode
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdlib.c__qsort_FUN_00563db8
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_FUN_00460d10
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d2d0
        ;   Label: core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
    PUSH ESI                            ; 0050d2d1
    PUSH EDI                            ; 0050d2d2
    PUSH EBP                            ; 0050d2d3
    SUB ESP,0x74                        ; 0050d2d4
    MOV EBP,dword ptr [ESP + 0x88]      ; 0050d2d7
    MOV EAX,[0x005b9354]                ; 0050d2de | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x20c],0x0     ; 0050d2e3 | g_CGame_01c775ec.profile_mode
    JNZ 0x0050d436                      ; 0050d2ea
        ;   XREF to: 0050d436 (CONDITIONAL_JUMP)  ; LAB_0050d436
    MOV EBX,dword ptr [0x005ae704]      ; 0050d2f0 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0050d2f0
    XOR ECX,ECX                         ; 0050d2f6
    PUSH EBX                            ; 0050d2f8 | DAT_01b4d738
    LEA ESI,[ESP + 0x4c]                ; 0050d2f9
    MOV dword ptr [0x02080430],ECX      ; 0050d2fd | DAT_02080430
    CALL engine_drender.cpp_FUN_00460d10 ; 0050d303
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d10()
    ADD ESP,0x4                         ; 0050d308
    LEA EAX,[ESP + 0x24]                ; 0050d30b
    PUSH EAX                            ; 0050d30f
    MOV ESI,dword ptr [0x005ae704]      ; 0050d310 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0050d316 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 0050d317
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer * this_ptr, CVector3f * output)
    MOV EDI,dword ptr [0x007f7370]      ; 0050d31c | DAT_007f7370
    ADD ESP,0x8                         ; 0050d322
    TEST EDI,EDI                        ; 0050d325
    JNZ 0x0050d34b                      ; 0050d327
        ;   XREF to: 0050d34b (CONDITIONAL_JUMP)  ; LAB_0050d34b
    MOV EAX,0x5907aa                    ; 0050d329 | = "..\\core\\set.cpp"
    MOV EDX,0xedb                       ; 0050d32e
    PUSH 0x5907ba                       ; 0050d333 | = "CSet::buildActorDisplayList - Don't h..."
    MOV [0x01cc4800],EAX                ; 0050d338 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0050d33d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0050d343
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0050d348
    MOV ECX,0xc                         ; 0050d34b
        ;   Label: LAB_0050d34b
    MOV EBX,dword ptr [0x01fba2d8]      ; 0050d350 | DAT_01fba2d8
    MOV dword ptr [ESP + 0x60],ECX      ; 0050d356
    TEST EBX,EBX                        ; 0050d35a
    JZ 0x0050d444                       ; 0050d35c
        ;   XREF to: 0050d444 (CONDITIONAL_JUMP)  ; LAB_0050d444
    OR byte ptr [ESP + 0x60],0x1        ; 0050d362
        ;   Label: LAB_0050d362
    CMP dword ptr [0x01fb9b54],0x0      ; 0050d367 | DAT_01fb9b54
        ;   Label: LAB_0050d367
    JZ 0x0050d375                       ; 0050d36e
        ;   XREF to: 0050d375 (CONDITIONAL_JUMP)  ; LAB_0050d375
    OR byte ptr [ESP + 0x60],0x22       ; 0050d370
    MOV EAX,dword ptr [EBP + 0x158904]  ; 0050d375
        ;   Label: LAB_0050d375
    XOR EDI,EDI                         ; 0050d37b
    TEST EAX,EAX                        ; 0050d37d
    JLE 0x0050d3a9                      ; 0050d37f
        ;   XREF to: 0050d3a9 (CONDITIONAL_JUMP)  ; LAB_0050d3a9
    MOV ESI,EBP                         ; 0050d381
    MOV EAX,[0x01cae0e8]                ; 0050d383 | g_LocalHeroIndex
        ;   Label: LAB_0050d383
    MOV EBX,dword ptr [ESI + 0x158908]  ; 0050d388
    CMP EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0050d38e
    JNZ 0x0050d45b                      ; 0050d395
        ;   XREF to: 0050d45b (CONDITIONAL_JUMP)  ; LAB_0050d45b
    INC EDI                             ; 0050d39b
        ;   Label: LAB_0050d39b
    MOV EDX,dword ptr [EBP + 0x158904]  ; 0050d39c
    ADD ESI,0x4                         ; 0050d3a2
    CMP EDI,EDX                         ; 0050d3a5
    JL 0x0050d383                       ; 0050d3a7
        ;   XREF to: 0050d383 (CONDITIONAL_JUMP)  ; LAB_0050d383
    PUSH 0x50d2a0                       ; 0050d3a9
        ;   Label: LAB_0050d3a9
    PUSH 0x8                            ; 0050d3ae
    MOV ECX,dword ptr [0x02080430]      ; 0050d3b0 | DAT_02080430
    PUSH ECX                            ; 0050d3b6
    PUSH 0x2080434                      ; 0050d3b7 | DAT_02080434
    CALL crt_stdlib.c__qsort_FUN_00563db8 ; 0050d3bc
        ;   XREF to: 00563db8 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__qsort_FUN_00563db8(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    MOV EBX,dword ptr [0x01cae0e8]      ; 0050d3c1 | g_LocalHeroIndex
    SHL EBX,0x2                         ; 0050d3c7
    MOV ESI,dword ptr [EBX + 0x1cae0d8] ; 0050d3ca
    ADD ESP,0x10                        ; 0050d3d0
    TEST ESI,ESI                        ; 0050d3d3
    JZ 0x0050d59e                       ; 0050d3d5
        ;   XREF to: 0050d59e (CONDITIONAL_JUMP)  ; LAB_0050d59e
    MOV EAX,[0x02080430]                ; 0050d3db | DAT_02080430
    XOR EBX,EBX                         ; 0050d3e0
    MOV dword ptr [EBP + 0x15f300],ESI  ; 0050d3e2
    TEST EAX,EAX                        ; 0050d3e8
    JLE 0x0050d410                      ; 0050d3ea
        ;   XREF to: 0050d410 (CONDITIONAL_JUMP)  ; LAB_0050d410
    MOV EAX,EBP                         ; 0050d3ec
    XOR EDX,EDX                         ; 0050d3ee
    MOV EDI,dword ptr [0x02080430]      ; 0050d3f0 | DAT_02080430
        ;   Label: LAB_0050d3f0
    ADD EAX,0x4                         ; 0050d3f6
    MOV ECX,dword ptr [EDX + 0x2080434] ; 0050d3f9
    ADD EDX,0x8                         ; 0050d3ff
    INC EBX                             ; 0050d402
    MOV dword ptr [EAX + 0x15f300],ECX  ; 0050d403
    CMP EBX,EDI                         ; 0050d409
    JL 0x0050d3f0                       ; 0050d40b
        ;   XREF to: 0050d3f0 (CONDITIONAL_JUMP)  ; LAB_0050d3f0
    LEA EAX,[EAX]                       ; 0050d40d
    MOV EAX,[0x02080430]                ; 0050d410 | DAT_02080430
        ;   Label: LAB_0050d410
    INC EAX                             ; 0050d415
    MOV dword ptr [EBP + 0x15f2fc],EAX  ; 0050d416
        ;   Label: LAB_0050d416
    MOV EAX,[0x005b9354]                ; 0050d41c | g_CGame_PTR_005b9354 | g_CGame_01c775ec
    CMP dword ptr [EAX + 0x20c],0x0     ; 0050d421 | g_CGame_01c775ec.profile_mode
    JNZ 0x0050d5da                      ; 0050d428
        ;   XREF to: 0050d5da (CONDITIONAL_JUMP)  ; LAB_0050d5da
    ADD ESP,0x74                        ; 0050d42e
    POP EBP                             ; 0050d431
    POP EDI                             ; 0050d432
    POP ESI                             ; 0050d433
    POP EBX                             ; 0050d434
    RET                                 ; 0050d435
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0050d436
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_0050d436
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050d43b
    JMP 0x0050d2f0                      ; 0050d43f
        ;   XREF to: 0050d2f0 (UNCONDITIONAL_JUMP)  ; LAB_0050d2f0
    MOV EAX,[0x005b9354]                ; 0050d444 | g_CGame_PTR_005b9354
        ;   Label: LAB_0050d444
    CMP dword ptr [EAX + 0x240],0x0     ; 0050d449 | g_CGame_01c775ec.goggles_active
    JNZ 0x0050d362                      ; 0050d450
        ;   XREF to: 0050d362 (CONDITIONAL_JUMP)  ; LAB_0050d362
    JMP 0x0050d367                      ; 0050d456
        ;   XREF to: 0050d367 (UNCONDITIONAL_JUMP)  ; LAB_0050d367
    LEA ECX,[EBX + 0x20]                ; 0050d45b
        ;   Label: LAB_0050d45b
    LEA EDX,[EBX + 0x128]               ; 0050d45e
    FLD float ptr [ECX]                 ; 0050d464
    FCOMP float ptr [EDX]               ; 0050d466
    FNSTSW AX                           ; 0050d468
    SAHF                                ; 0050d46a
    JZ 0x0050d537                       ; 0050d46b
        ;   XREF to: 0050d537 (CONDITIONAL_JUMP)  ; LAB_0050d537
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050d471
        ;   Label: LAB_0050d471
    OR dword ptr [EBX + 0x140],EAX      ; 0050d478
    MOV ECX,dword ptr [ESP + 0x60]      ; 0050d47e
        ;   Label: LAB_0050d47e
    TEST dword ptr [EBX + 0x140],ECX    ; 0050d482
    JZ 0x0050d39b                       ; 0050d488
        ;   XREF to: 0050d39b (CONDITIONAL_JUMP)  ; LAB_0050d39b
    MOV EAX,ESP                         ; 0050d48e
    PUSH EAX                            ; 0050d490
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0050d491
    PUSH EBX                            ; 0050d497
    CALL dword ptr [EDX + 0x14]         ; 0050d498
    LEA EDX,[EAX + 0xc]                 ; 0050d49b
    FLD float ptr [EAX]                 ; 0050d49e
    FADD float ptr [EDX]                ; 0050d4a0
    ADD ESP,0x8                         ; 0050d4a2
    FST float ptr [ESP + 0x3c]          ; 0050d4a5
    FLD float ptr [EAX + 0x4]           ; 0050d4a9
    FADD float ptr [EDX + 0x4]          ; 0050d4ac
    FXCH                                ; 0050d4af
    FLD float ptr [0x00590812]          ; 0050d4b1 | FLOAT_00590812
    FXCH                                ; 0050d4b7
    FMUL ST1                            ; 0050d4b9
    FXCH ST2                            ; 0050d4bb
    FST float ptr [ESP + 0x40]          ; 0050d4bd
    FMUL ST1                            ; 0050d4c1
    FLD float ptr [EAX + 0x8]           ; 0050d4c3
    FADD float ptr [EDX + 0x8]          ; 0050d4c6
    LEA EAX,[ESP + 0x30]                ; 0050d4c9
    FST float ptr [ESP + 0x44]          ; 0050d4cd
    FMULP ST2                           ; 0050d4d1
    PUSH EAX                            ; 0050d4d3
    LEA EAX,[ESP + 0x1c]                ; 0050d4d4
    FXCH ST2                            ; 0050d4d8
    FSTP float ptr [ESP + 0x34]         ; 0050d4da
    PUSH EAX                            ; 0050d4de
    FXCH                                ; 0050d4df
    FSTP float ptr [ESP + 0x3c]         ; 0050d4e1
    PUSH EBX                            ; 0050d4e5
    FSTP float ptr [ESP + 0x44]         ; 0050d4e6
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0050d4ea
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0050d4ef
    FLD float ptr [ESP + 0x24]          ; 0050d4f2
    FSUB float ptr [ESP + 0x18]         ; 0050d4f6
    FMUL ST0                            ; 0050d4fa
    FLD float ptr [ESP + 0x28]          ; 0050d4fc
    FSUB float ptr [ESP + 0x1c]         ; 0050d500
    FMUL ST0                            ; 0050d504
    MOV EAX,[0x02080430]                ; 0050d506 | DAT_02080430
    FLD float ptr [ESP + 0x2c]          ; 0050d50b
    FXCH                                ; 0050d50f
    FADDP ST2,ST0                       ; 0050d511
    FSUB float ptr [ESP + 0x20]         ; 0050d513
    FMUL ST0                            ; 0050d517
    MOV dword ptr [EAX*0x8 + 0x2080434],EBX ; 0050d519 | DAT_02080434
    LEA EBX,[EAX + 0x1]                 ; 0050d520
    FADDP                               ; 0050d523
    MOV dword ptr [0x02080430],EBX      ; 0050d525 | DAT_02080430
    FSTP float ptr [EAX*0x8 + 0x2080438] ; 0050d52b | DAT_02080438
    JMP 0x0050d39b                      ; 0050d532
        ;   XREF to: 0050d39b (UNCONDITIONAL_JUMP)  ; LAB_0050d39b
    FLD float ptr [ECX + 0x4]           ; 0050d537
        ;   Label: LAB_0050d537
    FCOMP float ptr [EDX + 0x4]         ; 0050d53a
    FNSTSW AX                           ; 0050d53d
    SAHF                                ; 0050d53f
    JNZ 0x0050d471                      ; 0050d540
        ;   XREF to: 0050d471 (CONDITIONAL_JUMP)  ; LAB_0050d471
    FLD float ptr [ECX + 0x8]           ; 0050d546
    FCOMP float ptr [EDX + 0x8]         ; 0050d549
    FNSTSW AX                           ; 0050d54c
    SAHF                                ; 0050d54e
    JNZ 0x0050d471                      ; 0050d54f
        ;   XREF to: 0050d471 (CONDITIONAL_JUMP)  ; LAB_0050d471
    LEA EDX,[EBX + 0x30]                ; 0050d555
    LEA ECX,[EBX + 0x134]               ; 0050d558
    FLD float ptr [EDX]                 ; 0050d55e
    FCOMP float ptr [ECX]               ; 0050d560
    FNSTSW AX                           ; 0050d562
    SAHF                                ; 0050d564
    JNZ 0x0050d471                      ; 0050d565
        ;   XREF to: 0050d471 (CONDITIONAL_JUMP)  ; LAB_0050d471
    FLD float ptr [EDX + 0x4]           ; 0050d56b
    FCOMP float ptr [ECX + 0x4]         ; 0050d56e
    FNSTSW AX                           ; 0050d571
    SAHF                                ; 0050d573
    JNZ 0x0050d471                      ; 0050d574
        ;   XREF to: 0050d471 (CONDITIONAL_JUMP)  ; LAB_0050d471
    FLD float ptr [EDX + 0x8]           ; 0050d57a
    FCOMP float ptr [ECX + 0x8]         ; 0050d57d
    FNSTSW AX                           ; 0050d580
    SAHF                                ; 0050d582
    JNZ 0x0050d471                      ; 0050d583
        ;   XREF to: 0050d471 (CONDITIONAL_JUMP)  ; LAB_0050d471
    MOV EDX,dword ptr [ESP + 0x60]      ; 0050d589
    TEST dword ptr [EBX + 0x140],EDX    ; 0050d58d
    JZ 0x0050d39b                       ; 0050d593
        ;   XREF to: 0050d39b (CONDITIONAL_JUMP)  ; LAB_0050d39b
    JMP 0x0050d47e                      ; 0050d599
        ;   XREF to: 0050d47e (UNCONDITIONAL_JUMP)  ; LAB_0050d47e
    MOV EDI,dword ptr [0x02080430]      ; 0050d59e | DAT_02080430
        ;   Label: LAB_0050d59e
    XOR EBX,EBX                         ; 0050d5a4
    TEST EDI,EDI                        ; 0050d5a6
    JLE 0x0050d5d0                      ; 0050d5a8
        ;   XREF to: 0050d5d0 (CONDITIONAL_JUMP)  ; LAB_0050d5d0
    MOV EAX,EBP                         ; 0050d5aa
    XOR EDX,EDX                         ; 0050d5ac
    MOV ESI,dword ptr [0x02080430]      ; 0050d5ae | DAT_02080430
        ;   Label: LAB_0050d5ae
    ADD EAX,0x4                         ; 0050d5b4
    MOV ECX,dword ptr [EDX + 0x2080434] ; 0050d5b7
    ADD EDX,0x8                         ; 0050d5bd
    INC EBX                             ; 0050d5c0
    MOV dword ptr [EAX + 0x15f2fc],ECX  ; 0050d5c1
    CMP EBX,ESI                         ; 0050d5c7
    JL 0x0050d5ae                       ; 0050d5c9
        ;   XREF to: 0050d5ae (CONDITIONAL_JUMP)  ; LAB_0050d5ae
    LEA EAX,[EAX]                       ; 0050d5cb
    MOV ECX,ECX                         ; 0050d5ce
    MOV EAX,[0x02080430]                ; 0050d5d0 | DAT_02080430
        ;   Label: LAB_0050d5d0
    JMP 0x0050d416                      ; 0050d5d5
        ;   XREF to: 0050d416 (UNCONDITIONAL_JUMP)  ; LAB_0050d416
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0050d5da
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_0050d5da
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0050d5df
    SUB EAX,EDX                         ; 0050d5e3
    MOV dword ptr [ESP + 0x70],EAX      ; 0050d5e5
    FILD dword ptr [ESP + 0x70]         ; 0050d5e9
    FMUL double ptr [0x0059081a]        ; 0050d5ed | DOUBLE_0059081a
    MOV EAX,[0x005b9354]                ; 0050d5f3 | g_CGame_PTR_005b9354
    FMUL double ptr [0x00590822]        ; 0050d5f8 | DOUBLE_00590822
    FLD float ptr [EAX + 0x264]         ; 0050d5fe | g_CGame_01c775ec.delta_time_float
    FXCH                                ; 0050d604
    FMUL double ptr [0x0059082a]        ; 0050d606 | DOUBLE_0059082a
    FDIVRP                              ; 0050d60c
    SUB ESP,0x8                         ; 0050d60e
    MOV ECX,dword ptr [0x02080430]      ; 0050d611 | DAT_02080430
    FSTP double ptr [ESP]               ; 0050d617
    PUSH ECX                            ; 0050d61a
    PUSH 0x5907ed                       ; 0050d61b | = "buildDispList %d items : %3.2f ms\n"
    MOV EBX,dword ptr [0x005ad350]      ; 0050d620 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 0050d626 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0050d627
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 0050d62c
    ADD ESP,0x74                        ; 0050d62f
    POP EBP                             ; 0050d632
    POP EDI                             ; 0050d633
    POP ESI                             ; 0050d634
    POP EBX                             ; 0050d635
    RET                                 ; 0050d636

