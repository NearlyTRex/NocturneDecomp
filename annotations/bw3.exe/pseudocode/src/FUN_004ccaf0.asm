; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ccaf0(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_004ce5b0 at 004ce5fa
;
; Referenced Globals:
;   undefined4 DAT_005c4629
;   undefined4 DAT_005f2afc
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d22e4c
;   undefined4 DAT_01d22e50
;   undefined4 DAT_01d22e54
;   undefined4 DAT_01d22e58
;   undefined4 DAT_01d22e5c
;   undefined4 DAT_01d22e60
;   undefined4 DAT_01d22e64
;   undefined4 DAT_01d22e68
;   undefined4 DAT_01d22e6c
;   undefined4 DAT_01d22e70
;   undefined4 DAT_01d22e74
;   ... and 4 more
;
; Called Functions:
;   FUN_0046d230
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccaf0
        ;   Label: FUN_004ccaf0
    PUSH ESI                            ; 004ccaf1
    PUSH EDI                            ; 004ccaf2
    SUB ESP,0x5c                        ; 004ccaf3
    MOV EDX,0x4                         ; 004ccaf6
    MOV EAX,0x1                         ; 004ccafb
    LEA ESI,[ESP + 0x50]                ; 004ccb00
    MOV EBX,dword ptr [0x005f2afc]      ; 004ccb04 | DAT_005f2afc
    MOV EDI,0x1d22e70                   ; 004ccb0a
    XOR ECX,ECX                         ; 004ccb0f
    MOV dword ptr [0x01d22e4c],EDX      ; 004ccb11 | DAT_01d22e4c
    MOV dword ptr [0x01d22e50],ECX      ; 004ccb17 | DAT_01d22e50
    MOV dword ptr [0x01d22e54],ECX      ; 004ccb1d | DAT_01d22e54
    MOV dword ptr [0x01d22e58],ECX      ; 004ccb23 | DAT_01d22e58
    MOV dword ptr [0x01d22e5c],ECX      ; 004ccb29 | DAT_01d22e5c
    MOV dword ptr [0x01d22e60],ECX      ; 004ccb2f | DAT_01d22e60
    MOV [0x01d22e64],EAX                ; 004ccb35 | DAT_01d22e64
    PUSH EBX                            ; 004ccb3a | DAT_01bdd7e4
    MOV EDX,0x2                         ; 004ccb3b
    MOV ECX,0x3                         ; 004ccb40
    MOV dword ptr [0x01d22e68],EDX      ; 004ccb45 | DAT_01d22e68
    MOV dword ptr [0x01d22e6c],ECX      ; 004ccb4b | DAT_01d22e6c
    CALL FUN_0046d230                   ; 004ccb51
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d230()
    LEA ESI,[ESP + 0x54]                ; 004ccb56
    ADD ESP,0x4                         ; 004ccb5a
    MOVSD ES:EDI,ESI                    ; 004ccb5d | DAT_01d22e70
    MOVSD ES:EDI,ESI                    ; 004ccb5e | DAT_01d22e74
    MOVSD ES:EDI,ESI                    ; 004ccb5f | DAT_01d22e78
    XOR ESI,ESI                         ; 004ccb60
    MOV dword ptr [0x01d22e74],ESI      ; 004ccb62 | DAT_01d22e74
    MOV ESI,dword ptr [0x007e2a54]      ; 004ccb68 | DAT_007e2a54
    MOV ECX,0xa                         ; 004ccb6e
    LEA EDI,[ESP + 0x28]                ; 004ccb73
    LEA ESI,[ESI + 0x10]                ; 004ccb77
    MOVSD.REP ES:EDI,ESI                ; 004ccb7a
    MOV ECX,0xa                         ; 004ccb7c
    MOV EDI,ESP                         ; 004ccb81
    LEA ESI,[ESP + 0x28]                ; 004ccb83
    MOVSD.REP ES:EDI,ESI                ; 004ccb87
    FLD double ptr [0x005c4629]         ; 004ccb89 | DAT_005c4629
    FLD float ptr [ESP + 0x8]           ; 004ccb8f
    FMUL ST1                            ; 004ccb93
    FLD float ptr [ESP + 0x14]          ; 004ccb95
    FMUL ST2                            ; 004ccb99
    FLD float ptr [ESP + 0x20]          ; 004ccb9b
    FMULP ST3                           ; 004ccb9f
    FXCH                                ; 004ccba1
    CALL FUN_005a3120                   ; 004ccba3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 004ccba8
    CALL FUN_005a3120                   ; 004ccbaa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 004ccbaf
    CALL FUN_005a3120                   ; 004ccbb1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 004ccbb6
    FISTP dword ptr [0x01d22e7c]        ; 004ccbb8 | DAT_01d22e7c
    FXCH                                ; 004ccbbe
    FISTP dword ptr [0x01d22e80]        ; 004ccbc0 | DAT_01d22e80
    FISTP dword ptr [0x01d22e84]        ; 004ccbc6 | DAT_01d22e84
    ADD ESP,0x5c                        ; 004ccbcc
    POP EDI                             ; 004ccbcf
    POP ESI                             ; 004ccbd0
    POP EBX                             ; 004ccbd1
    RET                                 ; 004ccbd2

