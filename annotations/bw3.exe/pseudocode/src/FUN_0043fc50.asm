; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043fc50(int *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0042d8e0 at 0042d953
;   FUN_005095f0 at 00509783
;
; Called Functions:
;   FUN_0043f370
;   FUN_0043f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fc50
        ;   Label: FUN_0043fc50
    PUSH ESI                            ; 0043fc51
    PUSH EDI                            ; 0043fc52
    PUSH EBP                            ; 0043fc53
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043fc54
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043fc58
    TEST EBP,EBP                        ; 0043fc5c
    JZ 0x0043fc90                       ; 0043fc5e
        ;   XREF to: 0043fc90 (CONDITIONAL_JUMP)  ; LAB_0043fc90
    MOV EDX,dword ptr [EDI]             ; 0043fc60
    XOR ESI,ESI                         ; 0043fc62
    TEST EDX,EDX                        ; 0043fc64
    JLE 0x0043fc90                      ; 0043fc66
        ;   XREF to: 0043fc90 (CONDITIONAL_JUMP)  ; LAB_0043fc90
    MOV EBX,EDI                         ; 0043fc68
    PUSH EBP                            ; 0043fc6a
        ;   Label: LAB_0043fc6a
    MOV ECX,dword ptr [EBX + 0x194]     ; 0043fc6b
    PUSH ECX                            ; 0043fc71
    ADD EBX,0x4                         ; 0043fc72
    INC ESI                             ; 0043fc75
    CALL FUN_0043f370                   ; 0043fc76
        ;   XREF to: 0043f370 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f370()
    MOV EAX,dword ptr [EDI]             ; 0043fc7b
    ADD ESP,0x8                         ; 0043fc7d
    CMP ESI,EAX                         ; 0043fc80
    JL 0x0043fc6a                       ; 0043fc82
        ;   XREF to: 0043fc6a (CONDITIONAL_JUMP)  ; LAB_0043fc6a
    LEA EAX,[EAX]                       ; 0043fc84
    LEA EDX,[EDX]                       ; 0043fc8a
    MOV EDX,dword ptr [EDI]             ; 0043fc90
        ;   Label: LAB_0043fc90
    XOR ESI,ESI                         ; 0043fc92
    TEST EDX,EDX                        ; 0043fc94
    JLE 0x0043fcc0                      ; 0043fc96
        ;   XREF to: 0043fcc0 (CONDITIONAL_JUMP)  ; LAB_0043fcc0
    MOV EBX,EDI                         ; 0043fc98
    PUSH EBP                            ; 0043fc9a
        ;   Label: LAB_0043fc9a
    MOV ECX,dword ptr [EBX + 0x194]     ; 0043fc9b
    PUSH ECX                            ; 0043fca1
    ADD EBX,0x4                         ; 0043fca2
    INC ESI                             ; 0043fca5
    CALL FUN_0043f460                   ; 0043fca6
        ;   XREF to: 0043f460 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f460()
    MOV EAX,dword ptr [EDI]             ; 0043fcab
    ADD ESP,0x8                         ; 0043fcad
    CMP ESI,EAX                         ; 0043fcb0
    JL 0x0043fc9a                       ; 0043fcb2
        ;   XREF to: 0043fc9a (CONDITIONAL_JUMP)  ; LAB_0043fc9a
    LEA EAX,[EAX]                       ; 0043fcb4
    LEA EDX,[EDX]                       ; 0043fcba
    POP EBP                             ; 0043fcc0
        ;   Label: LAB_0043fcc0
    POP EDI                             ; 0043fcc1
    POP ESI                             ; 0043fcc2
    POP EBX                             ; 0043fcc3
    RET                                 ; 0043fcc4

