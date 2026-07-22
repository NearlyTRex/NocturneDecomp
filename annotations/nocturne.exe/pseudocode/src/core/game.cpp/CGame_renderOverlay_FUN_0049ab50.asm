; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_renderOverlay_FUN_0049ab50(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cc10 at 0049d07b
;
; Referenced Globals:
;   TerminatedCString s_d_s_005823da
;   double DOUBLE_005823e2 = 65535
;   double DOUBLE_005823ea = 0.600000000000000
;   double DOUBLE_005823f2 = 0.350000000000000
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005be220
;   undefined4 DAT_014b98f8
;   undefined4 DAT_014b98fc
;   undefined4 DAT_014b9900
;   undefined4 DAT_014b9904
;   undefined4 DAT_01c789c0
;   undefined4 DAT_01c78ac0
;   undefined4 DAT_01c78ac4
;   undefined4 DAT_01e56da0
;   ... and 1 more
;
; Called Functions:
;   core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_2d.c_fillRectWithBorder_FUN_00403ef0
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_font.cpp_CBitFont_wrapText_FUN_00492f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ab50
        ;   Label: core_game.cpp_CGame_renderOverlay_FUN_0049ab50
    PUSH ESI                            ; 0049ab51
    PUSH EDI                            ; 0049ab52
    PUSH EBP                            ; 0049ab53
    MOV EBP,ESP                         ; 0049ab54
    SUB ESP,0x160                       ; 0049ab56
    AND ESP,0xfffffff8                  ; 0049ab5c
    MOV EAX,[0x005b761c]                ; 0049ab5f | DAT_005b761c
    MOV dword ptr [ESP + 0x110],EAX     ; 0049ab64
    MOV EAX,[0x005b7620]                ; 0049ab6b | DAT_005b7620
    MOV dword ptr [ESP + 0x114],EAX     ; 0049ab70
    MOV dword ptr [ESP + 0x10c],EAX     ; 0049ab77
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ab7e
    TEST dword ptr [EAX + 0x384],0x7fffffff ; 0049ab81
    JNZ 0x0049af0d                      ; 0049ab8b
        ;   XREF to: 0049af0d (CONDITIONAL_JUMP)  ; LAB_0049af0d
    LEA EAX,[EAX]                       ; 0049ab91
    LEA EDX,[EDX]                       ; 0049ab97
    LEA EAX,[EAX]                       ; 0049ab9d
    FLD float ptr [0x01c78ac4]          ; 0049aba0 | DAT_01c78ac4
        ;   Label: LAB_0049aba0
    FLDZ                                ; 0049aba6
    FCOMPP                              ; 0049aba8
    FNSTSW AX                           ; 0049abaa
    SAHF                                ; 0049abac
    JNC 0x0049ac66                      ; 0049abad
        ;   XREF to: 0049ac66 (CONDITIONAL_JUMP)  ; LAB_0049ac66
    MOV EDX,dword ptr [0x005b7620]      ; 0049abb3 | DAT_005b7620
    MOV EBX,dword ptr [0x014b98f8]      ; 0049abb9 | DAT_014b98f8
    CMP EDX,0x1e0                       ; 0049abbf
    JGE 0x0049abdb                      ; 0049abc5
        ;   XREF to: 0049abdb (CONDITIONAL_JUMP)  ; LAB_0049abdb
    MOV EBX,dword ptr [0x014b98fc]      ; 0049abc7 | DAT_014b98fc
    CMP EDX,0x180                       ; 0049abcd
    JGE 0x0049abdb                      ; 0049abd3
        ;   XREF to: 0049abdb (CONDITIONAL_JUMP)  ; LAB_0049abdb
    MOV EBX,dword ptr [0x014b9904]      ; 0049abd5 | DAT_014b9904
    PUSH 0x58                           ; 0049abdb
        ;   Label: LAB_0049abdb
    PUSH EBX                            ; 0049abdd
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0049abde
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 0049abe3
    PUSH 0x58                           ; 0049abe6
    PUSH EBX                            ; 0049abe8
    MOV EDI,EAX                         ; 0049abe9
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0 ; 0049abeb
        ;   XREF to: 004930b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0()
    ADD ESP,0x8                         ; 0049abf0
    MOV ESI,EAX                         ; 0049abf3
    MOV EAX,[0x005be220]                ; 0049abf5 | DAT_005be220
    PUSH EAX                            ; 0049abfa | DAT_01e56da0
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710 ; 0049abfb
        ;   XREF to: 004fe710 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710()
    ADD ESP,0x4                         ; 0049ac00
    MOV EDX,dword ptr [0x005be220]      ; 0049ac03 | DAT_005be220
    PUSH EDX                            ; 0049ac09 | DAT_01e56da0
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710 ; 0049ac0a
        ;   XREF to: 004fe710 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710()
    MOV EDX,dword ptr [0x005b7620]      ; 0049ac0f | DAT_005b7620
    SUB EDX,EAX                         ; 0049ac15
    MOV EAX,EDX                         ; 0049ac17
    ADD ESP,0x4                         ; 0049ac19
    SUB EAX,EDI                         ; 0049ac1c
    PUSH 0xffff                         ; 0049ac1e
    MOV EDI,EAX                         ; 0049ac23
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0049ac25
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 0049ac2a
    PUSH 0x1c789c0                      ; 0049ac2d | DAT_01c789c0
    MOV ECX,dword ptr [0x01c78ac0]      ; 0049ac32 | DAT_01c78ac0
    PUSH ECX                            ; 0049ac38
    PUSH 0x5823da                       ; 0049ac39 | = "%d - %s"
    LEA EAX,[ESP + 0x18]                ; 0049ac3e
    PUSH EAX                            ; 0049ac42
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049ac43
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049ac48
    PUSH 0x0                            ; 0049ac4b
    PUSH 0xf8                           ; 0049ac4d
    SUB EDI,ESI                         ; 0049ac52
    PUSH EDI                            ; 0049ac54
    ADD ESI,ESI                         ; 0049ac55
    PUSH ESI                            ; 0049ac57
    LEA EAX,[ESP + 0x1c]                ; 0049ac58
    PUSH EAX                            ; 0049ac5c
    PUSH EBX                            ; 0049ac5d
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049ac5e
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 0049ac63
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ac66
        ;   Label: LAB_0049ac66
    CMP dword ptr [EAX + 0x228],0x0     ; 0049ac69
    JNZ 0x0049af06                      ; 0049ac70
        ;   XREF to: 0049af06 (CONDITIONAL_JUMP)  ; LAB_0049af06
    CMP dword ptr [EAX + 0x388],0x0     ; 0049ac76
    JLE 0x0049af06                      ; 0049ac7d
        ;   XREF to: 0049af06 (CONDITIONAL_JUMP)  ; LAB_0049af06
    MOV EAX,dword ptr [ESP + 0x110]     ; 0049ac83
    MOV EDX,EAX                         ; 0049ac8a
    SAR EDX,0x1f                        ; 0049ac8c
    SHL EDX,0x2                         ; 0049ac8f
    SBB EAX,EDX                         ; 0049ac92
    SAR EAX,0x2                         ; 0049ac94
    MOV EBX,EAX                         ; 0049ac97
    MOV EAX,dword ptr [ESP + 0x114]     ; 0049ac99
    MOV EDX,EAX                         ; 0049aca0
    MOV ESI,0x28                        ; 0049aca2
    SAR EDX,0x1f                        ; 0049aca7
    IDIV ESI                            ; 0049acaa
    MOV dword ptr [ESP + 0x12c],EAX     ; 0049acac
    MOV EAX,[0x014b9904]                ; 0049acb3 | DAT_014b9904
    MOV EDI,dword ptr [0x005b761c]      ; 0049acb8 | DAT_005b761c
    MOV dword ptr [ESP + 0x130],EAX     ; 0049acbe
    CMP EDI,0x280                       ; 0049acc5
    JG 0x0049b090                       ; 0049accb
        ;   XREF to: 0049b090 (CONDITIONAL_JUMP)  ; LAB_0049b090
    CMP dword ptr [0x005b761c],0x320    ; 0049acd1 | DAT_005b761c
        ;   Label: LAB_0049acd1
    JLE 0x0049ace9                      ; 0049acdb
        ;   XREF to: 0049ace9 (CONDITIONAL_JUMP)  ; LAB_0049ace9
    MOV EAX,[0x014b98f8]                ; 0049acdd | DAT_014b98f8
    MOV dword ptr [ESP + 0x130],EAX     ; 0049ace2
    PUSH 0x58                           ; 0049ace9
        ;   Label: LAB_0049ace9
    MOV EDX,dword ptr [ESP + 0x134]     ; 0049aceb
    PUSH EDX                            ; 0049acf2
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0049acf3
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 0049acf8
    CMP EAX,dword ptr [ESP + 0x12c]     ; 0049acfb
    JLE 0x0049ad1d                      ; 0049ad02
        ;   XREF to: 0049ad1d (CONDITIONAL_JUMP)  ; LAB_0049ad1d
    PUSH 0x58                           ; 0049ad04
    MOV ESI,dword ptr [ESP + 0x134]     ; 0049ad06
    PUSH ESI                            ; 0049ad0d
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0049ad0e
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 0049ad13
    MOV dword ptr [ESP + 0x12c],EAX     ; 0049ad16
    MOV EAX,dword ptr [ESP + 0x110]     ; 0049ad1d
        ;   Label: LAB_0049ad1d
    MOV EDX,EAX                         ; 0049ad24
    MOV ESI,0x50                        ; 0049ad26
    SAR EDX,0x1f                        ; 0049ad2b
    IDIV ESI                            ; 0049ad2e
    MOV dword ptr [ESP + 0x134],EAX     ; 0049ad30
    ADD EAX,EBX                         ; 0049ad37
    MOV dword ptr [ESP + 0x118],EAX     ; 0049ad39
    MOV EAX,dword ptr [ESP + 0x114]     ; 0049ad40
    MOV EDX,EAX                         ; 0049ad47
    SAR EDX,0x1f                        ; 0049ad49
    IDIV ESI                            ; 0049ad4c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0049ad4e
    SUB ESI,EAX                         ; 0049ad55
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ad57
    XOR EDI,EDI                         ; 0049ad5a
    MOV EDX,dword ptr [EAX + 0x388]     ; 0049ad5c
    MOV dword ptr [ESP + 0x150],EDI     ; 0049ad62
    TEST EDX,EDX                        ; 0049ad69
    JLE 0x0049af06                      ; 0049ad6b
        ;   XREF to: 0049af06 (CONDITIONAL_JUMP)  ; LAB_0049af06
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0049ad71
    LEA EBX,[EAX + 0x38c]               ; 0049ad78
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ad7e
    SUB EAX,EDX                         ; 0049ad85
    MOV EDX,EAX                         ; 0049ad87
    SAR EDX,0x1f                        ; 0049ad89
    SUB EAX,EDX                         ; 0049ad8c
    SAR EAX,0x1                         ; 0049ad8e
    MOV dword ptr [ESP + 0x120],EAX     ; 0049ad90
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ad97
    MOV dword ptr [ESP + 0x154],EBX     ; 0049ad9a
    MOV dword ptr [ESP + 0x158],EAX     ; 0049ada1
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0049ada8
        ;   Label: LAB_0049ada8
    MOV EAX,ESI                         ; 0049adaf
    SUB EAX,EBX                         ; 0049adb1
    MOV dword ptr [ESP + 0x140],EAX     ; 0049adb3
    MOV dword ptr [ESP + 0x13c],EAX     ; 0049adba
    MOV EAX,dword ptr [ESP + 0x118]     ; 0049adc1
    MOV dword ptr [ESP + 0x148],EAX     ; 0049adc8
    MOV EAX,dword ptr [ESP + 0x158]     ; 0049adcf
    MOV EDI,0x2                         ; 0049add6
    MOV EAX,dword ptr [EAX + 0x88c]     ; 0049addb
    MOV dword ptr [ESP + 0x14c],ESI     ; 0049ade1
    MOV dword ptr [ESP + 0x8],EAX       ; 0049ade8
    MOV EBX,dword ptr [ESP + 0x134]     ; 0049adec
    FLD float ptr [ESP + 0x8]           ; 0049adf3
    FCOMP double ptr [0x005823ea]       ; 0049adf7 | DOUBLE_005823ea
    FNSTSW AX                           ; 0049adfd
    SAHF                                ; 0049adff
    JNC 0x0049ae07                      ; 0049ae00
        ;   XREF to: 0049ae07 (CONDITIONAL_JUMP)  ; LAB_0049ae07
    MOV EDI,0xfb                        ; 0049ae02
    FLD float ptr [ESP + 0x8]           ; 0049ae07
        ;   Label: LAB_0049ae07
    FCOMP double ptr [0x005823f2]       ; 0049ae0b | DOUBLE_005823f2
    FNSTSW AX                           ; 0049ae11
    SAHF                                ; 0049ae13
    JNC 0x0049ae1b                      ; 0049ae14
        ;   XREF to: 0049ae1b (CONDITIONAL_JUMP)  ; LAB_0049ae1b
    MOV EDI,0x1                         ; 0049ae16
    PUSH 0x0                            ; 0049ae1b
        ;   Label: LAB_0049ae1b
    PUSH 0x0                            ; 0049ae1d
    MOV EAX,dword ptr [ESP + 0x154]     ; 0049ae1f
    PUSH EAX                            ; 0049ae26
    MOV EDX,dword ptr [ESP + 0x154]     ; 0049ae27
    PUSH EDX                            ; 0049ae2e
    MOV ECX,dword ptr [ESP + 0x14c]     ; 0049ae2f
    PUSH ECX                            ; 0049ae36
    PUSH EBX                            ; 0049ae37
    CALL engine_2d.c_fillRectWithBorder_FUN_00403ef0 ; 0049ae38
        ;   XREF to: 00403ef0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_fillRectWithBorder_FUN_00403ef0()
    ADD ESP,0x18                        ; 0049ae3d
    MOV EAX,dword ptr [ESP + 0x148]     ; 0049ae40
    SUB EAX,EBX                         ; 0049ae47
    INC EAX                             ; 0049ae49
    MOV dword ptr [ESP + 0x15c],EAX     ; 0049ae4a
    FILD dword ptr [ESP + 0x15c]        ; 0049ae51
    FMUL float ptr [ESP + 0x8]          ; 0049ae58
    CALL crt_math.c_round_FUN_00563a30  ; 0049ae5c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x144]       ; 0049ae61
    MOV EAX,dword ptr [ESP + 0x144]     ; 0049ae68
    TEST EAX,EAX                        ; 0049ae6f
    JLE 0x0049ae90                      ; 0049ae71
        ;   XREF to: 0049ae90 (CONDITIONAL_JUMP)  ; LAB_0049ae90
    PUSH EDI                            ; 0049ae73
    MOV EDX,dword ptr [ESP + 0x150]     ; 0049ae74
    PUSH EDX                            ; 0049ae7b
    ADD EAX,EBX                         ; 0049ae7c
    PUSH EAX                            ; 0049ae7e
    MOV ECX,dword ptr [ESP + 0x148]     ; 0049ae7f
    PUSH ECX                            ; 0049ae86
    PUSH EBX                            ; 0049ae87
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 0049ae88
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_fillRectColor_FUN_00403e60()
    ADD ESP,0x14                        ; 0049ae8d
    PUSH 0x0                            ; 0049ae90
        ;   Label: LAB_0049ae90
    PUSH 0xf8                           ; 0049ae92
    MOV ECX,dword ptr [ESP + 0x148]     ; 0049ae97
    PUSH ECX                            ; 0049ae9e
    MOV EBX,dword ptr [ESP + 0x140]     ; 0049ae9f
    PUSH EBX                            ; 0049aea6
    MOV EDI,dword ptr [ESP + 0x164]     ; 0049aea7
    PUSH EDI                            ; 0049aeae
    MOV EAX,dword ptr [ESP + 0x144]     ; 0049aeaf
    PUSH EAX                            ; 0049aeb6
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049aeb7
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 0049aebc
    LEA EBX,[EDI + 0x100]               ; 0049aebf
    MOV EDX,dword ptr [ESP + 0x120]     ; 0049aec5
    MOV ECX,dword ptr [ESP + 0x158]     ; 0049aecc
    MOV EDI,dword ptr [ESP + 0x150]     ; 0049aed3
    MOV dword ptr [ESP + 0x154],EBX     ; 0049aeda
    ADD ECX,0x4                         ; 0049aee1
    SUB ESI,EDX                         ; 0049aee4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049aee6
    INC EDI                             ; 0049aee9
    MOV dword ptr [ESP + 0x158],ECX     ; 0049aeea
    MOV ECX,dword ptr [EDX + 0x388]     ; 0049aef1
    MOV dword ptr [ESP + 0x150],EDI     ; 0049aef7
    CMP EDI,ECX                         ; 0049aefe
    JL 0x0049ada8                       ; 0049af00
        ;   XREF to: 0049ada8 (CONDITIONAL_JUMP)  ; LAB_0049ada8
    MOV ESP,EBP                         ; 0049af06
        ;   Label: LAB_0049af06
    POP EBP                             ; 0049af08
    POP EDI                             ; 0049af09
    POP ESI                             ; 0049af0a
    POP EBX                             ; 0049af0b
    RET                                 ; 0049af0c
    FLD1                                ; 0049af0d
        ;   Label: LAB_0049af0d
    FLD float ptr [EAX + 0x384]         ; 0049af0f
    FSTP double ptr [ESP]               ; 0049af15
    FCOMP double ptr [ESP]              ; 0049af18
    FNSTSW AX                           ; 0049af1b
    SAHF                                ; 0049af1d
    JBE 0x0049b086                      ; 0049af1e
        ;   XREF to: 0049b086 (CONDITIONAL_JUMP)  ; LAB_0049b086
    FLD double ptr [ESP]                ; 0049af24
    FMUL double ptr [0x005823e2]        ; 0049af27 | DOUBLE_005823e2
    CALL crt_math.c_round_FUN_00563a30  ; 0049af2d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x15c]       ; 0049af32
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0049af39
    PUSH ECX                            ; 0049af40
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0049af41
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
        ;   Label: LAB_0049af41
    ADD ESP,0x4                         ; 0049af46
    MOV EAX,[0x014b9900]                ; 0049af49 | DAT_014b9900
    MOV dword ptr [ESP + 0x138],EAX     ; 0049af4e
    MOV EAX,[0x01fb8644]                ; 0049af55 | DAT_01fb8644
    CMP EAX,0x1e0                       ; 0049af5a
    JGE 0x0049af6d                      ; 0049af5f
        ;   XREF to: 0049af6d (CONDITIONAL_JUMP)  ; LAB_0049af6d
    MOV EAX,[0x014b9904]                ; 0049af61 | DAT_014b9904
    MOV dword ptr [ESP + 0x138],EAX     ; 0049af66
    MOV EDX,dword ptr [0x01fb8644]      ; 0049af6d | DAT_01fb8644
        ;   Label: LAB_0049af6d
    LEA EAX,[EDX*0x8 + 0x0]             ; 0049af73
    ADD EDX,EAX                         ; 0049af7a
    MOV EBX,0xa                         ; 0049af7c
    MOV EAX,EDX                         ; 0049af81
    SAR EDX,0x1f                        ; 0049af83
    IDIV EBX                            ; 0049af86
    PUSH EAX                            ; 0049af88
    PUSH 0x100                          ; 0049af89
    PUSH EBX                            ; 0049af8e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049af8f
    PUSH 0x1c71430                      ; 0049af92
    ADD EAX,0x284                       ; 0049af97
    PUSH EAX                            ; 0049af9c
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0049af9d
    PUSH EBX                            ; 0049afa4
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 0049afa5
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_wrapText_FUN_00492f30()
    ADD ESP,0x18                        ; 0049afaa
    PUSH 0x58                           ; 0049afad
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0049afaf
    PUSH ESI                            ; 0049afb6
    MOV EBX,EAX                         ; 0049afb7
    MOV dword ptr [ESP + 0x130],EAX     ; 0049afb9
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0049afc0
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    IMUL EBX,EAX                        ; 0049afc5
    ADD ESP,0x8                         ; 0049afc8
    MOV ESI,EAX                         ; 0049afcb
    MOV dword ptr [ESP + 0x11c],EAX     ; 0049afcd
    MOV EAX,[0x005b7620]                ; 0049afd4 | DAT_005b7620
    MOV EDI,dword ptr [0x005be220]      ; 0049afd9 | DAT_005be220
    SUB EAX,EBX                         ; 0049afdf
    PUSH EDI                            ; 0049afe1 | DAT_01e56da0
    MOV EBX,EAX                         ; 0049afe2
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710 ; 0049afe4
        ;   XREF to: 004fe710 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710()
    SUB EBX,EAX                         ; 0049afe9
    MOV EAX,EBX                         ; 0049afeb
    MOV EDX,dword ptr [0x014b9904]      ; 0049afed | DAT_014b9904
    SUB EAX,ESI                         ; 0049aff3
    ADD ESP,0x4                         ; 0049aff5
    MOV ESI,EAX                         ; 0049aff8
    CMP EDX,dword ptr [ESP + 0x138]     ; 0049affa
    JNZ 0x0049b006                      ; 0049b001
        ;   XREF to: 0049b006 (CONDITIONAL_JUMP)  ; LAB_0049b006
    SUB ESI,0x7                         ; 0049b003
    MOV ECX,dword ptr [ESP + 0x128]     ; 0049b006
        ;   Label: LAB_0049b006
    MOV EAX,[0x005b761c]                ; 0049b00d | DAT_005b761c
    XOR EDI,EDI                         ; 0049b012
    DEC EAX                             ; 0049b014
    TEST ECX,ECX                        ; 0049b015
    JLE 0x0049aba0                      ; 0049b017
        ;   XREF to: 0049aba0 (CONDITIONAL_JUMP)  ; LAB_0049aba0
    MOV EBX,0x1c71430                   ; 0049b01d
    MOV dword ptr [ESP + 0x124],EAX     ; 0049b022
    PUSH EBX                            ; 0049b029
        ;   Label: LAB_0049b029
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0049b02a
    PUSH EAX                            ; 0049b031
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0049b032
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0049b037
    MOV EDX,dword ptr [ESP + 0x124]     ; 0049b03a
    SUB EDX,EAX                         ; 0049b041
    MOV EAX,EDX                         ; 0049b043
    SAR EDX,0x1f                        ; 0049b045
    SUB EAX,EDX                         ; 0049b048
    SAR EAX,0x1                         ; 0049b04a
    PUSH 0x0                            ; 0049b04c
    PUSH 0xf8                           ; 0049b04e
    PUSH ESI                            ; 0049b053
    PUSH EAX                            ; 0049b054
    PUSH EBX                            ; 0049b055
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0049b056
    PUSH EDX                            ; 0049b05d
    INC EDI                             ; 0049b05e
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b05f
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 0049b064
    ADD EBX,0x100                       ; 0049b067
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0049b06d
    MOV EAX,dword ptr [ESP + 0x128]     ; 0049b074
    ADD ESI,ECX                         ; 0049b07b
    CMP EDI,EAX                         ; 0049b07d
    JL 0x0049b029                       ; 0049b07f
        ;   XREF to: 0049b029 (CONDITIONAL_JUMP)  ; LAB_0049b029
    JMP 0x0049aba0                      ; 0049b081
        ;   XREF to: 0049aba0 (UNCONDITIONAL_JUMP)  ; LAB_0049aba0
    PUSH 0xffff                         ; 0049b086
        ;   Label: LAB_0049b086
    JMP 0x0049af41                      ; 0049b08b
        ;   XREF to: 0049af41 (UNCONDITIONAL_JUMP)  ; LAB_0049af41
    MOV EAX,[0x014b98fc]                ; 0049b090 | DAT_014b98fc
        ;   Label: LAB_0049b090
    MOV dword ptr [ESP + 0x130],EAX     ; 0049b095
    JMP 0x0049acd1                      ; 0049b09c
        ;   XREF to: 0049acd1 (UNCONDITIONAL_JUMP)  ; LAB_0049acd1

