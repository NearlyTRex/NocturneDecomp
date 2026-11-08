; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aba8c(HANDLE param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_005b0a70 at 005b0b7d
;
; Referenced Globals:
;   void* PTR_FUN_006079d4 = 005a7f44
;   void* PTR_FUN_006079d8 = 005a7f44
;   undefined4 DAT_00607bdc
;   undefined4 DAT_00607be0
;
; Called Functions:
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aba8c
        ;   Label: FUN_005aba8c
    PUSH ESI                            ; 005aba8d
    PUSH EDI                            ; 005aba8e
    PUSH EBP                            ; 005aba8f
    MOV ESI,dword ptr [0x00607bdc]      ; 005aba90 | DAT_00607bdc
    MOV EDI,dword ptr [ESP + 0x18]      ; 005aba96
    TEST EDI,EDI                        ; 005aba9a
    JL 0x005abb56                       ; 005aba9c
        ;   XREF to: 005abb56 (CONDITIONAL_JUMP)  ; LAB_005abb56
    CALL dword ptr [0x006079d4]         ; 005abaa2 | PTR_FUN_006079d4
    CMP EDI,0x1                         ; 005abaa8
    JC 0x005abab6                       ; 005abaab
        ;   XREF to: 005abab6 (CONDITIONAL_JUMP)  ; LAB_005abab6
    JBE 0x005abac3                      ; 005abaad
        ;   XREF to: 005abac3 (CONDITIONAL_JUMP)  ; LAB_005abac3
    CMP EDI,0x2                         ; 005abaaf
    JZ 0x005abacc                       ; 005abab2
        ;   XREF to: 005abacc (CONDITIONAL_JUMP)  ; LAB_005abacc
    JMP 0x005abada                      ; 005abab4
        ;   XREF to: 005abada (UNCONDITIONAL_JUMP)  ; LAB_005abada
    TEST EDI,EDI                        ; 005abab6
        ;   Label: LAB_005abab6
    JNZ 0x005abada                      ; 005abab8
        ;   XREF to: 005abada (CONDITIONAL_JUMP)  ; LAB_005abada
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ababa
    PUSH ECX                            ; 005ababe
    PUSH -0xa                           ; 005ababf
    JMP 0x005abad3                      ; 005abac1
        ;   XREF to: 005abad3 (UNCONDITIONAL_JUMP)  ; LAB_005abad3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005abac3
        ;   Label: LAB_005abac3
    PUSH EBX                            ; 005abac7
    PUSH -0xb                           ; 005abac8
    JMP 0x005abad3                      ; 005abaca
        ;   XREF to: 005abad3 (UNCONDITIONAL_JUMP)  ; LAB_005abad3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005abacc
        ;   Label: LAB_005abacc
    PUSH EDX                            ; 005abad0
    PUSH -0xc                           ; 005abad1
    CALL dword ptr CS:[0x5b364c]        ; 005abad3
        ;   Label: LAB_005abad3
    MOV EBP,dword ptr [0x00607be0]      ; 005abada | DAT_00607be0
        ;   Label: LAB_005abada
    LEA EBX,[EDI*0x4 + 0x0]             ; 005abae0
    MOV ESI,dword ptr [0x00607bdc]      ; 005abae7 | DAT_00607bdc
    CMP EDI,EBP                         ; 005abaed
    JGE 0x005abafb                      ; 005abaef
        ;   XREF to: 005abafb (CONDITIONAL_JUMP)  ; LAB_005abafb
    ADD EBX,ESI                         ; 005abaf1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005abaf3
    MOV dword ptr [EBX],EAX             ; 005abaf7
    JMP 0x005abb4a                      ; 005abaf9
        ;   XREF to: 005abb4a (UNCONDITIONAL_JUMP)  ; LAB_005abb4a
    LEA EAX,[EBX + 0x4]                 ; 005abafb
        ;   Label: LAB_005abafb
    PUSH EAX                            ; 005abafe
    PUSH ESI                            ; 005abaff
    CALL FUN_005a3e50                   ; 005abb00
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    MOV EDX,dword ptr [0x00607be0]      ; 005abb05 | DAT_00607be0
    ADD ESP,0x8                         ; 005abb0b
    MOV ESI,EAX                         ; 005abb0e
    CMP EDX,EDI                         ; 005abb10
    JGE 0x005abb2e                      ; 005abb12
        ;   XREF to: 005abb2e (CONDITIONAL_JUMP)  ; LAB_005abb2e
    LEA EAX,[EDX*0x4 + 0x0]             ; 005abb14
    MOV ECX,EBX                         ; 005abb1b
    MOV EBX,ESI                         ; 005abb1d
    MOV dword ptr [EBX + EAX*0x1],0x0   ; 005abb1f
        ;   Label: LAB_005abb1f
    ADD EAX,0x4                         ; 005abb26
    INC EDX                             ; 005abb29
    CMP EAX,ECX                         ; 005abb2a
    JL 0x005abb1f                       ; 005abb2c
        ;   XREF to: 005abb1f (CONDITIONAL_JUMP)  ; LAB_005abb1f
    LEA EAX,[EDI*0x4 + 0x0]             ; 005abb2e
        ;   Label: LAB_005abb2e
    MOV EDX,dword ptr [ESP + 0x14]      ; 005abb35
    INC EDI                             ; 005abb39
    ADD EAX,ESI                         ; 005abb3a
    MOV dword ptr [0x00607bdc],ESI      ; 005abb3c | DAT_00607bdc
    MOV dword ptr [0x00607be0],EDI      ; 005abb42 | DAT_00607be0
    MOV dword ptr [EAX],EDX             ; 005abb48
    CALL dword ptr [0x006079d8]         ; 005abb4a | PTR_FUN_006079d8
        ;   Label: LAB_005abb4a
    MOV ESI,dword ptr [0x00607bdc]      ; 005abb50 | DAT_00607bdc
    MOV ESI,dword ptr [0x00607bdc]      ; 005abb56 | DAT_00607bdc
        ;   Label: LAB_005abb56
    POP EBP                             ; 005abb5c
    POP EDI                             ; 005abb5d
    POP ESI                             ; 005abb5e
    POP EBX                             ; 005abb5f
    RET                                 ; 005abb60

