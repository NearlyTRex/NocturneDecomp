; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496c60(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_004a1ad0 at 004a1c47
;
; Referenced Globals:
;   undefined4 DAT_005c04b8
;   undefined4 DAT_005f2afc
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c73658
;   undefined4 DAT_01c7365c
;   undefined4 DAT_01c73660
;   undefined4 DAT_01c73664
;   undefined4 DAT_01c73668
;   undefined4 DAT_01c7366c
;   undefined4 DAT_01c73674
;   undefined4 DAT_01c73678
;   undefined4 DAT_01c7367c
;   undefined4 DAT_01c73680
;   undefined4 DAT_01c73684
;   ... and 4 more
;
; Called Functions:
;   FUN_0046d230
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496c60
        ;   Label: FUN_00496c60
    PUSH ESI                            ; 00496c61
    PUSH EDI                            ; 00496c62
    SUB ESP,0x5c                        ; 00496c63
    MOV EDX,0x4                         ; 00496c66
    MOV EAX,0x1                         ; 00496c6b
    LEA ESI,[ESP + 0x50]                ; 00496c70
    MOV EBX,dword ptr [0x005f2afc]      ; 00496c74 | DAT_005f2afc
    MOV EDI,0x1c73658                   ; 00496c7a
    XOR ECX,ECX                         ; 00496c7f
    MOV dword ptr [0x01c73674],EDX      ; 00496c81 | DAT_01c73674
    MOV dword ptr [0x01c73678],ECX      ; 00496c87 | DAT_01c73678
    MOV dword ptr [0x01c7367c],ECX      ; 00496c8d | DAT_01c7367c
    MOV dword ptr [0x01c73680],ECX      ; 00496c93 | DAT_01c73680
    MOV dword ptr [0x01c73684],ECX      ; 00496c99 | DAT_01c73684
    MOV dword ptr [0x01c73688],ECX      ; 00496c9f | DAT_01c73688
    MOV [0x01c7368c],EAX                ; 00496ca5 | DAT_01c7368c
    PUSH EBX                            ; 00496caa | DAT_01bdd7e4
    MOV EDX,0x2                         ; 00496cab
    MOV ECX,0x3                         ; 00496cb0
    MOV dword ptr [0x01c73690],EDX      ; 00496cb5 | DAT_01c73690
    MOV dword ptr [0x01c73694],ECX      ; 00496cbb | DAT_01c73694
    CALL FUN_0046d230                   ; 00496cc1
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d230()
    LEA ESI,[ESP + 0x54]                ; 00496cc6
    ADD ESP,0x4                         ; 00496cca
    MOVSD ES:EDI,ESI                    ; 00496ccd | DAT_01c73658
    MOVSD ES:EDI,ESI                    ; 00496cce | DAT_01c7365c
    MOVSD ES:EDI,ESI                    ; 00496ccf | DAT_01c73660
    XOR ESI,ESI                         ; 00496cd0
    MOV dword ptr [0x01c7365c],ESI      ; 00496cd2 | DAT_01c7365c
    MOV ESI,dword ptr [0x007e2a54]      ; 00496cd8 | DAT_007e2a54
    MOV ECX,0xa                         ; 00496cde
    LEA EDI,[ESP + 0x28]                ; 00496ce3
    LEA ESI,[ESI + 0x10]                ; 00496ce7
    MOVSD.REP ES:EDI,ESI                ; 00496cea
    MOV ECX,0xa                         ; 00496cec
    MOV EDI,ESP                         ; 00496cf1
    LEA ESI,[ESP + 0x28]                ; 00496cf3
    MOVSD.REP ES:EDI,ESI                ; 00496cf7
    FLD double ptr [0x005c04b8]         ; 00496cf9 | DAT_005c04b8
    FLD float ptr [ESP + 0x8]           ; 00496cff
    FMUL ST1                            ; 00496d03
    FLD float ptr [ESP + 0x14]          ; 00496d05
    FMUL ST2                            ; 00496d09
    FLD float ptr [ESP + 0x20]          ; 00496d0b
    FMULP ST3                           ; 00496d0f
    FXCH                                ; 00496d11
    CALL FUN_005a3120                   ; 00496d13
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00496d18
    CALL FUN_005a3120                   ; 00496d1a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 00496d1f
    CALL FUN_005a3120                   ; 00496d21
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00496d26
    FISTP dword ptr [0x01c73664]        ; 00496d28 | DAT_01c73664
    FXCH                                ; 00496d2e
    FISTP dword ptr [0x01c73668]        ; 00496d30 | DAT_01c73668
    FISTP dword ptr [0x01c7366c]        ; 00496d36 | DAT_01c7366c
    ADD ESP,0x5c                        ; 00496d3c
    POP EDI                             ; 00496d3f
    POP ESI                             ; 00496d40
    POP EBX                             ; 00496d41
    RET                                 ; 00496d42

