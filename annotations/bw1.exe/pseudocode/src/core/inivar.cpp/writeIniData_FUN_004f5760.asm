; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inivar_cpp_writeIniData_FUN_004f5760(void)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
;
; XREF[2]:
;   core_main.c_FUN_00503a30 at 00503ab0
;   core_menu.cpp_FUN_0050c990 at 0050cb65
;
; Referenced Globals:
;   TerminatedCString s_gamePIXX_005e5c3c
;   TerminatedCString s_gamePIXY_005e5c45
;   TerminatedCString s_gameBPP_005e5c4e
;   TerminatedCString s_useDirect3D_005e5c56
;   TerminatedCString s_useAGPFlag_005e5c62
;   TerminatedCString s_rendererDLLPath_005e5c6d
;   TerminatedCString s_gamma_005e5c7d
;   TerminatedCString s_heroNumber_005e5c83
;   TerminatedCString s_haloMode_005e5c8e
;   TerminatedCString s_firstTimeFlag_005e5c97
;   TerminatedCString s_subtitleMode_005e5ca5
;   TerminatedCString s_bloodFlag_005e5cb2
;   TerminatedCString s_quimbyFlag_005e5cbc
;   TerminatedCString s_currentBoard_005e5cc7
;   TerminatedCString s_puzzleDifficultyMode_005e5cd4
;   ... and 119 more
;
; Called Functions:
;   engine_ini.cpp_CIniFile_dtor_FUN_004f4b30
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0
;   engine_ini.cpp_CIniFile_setString_FUN_004f4c90
;   engine_ini.cpp_FUN_004f4b00
;   engine_ini.cpp_FUN_004f4d70
;   sound_sndmain.cpp_writeIni_FUN_005763b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5760
        ;   Label: core_inivar.cpp_writeIniData_FUN_004f5760
    PUSH ESI                            ; 004f5761
    PUSH EDI                            ; 004f5762
    PUSH EBP                            ; 004f5763
    SUB ESP,0x204                       ; 004f5764
    PUSH 0x0                            ; 004f576a
    PUSH 0x61f010                       ; 004f576c | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x8]                 ; 004f5771
    PUSH EAX                            ; 004f5775
    CALL engine_ini.cpp_FUN_004f4b00    ; 004f5776
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    ADD ESP,0xc                         ; 004f577b
    PUSH 0x61f038                       ; 004f577e | = "Graphics"
    LEA EAX,[ESP + 0x4]                 ; 004f5783
    PUSH EAX                            ; 004f5787
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f5788
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x0061d95c]                ; 004f578d | g_CGamePtr
    ADD ESP,0x8                         ; 004f5792
    MOV EDX,dword ptr [EAX]             ; 004f5795 | g_CGameInstance
    PUSH EDX                            ; 004f5797
    PUSH 0x5e5c3c                       ; 004f5798 | = "gamePIXX"
    LEA EAX,[ESP + 0x8]                 ; 004f579d
    PUSH EAX                            ; 004f57a1
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f57a2
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f57a7 | g_CGamePtr
    ADD ESP,0xc                         ; 004f57ac
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f57af | g_CGameInstance.game_pixy
    PUSH ECX                            ; 004f57b2
    PUSH 0x5e5c45                       ; 004f57b3 | = "gamePIXY"
    LEA EAX,[ESP + 0x8]                 ; 004f57b8
    PUSH EAX                            ; 004f57bc
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f57bd
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f57c2 | g_CGamePtr
    ADD ESP,0xc                         ; 004f57c7
    MOV EBX,dword ptr [EAX + 0x8]       ; 004f57ca | g_CGameInstance.game_bpp
    PUSH EBX                            ; 004f57cd
    PUSH 0x5e5c4e                       ; 004f57ce | = "gameBPP"
    LEA EAX,[ESP + 0x8]                 ; 004f57d3
    PUSH EAX                            ; 004f57d7
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f57d8
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f57dd
    MOV ESI,dword ptr [0x02c83370]      ; 004f57e0 | DAT_02c83370
    PUSH ESI                            ; 004f57e6
    PUSH 0x5e5c56                       ; 004f57e7 | = "useDirect3D"
    LEA EAX,[ESP + 0x8]                 ; 004f57ec
    PUSH EAX                            ; 004f57f0
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f57f1
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f57f6
    MOV EDI,dword ptr [0x02c8337c]      ; 004f57f9 | DAT_02c8337c
    PUSH EDI                            ; 004f57ff
    PUSH 0x5e5c62                       ; 004f5800 | = "useAGPFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f5805
    PUSH EAX                            ; 004f5809
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f580a
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f580f
    PUSH 0x6257d0                       ; 004f5812 | DAT_006257d0
    PUSH 0x5e5c6d                       ; 004f5817 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x8]                 ; 004f581c
    PUSH EAX                            ; 004f5820
    CALL engine_ini.cpp_CIniFile_setString_FUN_004f4c90 ; 004f5821
        ;   XREF to: 004f4c90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004f4c90(CIniFile * this_ptr, char * key, char * value)
    MOV EAX,[0x0061d95c]                ; 004f5826 | g_CGamePtr
    ADD ESP,0xc                         ; 004f582b
    MOV EBP,dword ptr [EAX + 0x240]     ; 004f582e | g_CGameInstance.field528_0x240
    PUSH EBP                            ; 004f5834
    PUSH 0x5e5c7d                       ; 004f5835 | = "gamma"
    LEA EAX,[ESP + 0x8]                 ; 004f583a
    PUSH EAX                            ; 004f583e
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f583f
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5844 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5849
    MOV EDX,dword ptr [EAX + 0xd4]      ; 004f584c | g_CGameInstance.field164_0xd4
    PUSH EDX                            ; 004f5852
    PUSH 0x5e5c83                       ; 004f5853 | = "heroNumber"
    LEA EAX,[ESP + 0x8]                 ; 004f5858
    PUSH EAX                            ; 004f585c
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f585d
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f5862
    MOV EAX,[0x0061d95c]                ; 004f5865 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xc]       ; 004f586a | g_CGameInstance.field3_0xc
    PUSH ECX                            ; 004f586d
    PUSH 0x5e5c8e                       ; 004f586e | = "haloMode"
    LEA EAX,[ESP + 0x8]                 ; 004f5873
    PUSH EAX                            ; 004f5877
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5878
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f587d
    MOV EBX,dword ptr [0x01d06d68]      ; 004f5880 | DAT_01d06d68
    PUSH EBX                            ; 004f5886
    PUSH 0x5e5c97                       ; 004f5887 | = "firstTimeFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f588c
    PUSH EAX                            ; 004f5890
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5891
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5896 | g_CGamePtr
    ADD ESP,0xc                         ; 004f589b
    MOV ESI,dword ptr [EAX + 0x10]      ; 004f589e | g_CGameInstance.field7_0x10
    PUSH ESI                            ; 004f58a1
    PUSH 0x5e5ca5                       ; 004f58a2 | = "subtitleMode"
    LEA EAX,[ESP + 0x8]                 ; 004f58a7
    PUSH EAX                            ; 004f58ab
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f58ac
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f58b1 | g_CGamePtr
    ADD ESP,0xc                         ; 004f58b6
    MOV EDI,dword ptr [EAX + 0x14]      ; 004f58b9 | g_CGameInstance.field11_0x14
    PUSH EDI                            ; 004f58bc
    PUSH 0x5e5cb2                       ; 004f58bd | = "bloodFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f58c2
    PUSH EAX                            ; 004f58c6
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f58c7
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f58cc | g_CGamePtr
    ADD ESP,0xc                         ; 004f58d1
    MOV EBP,dword ptr [EAX + 0x20]      ; 004f58d4 | g_CGameInstance.field23_0x20
    PUSH EBP                            ; 004f58d7
    PUSH 0x5e5cbc                       ; 004f58d8 | = "quimbyFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f58dd
    PUSH EAX                            ; 004f58e1
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f58e2
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f58e7
    MOV EAX,[0x01d1f5d4]                ; 004f58ea | DAT_01d1f5d4
    PUSH EAX                            ; 004f58ef
    PUSH 0x5e5cc7                       ; 004f58f0 | = "currentBoard"
    LEA EAX,[ESP + 0x8]                 ; 004f58f5
    PUSH EAX                            ; 004f58f9
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f58fa
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f58ff | g_CGamePtr
    ADD ESP,0xc                         ; 004f5904
    MOV EDX,dword ptr [EAX + 0xe4]      ; 004f5907 | g_CGameInstance.field180_0xe4
    PUSH EDX                            ; 004f590d
    PUSH 0x5e5cd4                       ; 004f590e | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004f5913
    PUSH EAX                            ; 004f5917
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5918
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f591d | g_CGamePtr
    ADD ESP,0xc                         ; 004f5922
    MOV ECX,dword ptr [EAX + 0xe8]      ; 004f5925 | g_CGameInstance.field184_0xe8
    PUSH ECX                            ; 004f592b
    PUSH 0x5e5ce9                       ; 004f592c | = "combatDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004f5931
    PUSH EAX                            ; 004f5935
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5936
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f593b
    PUSH 0x61f030                       ; 004f593e | = "Sound"
    LEA EAX,[ESP + 0x4]                 ; 004f5943
    PUSH EAX                            ; 004f5947
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f5948
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f594d
    MOV EAX,ESP                         ; 004f5950
    PUSH EAX                            ; 004f5952
    CALL sound_sndmain.cpp_writeIni_FUN_005763b0 ; 004f5953
        ;   XREF to: 005763b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_writeIni_FUN_005763b0(CIniFile * ini_file)
    ADD ESP,0x4                         ; 004f5958
    PUSH 0x61f048                       ; 004f595b | = "Control"
    LEA EAX,[ESP + 0x4]                 ; 004f5960
    PUSH EAX                            ; 004f5964
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f5965
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f596a
    MOV EAX,[0x0061d95c]                ; 004f596d | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0xd0]      ; 004f5972 | g_CGameInstance.field160_0xd0
    PUSH EBX                            ; 004f5978
    PUSH 0x5e5cfe                       ; 004f5979 | = "gameControl"
    LEA EAX,[ESP + 0x8]                 ; 004f597e
    PUSH EAX                            ; 004f5982
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5983
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5988 | g_CGamePtr
    ADD ESP,0xc                         ; 004f598d
    MOV ESI,dword ptr [EAX + 0x28]      ; 004f5990 | g_CGameInstance.shadow_flag
    PUSH ESI                            ; 004f5993
    PUSH 0x5e5d0a                       ; 004f5994 | = "keyWalk"
    LEA EAX,[ESP + 0x8]                 ; 004f5999
    PUSH EAX                            ; 004f599d
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f599e
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f59a3 | g_CGamePtr
    ADD ESP,0xc                         ; 004f59a8
    MOV EDI,dword ptr [EAX + 0x2c]      ; 004f59ab | g_CGameInstance.key_walk
    PUSH EDI                            ; 004f59ae
    PUSH 0x5e5d12                       ; 004f59af | = "keyBackup"
    LEA EAX,[ESP + 0x8]                 ; 004f59b4
    PUSH EAX                            ; 004f59b8
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f59b9
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f59be | g_CGamePtr
    ADD ESP,0xc                         ; 004f59c3
    MOV EBP,dword ptr [EAX + 0x30]      ; 004f59c6 | g_CGameInstance.field30_0x30
    PUSH EBP                            ; 004f59c9
    PUSH 0x5e5d1c                       ; 004f59ca | = "keyRun"
    LEA EAX,[ESP + 0x8]                 ; 004f59cf
    PUSH EAX                            ; 004f59d3
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f59d4
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f59d9 | g_CGamePtr
    ADD ESP,0xc                         ; 004f59de
    MOV EDX,dword ptr [EAX + 0x34]      ; 004f59e1 | g_CGameInstance.field34_0x34
    PUSH EDX                            ; 004f59e4
    PUSH 0x5e5d23                       ; 004f59e5 | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004f59ea
    PUSH EAX                            ; 004f59ee
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f59ef
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f59f4 | g_CGamePtr
    ADD ESP,0xc                         ; 004f59f9
    MOV ECX,dword ptr [EAX + 0x38]      ; 004f59fc | g_CGameInstance.field38_0x38
    PUSH ECX                            ; 004f59ff
    PUSH 0x5e5d2d                       ; 004f5a00 | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004f5a05
    PUSH EAX                            ; 004f5a09
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5a0a
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5a0f | g_CGamePtr
    ADD ESP,0xc                         ; 004f5a14
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004f5a17 | g_CGameInstance.field42_0x3c
    PUSH EBX                            ; 004f5a1a
    PUSH 0x5e5d3b                       ; 004f5a1b | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004f5a20
    PUSH EAX                            ; 004f5a24
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5a25
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5a2a | g_CGamePtr
    ADD ESP,0xc                         ; 004f5a2f
    MOV ESI,dword ptr [EAX + 0x40]      ; 004f5a32 | g_CGameInstance.field46_0x40
    PUSH ESI                            ; 004f5a35
    PUSH 0x5e5d4a                       ; 004f5a36 | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004f5a3b
    PUSH EAX                            ; 004f5a3f
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5a40
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5a45 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5a4a
    MOV EDI,dword ptr [EAX + 0x44]      ; 004f5a4d | g_CGameInstance.field50_0x44
    PUSH EDI                            ; 004f5a50
    PUSH 0x5e5d53                       ; 004f5a51 | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004f5a56
    PUSH EAX                            ; 004f5a5a
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5a5b
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5a60 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5a65
    MOV EBP,dword ptr [EAX + 0x48]      ; 004f5a68 | g_CGameInstance.field54_0x48
    PUSH EBP                            ; 004f5a6b
    PUSH 0x5e5d5b                       ; 004f5a6c | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004f5a71
    PUSH EAX                            ; 004f5a75
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5a76
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f5a7b
    MOV EAX,[0x0061d95c]                ; 004f5a7e | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x4c]      ; 004f5a83 | g_CGameInstance.field58_0x4c
    PUSH EDX                            ; 004f5a86
    PUSH 0x5e5d63                       ; 004f5a87 | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004f5a8c
    PUSH EAX                            ; 004f5a90
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5a91
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5a96 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5a9b
    MOV ECX,dword ptr [EAX + 0x50]      ; 004f5a9e | g_CGameInstance.field62_0x50
    PUSH ECX                            ; 004f5aa1
    PUSH 0x5e5d6e                       ; 004f5aa2 | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004f5aa7
    PUSH EAX                            ; 004f5aab
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5aac
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5ab1 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5ab6
    MOV EBX,dword ptr [EAX + 0x54]      ; 004f5ab9 | g_CGameInstance.field66_0x54
    PUSH EBX                            ; 004f5abc
    PUSH 0x5e5d77                       ; 004f5abd | = "keyInfrared"
    LEA EAX,[ESP + 0x8]                 ; 004f5ac2
    PUSH EAX                            ; 004f5ac6
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5ac7
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5acc | g_CGamePtr
    ADD ESP,0xc                         ; 004f5ad1
    MOV ESI,dword ptr [EAX + 0x58]      ; 004f5ad4 | g_CGameInstance.field70_0x58
    PUSH ESI                            ; 004f5ad7
    PUSH 0x5e5d83                       ; 004f5ad8 | = "keyFieldNotes"
    LEA EAX,[ESP + 0x8]                 ; 004f5add
    PUSH EAX                            ; 004f5ae1
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5ae2
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5ae7 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5aec
    MOV EDI,dword ptr [EAX + 0x5c]      ; 004f5aef | g_CGameInstance.field74_0x5c
    PUSH EDI                            ; 004f5af2
    PUSH 0x5e5d91                       ; 004f5af3 | = "keyMap"
    LEA EAX,[ESP + 0x8]                 ; 004f5af8
    PUSH EAX                            ; 004f5afc
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5afd
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5b02 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5b07
    MOV EBP,dword ptr [EAX + 0x60]      ; 004f5b0a | g_CGameInstance.field78_0x60
    PUSH EBP                            ; 004f5b0d
    PUSH 0x5e5d98                       ; 004f5b0e | = "keyCompass"
    LEA EAX,[ESP + 0x8]                 ; 004f5b13
    PUSH EAX                            ; 004f5b17
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5b18
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5b1d | g_CGamePtr
    ADD ESP,0xc                         ; 004f5b22
    MOV EDX,dword ptr [EAX + 0x64]      ; 004f5b25 | g_CGameInstance.field82_0x64
    PUSH EDX                            ; 004f5b28
    PUSH 0x5e5da3                       ; 004f5b29 | = "keySPS"
    LEA EAX,[ESP + 0x8]                 ; 004f5b2e
    PUSH EAX                            ; 004f5b32
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5b33
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5b38 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5b3d
    MOV ECX,dword ptr [EAX + 0x68]      ; 004f5b40 | g_CGameInstance.field86_0x68
    PUSH ECX                            ; 004f5b43
    PUSH 0x5e5daa                       ; 004f5b44 | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004f5b49
    PUSH EAX                            ; 004f5b4d
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5b4e
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5b53 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5b58
    MOV EBX,dword ptr [EAX + 0x6c]      ; 004f5b5b | g_CGameInstance.field90_0x6c
    PUSH EBX                            ; 004f5b5e
    PUSH 0x5e5db2                       ; 004f5b5f | = "keyJump"
    LEA EAX,[ESP + 0x8]                 ; 004f5b64
    PUSH EAX                            ; 004f5b68
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5b69
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5b6e | g_CGamePtr
    ADD ESP,0xc                         ; 004f5b73
    MOV ESI,dword ptr [EAX + 0x70]      ; 004f5b76 | g_CGameInstance.field94_0x70
    PUSH ESI                            ; 004f5b79
    PUSH 0x5e5dba                       ; 004f5b7a | = "keyQuickTurn"
    LEA EAX,[ESP + 0x8]                 ; 004f5b7f
    PUSH EAX                            ; 004f5b83
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5b84
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f5b89
    MOV EAX,[0x0061d95c]                ; 004f5b8c | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x74]      ; 004f5b91 | g_CGameInstance.field98_0x74
    PUSH EDI                            ; 004f5b94
    PUSH 0x5e5dc7                       ; 004f5b95 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004f5b9a
    PUSH EAX                            ; 004f5b9e
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5b9f
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5ba4 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5ba9
    MOV EBP,dword ptr [EAX + 0x78]      ; 004f5bac | g_CGameInstance.field102_0x78
    PUSH EBP                            ; 004f5baf
    PUSH 0x5e5dd2                       ; 004f5bb0 | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004f5bb5
    PUSH EAX                            ; 004f5bb9
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5bba
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5bbf | g_CGamePtr
    ADD ESP,0xc                         ; 004f5bc4
    MOV EDX,dword ptr [EAX + 0x7c]      ; 004f5bc7 | g_CGameInstance.field106_0x7c
    PUSH EDX                            ; 004f5bca
    PUSH 0x5e5ddf                       ; 004f5bcb | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004f5bd0
    PUSH EAX                            ; 004f5bd4
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5bd5
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5bda | g_CGamePtr
    ADD ESP,0xc                         ; 004f5bdf
    MOV ECX,dword ptr [EAX + 0x80]      ; 004f5be2 | g_CGameInstance.field110_0x80
    PUSH ECX                            ; 004f5be8
    PUSH 0x5e5dea                       ; 004f5be9 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004f5bee
    PUSH EAX                            ; 004f5bf2
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5bf3
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5bf8 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5bfd
    MOV EBX,dword ptr [EAX + 0x84]      ; 004f5c00 | g_CGameInstance.field114_0x84
    PUSH EBX                            ; 004f5c06
    PUSH 0x5e5df5                       ; 004f5c07 | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004f5c0c
    PUSH EAX                            ; 004f5c10
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5c11
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5c16 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5c1b
    MOV ESI,dword ptr [EAX + 0x88]      ; 004f5c1e | g_CGameInstance.field118_0x88
    PUSH ESI                            ; 004f5c24
    PUSH 0x5e5e00                       ; 004f5c25 | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004f5c2a
    PUSH EAX                            ; 004f5c2e
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5c2f
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5c34 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5c39
    MOV EDI,dword ptr [EAX + 0x8c]      ; 004f5c3c | g_CGameInstance.field122_0x8c
    PUSH EDI                            ; 004f5c42
    PUSH 0x5e5e0b                       ; 004f5c43 | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004f5c48
    PUSH EAX                            ; 004f5c4c
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5c4d
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5c52 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5c57
    MOV EBP,dword ptr [EAX + 0x90]      ; 004f5c5a | g_CGameInstance.field126_0x90
    PUSH EBP                            ; 004f5c60
    PUSH 0x5e5e16                       ; 004f5c61 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004f5c66
    PUSH EAX                            ; 004f5c6a
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5c6b
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5c70 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5c75
    MOV EDX,dword ptr [EAX + 0x94]      ; 004f5c78 | g_CGameInstance.field130_0x94
    PUSH EDX                            ; 004f5c7e
    PUSH 0x5e5e24                       ; 004f5c7f | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004f5c84
    PUSH EAX                            ; 004f5c88
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5c89
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5c8e | g_CGamePtr
    ADD ESP,0xc                         ; 004f5c93
    MOV ECX,dword ptr [EAX + 0x98]      ; 004f5c96 | g_CGameInstance.field134_0x98
    PUSH ECX                            ; 004f5c9c
    PUSH 0x5e5e32                       ; 004f5c9d | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004f5ca2
    PUSH EAX                            ; 004f5ca6
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5ca7
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f5cac
    MOV EAX,[0x0061d95c]                ; 004f5caf | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x9c]      ; 004f5cb4 | g_CGameInstance.field138_0x9c
    PUSH EBX                            ; 004f5cba
    PUSH 0x5e5e3e                       ; 004f5cbb | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004f5cc0
    PUSH EAX                            ; 004f5cc4
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5cc5
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5cca | g_CGamePtr
    ADD ESP,0xc                         ; 004f5ccf
    MOV ESI,dword ptr [EAX + 0xa0]      ; 004f5cd2 | g_CGameInstance.field142_0xa0
    PUSH ESI                            ; 004f5cd8
    PUSH 0x5e5e4a                       ; 004f5cd9 | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004f5cde
    PUSH EAX                            ; 004f5ce2
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5ce3
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5ce8 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5ced
    MOV EDI,dword ptr [EAX + 0xa4]      ; 004f5cf0 | g_CGameInstance.field146_0xa4
    PUSH EDI                            ; 004f5cf6
    PUSH 0x5e5e56                       ; 004f5cf7 | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004f5cfc
    PUSH EAX                            ; 004f5d00
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5d01
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5d06 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5d0b
    MOV EBP,dword ptr [EAX + 0xa8]      ; 004f5d0e | g_CGameInstance.invert_mouse_y_axis
    PUSH EBP                            ; 004f5d14
    PUSH 0x5e5e62                       ; 004f5d15 | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004f5d1a
    PUSH EAX                            ; 004f5d1e
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5d1f
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5d24 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5d29
    MOV EDX,dword ptr [EAX + 0xac]      ; 004f5d2c | g_CGameInstance.always_run
    PUSH EDX                            ; 004f5d32
    PUSH 0x5e5e73                       ; 004f5d33 | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004f5d38
    PUSH EAX                            ; 004f5d3c
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5d3d
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5d42 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5d47
    MOV ECX,dword ptr [EAX + 0xb0]      ; 004f5d4a | g_CGameInstance.x_mouse_sensitivity
    PUSH ECX                            ; 004f5d50
    PUSH 0x5e5e7d                       ; 004f5d51 | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004f5d56
    PUSH EAX                            ; 004f5d5a
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5d5b
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5d60 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5d65
    MOV EBX,dword ptr [EAX + 0xb4]      ; 004f5d68 | g_CGameInstance.y_mouse_sensitivity
    PUSH EBX                            ; 004f5d6e
    PUSH 0x5e5e8f                       ; 004f5d6f | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004f5d74
    PUSH EAX                            ; 004f5d78
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5d79
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5d7e | g_CGamePtr
    ADD ESP,0xc                         ; 004f5d83
    MOV ESI,dword ptr [EAX + 0xb8]      ; 004f5d86 | g_CGameInstance.x_center
    PUSH ESI                            ; 004f5d8c
    PUSH 0x5e5ea1                       ; 004f5d8d | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004f5d92
    PUSH EAX                            ; 004f5d96
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5d97
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5d9c | g_CGamePtr
    ADD ESP,0xc                         ; 004f5da1
    MOV EDI,dword ptr [EAX + 0xbc]      ; 004f5da4 | g_CGameInstance.y_center
    PUSH EDI                            ; 004f5daa
    PUSH 0x5e5ea9                       ; 004f5dab | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004f5db0
    PUSH EAX                            ; 004f5db4
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5db5
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5dba | g_CGamePtr
    ADD ESP,0xc                         ; 004f5dbf
    MOV EBP,dword ptr [EAX + 0xc0]      ; 004f5dc2 | g_CGameInstance.x_stick_min
    PUSH EBP                            ; 004f5dc8
    PUSH 0x5e5eb1                       ; 004f5dc9 | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004f5dce
    PUSH EAX                            ; 004f5dd2
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5dd3
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f5dd8
    MOV EAX,[0x0061d95c]                ; 004f5ddb | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0xc4]      ; 004f5de0 | g_CGameInstance.x_stick_max
    PUSH EDX                            ; 004f5de6
    PUSH 0x5e5ebb                       ; 004f5de7 | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004f5dec
    PUSH EAX                            ; 004f5df0
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5df1
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5df6 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5dfb
    MOV ECX,dword ptr [EAX + 0xc8]      ; 004f5dfe | g_CGameInstance.y_stick_min
    PUSH ECX                            ; 004f5e04
    PUSH 0x5e5ec5                       ; 004f5e05 | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004f5e0a
    PUSH EAX                            ; 004f5e0e
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5e0f
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5e14 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5e19
    MOV EBX,dword ptr [EAX + 0xcc]      ; 004f5e1c | g_CGameInstance.y_stick_max
    PUSH EBX                            ; 004f5e22
    PUSH 0x5e5ecf                       ; 004f5e23 | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004f5e28
    PUSH EAX                            ; 004f5e2c
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5e2d
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5e32 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5e37
    MOV ESI,dword ptr [EAX + 0xd8]      ; 004f5e3a | g_CGameInstance.field168_0xd8
    PUSH ESI                            ; 004f5e40
    PUSH 0x5e5ed9                       ; 004f5e41 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004f5e46
    PUSH EAX                            ; 004f5e4a
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5e4b
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5e50 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5e55
    MOV EDI,dword ptr [EAX + 0xdc]      ; 004f5e58 | g_CGameInstance.field172_0xdc
    PUSH EDI                            ; 004f5e5e
    PUSH 0x5e5ee1                       ; 004f5e5f | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004f5e64
    PUSH EAX                            ; 004f5e68
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5e69
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f5e6e
    PUSH 0x61f080                       ; 004f5e71 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004f5e76
    PUSH EAX                            ; 004f5e7a
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f5e7b
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x00611100]                ; 004f5e80 | g_CConsolePtr
    ADD ESP,0x8                         ; 004f5e85
    MOV EBP,dword ptr [EAX]             ; 004f5e88 | g_CConsoleInstance
    PUSH EBP                            ; 004f5e8a
    PUSH 0x5e5eef                       ; 004f5e8b | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f5e90
    PUSH EAX                            ; 004f5e94
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5e95
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EAX,[0x0061d95c]                ; 004f5e9a | g_CGamePtr
    ADD ESP,0xc                         ; 004f5e9f
    MOV EDX,dword ptr [EAX + 0x230]     ; 004f5ea2 | g_CGameInstance.field512_0x230
    PUSH EDX                            ; 004f5ea8
    PUSH 0x5e5efe                       ; 004f5ea9 | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004f5eae
    PUSH EAX                            ; 004f5eb2
    CALL engine_ini.cpp_FUN_004f4d70    ; 004f5eb3
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 004f5eb8
    PUSH 0x61f088                       ; 004f5ebb | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004f5ec0
    PUSH EAX                            ; 004f5ec4
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f5ec5
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f5eca
    PUSH 0x0                            ; 004f5ecd
    LEA EAX,[ESP + 0x4]                 ; 004f5ecf
    PUSH EAX                            ; 004f5ed3
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 004f5ed4
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f5ed9
    ADD ESP,0x204                       ; 004f5edc
    POP EBP                             ; 004f5ee2
    POP EDI                             ; 004f5ee3
    POP ESI                             ; 004f5ee4
    POP EBX                             ; 004f5ee5
    RET                                 ; 004f5ee6

