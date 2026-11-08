; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547b80(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)
;
;
; XREF[1]:
;   FUN_00547910 at 00547984
;
; Called Functions:
;   FUN_00504080
;   FUN_00540f30
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547b80
        ;   Label: FUN_00547b80
    PUSH ESI                            ; 00547b81
    PUSH EDI                            ; 00547b82
    PUSH EBP                            ; 00547b83
    MOV EBP,ESP                         ; 00547b84
    SUB ESP,0x74                        ; 00547b86
    AND ESP,0xfffffff8                  ; 00547b89
    MOV EDX,dword ptr [EBP + 0x14]      ; 00547b8c
    PUSH EDX                            ; 00547b8f
    CALL FUN_00547890                   ; 00547b90
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 00547b95
    MOV ESI,EAX                         ; 00547b98
    MOV dword ptr [ESP + 0x68],EAX      ; 00547b9a
    MOV EAX,ESP                         ; 00547b9e
    PUSH EAX                            ; 00547ba0
    LEA EAX,[ESP + 0x64]                ; 00547ba1
    PUSH EAX                            ; 00547ba5
    LEA EAX,[ESP + 0x64]                ; 00547ba6
    PUSH EAX                            ; 00547baa
    MOV ECX,dword ptr [EBP + 0x18]      ; 00547bab
    PUSH dword ptr [EBP + 0x1c]         ; 00547bae
    PUSH ECX                            ; 00547bb1
    MOV EBX,dword ptr [EBP + 0x14]      ; 00547bb2
    PUSH EBX                            ; 00547bb5
    CALL FUN_00504080                   ; 00547bb6
        ;   XREF to: 00504080 (UNCONDITIONAL_CALL)  ; undefined FUN_00504080()
    ADD ESP,0x18                        ; 00547bbb
    MOV EDI,dword ptr [ESI + 0x1d1f8]   ; 00547bbe
    XOR EBX,EBX                         ; 00547bc4
    TEST EDI,EDI                        ; 00547bc6
    JLE 0x00547c40                      ; 00547bc8
        ;   XREF to: 00547c40 (CONDITIONAL_JUMP)  ; LAB_00547c40
    MOV EAX,dword ptr [EBP + 0x20]      ; 00547bca
    MOV dword ptr [ESP + 0x70],EAX      ; 00547bcd
    MOV dword ptr [ESP + 0x6c],EAX      ; 00547bd1
    MOV EAX,dword ptr [ESP + 0x60]      ; 00547bd5
        ;   Label: LAB_00547bd5
    PUSH dword ptr [ESP]                ; 00547bd9
    PUSH EAX                            ; 00547bdc
    MOV EDX,dword ptr [ESP + 0x64]      ; 00547bdd
    PUSH EDX                            ; 00547be1
    PUSH EBX                            ; 00547be2
    MOV ECX,dword ptr [ESP + 0x78]      ; 00547be3
    PUSH ECX                            ; 00547be7
    LEA ESI,[ESP + 0x18]                ; 00547be8
    CALL FUN_00540f30                   ; 00547bec
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00540f30()
    ADD ESP,0x14                        ; 00547bf1
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00547bf4
    LEA ESI,[ESP + 0x4]                 ; 00547bf8
    LEA EDI,[EDI + 0xc]                 ; 00547bfc
    INC EBX                             ; 00547bff
    MOVSD ES:EDI,ESI                    ; 00547c00
    MOVSD ES:EDI,ESI                    ; 00547c01
    MOVSD ES:EDI,ESI                    ; 00547c02
    MOVSD ES:EDI,ESI                    ; 00547c03
    MOV EAX,dword ptr [ESP + 0x70]      ; 00547c04
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00547c08
    LEA ESI,[EAX + 0x4]                 ; 00547c0c
    MOV dword ptr [EAX + 0x64c],0x3f800000 ; 00547c0f
    MOV EAX,dword ptr [ESP + 0x68]      ; 00547c19
    MOV dword ptr [ESP + 0x70],ESI      ; 00547c1d
    ADD EDI,0x10                        ; 00547c21
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00547c24
    MOV dword ptr [ESP + 0x6c],EDI      ; 00547c2a
    CMP EBX,EDX                         ; 00547c2e
    JL 0x00547bd5                       ; 00547c30
        ;   XREF to: 00547bd5 (CONDITIONAL_JUMP)  ; LAB_00547bd5
    LEA EAX,[EAX]                       ; 00547c32
    LEA EDX,[EDX]                       ; 00547c38
    MOV EAX,EAX                         ; 00547c3e
    MOV EBX,dword ptr [ESP + 0x60]      ; 00547c40
        ;   Label: LAB_00547c40
    LEA EAX,[EBX*0x4 + 0x0]             ; 00547c44
    SUB EAX,EBX                         ; 00547c4b
    MOV EBX,dword ptr [ESP + 0x68]      ; 00547c4d
    MOV EBX,dword ptr [EBX + 0x1e014]   ; 00547c51
    FLD float ptr [EBX + EAX*0x4]       ; 00547c57
    FMUL float ptr [ESP]                ; 00547c5a
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 00547c5d
    FMUL float ptr [ESP]                ; 00547c61
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 00547c64
    FMUL float ptr [ESP]                ; 00547c68
    LEA EDI,[ESP + 0x2c]                ; 00547c6b
    LEA ESI,[ESP + 0x14]                ; 00547c6f
    FXCH ST2                            ; 00547c73
    FSTP float ptr [ESP + 0x14]         ; 00547c75
    FSTP float ptr [ESP + 0x18]         ; 00547c79
    FSTP float ptr [ESP + 0x1c]         ; 00547c7d
    MOVSD ES:EDI,ESI                    ; 00547c81
    MOVSD ES:EDI,ESI                    ; 00547c82
    MOVSD ES:EDI,ESI                    ; 00547c83
    FLD float ptr [ESP]                 ; 00547c84
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00547c87
    FLD1                                ; 00547c8b
    LEA EAX,[ESI*0x4 + 0x0]             ; 00547c8d
    FSUBRP                              ; 00547c94
    SUB EAX,ESI                         ; 00547c96
    FSTP float ptr [ESP + 0x64]         ; 00547c98
    FLD float ptr [EBX + EAX*0x4]       ; 00547c9c
    FMUL float ptr [ESP + 0x64]         ; 00547c9f
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 00547ca3
    FMUL float ptr [ESP + 0x64]         ; 00547ca7
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 00547cab
    FMUL float ptr [ESP + 0x64]         ; 00547caf
    MOV ECX,dword ptr [EBP + 0x20]      ; 00547cb3
    LEA EDI,[ESP + 0x44]                ; 00547cb6
    LEA ESI,[ESP + 0x50]                ; 00547cba
    FXCH ST2                            ; 00547cbe
    FSTP float ptr [ESP + 0x50]         ; 00547cc0
    FSTP float ptr [ESP + 0x54]         ; 00547cc4
    FSTP float ptr [ESP + 0x58]         ; 00547cc8
    MOVSD ES:EDI,ESI                    ; 00547ccc
    MOVSD ES:EDI,ESI                    ; 00547ccd
    MOVSD ES:EDI,ESI                    ; 00547cce
    LEA EAX,[ESP + 0x20]                ; 00547ccf
    FLD float ptr [ESP + 0x44]          ; 00547cd3
    FLD float ptr [ESP + 0x48]          ; 00547cd7
    FLD float ptr [ESP + 0x4c]          ; 00547cdb
    LEA EDI,[ESP + 0x20]                ; 00547cdf
    LEA ESI,[ESP + 0x38]                ; 00547ce3
    FXCH ST2                            ; 00547ce7
    FADD float ptr [ESP + 0x2c]         ; 00547ce9
    FXCH                                ; 00547ced
    FADD float ptr [ESP + 0x30]         ; 00547cef
    FXCH ST2                            ; 00547cf3
    FADD float ptr [ESP + 0x34]         ; 00547cf5
    FXCH                                ; 00547cf9
    FSTP float ptr [ESP + 0x38]         ; 00547cfb
    FXCH                                ; 00547cff
    FSTP float ptr [ESP + 0x3c]         ; 00547d01
    FSTP float ptr [ESP + 0x40]         ; 00547d05
    MOVSD ES:EDI,ESI                    ; 00547d09
    MOVSD ES:EDI,ESI                    ; 00547d0a
    MOVSD ES:EDI,ESI                    ; 00547d0b
    CMP EAX,ECX                         ; 00547d0c
    JNZ 0x00547d4b                      ; 00547d0e
        ;   XREF to: 00547d4b (CONDITIONAL_JUMP)  ; LAB_00547d4b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00547d10
        ;   Label: LAB_00547d10
    FLD float ptr [EAX + 0x508]         ; 00547d13
    MOV EAX,dword ptr [EBP + 0x20]      ; 00547d19
    FMUL float ptr [EAX]                ; 00547d1c
    FSTP float ptr [EAX]                ; 00547d1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00547d20
    FLD float ptr [EAX + 0x50c]         ; 00547d23
    MOV EAX,dword ptr [EBP + 0x20]      ; 00547d29
    FMUL float ptr [EAX + 0x4]          ; 00547d2c
    FSTP float ptr [EAX + 0x4]          ; 00547d2f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00547d32
    FLD float ptr [EAX + 0x510]         ; 00547d35
    MOV EAX,dword ptr [EBP + 0x20]      ; 00547d3b
    FMUL float ptr [EAX + 0x8]          ; 00547d3e
    FSTP float ptr [EAX + 0x8]          ; 00547d41
    MOV ESP,EBP                         ; 00547d44
    POP EBP                             ; 00547d46
    POP EDI                             ; 00547d47
    POP ESI                             ; 00547d48
    POP EBX                             ; 00547d49
    RET                                 ; 00547d4a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00547d4b
        ;   Label: LAB_00547d4b
    MOV dword ptr [ECX],EAX             ; 00547d4f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00547d51
    MOV dword ptr [ECX + 0x4],EAX       ; 00547d55
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547d58
    MOV dword ptr [ECX + 0x8],EAX       ; 00547d5c
    JMP 0x00547d10                      ; 00547d5f
        ;   XREF to: 00547d10 (UNCONDITIONAL_JUMP)  ; LAB_00547d10

