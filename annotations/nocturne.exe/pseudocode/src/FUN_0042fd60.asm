; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042fd60(int param_1,int param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAA_FUN_0042f600 at 0042f7d4
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c0062c
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00638
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00644
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fd60
        ;   Label: FUN_0042fd60
    PUSH ESI                            ; 0042fd61
    PUSH EDI                            ; 0042fd62
    PUSH EBP                            ; 0042fd63
    MOV EBP,ESP                         ; 0042fd64
    SUB ESP,0x3c                        ; 0042fd66
    AND ESP,0xfffffff8                  ; 0042fd69
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042fd6c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042fd6f
    CMP EDX,dword ptr [0x01c00c58]      ; 0042fd72 | DAT_01c00c58
    JL 0x0042ff6b                       ; 0042fd78
        ;   XREF to: 0042ff6b (CONDITIONAL_JUMP)  ; LAB_0042ff6b
    CMP EDX,dword ptr [0x01c00c60]      ; 0042fd7e | DAT_01c00c60
    JG 0x0042ff6b                       ; 0042fd84
        ;   XREF to: 0042ff6b (CONDITIONAL_JUMP)  ; LAB_0042ff6b
    CMP ESI,dword ptr [0x01c00c5c]      ; 0042fd8a | DAT_01c00c5c
    JL 0x0042ff6b                       ; 0042fd90
        ;   XREF to: 0042ff6b (CONDITIONAL_JUMP)  ; LAB_0042ff6b
    CMP ESI,dword ptr [0x01c00c64]      ; 0042fd96 | DAT_01c00c64
    JG 0x0042ff6b                       ; 0042fd9c
        ;   XREF to: 0042ff6b (CONDITIONAL_JUMP)  ; LAB_0042ff6b
    MOV EBX,dword ptr [0x005b7624]      ; 0042fda2 | DAT_005b7624
    LEA ECX,[ESI*0x4 + 0x0]             ; 0042fda8
    CMP EBX,0x8                         ; 0042fdaf
    JZ 0x0042ff72                       ; 0042fdb2
        ;   XREF to: 0042ff72 (CONDITIONAL_JUMP)  ; LAB_0042ff72
    CMP EBX,0x10                        ; 0042fdb8
    JZ 0x0043008e                       ; 0042fdbb
        ;   XREF to: 0043008e (CONDITIONAL_JUMP)  ; LAB_0043008e
    LEA EBX,[EDX*0x4 + 0x0]             ; 0042fdc1
    MOV EAX,dword ptr [ECX + 0x1bd2fa0] ; 0042fdc8
    ADD EBX,EAX                         ; 0042fdce
    MOV CL,byte ptr [0x01c00624]        ; 0042fdd0 | DAT_01c00624
    MOV EAX,dword ptr [EBX]             ; 0042fdd6
    SHR EAX,CL                          ; 0042fdd8
    MOV CL,byte ptr [0x01c0062c]        ; 0042fdda | DAT_01c0062c
    SHL EAX,CL                          ; 0042fde0
    XOR ECX,ECX                         ; 0042fde2
    AND EAX,0xff                        ; 0042fde4
    MOV dword ptr [ESP + 0x20],ECX      ; 0042fde9
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042fded
    FILD qword ptr [ESP + 0x1c]         ; 0042fdf1
    MOV CL,byte ptr [0x01c00630]        ; 0042fdf5 | DAT_01c00630
    MOV EAX,dword ptr [EBX]             ; 0042fdfb
    FLD float ptr [EBP + 0x1c]          ; 0042fdfd
    FXCH                                ; 0042fe00
    FMUL ST1                            ; 0042fe02
    SHR EAX,CL                          ; 0042fe04
    MOV CL,byte ptr [0x01c00638]        ; 0042fe06 | DAT_01c00638
    SHL EAX,CL                          ; 0042fe0c
    XOR EDI,EDI                         ; 0042fe0e
    AND EAX,0xff                        ; 0042fe10
    MOV dword ptr [ESP + 0x20],EDI      ; 0042fe15
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042fe19
    MOV CL,byte ptr [0x01c0063c]        ; 0042fe1d | DAT_01c0063c
    FILD qword ptr [ESP + 0x1c]         ; 0042fe23
    MOV EAX,dword ptr [EBX]             ; 0042fe27
    FMUL ST2                            ; 0042fe29
        ;   Label: LAB_0042fe29
    SHR EAX,CL                          ; 0042fe2b
    MOV CL,byte ptr [0x01c00644]        ; 0042fe2d | DAT_01c00644
    SHL EAX,CL                          ; 0042fe33
    AND EAX,0xff                        ; 0042fe35
    MOV dword ptr [ESP + 0x20],EDI      ; 0042fe3a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042fe3e
    FILD qword ptr [ESP + 0x1c]         ; 0042fe42
    FMULP ST3                           ; 0042fe46
    FXCH                                ; 0042fe48
    FSTP float ptr [ESP]                ; 0042fe4a
    FSTP float ptr [ESP + 0x8]          ; 0042fe4d
    FSTP float ptr [ESP + 0x4]          ; 0042fe51
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042fe55
    LEA ECX,[EAX*0x4 + 0x0]             ; 0042fe58
    SUB ECX,EAX                         ; 0042fe5f
    XOR EAX,EAX                         ; 0042fe61
    MOV AL,byte ptr [ECX + 0x1c00648]   ; 0042fe63
    MOV dword ptr [ESP + 0x34],EAX      ; 0042fe69
    FILD word ptr [ESP + 0x34]          ; 0042fe6d
    FLD float ptr [EBP + 0x1c]          ; 0042fe71
    XOR EAX,EAX                         ; 0042fe74
    FLD1                                ; 0042fe76
    MOV AL,byte ptr [ECX + 0x1c00649]   ; 0042fe78
    FSUBRP                              ; 0042fe7e
    MOV dword ptr [ESP + 0x34],EAX      ; 0042fe80
    FXCH                                ; 0042fe84
    FMUL ST1                            ; 0042fe86
    FILD word ptr [ESP + 0x34]          ; 0042fe88
    XOR EAX,EAX                         ; 0042fe8c
    FMUL ST2                            ; 0042fe8e
    MOV AL,byte ptr [ECX + 0x1c0064a]   ; 0042fe90
    MOV dword ptr [ESP + 0x34],EAX      ; 0042fe96
    FILD word ptr [ESP + 0x34]          ; 0042fe9a
    FMULP ST3                           ; 0042fe9e
    FLD float ptr [ESP]                 ; 0042fea0
    FLD float ptr [ESP + 0x8]           ; 0042fea3
    MOV CL,byte ptr [0x01c0062c]        ; 0042fea7 | DAT_01c0062c
    FXCH ST3                            ; 0042fead
    FADD ST0,ST1                        ; 0042feaf
    FXCH ST2                            ; 0042feb1
    FADD ST0,ST3                        ; 0042feb3
    FXCH ST2                            ; 0042feb5
    FSTP ST1                            ; 0042feb7
    FXCH                                ; 0042feb9
    FSTP ST2                            ; 0042febb
    FLD float ptr [ESP + 0x4]           ; 0042febd
    FXCH                                ; 0042fec1
    FSTP float ptr [ESP]                ; 0042fec3
    FXCH                                ; 0042fec6
    FST float ptr [ESP + 0x8]           ; 0042fec8
    FLD float ptr [ESP]                 ; 0042fecc
    CALL crt_math.c_round_FUN_00563a30  ; 0042fecf
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0042fed4
    CALL crt_math.c_round_FUN_00563a30  ; 0042fed6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 0042fedb
    FADD ST0,ST2                        ; 0042fedd
    FXCH                                ; 0042fedf
    FISTP qword ptr [ESP + 0x14]        ; 0042fee1
    FXCH ST2                            ; 0042fee5
    FISTP qword ptr [ESP + 0xc]         ; 0042fee7
    FXCH                                ; 0042feeb
    FSTP ST1                            ; 0042feed
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042feef
    MOV EDI,dword ptr [ESP + 0xc]       ; 0042fef3
    FST float ptr [ESP + 0x4]           ; 0042fef7
    SHR EAX,CL                          ; 0042fefb
    CALL crt_math.c_round_FUN_00563a30  ; 0042fefd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV CL,byte ptr [0x01c00638]        ; 0042ff02 | DAT_01c00638
    FISTP qword ptr [ESP + 0x1c]        ; 0042ff08
    SHR EDI,CL                          ; 0042ff0c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042ff0e
    MOV dword ptr [ESP + 0x28],ECX      ; 0042ff12
    MOV EBX,dword ptr [ESP + 0x28]      ; 0042ff16
    MOV CL,byte ptr [0x01c00644]        ; 0042ff1a | DAT_01c00644
    SHR EBX,CL                          ; 0042ff20
    LEA ECX,[ESI*0x4 + 0x0]             ; 0042ff22
    CMP dword ptr [0x005b7624],0x10     ; 0042ff29 | DAT_005b7624
    JNZ 0x004300fb                      ; 0042ff30
        ;   XREF to: 004300fb (CONDITIONAL_JUMP)  ; LAB_004300fb
    MOV ECX,dword ptr [ECX + 0x1bd2fa0] ; 0042ff36
    ADD EDX,EDX                         ; 0042ff3c
    ADD ECX,EDX                         ; 0042ff3e
    MOV dword ptr [ESP + 0x24],ECX      ; 0042ff40
    MOV EDX,EAX                         ; 0042ff44
    MOV CL,byte ptr [0x01c00624]        ; 0042ff46 | DAT_01c00624
    MOV EAX,EDI                         ; 0042ff4c
    SHL EDX,CL                          ; 0042ff4e
    MOV CL,byte ptr [0x01c00630]        ; 0042ff50 | DAT_01c00630
    SHL EAX,CL                          ; 0042ff56
    MOV CL,byte ptr [0x01c0063c]        ; 0042ff58 | DAT_01c0063c
    OR EAX,EDX                          ; 0042ff5e
    SHL EBX,CL                          ; 0042ff60
    MOV EDX,dword ptr [ESP + 0x24]      ; 0042ff62
    OR EAX,EBX                          ; 0042ff66
    MOV word ptr [EDX],AX               ; 0042ff68
    MOV ESP,EBP                         ; 0042ff6b
        ;   Label: LAB_0042ff6b
    POP EBP                             ; 0042ff6d
    POP EDI                             ; 0042ff6e
    POP ESI                             ; 0042ff6f
    POP EBX                             ; 0042ff70
    RET                                 ; 0042ff71
    MOV EBX,dword ptr [ECX + 0x1bd2fa0] ; 0042ff72
        ;   Label: LAB_0042ff72
    ADD EBX,EDX                         ; 0042ff78
    XOR EAX,EAX                         ; 0042ff7a
    MOV AL,byte ptr [EBX]               ; 0042ff7c
    LEA ECX,[EAX*0x4 + 0x0]             ; 0042ff7e
    SUB ECX,EAX                         ; 0042ff85
    XOR EAX,EAX                         ; 0042ff87
    MOV AL,byte ptr [ECX + 0x1c00648]   ; 0042ff89
    MOV dword ptr [ESP + 0x38],EAX      ; 0042ff8f
    FILD word ptr [ESP + 0x38]          ; 0042ff93
    XOR EAX,EAX                         ; 0042ff97
    FLD float ptr [EBP + 0x1c]          ; 0042ff99
    FXCH                                ; 0042ff9c
    FMUL ST1                            ; 0042ff9e
    MOV AL,byte ptr [ECX + 0x1c00649]   ; 0042ffa0
    MOV dword ptr [ESP + 0x34],EAX      ; 0042ffa6
    XOR EAX,EAX                         ; 0042ffaa
    MOV AL,byte ptr [ECX + 0x1c0064a]   ; 0042ffac
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042ffb2
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042ffb6
    LEA ECX,[EAX*0x4 + 0x0]             ; 0042ffb9
    SUB ECX,EAX                         ; 0042ffc0
    XOR EAX,EAX                         ; 0042ffc2
    MOV AL,byte ptr [ECX + 0x1c00648]   ; 0042ffc4
    MOV dword ptr [ESP + 0x30],EAX      ; 0042ffca
    XOR EAX,EAX                         ; 0042ffce
    FILD word ptr [ESP + 0x30]          ; 0042ffd0
    MOV AL,byte ptr [ECX + 0x1c00649]   ; 0042ffd4
    FLD ST2                             ; 0042ffda
    FLD1                                ; 0042ffdc
    MOV dword ptr [ESP + 0x30],EAX      ; 0042ffde
    FSUBRP                              ; 0042ffe2
    XOR EAX,EAX                         ; 0042ffe4
    FXCH                                ; 0042ffe6
    FMUL ST1                            ; 0042ffe8
    MOV AL,byte ptr [ECX + 0x1c0064a]   ; 0042ffea
    FLD ST2                             ; 0042fff0
    FXCH                                ; 0042fff2
    FADD ST0,ST1                        ; 0042fff4
    MOV dword ptr [ESP + 0x38],EAX      ; 0042fff6
    FSTP ST1                            ; 0042fffa
    FSTP ST2                            ; 0042fffc
    FXCH                                ; 0042fffe
    CALL crt_math.c_round_FUN_00563a30  ; 00430000
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x28]        ; 00430005
    MOV EAX,dword ptr [ESP + 0x28]      ; 00430009
    MOV EDX,EAX                         ; 0043000d
    SAR EDX,0x1f                        ; 0043000f
    SHL EDX,0x3                         ; 00430012
    SBB EAX,EDX                         ; 00430015
    SAR EAX,0x3                         ; 00430017
    FILD word ptr [ESP + 0x30]          ; 0043001a
    FMUL ST1                            ; 0043001e
    FILD word ptr [ESP + 0x34]          ; 00430020
    FMUL ST3                            ; 00430024
    FADD ST1,ST0                        ; 00430026
    FXCH                                ; 00430028
    FSTP ST1                            ; 0043002a
    CALL crt_math.c_round_FUN_00563a30  ; 0043002c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x28]        ; 00430031
    MOV ECX,EAX                         ; 00430035
    MOV EAX,dword ptr [ESP + 0x28]      ; 00430037
    MOV EDX,EAX                         ; 0043003b
    SAR EDX,0x1f                        ; 0043003d
    SHL EDX,0x3                         ; 00430040
    SBB EAX,EDX                         ; 00430043
    SAR EAX,0x3                         ; 00430045
    FILD word ptr [ESP + 0x38]          ; 00430048
    FMULP                               ; 0043004c
    FILD word ptr [ESP + 0x2c]          ; 0043004e
    FMULP ST2                           ; 00430052
    FADDP                               ; 00430054
    CALL crt_math.c_round_FUN_00563a30  ; 00430056
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    SHL ECX,0xa                         ; 0043005b
    SHL EAX,0x5                         ; 0043005e
    FISTP dword ptr [ESP + 0x28]        ; 00430061
    ADD ECX,EAX                         ; 00430065
    MOV EAX,dword ptr [ESP + 0x28]      ; 00430067
    MOV EDX,EAX                         ; 0043006b
    SAR EDX,0x1f                        ; 0043006d
    SHL EDX,0x3                         ; 00430070
    SBB EAX,EDX                         ; 00430073
    SAR EAX,0x3                         ; 00430075
    MOV CL,byte ptr [ECX + EAX*0x1 + 0x1bf7720] ; 00430078
    AND ECX,0xff                        ; 0043007f
    MOV byte ptr [EBX],CL               ; 00430085
    MOV ESP,EBP                         ; 00430087
    POP EBP                             ; 00430089
    POP EDI                             ; 0043008a
    POP ESI                             ; 0043008b
    POP EBX                             ; 0043008c
    RET                                 ; 0043008d
    MOV EAX,dword ptr [ECX + 0x1bd2fa0] ; 0043008e
        ;   Label: LAB_0043008e
    MOV AX,word ptr [EAX + EDX*0x2]     ; 00430094
    AND EAX,0xffff                      ; 00430098
    MOV CL,byte ptr [0x01c00624]        ; 0043009d | DAT_01c00624
    MOV EBX,EAX                         ; 004300a3
    SHR EBX,CL                          ; 004300a5
    MOV CL,byte ptr [0x01c0062c]        ; 004300a7 | DAT_01c0062c
    SHL EBX,CL                          ; 004300ad
    XOR EDI,EDI                         ; 004300af
    AND EBX,0xff                        ; 004300b1
    MOV dword ptr [ESP + 0x20],EDI      ; 004300b7
    MOV dword ptr [ESP + 0x1c],EBX      ; 004300bb
    MOV CL,byte ptr [0x01c00630]        ; 004300bf | DAT_01c00630
    FILD qword ptr [ESP + 0x1c]         ; 004300c5
    MOV EBX,EAX                         ; 004300c9
    FLD float ptr [EBP + 0x1c]          ; 004300cb
    FXCH                                ; 004300ce
    FMUL ST1                            ; 004300d0
    SHR EBX,CL                          ; 004300d2
    MOV CL,byte ptr [0x01c00638]        ; 004300d4 | DAT_01c00638
    SHL EBX,CL                          ; 004300da
    MOV ECX,EBX                         ; 004300dc
    AND ECX,0xff                        ; 004300de
    MOV dword ptr [ESP + 0x20],EDI      ; 004300e4
    MOV dword ptr [ESP + 0x1c],ECX      ; 004300e8
    FILD qword ptr [ESP + 0x1c]         ; 004300ec
    MOV CL,byte ptr [0x01c0063c]        ; 004300f0 | DAT_01c0063c
    JMP 0x0042fe29                      ; 004300f6
        ;   XREF to: 0042fe29 (UNCONDITIONAL_JUMP)  ; LAB_0042fe29
    SHL EDX,0x2                         ; 004300fb
        ;   Label: LAB_004300fb
    MOV dword ptr [ESP + 0x28],EDX      ; 004300fe
    MOV EDX,dword ptr [ECX + 0x1bd2fa0] ; 00430102
    ADD EDX,dword ptr [ESP + 0x28]      ; 00430108
    MOV CL,byte ptr [0x01c00624]        ; 0043010c | DAT_01c00624
    SHL EAX,CL                          ; 00430112
    MOV CL,byte ptr [0x01c00630]        ; 00430114 | DAT_01c00630
    SHL EDI,CL                          ; 0043011a
    MOV CL,byte ptr [0x01c0063c]        ; 0043011c | DAT_01c0063c
    OR EAX,EDI                          ; 00430122
    SHL EBX,CL                          ; 00430124
    OR EAX,EBX                          ; 00430126
    MOV dword ptr [EDX],EAX             ; 00430128
    MOV ESP,EBP                         ; 0043012a
    POP EBP                             ; 0043012c
    POP EDI                             ; 0043012d
    POP ESI                             ; 0043012e
    POP EBX                             ; 0043012f
    RET                                 ; 00430130

