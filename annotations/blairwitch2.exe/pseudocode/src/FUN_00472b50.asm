; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00472b50(undefined4 param_1,float *param_2,float *param_3)
;
;
; XREF[1]:
;   FUN_0046d110 at 0046d1ae
;
; Called Functions:
;   FUN_00472c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472b50
        ;   Label: FUN_00472b50
    PUSH EDI                            ; 00472b51
    PUSH EBP                            ; 00472b52
    MOV EBP,ESP                         ; 00472b53
    SUB ESP,0x58                        ; 00472b55
    AND ESP,0xfffffff8                  ; 00472b58
    MOV EBX,ESI                         ; 00472b5b
    MOV ESI,dword ptr [EBP + 0x18]      ; 00472b5d
    PUSH 0x0                            ; 00472b60
    PUSH 0x0                            ; 00472b62
    PUSH ESI                            ; 00472b64
    MOV EDX,dword ptr [EBP + 0x14]      ; 00472b65
    PUSH EDX                            ; 00472b68
    MOV ECX,dword ptr [EBP + 0x10]      ; 00472b69
    PUSH ECX                            ; 00472b6c
    CALL FUN_00472c60                   ; 00472b6d
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00472c60()
    MOV dword ptr [ESP + 0x68],EAX      ; 00472b72
    FLD float ptr [ESP + 0x68]          ; 00472b76
    ADD ESP,0x14                        ; 00472b7a
    FLDZ                                ; 00472b7d
    FXCH                                ; 00472b7f
    FST float ptr [ESP + 0x8]           ; 00472b81
    FSTP double ptr [ESP]               ; 00472b85
    FCOMP double ptr [ESP]              ; 00472b88
    FNSTSW AX                           ; 00472b8b
    SAHF                                ; 00472b8d
    JA 0x00472c47                       ; 00472b8e
        ;   XREF to: 00472c47 (CONDITIONAL_JUMP)  ; LAB_00472c47
    FLD1                                ; 00472b94
    FCOMP double ptr [ESP]              ; 00472b96
    FNSTSW AX                           ; 00472b99
    SAHF                                ; 00472b9b
    JBE 0x00472c47                      ; 00472b9c
        ;   XREF to: 00472c47 (CONDITIONAL_JUMP)  ; LAB_00472c47
    FLD float ptr [ESI + 0x4]           ; 00472ba2
    FLD float ptr [ESI + 0x8]           ; 00472ba5
    FLD float ptr [ESI]                 ; 00472ba8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472baa
    LEA EDI,[ESP + 0x48]                ; 00472bad
    LEA ESI,[ESP + 0x30]                ; 00472bb1
    FSUB float ptr [EAX]                ; 00472bb5
    FXCH ST2                            ; 00472bb7
    FSUB float ptr [EAX + 0x4]          ; 00472bb9
    FXCH                                ; 00472bbc
    FSUB float ptr [EAX + 0x8]          ; 00472bbe
    FXCH ST2                            ; 00472bc1
    FSTP float ptr [ESP + 0x30]         ; 00472bc3
    FSTP float ptr [ESP + 0x34]         ; 00472bc7
    FSTP float ptr [ESP + 0x38]         ; 00472bcb
    MOVSD ES:EDI,ESI                    ; 00472bcf
    MOVSD ES:EDI,ESI                    ; 00472bd0
    MOVSD ES:EDI,ESI                    ; 00472bd1
    FLD float ptr [ESP + 0x8]           ; 00472bd2
    FLD float ptr [ESP + 0x48]          ; 00472bd6
    FMUL ST1                            ; 00472bda
    FLD float ptr [ESP + 0x4c]          ; 00472bdc
    FMUL ST2                            ; 00472be0
    FLD float ptr [ESP + 0x50]          ; 00472be2
    FMULP ST3                           ; 00472be6
    LEA EDI,[ESP + 0xc]                 ; 00472be8
    LEA ESI,[ESP + 0x3c]                ; 00472bec
    FXCH                                ; 00472bf0
    FSTP float ptr [ESP + 0x3c]         ; 00472bf2
    FSTP float ptr [ESP + 0x40]         ; 00472bf6
    FSTP float ptr [ESP + 0x44]         ; 00472bfa
    MOVSD ES:EDI,ESI                    ; 00472bfe
    MOVSD ES:EDI,ESI                    ; 00472bff
    MOVSD ES:EDI,ESI                    ; 00472c00
    FLD float ptr [EAX]                 ; 00472c01
    FLD float ptr [EAX + 0x4]           ; 00472c03
    FLD float ptr [EAX + 0x8]           ; 00472c06
    LEA EDI,[ESP + 0x18]                ; 00472c09
    LEA ESI,[ESP + 0x24]                ; 00472c0d
    FXCH ST2                            ; 00472c11
    FADD float ptr [ESP + 0xc]          ; 00472c13
    FXCH                                ; 00472c17
    FADD float ptr [ESP + 0x10]         ; 00472c19
    FXCH ST2                            ; 00472c1d
    FADD float ptr [ESP + 0x14]         ; 00472c1f
    FXCH                                ; 00472c23
    FSTP float ptr [ESP + 0x24]         ; 00472c25
    FXCH                                ; 00472c29
    FSTP float ptr [ESP + 0x28]         ; 00472c2b
    FSTP float ptr [ESP + 0x2c]         ; 00472c2f
    MOVSD ES:EDI,ESI                    ; 00472c33
    MOVSD ES:EDI,ESI                    ; 00472c34
    MOVSD ES:EDI,ESI                    ; 00472c35
    LEA ESI,[ESP + 0x18]                ; 00472c36
    MOV EDI,EBX                         ; 00472c3a
    MOVSD ES:EDI,ESI                    ; 00472c3c
    MOVSD ES:EDI,ESI                    ; 00472c3d
    MOVSD ES:EDI,ESI                    ; 00472c3e
    MOV EAX,EBX                         ; 00472c3f
    MOV ESP,EBP                         ; 00472c41
    POP EBP                             ; 00472c43
    POP EDI                             ; 00472c44
    POP EBX                             ; 00472c45
    RET                                 ; 00472c46
    LEA EDI,[ESP + 0x18]                ; 00472c47
        ;   Label: LAB_00472c47
    MOVSD ES:EDI,ESI                    ; 00472c4b
    MOVSD ES:EDI,ESI                    ; 00472c4c
    MOVSD ES:EDI,ESI                    ; 00472c4d
    LEA ESI,[ESP + 0x18]                ; 00472c4e
    MOV EDI,EBX                         ; 00472c52
    MOVSD ES:EDI,ESI                    ; 00472c54
    MOVSD ES:EDI,ESI                    ; 00472c55
    MOVSD ES:EDI,ESI                    ; 00472c56
    MOV EAX,EBX                         ; 00472c57
    MOV ESP,EBP                         ; 00472c59
    POP EBP                             ; 00472c5b
    POP EDI                             ; 00472c5c
    POP EBX                             ; 00472c5d
    RET                                 ; 00472c5e

