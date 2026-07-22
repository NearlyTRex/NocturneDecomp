; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_0049b4e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c10]:1  local_1c10
; undefined        Stack[-0x1b10]:1  local_1b10
; undefined        Stack[-0x1a10]:1  local_1a10
; undefined        Stack[-0x1910]:1  local_1910
; undefined        Stack[-0x1810]:1  local_1810
; undefined        Stack[-0x1710]:1  local_1710
; undefined        Stack[-0x1610]:1  local_1610
; undefined        Stack[-0x1510]:1  local_1510
; undefined        Stack[-0x1410]:1  local_1410
; undefined        Stack[-0x1310]:1  local_1310
; undefined        Stack[-0x1210]:1  local_1210
; undefined        Stack[-0x1110]:1  local_1110
; undefined        Stack[-0x1010]:1  local_1010
; undefined        Stack[-0xf10]:1  local_f10
; undefined        Stack[-0xe10]:1  local_e10
; undefined        Stack[-0xd10]:1  local_d10
; undefined        Stack[-0xc10]:1  local_c10
; undefined        Stack[-0xb10]:1  local_b10
; undefined        Stack[-0xa10]:1  local_a10
; undefined        Stack[-0x910]:1  local_910
; undefined        Stack[-0x810]:1  local_810
; undefined        Stack[-0x710]:1  local_710
; undefined        Stack[-0x610]:1  local_610
; undefined        Stack[-0x510]:1  local_510
; undefined        Stack[-0x410]:1  local_410
; undefined        Stack[-0x310]:1  local_310
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   FUN_0049cc10 at 0049d54f
;
; Referenced Globals:
;   TerminatedCString s_s_s_00582402
;   string s_Quick_help_0058240a
;   string s_F1_=_Toggle_help_00582415
;   string s_F2_=_Save_game_00582426
;   string s_F3_=_Restore_game_00582435
;   string s_F5_=_Toggle_mute_00582447
;   string s_F6_=_Quick_save_00582458
;   string s_F9_=_Quick_load_00582468
;   string s_ESC_=_Pause_game_00582478
;   string s_Forward_00582489
;   TerminatedCString s_Back_00582491
;   TerminatedCString s_Walk_00582496
;   TerminatedCString s_Run_0058249b
;   string s_Strafe_on_0058249f
;   string s_Strafe_left_005824a9
;   ... and 31 more
;
; Called Functions:
;   core_menu.cpp_getKeyDisplayName_FUN_004d2900
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b4e0
        ;   Label: core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0
    PUSH ESI                            ; 0049b4e1
    PUSH EDI                            ; 0049b4e2
    PUSH EBP                            ; 0049b4e3
    SUB ESP,0x1c00                      ; 0049b4e4
    MOV EBX,dword ptr [0x005b761c]      ; 0049b4ea | DAT_005b761c
    MOV ESI,dword ptr [ESP + 0x1c14]    ; 0049b4f0
    PUSH 0xffff                         ; 0049b4f7
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0049b4fc
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 0049b501
    PUSH 0x58                           ; 0049b504
    MOV EDX,dword ptr [0x014b9900]      ; 0049b506 | DAT_014b9900
    PUSH EDX                            ; 0049b50c
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0049b50d
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 0049b512
    PUSH 0x58                           ; 0049b515
    MOV ECX,dword ptr [0x014b9900]      ; 0049b517 | DAT_014b9900
    PUSH ECX                            ; 0049b51d
    MOV [0x01c78ae4],EAX                ; 0049b51e | DAT_01c78ae4
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0 ; 0049b523
        ;   XREF to: 004930b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0()
    ADD ESP,0x8                         ; 0049b528
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b52b | DAT_01c78ae4
    MOV [0x01c78ae8],EAX                ; 0049b531 | DAT_01c78ae8
    PUSH 0x58240a                       ; 0049b536 | = "Quick help"
    SHL EDX,0x2                         ; 0049b53b
    SHL EAX,0x2                         ; 0049b53e
    MOV dword ptr [0x01c78ae0],EDX      ; 0049b541 | DAT_01c78ae0
    MOV [0x01c78adc],EAX                ; 0049b547 | DAT_01c78adc
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b54c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b551
    PUSH -0x1                           ; 0049b554
    PUSH 0x7                            ; 0049b556
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049b558 | DAT_01c78ae0
    PUSH EDI                            ; 0049b55e
    MOV EBP,dword ptr [0x01c78adc]      ; 0049b55f | DAT_01c78adc
    PUSH EBP                            ; 0049b565
    PUSH EAX                            ; 0049b566
    MOV EAX,[0x014b9900]                ; 0049b567 | DAT_014b9900
    PUSH EAX                            ; 0049b56c
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b56d
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b572 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049b577 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049b57d
    MOV EDX,dword ptr [0x005b7620]      ; 0049b580 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b586 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049b58c
    ADD ESP,0x18                        ; 0049b58e
    CMP EDX,ECX                         ; 0049b591
    JGE 0x0049b5c5                      ; 0049b593
        ;   XREF to: 0049b5c5 (CONDITIONAL_JUMP)  ; LAB_0049b5c5
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b595 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b59b
    MOV ECX,0x3                         ; 0049b5a2
    SUB EAX,EDX                         ; 0049b5a7
    MOV EBX,dword ptr [0x005b761c]      ; 0049b5a9 | DAT_005b761c
    ADD EAX,EAX                         ; 0049b5af
    MOV EDX,EBX                         ; 0049b5b1
    MOV [0x01c78ae0],EAX                ; 0049b5b3 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b5b8
    MOV EAX,EBX                         ; 0049b5bb
    IDIV ECX                            ; 0049b5bd
    ADD dword ptr [0x01c78adc],EAX      ; 0049b5bf | DAT_01c78adc
    MOV EAX,[0x01c78ae4]                ; 0049b5c5 | DAT_01c78ae4
        ;   Label: LAB_0049b5c5
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049b5ca | DAT_01c78ae0
    ADD EBP,EAX                         ; 0049b5d0
    PUSH 0x582415                       ; 0049b5d2 | = "F1 = Toggle help"
    MOV dword ptr [0x01c78ae0],EBP      ; 0049b5d7 | DAT_01c78ae0
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b5dd
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b5e2
    PUSH -0x1                           ; 0049b5e5
    PUSH 0x7                            ; 0049b5e7
    MOV EDX,dword ptr [0x01c78ae0]      ; 0049b5e9 | DAT_01c78ae0
    PUSH EDX                            ; 0049b5ef
    MOV ECX,dword ptr [0x01c78adc]      ; 0049b5f0 | DAT_01c78adc
    PUSH ECX                            ; 0049b5f6
    PUSH EAX                            ; 0049b5f7
    MOV EDI,dword ptr [0x014b9900]      ; 0049b5f8 | DAT_014b9900
    PUSH EDI                            ; 0049b5fe
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b5ff
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b604 | DAT_01c78ae4
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049b609 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049b60f | DAT_005b7620
    ADD EBP,EAX                         ; 0049b615
    SHL EAX,0x2                         ; 0049b617
    ADD ESP,0x18                        ; 0049b61a
    SUB EDX,EAX                         ; 0049b61d
    MOV dword ptr [0x01c78ae0],EBP      ; 0049b61f | DAT_01c78ae0
    CMP EDX,EBP                         ; 0049b625
    JGE 0x0049b659                      ; 0049b627
        ;   XREF to: 0049b659 (CONDITIONAL_JUMP)  ; LAB_0049b659
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b629 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b62f
    MOV ECX,0x3                         ; 0049b636
    SUB EAX,EDX                         ; 0049b63b
    MOV EBX,dword ptr [0x005b761c]      ; 0049b63d | DAT_005b761c
    ADD EAX,EAX                         ; 0049b643
    MOV EDX,EBX                         ; 0049b645
    MOV [0x01c78ae0],EAX                ; 0049b647 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b64c
    MOV EAX,EBX                         ; 0049b64f
    IDIV ECX                            ; 0049b651
    ADD dword ptr [0x01c78adc],EAX      ; 0049b653 | DAT_01c78adc
    PUSH 0x582426                       ; 0049b659 | = "F2 = Save game"
        ;   Label: LAB_0049b659
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b65e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b663
    PUSH -0x1                           ; 0049b666
    PUSH 0x7                            ; 0049b668
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049b66a | DAT_01c78ae0
    PUSH EDI                            ; 0049b670
    MOV EBP,dword ptr [0x01c78adc]      ; 0049b671 | DAT_01c78adc
    PUSH EBP                            ; 0049b677
    PUSH EAX                            ; 0049b678
    MOV EAX,[0x014b9900]                ; 0049b679 | DAT_014b9900
    PUSH EAX                            ; 0049b67e
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b67f
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b684 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049b689 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049b68f
    MOV EDX,dword ptr [0x005b7620]      ; 0049b692 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b698 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049b69e
    ADD ESP,0x18                        ; 0049b6a0
    CMP EDX,ECX                         ; 0049b6a3
    JGE 0x0049b6d7                      ; 0049b6a5
        ;   XREF to: 0049b6d7 (CONDITIONAL_JUMP)  ; LAB_0049b6d7
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b6a7 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b6ad
    MOV ECX,0x3                         ; 0049b6b4
    SUB EAX,EDX                         ; 0049b6b9
    MOV EBX,dword ptr [0x005b761c]      ; 0049b6bb | DAT_005b761c
    ADD EAX,EAX                         ; 0049b6c1
    MOV EDX,EBX                         ; 0049b6c3
    MOV [0x01c78ae0],EAX                ; 0049b6c5 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b6ca
    MOV EAX,EBX                         ; 0049b6cd
    IDIV ECX                            ; 0049b6cf
    ADD dword ptr [0x01c78adc],EAX      ; 0049b6d1 | DAT_01c78adc
    PUSH 0x582435                       ; 0049b6d7 | = "F3 = Restore game"
        ;   Label: LAB_0049b6d7
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b6dc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b6e1
    PUSH -0x1                           ; 0049b6e4
    PUSH 0x7                            ; 0049b6e6
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049b6e8 | DAT_01c78ae0
    PUSH EBP                            ; 0049b6ee
    MOV EDX,dword ptr [0x01c78adc]      ; 0049b6ef | DAT_01c78adc
    PUSH EDX                            ; 0049b6f5
    PUSH EAX                            ; 0049b6f6
    MOV ECX,dword ptr [0x014b9900]      ; 0049b6f7 | DAT_014b9900
    PUSH ECX                            ; 0049b6fd
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b6fe
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b703 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049b708 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049b70e | DAT_005b7620
    ADD EDI,EAX                         ; 0049b714
    SHL EAX,0x2                         ; 0049b716
    ADD ESP,0x18                        ; 0049b719
    SUB EDX,EAX                         ; 0049b71c
    MOV dword ptr [0x01c78ae0],EDI      ; 0049b71e | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049b724
    JGE 0x0049b758                      ; 0049b726
        ;   XREF to: 0049b758 (CONDITIONAL_JUMP)  ; LAB_0049b758
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b728 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b72e
    MOV ECX,0x3                         ; 0049b735
    SUB EAX,EDX                         ; 0049b73a
    MOV EBX,dword ptr [0x005b761c]      ; 0049b73c | DAT_005b761c
    ADD EAX,EAX                         ; 0049b742
    MOV EDX,EBX                         ; 0049b744
    MOV [0x01c78ae0],EAX                ; 0049b746 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b74b
    MOV EAX,EBX                         ; 0049b74e
    IDIV ECX                            ; 0049b750
    ADD dword ptr [0x01c78adc],EAX      ; 0049b752 | DAT_01c78adc
    PUSH 0x582447                       ; 0049b758 | = "F5 = Toggle mute"
        ;   Label: LAB_0049b758
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b75d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b762
    PUSH -0x1                           ; 0049b765
    PUSH 0x7                            ; 0049b767
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b769 | DAT_01c78ae0
    PUSH ECX                            ; 0049b76f
    MOV EDI,dword ptr [0x01c78adc]      ; 0049b770 | DAT_01c78adc
    PUSH EDI                            ; 0049b776
    PUSH EAX                            ; 0049b777
    MOV EBP,dword ptr [0x014b9900]      ; 0049b778 | DAT_014b9900
    PUSH EBP                            ; 0049b77e
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b77f
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b784 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049b789 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049b78f
    MOV EDX,dword ptr [0x005b7620]      ; 0049b792 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b798 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049b79e
    ADD ESP,0x18                        ; 0049b7a0
    CMP EDX,ECX                         ; 0049b7a3
    JGE 0x0049b7d7                      ; 0049b7a5
        ;   XREF to: 0049b7d7 (CONDITIONAL_JUMP)  ; LAB_0049b7d7
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b7a7 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b7ad
    MOV ECX,0x3                         ; 0049b7b4
    SUB EAX,EDX                         ; 0049b7b9
    MOV EBX,dword ptr [0x005b761c]      ; 0049b7bb | DAT_005b761c
    ADD EAX,EAX                         ; 0049b7c1
    MOV EDX,EBX                         ; 0049b7c3
    MOV [0x01c78ae0],EAX                ; 0049b7c5 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b7ca
    MOV EAX,EBX                         ; 0049b7cd
    IDIV ECX                            ; 0049b7cf
    ADD dword ptr [0x01c78adc],EAX      ; 0049b7d1 | DAT_01c78adc
    PUSH 0x582458                       ; 0049b7d7 | = "F6 = Quick save"
        ;   Label: LAB_0049b7d7
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b7dc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b7e1
    PUSH -0x1                           ; 0049b7e4
    PUSH 0x7                            ; 0049b7e6
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049b7e8 | DAT_01c78ae0
    PUSH EBP                            ; 0049b7ee
    MOV EDX,dword ptr [0x01c78adc]      ; 0049b7ef | DAT_01c78adc
    PUSH EDX                            ; 0049b7f5
    PUSH EAX                            ; 0049b7f6
    MOV ECX,dword ptr [0x014b9900]      ; 0049b7f7 | DAT_014b9900
    PUSH ECX                            ; 0049b7fd
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b7fe
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b803 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049b808 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049b80e | DAT_005b7620
    ADD EDI,EAX                         ; 0049b814
    SHL EAX,0x2                         ; 0049b816
    ADD ESP,0x18                        ; 0049b819
    SUB EDX,EAX                         ; 0049b81c
    MOV dword ptr [0x01c78ae0],EDI      ; 0049b81e | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049b824
    JGE 0x0049b858                      ; 0049b826
        ;   XREF to: 0049b858 (CONDITIONAL_JUMP)  ; LAB_0049b858
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b828 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b82e
    MOV ECX,0x3                         ; 0049b835
    SUB EAX,EDX                         ; 0049b83a
    MOV EBX,dword ptr [0x005b761c]      ; 0049b83c | DAT_005b761c
    ADD EAX,EAX                         ; 0049b842
    MOV EDX,EBX                         ; 0049b844
    MOV [0x01c78ae0],EAX                ; 0049b846 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b84b
    MOV EAX,EBX                         ; 0049b84e
    IDIV ECX                            ; 0049b850
    ADD dword ptr [0x01c78adc],EAX      ; 0049b852 | DAT_01c78adc
    PUSH 0x582468                       ; 0049b858 | = "F9 = Quick load"
        ;   Label: LAB_0049b858
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b85d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b862
    PUSH -0x1                           ; 0049b865
    PUSH 0x7                            ; 0049b867
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b869 | DAT_01c78ae0
    PUSH ECX                            ; 0049b86f
    MOV EDI,dword ptr [0x01c78adc]      ; 0049b870 | DAT_01c78adc
    PUSH EDI                            ; 0049b876
    PUSH EAX                            ; 0049b877
    MOV EBP,dword ptr [0x014b9900]      ; 0049b878 | DAT_014b9900
    PUSH EBP                            ; 0049b87e
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b87f
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b884 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049b889 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049b88f
    MOV EDX,dword ptr [0x005b7620]      ; 0049b892 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b898 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049b89e
    ADD ESP,0x18                        ; 0049b8a0
    CMP EDX,ECX                         ; 0049b8a3
    JGE 0x0049b8d7                      ; 0049b8a5
        ;   XREF to: 0049b8d7 (CONDITIONAL_JUMP)  ; LAB_0049b8d7
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b8a7 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b8ad
    MOV ECX,0x3                         ; 0049b8b4
    SUB EAX,EDX                         ; 0049b8b9
    MOV EBX,dword ptr [0x005b761c]      ; 0049b8bb | DAT_005b761c
    ADD EAX,EAX                         ; 0049b8c1
    MOV EDX,EBX                         ; 0049b8c3
    MOV [0x01c78ae0],EAX                ; 0049b8c5 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b8ca
    MOV EAX,EBX                         ; 0049b8cd
    IDIV ECX                            ; 0049b8cf
    ADD dword ptr [0x01c78adc],EAX      ; 0049b8d1 | DAT_01c78adc
    PUSH 0x582478                       ; 0049b8d7 | = "ESC = Pause game"
        ;   Label: LAB_0049b8d7
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b8dc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b8e1
    PUSH -0x1                           ; 0049b8e4
    PUSH 0x7                            ; 0049b8e6
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049b8e8 | DAT_01c78ae0
    PUSH EBP                            ; 0049b8ee
    MOV EDX,dword ptr [0x01c78adc]      ; 0049b8ef | DAT_01c78adc
    PUSH EDX                            ; 0049b8f5
    PUSH EAX                            ; 0049b8f6
    MOV ECX,dword ptr [0x014b9900]      ; 0049b8f7 | DAT_014b9900
    PUSH ECX                            ; 0049b8fd
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b8fe
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b903 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049b908 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049b90e | DAT_005b7620
    ADD EDI,EAX                         ; 0049b914
    SHL EAX,0x2                         ; 0049b916
    ADD ESP,0x18                        ; 0049b919
    SUB EDX,EAX                         ; 0049b91c
    MOV dword ptr [0x01c78ae0],EDI      ; 0049b91e | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049b924
    JGE 0x0049b958                      ; 0049b926
        ;   XREF to: 0049b958 (CONDITIONAL_JUMP)  ; LAB_0049b958
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b928 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b92e
    MOV ECX,0x3                         ; 0049b935
    SUB EAX,EDX                         ; 0049b93a
    MOV EBX,dword ptr [0x005b761c]      ; 0049b93c | DAT_005b761c
    ADD EAX,EAX                         ; 0049b942
    MOV EDX,EBX                         ; 0049b944
    MOV [0x01c78ae0],EAX                ; 0049b946 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049b94b
    MOV EAX,EBX                         ; 0049b94e
    IDIV ECX                            ; 0049b950
    ADD dword ptr [0x01c78adc],EAX      ; 0049b952 | DAT_01c78adc
    MOV EAX,[0x01c78ae4]                ; 0049b958 | DAT_01c78ae4
        ;   Label: LAB_0049b958
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b95d | DAT_01c78ae0
    ADD ECX,EAX                         ; 0049b963
    PUSH 0x582489                       ; 0049b965 | = "Forward"
    MOV dword ptr [0x01c78ae0],ECX      ; 0049b96a | DAT_01c78ae0
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049b970
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049b975
    PUSH EAX                            ; 0049b978
    MOV EDX,dword ptr [ESI + 0x28]      ; 0049b979
    PUSH EDX                            ; 0049b97c
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049b97d
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049b982
    PUSH EAX                            ; 0049b985
    PUSH 0x582402                       ; 0049b986 | = "%s = %s"
    LEA EAX,[ESP + 0x40c]               ; 0049b98b
    PUSH EAX                            ; 0049b992
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049b993
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049b998
    PUSH -0x1                           ; 0049b99b
    PUSH 0x7                            ; 0049b99d
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049b99f | DAT_01c78ae0
    PUSH EDI                            ; 0049b9a5
    MOV EBP,dword ptr [0x01c78adc]      ; 0049b9a6 | DAT_01c78adc
    PUSH EBP                            ; 0049b9ac
    LEA EAX,[ESP + 0x410]               ; 0049b9ad
    PUSH EAX                            ; 0049b9b4
    MOV EAX,[0x014b9900]                ; 0049b9b5 | DAT_014b9900
    PUSH EAX                            ; 0049b9ba
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b9bb
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049b9c0 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049b9c5 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049b9cb
    MOV EDX,dword ptr [0x005b7620]      ; 0049b9ce | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049b9d4 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049b9da
    ADD ESP,0x18                        ; 0049b9dc
    CMP EDX,ECX                         ; 0049b9df
    JGE 0x0049ba13                      ; 0049b9e1
        ;   XREF to: 0049ba13 (CONDITIONAL_JUMP)  ; LAB_0049ba13
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b9e3 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b9e9
    MOV ECX,0x3                         ; 0049b9f0
    SUB EAX,EDX                         ; 0049b9f5
    MOV EBX,dword ptr [0x005b761c]      ; 0049b9f7 | DAT_005b761c
    ADD EAX,EAX                         ; 0049b9fd
    MOV EDX,EBX                         ; 0049b9ff
    MOV [0x01c78ae0],EAX                ; 0049ba01 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049ba06
    MOV EAX,EBX                         ; 0049ba09
    IDIV ECX                            ; 0049ba0b
    ADD dword ptr [0x01c78adc],EAX      ; 0049ba0d | DAT_01c78adc
    PUSH 0x582491                       ; 0049ba13 | = "Back"
        ;   Label: LAB_0049ba13
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049ba18
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049ba1d
    PUSH EAX                            ; 0049ba20
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0049ba21
    PUSH EDX                            ; 0049ba24
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049ba25
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049ba2a
    PUSH EAX                            ; 0049ba2d
    PUSH 0x582402                       ; 0049ba2e | = "%s = %s"
    LEA EAX,[ESP + 0xb0c]               ; 0049ba33
    PUSH EAX                            ; 0049ba3a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049ba3b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049ba40
    PUSH -0x1                           ; 0049ba43
    PUSH 0x7                            ; 0049ba45
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049ba47 | DAT_01c78ae0
    PUSH EBP                            ; 0049ba4d
    MOV EAX,[0x01c78adc]                ; 0049ba4e | DAT_01c78adc
    PUSH EAX                            ; 0049ba53
    LEA EAX,[ESP + 0xb10]               ; 0049ba54
    PUSH EAX                            ; 0049ba5b
    MOV EDX,dword ptr [0x014b9900]      ; 0049ba5c | DAT_014b9900
    PUSH EDX                            ; 0049ba62
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049ba63
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049ba68 | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049ba6d | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049ba73 | DAT_005b7620
    ADD ECX,EAX                         ; 0049ba79
    SHL EAX,0x2                         ; 0049ba7b
    ADD ESP,0x18                        ; 0049ba7e
    SUB EDX,EAX                         ; 0049ba81
    MOV dword ptr [0x01c78ae0],ECX      ; 0049ba83 | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049ba89
    JGE 0x0049babd                      ; 0049ba8b
        ;   XREF to: 0049babd (CONDITIONAL_JUMP)  ; LAB_0049babd
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049ba8d | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ba93
    MOV ECX,0x3                         ; 0049ba9a
    SUB EAX,EDX                         ; 0049ba9f
    MOV EBX,dword ptr [0x005b761c]      ; 0049baa1 | DAT_005b761c
    ADD EAX,EAX                         ; 0049baa7
    MOV EDX,EBX                         ; 0049baa9
    MOV [0x01c78ae0],EAX                ; 0049baab | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049bab0
    MOV EAX,EBX                         ; 0049bab3
    IDIV ECX                            ; 0049bab5
    ADD dword ptr [0x01c78adc],EAX      ; 0049bab7 | DAT_01c78adc
    MOV EAX,[0x005b9354]                ; 0049babd | DAT_005b9354
        ;   Label: LAB_0049babd
    CMP dword ptr [EAX + 0x98],0x0      ; 0049bac2 | DAT_01c77684
    JZ 0x0049cb4f                       ; 0049bac9
        ;   XREF to: 0049cb4f (CONDITIONAL_JUMP)  ; LAB_0049cb4f
    PUSH 0x582496                       ; 0049bacf | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049bad4
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049bad9
    PUSH EAX                            ; 0049badc
    MOV EDX,dword ptr [ESI + 0x30]      ; 0049badd
    PUSH EDX                            ; 0049bae0
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049bae1
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049bae6
    PUSH EAX                            ; 0049bae9
    PUSH 0x582402                       ; 0049baea | = "%s = %s"
    LEA EAX,[ESP + 0x130c]              ; 0049baef
    PUSH EAX                            ; 0049baf6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049baf7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049bafc
    PUSH -0x1                           ; 0049baff
    PUSH 0x7                            ; 0049bb01
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049bb03 | DAT_01c78ae0
    PUSH EBP                            ; 0049bb09
    MOV EAX,[0x01c78adc]                ; 0049bb0a | DAT_01c78adc
    PUSH EAX                            ; 0049bb0f
    LEA EAX,[ESP + 0x1310]              ; 0049bb10
    PUSH EAX                            ; 0049bb17
    MOV EDX,dword ptr [0x014b9900]      ; 0049bb18 | DAT_014b9900
    PUSH EDX                            ; 0049bb1e
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049bb1f
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049bb24 | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049bb29 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049bb2f | DAT_005b7620
    ADD ECX,EAX                         ; 0049bb35
    SHL EAX,0x2                         ; 0049bb37
    ADD ESP,0x18                        ; 0049bb3a
    SUB EDX,EAX                         ; 0049bb3d
    MOV dword ptr [0x01c78ae0],ECX      ; 0049bb3f | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049bb45
        ;   Label: LAB_0049bb45
    JGE 0x0049bb79                      ; 0049bb47
        ;   XREF to: 0049bb79 (CONDITIONAL_JUMP)  ; LAB_0049bb79
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049bb49 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049bb4f
    MOV ECX,0x3                         ; 0049bb56
    SUB EAX,EDX                         ; 0049bb5b
    MOV EBX,dword ptr [0x005b761c]      ; 0049bb5d | DAT_005b761c
    ADD EAX,EAX                         ; 0049bb63
    MOV EDX,EBX                         ; 0049bb65
    MOV [0x01c78ae0],EAX                ; 0049bb67 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049bb6c
    MOV EAX,EBX                         ; 0049bb6f
    IDIV ECX                            ; 0049bb71
    ADD dword ptr [0x01c78adc],EAX      ; 0049bb73 | DAT_01c78adc
    PUSH 0x58249f                       ; 0049bb79 | = "Strafe on"
        ;   Label: LAB_0049bb79
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049bb7e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049bb83
    PUSH EAX                            ; 0049bb86
    MOV EDX,dword ptr [ESI + 0x34]      ; 0049bb87
    PUSH EDX                            ; 0049bb8a
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049bb8b
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049bb90
    PUSH EAX                            ; 0049bb93
    PUSH 0x582402                       ; 0049bb94 | = "%s = %s"
    LEA EAX,[ESP + 0x20c]               ; 0049bb99
    PUSH EAX                            ; 0049bba0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049bba1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049bba6
    PUSH -0x1                           ; 0049bba9
    PUSH 0x7                            ; 0049bbab
    MOV EAX,[0x01c78ae0]                ; 0049bbad | DAT_01c78ae0
    PUSH EAX                            ; 0049bbb2
    MOV EDX,dword ptr [0x01c78adc]      ; 0049bbb3 | DAT_01c78adc
    PUSH EDX                            ; 0049bbb9
    LEA EAX,[ESP + 0x210]               ; 0049bbba
    PUSH EAX                            ; 0049bbc1
    MOV ECX,dword ptr [0x014b9900]      ; 0049bbc2 | DAT_014b9900
    PUSH ECX                            ; 0049bbc8
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049bbc9
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049bbce | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049bbd3 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049bbd9 | DAT_005b7620
    ADD EDI,EAX                         ; 0049bbdf
    SHL EAX,0x2                         ; 0049bbe1
    ADD ESP,0x18                        ; 0049bbe4
    SUB EDX,EAX                         ; 0049bbe7
    MOV dword ptr [0x01c78ae0],EDI      ; 0049bbe9 | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049bbef
    JGE 0x0049bc23                      ; 0049bbf1
        ;   XREF to: 0049bc23 (CONDITIONAL_JUMP)  ; LAB_0049bc23
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049bbf3 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049bbf9
    MOV ECX,0x3                         ; 0049bc00
    SUB EAX,EDX                         ; 0049bc05
    MOV EBX,dword ptr [0x005b761c]      ; 0049bc07 | DAT_005b761c
    ADD EAX,EAX                         ; 0049bc0d
    MOV EDX,EBX                         ; 0049bc0f
    MOV [0x01c78ae0],EAX                ; 0049bc11 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049bc16
    MOV EAX,EBX                         ; 0049bc19
    IDIV ECX                            ; 0049bc1b
    ADD dword ptr [0x01c78adc],EAX      ; 0049bc1d | DAT_01c78adc
    PUSH 0x5824a9                       ; 0049bc23 | = "Strafe left"
        ;   Label: LAB_0049bc23
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049bc28
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049bc2d
    PUSH EAX                            ; 0049bc30
    MOV EDX,dword ptr [ESI + 0x38]      ; 0049bc31
    PUSH EDX                            ; 0049bc34
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049bc35
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049bc3a
    PUSH EAX                            ; 0049bc3d
    PUSH 0x582402                       ; 0049bc3e | = "%s = %s"
    LEA EAX,[ESP + 0x90c]               ; 0049bc43
    PUSH EAX                            ; 0049bc4a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049bc4b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049bc50
    PUSH -0x1                           ; 0049bc53
    PUSH 0x7                            ; 0049bc55
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049bc57 | DAT_01c78ae0
    PUSH ECX                            ; 0049bc5d
    MOV EDI,dword ptr [0x01c78adc]      ; 0049bc5e | DAT_01c78adc
    PUSH EDI                            ; 0049bc64
    LEA EAX,[ESP + 0x910]               ; 0049bc65
    PUSH EAX                            ; 0049bc6c
    MOV EBP,dword ptr [0x014b9900]      ; 0049bc6d | DAT_014b9900
    PUSH EBP                            ; 0049bc73
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049bc74
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049bc79 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049bc7e | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049bc84
    MOV EDX,dword ptr [0x005b7620]      ; 0049bc87 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049bc8d | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049bc93
    ADD ESP,0x18                        ; 0049bc95
    CMP EDX,ECX                         ; 0049bc98
    JGE 0x0049bccc                      ; 0049bc9a
        ;   XREF to: 0049bccc (CONDITIONAL_JUMP)  ; LAB_0049bccc
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049bc9c | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049bca2
    MOV ECX,0x3                         ; 0049bca9
    SUB EAX,EDX                         ; 0049bcae
    MOV EBX,dword ptr [0x005b761c]      ; 0049bcb0 | DAT_005b761c
    ADD EAX,EAX                         ; 0049bcb6
    MOV EDX,EBX                         ; 0049bcb8
    MOV [0x01c78ae0],EAX                ; 0049bcba | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049bcbf
    MOV EAX,EBX                         ; 0049bcc2
    IDIV ECX                            ; 0049bcc4
    ADD dword ptr [0x01c78adc],EAX      ; 0049bcc6 | DAT_01c78adc
    PUSH 0x5824b5                       ; 0049bccc | = "Strafe right"
        ;   Label: LAB_0049bccc
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049bcd1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049bcd6
    PUSH EAX                            ; 0049bcd9
    MOV EDX,dword ptr [ESI + 0x3c]      ; 0049bcda
    PUSH EDX                            ; 0049bcdd
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049bcde
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049bce3
    PUSH EAX                            ; 0049bce6
    PUSH 0x582402                       ; 0049bce7 | = "%s = %s"
    LEA EAX,[ESP + 0x100c]              ; 0049bcec
    PUSH EAX                            ; 0049bcf3
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049bcf4
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049bcf9
    PUSH -0x1                           ; 0049bcfc
    PUSH 0x7                            ; 0049bcfe
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049bd00 | DAT_01c78ae0
    PUSH EBP                            ; 0049bd06
    MOV EAX,[0x01c78adc]                ; 0049bd07 | DAT_01c78adc
    PUSH EAX                            ; 0049bd0c
    LEA EAX,[ESP + 0x1010]              ; 0049bd0d
    PUSH EAX                            ; 0049bd14
    MOV EDX,dword ptr [0x014b9900]      ; 0049bd15 | DAT_014b9900
    PUSH EDX                            ; 0049bd1b
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049bd1c
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049bd21 | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049bd26 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049bd2c | DAT_005b7620
    ADD ECX,EAX                         ; 0049bd32
    SHL EAX,0x2                         ; 0049bd34
    ADD ESP,0x18                        ; 0049bd37
    SUB EDX,EAX                         ; 0049bd3a
    MOV dword ptr [0x01c78ae0],ECX      ; 0049bd3c | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049bd42
    JGE 0x0049bd76                      ; 0049bd44
        ;   XREF to: 0049bd76 (CONDITIONAL_JUMP)  ; LAB_0049bd76
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049bd46 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049bd4c
    MOV ECX,0x3                         ; 0049bd53
    SUB EAX,EDX                         ; 0049bd58
    MOV EBX,dword ptr [0x005b761c]      ; 0049bd5a | DAT_005b761c
    ADD EAX,EAX                         ; 0049bd60
    MOV EDX,EBX                         ; 0049bd62
    MOV [0x01c78ae0],EAX                ; 0049bd64 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049bd69
    MOV EAX,EBX                         ; 0049bd6c
    IDIV ECX                            ; 0049bd6e
    ADD dword ptr [0x01c78adc],EAX      ; 0049bd70 | DAT_01c78adc
    PUSH 0x5824c2                       ; 0049bd76 | = "Turn left"
        ;   Label: LAB_0049bd76
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049bd7b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049bd80
    PUSH EAX                            ; 0049bd83
    MOV EDX,dword ptr [ESI + 0x44]      ; 0049bd84
    PUSH EDX                            ; 0049bd87
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049bd88
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049bd8d
    PUSH EAX                            ; 0049bd90
    PUSH 0x582402                       ; 0049bd91 | = "%s = %s"
    LEA EAX,[ESP + 0x170c]              ; 0049bd96
    PUSH EAX                            ; 0049bd9d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049bd9e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049bda3
    PUSH -0x1                           ; 0049bda6
    PUSH 0x7                            ; 0049bda8
    MOV EAX,[0x01c78ae0]                ; 0049bdaa | DAT_01c78ae0
    PUSH EAX                            ; 0049bdaf
    MOV EDX,dword ptr [0x01c78adc]      ; 0049bdb0 | DAT_01c78adc
    PUSH EDX                            ; 0049bdb6
    LEA EAX,[ESP + 0x1710]              ; 0049bdb7
    PUSH EAX                            ; 0049bdbe
    MOV ECX,dword ptr [0x014b9900]      ; 0049bdbf | DAT_014b9900
    PUSH ECX                            ; 0049bdc5
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049bdc6
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049bdcb | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049bdd0 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049bdd6 | DAT_005b7620
    ADD EDI,EAX                         ; 0049bddc
    SHL EAX,0x2                         ; 0049bdde
    ADD ESP,0x18                        ; 0049bde1
    SUB EDX,EAX                         ; 0049bde4
    MOV dword ptr [0x01c78ae0],EDI      ; 0049bde6 | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049bdec
    JGE 0x0049be20                      ; 0049bdee
        ;   XREF to: 0049be20 (CONDITIONAL_JUMP)  ; LAB_0049be20
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049bdf0 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049bdf6
    MOV ECX,0x3                         ; 0049bdfd
    SUB EAX,EDX                         ; 0049be02
    MOV EBX,dword ptr [0x005b761c]      ; 0049be04 | DAT_005b761c
    ADD EAX,EAX                         ; 0049be0a
    MOV EDX,EBX                         ; 0049be0c
    MOV [0x01c78ae0],EAX                ; 0049be0e | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049be13
    MOV EAX,EBX                         ; 0049be16
    IDIV ECX                            ; 0049be18
    ADD dword ptr [0x01c78adc],EAX      ; 0049be1a | DAT_01c78adc
    PUSH 0x5824cc                       ; 0049be20 | = "Turn right"
        ;   Label: LAB_0049be20
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049be25
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049be2a
    PUSH EAX                            ; 0049be2d
    MOV EDX,dword ptr [ESI + 0x40]      ; 0049be2e
    PUSH EDX                            ; 0049be31
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049be32
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049be37
    PUSH EAX                            ; 0049be3a
    PUSH 0x582402                       ; 0049be3b | = "%s = %s"
    LEA EAX,[ESP + 0x150c]              ; 0049be40
    PUSH EAX                            ; 0049be47
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049be48
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049be4d
    PUSH -0x1                           ; 0049be50
    PUSH 0x7                            ; 0049be52
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049be54 | DAT_01c78ae0
    PUSH ECX                            ; 0049be5a
    MOV EDI,dword ptr [0x01c78adc]      ; 0049be5b | DAT_01c78adc
    PUSH EDI                            ; 0049be61
    LEA EAX,[ESP + 0x1510]              ; 0049be62
    PUSH EAX                            ; 0049be69
    MOV EBP,dword ptr [0x014b9900]      ; 0049be6a | DAT_014b9900
    PUSH EBP                            ; 0049be70
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049be71
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049be76 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049be7b | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049be81
    MOV EDX,dword ptr [0x005b7620]      ; 0049be84 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049be8a | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049be90
    ADD ESP,0x18                        ; 0049be92
    CMP EDX,ECX                         ; 0049be95
    JGE 0x0049bec9                      ; 0049be97
        ;   XREF to: 0049bec9 (CONDITIONAL_JUMP)  ; LAB_0049bec9
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049be99 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049be9f
    MOV ECX,0x3                         ; 0049bea6
    SUB EAX,EDX                         ; 0049beab
    MOV EBX,dword ptr [0x005b761c]      ; 0049bead | DAT_005b761c
    ADD EAX,EAX                         ; 0049beb3
    MOV EDX,EBX                         ; 0049beb5
    MOV [0x01c78ae0],EAX                ; 0049beb7 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049bebc
    MOV EAX,EBX                         ; 0049bebf
    IDIV ECX                            ; 0049bec1
    ADD dword ptr [0x01c78adc],EAX      ; 0049bec3 | DAT_01c78adc
    PUSH 0x5824d7                       ; 0049bec9 | = "Fire / Action"
        ;   Label: LAB_0049bec9
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049bece
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049bed3
    PUSH EAX                            ; 0049bed6
    MOV EDX,dword ptr [ESI + 0x48]      ; 0049bed7
    PUSH EDX                            ; 0049beda
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049bedb
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049bee0
    PUSH EAX                            ; 0049bee3
    PUSH 0x582402                       ; 0049bee4 | = "%s = %s"
    LEA EAX,[ESP + 0x140c]              ; 0049bee9
    PUSH EAX                            ; 0049bef0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049bef1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049bef6
    PUSH -0x1                           ; 0049bef9
    PUSH 0x7                            ; 0049befb
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049befd | DAT_01c78ae0
    PUSH EBP                            ; 0049bf03
    MOV EAX,[0x01c78adc]                ; 0049bf04 | DAT_01c78adc
    PUSH EAX                            ; 0049bf09
    LEA EAX,[ESP + 0x1410]              ; 0049bf0a
    PUSH EAX                            ; 0049bf11
    MOV EDX,dword ptr [0x014b9900]      ; 0049bf12 | DAT_014b9900
    PUSH EDX                            ; 0049bf18
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049bf19
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049bf1e | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049bf23 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049bf29 | DAT_005b7620
    ADD ECX,EAX                         ; 0049bf2f
    SHL EAX,0x2                         ; 0049bf31
    ADD ESP,0x18                        ; 0049bf34
    SUB EDX,EAX                         ; 0049bf37
    MOV dword ptr [0x01c78ae0],ECX      ; 0049bf39 | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049bf3f
    JGE 0x0049bf73                      ; 0049bf41
        ;   XREF to: 0049bf73 (CONDITIONAL_JUMP)  ; LAB_0049bf73
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049bf43 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049bf49
    MOV ECX,0x3                         ; 0049bf50
    SUB EAX,EDX                         ; 0049bf55
    MOV EBX,dword ptr [0x005b761c]      ; 0049bf57 | DAT_005b761c
    ADD EAX,EAX                         ; 0049bf5d
    MOV EDX,EBX                         ; 0049bf5f
    MOV [0x01c78ae0],EAX                ; 0049bf61 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049bf66
    MOV EAX,EBX                         ; 0049bf69
    IDIV ECX                            ; 0049bf6b
    ADD dword ptr [0x01c78adc],EAX      ; 0049bf6d | DAT_01c78adc
    PUSH 0x5824e5                       ; 0049bf73 | = "Use item"
        ;   Label: LAB_0049bf73
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049bf78
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049bf7d
    PUSH EAX                            ; 0049bf80
    MOV EDX,dword ptr [ESI + 0x4c]      ; 0049bf81
    PUSH EDX                            ; 0049bf84
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049bf85
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049bf8a
    PUSH EAX                            ; 0049bf8d
    PUSH 0x582402                       ; 0049bf8e | = "%s = %s"
    LEA EAX,[ESP + 0x1a0c]              ; 0049bf93
    PUSH EAX                            ; 0049bf9a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049bf9b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049bfa0
    PUSH -0x1                           ; 0049bfa3
    PUSH 0x7                            ; 0049bfa5
    MOV EAX,[0x01c78ae0]                ; 0049bfa7 | DAT_01c78ae0
    PUSH EAX                            ; 0049bfac
    MOV EDX,dword ptr [0x01c78adc]      ; 0049bfad | DAT_01c78adc
    PUSH EDX                            ; 0049bfb3
    LEA EAX,[ESP + 0x1a10]              ; 0049bfb4
    PUSH EAX                            ; 0049bfbb
    MOV ECX,dword ptr [0x014b9900]      ; 0049bfbc | DAT_014b9900
    PUSH ECX                            ; 0049bfc2
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049bfc3
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049bfc8 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049bfcd | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049bfd3 | DAT_005b7620
    ADD EDI,EAX                         ; 0049bfd9
    SHL EAX,0x2                         ; 0049bfdb
    ADD ESP,0x18                        ; 0049bfde
    SUB EDX,EAX                         ; 0049bfe1
    MOV dword ptr [0x01c78ae0],EDI      ; 0049bfe3 | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049bfe9
    JGE 0x0049c01d                      ; 0049bfeb
        ;   XREF to: 0049c01d (CONDITIONAL_JUMP)  ; LAB_0049c01d
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049bfed | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049bff3
    MOV ECX,0x3                         ; 0049bffa
    SUB EAX,EDX                         ; 0049bfff
    MOV EBX,dword ptr [0x005b761c]      ; 0049c001 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c007
    MOV EDX,EBX                         ; 0049c009
    MOV [0x01c78ae0],EAX                ; 0049c00b | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c010
    MOV EAX,EBX                         ; 0049c013
    IDIV ECX                            ; 0049c015
    ADD dword ptr [0x01c78adc],EAX      ; 0049c017 | DAT_01c78adc
    PUSH 0x5824ee                       ; 0049c01d | = "Light"
        ;   Label: LAB_0049c01d
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c022
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c027
    PUSH EAX                            ; 0049c02a
    MOV EDX,dword ptr [ESI + 0x50]      ; 0049c02b
    PUSH EDX                            ; 0049c02e
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c02f
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c034
    PUSH EAX                            ; 0049c037
    PUSH 0x582402                       ; 0049c038 | = "%s = %s"
    LEA EAX,[ESP + 0x120c]              ; 0049c03d
    PUSH EAX                            ; 0049c044
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c045
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c04a
    PUSH -0x1                           ; 0049c04d
    PUSH 0x7                            ; 0049c04f
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c051 | DAT_01c78ae0
    PUSH ECX                            ; 0049c057
    MOV EDI,dword ptr [0x01c78adc]      ; 0049c058 | DAT_01c78adc
    PUSH EDI                            ; 0049c05e
    LEA EAX,[ESP + 0x1210]              ; 0049c05f
    PUSH EAX                            ; 0049c066
    MOV EBP,dword ptr [0x014b9900]      ; 0049c067 | DAT_014b9900
    PUSH EBP                            ; 0049c06d
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c06e
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c073 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049c078 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049c07e
    MOV EDX,dword ptr [0x005b7620]      ; 0049c081 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c087 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049c08d
    ADD ESP,0x18                        ; 0049c08f
    CMP EDX,ECX                         ; 0049c092
    JGE 0x0049c0c6                      ; 0049c094
        ;   XREF to: 0049c0c6 (CONDITIONAL_JUMP)  ; LAB_0049c0c6
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c096 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c09c
    MOV ECX,0x3                         ; 0049c0a3
    SUB EAX,EDX                         ; 0049c0a8
    MOV EBX,dword ptr [0x005b761c]      ; 0049c0aa | DAT_005b761c
    ADD EAX,EAX                         ; 0049c0b0
    MOV EDX,EBX                         ; 0049c0b2
    MOV [0x01c78ae0],EAX                ; 0049c0b4 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c0b9
    MOV EAX,EBX                         ; 0049c0bc
    IDIV ECX                            ; 0049c0be
    ADD dword ptr [0x01c78adc],EAX      ; 0049c0c0 | DAT_01c78adc
    PUSH 0x5824f4                       ; 0049c0c6 | = "Night Vision"
        ;   Label: LAB_0049c0c6
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c0cb
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c0d0
    PUSH EAX                            ; 0049c0d3
    MOV EDX,dword ptr [ESI + 0x54]      ; 0049c0d4
    PUSH EDX                            ; 0049c0d7
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c0d8
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c0dd
    PUSH EAX                            ; 0049c0e0
    PUSH 0x582402                       ; 0049c0e1 | = "%s = %s"
    LEA EAX,[ESP + 0x190c]              ; 0049c0e6
    PUSH EAX                            ; 0049c0ed
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c0ee
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c0f3
    PUSH -0x1                           ; 0049c0f6
    PUSH 0x7                            ; 0049c0f8
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049c0fa | DAT_01c78ae0
    PUSH EBP                            ; 0049c100
    MOV EAX,[0x01c78adc]                ; 0049c101 | DAT_01c78adc
    PUSH EAX                            ; 0049c106
    LEA EAX,[ESP + 0x1910]              ; 0049c107
    PUSH EAX                            ; 0049c10e
    MOV EDX,dword ptr [0x014b9900]      ; 0049c10f | DAT_014b9900
    PUSH EDX                            ; 0049c115
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c116
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c11b | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c120 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c126 | DAT_005b7620
    ADD ECX,EAX                         ; 0049c12c
    SHL EAX,0x2                         ; 0049c12e
    ADD ESP,0x18                        ; 0049c131
    SUB EDX,EAX                         ; 0049c134
    MOV dword ptr [0x01c78ae0],ECX      ; 0049c136 | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049c13c
    JGE 0x0049c170                      ; 0049c13e
        ;   XREF to: 0049c170 (CONDITIONAL_JUMP)  ; LAB_0049c170
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c140 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c146
    MOV ECX,0x3                         ; 0049c14d
    SUB EAX,EDX                         ; 0049c152
    MOV EBX,dword ptr [0x005b761c]      ; 0049c154 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c15a
    MOV EDX,EBX                         ; 0049c15c
    MOV [0x01c78ae0],EAX                ; 0049c15e | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c163
    MOV EAX,EBX                         ; 0049c166
    IDIV ECX                            ; 0049c168
    ADD dword ptr [0x01c78adc],EAX      ; 0049c16a | DAT_01c78adc
    PUSH 0x582501                       ; 0049c170 | = "Draw"
        ;   Label: LAB_0049c170
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c175
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c17a
    PUSH EAX                            ; 0049c17d
    MOV EDX,dword ptr [ESI + 0x58]      ; 0049c17e
    PUSH EDX                            ; 0049c181
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c182
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c187
    PUSH EAX                            ; 0049c18a
    PUSH 0x582402                       ; 0049c18b | = "%s = %s"
    LEA EAX,[ESP + 0x10c]               ; 0049c190
    PUSH EAX                            ; 0049c197
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c198
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c19d
    PUSH -0x1                           ; 0049c1a0
    PUSH 0x7                            ; 0049c1a2
    MOV EAX,[0x01c78ae0]                ; 0049c1a4 | DAT_01c78ae0
    PUSH EAX                            ; 0049c1a9
    MOV EDX,dword ptr [0x01c78adc]      ; 0049c1aa | DAT_01c78adc
    PUSH EDX                            ; 0049c1b0
    LEA EAX,[ESP + 0x110]               ; 0049c1b1
    PUSH EAX                            ; 0049c1b8
    MOV ECX,dword ptr [0x014b9900]      ; 0049c1b9 | DAT_014b9900
    PUSH ECX                            ; 0049c1bf
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c1c0
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c1c5 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049c1ca | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c1d0 | DAT_005b7620
    ADD EDI,EAX                         ; 0049c1d6
    SHL EAX,0x2                         ; 0049c1d8
    ADD ESP,0x18                        ; 0049c1db
    SUB EDX,EAX                         ; 0049c1de
    MOV dword ptr [0x01c78ae0],EDI      ; 0049c1e0 | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049c1e6
    JGE 0x0049c21a                      ; 0049c1e8
        ;   XREF to: 0049c21a (CONDITIONAL_JUMP)  ; LAB_0049c21a
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c1ea | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c1f0
    MOV ECX,0x3                         ; 0049c1f7
    SUB EAX,EDX                         ; 0049c1fc
    MOV EBX,dword ptr [0x005b761c]      ; 0049c1fe | DAT_005b761c
    ADD EAX,EAX                         ; 0049c204
    MOV EDX,EBX                         ; 0049c206
    MOV [0x01c78ae0],EAX                ; 0049c208 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c20d
    MOV EAX,EBX                         ; 0049c210
    IDIV ECX                            ; 0049c212
    ADD dword ptr [0x01c78adc],EAX      ; 0049c214 | DAT_01c78adc
    PUSH 0x582506                       ; 0049c21a | = "Point up"
        ;   Label: LAB_0049c21a
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c21f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c224
    PUSH EAX                            ; 0049c227
    MOV EDX,dword ptr [ESI + 0x60]      ; 0049c228
    PUSH EDX                            ; 0049c22b
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c22c
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c231
    PUSH EAX                            ; 0049c234
    PUSH 0x582402                       ; 0049c235 | = "%s = %s"
    LEA EAX,[ESP + 0x80c]               ; 0049c23a
    PUSH EAX                            ; 0049c241
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c242
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c247
    PUSH -0x1                           ; 0049c24a
    PUSH 0x7                            ; 0049c24c
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c24e | DAT_01c78ae0
    PUSH ECX                            ; 0049c254
    MOV EDI,dword ptr [0x01c78adc]      ; 0049c255 | DAT_01c78adc
    PUSH EDI                            ; 0049c25b
    LEA EAX,[ESP + 0x810]               ; 0049c25c
    PUSH EAX                            ; 0049c263
    MOV EBP,dword ptr [0x014b9900]      ; 0049c264 | DAT_014b9900
    PUSH EBP                            ; 0049c26a
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c26b
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c270 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049c275 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049c27b
    MOV EDX,dword ptr [0x005b7620]      ; 0049c27e | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c284 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049c28a
    ADD ESP,0x18                        ; 0049c28c
    CMP EDX,ECX                         ; 0049c28f
    JGE 0x0049c2c3                      ; 0049c291
        ;   XREF to: 0049c2c3 (CONDITIONAL_JUMP)  ; LAB_0049c2c3
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c293 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c299
    MOV ECX,0x3                         ; 0049c2a0
    SUB EAX,EDX                         ; 0049c2a5
    MOV EBX,dword ptr [0x005b761c]      ; 0049c2a7 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c2ad
    MOV EDX,EBX                         ; 0049c2af
    MOV [0x01c78ae0],EAX                ; 0049c2b1 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c2b6
    MOV EAX,EBX                         ; 0049c2b9
    IDIV ECX                            ; 0049c2bb
    ADD dword ptr [0x01c78adc],EAX      ; 0049c2bd | DAT_01c78adc
    PUSH 0x58250f                       ; 0049c2c3 | = "Point down"
        ;   Label: LAB_0049c2c3
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c2c8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c2cd
    PUSH EAX                            ; 0049c2d0
    MOV EDX,dword ptr [ESI + 0x64]      ; 0049c2d1
    PUSH EDX                            ; 0049c2d4
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c2d5
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c2da
    PUSH EAX                            ; 0049c2dd
    PUSH 0x582402                       ; 0049c2de | = "%s = %s"
    LEA EAX,[ESP + 0xf0c]               ; 0049c2e3
    PUSH EAX                            ; 0049c2ea
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c2eb
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c2f0
    PUSH -0x1                           ; 0049c2f3
    PUSH 0x7                            ; 0049c2f5
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049c2f7 | DAT_01c78ae0
    PUSH EBP                            ; 0049c2fd
    MOV EAX,[0x01c78adc]                ; 0049c2fe | DAT_01c78adc
    PUSH EAX                            ; 0049c303
    LEA EAX,[ESP + 0xf10]               ; 0049c304
    PUSH EAX                            ; 0049c30b
    MOV EDX,dword ptr [0x014b9900]      ; 0049c30c | DAT_014b9900
    PUSH EDX                            ; 0049c312
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c313
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c318 | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c31d | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c323 | DAT_005b7620
    ADD ECX,EAX                         ; 0049c329
    SHL EAX,0x2                         ; 0049c32b
    ADD ESP,0x18                        ; 0049c32e
    SUB EDX,EAX                         ; 0049c331
    MOV dword ptr [0x01c78ae0],ECX      ; 0049c333 | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049c339
    JGE 0x0049c36d                      ; 0049c33b
        ;   XREF to: 0049c36d (CONDITIONAL_JUMP)  ; LAB_0049c36d
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c33d | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c343
    MOV ECX,0x3                         ; 0049c34a
    SUB EAX,EDX                         ; 0049c34f
    MOV EBX,dword ptr [0x005b761c]      ; 0049c351 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c357
    MOV EDX,EBX                         ; 0049c359
    MOV [0x01c78ae0],EAX                ; 0049c35b | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c360
    MOV EAX,EBX                         ; 0049c363
    IDIV ECX                            ; 0049c365
    ADD dword ptr [0x01c78adc],EAX      ; 0049c367 | DAT_01c78adc
    PUSH 0x58251a                       ; 0049c36d | = "Jump"
        ;   Label: LAB_0049c36d
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c372
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c377
    PUSH EAX                            ; 0049c37a
    MOV EDX,dword ptr [ESI + 0x5c]      ; 0049c37b
    PUSH EDX                            ; 0049c37e
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c37f
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c384
    PUSH EAX                            ; 0049c387
    PUSH 0x582402                       ; 0049c388 | = "%s = %s"
    LEA EAX,[ESP + 0x60c]               ; 0049c38d
    PUSH EAX                            ; 0049c394
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c395
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c39a
    PUSH -0x1                           ; 0049c39d
    PUSH 0x7                            ; 0049c39f
    MOV EAX,[0x01c78ae0]                ; 0049c3a1 | DAT_01c78ae0
    PUSH EAX                            ; 0049c3a6
    MOV EDX,dword ptr [0x01c78adc]      ; 0049c3a7 | DAT_01c78adc
    PUSH EDX                            ; 0049c3ad
    LEA EAX,[ESP + 0x610]               ; 0049c3ae
    PUSH EAX                            ; 0049c3b5
    MOV ECX,dword ptr [0x014b9900]      ; 0049c3b6 | DAT_014b9900
    PUSH ECX                            ; 0049c3bc
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c3bd
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c3c2 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049c3c7 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c3cd | DAT_005b7620
    ADD EDI,EAX                         ; 0049c3d3
    SHL EAX,0x2                         ; 0049c3d5
    ADD ESP,0x18                        ; 0049c3d8
    SUB EDX,EAX                         ; 0049c3db
    MOV dword ptr [0x01c78ae0],EDI      ; 0049c3dd | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049c3e3
    JGE 0x0049c417                      ; 0049c3e5
        ;   XREF to: 0049c417 (CONDITIONAL_JUMP)  ; LAB_0049c417
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c3e7 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c3ed
    MOV ECX,0x3                         ; 0049c3f4
    SUB EAX,EDX                         ; 0049c3f9
    MOV EBX,dword ptr [0x005b761c]      ; 0049c3fb | DAT_005b761c
    ADD EAX,EAX                         ; 0049c401
    MOV EDX,EBX                         ; 0049c403
    MOV [0x01c78ae0],EAX                ; 0049c405 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c40a
    MOV EAX,EBX                         ; 0049c40d
    IDIV ECX                            ; 0049c40f
    ADD dword ptr [0x01c78adc],EAX      ; 0049c411 | DAT_01c78adc
    PUSH 0x58251f                       ; 0049c417 | = "Cycle pistol weapons"
        ;   Label: LAB_0049c417
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c41c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c421
    PUSH EAX                            ; 0049c424
    MOV EDX,dword ptr [ESI + 0x68]      ; 0049c425
    PUSH EDX                            ; 0049c428
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c429
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c42e
    PUSH EAX                            ; 0049c431
    PUSH 0x582402                       ; 0049c432 | = "%s = %s"
    LEA EAX,[ESP + 0xd0c]               ; 0049c437
    PUSH EAX                            ; 0049c43e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c43f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c444
    PUSH -0x1                           ; 0049c447
    PUSH 0x7                            ; 0049c449
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c44b | DAT_01c78ae0
    PUSH ECX                            ; 0049c451
    MOV EDI,dword ptr [0x01c78adc]      ; 0049c452 | DAT_01c78adc
    PUSH EDI                            ; 0049c458
    LEA EAX,[ESP + 0xd10]               ; 0049c459
    PUSH EAX                            ; 0049c460
    MOV EBP,dword ptr [0x014b9900]      ; 0049c461 | DAT_014b9900
    PUSH EBP                            ; 0049c467
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c468
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c46d | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049c472 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049c478
    MOV EDX,dword ptr [0x005b7620]      ; 0049c47b | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c481 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049c487
    ADD ESP,0x18                        ; 0049c489
    CMP EDX,ECX                         ; 0049c48c
    JGE 0x0049c4c0                      ; 0049c48e
        ;   XREF to: 0049c4c0 (CONDITIONAL_JUMP)  ; LAB_0049c4c0
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c490 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c496
    MOV ECX,0x3                         ; 0049c49d
    SUB EAX,EDX                         ; 0049c4a2
    MOV EBX,dword ptr [0x005b761c]      ; 0049c4a4 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c4aa
    MOV EDX,EBX                         ; 0049c4ac
    MOV [0x01c78ae0],EAX                ; 0049c4ae | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c4b3
    MOV EAX,EBX                         ; 0049c4b6
    IDIV ECX                            ; 0049c4b8
    ADD dword ptr [0x01c78adc],EAX      ; 0049c4ba | DAT_01c78adc
    PUSH 0x582534                       ; 0049c4c0 | = "Cycle assault weapons"
        ;   Label: LAB_0049c4c0
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c4c5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c4ca
    PUSH EAX                            ; 0049c4cd
    MOV EDX,dword ptr [ESI + 0x6c]      ; 0049c4ce
    PUSH EDX                            ; 0049c4d1
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c4d2
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c4d7
    PUSH EAX                            ; 0049c4da
    PUSH 0x582402                       ; 0049c4db | = "%s = %s"
    LEA EAX,[ESP + 0x30c]               ; 0049c4e0
    PUSH EAX                            ; 0049c4e7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c4e8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c4ed
    PUSH -0x1                           ; 0049c4f0
    PUSH 0x7                            ; 0049c4f2
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049c4f4 | DAT_01c78ae0
    PUSH EBP                            ; 0049c4fa
    MOV EAX,[0x01c78adc]                ; 0049c4fb | DAT_01c78adc
    PUSH EAX                            ; 0049c500
    LEA EAX,[ESP + 0x310]               ; 0049c501
    PUSH EAX                            ; 0049c508
    MOV EDX,dword ptr [0x014b9900]      ; 0049c509 | DAT_014b9900
    PUSH EDX                            ; 0049c50f
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c510
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c515 | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c51a | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c520 | DAT_005b7620
    ADD ECX,EAX                         ; 0049c526
    SHL EAX,0x2                         ; 0049c528
    ADD ESP,0x18                        ; 0049c52b
    SUB EDX,EAX                         ; 0049c52e
    MOV dword ptr [0x01c78ae0],ECX      ; 0049c530 | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049c536
    JGE 0x0049c56a                      ; 0049c538
        ;   XREF to: 0049c56a (CONDITIONAL_JUMP)  ; LAB_0049c56a
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c53a | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c540
    MOV ECX,0x3                         ; 0049c547
    SUB EAX,EDX                         ; 0049c54c
    MOV EBX,dword ptr [0x005b761c]      ; 0049c54e | DAT_005b761c
    ADD EAX,EAX                         ; 0049c554
    MOV EDX,EBX                         ; 0049c556
    MOV [0x01c78ae0],EAX                ; 0049c558 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c55d
    MOV EAX,EBX                         ; 0049c560
    IDIV ECX                            ; 0049c562
    ADD dword ptr [0x01c78adc],EAX      ; 0049c564 | DAT_01c78adc
    PUSH 0x58254a                       ; 0049c56a | = "Cycle flame weapons"
        ;   Label: LAB_0049c56a
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c56f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c574
    PUSH EAX                            ; 0049c577
    MOV EDX,dword ptr [ESI + 0x70]      ; 0049c578
    PUSH EDX                            ; 0049c57b
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c57c
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c581
    PUSH EAX                            ; 0049c584
    PUSH 0x582402                       ; 0049c585 | = "%s = %s"
    LEA EAX,[ESP + 0xa0c]               ; 0049c58a
    PUSH EAX                            ; 0049c591
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c592
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c597
    PUSH -0x1                           ; 0049c59a
    PUSH 0x7                            ; 0049c59c
    MOV EAX,[0x01c78ae0]                ; 0049c59e | DAT_01c78ae0
    PUSH EAX                            ; 0049c5a3
    MOV EDX,dword ptr [0x01c78adc]      ; 0049c5a4 | DAT_01c78adc
    PUSH EDX                            ; 0049c5aa
    LEA EAX,[ESP + 0xa10]               ; 0049c5ab
    PUSH EAX                            ; 0049c5b2
    MOV ECX,dword ptr [0x014b9900]      ; 0049c5b3 | DAT_014b9900
    PUSH ECX                            ; 0049c5b9
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c5ba
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c5bf | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049c5c4 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c5ca | DAT_005b7620
    ADD EDI,EAX                         ; 0049c5d0
    SHL EAX,0x2                         ; 0049c5d2
    ADD ESP,0x18                        ; 0049c5d5
    SUB EDX,EAX                         ; 0049c5d8
    MOV dword ptr [0x01c78ae0],EDI      ; 0049c5da | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049c5e0
    JGE 0x0049c614                      ; 0049c5e2
        ;   XREF to: 0049c614 (CONDITIONAL_JUMP)  ; LAB_0049c614
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c5e4 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c5ea
    MOV ECX,0x3                         ; 0049c5f1
    SUB EAX,EDX                         ; 0049c5f6
    MOV EBX,dword ptr [0x005b761c]      ; 0049c5f8 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c5fe
    MOV EDX,EBX                         ; 0049c600
    MOV [0x01c78ae0],EAX                ; 0049c602 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c607
    MOV EAX,EBX                         ; 0049c60a
    IDIV ECX                            ; 0049c60c
    ADD dword ptr [0x01c78adc],EAX      ; 0049c60e | DAT_01c78adc
    PUSH 0x58255e                       ; 0049c614 | = "Cycle grenade weapons"
        ;   Label: LAB_0049c614
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c619
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c61e
    PUSH EAX                            ; 0049c621
    MOV EDX,dword ptr [ESI + 0x74]      ; 0049c622
    PUSH EDX                            ; 0049c625
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c626
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c62b
    PUSH EAX                            ; 0049c62e
    PUSH 0x582402                       ; 0049c62f | = "%s = %s"
    LEA EAX,[ESP + 0x110c]              ; 0049c634
    PUSH EAX                            ; 0049c63b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c63c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c641
    PUSH -0x1                           ; 0049c644
    PUSH 0x7                            ; 0049c646
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c648 | DAT_01c78ae0
    PUSH ECX                            ; 0049c64e
    MOV EDI,dword ptr [0x01c78adc]      ; 0049c64f | DAT_01c78adc
    PUSH EDI                            ; 0049c655
    LEA EAX,[ESP + 0x1110]              ; 0049c656
    PUSH EAX                            ; 0049c65d
    MOV EBP,dword ptr [0x014b9900]      ; 0049c65e | DAT_014b9900
    PUSH EBP                            ; 0049c664
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c665
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c66a | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049c66f | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049c675
    MOV EDX,dword ptr [0x005b7620]      ; 0049c678 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c67e | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049c684
    ADD ESP,0x18                        ; 0049c686
    CMP EDX,ECX                         ; 0049c689
    JGE 0x0049c6bd                      ; 0049c68b
        ;   XREF to: 0049c6bd (CONDITIONAL_JUMP)  ; LAB_0049c6bd
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c68d | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c693
    MOV ECX,0x3                         ; 0049c69a
    SUB EAX,EDX                         ; 0049c69f
    MOV EBX,dword ptr [0x005b761c]      ; 0049c6a1 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c6a7
    MOV EDX,EBX                         ; 0049c6a9
    MOV [0x01c78ae0],EAX                ; 0049c6ab | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c6b0
    MOV EAX,EBX                         ; 0049c6b3
    IDIV ECX                            ; 0049c6b5
    ADD dword ptr [0x01c78adc],EAX      ; 0049c6b7 | DAT_01c78adc
    PUSH 0x582574                       ; 0049c6bd | = "Cycle melee weapons"
        ;   Label: LAB_0049c6bd
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c6c2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c6c7
    PUSH EAX                            ; 0049c6ca
    MOV EDX,dword ptr [ESI + 0x78]      ; 0049c6cb
    PUSH EDX                            ; 0049c6ce
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c6cf
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c6d4
    PUSH EAX                            ; 0049c6d7
    PUSH 0x582402                       ; 0049c6d8 | = "%s = %s"
    LEA EAX,[ESP + 0x180c]              ; 0049c6dd
    PUSH EAX                            ; 0049c6e4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c6e5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c6ea
    PUSH -0x1                           ; 0049c6ed
    PUSH 0x7                            ; 0049c6ef
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049c6f1 | DAT_01c78ae0
    PUSH EBP                            ; 0049c6f7
    MOV EAX,[0x01c78adc]                ; 0049c6f8 | DAT_01c78adc
    PUSH EAX                            ; 0049c6fd
    LEA EAX,[ESP + 0x1810]              ; 0049c6fe
    PUSH EAX                            ; 0049c705
    MOV EDX,dword ptr [0x014b9900]      ; 0049c706 | DAT_014b9900
    PUSH EDX                            ; 0049c70c
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c70d
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c712 | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c717 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c71d | DAT_005b7620
    ADD ECX,EAX                         ; 0049c723
    SHL EAX,0x2                         ; 0049c725
    ADD ESP,0x18                        ; 0049c728
    SUB EDX,EAX                         ; 0049c72b
    MOV dword ptr [0x01c78ae0],ECX      ; 0049c72d | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049c733
    JGE 0x0049c767                      ; 0049c735
        ;   XREF to: 0049c767 (CONDITIONAL_JUMP)  ; LAB_0049c767
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c737 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c73d
    MOV ECX,0x3                         ; 0049c744
    SUB EAX,EDX                         ; 0049c749
    MOV EBX,dword ptr [0x005b761c]      ; 0049c74b | DAT_005b761c
    ADD EAX,EAX                         ; 0049c751
    MOV EDX,EBX                         ; 0049c753
    MOV [0x01c78ae0],EAX                ; 0049c755 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c75a
    MOV EAX,EBX                         ; 0049c75d
    IDIV ECX                            ; 0049c75f
    ADD dword ptr [0x01c78adc],EAX      ; 0049c761 | DAT_01c78adc
    PUSH 0x582588                       ; 0049c767 | = "Next weapon"
        ;   Label: LAB_0049c767
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c76c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c771
    PUSH EAX                            ; 0049c774
    MOV EDX,dword ptr [ESI + 0x7c]      ; 0049c775
    PUSH EDX                            ; 0049c778
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c779
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c77e
    PUSH EAX                            ; 0049c781
    PUSH 0x582402                       ; 0049c782 | = "%s = %s"
    LEA EAX,[ESP + 0xc]                 ; 0049c787
    PUSH EAX                            ; 0049c78b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c78c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c791
    PUSH -0x1                           ; 0049c794
    PUSH 0x7                            ; 0049c796
    MOV EAX,[0x01c78ae0]                ; 0049c798 | DAT_01c78ae0
    PUSH EAX                            ; 0049c79d
    MOV EDX,dword ptr [0x01c78adc]      ; 0049c79e | DAT_01c78adc
    PUSH EDX                            ; 0049c7a4
    LEA EAX,[ESP + 0x10]                ; 0049c7a5
    PUSH EAX                            ; 0049c7a9
    MOV ECX,dword ptr [0x014b9900]      ; 0049c7aa | DAT_014b9900
    PUSH ECX                            ; 0049c7b0
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c7b1
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c7b6 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049c7bb | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c7c1 | DAT_005b7620
    ADD EDI,EAX                         ; 0049c7c7
    SHL EAX,0x2                         ; 0049c7c9
    ADD ESP,0x18                        ; 0049c7cc
    SUB EDX,EAX                         ; 0049c7cf
    MOV dword ptr [0x01c78ae0],EDI      ; 0049c7d1 | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049c7d7
    JGE 0x0049c80b                      ; 0049c7d9
        ;   XREF to: 0049c80b (CONDITIONAL_JUMP)  ; LAB_0049c80b
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c7db | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c7e1
    MOV ECX,0x3                         ; 0049c7e8
    SUB EAX,EDX                         ; 0049c7ed
    MOV EBX,dword ptr [0x005b761c]      ; 0049c7ef | DAT_005b761c
    ADD EAX,EAX                         ; 0049c7f5
    MOV EDX,EBX                         ; 0049c7f7
    MOV [0x01c78ae0],EAX                ; 0049c7f9 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c7fe
    MOV EAX,EBX                         ; 0049c801
    IDIV ECX                            ; 0049c803
    ADD dword ptr [0x01c78adc],EAX      ; 0049c805 | DAT_01c78adc
    PUSH 0x582594                       ; 0049c80b | = "Previous weapon"
        ;   Label: LAB_0049c80b
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c810
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c815
    PUSH EAX                            ; 0049c818
    MOV EDX,dword ptr [ESI + 0x80]      ; 0049c819
    PUSH EDX                            ; 0049c81f
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c820
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c825
    PUSH EAX                            ; 0049c828
    PUSH 0x582402                       ; 0049c829 | = "%s = %s"
    LEA EAX,[ESP + 0x70c]               ; 0049c82e
    PUSH EAX                            ; 0049c835
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c836
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c83b
    PUSH -0x1                           ; 0049c83e
    PUSH 0x7                            ; 0049c840
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c842 | DAT_01c78ae0
    PUSH ECX                            ; 0049c848
    MOV EDI,dword ptr [0x01c78adc]      ; 0049c849 | DAT_01c78adc
    PUSH EDI                            ; 0049c84f
    LEA EAX,[ESP + 0x710]               ; 0049c850
    PUSH EAX                            ; 0049c857
    MOV EBP,dword ptr [0x014b9900]      ; 0049c858 | DAT_014b9900
    PUSH EBP                            ; 0049c85e
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c85f
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c864 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049c869 | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049c86f
    MOV EDX,dword ptr [0x005b7620]      ; 0049c872 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c878 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049c87e
    ADD ESP,0x18                        ; 0049c880
    CMP EDX,ECX                         ; 0049c883
    JGE 0x0049c8b7                      ; 0049c885
        ;   XREF to: 0049c8b7 (CONDITIONAL_JUMP)  ; LAB_0049c8b7
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c887 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c88d
    MOV ECX,0x3                         ; 0049c894
    SUB EAX,EDX                         ; 0049c899
    MOV EBX,dword ptr [0x005b761c]      ; 0049c89b | DAT_005b761c
    ADD EAX,EAX                         ; 0049c8a1
    MOV EDX,EBX                         ; 0049c8a3
    MOV [0x01c78ae0],EAX                ; 0049c8a5 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c8aa
    MOV EAX,EBX                         ; 0049c8ad
    IDIV ECX                            ; 0049c8af
    ADD dword ptr [0x01c78adc],EAX      ; 0049c8b1 | DAT_01c78adc
    PUSH 0x5825a4                       ; 0049c8b7 | = "Next item"
        ;   Label: LAB_0049c8b7
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c8bc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c8c1
    PUSH EAX                            ; 0049c8c4
    MOV EDX,dword ptr [ESI + 0x84]      ; 0049c8c5
    PUSH EDX                            ; 0049c8cb
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c8cc
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c8d1
    PUSH EAX                            ; 0049c8d4
    PUSH 0x582402                       ; 0049c8d5 | = "%s = %s"
    LEA EAX,[ESP + 0xe0c]               ; 0049c8da
    PUSH EAX                            ; 0049c8e1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c8e2
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c8e7
    PUSH -0x1                           ; 0049c8ea
    PUSH 0x7                            ; 0049c8ec
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049c8ee | DAT_01c78ae0
    PUSH EBP                            ; 0049c8f4
    MOV EAX,[0x01c78adc]                ; 0049c8f5 | DAT_01c78adc
    PUSH EAX                            ; 0049c8fa
    LEA EAX,[ESP + 0xe10]               ; 0049c8fb
    PUSH EAX                            ; 0049c902
    MOV EDX,dword ptr [0x014b9900]      ; 0049c903 | DAT_014b9900
    PUSH EDX                            ; 0049c909
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c90a
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c90f | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049c914 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c91a | DAT_005b7620
    ADD ECX,EAX                         ; 0049c920
    SHL EAX,0x2                         ; 0049c922
    ADD ESP,0x18                        ; 0049c925
    SUB EDX,EAX                         ; 0049c928
    MOV dword ptr [0x01c78ae0],ECX      ; 0049c92a | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049c930
    JGE 0x0049c964                      ; 0049c932
        ;   XREF to: 0049c964 (CONDITIONAL_JUMP)  ; LAB_0049c964
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c934 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c93a
    MOV ECX,0x3                         ; 0049c941
    SUB EAX,EDX                         ; 0049c946
    MOV EBX,dword ptr [0x005b761c]      ; 0049c948 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c94e
    MOV EDX,EBX                         ; 0049c950
    MOV [0x01c78ae0],EAX                ; 0049c952 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049c957
    MOV EAX,EBX                         ; 0049c95a
    IDIV ECX                            ; 0049c95c
    ADD dword ptr [0x01c78adc],EAX      ; 0049c95e | DAT_01c78adc
    PUSH 0x5825ae                       ; 0049c964 | = "Previous item"
        ;   Label: LAB_0049c964
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049c969
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049c96e
    PUSH EAX                            ; 0049c971
    MOV EDX,dword ptr [ESI + 0x88]      ; 0049c972
    PUSH EDX                            ; 0049c978
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049c979
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049c97e
    PUSH EAX                            ; 0049c981
    PUSH 0x582402                       ; 0049c982 | = "%s = %s"
    LEA EAX,[ESP + 0x50c]               ; 0049c987
    PUSH EAX                            ; 0049c98e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049c98f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049c994
    PUSH -0x1                           ; 0049c997
    PUSH 0x7                            ; 0049c999
    MOV EAX,[0x01c78ae0]                ; 0049c99b | DAT_01c78ae0
    PUSH EAX                            ; 0049c9a0
    MOV EDX,dword ptr [0x01c78adc]      ; 0049c9a1 | DAT_01c78adc
    PUSH EDX                            ; 0049c9a7
    LEA EAX,[ESP + 0x510]               ; 0049c9a8
    PUSH EAX                            ; 0049c9af
    MOV ECX,dword ptr [0x014b9900]      ; 0049c9b0 | DAT_014b9900
    PUSH ECX                            ; 0049c9b6
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049c9b7
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049c9bc | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049c9c1 | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049c9c7 | DAT_005b7620
    ADD EDI,EAX                         ; 0049c9cd
    SHL EAX,0x2                         ; 0049c9cf
    ADD ESP,0x18                        ; 0049c9d2
    SUB EDX,EAX                         ; 0049c9d5
    MOV dword ptr [0x01c78ae0],EDI      ; 0049c9d7 | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049c9dd
    JGE 0x0049ca11                      ; 0049c9df
        ;   XREF to: 0049ca11 (CONDITIONAL_JUMP)  ; LAB_0049ca11
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049c9e1 | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049c9e7
    MOV ECX,0x3                         ; 0049c9ee
    SUB EAX,EDX                         ; 0049c9f3
    MOV EBX,dword ptr [0x005b761c]      ; 0049c9f5 | DAT_005b761c
    ADD EAX,EAX                         ; 0049c9fb
    MOV EDX,EBX                         ; 0049c9fd
    MOV [0x01c78ae0],EAX                ; 0049c9ff | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049ca04
    MOV EAX,EBX                         ; 0049ca07
    IDIV ECX                            ; 0049ca09
    ADD dword ptr [0x01c78adc],EAX      ; 0049ca0b | DAT_01c78adc
    PUSH 0x5825bc                       ; 0049ca11 | = "Item description"
        ;   Label: LAB_0049ca11
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049ca16
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049ca1b
    PUSH EAX                            ; 0049ca1e
    MOV EDX,dword ptr [ESI + 0x8c]      ; 0049ca1f
    PUSH EDX                            ; 0049ca25
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049ca26
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049ca2b
    PUSH EAX                            ; 0049ca2e
    PUSH 0x582402                       ; 0049ca2f | = "%s = %s"
    LEA EAX,[ESP + 0xc0c]               ; 0049ca34
    PUSH EAX                            ; 0049ca3b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049ca3c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049ca41
    PUSH -0x1                           ; 0049ca44
    PUSH 0x7                            ; 0049ca46
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049ca48 | DAT_01c78ae0
    PUSH ECX                            ; 0049ca4e
    MOV EDI,dword ptr [0x01c78adc]      ; 0049ca4f | DAT_01c78adc
    PUSH EDI                            ; 0049ca55
    LEA EAX,[ESP + 0xc10]               ; 0049ca56
    PUSH EAX                            ; 0049ca5d
    MOV EBP,dword ptr [0x014b9900]      ; 0049ca5e | DAT_014b9900
    PUSH EBP                            ; 0049ca64
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049ca65
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049ca6a | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049ca6f | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049ca75
    MOV EDX,dword ptr [0x005b7620]      ; 0049ca78 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049ca7e | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049ca84
    ADD ESP,0x18                        ; 0049ca86
    CMP EDX,ECX                         ; 0049ca89
    JGE 0x0049cabd                      ; 0049ca8b
        ;   XREF to: 0049cabd (CONDITIONAL_JUMP)  ; LAB_0049cabd
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049ca8d | DAT_01c78ae4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ca93
    MOV ECX,0x3                         ; 0049ca9a
    SUB EAX,EDX                         ; 0049ca9f
    MOV EBX,dword ptr [0x005b761c]      ; 0049caa1 | DAT_005b761c
    ADD EAX,EAX                         ; 0049caa7
    MOV EDX,EBX                         ; 0049caa9
    MOV [0x01c78ae0],EAX                ; 0049caab | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049cab0
    MOV EAX,EBX                         ; 0049cab3
    IDIV ECX                            ; 0049cab5
    ADD dword ptr [0x01c78adc],EAX      ; 0049cab7 | DAT_01c78adc
    PUSH 0x5825cd                       ; 0049cabd | = "Next ammo"
        ;   Label: LAB_0049cabd
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049cac2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049cac7
    PUSH EAX                            ; 0049caca
    MOV EDX,dword ptr [ESI + 0x90]      ; 0049cacb
    PUSH EDX                            ; 0049cad1
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049cad2
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049cad7
    PUSH EAX                            ; 0049cada
    PUSH 0x582402                       ; 0049cadb | = "%s = %s"
    LEA EAX,[ESP + 0x1b0c]              ; 0049cae0
    PUSH EAX                            ; 0049cae7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049cae8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049caed
    PUSH -0x1                           ; 0049caf0
    PUSH 0x7                            ; 0049caf2
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049caf4 | DAT_01c78ae0
    PUSH EBP                            ; 0049cafa
    MOV EAX,[0x01c78adc]                ; 0049cafb | DAT_01c78adc
    PUSH EAX                            ; 0049cb00
    LEA EAX,[ESP + 0x1b10]              ; 0049cb01
    PUSH EAX                            ; 0049cb08
    MOV EDX,dword ptr [0x014b9900]      ; 0049cb09 | DAT_014b9900
    PUSH EDX                            ; 0049cb0f
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049cb10
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049cb15 | DAT_01c78ae4
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049cb1a | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049cb20 | DAT_005b7620
    ADD ECX,EAX                         ; 0049cb26
    SHL EAX,0x2                         ; 0049cb28
    ADD ESP,0x18                        ; 0049cb2b
    SUB EDX,EAX                         ; 0049cb2e
    MOV dword ptr [0x01c78ae0],ECX      ; 0049cb30 | DAT_01c78ae0
    CMP EDX,ECX                         ; 0049cb36
    JL 0x0049cbc9                       ; 0049cb38
        ;   XREF to: 0049cbc9 (CONDITIONAL_JUMP)  ; LAB_0049cbc9
    MOV EBX,dword ptr [0x005b761c]      ; 0049cb3e | DAT_005b761c
    ADD ESP,0x1c00                      ; 0049cb44
    POP EBP                             ; 0049cb4a
    POP EDI                             ; 0049cb4b
    POP ESI                             ; 0049cb4c
    POP EBX                             ; 0049cb4d
    RET                                 ; 0049cb4e
    PUSH 0x58249b                       ; 0049cb4f | = "Run"
        ;   Label: LAB_0049cb4f
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049cb54
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049cb59
    PUSH EAX                            ; 0049cb5c
    MOV EDX,dword ptr [ESI + 0x30]      ; 0049cb5d
    PUSH EDX                            ; 0049cb60
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049cb61
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 0049cb66
    PUSH EAX                            ; 0049cb69
    PUSH 0x582402                       ; 0049cb6a | = "%s = %s"
    LEA EAX,[ESP + 0x160c]              ; 0049cb6f
    PUSH EAX                            ; 0049cb76
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049cb77
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049cb7c
    PUSH -0x1                           ; 0049cb7f
    PUSH 0x7                            ; 0049cb81
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049cb83 | DAT_01c78ae0
    PUSH ECX                            ; 0049cb89
    MOV EDI,dword ptr [0x01c78adc]      ; 0049cb8a | DAT_01c78adc
    PUSH EDI                            ; 0049cb90
    LEA EAX,[ESP + 0x1610]              ; 0049cb91
    PUSH EAX                            ; 0049cb98
    MOV EBP,dword ptr [0x014b9900]      ; 0049cb99 | DAT_014b9900
    PUSH EBP                            ; 0049cb9f
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049cba0
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    MOV EAX,[0x01c78ae4]                ; 0049cba5 | DAT_01c78ae4
    ADD dword ptr [0x01c78ae0],EAX      ; 0049cbaa | DAT_01c78ae0
    SHL EAX,0x2                         ; 0049cbb0
    MOV EDX,dword ptr [0x005b7620]      ; 0049cbb3 | DAT_005b7620
    MOV ECX,dword ptr [0x01c78ae0]      ; 0049cbb9 | DAT_01c78ae0
    SUB EDX,EAX                         ; 0049cbbf
    ADD ESP,0x18                        ; 0049cbc1
    JMP 0x0049bb45                      ; 0049cbc4
        ;   XREF to: 0049bb45 (UNCONDITIONAL_JUMP)  ; LAB_0049bb45
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049cbc9 | DAT_01c78ae4
        ;   Label: LAB_0049cbc9
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049cbcf
    MOV ECX,0x3                         ; 0049cbd6
    SUB EAX,EDX                         ; 0049cbdb
    MOV EBX,dword ptr [0x005b761c]      ; 0049cbdd | DAT_005b761c
    ADD EAX,EAX                         ; 0049cbe3
    MOV EDX,EBX                         ; 0049cbe5
    MOV [0x01c78ae0],EAX                ; 0049cbe7 | DAT_01c78ae0
    SAR EDX,0x1f                        ; 0049cbec
    MOV EAX,EBX                         ; 0049cbef
    IDIV ECX                            ; 0049cbf1
    ADD dword ptr [0x01c78adc],EAX      ; 0049cbf3 | DAT_01c78adc
    MOV EBX,dword ptr [0x005b761c]      ; 0049cbf9 | DAT_005b761c
    ADD ESP,0x1c00                      ; 0049cbff
    POP EBP                             ; 0049cc05
    POP EDI                             ; 0049cc06
    POP ESI                             ; 0049cc07
    POP EBX                             ; 0049cc08
    RET                                 ; 0049cc09

