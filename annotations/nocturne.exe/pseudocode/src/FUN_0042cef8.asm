; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0042cef8(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042cef8
        ;   Label: FUN_0042cef8
    MOV EBP,ESP                         ; 0042cef9
    PUSH ESI                            ; 0042cefb
    PUSH EDI                            ; 0042cefc
    PUSH EAX                            ; 0042cefd
    PUSH EBX                            ; 0042cefe
    PUSH ECX                            ; 0042ceff
    PUSH EDX                            ; 0042cf00
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042cf01
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042cf04
    MOV EBX,EDI                         ; 0042cf07
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042cf09
    AND EBX,0x1f                        ; 0042cf0c
    JZ 0x0042cf43                       ; 0042cf0f
        ;   XREF to: 0042cf43 (CONDITIONAL_JUMP)  ; LAB_0042cf43
    MOV EAX,0x20                        ; 0042cf11
    NOP                                 ; 0042cf16
    SUB EAX,EBX                         ; 0042cf17
    NOP                                 ; 0042cf19
    CMP EDX,EAX                         ; 0042cf1a
    JGE 0x0042cf21                      ; 0042cf1c
        ;   XREF to: 0042cf21 (CONDITIONAL_JUMP)  ; LAB_0042cf21
    MOV EAX,EDX                         ; 0042cf1e
    NOP                                 ; 0042cf20
    SUB EDX,EAX                         ; 0042cf21
        ;   Label: LAB_0042cf21
    MOV ECX,EAX                         ; 0042cf23
    AND ECX,0x3                         ; 0042cf25
    JZ 0x0042cf2e                       ; 0042cf28
        ;   XREF to: 0042cf2e (CONDITIONAL_JUMP)  ; LAB_0042cf2e
    SUB EAX,ECX                         ; 0042cf2a
    MOVSB.REP ES:EDI,ESI                ; 0042cf2c
    SHR EAX,0x2                         ; 0042cf2e
        ;   Label: LAB_0042cf2e
    JZ 0x0042cf37                       ; 0042cf31
        ;   XREF to: 0042cf37 (CONDITIONAL_JUMP)  ; LAB_0042cf37
    MOV ECX,EAX                         ; 0042cf33
    MOVSD.REP ES:EDI,ESI                ; 0042cf35
    CMP EDX,0x0                         ; 0042cf37
        ;   Label: LAB_0042cf37
    JZ 0x0042cfea                       ; 0042cf3a
        ;   XREF to: 0042cfea (CONDITIONAL_JUMP)  ; LAB_0042cfea
    MOV dword ptr [EBP + 0xc],ESI       ; 0042cf40
    MOV ECX,EDX                         ; 0042cf43
        ;   Label: LAB_0042cf43
    SUB ECX,0x100                       ; 0042cf45
    JS 0x0042cf82                       ; 0042cf4b
        ;   XREF to: 0042cf82 (CONDITIONAL_JUMP)  ; LAB_0042cf82
    MOV EAX,EAX                         ; 0042cf4d
    MOV AL,byte ptr [ESI]               ; 0042cf50
        ;   Label: LAB_0042cf50
    MOV BL,byte ptr [ESI + 0x24]        ; 0042cf52
    MOV AL,byte ptr [ESI + 0x40]        ; 0042cf55
    MOV BL,byte ptr [ESI + 0x64]        ; 0042cf58
    MOV AL,byte ptr [ESI + 0x80]        ; 0042cf5b
    MOV BL,byte ptr [ESI + 0xa4]        ; 0042cf61
    MOV AL,byte ptr [ESI + 0xc0]        ; 0042cf67
    MOV BL,byte ptr [ESI + 0xe4]        ; 0042cf6d
    ADD ESI,0x100                       ; 0042cf73
    NOP                                 ; 0042cf79
    SUB ECX,0x100                       ; 0042cf7a
    JG 0x0042cf50                       ; 0042cf80
        ;   XREF to: 0042cf50 (CONDITIONAL_JUMP)  ; LAB_0042cf50
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042cf82
        ;   Label: LAB_0042cf82
    MOV ECX,EDX                         ; 0042cf85
    SHR ECX,0x5                         ; 0042cf87
    JZ 0x0042cfce                       ; 0042cf8a
        ;   XREF to: 0042cfce (CONDITIONAL_JUMP)  ; LAB_0042cfce
    SHL ECX,0x5                         ; 0042cf8c
    NOP                                 ; 0042cf8f
    MOV EAX,ECX                         ; 0042cf90
    SUB ECX,0x20                        ; 0042cf92
    MOV EAX,EAX                         ; 0042cf95
    MOV EAX,EAX                         ; 0042cf98
    MOV EAX,EAX                         ; 0042cf9b
    MOV EAX,EAX                         ; 0042cf9e
    FILD qword ptr [ECX + ESI*0x1]      ; 0042cfa0
        ;   Label: LAB_0042cfa0
    FILD qword ptr [ECX + ESI*0x1 + 0x8] ; 0042cfa3
    FILD qword ptr [ECX + ESI*0x1 + 0x10] ; 0042cfa7
    FXCH ST2                            ; 0042cfab
    FILD qword ptr [ECX + ESI*0x1 + 0x18] ; 0042cfad
    FXCH ST2                            ; 0042cfb1
    FISTP qword ptr [ECX + EDI*0x1 + 0x8] ; 0042cfb3
    FISTP qword ptr [ECX + EDI*0x1]     ; 0042cfb7
    FISTP qword ptr [ECX + EDI*0x1 + 0x18] ; 0042cfba
    FISTP qword ptr [ECX + EDI*0x1 + 0x10] ; 0042cfbe
    SUB ECX,0x20                        ; 0042cfc2
    JGE 0x0042cfa0                      ; 0042cfc5
        ;   XREF to: 0042cfa0 (CONDITIONAL_JUMP)  ; LAB_0042cfa0
    SUB EDX,EAX                         ; 0042cfc7
    ADD ESI,EAX                         ; 0042cfc9
    ADD EDI,EAX                         ; 0042cfcb
    NOP                                 ; 0042cfcd
    CMP EDX,0x0                         ; 0042cfce
        ;   Label: LAB_0042cfce
    JZ 0x0042cfea                       ; 0042cfd1
        ;   XREF to: 0042cfea (CONDITIONAL_JUMP)  ; LAB_0042cfea
    MOV EBX,EDX                         ; 0042cfd3
    NOP                                 ; 0042cfd5
    SHR EBX,0x2                         ; 0042cfd6
    JZ 0x0042cfe6                       ; 0042cfd9
        ;   XREF to: 0042cfe6 (CONDITIONAL_JUMP)  ; LAB_0042cfe6
    MOV ECX,EBX                         ; 0042cfdb
    MOVSD.REP ES:EDI,ESI                ; 0042cfdd
    SHL EBX,0x2                         ; 0042cfdf
    NOP                                 ; 0042cfe2
    SUB EDX,EBX                         ; 0042cfe3
    NOP                                 ; 0042cfe5
    MOV ECX,EDX                         ; 0042cfe6
        ;   Label: LAB_0042cfe6
    MOVSB.REP ES:EDI,ESI                ; 0042cfe8
    POP EDX                             ; 0042cfea
        ;   Label: LAB_0042cfea
    POP ECX                             ; 0042cfeb
    POP EBX                             ; 0042cfec
    POP EAX                             ; 0042cfed
    POP EDI                             ; 0042cfee
    POP ESI                             ; 0042cfef
    LEAVE                               ; 0042cff0
    RET                                 ; 0042cff1

