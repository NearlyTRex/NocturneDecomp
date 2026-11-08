; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a0ac0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d595d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0ac0
        ;   Label: FUN_004a0ac0
    PUSH ESI                            ; 004a0ac1
    PUSH EDI                            ; 004a0ac2
    SUB ESP,0x60                        ; 004a0ac3
    MOV ESI,dword ptr [ESP + 0x70]      ; 004a0ac6
    MOV EBX,dword ptr [ESP + 0x74]      ; 004a0aca
    PUSH ESI                            ; 004a0ace
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004a0acf
    LEA ESI,[ESP + 0x1c]                ; 004a0ad5
    LEA EDI,[ESP + 0x4]                 ; 004a0ad9
    CALL dword ptr [EAX + 0x24]         ; 004a0add
    MOV ECX,0x6                         ; 004a0ae0
    LEA ESI,[ESP + 0x1c]                ; 004a0ae5
    ADD ESP,0x4                         ; 004a0ae9
    MOVSD.REP ES:EDI,ESI                ; 004a0aec
    MOV EAX,ESP                         ; 004a0aee
    FLD float ptr [ESP]                 ; 004a0af0
    FLD float ptr [ESP + 0x4]           ; 004a0af3
    FLD float ptr [ESP + 0x8]           ; 004a0af7
    LEA EDI,[ESP + 0x48]                ; 004a0afb
    LEA ESI,[ESP + 0x3c]                ; 004a0aff
    FXCH ST2                            ; 004a0b03
    FADD float ptr [EAX + 0xc]          ; 004a0b05
    FXCH                                ; 004a0b08
    FADD float ptr [EAX + 0x10]         ; 004a0b0a
    FXCH ST2                            ; 004a0b0d
    FADD float ptr [EAX + 0x14]         ; 004a0b0f
    FXCH                                ; 004a0b12
    FSTP float ptr [ESP + 0x3c]         ; 004a0b14
    FXCH                                ; 004a0b18
    FSTP float ptr [ESP + 0x40]         ; 004a0b1a
    FSTP float ptr [ESP + 0x44]         ; 004a0b1e
    MOVSD ES:EDI,ESI                    ; 004a0b22
    MOVSD ES:EDI,ESI                    ; 004a0b23
    MOVSD ES:EDI,ESI                    ; 004a0b24
    FLD float ptr [0x005d595d]          ; 004a0b25 | DAT_005d595d
    FLD float ptr [ESP + 0x48]          ; 004a0b2b
    FMUL ST1                            ; 004a0b2f
    FLD float ptr [ESP + 0x4c]          ; 004a0b31
    FMUL ST2                            ; 004a0b35
    FLD float ptr [ESP + 0x50]          ; 004a0b37
    FMULP ST3                           ; 004a0b3b
    LEA EAX,[ESP + 0x30]                ; 004a0b3d
    LEA EDI,[ESP + 0x30]                ; 004a0b41
    LEA ESI,[ESP + 0x54]                ; 004a0b45
    FXCH                                ; 004a0b49
    FSTP float ptr [ESP + 0x54]         ; 004a0b4b
    FSTP float ptr [ESP + 0x58]         ; 004a0b4f
    FSTP float ptr [ESP + 0x5c]         ; 004a0b53
    MOVSD ES:EDI,ESI                    ; 004a0b57
    MOVSD ES:EDI,ESI                    ; 004a0b58
    MOVSD ES:EDI,ESI                    ; 004a0b59
    CMP EBX,EAX                         ; 004a0b5a
    JNZ 0x004a0b6a                      ; 004a0b5c
        ;   XREF to: 004a0b6a (CONDITIONAL_JUMP)  ; LAB_004a0b6a
    MOV EAX,0x1                         ; 004a0b5e
    ADD ESP,0x60                        ; 004a0b63
    POP EDI                             ; 004a0b66
    POP ESI                             ; 004a0b67
    POP EBX                             ; 004a0b68
    RET                                 ; 004a0b69
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a0b6a
        ;   Label: LAB_004a0b6a
    MOV dword ptr [EBX],EAX             ; 004a0b6e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a0b70
    MOV dword ptr [EBX + 0x4],EAX       ; 004a0b74
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a0b77
    MOV dword ptr [EBX + 0x8],EAX       ; 004a0b7b
    MOV EAX,0x1                         ; 004a0b7e
    ADD ESP,0x60                        ; 004a0b83
    POP EDI                             ; 004a0b86
    POP ESI                             ; 004a0b87
    POP EBX                             ; 004a0b88
    RET                                 ; 004a0b89

