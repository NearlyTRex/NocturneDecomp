; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b19b0(int param_1,float *param_2)
;
;
; Called Functions:
;   FUN_00449280
;   FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b19b0
        ;   Label: FUN_005b19b0
    PUSH ESI                            ; 005b19b1
    PUSH EDI                            ; 005b19b2
    PUSH EBP                            ; 005b19b3
    SUB ESP,0x78                        ; 005b19b4
    MOV EBX,dword ptr [ESP + 0x90]      ; 005b19b7
    FLD float ptr [EBX]                 ; 005b19be
    FLD float ptr [EBX + 0x4]           ; 005b19c0
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005b19c3
    FLD float ptr [EBX + 0x8]           ; 005b19ca
    ADD EAX,0x3ab14                     ; 005b19cd
    LEA EDI,[ESP + 0x40]                ; 005b19d2
    LEA ESI,[ESP + 0x58]                ; 005b19d6
    FXCH ST2                            ; 005b19da
    FSUB float ptr [EAX]                ; 005b19dc
    FXCH                                ; 005b19de
    FSUB float ptr [EAX + 0x4]          ; 005b19e0
    FXCH ST2                            ; 005b19e3
    FSUB float ptr [EAX + 0x8]          ; 005b19e5
    FXCH                                ; 005b19e8
    FSTP float ptr [ESP + 0x58]         ; 005b19ea
    FXCH                                ; 005b19ee
    FSTP float ptr [ESP + 0x5c]         ; 005b19f0
    FSTP float ptr [ESP + 0x60]         ; 005b19f4
    MOVSD ES:EDI,ESI                    ; 005b19f8
    MOVSD ES:EDI,ESI                    ; 005b19f9
    MOVSD ES:EDI,ESI                    ; 005b19fa
    CMP EAX,EBX                         ; 005b19fb
    JZ 0x005b1a0f                       ; 005b19fd
        ;   XREF to: 005b1a0f (CONDITIONAL_JUMP)  ; LAB_005b1a0f
    MOV EDX,dword ptr [EBX]             ; 005b19ff
    MOV dword ptr [EAX],EDX             ; 005b1a01
    MOV EDX,dword ptr [EBX + 0x4]       ; 005b1a03
    MOV dword ptr [EAX + 0x4],EDX       ; 005b1a06
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b1a09
    MOV dword ptr [EAX + 0x8],EDX       ; 005b1a0c
    LEA EAX,[ESP + 0x40]                ; 005b1a0f
        ;   Label: LAB_005b1a0f
    PUSH EAX                            ; 005b1a13
    LEA EAX,[ESP + 0x4]                 ; 005b1a14
    PUSH EAX                            ; 005b1a18
    CALL FUN_00449280                   ; 005b1a19
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 005b1a1e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005b1a21
    XOR EDX,EDX                         ; 005b1a28
    MOV ECX,dword ptr [EAX + 0x104]     ; 005b1a2a
    MOV dword ptr [ESP + 0x74],EDX      ; 005b1a30
    TEST ECX,ECX                        ; 005b1a34
    JLE 0x005b1af9                      ; 005b1a36
        ;   XREF to: 005b1af9 (CONDITIONAL_JUMP)  ; LAB_005b1af9
    ADD EAX,0x398                       ; 005b1a3c
    MOV dword ptr [ESP + 0x70],EAX      ; 005b1a41
    LEA EBX,[EAX + 0x24]                ; 005b1a45
    IMUL EBP,dword ptr [ESP + 0x74],0x11c ; 005b1a48
        ;   Label: LAB_005b1a48
    ADD EBP,dword ptr [ESP + 0x70]      ; 005b1a50
    PUSH EBP                            ; 005b1a54
    LEA EAX,[ESP + 0x4]                 ; 005b1a55
    PUSH EAX                            ; 005b1a59
    LEA ESI,[ESP + 0x6c]                ; 005b1a5a
    LEA EDI,[ESP + 0x54]                ; 005b1a5e
    CALL FUN_004495a0                   ; 005b1a62
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004495a0()
    LEA ESI,[ESP + 0x6c]                ; 005b1a67
    ADD ESP,0x8                         ; 005b1a6b
    LEA EAX,[ESP + 0x4c]                ; 005b1a6e
    MOVSD ES:EDI,ESI                    ; 005b1a72
    MOVSD ES:EDI,ESI                    ; 005b1a73
    MOVSD ES:EDI,ESI                    ; 005b1a74
    CMP EBP,EAX                         ; 005b1a75
    JZ 0x005b1a8e                       ; 005b1a77
        ;   XREF to: 005b1a8e (CONDITIONAL_JUMP)  ; LAB_005b1a8e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005b1a79
    MOV dword ptr [EBP],EAX             ; 005b1a7d
    MOV EAX,dword ptr [ESP + 0x50]      ; 005b1a80
    MOV dword ptr [EBP + 0x4],EAX       ; 005b1a84
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b1a87
    MOV dword ptr [EBP + 0x8],EAX       ; 005b1a8b
    IMUL EAX,dword ptr [ESP + 0x74],0x11c ; 005b1a8e
        ;   Label: LAB_005b1a8e
    ADD EAX,dword ptr [ESP + 0x70]      ; 005b1a96
    PUSH EAX                            ; 005b1a9a
    LEA EAX,[ESP + 0x4]                 ; 005b1a9b
    PUSH EAX                            ; 005b1a9f
    LEA ESI,[ESP + 0x30]                ; 005b1aa0
    LEA EDI,[ESP + 0x3c]                ; 005b1aa4
    CALL FUN_004495a0                   ; 005b1aa8
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004495a0()
    LEA ESI,[ESP + 0x30]                ; 005b1aad
    ADD ESP,0x8                         ; 005b1ab1
    LEA EAX,[ESP + 0x34]                ; 005b1ab4
    MOVSD ES:EDI,ESI                    ; 005b1ab8
    MOVSD ES:EDI,ESI                    ; 005b1ab9
    MOVSD ES:EDI,ESI                    ; 005b1aba
    CMP EBX,EAX                         ; 005b1abb
    JZ 0x005b1ad3                       ; 005b1abd
        ;   XREF to: 005b1ad3 (CONDITIONAL_JUMP)  ; LAB_005b1ad3
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b1abf
    MOV dword ptr [EBX],EAX             ; 005b1ac3
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b1ac5
    MOV dword ptr [EBX + 0x4],EAX       ; 005b1ac9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b1acc
    MOV dword ptr [EBX + 0x8],EAX       ; 005b1ad0
    MOV ESI,dword ptr [ESP + 0x74]      ; 005b1ad3
        ;   Label: LAB_005b1ad3
    INC ESI                             ; 005b1ad7
    MOV dword ptr [ESP + 0x74],ESI      ; 005b1ad8
    MOV EAX,ESI                         ; 005b1adc
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005b1ade
    MOV EDI,dword ptr [ESI + 0x104]     ; 005b1ae5
    ADD EBX,0x11c                       ; 005b1aeb
    CMP EAX,EDI                         ; 005b1af1
    JL 0x005b1a48                       ; 005b1af3
        ;   XREF to: 005b1a48 (CONDITIONAL_JUMP)  ; LAB_005b1a48
    ADD ESP,0x78                        ; 005b1af9
        ;   Label: LAB_005b1af9
    POP EBP                             ; 005b1afc
    POP EDI                             ; 005b1afd
    POP ESI                             ; 005b1afe
    POP EBX                             ; 005b1aff
    RET                                 ; 005b1b00

