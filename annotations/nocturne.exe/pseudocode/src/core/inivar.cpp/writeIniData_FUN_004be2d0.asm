; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inivar_cpp_writeIniData_FUN_004be2d0(void)
;
; Local Variables:
; undefined        Stack[-0x210]:1  local_210
;
; XREF[2]:
;   core_main.c_FUN_004c90e0 at 004c938e
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2315
;
; Referenced Globals:
;   TerminatedCString s_gamePIXX_00586a1c
;   TerminatedCString s_gamePIXY_00586a25
;   TerminatedCString s_gameBPP_00586a2e
;   TerminatedCString s_useDirect3D_00586a36
;   TerminatedCString s_useAGPFlag_00586a42
;   TerminatedCString s_rendererDLLPath_00586a4d
;   TerminatedCString s_gamma_00586a5d
;   TerminatedCString s_heroNumber_00586a63
;   TerminatedCString s_haloMode_00586a6e
;   TerminatedCString s_firstTimeFlag_00586a77
;   TerminatedCString s_subtitleMode_00586a85
;   TerminatedCString s_bloodFlag_00586a92
;   TerminatedCString s_nudityFlag_00586a9c
;   TerminatedCString s_foulLanguageFlag_00586aa7
;   TerminatedCString s_shadowFlag_00586ab8
;   ... and 110 more
;
; Called Functions:
;   engine_ini.cpp_CIniFile_ctor_FUN_004bd860
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0
;   engine_ini.cpp_CIniFile_setInteger_FUN_004bda80
;   engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
;   sound_sndmain.cpp_writeIni_FUN_00528c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be2d0
        ;   Label: core_inivar.cpp_writeIniData_FUN_004be2d0
    PUSH ESI                            ; 004be2d1
    PUSH EDI                            ; 004be2d2
    PUSH EBP                            ; 004be2d3
    SUB ESP,0x200                       ; 004be2d4
    PUSH 0x0                            ; 004be2da
    PUSH 0x5baa00                       ; 004be2dc | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x8]                 ; 004be2e1
    PUSH EAX                            ; 004be2e5
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004bd860 ; 004be2e6
        ;   XREF to: 004bd860 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_ctor_FUN_004bd860()
    ADD ESP,0xc                         ; 004be2eb
    PUSH 0x5baa28                       ; 004be2ee | = "Graphics"
    LEA EAX,[ESP + 0x4]                 ; 004be2f3
    PUSH EAX                            ; 004be2f7
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004be2f8
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0()
    MOV EAX,[0x005b9354]                ; 004be2fd | DAT_005b9354
    ADD ESP,0x8                         ; 004be302
    MOV EDX,dword ptr [EAX]             ; 004be305 | DAT_01c775ec
    PUSH EDX                            ; 004be307
    PUSH 0x586a1c                       ; 004be308 | = "gamePIXX"
    LEA EAX,[ESP + 0x8]                 ; 004be30d
    PUSH EAX                            ; 004be311
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be312
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be317 | DAT_005b9354
    ADD ESP,0xc                         ; 004be31c
    MOV ECX,dword ptr [EAX + 0x4]       ; 004be31f | DAT_01c775f0
    PUSH ECX                            ; 004be322
    PUSH 0x586a25                       ; 004be323 | = "gamePIXY"
    LEA EAX,[ESP + 0x8]                 ; 004be328
    PUSH EAX                            ; 004be32c
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be32d
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be332 | DAT_005b9354
    ADD ESP,0xc                         ; 004be337
    MOV EBX,dword ptr [EAX + 0x8]       ; 004be33a | DAT_01c775f4
    PUSH EBX                            ; 004be33d
    PUSH 0x586a2e                       ; 004be33e | = "gameBPP"
    LEA EAX,[ESP + 0x8]                 ; 004be343
    PUSH EAX                            ; 004be347
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be348
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be34d
    MOV ESI,dword ptr [0x02dc9d60]      ; 004be350 | INT_02dc9d60
    PUSH ESI                            ; 004be356
    PUSH 0x586a36                       ; 004be357 | = "useDirect3D"
    LEA EAX,[ESP + 0x8]                 ; 004be35c
    PUSH EAX                            ; 004be360
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be361
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be366
    MOV EDI,dword ptr [0x02dc9d6c]      ; 004be369 | DAT_02dc9d6c
    PUSH EDI                            ; 004be36f
    PUSH 0x586a42                       ; 004be370 | = "useAGPFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be375
    PUSH EAX                            ; 004be379
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be37a
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be37f
    PUSH 0x5c0e80                       ; 004be382 | DAT_005c0e80
    PUSH 0x586a4d                       ; 004be387 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x8]                 ; 004be38c
    PUSH EAX                            ; 004be390
    CALL engine_ini.cpp_CIniFile_setString_FUN_004bd9a0 ; 004be391
        ;   XREF to: 004bd9a0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setString_FUN_004bd9a0()
    MOV EAX,[0x005b9354]                ; 004be396 | DAT_005b9354
    ADD ESP,0xc                         ; 004be39b
    MOV EBP,dword ptr [EAX + 0x224]     ; 004be39e | DAT_01c77810
    PUSH EBP                            ; 004be3a4
    PUSH 0x586a5d                       ; 004be3a5 | = "gamma"
    LEA EAX,[ESP + 0x8]                 ; 004be3aa
    PUSH EAX                            ; 004be3ae
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be3af
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be3b4 | DAT_005b9354
    ADD ESP,0xc                         ; 004be3b9
    MOV EDX,dword ptr [EAX + 0xc0]      ; 004be3bc | DAT_01c776ac
    PUSH EDX                            ; 004be3c2
    PUSH 0x586a63                       ; 004be3c3 | = "heroNumber"
    LEA EAX,[ESP + 0x8]                 ; 004be3c8
    PUSH EAX                            ; 004be3cc
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be3cd
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be3d2 | DAT_005b9354
    ADD ESP,0xc                         ; 004be3d7
    MOV ECX,dword ptr [EAX + 0xc]       ; 004be3da | DAT_01c775f8
    PUSH ECX                            ; 004be3dd
    PUSH 0x586a6e                       ; 004be3de | = "haloMode"
    LEA EAX,[ESP + 0x8]                 ; 004be3e3
    PUSH EAX                            ; 004be3e7
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be3e8
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be3ed
    MOV EBX,dword ptr [0x01cae37c]      ; 004be3f0 | DAT_01cae37c
    PUSH EBX                            ; 004be3f6
    PUSH 0x586a77                       ; 004be3f7 | = "firstTimeFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be3fc
    PUSH EAX                            ; 004be400
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be401
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be406 | DAT_005b9354
    ADD ESP,0xc                         ; 004be40b
    MOV ESI,dword ptr [EAX + 0x10]      ; 004be40e | DAT_01c775fc
    PUSH ESI                            ; 004be411
    PUSH 0x586a85                       ; 004be412 | = "subtitleMode"
    LEA EAX,[ESP + 0x8]                 ; 004be417
    PUSH EAX                            ; 004be41b
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be41c
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be421 | DAT_005b9354
    ADD ESP,0xc                         ; 004be426
    MOV EDI,dword ptr [EAX + 0x14]      ; 004be429 | DAT_01c77600
    PUSH EDI                            ; 004be42c
    PUSH 0x586a92                       ; 004be42d | = "bloodFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be432
    PUSH EAX                            ; 004be436
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be437
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be43c | DAT_005b9354
    MOV EBP,dword ptr [EAX + 0x20]      ; 004be441 | DAT_01c7760c
    ADD ESP,0xc                         ; 004be444
    TEST EBP,EBP                        ; 004be447
    JZ 0x004be975                       ; 004be449
        ;   XREF to: 004be975 (CONDITIONAL_JUMP)  ; LAB_004be975
    MOV EAX,[0x005b9354]                ; 004be44f | DAT_005b9354
        ;   Label: LAB_004be44f
    MOV ESI,dword ptr [EAX + 0x20]      ; 004be454 | DAT_01c7760c
    PUSH ESI                            ; 004be457
    PUSH 0x586ac3                       ; 004be458 | = "quimbyFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be45d
    PUSH EAX                            ; 004be461
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be462
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be467
    MOV EDI,dword ptr [0x01cc64a4]      ; 004be46a | DAT_01cc64a4
    PUSH EDI                            ; 004be470
    PUSH 0x586ace                       ; 004be471 | = "currentBoard"
    LEA EAX,[ESP + 0x8]                 ; 004be476
    PUSH EAX                            ; 004be47a
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be47b
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be480
    PUSH 0x5baa20                       ; 004be483 | = "Sound"
    LEA EAX,[ESP + 0x4]                 ; 004be488
    PUSH EAX                            ; 004be48c
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004be48d
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0()
    ADD ESP,0x8                         ; 004be492
    MOV EAX,ESP                         ; 004be495
    PUSH EAX                            ; 004be497
    CALL sound_sndmain.cpp_writeIni_FUN_00528c80 ; 004be498
        ;   XREF to: 00528c80 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_writeIni_FUN_00528c80()
    ADD ESP,0x4                         ; 004be49d
    PUSH 0x5baa38                       ; 004be4a0 | = "Control"
    LEA EAX,[ESP + 0x4]                 ; 004be4a5
    PUSH EAX                            ; 004be4a9
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004be4aa
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0()
    MOV EAX,[0x005b9354]                ; 004be4af | DAT_005b9354
    ADD ESP,0x8                         ; 004be4b4
    MOV EBP,dword ptr [EAX + 0xbc]      ; 004be4b7 | DAT_01c776a8
    PUSH EBP                            ; 004be4bd
    PUSH 0x586adb                       ; 004be4be | = "gameControl"
    LEA EAX,[ESP + 0x8]                 ; 004be4c3
    PUSH EAX                            ; 004be4c7
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be4c8
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be4cd | DAT_005b9354
    ADD ESP,0xc                         ; 004be4d2
    MOV EDX,dword ptr [EAX + 0x28]      ; 004be4d5 | DAT_01c77614
    PUSH EDX                            ; 004be4d8
    PUSH 0x586ae7                       ; 004be4d9 | = "keyWalk"
    LEA EAX,[ESP + 0x8]                 ; 004be4de
    PUSH EAX                            ; 004be4e2
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be4e3
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be4e8 | DAT_005b9354
    ADD ESP,0xc                         ; 004be4ed
    MOV ECX,dword ptr [EAX + 0x2c]      ; 004be4f0 | DAT_01c77618
    PUSH ECX                            ; 004be4f3
    PUSH 0x586aef                       ; 004be4f4 | = "keyBackup"
    LEA EAX,[ESP + 0x8]                 ; 004be4f9
    PUSH EAX                            ; 004be4fd
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be4fe
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be503 | DAT_005b9354
    ADD ESP,0xc                         ; 004be508
    MOV EBX,dword ptr [EAX + 0x30]      ; 004be50b | DAT_01c7761c
    PUSH EBX                            ; 004be50e
    PUSH 0x586af9                       ; 004be50f | = "keyRun"
    LEA EAX,[ESP + 0x8]                 ; 004be514
    PUSH EAX                            ; 004be518
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be519
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be51e | DAT_005b9354
    ADD ESP,0xc                         ; 004be523
    MOV ESI,dword ptr [EAX + 0x34]      ; 004be526 | DAT_01c77620
    PUSH ESI                            ; 004be529
    PUSH 0x586b00                       ; 004be52a | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004be52f
    PUSH EAX                            ; 004be533
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be534
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be539 | DAT_005b9354
    ADD ESP,0xc                         ; 004be53e
    MOV EDI,dword ptr [EAX + 0x38]      ; 004be541 | DAT_01c77624
    PUSH EDI                            ; 004be544
    PUSH 0x586b0a                       ; 004be545 | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004be54a
    PUSH EAX                            ; 004be54e
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be54f
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be554
    MOV EAX,[0x005b9354]                ; 004be557 | DAT_005b9354
    MOV EBP,dword ptr [EAX + 0x3c]      ; 004be55c | DAT_01c77628
    PUSH EBP                            ; 004be55f
    PUSH 0x586b18                       ; 004be560 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004be565
    PUSH EAX                            ; 004be569
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be56a
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be56f | DAT_005b9354
    ADD ESP,0xc                         ; 004be574
    MOV EDX,dword ptr [EAX + 0x40]      ; 004be577 | DAT_01c7762c
    PUSH EDX                            ; 004be57a
    PUSH 0x586b27                       ; 004be57b | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004be580
    PUSH EAX                            ; 004be584
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be585
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be58a | DAT_005b9354
    ADD ESP,0xc                         ; 004be58f
    MOV ECX,dword ptr [EAX + 0x44]      ; 004be592 | DAT_01c77630
    PUSH ECX                            ; 004be595
    PUSH 0x586b30                       ; 004be596 | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004be59b
    PUSH EAX                            ; 004be59f
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be5a0
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be5a5 | DAT_005b9354
    ADD ESP,0xc                         ; 004be5aa
    MOV EBX,dword ptr [EAX + 0x48]      ; 004be5ad | DAT_01c77634
    PUSH EBX                            ; 004be5b0
    PUSH 0x586b38                       ; 004be5b1 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004be5b6
    PUSH EAX                            ; 004be5ba
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be5bb
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be5c0 | DAT_005b9354
    ADD ESP,0xc                         ; 004be5c5
    MOV ESI,dword ptr [EAX + 0x4c]      ; 004be5c8 | DAT_01c77638
    PUSH ESI                            ; 004be5cb
    PUSH 0x586b40                       ; 004be5cc | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004be5d1
    PUSH EAX                            ; 004be5d5
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be5d6
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be5db | DAT_005b9354
    ADD ESP,0xc                         ; 004be5e0
    MOV EDI,dword ptr [EAX + 0x50]      ; 004be5e3 | DAT_01c7763c
    PUSH EDI                            ; 004be5e6
    PUSH 0x586b4b                       ; 004be5e7 | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004be5ec
    PUSH EAX                            ; 004be5f0
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be5f1
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be5f6 | DAT_005b9354
    ADD ESP,0xc                         ; 004be5fb
    MOV EBP,dword ptr [EAX + 0x54]      ; 004be5fe | DAT_01c77640
    PUSH EBP                            ; 004be601
    PUSH 0x586b54                       ; 004be602 | = "keyInfrared"
    LEA EAX,[ESP + 0x8]                 ; 004be607
    PUSH EAX                            ; 004be60b
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be60c
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be611 | DAT_005b9354
    ADD ESP,0xc                         ; 004be616
    MOV EDX,dword ptr [EAX + 0x58]      ; 004be619 | DAT_01c77644
    PUSH EDX                            ; 004be61c
    PUSH 0x586b60                       ; 004be61d | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004be622
    PUSH EAX                            ; 004be626
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be627
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be62c | DAT_005b9354
    ADD ESP,0xc                         ; 004be631
    MOV ECX,dword ptr [EAX + 0x5c]      ; 004be634 | DAT_01c77648
    PUSH ECX                            ; 004be637
    PUSH 0x586b68                       ; 004be638 | = "keyJump"
    LEA EAX,[ESP + 0x8]                 ; 004be63d
    PUSH EAX                            ; 004be641
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be642
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be647 | DAT_005b9354
    ADD ESP,0xc                         ; 004be64c
    MOV EBX,dword ptr [EAX + 0x60]      ; 004be64f | DAT_01c7764c
    PUSH EBX                            ; 004be652
    PUSH 0x586b70                       ; 004be653 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004be658
    PUSH EAX                            ; 004be65c
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be65d
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be662
    MOV EAX,[0x005b9354]                ; 004be665 | DAT_005b9354
    MOV ESI,dword ptr [EAX + 0x64]      ; 004be66a | DAT_01c77650
    PUSH ESI                            ; 004be66d
    PUSH 0x586b7b                       ; 004be66e | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004be673
    PUSH EAX                            ; 004be677
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be678
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be67d | DAT_005b9354
    ADD ESP,0xc                         ; 004be682
    MOV EDI,dword ptr [EAX + 0x68]      ; 004be685 | DAT_01c77654
    PUSH EDI                            ; 004be688
    PUSH 0x586b88                       ; 004be689 | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004be68e
    PUSH EAX                            ; 004be692
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be693
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be698 | DAT_005b9354
    ADD ESP,0xc                         ; 004be69d
    MOV EBP,dword ptr [EAX + 0x6c]      ; 004be6a0 | DAT_01c77658
    PUSH EBP                            ; 004be6a3
    PUSH 0x586b93                       ; 004be6a4 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004be6a9
    PUSH EAX                            ; 004be6ad
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be6ae
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be6b3 | DAT_005b9354
    ADD ESP,0xc                         ; 004be6b8
    MOV EDX,dword ptr [EAX + 0x70]      ; 004be6bb | DAT_01c7765c
    PUSH EDX                            ; 004be6be
    PUSH 0x586b9e                       ; 004be6bf | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004be6c4
    PUSH EAX                            ; 004be6c8
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be6c9
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be6ce | DAT_005b9354
    ADD ESP,0xc                         ; 004be6d3
    MOV ECX,dword ptr [EAX + 0x74]      ; 004be6d6 | DAT_01c77660
    PUSH ECX                            ; 004be6d9
    PUSH 0x586ba9                       ; 004be6da | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004be6df
    PUSH EAX                            ; 004be6e3
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be6e4
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be6e9 | DAT_005b9354
    ADD ESP,0xc                         ; 004be6ee
    MOV EBX,dword ptr [EAX + 0x78]      ; 004be6f1 | DAT_01c77664
    PUSH EBX                            ; 004be6f4
    PUSH 0x586bb4                       ; 004be6f5 | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004be6fa
    PUSH EAX                            ; 004be6fe
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be6ff
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be704 | DAT_005b9354
    ADD ESP,0xc                         ; 004be709
    MOV ESI,dword ptr [EAX + 0x7c]      ; 004be70c | DAT_01c77668
    PUSH ESI                            ; 004be70f
    PUSH 0x586bbf                       ; 004be710 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004be715
    PUSH EAX                            ; 004be719
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be71a
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be71f | DAT_005b9354
    ADD ESP,0xc                         ; 004be724
    MOV EDI,dword ptr [EAX + 0x80]      ; 004be727 | DAT_01c7766c
    PUSH EDI                            ; 004be72d
    PUSH 0x586bcd                       ; 004be72e | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004be733
    PUSH EAX                            ; 004be737
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be738
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be73d | DAT_005b9354
    ADD ESP,0xc                         ; 004be742
    MOV EBP,dword ptr [EAX + 0x84]      ; 004be745 | DAT_01c77670
    PUSH EBP                            ; 004be74b
    PUSH 0x586bdb                       ; 004be74c | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004be751
    PUSH EAX                            ; 004be755
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be756
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be75b | DAT_005b9354
    ADD ESP,0xc                         ; 004be760
    MOV EDX,dword ptr [EAX + 0x88]      ; 004be763 | DAT_01c77674
    PUSH EDX                            ; 004be769
    PUSH 0x586be7                       ; 004be76a | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004be76f
    PUSH EAX                            ; 004be773
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be774
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be779
    MOV EAX,[0x005b9354]                ; 004be77c | DAT_005b9354
    MOV ECX,dword ptr [EAX + 0x8c]      ; 004be781 | DAT_01c77678
    PUSH ECX                            ; 004be787
    PUSH 0x586bf3                       ; 004be788 | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004be78d
    PUSH EAX                            ; 004be791
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be792
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be797 | DAT_005b9354
    ADD ESP,0xc                         ; 004be79c
    MOV EBX,dword ptr [EAX + 0x90]      ; 004be79f | DAT_01c7767c
    PUSH EBX                            ; 004be7a5
    PUSH 0x586bff                       ; 004be7a6 | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004be7ab
    PUSH EAX                            ; 004be7af
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be7b0
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be7b5 | DAT_005b9354
    ADD ESP,0xc                         ; 004be7ba
    MOV ESI,dword ptr [EAX + 0x94]      ; 004be7bd | DAT_01c77680
    PUSH ESI                            ; 004be7c3
    PUSH 0x586c0b                       ; 004be7c4 | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004be7c9
    PUSH EAX                            ; 004be7cd
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be7ce
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be7d3 | DAT_005b9354
    ADD ESP,0xc                         ; 004be7d8
    MOV EDI,dword ptr [EAX + 0x98]      ; 004be7db | DAT_01c77684
    PUSH EDI                            ; 004be7e1
    PUSH 0x586c1c                       ; 004be7e2 | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004be7e7
    PUSH EAX                            ; 004be7eb
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be7ec
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be7f1 | DAT_005b9354
    ADD ESP,0xc                         ; 004be7f6
    MOV EBP,dword ptr [EAX + 0x9c]      ; 004be7f9 | DAT_01c77688
    PUSH EBP                            ; 004be7ff
    PUSH 0x586c26                       ; 004be800 | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004be805
    PUSH EAX                            ; 004be809
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be80a
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be80f | DAT_005b9354
    ADD ESP,0xc                         ; 004be814
    MOV EDX,dword ptr [EAX + 0xa0]      ; 004be817 | DAT_01c7768c
    PUSH EDX                            ; 004be81d
    PUSH 0x586c38                       ; 004be81e | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004be823
    PUSH EAX                            ; 004be827
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be828
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be82d | DAT_005b9354
    ADD ESP,0xc                         ; 004be832
    MOV ECX,dword ptr [EAX + 0xa4]      ; 004be835 | DAT_01c77690
    PUSH ECX                            ; 004be83b
    PUSH 0x586c4a                       ; 004be83c | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004be841
    PUSH EAX                            ; 004be845
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be846
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be84b | DAT_005b9354
    ADD ESP,0xc                         ; 004be850
    MOV EBX,dword ptr [EAX + 0xa8]      ; 004be853 | DAT_01c77694
    PUSH EBX                            ; 004be859
    PUSH 0x586c52                       ; 004be85a | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004be85f
    PUSH EAX                            ; 004be863
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be864
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be869 | DAT_005b9354
    ADD ESP,0xc                         ; 004be86e
    MOV ESI,dword ptr [EAX + 0xac]      ; 004be871 | DAT_01c77698
    PUSH ESI                            ; 004be877
    PUSH 0x586c5a                       ; 004be878 | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004be87d
    PUSH EAX                            ; 004be881
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be882
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be887 | DAT_005b9354
    ADD ESP,0xc                         ; 004be88c
    MOV EDI,dword ptr [EAX + 0xb0]      ; 004be88f | DAT_01c7769c
    PUSH EDI                            ; 004be895
    PUSH 0x586c64                       ; 004be896 | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004be89b
    PUSH EAX                            ; 004be89f
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be8a0
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be8a5
    MOV EAX,[0x005b9354]                ; 004be8a8 | DAT_005b9354
    MOV EBP,dword ptr [EAX + 0xb4]      ; 004be8ad | DAT_01c776a0
    PUSH EBP                            ; 004be8b3
    PUSH 0x586c6e                       ; 004be8b4 | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004be8b9
    PUSH EAX                            ; 004be8bd
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be8be
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be8c3 | DAT_005b9354
    ADD ESP,0xc                         ; 004be8c8
    MOV EDX,dword ptr [EAX + 0xb8]      ; 004be8cb | DAT_01c776a4
    PUSH EDX                            ; 004be8d1
    PUSH 0x586c78                       ; 004be8d2 | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004be8d7
    PUSH EAX                            ; 004be8db
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be8dc
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be8e1 | DAT_005b9354
    ADD ESP,0xc                         ; 004be8e6
    MOV ECX,dword ptr [EAX + 0xc4]      ; 004be8e9 | DAT_01c776b0
    PUSH ECX                            ; 004be8ef
    PUSH 0x586c82                       ; 004be8f0 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004be8f5
    PUSH EAX                            ; 004be8f9
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be8fa
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be8ff | DAT_005b9354
    ADD ESP,0xc                         ; 004be904
    MOV EBX,dword ptr [EAX + 0xc8]      ; 004be907 | DAT_01c776b4
    PUSH EBX                            ; 004be90d
    PUSH 0x586c8a                       ; 004be90e | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004be913
    PUSH EAX                            ; 004be917
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be918
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be91d
    PUSH 0x5baa70                       ; 004be920 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004be925
    PUSH EAX                            ; 004be929
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004be92a
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0()
    MOV EAX,[0x005ad350]                ; 004be92f | PTR_DAT_005ad350
    ADD ESP,0x8                         ; 004be934
    MOV ESI,dword ptr [EAX]             ; 004be937 | DAT_0077ad0c
    PUSH ESI                            ; 004be939
    PUSH 0x586c98                       ; 004be93a | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be93f
    PUSH EAX                            ; 004be943
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be944
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be949 | DAT_005b9354
    ADD ESP,0xc                         ; 004be94e
    MOV EDI,dword ptr [EAX + 0x214]     ; 004be951 | DAT_01c77800
    PUSH EDI                            ; 004be957
    PUSH 0x586ca7                       ; 004be958 | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004be95d
    PUSH EAX                            ; 004be961
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be962
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be967
    ADD ESP,0x200                       ; 004be96a
    POP EBP                             ; 004be970
    POP EDI                             ; 004be971
    POP ESI                             ; 004be972
    POP EBX                             ; 004be973
    RET                                 ; 004be974
    MOV EDX,dword ptr [EAX + 0x18]      ; 004be975 | DAT_01c77604
        ;   Label: LAB_004be975
    PUSH EDX                            ; 004be978
    PUSH 0x586a9c                       ; 004be979 | = "nudityFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be97e
    PUSH EAX                            ; 004be982
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be983
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be988 | DAT_005b9354
    ADD ESP,0xc                         ; 004be98d
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004be990 | DAT_01c77608
    PUSH ECX                            ; 004be993
    PUSH 0x586aa7                       ; 004be994 | = "foulLanguageFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be999
    PUSH EAX                            ; 004be99d
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be99e
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    MOV EAX,[0x005b9354]                ; 004be9a3 | DAT_005b9354
    ADD ESP,0xc                         ; 004be9a8
    MOV EBX,dword ptr [EAX + 0x24]      ; 004be9ab | DAT_01c77610
    PUSH EBX                            ; 004be9ae
    PUSH 0x586ab8                       ; 004be9af | = "shadowFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be9b4
    PUSH EAX                            ; 004be9b8
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 004be9b9
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_setInteger_FUN_004bda80()
    ADD ESP,0xc                         ; 004be9be
    JMP 0x004be44f                      ; 004be9c1
        ;   XREF to: 004be44f (UNCONDITIONAL_JUMP)  ; LAB_004be44f

