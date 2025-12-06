; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_game.cpp_CGame_resetKeyState_FUN_004dbe60()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_game.cpp_CGame_openSomething_FUN_004e2910 at 004e2ef3
;   core_game.cpp_CallToJoystickStuff_FUN_004dc230 at 004dc236
;   core_menu.cpp_calibrateGamepad_FUN_005104d0 at 005105a8
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 00514ac4
;   core_menu.cpp_getSinglePressedKey_FUN_00513860 at 00513896
;
; Referenced Globals:
;   CKeys* g_CKeysPtr = 02dcd7d4
;   DWORD g_JoyXPos
;   DWORD g_JoyYPos
;   DWORD g_JoyButtons
;   undefined4 g_JoyButtons+1
;   int g_JoystickPresent
;   void* g_CKeysPtr
;
; Called Functions:
;   engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
;   engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
;   wincore_winrun.cpp_getJoystickState_FUN_005f43a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbe60
        ;   Label: core_game.cpp_CGame_resetKeyState_FUN_004dbe60
    PUSH ESI                            ; 004dbe61
    PUSH EDI                            ; 004dbe62
    PUSH EBP                            ; 004dbe63
    SUB ESP,0x4                         ; 004dbe64
    MOV EBX,dword ptr [ESP + 0x18]      ; 004dbe67
    MOV EAX,[0x02d05208]                ; 004dbe6b | DWORD g_JoyButtons
    MOV EDX,0x2                         ; 004dbe70
    MOV dword ptr [ESP],EAX             ; 004dbe75
    MOV dword ptr [0x02d0520c],EDX      ; 004dbe78 | int g_JoystickPresent
    CALL wincore_winrun.cpp_getJoystickState_FUN_005f43a0 ; 004dbe7e | void wincore_winrun.cpp_getJoystickState_FUN_005f43a0()
        ;   XREF to: 005f43a0 (UNCONDITIONAL_CALL)
    TEST byte ptr [0x02d05208],0x1      ; 004dbe83 | DWORD g_JoyButtons
    JZ 0x004dc139                       ; 004dbe8a | LAB_004dc139
        ;   XREF to: 004dc139 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x1             ; 004dbe90
    JNZ 0x004dbeaa                      ; 004dbe94 | LAB_004dbeaa
        ;   XREF to: 004dbeaa (CONDITIONAL_JUMP)
    PUSH 0x202                          ; 004dbe96
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbe9b | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dbea1 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbea2 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbea7
        ;   Label: LAB_004dbea7
    TEST byte ptr [0x02d05208],0x2      ; 004dbeaa | DWORD g_JoyButtons
        ;   Label: LAB_004dbeaa
    JZ 0x004dc14f                       ; 004dbeb1 | LAB_004dc14f
        ;   XREF to: 004dc14f (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x2             ; 004dbeb7
    JNZ 0x004dbed1                      ; 004dbebb | LAB_004dbed1
        ;   XREF to: 004dbed1 (CONDITIONAL_JUMP)
    PUSH 0x203                          ; 004dbebd
    MOV EBP,dword ptr [0x0067cf44]      ; 004dbec2 | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dbec8 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbec9 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbece
        ;   Label: LAB_004dbece
    TEST byte ptr [0x02d05208],0x4      ; 004dbed1 | DWORD g_JoyButtons
        ;   Label: LAB_004dbed1
    JZ 0x004dc165                       ; 004dbed8 | LAB_004dc165
        ;   XREF to: 004dc165 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x4             ; 004dbede
    JNZ 0x004dbef8                      ; 004dbee2 | LAB_004dbef8
        ;   XREF to: 004dbef8 (CONDITIONAL_JUMP)
    PUSH 0x204                          ; 004dbee4
    MOV EDX,dword ptr [0x0067cf44]      ; 004dbee9 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EDX                            ; 004dbeef | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbef0 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbef5
        ;   Label: LAB_004dbef5
    TEST byte ptr [0x02d05208],0x8      ; 004dbef8 | DWORD g_JoyButtons
        ;   Label: LAB_004dbef8
    JZ 0x004dc17a                       ; 004dbeff | LAB_004dc17a
        ;   XREF to: 004dc17a (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x8             ; 004dbf05
    JNZ 0x004dbf1f                      ; 004dbf09 | LAB_004dbf1f
        ;   XREF to: 004dbf1f (CONDITIONAL_JUMP)
    PUSH 0x205                          ; 004dbf0b
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbf10 | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dbf16 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf17 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbf1c
        ;   Label: LAB_004dbf1c
    TEST byte ptr [0x02d05208],0x10     ; 004dbf1f | DWORD g_JoyButtons
        ;   Label: LAB_004dbf1f
    JZ 0x004dc190                       ; 004dbf26 | LAB_004dc190
        ;   XREF to: 004dc190 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x10            ; 004dbf2c
    JNZ 0x004dbf46                      ; 004dbf30 | LAB_004dbf46
        ;   XREF to: 004dbf46 (CONDITIONAL_JUMP)
    PUSH 0x206                          ; 004dbf32
    MOV EBP,dword ptr [0x0067cf44]      ; 004dbf37 | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dbf3d | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf3e | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbf43
        ;   Label: LAB_004dbf43
    TEST byte ptr [0x02d05208],0x20     ; 004dbf46 | DWORD g_JoyButtons
        ;   Label: LAB_004dbf46
    JZ 0x004dc1a6                       ; 004dbf4d | LAB_004dc1a6
        ;   XREF to: 004dc1a6 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x20            ; 004dbf53
    JNZ 0x004dbf6d                      ; 004dbf57 | LAB_004dbf6d
        ;   XREF to: 004dbf6d (CONDITIONAL_JUMP)
    PUSH 0x207                          ; 004dbf59
    MOV EDX,dword ptr [0x0067cf44]      ; 004dbf5e | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EDX                            ; 004dbf64 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf65 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbf6a
        ;   Label: LAB_004dbf6a
    TEST byte ptr [0x02d05208],0x40     ; 004dbf6d | DWORD g_JoyButtons
        ;   Label: LAB_004dbf6d
    JZ 0x004dc1bb                       ; 004dbf74 | LAB_004dc1bb
        ;   XREF to: 004dc1bb (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x40            ; 004dbf7a
    JNZ 0x004dbf94                      ; 004dbf7e | LAB_004dbf94
        ;   XREF to: 004dbf94 (CONDITIONAL_JUMP)
    PUSH 0x208                          ; 004dbf80
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbf85 | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dbf8b | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf8c | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbf91
        ;   Label: LAB_004dbf91
    TEST byte ptr [0x02d05208],0x80     ; 004dbf94 | DWORD g_JoyButtons
        ;   Label: LAB_004dbf94
    JZ 0x004dc1d1                       ; 004dbf9b | LAB_004dc1d1
        ;   XREF to: 004dc1d1 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP],0x80            ; 004dbfa1
    JNZ 0x004dbfbb                      ; 004dbfa5 | LAB_004dbfbb
        ;   XREF to: 004dbfbb (CONDITIONAL_JUMP)
    PUSH 0x209                          ; 004dbfa7
    MOV EBP,dword ptr [0x0067cf44]      ; 004dbfac | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dbfb2 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbfb3 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbfb8
        ;   Label: LAB_004dbfb8
    TEST byte ptr [0x02d05209],0x1      ; 004dbfbb | g_JoyButtons+1
        ;   Label: LAB_004dbfbb
    JZ 0x004dc1e7                       ; 004dbfc2 | LAB_004dc1e7
        ;   XREF to: 004dc1e7 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x1],0x1       ; 004dbfc8
    JNZ 0x004dbfe3                      ; 004dbfcd | LAB_004dbfe3
        ;   XREF to: 004dbfe3 (CONDITIONAL_JUMP)
    PUSH 0x20a                          ; 004dbfcf
    MOV EDX,dword ptr [0x0067cf44]      ; 004dbfd4 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EDX                            ; 004dbfda | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbfdb | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbfe0
        ;   Label: LAB_004dbfe0
    TEST byte ptr [0x02d05209],0x2      ; 004dbfe3 | g_JoyButtons+1
        ;   Label: LAB_004dbfe3
    JZ 0x004dc1fc                       ; 004dbfea | LAB_004dc1fc
        ;   XREF to: 004dc1fc (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x1],0x2       ; 004dbff0
    JNZ 0x004dc00b                      ; 004dbff5 | LAB_004dc00b
        ;   XREF to: 004dc00b (CONDITIONAL_JUMP)
    PUSH 0x20b                          ; 004dbff7
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbffc | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dc002 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc003 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc008
        ;   Label: LAB_004dc008
    PUSH 0x251                          ; 004dc00b
        ;   Label: LAB_004dc00b
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc010 | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc016 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc017 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc01c
    PUSH 0x252                          ; 004dc01f
    MOV EBP,dword ptr [0x0067cf44]      ; 004dc024 | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dc02a | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc02b | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc030
    PUSH 0x253                          ; 004dc033
    MOV EAX,[0x0067cf44]                ; 004dc038 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004dc03d | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc03e | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc043
    PUSH 0x254                          ; 004dc046
    MOV EDX,dword ptr [0x0067cf44]      ; 004dc04b | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EDX                            ; 004dc051 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc052 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0xa4]      ; 004dc057
    MOV ECX,dword ptr [EBX + 0xac]      ; 004dc05d
    SUB EDX,ECX                         ; 004dc063
    MOV EAX,EDX                         ; 004dc065
    SAR EDX,0x1f                        ; 004dc067
    SUB EAX,EDX                         ; 004dc06a
    SAR EAX,0x1                         ; 004dc06c
    MOV EDX,dword ptr [EBX + 0xa4]      ; 004dc06e
    MOV ESI,dword ptr [0x02d051f8]      ; 004dc074 | DWORD g_JoyXPos
    SUB EDX,EAX                         ; 004dc07a
    ADD ESP,0x8                         ; 004dc07c
    CMP EDX,ESI                         ; 004dc07f
    JLE 0x004dc097                      ; 004dc081 | LAB_004dc097
        ;   XREF to: 004dc097 (CONDITIONAL_JUMP)
    PUSH 0x251                          ; 004dc083
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc088 | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc08e | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc08f | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc094
    MOV EBP,dword ptr [EBX + 0xa4]      ; 004dc097
        ;   Label: LAB_004dc097
    MOV EDX,dword ptr [EBX + 0xb0]      ; 004dc09d
    SUB EDX,EBP                         ; 004dc0a3
    MOV EAX,EDX                         ; 004dc0a5
    SAR EDX,0x1f                        ; 004dc0a7
    SUB EAX,EDX                         ; 004dc0aa
    SAR EAX,0x1                         ; 004dc0ac
    MOV ECX,dword ptr [0x02d051f8]      ; 004dc0ae | DWORD g_JoyXPos
    ADD EAX,EBP                         ; 004dc0b4
    CMP EAX,ECX                         ; 004dc0b6
    JGE 0x004dc0ce                      ; 004dc0b8 | LAB_004dc0ce
        ;   XREF to: 004dc0ce (CONDITIONAL_JUMP)
    PUSH 0x252                          ; 004dc0ba
    MOV ESI,dword ptr [0x0067cf44]      ; 004dc0bf | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dc0c5 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc0c6 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc0cb
    MOV EDI,dword ptr [EBX + 0xb4]      ; 004dc0ce
        ;   Label: LAB_004dc0ce
    MOV EDX,dword ptr [EBX + 0xa8]      ; 004dc0d4
    SUB EDX,EDI                         ; 004dc0da
    MOV EAX,EDX                         ; 004dc0dc
    SAR EDX,0x1f                        ; 004dc0de
    SUB EAX,EDX                         ; 004dc0e1
    SAR EAX,0x1                         ; 004dc0e3
    MOV EDX,dword ptr [EBX + 0xa8]      ; 004dc0e5
    MOV EBP,dword ptr [0x02d051fc]      ; 004dc0eb | DWORD g_JoyYPos
    SUB EDX,EAX                         ; 004dc0f1
    CMP EDX,EBP                         ; 004dc0f3
    JLE 0x004dc10a                      ; 004dc0f5 | LAB_004dc10a
        ;   XREF to: 004dc10a (CONDITIONAL_JUMP)
    PUSH 0x253                          ; 004dc0f7
    MOV EAX,[0x0067cf44]                ; 004dc0fc | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004dc101 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc102 | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc107
    MOV ECX,dword ptr [EBX + 0xa8]      ; 004dc10a
        ;   Label: LAB_004dc10a
    MOV EDX,dword ptr [EBX + 0xb8]      ; 004dc110
    SUB EDX,ECX                         ; 004dc116
    MOV EAX,EDX                         ; 004dc118
    SAR EDX,0x1f                        ; 004dc11a
    SUB EAX,EDX                         ; 004dc11d
    SAR EAX,0x1                         ; 004dc11f
    MOV EDI,dword ptr [0x02d051fc]      ; 004dc121 | DWORD g_JoyYPos
    ADD EAX,ECX                         ; 004dc127
    CMP EAX,EDI                         ; 004dc129
    JL 0x004dc212                       ; 004dc12b | LAB_004dc212
        ;   XREF to: 004dc212 (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 004dc131
    POP EBP                             ; 004dc134
    POP EDI                             ; 004dc135
    POP ESI                             ; 004dc136
    POP EBX                             ; 004dc137
    RET                                 ; 004dc138
    PUSH 0x202                          ; 004dc139
        ;   Label: LAB_004dc139
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc13e | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004dc144 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc145 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbea7                      ; 004dc14a | LAB_004dbea7
        ;   XREF to: 004dbea7 (UNCONDITIONAL_JUMP)
    PUSH 0x203                          ; 004dc14f
        ;   Label: LAB_004dc14f
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc154 | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc15a | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc15b | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbece                      ; 004dc160 | LAB_004dbece
        ;   XREF to: 004dbece (UNCONDITIONAL_JUMP)
    PUSH 0x204                          ; 004dc165
        ;   Label: LAB_004dc165
    MOV EAX,[0x0067cf44]                ; 004dc16a | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004dc16f | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc170 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbef5                      ; 004dc175 | LAB_004dbef5
        ;   XREF to: 004dbef5 (UNCONDITIONAL_JUMP)
    PUSH 0x205                          ; 004dc17a
        ;   Label: LAB_004dc17a
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc17f | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004dc185 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc186 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbf1c                      ; 004dc18b | LAB_004dbf1c
        ;   XREF to: 004dbf1c (UNCONDITIONAL_JUMP)
    PUSH 0x206                          ; 004dc190
        ;   Label: LAB_004dc190
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc195 | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc19b | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc19c | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbf43                      ; 004dc1a1 | LAB_004dbf43
        ;   XREF to: 004dbf43 (UNCONDITIONAL_JUMP)
    PUSH 0x207                          ; 004dc1a6
        ;   Label: LAB_004dc1a6
    MOV EAX,[0x0067cf44]                ; 004dc1ab | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004dc1b0 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1b1 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbf6a                      ; 004dc1b6 | LAB_004dbf6a
        ;   XREF to: 004dbf6a (UNCONDITIONAL_JUMP)
    PUSH 0x208                          ; 004dc1bb
        ;   Label: LAB_004dc1bb
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc1c0 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004dc1c6 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1c7 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbf91                      ; 004dc1cc | LAB_004dbf91
        ;   XREF to: 004dbf91 (UNCONDITIONAL_JUMP)
    PUSH 0x209                          ; 004dc1d1
        ;   Label: LAB_004dc1d1
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc1d6 | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc1dc | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1dd | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbfb8                      ; 004dc1e2 | LAB_004dbfb8
        ;   XREF to: 004dbfb8 (UNCONDITIONAL_JUMP)
    PUSH 0x20a                          ; 004dc1e7
        ;   Label: LAB_004dc1e7
    MOV EAX,[0x0067cf44]                ; 004dc1ec | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004dc1f1 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1f2 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dbfe0                      ; 004dc1f7 | LAB_004dbfe0
        ;   XREF to: 004dbfe0 (UNCONDITIONAL_JUMP)
    PUSH 0x20b                          ; 004dc1fc
        ;   Label: LAB_004dc1fc
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc201 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004dc207 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc208 | void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)
    JMP 0x004dc008                      ; 004dc20d | LAB_004dc008
        ;   XREF to: 004dc008 (UNCONDITIONAL_JUMP)
    PUSH 0x254                          ; 004dc212
        ;   Label: LAB_004dc212
    MOV EBP,dword ptr [0x0067cf44]      ; 004dc217 | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dc21d | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc21e | void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc223
    ADD ESP,0x4                         ; 004dc226
    POP EBP                             ; 004dc229
    POP EDI                             ; 004dc22a
    POP ESI                             ; 004dc22b
    POP EBX                             ; 004dc22c
    RET                                 ; 004dc22d

