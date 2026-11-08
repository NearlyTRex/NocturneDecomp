; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044ab20(int param_1)
;
;
; XREF[1]:
;   FUN_0044b6f0 at 0044bb84
;
; Called Functions:
;   FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ab20
        ;   Label: FUN_0044ab20
    PUSH ESI                            ; 0044ab21
    PUSH EDI                            ; 0044ab22
    PUSH EBP                            ; 0044ab23
    SUB ESP,0x40                        ; 0044ab24
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044ab27
    XOR EDX,EDX                         ; 0044ab2b
    MOV ECX,dword ptr [EAX + 0x204]     ; 0044ab2d
    MOV dword ptr [ESP + 0x3c],EDX      ; 0044ab33
    TEST ECX,ECX                        ; 0044ab37
    JLE 0x0044abf1                      ; 0044ab39
        ;   XREF to: 0044abf1 (CONDITIONAL_JUMP)  ; LAB_0044abf1
    ADD EAX,0x208                       ; 0044ab3f
    MOV dword ptr [ESP + 0x30],EAX      ; 0044ab44
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044ab48
    ADD EAX,0x20                        ; 0044ab4c
    MOV dword ptr [ESP + 0x34],EAX      ; 0044ab4f
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044ab53
    MOV EBX,dword ptr [ESP + 0x54]      ; 0044ab57
    ADD EAX,0x3c                        ; 0044ab5b
    ADD EBX,0x228                       ; 0044ab5e
    MOV dword ptr [ESP + 0x38],EAX      ; 0044ab64
    IMUL EBP,dword ptr [ESP + 0x3c],0x74 ; 0044ab68
        ;   Label: LAB_0044ab68
    FLD float ptr [EBX]                 ; 0044ab6d
    FLD float ptr [EBX + 0x4]           ; 0044ab6f
    FLD float ptr [EBX + 0x8]           ; 0044ab72
    MOV EDX,dword ptr [ESP + 0x30]      ; 0044ab75
    LEA EDI,[ESP + 0x18]                ; 0044ab79
    LEA ESI,[ESP + 0x24]                ; 0044ab7d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044ab81
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044ab85
    ADD EBP,EDX                         ; 0044ab89
    FXCH ST2                            ; 0044ab8b
    FSUB float ptr [EAX]                ; 0044ab8d
    FXCH                                ; 0044ab8f
    FSUB float ptr [EAX + 0x4]          ; 0044ab91
    FXCH ST2                            ; 0044ab94
    FSUB float ptr [EAX + 0x8]          ; 0044ab96
    FXCH                                ; 0044ab99
    FSTP float ptr [ESP + 0x24]         ; 0044ab9b
    FXCH                                ; 0044ab9f
    FSTP float ptr [ESP + 0x28]         ; 0044aba1
    LEA EAX,[ESP + 0x18]                ; 0044aba5
    FSTP float ptr [ESP + 0x2c]         ; 0044aba9
    PUSH EAX                            ; 0044abad
    MOVSD ES:EDI,ESI                    ; 0044abae
    MOVSD ES:EDI,ESI                    ; 0044abaf
    MOVSD ES:EDI,ESI                    ; 0044abb0
    PUSH ECX                            ; 0044abb1
    LEA ESI,[ESP + 0x8]                 ; 0044abb2
    LEA EDI,[ESP + 0x14]                ; 0044abb6
    CALL FUN_0045f700                   ; 0044abba
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f700()
    LEA ESI,[ESP + 0x8]                 ; 0044abbf
    ADD ESP,0x8                         ; 0044abc3
    LEA EAX,[ESP + 0xc]                 ; 0044abc6
    MOVSD ES:EDI,ESI                    ; 0044abca
    MOVSD ES:EDI,ESI                    ; 0044abcb
    MOVSD ES:EDI,ESI                    ; 0044abcc
    CMP EBP,EAX                         ; 0044abcd
    JNZ 0x0044abf9                      ; 0044abcf
        ;   XREF to: 0044abf9 (CONDITIONAL_JUMP)  ; LAB_0044abf9
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044abd1
        ;   Label: LAB_0044abd1
    INC ESI                             ; 0044abd5
    MOV dword ptr [ESP + 0x3c],ESI      ; 0044abd6
    MOV EAX,ESI                         ; 0044abda
    MOV ESI,dword ptr [ESP + 0x54]      ; 0044abdc
    MOV EDI,dword ptr [ESI + 0x204]     ; 0044abe0
    ADD EBX,0x74                        ; 0044abe6
    CMP EAX,EDI                         ; 0044abe9
    JL 0x0044ab68                       ; 0044abeb
        ;   XREF to: 0044ab68 (CONDITIONAL_JUMP)  ; LAB_0044ab68
    ADD ESP,0x40                        ; 0044abf1
        ;   Label: LAB_0044abf1
    POP EBP                             ; 0044abf4
    POP EDI                             ; 0044abf5
    POP ESI                             ; 0044abf6
    POP EBX                             ; 0044abf7
    RET                                 ; 0044abf8
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044abf9
        ;   Label: LAB_0044abf9
    MOV dword ptr [EBP],EAX             ; 0044abfd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044ac00
    MOV dword ptr [EBP + 0x4],EAX       ; 0044ac04
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044ac07
    MOV dword ptr [EBP + 0x8],EAX       ; 0044ac0b
    JMP 0x0044abd1                      ; 0044ac0e
        ;   XREF to: 0044abd1 (UNCONDITIONAL_JUMP)  ; LAB_0044abd1

