; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_005aadb0(int param_1)
;
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aadb0
        ;   Label: core_wateract.cpp_FUN_005aadb0
    PUSH ESI                            ; 005aadb1
    PUSH EDI                            ; 005aadb2
    PUSH EBP                            ; 005aadb3
    SUB ESP,0x40                        ; 005aadb4
    MOV EAX,dword ptr [ESP + 0x54]      ; 005aadb7
    XOR EDX,EDX                         ; 005aadbb
    MOV ECX,dword ptr [EAX + 0x298]     ; 005aadbd
    MOV dword ptr [ESP + 0x38],EDX      ; 005aadc3
    TEST ECX,ECX                        ; 005aadc7
    JLE 0x005aae81                      ; 005aadc9
        ;   XREF to: 005aae81 (CONDITIONAL_JUMP)  ; LAB_005aae81
    ADD EAX,0x29c                       ; 005aadcf
    MOV dword ptr [ESP + 0x34],EAX      ; 005aadd4
    MOV EAX,dword ptr [ESP + 0x54]      ; 005aadd8
    ADD EAX,0x20                        ; 005aaddc
    MOV dword ptr [ESP + 0x3c],EAX      ; 005aaddf
    MOV EAX,dword ptr [ESP + 0x54]      ; 005aade3
    MOV EBX,dword ptr [ESP + 0x54]      ; 005aade7
    ADD EAX,0x3c                        ; 005aadeb
    ADD EBX,0x2a8                       ; 005aadee
    MOV dword ptr [ESP + 0x30],EAX      ; 005aadf4
    FLD float ptr [EBX]                 ; 005aadf8
        ;   Label: LAB_005aadf8
    FLD float ptr [EBX + 0x4]           ; 005aadfa
    FLD float ptr [EBX + 0x8]           ; 005aadfd
    MOV EBP,dword ptr [ESP + 0x38]      ; 005aae00
    MOV EAX,dword ptr [ESP + 0x34]      ; 005aae04
    SHL EBP,0x5                         ; 005aae08
    LEA EDI,[ESP + 0xc]                 ; 005aae0b
    ADD EBP,EAX                         ; 005aae0f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005aae11
    LEA ESI,[ESP + 0x24]                ; 005aae15
    MOV EDX,dword ptr [ESP + 0x30]      ; 005aae19
    FXCH ST2                            ; 005aae1d
    FSUB float ptr [EAX]                ; 005aae1f
    FXCH                                ; 005aae21
    FSUB float ptr [EAX + 0x4]          ; 005aae23
    FXCH ST2                            ; 005aae26
    FSUB float ptr [EAX + 0x8]          ; 005aae28
    FXCH                                ; 005aae2b
    FSTP float ptr [ESP + 0x24]         ; 005aae2d
    FXCH                                ; 005aae31
    FSTP float ptr [ESP + 0x28]         ; 005aae33
    LEA EAX,[ESP + 0xc]                 ; 005aae37
    FSTP float ptr [ESP + 0x2c]         ; 005aae3b
    PUSH EAX                            ; 005aae3f
    MOVSD ES:EDI,ESI                    ; 005aae40
    MOVSD ES:EDI,ESI                    ; 005aae41
    MOVSD ES:EDI,ESI                    ; 005aae42
    PUSH EDX                            ; 005aae43
    LEA ESI,[ESP + 0x20]                ; 005aae44
    LEA EDI,[ESP + 0x8]                 ; 005aae48
    CALL core_dirmat.cpp_FUN_0045f700   ; 005aae4c
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x20]                ; 005aae51
    ADD ESP,0x8                         ; 005aae55
    MOV EAX,ESP                         ; 005aae58
    MOVSD ES:EDI,ESI                    ; 005aae5a
    MOVSD ES:EDI,ESI                    ; 005aae5b
    MOVSD ES:EDI,ESI                    ; 005aae5c
    CMP EBP,EAX                         ; 005aae5d
    JNZ 0x005aae89                      ; 005aae5f
        ;   XREF to: 005aae89 (CONDITIONAL_JUMP)  ; LAB_005aae89
    MOV ESI,dword ptr [ESP + 0x38]      ; 005aae61
        ;   Label: LAB_005aae61
    INC ESI                             ; 005aae65
    MOV dword ptr [ESP + 0x38],ESI      ; 005aae66
    MOV EAX,ESI                         ; 005aae6a
    MOV ESI,dword ptr [ESP + 0x54]      ; 005aae6c
    MOV EDI,dword ptr [ESI + 0x298]     ; 005aae70
    ADD EBX,0x20                        ; 005aae76
    CMP EAX,EDI                         ; 005aae79
    JL 0x005aadf8                       ; 005aae7b
        ;   XREF to: 005aadf8 (CONDITIONAL_JUMP)  ; LAB_005aadf8
    ADD ESP,0x40                        ; 005aae81
        ;   Label: LAB_005aae81
    POP EBP                             ; 005aae84
    POP EDI                             ; 005aae85
    POP ESI                             ; 005aae86
    POP EBX                             ; 005aae87
    RET                                 ; 005aae88
    MOV EAX,dword ptr [ESP]             ; 005aae89
        ;   Label: LAB_005aae89
    MOV dword ptr [EBP],EAX             ; 005aae8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aae8f
    MOV dword ptr [EBP + 0x4],EAX       ; 005aae93
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aae96
    MOV dword ptr [EBP + 0x8],EAX       ; 005aae9a
    JMP 0x005aae61                      ; 005aae9d
        ;   XREF to: 005aae61 (UNCONDITIONAL_JUMP)  ; LAB_005aae61

