; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fcd30(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_005e6a65
;   TerminatedCString s_Bad_keyframe_1_005e6a7a
;   TerminatedCString s_engine_keyframe_c_005e6a89
;   TerminatedCString s_ZBP_not_found_005e6a9e
;   undefined4 DAT_005e6ab3
;   undefined4 DAT_005e6abb
;   undefined4 DAT_005e6abf
;   undefined4 DAT_005e6ac3
;   undefined4 DAT_005e6acb
;   undefined4 DAT_005e6acf
;   undefined4 DAT_005e6ad3
;   undefined4 DAT_005e6ad7
;   undefined4 DAT_01c43534
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004076e0
;   FUN_004fc800
;   FUN_004fc9c0
;   FUN_004fcb40
;   FUN_005030e0
;   FUN_0051fee0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcd30
        ;   Label: FUN_004fcd30
    PUSH ESI                            ; 004fcd31
    PUSH EDI                            ; 004fcd32
    PUSH EBP                            ; 004fcd33
    MOV EBP,ESP                         ; 004fcd34
    SUB ESP,0x30                        ; 004fcd36
    AND ESP,0xfffffff8                  ; 004fcd39
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fcd3c
    CMP dword ptr [EAX + 0x14],0x0      ; 004fcd3f
    JZ 0x004fd0c8                       ; 004fcd43
        ;   XREF to: 004fd0c8 (CONDITIONAL_JUMP)  ; LAB_004fd0c8
    MOV ESI,dword ptr [EBP + 0x14]      ; 004fcd49
        ;   Label: LAB_004fcd49
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fcd4c
    MOV ESI,dword ptr [ESI + 0x8]       ; 004fcd4f
    MOV EBX,dword ptr [EDX + 0xc]       ; 004fcd52
    IMUL ESI,EBX                        ; 004fcd55
    MOV EAX,dword ptr [EDX + 0x10]      ; 004fcd58
    CDQ                                 ; 004fcd5b
    MOV ECX,EDX                         ; 004fcd5c
    XOR EAX,EDX                         ; 004fcd5e
    XOR EDX,EDX                         ; 004fcd60
    DIV EBX                             ; 004fcd62
    CMP EAX,0x7fff                      ; 004fcd64
    JC 0x004fcd70                       ; 004fcd69
        ;   XREF to: 004fcd70 (CONDITIONAL_JUMP)  ; LAB_004fcd70
    MOV EAX,0x7fff                      ; 004fcd6b
    PUSH EAX                            ; 004fcd70
        ;   Label: LAB_004fcd70
    XOR EAX,EAX                         ; 004fcd71
    DIV EBX                             ; 004fcd73
    POP EDX                             ; 004fcd75
    SHRD EAX,EDX,0x10                   ; 004fcd76
    XOR EAX,ECX                         ; 004fcd7a
    MOV EDX,dword ptr [0x01c43534]      ; 004fcd7c | DAT_01c43534
    MOV ECX,EAX                         ; 004fcd82
    MOV EAX,EDX                         ; 004fcd84
    SAR EDX,0x1f                        ; 004fcd86
    IDIV ESI                            ; 004fcd89
    MOV EBX,ECX                         ; 004fcd8b
    SAR EBX,0x10                        ; 004fcd8d
    AND ECX,0xffff                      ; 004fcd90
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fcd96
    MOV dword ptr [ESP],ECX             ; 004fcd99
    LEA ESI,[EBX + 0x1]                 ; 004fcd9c
    MOV EDI,dword ptr [EAX + 0x8]       ; 004fcd9f
    MOV dword ptr [EAX + 0x10],EDX      ; 004fcda2
    CMP ESI,EDI                         ; 004fcda5
    JL 0x004fcdab                       ; 004fcda7
        ;   XREF to: 004fcdab (CONDITIONAL_JUMP)  ; LAB_004fcdab
    XOR ESI,ESI                         ; 004fcda9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fcdab
        ;   Label: LAB_004fcdab
    LEA EAX,[ESI + 0x1]                 ; 004fcdae
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fcdb1
    MOV dword ptr [ESP + 0x24],EAX      ; 004fcdb4
    CMP EAX,ECX                         ; 004fcdb8
    JL 0x004fcdc2                       ; 004fcdba
        ;   XREF to: 004fcdc2 (CONDITIONAL_JUMP)  ; LAB_004fcdc2
    XOR EDI,EDI                         ; 004fcdbc
    MOV dword ptr [ESP + 0x24],EDI      ; 004fcdbe
    LEA EDI,[EBX + -0x1]                ; 004fcdc2
        ;   Label: LAB_004fcdc2
    TEST EDI,EDI                        ; 004fcdc5
    JL 0x004fd0d6                       ; 004fcdc7
        ;   XREF to: 004fd0d6 (CONDITIONAL_JUMP)  ; LAB_004fd0d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fcdcd
        ;   Label: LAB_004fcdcd
    MOV EAX,dword ptr [EAX + 0x14]      ; 004fcdd0
    ADD EAX,0x8                         ; 004fcdd3
    MOV EDX,dword ptr [EAX]             ; 004fcdd6
    MOV dword ptr [ESP + 0x10],EAX      ; 004fcdd8
    CMP EDX,0x2                         ; 004fcddc
    JZ 0x004fce03                       ; 004fcddf
        ;   XREF to: 004fce03 (CONDITIONAL_JUMP)  ; LAB_004fce03
    MOV ECX,0x5e6a65                    ; 004fcde1 | = "..\\engine\\keyframe.c"
    MOV EAX,0x16b                       ; 004fcde6
    PUSH 0x5e6a7a                       ; 004fcdeb | = "Bad keyframe 1"
    MOV dword ptr [0x01d1d400],ECX      ; 004fcdf0 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004fcdf6 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004fcdfb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004fce00
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fce03
        ;   Label: LAB_004fce03
    MOV EAX,EDX                         ; 004fce06
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x118] ; 004fce08
    ADD EAX,0x14                        ; 004fce0f
    MOV dword ptr [ESP + 0x28],EAX      ; 004fce12
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fce16
    SHL EAX,0x2                         ; 004fce1a
    ADD EAX,EDX                         ; 004fce1d
    MOV ESI,dword ptr [EAX + 0x118]     ; 004fce1f
    LEA EAX,[EDI*0x4 + 0x0]             ; 004fce25
    ADD EAX,EDX                         ; 004fce2c
    MOV EDI,dword ptr [EAX + 0x118]     ; 004fce2e
    MOV EAX,dword ptr [ESP]             ; 004fce34
    MOV dword ptr [ESP + 0x2c],EAX      ; 004fce37
    FILD dword ptr [ESP + 0x2c]         ; 004fce3b
    FMUL double ptr [0x005e6ab3]        ; 004fce3f | DAT_005e6ab3
    FLD ST0                             ; 004fce45
    FMUL ST1                            ; 004fce47
    FLD ST0                             ; 004fce49
    FMUL ST2                            ; 004fce4b
    FLD ST1                             ; 004fce4d
    FMUL float ptr [0x005e6ad3]         ; 004fce4f | DAT_005e6ad3
    FLD ST1                             ; 004fce55
    FMUL float ptr [0x005e6abb]         ; 004fce57 | DAT_005e6abb
    FLD ST2                             ; 004fce5d
    FMUL float ptr [0x005e6acb]         ; 004fce5f | DAT_005e6acb
    FLD ST3                             ; 004fce65
    FXCH ST2                            ; 004fce67
    FADD ST0,ST5                        ; 004fce69
    FXCH ST2                            ; 004fce6b
    FMUL float ptr [0x005e6ad7]         ; 004fce6d | DAT_005e6ad7
    FXCH ST6                            ; 004fce73
    FMUL float ptr [0x005e6abf]         ; 004fce75 | DAT_005e6abf
    FXCH ST4                            ; 004fce7b
    FMUL float ptr [0x005e6abf]         ; 004fce7d | DAT_005e6abf
    FXCH ST4                            ; 004fce83
    FSTP float ptr [ESP + 0x2c]         ; 004fce85
    FXCH                                ; 004fce89
    FSUB float ptr [ESP + 0x2c]         ; 004fce8b
    FLD ST4                             ; 004fce8f
    FMUL float ptr [0x005e6abf]         ; 004fce91 | DAT_005e6abf
    FXCH                                ; 004fce97
    FMUL double ptr [0x005e6ac3]        ; 004fce99 | DAT_005e6ac3
    FXCH                                ; 004fce9f
    FSUBP ST4,ST0                       ; 004fcea1
    FXCH ST4                            ; 004fcea3
    FMUL float ptr [0x005e6acf]         ; 004fcea5 | DAT_005e6acf
    FXCH ST3                            ; 004fceab
    FMUL double ptr [0x005e6ac3]        ; 004fcead | DAT_005e6ac3
    FXCH ST3                            ; 004fceb3
    FADDP                               ; 004fceb5
    FXCH ST4                            ; 004fceb7
    FADDP                               ; 004fceb9
    FLD1                                ; 004fcebb
    FADDP ST4,ST0                       ; 004fcebd
    FADD float ptr [ESP + 0x2c]         ; 004fcebf
    FXCH ST3                            ; 004fcec3
    FMUL double ptr [0x005e6ac3]        ; 004fcec5 | DAT_005e6ac3
    FXCH ST3                            ; 004fcecb
    FMUL double ptr [0x005e6ac3]        ; 004fcecd | DAT_005e6ac3
    SHL EBX,0x2                         ; 004fced3
    MOV ECX,dword ptr [EDX + 0x14]      ; 004fced6
    ADD EBX,EDX                         ; 004fced9
    ADD ECX,0x14                        ; 004fcedb
    MOV EBX,dword ptr [EBX + 0x118]     ; 004fcede
    XOR EAX,EAX                         ; 004fcee4
    ADD EBX,0x14                        ; 004fcee6
    MOV dword ptr [ESP + 0x24],EAX      ; 004fcee9
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fceed
    ADD ESI,0x14                        ; 004fcef1
    ADD EDI,0x14                        ; 004fcef4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fcef7
    FXCH                                ; 004fcefa
    CALL FUN_005c03a0                   ; 004fcefc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c]        ; 004fcf01
    FXCH                                ; 004fcf05
    CALL FUN_005c03a0                   ; 004fcf07
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 004fcf0c
    CALL FUN_005c03a0                   ; 004fcf0e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 004fcf13
    CALL FUN_005c03a0                   ; 004fcf15
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 004fcf1a
    FISTP dword ptr [ESP + 0x18]        ; 004fcf1c
    FISTP dword ptr [ESP + 0x14]        ; 004fcf20
    FISTP dword ptr [ESP + 0x20]        ; 004fcf24
    TEST EDX,EDX                        ; 004fcf28
    JLE 0x004fd067                      ; 004fcf2a
        ;   XREF to: 004fd067 (CONDITIONAL_JUMP)  ; LAB_004fd067
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fcf30
        ;   Label: LAB_004fcf30
    MOV EDX,dword ptr [EDI]             ; 004fcf34
    IMUL EDX                            ; 004fcf36
    SHRD EAX,EDX,0x10                   ; 004fcf38
    MOV dword ptr [ESP + 0x2c],EAX      ; 004fcf3c
    MOV EDX,dword ptr [EBX]             ; 004fcf40
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fcf42
    IMUL EDX                            ; 004fcf46
    SHRD EAX,EDX,0x10                   ; 004fcf48
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fcf4c
    ADD EDX,EAX                         ; 004fcf50
    MOV dword ptr [ESP + 0x2c],EDX      ; 004fcf52
    MOV EDX,dword ptr [ESP + 0x28]      ; 004fcf56
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fcf5a
    MOV EDX,dword ptr [EDX]             ; 004fcf5e
    IMUL EDX                            ; 004fcf60
    SHRD EAX,EDX,0x10                   ; 004fcf62
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fcf66
    ADD EDX,EAX                         ; 004fcf6a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcf6c
    MOV dword ptr [ESP + 0x2c],EDX      ; 004fcf70
    MOV EDX,dword ptr [ESI]             ; 004fcf74
    IMUL EDX                            ; 004fcf76
    SHRD EAX,EDX,0x10                   ; 004fcf78
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fcf7c
    ADD EDX,EAX                         ; 004fcf80
    MOV dword ptr [ECX],EDX             ; 004fcf82
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fcf84
    MOV EDX,dword ptr [EDI + 0x4]       ; 004fcf88
    IMUL EDX                            ; 004fcf8b
    SHRD EAX,EDX,0x10                   ; 004fcf8d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004fcf91
    MOV EDX,dword ptr [EBX + 0x4]       ; 004fcf95
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fcf98
    IMUL EDX                            ; 004fcf9c
    SHRD EAX,EDX,0x10                   ; 004fcf9e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fcfa2
    ADD EDX,EAX                         ; 004fcfa6
    MOV dword ptr [ESP + 0x2c],EDX      ; 004fcfa8
    MOV EDX,dword ptr [ESP + 0x28]      ; 004fcfac
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fcfb0
    MOV EDX,dword ptr [EDX + 0x4]       ; 004fcfb4
    IMUL EDX                            ; 004fcfb7
    SHRD EAX,EDX,0x10                   ; 004fcfb9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fcfbd
    ADD EDX,EAX                         ; 004fcfc1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcfc3
    MOV dword ptr [ESP + 0x2c],EDX      ; 004fcfc7
    MOV EDX,dword ptr [ESI + 0x4]       ; 004fcfcb
    IMUL EDX                            ; 004fcfce
    SHRD EAX,EDX,0x10                   ; 004fcfd0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fcfd4
    ADD EDX,EAX                         ; 004fcfd8
    MOV dword ptr [ECX + 0x4],EDX       ; 004fcfda
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fcfdd
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fcfe1
    IMUL EDX                            ; 004fcfe4
    SHRD EAX,EDX,0x10                   ; 004fcfe6
    MOV dword ptr [ESP + 0x2c],EAX      ; 004fcfea
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fcfee
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fcff1
    IMUL EDX                            ; 004fcff5
    SHRD EAX,EDX,0x10                   ; 004fcff7
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fcffb
    ADD EDX,EAX                         ; 004fcfff
    MOV dword ptr [ESP + 0x2c],EDX      ; 004fd001
    MOV EDX,dword ptr [ESP + 0x28]      ; 004fd005
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fd009
    MOV EDX,dword ptr [EDX + 0x8]       ; 004fd00d
    ADD EDI,0xc                         ; 004fd010
    IMUL EDX                            ; 004fd013
    SHRD EAX,EDX,0x10                   ; 004fd015
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fd019
    ADD EBX,0xc                         ; 004fd01d
    ADD EDX,EAX                         ; 004fd020
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fd022
    MOV dword ptr [ESP + 0x2c],EDX      ; 004fd026
    MOV EDX,dword ptr [ESI + 0x8]       ; 004fd02a
    ADD ESI,0xc                         ; 004fd02d
    IMUL EDX                            ; 004fd030
    SHRD EAX,EDX,0x10                   ; 004fd032
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fd036
    ADD ECX,0xc                         ; 004fd03a
    ADD EDX,EAX                         ; 004fd03d
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fd03f
    MOV dword ptr [ECX + -0x4],EDX      ; 004fd043
    MOV EDX,dword ptr [ESP + 0x28]      ; 004fd046
    INC EAX                             ; 004fd04a
    ADD EDX,0xc                         ; 004fd04b
    MOV dword ptr [ESP + 0x24],EAX      ; 004fd04e
    MOV dword ptr [ESP + 0x28],EDX      ; 004fd052
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fd056
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fd05a
    CMP EAX,dword ptr [EDX + 0x8]       ; 004fd05e
    JL 0x004fcf30                       ; 004fd061
        ;   XREF to: 004fcf30 (CONDITIONAL_JUMP)  ; LAB_004fcf30
    MOV ESI,dword ptr [ECX]             ; 004fd067
        ;   Label: LAB_004fd067
    MOV EBX,ECX                         ; 004fd069
    CMP ESI,0x17                        ; 004fd06b
    JNZ 0x004fd0e2                      ; 004fd06e
        ;   XREF to: 004fd0e2 (CONDITIONAL_JUMP)  ; LAB_004fd0e2
    MOV ESI,dword ptr [EBP + 0x14]      ; 004fd070
        ;   Label: LAB_004fd070
    MOV ESI,dword ptr [ESI + 0x14]      ; 004fd073
    ADD EBX,0xc                         ; 004fd076
    ADD ESI,0x14                        ; 004fd079
    MOV ECX,dword ptr [EBX]             ; 004fd07c
        ;   Label: LAB_004fd07c
    CMP ECX,0x18                        ; 004fd07e
    JC 0x004fd093                       ; 004fd081
        ;   XREF to: 004fd093 (CONDITIONAL_JUMP)  ; LAB_004fd093
    JA 0x004fd115                       ; 004fd083
        ;   XREF to: 004fd115 (CONDITIONAL_JUMP)  ; LAB_004fd115
    PUSH EBX                            ; 004fd089
    PUSH ESI                            ; 004fd08a
    CALL FUN_004fc9c0                   ; 004fd08b
        ;   XREF to: 004fc9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc9c0()
    ADD ESP,0x8                         ; 004fd090
        ;   Label: LAB_004fd090
    PUSH EBX                            ; 004fd093
        ;   Label: LAB_004fd093
    CALL FUN_0051fee0                   ; 004fd094
        ;   XREF to: 0051fee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051fee0()
    SHR EAX,0x2                         ; 004fd099
    SHL EAX,0x2                         ; 004fd09c
    ADD EBX,EAX                         ; 004fd09f
    MOV EDX,dword ptr [EBX]             ; 004fd0a1
    ADD ESP,0x4                         ; 004fd0a3
    TEST EDX,EDX                        ; 004fd0a6
    JNZ 0x004fd07c                      ; 004fd0a8
        ;   XREF to: 004fd07c (CONDITIONAL_JUMP)  ; LAB_004fd07c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fd0aa
    MOV ECX,dword ptr [EAX + 0x14]      ; 004fd0ad
    PUSH ECX                            ; 004fd0b0
    CALL FUN_004076e0                   ; 004fd0b1
        ;   XREF to: 004076e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004076e0()
    ADD ESP,0x4                         ; 004fd0b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fd0b9
    ADD EAX,0x158                       ; 004fd0bc
    MOV ESP,EBP                         ; 004fd0c1
    POP EBP                             ; 004fd0c3
    POP EDI                             ; 004fd0c4
    POP ESI                             ; 004fd0c5
    POP EBX                             ; 004fd0c6
    RET                                 ; 004fd0c7
    PUSH EAX                            ; 004fd0c8
        ;   Label: LAB_004fd0c8
    CALL FUN_004fcb40                   ; 004fd0c9
        ;   XREF to: 004fcb40 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcb40()
    ADD ESP,0x4                         ; 004fd0ce
    JMP 0x004fcd49                      ; 004fd0d1
        ;   XREF to: 004fcd49 (UNCONDITIONAL_JUMP)  ; LAB_004fcd49
    MOV EDI,dword ptr [EBP + 0x14]      ; 004fd0d6
        ;   Label: LAB_004fd0d6
    MOV EDI,dword ptr [EDI + 0x8]       ; 004fd0d9
    DEC EDI                             ; 004fd0dc
    JMP 0x004fcdcd                      ; 004fd0dd
        ;   XREF to: 004fcdcd (UNCONDITIONAL_JUMP)  ; LAB_004fcdcd
    MOV EDI,0x5e6a89                    ; 004fd0e2 | = "..\\engine\\keyframe.c"
        ;   Label: LAB_004fd0e2
    MOV EAX,0x1a6                       ; 004fd0e7
    PUSH 0x5e6a9e                       ; 004fd0ec | = "ZBP not found!"
    MOV dword ptr [0x01d1d400],EDI      ; 004fd0f1 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004fd0f7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004fd0fc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004fd101
    JMP 0x004fd070                      ; 004fd104
        ;   XREF to: 004fd070 (UNCONDITIONAL_JUMP)  ; LAB_004fd070
    PUSH EBX                            ; 004fd109
        ;   Label: LAB_004fd109
    PUSH ESI                            ; 004fd10a
    CALL FUN_004fc800                   ; 004fd10b
        ;   XREF to: 004fc800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc800()
    JMP 0x004fd090                      ; 004fd110
        ;   XREF to: 004fd090 (UNCONDITIONAL_JUMP)  ; LAB_004fd090
    CMP ECX,0x19                        ; 004fd115
        ;   Label: LAB_004fd115
    JZ 0x004fd109                       ; 004fd118
        ;   XREF to: 004fd109 (CONDITIONAL_JUMP)  ; LAB_004fd109
    JMP 0x004fd093                      ; 004fd11a
        ;   XREF to: 004fd093 (UNCONDITIONAL_JUMP)  ; LAB_004fd093

