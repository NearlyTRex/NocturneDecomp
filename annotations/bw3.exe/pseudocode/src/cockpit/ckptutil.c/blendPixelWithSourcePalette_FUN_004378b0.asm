; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004378b0(int param_1,int param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAA_FUN_00437250 at 00437424
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af7c
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af88
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af94
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004378b0
        ;   Label: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0
    PUSH ESI                            ; 004378b1
    PUSH EDI                            ; 004378b2
    PUSH EBP                            ; 004378b3
    MOV EBP,ESP                         ; 004378b4
    SUB ESP,0x2c                        ; 004378b6
    AND ESP,0xfffffff8                  ; 004378b9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004378bc
    MOV ESI,dword ptr [EBP + 0x18]      ; 004378bf
    CMP EDX,dword ptr [0x01c6b5a8]      ; 004378c2 | DAT_01c6b5a8
    JL 0x00437ab5                       ; 004378c8
        ;   XREF to: 00437ab5 (CONDITIONAL_JUMP)  ; LAB_00437ab5
    CMP EDX,dword ptr [0x01c6b5b0]      ; 004378ce | DAT_01c6b5b0
    JG 0x00437ab5                       ; 004378d4
        ;   XREF to: 00437ab5 (CONDITIONAL_JUMP)  ; LAB_00437ab5
    CMP ESI,dword ptr [0x01c6b5ac]      ; 004378da | DAT_01c6b5ac
    JL 0x00437ab5                       ; 004378e0
        ;   XREF to: 00437ab5 (CONDITIONAL_JUMP)  ; LAB_00437ab5
    CMP ESI,dword ptr [0x01c6b5b4]      ; 004378e6 | DAT_01c6b5b4
    JG 0x00437ab5                       ; 004378ec
        ;   XREF to: 00437ab5 (CONDITIONAL_JUMP)  ; LAB_00437ab5
    MOV ECX,dword ptr [0x005fba20]      ; 004378f2 | DAT_005fba20
    CMP ECX,0x8                         ; 004378f8
    JZ 0x00437ab5                       ; 004378fb
        ;   XREF to: 00437ab5 (CONDITIONAL_JUMP)  ; LAB_00437ab5
    LEA EAX,[ESI*0x4 + 0x0]             ; 00437901
    CMP ECX,0x10                        ; 00437908
    JZ 0x00437abc                       ; 0043790b
        ;   XREF to: 00437abc (CONDITIONAL_JUMP)  ; LAB_00437abc
    LEA EBX,[EDX*0x4 + 0x0]             ; 00437911
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 00437918
    ADD EBX,EAX                         ; 0043791e
    MOV CL,byte ptr [0x01c6af74]        ; 00437920 | DAT_01c6af74
    MOV EAX,dword ptr [EBX]             ; 00437926
    SHR EAX,CL                          ; 00437928
    MOV CL,byte ptr [0x01c6af7c]        ; 0043792a | DAT_01c6af7c
    SHL EAX,CL                          ; 00437930
    XOR EDI,EDI                         ; 00437932
    AND EAX,0xff                        ; 00437934
    MOV dword ptr [ESP + 0x18],EDI      ; 00437939
    MOV dword ptr [ESP + 0x14],EAX      ; 0043793d
    MOV CL,byte ptr [0x01c6af80]        ; 00437941 | DAT_01c6af80
    FILD qword ptr [ESP + 0x14]         ; 00437947
    MOV EAX,dword ptr [EBX]             ; 0043794b
    FLD float ptr [EBP + 0x1c]          ; 0043794d
    FXCH                                ; 00437950
    FMUL ST1                            ; 00437952
    SHR EAX,CL                          ; 00437954
    MOV CL,byte ptr [0x01c6af88]        ; 00437956 | DAT_01c6af88
    SHL EAX,CL                          ; 0043795c
    AND EAX,0xff                        ; 0043795e
    MOV dword ptr [ESP + 0x18],EDI      ; 00437963
    MOV dword ptr [ESP + 0x14],EAX      ; 00437967
    MOV CL,byte ptr [0x01c6af8c]        ; 0043796b | DAT_01c6af8c
    FILD qword ptr [ESP + 0x14]         ; 00437971
    MOV EAX,dword ptr [EBX]             ; 00437975
    FMUL ST2                            ; 00437977
    SHR EAX,CL                          ; 00437979
    MOV CL,byte ptr [0x01c6af94]        ; 0043797b | DAT_01c6af94
    SHL EAX,CL                          ; 00437981
    AND EAX,0xff                        ; 00437983
    MOV dword ptr [ESP + 0x18],EDI      ; 00437988
    MOV dword ptr [ESP + 0x14],EAX      ; 0043798c
    FILD qword ptr [ESP + 0x14]         ; 00437990
    FMULP ST3                           ; 00437994
        ;   Label: LAB_00437994
    FXCH                                ; 00437996
    FSTP float ptr [ESP]                ; 00437998
    FSTP float ptr [ESP + 0x4]          ; 0043799b
    FSTP float ptr [ESP + 0x8]          ; 0043799f
    MOV ECX,dword ptr [EBP + 0x20]      ; 004379a3
    LEA EAX,[ECX*0x4 + 0x0]             ; 004379a6
    SUB EAX,ECX                         ; 004379ad
    MOV ECX,EAX                         ; 004379af
    XOR EAX,EAX                         ; 004379b1
    MOV AL,byte ptr [ECX + 0x1c6af98]   ; 004379b3
    MOV dword ptr [ESP + 0x28],EAX      ; 004379b9
    FILD word ptr [ESP + 0x28]          ; 004379bd
    FLD float ptr [EBP + 0x1c]          ; 004379c1
    XOR EAX,EAX                         ; 004379c4
    FLD1                                ; 004379c6
    MOV AL,byte ptr [ECX + 0x1c6af99]   ; 004379c8
    FSUBRP                              ; 004379ce
    MOV dword ptr [ESP + 0x28],EAX      ; 004379d0
    FXCH                                ; 004379d4
    FMUL ST1                            ; 004379d6
    FILD word ptr [ESP + 0x28]          ; 004379d8
    XOR EAX,EAX                         ; 004379dc
    FMUL ST2                            ; 004379de
    MOV AL,byte ptr [ECX + 0x1c6af9a]   ; 004379e0
    MOV dword ptr [ESP + 0x28],EAX      ; 004379e6
    FILD word ptr [ESP + 0x28]          ; 004379ea
    FMULP ST3                           ; 004379ee
    FLD float ptr [ESP]                 ; 004379f0
    FLD float ptr [ESP + 0x4]           ; 004379f3
    MOV CL,byte ptr [0x01c6af7c]        ; 004379f7 | DAT_01c6af7c
    FXCH ST3                            ; 004379fd
    FADD ST0,ST1                        ; 004379ff
    FXCH ST2                            ; 00437a01
    FADD ST0,ST3                        ; 00437a03
    FXCH ST2                            ; 00437a05
    FSTP ST1                            ; 00437a07
    FXCH                                ; 00437a09
    FSTP ST2                            ; 00437a0b
    FLD float ptr [ESP + 0x8]           ; 00437a0d
    FXCH                                ; 00437a11
    FSTP float ptr [ESP]                ; 00437a13
    FXCH                                ; 00437a16
    FST float ptr [ESP + 0x4]           ; 00437a18
    FLD float ptr [ESP]                 ; 00437a1c
    CALL crt_math.c_round_FUN_005a3120  ; 00437a1f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00437a24
    CALL crt_math.c_round_FUN_005a3120  ; 00437a26
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 00437a2b
    FADD ST0,ST2                        ; 00437a2d
    FXCH                                ; 00437a2f
    FISTP qword ptr [ESP + 0xc]         ; 00437a31
    FXCH ST2                            ; 00437a35
    FISTP qword ptr [ESP + 0x14]        ; 00437a37
    FXCH                                ; 00437a3b
    FSTP ST1                            ; 00437a3d
    MOV EDI,dword ptr [ESP + 0xc]       ; 00437a3f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437a43
    FST float ptr [ESP + 0x8]           ; 00437a47
    SHR EDI,CL                          ; 00437a4b
    CALL crt_math.c_round_FUN_005a3120  ; 00437a4d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV CL,byte ptr [0x01c6af88]        ; 00437a52 | DAT_01c6af88
    FISTP qword ptr [ESP + 0x14]        ; 00437a58
    SHR EAX,CL                          ; 00437a5c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00437a5e
    MOV dword ptr [ESP + 0x24],ECX      ; 00437a62
    MOV EBX,dword ptr [ESP + 0x24]      ; 00437a66
    MOV CL,byte ptr [0x01c6af94]        ; 00437a6a | DAT_01c6af94
    SHR EBX,CL                          ; 00437a70
    MOV ECX,dword ptr [0x005fba20]      ; 00437a72 | DAT_005fba20
    SHL ESI,0x2                         ; 00437a78
    CMP ECX,0x10                        ; 00437a7b
    JNZ 0x00437b46                      ; 00437a7e
        ;   XREF to: 00437b46 (CONDITIONAL_JUMP)  ; LAB_00437b46
    ADD EDX,EDX                         ; 00437a84
    MOV CL,byte ptr [0x01c6af74]        ; 00437a86 | DAT_01c6af74
    MOV dword ptr [ESP + 0x24],EDX      ; 00437a8c
    SHL EDI,CL                          ; 00437a90
    MOV CL,byte ptr [0x01c6af80]        ; 00437a92 | DAT_01c6af80
    MOV EDX,dword ptr [ESI + 0x1c5faec] ; 00437a98
    MOV ESI,dword ptr [ESP + 0x24]      ; 00437a9e
    SHL EAX,CL                          ; 00437aa2
    MOV CL,byte ptr [0x01c6af8c]        ; 00437aa4 | DAT_01c6af8c
    OR EAX,EDI                          ; 00437aaa
    SHL EBX,CL                          ; 00437aac
    ADD EDX,ESI                         ; 00437aae
    OR EAX,EBX                          ; 00437ab0
    MOV word ptr [EDX],AX               ; 00437ab2
    MOV ESP,EBP                         ; 00437ab5
        ;   Label: LAB_00437ab5
    POP EBP                             ; 00437ab7
    POP EDI                             ; 00437ab8
    POP ESI                             ; 00437ab9
    POP EBX                             ; 00437aba
    RET                                 ; 00437abb
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 00437abc
        ;   Label: LAB_00437abc
    MOV AX,word ptr [EAX + EDX*0x2]     ; 00437ac2
    AND EAX,0xffff                      ; 00437ac6
    MOV CL,byte ptr [0x01c6af74]        ; 00437acb | DAT_01c6af74
    MOV EBX,EAX                         ; 00437ad1
    SHR EBX,CL                          ; 00437ad3
    MOV CL,byte ptr [0x01c6af7c]        ; 00437ad5 | DAT_01c6af7c
    SHL EBX,CL                          ; 00437adb
    XOR EDI,EDI                         ; 00437add
    AND EBX,0xff                        ; 00437adf
    MOV dword ptr [ESP + 0x18],EDI      ; 00437ae5
    MOV dword ptr [ESP + 0x14],EBX      ; 00437ae9
    MOV CL,byte ptr [0x01c6af80]        ; 00437aed | DAT_01c6af80
    FILD qword ptr [ESP + 0x14]         ; 00437af3
    MOV EBX,EAX                         ; 00437af7
    FLD float ptr [EBP + 0x1c]          ; 00437af9
    FXCH                                ; 00437afc
    FMUL ST1                            ; 00437afe
    SHR EBX,CL                          ; 00437b00
    MOV CL,byte ptr [0x01c6af88]        ; 00437b02 | DAT_01c6af88
    SHL EBX,CL                          ; 00437b08
    MOV ECX,EBX                         ; 00437b0a
    AND ECX,0xff                        ; 00437b0c
    MOV dword ptr [ESP + 0x10],EDI      ; 00437b12
    MOV dword ptr [ESP + 0xc],ECX       ; 00437b16
    FILD qword ptr [ESP + 0xc]          ; 00437b1a
    MOV CL,byte ptr [0x01c6af8c]        ; 00437b1e | DAT_01c6af8c
    FMUL ST2                            ; 00437b24
    SHR EAX,CL                          ; 00437b26
    MOV CL,byte ptr [0x01c6af94]        ; 00437b28 | DAT_01c6af94
    SHL EAX,CL                          ; 00437b2e
    AND EAX,0xff                        ; 00437b30
    MOV dword ptr [ESP + 0x10],EDI      ; 00437b35
    MOV dword ptr [ESP + 0xc],EAX       ; 00437b39
    FILD qword ptr [ESP + 0xc]          ; 00437b3d
    JMP 0x00437994                      ; 00437b41
        ;   XREF to: 00437994 (UNCONDITIONAL_JUMP)  ; LAB_00437994
    SHL EDX,0x2                         ; 00437b46
        ;   Label: LAB_00437b46
    MOV ECX,dword ptr [ESI + 0x1c5faec] ; 00437b49
    ADD EDX,ECX                         ; 00437b4f
    MOV CL,byte ptr [0x01c6af74]        ; 00437b51 | DAT_01c6af74
    SHL EDI,CL                          ; 00437b57
    MOV CL,byte ptr [0x01c6af80]        ; 00437b59 | DAT_01c6af80
    SHL EAX,CL                          ; 00437b5f
    MOV CL,byte ptr [0x01c6af8c]        ; 00437b61 | DAT_01c6af8c
    OR EDI,EAX                          ; 00437b67
    SHL EBX,CL                          ; 00437b69
    OR EDI,EBX                          ; 00437b6b
    MOV dword ptr [EDX],EDI             ; 00437b6d
    MOV ESP,EBP                         ; 00437b6f
    POP EBP                             ; 00437b71
    POP EDI                             ; 00437b72
    POP ESI                             ; 00437b73
    POP EBX                             ; 00437b74
    RET                                 ; 00437b75

