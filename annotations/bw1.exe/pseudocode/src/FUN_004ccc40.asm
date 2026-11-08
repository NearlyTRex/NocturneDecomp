; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ccc40(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1f10]:1  local_1f10
; undefined        Stack[-0x1e10]:1  local_1e10
; undefined        Stack[-0x1d10]:1  local_1d10
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
;   FUN_004ce580 at 004cef6f
;
; Referenced Globals:
;   undefined4 s_s_s_005e13c3+1
;   TerminatedCString s_Quick_help_005e13cc
;   TerminatedCString s_F1_Toggle_help_005e13d7
;   TerminatedCString s_F2_Save_game_005e13e8
;   TerminatedCString s_F3_Restore_game_005e13f7
;   TerminatedCString s_F5_Toggle_mute_005e1409
;   TerminatedCString s_F6_Quick_save_005e141a
;   TerminatedCString s_F9_Quick_load_005e142a
;   TerminatedCString s_ESC_Pause_game_005e143a
;   TerminatedCString s_Forward_005e144b
;   undefined4 DAT_005e1453
;   undefined4 DAT_005e1458
;   undefined4 DAT_005e145d
;   TerminatedCString s_Strafe_on_005e1461
;   TerminatedCString s_Strafe_left_005e146b
;   ... and 34 more
;
; Called Functions:
;   FUN_00406bd0
;   FUN_004c1dd0
;   FUN_004c44e0
;   FUN_004c4510
;   FUN_0050d220
;   FUN_00531090
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccc40
        ;   Label: FUN_004ccc40
    PUSH ESI                            ; 004ccc41
    PUSH EDI                            ; 004ccc42
    PUSH EBP                            ; 004ccc43
    SUB ESP,0x1f00                      ; 004ccc44
    MOV EBX,dword ptr [0x0061b498]      ; 004ccc4a | DAT_0061b498
    MOV ESI,dword ptr [ESP + 0x1f14]    ; 004ccc50
    PUSH 0xffff                         ; 004ccc57
    CALL FUN_00406bd0                   ; 004ccc5c
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
    ADD ESP,0x4                         ; 004ccc61
    PUSH 0x58                           ; 004ccc64
    MOV EDX,dword ptr [0x0152d244]      ; 004ccc66 | DAT_0152d244
    PUSH EDX                            ; 004ccc6c
    CALL FUN_004c4510                   ; 004ccc6d
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    ADD ESP,0x8                         ; 004ccc72
    PUSH 0x58                           ; 004ccc75
    MOV ECX,dword ptr [0x0152d244]      ; 004ccc77 | DAT_0152d244
    PUSH ECX                            ; 004ccc7d
    MOV [0x01cd0c54],EAX                ; 004ccc7e | DAT_01cd0c54
    CALL FUN_004c44e0                   ; 004ccc83
        ;   XREF to: 004c44e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c44e0()
    ADD ESP,0x8                         ; 004ccc88
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ccc8b | DAT_01cd0c54
    MOV [0x01cd0c58],EAX                ; 004ccc91 | DAT_01cd0c58
    PUSH 0x5e13cc                       ; 004ccc96 | = "Quick help"
    SHL EDX,0x2                         ; 004ccc9b
    SHL EAX,0x2                         ; 004ccc9e
    MOV dword ptr [0x01cd0c50],EDX      ; 004ccca1 | DAT_01cd0c50
    MOV [0x01cd0c4c],EAX                ; 004ccca7 | DAT_01cd0c4c
    CALL FUN_00531090                   ; 004cccac
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cccb1
    PUSH -0x1                           ; 004cccb4
    PUSH 0x7                            ; 004cccb6
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cccb8 | DAT_01cd0c50
    PUSH EDI                            ; 004cccbe
    MOV EBP,dword ptr [0x01cd0c4c]      ; 004cccbf | DAT_01cd0c4c
    PUSH EBP                            ; 004cccc5
    PUSH EAX                            ; 004cccc6
    MOV EAX,[0x0152d244]                ; 004cccc7 | DAT_0152d244
    PUSH EAX                            ; 004ccccc
    CALL FUN_004c1dd0                   ; 004ccccd
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cccd2 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cccd7 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cccdd
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccce0 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ccce6 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cccec
    ADD ESP,0x18                        ; 004cccee
    CMP EDX,ECX                         ; 004cccf1
    JGE 0x004ccd25                      ; 004cccf3
        ;   XREF to: 004ccd25 (CONDITIONAL_JUMP)  ; LAB_004ccd25
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cccf5 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cccfb
    MOV ECX,0x3                         ; 004ccd02
    SUB EAX,EDX                         ; 004ccd07
    MOV EBX,dword ptr [0x0061b498]      ; 004ccd09 | DAT_0061b498
    ADD EAX,EAX                         ; 004ccd0f
    MOV EDX,EBX                         ; 004ccd11
    MOV [0x01cd0c50],EAX                ; 004ccd13 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ccd18
    MOV EAX,EBX                         ; 004ccd1b
    IDIV ECX                            ; 004ccd1d
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ccd1f | DAT_01cd0c4c
    MOV EAX,[0x01cd0c54]                ; 004ccd25 | DAT_01cd0c54
        ;   Label: LAB_004ccd25
    MOV EBP,dword ptr [0x01cd0c50]      ; 004ccd2a | DAT_01cd0c50
    ADD EBP,EAX                         ; 004ccd30
    PUSH 0x5e13d7                       ; 004ccd32 | = "F1 = Toggle help"
    MOV dword ptr [0x01cd0c50],EBP      ; 004ccd37 | DAT_01cd0c50
    CALL FUN_00531090                   ; 004ccd3d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ccd42
    PUSH -0x1                           ; 004ccd45
    PUSH 0x7                            ; 004ccd47
    MOV EDX,dword ptr [0x01cd0c50]      ; 004ccd49 | DAT_01cd0c50
    PUSH EDX                            ; 004ccd4f
    MOV ECX,dword ptr [0x01cd0c4c]      ; 004ccd50 | DAT_01cd0c4c
    PUSH ECX                            ; 004ccd56
    PUSH EAX                            ; 004ccd57
    MOV EDI,dword ptr [0x0152d244]      ; 004ccd58 | DAT_0152d244
    PUSH EDI                            ; 004ccd5e
    CALL FUN_004c1dd0                   ; 004ccd5f
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ccd64 | DAT_01cd0c54
    MOV EBP,dword ptr [0x01cd0c50]      ; 004ccd69 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccd6f | DAT_0061b49c
    ADD EBP,EAX                         ; 004ccd75
    SHL EAX,0x2                         ; 004ccd77
    ADD ESP,0x18                        ; 004ccd7a
    SUB EDX,EAX                         ; 004ccd7d
    MOV dword ptr [0x01cd0c50],EBP      ; 004ccd7f | DAT_01cd0c50
    CMP EDX,EBP                         ; 004ccd85
    JGE 0x004ccdb9                      ; 004ccd87
        ;   XREF to: 004ccdb9 (CONDITIONAL_JUMP)  ; LAB_004ccdb9
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ccd89 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ccd8f
    MOV ECX,0x3                         ; 004ccd96
    SUB EAX,EDX                         ; 004ccd9b
    MOV EBX,dword ptr [0x0061b498]      ; 004ccd9d | DAT_0061b498
    ADD EAX,EAX                         ; 004ccda3
    MOV EDX,EBX                         ; 004ccda5
    MOV [0x01cd0c50],EAX                ; 004ccda7 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ccdac
    MOV EAX,EBX                         ; 004ccdaf
    IDIV ECX                            ; 004ccdb1
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ccdb3 | DAT_01cd0c4c
    PUSH 0x5e13e8                       ; 004ccdb9 | = "F2 = Save game"
        ;   Label: LAB_004ccdb9
    CALL FUN_00531090                   ; 004ccdbe
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ccdc3
    PUSH -0x1                           ; 004ccdc6
    PUSH 0x7                            ; 004ccdc8
    MOV EDI,dword ptr [0x01cd0c50]      ; 004ccdca | DAT_01cd0c50
    PUSH EDI                            ; 004ccdd0
    MOV EBP,dword ptr [0x01cd0c4c]      ; 004ccdd1 | DAT_01cd0c4c
    PUSH EBP                            ; 004ccdd7
    PUSH EAX                            ; 004ccdd8
    MOV EAX,[0x0152d244]                ; 004ccdd9 | DAT_0152d244
    PUSH EAX                            ; 004ccdde
    CALL FUN_004c1dd0                   ; 004ccddf
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ccde4 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004ccde9 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004ccdef
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccdf2 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ccdf8 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004ccdfe
    ADD ESP,0x18                        ; 004cce00
    CMP EDX,ECX                         ; 004cce03
    JGE 0x004cce37                      ; 004cce05
        ;   XREF to: 004cce37 (CONDITIONAL_JUMP)  ; LAB_004cce37
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cce07 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cce0d
    MOV ECX,0x3                         ; 004cce14
    SUB EAX,EDX                         ; 004cce19
    MOV EBX,dword ptr [0x0061b498]      ; 004cce1b | DAT_0061b498
    ADD EAX,EAX                         ; 004cce21
    MOV EDX,EBX                         ; 004cce23
    MOV [0x01cd0c50],EAX                ; 004cce25 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cce2a
    MOV EAX,EBX                         ; 004cce2d
    IDIV ECX                            ; 004cce2f
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cce31 | DAT_01cd0c4c
    PUSH 0x5e13f7                       ; 004cce37 | = "F3 = Restore game"
        ;   Label: LAB_004cce37
    CALL FUN_00531090                   ; 004cce3c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cce41
    PUSH -0x1                           ; 004cce44
    PUSH 0x7                            ; 004cce46
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cce48 | DAT_01cd0c50
    PUSH EBP                            ; 004cce4e
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cce4f | DAT_01cd0c4c
    PUSH EDX                            ; 004cce55
    PUSH EAX                            ; 004cce56
    MOV ECX,dword ptr [0x0152d244]      ; 004cce57 | DAT_0152d244
    PUSH ECX                            ; 004cce5d
    CALL FUN_004c1dd0                   ; 004cce5e
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cce63 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cce68 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cce6e | DAT_0061b49c
    ADD EDI,EAX                         ; 004cce74
    SHL EAX,0x2                         ; 004cce76
    ADD ESP,0x18                        ; 004cce79
    SUB EDX,EAX                         ; 004cce7c
    MOV dword ptr [0x01cd0c50],EDI      ; 004cce7e | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cce84
    JGE 0x004cceb8                      ; 004cce86
        ;   XREF to: 004cceb8 (CONDITIONAL_JUMP)  ; LAB_004cceb8
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cce88 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cce8e
    MOV ECX,0x3                         ; 004cce95
    SUB EAX,EDX                         ; 004cce9a
    MOV EBX,dword ptr [0x0061b498]      ; 004cce9c | DAT_0061b498
    ADD EAX,EAX                         ; 004ccea2
    MOV EDX,EBX                         ; 004ccea4
    MOV [0x01cd0c50],EAX                ; 004ccea6 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cceab
    MOV EAX,EBX                         ; 004cceae
    IDIV ECX                            ; 004cceb0
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cceb2 | DAT_01cd0c4c
    PUSH 0x5e1409                       ; 004cceb8 | = "F5 = Toggle mute"
        ;   Label: LAB_004cceb8
    CALL FUN_00531090                   ; 004ccebd
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ccec2
    PUSH -0x1                           ; 004ccec5
    PUSH 0x7                            ; 004ccec7
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ccec9 | DAT_01cd0c50
    PUSH ECX                            ; 004ccecf
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cced0 | DAT_01cd0c4c
    PUSH EDI                            ; 004cced6
    PUSH EAX                            ; 004cced7
    MOV EBP,dword ptr [0x0152d244]      ; 004cced8 | DAT_0152d244
    PUSH EBP                            ; 004ccede
    CALL FUN_004c1dd0                   ; 004ccedf
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ccee4 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004ccee9 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cceef
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccef2 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ccef8 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004ccefe
    ADD ESP,0x18                        ; 004ccf00
    CMP EDX,ECX                         ; 004ccf03
    JGE 0x004ccf37                      ; 004ccf05
        ;   XREF to: 004ccf37 (CONDITIONAL_JUMP)  ; LAB_004ccf37
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ccf07 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ccf0d
    MOV ECX,0x3                         ; 004ccf14
    SUB EAX,EDX                         ; 004ccf19
    MOV EBX,dword ptr [0x0061b498]      ; 004ccf1b | DAT_0061b498
    ADD EAX,EAX                         ; 004ccf21
    MOV EDX,EBX                         ; 004ccf23
    MOV [0x01cd0c50],EAX                ; 004ccf25 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ccf2a
    MOV EAX,EBX                         ; 004ccf2d
    IDIV ECX                            ; 004ccf2f
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ccf31 | DAT_01cd0c4c
    PUSH 0x5e141a                       ; 004ccf37 | = "F6 = Quick save"
        ;   Label: LAB_004ccf37
    CALL FUN_00531090                   ; 004ccf3c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ccf41
    PUSH -0x1                           ; 004ccf44
    PUSH 0x7                            ; 004ccf46
    MOV EBP,dword ptr [0x01cd0c50]      ; 004ccf48 | DAT_01cd0c50
    PUSH EBP                            ; 004ccf4e
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004ccf4f | DAT_01cd0c4c
    PUSH EDX                            ; 004ccf55
    PUSH EAX                            ; 004ccf56
    MOV ECX,dword ptr [0x0152d244]      ; 004ccf57 | DAT_0152d244
    PUSH ECX                            ; 004ccf5d
    CALL FUN_004c1dd0                   ; 004ccf5e
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ccf63 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004ccf68 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccf6e | DAT_0061b49c
    ADD EDI,EAX                         ; 004ccf74
    SHL EAX,0x2                         ; 004ccf76
    ADD ESP,0x18                        ; 004ccf79
    SUB EDX,EAX                         ; 004ccf7c
    MOV dword ptr [0x01cd0c50],EDI      ; 004ccf7e | DAT_01cd0c50
    CMP EDX,EDI                         ; 004ccf84
    JGE 0x004ccfb8                      ; 004ccf86
        ;   XREF to: 004ccfb8 (CONDITIONAL_JUMP)  ; LAB_004ccfb8
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ccf88 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ccf8e
    MOV ECX,0x3                         ; 004ccf95
    SUB EAX,EDX                         ; 004ccf9a
    MOV EBX,dword ptr [0x0061b498]      ; 004ccf9c | DAT_0061b498
    ADD EAX,EAX                         ; 004ccfa2
    MOV EDX,EBX                         ; 004ccfa4
    MOV [0x01cd0c50],EAX                ; 004ccfa6 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ccfab
    MOV EAX,EBX                         ; 004ccfae
    IDIV ECX                            ; 004ccfb0
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ccfb2 | DAT_01cd0c4c
    PUSH 0x5e142a                       ; 004ccfb8 | = "F9 = Quick load"
        ;   Label: LAB_004ccfb8
    CALL FUN_00531090                   ; 004ccfbd
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ccfc2
    PUSH -0x1                           ; 004ccfc5
    PUSH 0x7                            ; 004ccfc7
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ccfc9 | DAT_01cd0c50
    PUSH ECX                            ; 004ccfcf
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004ccfd0 | DAT_01cd0c4c
    PUSH EDI                            ; 004ccfd6
    PUSH EAX                            ; 004ccfd7
    MOV EBP,dword ptr [0x0152d244]      ; 004ccfd8 | DAT_0152d244
    PUSH EBP                            ; 004ccfde
    CALL FUN_004c1dd0                   ; 004ccfdf
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ccfe4 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004ccfe9 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004ccfef
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccff2 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ccff8 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004ccffe
    ADD ESP,0x18                        ; 004cd000
    CMP EDX,ECX                         ; 004cd003
    JGE 0x004cd037                      ; 004cd005
        ;   XREF to: 004cd037 (CONDITIONAL_JUMP)  ; LAB_004cd037
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd007 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd00d
    MOV ECX,0x3                         ; 004cd014
    SUB EAX,EDX                         ; 004cd019
    MOV EBX,dword ptr [0x0061b498]      ; 004cd01b | DAT_0061b498
    ADD EAX,EAX                         ; 004cd021
    MOV EDX,EBX                         ; 004cd023
    MOV [0x01cd0c50],EAX                ; 004cd025 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd02a
    MOV EAX,EBX                         ; 004cd02d
    IDIV ECX                            ; 004cd02f
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd031 | DAT_01cd0c4c
    PUSH 0x5e143a                       ; 004cd037 | = "ESC = Pause game"
        ;   Label: LAB_004cd037
    CALL FUN_00531090                   ; 004cd03c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd041
    PUSH -0x1                           ; 004cd044
    PUSH 0x7                            ; 004cd046
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cd048 | DAT_01cd0c50
    PUSH EBP                            ; 004cd04e
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cd04f | DAT_01cd0c4c
    PUSH EDX                            ; 004cd055
    PUSH EAX                            ; 004cd056
    MOV ECX,dword ptr [0x0152d244]      ; 004cd057 | DAT_0152d244
    PUSH ECX                            ; 004cd05d
    CALL FUN_004c1dd0                   ; 004cd05e
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd063 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cd068 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd06e | DAT_0061b49c
    ADD EDI,EAX                         ; 004cd074
    SHL EAX,0x2                         ; 004cd076
    ADD ESP,0x18                        ; 004cd079
    SUB EDX,EAX                         ; 004cd07c
    MOV dword ptr [0x01cd0c50],EDI      ; 004cd07e | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cd084
    JGE 0x004cd0b8                      ; 004cd086
        ;   XREF to: 004cd0b8 (CONDITIONAL_JUMP)  ; LAB_004cd0b8
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd088 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd08e
    MOV ECX,0x3                         ; 004cd095
    SUB EAX,EDX                         ; 004cd09a
    MOV EBX,dword ptr [0x0061b498]      ; 004cd09c | DAT_0061b498
    ADD EAX,EAX                         ; 004cd0a2
    MOV EDX,EBX                         ; 004cd0a4
    MOV [0x01cd0c50],EAX                ; 004cd0a6 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd0ab
    MOV EAX,EBX                         ; 004cd0ae
    IDIV ECX                            ; 004cd0b0
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd0b2 | DAT_01cd0c4c
    MOV EAX,[0x01cd0c54]                ; 004cd0b8 | DAT_01cd0c54
        ;   Label: LAB_004cd0b8
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd0bd | DAT_01cd0c50
    ADD ECX,EAX                         ; 004cd0c3
    PUSH 0x5e144b                       ; 004cd0c5 | = "Forward"
    MOV dword ptr [0x01cd0c50],ECX      ; 004cd0ca | DAT_01cd0c50
    CALL FUN_00531090                   ; 004cd0d0
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd0d5
    PUSH EAX                            ; 004cd0d8
    MOV EDX,dword ptr [ESI + 0x28]      ; 004cd0d9
    PUSH EDX                            ; 004cd0dc
    CALL FUN_0050d220                   ; 004cd0dd
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd0e2
    PUSH EAX                            ; 004cd0e5
    PUSH 0x5e13c4                       ; 004cd0e6 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x20c]               ; 004cd0eb
    PUSH EAX                            ; 004cd0f2
    CALL FUN_005bfb40                   ; 004cd0f3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd0f8
    PUSH -0x1                           ; 004cd0fb
    PUSH 0x7                            ; 004cd0fd
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cd0ff | DAT_01cd0c50
    PUSH EDI                            ; 004cd105
    MOV EBP,dword ptr [0x01cd0c4c]      ; 004cd106 | DAT_01cd0c4c
    PUSH EBP                            ; 004cd10c
    LEA EAX,[ESP + 0x210]               ; 004cd10d
    PUSH EAX                            ; 004cd114
    MOV EAX,[0x0152d244]                ; 004cd115 | DAT_0152d244
    PUSH EAX                            ; 004cd11a
    CALL FUN_004c1dd0                   ; 004cd11b
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd120 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cd125 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cd12b
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd12e | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd134 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cd13a
    ADD ESP,0x18                        ; 004cd13c
    CMP EDX,ECX                         ; 004cd13f
    JGE 0x004cd173                      ; 004cd141
        ;   XREF to: 004cd173 (CONDITIONAL_JUMP)  ; LAB_004cd173
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd143 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd149
    MOV ECX,0x3                         ; 004cd150
    SUB EAX,EDX                         ; 004cd155
    MOV EBX,dword ptr [0x0061b498]      ; 004cd157 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd15d
    MOV EDX,EBX                         ; 004cd15f
    MOV [0x01cd0c50],EAX                ; 004cd161 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd166
    MOV EAX,EBX                         ; 004cd169
    IDIV ECX                            ; 004cd16b
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd16d | DAT_01cd0c4c
    PUSH 0x5e1453                       ; 004cd173 | DAT_005e1453
        ;   Label: LAB_004cd173
    CALL FUN_00531090                   ; 004cd178
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd17d
    PUSH EAX                            ; 004cd180
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004cd181
    PUSH EDX                            ; 004cd184
    CALL FUN_0050d220                   ; 004cd185
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd18a
    PUSH EAX                            ; 004cd18d
    PUSH 0x5e13c4                       ; 004cd18e | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x90c]               ; 004cd193
    PUSH EAX                            ; 004cd19a
    CALL FUN_005bfb40                   ; 004cd19b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd1a0
    PUSH -0x1                           ; 004cd1a3
    PUSH 0x7                            ; 004cd1a5
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cd1a7 | DAT_01cd0c50
    PUSH EBP                            ; 004cd1ad
    MOV EAX,[0x01cd0c4c]                ; 004cd1ae | DAT_01cd0c4c
    PUSH EAX                            ; 004cd1b3
    LEA EAX,[ESP + 0x910]               ; 004cd1b4
    PUSH EAX                            ; 004cd1bb
    MOV EDX,dword ptr [0x0152d244]      ; 004cd1bc | DAT_0152d244
    PUSH EDX                            ; 004cd1c2
    CALL FUN_004c1dd0                   ; 004cd1c3
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd1c8 | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd1cd | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd1d3 | DAT_0061b49c
    ADD ECX,EAX                         ; 004cd1d9
    SHL EAX,0x2                         ; 004cd1db
    ADD ESP,0x18                        ; 004cd1de
    SUB EDX,EAX                         ; 004cd1e1
    MOV dword ptr [0x01cd0c50],ECX      ; 004cd1e3 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cd1e9
    JGE 0x004cd21d                      ; 004cd1eb
        ;   XREF to: 004cd21d (CONDITIONAL_JUMP)  ; LAB_004cd21d
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd1ed | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd1f3
    MOV ECX,0x3                         ; 004cd1fa
    SUB EAX,EDX                         ; 004cd1ff
    MOV EBX,dword ptr [0x0061b498]      ; 004cd201 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd207
    MOV EDX,EBX                         ; 004cd209
    MOV [0x01cd0c50],EAX                ; 004cd20b | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd210
    MOV EAX,EBX                         ; 004cd213
    IDIV ECX                            ; 004cd215
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd217 | DAT_01cd0c4c
    MOV EAX,[0x0061d95c]                ; 004cd21d | DAT_0061d95c
        ;   Label: LAB_004cd21d
    CMP dword ptr [EAX + 0xac],0x0      ; 004cd222 | DAT_01ccf43c
    JZ 0x004ce4b8                       ; 004cd229
        ;   XREF to: 004ce4b8 (CONDITIONAL_JUMP)  ; LAB_004ce4b8
    PUSH 0x5e1458                       ; 004cd22f | DAT_005e1458
    CALL FUN_00531090                   ; 004cd234
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd239
    PUSH EAX                            ; 004cd23c
    MOV EDX,dword ptr [ESI + 0x30]      ; 004cd23d
    PUSH EDX                            ; 004cd240
    CALL FUN_0050d220                   ; 004cd241
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd246
    PUSH EAX                            ; 004cd249
    PUSH 0x5e13c4                       ; 004cd24a | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0xc]                 ; 004cd24f
    PUSH EAX                            ; 004cd253
    CALL FUN_005bfb40                   ; 004cd254
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd259
    PUSH -0x1                           ; 004cd25c
    PUSH 0x7                            ; 004cd25e
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cd260 | DAT_01cd0c50
    PUSH EBP                            ; 004cd266
    MOV EAX,[0x01cd0c4c]                ; 004cd267 | DAT_01cd0c4c
    PUSH EAX                            ; 004cd26c
    LEA EAX,[ESP + 0x10]                ; 004cd26d
    PUSH EAX                            ; 004cd271
    MOV EDX,dword ptr [0x0152d244]      ; 004cd272 | DAT_0152d244
    PUSH EDX                            ; 004cd278
    CALL FUN_004c1dd0                   ; 004cd279
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd27e | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd283 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd289 | DAT_0061b49c
    ADD ECX,EAX                         ; 004cd28f
    SHL EAX,0x2                         ; 004cd291
    ADD ESP,0x18                        ; 004cd294
    SUB EDX,EAX                         ; 004cd297
    MOV dword ptr [0x01cd0c50],ECX      ; 004cd299 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cd29f
        ;   Label: LAB_004cd29f
    JGE 0x004cd2d3                      ; 004cd2a1
        ;   XREF to: 004cd2d3 (CONDITIONAL_JUMP)  ; LAB_004cd2d3
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd2a3 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd2a9
    MOV ECX,0x3                         ; 004cd2b0
    SUB EAX,EDX                         ; 004cd2b5
    MOV EBX,dword ptr [0x0061b498]      ; 004cd2b7 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd2bd
    MOV EDX,EBX                         ; 004cd2bf
    MOV [0x01cd0c50],EAX                ; 004cd2c1 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd2c6
    MOV EAX,EBX                         ; 004cd2c9
    IDIV ECX                            ; 004cd2cb
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd2cd | DAT_01cd0c4c
    PUSH 0x5e1461                       ; 004cd2d3 | = "Strafe on"
        ;   Label: LAB_004cd2d3
    CALL FUN_00531090                   ; 004cd2d8
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd2dd
    PUSH EAX                            ; 004cd2e0
    MOV EDX,dword ptr [ESI + 0x34]      ; 004cd2e1
    PUSH EDX                            ; 004cd2e4
    CALL FUN_0050d220                   ; 004cd2e5
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd2ea
    PUSH EAX                            ; 004cd2ed
    PUSH 0x5e13c4                       ; 004cd2ee | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0xe0c]               ; 004cd2f3
    PUSH EAX                            ; 004cd2fa
    CALL FUN_005bfb40                   ; 004cd2fb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd300
    PUSH -0x1                           ; 004cd303
    PUSH 0x7                            ; 004cd305
    MOV EAX,[0x01cd0c50]                ; 004cd307 | DAT_01cd0c50
    PUSH EAX                            ; 004cd30c
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cd30d | DAT_01cd0c4c
    PUSH EDX                            ; 004cd313
    LEA EAX,[ESP + 0xe10]               ; 004cd314
    PUSH EAX                            ; 004cd31b
    MOV ECX,dword ptr [0x0152d244]      ; 004cd31c | DAT_0152d244
    PUSH ECX                            ; 004cd322
    CALL FUN_004c1dd0                   ; 004cd323
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd328 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cd32d | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd333 | DAT_0061b49c
    ADD EDI,EAX                         ; 004cd339
    SHL EAX,0x2                         ; 004cd33b
    ADD ESP,0x18                        ; 004cd33e
    SUB EDX,EAX                         ; 004cd341
    MOV dword ptr [0x01cd0c50],EDI      ; 004cd343 | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cd349
    JGE 0x004cd37d                      ; 004cd34b
        ;   XREF to: 004cd37d (CONDITIONAL_JUMP)  ; LAB_004cd37d
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd34d | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd353
    MOV ECX,0x3                         ; 004cd35a
    SUB EAX,EDX                         ; 004cd35f
    MOV EBX,dword ptr [0x0061b498]      ; 004cd361 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd367
    MOV EDX,EBX                         ; 004cd369
    MOV [0x01cd0c50],EAX                ; 004cd36b | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd370
    MOV EAX,EBX                         ; 004cd373
    IDIV ECX                            ; 004cd375
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd377 | DAT_01cd0c4c
    PUSH 0x5e146b                       ; 004cd37d | = "Strafe left"
        ;   Label: LAB_004cd37d
    CALL FUN_00531090                   ; 004cd382
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd387
    PUSH EAX                            ; 004cd38a
    MOV EDX,dword ptr [ESI + 0x38]      ; 004cd38b
    PUSH EDX                            ; 004cd38e
    CALL FUN_0050d220                   ; 004cd38f
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd394
    PUSH EAX                            ; 004cd397
    PUSH 0x5e13c4                       ; 004cd398 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x30c]               ; 004cd39d
    PUSH EAX                            ; 004cd3a4
    CALL FUN_005bfb40                   ; 004cd3a5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd3aa
    PUSH -0x1                           ; 004cd3ad
    PUSH 0x7                            ; 004cd3af
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd3b1 | DAT_01cd0c50
    PUSH ECX                            ; 004cd3b7
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cd3b8 | DAT_01cd0c4c
    PUSH EDI                            ; 004cd3be
    LEA EAX,[ESP + 0x310]               ; 004cd3bf
    PUSH EAX                            ; 004cd3c6
    MOV EBP,dword ptr [0x0152d244]      ; 004cd3c7 | DAT_0152d244
    PUSH EBP                            ; 004cd3cd
    CALL FUN_004c1dd0                   ; 004cd3ce
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd3d3 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cd3d8 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cd3de
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd3e1 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd3e7 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cd3ed
    ADD ESP,0x18                        ; 004cd3ef
    CMP EDX,ECX                         ; 004cd3f2
    JGE 0x004cd426                      ; 004cd3f4
        ;   XREF to: 004cd426 (CONDITIONAL_JUMP)  ; LAB_004cd426
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd3f6 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd3fc
    MOV ECX,0x3                         ; 004cd403
    SUB EAX,EDX                         ; 004cd408
    MOV EBX,dword ptr [0x0061b498]      ; 004cd40a | DAT_0061b498
    ADD EAX,EAX                         ; 004cd410
    MOV EDX,EBX                         ; 004cd412
    MOV [0x01cd0c50],EAX                ; 004cd414 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd419
    MOV EAX,EBX                         ; 004cd41c
    IDIV ECX                            ; 004cd41e
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd420 | DAT_01cd0c4c
    PUSH 0x5e1477                       ; 004cd426 | = "Strafe right"
        ;   Label: LAB_004cd426
    CALL FUN_00531090                   ; 004cd42b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd430
    PUSH EAX                            ; 004cd433
    MOV EDX,dword ptr [ESI + 0x3c]      ; 004cd434
    PUSH EDX                            ; 004cd437
    CALL FUN_0050d220                   ; 004cd438
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd43d
    PUSH EAX                            ; 004cd440
    PUSH 0x5e13c4                       ; 004cd441 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0xa0c]               ; 004cd446
    PUSH EAX                            ; 004cd44d
    CALL FUN_005bfb40                   ; 004cd44e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd453
    PUSH -0x1                           ; 004cd456
    PUSH 0x7                            ; 004cd458
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cd45a | DAT_01cd0c50
    PUSH EBP                            ; 004cd460
    MOV EAX,[0x01cd0c4c]                ; 004cd461 | DAT_01cd0c4c
    PUSH EAX                            ; 004cd466
    LEA EAX,[ESP + 0xa10]               ; 004cd467
    PUSH EAX                            ; 004cd46e
    MOV EDX,dword ptr [0x0152d244]      ; 004cd46f | DAT_0152d244
    PUSH EDX                            ; 004cd475
    CALL FUN_004c1dd0                   ; 004cd476
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd47b | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd480 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd486 | DAT_0061b49c
    ADD ECX,EAX                         ; 004cd48c
    SHL EAX,0x2                         ; 004cd48e
    ADD ESP,0x18                        ; 004cd491
    SUB EDX,EAX                         ; 004cd494
    MOV dword ptr [0x01cd0c50],ECX      ; 004cd496 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cd49c
    JGE 0x004cd4d0                      ; 004cd49e
        ;   XREF to: 004cd4d0 (CONDITIONAL_JUMP)  ; LAB_004cd4d0
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd4a0 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd4a6
    MOV ECX,0x3                         ; 004cd4ad
    SUB EAX,EDX                         ; 004cd4b2
    MOV EBX,dword ptr [0x0061b498]      ; 004cd4b4 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd4ba
    MOV EDX,EBX                         ; 004cd4bc
    MOV [0x01cd0c50],EAX                ; 004cd4be | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd4c3
    MOV EAX,EBX                         ; 004cd4c6
    IDIV ECX                            ; 004cd4c8
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd4ca | DAT_01cd0c4c
    PUSH 0x5e1484                       ; 004cd4d0 | = "Turn left"
        ;   Label: LAB_004cd4d0
    CALL FUN_00531090                   ; 004cd4d5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd4da
    PUSH EAX                            ; 004cd4dd
    MOV EDX,dword ptr [ESI + 0x44]      ; 004cd4de
    PUSH EDX                            ; 004cd4e1
    CALL FUN_0050d220                   ; 004cd4e2
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd4e7
    PUSH EAX                            ; 004cd4ea
    PUSH 0x5e13c4                       ; 004cd4eb | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x120c]              ; 004cd4f0
    PUSH EAX                            ; 004cd4f7
    CALL FUN_005bfb40                   ; 004cd4f8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd4fd
    PUSH -0x1                           ; 004cd500
    PUSH 0x7                            ; 004cd502
    MOV EAX,[0x01cd0c50]                ; 004cd504 | DAT_01cd0c50
    PUSH EAX                            ; 004cd509
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cd50a | DAT_01cd0c4c
    PUSH EDX                            ; 004cd510
    LEA EAX,[ESP + 0x1210]              ; 004cd511
    PUSH EAX                            ; 004cd518
    MOV ECX,dword ptr [0x0152d244]      ; 004cd519 | DAT_0152d244
    PUSH ECX                            ; 004cd51f
    CALL FUN_004c1dd0                   ; 004cd520
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd525 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cd52a | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd530 | DAT_0061b49c
    ADD EDI,EAX                         ; 004cd536
    SHL EAX,0x2                         ; 004cd538
    ADD ESP,0x18                        ; 004cd53b
    SUB EDX,EAX                         ; 004cd53e
    MOV dword ptr [0x01cd0c50],EDI      ; 004cd540 | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cd546
    JGE 0x004cd57a                      ; 004cd548
        ;   XREF to: 004cd57a (CONDITIONAL_JUMP)  ; LAB_004cd57a
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd54a | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd550
    MOV ECX,0x3                         ; 004cd557
    SUB EAX,EDX                         ; 004cd55c
    MOV EBX,dword ptr [0x0061b498]      ; 004cd55e | DAT_0061b498
    ADD EAX,EAX                         ; 004cd564
    MOV EDX,EBX                         ; 004cd566
    MOV [0x01cd0c50],EAX                ; 004cd568 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd56d
    MOV EAX,EBX                         ; 004cd570
    IDIV ECX                            ; 004cd572
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd574 | DAT_01cd0c4c
    PUSH 0x5e148e                       ; 004cd57a | = "Turn right"
        ;   Label: LAB_004cd57a
    CALL FUN_00531090                   ; 004cd57f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd584
    PUSH EAX                            ; 004cd587
    MOV EDX,dword ptr [ESI + 0x40]      ; 004cd588
    PUSH EDX                            ; 004cd58b
    CALL FUN_0050d220                   ; 004cd58c
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd591
    PUSH EAX                            ; 004cd594
    PUSH 0x5e13c4                       ; 004cd595 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x190c]              ; 004cd59a
    PUSH EAX                            ; 004cd5a1
    CALL FUN_005bfb40                   ; 004cd5a2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd5a7
    PUSH -0x1                           ; 004cd5aa
    PUSH 0x7                            ; 004cd5ac
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd5ae | DAT_01cd0c50
    PUSH ECX                            ; 004cd5b4
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cd5b5 | DAT_01cd0c4c
    PUSH EDI                            ; 004cd5bb
    LEA EAX,[ESP + 0x1910]              ; 004cd5bc
    PUSH EAX                            ; 004cd5c3
    MOV EBP,dword ptr [0x0152d244]      ; 004cd5c4 | DAT_0152d244
    PUSH EBP                            ; 004cd5ca
    CALL FUN_004c1dd0                   ; 004cd5cb
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd5d0 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cd5d5 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cd5db
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd5de | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd5e4 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cd5ea
    ADD ESP,0x18                        ; 004cd5ec
    CMP EDX,ECX                         ; 004cd5ef
    JGE 0x004cd623                      ; 004cd5f1
        ;   XREF to: 004cd623 (CONDITIONAL_JUMP)  ; LAB_004cd623
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd5f3 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd5f9
    MOV ECX,0x3                         ; 004cd600
    SUB EAX,EDX                         ; 004cd605
    MOV EBX,dword ptr [0x0061b498]      ; 004cd607 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd60d
    MOV EDX,EBX                         ; 004cd60f
    MOV [0x01cd0c50],EAX                ; 004cd611 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd616
    MOV EAX,EBX                         ; 004cd619
    IDIV ECX                            ; 004cd61b
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd61d | DAT_01cd0c4c
    PUSH 0x5e1499                       ; 004cd623 | = "Fire / Action"
        ;   Label: LAB_004cd623
    CALL FUN_00531090                   ; 004cd628
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd62d
    PUSH EAX                            ; 004cd630
    MOV EDX,dword ptr [ESI + 0x48]      ; 004cd631
    PUSH EDX                            ; 004cd634
    CALL FUN_0050d220                   ; 004cd635
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd63a
    PUSH EAX                            ; 004cd63d
    PUSH 0x5e13c4                       ; 004cd63e | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x170c]              ; 004cd643
    PUSH EAX                            ; 004cd64a
    CALL FUN_005bfb40                   ; 004cd64b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd650
    PUSH -0x1                           ; 004cd653
    PUSH 0x7                            ; 004cd655
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cd657 | DAT_01cd0c50
    PUSH EBP                            ; 004cd65d
    MOV EAX,[0x01cd0c4c]                ; 004cd65e | DAT_01cd0c4c
    PUSH EAX                            ; 004cd663
    LEA EAX,[ESP + 0x1710]              ; 004cd664
    PUSH EAX                            ; 004cd66b
    MOV EDX,dword ptr [0x0152d244]      ; 004cd66c | DAT_0152d244
    PUSH EDX                            ; 004cd672
    CALL FUN_004c1dd0                   ; 004cd673
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd678 | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd67d | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd683 | DAT_0061b49c
    ADD ECX,EAX                         ; 004cd689
    SHL EAX,0x2                         ; 004cd68b
    ADD ESP,0x18                        ; 004cd68e
    SUB EDX,EAX                         ; 004cd691
    MOV dword ptr [0x01cd0c50],ECX      ; 004cd693 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cd699
    JGE 0x004cd6cd                      ; 004cd69b
        ;   XREF to: 004cd6cd (CONDITIONAL_JUMP)  ; LAB_004cd6cd
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd69d | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd6a3
    MOV ECX,0x3                         ; 004cd6aa
    SUB EAX,EDX                         ; 004cd6af
    MOV EBX,dword ptr [0x0061b498]      ; 004cd6b1 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd6b7
    MOV EDX,EBX                         ; 004cd6b9
    MOV [0x01cd0c50],EAX                ; 004cd6bb | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd6c0
    MOV EAX,EBX                         ; 004cd6c3
    IDIV ECX                            ; 004cd6c5
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd6c7 | DAT_01cd0c4c
    PUSH 0x5e14a7                       ; 004cd6cd | = "Use item"
        ;   Label: LAB_004cd6cd
    CALL FUN_00531090                   ; 004cd6d2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd6d7
    PUSH EAX                            ; 004cd6da
    MOV EDX,dword ptr [ESI + 0x4c]      ; 004cd6db
    PUSH EDX                            ; 004cd6de
    CALL FUN_0050d220                   ; 004cd6df
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd6e4
    PUSH EAX                            ; 004cd6e7
    PUSH 0x5e13c4                       ; 004cd6e8 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x150c]              ; 004cd6ed
    PUSH EAX                            ; 004cd6f4
    CALL FUN_005bfb40                   ; 004cd6f5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd6fa
    PUSH -0x1                           ; 004cd6fd
    PUSH 0x7                            ; 004cd6ff
    MOV EAX,[0x01cd0c50]                ; 004cd701 | DAT_01cd0c50
    PUSH EAX                            ; 004cd706
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cd707 | DAT_01cd0c4c
    PUSH EDX                            ; 004cd70d
    LEA EAX,[ESP + 0x1510]              ; 004cd70e
    PUSH EAX                            ; 004cd715
    MOV ECX,dword ptr [0x0152d244]      ; 004cd716 | DAT_0152d244
    PUSH ECX                            ; 004cd71c
    CALL FUN_004c1dd0                   ; 004cd71d
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd722 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cd727 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd72d | DAT_0061b49c
    ADD EDI,EAX                         ; 004cd733
    SHL EAX,0x2                         ; 004cd735
    ADD ESP,0x18                        ; 004cd738
    SUB EDX,EAX                         ; 004cd73b
    MOV dword ptr [0x01cd0c50],EDI      ; 004cd73d | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cd743
    JGE 0x004cd777                      ; 004cd745
        ;   XREF to: 004cd777 (CONDITIONAL_JUMP)  ; LAB_004cd777
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd747 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd74d
    MOV ECX,0x3                         ; 004cd754
    SUB EAX,EDX                         ; 004cd759
    MOV EBX,dword ptr [0x0061b498]      ; 004cd75b | DAT_0061b498
    ADD EAX,EAX                         ; 004cd761
    MOV EDX,EBX                         ; 004cd763
    MOV [0x01cd0c50],EAX                ; 004cd765 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd76a
    MOV EAX,EBX                         ; 004cd76d
    IDIV ECX                            ; 004cd76f
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd771 | DAT_01cd0c4c
    PUSH 0x5e14b0                       ; 004cd777 | = "Flashlight"
        ;   Label: LAB_004cd777
    CALL FUN_00531090                   ; 004cd77c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd781
    PUSH EAX                            ; 004cd784
    MOV EDX,dword ptr [ESI + 0x50]      ; 004cd785
    PUSH EDX                            ; 004cd788
    CALL FUN_0050d220                   ; 004cd789
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd78e
    PUSH EAX                            ; 004cd791
    PUSH 0x5e13c4                       ; 004cd792 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x1c0c]              ; 004cd797
    PUSH EAX                            ; 004cd79e
    CALL FUN_005bfb40                   ; 004cd79f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd7a4
    PUSH -0x1                           ; 004cd7a7
    PUSH 0x7                            ; 004cd7a9
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd7ab | DAT_01cd0c50
    PUSH ECX                            ; 004cd7b1
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cd7b2 | DAT_01cd0c4c
    PUSH EDI                            ; 004cd7b8
    LEA EAX,[ESP + 0x1c10]              ; 004cd7b9
    PUSH EAX                            ; 004cd7c0
    MOV EBP,dword ptr [0x0152d244]      ; 004cd7c1 | DAT_0152d244
    PUSH EBP                            ; 004cd7c7
    CALL FUN_004c1dd0                   ; 004cd7c8
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd7cd | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cd7d2 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cd7d8
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd7db | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd7e1 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cd7e7
    ADD ESP,0x18                        ; 004cd7e9
    CMP EDX,ECX                         ; 004cd7ec
    JGE 0x004cd820                      ; 004cd7ee
        ;   XREF to: 004cd820 (CONDITIONAL_JUMP)  ; LAB_004cd820
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd7f0 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd7f6
    MOV ECX,0x3                         ; 004cd7fd
    SUB EAX,EDX                         ; 004cd802
    MOV EBX,dword ptr [0x0061b498]      ; 004cd804 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd80a
    MOV EDX,EBX                         ; 004cd80c
    MOV [0x01cd0c50],EAX                ; 004cd80e | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd813
    MOV EAX,EBX                         ; 004cd816
    IDIV ECX                            ; 004cd818
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd81a | DAT_01cd0c4c
    PUSH 0x5e14bb                       ; 004cd820 | = "Night Vision"
        ;   Label: LAB_004cd820
    CALL FUN_00531090                   ; 004cd825
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd82a
    PUSH EAX                            ; 004cd82d
    MOV EDX,dword ptr [ESI + 0x54]      ; 004cd82e
    PUSH EDX                            ; 004cd831
    CALL FUN_0050d220                   ; 004cd832
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd837
    PUSH EAX                            ; 004cd83a
    PUSH 0x5e13c4                       ; 004cd83b | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x160c]              ; 004cd840
    PUSH EAX                            ; 004cd847
    CALL FUN_005bfb40                   ; 004cd848
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd84d
    PUSH -0x1                           ; 004cd850
    PUSH 0x7                            ; 004cd852
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cd854 | DAT_01cd0c50
    PUSH EBP                            ; 004cd85a
    MOV EAX,[0x01cd0c4c]                ; 004cd85b | DAT_01cd0c4c
    PUSH EAX                            ; 004cd860
    LEA EAX,[ESP + 0x1610]              ; 004cd861
    PUSH EAX                            ; 004cd868
    MOV EDX,dword ptr [0x0152d244]      ; 004cd869 | DAT_0152d244
    PUSH EDX                            ; 004cd86f
    CALL FUN_004c1dd0                   ; 004cd870
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd875 | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd87a | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd880 | DAT_0061b49c
    ADD ECX,EAX                         ; 004cd886
    SHL EAX,0x2                         ; 004cd888
    ADD ESP,0x18                        ; 004cd88b
    SUB EDX,EAX                         ; 004cd88e
    MOV dword ptr [0x01cd0c50],ECX      ; 004cd890 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cd896
    JGE 0x004cd8ca                      ; 004cd898
        ;   XREF to: 004cd8ca (CONDITIONAL_JUMP)  ; LAB_004cd8ca
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd89a | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd8a0
    MOV ECX,0x3                         ; 004cd8a7
    SUB EAX,EDX                         ; 004cd8ac
    MOV EBX,dword ptr [0x0061b498]      ; 004cd8ae | DAT_0061b498
    ADD EAX,EAX                         ; 004cd8b4
    MOV EDX,EBX                         ; 004cd8b6
    MOV [0x01cd0c50],EAX                ; 004cd8b8 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd8bd
    MOV EAX,EBX                         ; 004cd8c0
    IDIV ECX                            ; 004cd8c2
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd8c4 | DAT_01cd0c4c
    PUSH 0x5e14c8                       ; 004cd8ca | = "Journal"
        ;   Label: LAB_004cd8ca
    CALL FUN_00531090                   ; 004cd8cf
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd8d4
    PUSH EAX                            ; 004cd8d7
    MOV EDX,dword ptr [ESI + 0x58]      ; 004cd8d8
    PUSH EDX                            ; 004cd8db
    CALL FUN_0050d220                   ; 004cd8dc
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd8e1
    PUSH EAX                            ; 004cd8e4
    PUSH 0x5e13c4                       ; 004cd8e5 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x1d0c]              ; 004cd8ea
    PUSH EAX                            ; 004cd8f1
    CALL FUN_005bfb40                   ; 004cd8f2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd8f7
    PUSH -0x1                           ; 004cd8fa
    PUSH 0x7                            ; 004cd8fc
    MOV EAX,[0x01cd0c50]                ; 004cd8fe | DAT_01cd0c50
    PUSH EAX                            ; 004cd903
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cd904 | DAT_01cd0c4c
    PUSH EDX                            ; 004cd90a
    LEA EAX,[ESP + 0x1d10]              ; 004cd90b
    PUSH EAX                            ; 004cd912
    MOV ECX,dword ptr [0x0152d244]      ; 004cd913 | DAT_0152d244
    PUSH ECX                            ; 004cd919
    CALL FUN_004c1dd0                   ; 004cd91a
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd91f | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cd924 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd92a | DAT_0061b49c
    ADD EDI,EAX                         ; 004cd930
    SHL EAX,0x2                         ; 004cd932
    ADD ESP,0x18                        ; 004cd935
    SUB EDX,EAX                         ; 004cd938
    MOV dword ptr [0x01cd0c50],EDI      ; 004cd93a | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cd940
    JGE 0x004cd974                      ; 004cd942
        ;   XREF to: 004cd974 (CONDITIONAL_JUMP)  ; LAB_004cd974
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd944 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd94a
    MOV ECX,0x3                         ; 004cd951
    SUB EAX,EDX                         ; 004cd956
    MOV EBX,dword ptr [0x0061b498]      ; 004cd958 | DAT_0061b498
    ADD EAX,EAX                         ; 004cd95e
    MOV EDX,EBX                         ; 004cd960
    MOV [0x01cd0c50],EAX                ; 004cd962 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cd967
    MOV EAX,EBX                         ; 004cd96a
    IDIV ECX                            ; 004cd96c
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cd96e | DAT_01cd0c4c
    PUSH 0x5e14d0                       ; 004cd974 | DAT_005e14d0
        ;   Label: LAB_004cd974
    CALL FUN_00531090                   ; 004cd979
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cd97e
    PUSH EAX                            ; 004cd981
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004cd982
    PUSH EDX                            ; 004cd985
    CALL FUN_0050d220                   ; 004cd986
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cd98b
    PUSH EAX                            ; 004cd98e
    PUSH 0x5e13c4                       ; 004cd98f | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x1e0c]              ; 004cd994
    PUSH EAX                            ; 004cd99b
    CALL FUN_005bfb40                   ; 004cd99c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cd9a1
    PUSH -0x1                           ; 004cd9a4
    PUSH 0x7                            ; 004cd9a6
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd9a8 | DAT_01cd0c50
    PUSH ECX                            ; 004cd9ae
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cd9af | DAT_01cd0c4c
    PUSH EDI                            ; 004cd9b5
    LEA EAX,[ESP + 0x1e10]              ; 004cd9b6
    PUSH EAX                            ; 004cd9bd
    MOV EBP,dword ptr [0x0152d244]      ; 004cd9be | DAT_0152d244
    PUSH EBP                            ; 004cd9c4
    CALL FUN_004c1dd0                   ; 004cd9c5
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cd9ca | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cd9cf | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cd9d5
    MOV EDX,dword ptr [0x0061b49c]      ; 004cd9d8 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cd9de | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cd9e4
    ADD ESP,0x18                        ; 004cd9e6
    CMP EDX,ECX                         ; 004cd9e9
    JGE 0x004cda1d                      ; 004cd9eb
        ;   XREF to: 004cda1d (CONDITIONAL_JUMP)  ; LAB_004cda1d
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cd9ed | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd9f3
    MOV ECX,0x3                         ; 004cd9fa
    SUB EAX,EDX                         ; 004cd9ff
    MOV EBX,dword ptr [0x0061b498]      ; 004cda01 | DAT_0061b498
    ADD EAX,EAX                         ; 004cda07
    MOV EDX,EBX                         ; 004cda09
    MOV [0x01cd0c50],EAX                ; 004cda0b | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cda10
    MOV EAX,EBX                         ; 004cda13
    IDIV ECX                            ; 004cda15
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cda17 | DAT_01cd0c4c
    PUSH 0x5e14d4                       ; 004cda1d | = "Compass"
        ;   Label: LAB_004cda1d
    CALL FUN_00531090                   ; 004cda22
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cda27
    PUSH EAX                            ; 004cda2a
    MOV EDX,dword ptr [ESI + 0x60]      ; 004cda2b
    PUSH EDX                            ; 004cda2e
    CALL FUN_0050d220                   ; 004cda2f
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cda34
    PUSH EAX                            ; 004cda37
    PUSH 0x5e13c4                       ; 004cda38 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x40c]               ; 004cda3d
    PUSH EAX                            ; 004cda44
    CALL FUN_005bfb40                   ; 004cda45
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cda4a
    PUSH -0x1                           ; 004cda4d
    PUSH 0x7                            ; 004cda4f
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cda51 | DAT_01cd0c50
    PUSH EBP                            ; 004cda57
    MOV EAX,[0x01cd0c4c]                ; 004cda58 | DAT_01cd0c4c
    PUSH EAX                            ; 004cda5d
    LEA EAX,[ESP + 0x410]               ; 004cda5e
    PUSH EAX                            ; 004cda65
    MOV EDX,dword ptr [0x0152d244]      ; 004cda66 | DAT_0152d244
    PUSH EDX                            ; 004cda6c
    CALL FUN_004c1dd0                   ; 004cda6d
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cda72 | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cda77 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cda7d | DAT_0061b49c
    ADD ECX,EAX                         ; 004cda83
    SHL EAX,0x2                         ; 004cda85
    ADD ESP,0x18                        ; 004cda88
    SUB EDX,EAX                         ; 004cda8b
    MOV dword ptr [0x01cd0c50],ECX      ; 004cda8d | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cda93
    JGE 0x004cdac7                      ; 004cda95
        ;   XREF to: 004cdac7 (CONDITIONAL_JUMP)  ; LAB_004cdac7
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cda97 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cda9d
    MOV ECX,0x3                         ; 004cdaa4
    SUB EAX,EDX                         ; 004cdaa9
    MOV EBX,dword ptr [0x0061b498]      ; 004cdaab | DAT_0061b498
    ADD EAX,EAX                         ; 004cdab1
    MOV EDX,EBX                         ; 004cdab3
    MOV [0x01cd0c50],EAX                ; 004cdab5 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cdaba
    MOV EAX,EBX                         ; 004cdabd
    IDIV ECX                            ; 004cdabf
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cdac1 | DAT_01cd0c4c
    PUSH 0x5e14dc                       ; 004cdac7 | DAT_005e14dc
        ;   Label: LAB_004cdac7
    CALL FUN_00531090                   ; 004cdacc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cdad1
    PUSH EAX                            ; 004cdad4
    MOV EDX,dword ptr [ESI + 0x64]      ; 004cdad5
    PUSH EDX                            ; 004cdad8
    CALL FUN_0050d220                   ; 004cdad9
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cdade
    PUSH EAX                            ; 004cdae1
    PUSH 0x5e13c4                       ; 004cdae2 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0xb0c]               ; 004cdae7
    PUSH EAX                            ; 004cdaee
    CALL FUN_005bfb40                   ; 004cdaef
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cdaf4
    PUSH -0x1                           ; 004cdaf7
    PUSH 0x7                            ; 004cdaf9
    MOV EAX,[0x01cd0c50]                ; 004cdafb | DAT_01cd0c50
    PUSH EAX                            ; 004cdb00
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cdb01 | DAT_01cd0c4c
    PUSH EDX                            ; 004cdb07
    LEA EAX,[ESP + 0xb10]               ; 004cdb08
    PUSH EAX                            ; 004cdb0f
    MOV ECX,dword ptr [0x0152d244]      ; 004cdb10 | DAT_0152d244
    PUSH ECX                            ; 004cdb16
    CALL FUN_004c1dd0                   ; 004cdb17
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cdb1c | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cdb21 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cdb27 | DAT_0061b49c
    ADD EDI,EAX                         ; 004cdb2d
    SHL EAX,0x2                         ; 004cdb2f
    ADD ESP,0x18                        ; 004cdb32
    SUB EDX,EAX                         ; 004cdb35
    MOV dword ptr [0x01cd0c50],EDI      ; 004cdb37 | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cdb3d
    JGE 0x004cdb71                      ; 004cdb3f
        ;   XREF to: 004cdb71 (CONDITIONAL_JUMP)  ; LAB_004cdb71
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cdb41 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cdb47
    MOV ECX,0x3                         ; 004cdb4e
    SUB EAX,EDX                         ; 004cdb53
    MOV EBX,dword ptr [0x0061b498]      ; 004cdb55 | DAT_0061b498
    ADD EAX,EAX                         ; 004cdb5b
    MOV EDX,EBX                         ; 004cdb5d
    MOV [0x01cd0c50],EAX                ; 004cdb5f | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cdb64
    MOV EAX,EBX                         ; 004cdb67
    IDIV ECX                            ; 004cdb69
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cdb6b | DAT_01cd0c4c
    PUSH 0x5e14e0                       ; 004cdb71 | DAT_005e14e0
        ;   Label: LAB_004cdb71
    CALL FUN_00531090                   ; 004cdb76
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cdb7b
    PUSH EAX                            ; 004cdb7e
    MOV EDX,dword ptr [ESI + 0x68]      ; 004cdb7f
    PUSH EDX                            ; 004cdb82
    CALL FUN_0050d220                   ; 004cdb83
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cdb88
    PUSH EAX                            ; 004cdb8b
    PUSH 0x5e13c4                       ; 004cdb8c | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x10c]               ; 004cdb91
    PUSH EAX                            ; 004cdb98
    CALL FUN_005bfb40                   ; 004cdb99
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cdb9e
    PUSH -0x1                           ; 004cdba1
    PUSH 0x7                            ; 004cdba3
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cdba5 | DAT_01cd0c50
    PUSH ECX                            ; 004cdbab
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cdbac | DAT_01cd0c4c
    PUSH EDI                            ; 004cdbb2
    LEA EAX,[ESP + 0x110]               ; 004cdbb3
    PUSH EAX                            ; 004cdbba
    MOV EBP,dword ptr [0x0152d244]      ; 004cdbbb | DAT_0152d244
    PUSH EBP                            ; 004cdbc1
    CALL FUN_004c1dd0                   ; 004cdbc2
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cdbc7 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cdbcc | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cdbd2
    MOV EDX,dword ptr [0x0061b49c]      ; 004cdbd5 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cdbdb | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cdbe1
    ADD ESP,0x18                        ; 004cdbe3
    CMP EDX,ECX                         ; 004cdbe6
    JGE 0x004cdc1a                      ; 004cdbe8
        ;   XREF to: 004cdc1a (CONDITIONAL_JUMP)  ; LAB_004cdc1a
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cdbea | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cdbf0
    MOV ECX,0x3                         ; 004cdbf7
    SUB EAX,EDX                         ; 004cdbfc
    MOV EBX,dword ptr [0x0061b498]      ; 004cdbfe | DAT_0061b498
    ADD EAX,EAX                         ; 004cdc04
    MOV EDX,EBX                         ; 004cdc06
    MOV [0x01cd0c50],EAX                ; 004cdc08 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cdc0d
    MOV EAX,EBX                         ; 004cdc10
    IDIV ECX                            ; 004cdc12
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cdc14 | DAT_01cd0c4c
    PUSH 0x5e14e5                       ; 004cdc1a | = "Point up"
        ;   Label: LAB_004cdc1a
    CALL FUN_00531090                   ; 004cdc1f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cdc24
    PUSH EAX                            ; 004cdc27
    MOV EDX,dword ptr [ESI + 0x74]      ; 004cdc28
    PUSH EDX                            ; 004cdc2b
    CALL FUN_0050d220                   ; 004cdc2c
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cdc31
    PUSH EAX                            ; 004cdc34
    PUSH 0x5e13c4                       ; 004cdc35 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x80c]               ; 004cdc3a
    PUSH EAX                            ; 004cdc41
    CALL FUN_005bfb40                   ; 004cdc42
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cdc47
    PUSH -0x1                           ; 004cdc4a
    PUSH 0x7                            ; 004cdc4c
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cdc4e | DAT_01cd0c50
    PUSH EBP                            ; 004cdc54
    MOV EAX,[0x01cd0c4c]                ; 004cdc55 | DAT_01cd0c4c
    PUSH EAX                            ; 004cdc5a
    LEA EAX,[ESP + 0x810]               ; 004cdc5b
    PUSH EAX                            ; 004cdc62
    MOV EDX,dword ptr [0x0152d244]      ; 004cdc63 | DAT_0152d244
    PUSH EDX                            ; 004cdc69
    CALL FUN_004c1dd0                   ; 004cdc6a
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cdc6f | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cdc74 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cdc7a | DAT_0061b49c
    ADD ECX,EAX                         ; 004cdc80
    SHL EAX,0x2                         ; 004cdc82
    ADD ESP,0x18                        ; 004cdc85
    SUB EDX,EAX                         ; 004cdc88
    MOV dword ptr [0x01cd0c50],ECX      ; 004cdc8a | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cdc90
    JGE 0x004cdcc4                      ; 004cdc92
        ;   XREF to: 004cdcc4 (CONDITIONAL_JUMP)  ; LAB_004cdcc4
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cdc94 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cdc9a
    MOV ECX,0x3                         ; 004cdca1
    SUB EAX,EDX                         ; 004cdca6
    MOV EBX,dword ptr [0x0061b498]      ; 004cdca8 | DAT_0061b498
    ADD EAX,EAX                         ; 004cdcae
    MOV EDX,EBX                         ; 004cdcb0
    MOV [0x01cd0c50],EAX                ; 004cdcb2 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cdcb7
    MOV EAX,EBX                         ; 004cdcba
    IDIV ECX                            ; 004cdcbc
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cdcbe | DAT_01cd0c4c
    PUSH 0x5e14ee                       ; 004cdcc4 | = "Point down"
        ;   Label: LAB_004cdcc4
    CALL FUN_00531090                   ; 004cdcc9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cdcce
    PUSH EAX                            ; 004cdcd1
    MOV EDX,dword ptr [ESI + 0x78]      ; 004cdcd2
    PUSH EDX                            ; 004cdcd5
    CALL FUN_0050d220                   ; 004cdcd6
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cdcdb
    PUSH EAX                            ; 004cdcde
    PUSH 0x5e13c4                       ; 004cdcdf | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0xf0c]               ; 004cdce4
    PUSH EAX                            ; 004cdceb
    CALL FUN_005bfb40                   ; 004cdcec
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cdcf1
    PUSH -0x1                           ; 004cdcf4
    PUSH 0x7                            ; 004cdcf6
    MOV EAX,[0x01cd0c50]                ; 004cdcf8 | DAT_01cd0c50
    PUSH EAX                            ; 004cdcfd
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cdcfe | DAT_01cd0c4c
    PUSH EDX                            ; 004cdd04
    LEA EAX,[ESP + 0xf10]               ; 004cdd05
    PUSH EAX                            ; 004cdd0c
    MOV ECX,dword ptr [0x0152d244]      ; 004cdd0d | DAT_0152d244
    PUSH ECX                            ; 004cdd13
    CALL FUN_004c1dd0                   ; 004cdd14
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cdd19 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cdd1e | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cdd24 | DAT_0061b49c
    ADD EDI,EAX                         ; 004cdd2a
    SHL EAX,0x2                         ; 004cdd2c
    ADD ESP,0x18                        ; 004cdd2f
    SUB EDX,EAX                         ; 004cdd32
    MOV dword ptr [0x01cd0c50],EDI      ; 004cdd34 | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cdd3a
    JGE 0x004cdd6e                      ; 004cdd3c
        ;   XREF to: 004cdd6e (CONDITIONAL_JUMP)  ; LAB_004cdd6e
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cdd3e | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cdd44
    MOV ECX,0x3                         ; 004cdd4b
    SUB EAX,EDX                         ; 004cdd50
    MOV EBX,dword ptr [0x0061b498]      ; 004cdd52 | DAT_0061b498
    ADD EAX,EAX                         ; 004cdd58
    MOV EDX,EBX                         ; 004cdd5a
    MOV [0x01cd0c50],EAX                ; 004cdd5c | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cdd61
    MOV EAX,EBX                         ; 004cdd64
    IDIV ECX                            ; 004cdd66
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cdd68 | DAT_01cd0c4c
    PUSH 0x5e14f9                       ; 004cdd6e | = "Quick turn"
        ;   Label: LAB_004cdd6e
    CALL FUN_00531090                   ; 004cdd73
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cdd78
    PUSH EAX                            ; 004cdd7b
    MOV EDX,dword ptr [ESI + 0x70]      ; 004cdd7c
    PUSH EDX                            ; 004cdd7f
    CALL FUN_0050d220                   ; 004cdd80
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cdd85
    PUSH EAX                            ; 004cdd88
    PUSH 0x5e13c4                       ; 004cdd89 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0xd0c]               ; 004cdd8e
    PUSH EAX                            ; 004cdd95
    CALL FUN_005bfb40                   ; 004cdd96
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cdd9b
    PUSH -0x1                           ; 004cdd9e
    PUSH 0x7                            ; 004cdda0
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cdda2 | DAT_01cd0c50
    PUSH ECX                            ; 004cdda8
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cdda9 | DAT_01cd0c4c
    PUSH EDI                            ; 004cddaf
    LEA EAX,[ESP + 0xd10]               ; 004cddb0
    PUSH EAX                            ; 004cddb7
    MOV EBP,dword ptr [0x0152d244]      ; 004cddb8 | DAT_0152d244
    PUSH EBP                            ; 004cddbe
    CALL FUN_004c1dd0                   ; 004cddbf
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cddc4 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cddc9 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cddcf
    MOV EDX,dword ptr [0x0061b49c]      ; 004cddd2 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cddd8 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cddde
    ADD ESP,0x18                        ; 004cdde0
    CMP EDX,ECX                         ; 004cdde3
    JGE 0x004cde17                      ; 004cdde5
        ;   XREF to: 004cde17 (CONDITIONAL_JUMP)  ; LAB_004cde17
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cdde7 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cdded
    MOV ECX,0x3                         ; 004cddf4
    SUB EAX,EDX                         ; 004cddf9
    MOV EBX,dword ptr [0x0061b498]      ; 004cddfb | DAT_0061b498
    ADD EAX,EAX                         ; 004cde01
    MOV EDX,EBX                         ; 004cde03
    MOV [0x01cd0c50],EAX                ; 004cde05 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cde0a
    MOV EAX,EBX                         ; 004cde0d
    IDIV ECX                            ; 004cde0f
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cde11 | DAT_01cd0c4c
    PUSH 0x5e1504                       ; 004cde17 | = "Cycle pistol weapons"
        ;   Label: LAB_004cde17
    CALL FUN_00531090                   ; 004cde1c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cde21
    PUSH EAX                            ; 004cde24
    MOV EDX,dword ptr [ESI + 0x7c]      ; 004cde25
    PUSH EDX                            ; 004cde28
    CALL FUN_0050d220                   ; 004cde29
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cde2e
    PUSH EAX                            ; 004cde31
    PUSH 0x5e13c4                       ; 004cde32 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x140c]              ; 004cde37
    PUSH EAX                            ; 004cde3e
    CALL FUN_005bfb40                   ; 004cde3f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cde44
    PUSH -0x1                           ; 004cde47
    PUSH 0x7                            ; 004cde49
    MOV EBP,dword ptr [0x01cd0c50]      ; 004cde4b | DAT_01cd0c50
    PUSH EBP                            ; 004cde51
    MOV EAX,[0x01cd0c4c]                ; 004cde52 | DAT_01cd0c4c
    PUSH EAX                            ; 004cde57
    LEA EAX,[ESP + 0x1410]              ; 004cde58
    PUSH EAX                            ; 004cde5f
    MOV EDX,dword ptr [0x0152d244]      ; 004cde60 | DAT_0152d244
    PUSH EDX                            ; 004cde66
    CALL FUN_004c1dd0                   ; 004cde67
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cde6c | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cde71 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cde77 | DAT_0061b49c
    ADD ECX,EAX                         ; 004cde7d
    SHL EAX,0x2                         ; 004cde7f
    ADD ESP,0x18                        ; 004cde82
    SUB EDX,EAX                         ; 004cde85
    MOV dword ptr [0x01cd0c50],ECX      ; 004cde87 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004cde8d
    JGE 0x004cdec1                      ; 004cde8f
        ;   XREF to: 004cdec1 (CONDITIONAL_JUMP)  ; LAB_004cdec1
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cde91 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cde97
    MOV ECX,0x3                         ; 004cde9e
    SUB EAX,EDX                         ; 004cdea3
    MOV EBX,dword ptr [0x0061b498]      ; 004cdea5 | DAT_0061b498
    ADD EAX,EAX                         ; 004cdeab
    MOV EDX,EBX                         ; 004cdead
    MOV [0x01cd0c50],EAX                ; 004cdeaf | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cdeb4
    MOV EAX,EBX                         ; 004cdeb7
    IDIV ECX                            ; 004cdeb9
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cdebb | DAT_01cd0c4c
    PUSH 0x5e1519                       ; 004cdec1 | = "Cycle assault weapons"
        ;   Label: LAB_004cdec1
    CALL FUN_00531090                   ; 004cdec6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cdecb
    PUSH EAX                            ; 004cdece
    MOV EDX,dword ptr [ESI + 0x80]      ; 004cdecf
    PUSH EDX                            ; 004cded5
    CALL FUN_0050d220                   ; 004cded6
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cdedb
    PUSH EAX                            ; 004cdede
    PUSH 0x5e13c4                       ; 004cdedf | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x1b0c]              ; 004cdee4
    PUSH EAX                            ; 004cdeeb
    CALL FUN_005bfb40                   ; 004cdeec
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cdef1
    PUSH -0x1                           ; 004cdef4
    PUSH 0x7                            ; 004cdef6
    MOV EAX,[0x01cd0c50]                ; 004cdef8 | DAT_01cd0c50
    PUSH EAX                            ; 004cdefd
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004cdefe | DAT_01cd0c4c
    PUSH EDX                            ; 004cdf04
    LEA EAX,[ESP + 0x1b10]              ; 004cdf05
    PUSH EAX                            ; 004cdf0c
    MOV ECX,dword ptr [0x0152d244]      ; 004cdf0d | DAT_0152d244
    PUSH ECX                            ; 004cdf13
    CALL FUN_004c1dd0                   ; 004cdf14
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cdf19 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004cdf1e | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004cdf24 | DAT_0061b49c
    ADD EDI,EAX                         ; 004cdf2a
    SHL EAX,0x2                         ; 004cdf2c
    ADD ESP,0x18                        ; 004cdf2f
    SUB EDX,EAX                         ; 004cdf32
    MOV dword ptr [0x01cd0c50],EDI      ; 004cdf34 | DAT_01cd0c50
    CMP EDX,EDI                         ; 004cdf3a
    JGE 0x004cdf6e                      ; 004cdf3c
        ;   XREF to: 004cdf6e (CONDITIONAL_JUMP)  ; LAB_004cdf6e
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cdf3e | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cdf44
    MOV ECX,0x3                         ; 004cdf4b
    SUB EAX,EDX                         ; 004cdf50
    MOV EBX,dword ptr [0x0061b498]      ; 004cdf52 | DAT_0061b498
    ADD EAX,EAX                         ; 004cdf58
    MOV EDX,EBX                         ; 004cdf5a
    MOV [0x01cd0c50],EAX                ; 004cdf5c | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004cdf61
    MOV EAX,EBX                         ; 004cdf64
    IDIV ECX                            ; 004cdf66
    ADD dword ptr [0x01cd0c4c],EAX      ; 004cdf68 | DAT_01cd0c4c
    PUSH 0x5e152f                       ; 004cdf6e | = "Cycle energy weapons"
        ;   Label: LAB_004cdf6e
    CALL FUN_00531090                   ; 004cdf73
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004cdf78
    PUSH EAX                            ; 004cdf7b
    MOV EDX,dword ptr [ESI + 0x84]      ; 004cdf7c
    PUSH EDX                            ; 004cdf82
    CALL FUN_0050d220                   ; 004cdf83
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004cdf88
    PUSH EAX                            ; 004cdf8b
    PUSH 0x5e13c4                       ; 004cdf8c | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x1a0c]              ; 004cdf91
    PUSH EAX                            ; 004cdf98
    CALL FUN_005bfb40                   ; 004cdf99
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cdf9e
    PUSH -0x1                           ; 004cdfa1
    PUSH 0x7                            ; 004cdfa3
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cdfa5 | DAT_01cd0c50
    PUSH ECX                            ; 004cdfab
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004cdfac | DAT_01cd0c4c
    PUSH EDI                            ; 004cdfb2
    LEA EAX,[ESP + 0x1a10]              ; 004cdfb3
    PUSH EAX                            ; 004cdfba
    MOV EBP,dword ptr [0x0152d244]      ; 004cdfbb | DAT_0152d244
    PUSH EBP                            ; 004cdfc1
    CALL FUN_004c1dd0                   ; 004cdfc2
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004cdfc7 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004cdfcc | DAT_01cd0c50
    SHL EAX,0x2                         ; 004cdfd2
    MOV EDX,dword ptr [0x0061b49c]      ; 004cdfd5 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004cdfdb | DAT_01cd0c50
    SUB EDX,EAX                         ; 004cdfe1
    ADD ESP,0x18                        ; 004cdfe3
    CMP EDX,ECX                         ; 004cdfe6
    JGE 0x004ce01a                      ; 004cdfe8
        ;   XREF to: 004ce01a (CONDITIONAL_JUMP)  ; LAB_004ce01a
    MOV EDX,dword ptr [0x01cd0c54]      ; 004cdfea | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cdff0
    MOV ECX,0x3                         ; 004cdff7
    SUB EAX,EDX                         ; 004cdffc
    MOV EBX,dword ptr [0x0061b498]      ; 004cdffe | DAT_0061b498
    ADD EAX,EAX                         ; 004ce004
    MOV EDX,EBX                         ; 004ce006
    MOV [0x01cd0c50],EAX                ; 004ce008 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce00d
    MOV EAX,EBX                         ; 004ce010
    IDIV ECX                            ; 004ce012
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce014 | DAT_01cd0c4c
    PUSH 0x5e1544                       ; 004ce01a | = "Cycle melee weapons"
        ;   Label: LAB_004ce01a
    CALL FUN_00531090                   ; 004ce01f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce024
    PUSH EAX                            ; 004ce027
    MOV EDX,dword ptr [ESI + 0x8c]      ; 004ce028
    PUSH EDX                            ; 004ce02e
    CALL FUN_0050d220                   ; 004ce02f
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce034
    PUSH EAX                            ; 004ce037
    PUSH 0x5e13c4                       ; 004ce038 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x180c]              ; 004ce03d
    PUSH EAX                            ; 004ce044
    CALL FUN_005bfb40                   ; 004ce045
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce04a
    PUSH -0x1                           ; 004ce04d
    PUSH 0x7                            ; 004ce04f
    MOV EBP,dword ptr [0x01cd0c50]      ; 004ce051 | DAT_01cd0c50
    PUSH EBP                            ; 004ce057
    MOV EAX,[0x01cd0c4c]                ; 004ce058 | DAT_01cd0c4c
    PUSH EAX                            ; 004ce05d
    LEA EAX,[ESP + 0x1810]              ; 004ce05e
    PUSH EAX                            ; 004ce065
    MOV EDX,dword ptr [0x0152d244]      ; 004ce066 | DAT_0152d244
    PUSH EDX                            ; 004ce06c
    CALL FUN_004c1dd0                   ; 004ce06d
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce072 | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce077 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce07d | DAT_0061b49c
    ADD ECX,EAX                         ; 004ce083
    SHL EAX,0x2                         ; 004ce085
    ADD ESP,0x18                        ; 004ce088
    SUB EDX,EAX                         ; 004ce08b
    MOV dword ptr [0x01cd0c50],ECX      ; 004ce08d | DAT_01cd0c50
    CMP EDX,ECX                         ; 004ce093
    JGE 0x004ce0c7                      ; 004ce095
        ;   XREF to: 004ce0c7 (CONDITIONAL_JUMP)  ; LAB_004ce0c7
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ce097 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ce09d
    MOV ECX,0x3                         ; 004ce0a4
    SUB EAX,EDX                         ; 004ce0a9
    MOV EBX,dword ptr [0x0061b498]      ; 004ce0ab | DAT_0061b498
    ADD EAX,EAX                         ; 004ce0b1
    MOV EDX,EBX                         ; 004ce0b3
    MOV [0x01cd0c50],EAX                ; 004ce0b5 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce0ba
    MOV EAX,EBX                         ; 004ce0bd
    IDIV ECX                            ; 004ce0bf
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce0c1 | DAT_01cd0c4c
    PUSH 0x5e1558                       ; 004ce0c7 | = "Next weapon"
        ;   Label: LAB_004ce0c7
    CALL FUN_00531090                   ; 004ce0cc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce0d1
    PUSH EAX                            ; 004ce0d4
    MOV EDX,dword ptr [ESI + 0x90]      ; 004ce0d5
    PUSH EDX                            ; 004ce0db
    CALL FUN_0050d220                   ; 004ce0dc
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce0e1
    PUSH EAX                            ; 004ce0e4
    PUSH 0x5e13c4                       ; 004ce0e5 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x50c]               ; 004ce0ea
    PUSH EAX                            ; 004ce0f1
    CALL FUN_005bfb40                   ; 004ce0f2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce0f7
    PUSH -0x1                           ; 004ce0fa
    PUSH 0x7                            ; 004ce0fc
    MOV EAX,[0x01cd0c50]                ; 004ce0fe | DAT_01cd0c50
    PUSH EAX                            ; 004ce103
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004ce104 | DAT_01cd0c4c
    PUSH EDX                            ; 004ce10a
    LEA EAX,[ESP + 0x510]               ; 004ce10b
    PUSH EAX                            ; 004ce112
    MOV ECX,dword ptr [0x0152d244]      ; 004ce113 | DAT_0152d244
    PUSH ECX                            ; 004ce119
    CALL FUN_004c1dd0                   ; 004ce11a
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce11f | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004ce124 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce12a | DAT_0061b49c
    ADD EDI,EAX                         ; 004ce130
    SHL EAX,0x2                         ; 004ce132
    ADD ESP,0x18                        ; 004ce135
    SUB EDX,EAX                         ; 004ce138
    MOV dword ptr [0x01cd0c50],EDI      ; 004ce13a | DAT_01cd0c50
    CMP EDX,EDI                         ; 004ce140
    JGE 0x004ce174                      ; 004ce142
        ;   XREF to: 004ce174 (CONDITIONAL_JUMP)  ; LAB_004ce174
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ce144 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ce14a
    MOV ECX,0x3                         ; 004ce151
    SUB EAX,EDX                         ; 004ce156
    MOV EBX,dword ptr [0x0061b498]      ; 004ce158 | DAT_0061b498
    ADD EAX,EAX                         ; 004ce15e
    MOV EDX,EBX                         ; 004ce160
    MOV [0x01cd0c50],EAX                ; 004ce162 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce167
    MOV EAX,EBX                         ; 004ce16a
    IDIV ECX                            ; 004ce16c
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce16e | DAT_01cd0c4c
    PUSH 0x5e1564                       ; 004ce174 | = "Previous weapon"
        ;   Label: LAB_004ce174
    CALL FUN_00531090                   ; 004ce179
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce17e
    PUSH EAX                            ; 004ce181
    MOV EDX,dword ptr [ESI + 0x94]      ; 004ce182
    PUSH EDX                            ; 004ce188
    CALL FUN_0050d220                   ; 004ce189
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce18e
    PUSH EAX                            ; 004ce191
    PUSH 0x5e13c4                       ; 004ce192 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0xc0c]               ; 004ce197
    PUSH EAX                            ; 004ce19e
    CALL FUN_005bfb40                   ; 004ce19f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce1a4
    PUSH -0x1                           ; 004ce1a7
    PUSH 0x7                            ; 004ce1a9
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce1ab | DAT_01cd0c50
    PUSH ECX                            ; 004ce1b1
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004ce1b2 | DAT_01cd0c4c
    PUSH EDI                            ; 004ce1b8
    LEA EAX,[ESP + 0xc10]               ; 004ce1b9
    PUSH EAX                            ; 004ce1c0
    MOV EBP,dword ptr [0x0152d244]      ; 004ce1c1 | DAT_0152d244
    PUSH EBP                            ; 004ce1c7
    CALL FUN_004c1dd0                   ; 004ce1c8
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce1cd | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004ce1d2 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004ce1d8
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce1db | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce1e1 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004ce1e7
    ADD ESP,0x18                        ; 004ce1e9
    CMP EDX,ECX                         ; 004ce1ec
    JGE 0x004ce220                      ; 004ce1ee
        ;   XREF to: 004ce220 (CONDITIONAL_JUMP)  ; LAB_004ce220
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ce1f0 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ce1f6
    MOV ECX,0x3                         ; 004ce1fd
    SUB EAX,EDX                         ; 004ce202
    MOV EBX,dword ptr [0x0061b498]      ; 004ce204 | DAT_0061b498
    ADD EAX,EAX                         ; 004ce20a
    MOV EDX,EBX                         ; 004ce20c
    MOV [0x01cd0c50],EAX                ; 004ce20e | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce213
    MOV EAX,EBX                         ; 004ce216
    IDIV ECX                            ; 004ce218
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce21a | DAT_01cd0c4c
    PUSH 0x5e1574                       ; 004ce220 | = "Next item"
        ;   Label: LAB_004ce220
    CALL FUN_00531090                   ; 004ce225
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce22a
    PUSH EAX                            ; 004ce22d
    MOV EDX,dword ptr [ESI + 0x98]      ; 004ce22e
    PUSH EDX                            ; 004ce234
    CALL FUN_0050d220                   ; 004ce235
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce23a
    PUSH EAX                            ; 004ce23d
    PUSH 0x5e13c4                       ; 004ce23e | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x130c]              ; 004ce243
    PUSH EAX                            ; 004ce24a
    CALL FUN_005bfb40                   ; 004ce24b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce250
    PUSH -0x1                           ; 004ce253
    PUSH 0x7                            ; 004ce255
    MOV EBP,dword ptr [0x01cd0c50]      ; 004ce257 | DAT_01cd0c50
    PUSH EBP                            ; 004ce25d
    MOV EAX,[0x01cd0c4c]                ; 004ce25e | DAT_01cd0c4c
    PUSH EAX                            ; 004ce263
    LEA EAX,[ESP + 0x1310]              ; 004ce264
    PUSH EAX                            ; 004ce26b
    MOV EDX,dword ptr [0x0152d244]      ; 004ce26c | DAT_0152d244
    PUSH EDX                            ; 004ce272
    CALL FUN_004c1dd0                   ; 004ce273
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce278 | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce27d | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce283 | DAT_0061b49c
    ADD ECX,EAX                         ; 004ce289
    SHL EAX,0x2                         ; 004ce28b
    ADD ESP,0x18                        ; 004ce28e
    SUB EDX,EAX                         ; 004ce291
    MOV dword ptr [0x01cd0c50],ECX      ; 004ce293 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004ce299
    JGE 0x004ce2cd                      ; 004ce29b
        ;   XREF to: 004ce2cd (CONDITIONAL_JUMP)  ; LAB_004ce2cd
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ce29d | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ce2a3
    MOV ECX,0x3                         ; 004ce2aa
    SUB EAX,EDX                         ; 004ce2af
    MOV EBX,dword ptr [0x0061b498]      ; 004ce2b1 | DAT_0061b498
    ADD EAX,EAX                         ; 004ce2b7
    MOV EDX,EBX                         ; 004ce2b9
    MOV [0x01cd0c50],EAX                ; 004ce2bb | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce2c0
    MOV EAX,EBX                         ; 004ce2c3
    IDIV ECX                            ; 004ce2c5
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce2c7 | DAT_01cd0c4c
    PUSH 0x5e157e                       ; 004ce2cd | = "Previous item"
        ;   Label: LAB_004ce2cd
    CALL FUN_00531090                   ; 004ce2d2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce2d7
    PUSH EAX                            ; 004ce2da
    MOV EDX,dword ptr [ESI + 0x9c]      ; 004ce2db
    PUSH EDX                            ; 004ce2e1
    CALL FUN_0050d220                   ; 004ce2e2
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce2e7
    PUSH EAX                            ; 004ce2ea
    PUSH 0x5e13c4                       ; 004ce2eb | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x110c]              ; 004ce2f0
    PUSH EAX                            ; 004ce2f7
    CALL FUN_005bfb40                   ; 004ce2f8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce2fd
    PUSH -0x1                           ; 004ce300
    PUSH 0x7                            ; 004ce302
    MOV EAX,[0x01cd0c50]                ; 004ce304 | DAT_01cd0c50
    PUSH EAX                            ; 004ce309
    MOV EDX,dword ptr [0x01cd0c4c]      ; 004ce30a | DAT_01cd0c4c
    PUSH EDX                            ; 004ce310
    LEA EAX,[ESP + 0x1110]              ; 004ce311
    PUSH EAX                            ; 004ce318
    MOV ECX,dword ptr [0x0152d244]      ; 004ce319 | DAT_0152d244
    PUSH ECX                            ; 004ce31f
    CALL FUN_004c1dd0                   ; 004ce320
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce325 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004ce32a | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce330 | DAT_0061b49c
    ADD EDI,EAX                         ; 004ce336
    SHL EAX,0x2                         ; 004ce338
    ADD ESP,0x18                        ; 004ce33b
    SUB EDX,EAX                         ; 004ce33e
    MOV dword ptr [0x01cd0c50],EDI      ; 004ce340 | DAT_01cd0c50
    CMP EDX,EDI                         ; 004ce346
    JGE 0x004ce37a                      ; 004ce348
        ;   XREF to: 004ce37a (CONDITIONAL_JUMP)  ; LAB_004ce37a
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ce34a | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ce350
    MOV ECX,0x3                         ; 004ce357
    SUB EAX,EDX                         ; 004ce35c
    MOV EBX,dword ptr [0x0061b498]      ; 004ce35e | DAT_0061b498
    ADD EAX,EAX                         ; 004ce364
    MOV EDX,EBX                         ; 004ce366
    MOV [0x01cd0c50],EAX                ; 004ce368 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce36d
    MOV EAX,EBX                         ; 004ce370
    IDIV ECX                            ; 004ce372
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce374 | DAT_01cd0c4c
    PUSH 0x5e158c                       ; 004ce37a | = "Item description"
        ;   Label: LAB_004ce37a
    CALL FUN_00531090                   ; 004ce37f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce384
    PUSH EAX                            ; 004ce387
    MOV EDX,dword ptr [ESI + 0xa0]      ; 004ce388
    PUSH EDX                            ; 004ce38e
    CALL FUN_0050d220                   ; 004ce38f
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce394
    PUSH EAX                            ; 004ce397
    PUSH 0x5e13c4                       ; 004ce398 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x100c]              ; 004ce39d
    PUSH EAX                            ; 004ce3a4
    CALL FUN_005bfb40                   ; 004ce3a5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce3aa
    PUSH -0x1                           ; 004ce3ad
    PUSH 0x7                            ; 004ce3af
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce3b1 | DAT_01cd0c50
    PUSH ECX                            ; 004ce3b7
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004ce3b8 | DAT_01cd0c4c
    PUSH EDI                            ; 004ce3be
    LEA EAX,[ESP + 0x1010]              ; 004ce3bf
    PUSH EAX                            ; 004ce3c6
    MOV EBP,dword ptr [0x0152d244]      ; 004ce3c7 | DAT_0152d244
    PUSH EBP                            ; 004ce3cd
    CALL FUN_004c1dd0                   ; 004ce3ce
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce3d3 | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004ce3d8 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004ce3de
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce3e1 | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce3e7 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004ce3ed
    ADD ESP,0x18                        ; 004ce3ef
    CMP EDX,ECX                         ; 004ce3f2
    JGE 0x004ce426                      ; 004ce3f4
        ;   XREF to: 004ce426 (CONDITIONAL_JUMP)  ; LAB_004ce426
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ce3f6 | DAT_01cd0c54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ce3fc
    MOV ECX,0x3                         ; 004ce403
    SUB EAX,EDX                         ; 004ce408
    MOV EBX,dword ptr [0x0061b498]      ; 004ce40a | DAT_0061b498
    ADD EAX,EAX                         ; 004ce410
    MOV EDX,EBX                         ; 004ce412
    MOV [0x01cd0c50],EAX                ; 004ce414 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce419
    MOV EAX,EBX                         ; 004ce41c
    IDIV ECX                            ; 004ce41e
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce420 | DAT_01cd0c4c
    PUSH 0x5e159d                       ; 004ce426 | = "Next ammo"
        ;   Label: LAB_004ce426
    CALL FUN_00531090                   ; 004ce42b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce430
    PUSH EAX                            ; 004ce433
    MOV EDX,dword ptr [ESI + 0xa4]      ; 004ce434
    PUSH EDX                            ; 004ce43a
    CALL FUN_0050d220                   ; 004ce43b
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce440
    PUSH EAX                            ; 004ce443
    PUSH 0x5e13c4                       ; 004ce444 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x60c]               ; 004ce449
    PUSH EAX                            ; 004ce450
    CALL FUN_005bfb40                   ; 004ce451
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce456
    PUSH -0x1                           ; 004ce459
    PUSH 0x7                            ; 004ce45b
    MOV EBP,dword ptr [0x01cd0c50]      ; 004ce45d | DAT_01cd0c50
    PUSH EBP                            ; 004ce463
    MOV EAX,[0x01cd0c4c]                ; 004ce464 | DAT_01cd0c4c
    PUSH EAX                            ; 004ce469
    LEA EAX,[ESP + 0x610]               ; 004ce46a
    PUSH EAX                            ; 004ce471
    MOV EDX,dword ptr [0x0152d244]      ; 004ce472 | DAT_0152d244
    PUSH EDX                            ; 004ce478
    CALL FUN_004c1dd0                   ; 004ce479
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce47e | DAT_01cd0c54
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce483 | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce489 | DAT_0061b49c
    ADD ECX,EAX                         ; 004ce48f
    SHL EAX,0x2                         ; 004ce491
    ADD ESP,0x18                        ; 004ce494
    SUB EDX,EAX                         ; 004ce497
    MOV dword ptr [0x01cd0c50],ECX      ; 004ce499 | DAT_01cd0c50
    CMP EDX,ECX                         ; 004ce49f
    JL 0x004ce532                       ; 004ce4a1
        ;   XREF to: 004ce532 (CONDITIONAL_JUMP)  ; LAB_004ce532
    MOV EBX,dword ptr [0x0061b498]      ; 004ce4a7 | DAT_0061b498
    ADD ESP,0x1f00                      ; 004ce4ad
    POP EBP                             ; 004ce4b3
    POP EDI                             ; 004ce4b4
    POP ESI                             ; 004ce4b5
    POP EBX                             ; 004ce4b6
    RET                                 ; 004ce4b7
    PUSH 0x5e145d                       ; 004ce4b8 | DAT_005e145d
        ;   Label: LAB_004ce4b8
    CALL FUN_00531090                   ; 004ce4bd
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004ce4c2
    PUSH EAX                            ; 004ce4c5
    MOV EDX,dword ptr [ESI + 0x30]      ; 004ce4c6
    PUSH EDX                            ; 004ce4c9
    CALL FUN_0050d220                   ; 004ce4ca
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d220()
    ADD ESP,0x4                         ; 004ce4cf
    PUSH EAX                            ; 004ce4d2
    PUSH 0x5e13c4                       ; 004ce4d3 | s_s_s_005e13c3+1
    LEA EAX,[ESP + 0x70c]               ; 004ce4d8
    PUSH EAX                            ; 004ce4df
    CALL FUN_005bfb40                   ; 004ce4e0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004ce4e5
    PUSH -0x1                           ; 004ce4e8
    PUSH 0x7                            ; 004ce4ea
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce4ec | DAT_01cd0c50
    PUSH ECX                            ; 004ce4f2
    MOV EDI,dword ptr [0x01cd0c4c]      ; 004ce4f3 | DAT_01cd0c4c
    PUSH EDI                            ; 004ce4f9
    LEA EAX,[ESP + 0x710]               ; 004ce4fa
    PUSH EAX                            ; 004ce501
    MOV EBP,dword ptr [0x0152d244]      ; 004ce502 | DAT_0152d244
    PUSH EBP                            ; 004ce508
    CALL FUN_004c1dd0                   ; 004ce509
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ce50e | DAT_01cd0c54
    ADD dword ptr [0x01cd0c50],EAX      ; 004ce513 | DAT_01cd0c50
    SHL EAX,0x2                         ; 004ce519
    MOV EDX,dword ptr [0x0061b49c]      ; 004ce51c | DAT_0061b49c
    MOV ECX,dword ptr [0x01cd0c50]      ; 004ce522 | DAT_01cd0c50
    SUB EDX,EAX                         ; 004ce528
    ADD ESP,0x18                        ; 004ce52a
    JMP 0x004cd29f                      ; 004ce52d
        ;   XREF to: 004cd29f (UNCONDITIONAL_JUMP)  ; LAB_004cd29f
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ce532 | DAT_01cd0c54
        ;   Label: LAB_004ce532
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ce538
    MOV ECX,0x3                         ; 004ce53f
    SUB EAX,EDX                         ; 004ce544
    MOV EBX,dword ptr [0x0061b498]      ; 004ce546 | DAT_0061b498
    ADD EAX,EAX                         ; 004ce54c
    MOV EDX,EBX                         ; 004ce54e
    MOV [0x01cd0c50],EAX                ; 004ce550 | DAT_01cd0c50
    SAR EDX,0x1f                        ; 004ce555
    MOV EAX,EBX                         ; 004ce558
    IDIV ECX                            ; 004ce55a
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ce55c | DAT_01cd0c4c
    MOV EBX,dword ptr [0x0061b498]      ; 004ce562 | DAT_0061b498
    ADD ESP,0x1f00                      ; 004ce568
    POP EBP                             ; 004ce56e
    POP EDI                             ; 004ce56f
    POP ESI                             ; 004ce570
    POP EBX                             ; 004ce571
    RET                                 ; 004ce572

