; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00578d30(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)
;
;
; Called Functions:
;   FUN_00408b00
;   FUN_0041e220
;   FUN_00478a50
;   FUN_00478ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578d30
        ;   Label: FUN_00578d30
    PUSH ESI                            ; 00578d31
    PUSH EDI                            ; 00578d32
    PUSH EBP                            ; 00578d33
    MOV EBP,ESP                         ; 00578d34
    SUB ESP,0xd0                        ; 00578d36
    AND ESP,0xfffffff8                  ; 00578d3c
    PUSH 0x0                            ; 00578d3f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00578d41
    PUSH EDX                            ; 00578d44
    MOV ECX,dword ptr [EBP + 0x18]      ; 00578d45
    MOV EAX,dword ptr [EBP + 0x14]      ; 00578d48
    PUSH ECX                            ; 00578d4b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00578d4c
    MOV EAX,dword ptr [EAX + 0x154]     ; 00578d4f
    PUSH EBX                            ; 00578d55
    LEA ESI,[ESP + 0x60]                ; 00578d56
    LEA EDI,[ESP + 0x78]                ; 00578d5a
    CALL dword ptr [EAX + 0x1c]         ; 00578d5e
    MOV ECX,0x6                         ; 00578d61
    ADD ESP,0x4                         ; 00578d66
    LEA EAX,[ESP + 0x74]                ; 00578d69
    LEA ESI,[ESP + 0x5c]                ; 00578d6d
    PUSH EAX                            ; 00578d71
    MOVSD.REP ES:EDI,ESI                ; 00578d72
    CALL FUN_0041e220                   ; 00578d74
        ;   XREF to: 0041e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e220()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00578d79
    FLD float ptr [ESP + 0xdc]          ; 00578d80
    ADD ESP,0x10                        ; 00578d87
    FLDZ                                ; 00578d8a
    FXCH                                ; 00578d8c
    FSTP double ptr [ESP]               ; 00578d8e
    FCOMP double ptr [ESP]              ; 00578d91
    FNSTSW AX                           ; 00578d94
    SAHF                                ; 00578d96
    JA 0x00578ee4                       ; 00578d97
        ;   XREF to: 00578ee4 (CONDITIONAL_JUMP)  ; LAB_00578ee4
    FLD1                                ; 00578d9d
    FCOMP double ptr [ESP]              ; 00578d9f
    FNSTSW AX                           ; 00578da2
    SAHF                                ; 00578da4
    JC 0x00578ee4                       ; 00578da5
        ;   XREF to: 00578ee4 (CONDITIONAL_JUMP)  ; LAB_00578ee4
    MOV ESI,0x40000000                  ; 00578dab
    MOV EAX,dword ptr [EBX + 0x2b238]   ; 00578db0
    ADD EBX,0x7fac                      ; 00578db6
    XOR EDI,EDI                         ; 00578dbc
    MOV dword ptr [ESP + 0xbc],EAX      ; 00578dbe
    MOV dword ptr [ESP + 0xc8],EDI      ; 00578dc5
    MOV dword ptr [ESP + 0x10],ESI      ; 00578dcc
    TEST EAX,EAX                        ; 00578dd0
    JLE 0x00578e67                      ; 00578dd2
        ;   XREF to: 00578e67 (CONDITIONAL_JUMP)  ; LAB_00578e67
    MOV EAX,dword ptr [EBP + 0x14]      ; 00578dd8
    ADD EAX,0x2a0                       ; 00578ddb
    MOV dword ptr [ESP + 0xc4],EAX      ; 00578de0
    MOV EAX,dword ptr [EBX + 0x30]      ; 00578de7
        ;   Label: LAB_00578de7
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00578dea
    SHL EAX,0x5                         ; 00578df1
    ADD EAX,ECX                         ; 00578df4
    PUSH EAX                            ; 00578df6
    MOV EAX,dword ptr [EBX + 0x24]      ; 00578df7
    SHL EAX,0x5                         ; 00578dfa
    ADD EAX,ECX                         ; 00578dfd
    PUSH EAX                            ; 00578dff
    MOV EAX,dword ptr [EBX + 0x18]      ; 00578e00
    SHL EAX,0x5                         ; 00578e03
    ADD EAX,ECX                         ; 00578e06
    PUSH EAX                            ; 00578e08
    LEA EAX,[ESP + 0x24]                ; 00578e09
    PUSH EAX                            ; 00578e0d
    CALL FUN_00478a50                   ; 00578e0e
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00478a50()
    ADD ESP,0x10                        ; 00578e13
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00578e16
    PUSH EAX                            ; 00578e19
    MOV EDX,dword ptr [EBP + 0x18]      ; 00578e1a
    PUSH EDX                            ; 00578e1d
    LEA EAX,[ESP + 0x20]                ; 00578e1e
    PUSH EAX                            ; 00578e22
    CALL FUN_00478ac0                   ; 00578e23
        ;   XREF to: 00478ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00478ac0()
    MOV dword ptr [ESP + 0xd8],EAX      ; 00578e28
    FLD float ptr [ESP + 0xd8]          ; 00578e2f
    ADD ESP,0xc                         ; 00578e36
    FST float ptr [ESP + 0x14]          ; 00578e39
    FCOMP float ptr [ESP + 0x10]        ; 00578e3d
    FNSTSW AX                           ; 00578e41
    SAHF                                ; 00578e43
    JC 0x00578efd                       ; 00578e44
        ;   XREF to: 00578efd (CONDITIONAL_JUMP)  ; LAB_00578efd
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00578e4a
        ;   Label: LAB_00578e4a
    MOV EDI,dword ptr [ESP + 0xbc]      ; 00578e51
    INC ESI                             ; 00578e58
    ADD EBX,0x48                        ; 00578e59
    MOV dword ptr [ESP + 0xc8],ESI      ; 00578e5c
    CMP ESI,EDI                         ; 00578e63
    JL 0x00578de7                       ; 00578e65
        ;   XREF to: 00578de7 (CONDITIONAL_JUMP)  ; LAB_00578de7
    FLD float ptr [ESP + 0x10]          ; 00578e67
        ;   Label: LAB_00578e67
    FLD1                                ; 00578e6b
    FCOMPP                              ; 00578e6d
    FNSTSW AX                           ; 00578e6f
    SAHF                                ; 00578e71
    JBE 0x00578ecb                      ; 00578e72
        ;   XREF to: 00578ecb (CONDITIONAL_JUMP)  ; LAB_00578ecb
    LEA EAX,[ESP + 0x98]                ; 00578e74
    PUSH EAX                            ; 00578e7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00578e7c
    PUSH EAX                            ; 00578e7f
    LEA ESI,[ESP + 0xac]                ; 00578e80
    LEA EDI,[ESP + 0x94]                ; 00578e87
    CALL FUN_00408b00                   ; 00578e8e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0xac]                ; 00578e93
    ADD ESP,0x8                         ; 00578e9a
    LEA EAX,[ESP + 0x8c]                ; 00578e9d
    MOV EDX,dword ptr [EBP + 0x20]      ; 00578ea4
    MOVSD ES:EDI,ESI                    ; 00578ea7
    MOVSD ES:EDI,ESI                    ; 00578ea8
    MOVSD ES:EDI,ESI                    ; 00578ea9
    CMP EAX,EDX                         ; 00578eaa
    JZ 0x00578ecb                       ; 00578eac
        ;   XREF to: 00578ecb (CONDITIONAL_JUMP)  ; LAB_00578ecb
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00578eae
    MOV dword ptr [EDX],EAX             ; 00578eb5
    MOV EAX,dword ptr [ESP + 0x90]      ; 00578eb7
    MOV dword ptr [EDX + 0x4],EAX       ; 00578ebe
    MOV EAX,dword ptr [ESP + 0x94]      ; 00578ec1
    MOV dword ptr [EDX + 0x8],EAX       ; 00578ec8
    MOV EAX,dword ptr [ESP + 0x10]      ; 00578ecb
        ;   Label: LAB_00578ecb
    MOV dword ptr [ESP + 0xc0],EAX      ; 00578ecf
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00578ed6
    MOV ESP,EBP                         ; 00578edd
    POP EBP                             ; 00578edf
    POP EDI                             ; 00578ee0
    POP ESI                             ; 00578ee1
    POP EBX                             ; 00578ee2
    RET                                 ; 00578ee3
    MOV dword ptr [ESP + 0xc0],0x40000000 ; 00578ee4
        ;   Label: LAB_00578ee4
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00578eef
    MOV ESP,EBP                         ; 00578ef6
    POP EBP                             ; 00578ef8
    POP EDI                             ; 00578ef9
    POP ESI                             ; 00578efa
    POP EBX                             ; 00578efb
    RET                                 ; 00578efc
    FLD float ptr [ESP + 0x14]          ; 00578efd
        ;   Label: LAB_00578efd
    FLDZ                                ; 00578f01
    FXCH                                ; 00578f03
    FSTP double ptr [ESP + 0x8]         ; 00578f05
    FCOMP double ptr [ESP + 0x8]        ; 00578f09
    FNSTSW AX                           ; 00578f0d
    SAHF                                ; 00578f0f
    JA 0x00578e4a                       ; 00578f10
        ;   XREF to: 00578e4a (CONDITIONAL_JUMP)  ; LAB_00578e4a
    FLD1                                ; 00578f16
    FCOMP double ptr [ESP + 0x8]        ; 00578f18
    FNSTSW AX                           ; 00578f1c
    SAHF                                ; 00578f1e
    JC 0x00578e4a                       ; 00578f1f
        ;   XREF to: 00578e4a (CONDITIONAL_JUMP)  ; LAB_00578e4a
    FLD float ptr [ESP + 0x3c]          ; 00578f25
    FLD float ptr [ESP + 0x40]          ; 00578f29
    FLD float ptr [ESP + 0x44]          ; 00578f2d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00578f31
    LEA EDI,[ESP + 0x80]                ; 00578f35
    LEA ESI,[ESP + 0xb0]                ; 00578f3c
    LEA EDX,[ESP + 0x80]                ; 00578f43
    FXCH ST2                            ; 00578f4a
    FCHS                                ; 00578f4c
    FXCH                                ; 00578f4e
    FCHS                                ; 00578f50
    FXCH ST2                            ; 00578f52
    FCHS                                ; 00578f54
    FXCH                                ; 00578f56
    FSTP float ptr [ESP + 0xb0]         ; 00578f58
    FXCH                                ; 00578f5f
    FSTP float ptr [ESP + 0xb4]         ; 00578f61
    FSTP float ptr [ESP + 0xb8]         ; 00578f68
    MOV dword ptr [ESP + 0x10],EAX      ; 00578f6f
    LEA EAX,[ESP + 0x98]                ; 00578f73
    MOVSD ES:EDI,ESI                    ; 00578f7a
    MOVSD ES:EDI,ESI                    ; 00578f7b
    MOVSD ES:EDI,ESI                    ; 00578f7c
    CMP EAX,EDX                         ; 00578f7d
    JZ 0x00578e4a                       ; 00578f7f
        ;   XREF to: 00578e4a (CONDITIONAL_JUMP)  ; LAB_00578e4a
    MOV EAX,dword ptr [ESP + 0x80]      ; 00578f85
    MOV dword ptr [ESP + 0x98],EAX      ; 00578f8c
    MOV EAX,dword ptr [ESP + 0x84]      ; 00578f93
    MOV dword ptr [ESP + 0x9c],EAX      ; 00578f9a
    MOV EAX,dword ptr [ESP + 0x88]      ; 00578fa1
    MOV dword ptr [ESP + 0xa0],EAX      ; 00578fa8
    JMP 0x00578e4a                      ; 00578faf
        ;   XREF to: 00578e4a (UNCONDITIONAL_JUMP)  ; LAB_00578e4a

