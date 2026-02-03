; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004dbe60(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_game.cpp_CGame_FUN_004dc230 at 004dc236
;   core_game.cpp_CGame_FUN_004e2910 at 004e2ef3
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
;   CKeys g_CKeysInstance
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
    MOV EAX,[0x02d05208]                ; 004dbe6b | g_JoyButtons
    MOV EDX,0x2                         ; 004dbe70
    MOV dword ptr [ESP],EAX             ; 004dbe75
    MOV dword ptr [0x02d0520c],EDX      ; 004dbe78 | g_JoystickPresent
    CALL wincore_winrun.cpp_getJoystickState_FUN_005f43a0 ; 004dbe7e
        ;   XREF to: 005f43a0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_getJoystickState_FUN_005f43a0()
    TEST byte ptr [0x02d05208],0x1      ; 004dbe83 | g_JoyButtons
    JZ 0x004dc139                       ; 004dbe8a
        ;   XREF to: 004dc139 (CONDITIONAL_JUMP)  ; LAB_004dc139
    TEST byte ptr [ESP],0x1             ; 004dbe90
    JNZ 0x004dbeaa                      ; 004dbe94
        ;   XREF to: 004dbeaa (CONDITIONAL_JUMP)  ; LAB_004dbeaa
    PUSH 0x202                          ; 004dbe96
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbe9b | g_CKeysPtr
    PUSH ESI                            ; 004dbea1 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbea2
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbea7
        ;   Label: LAB_004dbea7
    TEST byte ptr [0x02d05208],0x2      ; 004dbeaa | g_JoyButtons
        ;   Label: LAB_004dbeaa
    JZ 0x004dc14f                       ; 004dbeb1
        ;   XREF to: 004dc14f (CONDITIONAL_JUMP)  ; LAB_004dc14f
    TEST byte ptr [ESP],0x2             ; 004dbeb7
    JNZ 0x004dbed1                      ; 004dbebb
        ;   XREF to: 004dbed1 (CONDITIONAL_JUMP)  ; LAB_004dbed1
    PUSH 0x203                          ; 004dbebd
    MOV EBP,dword ptr [0x0067cf44]      ; 004dbec2 | g_CKeysPtr
    PUSH EBP                            ; 004dbec8 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbec9
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbece
        ;   Label: LAB_004dbece
    TEST byte ptr [0x02d05208],0x4      ; 004dbed1 | g_JoyButtons
        ;   Label: LAB_004dbed1
    JZ 0x004dc165                       ; 004dbed8
        ;   XREF to: 004dc165 (CONDITIONAL_JUMP)  ; LAB_004dc165
    TEST byte ptr [ESP],0x4             ; 004dbede
    JNZ 0x004dbef8                      ; 004dbee2
        ;   XREF to: 004dbef8 (CONDITIONAL_JUMP)  ; LAB_004dbef8
    PUSH 0x204                          ; 004dbee4
    MOV EDX,dword ptr [0x0067cf44]      ; 004dbee9 | g_CKeysInstance | g_CKeysPtr
    PUSH EDX                            ; 004dbeef | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbef0
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbef5
        ;   Label: LAB_004dbef5
    TEST byte ptr [0x02d05208],0x8      ; 004dbef8 | g_JoyButtons
        ;   Label: LAB_004dbef8
    JZ 0x004dc17a                       ; 004dbeff
        ;   XREF to: 004dc17a (CONDITIONAL_JUMP)  ; LAB_004dc17a
    TEST byte ptr [ESP],0x8             ; 004dbf05
    JNZ 0x004dbf1f                      ; 004dbf09
        ;   XREF to: 004dbf1f (CONDITIONAL_JUMP)  ; LAB_004dbf1f
    PUSH 0x205                          ; 004dbf0b
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbf10 | g_CKeysPtr
    PUSH ESI                            ; 004dbf16 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf17
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbf1c
        ;   Label: LAB_004dbf1c
    TEST byte ptr [0x02d05208],0x10     ; 004dbf1f | g_JoyButtons
        ;   Label: LAB_004dbf1f
    JZ 0x004dc190                       ; 004dbf26
        ;   XREF to: 004dc190 (CONDITIONAL_JUMP)  ; LAB_004dc190
    TEST byte ptr [ESP],0x10            ; 004dbf2c
    JNZ 0x004dbf46                      ; 004dbf30
        ;   XREF to: 004dbf46 (CONDITIONAL_JUMP)  ; LAB_004dbf46
    PUSH 0x206                          ; 004dbf32
    MOV EBP,dword ptr [0x0067cf44]      ; 004dbf37 | g_CKeysPtr
    PUSH EBP                            ; 004dbf3d | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf3e
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbf43
        ;   Label: LAB_004dbf43
    TEST byte ptr [0x02d05208],0x20     ; 004dbf46 | g_JoyButtons
        ;   Label: LAB_004dbf46
    JZ 0x004dc1a6                       ; 004dbf4d
        ;   XREF to: 004dc1a6 (CONDITIONAL_JUMP)  ; LAB_004dc1a6
    TEST byte ptr [ESP],0x20            ; 004dbf53
    JNZ 0x004dbf6d                      ; 004dbf57
        ;   XREF to: 004dbf6d (CONDITIONAL_JUMP)  ; LAB_004dbf6d
    PUSH 0x207                          ; 004dbf59
    MOV EDX,dword ptr [0x0067cf44]      ; 004dbf5e | g_CKeysInstance | g_CKeysPtr
    PUSH EDX                            ; 004dbf64 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf65
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbf6a
        ;   Label: LAB_004dbf6a
    TEST byte ptr [0x02d05208],0x40     ; 004dbf6d | g_JoyButtons
        ;   Label: LAB_004dbf6d
    JZ 0x004dc1bb                       ; 004dbf74
        ;   XREF to: 004dc1bb (CONDITIONAL_JUMP)  ; LAB_004dc1bb
    TEST byte ptr [ESP],0x40            ; 004dbf7a
    JNZ 0x004dbf94                      ; 004dbf7e
        ;   XREF to: 004dbf94 (CONDITIONAL_JUMP)  ; LAB_004dbf94
    PUSH 0x208                          ; 004dbf80
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbf85 | g_CKeysPtr
    PUSH ESI                            ; 004dbf8b | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbf8c
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbf91
        ;   Label: LAB_004dbf91
    TEST byte ptr [0x02d05208],0x80     ; 004dbf94 | g_JoyButtons
        ;   Label: LAB_004dbf94
    JZ 0x004dc1d1                       ; 004dbf9b
        ;   XREF to: 004dc1d1 (CONDITIONAL_JUMP)  ; LAB_004dc1d1
    TEST byte ptr [ESP],0x80            ; 004dbfa1
    JNZ 0x004dbfbb                      ; 004dbfa5
        ;   XREF to: 004dbfbb (CONDITIONAL_JUMP)  ; LAB_004dbfbb
    PUSH 0x209                          ; 004dbfa7
    MOV EBP,dword ptr [0x0067cf44]      ; 004dbfac | g_CKeysPtr
    PUSH EBP                            ; 004dbfb2 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbfb3
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbfb8
        ;   Label: LAB_004dbfb8
    TEST byte ptr [0x02d05209],0x1      ; 004dbfbb | g_JoyButtons+1
        ;   Label: LAB_004dbfbb
    JZ 0x004dc1e7                       ; 004dbfc2
        ;   XREF to: 004dc1e7 (CONDITIONAL_JUMP)  ; LAB_004dc1e7
    TEST byte ptr [ESP + 0x1],0x1       ; 004dbfc8
    JNZ 0x004dbfe3                      ; 004dbfcd
        ;   XREF to: 004dbfe3 (CONDITIONAL_JUMP)  ; LAB_004dbfe3
    PUSH 0x20a                          ; 004dbfcf
    MOV EDX,dword ptr [0x0067cf44]      ; 004dbfd4 | g_CKeysInstance | g_CKeysPtr
    PUSH EDX                            ; 004dbfda | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dbfdb
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dbfe0
        ;   Label: LAB_004dbfe0
    TEST byte ptr [0x02d05209],0x2      ; 004dbfe3 | g_JoyButtons+1
        ;   Label: LAB_004dbfe3
    JZ 0x004dc1fc                       ; 004dbfea
        ;   XREF to: 004dc1fc (CONDITIONAL_JUMP)  ; LAB_004dc1fc
    TEST byte ptr [ESP + 0x1],0x2       ; 004dbff0
    JNZ 0x004dc00b                      ; 004dbff5
        ;   XREF to: 004dc00b (CONDITIONAL_JUMP)  ; LAB_004dc00b
    PUSH 0x20b                          ; 004dbff7
    MOV ESI,dword ptr [0x0067cf44]      ; 004dbffc | g_CKeysPtr
    PUSH ESI                            ; 004dc002 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc003
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dc008
        ;   Label: LAB_004dc008
    PUSH 0x251                          ; 004dc00b
        ;   Label: LAB_004dc00b
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc010 | g_CKeysPtr
    PUSH EDI                            ; 004dc016 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc017
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dc01c
    PUSH 0x252                          ; 004dc01f
    MOV EBP,dword ptr [0x0067cf44]      ; 004dc024 | g_CKeysPtr
    PUSH EBP                            ; 004dc02a | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc02b
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dc030
    PUSH 0x253                          ; 004dc033
    MOV EAX,[0x0067cf44]                ; 004dc038 | g_CKeysInstance | g_CKeysPtr
    PUSH EAX                            ; 004dc03d | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc03e
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dc043
    PUSH 0x254                          ; 004dc046
    MOV EDX,dword ptr [0x0067cf44]      ; 004dc04b | g_CKeysInstance | g_CKeysPtr
    PUSH EDX                            ; 004dc051 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc052
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    MOV EDX,dword ptr [EBX + 0xa4]      ; 004dc057
    MOV ECX,dword ptr [EBX + 0xac]      ; 004dc05d
    SUB EDX,ECX                         ; 004dc063
    MOV EAX,EDX                         ; 004dc065
    SAR EDX,0x1f                        ; 004dc067
    SUB EAX,EDX                         ; 004dc06a
    SAR EAX,0x1                         ; 004dc06c
    MOV EDX,dword ptr [EBX + 0xa4]      ; 004dc06e
    MOV ESI,dword ptr [0x02d051f8]      ; 004dc074 | g_JoyXPos
    SUB EDX,EAX                         ; 004dc07a
    ADD ESP,0x8                         ; 004dc07c
    CMP EDX,ESI                         ; 004dc07f
    JLE 0x004dc097                      ; 004dc081
        ;   XREF to: 004dc097 (CONDITIONAL_JUMP)  ; LAB_004dc097
    PUSH 0x251                          ; 004dc083
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc088 | g_CKeysPtr
    PUSH EDI                            ; 004dc08e | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc08f
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dc094
    MOV EBP,dword ptr [EBX + 0xa4]      ; 004dc097
        ;   Label: LAB_004dc097
    MOV EDX,dword ptr [EBX + 0xb0]      ; 004dc09d
    SUB EDX,EBP                         ; 004dc0a3
    MOV EAX,EDX                         ; 004dc0a5
    SAR EDX,0x1f                        ; 004dc0a7
    SUB EAX,EDX                         ; 004dc0aa
    SAR EAX,0x1                         ; 004dc0ac
    MOV ECX,dword ptr [0x02d051f8]      ; 004dc0ae | g_JoyXPos
    ADD EAX,EBP                         ; 004dc0b4
    CMP EAX,ECX                         ; 004dc0b6
    JGE 0x004dc0ce                      ; 004dc0b8
        ;   XREF to: 004dc0ce (CONDITIONAL_JUMP)  ; LAB_004dc0ce
    PUSH 0x252                          ; 004dc0ba
    MOV ESI,dword ptr [0x0067cf44]      ; 004dc0bf | g_CKeysPtr
    PUSH ESI                            ; 004dc0c5 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc0c6
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
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
    MOV EBP,dword ptr [0x02d051fc]      ; 004dc0eb | g_JoyYPos
    SUB EDX,EAX                         ; 004dc0f1
    CMP EDX,EBP                         ; 004dc0f3
    JLE 0x004dc10a                      ; 004dc0f5
        ;   XREF to: 004dc10a (CONDITIONAL_JUMP)  ; LAB_004dc10a
    PUSH 0x253                          ; 004dc0f7
    MOV EAX,[0x0067cf44]                ; 004dc0fc | g_CKeysInstance | g_CKeysPtr
    PUSH EAX                            ; 004dc101 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc102
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dc107
    MOV ECX,dword ptr [EBX + 0xa8]      ; 004dc10a
        ;   Label: LAB_004dc10a
    MOV EDX,dword ptr [EBX + 0xb8]      ; 004dc110
    SUB EDX,ECX                         ; 004dc116
    MOV EAX,EDX                         ; 004dc118
    SAR EDX,0x1f                        ; 004dc11a
    SUB EAX,EDX                         ; 004dc11d
    SAR EAX,0x1                         ; 004dc11f
    MOV EDI,dword ptr [0x02d051fc]      ; 004dc121 | g_JoyYPos
    ADD EAX,ECX                         ; 004dc127
    CMP EAX,EDI                         ; 004dc129
    JL 0x004dc212                       ; 004dc12b
        ;   XREF to: 004dc212 (CONDITIONAL_JUMP)  ; LAB_004dc212
    ADD ESP,0x4                         ; 004dc131
    POP EBP                             ; 004dc134
    POP EDI                             ; 004dc135
    POP ESI                             ; 004dc136
    POP EBX                             ; 004dc137
    RET                                 ; 004dc138
    PUSH 0x202                          ; 004dc139
        ;   Label: LAB_004dc139
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc13e | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 004dc144 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc145
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbea7                      ; 004dc14a
        ;   XREF to: 004dbea7 (UNCONDITIONAL_JUMP)  ; LAB_004dbea7
    PUSH 0x203                          ; 004dc14f
        ;   Label: LAB_004dc14f
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc154 | g_CKeysPtr
    PUSH EDI                            ; 004dc15a | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc15b
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbece                      ; 004dc160
        ;   XREF to: 004dbece (UNCONDITIONAL_JUMP)  ; LAB_004dbece
    PUSH 0x204                          ; 004dc165
        ;   Label: LAB_004dc165
    MOV EAX,[0x0067cf44]                ; 004dc16a | g_CKeysInstance | g_CKeysPtr
    PUSH EAX                            ; 004dc16f | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc170
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbef5                      ; 004dc175
        ;   XREF to: 004dbef5 (UNCONDITIONAL_JUMP)  ; LAB_004dbef5
    PUSH 0x205                          ; 004dc17a
        ;   Label: LAB_004dc17a
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc17f | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 004dc185 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc186
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbf1c                      ; 004dc18b
        ;   XREF to: 004dbf1c (UNCONDITIONAL_JUMP)  ; LAB_004dbf1c
    PUSH 0x206                          ; 004dc190
        ;   Label: LAB_004dc190
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc195 | g_CKeysPtr
    PUSH EDI                            ; 004dc19b | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc19c
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbf43                      ; 004dc1a1
        ;   XREF to: 004dbf43 (UNCONDITIONAL_JUMP)  ; LAB_004dbf43
    PUSH 0x207                          ; 004dc1a6
        ;   Label: LAB_004dc1a6
    MOV EAX,[0x0067cf44]                ; 004dc1ab | g_CKeysInstance | g_CKeysPtr
    PUSH EAX                            ; 004dc1b0 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1b1
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbf6a                      ; 004dc1b6
        ;   XREF to: 004dbf6a (UNCONDITIONAL_JUMP)  ; LAB_004dbf6a
    PUSH 0x208                          ; 004dc1bb
        ;   Label: LAB_004dc1bb
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc1c0 | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 004dc1c6 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1c7
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbf91                      ; 004dc1cc
        ;   XREF to: 004dbf91 (UNCONDITIONAL_JUMP)  ; LAB_004dbf91
    PUSH 0x209                          ; 004dc1d1
        ;   Label: LAB_004dc1d1
    MOV EDI,dword ptr [0x0067cf44]      ; 004dc1d6 | g_CKeysPtr
    PUSH EDI                            ; 004dc1dc | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1dd
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbfb8                      ; 004dc1e2
        ;   XREF to: 004dbfb8 (UNCONDITIONAL_JUMP)  ; LAB_004dbfb8
    PUSH 0x20a                          ; 004dc1e7
        ;   Label: LAB_004dc1e7
    MOV EAX,[0x0067cf44]                ; 004dc1ec | g_CKeysInstance | g_CKeysPtr
    PUSH EAX                            ; 004dc1f1 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc1f2
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dbfe0                      ; 004dc1f7
        ;   XREF to: 004dbfe0 (UNCONDITIONAL_JUMP)  ; LAB_004dbfe0
    PUSH 0x20b                          ; 004dc1fc
        ;   Label: LAB_004dc1fc
    MOV ECX,dword ptr [0x0067cf44]      ; 004dc201 | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 004dc207 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0 ; 004dc208
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code)
    JMP 0x004dc008                      ; 004dc20d
        ;   XREF to: 004dc008 (UNCONDITIONAL_JUMP)  ; LAB_004dc008
    PUSH 0x254                          ; 004dc212
        ;   Label: LAB_004dc212
    MOV EBP,dword ptr [0x0067cf44]      ; 004dc217 | g_CKeysPtr
    PUSH EBP                            ; 004dc21d | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490 ; 004dc21e
        ;   XREF to: 00502490 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code)
    ADD ESP,0x8                         ; 004dc223
    ADD ESP,0x4                         ; 004dc226
    POP EBP                             ; 004dc229
    POP EDI                             ; 004dc22a
    POP ESI                             ; 004dc22b
    POP EBX                             ; 004dc22c
    RET                                 ; 004dc22d

