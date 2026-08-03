; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_FUN_004d23d0(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_enterMainGameMenu_FUN_004c85e0 at 004c85e0
;
; Referenced Globals:
;   void* switchdataD_004d23b8 = 004d25ec
;   TerminatedCString s_fblurl_00588d05
;   TerminatedCString s_fblurm_00588d0c
;   TerminatedCString s_fblurr_00588d13
;   TerminatedCString s_S_T_A_R_T_00588d1a
;   TerminatedCString s_O_P_T_I_O_N_S_00588d24
;   TerminatedCString s_L_O_A_D_00588d32
;   TerminatedCString s_Q_U_I_T_00588d3a
;   TerminatedCString s_f0100_00589207
;   TerminatedCString s_f0300_0058920d
;   undefined4 DAT_005b7620
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   void* PTR_s_f0100_005baf18 = 00589207
;   undefined1* PTR_s_f0300_005baf1c = 0058920d
;   ... and 22 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0
;   core_game.cpp_FUN_004a4170
;   core_game.cpp_FUN_004a4b50
;   core_main.c_FUN_004c8510
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0
;   core_moon.cpp_CMoon_free_FUN_004dea60
;   core_moon.cpp_CMoon_init_FUN_004de860
;   core_moon.cpp_CMoon_render_FUN_004dec50
;   core_moon.cpp_CMoon_update_FUN_004deae0
;   core_sound.cpp_CSound_configure_FUN_0052e850
;   core_sound.cpp_CSound_reset_FUN_0052e9c0
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d23d0
        ;   Label: core_menu.cpp_FUN_004d23d0
    SUB ESP,0x8                         ; 004d23d1
    CMP dword ptr [0x005b7620],0x1e0    ; 004d23d4 | DAT_005b7620
    JL 0x004d2792                       ; 004d23de
        ;   XREF to: 004d2792 (CONDITIONAL_JUMP)  ; LAB_004d2792
    CMP dword ptr [0x02dc9d60],0x0      ; 004d23e4 | INT_02dc9d60
    JZ 0x004d279c                       ; 004d23eb
        ;   XREF to: 004d279c (CONDITIONAL_JUMP)  ; LAB_004d279c
    PUSH EDI                            ; 004d23f1
        ;   Label: LAB_004d23f1
    PUSH ESI                            ; 004d23f2
    PUSH EBX                            ; 004d23f3
    MOV EBX,0x1cc56e0                   ; 004d23f4
    XOR ESI,ESI                         ; 004d23f9
    MOV EBP,0x40                        ; 004d23fb
    PUSH EBP                            ; 004d2400
        ;   Label: LAB_004d2400
    PUSH EBP                            ; 004d2401
    MOV EDI,dword ptr [ESI + 0x5baf18]  ; 004d2402 | PTR_s_f0100_005baf18 | PTR_s_f0300_005baf1c
    PUSH EDI                            ; 004d2408 | = "f0100" | s_f0300_0058920d
    PUSH EBX                            ; 004d2409
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004d240a
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004d240f
    PUSH 0x1                            ; 004d2412
    PUSH 0x2                            ; 004d2414
    PUSH EBX                            ; 004d2416
    ADD ESI,0x4                         ; 004d2417
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004d241a
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004d241f
    ADD EBX,0x14                        ; 004d2422
    CMP ESI,0x20                        ; 004d2425
    JNZ 0x004d2400                      ; 004d2428
        ;   XREF to: 004d2400 (CONDITIONAL_JUMP)  ; LAB_004d2400
    PUSH 0x46                           ; 004d242a
    PUSH 0x68                           ; 004d242c
    PUSH 0x588d05                       ; 004d242e | = "fblurl"
    PUSH 0x1cc5b20                      ; 004d2433
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004d2438
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004d243d
    PUSH 0x46                           ; 004d2440
    PUSH ESI                            ; 004d2442
    PUSH 0x588d0c                       ; 004d2443 | = "fblurm"
    PUSH 0x1cc5b34                      ; 004d2448
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004d244d
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004d2452
    PUSH 0x46                           ; 004d2455
    PUSH 0x68                           ; 004d2457
    PUSH 0x588d13                       ; 004d2459 | = "fblurr"
    PUSH 0x1cc5b48                      ; 004d245e
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004d2463
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004d2468
    XOR EBP,EBP                         ; 004d246b
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004d246d
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL engine_texture.cpp_FUN_005459f0 ; 004d2472
        ;   XREF to: 005459f0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005459f0()
    PUSH 0x1cc5780                      ; 004d2477
    MOV dword ptr [ESP + 0x10],EBP      ; 004d247c
    CALL core_moon.cpp_CMoon_init_FUN_004de860 ; 004d2480
        ;   XREF to: 004de860 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_init_FUN_004de860(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004d2485
    MOV EDX,dword ptr [0x005b9354]      ; 004d2488 | g_CGame_PTR_005b9354
    MOV EAX,0x1                         ; 004d248e
    PUSH EDX                            ; 004d2493 | g_CGame_01c775ec
    MOV dword ptr [ESP + 0x14],EAX      ; 004d2494
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 004d2498
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_0049a890(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d249d
    MOV ECX,dword ptr [0x005b9354]      ; 004d24a0 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d24a0
    PUSH ECX                            ; 004d24a6 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 004d24a7
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_0049a8a0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d24ac
    MOV EAX,[0x005b9354]                ; 004d24af | g_CGame_PTR_005b9354
    SUB ESP,0x4                         ; 004d24b4
    MOV EDX,dword ptr [EAX + 0x264]     ; 004d24b7 | g_CGame_01c775ec.delta_time_float
    MOV dword ptr [ESP],EDX             ; 004d24bd
    PUSH 0x1cc5780                      ; 004d24c0
    CALL core_moon.cpp_CMoon_update_FUN_004deae0 ; 004d24c5
        ;   XREF to: 004deae0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_update_FUN_004deae0(CMoon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d24ca
    PUSH 0x1cc5780                      ; 004d24cd
    CALL core_moon.cpp_CMoon_render_FUN_004dec50 ; 004d24d2
        ;   XREF to: 004dec50 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_004dec50(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004d24d7
    PUSH 0x588d1a                       ; 004d24da | = "S T A R T"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d24df
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d24e4
    MOV EDI,0x1cc7d10                   ; 004d24e7
    MOV ESI,EAX                         ; 004d24ec
    PUSH EDI                            ; 004d24ee
    MOV AL,byte ptr [ESI]               ; 004d24ef
        ;   Label: LAB_004d24ef
    MOV byte ptr [EDI],AL               ; 004d24f1 | DAT_01cc7d10 | DAT_01cc7d12
    CMP AL,0x0                          ; 004d24f3
    JZ 0x004d2507                       ; 004d24f5
        ;   XREF to: 004d2507 (CONDITIONAL_JUMP)  ; LAB_004d2507
    MOV AL,byte ptr [ESI + 0x1]         ; 004d24f7
    ADD ESI,0x2                         ; 004d24fa
    MOV byte ptr [EDI + 0x1],AL         ; 004d24fd | DAT_01cc7d11 | DAT_01cc7d13
    ADD EDI,0x2                         ; 004d2500
    CMP AL,0x0                          ; 004d2503
    JNZ 0x004d24ef                      ; 004d2505
        ;   XREF to: 004d24ef (CONDITIONAL_JUMP)  ; LAB_004d24ef
    POP EDI                             ; 004d2507
        ;   Label: LAB_004d2507
    PUSH 0x588d24                       ; 004d2508 | = "O P T I O N S"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d250d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d2512
    MOV EDI,0x1cc7e10                   ; 004d2515
    MOV ESI,EAX                         ; 004d251a
    PUSH EDI                            ; 004d251c
    MOV AL,byte ptr [ESI]               ; 004d251d
        ;   Label: LAB_004d251d
    MOV byte ptr [EDI],AL               ; 004d251f | DAT_01cc7e10 | DAT_01cc7e12
    CMP AL,0x0                          ; 004d2521
    JZ 0x004d2535                       ; 004d2523
        ;   XREF to: 004d2535 (CONDITIONAL_JUMP)  ; LAB_004d2535
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2525
    ADD ESI,0x2                         ; 004d2528
    MOV byte ptr [EDI + 0x1],AL         ; 004d252b | DAT_01cc7e11 | DAT_01cc7e13
    ADD EDI,0x2                         ; 004d252e
    CMP AL,0x0                          ; 004d2531
    JNZ 0x004d251d                      ; 004d2533
        ;   XREF to: 004d251d (CONDITIONAL_JUMP)  ; LAB_004d251d
    POP EDI                             ; 004d2535
        ;   Label: LAB_004d2535
    PUSH 0x588d32                       ; 004d2536 | = "L O A D"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d253b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d2540
    MOV EDI,0x1cc7f10                   ; 004d2543
    MOV ESI,EAX                         ; 004d2548
    PUSH EDI                            ; 004d254a
    MOV AL,byte ptr [ESI]               ; 004d254b
        ;   Label: LAB_004d254b
    MOV byte ptr [EDI],AL               ; 004d254d | DAT_01cc7f10 | DAT_01cc7f12
    CMP AL,0x0                          ; 004d254f
    JZ 0x004d2563                       ; 004d2551
        ;   XREF to: 004d2563 (CONDITIONAL_JUMP)  ; LAB_004d2563
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2553
    ADD ESI,0x2                         ; 004d2556
    MOV byte ptr [EDI + 0x1],AL         ; 004d2559 | DAT_01cc7f11 | DAT_01cc7f13
    ADD EDI,0x2                         ; 004d255c
    CMP AL,0x0                          ; 004d255f
    JNZ 0x004d254b                      ; 004d2561
        ;   XREF to: 004d254b (CONDITIONAL_JUMP)  ; LAB_004d254b
    POP EDI                             ; 004d2563
        ;   Label: LAB_004d2563
    PUSH 0x588d3a                       ; 004d2564 | = "Q U I T"
    MOV EDI,0x1cc8010                   ; 004d2569
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d256e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d2573
    MOV ESI,EAX                         ; 004d2576
    MOV EDX,0x1cc7d10                   ; 004d2578
    PUSH EDI                            ; 004d257d
    MOV AL,byte ptr [ESI]               ; 004d257e
        ;   Label: LAB_004d257e
    MOV byte ptr [EDI],AL               ; 004d2580 | DAT_01cc8010 | DAT_01cc8012
    CMP AL,0x0                          ; 004d2582
    JZ 0x004d2596                       ; 004d2584
        ;   XREF to: 004d2596 (CONDITIONAL_JUMP)  ; LAB_004d2596
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2586
    ADD ESI,0x2                         ; 004d2589
    MOV byte ptr [EDI + 0x1],AL         ; 004d258c | DAT_01cc8011 | DAT_01cc8013
    ADD EDI,0x2                         ; 004d258f
    CMP AL,0x0                          ; 004d2592
    JNZ 0x004d257e                      ; 004d2594
        ;   XREF to: 004d257e (CONDITIONAL_JUMP)  ; LAB_004d257e
    POP EDI                             ; 004d2596
        ;   Label: LAB_004d2596
    XOR EAX,EAX                         ; 004d2597
    MOV dword ptr [EAX + 0x1cc8110],EDX ; 004d2599 | DAT_01cc7d10 | DAT_01cc7e10
        ;   Label: LAB_004d2599
    ADD EAX,0x4                         ; 004d259f
    ADD EDX,0x100                       ; 004d25a2
    CMP EAX,0x10                        ; 004d25a8
    JNZ 0x004d2599                      ; 004d25ab
        ;   XREF to: 004d2599 (CONDITIONAL_JUMP)  ; LAB_004d2599
    PUSH 0x0                            ; 004d25ad
    PUSH 0xfa                           ; 004d25af
    LEA EAX,[ESP + 0x14]                ; 004d25b4
    PUSH EAX                            ; 004d25b8
    PUSH 0x4                            ; 004d25b9
    PUSH 0x1cc8110                      ; 004d25bb
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 ; 004d25c0
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 004d25c5
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d25c8
    MOV ESI,EAX                         ; 004d25cc
    TEST EBX,EBX                        ; 004d25ce
    JZ 0x004d25d7                       ; 004d25d0
        ;   XREF to: 004d25d7 (CONDITIONAL_JUMP)  ; LAB_004d25d7
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004d25d2
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d25d7
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004d25d7
    CMP ESI,0x3                         ; 004d25dc
    JA 0x004d266d                       ; 004d25df
        ;   XREF to: 004d266d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x4d23b8]  ; 004d25e5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1cc5780                      ; 004d25ec
        ;   Label: caseD_0
    CALL core_moon.cpp_CMoon_free_FUN_004dea60 ; 004d25f1
        ;   XREF to: 004dea60 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_004dea60(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004d25f6
    MOV EDX,dword ptr [0x005bed68]      ; 004d25f9 | g_CSound_PTR_005bed68
    PUSH EDX                            ; 004d25ff
    CALL core_sound.cpp_CSound_reset_FUN_0052e9c0 ; 004d2600
        ;   XREF to: 0052e9c0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_0052e9c0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d2605
    MOV EAX,[0x005bac64]                ; 004d2608 | g_CKeys_PTR_005bac64
    PUSH 0x2a                           ; 004d260d
    MOV EDX,dword ptr [EAX]             ; 004d260f | g_CKeys_01cc30e4
    PUSH EAX                            ; 004d2611 | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 004d2612
    ADD ESP,0x8                         ; 004d2614
    TEST EAX,EAX                        ; 004d2617
    JZ 0x004d27c0                       ; 004d2619
        ;   XREF to: 004d27c0 (CONDITIONAL_JUMP)  ; LAB_004d27c0
    PUSH 0x1d                           ; 004d261f
    MOV EAX,[0x005bac64]                ; 004d2621 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d2626 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d2627 | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 004d2629
    ADD ESP,0x8                         ; 004d262b
    TEST EAX,EAX                        ; 004d262e
    JZ 0x004d27c0                       ; 004d2630
        ;   XREF to: 004d27c0 (CONDITIONAL_JUMP)  ; LAB_004d27c0
    PUSH 0x2                            ; 004d2636
    MOV ESI,dword ptr [0x005b9354]      ; 004d2638 | g_CGame_PTR_005b9354
    PUSH ESI                            ; 004d263e | g_CGame_01c775ec
    CALL core_game.cpp_FUN_004a4b50     ; 004d263f
        ;   XREF to: 004a4b50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004a4b50(CGame * this_ptr, int select_mode)
        ;   Label: LAB_004d263f
    ADD ESP,0x8                         ; 004d2644
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004d2647
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL engine_texture.cpp_FUN_005459f0 ; 004d264c
        ;   XREF to: 005459f0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005459f0()
    PUSH 0x1cc5780                      ; 004d2651
    CALL core_moon.cpp_CMoon_init_FUN_004de860 ; 004d2656
        ;   XREF to: 004de860 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_init_FUN_004de860(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004d265b
    MOV EDI,dword ptr [0x005bed68]      ; 004d265e | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004d2664
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d2665
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_0052e850(CSound * this_ptr)
        ;   Label: LAB_004d2665
    ADD ESP,0x4                         ; 004d266a
        ;   Label: LAB_004d266a
    PUSH 0x1                            ; 004d266d
        ;   Label: default
    MOV EAX,[0x005bac64]                ; 004d266f | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d2674 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d2675 | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004d2677
    ADD ESP,0x8                         ; 004d267a
    TEST EAX,EAX                        ; 004d267d
    JZ 0x004d2686                       ; 004d267f
        ;   XREF to: 004d2686 (CONDITIONAL_JUMP)  ; LAB_004d2686
    MOV EBP,0x63                        ; 004d2681
    PUSH 0x1d                           ; 004d2686
        ;   Label: LAB_004d2686
    MOV EAX,[0x005bac64]                ; 004d2688 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d268d | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d268e | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 004d2690
    ADD ESP,0x8                         ; 004d2692
    TEST EAX,EAX                        ; 004d2695
    JZ 0x004d26d3                       ; 004d2697
        ;   XREF to: 004d26d3 (CONDITIONAL_JUMP)  ; LAB_004d26d3
    PUSH 0x32                           ; 004d2699
    MOV EAX,[0x005bac64]                ; 004d269b | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d26a0 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d26a1 | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004d26a3
    ADD ESP,0x8                         ; 004d26a6
    TEST EAX,EAX                        ; 004d26a9
    JZ 0x004d26d3                       ; 004d26ab
        ;   XREF to: 004d26d3 (CONDITIONAL_JUMP)  ; LAB_004d26d3
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 004d26ad
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
    TEST EAX,EAX                        ; 004d26b2
    SETZ AL                             ; 004d26b4
    AND EAX,0xff                        ; 004d26b7
    PUSH EAX                            ; 004d26bc
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0 ; 004d26bd
        ;   XREF to: 00526cb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0(int enable)
    ADD ESP,0x4                         ; 004d26c2
    MOV EAX,[0x005bed68]                ; 004d26c5 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004d26ca
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d26cb
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_0052e850(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d26d0
    PUSH 0x1d                           ; 004d26d3
        ;   Label: LAB_004d26d3
    MOV EAX,[0x005bac64]                ; 004d26d5 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d26da | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d26db | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 004d26dd
    ADD ESP,0x8                         ; 004d26df
    TEST EAX,EAX                        ; 004d26e2
    JZ 0x004d2721                       ; 004d26e4
        ;   XREF to: 004d2721 (CONDITIONAL_JUMP)  ; LAB_004d2721
    PUSH 0x20                           ; 004d26e6
    MOV EAX,[0x005bac64]                ; 004d26e8 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d26ed | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d26ee | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004d26f0
    ADD ESP,0x8                         ; 004d26f3
    TEST EAX,EAX                        ; 004d26f6
    JZ 0x004d2855                       ; 004d26f8
        ;   XREF to: 004d2855 (CONDITIONAL_JUMP)  ; LAB_004d2855
    MOV EDX,dword ptr [0x005bed68]      ; 004d26fe | g_CSound_PTR_005bed68
        ;   Label: LAB_004d26fe
    PUSH EDX                            ; 004d2704
    CALL core_sound.cpp_CSound_reset_FUN_0052e9c0 ; 004d2705
        ;   XREF to: 0052e9c0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_0052e9c0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d270a
    CALL core_main.c_FUN_004c8510       ; 004d270d
        ;   XREF to: 004c8510 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8510()
    MOV ECX,dword ptr [0x005bed68]      ; 004d2712 | g_CSound_PTR_005bed68
    PUSH ECX                            ; 004d2718
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d2719
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_0052e850(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d271e
    PUSH 0x1d                           ; 004d2721
        ;   Label: LAB_004d2721
    MOV EAX,[0x005bac64]                ; 004d2723 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d2728 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d2729 | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 004d272b
    ADD ESP,0x8                         ; 004d272d
    TEST EAX,EAX                        ; 004d2730
    JZ 0x004d2744                       ; 004d2732
        ;   XREF to: 004d2744 (CONDITIONAL_JUMP)  ; LAB_004d2744
    PUSH 0x21                           ; 004d2734
    MOV EAX,[0x005bac64]                ; 004d2736 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d273b | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d273c | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004d273e
    ADD ESP,0x8                         ; 004d2741
    CMP dword ptr [ESP + 0x10],0x0      ; 004d2744
        ;   Label: LAB_004d2744
    JZ 0x004d2765                       ; 004d2749
        ;   XREF to: 004d2765 (CONDITIONAL_JUMP)  ; LAB_004d2765
    MOV EDI,dword ptr [0x005bed68]      ; 004d274b | g_CSound_PTR_005bed68
    XOR ESI,ESI                         ; 004d2751
    PUSH EDI                            ; 004d2753
    MOV dword ptr [ESP + 0x14],ESI      ; 004d2754
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d2758
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_0052e850(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d275d
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004d2760
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    TEST EBP,EBP                        ; 004d2765
        ;   Label: LAB_004d2765
    JZ 0x004d24a0                       ; 004d2767
        ;   XREF to: 004d24a0 (CONDITIONAL_JUMP)  ; LAB_004d24a0
    MOV EAX,[0x005bed68]                ; 004d276d | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004d2772
    CALL core_sound.cpp_CSound_reset_FUN_0052e9c0 ; 004d2773
        ;   XREF to: 0052e9c0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_0052e9c0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d2778
    PUSH 0x1cc5780                      ; 004d277b
    CALL core_moon.cpp_CMoon_free_FUN_004dea60 ; 004d2780
        ;   XREF to: 004dea60 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_004dea60(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004d2785
    MOV EAX,EBP                         ; 004d2788
    POP EBX                             ; 004d278a
    POP ESI                             ; 004d278b
    POP EDI                             ; 004d278c
    ADD ESP,0x8                         ; 004d278d
    POP EBP                             ; 004d2790
    RET                                 ; 004d2791
    MOV EAX,0x1                         ; 004d2792
        ;   Label: LAB_004d2792
    ADD ESP,0x8                         ; 004d2797
    POP EBP                             ; 004d279a
    RET                                 ; 004d279b
    MOV EAX,[0x005b9354]                ; 004d279c | g_CGame_PTR_005b9354
        ;   Label: LAB_004d279c
    CMP dword ptr [EAX + 0x4],0x1e0     ; 004d27a1 | g_CGame_01c775ec.game_pixy
    JLE 0x004d23f1                      ; 004d27a8
        ;   XREF to: 004d23f1 (CONDITIONAL_JUMP)  ; LAB_004d23f1
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004d27ae | g_CGame_01c775ec.game_pixy
    MOV dword ptr [EAX],0x280           ; 004d27b5 | g_CGame_01c775ec
    JMP 0x004d23f1                      ; 004d27bb
        ;   XREF to: 004d23f1 (UNCONDITIONAL_JUMP)  ; LAB_004d23f1
    PUSH 0x1d                           ; 004d27c0
        ;   Label: LAB_004d27c0
    MOV EAX,[0x005bac64]                ; 004d27c2 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d27c7 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d27c8 | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 004d27ca
    ADD ESP,0x8                         ; 004d27cc
    TEST EAX,EAX                        ; 004d27cf
    JZ 0x004d27e1                       ; 004d27d1
        ;   XREF to: 004d27e1 (CONDITIONAL_JUMP)  ; LAB_004d27e1
    PUSH 0x1                            ; 004d27d3
    MOV EBX,dword ptr [0x005b9354]      ; 004d27d5 | g_CGame_PTR_005b9354
    PUSH EBX                            ; 004d27db | g_CGame_01c775ec
    JMP 0x004d263f                      ; 004d27dc
        ;   XREF to: 004d263f (UNCONDITIONAL_JUMP)  ; LAB_004d263f
    PUSH EAX                            ; 004d27e1
        ;   Label: LAB_004d27e1
    MOV ECX,dword ptr [0x005b9354]      ; 004d27e2 | g_CGame_PTR_005b9354
    PUSH ECX                            ; 004d27e8 | g_CGame_01c775ec
    JMP 0x004d263f                      ; 004d27e9
        ;   XREF to: 004d263f (UNCONDITIONAL_JUMP)  ; LAB_004d263f
    PUSH 0x1cc5780                      ; 004d27ee
        ;   Label: caseD_2
    CALL core_moon.cpp_CMoon_free_FUN_004dea60 ; 004d27f3
        ;   XREF to: 004dea60 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_004dea60(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004d27f8
    MOV ESI,dword ptr [0x005bed68]      ; 004d27fb | g_CSound_PTR_005bed68
    PUSH ESI                            ; 004d2801
    CALL core_sound.cpp_CSound_reset_FUN_0052e9c0 ; 004d2802
        ;   XREF to: 0052e9c0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_0052e9c0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d2807
    PUSH 0x1                            ; 004d280a
    PUSH 0x0                            ; 004d280c
    MOV EDI,dword ptr [0x005b9354]      ; 004d280e | g_CGame_PTR_005b9354
    PUSH EDI                            ; 004d2814 | g_CGame_01c775ec
    CALL core_game.cpp_FUN_004a4170     ; 004d2815
        ;   XREF to: 004a4170 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004a4170(CGame * this_ptr, char * save_filename, int load_mode)
    ADD ESP,0xc                         ; 004d281a
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004d281d
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL engine_texture.cpp_FUN_005459f0 ; 004d2822
        ;   XREF to: 005459f0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005459f0()
    PUSH 0x1cc5780                      ; 004d2827
    CALL core_moon.cpp_CMoon_init_FUN_004de860 ; 004d282c
        ;   XREF to: 004de860 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_init_FUN_004de860(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004d2831
    MOV EAX,[0x005bed68]                ; 004d2834 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 004d2839
    JMP 0x004d2665                      ; 004d283a
        ;   XREF to: 004d2665 (UNCONDITIONAL_JUMP)  ; LAB_004d2665
    PUSH 0x0                            ; 004d283f
        ;   Label: caseD_1
    CALL core_menu.cpp_showOptionsScreen_FUN_004d21c0 ; 004d2841
        ;   XREF to: 004d21c0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showOptionsScreen_FUN_004d21c0(int initialize_systems)
    JMP 0x004d266a                      ; 004d2846
        ;   XREF to: 004d266a (UNCONDITIONAL_JUMP)  ; LAB_004d266a
    MOV EBP,0x63                        ; 004d284b
        ;   Label: caseD_3
    JMP 0x004d266d                      ; 004d2850
        ;   XREF to: 004d266d (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x26                           ; 004d2855
        ;   Label: LAB_004d2855
    MOV EAX,[0x005bac64]                ; 004d2857 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d285c | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d285d | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004d285f
    ADD ESP,0x8                         ; 004d2862
    TEST EAX,EAX                        ; 004d2865
    JNZ 0x004d26fe                      ; 004d2867
        ;   XREF to: 004d26fe (CONDITIONAL_JUMP)  ; LAB_004d26fe
    JMP 0x004d2721                      ; 004d286d
        ;   XREF to: 004d2721 (UNCONDITIONAL_JUMP)  ; LAB_004d2721

