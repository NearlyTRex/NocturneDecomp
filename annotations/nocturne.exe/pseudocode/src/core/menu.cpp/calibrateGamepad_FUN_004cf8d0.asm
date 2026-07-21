; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void)
;
; Local Variables:
; undefined        Stack[-0x224]:1  local_224
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3be6
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d127c
;
; Referenced Globals:
;   string s_%d,%d,%x_005884ec
;   string s_Center_gamepad,_press_ENTER_005884f5
;   string s_Move_gamepad_in_all_directions,_p_00588511
;   undefined4 DAT_005b9354
;   undefined4 DAT_005bac64
;   undefined4 DAT_014b98f8
;   undefined4 DAT_01c038f8
;   undefined4 DAT_01c038fc
;   undefined4 DAT_01c03908
;   undefined4 DAT_01c77690
;   undefined4 DAT_01c77694
;   undefined4 DAT_01c77698
;   undefined4 DAT_01c7769c
;   undefined4 DAT_01c776a0
;   undefined4 DAT_01c776a4
;   ... and 2 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf8d0
        ;   Label: core_menu.cpp_calibrateGamepad_FUN_004cf8d0
    PUSH ESI                            ; 004cf8d1
    PUSH EDI                            ; 004cf8d2
    PUSH EBP                            ; 004cf8d3
    SUB ESP,0x214                       ; 004cf8d4
    MOV ESI,0x7fffffff                  ; 004cf8da
    XOR EBP,EBP                         ; 004cf8df
    XOR EDI,EDI                         ; 004cf8e1
    MOV dword ptr [ESP + 0x210],ESI     ; 004cf8e3
    PUSH 0x1cc5780                      ; 004cf8ea
        ;   Label: LAB_004cf8ea
    CALL core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040 ; 004cf8ef
        ;   XREF to: 004df040 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040()
    ADD ESP,0x4                         ; 004cf8f4
    PUSH 0x5884f5                       ; 004cf8f7 | = "Center gamepad, press ENTER"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004cf8fc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004cf901
    PUSH EAX                            ; 004cf904
    MOV ECX,dword ptr [0x014b98f8]      ; 004cf905 | DAT_014b98f8
    PUSH ECX                            ; 004cf90b
    MOV EBX,EAX                         ; 004cf90c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cf90e
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004cf913
    SAR EDX,0x1f                        ; 004cf915
    SUB EAX,EDX                         ; 004cf918
    SAR EAX,0x1                         ; 004cf91a
    ADD ESP,0x8                         ; 004cf91c
    MOV EDX,0x140                       ; 004cf91f
    PUSH 0x58                           ; 004cf924
    SUB EDX,EAX                         ; 004cf926
    MOV EAX,[0x014b98f8]                ; 004cf928 | DAT_014b98f8
    PUSH EAX                            ; 004cf92d
    MOV dword ptr [ESP + 0x208],EDX     ; 004cf92e
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cf935
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    MOV EDX,EAX                         ; 004cf93a
    SAR EDX,0x1f                        ; 004cf93c
    SUB EAX,EDX                         ; 004cf93f
    SAR EAX,0x1                         ; 004cf941
    ADD ESP,0x8                         ; 004cf943
    PUSH 0x0                            ; 004cf946
    MOV EDX,0xf0                        ; 004cf948
    PUSH 0x7                            ; 004cf94d
    SUB EDX,EAX                         ; 004cf94f
    PUSH EDX                            ; 004cf951
    MOV EDX,dword ptr [ESP + 0x20c]     ; 004cf952
    PUSH EDX                            ; 004cf959
    PUSH EBX                            ; 004cf95a
    MOV ECX,dword ptr [0x014b98f8]      ; 004cf95b | DAT_014b98f8
    PUSH ECX                            ; 004cf961
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cf962
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004cf967
    MOV EBX,dword ptr [0x01c03908]      ; 004cf96a | DAT_01c03908
    PUSH EBX                            ; 004cf970
    MOV EAX,[0x01c038fc]                ; 004cf971 | DAT_01c038fc
    PUSH EAX                            ; 004cf976
    MOV EDX,dword ptr [0x01c038f8]      ; 004cf977 | DAT_01c038f8
    PUSH EDX                            ; 004cf97d
    PUSH 0x5884ec                       ; 004cf97e | = "%d,%d,%x"
    LEA EAX,[ESP + 0x10]                ; 004cf983
    PUSH EAX                            ; 004cf987
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004cf988
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 004cf98d
    PUSH 0x0                            ; 004cf990
    PUSH 0x0                            ; 004cf992
    LEA EAX,[ESP + 0x8]                 ; 004cf994
    PUSH EAX                            ; 004cf998
    CALL engine_2d.c_drawText_FUN_00402600 ; 004cf999
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 004cf99e
    MOV ECX,dword ptr [0x005b9354]      ; 004cf9a1 | DAT_005b9354
    PUSH ECX                            ; 004cf9a7
    CALL core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 ; 004cf9a8
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_resetKeyState_FUN_0049e8b0()
    ADD ESP,0x4                         ; 004cf9ad
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004cf9b0
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    PUSH 0x1c                           ; 004cf9b5
    MOV EAX,[0x005bac64]                ; 004cf9b7 | DAT_005bac64
    PUSH EAX                            ; 004cf9bc
    MOV EDX,dword ptr [EAX]             ; 004cf9bd | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cf9bf
    ADD ESP,0x8                         ; 004cf9c2
    TEST EAX,EAX                        ; 004cf9c5
    JZ 0x004cfb12                       ; 004cf9c7
        ;   XREF to: 004cfb12 (CONDITIONAL_JUMP)  ; LAB_004cfb12
    PUSH 0x1cc5780                      ; 004cf9cd
        ;   Label: LAB_004cf9cd
    CALL core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040 ; 004cf9d2
        ;   XREF to: 004df040 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040()
    ADD ESP,0x4                         ; 004cf9d7
    PUSH 0x588511                       ; 004cf9da | = "Move gamepad in all directions, press..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004cf9df
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004cf9e4
    PUSH EAX                            ; 004cf9e7
    MOV EBX,EAX                         ; 004cf9e8
    MOV EAX,[0x014b98f8]                ; 004cf9ea | DAT_014b98f8
    PUSH EAX                            ; 004cf9ef
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cf9f0
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004cf9f5
    SAR EDX,0x1f                        ; 004cf9f7
    SUB EAX,EDX                         ; 004cf9fa
    SAR EAX,0x1                         ; 004cf9fc
    MOV EDX,0x140                       ; 004cf9fe
    ADD ESP,0x8                         ; 004cfa03
    SUB EDX,EAX                         ; 004cfa06
    PUSH 0x58                           ; 004cfa08
    MOV dword ptr [ESP + 0x208],EDX     ; 004cfa0a
    MOV EDX,dword ptr [0x014b98f8]      ; 004cfa11 | DAT_014b98f8
    PUSH EDX                            ; 004cfa17
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cfa18
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    MOV EDX,EAX                         ; 004cfa1d
    SAR EDX,0x1f                        ; 004cfa1f
    SUB EAX,EDX                         ; 004cfa22
    SAR EAX,0x1                         ; 004cfa24
    ADD ESP,0x8                         ; 004cfa26
    PUSH 0x0                            ; 004cfa29
    MOV EDX,0xf0                        ; 004cfa2b
    PUSH 0x7                            ; 004cfa30
    SUB EDX,EAX                         ; 004cfa32
    PUSH EDX                            ; 004cfa34
    MOV ECX,dword ptr [ESP + 0x210]     ; 004cfa35
    PUSH ECX                            ; 004cfa3c
    PUSH EBX                            ; 004cfa3d
    MOV EBX,dword ptr [0x014b98f8]      ; 004cfa3e | DAT_014b98f8
    PUSH EBX                            ; 004cfa44
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cfa45
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004cfa4a
    MOV EAX,[0x01c03908]                ; 004cfa4d | DAT_01c03908
    PUSH EAX                            ; 004cfa52
    MOV EDX,dword ptr [0x01c038fc]      ; 004cfa53 | DAT_01c038fc
    PUSH EDX                            ; 004cfa59
    MOV ECX,dword ptr [0x01c038f8]      ; 004cfa5a | DAT_01c038f8
    PUSH ECX                            ; 004cfa60
    PUSH 0x5884ec                       ; 004cfa61 | = "%d,%d,%x"
    LEA EAX,[ESP + 0x110]               ; 004cfa66
    PUSH EAX                            ; 004cfa6d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004cfa6e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 004cfa73
    PUSH 0x0                            ; 004cfa76
    PUSH 0x0                            ; 004cfa78
    LEA EAX,[ESP + 0x108]               ; 004cfa7a
    PUSH EAX                            ; 004cfa81
    CALL engine_2d.c_drawText_FUN_00402600 ; 004cfa82
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 004cfa87
    MOV EBX,dword ptr [0x005b9354]      ; 004cfa8a | DAT_005b9354
    PUSH EBX                            ; 004cfa90
    CALL core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 ; 004cfa91
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_resetKeyState_FUN_0049e8b0()
    ADD ESP,0x4                         ; 004cfa96
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004cfa99
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    PUSH 0x1c                           ; 004cfa9e
    MOV EAX,[0x005bac64]                ; 004cfaa0 | DAT_005bac64
    PUSH EAX                            ; 004cfaa5 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cfaa6 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cfaa8
    ADD ESP,0x8                         ; 004cfaab
    TEST EAX,EAX                        ; 004cfaae
    JNZ 0x004cfb69                      ; 004cfab0
        ;   XREF to: 004cfb69 (CONDITIONAL_JUMP)  ; LAB_004cfb69
    PUSH 0x1                            ; 004cfab6
    MOV EDX,dword ptr [0x005bac64]      ; 004cfab8 | DAT_005bac64
    PUSH EDX                            ; 004cfabe | DAT_01cc30e4
    MOV EAX,dword ptr [EDX]             ; 004cfabf | DAT_01cc30e4
    CALL dword ptr [EAX + 0x4]          ; 004cfac1
    ADD ESP,0x8                         ; 004cfac4
    TEST EAX,EAX                        ; 004cfac7
    JNZ 0x004cfb43                      ; 004cfac9
        ;   XREF to: 004cfb43 (CONDITIONAL_JUMP)  ; LAB_004cfb43
    MOV EAX,[0x01c038f8]                ; 004cfacf | DAT_01c038f8
    CMP ESI,EAX                         ; 004cfad4
    JLE 0x004cfada                      ; 004cfad6
        ;   XREF to: 004cfada (CONDITIONAL_JUMP)  ; LAB_004cfada
    MOV ESI,EAX                         ; 004cfad8
    MOV EDX,dword ptr [0x01c038f8]      ; 004cfada | DAT_01c038f8
        ;   Label: LAB_004cfada
    CMP EBP,EDX                         ; 004cfae0
    JGE 0x004cfae6                      ; 004cfae2
        ;   XREF to: 004cfae6 (CONDITIONAL_JUMP)  ; LAB_004cfae6
    MOV EBP,EDX                         ; 004cfae4
    MOV ECX,dword ptr [ESP + 0x210]     ; 004cfae6
        ;   Label: LAB_004cfae6
    MOV EAX,[0x01c038fc]                ; 004cfaed | DAT_01c038fc
    CMP EAX,ECX                         ; 004cfaf2
    JGE 0x004cfafd                      ; 004cfaf4
        ;   XREF to: 004cfafd (CONDITIONAL_JUMP)  ; LAB_004cfafd
    MOV dword ptr [ESP + 0x210],EAX     ; 004cfaf6
    MOV EBX,dword ptr [0x01c038fc]      ; 004cfafd | DAT_01c038fc
        ;   Label: LAB_004cfafd
    CMP EDI,EBX                         ; 004cfb03
    JGE 0x004cf9cd                      ; 004cfb05
        ;   XREF to: 004cf9cd (CONDITIONAL_JUMP)  ; LAB_004cf9cd
    MOV EDI,EBX                         ; 004cfb0b
    JMP 0x004cf9cd                      ; 004cfb0d
        ;   XREF to: 004cf9cd (UNCONDITIONAL_JUMP)  ; LAB_004cf9cd
    PUSH 0x1                            ; 004cfb12
        ;   Label: LAB_004cfb12
    MOV EAX,[0x005bac64]                ; 004cfb14 | DAT_005bac64
    PUSH EAX                            ; 004cfb19 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cfb1a | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cfb1c
    ADD ESP,0x8                         ; 004cfb1f
    TEST EAX,EAX                        ; 004cfb22
    JNZ 0x004cfb43                      ; 004cfb24
        ;   XREF to: 004cfb43 (CONDITIONAL_JUMP)  ; LAB_004cfb43
    MOV EAX,[0x01c038f8]                ; 004cfb26 | DAT_01c038f8
    MOV dword ptr [ESP + 0x208],EAX     ; 004cfb2b
    MOV EAX,[0x01c038fc]                ; 004cfb32 | DAT_01c038fc
    MOV dword ptr [ESP + 0x20c],EAX     ; 004cfb37
    JMP 0x004cf8ea                      ; 004cfb3e
        ;   XREF to: 004cf8ea (UNCONDITIONAL_JUMP)  ; LAB_004cf8ea
    MOV EAX,[0x005b9354]                ; 004cfb43 | DAT_005b9354
        ;   Label: LAB_004cfb43
    MOV dword ptr [EAX + 0xa4],0x0      ; 004cfb48 | DAT_01c77690
    MOV dword ptr [EAX + 0xbc],0x0      ; 004cfb52 | DAT_01c776a8
    XOR EAX,EAX                         ; 004cfb5c
    ADD ESP,0x214                       ; 004cfb5e
    POP EBP                             ; 004cfb64
    POP EDI                             ; 004cfb65
    POP ESI                             ; 004cfb66
    POP EBX                             ; 004cfb67
    RET                                 ; 004cfb68
    MOV EAX,[0x005b9354]                ; 004cfb69 | DAT_005b9354
        ;   Label: LAB_004cfb69
    MOV EDX,dword ptr [ESP + 0x208]     ; 004cfb6e
    MOV dword ptr [EAX + 0xa4],EDX      ; 004cfb75 | DAT_01c77690
    MOV dword ptr [EAX + 0xac],ESI      ; 004cfb7b | DAT_01c77698
    MOV dword ptr [EAX + 0xb0],EBP      ; 004cfb81 | DAT_01c7769c
    MOV dword ptr [EAX + 0xb8],EDI      ; 004cfb87 | DAT_01c776a4
    MOV EDX,dword ptr [ESP + 0x20c]     ; 004cfb8d
    MOV dword ptr [EAX + 0xa8],EDX      ; 004cfb94 | DAT_01c77694
    MOV EDX,dword ptr [ESP + 0x210]     ; 004cfb9a
    MOV dword ptr [EAX + 0xb4],EDX      ; 004cfba1 | DAT_01c776a0
    MOV EAX,0x1                         ; 004cfba7
    ADD ESP,0x214                       ; 004cfbac
    POP EBP                             ; 004cfbb2
    POP EDI                             ; 004cfbb3
    POP ESI                             ; 004cfbb4
    POP EBX                             ; 004cfbb5
    RET                                 ; 004cfbb6

