; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_saveState_FUN_0052a400(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_game.cpp_FUN_004bb9b0 at 004bbb48
;
; Referenced Globals:
;   TerminatedCString s_CScript_version_005e514d
;   undefined4 DAT_005e5161
;   TerminatedCString s_gGame_letterboxMode_005e5165
;   undefined4 DAT_005e517e
;   TerminatedCString s_gGame_allowDamageFlag_005e5182
;   undefined4 DAT_005e519d
;   TerminatedCString s_gGame_allowEnemyAttackFl_005e51a1
;   undefined4 DAT_005e51c1
;   TerminatedCString s_letterBoxBlackT_005e51c5
;   undefined4 DAT_005e51d9
;   TerminatedCString s_nextCmd_005e51dd
;   undefined4 DAT_005e51e9
;   TerminatedCString s_currentMessage_005e51ed
;   TerminatedCString s_s_005e5200
;   TerminatedCString s_cmdTimer_005e5206
;   ... and 17 more
;
; Called Functions:
;   core_script.cpp_CScript_computeChecksum_FUN_0052a630
;   core_script.cpp_writeActorReference_FUN_0052a090
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a400
        ;   Label: core_script.cpp_CScript_saveState_FUN_0052a400
    PUSH ESI                            ; 0052a401
    PUSH EDI                            ; 0052a402
    PUSH EBP                            ; 0052a403
    MOV EBP,dword ptr [ESP + 0x14]      ; 0052a404
    MOV EDI,dword ptr [ESP + 0x18]      ; 0052a408
    PUSH 0x5e514d                       ; 0052a40c | = "// CScript version\n"
    PUSH EDI                            ; 0052a411
    CALL crt_unknown.c_FUN_005b8010     ; 0052a412
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a417
    PUSH 0x6                            ; 0052a41a
    PUSH 0x5e5161                       ; 0052a41c | DAT_005e5161
    PUSH EDI                            ; 0052a421
    CALL crt_unknown.c_FUN_005b8010     ; 0052a422
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a427
    PUSH 0x5e5165                       ; 0052a42a | = "// gGame->letterboxMode\n"
    PUSH EDI                            ; 0052a42f
    CALL crt_unknown.c_FUN_005b8010     ; 0052a430
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EAX,[0x00616494]                ; 0052a435 | g_CGamePtr
    ADD ESP,0x8                         ; 0052a43a
    MOV EDX,dword ptr [EAX + 0x244]     ; 0052a43d | g_CGameInstance.letterbox_mode
    PUSH EDX                            ; 0052a443
    PUSH 0x5e517e                       ; 0052a444 | DAT_005e517e
    PUSH EDI                            ; 0052a449
    CALL crt_unknown.c_FUN_005b8010     ; 0052a44a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a44f
    PUSH 0x5e5182                       ; 0052a452 | = "// gGame->allowDamageFlag\n"
    PUSH EDI                            ; 0052a457
    CALL crt_unknown.c_FUN_005b8010     ; 0052a458
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EAX,[0x00616494]                ; 0052a45d | g_CGamePtr
    ADD ESP,0x8                         ; 0052a462
    MOV ECX,dword ptr [EAX + 0x248]     ; 0052a465 | g_CGameInstance.allow_damage_flag
    PUSH ECX                            ; 0052a46b
    PUSH 0x5e519d                       ; 0052a46c | DAT_005e519d
    PUSH EDI                            ; 0052a471
    CALL crt_unknown.c_FUN_005b8010     ; 0052a472
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a477
    PUSH 0x5e51a1                       ; 0052a47a | = "// gGame->allowEnemyAttackFlag\n"
    PUSH EDI                            ; 0052a47f
    CALL crt_unknown.c_FUN_005b8010     ; 0052a480
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EAX,[0x00616494]                ; 0052a485 | g_CGamePtr
    ADD ESP,0x8                         ; 0052a48a
    MOV EBX,dword ptr [EAX + 0x24c]     ; 0052a48d | g_CGameInstance.allow_enemy_attack_flag
    PUSH EBX                            ; 0052a493
    PUSH 0x5e51c1                       ; 0052a494 | DAT_005e51c1
    PUSH EDI                            ; 0052a499
    CALL crt_unknown.c_FUN_005b8010     ; 0052a49a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a49f
    PUSH 0x5e51c5                       ; 0052a4a2 | = "// letterBoxBlackT\n"
    PUSH EDI                            ; 0052a4a7
    CALL crt_unknown.c_FUN_005b8010     ; 0052a4a8
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a4ad
    SUB ESP,0x8                         ; 0052a4b0
    FLD float ptr [0x01e65900]          ; 0052a4b3 | DAT_01e65900
    FSTP double ptr [ESP]               ; 0052a4b9
    PUSH 0x5e51d9                       ; 0052a4bc | DAT_005e51d9
    PUSH EDI                            ; 0052a4c1
    CALL crt_unknown.c_FUN_005b8010     ; 0052a4c2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0052a4c7
    PUSH 0x5e51dd                       ; 0052a4ca | = "// nextCmd\n"
    PUSH EDI                            ; 0052a4cf
    CALL crt_unknown.c_FUN_005b8010     ; 0052a4d0
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a4d5
    MOV ESI,dword ptr [EBP + 0x44]      ; 0052a4d8
    PUSH ESI                            ; 0052a4db
    PUSH 0x5e51e9                       ; 0052a4dc | DAT_005e51e9
    PUSH EDI                            ; 0052a4e1
    CALL crt_unknown.c_FUN_005b8010     ; 0052a4e2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a4e7
    PUSH 0x5e51ed                       ; 0052a4ea | = "// currentMessage\n"
    PUSH EDI                            ; 0052a4ef
    CALL crt_unknown.c_FUN_005b8010     ; 0052a4f0
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a4f5
    LEA EAX,[EBP + 0x50]                ; 0052a4f8
    PUSH EAX                            ; 0052a4fb
    PUSH 0x5e5200                       ; 0052a4fc | = "\"%s\"\n"
    PUSH EDI                            ; 0052a501
    CALL crt_unknown.c_FUN_005b8010     ; 0052a502
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a507
    PUSH 0x5e5206                       ; 0052a50a | = "// cmdTimer\n"
    PUSH EDI                            ; 0052a50f
    CALL crt_unknown.c_FUN_005b8010     ; 0052a510
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a515
    SUB ESP,0x8                         ; 0052a518
    FLD float ptr [EBP + 0x48]          ; 0052a51b
    FSTP double ptr [ESP]               ; 0052a51e
    PUSH 0x5e5213                       ; 0052a521 | DAT_005e5213
    PUSH EDI                            ; 0052a526
    CALL crt_unknown.c_FUN_005b8010     ; 0052a527
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0052a52c
    PUSH 0x5e5217                       ; 0052a52f | = "// dialogWavTime\n"
    PUSH EDI                            ; 0052a534
    CALL crt_unknown.c_FUN_005b8010     ; 0052a535
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a53a
    SUB ESP,0x8                         ; 0052a53d
    FLD float ptr [EBP + 0x4c]          ; 0052a540
    FSTP double ptr [ESP]               ; 0052a543
    PUSH 0x5e5229                       ; 0052a546 | DAT_005e5229
    PUSH EDI                            ; 0052a54b
    CALL crt_unknown.c_FUN_005b8010     ; 0052a54c
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0052a551
    PUSH 0x5e522d                       ; 0052a554 | = "// whoIsSpeaking\n"
    PUSH EDI                            ; 0052a559
    CALL crt_unknown.c_FUN_005b8010     ; 0052a55a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a55f
    LEA EAX,[EBP + 0x4]                 ; 0052a562
    PUSH EAX                            ; 0052a565
    PUSH EDI                            ; 0052a566
    CALL core_script.cpp_writeActorReference_FUN_0052a090 ; 0052a567
        ;   XREF to: 0052a090 (UNCONDITIONAL_CALL)  ; void core_script.cpp_writeActorReference_FUN_0052a090(_FILE * file_handle, CDemonActor * * actor)
    ADD ESP,0x8                         ; 0052a56c
    PUSH 0x5e523f                       ; 0052a56f | = "// focusActor\n"
    PUSH EDI                            ; 0052a574
    CALL crt_unknown.c_FUN_005b8010     ; 0052a575
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a57a
    LEA EAX,[EBP + 0xc]                 ; 0052a57d
    PUSH EAX                            ; 0052a580
    PUSH EDI                            ; 0052a581
    CALL core_script.cpp_writeActorReference_FUN_0052a090 ; 0052a582
        ;   XREF to: 0052a090 (UNCONDITIONAL_CALL)  ; void core_script.cpp_writeActorReference_FUN_0052a090(_FILE * file_handle, CDemonActor * * actor)
    ADD ESP,0x8                         ; 0052a587
    PUSH 0x5e524e                       ; 0052a58a | = "// focusActorLocked\n"
    PUSH EDI                            ; 0052a58f
    CALL crt_unknown.c_FUN_005b8010     ; 0052a590
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a595
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052a598
    PUSH EAX                            ; 0052a59b
    PUSH 0x5e5263                       ; 0052a59c | DAT_005e5263
    PUSH EDI                            ; 0052a5a1
    CALL crt_unknown.c_FUN_005b8010     ; 0052a5a2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a5a7
    PUSH 0x5e5267                       ; 0052a5aa | = "// callStack count, list\n"
    PUSH EDI                            ; 0052a5af
    CALL crt_unknown.c_FUN_005b8010     ; 0052a5b0
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a5b5
    MOV EDX,dword ptr [EBP + 0x458]     ; 0052a5b8
    PUSH EDX                            ; 0052a5be
    PUSH 0x5e5281                       ; 0052a5bf | DAT_005e5281
    PUSH EDI                            ; 0052a5c4
    XOR ESI,ESI                         ; 0052a5c5
    CALL crt_unknown.c_FUN_005b8010     ; 0052a5c7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ECX,dword ptr [EBP + 0x458]     ; 0052a5cc
    ADD ESP,0xc                         ; 0052a5d2
    TEST ECX,ECX                        ; 0052a5d5
    JLE 0x0052a600                      ; 0052a5d7
        ;   XREF to: 0052a600 (CONDITIONAL_JUMP)  ; LAB_0052a600
    MOV EBX,EBP                         ; 0052a5d9
    MOV EAX,dword ptr [EBX + 0x45c]     ; 0052a5db
        ;   Label: LAB_0052a5db
    PUSH EAX                            ; 0052a5e1
    PUSH 0x5e5285                       ; 0052a5e2 | DAT_005e5285
    PUSH EDI                            ; 0052a5e7
    ADD EBX,0x4                         ; 0052a5e8
    INC ESI                             ; 0052a5eb
    CALL crt_unknown.c_FUN_005b8010     ; 0052a5ec
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EBP + 0x458]     ; 0052a5f1
    ADD ESP,0xc                         ; 0052a5f7
    CMP ESI,EDX                         ; 0052a5fa
    JL 0x0052a5db                       ; 0052a5fc
        ;   XREF to: 0052a5db (CONDITIONAL_JUMP)  ; LAB_0052a5db
    MOV EAX,EAX                         ; 0052a5fe
    PUSH 0x5e5289                       ; 0052a600 | = "// CRC\n"
        ;   Label: LAB_0052a600
    PUSH EDI                            ; 0052a605
    CALL crt_unknown.c_FUN_005b8010     ; 0052a606
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0052a60b
    PUSH EBP                            ; 0052a60e
    CALL core_script.cpp_CScript_computeChecksum_FUN_0052a630 ; 0052a60f
        ;   XREF to: 0052a630 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_0052a630(CScript * this_ptr)
    ADD ESP,0x4                         ; 0052a614
    PUSH EAX                            ; 0052a617
    PUSH 0x5e5291                       ; 0052a618 | DAT_005e5291
    PUSH EDI                            ; 0052a61d
    CALL crt_unknown.c_FUN_005b8010     ; 0052a61e
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a623
    POP EBP                             ; 0052a626
    POP EDI                             ; 0052a627
    POP ESI                             ; 0052a628
    POP EBX                             ; 0052a629
    RET                                 ; 0052a62a

