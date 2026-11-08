; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6030(void)
;
;
; XREF[2]:
;   FUN_004cf5e0 at 004cf92d
;   FUN_00544460 at 005460d2
;
; Referenced Globals:
;   undefined4 DAT_005e2e94
;   undefined4 DAT_00600f6c
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_00622ad0
;   undefined4 DAT_01cd0c7c
;   undefined4 DAT_01cd0c80
;   undefined4 DAT_01cd0c84
;   undefined4 DAT_01cd0c88
;
; Called Functions:
;   FUN_00408b40
;   FUN_0044e2a0
;   FUN_004d60b0
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 004d5e89
        ;   Label: LAB_004d5e89
    MOV EAX,dword ptr [ECX + 0x154]     ; 004d5e8a
    LEA ESI,[ESP + 0x1c]                ; 004d5e90
    LEA EDI,[ESP + 0x4]                 ; 004d5e94
    CALL dword ptr [EAX + 0x1c]         ; 004d5e98
    MOV ECX,0x6                         ; 004d5e9b
    LEA ESI,[ESP + 0x1c]                ; 004d5ea0
    ADD ESP,0x4                         ; 004d5ea4
    MOVSD.REP ES:EDI,ESI                ; 004d5ea7
    MOV EDX,ESP                         ; 004d5ea9
    FLD float ptr [ESP]                 ; 004d5eab
    FLD float ptr [ESP + 0x4]           ; 004d5eae
    FLD float ptr [ESP + 0x8]           ; 004d5eb2
    LEA EDI,[ESP + 0x90]                ; 004d5eb6
    LEA ESI,[ESP + 0x6c]                ; 004d5ebd
    FXCH ST2                            ; 004d5ec1
    FADD float ptr [EDX + 0xc]          ; 004d5ec3
    FXCH                                ; 004d5ec6
    FADD float ptr [EDX + 0x10]         ; 004d5ec8
    FXCH ST2                            ; 004d5ecb
    FADD float ptr [EDX + 0x14]         ; 004d5ecd
    FXCH                                ; 004d5ed0
    FSTP float ptr [ESP + 0x6c]         ; 004d5ed2
    FXCH                                ; 004d5ed6
    FSTP float ptr [ESP + 0x70]         ; 004d5ed8
    FSTP float ptr [ESP + 0x74]         ; 004d5edc
    MOVSD ES:EDI,ESI                    ; 004d5ee0
    MOVSD ES:EDI,ESI                    ; 004d5ee1
    MOVSD ES:EDI,ESI                    ; 004d5ee2
    FLD float ptr [0x005e2e94]          ; 004d5ee3 | DAT_005e2e94
    FLD float ptr [ESP + 0x90]          ; 004d5ee9
    FMUL ST1                            ; 004d5ef0
    FLD float ptr [ESP + 0x94]          ; 004d5ef2
    FMUL ST2                            ; 004d5ef9
    LEA EAX,[ESP + 0x60]                ; 004d5efb
    FLD float ptr [ESP + 0x98]          ; 004d5eff
    FMULP ST3                           ; 004d5f06
    PUSH EAX                            ; 004d5f08
    MOV EAX,[0x00622ad0]                ; 004d5f09 | DAT_00622ad0
    LEA EDI,[ESP + 0x64]                ; 004d5f0e
    LEA ESI,[ESP + 0x58]                ; 004d5f12
    FXCH                                ; 004d5f16
    FSTP float ptr [ESP + 0x58]         ; 004d5f18
    FSTP float ptr [ESP + 0x5c]         ; 004d5f1c
    FSTP float ptr [ESP + 0x60]         ; 004d5f20
    MOVSD ES:EDI,ESI                    ; 004d5f24
    MOVSD ES:EDI,ESI                    ; 004d5f25
    MOVSD ES:EDI,ESI                    ; 004d5f26
    MOV EBX,dword ptr [EAX + 0xc]       ; 004d5f27
    PUSH EBX                            ; 004d5f2a
    LEA ESI,[ESP + 0x80]                ; 004d5f2b
    LEA EDI,[ESP + 0x44]                ; 004d5f32
    CALL FUN_00408b40                   ; 004d5f36
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x80]                ; 004d5f3b
    LEA EBX,[ESP + 0x38]                ; 004d5f42
    ADD ESP,0x8                         ; 004d5f46
    LEA EAX,[ESP + 0x3c]                ; 004d5f49
    MOVSD ES:EDI,ESI                    ; 004d5f4d
    MOVSD ES:EDI,ESI                    ; 004d5f4e
    MOVSD ES:EDI,ESI                    ; 004d5f4f
    FLD float ptr [EAX]                 ; 004d5f50
    FMUL float ptr [0x00600f6c]         ; 004d5f52 | DAT_00600f6c
    FISTP dword ptr [EBX]               ; 004d5f58
    FLD float ptr [EAX + 0x4]           ; 004d5f5a
    FMUL float ptr [0x00600f6c]         ; 004d5f5d | DAT_00600f6c
    FISTP dword ptr [EBX + 0x4]         ; 004d5f63
    FLD float ptr [EAX + 0x8]           ; 004d5f66
    FMUL float ptr [0x00600f6c]         ; 004d5f69 | DAT_00600f6c
    FISTP dword ptr [EBX + 0x8]         ; 004d5f6f
    LEA EAX,[ESP + 0x30]                ; 004d5f72
    PUSH EAX                            ; 004d5f76
    PUSH 0x1fe37ec                      ; 004d5f77
    LEA ESI,[ESP + 0x8c]                ; 004d5f7c
    LEA EDI,[ESP + 0x50]                ; 004d5f83
    CALL FUN_0044e2a0                   ; 004d5f87
        ;   XREF to: 0044e2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e2a0()
    LEA ESI,[ESP + 0x8c]                ; 004d5f8c
    ADD ESP,0x8                         ; 004d5f93
    MOVSD ES:EDI,ESI                    ; 004d5f96
    MOVSD ES:EDI,ESI                    ; 004d5f97
    MOVSD ES:EDI,ESI                    ; 004d5f98
    CMP dword ptr [ESP + 0x50],0x0      ; 004d5f99
    JZ 0x004d60cb                       ; 004d5f9e
        ;   XREF to: 004d60cb (CONDITIONAL_JUMP)  ; LAB_004d60cb
    MOV EAX,dword ptr [ESP + 0x48]      ; 004d5fa4
    MOV EDX,EAX                         ; 004d5fa8
    SAR EDX,0x1f                        ; 004d5faa
    SHL EDX,0x10                        ; 004d5fad
    SBB EAX,EDX                         ; 004d5fb0
    SAR EAX,0x10                        ; 004d5fb2
    MOV [0x01cd0c84],EAX                ; 004d5fb5 | DAT_01cd0c84
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004d5fba
    MOV EDX,EAX                         ; 004d5fbe
    SAR EDX,0x1f                        ; 004d5fc0
    SHL EDX,0x10                        ; 004d5fc3
    SBB EAX,EDX                         ; 004d5fc6
    SAR EAX,0x10                        ; 004d5fc8
    MOV EDI,dword ptr [0x0061b49c]      ; 004d5fcb | DAT_0061b49c
    MOV [0x01cd0c88],EAX                ; 004d5fd1 | DAT_01cd0c88
    CMP EDI,0x1e0                       ; 004d5fd6
    JLE 0x004d60cb                      ; 004d5fdc
        ;   XREF to: 004d60cb (CONDITIONAL_JUMP)  ; LAB_004d60cb
    MOV EBP,dword ptr [0x0061b498]      ; 004d5fe2 | DAT_0061b498
    MOV EDX,dword ptr [0x01cd0c84]      ; 004d5fe8 | DAT_01cd0c84
    IMUL EDX,EBP                        ; 004d5fee
    MOV EBX,0x280                       ; 004d5ff1
    MOV EAX,EDX                         ; 004d5ff6
    SAR EDX,0x1f                        ; 004d5ff8
    IDIV EBX                            ; 004d5ffb
    MOV EDX,dword ptr [0x01cd0c88]      ; 004d5ffd | DAT_01cd0c88
    IMUL EDX,EDI                        ; 004d6003
    MOV EBX,0x1e0                       ; 004d6006
    MOV [0x01cd0c84],EAX                ; 004d600b | DAT_01cd0c84
    MOV EAX,EDX                         ; 004d6010
    SAR EDX,0x1f                        ; 004d6012
    IDIV EBX                            ; 004d6015
    MOV [0x01cd0c88],EAX                ; 004d6017 | DAT_01cd0c88
    ADD ESP,0x9c                        ; 004d601c
    POP EBP                             ; 004d6022
    POP EDI                             ; 004d6023
    POP ESI                             ; 004d6024
    POP EBX                             ; 004d6025
    RET                                 ; 004d6026
    MOV dword ptr [0x01cd0c7c],0x1      ; 004d6030 | DAT_01cd0c7c
        ;   Label: FUN_004d6030
    MOV EDX,dword ptr [0x0061b498]      ; 004d603a | DAT_0061b498
    MOV EAX,EDX                         ; 004d6040
    SAR EDX,0x1f                        ; 004d6042
    SUB EAX,EDX                         ; 004d6045
    SAR EAX,0x1                         ; 004d6047
    MOV EDX,dword ptr [0x0061b49c]      ; 004d6049 | DAT_0061b49c
    MOV [0x01cd0c84],EAX                ; 004d604f | DAT_01cd0c84
    MOV EAX,EDX                         ; 004d6054
    SAR EDX,0x1f                        ; 004d6056
    SUB EAX,EDX                         ; 004d6059
    SAR EAX,0x1                         ; 004d605b
    XOR ECX,ECX                         ; 004d605d
    MOV dword ptr [0x01cd0c80],ECX      ; 004d605f | DAT_01cd0c80
    MOV [0x01cd0c88],EAX                ; 004d6065 | DAT_01cd0c88
    JMP 0x004d60b0                      ; 004d606a
        ;   XREF to: 004d60b0 (UNCONDITIONAL_CALL)

