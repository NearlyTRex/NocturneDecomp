; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00439ca0(int param_1,int param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00439640 at 00439814
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
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439ca0
        ;   Label: FUN_00439ca0
    PUSH ESI                            ; 00439ca1
    PUSH EDI                            ; 00439ca2
    PUSH EBP                            ; 00439ca3
    MOV EBP,ESP                         ; 00439ca4
    SUB ESP,0x2c                        ; 00439ca6
    AND ESP,0xfffffff8                  ; 00439ca9
    MOV EDX,dword ptr [EBP + 0x14]      ; 00439cac
    MOV ESI,dword ptr [EBP + 0x18]      ; 00439caf
    CMP EDX,dword ptr [0x01c4f008]      ; 00439cb2 | DAT_01c4f008
    JL 0x00439ea5                       ; 00439cb8
        ;   XREF to: 00439ea5 (CONDITIONAL_JUMP)  ; LAB_00439ea5
    CMP EDX,dword ptr [0x01c4f010]      ; 00439cbe | DAT_01c4f010
    JG 0x00439ea5                       ; 00439cc4
        ;   XREF to: 00439ea5 (CONDITIONAL_JUMP)  ; LAB_00439ea5
    CMP ESI,dword ptr [0x01c4f00c]      ; 00439cca | DAT_01c4f00c
    JL 0x00439ea5                       ; 00439cd0
        ;   XREF to: 00439ea5 (CONDITIONAL_JUMP)  ; LAB_00439ea5
    CMP ESI,dword ptr [0x01c4f014]      ; 00439cd6 | DAT_01c4f014
    JG 0x00439ea5                       ; 00439cdc
        ;   XREF to: 00439ea5 (CONDITIONAL_JUMP)  ; LAB_00439ea5
    MOV ECX,dword ptr [0x0061b4a0]      ; 00439ce2 | DAT_0061b4a0
    CMP ECX,0x8                         ; 00439ce8
    JZ 0x00439ea5                       ; 00439ceb
        ;   XREF to: 00439ea5 (CONDITIONAL_JUMP)  ; LAB_00439ea5
    LEA EAX,[ESI*0x4 + 0x0]             ; 00439cf1
    CMP ECX,0x10                        ; 00439cf8
    JZ 0x00439eac                       ; 00439cfb
        ;   XREF to: 00439eac (CONDITIONAL_JUMP)  ; LAB_00439eac
    LEA EBX,[EDX*0x4 + 0x0]             ; 00439d01
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 00439d08
    ADD EBX,EAX                         ; 00439d0e
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439d10 | DAT_01c4e9d4
    MOV EAX,dword ptr [EBX]             ; 00439d16
    SHR EAX,CL                          ; 00439d18
    MOV CL,byte ptr [0x01c4e9dc]        ; 00439d1a | DAT_01c4e9dc
    SHL EAX,CL                          ; 00439d20
    XOR EDI,EDI                         ; 00439d22
    AND EAX,0xff                        ; 00439d24
    MOV dword ptr [ESP + 0x18],EDI      ; 00439d29
    MOV dword ptr [ESP + 0x14],EAX      ; 00439d2d
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439d31 | DAT_01c4e9e0
    FILD qword ptr [ESP + 0x14]         ; 00439d37
    MOV EAX,dword ptr [EBX]             ; 00439d3b
    FLD float ptr [EBP + 0x1c]          ; 00439d3d
    FXCH                                ; 00439d40
    FMUL ST1                            ; 00439d42
    SHR EAX,CL                          ; 00439d44
    MOV CL,byte ptr [0x01c4e9e8]        ; 00439d46 | DAT_01c4e9e8
    SHL EAX,CL                          ; 00439d4c
    AND EAX,0xff                        ; 00439d4e
    MOV dword ptr [ESP + 0x18],EDI      ; 00439d53
    MOV dword ptr [ESP + 0x14],EAX      ; 00439d57
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439d5b | DAT_01c4e9ec
    FILD qword ptr [ESP + 0x14]         ; 00439d61
    MOV EAX,dword ptr [EBX]             ; 00439d65
    FMUL ST2                            ; 00439d67
    SHR EAX,CL                          ; 00439d69
    MOV CL,byte ptr [0x01c4e9f4]        ; 00439d6b | DAT_01c4e9f4
    SHL EAX,CL                          ; 00439d71
    AND EAX,0xff                        ; 00439d73
    MOV dword ptr [ESP + 0x18],EDI      ; 00439d78
    MOV dword ptr [ESP + 0x14],EAX      ; 00439d7c
    FILD qword ptr [ESP + 0x14]         ; 00439d80
    FMULP ST3                           ; 00439d84
        ;   Label: LAB_00439d84
    FXCH                                ; 00439d86
    FSTP float ptr [ESP]                ; 00439d88
    FSTP float ptr [ESP + 0x4]          ; 00439d8b
    FSTP float ptr [ESP + 0x8]          ; 00439d8f
    MOV ECX,dword ptr [EBP + 0x20]      ; 00439d93
    LEA EAX,[ECX*0x4 + 0x0]             ; 00439d96
    SUB EAX,ECX                         ; 00439d9d
    MOV ECX,EAX                         ; 00439d9f
    XOR EAX,EAX                         ; 00439da1
    MOV AL,byte ptr [ECX + 0x1c4e9f8]   ; 00439da3
    MOV dword ptr [ESP + 0x28],EAX      ; 00439da9
    FILD word ptr [ESP + 0x28]          ; 00439dad
    FLD float ptr [EBP + 0x1c]          ; 00439db1
    XOR EAX,EAX                         ; 00439db4
    FLD1                                ; 00439db6
    MOV AL,byte ptr [ECX + 0x1c4e9f9]   ; 00439db8
    FSUBRP                              ; 00439dbe
    MOV dword ptr [ESP + 0x28],EAX      ; 00439dc0
    FXCH                                ; 00439dc4
    FMUL ST1                            ; 00439dc6
    FILD word ptr [ESP + 0x28]          ; 00439dc8
    XOR EAX,EAX                         ; 00439dcc
    FMUL ST2                            ; 00439dce
    MOV AL,byte ptr [ECX + 0x1c4e9fa]   ; 00439dd0
    MOV dword ptr [ESP + 0x28],EAX      ; 00439dd6
    FILD word ptr [ESP + 0x28]          ; 00439dda
    FMULP ST3                           ; 00439dde
    FLD float ptr [ESP]                 ; 00439de0
    FLD float ptr [ESP + 0x4]           ; 00439de3
    MOV CL,byte ptr [0x01c4e9dc]        ; 00439de7 | DAT_01c4e9dc
    FXCH ST3                            ; 00439ded
    FADD ST0,ST1                        ; 00439def
    FXCH ST2                            ; 00439df1
    FADD ST0,ST3                        ; 00439df3
    FXCH ST2                            ; 00439df5
    FSTP ST1                            ; 00439df7
    FXCH                                ; 00439df9
    FSTP ST2                            ; 00439dfb
    FLD float ptr [ESP + 0x8]           ; 00439dfd
    FXCH                                ; 00439e01
    FSTP float ptr [ESP]                ; 00439e03
    FXCH                                ; 00439e06
    FST float ptr [ESP + 0x4]           ; 00439e08
    FLD float ptr [ESP]                 ; 00439e0c
    CALL FUN_005c03a0                   ; 00439e0f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 00439e14
    CALL FUN_005c03a0                   ; 00439e16
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 00439e1b
    FADD ST0,ST2                        ; 00439e1d
    FXCH                                ; 00439e1f
    FISTP qword ptr [ESP + 0xc]         ; 00439e21
    FXCH ST2                            ; 00439e25
    FISTP qword ptr [ESP + 0x14]        ; 00439e27
    FXCH                                ; 00439e2b
    FSTP ST1                            ; 00439e2d
    MOV EDI,dword ptr [ESP + 0xc]       ; 00439e2f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00439e33
    FST float ptr [ESP + 0x8]           ; 00439e37
    SHR EDI,CL                          ; 00439e3b
    CALL FUN_005c03a0                   ; 00439e3d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    MOV CL,byte ptr [0x01c4e9e8]        ; 00439e42 | DAT_01c4e9e8
    FISTP qword ptr [ESP + 0x14]        ; 00439e48
    SHR EAX,CL                          ; 00439e4c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00439e4e
    MOV dword ptr [ESP + 0x24],ECX      ; 00439e52
    MOV EBX,dword ptr [ESP + 0x24]      ; 00439e56
    MOV CL,byte ptr [0x01c4e9f4]        ; 00439e5a | DAT_01c4e9f4
    SHR EBX,CL                          ; 00439e60
    MOV ECX,dword ptr [0x0061b4a0]      ; 00439e62 | DAT_0061b4a0
    SHL ESI,0x2                         ; 00439e68
    CMP ECX,0x10                        ; 00439e6b
    JNZ 0x00439f36                      ; 00439e6e
        ;   XREF to: 00439f36 (CONDITIONAL_JUMP)  ; LAB_00439f36
    ADD EDX,EDX                         ; 00439e74
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439e76 | DAT_01c4e9d4
    MOV dword ptr [ESP + 0x24],EDX      ; 00439e7c
    SHL EDI,CL                          ; 00439e80
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439e82 | DAT_01c4e9e0
    MOV EDX,dword ptr [ESI + 0x1c4354c] ; 00439e88
    MOV ESI,dword ptr [ESP + 0x24]      ; 00439e8e
    SHL EAX,CL                          ; 00439e92
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439e94 | DAT_01c4e9ec
    OR EAX,EDI                          ; 00439e9a
    SHL EBX,CL                          ; 00439e9c
    ADD EDX,ESI                         ; 00439e9e
    OR EAX,EBX                          ; 00439ea0
    MOV word ptr [EDX],AX               ; 00439ea2
    MOV ESP,EBP                         ; 00439ea5
        ;   Label: LAB_00439ea5
    POP EBP                             ; 00439ea7
    POP EDI                             ; 00439ea8
    POP ESI                             ; 00439ea9
    POP EBX                             ; 00439eaa
    RET                                 ; 00439eab
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 00439eac
        ;   Label: LAB_00439eac
    MOV AX,word ptr [EAX + EDX*0x2]     ; 00439eb2
    AND EAX,0xffff                      ; 00439eb6
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439ebb | DAT_01c4e9d4
    MOV EBX,EAX                         ; 00439ec1
    SHR EBX,CL                          ; 00439ec3
    MOV CL,byte ptr [0x01c4e9dc]        ; 00439ec5 | DAT_01c4e9dc
    SHL EBX,CL                          ; 00439ecb
    XOR EDI,EDI                         ; 00439ecd
    AND EBX,0xff                        ; 00439ecf
    MOV dword ptr [ESP + 0x18],EDI      ; 00439ed5
    MOV dword ptr [ESP + 0x14],EBX      ; 00439ed9
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439edd | DAT_01c4e9e0
    FILD qword ptr [ESP + 0x14]         ; 00439ee3
    MOV EBX,EAX                         ; 00439ee7
    FLD float ptr [EBP + 0x1c]          ; 00439ee9
    FXCH                                ; 00439eec
    FMUL ST1                            ; 00439eee
    SHR EBX,CL                          ; 00439ef0
    MOV CL,byte ptr [0x01c4e9e8]        ; 00439ef2 | DAT_01c4e9e8
    SHL EBX,CL                          ; 00439ef8
    MOV ECX,EBX                         ; 00439efa
    AND ECX,0xff                        ; 00439efc
    MOV dword ptr [ESP + 0x10],EDI      ; 00439f02
    MOV dword ptr [ESP + 0xc],ECX       ; 00439f06
    FILD qword ptr [ESP + 0xc]          ; 00439f0a
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439f0e | DAT_01c4e9ec
    FMUL ST2                            ; 00439f14
    SHR EAX,CL                          ; 00439f16
    MOV CL,byte ptr [0x01c4e9f4]        ; 00439f18 | DAT_01c4e9f4
    SHL EAX,CL                          ; 00439f1e
    AND EAX,0xff                        ; 00439f20
    MOV dword ptr [ESP + 0x10],EDI      ; 00439f25
    MOV dword ptr [ESP + 0xc],EAX       ; 00439f29
    FILD qword ptr [ESP + 0xc]          ; 00439f2d
    JMP 0x00439d84                      ; 00439f31
        ;   XREF to: 00439d84 (UNCONDITIONAL_JUMP)  ; LAB_00439d84
    SHL EDX,0x2                         ; 00439f36
        ;   Label: LAB_00439f36
    MOV ECX,dword ptr [ESI + 0x1c4354c] ; 00439f39
    ADD EDX,ECX                         ; 00439f3f
    MOV CL,byte ptr [0x01c4e9d4]        ; 00439f41 | DAT_01c4e9d4
    SHL EDI,CL                          ; 00439f47
    MOV CL,byte ptr [0x01c4e9e0]        ; 00439f49 | DAT_01c4e9e0
    SHL EAX,CL                          ; 00439f4f
    MOV CL,byte ptr [0x01c4e9ec]        ; 00439f51 | DAT_01c4e9ec
    OR EDI,EAX                          ; 00439f57
    SHL EBX,CL                          ; 00439f59
    OR EDI,EBX                          ; 00439f5b
    MOV dword ptr [EDX],EDI             ; 00439f5d
    MOV ESP,EBP                         ; 00439f5f
    POP EBP                             ; 00439f61
    POP EDI                             ; 00439f62
    POP ESI                             ; 00439f63
    POP EBX                             ; 00439f64
    RET                                 ; 00439f65

