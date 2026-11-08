; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516e40(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00516fd0 at 0051706b
;
; Referenced Globals:
;   undefined4 DAT_0061f600
;   undefined4 DAT_0061f608
;   undefined4 DAT_01d2c0c4
;   undefined4 DAT_01d2c0c8
;   undefined4 DAT_01d2c0d0
;   undefined4 DAT_01d2c0d4
;   undefined4 DAT_01d2c5c8
;   undefined4 DAT_01d2c5cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516e40
        ;   Label: FUN_00516e40
    PUSH ESI                            ; 00516e41
    PUSH EDI                            ; 00516e42
    PUSH EBP                            ; 00516e43
    SUB ESP,0x10                        ; 00516e44
    MOV EBP,dword ptr [ESP + 0x24]      ; 00516e47
    MOV EAX,[0x01d2c0c4]                ; 00516e4b | DAT_01d2c0c4
    LEA EDI,[EAX*0x4 + 0x0]             ; 00516e50
    ADD EDI,EAX                         ; 00516e57
    MOV EAX,dword ptr [ESP + 0x28]      ; 00516e59
    SHL EDI,0x4                         ; 00516e5d
    FLD float ptr [EBP + 0x18]          ; 00516e60
    ADD EDI,0x1d2c0c8                   ; 00516e63
    FCOMP float ptr [EAX + 0x18]        ; 00516e69
    FNSTSW AX                           ; 00516e6c
    SAHF                                ; 00516e6e
    JBE 0x00516e7b                      ; 00516e6f
        ;   XREF to: 00516e7b (CONDITIONAL_JUMP)  ; LAB_00516e7b
    MOV EAX,EBP                         ; 00516e71
    MOV EBP,dword ptr [ESP + 0x28]      ; 00516e73
    MOV dword ptr [ESP + 0x28],EAX      ; 00516e77
    LEA EBX,[EBP + 0x18]                ; 00516e7b
        ;   Label: LAB_00516e7b
    MOV EAX,EDI                         ; 00516e7e
    FLD float ptr [EBX]                 ; 00516e80
    FLD float ptr [0x0061f600]          ; 00516e82 | DAT_0061f600
    FSUBP                               ; 00516e88
    FISTP dword ptr [EAX]               ; 00516e8a | DAT_01d2c0c8
    MOV EBX,dword ptr [ESP + 0x28]      ; 00516e8c
    LEA EAX,[EDI + 0x4]                 ; 00516e90
    ADD EBX,0x18                        ; 00516e93
    FLD float ptr [EBX]                 ; 00516e96
    FLD float ptr [0x0061f600]          ; 00516e98 | DAT_0061f600
    FSUBP                               ; 00516e9e
    FISTP dword ptr [EAX]               ; 00516ea0
    MOV EAX,dword ptr [EDI]             ; 00516ea2 | DAT_01d2c0c8
    CMP EAX,dword ptr [EDI + 0x4]       ; 00516ea4
    JZ 0x00516f68                       ; 00516ea7
        ;   XREF to: 00516f68 (CONDITIONAL_JUMP)  ; LAB_00516f68
    CMP EAX,dword ptr [0x01d2c5c8]      ; 00516ead | DAT_01d2c5c8
    JGE 0x00516eba                      ; 00516eb3
        ;   XREF to: 00516eba (CONDITIONAL_JUMP)  ; LAB_00516eba
    MOV [0x01d2c5c8],EAX                ; 00516eb5 | DAT_01d2c5c8
    MOV EBX,dword ptr [0x01d2c5cc]      ; 00516eba | DAT_01d2c5cc
        ;   Label: LAB_00516eba
    MOV EAX,dword ptr [EDI + 0x4]       ; 00516ec0
    CMP EAX,EBX                         ; 00516ec3
    JLE 0x00516ecc                      ; 00516ec5
        ;   XREF to: 00516ecc (CONDITIONAL_JUMP)  ; LAB_00516ecc
    MOV [0x01d2c5cc],EAX                ; 00516ec7 | DAT_01d2c5cc
    MOV EAX,dword ptr [ESP + 0x28]      ; 00516ecc
        ;   Label: LAB_00516ecc
    FLD float ptr [EAX + 0x18]          ; 00516ed0
    FSUB float ptr [EBP + 0x18]         ; 00516ed3
    FSTP float ptr [ESP + 0x8]          ; 00516ed6
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 00516eda
    JGE 0x00516f70                      ; 00516ee2
        ;   XREF to: 00516f70 (CONDITIONAL_JUMP)  ; LAB_00516f70
    XOR EAX,EAX                         ; 00516ee8
    MOV dword ptr [ESP + 0x8],EAX       ; 00516eea
    FLD1                                ; 00516eee
        ;   Label: LAB_00516eee
    MOV EAX,dword ptr [ESP + 0x28]      ; 00516ef0
    FSUB float ptr [EBP + 0x18]         ; 00516ef4
    FILD dword ptr [EDI]                ; 00516ef7 | DAT_01d2c0c8
    FLD float ptr [EAX + 0x14]          ; 00516ef9
    FSUB float ptr [EBP + 0x14]         ; 00516efc
    FXCH                                ; 00516eff
    FADDP ST2,ST0                       ; 00516f01
    FLD float ptr [ESP + 0x8]           ; 00516f03
    FXCH                                ; 00516f07
    FMUL ST1                            ; 00516f09
    FXCH ST2                            ; 00516f0b
    FMULP                               ; 00516f0d
    LEA EBX,[ESP + 0x4]                 ; 00516f0f
    LEA EAX,[EDI + 0xc]                 ; 00516f13
    FXCH                                ; 00516f16
    FSTP float ptr [ESP + 0x4]          ; 00516f18
    FSTP float ptr [ESP]                ; 00516f1c
    FLD float ptr [EBX]                 ; 00516f1f
    FLD float ptr [0x0061f608]          ; 00516f21 | DAT_0061f608
    FMULP                               ; 00516f27
    FLD float ptr [0x0061f600]          ; 00516f29 | DAT_0061f600
    FSUBP                               ; 00516f2f
    FISTP dword ptr [EAX]               ; 00516f31 | DAT_01d2c0d4
    MOV EAX,dword ptr [ESP + 0x28]      ; 00516f33
    FLD float ptr [EAX + 0x14]          ; 00516f37
    FSUB float ptr [EBP + 0x14]         ; 00516f3a
    FMUL float ptr [ESP]                ; 00516f3d
    LEA EBX,[ESP + 0xc]                 ; 00516f40
    FADD float ptr [EBP + 0x14]         ; 00516f44
    LEA EAX,[EDI + 0x8]                 ; 00516f47
    FSTP float ptr [ESP + 0xc]          ; 00516f4a
    FLD float ptr [EBX]                 ; 00516f4e
    FLD float ptr [0x0061f608]          ; 00516f50 | DAT_0061f608
    FMULP                               ; 00516f56
    FLD float ptr [0x0061f600]          ; 00516f58 | DAT_0061f600
    FSUBP                               ; 00516f5e
    FISTP dword ptr [EAX]               ; 00516f60 | DAT_01d2c0d0
    INC dword ptr [0x01d2c0c4]          ; 00516f62 | DAT_01d2c0c4
    ADD ESP,0x10                        ; 00516f68
        ;   Label: LAB_00516f68
    POP EBP                             ; 00516f6b
    POP EDI                             ; 00516f6c
    POP ESI                             ; 00516f6d
    POP EBX                             ; 00516f6e
    RET                                 ; 00516f6f
    FLD1                                ; 00516f70
        ;   Label: LAB_00516f70
    FDIV float ptr [ESP + 0x8]          ; 00516f72
    FSTP float ptr [ESP + 0x8]          ; 00516f76
    JMP 0x00516eee                      ; 00516f7a
        ;   XREF to: 00516eee (UNCONDITIONAL_JUMP)  ; LAB_00516eee

