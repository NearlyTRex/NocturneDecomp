; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inivar_cpp_writeIniData_FUN_004fc510(void)
;
; Local Variables:
; undefined1       Stack[-0x210]:1  local_210
;
; XREF[3]:
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508821
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512e85
;   core_msnedit.cpp_CDemonMission_FUN_00537680 at 005378b4
;
; Referenced Globals:
;   TerminatedCString s_gamePIXX_00630069
;   TerminatedCString s_gamePIXY_00630072
;   TerminatedCString s_gameBPP_0063007b
;   TerminatedCString s_useAGPFlag_00630083
;   TerminatedCString s_rendererDLLPath_0063008e
;   TerminatedCString s_gamma_0063009e
;   TerminatedCString s_heroNumber_006300a4
;   TerminatedCString s_haloMode_006300af
;   TerminatedCString s_firstTimeFlag_006300b8
;   TerminatedCString s_subtitleMode_006300c6
;   TerminatedCString s_bloodFlag_006300d3
;   TerminatedCString s_nudityFlag_006300dd
;   TerminatedCString s_foulLanguageFlag_006300e8
;   TerminatedCString s_shadowFlag_006300f9
;   TerminatedCString s_quimbyFlag_00630104
;   ... and 113 more
;
; Called Functions:
;   core_msnedit.cpp_CDemonMission_writeIni_FUN_005375d0
;   core_setedit.cpp_CDemonSet_writeIni_FUN_00584920
;   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
;   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
;   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
;   sound_sndmain.cpp_writeIni_FUN_005ac220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc510
        ;   Label: core_inivar.cpp_writeIniData_FUN_004fc510
    PUSH ESI                            ; 004fc511
    PUSH EDI                            ; 004fc512
    PUSH EBP                            ; 004fc513
    SUB ESP,0x200                       ; 004fc514
    PUSH 0x0                            ; 004fc51a
    PUSH 0x67cce0                       ; 004fc51c | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x8]                 ; 004fc521
    PUSH EAX                            ; 004fc525
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 004fc526
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode)
    ADD ESP,0xc                         ; 004fc52b
    PUSH 0x67cd08                       ; 004fc52e | = "Graphics"
    LEA EAX,[ESP + 0x4]                 ; 004fc533
    PUSH EAX                            ; 004fc537
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fc538
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x0067b654]                ; 004fc53d | g_CGamePtr
    ADD ESP,0x8                         ; 004fc542
    MOV EDX,dword ptr [EAX]             ; 004fc545 | g_CGameInstance
    PUSH EDX                            ; 004fc547
    PUSH 0x630069                       ; 004fc548 | = "gamePIXX"
    LEA EAX,[ESP + 0x8]                 ; 004fc54d
    PUSH EAX                            ; 004fc551
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc552
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc557 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc55c
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fc55f | g_CGameInstance.game_pixy
    PUSH ECX                            ; 004fc562
    PUSH 0x630072                       ; 004fc563 | = "gamePIXY"
    LEA EAX,[ESP + 0x8]                 ; 004fc568
    PUSH EAX                            ; 004fc56c
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc56d
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc572 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc577
    MOV EBX,dword ptr [EAX + 0x8]       ; 004fc57a | DAT_02d81aa4
    PUSH EBX                            ; 004fc57d
    PUSH 0x63007b                       ; 004fc57e | = "gameBPP"
    LEA EAX,[ESP + 0x8]                 ; 004fc583
    PUSH EAX                            ; 004fc587
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc588
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc58d
    MOV ESI,dword ptr [0x03f6b884]      ; 004fc590 | g_PodSystemVersion
    PUSH ESI                            ; 004fc596
    PUSH 0x630083                       ; 004fc597 | = "useAGPFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fc59c
    PUSH EAX                            ; 004fc5a0
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc5a1
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc5a6
    PUSH 0x684010                       ; 004fc5a9 | = "trid3d.dll"
    PUSH 0x63008e                       ; 004fc5ae | = "rendererDLLPath"
    LEA EAX,[ESP + 0x8]                 ; 004fc5b3
    PUSH EAX                            ; 004fc5b7
    CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 ; 004fc5b8
        ;   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this_ptr, char * key, char * value)
    MOV EAX,[0x0067b654]                ; 004fc5bd | g_CGamePtr
    ADD ESP,0xc                         ; 004fc5c2
    MOV EDI,dword ptr [EAX + 0x224]     ; 004fc5c5 | DAT_02d81cc0
    PUSH EDI                            ; 004fc5cb
    PUSH 0x63009e                       ; 004fc5cc | = "gamma"
    LEA EAX,[ESP + 0x8]                 ; 004fc5d1
    PUSH EAX                            ; 004fc5d5
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc5d6
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc5db | g_CGamePtr
    ADD ESP,0xc                         ; 004fc5e0
    MOV EBP,dword ptr [EAX + 0xc0]      ; 004fc5e3 | g_CGameInstance.hero_number
    PUSH EBP                            ; 004fc5e9
    PUSH 0x6300a4                       ; 004fc5ea | = "heroNumber"
    LEA EAX,[ESP + 0x8]                 ; 004fc5ef
    PUSH EAX                            ; 004fc5f3
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc5f4
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc5f9 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc5fe
    MOV EDX,dword ptr [EAX + 0xc]       ; 004fc601 | DAT_02d81aa8
    PUSH EDX                            ; 004fc604
    PUSH 0x6300af                       ; 004fc605 | = "haloMode"
    LEA EAX,[ESP + 0x8]                 ; 004fc60a
    PUSH EAX                            ; 004fc60e
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc60f
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc614
    MOV ECX,dword ptr [0x02db8a64]      ; 004fc617 | g_SkipIntroVideo
    PUSH ECX                            ; 004fc61d
    PUSH 0x6300b8                       ; 004fc61e | = "firstTimeFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fc623
    PUSH EAX                            ; 004fc627
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc628
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc62d | g_CGamePtr
    ADD ESP,0xc                         ; 004fc632
    MOV EBX,dword ptr [EAX + 0x10]      ; 004fc635 | DAT_02d81aac
    PUSH EBX                            ; 004fc638
    PUSH 0x6300c6                       ; 004fc639 | = "subtitleMode"
    LEA EAX,[ESP + 0x8]                 ; 004fc63e
    PUSH EAX                            ; 004fc642
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc643
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc648 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc64d
    MOV ESI,dword ptr [EAX + 0x14]      ; 004fc650 | g_CGameInstance.blood_flag
    PUSH ESI                            ; 004fc653
    PUSH 0x6300d3                       ; 004fc654 | = "bloodFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fc659
    PUSH EAX                            ; 004fc65d
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc65e
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc663 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x20]      ; 004fc668 | DAT_02d81abc
    ADD ESP,0xc                         ; 004fc66b
    TEST EDI,EDI                        ; 004fc66e
    JZ 0x004fcbd2                       ; 004fc670
        ;   XREF to: 004fcbd2 (CONDITIONAL_JUMP)  ; LAB_004fcbd2
    MOV EAX,[0x0067b654]                ; 004fc676 | g_CGamePtr
        ;   Label: LAB_004fc676
    MOV EBX,dword ptr [EAX + 0x20]      ; 004fc67b | DAT_02d81abc
    PUSH EBX                            ; 004fc67e
    PUSH 0x630104                       ; 004fc67f | = "quimbyFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fc684
    PUSH EAX                            ; 004fc688
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc689
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc68e
    MOV ESI,dword ptr [0x02f275f4]      ; 004fc691 | g_GraphicsCardHandle
    PUSH ESI                            ; 004fc697
    PUSH 0x63010f                       ; 004fc698 | = "currentBoard"
    LEA EAX,[ESP + 0x8]                 ; 004fc69d
    PUSH EAX                            ; 004fc6a1
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc6a2
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc6a7
    PUSH 0x67cd00                       ; 004fc6aa | = "Sound"
    LEA EAX,[ESP + 0x4]                 ; 004fc6af
    PUSH EAX                            ; 004fc6b3
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fc6b4
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004fc6b9
    MOV EAX,ESP                         ; 004fc6bc
    PUSH EAX                            ; 004fc6be
    CALL sound_sndmain.cpp_writeIni_FUN_005ac220 ; 004fc6bf
        ;   XREF to: 005ac220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_writeIni_FUN_005ac220(CIniFile * ini_file)
    ADD ESP,0x4                         ; 004fc6c4
    PUSH 0x67cd18                       ; 004fc6c7 | = "Control"
    LEA EAX,[ESP + 0x4]                 ; 004fc6cc
    PUSH EAX                            ; 004fc6d0
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fc6d1
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x0067b654]                ; 004fc6d6 | g_CGamePtr
    ADD ESP,0x8                         ; 004fc6db
    MOV EDI,dword ptr [EAX + 0xbc]      ; 004fc6de | g_CGameInstance.game_control
    PUSH EDI                            ; 004fc6e4
    PUSH 0x63011c                       ; 004fc6e5 | = "gameControl"
    LEA EAX,[ESP + 0x8]                 ; 004fc6ea
    PUSH EAX                            ; 004fc6ee
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc6ef
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc6f4 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc6f9
    MOV EBP,dword ptr [EAX + 0x28]      ; 004fc6fc | g_CGameInstance.key_walk
    PUSH EBP                            ; 004fc6ff
    PUSH 0x630128                       ; 004fc700 | = "keyWalk"
    LEA EAX,[ESP + 0x8]                 ; 004fc705
    PUSH EAX                            ; 004fc709
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc70a
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc70f | g_CGamePtr
    ADD ESP,0xc                         ; 004fc714
    MOV EDX,dword ptr [EAX + 0x2c]      ; 004fc717 | g_CGameInstance.key_backup
    PUSH EDX                            ; 004fc71a
    PUSH 0x630130                       ; 004fc71b | = "keyBackup"
    LEA EAX,[ESP + 0x8]                 ; 004fc720
    PUSH EAX                            ; 004fc724
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc725
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc72a | g_CGamePtr
    ADD ESP,0xc                         ; 004fc72f
    MOV ECX,dword ptr [EAX + 0x30]      ; 004fc732 | g_CGameInstance.key_run
    PUSH ECX                            ; 004fc735
    PUSH 0x63013a                       ; 004fc736 | = "keyRun"
    LEA EAX,[ESP + 0x8]                 ; 004fc73b
    PUSH EAX                            ; 004fc73f
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc740
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc745 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc74a
    MOV EBX,dword ptr [EAX + 0x34]      ; 004fc74d | g_CGameInstance.key_strafe
    PUSH EBX                            ; 004fc750
    PUSH 0x630141                       ; 004fc751 | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004fc756
    PUSH EAX                            ; 004fc75a
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc75b
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc760 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc765
    MOV ESI,dword ptr [EAX + 0x38]      ; 004fc768 | g_CGameInstance.key_strafe_left
    PUSH ESI                            ; 004fc76b
    PUSH 0x63014b                       ; 004fc76c | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004fc771
    PUSH EAX                            ; 004fc775
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc776
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc77b
    MOV EAX,[0x0067b654]                ; 004fc77e | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x3c]      ; 004fc783 | g_CGameInstance.key_strafe_right
    PUSH EDI                            ; 004fc786
    PUSH 0x630159                       ; 004fc787 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004fc78c
    PUSH EAX                            ; 004fc790
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc791
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc796 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc79b
    MOV EBP,dword ptr [EAX + 0x40]      ; 004fc79e | g_CGameInstance.key_right
    PUSH EBP                            ; 004fc7a1
    PUSH 0x630168                       ; 004fc7a2 | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004fc7a7
    PUSH EAX                            ; 004fc7ab
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc7ac
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc7b1 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc7b6
    MOV EDX,dword ptr [EAX + 0x44]      ; 004fc7b9 | g_CGameInstance.key_left
    PUSH EDX                            ; 004fc7bc
    PUSH 0x630171                       ; 004fc7bd | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004fc7c2
    PUSH EAX                            ; 004fc7c6
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc7c7
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc7cc | g_CGamePtr
    ADD ESP,0xc                         ; 004fc7d1
    MOV ECX,dword ptr [EAX + 0x48]      ; 004fc7d4 | g_CGameInstance.key_fire
    PUSH ECX                            ; 004fc7d7
    PUSH 0x630179                       ; 004fc7d8 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004fc7dd
    PUSH EAX                            ; 004fc7e1
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc7e2
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc7e7 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc7ec
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004fc7ef | g_CGameInstance.key_use_item
    PUSH EBX                            ; 004fc7f2
    PUSH 0x630181                       ; 004fc7f3 | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004fc7f8
    PUSH EAX                            ; 004fc7fc
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc7fd
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc802 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc807
    MOV ESI,dword ptr [EAX + 0x50]      ; 004fc80a | g_CGameInstance.key_light
    PUSH ESI                            ; 004fc80d
    PUSH 0x63018c                       ; 004fc80e | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004fc813
    PUSH EAX                            ; 004fc817
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc818
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc81d | g_CGamePtr
    ADD ESP,0xc                         ; 004fc822
    MOV EDI,dword ptr [EAX + 0x54]      ; 004fc825 | g_CGameInstance.key_infrared
    PUSH EDI                            ; 004fc828
    PUSH 0x630195                       ; 004fc829 | = "keyInfrared"
    LEA EAX,[ESP + 0x8]                 ; 004fc82e
    PUSH EAX                            ; 004fc832
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc833
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc838 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc83d
    MOV EBP,dword ptr [EAX + 0x58]      ; 004fc840 | g_CGameInstance.key_draw
    PUSH EBP                            ; 004fc843
    PUSH 0x6301a1                       ; 004fc844 | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004fc849
    PUSH EAX                            ; 004fc84d
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc84e
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc853 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc858
    MOV EDX,dword ptr [EAX + 0x5c]      ; 004fc85b | g_CGameInstance.key_jump
    PUSH EDX                            ; 004fc85e
    PUSH 0x6301a9                       ; 004fc85f | = "keyJump"
    LEA EAX,[ESP + 0x8]                 ; 004fc864
    PUSH EAX                            ; 004fc868
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc869
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc86e | g_CGamePtr
    ADD ESP,0xc                         ; 004fc873
    MOV ECX,dword ptr [EAX + 0x60]      ; 004fc876 | g_CGameInstance.key_point_up
    PUSH ECX                            ; 004fc879
    PUSH 0x6301b1                       ; 004fc87a | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004fc87f
    PUSH EAX                            ; 004fc883
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc884
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc889
    MOV EAX,[0x0067b654]                ; 004fc88c | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x64]      ; 004fc891 | g_CGameInstance.key_point_down
    PUSH EBX                            ; 004fc894
    PUSH 0x6301bc                       ; 004fc895 | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004fc89a
    PUSH EAX                            ; 004fc89e
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc89f
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc8a4 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc8a9
    MOV ESI,dword ptr [EAX + 0x68]      ; 004fc8ac | g_CGameInstance.key_weapon_1
    PUSH ESI                            ; 004fc8af
    PUSH 0x6301c9                       ; 004fc8b0 | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004fc8b5
    PUSH EAX                            ; 004fc8b9
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc8ba
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc8bf | g_CGamePtr
    ADD ESP,0xc                         ; 004fc8c4
    MOV EDI,dword ptr [EAX + 0x6c]      ; 004fc8c7 | g_CGameInstance.key_weapon_2
    PUSH EDI                            ; 004fc8ca
    PUSH 0x6301d4                       ; 004fc8cb | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004fc8d0
    PUSH EAX                            ; 004fc8d4
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc8d5
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc8da | g_CGamePtr
    ADD ESP,0xc                         ; 004fc8df
    MOV EBP,dword ptr [EAX + 0x70]      ; 004fc8e2 | g_CGameInstance.key_weapon_3
    PUSH EBP                            ; 004fc8e5
    PUSH 0x6301df                       ; 004fc8e6 | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004fc8eb
    PUSH EAX                            ; 004fc8ef
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc8f0
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc8f5 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc8fa
    MOV EDX,dword ptr [EAX + 0x74]      ; 004fc8fd | g_CGameInstance.key_weapon_4
    PUSH EDX                            ; 004fc900
    PUSH 0x6301ea                       ; 004fc901 | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004fc906
    PUSH EAX                            ; 004fc90a
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc90b
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc910 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc915
    MOV ECX,dword ptr [EAX + 0x78]      ; 004fc918 | g_CGameInstance.key_weapon_5
    PUSH ECX                            ; 004fc91b
    PUSH 0x6301f5                       ; 004fc91c | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004fc921
    PUSH EAX                            ; 004fc925
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc926
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc92b | g_CGamePtr
    ADD ESP,0xc                         ; 004fc930
    MOV EBX,dword ptr [EAX + 0x7c]      ; 004fc933 | g_CGameInstance.key_next_weapon
    PUSH EBX                            ; 004fc936
    PUSH 0x630200                       ; 004fc937 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004fc93c
    PUSH EAX                            ; 004fc940
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc941
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc946 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc94b
    MOV ESI,dword ptr [EAX + 0x80]      ; 004fc94e | g_CGameInstance.key_prev_weapon
    PUSH ESI                            ; 004fc954
    PUSH 0x63020e                       ; 004fc955 | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004fc95a
    PUSH EAX                            ; 004fc95e
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc95f
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc964 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc969
    MOV EDI,dword ptr [EAX + 0x84]      ; 004fc96c | g_CGameInstance.key_next_item
    PUSH EDI                            ; 004fc972
    PUSH 0x63021c                       ; 004fc973 | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004fc978
    PUSH EAX                            ; 004fc97c
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc97d
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc982 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc987
    MOV EBP,dword ptr [EAX + 0x88]      ; 004fc98a | g_CGameInstance.key_prev_item
    PUSH EBP                            ; 004fc990
    PUSH 0x630228                       ; 004fc991 | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004fc996
    PUSH EAX                            ; 004fc99a
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc99b
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fc9a0
    MOV EAX,[0x0067b654]                ; 004fc9a3 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x8c]      ; 004fc9a8 | g_CGameInstance.key_item_desc
    PUSH EDX                            ; 004fc9ae
    PUSH 0x630234                       ; 004fc9af | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004fc9b4
    PUSH EAX                            ; 004fc9b8
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc9b9
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc9be | g_CGamePtr
    ADD ESP,0xc                         ; 004fc9c3
    MOV ECX,dword ptr [EAX + 0x90]      ; 004fc9c6 | g_CGameInstance.key_next_ammo
    PUSH ECX                            ; 004fc9cc
    PUSH 0x630240                       ; 004fc9cd | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004fc9d2
    PUSH EAX                            ; 004fc9d6
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc9d7
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc9dc | g_CGamePtr
    ADD ESP,0xc                         ; 004fc9e1
    MOV EBX,dword ptr [EAX + 0x94]      ; 004fc9e4 | DAT_02d81b30
    PUSH EBX                            ; 004fc9ea
    PUSH 0x63024c                       ; 004fc9eb | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004fc9f0
    PUSH EAX                            ; 004fc9f4
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fc9f5
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fc9fa | g_CGamePtr
    ADD ESP,0xc                         ; 004fc9ff
    MOV ESI,dword ptr [EAX + 0x98]      ; 004fca02 | g_CGameInstance.always_run
    PUSH ESI                            ; 004fca08
    PUSH 0x63025d                       ; 004fca09 | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004fca0e
    PUSH EAX                            ; 004fca12
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fca13
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fca18 | g_CGamePtr
    ADD ESP,0xc                         ; 004fca1d
    MOV EDI,dword ptr [EAX + 0x9c]      ; 004fca20 | DAT_02d81b38
    PUSH EDI                            ; 004fca26
    PUSH 0x630267                       ; 004fca27 | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004fca2c
    PUSH EAX                            ; 004fca30
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fca31
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fca36 | g_CGamePtr
    ADD ESP,0xc                         ; 004fca3b
    MOV EBP,dword ptr [EAX + 0xa0]      ; 004fca3e | DAT_02d81b3c
    PUSH EBP                            ; 004fca44
    PUSH 0x630279                       ; 004fca45 | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004fca4a
    PUSH EAX                            ; 004fca4e
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fca4f
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fca54 | g_CGamePtr
    ADD ESP,0xc                         ; 004fca59
    MOV EDX,dword ptr [EAX + 0xa4]      ; 004fca5c | g_CGameInstance.x_center
    PUSH EDX                            ; 004fca62
    PUSH 0x63028b                       ; 004fca63 | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004fca68
    PUSH EAX                            ; 004fca6c
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fca6d
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fca72 | g_CGamePtr
    ADD ESP,0xc                         ; 004fca77
    MOV ECX,dword ptr [EAX + 0xa8]      ; 004fca7a | DAT_02d81b44
    PUSH ECX                            ; 004fca80
    PUSH 0x630293                       ; 004fca81 | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004fca86
    PUSH EAX                            ; 004fca8a
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fca8b
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fca90 | g_CGamePtr
    ADD ESP,0xc                         ; 004fca95
    MOV EBX,dword ptr [EAX + 0xac]      ; 004fca98 | DAT_02d81b48
    PUSH EBX                            ; 004fca9e
    PUSH 0x63029b                       ; 004fca9f | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004fcaa4
    PUSH EAX                            ; 004fcaa8
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcaa9
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fcaae | g_CGamePtr
    ADD ESP,0xc                         ; 004fcab3
    MOV ESI,dword ptr [EAX + 0xb0]      ; 004fcab6 | DAT_02d81b4c
    PUSH ESI                            ; 004fcabc
    PUSH 0x6302a5                       ; 004fcabd | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004fcac2
    PUSH EAX                            ; 004fcac6
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcac7
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fcacc
    MOV EAX,[0x0067b654]                ; 004fcacf | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0xb4]      ; 004fcad4 | DAT_02d81b50
    PUSH EDI                            ; 004fcada
    PUSH 0x6302af                       ; 004fcadb | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004fcae0
    PUSH EAX                            ; 004fcae4
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcae5
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fcaea | g_CGamePtr
    ADD ESP,0xc                         ; 004fcaef
    MOV EBP,dword ptr [EAX + 0xb8]      ; 004fcaf2 | DAT_02d81b54
    PUSH EBP                            ; 004fcaf8
    PUSH 0x6302b9                       ; 004fcaf9 | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004fcafe
    PUSH EAX                            ; 004fcb02
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcb03
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fcb08 | g_CGamePtr
    ADD ESP,0xc                         ; 004fcb0d
    MOV EDX,dword ptr [EAX + 0xc4]      ; 004fcb10 | DAT_02d81b60
    PUSH EDX                            ; 004fcb16
    PUSH 0x6302c3                       ; 004fcb17 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004fcb1c
    PUSH EAX                            ; 004fcb20
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcb21
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fcb26 | g_CGamePtr
    ADD ESP,0xc                         ; 004fcb2b
    MOV ECX,dword ptr [EAX + 0xc8]      ; 004fcb2e | DAT_02d81b64
    PUSH ECX                            ; 004fcb34
    PUSH 0x6302cb                       ; 004fcb35 | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004fcb3a
    PUSH EAX                            ; 004fcb3e
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcb3f
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fcb44
    PUSH 0x67cd50                       ; 004fcb47 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004fcb4c
    PUSH EAX                            ; 004fcb50
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fcb51
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x0066e8e0]                ; 004fcb56 | g_CConsolePtr
    ADD ESP,0x8                         ; 004fcb5b
    MOV EBX,dword ptr [EAX]             ; 004fcb5e | g_ConsolePtr
    PUSH EBX                            ; 004fcb60
    PUSH 0x6302d9                       ; 004fcb61 | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fcb66
    PUSH EAX                            ; 004fcb6a
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcb6b
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fcb70 | g_CGamePtr
    ADD ESP,0xc                         ; 004fcb75
    MOV ESI,dword ptr [EAX + 0x214]     ; 004fcb78 | DAT_02d81cb0
    PUSH ESI                            ; 004fcb7e
    PUSH 0x6302e8                       ; 004fcb7f | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004fcb84
    PUSH EAX                            ; 004fcb88
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcb89
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fcb8e
    PUSH 0x67cd58                       ; 004fcb91 | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004fcb96
    PUSH EAX                            ; 004fcb9a
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fcb9b
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004fcba0
    MOV EAX,ESP                         ; 004fcba3
    PUSH EAX                            ; 004fcba5
    MOV EDI,dword ptr [0x0067d550]      ; 004fcba6 | g_CDemonMissionPtr
    PUSH EDI                            ; 004fcbac | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_writeIni_FUN_005375d0 ; 004fcbad
        ;   XREF to: 005375d0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_writeIni_FUN_005375d0(CDemonMission * this_ptr, CIniFile * ini_file)
    ADD ESP,0x8                         ; 004fcbb2
    MOV EAX,ESP                         ; 004fcbb5
    PUSH EAX                            ; 004fcbb7
    MOV EBP,dword ptr [0x006810c8]      ; 004fcbb8 | g_CDemonSetPtr
    PUSH EBP                            ; 004fcbbe | g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_writeIni_FUN_00584920 ; 004fcbbf
        ;   XREF to: 00584920 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_writeIni_FUN_00584920(CDemonSet * set, CIniFile * ini_file)
    ADD ESP,0x8                         ; 004fcbc4
    ADD ESP,0x200                       ; 004fcbc7
    POP EBP                             ; 004fcbcd
    POP EDI                             ; 004fcbce
    POP ESI                             ; 004fcbcf
    POP EBX                             ; 004fcbd0
    RET                                 ; 004fcbd1
    MOV EBP,dword ptr [EAX + 0x18]      ; 004fcbd2 | g_CGameInstance.nudity_flag
        ;   Label: LAB_004fcbd2
    PUSH EBP                            ; 004fcbd5
    PUSH 0x6300dd                       ; 004fcbd6 | = "nudityFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fcbdb
    PUSH EAX                            ; 004fcbdf
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcbe0
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fcbe5 | g_CGamePtr
    ADD ESP,0xc                         ; 004fcbea
    MOV EDX,dword ptr [EAX + 0x1c]      ; 004fcbed | DAT_02d81ab8
    PUSH EDX                            ; 004fcbf0
    PUSH 0x6300e8                       ; 004fcbf1 | = "foulLanguageFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fcbf6
    PUSH EAX                            ; 004fcbfa
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcbfb
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EAX,[0x0067b654]                ; 004fcc00 | g_CGamePtr
    ADD ESP,0xc                         ; 004fcc05
    MOV ECX,dword ptr [EAX + 0x24]      ; 004fcc08 | DAT_02d81ac0
    PUSH ECX                            ; 004fcc0b
    PUSH 0x6300f9                       ; 004fcc0c | = "shadowFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fcc11
    PUSH EAX                            ; 004fcc15
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 004fcc16
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 004fcc1b
    JMP 0x004fc676                      ; 004fcc1e
        ;   XREF to: 004fc676 (UNCONDITIONAL_JUMP)  ; LAB_004fc676

