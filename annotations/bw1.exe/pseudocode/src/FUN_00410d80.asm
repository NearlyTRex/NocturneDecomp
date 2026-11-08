; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410d80(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d3651
;   undefined4 DAT_005d3659
;   undefined4 DAT_005d3661
;   undefined4 DAT_005d3669
;   undefined4 DAT_005d3671
;
; Called Functions:
;   FUN_0040cc00
;   FUN_00411060
;   FUN_00468900
;   FUN_005735a0
;   FUN_00574010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410d80
        ;   Label: FUN_00410d80
    PUSH ESI                            ; 00410d81
    PUSH EDI                            ; 00410d82
    PUSH EBP                            ; 00410d83
    MOV EBP,ESP                         ; 00410d84
    SUB ESP,0x34                        ; 00410d86
    AND ESP,0xfffffff8                  ; 00410d89
    MOV EBX,dword ptr [EBP + 0x14]      ; 00410d8c
    LEA EDI,[ESP + 0x10]                ; 00410d8f
    LEA ESI,[EBX + 0x20]                ; 00410d93
    MOVSD ES:EDI,ESI                    ; 00410d96
    MOVSD ES:EDI,ESI                    ; 00410d97
    MOVSD ES:EDI,ESI                    ; 00410d98
    FLD float ptr [EBX + 0x308]         ; 00410d99
    FMUL float ptr [EBP + 0x18]         ; 00410d9f
    PUSH EBX                            ; 00410da2
    FADD float ptr [EBX + 0x304]        ; 00410da3
    LEA EDI,[ESP + 0x20]                ; 00410da9
    FSTP float ptr [EBX + 0x304]        ; 00410dad
    CALL FUN_00411060                   ; 00410db3
        ;   XREF to: 00411060 (UNCONDITIONAL_CALL)  ; undefined FUN_00411060()
    LEA EAX,[EBX + 0x20]                ; 00410db8
    LEA ESI,[ESP + 0x8]                 ; 00410dbb
    ADD ESP,0x4                         ; 00410dbf
    FLD float ptr [EAX]                 ; 00410dc2
    FLD float ptr [EAX + 0x4]           ; 00410dc4
    FLD float ptr [EAX + 0x8]           ; 00410dc7
    FXCH ST2                            ; 00410dca
    FSUB float ptr [ESP + 0x10]         ; 00410dcc
    FXCH                                ; 00410dd0
    FSUB float ptr [ESP + 0x14]         ; 00410dd2
    FXCH ST2                            ; 00410dd6
    FSUB float ptr [ESP + 0x18]         ; 00410dd8
    FXCH                                ; 00410ddc
    FSTP float ptr [ESP + 0x4]          ; 00410dde
    FXCH                                ; 00410de2
    FSTP float ptr [ESP + 0x8]          ; 00410de4
    FSTP float ptr [ESP + 0xc]          ; 00410de8
    MOVSD ES:EDI,ESI                    ; 00410dec
    MOVSD ES:EDI,ESI                    ; 00410ded
    MOVSD ES:EDI,ESI                    ; 00410dee
    FLD float ptr [ESP + 0x20]          ; 00410def
    FMUL double ptr [0x005d3651]        ; 00410df3 | DAT_005d3651
    FDIV float ptr [EBP + 0x18]         ; 00410df9
    FADD double ptr [0x005d3659]        ; 00410dfc | DAT_005d3659
    FST float ptr [ESP]                 ; 00410e02
    FCOMP double ptr [0x005d3661]       ; 00410e05 | DAT_005d3661
    FNSTSW AX                           ; 00410e0b
    SAHF                                ; 00410e0d
    JC 0x00410ec3                       ; 00410e0e
        ;   XREF to: 00410ec3 (CONDITIONAL_JUMP)  ; LAB_00410ec3
    FLD float ptr [ESP]                 ; 00410e14
        ;   Label: LAB_00410e14
    FCOMP double ptr [0x005d3669]       ; 00410e17 | DAT_005d3669
    FNSTSW AX                           ; 00410e1d
    SAHF                                ; 00410e1f
    JBE 0x00410e29                      ; 00410e20
        ;   XREF to: 00410e29 (CONDITIONAL_JUMP)  ; LAB_00410e29
    MOV dword ptr [ESP],0x42700000      ; 00410e22
    FLD float ptr [ESP]                 ; 00410e29
        ;   Label: LAB_00410e29
    FSUB float ptr [EBX + 0x310]        ; 00410e2c
    FMUL double ptr [0x005d3671]        ; 00410e32 | DAT_005d3671
    FLD float ptr [EBX + 0x310]         ; 00410e38
    FXCH                                ; 00410e3e
    FADD ST0,ST1                        ; 00410e40
    FLD float ptr [EBP + 0x18]          ; 00410e42
    FXCH                                ; 00410e45
    FSTP ST2                            ; 00410e47
    FXCH                                ; 00410e49
    FSTP float ptr [EBX + 0x310]        ; 00410e4b
    FMUL float ptr [EBX + 0x310]        ; 00410e51
    FMUL float ptr [EBX + 0x30c]        ; 00410e57
    LEA EAX,[EBX + 0x188]               ; 00410e5d
    FADD float ptr [EBX + 0x184]        ; 00410e63
    PUSH EAX                            ; 00410e69
    FSTP float ptr [EBX + 0x184]        ; 00410e6a
    CALL FUN_00468900                   ; 00410e70
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 00410e75
    MOV EDX,dword ptr [EAX + 0x100]     ; 00410e78
    MOV dword ptr [ESP + 0x30],EDX      ; 00410e7e
    FILD dword ptr [ESP + 0x30]         ; 00410e82
    FCOMP float ptr [EBX + 0x184]       ; 00410e86
    FNSTSW AX                           ; 00410e8c
    SAHF                                ; 00410e8e
    JA 0x00410ecf                       ; 00410e8f
        ;   XREF to: 00410ecf (CONDITIONAL_JUMP)  ; LAB_00410ecf
    MOV dword ptr [EBX + 0x184],0x0     ; 00410e91
    CMP byte ptr [EBX + 0x314],0x0      ; 00410e9b
        ;   Label: LAB_00410e9b
    JZ 0x00410ebc                       ; 00410ea2
        ;   XREF to: 00410ebc (CONDITIONAL_JUMP)  ; LAB_00410ebc
    FLD float ptr [EBX + 0x384]         ; 00410ea4
    FSUB float ptr [EBP + 0x18]         ; 00410eaa
    FST float ptr [EBX + 0x384]         ; 00410ead
    FLDZ                                ; 00410eb3
    FCOMPP                              ; 00410eb5
    FNSTSW AX                           ; 00410eb7
    SAHF                                ; 00410eb9
    JNC 0x00410eed                      ; 00410eba
        ;   XREF to: 00410eed (CONDITIONAL_JUMP)  ; LAB_00410eed
    MOV ESP,EBP                         ; 00410ebc
        ;   Label: LAB_00410ebc
    POP EBP                             ; 00410ebe
    POP EDI                             ; 00410ebf
    POP ESI                             ; 00410ec0
    POP EBX                             ; 00410ec1
    RET                                 ; 00410ec2
    MOV dword ptr [ESP],0x41200000      ; 00410ec3
        ;   Label: LAB_00410ec3
    JMP 0x00410e14                      ; 00410eca
        ;   XREF to: 00410e14 (UNCONDITIONAL_JUMP)  ; LAB_00410e14
    FLDZ                                ; 00410ecf
        ;   Label: LAB_00410ecf
    FCOMP float ptr [EBX + 0x184]       ; 00410ed1
    FNSTSW AX                           ; 00410ed7
    SAHF                                ; 00410ed9
    JBE 0x00410e9b                      ; 00410eda
        ;   XREF to: 00410e9b (CONDITIONAL_JUMP)  ; LAB_00410e9b
    DEC EDX                             ; 00410edc
    MOV dword ptr [ESP + 0x30],EDX      ; 00410edd
    FILD dword ptr [ESP + 0x30]         ; 00410ee1
    FSTP float ptr [EBX + 0x184]        ; 00410ee5
    JMP 0x00410e9b                      ; 00410eeb
        ;   XREF to: 00410e9b (UNCONDITIONAL_JUMP)  ; LAB_00410e9b
    MOV ESI,dword ptr [EBX + 0x380]     ; 00410eed
        ;   Label: LAB_00410eed
    PUSH ESI                            ; 00410ef3
    CALL FUN_005735a0                   ; 00410ef4
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 00410ef9
    TEST EAX,EAX                        ; 00410efc
    JNZ 0x00410f46                      ; 00410efe
        ;   XREF to: 00410f46 (CONDITIONAL_JUMP)  ; LAB_00410f46
    PUSH 0x42480000                     ; 00410f00
    SUB ESP,0x8                         ; 00410f05
    FLD float ptr [EBX + 0x28]          ; 00410f08
    FSTP double ptr [ESP]               ; 00410f0b
    SUB ESP,0x8                         ; 00410f0e
    FLD float ptr [EBX + 0x24]          ; 00410f11
    FSTP double ptr [ESP]               ; 00410f14
    SUB ESP,0x8                         ; 00410f17
    FLD float ptr [EBX + 0x20]          ; 00410f1a
    FSTP double ptr [ESP]               ; 00410f1d
    CALL FUN_00574010                   ; 00410f20
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; undefined FUN_00574010()
    ADD ESP,0x1c                        ; 00410f25
    TEST EAX,EAX                        ; 00410f28
    JZ 0x00410f46                       ; 00410f2a
        ;   XREF to: 00410f46 (CONDITIONAL_JUMP)  ; LAB_00410f46
    LEA EAX,[EBX + 0x314]               ; 00410f2c
    PUSH EAX                            ; 00410f32
    MOV EDX,dword ptr [EBX + 0x154]     ; 00410f33
    PUSH EBX                            ; 00410f39
    CALL dword ptr [EDX + 0x30]         ; 00410f3a
    ADD ESP,0x8                         ; 00410f3d
    MOV dword ptr [EBX + 0x380],EAX     ; 00410f40
    PUSH dword ptr [EBX + 0x37c]        ; 00410f46
        ;   Label: LAB_00410f46
    PUSH dword ptr [EBX + 0x378]        ; 00410f4c
    CALL FUN_0040cc00                   ; 00410f52
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x38],EAX      ; 00410f57
    MOV EAX,dword ptr [ESP + 0x38]      ; 00410f5b
    MOV dword ptr [EBX + 0x384],EAX     ; 00410f5f
    ADD ESP,0x8                         ; 00410f65
    MOV ESP,EBP                         ; 00410f68
    POP EBP                             ; 00410f6a
    POP EDI                             ; 00410f6b
    POP ESI                             ; 00410f6c
    POP EBX                             ; 00410f6d
    RET                                 ; 00410f6e

