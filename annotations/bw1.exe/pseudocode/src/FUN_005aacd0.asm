; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aacd0(int param_1)
;
;
; XREF[1]:
;   FUN_005aa720 at 005aa9f1
;
; Called Functions:
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aacd0
        ;   Label: FUN_005aacd0
    PUSH ESI                            ; 005aacd1
    PUSH EDI                            ; 005aacd2
    PUSH EBP                            ; 005aacd3
    SUB ESP,0x3c                        ; 005aacd4
    MOV EAX,dword ptr [ESP + 0x50]      ; 005aacd7
    MOV EDX,dword ptr [EAX + 0x298]     ; 005aacdb
    XOR EBP,EBP                         ; 005aace1
    TEST EDX,EDX                        ; 005aace3
    JLE 0x005aad8f                      ; 005aace5
        ;   XREF to: 005aad8f (CONDITIONAL_JUMP)  ; LAB_005aad8f
    ADD EAX,0x29c                       ; 005aaceb
    MOV dword ptr [ESP + 0x38],EAX      ; 005aacf0
    MOV EAX,dword ptr [ESP + 0x50]      ; 005aacf4
    ADD EAX,0x3c                        ; 005aacf8
    MOV dword ptr [ESP + 0x30],EAX      ; 005aacfb
    MOV EAX,dword ptr [ESP + 0x50]      ; 005aacff
    MOV EBX,dword ptr [ESP + 0x50]      ; 005aad03
    ADD EAX,0x20                        ; 005aad07
    ADD EBX,0x2a8                       ; 005aad0a
    MOV dword ptr [ESP + 0x34],EAX      ; 005aad10
    MOV EAX,EBP                         ; 005aad14
        ;   Label: LAB_005aad14
    MOV ESI,dword ptr [ESP + 0x38]      ; 005aad16
    SHL EAX,0x5                         ; 005aad1a
    ADD EAX,ESI                         ; 005aad1d
    PUSH EAX                            ; 005aad1f
    MOV EDI,dword ptr [ESP + 0x34]      ; 005aad20
    PUSH EDI                            ; 005aad24
    LEA ESI,[ESP + 0x8]                 ; 005aad25
    CALL FUN_0045f690                   ; 005aad29
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA EDI,[ESP + 0x2c]                ; 005aad2e
    LEA ESI,[ESP + 0x8]                 ; 005aad32
    ADD ESP,0x8                         ; 005aad36
    MOVSD ES:EDI,ESI                    ; 005aad39
    MOVSD ES:EDI,ESI                    ; 005aad3a
    MOVSD ES:EDI,ESI                    ; 005aad3b
    MOV EAX,dword ptr [ESP + 0x34]      ; 005aad3c
    FLD float ptr [ESP + 0x24]          ; 005aad40
    FLD float ptr [ESP + 0x28]          ; 005aad44
    FLD float ptr [ESP + 0x2c]          ; 005aad48
    LEA EDI,[ESP + 0xc]                 ; 005aad4c
    LEA ESI,[ESP + 0x18]                ; 005aad50
    FXCH ST2                            ; 005aad54
    FADD float ptr [EAX]                ; 005aad56
    FXCH                                ; 005aad58
    FADD float ptr [EAX + 0x4]          ; 005aad5a
    FXCH ST2                            ; 005aad5d
    FADD float ptr [EAX + 0x8]          ; 005aad5f
    FXCH                                ; 005aad62
    FSTP float ptr [ESP + 0x18]         ; 005aad64
    FXCH                                ; 005aad68
    FSTP float ptr [ESP + 0x1c]         ; 005aad6a
    FSTP float ptr [ESP + 0x20]         ; 005aad6e
    LEA EAX,[ESP + 0xc]                 ; 005aad72
    MOVSD ES:EDI,ESI                    ; 005aad76
    MOVSD ES:EDI,ESI                    ; 005aad77
    MOVSD ES:EDI,ESI                    ; 005aad78
    CMP EBX,EAX                         ; 005aad79
    JNZ 0x005aad97                      ; 005aad7b
        ;   XREF to: 005aad97 (CONDITIONAL_JUMP)  ; LAB_005aad97
    MOV EAX,dword ptr [ESP + 0x50]      ; 005aad7d
        ;   Label: LAB_005aad7d
    INC EBP                             ; 005aad81
    MOV ECX,dword ptr [EAX + 0x298]     ; 005aad82
    ADD EBX,0x20                        ; 005aad88
    CMP EBP,ECX                         ; 005aad8b
    JL 0x005aad14                       ; 005aad8d
        ;   XREF to: 005aad14 (CONDITIONAL_JUMP)  ; LAB_005aad14
    ADD ESP,0x3c                        ; 005aad8f
        ;   Label: LAB_005aad8f
    POP EBP                             ; 005aad92
    POP EDI                             ; 005aad93
    POP ESI                             ; 005aad94
    POP EBX                             ; 005aad95
    RET                                 ; 005aad96
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aad97
        ;   Label: LAB_005aad97
    MOV dword ptr [EBX],EAX             ; 005aad9b
    MOV EAX,dword ptr [ESP + 0x10]      ; 005aad9d
    MOV dword ptr [EBX + 0x4],EAX       ; 005aada1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aada4
    MOV dword ptr [EBX + 0x8],EAX       ; 005aada8
    JMP 0x005aad7d                      ; 005aadab
        ;   XREF to: 005aad7d (UNCONDITIONAL_JUMP)  ; LAB_005aad7d

