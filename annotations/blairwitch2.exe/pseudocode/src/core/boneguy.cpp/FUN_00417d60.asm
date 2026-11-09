; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00417d60(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cbfca
;   undefined4 DAT_005cbfd2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417d60
        ;   Label: core_boneguy.cpp_FUN_00417d60
    PUSH EDI                            ; 00417d61
    PUSH EBP                            ; 00417d62
    MOV EBP,ESP                         ; 00417d63
    SUB ESP,0x60                        ; 00417d65
    AND ESP,0xfffffff8                  ; 00417d68
    MOV EBX,ESI                         ; 00417d6b
    MOV ESI,dword ptr [EBP + 0x10]      ; 00417d6d
    PUSH ESI                            ; 00417d70
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00417d71
    LEA ESI,[ESP + 0x1c]                ; 00417d77
    LEA EDI,[ESP + 0x4]                 ; 00417d7b
    CALL dword ptr [EAX + 0x24]         ; 00417d7f
    MOV ECX,0x6                         ; 00417d82
    LEA ESI,[ESP + 0x1c]                ; 00417d87
    ADD ESP,0x4                         ; 00417d8b
    MOVSD.REP ES:EDI,ESI                ; 00417d8e
    FLD float ptr [ESP]                 ; 00417d90
    FLD float ptr [ESP + 0x4]           ; 00417d93
    FLD float ptr [ESP + 0x8]           ; 00417d97
    LEA EDI,[ESP + 0x54]                ; 00417d9b
    LEA ESI,[ESP + 0x30]                ; 00417d9f
    FXCH ST2                            ; 00417da3
    FADD float ptr [ESP + 0xc]          ; 00417da5
    FXCH                                ; 00417da9
    FADD float ptr [ESP + 0x10]         ; 00417dab
    FXCH ST2                            ; 00417daf
    FADD float ptr [ESP + 0x14]         ; 00417db1
    FXCH                                ; 00417db5
    FSTP float ptr [ESP + 0x30]         ; 00417db7
    FXCH                                ; 00417dbb
    FSTP float ptr [ESP + 0x34]         ; 00417dbd
    FSTP float ptr [ESP + 0x38]         ; 00417dc1
    MOVSD ES:EDI,ESI                    ; 00417dc5
    MOVSD ES:EDI,ESI                    ; 00417dc6
    MOVSD ES:EDI,ESI                    ; 00417dc7
    FLD float ptr [0x005cbfca]          ; 00417dc8 | DAT_005cbfca
    FLD float ptr [ESP + 0x54]          ; 00417dce
    FMUL ST1                            ; 00417dd2
    FLD float ptr [ESP + 0x58]          ; 00417dd4
    FMUL ST2                            ; 00417dd8
    FLD float ptr [ESP + 0x5c]          ; 00417dda
    FMULP ST3                           ; 00417dde
    FLD float ptr [ESP + 0x8]           ; 00417de0
    LEA EDI,[ESP + 0x3c]                ; 00417de4
    LEA ESI,[ESP + 0x48]                ; 00417de8
    FXCH ST2                            ; 00417dec
    FSTP float ptr [ESP + 0x48]         ; 00417dee
    FSTP float ptr [ESP + 0x4c]         ; 00417df2
    FXCH                                ; 00417df6
    FSTP float ptr [ESP + 0x50]         ; 00417df8
    MOVSD ES:EDI,ESI                    ; 00417dfc
    MOVSD ES:EDI,ESI                    ; 00417dfd
    MOVSD ES:EDI,ESI                    ; 00417dfe
    FADD double ptr [0x005cbfd2]        ; 00417dff | DAT_005cbfd2
    LEA ESI,[ESP + 0x3c]                ; 00417e05
    MOV EDI,EBX                         ; 00417e09
    FSTP float ptr [ESP + 0x44]         ; 00417e0b
    MOVSD ES:EDI,ESI                    ; 00417e0f
    MOVSD ES:EDI,ESI                    ; 00417e10
    MOVSD ES:EDI,ESI                    ; 00417e11
    MOV EAX,EBX                         ; 00417e12
    MOV ESP,EBP                         ; 00417e14
    POP EBP                             ; 00417e16
    POP EDI                             ; 00417e17
    POP EBX                             ; 00417e18
    RET                                 ; 00417e19

