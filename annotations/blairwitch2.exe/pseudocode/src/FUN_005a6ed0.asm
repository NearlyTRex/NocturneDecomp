; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a6ed0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f0765
;   undefined4 DAT_005f0769
;   undefined4 DAT_005f076d
;   undefined4 DAT_005f0775
;   undefined4 DAT_005f077d
;   undefined4 DAT_005f0785
;   undefined4 DAT_005f078d
;   undefined4 DAT_005f0795
;   undefined4 DAT_005f079d
;   undefined4 DAT_005f07a5
;   undefined4 DAT_005ffe6c
;   undefined4 DAT_005ffe70
;   undefined4 DAT_0061ebfc
;   undefined4 DAT_007bdc94
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0040c8f0
;   FUN_0040cf60
;   FUN_004eacf0
;   FUN_00591530
;   FUN_00591c10
;   FUN_00593a10
;   FUN_00594380
;   FUN_005a7ed0
;   FUN_005a8300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6ed0
        ;   Label: FUN_005a6ed0
    PUSH ESI                            ; 005a6ed1
    PUSH EDI                            ; 005a6ed2
    PUSH EBP                            ; 005a6ed3
    MOV EBP,ESP                         ; 005a6ed4
    SUB ESP,0x2a8                       ; 005a6ed6
    SUB EBP,0x7a                        ; 005a6edc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005a6edf
    MOV EDX,dword ptr [0x007bdc94]      ; 005a6ee5 | DAT_007bdc94
    PUSH EDX                            ; 005a6eeb
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a6eec
    PUSH EBX                            ; 005a6ef2
    CALL dword ptr [EAX + 0x9c]         ; 005a6ef3
    ADD ESP,0x4                         ; 005a6ef9
    PUSH EAX                            ; 005a6efc
    CALL FUN_0040c8f0                   ; 005a6efd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 005a6f02
    TEST EAX,EAX                        ; 005a6f05
    JNZ 0x005a77ba                      ; 005a6f07
        ;   XREF to: 005a77ba (CONDITIONAL_JUMP)  ; LAB_005a77ba
    FLD float ptr [EBX + 0x82c]         ; 005a6f0d
        ;   Label: LAB_005a6f0d
    FSUB float ptr [EBP + 0x92]         ; 005a6f13
    FSTP float ptr [EBX + 0x82c]        ; 005a6f19
        ;   Label: LAB_005a6f19
    FLD float ptr [EBX + 0x82c]         ; 005a6f1f
    FCOMP float ptr [0x005ffe6c]        ; 005a6f25 | DAT_005ffe6c
    FNSTSW AX                           ; 005a6f2b
    SAHF                                ; 005a6f2d
    JBE 0x005a6f3b                      ; 005a6f2e
        ;   XREF to: 005a6f3b (CONDITIONAL_JUMP)  ; LAB_005a6f3b
    MOV EAX,[0x005ffe6c]                ; 005a6f30 | DAT_005ffe6c
    MOV dword ptr [EBX + 0x82c],EAX     ; 005a6f35
    FLD float ptr [EBX + 0x82c]         ; 005a6f3b
        ;   Label: LAB_005a6f3b
    FLDZ                                ; 005a6f41
    FCOMPP                              ; 005a6f43
    FNSTSW AX                           ; 005a6f45
    SAHF                                ; 005a6f47
    JBE 0x005a6f54                      ; 005a6f48
        ;   XREF to: 005a6f54 (CONDITIONAL_JUMP)  ; LAB_005a6f54
    MOV dword ptr [EBX + 0x82c],0x0     ; 005a6f4a
    FLD float ptr [EBX + 0x82c]         ; 005a6f54
        ;   Label: LAB_005a6f54
    FDIV float ptr [0x005ffe6c]         ; 005a6f5a | DAT_005ffe6c
    FLD float ptr [EBX + 0x834]         ; 005a6f60
    FADD float ptr [EBP + 0x92]         ; 005a6f66
    FST float ptr [EBX + 0x834]         ; 005a6f6c
    FXCH                                ; 005a6f72
    FSTP float ptr [EBX + 0x828]        ; 005a6f74
    FCOMP float ptr [0x005ffe70]        ; 005a6f7a | DAT_005ffe70
    FNSTSW AX                           ; 005a6f80
    SAHF                                ; 005a6f82
    JC 0x005a6f8f                       ; 005a6f83
        ;   XREF to: 005a6f8f (CONDITIONAL_JUMP)  ; LAB_005a6f8f
    MOV dword ptr [EBX + 0x834],0x0     ; 005a6f85
    FLD float ptr [EBX + 0x834]         ; 005a6f8f
        ;   Label: LAB_005a6f8f
    FDIV float ptr [0x005ffe70]         ; 005a6f95 | DAT_005ffe70
    FMUL float ptr [0x005f0765]         ; 005a6f9b | DAT_005f0765
    FMUL float ptr [0x005f0769]         ; 005a6fa1 | DAT_005f0769
    FSIN                                ; 005a6fa7
    FLD float ptr [EBX + 0x828]         ; 005a6fa9
    FMUL double ptr [0x005f076d]        ; 005a6faf | DAT_005f076d
    FMULP                               ; 005a6fb5
    PUSH dword ptr [EBP + 0x92]         ; 005a6fb7
    FADD double ptr [0x005f0775]        ; 005a6fbd | DAT_005f0775
    PUSH EBX                            ; 005a6fc3
    FSTP float ptr [EBX + 0x830]        ; 005a6fc4
    CALL FUN_004eacf0                   ; 005a6fca
        ;   XREF to: 004eacf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacf0()
    ADD ESP,0x8                         ; 005a6fcf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a6fd2
    PUSH dword ptr [EBP + 0x92]         ; 005a6fd8
    PUSH EBX                            ; 005a6fde
    CALL dword ptr [EAX + 0x4]          ; 005a6fdf
    MOV ECX,dword ptr [EBX + 0x430]     ; 005a6fe2
    ADD ESP,0x8                         ; 005a6fe8
    CMP ECX,0x1                         ; 005a6feb
    JZ 0x005a77b2                       ; 005a6fee
        ;   XREF to: 005a77b2 (CONDITIONAL_JUMP)  ; LAB_005a77b2
    FLD float ptr [EBX + 0x828]         ; 005a6ff4
    FLD float ptr [EBX + 0x2a8]         ; 005a6ffa
    FSUB float ptr [EBP + 0x92]         ; 005a7000
    FLDZ                                ; 005a7006
    FXCH                                ; 005a7008
    FSTP float ptr [EBX + 0x2a8]        ; 005a700a
    FCOMPP                              ; 005a7010
    FNSTSW AX                           ; 005a7012
    SAHF                                ; 005a7014
    JNC 0x005a7770                      ; 005a7015
        ;   XREF to: 005a7770 (CONDITIONAL_JUMP)  ; LAB_005a7770
    FLD float ptr [EBX + 0x2a8]         ; 005a701b
    FLDZ                                ; 005a7021
    FCOMPP                              ; 005a7023
    FNSTSW AX                           ; 005a7025
    SAHF                                ; 005a7027
    JC 0x005a7770                       ; 005a7028
        ;   XREF to: 005a7770 (CONDITIONAL_JUMP)  ; LAB_005a7770
    MOV dword ptr [EBX + 0x2a8],0x3e19999a ; 005a702e
    CALL FUN_005a7ed0                   ; 005a7038
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7ed0()
    TEST EAX,EAX                        ; 005a703d
    JZ 0x005a7770                       ; 005a703f
        ;   XREF to: 005a7770 (CONDITIONAL_JUMP)  ; LAB_005a7770
    PUSH EBX                            ; 005a7045
    CALL FUN_004089d0                   ; 005a7046
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 005a704b
    LEA EAX,[EBX + 0x30]                ; 005a704e
    PUSH EAX                            ; 005a7051
    PUSH 0x265370c                      ; 005a7052
    LEA EAX,[EBP + 0xfffffe32]          ; 005a7057
    PUSH EAX                            ; 005a705d
    MOV EDI,0x3fa66666                  ; 005a705e
    XOR ESI,ESI                         ; 005a7063
    CALL FUN_00591c10                   ; 005a7065
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    LEA EAX,[EBP + 0xfffffe32]          ; 005a706a
    ADD ESP,0xc                         ; 005a7070
    MOV dword ptr [EBP + 0xfffffed6],ESI ; 005a7073
    MOV dword ptr [EBP + 0xfffffeda],EDI ; 005a7079
    PUSH EAX                            ; 005a707f
    LEA EAX,[EBP + 0xfffffed6]          ; 005a7080
    MOV dword ptr [EBP + 0xfffffede],ESI ; 005a7086
    PUSH EAX                            ; 005a708c
    LEA ESI,[EBP + 0xfffffeee]          ; 005a708d
    LEA EDI,[EBP + 0x2]                 ; 005a7093
    CALL FUN_00591530                   ; 005a7096
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + 0xfffffeee]          ; 005a709b
    LEA EAX,[EBP + 0xfffffe32]          ; 005a70a1
    ADD ESP,0x8                         ; 005a70a7
    MOV EDX,0x3f000000                  ; 005a70aa
    MOV ECX,0x3f333333                  ; 005a70af
    PUSH EAX                            ; 005a70b4
    MOV dword ptr [EBP + 0x26],EDX      ; 005a70b5
    MOVSD ES:EDI,ESI                    ; 005a70b8
    MOVSD ES:EDI,ESI                    ; 005a70b9
    MOVSD ES:EDI,ESI                    ; 005a70ba
    MOV dword ptr [EBP + 0x2a],ECX      ; 005a70bb
    XOR ESI,ESI                         ; 005a70be
    LEA EAX,[EBP + 0x26]                ; 005a70c0
    MOV dword ptr [EBP + 0x2e],ESI      ; 005a70c3
    PUSH EAX                            ; 005a70c6
    LEA ESI,[EBP + 0xfffffefa]          ; 005a70c7
    LEA EDI,[EBP + 0xffffff66]          ; 005a70cd
    CALL FUN_00591530                   ; 005a70d3
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + 0xfffffefa]          ; 005a70d8
    ADD ESP,0x8                         ; 005a70de
    LEA EAX,[EBP + 0xfffffe32]          ; 005a70e1
    XOR EDX,EDX                         ; 005a70e7
    PUSH EAX                            ; 005a70e9
    MOV dword ptr [EBP + 0xffffff0e],EDX ; 005a70ea
    MOVSD ES:EDI,ESI                    ; 005a70f0
    MOVSD ES:EDI,ESI                    ; 005a70f1
    MOVSD ES:EDI,ESI                    ; 005a70f2
    MOV EAX,0x3f333333                  ; 005a70f3
    MOV EDI,0xbf000000                  ; 005a70f8
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 005a70fd
    LEA EAX,[EBP + 0xffffff06]          ; 005a7103
    LEA ESI,[EBP + 0xfffffe82]          ; 005a7109
    PUSH EAX                            ; 005a710f
    MOV dword ptr [EBP + 0xffffff06],EDI ; 005a7110
    LEA EDI,[EBP + 0xfffffebe]          ; 005a7116
    CALL FUN_00591530                   ; 005a711c
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + 0xfffffe82]          ; 005a7121
    LEA EAX,[EBP + 0xfffffe32]          ; 005a7127
    ADD ESP,0x8                         ; 005a712d
    XOR ECX,ECX                         ; 005a7130
    MOVSD ES:EDI,ESI                    ; 005a7132
    MOVSD ES:EDI,ESI                    ; 005a7133
    MOVSD ES:EDI,ESI                    ; 005a7134
    PUSH EAX                            ; 005a7135
    LEA EDI,[EBP + 0xffffff1e]          ; 005a7136
    MOV ESI,0x265370c                   ; 005a713c
    MOV dword ptr [EBP + 0xffffff7e],ECX ; 005a7141
    MOV dword ptr [EBP + -0x7a],ECX     ; 005a7147
    MOVSD ES:EDI,ESI                    ; 005a714a
    MOVSD ES:EDI,ESI                    ; 005a714b
    MOVSD ES:EDI,ESI                    ; 005a714c
    LEA EAX,[EBP + 0xffffff7e]          ; 005a714d
    MOV ESI,0x3f800000                  ; 005a7153
    PUSH EAX                            ; 005a7158
    MOV dword ptr [EBP + -0x7e],ESI     ; 005a7159
    LEA ESI,[EBP + 0x32]                ; 005a715c
    LEA EDI,[EBP + 0xfffffee2]          ; 005a715f
    CALL FUN_00591530                   ; 005a7165
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + 0x32]                ; 005a716a
    MOVSD ES:EDI,ESI                    ; 005a716d
    MOVSD ES:EDI,ESI                    ; 005a716e
    MOVSD ES:EDI,ESI                    ; 005a716f
    FLD float ptr [EBP + 0xfffffee2]    ; 005a7170
    FMUL float ptr [0x005f077d]         ; 005a7176 | DAT_005f077d
    FLD float ptr [EBP + 0xfffffee6]    ; 005a717c
    FMUL float ptr [0x005f077d]         ; 005a7182 | DAT_005f077d
    FLD float ptr [EBP + 0xfffffeea]    ; 005a7188
    FMUL float ptr [0x005f077d]         ; 005a718e | DAT_005f077d
    ADD ESP,0x8                         ; 005a7194
    LEA EAX,[EBP + 0xfffffe32]          ; 005a7197
    XOR EDX,EDX                         ; 005a719d
    PUSH EAX                            ; 005a719f
    MOV dword ptr [EBP + -0x2a],EDX     ; 005a71a0
    MOV dword ptr [EBP + -0x26],EDX     ; 005a71a3
    LEA EDI,[EBP + -0x52]               ; 005a71a6
    MOV EAX,0x3f000000                  ; 005a71a9
    LEA ESI,[EBP + 0xfffffeb2]          ; 005a71ae
    MOV dword ptr [EBP + -0x2e],EAX     ; 005a71b4
    FXCH ST2                            ; 005a71b7
    FSTP float ptr [EBP + 0xfffffeb2]   ; 005a71b9
    FSTP float ptr [EBP + 0xfffffeb6]   ; 005a71bf
    FSTP float ptr [EBP + 0xfffffeba]   ; 005a71c5
    LEA EAX,[EBP + -0x2e]               ; 005a71cb
    MOVSD ES:EDI,ESI                    ; 005a71ce
    MOVSD ES:EDI,ESI                    ; 005a71cf
    MOVSD ES:EDI,ESI                    ; 005a71d0
    PUSH EAX                            ; 005a71d1
    LEA ESI,[EBP + 0xfffffe9a]          ; 005a71d2
    LEA EDI,[EBP + -0x22]               ; 005a71d8
    CALL FUN_00591530                   ; 005a71db
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + 0xfffffe9a]          ; 005a71e0
    MOVSD ES:EDI,ESI                    ; 005a71e6
    MOVSD ES:EDI,ESI                    ; 005a71e7
    MOVSD ES:EDI,ESI                    ; 005a71e8
    FLD float ptr [EBP + -0x22]         ; 005a71e9
    FMUL float ptr [0x005f077d]         ; 005a71ec | DAT_005f077d
    FLD float ptr [EBP + -0x1e]         ; 005a71f2
    FMUL float ptr [0x005f077d]         ; 005a71f5 | DAT_005f077d
    FLD float ptr [EBP + -0x1a]         ; 005a71fb
    FMUL float ptr [0x005f077d]         ; 005a71fe | DAT_005f077d
    LEA EAX,[EBX + 0x20]                ; 005a7204
    ADD ESP,0x8                         ; 005a7207
    MOV dword ptr [EBP + 0x5a],EAX      ; 005a720a
    LEA EDI,[EBP + 0xffffff12]          ; 005a720d
    LEA ESI,[EBP + -0x5e]               ; 005a7213
    FXCH ST2                            ; 005a7216
    FSTP float ptr [EBP + -0x5e]        ; 005a7218
    FSTP float ptr [EBP + -0x5a]        ; 005a721b
    FSTP float ptr [EBP + -0x56]        ; 005a721e
    MOVSD ES:EDI,ESI                    ; 005a7221
    MOVSD ES:EDI,ESI                    ; 005a7222
    MOVSD ES:EDI,ESI                    ; 005a7223
    FLD float ptr [EBP + 0x2]           ; 005a7224
    FADD float ptr [EAX]                ; 005a7227
    FLD float ptr [EBP + 0x6]           ; 005a7229
    FXCH                                ; 005a722c
    FSTP float ptr [EBP + 0x2]          ; 005a722e
    FADD float ptr [EAX + 0x4]          ; 005a7231
    FLD float ptr [EBP + 0xa]           ; 005a7234
    FXCH                                ; 005a7237
    FSTP float ptr [EBP + 0x6]          ; 005a7239
    FADD float ptr [EAX + 0x8]          ; 005a723c
    FLD float ptr [EBP + 0xffffff1e]    ; 005a723f
    FXCH                                ; 005a7245
    FSTP float ptr [EBP + 0xa]          ; 005a7247
    FADD float ptr [EAX]                ; 005a724a
    FLD float ptr [EBP + 0xffffff22]    ; 005a724c
    FXCH                                ; 005a7252
    FSTP float ptr [EBP + 0xffffff1e]   ; 005a7254
    FADD float ptr [EAX + 0x4]          ; 005a725a
    FLD float ptr [EBP + 0xffffff26]    ; 005a725d
    FXCH                                ; 005a7263
    FSTP float ptr [EBP + 0xffffff22]   ; 005a7265
    FADD float ptr [EAX + 0x8]          ; 005a726b
    FLD float ptr [EBP + 0xffffff66]    ; 005a726e
    FXCH                                ; 005a7274
    FSTP float ptr [EBP + 0xffffff26]   ; 005a7276
    FADD float ptr [EAX]                ; 005a727c
    FLD float ptr [EBP + 0xffffff6a]    ; 005a727e
    FXCH                                ; 005a7284
    FSTP float ptr [EBP + 0xffffff66]   ; 005a7286
    FADD float ptr [EAX + 0x4]          ; 005a728c
    FLD float ptr [EBP + 0xffffff6e]    ; 005a728f
    FXCH                                ; 005a7295
    FSTP float ptr [EBP + 0xffffff6a]   ; 005a7297
    FADD float ptr [EAX + 0x8]          ; 005a729d
    FLD float ptr [EBP + 0xfffffebe]    ; 005a72a0
    FXCH                                ; 005a72a6
    FSTP float ptr [EBP + 0xffffff6e]   ; 005a72a8
    FADD float ptr [EAX]                ; 005a72ae
    FLD float ptr [EBP + 0xfffffec2]    ; 005a72b0
    FXCH                                ; 005a72b6
    FSTP float ptr [EBP + 0xfffffebe]   ; 005a72b8
    FADD float ptr [EAX + 0x4]          ; 005a72be
    FLD float ptr [EBP + 0xfffffec6]    ; 005a72c1
    FXCH                                ; 005a72c7
    FSTP float ptr [EBP + 0xfffffec2]   ; 005a72c9
    FADD float ptr [EAX + 0x8]          ; 005a72cf
    FSTP float ptr [EBP + 0xfffffec6]   ; 005a72d2
    PUSH 0x0                            ; 005a72d8
    PUSH 0x0                            ; 005a72da
    LEA EAX,[EBP + 0xfffffee2]          ; 005a72dc
    PUSH EAX                            ; 005a72e2
    LEA EAX,[EBP + 0x2]                 ; 005a72e3
    FLD float ptr [EBX + 0x828]         ; 005a72e6
    PUSH EAX                            ; 005a72ec
    FMUL double ptr [0x005f0785]        ; 005a72ed | DAT_005f0785
    PUSH 0x3f800000                     ; 005a72f3
    PUSH 0x3f666666                     ; 005a72f8
    PUSH 0x3f666666                     ; 005a72fd
    PUSH 0x0                            ; 005a7302
    SUB ESP,0x4                         ; 005a7304
    FSTP float ptr [ESP]                ; 005a7307
    PUSH 0x0                            ; 005a730a
    SUB ESP,0x4                         ; 005a730c
    MOV EAX,dword ptr [EBX + 0x828]     ; 005a730f
    MOV dword ptr [ESP],EAX             ; 005a7315
    PUSH 0x3fc00000                     ; 005a7318
    PUSH 0x3f000000                     ; 005a731d
    CALL FUN_0040cf60                   ; 005a7322
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a7327
    ADD ESP,0x8                         ; 005a732a
    FLD float ptr [EBP + 0x76]          ; 005a732d
    FMUL float ptr [EBX + 0x828]        ; 005a7330
    SUB ESP,0x4                         ; 005a7336
    MOV ESI,dword ptr [0x0061ebfc]      ; 005a7339 | DAT_0061ebfc
    FSTP float ptr [ESP]                ; 005a733f
    PUSH ESI                            ; 005a7342
    CALL FUN_005a8300                   ; 005a7343
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8300()
    ADD ESP,0x34                        ; 005a7348
    PUSH 0x0                            ; 005a734b
    PUSH 0x0                            ; 005a734d
    LEA EAX,[EBP + -0x52]               ; 005a734f
    PUSH EAX                            ; 005a7352
    LEA EAX,[EBP + 0xffffff1e]          ; 005a7353
    FLD float ptr [EBX + 0x828]         ; 005a7359
    PUSH EAX                            ; 005a735f
    FMUL double ptr [0x005f0785]        ; 005a7360 | DAT_005f0785
    PUSH 0x3f800000                     ; 005a7366
    PUSH 0x3f666666                     ; 005a736b
    PUSH 0x3f666666                     ; 005a7370
    PUSH 0x0                            ; 005a7375
    SUB ESP,0x4                         ; 005a7377
    FSTP float ptr [ESP]                ; 005a737a
    PUSH 0x0                            ; 005a737d
    SUB ESP,0x4                         ; 005a737f
    MOV EAX,dword ptr [EBX + 0x828]     ; 005a7382
    MOV dword ptr [ESP],EAX             ; 005a7388
    PUSH 0x3fc00000                     ; 005a738b
    PUSH 0x3f000000                     ; 005a7390
    CALL FUN_0040cf60                   ; 005a7395
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a739a
    ADD ESP,0x8                         ; 005a739d
    FLD float ptr [EBP + 0x76]          ; 005a73a0
    FMUL float ptr [EBX + 0x828]        ; 005a73a3
    SUB ESP,0x4                         ; 005a73a9
    MOV EDI,dword ptr [0x0061ebfc]      ; 005a73ac | DAT_0061ebfc
    FSTP float ptr [ESP]                ; 005a73b2
    PUSH EDI                            ; 005a73b5
    CALL FUN_005a8300                   ; 005a73b6
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8300()
    ADD ESP,0x34                        ; 005a73bb
    PUSH 0x0                            ; 005a73be
    PUSH 0x0                            ; 005a73c0
    LEA EAX,[EBP + -0x22]               ; 005a73c2
    PUSH EAX                            ; 005a73c5
    LEA EAX,[EBP + 0xffffff66]          ; 005a73c6
    FLD float ptr [EBX + 0x828]         ; 005a73cc
    PUSH EAX                            ; 005a73d2
    FMUL double ptr [0x005f0785]        ; 005a73d3 | DAT_005f0785
    PUSH 0x3f800000                     ; 005a73d9
    PUSH 0x3f666666                     ; 005a73de
    PUSH 0x3f666666                     ; 005a73e3
    PUSH 0x0                            ; 005a73e8
    SUB ESP,0x4                         ; 005a73ea
    FSTP float ptr [ESP]                ; 005a73ed
    PUSH 0x0                            ; 005a73f0
    SUB ESP,0x4                         ; 005a73f2
    MOV EAX,dword ptr [EBX + 0x828]     ; 005a73f5
    MOV dword ptr [ESP],EAX             ; 005a73fb
    PUSH 0x3fc00000                     ; 005a73fe
    PUSH 0x3f000000                     ; 005a7403
    CALL FUN_0040cf60                   ; 005a7408
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a740d
    ADD ESP,0x8                         ; 005a7410
    FLD float ptr [EBP + 0x76]          ; 005a7413
    FMUL float ptr [EBX + 0x828]        ; 005a7416
    SUB ESP,0x4                         ; 005a741c
    MOV EAX,[0x0061ebfc]                ; 005a741f | DAT_0061ebfc
    FSTP float ptr [ESP]                ; 005a7424
    PUSH EAX                            ; 005a7427
    CALL FUN_005a8300                   ; 005a7428
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8300()
    ADD ESP,0x34                        ; 005a742d
    PUSH 0x0                            ; 005a7430
    PUSH 0x0                            ; 005a7432
    LEA EAX,[EBP + 0xffffff12]          ; 005a7434
    PUSH EAX                            ; 005a743a
    LEA EAX,[EBP + 0xfffffebe]          ; 005a743b
    FLD float ptr [EBX + 0x828]         ; 005a7441
    PUSH EAX                            ; 005a7447
    FMUL double ptr [0x005f0785]        ; 005a7448 | DAT_005f0785
    PUSH 0x3f800000                     ; 005a744e
    PUSH 0x3f666666                     ; 005a7453
    PUSH 0x3f666666                     ; 005a7458
    PUSH 0x0                            ; 005a745d
    SUB ESP,0x4                         ; 005a745f
    FSTP float ptr [ESP]                ; 005a7462
    PUSH 0x0                            ; 005a7465
    SUB ESP,0x4                         ; 005a7467
    MOV EAX,dword ptr [EBX + 0x828]     ; 005a746a
    MOV dword ptr [ESP],EAX             ; 005a7470
    PUSH 0x3fc00000                     ; 005a7473
    PUSH 0x3f000000                     ; 005a7478
    CALL FUN_0040cf60                   ; 005a747d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a7482
    ADD ESP,0x8                         ; 005a7485
    FLD float ptr [EBP + 0x76]          ; 005a7488
    FMUL float ptr [EBX + 0x828]        ; 005a748b
    SUB ESP,0x4                         ; 005a7491
    MOV EDX,dword ptr [0x0061ebfc]      ; 005a7494 | DAT_0061ebfc
    FSTP float ptr [ESP]                ; 005a749a
    PUSH EDX                            ; 005a749d
    MOV ESI,0x3f333333                  ; 005a749e
    CALL FUN_005a8300                   ; 005a74a3
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8300()
    LEA EAX,[EBP + 0xfffffe32]          ; 005a74a8
    ADD ESP,0x34                        ; 005a74ae
    MOV dword ptr [EBP + -0x12],ESI     ; 005a74b1
    XOR ECX,ECX                         ; 005a74b4
    PUSH EAX                            ; 005a74b6
    LEA EAX,[EBP + -0x16]               ; 005a74b7
    LEA ESI,[EBP + 0xffffff42]          ; 005a74ba
    PUSH EAX                            ; 005a74c0
    MOV dword ptr [EBP + -0x16],ECX     ; 005a74c1
    MOV dword ptr [EBP + -0xe],ECX      ; 005a74c4
    CALL FUN_00591530                   ; 005a74c7
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 005a74cc
    LEA EDI,[EBP + 0xffffff4e]          ; 005a74cf
    LEA ESI,[EBP + 0xffffff42]          ; 005a74d5
    PUSH EBX                            ; 005a74db
    MOVSD ES:EDI,ESI                    ; 005a74dc
    MOVSD ES:EDI,ESI                    ; 005a74dd
    MOVSD ES:EDI,ESI                    ; 005a74de
    CALL FUN_00408a10                   ; 005a74df
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    XOR EAX,EAX                         ; 005a74e4
    MOV dword ptr [EBP + 0x5e],EAX      ; 005a74e6
    MOV EAX,dword ptr [EBP + 0x5a]      ; 005a74e9
    ADD ESP,0x4                         ; 005a74ec
    MOV dword ptr [EBP + 0x6a],EAX      ; 005a74ef
    PUSH 0x40c90fdb                     ; 005a74f2
        ;   Label: LAB_005a74f2
    PUSH 0x0                            ; 005a74f7
    CALL FUN_0040cf60                   ; 005a74f9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 005a74fe
    MOV dword ptr [EBP + 0x76],EAX      ; 005a7501
    PUSH 0x40c90fdb                     ; 005a7504
    FLD float ptr [EBP + 0x76]          ; 005a7509
    PUSH 0x0                            ; 005a750c
    FSTP float ptr [EBP + 0x52]         ; 005a750e
    CALL FUN_0040cf60                   ; 005a7511
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 005a7516
    MOV dword ptr [EBP + 0x76],EAX      ; 005a7519
    PUSH 0x40c90fdb                     ; 005a751c
    FLD float ptr [EBP + 0x76]          ; 005a7521
    PUSH 0x0                            ; 005a7524
    FSTP float ptr [EBP + 0x46]         ; 005a7526
    CALL FUN_0040cf60                   ; 005a7529
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a752e
    MOV EAX,dword ptr [EBP + 0x52]      ; 005a7531
    FLD float ptr [EBP + 0x76]          ; 005a7534
    MOV dword ptr [EBP + 0xe],EAX       ; 005a7537
    MOV EAX,dword ptr [EBP + 0x46]      ; 005a753a
    FSTP float ptr [EBP + 0x4a]         ; 005a753d
    MOV dword ptr [EBP + 0x12],EAX      ; 005a7540
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005a7543
    ADD ESP,0x8                         ; 005a7546
    MOV dword ptr [EBP + 0x16],EAX      ; 005a7549
    LEA EAX,[EBP + 0xe]                 ; 005a754c
    PUSH EAX                            ; 005a754f
    LEA ESI,[EBP + 0xfffffe62]          ; 005a7550
    LEA EDI,[EBP + 0xfffffe72]          ; 005a7556
    CALL FUN_00594380                   ; 005a755c
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    LEA ESI,[EBP + 0xfffffe62]          ; 005a7561
    LEA EAX,[EBP + 0xfffffe72]          ; 005a7567
    ADD ESP,0x4                         ; 005a756d
    MOVSD ES:EDI,ESI                    ; 005a7570
    MOVSD ES:EDI,ESI                    ; 005a7571
    MOVSD ES:EDI,ESI                    ; 005a7572
    MOVSD ES:EDI,ESI                    ; 005a7573
    PUSH EAX                            ; 005a7574
    LEA ESI,[EBP + 0xfffffe02]          ; 005a7575
    CALL FUN_00593a10                   ; 005a757b
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00593a10()
    ADD ESP,0x4                         ; 005a7580
    LEA EAX,[EBP + 0xfffffdd2]          ; 005a7583
    LEA EDI,[EBP + 0xfffffdd2]          ; 005a7589
    PUSH EAX                            ; 005a758f
    MOV ECX,0xc                         ; 005a7590
    LEA ESI,[EBP + 0xfffffe02]          ; 005a7595
    PUSH 0x3f000000                     ; 005a759b
    MOVSD.REP ES:EDI,ESI                ; 005a75a0
    PUSH 0x3e4ccccd                     ; 005a75a2
    LEA ESI,[EBP + 0xffffff2a]          ; 005a75a7
    CALL FUN_0040cf60                   ; 005a75ad
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a75b2
    LEA EDI,[EBP + 0xfffffe8e]          ; 005a75b5
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a75bb
    MOV dword ptr [EBP + 0x4e],EAX      ; 005a75be
    MOV EAX,dword ptr [EBP + 0x4e]      ; 005a75c1
    ADD ESP,0x8                         ; 005a75c4
    MOV dword ptr [EBP + -0x6],EAX      ; 005a75c7
    LEA EAX,[EBP + -0xa]                ; 005a75ca
    XOR EDX,EDX                         ; 005a75cd
    PUSH EAX                            ; 005a75cf
    MOV dword ptr [EBP + -0xa],EDX      ; 005a75d0
    MOV dword ptr [EBP + -0x2],EDX      ; 005a75d3
    CALL FUN_00591530                   ; 005a75d6
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + 0xffffff2a]          ; 005a75db
    MOVSD ES:EDI,ESI                    ; 005a75e1
    MOVSD ES:EDI,ESI                    ; 005a75e2
    MOVSD ES:EDI,ESI                    ; 005a75e3
    ADD ESP,0x8                         ; 005a75e4
    FLD float ptr [EBP + 0xfffffe8e]    ; 005a75e7
    FLD float ptr [EBP + 0xfffffe92]    ; 005a75ed
    FLD float ptr [EBP + 0xfffffe96]    ; 005a75f3
    FXCH ST2                            ; 005a75f9
    FADD float ptr [EBP + 0xffffff4e]   ; 005a75fb
    FXCH                                ; 005a7601
    FADD float ptr [EBP + 0xffffff52]   ; 005a7603
    FXCH ST2                            ; 005a7609
    FADD float ptr [EBP + 0xffffff56]   ; 005a760b
    FXCH                                ; 005a7611
    FSTP float ptr [EBP + -0x6a]        ; 005a7613
    FXCH                                ; 005a7616
    FSTP float ptr [EBP + -0x66]        ; 005a7618
    FSTP float ptr [EBP + -0x62]        ; 005a761b
    LEA EDI,[EBP + 0xffffff36]          ; 005a761e
    LEA ESI,[EBP + -0x6a]               ; 005a7624
    PUSH 0x40000000                     ; 005a7627
    MOVSD ES:EDI,ESI                    ; 005a762c
    MOVSD ES:EDI,ESI                    ; 005a762d
    MOVSD ES:EDI,ESI                    ; 005a762e
    PUSH 0x3f800000                     ; 005a762f
    FLD float ptr [EBP + 0xffffff36]    ; 005a7634
    FLD float ptr [EBP + 0xffffff3a]    ; 005a763a
    FLD float ptr [EBP + 0xffffff3e]    ; 005a7640
    LEA EDI,[EBP + 0xfffffea6]          ; 005a7646
    LEA ESI,[EBP + -0x3a]               ; 005a764c
    FXCH ST2                            ; 005a764f
    FSUB float ptr [EBP + 0xffffff4e]   ; 005a7651
    FXCH                                ; 005a7657
    FSUB float ptr [EBP + 0xffffff52]   ; 005a7659
    FXCH ST2                            ; 005a765f
    FSUB float ptr [EBP + 0xffffff56]   ; 005a7661
    FXCH                                ; 005a7667
    FSTP float ptr [EBP + -0x3a]        ; 005a7669
    FXCH                                ; 005a766c
    FSTP float ptr [EBP + -0x36]        ; 005a766e
    FSTP float ptr [EBP + -0x32]        ; 005a7671
    MOVSD ES:EDI,ESI                    ; 005a7674
    MOVSD ES:EDI,ESI                    ; 005a7675
    MOVSD ES:EDI,ESI                    ; 005a7676
    CALL FUN_0040cf60                   ; 005a7677
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a767c
    FLD float ptr [EBP + 0xfffffea6]    ; 005a767f
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a7685
    MOV dword ptr [EBP + 0x72],EAX      ; 005a7688
    FMUL float ptr [EBP + 0x72]         ; 005a768b
    FLD float ptr [EBP + 0xfffffeaa]    ; 005a768e
    FMUL float ptr [EBP + 0x72]         ; 005a7694
    FLD float ptr [EBP + 0xfffffeae]    ; 005a7697
    FMUL float ptr [EBP + 0x72]         ; 005a769d
    FLD float ptr [EBP + 0xffffff36]    ; 005a76a0
    FLD float ptr [EBP + 0xffffff3a]    ; 005a76a6
    FLD float ptr [EBP + 0xffffff3e]    ; 005a76ac
    ADD ESP,0x8                         ; 005a76b2
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005a76b5
    FXCH ST5                            ; 005a76b8
    FSTP float ptr [EBP + 0xfffffea6]   ; 005a76ba
    FXCH ST3                            ; 005a76c0
    FSTP float ptr [EBP + 0xfffffeaa]   ; 005a76c2
    FXCH                                ; 005a76c8
    FSTP float ptr [EBP + 0xfffffeae]   ; 005a76ca
    FADD float ptr [EAX]                ; 005a76d0
    PUSH 0x0                            ; 005a76d2
    FSTP float ptr [EBP + 0xffffff36]   ; 005a76d4
    FADD float ptr [EAX + 0x4]          ; 005a76da
    PUSH 0x0                            ; 005a76dd
    FSTP float ptr [EBP + 0xffffff3a]   ; 005a76df
    FADD float ptr [EAX + 0x8]          ; 005a76e5
    LEA EAX,[EBP + 0xfffffea6]          ; 005a76e8
    FSTP float ptr [EBP + 0xffffff3e]   ; 005a76ee
    PUSH EAX                            ; 005a76f4
    LEA EAX,[EBP + 0xffffff36]          ; 005a76f5
    FLD float ptr [EBX + 0x828]         ; 005a76fb
    PUSH EAX                            ; 005a7701
    FMUL double ptr [0x005f078d]        ; 005a7702 | DAT_005f078d
    PUSH 0x3f800000                     ; 005a7708
    PUSH 0x3ee66666                     ; 005a770d
    PUSH 0x3ed26e98                     ; 005a7712
    PUSH 0x0                            ; 005a7717
    SUB ESP,0x4                         ; 005a7719
    FSTP float ptr [ESP]                ; 005a771c
    PUSH 0x0                            ; 005a771f
    SUB ESP,0x4                         ; 005a7721
    MOV EAX,dword ptr [EBX + 0x828]     ; 005a7724
    MOV dword ptr [ESP],EAX             ; 005a772a
    PUSH 0x3f333333                     ; 005a772d
    PUSH 0x3e4ccccd                     ; 005a7732
    CALL FUN_0040cf60                   ; 005a7737
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a773c
    FLD float ptr [EBP + 0x76]          ; 005a773f
    FMUL float ptr [EBX + 0x828]        ; 005a7742
    ADD ESP,0x8                         ; 005a7748
    MOV EDI,dword ptr [EBP + 0x5e]      ; 005a774b
    SUB ESP,0x4                         ; 005a774e
    MOV ESI,dword ptr [0x0061ebfc]      ; 005a7751 | DAT_0061ebfc
    FSTP float ptr [ESP]                ; 005a7757
    INC EDI                             ; 005a775a
    PUSH ESI                            ; 005a775b
    MOV dword ptr [EBP + 0x5e],EDI      ; 005a775c
    CALL FUN_005a8300                   ; 005a775f
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8300()
    ADD ESP,0x34                        ; 005a7764
    CMP EDI,0x5                         ; 005a7767
    JL 0x005a74f2                       ; 005a776a
        ;   XREF to: 005a74f2 (CONDITIONAL_JUMP)  ; LAB_005a74f2
    FLD float ptr [EBX + 0x840]         ; 005a7770
        ;   Label: LAB_005a7770
    FLDZ                                ; 005a7776
    FCOMPP                              ; 005a7778
    FNSTSW AX                           ; 005a777a
    SAHF                                ; 005a777c
    JNC 0x005a77b2                      ; 005a777d
        ;   XREF to: 005a77b2 (CONDITIONAL_JUMP)  ; LAB_005a77b2
    LEA EAX,[EBX + 0x838]               ; 005a777f
    MOV dword ptr [EBX + 0x840],0x0     ; 005a7785
    XOR EDX,EDX                         ; 005a778f
    MOV dword ptr [EBP + 0x6e],EAX      ; 005a7791
    LEA EAX,[EBX + 0x20]                ; 005a7794
    MOV dword ptr [EBP + 0x66],EDX      ; 005a7797
    MOV dword ptr [EBP + 0x62],EAX      ; 005a779a
    CALL FUN_005a7ed0                   ; 005a779d
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7ed0()
        ;   Label: LAB_005a779d
    TEST EAX,EAX                        ; 005a77a2
    JNZ 0x005a77e3                      ; 005a77a4
        ;   XREF to: 005a77e3 (CONDITIONAL_JUMP)  ; LAB_005a77e3
    MOV EAX,dword ptr [EBP + 0x66]      ; 005a77a6
        ;   Label: LAB_005a77a6
    INC EAX                             ; 005a77a9
    MOV dword ptr [EBP + 0x66],EAX      ; 005a77aa
    CMP EAX,0x64                        ; 005a77ad
    JL 0x005a779d                       ; 005a77b0
        ;   XREF to: 005a779d (CONDITIONAL_JUMP)  ; LAB_005a779d
    LEA ESP,[EBP + 0x7a]                ; 005a77b2
        ;   Label: LAB_005a77b2
    POP EBP                             ; 005a77b5
    POP EDI                             ; 005a77b6
    POP ESI                             ; 005a77b7
    POP EBX                             ; 005a77b8
    RET                                 ; 005a77b9
    PUSH EAX                            ; 005a77ba
        ;   Label: LAB_005a77ba
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005a77bb
    CALL dword ptr [ESI + 0x114]        ; 005a77c1
    ADD ESP,0x4                         ; 005a77c7
    TEST EAX,EAX                        ; 005a77ca
    JNZ 0x005a6f0d                      ; 005a77cc
        ;   XREF to: 005a6f0d (CONDITIONAL_JUMP)  ; LAB_005a6f0d
    FLD float ptr [EBX + 0x82c]         ; 005a77d2
    FADD float ptr [EBP + 0x92]         ; 005a77d8
    JMP 0x005a6f19                      ; 005a77de
        ;   XREF to: 005a6f19 (UNCONDITIONAL_JUMP)  ; LAB_005a6f19
    PUSH 0x40c90fdb                     ; 005a77e3
        ;   Label: LAB_005a77e3
    PUSH 0x0                            ; 005a77e8
    CALL FUN_0040cf60                   ; 005a77ea
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a77ef
    FLD float ptr [EBP + 0x76]          ; 005a77f2
    FLD ST0                             ; 005a77f5
    FCOS                                ; 005a77f7
    FXCH                                ; 005a77f9
    FSIN                                ; 005a77fb
    FXCH                                ; 005a77fd
    FLD double ptr [0x005f0795]         ; 005a77ff | DAT_005f0795
    FXCH                                ; 005a7805
    FMUL ST1                            ; 005a7807
    FXCH ST2                            ; 005a7809
    FMULP                               ; 005a780b
    FXCH                                ; 005a780d
    FST float ptr [EBP + 0x76]          ; 005a780f
    FLD float ptr [0x005f079d]          ; 005a7812 | DAT_005f079d
    FXCH                                ; 005a7818
    FMUL ST1                            ; 005a781a
    FXCH ST2                            ; 005a781c
    FST float ptr [EBP + 0x56]          ; 005a781e
    FMULP                               ; 005a7821
    LEA EDI,[EBP + 0xffffff72]          ; 005a7823
    XOR ECX,ECX                         ; 005a7829
    LEA ESI,[EBP + 0x1a]                ; 005a782b
    MOV dword ptr [EBP + 0xffffff5e],ECX ; 005a782e
    MOV EAX,dword ptr [EBP + 0x56]      ; 005a7834
    MOV dword ptr [EBP + 0x1e],ECX      ; 005a7837
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 005a783a
    FXCH                                ; 005a7840
    FSTP float ptr [EBP + 0x22]         ; 005a7842
    FSTP float ptr [EBP + 0x1a]         ; 005a7845
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a7848
    MOVSD ES:EDI,ESI                    ; 005a784b
    MOVSD ES:EDI,ESI                    ; 005a784c
    MOVSD ES:EDI,ESI                    ; 005a784d
    MOV dword ptr [EBP + 0xffffff62],EAX ; 005a784e
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005a7854
    FLD float ptr [EBP + 0xffffff72]    ; 005a7857
    FMUL float ptr [EAX]                ; 005a785d
    FLD float ptr [EBP + 0xffffff76]    ; 005a785f
    FMUL float ptr [EAX]                ; 005a7865
    FLD float ptr [EBP + 0xffffff7a]    ; 005a7867
    FMUL float ptr [EAX]                ; 005a786d
    ADD ESP,0x8                         ; 005a786f
    LEA EDI,[EBP + -0x46]               ; 005a7872
    LEA ESI,[EBP + -0x76]               ; 005a7875
    FXCH ST2                            ; 005a7878
    FSTP float ptr [EBP + -0x76]        ; 005a787a
    FSTP float ptr [EBP + -0x72]        ; 005a787d
    FSTP float ptr [EBP + -0x6e]        ; 005a7880
    MOVSD ES:EDI,ESI                    ; 005a7883
    MOVSD ES:EDI,ESI                    ; 005a7884
    MOVSD ES:EDI,ESI                    ; 005a7885
    PUSH 0xbf000000                     ; 005a7886
    LEA EDI,[EBP + 0xfffffeca]          ; 005a788b
    MOV ESI,0x265370c                   ; 005a7891
    PUSH 0x0                            ; 005a7896
    MOVSD ES:EDI,ESI                    ; 005a7898
    MOVSD ES:EDI,ESI                    ; 005a7899
    MOVSD ES:EDI,ESI                    ; 005a789a
    CALL FUN_0040cf60                   ; 005a789b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    FLD float ptr [EBP + 0xffffff5a]    ; 005a78a0
    MOV dword ptr [EBP + 0x76],EAX      ; 005a78a6
    FLD float ptr [EBP + 0xffffff5e]    ; 005a78a9
    FLD float ptr [EBP + 0x76]          ; 005a78af
    MOV EAX,dword ptr [EBP + 0x62]      ; 005a78b2
    FSTP float ptr [EBP + 0xfffffece]   ; 005a78b5
    FXCH                                ; 005a78bb
    FADD float ptr [EAX]                ; 005a78bd
    FLD float ptr [EBP + 0xffffff62]    ; 005a78bf
    FXCH                                ; 005a78c5
    FSTP float ptr [EBP + 0xffffff5a]   ; 005a78c7
    FXCH                                ; 005a78cd
    FADD float ptr [EAX + 0x4]          ; 005a78cf
    ADD ESP,0x8                         ; 005a78d2
    FSTP float ptr [EBP + 0xffffff5e]   ; 005a78d5
    FADD float ptr [EAX + 0x8]          ; 005a78db
    PUSH 0x0                            ; 005a78de
    FSTP float ptr [EBP + 0xffffff62]   ; 005a78e0
    LEA EAX,[EBP + 0xfffffeca]          ; 005a78e6
    FLD float ptr [EBX + 0x838]         ; 005a78ec
    FLD ST0                             ; 005a78f2
    PUSH EAX                            ; 005a78f4
    LEA EAX,[EBP + -0x46]               ; 005a78f5
    FMUL double ptr [0x005f0785]        ; 005a78f8 | DAT_005f0785
    PUSH EAX                            ; 005a78fe
    LEA EAX,[EBP + 0xffffff5a]          ; 005a78ff
    PUSH EAX                            ; 005a7905
    FXCH                                ; 005a7906
    FMUL double ptr [0x005f07a5]        ; 005a7908 | DAT_005f07a5
    PUSH 0x3f800000                     ; 005a790e
    PUSH 0x3f4ccccd                     ; 005a7913
    PUSH 0x3f4ccccd                     ; 005a7918
    PUSH 0x0                            ; 005a791d
    SUB ESP,0x4                         ; 005a791f
    FXCH                                ; 005a7922
    FSTP float ptr [ESP]                ; 005a7924
    PUSH 0x0                            ; 005a7927
    SUB ESP,0x4                         ; 005a7929
    MOV EAX,dword ptr [EBX + 0x838]     ; 005a792c
    MOV dword ptr [ESP],EAX             ; 005a7932
    SUB ESP,0x4                         ; 005a7935
    MOV EDI,dword ptr [0x0061ebfc]      ; 005a7938 | DAT_0061ebfc
    FSTP float ptr [ESP]                ; 005a793e
    PUSH EDI                            ; 005a7941
    CALL FUN_005a8300                   ; 005a7942
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8300()
    ADD ESP,0x34                        ; 005a7947
    JMP 0x005a77a6                      ; 005a794a
        ;   XREF to: 005a77a6 (UNCONDITIONAL_JUMP)  ; LAB_005a77a6

