; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00416e90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b6d26
;   undefined4 DAT_005b6d2a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416e90
        ;   Label: core_boneguy.cpp_FUN_00416e90
    PUSH EDI                            ; 00416e91
    PUSH EBP                            ; 00416e92
    MOV EBP,ESP                         ; 00416e93
    SUB ESP,0x60                        ; 00416e95
    AND ESP,0xfffffff8                  ; 00416e98
    MOV EBX,ESI                         ; 00416e9b
    MOV ESI,dword ptr [EBP + 0x10]      ; 00416e9d
    PUSH ESI                            ; 00416ea0
    MOV EAX,dword ptr [ESI + 0x154]     ; 00416ea1
    LEA ESI,[ESP + 0x1c]                ; 00416ea7
    LEA EDI,[ESP + 0x4]                 ; 00416eab
    CALL dword ptr [EAX + 0x1c]         ; 00416eaf
    MOV ECX,0x6                         ; 00416eb2
    LEA ESI,[ESP + 0x1c]                ; 00416eb7
    ADD ESP,0x4                         ; 00416ebb
    MOVSD.REP ES:EDI,ESI                ; 00416ebe
    FLD float ptr [ESP]                 ; 00416ec0
    FLD float ptr [ESP + 0x4]           ; 00416ec3
    FLD float ptr [ESP + 0x8]           ; 00416ec7
    LEA EDI,[ESP + 0x54]                ; 00416ecb
    LEA ESI,[ESP + 0x30]                ; 00416ecf
    FXCH ST2                            ; 00416ed3
    FADD float ptr [ESP + 0xc]          ; 00416ed5
    FXCH                                ; 00416ed9
    FADD float ptr [ESP + 0x10]         ; 00416edb
    FXCH ST2                            ; 00416edf
    FADD float ptr [ESP + 0x14]         ; 00416ee1
    FXCH                                ; 00416ee5
    FSTP float ptr [ESP + 0x30]         ; 00416ee7
    FXCH                                ; 00416eeb
    FSTP float ptr [ESP + 0x34]         ; 00416eed
    FSTP float ptr [ESP + 0x38]         ; 00416ef1
    MOVSD ES:EDI,ESI                    ; 00416ef5
    MOVSD ES:EDI,ESI                    ; 00416ef6
    MOVSD ES:EDI,ESI                    ; 00416ef7
    FLD float ptr [0x005b6d26]          ; 00416ef8 | DAT_005b6d26
    FLD float ptr [ESP + 0x54]          ; 00416efe
    FMUL ST1                            ; 00416f02
    FLD float ptr [ESP + 0x58]          ; 00416f04
    FMUL ST2                            ; 00416f08
    FLD float ptr [ESP + 0x5c]          ; 00416f0a
    FMULP ST3                           ; 00416f0e
    FLD float ptr [ESP + 0x8]           ; 00416f10
    LEA EDI,[ESP + 0x3c]                ; 00416f14
    LEA ESI,[ESP + 0x48]                ; 00416f18
    FXCH ST2                            ; 00416f1c
    FSTP float ptr [ESP + 0x48]         ; 00416f1e
    FSTP float ptr [ESP + 0x4c]         ; 00416f22
    FXCH                                ; 00416f26
    FSTP float ptr [ESP + 0x50]         ; 00416f28
    MOVSD ES:EDI,ESI                    ; 00416f2c
    MOVSD ES:EDI,ESI                    ; 00416f2d
    MOVSD ES:EDI,ESI                    ; 00416f2e
    FADD double ptr [0x005b6d2a]        ; 00416f2f | DAT_005b6d2a
    LEA ESI,[ESP + 0x3c]                ; 00416f35
    MOV EDI,EBX                         ; 00416f39
    FSTP float ptr [ESP + 0x44]         ; 00416f3b
    MOVSD ES:EDI,ESI                    ; 00416f3f
    MOVSD ES:EDI,ESI                    ; 00416f40
    MOVSD ES:EDI,ESI                    ; 00416f41
    MOV EAX,EBX                         ; 00416f42
    MOV ESP,EBP                         ; 00416f44
    POP EBP                             ; 00416f46
    POP EDI                             ; 00416f47
    POP EBX                             ; 00416f48
    RET                                 ; 00416f49

