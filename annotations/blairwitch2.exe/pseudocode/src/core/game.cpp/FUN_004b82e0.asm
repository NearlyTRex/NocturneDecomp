; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b82e0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b6590
;
; Referenced Globals:
;   TerminatedCString s_GoToMap_005d790b
;   TerminatedCString s_GoToCompass_005d7913
;   TerminatedCString s_UseSPS_005d791f
;   TerminatedCString s_SPOOKHOUSE_005d7926
;   TerminatedCString s_quicksavedgame_noc_005d7931
;   TerminatedCString s_Quick_Save_005d7944
;   undefined4 DAT_005d794f
;   TerminatedCString s_quicksavedgame_noc_005d7952
;   undefined4 DAT_005d7965
;   TerminatedCString s_Restore_quick_saved_game_005d796a
;   TerminatedCString s_quicksavedgame_noc_005d7984
;   undefined4 s_quicksavedgame_noc_005d7984+1
;   undefined4 s_quicksavedgame_noc_005d7984+2
;   undefined4 s_quicksavedgame_noc_005d7984+3
;   TerminatedCString s_No_quicked_saved_game_to_005d7997
;   ... and 30 more
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_game.cpp_CGame_displayMessage_FUN_004b31a0
;   core_game.cpp_FUN_004bb9b0
;   core_game.cpp_FUN_004bdb10
;   core_script.cpp_FUN_00529b00
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0
;   core_set.cpp_CDemonSet_setGamma_FUN_00534580
;   core_set.cpp_FUN_0052e910
;   core_set.cpp_FUN_00534640
;   core_setdir.cpp_FUN_00538d10
;   core_sound.cpp_CSound_shutdown_FUN_0055a360
;   core_sound.cpp_FUN_0055a1d0
;   crt_env.c_getenv_FUN_005bac90
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_unknown.c_FUN_005b7790
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b82e0
        ;   Label: core_game.cpp_FUN_004b82e0
    PUSH ESI                            ; 004b82e1
    PUSH EDI                            ; 004b82e2
    PUSH EBP                            ; 004b82e3
    MOV EBP,ESP                         ; 004b82e4
    SUB ESP,0x218                       ; 004b82e6
    AND ESP,0xfffffff8                  ; 004b82ec
    CMP dword ptr [0x01cb7788],0x0      ; 004b82ef | DAT_01cb7788
    JNZ 0x004b8d87                      ; 004b82f6
        ;   XREF to: 004b8d87 (CONDITIONAL_JUMP)  ; LAB_004b8d87
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b82fc
    CMP dword ptr [EAX + 0xe0],0x0      ; 004b82ff
    JZ 0x004b884f                       ; 004b8306
        ;   XREF to: 004b884f (CONDITIONAL_JUMP)  ; LAB_004b884f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b830c
        ;   Label: LAB_004b830c
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b830f
    JZ 0x004b8372                       ; 004b8316
        ;   XREF to: 004b8372 (CONDITIONAL_JUMP)  ; LAB_004b8372
    PUSH 0x1d                           ; 004b8318
    MOV EAX,[0x00617dd4]                ; 004b831a | DAT_00617dd4
    PUSH EAX                            ; 004b831f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8320 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b8322
    ADD ESP,0x8                         ; 004b8324
    TEST EAX,EAX                        ; 004b8327
    JZ 0x004b8372                       ; 004b8329
        ;   XREF to: 004b8372 (CONDITIONAL_JUMP)  ; LAB_004b8372
    PUSH 0x15                           ; 004b832b
    MOV EAX,[0x00617dd4]                ; 004b832d | DAT_00617dd4
    PUSH EAX                            ; 004b8332 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8333 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8335
    ADD ESP,0x8                         ; 004b8338
    TEST EAX,EAX                        ; 004b833b
    JZ 0x004b8372                       ; 004b833d
        ;   XREF to: 004b8372 (CONDITIONAL_JUMP)  ; LAB_004b8372
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b833f
    MOV EAX,0x1                         ; 004b8342
    MOV ESI,dword ptr [EDX + 0x218]     ; 004b8347
    SUB EAX,ESI                         ; 004b834d
    MOV dword ptr [EDX + 0x218],EAX     ; 004b834f
    JZ 0x004b8a6d                       ; 004b8355
        ;   XREF to: 004b8a6d (CONDITIONAL_JUMP)  ; LAB_004b8a6d
    MOV ECX,dword ptr [0x0061c068]      ; 004b835b | DAT_0061c068
    XOR EDX,EDX                         ; 004b8361
    PUSH ECX                            ; 004b8363
    MOV dword ptr [0x01c2a384],EDX      ; 004b8364 | DAT_01c2a384
    CALL core_sound.cpp_CSound_shutdown_FUN_0055a360 ; 004b836a
        ;   XREF to: 0055a360 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0055a360(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b836f
        ;   Label: LAB_004b836f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8372
        ;   Label: LAB_004b8372
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b8375
    JZ 0x004b8a7d                       ; 004b837c
        ;   XREF to: 004b8a7d (CONDITIONAL_JUMP)  ; LAB_004b8a7d
    PUSH 0x1d                           ; 004b8382
        ;   Label: LAB_004b8382
    MOV EAX,[0x00617dd4]                ; 004b8384 | DAT_00617dd4
    PUSH EAX                            ; 004b8389 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b838a | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b838c
    ADD ESP,0x8                         ; 004b838e
    TEST EAX,EAX                        ; 004b8391
    JZ 0x004b83bf                       ; 004b8393
        ;   XREF to: 004b83bf (CONDITIONAL_JUMP)  ; LAB_004b83bf
    PUSH 0x2c                           ; 004b8395
    MOV EAX,[0x00617dd4]                ; 004b8397 | DAT_00617dd4
    PUSH EAX                            ; 004b839c | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b839d | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b839f
    ADD ESP,0x8                         ; 004b83a2
    TEST EAX,EAX                        ; 004b83a5
    JZ 0x004b83bf                       ; 004b83a7
        ;   XREF to: 004b83bf (CONDITIONAL_JUMP)  ; LAB_004b83bf
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b83a9
    MOV EAX,0x1                         ; 004b83ac
    MOV ESI,dword ptr [EDX + 0x200]     ; 004b83b1
    SUB EAX,ESI                         ; 004b83b7
    MOV dword ptr [EDX + 0x200],EAX     ; 004b83b9
    PUSH 0x38                           ; 004b83bf
        ;   Label: LAB_004b83bf
    MOV EAX,[0x00617dd4]                ; 004b83c1 | DAT_00617dd4
    PUSH EAX                            ; 004b83c6 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b83c7 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b83c9
    ADD ESP,0x8                         ; 004b83cb
    TEST EAX,EAX                        ; 004b83ce
    JZ 0x004b83fa                       ; 004b83d0
        ;   XREF to: 004b83fa (CONDITIONAL_JUMP)  ; LAB_004b83fa
    PUSH 0x32                           ; 004b83d2
    MOV EAX,[0x00617dd4]                ; 004b83d4 | DAT_00617dd4
    PUSH EAX                            ; 004b83d9 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b83da | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b83dc
    ADD ESP,0x8                         ; 004b83df
    TEST EAX,EAX                        ; 004b83e2
    JZ 0x004b83fa                       ; 004b83e4
        ;   XREF to: 004b83fa (CONDITIONAL_JUMP)  ; LAB_004b83fa
    CMP dword ptr [0x01d1cdc8],0x0      ; 004b83e6 | DAT_01d1cdc8
    SETZ AL                             ; 004b83ed
    AND EAX,0xff                        ; 004b83f0
    MOV [0x01d1cdc8],EAX                ; 004b83f5 | DAT_01d1cdc8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b83fa
        ;   Label: LAB_004b83fa
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004b83fd
    JZ 0x004b8a97                       ; 004b8404
        ;   XREF to: 004b8a97 (CONDITIONAL_JUMP)  ; LAB_004b8a97
    PUSH 0x1d                           ; 004b840a
        ;   Label: LAB_004b840a
    MOV EAX,[0x00617dd4]                ; 004b840c | DAT_00617dd4
    PUSH EAX                            ; 004b8411 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8412 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b8414
    ADD ESP,0x8                         ; 004b8416
    TEST EAX,EAX                        ; 004b8419
    JZ 0x004b8457                       ; 004b841b
        ;   XREF to: 004b8457 (CONDITIONAL_JUMP)  ; LAB_004b8457
    PUSH 0x32                           ; 004b841d
    MOV EAX,[0x00617dd4]                ; 004b841f | DAT_00617dd4
    PUSH EAX                            ; 004b8424 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8425 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8427
    ADD ESP,0x8                         ; 004b842a
    TEST EAX,EAX                        ; 004b842d
    JZ 0x004b8457                       ; 004b842f
        ;   XREF to: 004b8457 (CONDITIONAL_JUMP)  ; LAB_004b8457
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 004b8431
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
        ;   Label: LAB_004b8431
    TEST EAX,EAX                        ; 004b8436
    JZ 0x004b8ab4                       ; 004b8438
        ;   XREF to: 004b8ab4 (CONDITIONAL_JUMP)  ; LAB_004b8ab4
    PUSH 0x0                            ; 004b843e
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00550bd0 ; 004b8440
        ;   XREF to: 00550bd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00550bd0(int muted)
    ADD ESP,0x4                         ; 004b8445
    MOV EBX,dword ptr [0x0061c068]      ; 004b8448 | DAT_0061c068
    PUSH EBX                            ; 004b844e
    CALL core_sound.cpp_FUN_0055a1d0    ; 004b844f
        ;   XREF to: 0055a1d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055a1d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b8454
        ;   Label: LAB_004b8454
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8457
        ;   Label: LAB_004b8457
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b845a
    JZ 0x004b84c5                       ; 004b8461
        ;   XREF to: 004b84c5 (CONDITIONAL_JUMP)  ; LAB_004b84c5
    PUSH 0x1d                           ; 004b8463
    MOV EAX,[0x00617dd4]                ; 004b8465 | DAT_00617dd4
    PUSH EAX                            ; 004b846a | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b846b | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b846d
    ADD ESP,0x8                         ; 004b846f
    TEST EAX,EAX                        ; 004b8472
    JZ 0x004b84c5                       ; 004b8474
        ;   XREF to: 004b84c5 (CONDITIONAL_JUMP)  ; LAB_004b84c5
    PUSH 0x11                           ; 004b8476
    MOV EAX,[0x00617dd4]                ; 004b8478 | DAT_00617dd4
    PUSH EAX                            ; 004b847d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b847e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8480
    ADD ESP,0x8                         ; 004b8483
    TEST EAX,EAX                        ; 004b8486
    JZ 0x004b84c5                       ; 004b8488
        ;   XREF to: 004b84c5 (CONDITIONAL_JUMP)  ; LAB_004b84c5
    MOV EDI,dword ptr [0x006141bc]      ; 004b848a | DAT_006141bc
    CMP EDI,0x1e0                       ; 004b8490
    JL 0x004b84c5                       ; 004b8496
        ;   XREF to: 004b84c5 (CONDITIONAL_JUMP)  ; LAB_004b84c5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8498
    MOV EAX,0x1                         ; 004b849b
    MOV ECX,dword ptr [EDX + 0x298]     ; 004b84a0
    SUB EAX,ECX                         ; 004b84a6
    MOV dword ptr [EDX + 0x298],EAX     ; 004b84a8
    JNZ 0x004b8acf                      ; 004b84ae
        ;   XREF to: 004b8acf (CONDITIONAL_JUMP)  ; LAB_004b8acf
    PUSH EDI                            ; 004b84b4
    PUSH EAX                            ; 004b84b5
    PUSH EAX                            ; 004b84b6
    MOV EAX,[0x0061b5a8]                ; 004b84b7 | g_CDemonSetPtr
    PUSH EAX                            ; 004b84bc | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0052e910      ; 004b84bd
        ;   XREF to: 0052e910 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0052e910(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
        ;   Label: LAB_004b84bd
    ADD ESP,0x10                        ; 004b84c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b84c5
        ;   Label: LAB_004b84c5
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b84c8
    JZ 0x004b84de                       ; 004b84cf
        ;   XREF to: 004b84de (CONDITIONAL_JUMP)  ; LAB_004b84de
    CMP dword ptr [0x01cb80d0],0x0      ; 004b84d1 | DAT_01cb80d0
    JZ 0x004b8ae4                       ; 004b84d8
        ;   XREF to: 004b8ae4 (CONDITIONAL_JUMP)  ; LAB_004b8ae4
    PUSH 0x1d                           ; 004b84de
        ;   Label: LAB_004b84de
    MOV EAX,[0x00617dd4]                ; 004b84e0 | DAT_00617dd4
    PUSH EAX                            ; 004b84e5 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b84e6 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b84e8
    ADD ESP,0x8                         ; 004b84ea
    TEST EAX,EAX                        ; 004b84ed
    JZ 0x004b8516                       ; 004b84ef
        ;   XREF to: 004b8516 (CONDITIONAL_JUMP)  ; LAB_004b8516
    PUSH 0x1f                           ; 004b84f1
    MOV EAX,[0x00617dd4]                ; 004b84f3 | DAT_00617dd4
    PUSH EAX                            ; 004b84f8 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b84f9 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b84fb
    ADD ESP,0x8                         ; 004b84fe
    TEST EAX,EAX                        ; 004b8501
    JZ 0x004b8516                       ; 004b8503
        ;   XREF to: 004b8516 (CONDITIONAL_JUMP)  ; LAB_004b8516
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8505
    MOV EDI,dword ptr [EAX + 0x244]     ; 004b8508
    TEST EDI,EDI                        ; 004b850e
    JZ 0x004b8b43                       ; 004b8510
        ;   XREF to: 004b8b43 (CONDITIONAL_JUMP)  ; LAB_004b8b43
    PUSH 0x3c                           ; 004b8516
        ;   Label: LAB_004b8516
    MOV EAX,[0x00617dd4]                ; 004b8518 | DAT_00617dd4
    PUSH EAX                            ; 004b851d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b851e | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b8520
    ADD ESP,0x8                         ; 004b8522
    TEST EAX,EAX                        ; 004b8525
    JZ 0x004b853a                       ; 004b8527
        ;   XREF to: 004b853a (CONDITIONAL_JUMP)  ; LAB_004b853a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8529
    MOV EDX,dword ptr [EAX + 0x244]     ; 004b852c
    TEST EDX,EDX                        ; 004b8532
    JZ 0x004b8b52                       ; 004b8534
        ;   XREF to: 004b8b52 (CONDITIONAL_JUMP)  ; LAB_004b8b52
    PUSH 0x3d                           ; 004b853a
        ;   Label: LAB_004b853a
    MOV EAX,[0x00617dd4]                ; 004b853c | DAT_00617dd4
    PUSH EAX                            ; 004b8541 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8542 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b8544
    ADD ESP,0x8                         ; 004b8546
    TEST EAX,EAX                        ; 004b8549
    JZ 0x004b8559                       ; 004b854b
        ;   XREF to: 004b8559 (CONDITIONAL_JUMP)  ; LAB_004b8559
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b854d
    PUSH EBX                            ; 004b8550
    CALL core_game.cpp_FUN_004bdb10     ; 004b8551
        ;   XREF to: 004bdb10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bdb10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8556
    PUSH 0x40                           ; 004b8559
        ;   Label: LAB_004b8559
    MOV EAX,[0x00617dd4]                ; 004b855b | DAT_00617dd4
    PUSH EAX                            ; 004b8560 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8561 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b8563
    ADD ESP,0x8                         ; 004b8565
    TEST EAX,EAX                        ; 004b8568
    JZ 0x004b857c                       ; 004b856a
        ;   XREF to: 004b857c (CONDITIONAL_JUMP)  ; LAB_004b857c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b856c
    CMP dword ptr [EAX + 0x244],0x0     ; 004b856f
    JZ 0x004b8b61                       ; 004b8576
        ;   XREF to: 004b8b61 (CONDITIONAL_JUMP)  ; LAB_004b8b61
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b857c
        ;   Label: LAB_004b857c
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004b857f
    JZ 0x004b8b94                       ; 004b8586
        ;   XREF to: 004b8b94 (CONDITIONAL_JUMP)  ; LAB_004b8b94
    PUSH 0x3b                           ; 004b858c
        ;   Label: LAB_004b858c
    MOV EAX,[0x00617dd4]                ; 004b858e | DAT_00617dd4
    PUSH EAX                            ; 004b8593 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8594 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8596
    ADD ESP,0x8                         ; 004b8599
    TEST EAX,EAX                        ; 004b859c
    JZ 0x004b85bb                       ; 004b859e
        ;   XREF to: 004b85bb (CONDITIONAL_JUMP)  ; LAB_004b85bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b85a0
    CMP dword ptr [EAX + 0xaec],0x0     ; 004b85a3
    SETZ AL                             ; 004b85aa
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b85ad
    AND EAX,0xff                        ; 004b85b0
    MOV dword ptr [EDX + 0xaec],EAX     ; 004b85b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b85bb
        ;   Label: LAB_004b85bb
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b85be
    JZ 0x004b8c4f                       ; 004b85c5
        ;   XREF to: 004b8c4f (CONDITIONAL_JUMP)  ; LAB_004b8c4f
    PUSH 0xe                            ; 004b85cb
        ;   Label: LAB_004b85cb
    MOV EAX,[0x00617dd4]                ; 004b85cd | DAT_00617dd4
    PUSH EAX                            ; 004b85d2 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b85d3 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b85d5
    ADD ESP,0x8                         ; 004b85d8
    TEST EAX,EAX                        ; 004b85db
    JZ 0x004b85fa                       ; 004b85dd
        ;   XREF to: 004b85fa (CONDITIONAL_JUMP)  ; LAB_004b85fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b85df
    CMP dword ptr [EAX + 0x2a0],0x0     ; 004b85e2
    SETZ AL                             ; 004b85e9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b85ec
    AND EAX,0xff                        ; 004b85ef
    MOV dword ptr [EDX + 0x2a0],EAX     ; 004b85f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b85fa
        ;   Label: LAB_004b85fa
    CMP dword ptr [EAX + 0x218],0x0     ; 004b85fd
    JZ 0x004b8c69                       ; 004b8604
        ;   XREF to: 004b8c69 (CONDITIONAL_JUMP)  ; LAB_004b8c69
    PUSH 0x57                           ; 004b860a
        ;   Label: LAB_004b860a
    MOV EAX,[0x00617dd4]                ; 004b860c | DAT_00617dd4
    PUSH EAX                            ; 004b8611 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8612 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8614
    ADD ESP,0x8                         ; 004b8617
    TEST EAX,EAX                        ; 004b861a
    JZ 0x004b86a5                       ; 004b861c
        ;   XREF to: 004b86a5 (CONDITIONAL_JUMP)  ; LAB_004b86a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8622
    MOV ESI,dword ptr [EAX + 0x240]     ; 004b8625
    SUB ESI,0x400                       ; 004b862b
    MOV dword ptr [EAX + 0x240],ESI     ; 004b8631
    CMP ESI,0x8000                      ; 004b8637
    JGE 0x004b8649                      ; 004b863d
        ;   XREF to: 004b8649 (CONDITIONAL_JUMP)  ; LAB_004b8649
    MOV dword ptr [EAX + 0x240],0x8000  ; 004b863f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8649
        ;   Label: LAB_004b8649
    FILD dword ptr [EAX + 0x240]        ; 004b864c
    FMUL double ptr [0x005d79db]        ; 004b8652 | DAT_005d79db
    SUB ESP,0x8                         ; 004b8658
    FSTP double ptr [ESP]               ; 004b865b
    PUSH 0x5d79c0                       ; 004b865e | = "Gamma : %f"
    LEA EAX,[ESP + 0x110]               ; 004b8663
    PUSH EAX                            ; 004b866a
    CALL crt_unknown.c_FUN_005b7790     ; 004b866b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004b8670
    LEA EAX,[ESP + 0x104]               ; 004b8673
    PUSH 0x3f800000                     ; 004b867a
    PUSH EAX                            ; 004b867f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8680
    PUSH EAX                            ; 004b8683
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004b8684
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004b8689
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b868c
    MOV EDX,dword ptr [EAX + 0x240]     ; 004b868f
    PUSH EDX                            ; 004b8695
    MOV ECX,dword ptr [0x0061b5a8]      ; 004b8696 | g_CDemonSetPtr
    PUSH ECX                            ; 004b869c
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00534580 ; 004b869d
        ;   XREF to: 00534580 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00534580(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004b86a2
    PUSH 0x58                           ; 004b86a5
        ;   Label: LAB_004b86a5
    MOV EAX,[0x00617dd4]                ; 004b86a7 | DAT_00617dd4
    PUSH EAX                            ; 004b86ac | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b86ad | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b86af
    ADD ESP,0x8                         ; 004b86b2
    TEST EAX,EAX                        ; 004b86b5
    JZ 0x004b8737                       ; 004b86b7
        ;   XREF to: 004b8737 (CONDITIONAL_JUMP)  ; LAB_004b8737
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b86bd
    MOV EBX,dword ptr [EAX + 0x240]     ; 004b86c0
    ADD EBX,0x400                       ; 004b86c6
    MOV dword ptr [EAX + 0x240],EBX     ; 004b86cc
    CMP EBX,0x10000                     ; 004b86d2
    JLE 0x004b86e4                      ; 004b86d8
        ;   XREF to: 004b86e4 (CONDITIONAL_JUMP)  ; LAB_004b86e4
    MOV dword ptr [EAX + 0x240],0x10000 ; 004b86da
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b86e4
        ;   Label: LAB_004b86e4
    FILD dword ptr [EAX + 0x240]        ; 004b86e7
    FMUL double ptr [0x005d79db]        ; 004b86ed | DAT_005d79db
    SUB ESP,0x8                         ; 004b86f3
    FSTP double ptr [ESP]               ; 004b86f6
    PUSH 0x5d79cb                       ; 004b86f9 | = "Gamma : %f"
    LEA EAX,[ESP + 0x10]                ; 004b86fe
    PUSH EAX                            ; 004b8702
    CALL crt_unknown.c_FUN_005b7790     ; 004b8703
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004b8708
    LEA EAX,[ESP + 0x4]                 ; 004b870b
    PUSH 0x3f800000                     ; 004b870f
    PUSH EAX                            ; 004b8714
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b8715
    PUSH EDI                            ; 004b8718
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004b8719
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004b871e
    MOV EDX,dword ptr [EDI + 0x240]     ; 004b8721
    PUSH EDX                            ; 004b8727
    MOV ECX,dword ptr [0x0061b5a8]      ; 004b8728 | g_CDemonSetPtr
    PUSH ECX                            ; 004b872e
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00534580 ; 004b872f
        ;   XREF to: 00534580 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00534580(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004b8734
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8737
        ;   Label: LAB_004b8737
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b873a
    JZ 0x004b8786                       ; 004b8741
        ;   XREF to: 004b8786 (CONDITIONAL_JUMP)  ; LAB_004b8786
    PUSH 0x1d                           ; 004b8743
    MOV EAX,[0x00617dd4]                ; 004b8745 | DAT_00617dd4
    PUSH EAX                            ; 004b874a | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b874b | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b874d
    ADD ESP,0x8                         ; 004b874f
    TEST EAX,EAX                        ; 004b8752
    JZ 0x004b8786                       ; 004b8754
        ;   XREF to: 004b8786 (CONDITIONAL_JUMP)  ; LAB_004b8786
    PUSH 0x23                           ; 004b8756
    MOV EAX,[0x00617dd4]                ; 004b8758 | DAT_00617dd4
    PUSH EAX                            ; 004b875d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b875e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8760
    ADD ESP,0x8                         ; 004b8763
    TEST EAX,EAX                        ; 004b8766
    JZ 0x004b8786                       ; 004b8768
        ;   XREF to: 004b8786 (CONDITIONAL_JUMP)  ; LAB_004b8786
    MOV EAX,[0x0061b5a8]                ; 004b876a | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15aeb4]  ; 004b876f | g_CDemonSetInstance.field1420980_0x15aeb4
    TEST EDX,EDX                        ; 004b8775
    SETZ DL                             ; 004b8777
    AND EDX,0xff                        ; 004b877a
    MOV dword ptr [EAX + 0x15aeb4],EDX  ; 004b8780 | g_CDemonSetInstance.field1420980_0x15aeb4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8786
        ;   Label: LAB_004b8786
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b8789
    JZ 0x004b8d6f                       ; 004b8790
        ;   XREF to: 004b8d6f (CONDITIONAL_JUMP)  ; LAB_004b8d6f
    PUSH 0x38                           ; 004b8796
    MOV EAX,[0x00617dd4]                ; 004b8798 | DAT_00617dd4
    PUSH EAX                            ; 004b879d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b879e | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b87a0
    ADD ESP,0x8                         ; 004b87a2
    TEST EAX,EAX                        ; 004b87a5
    JZ 0x004b8d6f                       ; 004b87a7
        ;   XREF to: 004b8d6f (CONDITIONAL_JUMP)  ; LAB_004b8d6f
    PUSH 0x1e                           ; 004b87ad
    MOV EAX,[0x00617dd4]                ; 004b87af | DAT_00617dd4
    PUSH EAX                            ; 004b87b4 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b87b5 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b87b7
    ADD ESP,0x8                         ; 004b87ba
    TEST EAX,EAX                        ; 004b87bd
    JZ 0x004b8d6f                       ; 004b87bf
        ;   XREF to: 004b8d6f (CONDITIONAL_JUMP)  ; LAB_004b8d6f
    PUSH 0x2a                           ; 004b87c5
    MOV EAX,[0x00617dd4]                ; 004b87c7 | DAT_00617dd4
    MOV EDI,0x3ca3d70a                  ; 004b87cc
    PUSH EAX                            ; 004b87d1 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b87d2 | DAT_01d02f84
    MOV dword ptr [ESP + 0x218],EDI     ; 004b87d4
    CALL dword ptr [EDX]                ; 004b87db
    ADD ESP,0x8                         ; 004b87dd
    TEST EAX,EAX                        ; 004b87e0
    JZ 0x004b87ef                       ; 004b87e2
        ;   XREF to: 004b87ef (CONDITIONAL_JUMP)  ; LAB_004b87ef
    MOV dword ptr [ESP + 0x210],0xbca3d70a ; 004b87e4
    MOV EAX,[0x01fc8a20]                ; 004b87ef | g_CDemonCameraInstance.field4584_0x11e8
        ;   Label: LAB_004b87ef
    MOV dword ptr [ESP + 0x214],EAX     ; 004b87f4
    FILD dword ptr [ESP + 0x214]        ; 004b87fb
    FMUL double ptr [0x005d79e3]        ; 004b8802 | DAT_005d79e3
    FADD float ptr [ESP + 0x210]        ; 004b8808
    FST float ptr [ESP]                 ; 004b880f
    FLDZ                                ; 004b8812
    FCOMPP                              ; 004b8814
    FNSTSW AX                           ; 004b8816
    SAHF                                ; 004b8818
    JBE 0x004b8820                      ; 004b8819
        ;   XREF to: 004b8820 (CONDITIONAL_JUMP)  ; LAB_004b8820
    XOR EDX,EDX                         ; 004b881b
    MOV dword ptr [ESP],EDX             ; 004b881d
    FLD float ptr [ESP]                 ; 004b8820
        ;   Label: LAB_004b8820
    FLD1                                ; 004b8823
    FCOMPP                              ; 004b8825
    FNSTSW AX                           ; 004b8827
    SAHF                                ; 004b8829
    JC 0x004b8d63                       ; 004b882a
        ;   XREF to: 004b8d63 (CONDITIONAL_JUMP)  ; LAB_004b8d63
    XOR EBX,EBX                         ; 004b8830
        ;   Label: LAB_004b8830
    MOV EAX,[0x0061b5a8]                ; 004b8832 | g_CDemonSetPtr
        ;   Label: LAB_004b8832
    CMP EBX,dword ptr [EAX]             ; 004b8837 | g_CDemonSetInstance
    JGE 0x004b8d6f                      ; 004b8839
        ;   XREF to: 004b8d6f (CONDITIONAL_JUMP)  ; LAB_004b8d6f
    PUSH dword ptr [ESP]                ; 004b883f
    PUSH EBX                            ; 004b8842
    PUSH EAX                            ; 004b8843 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00534640      ; 004b8844
        ;   XREF to: 00534640 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00534640(CDemonSet * this_ptr, int index, float value)
    INC EBX                             ; 004b8849
    ADD ESP,0xc                         ; 004b884a
    JMP 0x004b8832                      ; 004b884d
        ;   XREF to: 004b8832 (UNCONDITIONAL_JUMP)  ; LAB_004b8832
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b884f
        ;   Label: LAB_004b884f
    MOV EBX,dword ptr [ECX + 0x5c]      ; 004b8852
    MOV EAX,[0x00617dd4]                ; 004b8855 | DAT_00617dd4
    PUSH EBX                            ; 004b885a
    MOV EDX,dword ptr [EAX]             ; 004b885b | DAT_01d02f84
    PUSH EAX                            ; 004b885d | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b885e
    ADD ESP,0x8                         ; 004b8861
    TEST EAX,EAX                        ; 004b8864
    JZ 0x004b887c                       ; 004b8866
        ;   XREF to: 004b887c (CONDITIONAL_JUMP)  ; LAB_004b887c
    PUSH 0x5d790b                       ; 004b8868 | = "GoToMap"
    MOV ESI,dword ptr [0x006141f0]      ; 004b886d | DAT_006141f0
    PUSH ESI                            ; 004b8873
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004b8874
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b8879
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b887c
        ;   Label: LAB_004b887c
    MOV EDI,dword ptr [ECX + 0x60]      ; 004b887f
    MOV EAX,[0x00617dd4]                ; 004b8882 | DAT_00617dd4
    PUSH EDI                            ; 004b8887
    MOV EDX,dword ptr [EAX]             ; 004b8888 | DAT_01d02f84
    PUSH EAX                            ; 004b888a | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b888b
    ADD ESP,0x8                         ; 004b888e
    TEST EAX,EAX                        ; 004b8891
    JZ 0x004b88a8                       ; 004b8893
        ;   XREF to: 004b88a8 (CONDITIONAL_JUMP)  ; LAB_004b88a8
    PUSH 0x5d7913                       ; 004b8895 | = "GoToCompass"
    MOV EAX,[0x006141f0]                ; 004b889a | DAT_006141f0
    PUSH EAX                            ; 004b889f
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004b88a0
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b88a5
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b88a8
        ;   Label: LAB_004b88a8
    MOV EBX,dword ptr [ECX + 0x64]      ; 004b88ab
    MOV EAX,[0x00617dd4]                ; 004b88ae | DAT_00617dd4
    PUSH EBX                            ; 004b88b3
    MOV EDX,dword ptr [EAX]             ; 004b88b4 | DAT_01d02f84
    PUSH EAX                            ; 004b88b6 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b88b7
    ADD ESP,0x8                         ; 004b88ba
    TEST EAX,EAX                        ; 004b88bd
    JZ 0x004b88d5                       ; 004b88bf
        ;   XREF to: 004b88d5 (CONDITIONAL_JUMP)  ; LAB_004b88d5
    PUSH 0x5d791f                       ; 004b88c1 | = "UseSPS"
    MOV ESI,dword ptr [0x006141f0]      ; 004b88c6 | DAT_006141f0
    PUSH ESI                            ; 004b88cc
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004b88cd
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b88d2
    MOV EAX,[0x00616044]                ; 004b88d5 | g_CFieldNotesPtr
        ;   Label: LAB_004b88d5
    CMP dword ptr [EAX + 0x40],0x0      ; 004b88da | g_CFieldNotesInstance.field64_0x40
    JZ 0x004b8957                       ; 004b88de
        ;   XREF to: 004b8957 (CONDITIONAL_JUMP)  ; LAB_004b8957
    XOR EDX,EDX                         ; 004b88e4
    XOR ECX,ECX                         ; 004b88e6
    MOV EAX,[0x0061b5a8]                ; 004b88e8 | g_CDemonSetPtr
        ;   Label: LAB_004b88e8
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 004b88ed | g_CDemonSetInstance.field1380332_0x150fec
    JGE 0x004b8957                      ; 004b88f3
        ;   XREF to: 004b8957 (CONDITIONAL_JUMP)  ; LAB_004b8957
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0x150ff0] ; 004b88f5
    MOV EAX,[0x01cedef4]                ; 004b88fc | DAT_01cedef4
    SHL EAX,0x2                         ; 004b8901
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004b8904
    MOV EDI,dword ptr [EAX + 0x1cedee4] ; 004b890a
    CMP ESI,EDI                         ; 004b8910
    JZ 0x004b891a                       ; 004b8912
        ;   XREF to: 004b891a (CONDITIONAL_JUMP)  ; LAB_004b891a
    INC EDX                             ; 004b8914
        ;   Label: LAB_004b8914
    ADD ECX,0x4                         ; 004b8915
    JMP 0x004b88e8                      ; 004b8918
        ;   XREF to: 004b88e8 (UNCONDITIONAL_JUMP)  ; LAB_004b88e8
    LEA EAX,[EBX + 0x20]                ; 004b891a
        ;   Label: LAB_004b891a
    LEA EBX,[EDI + 0x20]                ; 004b891d
    FLD float ptr [EAX]                 ; 004b8920
    FSUB float ptr [EBX]                ; 004b8922
    FMUL ST0                            ; 004b8924
    FLD float ptr [EAX + 0x4]           ; 004b8926
    FSUB float ptr [EBX + 0x4]          ; 004b8929
    FMUL ST0                            ; 004b892c
    FLD float ptr [EAX + 0x8]           ; 004b892e
    FXCH                                ; 004b8931
    FADDP ST2,ST0                       ; 004b8933
    FSUB float ptr [EBX + 0x8]          ; 004b8935
    FMUL ST0                            ; 004b8938
    FADDP                               ; 004b893a
    FSQRT                               ; 004b893c
    FCOMP double ptr [0x005d79eb]       ; 004b893e | DAT_005d79eb
    FNSTSW AX                           ; 004b8944
    SAHF                                ; 004b8946
    JNC 0x004b8914                      ; 004b8947
        ;   XREF to: 004b8914 (CONDITIONAL_JUMP)  ; LAB_004b8914
    MOV EAX,[0x00616044]                ; 004b8949 | g_CFieldNotesPtr
    MOV dword ptr [EAX + 0x40],0x0      ; 004b894e | g_CFieldNotesInstance.field64_0x40
    JMP 0x004b8914                      ; 004b8955
        ;   XREF to: 004b8914 (UNCONDITIONAL_JUMP)  ; LAB_004b8914
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8957
        ;   Label: LAB_004b8957
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b895a
    JZ 0x004b89c8                       ; 004b8961
        ;   XREF to: 004b89c8 (CONDITIONAL_JUMP)  ; LAB_004b89c8
    PUSH 0x1d                           ; 004b8963
    MOV EAX,[0x00617dd4]                ; 004b8965 | DAT_00617dd4
    PUSH EAX                            ; 004b896a | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b896b | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b896d
    ADD ESP,0x8                         ; 004b896f
    TEST EAX,EAX                        ; 004b8972
    JZ 0x004b89c8                       ; 004b8974
        ;   XREF to: 004b89c8 (CONDITIONAL_JUMP)  ; LAB_004b89c8
    PUSH 0x12                           ; 004b8976
    MOV EAX,[0x00617dd4]                ; 004b8978 | DAT_00617dd4
    PUSH EAX                            ; 004b897d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b897e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8980
    ADD ESP,0x8                         ; 004b8983
    TEST EAX,EAX                        ; 004b8986
    JZ 0x004b89c8                       ; 004b8988
        ;   XREF to: 004b89c8 (CONDITIONAL_JUMP)  ; LAB_004b89c8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b898a
    MOV EAX,0x1                         ; 004b898d
    MOV ECX,dword ptr [EDX + 0x294]     ; 004b8992
    SUB EAX,ECX                         ; 004b8998
    MOV dword ptr [EDX + 0x294],EAX     ; 004b899a
    JZ 0x004b89c8                       ; 004b89a0
        ;   XREF to: 004b89c8 (CONDITIONAL_JUMP)  ; LAB_004b89c8
    MOV EAX,[0x0061b460]                ; 004b89a2 | g_CScriptPtr
    PUSH 0x1                            ; 004b89a7
    MOV ESI,dword ptr [EAX + 0xc]       ; 004b89a9 | g_CScriptInstance.field12_0xc
    PUSH ESI                            ; 004b89ac
    MOV EDI,dword ptr [0x0061b5a8]      ; 004b89ad | g_CDemonSetPtr
    PUSH EDI                            ; 004b89b3 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00538d10   ; 004b89b4
        ;   XREF to: 00538d10 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00538d10()
    MOV EAX,[0x0061b460]                ; 004b89b9 | g_CScriptPtr
    ADD ESP,0xc                         ; 004b89be
    MOV dword ptr [EAX + 0x10],0x0      ; 004b89c1 | g_CScriptInstance.field16_0x10
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b89c8
        ;   Label: LAB_004b89c8
    CMP dword ptr [EAX + 0x294],0x0     ; 004b89cb
    JNZ 0x004b830c                      ; 004b89d2
        ;   XREF to: 004b830c (CONDITIONAL_JUMP)  ; LAB_004b830c
    PUSH 0x2e                           ; 004b89d8
    MOV EAX,[0x00617dd4]                ; 004b89da | DAT_00617dd4
    PUSH EAX                            ; 004b89df | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b89e0 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b89e2
    ADD ESP,0x8                         ; 004b89e5
    TEST EAX,EAX                        ; 004b89e8
    JZ 0x004b830c                       ; 004b89ea
        ;   XREF to: 004b830c (CONDITIONAL_JUMP)  ; LAB_004b830c
    PUSH 0x2a                           ; 004b89f0
    MOV EAX,[0x00617dd4]                ; 004b89f2 | DAT_00617dd4
    PUSH EAX                            ; 004b89f7 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b89f8 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b89fa
    ADD ESP,0x8                         ; 004b89fc
    TEST EAX,EAX                        ; 004b89ff
    JZ 0x004b8a48                       ; 004b8a01
        ;   XREF to: 004b8a48 (CONDITIONAL_JUMP)  ; LAB_004b8a48
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8a03
    MOV ESI,dword ptr [EAX + 0x290]     ; 004b8a06
    DEC ESI                             ; 004b8a0c
    MOV dword ptr [EAX + 0x290],ESI     ; 004b8a0d
    TEST ESI,ESI                        ; 004b8a13
    JL 0x004b8a35                       ; 004b8a15
        ;   XREF to: 004b8a35 (CONDITIONAL_JUMP)  ; LAB_004b8a35
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8a17
        ;   Label: LAB_004b8a17
    MOV EDX,dword ptr [EAX + 0x290]     ; 004b8a1a
    PUSH EDX                            ; 004b8a20
    MOV ECX,dword ptr [0x0061b5a8]      ; 004b8a21 | g_CDemonSetPtr
    PUSH ECX                            ; 004b8a27 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 ; 004b8a28
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004b8a2d
    JMP 0x004b830c                      ; 004b8a30
        ;   XREF to: 004b830c (UNCONDITIONAL_JUMP)  ; LAB_004b830c
    MOV EAX,[0x0061b5a8]                ; 004b8a35 | g_CDemonSetPtr
        ;   Label: LAB_004b8a35
    MOV EAX,dword ptr [EAX]             ; 004b8a3a | g_CDemonSetInstance
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8a3c
    DEC EAX                             ; 004b8a3f
    MOV dword ptr [EDX + 0x290],EAX     ; 004b8a40
    JMP 0x004b8a17                      ; 004b8a46
        ;   XREF to: 004b8a17 (UNCONDITIONAL_JUMP)  ; LAB_004b8a17
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8a48
        ;   Label: LAB_004b8a48
    MOV ECX,dword ptr [EDX + 0x290]     ; 004b8a4b
    INC ECX                             ; 004b8a51
    MOV EAX,[0x0061b5a8]                ; 004b8a52 | g_CDemonSetPtr
    MOV dword ptr [EDX + 0x290],ECX     ; 004b8a57
    CMP ECX,dword ptr [EAX]             ; 004b8a5d | g_CDemonSetInstance
    JL 0x004b8a17                       ; 004b8a5f
        ;   XREF to: 004b8a17 (CONDITIONAL_JUMP)  ; LAB_004b8a17
    MOV dword ptr [EDX + 0x290],0x0     ; 004b8a61
    JMP 0x004b8a17                      ; 004b8a6b
        ;   XREF to: 004b8a17 (UNCONDITIONAL_JUMP)  ; LAB_004b8a17
    MOV EAX,[0x0061c068]                ; 004b8a6d | DAT_0061c068
        ;   Label: LAB_004b8a6d
    PUSH EAX                            ; 004b8a72
    CALL core_sound.cpp_FUN_0055a1d0    ; 004b8a73
        ;   XREF to: 0055a1d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055a1d0(CSound * this_ptr)
    JMP 0x004b836f                      ; 004b8a78
        ;   XREF to: 004b836f (UNCONDITIONAL_JUMP)  ; LAB_004b836f
    PUSH 0x5d7926                       ; 004b8a7d | = "SPOOKHOUSE"
        ;   Label: LAB_004b8a7d
    CALL crt_env.c_getenv_FUN_005bac90  ; 004b8a82
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005bac90(char * name)
    ADD ESP,0x4                         ; 004b8a87
    TEST EAX,EAX                        ; 004b8a8a
    JNZ 0x004b8382                      ; 004b8a8c
        ;   XREF to: 004b8382 (CONDITIONAL_JUMP)  ; LAB_004b8382
    JMP 0x004b83bf                      ; 004b8a92
        ;   XREF to: 004b83bf (UNCONDITIONAL_JUMP)  ; LAB_004b83bf
    PUSH 0x3f                           ; 004b8a97
        ;   Label: LAB_004b8a97
    MOV EAX,[0x00617dd4]                ; 004b8a99 | DAT_00617dd4
    PUSH EAX                            ; 004b8a9e | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8a9f | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8aa1
    ADD ESP,0x8                         ; 004b8aa4
    TEST EAX,EAX                        ; 004b8aa7
    JNZ 0x004b8431                      ; 004b8aa9
        ;   XREF to: 004b8431 (CONDITIONAL_JUMP)  ; LAB_004b8431
    JMP 0x004b840a                      ; 004b8aaf
        ;   XREF to: 004b840a (UNCONDITIONAL_JUMP)  ; LAB_004b840a
    MOV ECX,dword ptr [0x0061c068]      ; 004b8ab4 | DAT_0061c068
        ;   Label: LAB_004b8ab4
    PUSH ECX                            ; 004b8aba
    CALL core_sound.cpp_CSound_shutdown_FUN_0055a360 ; 004b8abb
        ;   XREF to: 0055a360 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0055a360(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b8ac0
    PUSH 0x1                            ; 004b8ac3
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00550bd0 ; 004b8ac5
        ;   XREF to: 00550bd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00550bd0(int muted)
    JMP 0x004b8454                      ; 004b8aca
        ;   XREF to: 004b8454 (UNCONDITIONAL_JUMP)  ; LAB_004b8454
    PUSH 0xf0                           ; 004b8acf
        ;   Label: LAB_004b8acf
    PUSH 0x1                            ; 004b8ad4
    PUSH 0x1                            ; 004b8ad6
    MOV ESI,dword ptr [0x0061b5a8]      ; 004b8ad8 | g_CDemonSetPtr
    PUSH ESI                            ; 004b8ade | g_CDemonSetInstance
    JMP 0x004b84bd                      ; 004b8adf
        ;   XREF to: 004b84bd (UNCONDITIONAL_JUMP)  ; LAB_004b84bd
    PUSH 0x1d                           ; 004b8ae4
        ;   Label: LAB_004b8ae4
    MOV EAX,[0x00617dd4]                ; 004b8ae6 | DAT_00617dd4
    PUSH EAX                            ; 004b8aeb | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8aec | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b8aee
    ADD ESP,0x8                         ; 004b8af0
    TEST EAX,EAX                        ; 004b8af3
    JZ 0x004b84de                       ; 004b8af5
        ;   XREF to: 004b84de (CONDITIONAL_JUMP)  ; LAB_004b84de
    PUSH 0x2f                           ; 004b8afb
    MOV EAX,[0x00617dd4]                ; 004b8afd | DAT_00617dd4
    PUSH EAX                            ; 004b8b02 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8b03 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8b05
    ADD ESP,0x8                         ; 004b8b08
    TEST EAX,EAX                        ; 004b8b0b
    JZ 0x004b84de                       ; 004b8b0d
        ;   XREF to: 004b84de (CONDITIONAL_JUMP)  ; LAB_004b84de
    CMP dword ptr [0x006141bc],0x1e0    ; 004b8b13 | DAT_006141bc
    JL 0x004b84de                       ; 004b8b1d
        ;   XREF to: 004b84de (CONDITIONAL_JUMP)  ; LAB_004b84de
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8b23
    CMP dword ptr [EAX + 0x204],0x0     ; 004b8b26
    SETZ AL                             ; 004b8b2d
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8b30
    AND EAX,0xff                        ; 004b8b33
    MOV dword ptr [EDX + 0x204],EAX     ; 004b8b38
    JMP 0x004b84de                      ; 004b8b3e
        ;   XREF to: 004b84de (UNCONDITIONAL_JUMP)  ; LAB_004b84de
    PUSH EDI                            ; 004b8b43
        ;   Label: LAB_004b8b43
    PUSH EAX                            ; 004b8b44
    CALL core_game.cpp_FUN_004bb9b0     ; 004b8b45
        ;   XREF to: 004bb9b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bb9b0(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004b8b4a
    JMP 0x004b8516                      ; 004b8b4d
        ;   XREF to: 004b8516 (UNCONDITIONAL_JUMP)  ; LAB_004b8516
    PUSH EDX                            ; 004b8b52
        ;   Label: LAB_004b8b52
    PUSH EAX                            ; 004b8b53
    CALL core_game.cpp_FUN_004bb9b0     ; 004b8b54
        ;   XREF to: 004bb9b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bb9b0(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004b8b59
    JMP 0x004b853a                      ; 004b8b5c
        ;   XREF to: 004b853a (UNCONDITIONAL_JUMP)  ; LAB_004b853a
    PUSH 0x5d7931                       ; 004b8b61 | = "quicksavedgame.noc"
        ;   Label: LAB_004b8b61
    PUSH EAX                            ; 004b8b66
    MOV EDI,EAX                         ; 004b8b67
    CALL core_game.cpp_FUN_004bb9b0     ; 004b8b69
        ;   XREF to: 004bb9b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bb9b0(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004b8b6e
    PUSH 0x40000000                     ; 004b8b71
    PUSH 0x5d7944                       ; 004b8b76 | = "Quick Save"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b8b7b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b8b80
    PUSH EAX                            ; 004b8b83
    MOV EAX,EDI                         ; 004b8b84
    PUSH EAX                            ; 004b8b86
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004b8b87
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004b8b8c
    JMP 0x004b857c                      ; 004b8b8f
        ;   XREF to: 004b857c (UNCONDITIONAL_JUMP)  ; LAB_004b857c
    PUSH 0x43                           ; 004b8b94
        ;   Label: LAB_004b8b94
    MOV EAX,[0x00617dd4]                ; 004b8b96 | DAT_00617dd4
    PUSH EAX                            ; 004b8b9b | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8b9c | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b8b9e
    ADD ESP,0x8                         ; 004b8ba0
    TEST EAX,EAX                        ; 004b8ba3
    JZ 0x004b858c                       ; 004b8ba5
        ;   XREF to: 004b858c (CONDITIONAL_JUMP)  ; LAB_004b858c
    PUSH 0x5d794f                       ; 004b8bab | DAT_005d794f
    PUSH 0x5d7952                       ; 004b8bb0 | = "quicksavedgame.noc"
    PUSH 0x5d7965                       ; 004b8bb5 | DAT_005d7965
    CALL engine_dosio.cpp_FUN_00460c70  ; 004b8bba
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004b8bbf
    TEST EAX,EAX                        ; 004b8bc2
    JZ 0x004b8c2b                       ; 004b8bc4
        ;   XREF to: 004b8c2b (CONDITIONAL_JUMP)  ; LAB_004b8c2b
    PUSH EAX                            ; 004b8bc6
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004b8bc7
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004b8bcc
    PUSH 0x5d796a                       ; 004b8bcf | = "Restore quick saved game?"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b8bd4
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b8bd9
    PUSH EAX                            ; 004b8bdc
    MOV EBX,dword ptr [0x006138e0]      ; 004b8bdd | g_CEditorToolsPtr
    PUSH EBX                            ; 004b8be3
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760 ; 004b8be4
        ;   XREF to: 0047c760 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004b8be9
    TEST EAX,EAX                        ; 004b8bec
    JZ 0x004b858c                       ; 004b8bee
        ;   XREF to: 004b858c (CONDITIONAL_JUMP)  ; LAB_004b858c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8bf4
    MOV ESI,0x5d7984                    ; 004b8bf7 | = "quicksavedgame.noc"
    LEA EDI,[EAX + 0x9ec]               ; 004b8bfc
    MOV dword ptr [EAX + 0x9e8],0x1     ; 004b8c02
    PUSH EDI                            ; 004b8c0c
    MOV AL,byte ptr [ESI]               ; 004b8c0d | = "quicksavedgame.noc" | s_quicksavedgame_noc_005d7984+2
        ;   Label: LAB_004b8c0d
    MOV byte ptr [EDI],AL               ; 004b8c0f
    CMP AL,0x0                          ; 004b8c11
    JZ 0x004b8c25                       ; 004b8c13
        ;   XREF to: 004b8c25 (CONDITIONAL_JUMP)  ; LAB_004b8c25
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8c15 | s_quicksavedgame_noc_005d7984+1 | s_quicksavedgame_noc_005d7984+3
    ADD ESI,0x2                         ; 004b8c18
    MOV byte ptr [EDI + 0x1],AL         ; 004b8c1b
    ADD EDI,0x2                         ; 004b8c1e
    CMP AL,0x0                          ; 004b8c21
    JNZ 0x004b8c0d                      ; 004b8c23
        ;   XREF to: 004b8c0d (CONDITIONAL_JUMP)  ; LAB_004b8c0d
    POP EDI                             ; 004b8c25
        ;   Label: LAB_004b8c25
    JMP 0x004b858c                      ; 004b8c26
        ;   XREF to: 004b858c (UNCONDITIONAL_JUMP)  ; LAB_004b858c
    PUSH 0x40000000                     ; 004b8c2b
        ;   Label: LAB_004b8c2b
    PUSH 0x5d7997                       ; 004b8c30 | = "No quicked saved game to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b8c35
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b8c3a
    PUSH EAX                            ; 004b8c3d
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b8c3e
    PUSH ECX                            ; 004b8c41
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004b8c42
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004b8c47
    JMP 0x004b858c                      ; 004b8c4a
        ;   XREF to: 004b858c (UNCONDITIONAL_JUMP)  ; LAB_004b858c
    PUSH 0x5d79b5                       ; 004b8c4f | = "SPOOKHOUSE"
        ;   Label: LAB_004b8c4f
    CALL crt_env.c_getenv_FUN_005bac90  ; 004b8c54
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005bac90(char * name)
    ADD ESP,0x4                         ; 004b8c59
    TEST EAX,EAX                        ; 004b8c5c
    JNZ 0x004b85cb                      ; 004b8c5e
        ;   XREF to: 004b85cb (CONDITIONAL_JUMP)  ; LAB_004b85cb
    JMP 0x004b85fa                      ; 004b8c64
        ;   XREF to: 004b85fa (UNCONDITIONAL_JUMP)  ; LAB_004b85fa
    MOV EAX,[0x0061b460]                ; 004b8c69 | g_CScriptPtr
        ;   Label: LAB_004b8c69
    CMP dword ptr [EAX + 0x1c],0x2      ; 004b8c6e | g_CScriptInstance.field28_0x1c
    JZ 0x004b8cd0                       ; 004b8c72
        ;   XREF to: 004b8cd0 (CONDITIONAL_JUMP)  ; LAB_004b8cd0
    PUSH 0x3f                           ; 004b8c74
    MOV EAX,[0x00617dd4]                ; 004b8c76 | DAT_00617dd4
    PUSH EAX                            ; 004b8c7b | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8c7c | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8c7e
    ADD ESP,0x8                         ; 004b8c81
    TEST EAX,EAX                        ; 004b8c84
    JZ 0x004b8cd0                       ; 004b8c86
        ;   XREF to: 004b8cd0 (CONDITIONAL_JUMP)  ; LAB_004b8cd0
    PUSH 0xf0                           ; 004b8c88
    PUSH 0x0                            ; 004b8c8d
    PUSH 0x0                            ; 004b8c8f
    MOV ESI,dword ptr [0x0061b5a8]      ; 004b8c91 | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8c97
    PUSH ESI                            ; 004b8c9a | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x298],0x1     ; 004b8c9b
    CALL core_set.cpp_FUN_0052e910      ; 004b8ca5
        ;   XREF to: 0052e910 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0052e910(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
    ADD ESP,0x10                        ; 004b8caa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8cad
    MOV dword ptr [EAX + 0x1f8],0x1     ; 004b8cb0
    MOV EAX,[0x0061b460]                ; 004b8cba | g_CScriptPtr
    CMP dword ptr [EAX + 0x1c],0x1      ; 004b8cbf | g_CScriptInstance.field28_0x1c
    JNZ 0x004b8d57                      ; 004b8cc3
        ;   XREF to: 004b8d57 (CONDITIONAL_JUMP)  ; LAB_004b8d57
    MOV dword ptr [EAX + 0x1c],0x0      ; 004b8cc9 | g_CScriptInstance.field28_0x1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8cd0
        ;   Label: LAB_004b8cd0
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004b8cd3
    JZ 0x004b860a                       ; 004b8cda
        ;   XREF to: 004b860a (CONDITIONAL_JUMP)  ; LAB_004b860a
    MOV EAX,[0x0061b460]                ; 004b8ce0 | g_CScriptPtr
    CMP dword ptr [EAX + 0x1c],0x2      ; 004b8ce5 | g_CScriptInstance.field28_0x1c
    JNZ 0x004b8d0b                      ; 004b8ce9
        ;   XREF to: 004b8d0b (CONDITIONAL_JUMP)  ; LAB_004b8d0b
    PUSH 0x44                           ; 004b8ceb
    MOV EAX,[0x00617dd4]                ; 004b8ced | DAT_00617dd4
    PUSH EAX                            ; 004b8cf2 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8cf3 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8cf5
    ADD ESP,0x8                         ; 004b8cf8
    TEST EAX,EAX                        ; 004b8cfb
    JZ 0x004b8d0b                       ; 004b8cfd
        ;   XREF to: 004b8d0b (CONDITIONAL_JUMP)  ; LAB_004b8d0b
    MOV EAX,[0x0061b460]                ; 004b8cff | g_CScriptPtr
    MOV dword ptr [EAX + 0x1c],0x1      ; 004b8d04 | g_CScriptInstance.field28_0x1c
    PUSH 0x3f                           ; 004b8d0b
        ;   Label: LAB_004b8d0b
    MOV EAX,[0x00617dd4]                ; 004b8d0d | DAT_00617dd4
    PUSH EAX                            ; 004b8d12 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8d13 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8d15
    ADD ESP,0x8                         ; 004b8d18
    TEST EAX,EAX                        ; 004b8d1b
    JZ 0x004b8d2b                       ; 004b8d1d
        ;   XREF to: 004b8d2b (CONDITIONAL_JUMP)  ; LAB_004b8d2b
    MOV EAX,[0x0061b460]                ; 004b8d1f | g_CScriptPtr
    MOV dword ptr [EAX + 0x1c],0x0      ; 004b8d24 | g_CScriptInstance.field28_0x1c
    PUSH 0x43                           ; 004b8d2b
        ;   Label: LAB_004b8d2b
    MOV EAX,[0x00617dd4]                ; 004b8d2d | DAT_00617dd4
    PUSH EAX                            ; 004b8d32 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b8d33 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b8d35
    ADD ESP,0x8                         ; 004b8d38
    TEST EAX,EAX                        ; 004b8d3b
    JZ 0x004b860a                       ; 004b8d3d
        ;   XREF to: 004b860a (CONDITIONAL_JUMP)  ; LAB_004b860a
    MOV EBX,dword ptr [0x0061b460]      ; 004b8d43 | g_CScriptPtr
    PUSH EBX                            ; 004b8d49 | g_CScriptInstance
    CALL core_script.cpp_FUN_00529b00   ; 004b8d4a
        ;   XREF to: 00529b00 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00529b00()
    ADD ESP,0x4                         ; 004b8d4f
    JMP 0x004b860a                      ; 004b8d52
        ;   XREF to: 004b860a (UNCONDITIONAL_JUMP)  ; LAB_004b860a
    MOV dword ptr [EAX + 0x1c],0x1      ; 004b8d57 | g_CScriptInstance.field28_0x1c
        ;   Label: LAB_004b8d57
    JMP 0x004b8cd0                      ; 004b8d5e
        ;   XREF to: 004b8cd0 (UNCONDITIONAL_JUMP)  ; LAB_004b8cd0
    MOV dword ptr [ESP],0x3f800000      ; 004b8d63
        ;   Label: LAB_004b8d63
    JMP 0x004b8830                      ; 004b8d6a
        ;   XREF to: 004b8830 (UNCONDITIONAL_JUMP)  ; LAB_004b8830
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8d6f
        ;   Label: LAB_004b8d6f
    MOV EDI,dword ptr [EAX + 0x22c]     ; 004b8d72
    PUSH EDI                            ; 004b8d78
    MOV EAX,[0x0061ea5c]                ; 004b8d79 | g_CGameHookPtr
    PUSH EAX                            ; 004b8d7e
    CALL unkaddr_0059c270.cpp_FUN_0059c3d0 ; 004b8d7f
        ;   XREF to: 0059c3d0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059c270.cpp_FUN_0059c3d0()
    ADD ESP,0x8                         ; 004b8d84
    MOV ESP,EBP                         ; 004b8d87
        ;   Label: LAB_004b8d87
    POP EBP                             ; 004b8d89
    POP EDI                             ; 004b8d8a
    POP ESI                             ; 004b8d8b
    POP EBX                             ; 004b8d8c
    RET                                 ; 004b8d8d

