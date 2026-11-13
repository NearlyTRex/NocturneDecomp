; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043fac0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_cloth.cpp_FUN_0043c280
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fac0
        ;   Label: core_cloth.cpp_FUN_0043fac0
    PUSH ESI                            ; 0043fac1
    PUSH EBP                            ; 0043fac2
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043fac3
    TEST EBP,EBP                        ; 0043fac7
    JL 0x0043fad3                       ; 0043fac9
        ;   XREF to: 0043fad3 (CONDITIONAL_JUMP)  ; LAB_0043fad3
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043facb
    CMP EBP,dword ptr [EAX]             ; 0043facf
    JL 0x0043faf6                       ; 0043fad1
        ;   XREF to: 0043faf6 (CONDITIONAL_JUMP)  ; LAB_0043faf6
    MOV ECX,0x5b9257                    ; 0043fad3
        ;   Label: LAB_0043fad3
    MOV EBX,0x5f1                       ; 0043fad8
    PUSH 0x5b9269                       ; 0043fadd
    MOV dword ptr [0x01d71de0],ECX      ; 0043fae2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0043fae8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043faee
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043faf3
    MOV ESI,dword ptr [ESP + 0x10]      ; 0043faf6
        ;   Label: LAB_0043faf6
    LEA EAX,[EBP*0x4 + 0x0]             ; 0043fafa
    ADD EAX,ESI                         ; 0043fb01
    MOV EAX,dword ptr [EAX + 0x194]     ; 0043fb03
    TEST EAX,EAX                        ; 0043fb09
    JZ 0x0043fb21                       ; 0043fb0b
        ;   XREF to: 0043fb21 (CONDITIONAL_JUMP)  ; LAB_0043fb21
    PUSH 0x0                            ; 0043fb0d
    PUSH EAX                            ; 0043fb0f
    CALL core_cloth.cpp_FUN_0043c280    ; 0043fb10
        ;   XREF to: 0043c280 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c280()
    ADD ESP,0x8                         ; 0043fb15
    PUSH EAX                            ; 0043fb18
    CALL crt_unknown.c_FUN_005a30c4     ; 0043fb19
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0043fb1e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043fb21
        ;   Label: LAB_0043fb21
    INC EBP                             ; 0043fb25
    CMP EBP,dword ptr [EAX]             ; 0043fb26
    JGE 0x0043fb8a                      ; 0043fb28
        ;   XREF to: 0043fb8a (CONDITIONAL_JUMP)  ; LAB_0043fb8a
    PUSH EDI                            ; 0043fb2a
    LEA ECX,[EBP*0x4 + 0x0]             ; 0043fb2b
    LEA ESI,[EAX + 0x4]                 ; 0043fb32
    ADD ECX,EAX                         ; 0043fb35
    LEA EAX,[EBP*0x4 + 0x0]             ; 0043fb37
    ADD EAX,EBP                         ; 0043fb3e
    SHL EAX,0x3                         ; 0043fb40
    LEA EBX,[EAX + -0x28]               ; 0043fb43
    ADD EBX,ESI                         ; 0043fb46
    LEA EDX,[EAX + ESI*0x1]             ; 0043fb48
    MOV ESI,EDX                         ; 0043fb4b
        ;   Label: LAB_0043fb4b
    MOV EDI,EBX                         ; 0043fb4d
    ADD ECX,0x4                         ; 0043fb4f
    PUSH EDI                            ; 0043fb52
    MOV AL,byte ptr [ESI]               ; 0043fb53
        ;   Label: LAB_0043fb53
    MOV byte ptr [EDI],AL               ; 0043fb55
    CMP AL,0x0                          ; 0043fb57
    JZ 0x0043fb6b                       ; 0043fb59
        ;   XREF to: 0043fb6b (CONDITIONAL_JUMP)  ; LAB_0043fb6b
    MOV AL,byte ptr [ESI + 0x1]         ; 0043fb5b
    ADD ESI,0x2                         ; 0043fb5e
    MOV byte ptr [EDI + 0x1],AL         ; 0043fb61
    ADD EDI,0x2                         ; 0043fb64
    CMP AL,0x0                          ; 0043fb67
    JNZ 0x0043fb53                      ; 0043fb69
        ;   XREF to: 0043fb53 (CONDITIONAL_JUMP)  ; LAB_0043fb53
    POP EDI                             ; 0043fb6b
        ;   Label: LAB_0043fb6b
    MOV EAX,dword ptr [ECX + 0x190]     ; 0043fb6c
    MOV dword ptr [ECX + 0x18c],EAX     ; 0043fb72
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043fb78
    INC EBP                             ; 0043fb7c
    ADD EBX,0x28                        ; 0043fb7d
    MOV ESI,dword ptr [EAX]             ; 0043fb80
    ADD EDX,0x28                        ; 0043fb82
    CMP EBP,ESI                         ; 0043fb85
    JL 0x0043fb4b                       ; 0043fb87
        ;   XREF to: 0043fb4b (CONDITIONAL_JUMP)  ; LAB_0043fb4b
    POP EDI                             ; 0043fb89
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043fb8a
        ;   Label: LAB_0043fb8a
    MOV EBP,dword ptr [EAX]             ; 0043fb8e
    DEC EBP                             ; 0043fb90
    MOV dword ptr [EAX],EBP             ; 0043fb91
    LEA EAX,[EBP*0x4 + 0x0]             ; 0043fb93
    ADD EAX,EBP                         ; 0043fb9a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043fb9c
    SHL EAX,0x3                         ; 0043fba0
    ADD EAX,EDX                         ; 0043fba3
    MOV byte ptr [EAX + 0x4],0x0        ; 0043fba5
    MOV EAX,dword ptr [EDX]             ; 0043fba9
    SHL EAX,0x2                         ; 0043fbab
    ADD EAX,EDX                         ; 0043fbae
    MOV dword ptr [EAX + 0x194],0x0     ; 0043fbb0
    POP EBP                             ; 0043fbba
    POP ESI                             ; 0043fbbb
    POP EBX                             ; 0043fbbc
    RET                                 ; 0043fbbd

