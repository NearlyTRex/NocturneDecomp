; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00439900(int x,int y,float alpha,int color)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; float            Stack[0xc]:4   alpha
; int              Stack[0x10]:4   color
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_00439370 at 004394f3
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9dc
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e8
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f4
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439900
        ;   Label: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900
    PUSH ESI                            ; 00439901
    PUSH EDI                            ; 00439902
    PUSH EBP                            ; 00439903
    MOV EBP,ESP                         ; 00439904
    SUB ESP,0x2c                        ; 00439906
    AND ESP,0xfffffff8                  ; 00439909
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043990c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0043990f
    MOV EDI,dword ptr [EBP + 0x20]      ; 00439912
    CMP EAX,dword ptr [0x01c4f008]      ; 00439915 | DAT_01c4f008
    JL 0x00439b49                       ; 0043991b
        ;   XREF to: 00439b49 (CONDITIONAL_JUMP)  ; LAB_00439b49
    CMP EAX,dword ptr [0x01c4f010]      ; 00439921 | DAT_01c4f010
    JG 0x00439b49                       ; 00439927
        ;   XREF to: 00439b49 (CONDITIONAL_JUMP)  ; LAB_00439b49
    CMP ESI,dword ptr [0x01c4f00c]      ; 0043992d | DAT_01c4f00c
    JL 0x00439b49                       ; 00439933
        ;   XREF to: 00439b49 (CONDITIONAL_JUMP)  ; LAB_00439b49
    CMP ESI,dword ptr [0x01c4f014]      ; 00439939 | DAT_01c4f014
    JG 0x00439b49                       ; 0043993f
        ;   XREF to: 00439b49 (CONDITIONAL_JUMP)  ; LAB_00439b49
    MOV ECX,dword ptr [0x0061b4a0]      ; 00439945 | DAT_0061b4a0
    CMP ECX,0x8                         ; 0043994b
    JZ 0x00439b49                       ; 0043994e
        ;   XREF to: 00439b49 (CONDITIONAL_JUMP)  ; LAB_00439b49
    LEA EDX,[ESI*0x4 + 0x0]             ; 00439954
    CMP ECX,0x10                        ; 0043995b
    JZ 0x00439b50                       ; 0043995e
        ;   XREF to: 00439b50 (CONDITIONAL_JUMP)  ; LAB_00439b50
    LEA EBX,[EAX*0x4 + 0x0]             ; 00439964
    MOV EDX,dword ptr [EDX + 0x1c4354c] ; 0043996b
    ADD EBX,EDX                         ; 00439971
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439973 | DAT_01c4e9d4
    MOV EDX,dword ptr [EBX]             ; 00439979
    SHR EDX,CL                          ; 0043997b
    XOR ECX,ECX                         ; 0043997d
    AND EDX,0xff                        ; 0043997f
    MOV dword ptr [ESP + 0x14],ECX      ; 00439985
    MOV dword ptr [ESP + 0x10],EDX      ; 00439989
    FILD qword ptr [ESP + 0x10]         ; 0043998d
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439991 | DAT_01c4e9e0
    MOV EDX,dword ptr [EBX]             ; 00439997
    FLD float ptr [EBP + 0x1c]          ; 00439999
    FXCH                                ; 0043999c
    FMUL ST1                            ; 0043999e
    SHR EDX,CL                          ; 004399a0
    XOR ECX,ECX                         ; 004399a2
    AND EDX,0xff                        ; 004399a4
    MOV dword ptr [ESP + 0x14],ECX      ; 004399aa
    MOV dword ptr [ESP + 0x10],EDX      ; 004399ae
    FILD qword ptr [ESP + 0x10]         ; 004399b2
    MOV CL,byte ptr [0x01c4e9ec]        ; 004399b6 | DAT_01c4e9ec
    MOV EDX,dword ptr [EBX]             ; 004399bc
    FMUL ST2                            ; 004399be
    SHR EDX,CL                          ; 004399c0
    XOR EBX,EBX                         ; 004399c2
    AND EDX,0xff                        ; 004399c4
    MOV dword ptr [ESP + 0x24],EBX      ; 004399ca
    MOV dword ptr [ESP + 0x20],EDX      ; 004399ce
    FILD qword ptr [ESP + 0x20]         ; 004399d2
    FMULP ST3                           ; 004399d6
        ;   Label: LAB_004399d6
    FXCH                                ; 004399d8
    FSTP float ptr [ESP + 0x4]          ; 004399da
    FSTP float ptr [ESP]                ; 004399de
    FSTP float ptr [ESP + 0xc]          ; 004399e1
    CMP dword ptr [0x0061b4a0],0x10     ; 004399e5 | DAT_0061b4a0
    JNZ 0x00439bde                      ; 004399ec
        ;   XREF to: 00439bde (CONDITIONAL_JUMP)  ; LAB_00439bde
    MOV DX,word ptr [EDI*0x2 + 0x1c4e7d4] ; 004399f2
    AND EDX,0xffff                      ; 004399fa
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439a00 | DAT_01c4e9d4
    MOV EBX,EDX                         ; 00439a06
    SHR EBX,CL                          ; 00439a08
    MOV CL,byte ptr [0x01c4e9dc]        ; 00439a0a | DAT_01c4e9dc
    SHL EBX,CL                          ; 00439a10
    MOV ECX,EBX                         ; 00439a12
    AND ECX,0xff                        ; 00439a14
    MOV EDI,EDX                         ; 00439a1a
    MOV dword ptr [ESP + 0x8],ECX       ; 00439a1c
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439a20 | DAT_01c4e9e0
    SHR EDI,CL                          ; 00439a26
    MOV CL,byte ptr [0x01c4e9e8]        ; 00439a28 | DAT_01c4e9e8
    SHL EDI,CL                          ; 00439a2e
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439a30 | DAT_01c4e9ec
    SHR EDX,CL                          ; 00439a36
    MOV CL,byte ptr [0x01c4e9f4]        ; 00439a38 | DAT_01c4e9f4
    SHL EDX,CL                          ; 00439a3e
    MOV ECX,EDX                         ; 00439a40
        ;   Label: LAB_00439a40
    AND EDI,0xff                        ; 00439a42
    AND ECX,0xff                        ; 00439a48
    FLD float ptr [EBP + 0x1c]          ; 00439a4e
    XOR EBX,EBX                         ; 00439a51
    MOV EDX,dword ptr [ESP + 0x8]       ; 00439a53
    MOV dword ptr [ESP + 0x24],EBX      ; 00439a57
    MOV dword ptr [ESP + 0x20],EDX      ; 00439a5b
    FLD1                                ; 00439a5f
    FILD qword ptr [ESP + 0x20]         ; 00439a61
    FXCH                                ; 00439a65
    FSUBRP ST2,ST0                      ; 00439a67
    FMUL ST1                            ; 00439a69
    MOV dword ptr [ESP + 0x18],EDI      ; 00439a6b
    MOV dword ptr [ESP + 0x10],ECX      ; 00439a6f
    MOV dword ptr [ESP + 0x1c],EBX      ; 00439a73
    MOV dword ptr [ESP + 0x14],EBX      ; 00439a77
    FILD qword ptr [ESP + 0x18]         ; 00439a7b
    FMUL ST2                            ; 00439a7f
    FILD qword ptr [ESP + 0x10]         ; 00439a81
    FMULP ST3                           ; 00439a85
    SHL ESI,0x2                         ; 00439a87
    MOV EDI,dword ptr [0x0061b4a0]      ; 00439a8a | DAT_0061b4a0
    FLD float ptr [ESP + 0x4]           ; 00439a90
    FLD float ptr [ESP]                 ; 00439a94
    FLD float ptr [ESP + 0xc]           ; 00439a97
    FXCH ST4                            ; 00439a9b
    FADD ST0,ST2                        ; 00439a9d
    FXCH ST3                            ; 00439a9f
    FADD ST0,ST1                        ; 00439aa1
    FXCH ST5                            ; 00439aa3
    FADD ST0,ST4                        ; 00439aa5
    FXCH ST3                            ; 00439aa7
    FSTP ST2                            ; 00439aa9
    FXCH ST4                            ; 00439aab
    FSTP ST4                            ; 00439aad
    FXCH                                ; 00439aaf
    FSTP ST2                            ; 00439ab1
    FSTP float ptr [ESP + 0x4]          ; 00439ab3
    FXCH                                ; 00439ab7
    FSTP float ptr [ESP]                ; 00439ab9
    FSTP float ptr [ESP + 0xc]          ; 00439abc
    CMP EDI,0x10                        ; 00439ac0
    JNZ 0x00439c1e                      ; 00439ac3
        ;   XREF to: 00439c1e (CONDITIONAL_JUMP)  ; LAB_00439c1e
    FLD float ptr [ESP + 0x4]           ; 00439ac9
    FLD float ptr [ESP]                 ; 00439acd
    FLD float ptr [ESP + 0xc]           ; 00439ad0
    MOV CL,byte ptr [0x01c4e9dc]        ; 00439ad4 | DAT_01c4e9dc
    FXCH ST2                            ; 00439ada
    CALL crt_math.c_round_FUN_005c03a0  ; 00439adc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00439ae1
    CALL crt_math.c_round_FUN_005c03a0  ; 00439ae3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 00439ae8
    CALL crt_math.c_round_FUN_005c03a0  ; 00439aea
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00439aef
    FISTP qword ptr [ESP + 0x10]        ; 00439af1
    FXCH                                ; 00439af5
    FISTP qword ptr [ESP + 0x20]        ; 00439af7
    FISTP qword ptr [ESP + 0x18]        ; 00439afb
    MOV EDI,dword ptr [ESP + 0x10]      ; 00439aff
    MOV EDX,dword ptr [ESP + 0x20]      ; 00439b03
    SHR EDI,CL                          ; 00439b07
    MOV CL,byte ptr [0x01c4e9e8]        ; 00439b09 | DAT_01c4e9e8
    MOV EBX,dword ptr [ESP + 0x18]      ; 00439b0f
    SHR EDX,CL                          ; 00439b13
    MOV CL,byte ptr [0x01c4e9f4]        ; 00439b15 | DAT_01c4e9f4
    SHR EBX,CL                          ; 00439b1b
    LEA ECX,[EAX + EAX*0x1]             ; 00439b1d
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 00439b20
    MOV ESI,EDI                         ; 00439b26
    ADD EAX,ECX                         ; 00439b28
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439b2a | DAT_01c4e9d4
    SHL ESI,CL                          ; 00439b30
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439b32 | DAT_01c4e9e0
    SHL EDX,CL                          ; 00439b38
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439b3a | DAT_01c4e9ec
    OR EDX,ESI                          ; 00439b40
    SHL EBX,CL                          ; 00439b42
    OR EDX,EBX                          ; 00439b44
    MOV word ptr [EAX],DX               ; 00439b46
    MOV ESP,EBP                         ; 00439b49
        ;   Label: LAB_00439b49
    POP EBP                             ; 00439b4b
    POP EDI                             ; 00439b4c
    POP ESI                             ; 00439b4d
    POP EBX                             ; 00439b4e
    RET                                 ; 00439b4f
    MOV EDX,dword ptr [EDX + 0x1c4354c] ; 00439b50
        ;   Label: LAB_00439b50
    MOV DX,word ptr [EDX + EAX*0x2]     ; 00439b56
    AND EDX,0xffff                      ; 00439b5a
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439b60 | DAT_01c4e9d4
    MOV EBX,EDX                         ; 00439b66
    SHR EBX,CL                          ; 00439b68
    MOV CL,byte ptr [0x01c4e9dc]        ; 00439b6a | DAT_01c4e9dc
    SHL EBX,CL                          ; 00439b70
    XOR ECX,ECX                         ; 00439b72
    AND EBX,0xff                        ; 00439b74
    MOV dword ptr [ESP + 0x14],ECX      ; 00439b7a
    MOV dword ptr [ESP + 0x10],EBX      ; 00439b7e
    FILD qword ptr [ESP + 0x10]         ; 00439b82
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439b86 | DAT_01c4e9e0
    MOV EBX,EDX                         ; 00439b8c
    FLD float ptr [EBP + 0x1c]          ; 00439b8e
    FXCH                                ; 00439b91
    FMUL ST1                            ; 00439b93
    SHR EBX,CL                          ; 00439b95
    MOV CL,byte ptr [0x01c4e9e8]        ; 00439b97 | DAT_01c4e9e8
    SHL EBX,CL                          ; 00439b9d
    XOR ECX,ECX                         ; 00439b9f
    AND EBX,0xff                        ; 00439ba1
    MOV dword ptr [ESP + 0x14],ECX      ; 00439ba7
    MOV dword ptr [ESP + 0x10],EBX      ; 00439bab
    FILD qword ptr [ESP + 0x10]         ; 00439baf
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439bb3 | DAT_01c4e9ec
    FMUL ST2                            ; 00439bb9
    SHR EDX,CL                          ; 00439bbb
    MOV CL,byte ptr [0x01c4e9f4]        ; 00439bbd | DAT_01c4e9f4
    SHL EDX,CL                          ; 00439bc3
    XOR EBX,EBX                         ; 00439bc5
    AND EDX,0xff                        ; 00439bc7
    MOV dword ptr [ESP + 0x14],EBX      ; 00439bcd
    MOV dword ptr [ESP + 0x10],EDX      ; 00439bd1
    FILD qword ptr [ESP + 0x10]         ; 00439bd5
    JMP 0x004399d6                      ; 00439bd9
        ;   XREF to: 004399d6 (UNCONDITIONAL_JUMP)  ; LAB_004399d6
    LEA EBX,[EDI*0x4 + 0x0]             ; 00439bde
        ;   Label: LAB_00439bde
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439be5 | DAT_01c4e9d4
    MOV EDX,dword ptr [EBX + 0x1c4e3d4] ; 00439beb
    SHR EDX,CL                          ; 00439bf1
    MOV EDI,dword ptr [EBX + 0x1c4e3d4] ; 00439bf3
    AND EDX,0xff                        ; 00439bf9
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439bff | DAT_01c4e9e0
    MOV dword ptr [ESP + 0x8],EDX       ; 00439c05
    SHR EDI,CL                          ; 00439c09
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439c0b | DAT_01c4e9ec
    MOV EDX,dword ptr [EBX + 0x1c4e3d4] ; 00439c11
    SHR EDX,CL                          ; 00439c17
    JMP 0x00439a40                      ; 00439c19
        ;   XREF to: 00439a40 (UNCONDITIONAL_JUMP)  ; LAB_00439a40
    FLD float ptr [ESP + 0x4]           ; 00439c1e
        ;   Label: LAB_00439c1e
    FLD float ptr [ESP]                 ; 00439c22
    FLD float ptr [ESP + 0xc]           ; 00439c25
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439c29 | DAT_01c4e9d4
    FXCH ST2                            ; 00439c2f
    CALL crt_math.c_round_FUN_005c03a0  ; 00439c31
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00439c36
    CALL crt_math.c_round_FUN_005c03a0  ; 00439c38
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 00439c3d
    CALL crt_math.c_round_FUN_005c03a0  ; 00439c3f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    SHL EAX,0x2                         ; 00439c44
    FXCH                                ; 00439c47
    FISTP qword ptr [ESP + 0x18]        ; 00439c49
    FXCH                                ; 00439c4d
    FISTP qword ptr [ESP + 0x10]        ; 00439c4f
    FISTP qword ptr [ESP + 0x20]        ; 00439c53
    MOV EDX,dword ptr [ESP + 0x10]      ; 00439c57
    MOV EBX,dword ptr [ESP + 0x18]      ; 00439c5b
    MOV dword ptr [ESP + 0x28],EDX      ; 00439c5f
    SHL EBX,CL                          ; 00439c63
    MOV EDX,dword ptr [ESI + 0x1c4354c] ; 00439c65
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439c6b | DAT_01c4e9e0
    ADD EDX,EAX                         ; 00439c71
    MOV EAX,dword ptr [ESP + 0x28]      ; 00439c73
    MOV EDI,dword ptr [ESP + 0x20]      ; 00439c77
    SHL EAX,CL                          ; 00439c7b
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439c7d | DAT_01c4e9ec
    OR EAX,EBX                          ; 00439c83
    SHL EDI,CL                          ; 00439c85
    OR EAX,EDI                          ; 00439c87
    MOV dword ptr [EDX],EAX             ; 00439c89
    MOV ESP,EBP                         ; 00439c8b
    POP EBP                             ; 00439c8d
    POP EDI                             ; 00439c8e
    POP ESI                             ; 00439c8f
    POP EBX                             ; 00439c90
    RET                                 ; 00439c91

