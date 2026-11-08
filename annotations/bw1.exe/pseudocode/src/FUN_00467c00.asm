; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00467c00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)
;
; Local Variables:
; undefined8       Stack[-0x138]:8  local_138
; undefined8       Stack[-0x130]:8  local_130
; undefined8       Stack[-0x128]:8  local_128
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
;
; XREF[2]:
;   FUN_00409170 at 00409570
;   FUN_0053ab00 at 0053ad0d
;
; Referenced Globals:
;   undefined4 DAT_005fec44
;
; Called Functions:
;   FUN_00420ee0
;   FUN_0045f690
;   FUN_0045f700
;   FUN_004672b0
;   FUN_0048fed0
;   FUN_0048ff40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467c00
        ;   Label: FUN_00467c00
    PUSH ESI                            ; 00467c01
    PUSH EDI                            ; 00467c02
    PUSH EBP                            ; 00467c03
    MOV EBP,ESP                         ; 00467c04
    SUB ESP,0x124                       ; 00467c06
    AND ESP,0xfffffff8                  ; 00467c0c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00467c0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467c12
    MOV EDX,dword ptr [EAX + 0x100]     ; 00467c15
    CMP EBX,EDX                         ; 00467c1b
    JL 0x00467c22                       ; 00467c1d
        ;   XREF to: 00467c22 (CONDITIONAL_JUMP)  ; LAB_00467c22
    LEA EBX,[EDX + -0x1]                ; 00467c1f
    TEST EBX,EBX                        ; 00467c22
        ;   Label: LAB_00467c22
    JGE 0x00467c28                      ; 00467c24
        ;   XREF to: 00467c28 (CONDITIONAL_JUMP)  ; LAB_00467c28
    XOR EBX,EBX                         ; 00467c26
    PUSH 0x0                            ; 00467c28
        ;   Label: LAB_00467c28
    MOV ECX,dword ptr [EBP + 0x20]      ; 00467c2a
    LEA EAX,[EBX*0x4 + 0x0]             ; 00467c2d
    PUSH ECX                            ; 00467c34
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00467c35
    SUB EAX,EBX                         ; 00467c38
    PUSH ESI                            ; 00467c3a
    MOV ESI,dword ptr [EBP + 0x14]      ; 00467c3b
    SHL EAX,0x3                         ; 00467c3e
    MOV ESI,dword ptr [ESI + 0x350]     ; 00467c41
    ADD EAX,ESI                         ; 00467c47
    PUSH EAX                            ; 00467c49
    CALL FUN_00420ee0                   ; 00467c4a
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00420ee0()
    MOV dword ptr [ESP + 0x130],EAX     ; 00467c4f
    FLD float ptr [ESP + 0x130]         ; 00467c56
    ADD ESP,0x10                        ; 00467c5d
    FLDZ                                ; 00467c60
    FXCH                                ; 00467c62
    FSTP double ptr [ESP]               ; 00467c64
    FCOMP double ptr [ESP]              ; 00467c67
    FNSTSW AX                           ; 00467c6a
    SAHF                                ; 00467c6c
    JA 0x00467ed5                       ; 00467c6d
        ;   XREF to: 00467ed5 (CONDITIONAL_JUMP)  ; LAB_00467ed5
    FLD1                                ; 00467c73
    FCOMP double ptr [ESP]              ; 00467c75
    FNSTSW AX                           ; 00467c78
    SAHF                                ; 00467c7a
    JC 0x00467ed5                       ; 00467c7b
        ;   XREF to: 00467ed5 (CONDITIONAL_JUMP)  ; LAB_00467ed5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467c81
    MOV EDI,0x40000000                  ; 00467c84
    MOV EDX,dword ptr [EAX + 0x358]     ; 00467c89
    MOV dword ptr [ESP + 0xf4],EDI      ; 00467c8f
    TEST EDX,EDX                        ; 00467c96
    JNZ 0x00467f93                      ; 00467c98
        ;   XREF to: 00467f93 (CONDITIONAL_JUMP)  ; LAB_00467f93
    PUSH EBX                            ; 00467c9e
    PUSH EAX                            ; 00467c9f
    MOV EDI,EAX                         ; 00467ca0
    CALL FUN_004672b0                   ; 00467ca2
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004672b0()
    ADD ESP,0x8                         ; 00467ca7
    MOV dword ptr [ESP + 0x110],EAX     ; 00467caa
    XOR EAX,EAX                         ; 00467cb1
    MOV dword ptr [ESP + 0x104],EAX     ; 00467cb3
    MOV EAX,EDI                         ; 00467cba
    CMP dword ptr [EAX + 0x110],0x0     ; 00467cbc
    JLE 0x00467eb9                      ; 00467cc3
        ;   XREF to: 00467eb9 (CONDITIONAL_JUMP)  ; LAB_00467eb9
    XOR EAX,EAX                         ; 00467cc9
    MOV dword ptr [ESP + 0x108],EAX     ; 00467ccb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467cd2
        ;   Label: LAB_00467cd2
    MOV EBX,dword ptr [ESP + 0x108]     ; 00467cd5
    MOV EAX,dword ptr [EAX + 0x114]     ; 00467cdc
    ADD EBX,EAX                         ; 00467ce2
    IMUL EAX,dword ptr [EBX + 0x18],0xc ; 00467ce4
    MOV ECX,dword ptr [ESP + 0x110]     ; 00467ce8
    MOV dword ptr [ESP + 0x114],EBX     ; 00467cef
    LEA EBX,[ESP + 0x88]                ; 00467cf6
    ADD EAX,ECX                         ; 00467cfd
    FILD dword ptr [EAX]                ; 00467cff
    FMUL float ptr [0x005fec44]         ; 00467d01 | DAT_005fec44
    FSTP float ptr [EBX]                ; 00467d07
    FILD dword ptr [EAX + 0x4]          ; 00467d09
    FMUL float ptr [0x005fec44]         ; 00467d0c | DAT_005fec44
    FSTP float ptr [EBX + 0x4]          ; 00467d12
    FILD dword ptr [EAX + 0x8]          ; 00467d15
    FMUL float ptr [0x005fec44]         ; 00467d18 | DAT_005fec44
    FSTP float ptr [EBX + 0x8]          ; 00467d1e
    MOV EAX,dword ptr [ESP + 0x114]     ; 00467d21
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 00467d28
    LEA EBX,[ESP + 0xb8]                ; 00467d2c
    ADD EAX,ECX                         ; 00467d33
    FILD dword ptr [EAX]                ; 00467d35
    FMUL float ptr [0x005fec44]         ; 00467d37 | DAT_005fec44
    FSTP float ptr [EBX]                ; 00467d3d
    FILD dword ptr [EAX + 0x4]          ; 00467d3f
    FMUL float ptr [0x005fec44]         ; 00467d42 | DAT_005fec44
    FSTP float ptr [EBX + 0x4]          ; 00467d48
    FILD dword ptr [EAX + 0x8]          ; 00467d4b
    FMUL float ptr [0x005fec44]         ; 00467d4e | DAT_005fec44
    FSTP float ptr [EBX + 0x8]          ; 00467d54
    MOV EAX,dword ptr [ESP + 0x114]     ; 00467d57
    MOV EDI,0x2                         ; 00467d5e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00467d63
    MOV dword ptr [ESP + 0x118],EDI     ; 00467d66
    CMP EDX,EDI                         ; 00467d6d
    JLE 0x00467e88                      ; 00467d6f
        ;   XREF to: 00467e88 (CONDITIONAL_JUMP)  ; LAB_00467e88
    ADD EAX,0x18                        ; 00467d75
    MOV dword ptr [ESP + 0x11c],EAX     ; 00467d78
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00467d7f
        ;   Label: LAB_00467d7f
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 00467d86
    MOV EDX,dword ptr [ESP + 0x110]     ; 00467d8a
    LEA EBX,[ESP + 0xd0]                ; 00467d91
    ADD EAX,EDX                         ; 00467d98
    FILD dword ptr [EAX]                ; 00467d9a
    FMUL float ptr [0x005fec44]         ; 00467d9c | DAT_005fec44
    FSTP float ptr [EBX]                ; 00467da2
    FILD dword ptr [EAX + 0x4]          ; 00467da4
    FMUL float ptr [0x005fec44]         ; 00467da7 | DAT_005fec44
    FSTP float ptr [EBX + 0x4]          ; 00467dad
    FILD dword ptr [EAX + 0x8]          ; 00467db0
    FMUL float ptr [0x005fec44]         ; 00467db3 | DAT_005fec44
    FSTP float ptr [EBX + 0x8]          ; 00467db9
    LEA EAX,[ESP + 0xd0]                ; 00467dbc
    PUSH EAX                            ; 00467dc3
    LEA EAX,[ESP + 0xbc]                ; 00467dc4
    PUSH EAX                            ; 00467dcb
    LEA EAX,[ESP + 0x90]                ; 00467dcc
    PUSH EAX                            ; 00467dd3
    LEA EAX,[ESP + 0x2c]                ; 00467dd4
    PUSH EAX                            ; 00467dd8
    LEA EBX,[ESP + 0xe0]                ; 00467dd9
    CALL FUN_0048fed0                   ; 00467de0
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048fed0()
    LEA EAX,[ESP + 0xc8]                ; 00467de5
    ADD ESP,0x10                        ; 00467dec
    CMP EAX,EBX                         ; 00467def
    JZ 0x00467e1d                       ; 00467df1
        ;   XREF to: 00467e1d (CONDITIONAL_JUMP)  ; LAB_00467e1d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00467df3
    MOV dword ptr [ESP + 0xb8],EAX      ; 00467dfa
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00467e01
    MOV dword ptr [ESP + 0xbc],EAX      ; 00467e08
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00467e0f
    MOV dword ptr [ESP + 0xc0],EAX      ; 00467e16
    MOV ECX,dword ptr [EBP + 0x20]      ; 00467e1d
        ;   Label: LAB_00467e1d
    PUSH ECX                            ; 00467e20
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00467e21
    PUSH EBX                            ; 00467e24
    LEA EAX,[ESP + 0x28]                ; 00467e25
    PUSH EAX                            ; 00467e29
    CALL FUN_0048ff40                   ; 00467e2a
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ff40()
    MOV dword ptr [ESP + 0x12c],EAX     ; 00467e2f
    FLD float ptr [ESP + 0x12c]         ; 00467e36
    ADD ESP,0xc                         ; 00467e3d
    FST float ptr [ESP + 0x1c]          ; 00467e40
    FCOMP float ptr [ESP + 0xf4]        ; 00467e44
    FNSTSW AX                           ; 00467e4b
    SAHF                                ; 00467e4d
    JBE 0x00467eee                      ; 00467e4e
        ;   XREF to: 00467eee (CONDITIONAL_JUMP)  ; LAB_00467eee
    MOV EBX,dword ptr [ESP + 0x118]     ; 00467e54
        ;   Label: LAB_00467e54
    INC EBX                             ; 00467e5b
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00467e5c
    MOV dword ptr [ESP + 0x118],EBX     ; 00467e63
    MOV EAX,EBX                         ; 00467e6a
    MOV EBX,dword ptr [ESP + 0x114]     ; 00467e6c
    ADD ECX,0xc                         ; 00467e73
    MOV ESI,dword ptr [EBX + 0x4]       ; 00467e76
    MOV dword ptr [ESP + 0x11c],ECX     ; 00467e79
    CMP EAX,ESI                         ; 00467e80
    JL 0x00467d7f                       ; 00467e82
        ;   XREF to: 00467d7f (CONDITIONAL_JUMP)  ; LAB_00467d7f
    MOV EBX,dword ptr [ESP + 0x108]     ; 00467e88
        ;   Label: LAB_00467e88
    ADD EBX,0x48                        ; 00467e8f
    MOV ESI,dword ptr [ESP + 0x104]     ; 00467e92
    MOV dword ptr [ESP + 0x108],EBX     ; 00467e99
    MOV EBX,dword ptr [EBP + 0x14]      ; 00467ea0
    INC ESI                             ; 00467ea3
    MOV EDI,dword ptr [EBX + 0x110]     ; 00467ea4
    MOV dword ptr [ESP + 0x104],ESI     ; 00467eaa
    CMP ESI,EDI                         ; 00467eb1
    JL 0x00467cd2                       ; 00467eb3
        ;   XREF to: 00467cd2 (CONDITIONAL_JUMP)  ; LAB_00467cd2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00467eb9
        ;   Label: LAB_00467eb9
    MOV dword ptr [ESP + 0xf8],EAX      ; 00467ec0
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00467ec7
    MOV ESP,EBP                         ; 00467ece
    POP EBP                             ; 00467ed0
    POP EDI                             ; 00467ed1
    POP ESI                             ; 00467ed2
    POP EBX                             ; 00467ed3
    RET                                 ; 00467ed4
    MOV dword ptr [ESP + 0xf8],0x40000000 ; 00467ed5
        ;   Label: LAB_00467ed5
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00467ee0
    MOV ESP,EBP                         ; 00467ee7
    POP EBP                             ; 00467ee9
    POP EDI                             ; 00467eea
    POP ESI                             ; 00467eeb
    POP EBX                             ; 00467eec
    RET                                 ; 00467eed
    FLD float ptr [ESP + 0x1c]          ; 00467eee
        ;   Label: LAB_00467eee
    FLDZ                                ; 00467ef2
    FXCH                                ; 00467ef4
    FSTP double ptr [ESP + 0x8]         ; 00467ef6
    FCOMP double ptr [ESP + 0x8]        ; 00467efa
    FNSTSW AX                           ; 00467efe
    SAHF                                ; 00467f00
    JA 0x00467e54                       ; 00467f01
        ;   XREF to: 00467e54 (CONDITIONAL_JUMP)  ; LAB_00467e54
    FLD1                                ; 00467f07
    FCOMP double ptr [ESP + 0x8]        ; 00467f09
    FNSTSW AX                           ; 00467f0d
    SAHF                                ; 00467f0f
    JC 0x00467e54                       ; 00467f10
        ;   XREF to: 00467e54 (CONDITIONAL_JUMP)  ; LAB_00467e54
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00467f16
    MOV ESI,dword ptr [EBP + 0x24]      ; 00467f1a
    MOV dword ptr [ESP + 0xf4],EAX      ; 00467f1d
    TEST ESI,ESI                        ; 00467f24
    JZ 0x00467e54                       ; 00467f26
        ;   XREF to: 00467e54 (CONDITIONAL_JUMP)  ; LAB_00467e54
    FLD float ptr [ESP + 0x44]          ; 00467f2c
    FLD float ptr [ESP + 0x48]          ; 00467f30
    FLD float ptr [ESP + 0x4c]          ; 00467f34
    LEA EDI,[ESP + 0x58]                ; 00467f38
    LEA ESI,[ESP + 0xc4]                ; 00467f3c
    FXCH ST2                            ; 00467f43
    FCHS                                ; 00467f45
    FXCH                                ; 00467f47
    FCHS                                ; 00467f49
    FXCH ST2                            ; 00467f4b
    FCHS                                ; 00467f4d
    FXCH ST2                            ; 00467f4f
    FSTP float ptr [ESP + 0xc8]         ; 00467f51
    FXCH                                ; 00467f58
    FSTP float ptr [ESP + 0xcc]         ; 00467f5a
    FSTP float ptr [ESP + 0xc4]         ; 00467f61
    MOVSD ES:EDI,ESI                    ; 00467f68
    MOVSD ES:EDI,ESI                    ; 00467f69
    MOVSD ES:EDI,ESI                    ; 00467f6a
    LEA EAX,[ESP + 0x58]                ; 00467f6b
    MOV EDI,dword ptr [EBP + 0x24]      ; 00467f6f
    CMP EAX,EDI                         ; 00467f72
    JZ 0x00467e54                       ; 00467f74
        ;   XREF to: 00467e54 (CONDITIONAL_JUMP)  ; LAB_00467e54
    MOV EAX,dword ptr [ESP + 0x58]      ; 00467f7a
    MOV dword ptr [EDI],EAX             ; 00467f7e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00467f80
    MOV dword ptr [EDI + 0x4],EAX       ; 00467f84
    MOV EAX,dword ptr [ESP + 0x60]      ; 00467f87
    MOV dword ptr [EDI + 0x8],EAX       ; 00467f8b
    JMP 0x00467e54                      ; 00467f8e
        ;   XREF to: 00467e54 (UNCONDITIONAL_JUMP)  ; LAB_00467e54
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00467f93
        ;   Label: LAB_00467f93
    PUSH ECX                            ; 00467f96
    ADD EAX,0x370                       ; 00467f97
    LEA ESI,[ESP + 0xe0]                ; 00467f9c
    PUSH EAX                            ; 00467fa3
    LEA EDI,[ESP + 0x6c]                ; 00467fa4
    MOV dword ptr [ESP + 0x104],EAX     ; 00467fa8
    CALL FUN_0045f700                   ; 00467faf
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f700()
    LEA ESI,[ESP + 0xe4]                ; 00467fb4
    ADD ESP,0x8                         ; 00467fbb
    MOVSD ES:EDI,ESI                    ; 00467fbe
    MOVSD ES:EDI,ESI                    ; 00467fbf
    MOVSD ES:EDI,ESI                    ; 00467fc0
    MOV EDI,dword ptr [EBP + 0x20]      ; 00467fc1
    PUSH EDI                            ; 00467fc4
    MOV EAX,dword ptr [ESP + 0x100]     ; 00467fc5
    PUSH EAX                            ; 00467fcc
    LEA ESI,[ESP + 0xa8]                ; 00467fcd
    LEA EDI,[ESP + 0x9c]                ; 00467fd4
    CALL FUN_0045f700                   ; 00467fdb
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f700()
    ADD ESP,0x8                         ; 00467fe0
    LEA ESI,[ESP + 0xa0]                ; 00467fe3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467fea
    MOVSD ES:EDI,ESI                    ; 00467fed
    MOVSD ES:EDI,ESI                    ; 00467fee
    MOVSD ES:EDI,ESI                    ; 00467fef
    MOV EDX,dword ptr [EAX + 0x354]     ; 00467ff0
    MOV EAX,EBX                         ; 00467ff6
    IMUL EAX,EDX                        ; 00467ff8
    SHL EAX,0x3                         ; 00467ffb
    MOV EBX,EAX                         ; 00467ffe
    SHL EAX,0x3                         ; 00468000
    SUB EAX,EBX                         ; 00468003
    MOV EBX,EAX                         ; 00468005
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468007
    MOV EAX,dword ptr [EAX + 0x358]     ; 0046800a
    ADD EBX,EAX                         ; 00468010
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468012
    XOR ECX,ECX                         ; 00468015
    MOV ESI,dword ptr [EAX + 0x354]     ; 00468017
    MOV dword ptr [ESP + 0x10c],ECX     ; 0046801d
    TEST ESI,ESI                        ; 00468024
    JLE 0x00467eb9                      ; 00468026
        ;   XREF to: 00467eb9 (CONDITIONAL_JUMP)  ; LAB_00467eb9
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0046802c
    MOV dword ptr [ESP + 0x100],EAX     ; 00468033
    LEA EAX,[ESP + 0x94]                ; 0046803a
        ;   Label: LAB_0046803a
    PUSH EAX                            ; 00468041
    LEA EAX,[ESP + 0x68]                ; 00468042
    PUSH EAX                            ; 00468046
    PUSH EBX                            ; 00468047
    CALL FUN_0048ff40                   ; 00468048
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ff40()
    MOV dword ptr [ESP + 0x12c],EAX     ; 0046804d
    FLD float ptr [ESP + 0x12c]         ; 00468054
    ADD ESP,0xc                         ; 0046805b
    FST float ptr [ESP + 0x18]          ; 0046805e
    FCOMP float ptr [ESP + 0xf4]        ; 00468062
    FNSTSW AX                           ; 00468069
    SAHF                                ; 0046806b
    JBE 0x00468095                      ; 0046806c
        ;   XREF to: 00468095 (CONDITIONAL_JUMP)  ; LAB_00468095
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0046806e
        ;   Label: LAB_0046806e
    INC ESI                             ; 00468075
    MOV dword ptr [ESP + 0x10c],ESI     ; 00468076
    MOV EAX,ESI                         ; 0046807d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046807f
    MOV EDI,dword ptr [ESI + 0x354]     ; 00468082
    ADD EBX,0x38                        ; 00468088
    CMP EAX,EDI                         ; 0046808b
    JGE 0x00467eb9                      ; 0046808d
        ;   XREF to: 00467eb9 (CONDITIONAL_JUMP)  ; LAB_00467eb9
    JMP 0x0046803a                      ; 00468093
        ;   XREF to: 0046803a (UNCONDITIONAL_JUMP)  ; LAB_0046803a
    FLD float ptr [ESP + 0x18]          ; 00468095
        ;   Label: LAB_00468095
    FLDZ                                ; 00468099
    FXCH                                ; 0046809b
    FSTP double ptr [ESP + 0x10]        ; 0046809d
    FCOMP double ptr [ESP + 0x10]       ; 004680a1
    FNSTSW AX                           ; 004680a5
    SAHF                                ; 004680a7
    JA 0x0046806e                       ; 004680a8
        ;   XREF to: 0046806e (CONDITIONAL_JUMP)  ; LAB_0046806e
    FLD1                                ; 004680aa
    FCOMP double ptr [ESP + 0x10]       ; 004680ac
    FNSTSW AX                           ; 004680b0
    SAHF                                ; 004680b2
    JC 0x0046806e                       ; 004680b3
        ;   XREF to: 0046806e (CONDITIONAL_JUMP)  ; LAB_0046806e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004680b5
    MOV dword ptr [ESP + 0xf4],EAX      ; 004680b9
    CMP dword ptr [EBP + 0x24],0x0      ; 004680c0
    JZ 0x0046806e                       ; 004680c4
        ;   XREF to: 0046806e (CONDITIONAL_JUMP)  ; LAB_0046806e
    LEA EDI,[ESP + 0x70]                ; 004680c6
    LEA EAX,[EBX + 0x24]                ; 004680ca
    LEA ESI,[ESP + 0xe8]                ; 004680cd
    MOV EDX,dword ptr [ESP + 0x100]     ; 004680d4
    FLD float ptr [EAX]                 ; 004680db
    FLD float ptr [EAX + 0x4]           ; 004680dd
    FLD float ptr [EAX + 0x8]           ; 004680e0
    FXCH ST2                            ; 004680e3
    FCHS                                ; 004680e5
    FXCH                                ; 004680e7
    FCHS                                ; 004680e9
    FXCH ST2                            ; 004680eb
    FCHS                                ; 004680ed
    LEA EAX,[ESP + 0x70]                ; 004680ef
    FXCH                                ; 004680f3
    FSTP float ptr [ESP + 0xe8]         ; 004680f5
    FXCH                                ; 004680fc
    FSTP float ptr [ESP + 0xec]         ; 004680fe
    FSTP float ptr [ESP + 0xf0]         ; 00468105
    PUSH EAX                            ; 0046810c
    MOVSD ES:EDI,ESI                    ; 0046810d
    MOVSD ES:EDI,ESI                    ; 0046810e
    MOVSD ES:EDI,ESI                    ; 0046810f
    PUSH EDX                            ; 00468110
    LEA ESI,[ESP + 0xb4]                ; 00468111
    LEA EDI,[ESP + 0x84]                ; 00468118
    CALL FUN_0045f690                   ; 0046811f
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0xb4]                ; 00468124
    ADD ESP,0x8                         ; 0046812b
    LEA EAX,[ESP + 0x7c]                ; 0046812e
    MOV ECX,dword ptr [EBP + 0x24]      ; 00468132
    MOVSD ES:EDI,ESI                    ; 00468135
    MOVSD ES:EDI,ESI                    ; 00468136
    MOVSD ES:EDI,ESI                    ; 00468137
    CMP EAX,ECX                         ; 00468138
    JZ 0x0046806e                       ; 0046813a
        ;   XREF to: 0046806e (CONDITIONAL_JUMP)  ; LAB_0046806e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00468140
    MOV dword ptr [ECX],EAX             ; 00468144
    MOV EAX,dword ptr [ESP + 0x80]      ; 00468146
    MOV dword ptr [ECX + 0x4],EAX       ; 0046814d
    MOV EAX,dword ptr [ESP + 0x84]      ; 00468150
    MOV dword ptr [ECX + 0x8],EAX       ; 00468157
    JMP 0x0046806e                      ; 0046815a
        ;   XREF to: 0046806e (UNCONDITIONAL_JUMP)  ; LAB_0046806e

