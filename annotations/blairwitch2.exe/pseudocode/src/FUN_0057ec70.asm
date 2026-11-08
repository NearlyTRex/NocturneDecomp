; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057ec70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_0041a590
;   FUN_0041a600
;   FUN_0044fd20
;   FUN_0057ee90
;   FUN_00591530
;   FUN_005916b0
;   FUN_00591ad0
;   FUN_00591c10
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ec70
        ;   Label: FUN_0057ec70
    PUSH EDI                            ; 0057ec71
    PUSH EBP                            ; 0057ec72
    SUB ESP,0x124                       ; 0057ec73
    MOV EBP,ESI                         ; 0057ec79
    PUSH 0x0                            ; 0057ec7b
    MOV EDX,dword ptr [ESP + 0x138]     ; 0057ec7d
    PUSH EDX                            ; 0057ec84
    CALL FUN_0057ee90                   ; 0057ec85
        ;   XREF to: 0057ee90 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ee90()
    MOV dword ptr [ESP + 0x128],EAX     ; 0057ec8a
    FLD float ptr [ESP + 0x128]         ; 0057ec91
    ADD ESP,0x8                         ; 0057ec98
    MOV EAX,dword ptr [ESP + 0x134]     ; 0057ec9b
    ADD EAX,0x2b4                       ; 0057eca2
    CALL FUN_005b7ff0                   ; 0057eca7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH EAX                            ; 0057ecac
    FISTP dword ptr [ESP + 0x124]       ; 0057ecad
    CALL FUN_0044fd20                   ; 0057ecb4
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0057ecb9
    MOV ESI,dword ptr [ESP + 0x120]     ; 0057ecbc
    LEA EBX,[ESI*0x4 + 0x0]             ; 0057ecc3
    SUB EBX,ESI                         ; 0057ecca
    SHL EBX,0x3                         ; 0057eccc
    MOV ESI,dword ptr [EAX + 0x350]     ; 0057eccf
    ADD ESI,EBX                         ; 0057ecd5
    MOV EBX,dword ptr [ESP + 0x134]     ; 0057ecd7
    LEA EDI,[ESP + 0xc0]                ; 0057ecde
    ADD EBX,0x6e0                       ; 0057ece5
    MOV ECX,0x6                         ; 0057eceb
    PUSH EBX                            ; 0057ecf0
    MOVSD.REP ES:EDI,ESI                ; 0057ecf1
    CALL FUN_0044fd20                   ; 0057ecf3
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,dword ptr [EAX + 0x110]     ; 0057ecf8
    ADD ESP,0x4                         ; 0057ecfe
    CMP ECX,0x1                         ; 0057ed01
    JGE 0x0057ed2c                      ; 0057ed04
        ;   XREF to: 0057ed2c (CONDITIONAL_JUMP)  ; LAB_0057ed2c
    LEA EAX,[EAX]                       ; 0057ed06
    LEA EDX,[EDX]                       ; 0057ed0c
    MOV ECX,0x6                         ; 0057ed10
        ;   Label: LAB_0057ed10
    LEA ESI,[ESP + 0xc0]                ; 0057ed15
    MOV EDI,EBP                         ; 0057ed1c
    MOVSD.REP ES:EDI,ESI                ; 0057ed1e
    MOV EAX,EBP                         ; 0057ed20
    ADD ESP,0x124                       ; 0057ed22
    POP EBP                             ; 0057ed28
    POP EDI                             ; 0057ed29
    POP EBX                             ; 0057ed2a
    RET                                 ; 0057ed2b
    MOV EAX,dword ptr [ESP + 0x134]     ; 0057ed2c
        ;   Label: LAB_0057ed2c
    ADD EAX,0x6d4                       ; 0057ed33
    PUSH EAX                            ; 0057ed38
    PUSH 0x265370c                      ; 0057ed39 | DAT_0265370c
    LEA EAX,[ESP + 0x8]                 ; 0057ed3e
    PUSH EAX                            ; 0057ed42
    CALL FUN_00591c10                   ; 0057ed43
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 0057ed48
    MOV EAX,dword ptr [ESP + 0x134]     ; 0057ed4b
    ADD EAX,0x30                        ; 0057ed52
    PUSH EAX                            ; 0057ed55
    PUSH 0x265370c                      ; 0057ed56 | DAT_0265370c
    LEA EAX,[ESP + 0x38]                ; 0057ed5b
    PUSH EAX                            ; 0057ed5f
    CALL FUN_00591ad0                   ; 0057ed60
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591ad0()
    ADD ESP,0xc                         ; 0057ed65
    LEA EAX,[ESP + 0x30]                ; 0057ed68
    PUSH EAX                            ; 0057ed6c
    LEA EAX,[ESP + 0x4]                 ; 0057ed6d
    PUSH EAX                            ; 0057ed71
    LEA ESI,[ESP + 0x68]                ; 0057ed72
    LEA EDI,[ESP + 0x98]                ; 0057ed76
    CALL FUN_005916b0                   ; 0057ed7d
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 0057ed82
    LEA ESI,[ESP + 0x68]                ; 0057ed87
    ADD ESP,0x8                         ; 0057ed8b
    MOVSD.REP ES:EDI,ESI                ; 0057ed8e
    PUSH 0x1                            ; 0057ed90
    MOV ESI,dword ptr [ESP + 0x138]     ; 0057ed92
    PUSH ESI                            ; 0057ed99
    CALL FUN_0057ee90                   ; 0057ed9a
        ;   XREF to: 0057ee90 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ee90()
    MOV dword ptr [ESP + 0x128],EAX     ; 0057ed9f
    FLD float ptr [ESP + 0x128]         ; 0057eda6
    ADD ESP,0x8                         ; 0057edad
    CALL FUN_005b7ff0                   ; 0057edb0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH EBX                            ; 0057edb5
    FISTP dword ptr [ESP + 0x124]       ; 0057edb6
    CALL FUN_0044fd20                   ; 0057edbd
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0057edc2
    MOV ESI,EAX                         ; 0057edc5
    MOV EAX,dword ptr [ESP + 0x120]     ; 0057edc7
    LEA EBX,[EAX*0x4 + 0x0]             ; 0057edce
    LEA EDI,[ESP + 0xd8]                ; 0057edd5
    SUB EBX,EAX                         ; 0057eddc
    MOV ESI,dword ptr [ESI + 0x350]     ; 0057edde
    SHL EBX,0x3                         ; 0057ede4
    MOV ECX,0x6                         ; 0057ede7
    ADD ESI,EBX                         ; 0057edec
    XOR EBX,EBX                         ; 0057edee
    MOVSD.REP ES:EDI,ESI                ; 0057edf0
    LEA ESI,[ESP + 0x90]                ; 0057edf2
        ;   Label: LAB_0057edf2
    PUSH ESI                            ; 0057edf9
    PUSH EBX                            ; 0057edfa
    LEA ESI,[ESP + 0xe0]                ; 0057edfb
    PUSH ESI                            ; 0057ee02
    LEA ESI,[ESP + 0x114]               ; 0057ee03
    LEA EDI,[ESP + 0xfc]                ; 0057ee0a
    CALL FUN_0041a600                   ; 0057ee11
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    LEA ESI,[ESP + 0x114]               ; 0057ee16
    ADD ESP,0x8                         ; 0057ee1d
    MOVSD ES:EDI,ESI                    ; 0057ee20
    MOVSD ES:EDI,ESI                    ; 0057ee21
    MOVSD ES:EDI,ESI                    ; 0057ee22
    LEA ESI,[ESP + 0xf4]                ; 0057ee23
    PUSH ESI                            ; 0057ee2a
    LEA ESI,[ESP + 0x104]               ; 0057ee2b
    LEA EDI,[ESP + 0x11c]               ; 0057ee32
    CALL FUN_00591530                   ; 0057ee39
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0x104]               ; 0057ee3e
    ADD ESP,0x8                         ; 0057ee45
    MOVSD ES:EDI,ESI                    ; 0057ee48
    MOVSD ES:EDI,ESI                    ; 0057ee49
    MOVSD ES:EDI,ESI                    ; 0057ee4a
    LEA ESI,[ESP + 0x114]               ; 0057ee4b
    PUSH ESI                            ; 0057ee52
    LEA ESI,[ESP + 0xc4]                ; 0057ee53
    PUSH ESI                            ; 0057ee5a
    INC EBX                             ; 0057ee5b
    CALL FUN_0041a590                   ; 0057ee5c
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a590()
    ADD ESP,0x8                         ; 0057ee61
    CMP EBX,0x8                         ; 0057ee64
    JL 0x0057edf2                       ; 0057ee67
        ;   XREF to: 0057edf2 (CONDITIONAL_JUMP)  ; LAB_0057edf2
    JMP 0x0057ed10                      ; 0057ee69
        ;   XREF to: 0057ed10 (UNCONDITIONAL_JUMP)  ; LAB_0057ed10

