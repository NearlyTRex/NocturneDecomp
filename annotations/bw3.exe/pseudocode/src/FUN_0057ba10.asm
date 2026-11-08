; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057ba10(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[2]:
;   FUN_0057af40 at 0057af5e
;   FUN_0057b500 at 0057b51a
;
; Referenced Globals:
;   undefined4 DAT_005d78ef
;   undefined4 DAT_0078a123
;
; Called Functions:
;   FUN_00408b80
;   FUN_0041ae00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ba10
        ;   Label: FUN_0057ba10
    SUB ESP,0x90                        ; 0057ba11
    MOV EBX,dword ptr [ESP + 0x98]      ; 0057ba17
    LEA EAX,[EBX + 0x158]               ; 0057ba1e
    CMP dword ptr [EAX + 0x178],0x0     ; 0057ba24
    JZ 0x0057ba36                       ; 0057ba2b
        ;   XREF to: 0057ba36 (CONDITIONAL_JUMP)  ; LAB_0057ba36
    CMP dword ptr [EBX + 0x68],0x78a123 ; 0057ba2d | DAT_0078a123
    JZ 0x0057ba3e                       ; 0057ba34
        ;   XREF to: 0057ba3e (CONDITIONAL_JUMP)  ; LAB_0057ba3e
    ADD ESP,0x90                        ; 0057ba36
        ;   Label: LAB_0057ba36
    POP EBX                             ; 0057ba3c
    RET                                 ; 0057ba3d
    PUSH EDI                            ; 0057ba3e
        ;   Label: LAB_0057ba3e
    PUSH ESI                            ; 0057ba3f
    PUSH EBX                            ; 0057ba40
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057ba41
    LEA ESI,[ESP + 0xc]                 ; 0057ba47
    LEA EDI,[ESP + 0x24]                ; 0057ba4b
    CALL dword ptr [EAX + 0x1c]         ; 0057ba4f
    MOV ECX,0x6                         ; 0057ba52
    LEA ESI,[ESP + 0xc]                 ; 0057ba57
    ADD ESP,0x4                         ; 0057ba5b
    MOVSD.REP ES:EDI,ESI                ; 0057ba5e
    FLD float ptr [ESP + 0x20]          ; 0057ba60
    FLD float ptr [ESP + 0x24]          ; 0057ba64
    FLD float ptr [ESP + 0x28]          ; 0057ba68
    LEA EDI,[ESP + 0x80]                ; 0057ba6c
    LEA ESI,[ESP + 0x5c]                ; 0057ba73
    FXCH ST2                            ; 0057ba77
    FADD float ptr [ESP + 0x2c]         ; 0057ba79
    FXCH                                ; 0057ba7d
    FADD float ptr [ESP + 0x30]         ; 0057ba7f
    FXCH ST2                            ; 0057ba83
    FADD float ptr [ESP + 0x34]         ; 0057ba85
    FXCH                                ; 0057ba89
    FSTP float ptr [ESP + 0x5c]         ; 0057ba8b
    FXCH                                ; 0057ba8f
    FSTP float ptr [ESP + 0x60]         ; 0057ba91
    FSTP float ptr [ESP + 0x64]         ; 0057ba95
    MOVSD ES:EDI,ESI                    ; 0057ba99
    MOVSD ES:EDI,ESI                    ; 0057ba9a
    MOVSD ES:EDI,ESI                    ; 0057ba9b
    FLD float ptr [0x005d78ef]          ; 0057ba9c | DAT_005d78ef
    FLD float ptr [ESP + 0x80]          ; 0057baa2
    FMUL ST1                            ; 0057baa9
    FLD float ptr [ESP + 0x84]          ; 0057baab
    FMUL ST2                            ; 0057bab2
    FLD float ptr [ESP + 0x88]          ; 0057bab4
    FMULP ST3                           ; 0057babb
    LEA EDI,[ESP + 0x8c]                ; 0057babd
    LEA ESI,[ESP + 0x74]                ; 0057bac4
    FXCH                                ; 0057bac8
    FSTP float ptr [ESP + 0x74]         ; 0057baca
    FSTP float ptr [ESP + 0x78]         ; 0057bace
    FSTP float ptr [ESP + 0x7c]         ; 0057bad2
    MOVSD ES:EDI,ESI                    ; 0057bad6
    MOVSD ES:EDI,ESI                    ; 0057bad7
    MOVSD ES:EDI,ESI                    ; 0057bad8
    LEA ESI,[ESP + 0x8c]                ; 0057bad9
    PUSH ESI                            ; 0057bae0
    PUSH EBX                            ; 0057bae1
    LEA ESI,[ESP + 0x58]                ; 0057bae2
    LEA EDI,[ESP + 0x70]                ; 0057bae6
    CALL FUN_00408b80                   ; 0057baea
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 0057baef
    LEA ESI,[ESP + 0x50]                ; 0057baf2
    FLD float ptr [ESP + 0x2c]          ; 0057baf6
    FLD float ptr [ESP + 0x30]          ; 0057bafa
    MOVSD ES:EDI,ESI                    ; 0057bafe
    MOVSD ES:EDI,ESI                    ; 0057baff
    MOVSD ES:EDI,ESI                    ; 0057bb00
    FLD float ptr [ESP + 0x34]          ; 0057bb01
    LEA EDI,[ESP + 0x44]                ; 0057bb05
    LEA ESI,[ESP + 0x38]                ; 0057bb09
    FXCH ST2                            ; 0057bb0d
    FSUB float ptr [ESP + 0x20]         ; 0057bb0f
    FXCH                                ; 0057bb13
    FSUB float ptr [ESP + 0x24]         ; 0057bb15
    FXCH ST2                            ; 0057bb19
    FSUB float ptr [ESP + 0x28]         ; 0057bb1b
    FXCH                                ; 0057bb1f
    FSTP float ptr [ESP + 0x38]         ; 0057bb21
    FXCH                                ; 0057bb25
    FSTP float ptr [ESP + 0x3c]         ; 0057bb27
    FSTP float ptr [ESP + 0x40]         ; 0057bb2b
    MOVSD ES:EDI,ESI                    ; 0057bb2f
    MOVSD ES:EDI,ESI                    ; 0057bb30
    MOVSD ES:EDI,ESI                    ; 0057bb31
    LEA EAX,[ESP + 0x44]                ; 0057bb32
    PUSH dword ptr [EBX + 0x564]        ; 0057bb36
    PUSH EAX                            ; 0057bb3c
    LEA EAX,[EBX + 0x30]                ; 0057bb3d
    PUSH EAX                            ; 0057bb40
    LEA EAX,[ESP + 0x74]                ; 0057bb41
    PUSH EAX                            ; 0057bb45
    ADD EBX,0x308                       ; 0057bb46
    PUSH EBX                            ; 0057bb4c
    CALL FUN_0041ae00                   ; 0057bb4d
        ;   XREF to: 0041ae00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ae00()
    ADD ESP,0x14                        ; 0057bb52
    POP ESI                             ; 0057bb55
    POP EDI                             ; 0057bb56
    ADD ESP,0x90                        ; 0057bb57
    POP EBX                             ; 0057bb5d
    RET                                 ; 0057bb5e

