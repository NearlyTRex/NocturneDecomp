; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446b50(int param_1)
;
;
; XREF[1]:
;   FUN_004464c0 at 00446ac2
;
; Called Functions:
;   FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446b50
        ;   Label: FUN_00446b50
    PUSH ESI                            ; 00446b51
    PUSH EDI                            ; 00446b52
    PUSH EBP                            ; 00446b53
    SUB ESP,0x40                        ; 00446b54
    MOV EAX,dword ptr [ESP + 0x54]      ; 00446b57
    MOV EDX,dword ptr [EAX + 0x204]     ; 00446b5b
    XOR EBP,EBP                         ; 00446b61
    TEST EDX,EDX                        ; 00446b63
    JLE 0x00446c34                      ; 00446b65
        ;   XREF to: 00446c34 (CONDITIONAL_JUMP)  ; LAB_00446c34
    ADD EAX,0x208                       ; 00446b6b
    MOV dword ptr [ESP + 0x3c],EAX      ; 00446b70
    MOV EAX,dword ptr [ESP + 0x54]      ; 00446b74
    ADD EAX,0x3c                        ; 00446b78
    MOV dword ptr [ESP + 0x30],EAX      ; 00446b7b
    MOV EAX,dword ptr [ESP + 0x54]      ; 00446b7f
    MOV EBX,dword ptr [ESP + 0x54]      ; 00446b83
    ADD EAX,0x20                        ; 00446b87
    ADD EBX,0x228                       ; 00446b8a
    MOV dword ptr [ESP + 0x34],EAX      ; 00446b90
    IMUL EAX,EBP,0x74                   ; 00446b94
        ;   Label: LAB_00446b94
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00446b97
    ADD EDX,EAX                         ; 00446b9b
    PUSH EDX                            ; 00446b9d
    MOV EDI,dword ptr [ESP + 0x34]      ; 00446b9e
    PUSH EDI                            ; 00446ba2
    LEA ESI,[ESP + 0x20]                ; 00446ba3
    MOV dword ptr [ESP + 0x40],EDX      ; 00446ba7
    CALL FUN_0045b800                   ; 00446bab
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA EDI,[ESP + 0x14]                ; 00446bb0
    LEA ESI,[ESP + 0x20]                ; 00446bb4
    ADD ESP,0x8                         ; 00446bb8
    MOVSD ES:EDI,ESI                    ; 00446bbb
    MOVSD ES:EDI,ESI                    ; 00446bbc
    MOVSD ES:EDI,ESI                    ; 00446bbd
    MOV EAX,dword ptr [ESP + 0x34]      ; 00446bbe
    FLD float ptr [ESP + 0xc]           ; 00446bc2
    FLD float ptr [ESP + 0x10]          ; 00446bc6
    FLD float ptr [ESP + 0x14]          ; 00446bca
    LEA EDI,[ESP + 0x24]                ; 00446bce
    MOV ESI,ESP                         ; 00446bd2
    FXCH ST2                            ; 00446bd4
    FADD float ptr [EAX]                ; 00446bd6
    FXCH                                ; 00446bd8
    FADD float ptr [EAX + 0x4]          ; 00446bda
    FXCH ST2                            ; 00446bdd
    FADD float ptr [EAX + 0x8]          ; 00446bdf
    FXCH                                ; 00446be2
    FSTP float ptr [ESP]                ; 00446be4
    FXCH                                ; 00446be7
    FSTP float ptr [ESP + 0x4]          ; 00446be9
    FSTP float ptr [ESP + 0x8]          ; 00446bed
    LEA EAX,[ESP + 0x24]                ; 00446bf1
    MOVSD ES:EDI,ESI                    ; 00446bf5
    MOVSD ES:EDI,ESI                    ; 00446bf6
    MOVSD ES:EDI,ESI                    ; 00446bf7
    CMP EBX,EAX                         ; 00446bf8
    JNZ 0x00446c3c                      ; 00446bfa
        ;   XREF to: 00446c3c (CONDITIONAL_JUMP)  ; LAB_00446c3c
    MOV EDX,dword ptr [ESP + 0x38]      ; 00446bfc
        ;   Label: LAB_00446bfc
    MOV EAX,dword ptr [ESP + 0x38]      ; 00446c00
    ADD EDX,0x20                        ; 00446c04
    ADD EAX,0x38                        ; 00446c07
    CMP EAX,EDX                         ; 00446c0a
    JZ 0x00446c1e                       ; 00446c0c
        ;   XREF to: 00446c1e (CONDITIONAL_JUMP)  ; LAB_00446c1e
    MOV ECX,dword ptr [EDX]             ; 00446c0e
    MOV dword ptr [EAX],ECX             ; 00446c10
    MOV ECX,dword ptr [EDX + 0x4]       ; 00446c12
    MOV dword ptr [EAX + 0x4],ECX       ; 00446c15
    MOV ECX,dword ptr [EDX + 0x8]       ; 00446c18
    MOV dword ptr [EAX + 0x8],ECX       ; 00446c1b
    MOV EAX,dword ptr [ESP + 0x54]      ; 00446c1e
        ;   Label: LAB_00446c1e
    INC EBP                             ; 00446c22
    MOV ECX,dword ptr [EAX + 0x204]     ; 00446c23
    ADD EBX,0x74                        ; 00446c29
    CMP EBP,ECX                         ; 00446c2c
    JL 0x00446b94                       ; 00446c2e
        ;   XREF to: 00446b94 (CONDITIONAL_JUMP)  ; LAB_00446b94
    ADD ESP,0x40                        ; 00446c34
        ;   Label: LAB_00446c34
    POP EBP                             ; 00446c37
    POP EDI                             ; 00446c38
    POP ESI                             ; 00446c39
    POP EBX                             ; 00446c3a
    RET                                 ; 00446c3b
    MOV EAX,dword ptr [ESP + 0x24]      ; 00446c3c
        ;   Label: LAB_00446c3c
    MOV dword ptr [EBX],EAX             ; 00446c40
    MOV EAX,dword ptr [ESP + 0x28]      ; 00446c42
    MOV dword ptr [EBX + 0x4],EAX       ; 00446c46
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446c49
    MOV dword ptr [EBX + 0x8],EAX       ; 00446c4d
    JMP 0x00446bfc                      ; 00446c50
        ;   XREF to: 00446bfc (UNCONDITIONAL_JUMP)  ; LAB_00446bfc

