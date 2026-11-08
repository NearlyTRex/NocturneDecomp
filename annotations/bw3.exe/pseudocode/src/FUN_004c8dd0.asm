; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c8dd0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c439d
;   undefined4 DAT_01d22da4
;   undefined4 DAT_01d22da8
;   undefined4 DAT_01d22dac
;   undefined4 DAT_01d22db0
;
; Called Functions:
;   FUN_00408b80
;   FUN_004fc350
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8dd0
        ;   Label: FUN_004c8dd0
    PUSH EBP                            ; 004c8dd1
    SUB ESP,0x10c                       ; 004c8dd2
    MOV EBP,dword ptr [ESP + 0x11c]     ; 004c8dd8
    MOV EBX,dword ptr [ESP + 0x118]     ; 004c8ddf
    PUSH 0xb                            ; 004c8de6
    ADD EBX,0x158                       ; 004c8de8
    PUSH EBX                            ; 004c8dee
    CALL FUN_004fc350                   ; 004c8def
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x110],EAX     ; 004c8df4
    FLD float ptr [ESP + 0x110]         ; 004c8dfb
    FLDZ                                ; 004c8e02
    ADD ESP,0x8                         ; 004c8e04
    FCOMPP                              ; 004c8e07
    FNSTSW AX                           ; 004c8e09
    SAHF                                ; 004c8e0b
    JC 0x004c8e19                       ; 004c8e0c
        ;   XREF to: 004c8e19 (CONDITIONAL_JUMP)  ; LAB_004c8e19
    XOR EAX,EAX                         ; 004c8e0e
    ADD ESP,0x10c                       ; 004c8e10
    POP EBP                             ; 004c8e16
    POP EBX                             ; 004c8e17
    RET                                 ; 004c8e18
    PUSH EDI                            ; 004c8e19
        ;   Label: LAB_004c8e19
    PUSH ESI                            ; 004c8e1a
    MOV EDX,dword ptr [0x01d22da4]      ; 004c8e1b | DAT_01d22da4
    PUSH EDX                            ; 004c8e21
    PUSH EBX                            ; 004c8e22
    LEA ESI,[ESP + 0x7c]                ; 004c8e23
    LEA EDI,[ESP + 0x58]                ; 004c8e27
    CALL FUN_0054dcc0                   ; 004c8e2b
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    ADD ESP,0x8                         ; 004c8e30
    MOV ECX,dword ptr [0x01d22dac]      ; 004c8e33 | DAT_01d22dac
    LEA ESI,[ESP + 0x74]                ; 004c8e39
    PUSH ECX                            ; 004c8e3d
    MOVSD ES:EDI,ESI                    ; 004c8e3e
    MOVSD ES:EDI,ESI                    ; 004c8e3f
    MOVSD ES:EDI,ESI                    ; 004c8e40
    PUSH EBX                            ; 004c8e41
    LEA ESI,[ESP + 0x88]                ; 004c8e42
    LEA EDI,[ESP + 0x4c]                ; 004c8e49
    CALL FUN_0054dcc0                   ; 004c8e4d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x88]                ; 004c8e52
    ADD ESP,0x8                         ; 004c8e59
    MOVSD ES:EDI,ESI                    ; 004c8e5c
    MOVSD ES:EDI,ESI                    ; 004c8e5d
    MOVSD ES:EDI,ESI                    ; 004c8e5e
    FLD float ptr [ESP + 0x44]          ; 004c8e5f
    FLD float ptr [ESP + 0x48]          ; 004c8e63
    FLD float ptr [ESP + 0x4c]          ; 004c8e67
    LEA EDI,[ESP + 0x5c]                ; 004c8e6b
    LEA ESI,[ESP + 0x2c]                ; 004c8e6f
    FXCH ST2                            ; 004c8e73
    FADD float ptr [ESP + 0x50]         ; 004c8e75
    FXCH                                ; 004c8e79
    FADD float ptr [ESP + 0x54]         ; 004c8e7b
    FXCH ST2                            ; 004c8e7f
    FADD float ptr [ESP + 0x58]         ; 004c8e81
    FXCH                                ; 004c8e85
    FSTP float ptr [ESP + 0x2c]         ; 004c8e87
    FXCH                                ; 004c8e8b
    FSTP float ptr [ESP + 0x30]         ; 004c8e8d
    FSTP float ptr [ESP + 0x34]         ; 004c8e91
    MOVSD ES:EDI,ESI                    ; 004c8e95
    MOVSD ES:EDI,ESI                    ; 004c8e96
    MOVSD ES:EDI,ESI                    ; 004c8e97
    FLD float ptr [ESP + 0x5c]          ; 004c8e98
    FMUL float ptr [0x005c439d]         ; 004c8e9c | DAT_005c439d
    FLD float ptr [ESP + 0x60]          ; 004c8ea2
    FMUL float ptr [0x005c439d]         ; 004c8ea6 | DAT_005c439d
    FLD float ptr [ESP + 0x64]          ; 004c8eac
    FMUL float ptr [0x005c439d]         ; 004c8eb0 | DAT_005c439d
    LEA EDI,[ESP + 0x14]                ; 004c8eb6
    LEA ESI,[ESP + 0xb0]                ; 004c8eba
    FXCH ST2                            ; 004c8ec1
    FSTP float ptr [ESP + 0xb0]         ; 004c8ec3
    FSTP float ptr [ESP + 0xb4]         ; 004c8eca
    FSTP float ptr [ESP + 0xb8]         ; 004c8ed1
    MOVSD ES:EDI,ESI                    ; 004c8ed8
    MOVSD ES:EDI,ESI                    ; 004c8ed9
    MOVSD ES:EDI,ESI                    ; 004c8eda
    MOV ESI,dword ptr [0x01d22da8]      ; 004c8edb | DAT_01d22da8
    PUSH ESI                            ; 004c8ee1
    PUSH EBX                            ; 004c8ee2
    LEA ESI,[ESP + 0x94]                ; 004c8ee3
    LEA EDI,[ESP + 0x70]                ; 004c8eea
    CALL FUN_0054dcc0                   ; 004c8eee
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x94]                ; 004c8ef3
    ADD ESP,0x8                         ; 004c8efa
    MOVSD ES:EDI,ESI                    ; 004c8efd
    MOVSD ES:EDI,ESI                    ; 004c8efe
    MOVSD ES:EDI,ESI                    ; 004c8eff
    MOV EDI,dword ptr [0x01d22db0]      ; 004c8f00 | DAT_01d22db0
    PUSH EDI                            ; 004c8f06
    PUSH EBX                            ; 004c8f07
    LEA ESI,[ESP + 0xa0]                ; 004c8f08
    LEA EDI,[ESP + 0x10]                ; 004c8f0f
    CALL FUN_0054dcc0                   ; 004c8f13
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0xa0]                ; 004c8f18
    ADD ESP,0x8                         ; 004c8f1f
    MOVSD ES:EDI,ESI                    ; 004c8f22
    MOVSD ES:EDI,ESI                    ; 004c8f23
    MOVSD ES:EDI,ESI                    ; 004c8f24
    FLD float ptr [ESP + 0x8]           ; 004c8f25
    FLD float ptr [ESP + 0xc]           ; 004c8f29
    FLD float ptr [ESP + 0x10]          ; 004c8f2d
    LEA EDI,[ESP + 0xd4]                ; 004c8f31
    LEA ESI,[ESP + 0xc8]                ; 004c8f38
    FXCH ST2                            ; 004c8f3f
    FADD float ptr [ESP + 0x68]         ; 004c8f41
    FXCH                                ; 004c8f45
    FADD float ptr [ESP + 0x6c]         ; 004c8f47
    FXCH ST2                            ; 004c8f4b
    FADD float ptr [ESP + 0x70]         ; 004c8f4d
    FXCH                                ; 004c8f51
    FSTP float ptr [ESP + 0xc8]         ; 004c8f53
    FXCH                                ; 004c8f5a
    FSTP float ptr [ESP + 0xcc]         ; 004c8f5c
    FSTP float ptr [ESP + 0xd0]         ; 004c8f63
    MOVSD ES:EDI,ESI                    ; 004c8f6a
    MOVSD ES:EDI,ESI                    ; 004c8f6b
    MOVSD ES:EDI,ESI                    ; 004c8f6c
    FLD float ptr [ESP + 0xd4]          ; 004c8f6d
    FMUL float ptr [0x005c439d]         ; 004c8f74 | DAT_005c439d
    FLD float ptr [ESP + 0xd8]          ; 004c8f7a
    FMUL float ptr [0x005c439d]         ; 004c8f81 | DAT_005c439d
    FLD float ptr [ESP + 0xdc]          ; 004c8f87
    FMUL float ptr [0x005c439d]         ; 004c8f8e | DAT_005c439d
    FLD float ptr [ESP + 0x14]          ; 004c8f94
    FLD float ptr [ESP + 0x18]          ; 004c8f98
    LEA EDI,[ESP + 0xf8]                ; 004c8f9c
    LEA ESI,[ESP + 0x104]               ; 004c8fa3
    FXCH ST4                            ; 004c8faa
    FSTP float ptr [ESP + 0x104]        ; 004c8fac
    FXCH ST2                            ; 004c8fb3
    FSTP float ptr [ESP + 0x108]        ; 004c8fb5
    FSTP float ptr [ESP + 0x10c]        ; 004c8fbc
    MOVSD ES:EDI,ESI                    ; 004c8fc3
    MOVSD ES:EDI,ESI                    ; 004c8fc4
    MOVSD ES:EDI,ESI                    ; 004c8fc5
    FLD float ptr [ESP + 0x1c]          ; 004c8fc6
    LEA EDI,[ESP + 0xe0]                ; 004c8fca
    LEA ESI,[ESP + 0xec]                ; 004c8fd1
    FXCH                                ; 004c8fd8
    FADD float ptr [ESP + 0xf8]         ; 004c8fda
    FXCH ST2                            ; 004c8fe1
    FADD float ptr [ESP + 0xfc]         ; 004c8fe3
    FXCH                                ; 004c8fea
    FADD float ptr [ESP + 0x100]        ; 004c8fec
    FXCH ST2                            ; 004c8ff3
    FSTP float ptr [ESP + 0xec]         ; 004c8ff5
    FSTP float ptr [ESP + 0xf0]         ; 004c8ffc
    FSTP float ptr [ESP + 0xf4]         ; 004c9003
    MOVSD ES:EDI,ESI                    ; 004c900a
    MOVSD ES:EDI,ESI                    ; 004c900b
    MOVSD ES:EDI,ESI                    ; 004c900c
    FLD float ptr [ESP + 0xe0]          ; 004c900d
    FMUL float ptr [0x005c439d]         ; 004c9014 | DAT_005c439d
    FLD float ptr [ESP + 0xe4]          ; 004c901a
    FMUL float ptr [0x005c439d]         ; 004c9021 | DAT_005c439d
    LEA EAX,[ESP + 0x20]                ; 004c9027
    FLD float ptr [ESP + 0xe8]          ; 004c902b
    FMUL float ptr [0x005c439d]         ; 004c9032 | DAT_005c439d
    PUSH EAX                            ; 004c9038
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c9039
    LEA EDI,[ESP + 0x24]                ; 004c9040
    LEA ESI,[ESP + 0xc0]                ; 004c9044
    FXCH ST2                            ; 004c904b
    FSTP float ptr [ESP + 0xc0]         ; 004c904d
    FSTP float ptr [ESP + 0xc4]         ; 004c9054
    FSTP float ptr [ESP + 0xc8]         ; 004c905b
    MOVSD ES:EDI,ESI                    ; 004c9062
    MOVSD ES:EDI,ESI                    ; 004c9063
    MOVSD ES:EDI,ESI                    ; 004c9064
    PUSH EAX                            ; 004c9065
    LEA ESI,[ESP + 0xac]                ; 004c9066
    LEA EDI,[ESP + 0x40]                ; 004c906d
    CALL FUN_00408b80                   ; 004c9071
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xac]                ; 004c9076
    ADD ESP,0x8                         ; 004c907d
    LEA EAX,[ESP + 0x38]                ; 004c9080
    MOVSD ES:EDI,ESI                    ; 004c9084
    MOVSD ES:EDI,ESI                    ; 004c9085
    MOVSD ES:EDI,ESI                    ; 004c9086
    CMP EBP,EAX                         ; 004c9087
    JZ 0x004c90a0                       ; 004c9089
        ;   XREF to: 004c90a0 (CONDITIONAL_JUMP)  ; LAB_004c90a0
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c908b
    MOV dword ptr [EBP],EAX             ; 004c908f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c9092
    MOV dword ptr [EBP + 0x4],EAX       ; 004c9096
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c9099
    MOV dword ptr [EBP + 0x8],EAX       ; 004c909d
    MOV EAX,0x1                         ; 004c90a0
        ;   Label: LAB_004c90a0
    POP ESI                             ; 004c90a5
    POP EDI                             ; 004c90a6
    ADD ESP,0x10c                       ; 004c90a7
    POP EBP                             ; 004c90ad
    POP EBX                             ; 004c90ae
    RET                                 ; 004c90af

