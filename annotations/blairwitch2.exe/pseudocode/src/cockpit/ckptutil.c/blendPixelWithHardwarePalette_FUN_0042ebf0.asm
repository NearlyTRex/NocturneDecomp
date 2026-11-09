; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x,int y,float alpha,int color)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; float            Stack[0xc]:4   alpha
; int              Stack[0x10]:4   color
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042e660 at 0042e7e3
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c3581c
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35828
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35834
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ebf0
        ;   Label: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0
    PUSH ESI                            ; 0042ebf1
    PUSH EDI                            ; 0042ebf2
    PUSH EBP                            ; 0042ebf3
    MOV EBP,ESP                         ; 0042ebf4
    SUB ESP,0x2c                        ; 0042ebf6
    AND ESP,0xfffffff8                  ; 0042ebf9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ebfc
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042ebff
    MOV EDI,dword ptr [EBP + 0x20]      ; 0042ec02
    CMP EAX,dword ptr [0x01c35e48]      ; 0042ec05 | DAT_01c35e48
    JL 0x0042ee39                       ; 0042ec0b
        ;   XREF to: 0042ee39 (CONDITIONAL_JUMP)  ; LAB_0042ee39
    CMP EAX,dword ptr [0x01c35e50]      ; 0042ec11 | DAT_01c35e50
    JG 0x0042ee39                       ; 0042ec17
        ;   XREF to: 0042ee39 (CONDITIONAL_JUMP)  ; LAB_0042ee39
    CMP ESI,dword ptr [0x01c35e4c]      ; 0042ec1d | DAT_01c35e4c
    JL 0x0042ee39                       ; 0042ec23
        ;   XREF to: 0042ee39 (CONDITIONAL_JUMP)  ; LAB_0042ee39
    CMP ESI,dword ptr [0x01c35e54]      ; 0042ec29 | DAT_01c35e54
    JG 0x0042ee39                       ; 0042ec2f
        ;   XREF to: 0042ee39 (CONDITIONAL_JUMP)  ; LAB_0042ee39
    MOV ECX,dword ptr [0x006141c0]      ; 0042ec35 | DAT_006141c0
    CMP ECX,0x8                         ; 0042ec3b
    JZ 0x0042ee39                       ; 0042ec3e
        ;   XREF to: 0042ee39 (CONDITIONAL_JUMP)  ; LAB_0042ee39
    LEA EDX,[ESI*0x4 + 0x0]             ; 0042ec44
    CMP ECX,0x10                        ; 0042ec4b
    JZ 0x0042ee40                       ; 0042ec4e
        ;   XREF to: 0042ee40 (CONDITIONAL_JUMP)  ; LAB_0042ee40
    LEA EBX,[EAX*0x4 + 0x0]             ; 0042ec54
    MOV EDX,dword ptr [EDX + 0x1c2a38c] ; 0042ec5b
    ADD EBX,EDX                         ; 0042ec61
    MOV CL,byte ptr [0x01c35814]        ; 0042ec63 | DAT_01c35814
    MOV EDX,dword ptr [EBX]             ; 0042ec69
    SHR EDX,CL                          ; 0042ec6b
    XOR ECX,ECX                         ; 0042ec6d
    AND EDX,0xff                        ; 0042ec6f
    MOV dword ptr [ESP + 0x14],ECX      ; 0042ec75
    MOV dword ptr [ESP + 0x10],EDX      ; 0042ec79
    FILD qword ptr [ESP + 0x10]         ; 0042ec7d
    MOV CL,byte ptr [0x01c35820]        ; 0042ec81 | DAT_01c35820
    MOV EDX,dword ptr [EBX]             ; 0042ec87
    FLD float ptr [EBP + 0x1c]          ; 0042ec89
    FXCH                                ; 0042ec8c
    FMUL ST1                            ; 0042ec8e
    SHR EDX,CL                          ; 0042ec90
    XOR ECX,ECX                         ; 0042ec92
    AND EDX,0xff                        ; 0042ec94
    MOV dword ptr [ESP + 0x14],ECX      ; 0042ec9a
    MOV dword ptr [ESP + 0x10],EDX      ; 0042ec9e
    FILD qword ptr [ESP + 0x10]         ; 0042eca2
    MOV CL,byte ptr [0x01c3582c]        ; 0042eca6 | DAT_01c3582c
    MOV EDX,dword ptr [EBX]             ; 0042ecac
    FMUL ST2                            ; 0042ecae
    SHR EDX,CL                          ; 0042ecb0
    XOR EBX,EBX                         ; 0042ecb2
    AND EDX,0xff                        ; 0042ecb4
    MOV dword ptr [ESP + 0x24],EBX      ; 0042ecba
    MOV dword ptr [ESP + 0x20],EDX      ; 0042ecbe
    FILD qword ptr [ESP + 0x20]         ; 0042ecc2
    FMULP ST3                           ; 0042ecc6
        ;   Label: LAB_0042ecc6
    FXCH                                ; 0042ecc8
    FSTP float ptr [ESP + 0x4]          ; 0042ecca
    FSTP float ptr [ESP]                ; 0042ecce
    FSTP float ptr [ESP + 0xc]          ; 0042ecd1
    CMP dword ptr [0x006141c0],0x10     ; 0042ecd5 | DAT_006141c0
    JNZ 0x0042eece                      ; 0042ecdc
        ;   XREF to: 0042eece (CONDITIONAL_JUMP)  ; LAB_0042eece
    MOV DX,word ptr [EDI*0x2 + 0x1c35614] ; 0042ece2
    AND EDX,0xffff                      ; 0042ecea
    MOV CL,byte ptr [0x01c35814]        ; 0042ecf0 | DAT_01c35814
    MOV EBX,EDX                         ; 0042ecf6
    SHR EBX,CL                          ; 0042ecf8
    MOV CL,byte ptr [0x01c3581c]        ; 0042ecfa | DAT_01c3581c
    SHL EBX,CL                          ; 0042ed00
    MOV ECX,EBX                         ; 0042ed02
    AND ECX,0xff                        ; 0042ed04
    MOV EDI,EDX                         ; 0042ed0a
    MOV dword ptr [ESP + 0x8],ECX       ; 0042ed0c
    MOV CL,byte ptr [0x01c35820]        ; 0042ed10 | DAT_01c35820
    SHR EDI,CL                          ; 0042ed16
    MOV CL,byte ptr [0x01c35828]        ; 0042ed18 | DAT_01c35828
    SHL EDI,CL                          ; 0042ed1e
    MOV CL,byte ptr [0x01c3582c]        ; 0042ed20 | DAT_01c3582c
    SHR EDX,CL                          ; 0042ed26
    MOV CL,byte ptr [0x01c35834]        ; 0042ed28 | DAT_01c35834
    SHL EDX,CL                          ; 0042ed2e
    MOV ECX,EDX                         ; 0042ed30
        ;   Label: LAB_0042ed30
    AND EDI,0xff                        ; 0042ed32
    AND ECX,0xff                        ; 0042ed38
    FLD float ptr [EBP + 0x1c]          ; 0042ed3e
    XOR EBX,EBX                         ; 0042ed41
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042ed43
    MOV dword ptr [ESP + 0x24],EBX      ; 0042ed47
    MOV dword ptr [ESP + 0x20],EDX      ; 0042ed4b
    FLD1                                ; 0042ed4f
    FILD qword ptr [ESP + 0x20]         ; 0042ed51
    FXCH                                ; 0042ed55
    FSUBRP ST2,ST0                      ; 0042ed57
    FMUL ST1                            ; 0042ed59
    MOV dword ptr [ESP + 0x18],EDI      ; 0042ed5b
    MOV dword ptr [ESP + 0x10],ECX      ; 0042ed5f
    MOV dword ptr [ESP + 0x1c],EBX      ; 0042ed63
    MOV dword ptr [ESP + 0x14],EBX      ; 0042ed67
    FILD qword ptr [ESP + 0x18]         ; 0042ed6b
    FMUL ST2                            ; 0042ed6f
    FILD qword ptr [ESP + 0x10]         ; 0042ed71
    FMULP ST3                           ; 0042ed75
    SHL ESI,0x2                         ; 0042ed77
    MOV EDI,dword ptr [0x006141c0]      ; 0042ed7a | DAT_006141c0
    FLD float ptr [ESP + 0x4]           ; 0042ed80
    FLD float ptr [ESP]                 ; 0042ed84
    FLD float ptr [ESP + 0xc]           ; 0042ed87
    FXCH ST4                            ; 0042ed8b
    FADD ST0,ST2                        ; 0042ed8d
    FXCH ST3                            ; 0042ed8f
    FADD ST0,ST1                        ; 0042ed91
    FXCH ST5                            ; 0042ed93
    FADD ST0,ST4                        ; 0042ed95
    FXCH ST3                            ; 0042ed97
    FSTP ST2                            ; 0042ed99
    FXCH ST4                            ; 0042ed9b
    FSTP ST4                            ; 0042ed9d
    FXCH                                ; 0042ed9f
    FSTP ST2                            ; 0042eda1
    FSTP float ptr [ESP + 0x4]          ; 0042eda3
    FXCH                                ; 0042eda7
    FSTP float ptr [ESP]                ; 0042eda9
    FSTP float ptr [ESP + 0xc]          ; 0042edac
    CMP EDI,0x10                        ; 0042edb0
    JNZ 0x0042ef0e                      ; 0042edb3
        ;   XREF to: 0042ef0e (CONDITIONAL_JUMP)  ; LAB_0042ef0e
    FLD float ptr [ESP + 0x4]           ; 0042edb9
    FLD float ptr [ESP]                 ; 0042edbd
    FLD float ptr [ESP + 0xc]           ; 0042edc0
    MOV CL,byte ptr [0x01c3581c]        ; 0042edc4 | DAT_01c3581c
    FXCH ST2                            ; 0042edca
    CALL crt_math.c_round_FUN_005b7ff0  ; 0042edcc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0042edd1
    CALL crt_math.c_round_FUN_005b7ff0  ; 0042edd3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0042edd8
    CALL crt_math.c_round_FUN_005b7ff0  ; 0042edda
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0042eddf
    FISTP qword ptr [ESP + 0x10]        ; 0042ede1
    FXCH                                ; 0042ede5
    FISTP qword ptr [ESP + 0x20]        ; 0042ede7
    FISTP qword ptr [ESP + 0x18]        ; 0042edeb
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042edef
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042edf3
    SHR EDI,CL                          ; 0042edf7
    MOV CL,byte ptr [0x01c35828]        ; 0042edf9 | DAT_01c35828
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042edff
    SHR EDX,CL                          ; 0042ee03
    MOV CL,byte ptr [0x01c35834]        ; 0042ee05 | DAT_01c35834
    SHR EBX,CL                          ; 0042ee0b
    LEA ECX,[EAX + EAX*0x1]             ; 0042ee0d
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 0042ee10
    MOV ESI,EDI                         ; 0042ee16
    ADD EAX,ECX                         ; 0042ee18
    MOV CL,byte ptr [0x01c35814]        ; 0042ee1a | DAT_01c35814
    SHL ESI,CL                          ; 0042ee20
    MOV CL,byte ptr [0x01c35820]        ; 0042ee22 | DAT_01c35820
    SHL EDX,CL                          ; 0042ee28
    MOV CL,byte ptr [0x01c3582c]        ; 0042ee2a | DAT_01c3582c
    OR EDX,ESI                          ; 0042ee30
    SHL EBX,CL                          ; 0042ee32
    OR EDX,EBX                          ; 0042ee34
    MOV word ptr [EAX],DX               ; 0042ee36
    MOV ESP,EBP                         ; 0042ee39
        ;   Label: LAB_0042ee39
    POP EBP                             ; 0042ee3b
    POP EDI                             ; 0042ee3c
    POP ESI                             ; 0042ee3d
    POP EBX                             ; 0042ee3e
    RET                                 ; 0042ee3f
    MOV EDX,dword ptr [EDX + 0x1c2a38c] ; 0042ee40
        ;   Label: LAB_0042ee40
    MOV DX,word ptr [EDX + EAX*0x2]     ; 0042ee46
    AND EDX,0xffff                      ; 0042ee4a
    MOV CL,byte ptr [0x01c35814]        ; 0042ee50 | DAT_01c35814
    MOV EBX,EDX                         ; 0042ee56
    SHR EBX,CL                          ; 0042ee58
    MOV CL,byte ptr [0x01c3581c]        ; 0042ee5a | DAT_01c3581c
    SHL EBX,CL                          ; 0042ee60
    XOR ECX,ECX                         ; 0042ee62
    AND EBX,0xff                        ; 0042ee64
    MOV dword ptr [ESP + 0x14],ECX      ; 0042ee6a
    MOV dword ptr [ESP + 0x10],EBX      ; 0042ee6e
    FILD qword ptr [ESP + 0x10]         ; 0042ee72
    MOV CL,byte ptr [0x01c35820]        ; 0042ee76 | DAT_01c35820
    MOV EBX,EDX                         ; 0042ee7c
    FLD float ptr [EBP + 0x1c]          ; 0042ee7e
    FXCH                                ; 0042ee81
    FMUL ST1                            ; 0042ee83
    SHR EBX,CL                          ; 0042ee85
    MOV CL,byte ptr [0x01c35828]        ; 0042ee87 | DAT_01c35828
    SHL EBX,CL                          ; 0042ee8d
    XOR ECX,ECX                         ; 0042ee8f
    AND EBX,0xff                        ; 0042ee91
    MOV dword ptr [ESP + 0x14],ECX      ; 0042ee97
    MOV dword ptr [ESP + 0x10],EBX      ; 0042ee9b
    FILD qword ptr [ESP + 0x10]         ; 0042ee9f
    MOV CL,byte ptr [0x01c3582c]        ; 0042eea3 | DAT_01c3582c
    FMUL ST2                            ; 0042eea9
    SHR EDX,CL                          ; 0042eeab
    MOV CL,byte ptr [0x01c35834]        ; 0042eead | DAT_01c35834
    SHL EDX,CL                          ; 0042eeb3
    XOR EBX,EBX                         ; 0042eeb5
    AND EDX,0xff                        ; 0042eeb7
    MOV dword ptr [ESP + 0x14],EBX      ; 0042eebd
    MOV dword ptr [ESP + 0x10],EDX      ; 0042eec1
    FILD qword ptr [ESP + 0x10]         ; 0042eec5
    JMP 0x0042ecc6                      ; 0042eec9
        ;   XREF to: 0042ecc6 (UNCONDITIONAL_JUMP)  ; LAB_0042ecc6
    LEA EBX,[EDI*0x4 + 0x0]             ; 0042eece
        ;   Label: LAB_0042eece
    MOV CL,byte ptr [0x01c35814]        ; 0042eed5 | DAT_01c35814
    MOV EDX,dword ptr [EBX + 0x1c35214] ; 0042eedb
    SHR EDX,CL                          ; 0042eee1
    MOV EDI,dword ptr [EBX + 0x1c35214] ; 0042eee3
    AND EDX,0xff                        ; 0042eee9
    MOV CL,byte ptr [0x01c35820]        ; 0042eeef | DAT_01c35820
    MOV dword ptr [ESP + 0x8],EDX       ; 0042eef5
    SHR EDI,CL                          ; 0042eef9
    MOV CL,byte ptr [0x01c3582c]        ; 0042eefb | DAT_01c3582c
    MOV EDX,dword ptr [EBX + 0x1c35214] ; 0042ef01
    SHR EDX,CL                          ; 0042ef07
    JMP 0x0042ed30                      ; 0042ef09
        ;   XREF to: 0042ed30 (UNCONDITIONAL_JUMP)  ; LAB_0042ed30
    FLD float ptr [ESP + 0x4]           ; 0042ef0e
        ;   Label: LAB_0042ef0e
    FLD float ptr [ESP]                 ; 0042ef12
    FLD float ptr [ESP + 0xc]           ; 0042ef15
    MOV CL,byte ptr [0x01c35814]        ; 0042ef19 | DAT_01c35814
    FXCH ST2                            ; 0042ef1f
    CALL crt_math.c_round_FUN_005b7ff0  ; 0042ef21
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0042ef26
    CALL crt_math.c_round_FUN_005b7ff0  ; 0042ef28
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0042ef2d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0042ef2f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    SHL EAX,0x2                         ; 0042ef34
    FXCH                                ; 0042ef37
    FISTP qword ptr [ESP + 0x18]        ; 0042ef39
    FXCH                                ; 0042ef3d
    FISTP qword ptr [ESP + 0x10]        ; 0042ef3f
    FISTP qword ptr [ESP + 0x20]        ; 0042ef43
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042ef47
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042ef4b
    MOV dword ptr [ESP + 0x28],EDX      ; 0042ef4f
    SHL EBX,CL                          ; 0042ef53
    MOV EDX,dword ptr [ESI + 0x1c2a38c] ; 0042ef55
    MOV CL,byte ptr [0x01c35820]        ; 0042ef5b | DAT_01c35820
    ADD EDX,EAX                         ; 0042ef61
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042ef63
    MOV EDI,dword ptr [ESP + 0x20]      ; 0042ef67
    SHL EAX,CL                          ; 0042ef6b
    MOV CL,byte ptr [0x01c3582c]        ; 0042ef6d | DAT_01c3582c
    OR EAX,EBX                          ; 0042ef73
    SHL EDI,CL                          ; 0042ef75
    OR EAX,EDI                          ; 0042ef77
    MOV dword ptr [EDX],EAX             ; 0042ef79
    MOV ESP,EBP                         ; 0042ef7b
    POP EBP                             ; 0042ef7d
    POP EDI                             ; 0042ef7e
    POP ESI                             ; 0042ef7f
    POP EBX                             ; 0042ef80
    RET                                 ; 0042ef81

