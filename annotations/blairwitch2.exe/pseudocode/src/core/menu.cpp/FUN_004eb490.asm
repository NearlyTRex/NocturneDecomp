; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_FUN_004eb490(void)
;
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_menu.cpp_FUN_004ecc70 at 004ed1f6
;   core_menu.cpp_FUN_004eed60 at 004efae9
;
; Referenced Globals:
;   TerminatedCString s_d_d_x_005dcad1
;   TerminatedCString s_Center_gamepad_press_ENT_005dcada
;   TerminatedCString s_Move_gamepad_in_all_dire_005dcaf6
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01511cb8
;   undefined4 DAT_01c38af0
;   undefined4 DAT_01c38af4
;   undefined4 DAT_01c38b00
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.x_center
;   undefined4 g_CGameInstance.y_center
;   undefined4 g_CGameInstance.x_stick_min
;   undefined4 g_CGameInstance.x_stick_max
;   ... and 7 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b7140
;   core_moon.cpp_CMoon_render_FUN_00502510
;   core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004aaf00
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb490
        ;   Label: core_menu.cpp_FUN_004eb490
    PUSH ESI                            ; 004eb491
    PUSH EDI                            ; 004eb492
    PUSH EBP                            ; 004eb493
    SUB ESP,0x214                       ; 004eb494
    MOV EDI,0x7fffffff                  ; 004eb49a
    XOR EBP,EBP                         ; 004eb49f
    MOV ESI,EDI                         ; 004eb4a1
    MOV dword ptr [ESP + 0x210],EBP     ; 004eb4a3
    PUSH 0x1d05620                      ; 004eb4aa
        ;   Label: LAB_004eb4aa
    CALL core_moon.cpp_CMoon_render_FUN_00502510 ; 004eb4af
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_00502510(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004eb4b4
    PUSH 0x5dcada                       ; 004eb4b7 | = "Center gamepad, press ENTER"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eb4bc
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004eb4c1
    PUSH EAX                            ; 004eb4c4
    MOV ECX,dword ptr [0x01511cb8]      ; 004eb4c5 | DAT_01511cb8
    PUSH ECX                            ; 004eb4cb
    MOV EBX,EAX                         ; 004eb4cc
    CALL engine_font.cpp_FUN_004aaf00   ; 004eb4ce
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,EAX                         ; 004eb4d3
    SAR EDX,0x1f                        ; 004eb4d5
    SUB EAX,EDX                         ; 004eb4d8
    SAR EAX,0x1                         ; 004eb4da
    ADD ESP,0x8                         ; 004eb4dc
    MOV EDX,0x140                       ; 004eb4df
    PUSH 0x58                           ; 004eb4e4
    SUB EDX,EAX                         ; 004eb4e6
    MOV EAX,[0x01511cb8]                ; 004eb4e8 | DAT_01511cb8
    PUSH EAX                            ; 004eb4ed
    MOV dword ptr [ESP + 0x208],EDX     ; 004eb4ee
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004eb4f5
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 004eb4fa
    SAR EDX,0x1f                        ; 004eb4fc
    SUB EAX,EDX                         ; 004eb4ff
    SAR EAX,0x1                         ; 004eb501
    ADD ESP,0x8                         ; 004eb503
    PUSH 0x0                            ; 004eb506
    MOV EDX,0xf0                        ; 004eb508
    PUSH 0x7                            ; 004eb50d
    SUB EDX,EAX                         ; 004eb50f
    PUSH EDX                            ; 004eb511
    MOV EDX,dword ptr [ESP + 0x20c]     ; 004eb512
    PUSH EDX                            ; 004eb519
    PUSH EBX                            ; 004eb51a
    MOV ECX,dword ptr [0x01511cb8]      ; 004eb51b | DAT_01511cb8
    PUSH ECX                            ; 004eb521
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb522
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb527
    MOV EBX,dword ptr [0x01c38b00]      ; 004eb52a | DAT_01c38b00
    PUSH EBX                            ; 004eb530
    MOV EAX,[0x01c38af4]                ; 004eb531 | DAT_01c38af4
    PUSH EAX                            ; 004eb536
    MOV EDX,dword ptr [0x01c38af0]      ; 004eb537 | DAT_01c38af0
    PUSH EDX                            ; 004eb53d
    PUSH 0x5dcad1                       ; 004eb53e | = "%d,%d,%x"
    LEA EAX,[ESP + 0x110]               ; 004eb543
    PUSH EAX                            ; 004eb54a
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004eb54b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 004eb550
    PUSH 0x0                            ; 004eb553
    PUSH 0x0                            ; 004eb555
    LEA EAX,[ESP + 0x108]               ; 004eb557
    PUSH EAX                            ; 004eb55e
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004eb55f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb564
    MOV ECX,dword ptr [0x00616494]      ; 004eb567 | g_CGamePtr
    PUSH ECX                            ; 004eb56d | g_CGameInstance
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004eb56e
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004eb573
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004eb576
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    PUSH 0x1c                           ; 004eb57b
    MOV EAX,[0x00617dd4]                ; 004eb57d | DAT_00617dd4
    PUSH EAX                            ; 004eb582 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb583 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb585
    ADD ESP,0x8                         ; 004eb588
    TEST EAX,EAX                        ; 004eb58b
    JZ 0x004eb716                       ; 004eb58d
        ;   XREF to: 004eb716 (CONDITIONAL_JUMP)  ; LAB_004eb716
    PUSH 0x10000                        ; 004eb593
        ;   Label: LAB_004eb593
    PUSH 0xc350                         ; 004eb598
    PUSH 0xc350                         ; 004eb59d
    MOV EAX,[0x0061b5a8]                ; 004eb5a2 | g_CDemonSetPtr
    PUSH EAX                            ; 004eb5a7 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004eb5a8 | g_CDemonSetInstance.rendering_mode
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0 ; 004eb5b2
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004eb5b7
    MOV EAX,[0x0061b5a8]                ; 004eb5ba | g_CDemonSetPtr
    PUSH 0x1d05620                      ; 004eb5bf
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004eb5c4 | g_CDemonSetInstance.ambient_base_quick
    CALL core_moon.cpp_CMoon_render_FUN_00502510 ; 004eb5ce
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_00502510(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004eb5d3
    MOV EAX,[0x0061b5a8]                ; 004eb5d6 | g_CDemonSetPtr
    PUSH 0x5dcaf6                       ; 004eb5db | = "Move gamepad in all directions, press..."
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004eb5e0 | g_CDemonSetInstance.rendering_mode
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eb5ea
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004eb5ef
    PUSH EAX                            ; 004eb5f2
    MOV EBX,EAX                         ; 004eb5f3
    MOV EAX,[0x01511cb8]                ; 004eb5f5 | DAT_01511cb8
    PUSH EAX                            ; 004eb5fa
    CALL engine_font.cpp_FUN_004aaf00   ; 004eb5fb
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,EAX                         ; 004eb600
    SAR EDX,0x1f                        ; 004eb602
    SUB EAX,EDX                         ; 004eb605
    SAR EAX,0x1                         ; 004eb607
    MOV EDX,0x140                       ; 004eb609
    ADD ESP,0x8                         ; 004eb60e
    SUB EDX,EAX                         ; 004eb611
    PUSH 0x58                           ; 004eb613
    MOV dword ptr [ESP + 0x208],EDX     ; 004eb615
    MOV EDX,dword ptr [0x01511cb8]      ; 004eb61c | DAT_01511cb8
    PUSH EDX                            ; 004eb622
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004eb623
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 004eb628
    SAR EDX,0x1f                        ; 004eb62a
    SUB EAX,EDX                         ; 004eb62d
    SAR EAX,0x1                         ; 004eb62f
    ADD ESP,0x8                         ; 004eb631
    PUSH 0x0                            ; 004eb634
    MOV EDX,0xf0                        ; 004eb636
    PUSH 0x7                            ; 004eb63b
    SUB EDX,EAX                         ; 004eb63d
    PUSH EDX                            ; 004eb63f
    MOV ECX,dword ptr [ESP + 0x210]     ; 004eb640
    PUSH ECX                            ; 004eb647
    PUSH EBX                            ; 004eb648
    MOV EBX,dword ptr [0x01511cb8]      ; 004eb649 | DAT_01511cb8
    PUSH EBX                            ; 004eb64f
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb650
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb655
    MOV EAX,[0x01c38b00]                ; 004eb658 | DAT_01c38b00
    PUSH EAX                            ; 004eb65d
    MOV EDX,dword ptr [0x01c38af4]      ; 004eb65e | DAT_01c38af4
    PUSH EDX                            ; 004eb664
    MOV ECX,dword ptr [0x01c38af0]      ; 004eb665 | DAT_01c38af0
    PUSH ECX                            ; 004eb66b
    PUSH 0x5dcad1                       ; 004eb66c | = "%d,%d,%x"
    LEA EAX,[ESP + 0x10]                ; 004eb671
    PUSH EAX                            ; 004eb675
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004eb676
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 004eb67b
    PUSH 0x0                            ; 004eb67e
    PUSH 0x0                            ; 004eb680
    LEA EAX,[ESP + 0x8]                 ; 004eb682
    PUSH EAX                            ; 004eb686
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004eb687
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb68c
    MOV EBX,dword ptr [0x00616494]      ; 004eb68f | g_CGamePtr
    PUSH EBX                            ; 004eb695 | g_CGameInstance
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004eb696
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004eb69b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004eb69e
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    PUSH 0x1c                           ; 004eb6a3
    MOV EAX,[0x00617dd4]                ; 004eb6a5 | DAT_00617dd4
    PUSH EAX                            ; 004eb6aa | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb6ab | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb6ad
    ADD ESP,0x8                         ; 004eb6b0
    TEST EAX,EAX                        ; 004eb6b3
    JNZ 0x004eb76d                      ; 004eb6b5
        ;   XREF to: 004eb76d (CONDITIONAL_JUMP)  ; LAB_004eb76d
    PUSH 0x1                            ; 004eb6bb
    MOV EAX,[0x00617dd4]                ; 004eb6bd | DAT_00617dd4
    PUSH EAX                            ; 004eb6c2 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb6c3 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb6c5
    ADD ESP,0x8                         ; 004eb6c8
    TEST EAX,EAX                        ; 004eb6cb
    JNZ 0x004eb747                      ; 004eb6cd
        ;   XREF to: 004eb747 (CONDITIONAL_JUMP)  ; LAB_004eb747
    MOV EAX,[0x01c38af0]                ; 004eb6d3 | DAT_01c38af0
    CMP EDI,EAX                         ; 004eb6d8
    JLE 0x004eb6de                      ; 004eb6da
        ;   XREF to: 004eb6de (CONDITIONAL_JUMP)  ; LAB_004eb6de
    MOV EDI,EAX                         ; 004eb6dc
    MOV EDX,dword ptr [0x01c38af0]      ; 004eb6de | DAT_01c38af0
        ;   Label: LAB_004eb6de
    CMP EBP,EDX                         ; 004eb6e4
    JGE 0x004eb6ea                      ; 004eb6e6
        ;   XREF to: 004eb6ea (CONDITIONAL_JUMP)  ; LAB_004eb6ea
    MOV EBP,EDX                         ; 004eb6e8
    MOV ECX,dword ptr [0x01c38af4]      ; 004eb6ea | DAT_01c38af4
        ;   Label: LAB_004eb6ea
    CMP ESI,ECX                         ; 004eb6f0
    JLE 0x004eb6f6                      ; 004eb6f2
        ;   XREF to: 004eb6f6 (CONDITIONAL_JUMP)  ; LAB_004eb6f6
    MOV ESI,ECX                         ; 004eb6f4
    MOV EBX,dword ptr [ESP + 0x210]     ; 004eb6f6
        ;   Label: LAB_004eb6f6
    MOV EAX,[0x01c38af4]                ; 004eb6fd | DAT_01c38af4
    CMP EAX,EBX                         ; 004eb702
    JLE 0x004eb593                      ; 004eb704
        ;   XREF to: 004eb593 (CONDITIONAL_JUMP)  ; LAB_004eb593
    MOV dword ptr [ESP + 0x210],EAX     ; 004eb70a
    JMP 0x004eb593                      ; 004eb711
        ;   XREF to: 004eb593 (UNCONDITIONAL_JUMP)  ; LAB_004eb593
    PUSH 0x1                            ; 004eb716
        ;   Label: LAB_004eb716
    MOV EAX,[0x00617dd4]                ; 004eb718 | DAT_00617dd4
    PUSH EAX                            ; 004eb71d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb71e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb720
    ADD ESP,0x8                         ; 004eb723
    TEST EAX,EAX                        ; 004eb726
    JNZ 0x004eb747                      ; 004eb728
        ;   XREF to: 004eb747 (CONDITIONAL_JUMP)  ; LAB_004eb747
    MOV EAX,[0x01c38af0]                ; 004eb72a | DAT_01c38af0
    MOV dword ptr [ESP + 0x208],EAX     ; 004eb72f
    MOV EAX,[0x01c38af4]                ; 004eb736 | DAT_01c38af4
    MOV dword ptr [ESP + 0x20c],EAX     ; 004eb73b
    JMP 0x004eb4aa                      ; 004eb742
        ;   XREF to: 004eb4aa (UNCONDITIONAL_JUMP)  ; LAB_004eb4aa
    MOV EAX,[0x00616494]                ; 004eb747 | g_CGamePtr
        ;   Label: LAB_004eb747
    MOV dword ptr [EAX + 0xb8],0x0      ; 004eb74c | g_CGameInstance.x_center
    MOV dword ptr [EAX + 0xd0],0x0      ; 004eb756 | g_CGameInstance.game_control
    XOR EAX,EAX                         ; 004eb760
    ADD ESP,0x214                       ; 004eb762
    POP EBP                             ; 004eb768
    POP EDI                             ; 004eb769
    POP ESI                             ; 004eb76a
    POP EBX                             ; 004eb76b
    RET                                 ; 004eb76c
    MOV EAX,[0x00616494]                ; 004eb76d | g_CGamePtr
        ;   Label: LAB_004eb76d
    MOV EDX,dword ptr [ESP + 0x208]     ; 004eb772
    MOV dword ptr [EAX + 0xb8],EDX      ; 004eb779 | g_CGameInstance.x_center
    MOV dword ptr [EAX + 0xc0],EDI      ; 004eb77f | g_CGameInstance.x_stick_min
    MOV dword ptr [EAX + 0xc4],EBP      ; 004eb785 | g_CGameInstance.x_stick_max
    MOV dword ptr [EAX + 0xc8],ESI      ; 004eb78b | g_CGameInstance.y_stick_min
    MOV EDX,dword ptr [ESP + 0x20c]     ; 004eb791
    MOV dword ptr [EAX + 0xbc],EDX      ; 004eb798 | g_CGameInstance.y_center
    MOV EDX,dword ptr [ESP + 0x210]     ; 004eb79e
    MOV dword ptr [EAX + 0xcc],EDX      ; 004eb7a5 | g_CGameInstance.y_stick_max
    MOV EAX,0x1                         ; 004eb7ab
    ADD ESP,0x214                       ; 004eb7b0
    POP EBP                             ; 004eb7b6
    POP EDI                             ; 004eb7b7
    POP ESI                             ; 004eb7b8
    POP EBX                             ; 004eb7b9
    RET                                 ; 004eb7ba

