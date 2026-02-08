; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_menu_cpp_calibrateGamepad_FUN_005104d0(void)
;
; Local Variables:
; undefined1       Stack[-0x224]:1  local_224
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_menu.cpp_checkAndCalibrateGamepad_FUN_00511840 at 00511855
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 005147bc
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 00511de2
;
; Referenced Globals:
;   TerminatedCString s_d_d_x_006365f8
;   TerminatedCString s_Center_gamepad_press_ENT_00636601
;   TerminatedCString s_Move_gamepad_in_all_dire_0063661d
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CBitFont* g_MediumFont
;   DWORD g_JoyXPos
;   DWORD g_JoyYPos
;   DWORD g_JoyButtons
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.x_center
;   undefined4 DAT_02d81b44
;   undefined4 DAT_02d81b48
;   undefined4 DAT_02d81b4c
;   undefined4 DAT_02d81b50
;   ... and 4 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005104d0
        ;   Label: core_menu.cpp_calibrateGamepad_FUN_005104d0
    PUSH ESI                            ; 005104d1
    PUSH EDI                            ; 005104d2
    PUSH EBP                            ; 005104d3
    SUB ESP,0x214                       ; 005104d4
    MOV ESI,0x7fffffff                  ; 005104da
    XOR EBP,EBP                         ; 005104df
    XOR EDI,EDI                         ; 005104e1
    MOV dword ptr [ESP + 0x210],ESI     ; 005104e3
    PUSH 0x2f21590                      ; 005104ea | g_CMoonInstance
        ;   Label: LAB_005104ea
    CALL core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 ; 005104ef
        ;   XREF to: 0052a2c0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 005104f4
    PUSH 0x636601                       ; 005104f7 | = "Center gamepad, press ENTER"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005104fc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00510501
    PUSH EAX                            ; 00510504
    MOV ECX,dword ptr [0x020a5718]      ; 00510505 | g_MediumFont
    PUSH ECX                            ; 0051050b
    MOV EBX,EAX                         ; 0051050c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0051050e
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00510513
    SAR EDX,0x1f                        ; 00510515
    SUB EAX,EDX                         ; 00510518
    SAR EAX,0x1                         ; 0051051a
    ADD ESP,0x8                         ; 0051051c
    MOV EDX,0x140                       ; 0051051f
    PUSH 0x58                           ; 00510524
    SUB EDX,EAX                         ; 00510526
    MOV EAX,[0x020a5718]                ; 00510528 | g_MediumFont
    PUSH EAX                            ; 0051052d
    MOV dword ptr [ESP + 0x208],EDX     ; 0051052e
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00510535
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 0051053a
    SAR EDX,0x1f                        ; 0051053c
    SUB EAX,EDX                         ; 0051053f
    SAR EAX,0x1                         ; 00510541
    ADD ESP,0x8                         ; 00510543
    PUSH 0x0                            ; 00510546
    MOV EDX,0xf0                        ; 00510548
    PUSH 0x7                            ; 0051054d
    SUB EDX,EAX                         ; 0051054f
    PUSH EDX                            ; 00510551
    MOV EDX,dword ptr [ESP + 0x20c]     ; 00510552
    PUSH EDX                            ; 00510559
    PUSH EBX                            ; 0051055a
    MOV ECX,dword ptr [0x020a5718]      ; 0051055b | g_MediumFont
    PUSH ECX                            ; 00510561
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00510562
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00510567
    MOV EBX,dword ptr [0x02d05208]      ; 0051056a | g_JoyButtons
    PUSH EBX                            ; 00510570
    MOV EAX,[0x02d051fc]                ; 00510571 | g_JoyYPos
    PUSH EAX                            ; 00510576
    MOV EDX,dword ptr [0x02d051f8]      ; 00510577 | g_JoyXPos
    PUSH EDX                            ; 0051057d
    PUSH 0x6365f8                       ; 0051057e | = "%d,%d,%x"
    LEA EAX,[ESP + 0x10]                ; 00510583
    PUSH EAX                            ; 00510587
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00510588
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0051058d
    PUSH 0x0                            ; 00510590
    PUSH 0x0                            ; 00510592
    LEA EAX,[ESP + 0x8]                 ; 00510594
    PUSH EAX                            ; 00510598
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00510599
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051059e
    MOV ECX,dword ptr [0x0067b654]      ; 005105a1 | g_CGamePtr | g_CGameInstance
    PUSH ECX                            ; 005105a7 | g_CGameInstance
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 005105a8
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 005105ad
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005105b0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x1c                           ; 005105b5
    MOV EAX,[0x0067cf44]                ; 005105b7 | g_CKeysPtr
    PUSH EAX                            ; 005105bc | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005105bd | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005105bf
    ADD ESP,0x8                         ; 005105c2
    TEST EAX,EAX                        ; 005105c5
    JZ 0x00510712                       ; 005105c7
        ;   XREF to: 00510712 (CONDITIONAL_JUMP)  ; LAB_00510712
    PUSH 0x2f21590                      ; 005105cd | g_CMoonInstance
        ;   Label: LAB_005105cd
    CALL core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 ; 005105d2
        ;   XREF to: 0052a2c0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 005105d7
    PUSH 0x63661d                       ; 005105da | = "Move gamepad in all directions, press..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005105df
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005105e4
    PUSH EAX                            ; 005105e7
    MOV EBX,EAX                         ; 005105e8
    MOV EAX,[0x020a5718]                ; 005105ea | g_MediumFont
    PUSH EAX                            ; 005105ef
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 005105f0
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 005105f5
    SAR EDX,0x1f                        ; 005105f7
    SUB EAX,EDX                         ; 005105fa
    SAR EAX,0x1                         ; 005105fc
    MOV EDX,0x140                       ; 005105fe
    ADD ESP,0x8                         ; 00510603
    SUB EDX,EAX                         ; 00510606
    PUSH 0x58                           ; 00510608
    MOV dword ptr [ESP + 0x208],EDX     ; 0051060a
    MOV EDX,dword ptr [0x020a5718]      ; 00510611 | g_MediumFont
    PUSH EDX                            ; 00510617
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00510618
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 0051061d
    SAR EDX,0x1f                        ; 0051061f
    SUB EAX,EDX                         ; 00510622
    SAR EAX,0x1                         ; 00510624
    ADD ESP,0x8                         ; 00510626
    PUSH 0x0                            ; 00510629
    MOV EDX,0xf0                        ; 0051062b
    PUSH 0x7                            ; 00510630
    SUB EDX,EAX                         ; 00510632
    PUSH EDX                            ; 00510634
    MOV ECX,dword ptr [ESP + 0x210]     ; 00510635
    PUSH ECX                            ; 0051063c
    PUSH EBX                            ; 0051063d
    MOV EBX,dword ptr [0x020a5718]      ; 0051063e | g_MediumFont
    PUSH EBX                            ; 00510644
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00510645
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0051064a
    MOV EAX,[0x02d05208]                ; 0051064d | g_JoyButtons
    PUSH EAX                            ; 00510652
    MOV EDX,dword ptr [0x02d051fc]      ; 00510653 | g_JoyYPos
    PUSH EDX                            ; 00510659
    MOV ECX,dword ptr [0x02d051f8]      ; 0051065a | g_JoyXPos
    PUSH ECX                            ; 00510660
    PUSH 0x6365f8                       ; 00510661 | = "%d,%d,%x"
    LEA EAX,[ESP + 0x110]               ; 00510666
    PUSH EAX                            ; 0051066d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0051066e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00510673
    PUSH 0x0                            ; 00510676
    PUSH 0x0                            ; 00510678
    LEA EAX,[ESP + 0x108]               ; 0051067a
    PUSH EAX                            ; 00510681
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00510682
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00510687
    MOV EBX,dword ptr [0x0067b654]      ; 0051068a | g_CGamePtr | g_CGameInstance
    PUSH EBX                            ; 00510690 | g_CGameInstance
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 00510691
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 00510696
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00510699
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x1c                           ; 0051069e
    MOV EAX,[0x0067cf44]                ; 005106a0 | g_CKeysPtr
    PUSH EAX                            ; 005106a5 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005106a6 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005106a8
    ADD ESP,0x8                         ; 005106ab
    TEST EAX,EAX                        ; 005106ae
    JNZ 0x00510769                      ; 005106b0
        ;   XREF to: 00510769 (CONDITIONAL_JUMP)  ; LAB_00510769
    PUSH 0x1                            ; 005106b6
    MOV EDX,dword ptr [0x0067cf44]      ; 005106b8 | g_CKeysPtr
    PUSH EDX                            ; 005106be | g_CKeysInstance
    MOV EAX,dword ptr [EDX]             ; 005106bf | g_CKeysInstance
    CALL dword ptr [EAX + 0x4]          ; 005106c1
    ADD ESP,0x8                         ; 005106c4
    TEST EAX,EAX                        ; 005106c7
    JNZ 0x00510743                      ; 005106c9
        ;   XREF to: 00510743 (CONDITIONAL_JUMP)  ; LAB_00510743
    MOV EAX,[0x02d051f8]                ; 005106cf | g_JoyXPos
    CMP ESI,EAX                         ; 005106d4
    JLE 0x005106da                      ; 005106d6
        ;   XREF to: 005106da (CONDITIONAL_JUMP)  ; LAB_005106da
    MOV ESI,EAX                         ; 005106d8
    MOV EDX,dword ptr [0x02d051f8]      ; 005106da | g_JoyXPos
        ;   Label: LAB_005106da
    CMP EBP,EDX                         ; 005106e0
    JGE 0x005106e6                      ; 005106e2
        ;   XREF to: 005106e6 (CONDITIONAL_JUMP)  ; LAB_005106e6
    MOV EBP,EDX                         ; 005106e4
    MOV ECX,dword ptr [ESP + 0x210]     ; 005106e6
        ;   Label: LAB_005106e6
    MOV EAX,[0x02d051fc]                ; 005106ed | g_JoyYPos
    CMP EAX,ECX                         ; 005106f2
    JGE 0x005106fd                      ; 005106f4
        ;   XREF to: 005106fd (CONDITIONAL_JUMP)  ; LAB_005106fd
    MOV dword ptr [ESP + 0x210],EAX     ; 005106f6
    MOV EBX,dword ptr [0x02d051fc]      ; 005106fd | g_JoyYPos
        ;   Label: LAB_005106fd
    CMP EDI,EBX                         ; 00510703
    JGE 0x005105cd                      ; 00510705
        ;   XREF to: 005105cd (CONDITIONAL_JUMP)  ; LAB_005105cd
    MOV EDI,EBX                         ; 0051070b
    JMP 0x005105cd                      ; 0051070d
        ;   XREF to: 005105cd (UNCONDITIONAL_JUMP)  ; LAB_005105cd
    PUSH 0x1                            ; 00510712
        ;   Label: LAB_00510712
    MOV EAX,[0x0067cf44]                ; 00510714 | g_CKeysPtr
    PUSH EAX                            ; 00510719 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051071a | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051071c
    ADD ESP,0x8                         ; 0051071f
    TEST EAX,EAX                        ; 00510722
    JNZ 0x00510743                      ; 00510724
        ;   XREF to: 00510743 (CONDITIONAL_JUMP)  ; LAB_00510743
    MOV EAX,[0x02d051f8]                ; 00510726 | g_JoyXPos
    MOV dword ptr [ESP + 0x208],EAX     ; 0051072b
    MOV EAX,[0x02d051fc]                ; 00510732 | g_JoyYPos
    MOV dword ptr [ESP + 0x20c],EAX     ; 00510737
    JMP 0x005104ea                      ; 0051073e
        ;   XREF to: 005104ea (UNCONDITIONAL_JUMP)  ; LAB_005104ea
    MOV EAX,[0x0067b654]                ; 00510743 | g_CGamePtr
        ;   Label: LAB_00510743
    MOV dword ptr [EAX + 0xa4],0x0      ; 00510748 | g_CGameInstance.x_center
    MOV dword ptr [EAX + 0xbc],0x0      ; 00510752 | g_CGameInstance.game_control
    XOR EAX,EAX                         ; 0051075c
    ADD ESP,0x214                       ; 0051075e
    POP EBP                             ; 00510764
    POP EDI                             ; 00510765
    POP ESI                             ; 00510766
    POP EBX                             ; 00510767
    RET                                 ; 00510768
    MOV EAX,[0x0067b654]                ; 00510769 | g_CGamePtr
        ;   Label: LAB_00510769
    MOV EDX,dword ptr [ESP + 0x208]     ; 0051076e
    MOV dword ptr [EAX + 0xa4],EDX      ; 00510775 | g_CGameInstance.x_center
    MOV dword ptr [EAX + 0xac],ESI      ; 0051077b | DAT_02d81b48
    MOV dword ptr [EAX + 0xb0],EBP      ; 00510781 | DAT_02d81b4c
    MOV dword ptr [EAX + 0xb8],EDI      ; 00510787 | DAT_02d81b54
    MOV EDX,dword ptr [ESP + 0x20c]     ; 0051078d
    MOV dword ptr [EAX + 0xa8],EDX      ; 00510794 | DAT_02d81b44
    MOV EDX,dword ptr [ESP + 0x210]     ; 0051079a
    MOV dword ptr [EAX + 0xb4],EDX      ; 005107a1 | DAT_02d81b50
    MOV EAX,0x1                         ; 005107a7
    ADD ESP,0x214                       ; 005107ac
    POP EBP                             ; 005107b2
    POP EDI                             ; 005107b3
    POP ESI                             ; 005107b4
    POP EBX                             ; 005107b5
    RET                                 ; 005107b6

