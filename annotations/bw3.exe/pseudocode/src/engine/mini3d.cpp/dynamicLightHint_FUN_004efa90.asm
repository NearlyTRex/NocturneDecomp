; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_dynamicLightHint_FUN_004efa90(float *arg1,float *arg2,float *arg3,float *arg4)
;
; Parameters:
; float *          Stack[0x4]:4   arg1
; float *          Stack[0x8]:4   arg2
; float *          Stack[0xc]:4   arg3
; float *          Stack[0x10]:4   arg4
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d79784
;   undefined4 DAT_02cf6100
;   undefined4 DAT_02cf6104
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efa90
        ;   Label: engine_mini3d.cpp_dynamicLightHint_FUN_004efa90
    PUSH ESI                            ; 004efa91
    PUSH EDI                            ; 004efa92
    PUSH EBP                            ; 004efa93
    SUB ESP,0x34                        ; 004efa94
    MOV EDI,dword ptr [ESP + 0x48]      ; 004efa97
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004efa9b
    MOV EBP,dword ptr [ESP + 0x50]      ; 004efa9f
    CMP dword ptr [0x01d79784],0x0      ; 004efaa3 | DAT_01d79784
    JZ 0x004efb02                       ; 004efaaa
        ;   XREF to: 004efb02 (CONDITIONAL_JUMP)  ; LAB_004efb02
    CMP dword ptr [0x02cf6100],0x0      ; 004efab0 | DAT_02cf6100
    JZ 0x004efacb                       ; 004efab7
        ;   XREF to: 004efacb (CONDITIONAL_JUMP)  ; LAB_004efacb
    CMP dword ptr [0x01c6cee8],0x0      ; 004efab9 | DAT_01c6cee8
    JZ 0x004efacb                       ; 004efac0
        ;   XREF to: 004efacb (CONDITIONAL_JUMP)  ; LAB_004efacb
    CMP dword ptr [0x02cf6104],0x0      ; 004efac2 | DAT_02cf6104
    JZ 0x004efb02                       ; 004efac9
        ;   XREF to: 004efb02 (CONDITIONAL_JUMP)  ; LAB_004efb02
    TEST EDI,EDI                        ; 004efacb
        ;   Label: LAB_004efacb
    JNZ 0x004efb1a                      ; 004efacd
        ;   XREF to: 004efb1a (CONDITIONAL_JUMP)  ; LAB_004efb1a
    MOV EBX,dword ptr [0x01d79784]      ; 004efacf | DAT_01d79784
    XOR EDX,EDX                         ; 004efad5
    TEST EBX,EBX                        ; 004efad7
    JLE 0x004efaf0                      ; 004efad9
        ;   XREF to: 004efaf0 (CONDITIONAL_JUMP)  ; LAB_004efaf0
    MOV AH,0x1                          ; 004efadb
    MOV ESI,dword ptr [0x01d79784]      ; 004efadd | DAT_01d79784
    INC EDX                             ; 004efae3
        ;   Label: LAB_004efae3
    MOV byte ptr [EDX + 0x1d7a65f],AH   ; 004efae4
    CMP EDX,ESI                         ; 004efaea
    JL 0x004efae3                       ; 004efaec
        ;   XREF to: 004efae3 (CONDITIONAL_JUMP)  ; LAB_004efae3
    MOV EAX,EAX                         ; 004efaee
    CMP dword ptr [0x02cf6104],0x0      ; 004efaf0 | DAT_02cf6104
        ;   Label: LAB_004efaf0
    JZ 0x004efb02                       ; 004efaf7
        ;   XREF to: 004efb02 (CONDITIONAL_JUMP)  ; LAB_004efb02
    CMP dword ptr [0x01c6cee8],0x0      ; 004efaf9 | DAT_01c6cee8
    JNZ 0x004efb0a                      ; 004efb00
        ;   XREF to: 004efb0a (CONDITIONAL_JUMP)  ; LAB_004efb0a
    ADD ESP,0x34                        ; 004efb02
        ;   Label: LAB_004efb02
    POP EBP                             ; 004efb05
    POP EDI                             ; 004efb06
    POP ESI                             ; 004efb07
    POP EBX                             ; 004efb08
    RET                                 ; 004efb09
    PUSH 0x1d7a660                      ; 004efb0a
        ;   Label: LAB_004efb0a
    CALL dword ptr [0x02cf6104]         ; 004efb0f | DAT_02cf6104
    ADD ESP,0x4                         ; 004efb15
    JMP 0x004efb02                      ; 004efb18
        ;   XREF to: 004efb02 (UNCONDITIONAL_JUMP)  ; LAB_004efb02
    XOR EDX,EDX                         ; 004efb1a
        ;   Label: LAB_004efb1a
    MOV ECX,dword ptr [0x01d79784]      ; 004efb1c | DAT_01d79784
    MOV dword ptr [ESP + 0x28],EDX      ; 004efb22
    TEST ECX,ECX                        ; 004efb26
    JLE 0x004efd23                      ; 004efb28
        ;   XREF to: 004efd23 (CONDITIONAL_JUMP)  ; LAB_004efd23
    MOV dword ptr [ESP + 0x24],0x1d79788 ; 004efb2e
    MOV ECX,dword ptr [ESP + 0x24]      ; 004efb36
        ;   Label: LAB_004efb36
    FLD1                                ; 004efb3a
    FDIV float ptr [ECX + 0x3c]         ; 004efb3c
    MOV EDX,0xff                        ; 004efb3f
    XOR ESI,ESI                         ; 004efb44
    MOV dword ptr [ESP + 0x30],EDX      ; 004efb46
    FSTP float ptr [ESP + 0x2c]         ; 004efb4a
    XOR EDX,EDX                         ; 004efb4e
        ;   Label: LAB_004efb4e
    TEST SI,0x1                         ; 004efb50
    JZ 0x004efd53                       ; 004efb55
        ;   XREF to: 004efd53 (CONDITIONAL_JUMP)  ; LAB_004efd53
    MOV EAX,dword ptr [EBP]             ; 004efb5b
    MOV dword ptr [ESP + 0x18],EAX      ; 004efb5e
        ;   Label: LAB_004efb5e
    TEST SI,0x2                         ; 004efb62
    JZ 0x004efd5e                       ; 004efb67
        ;   XREF to: 004efd5e (CONDITIONAL_JUMP)  ; LAB_004efd5e
    MOV EAX,dword ptr [EBP + 0x4]       ; 004efb6d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004efb70
        ;   Label: LAB_004efb70
    TEST SI,0x4                         ; 004efb74
    JZ 0x004efd6a                       ; 004efb79
        ;   XREF to: 004efd6a (CONDITIONAL_JUMP)  ; LAB_004efd6a
    MOV EAX,dword ptr [EBP + 0x8]       ; 004efb7f
    MOV dword ptr [ESP + 0x20],EAX      ; 004efb82
        ;   Label: LAB_004efb82
    FLD float ptr [ESP + 0x1c]          ; 004efb86
    FMUL float ptr [EBX + 0x4]          ; 004efb8a
    FLD float ptr [ESP + 0x1c]          ; 004efb8d
    FMUL float ptr [EBX + 0x10]         ; 004efb91
    FLD float ptr [ESP + 0x1c]          ; 004efb94
    FMUL float ptr [EBX + 0x1c]         ; 004efb98
    FLD float ptr [ESP + 0x18]          ; 004efb9b
    FMUL float ptr [EBX]                ; 004efb9f
    FLD float ptr [ESP + 0x18]          ; 004efba1
    FMUL float ptr [EBX + 0xc]          ; 004efba5
    FLD float ptr [ESP + 0x18]          ; 004efba8
    FXCH ST2                            ; 004efbac
    FADDP ST5,ST0                       ; 004efbae
    FXCH                                ; 004efbb0
    FMUL float ptr [EBX + 0x18]         ; 004efbb2
    FLD float ptr [ESP + 0x20]          ; 004efbb5
    FMUL float ptr [EBX + 0x8]          ; 004efbb9
    FXCH ST2                            ; 004efbbc
    FADDP ST4,ST0                       ; 004efbbe
    FADDP ST2,ST0                       ; 004efbc0
    FLD float ptr [ESP + 0x20]          ; 004efbc2
    FMUL float ptr [EBX + 0x14]         ; 004efbc6
    FLD float ptr [ESP + 0x20]          ; 004efbc9
    FXCH                                ; 004efbcd
    FADDP ST4,ST0                       ; 004efbcf
    FMUL float ptr [EBX + 0x20]         ; 004efbd1
    FXCH ST3                            ; 004efbd4
    FADD float ptr [EDI + 0x4]          ; 004efbd6
    FXCH                                ; 004efbd9
    FADDP ST4,ST0                       ; 004efbdb
    FSUB float ptr [ECX + 0x4]          ; 004efbdd
    FXCH ST3                            ; 004efbe0
    FADD float ptr [EDI]                ; 004efbe2
    FXCH ST3                            ; 004efbe4
    FST float ptr [ESP + 0x10]          ; 004efbe6
    FMUL float ptr [ECX + 0x18]         ; 004efbea
    FXCH ST3                            ; 004efbed
    FSTP float ptr [ESP + 0xc]          ; 004efbef
    FLD float ptr [ESP + 0x10]          ; 004efbf3
    FMUL float ptr [ECX + 0x1c]         ; 004efbf7
    FLD float ptr [ESP + 0x10]          ; 004efbfa
    FMUL float ptr [ECX + 0x20]         ; 004efbfe
    FXCH ST3                            ; 004efc01
    FADDP ST2,ST0                       ; 004efc03
    FLD float ptr [ESP + 0xc]           ; 004efc05
    FSUB float ptr [ECX]                ; 004efc09
    FXCH ST2                            ; 004efc0b
    FADD float ptr [EDI + 0x8]          ; 004efc0d
    FXCH ST2                            ; 004efc10
    FST float ptr [ESP + 0xc]           ; 004efc12
    FMUL float ptr [ECX + 0xc]          ; 004efc16
    FXCH ST2                            ; 004efc19
    FSTP float ptr [ESP + 0x14]         ; 004efc1b
    FLD float ptr [ESP + 0xc]           ; 004efc1f
    FMUL float ptr [ECX + 0x10]         ; 004efc23
    FLD float ptr [ESP + 0xc]           ; 004efc26
    FMUL float ptr [ECX + 0x14]         ; 004efc2a
    FLD float ptr [ESP + 0x14]          ; 004efc2d
    FSUB float ptr [ECX + 0x8]          ; 004efc31
    FXCH ST4                            ; 004efc34
    FADDP ST6,ST0                       ; 004efc36
    FXCH ST3                            ; 004efc38
    FST float ptr [ESP + 0x14]          ; 004efc3a
    FMUL float ptr [ECX + 0x24]         ; 004efc3e
    FXCH                                ; 004efc41
    FADDP ST2,ST0                       ; 004efc43
    FXCH ST2                            ; 004efc45
    FADDP ST3,ST0                       ; 004efc47
    FLD float ptr [ESP + 0x14]          ; 004efc49
    FMUL float ptr [ECX + 0x28]         ; 004efc4d
    FLD float ptr [ESP + 0x14]          ; 004efc50
    FXCH ST3                            ; 004efc54
    FADDP ST5,ST0                       ; 004efc56
    FXCH ST2                            ; 004efc58
    FMUL float ptr [ECX + 0x2c]         ; 004efc5a
    FXCH ST4                            ; 004efc5d
    FLD float ptr [ESP + 0x2c]          ; 004efc5f
    FXCH                                ; 004efc63
    FMUL ST1                            ; 004efc65
    FXCH ST3                            ; 004efc67
    FADDP ST2,ST0                       ; 004efc69
    FXCH ST4                            ; 004efc6b
    FADDP ST3,ST0                       ; 004efc6d
    FMULP ST3                           ; 004efc6f
    FXCH                                ; 004efc71
    FSTP float ptr [ESP + 0x8]          ; 004efc73
    FSTP float ptr [ESP]                ; 004efc77
    FSTP float ptr [ESP + 0x4]          ; 004efc7a
    FLD float ptr [ESP]                 ; 004efc7e
    FCOMP float ptr [ESP + 0x8]         ; 004efc81
    FNSTSW AX                           ; 004efc85
    SAHF                                ; 004efc87
    JBE 0x004efc8d                      ; 004efc88
        ;   XREF to: 004efc8d (CONDITIONAL_JUMP)  ; LAB_004efc8d
    OR DL,0x1                           ; 004efc8a
    FLD float ptr [ESP + 0x8]           ; 004efc8d
        ;   Label: LAB_004efc8d
    FCHS                                ; 004efc91
    FCOMP float ptr [ESP]               ; 004efc93
    FNSTSW AX                           ; 004efc96
    SAHF                                ; 004efc98
    JBE 0x004efc9e                      ; 004efc99
        ;   XREF to: 004efc9e (CONDITIONAL_JUMP)  ; LAB_004efc9e
    OR DL,0x2                           ; 004efc9b
    FLD float ptr [ESP + 0x4]           ; 004efc9e
        ;   Label: LAB_004efc9e
    FCOMP float ptr [ESP + 0x8]         ; 004efca2
    FNSTSW AX                           ; 004efca6
    SAHF                                ; 004efca8
    JBE 0x004efcae                      ; 004efca9
        ;   XREF to: 004efcae (CONDITIONAL_JUMP)  ; LAB_004efcae
    OR DL,0x4                           ; 004efcab
    FLD float ptr [ESP + 0x8]           ; 004efcae
        ;   Label: LAB_004efcae
    FCHS                                ; 004efcb2
    FCOMP float ptr [ESP + 0x4]         ; 004efcb4
    FNSTSW AX                           ; 004efcb8
    SAHF                                ; 004efcba
    JBE 0x004efcc0                      ; 004efcbb
        ;   XREF to: 004efcc0 (CONDITIONAL_JUMP)  ; LAB_004efcc0
    OR DL,0x8                           ; 004efcbd
    FLDZ                                ; 004efcc0
        ;   Label: LAB_004efcc0
    FCOMP float ptr [ESP + 0x8]         ; 004efcc2
    FNSTSW AX                           ; 004efcc6
    SAHF                                ; 004efcc8
    JC 0x004efcce                       ; 004efcc9
        ;   XREF to: 004efcce (CONDITIONAL_JUMP)  ; LAB_004efcce
    OR DL,0x10                          ; 004efccb
    FLD float ptr [ESP + 0x8]           ; 004efcce
        ;   Label: LAB_004efcce
    FCOMP float ptr [ECX + 0x34]        ; 004efcd2
    FNSTSW AX                           ; 004efcd5
    SAHF                                ; 004efcd7
    JBE 0x004efcdd                      ; 004efcd8
        ;   XREF to: 004efcdd (CONDITIONAL_JUMP)  ; LAB_004efcdd
    OR DL,0x20                          ; 004efcda
    MOV EAX,dword ptr [ESP + 0x30]      ; 004efcdd
        ;   Label: LAB_004efcdd
    AND EAX,EDX                         ; 004efce1
    INC ESI                             ; 004efce3
    MOV dword ptr [ESP + 0x30],EAX      ; 004efce4
    CMP ESI,0x8                         ; 004efce8
    JL 0x004efb4e                       ; 004efceb
        ;   XREF to: 004efb4e (CONDITIONAL_JUMP)  ; LAB_004efb4e
    CMP dword ptr [ESP + 0x30],0x0      ; 004efcf1
    SETZ DL                             ; 004efcf6
    MOV EAX,dword ptr [ESP + 0x28]      ; 004efcf9
    MOV ESI,dword ptr [0x01d79784]      ; 004efcfd | DAT_01d79784
    MOV byte ptr [EAX + 0x1d7a660],DL   ; 004efd03
    MOV EDX,dword ptr [ESP + 0x24]      ; 004efd09
    LEA ECX,[EAX + 0x1]                 ; 004efd0d
    ADD EDX,0x4c                        ; 004efd10
    MOV dword ptr [ESP + 0x28],ECX      ; 004efd13
    MOV dword ptr [ESP + 0x24],EDX      ; 004efd17
    CMP ECX,ESI                         ; 004efd1b
    JL 0x004efb36                       ; 004efd1d
        ;   XREF to: 004efb36 (CONDITIONAL_JUMP)  ; LAB_004efb36
    CMP dword ptr [0x02cf6104],0x0      ; 004efd23 | DAT_02cf6104
        ;   Label: LAB_004efd23
    JZ 0x004efb02                       ; 004efd2a
        ;   XREF to: 004efb02 (CONDITIONAL_JUMP)  ; LAB_004efb02
    CMP dword ptr [0x01c6cee8],0x0      ; 004efd30 | DAT_01c6cee8
    JZ 0x004efb02                       ; 004efd37
        ;   XREF to: 004efb02 (CONDITIONAL_JUMP)  ; LAB_004efb02
    PUSH 0x1d7a660                      ; 004efd3d
    CALL dword ptr [0x02cf6104]         ; 004efd42 | DAT_02cf6104
    ADD ESP,0x4                         ; 004efd48
    ADD ESP,0x34                        ; 004efd4b
    POP EBP                             ; 004efd4e
    POP EDI                             ; 004efd4f
    POP ESI                             ; 004efd50
    POP EBX                             ; 004efd51
    RET                                 ; 004efd52
    MOV EAX,dword ptr [ESP + 0x54]      ; 004efd53
        ;   Label: LAB_004efd53
    MOV EAX,dword ptr [EAX]             ; 004efd57
    JMP 0x004efb5e                      ; 004efd59
        ;   XREF to: 004efb5e (UNCONDITIONAL_JUMP)  ; LAB_004efb5e
    MOV EAX,dword ptr [ESP + 0x54]      ; 004efd5e
        ;   Label: LAB_004efd5e
    MOV EAX,dword ptr [EAX + 0x4]       ; 004efd62
    JMP 0x004efb70                      ; 004efd65
        ;   XREF to: 004efb70 (UNCONDITIONAL_JUMP)  ; LAB_004efb70
    MOV EAX,dword ptr [ESP + 0x54]      ; 004efd6a
        ;   Label: LAB_004efd6a
    MOV EAX,dword ptr [EAX + 0x8]       ; 004efd6e
    JMP 0x004efb82                      ; 004efd71
        ;   XREF to: 004efb82 (UNCONDITIONAL_JUMP)  ; LAB_004efb82

