; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00584cc0(int param_1)
;
;
; XREF[1]:
;   FUN_005849b0 at 005849c2
;
; Referenced Globals:
;   undefined4 DAT_005f6374
;
; Called Functions:
;   FUN_0048fed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584cc0
        ;   Label: FUN_00584cc0
    PUSH ESI                            ; 00584cc1
    PUSH EBP                            ; 00584cc2
    SUB ESP,0x4c                        ; 00584cc3
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00584cc6
    FLD double ptr [0x005f6374]         ; 00584cca | DAT_005f6374
    FLD float ptr [EBX + 0x160]         ; 00584cd0
    FMUL ST1                            ; 00584cd6
    FLD float ptr [EBX + 0x160]         ; 00584cd8
    FCHS                                ; 00584cde
    FMULP ST2                           ; 00584ce0
    MOV EDX,dword ptr [EBX + 0x16c]     ; 00584ce2
    XOR ESI,ESI                         ; 00584ce8
    FSTP float ptr [ESP + 0x40]         ; 00584cea
    FSTP float ptr [ESP + 0x44]         ; 00584cee
    TEST EDX,EDX                        ; 00584cf2
    JLE 0x00584deb                      ; 00584cf4
        ;   XREF to: 00584deb (CONDITIONAL_JUMP)  ; LAB_00584deb
    PUSH EDI                            ; 00584cfa
    LEA EDI,[EBX + 0x170]               ; 00584cfb
    LEA EBP,[EBX + 0x1a8]               ; 00584d01
    INC ESI                             ; 00584d07
        ;   Label: LAB_00584d07
    MOV dword ptr [ESP + 0x4c],ESI      ; 00584d08
    FILD dword ptr [ESP + 0x4c]         ; 00584d0c
    FLD float ptr [EBX + 0x158]         ; 00584d10
    FMUL ST1                            ; 00584d16
    FLD float ptr [EBX + 0x15c]         ; 00584d18
    FMULP ST2                           ; 00584d1e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00584d20
    FSTP float ptr [ESP + 0x38]         ; 00584d24
    FSTP float ptr [ESP + 0x40]         ; 00584d28
    FLD float ptr [ESP + 0x38]          ; 00584d2c
    FLD float ptr [ESP + 0x40]          ; 00584d30
    FSUB float ptr [EBX + 0x168]        ; 00584d34
    FXCH                                ; 00584d3a
    FSUB float ptr [EBX + 0x164]        ; 00584d3c
    MOV dword ptr [ESP + 0x4],EAX       ; 00584d42
    MOV EAX,dword ptr [ESP + 0x38]      ; 00584d46
    MOV dword ptr [ESP + 0x8],EAX       ; 00584d4a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00584d4e
    MOV dword ptr [ESP + 0xc],EAX       ; 00584d52
    MOV EAX,dword ptr [ESP + 0x44]      ; 00584d56
    MOV dword ptr [ESP + 0x10],EAX      ; 00584d5a
    MOV EAX,dword ptr [ESP + 0x38]      ; 00584d5e
    MOV dword ptr [ESP + 0x14],EAX      ; 00584d62
    MOV EAX,dword ptr [ESP + 0x40]      ; 00584d66
    MOV dword ptr [ESP + 0x18],EAX      ; 00584d6a
    MOV EAX,dword ptr [ESP + 0x44]      ; 00584d6e
    FSTP float ptr [ESP + 0x3c]         ; 00584d72
    MOV dword ptr [ESP + 0x28],EAX      ; 00584d76
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00584d7a
    FSTP float ptr [ESP + 0x34]         ; 00584d7e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00584d82
    MOV EAX,dword ptr [ESP + 0x34]      ; 00584d86
    MOV dword ptr [ESP + 0x30],EAX      ; 00584d8a
    MOV EAX,dword ptr [ESP + 0x48]      ; 00584d8e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00584d92
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00584d96
    MOV dword ptr [ESP + 0x20],EAX      ; 00584d9a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00584d9e
    MOV dword ptr [ESP + 0x24],EAX      ; 00584da2
    LEA EAX,[ESP + 0x28]                ; 00584da6
    PUSH EAX                            ; 00584daa
    LEA EAX,[ESP + 0x14]                ; 00584dab
    PUSH EAX                            ; 00584daf
    LEA EAX,[ESP + 0xc]                 ; 00584db0
    PUSH EAX                            ; 00584db4
    PUSH EDI                            ; 00584db5
    CALL FUN_0048fed0                   ; 00584db6
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048fed0()
    ADD ESP,0x10                        ; 00584dbb
    LEA EAX,[ESP + 0x1c]                ; 00584dbe
    PUSH EAX                            ; 00584dc2
    LEA EAX,[ESP + 0x2c]                ; 00584dc3
    PUSH EAX                            ; 00584dc7
    LEA EAX,[ESP + 0xc]                 ; 00584dc8
    PUSH EAX                            ; 00584dcc
    PUSH EBP                            ; 00584dcd
    ADD EDI,0x70                        ; 00584dce
    CALL FUN_0048fed0                   ; 00584dd1
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048fed0()
    ADD ESP,0x10                        ; 00584dd6
    MOV ECX,dword ptr [EBX + 0x16c]     ; 00584dd9
    ADD EBP,0x70                        ; 00584ddf
    CMP ESI,ECX                         ; 00584de2
    JL 0x00584d07                       ; 00584de4
        ;   XREF to: 00584d07 (CONDITIONAL_JUMP)  ; LAB_00584d07
    POP EDI                             ; 00584dea
    ADD ESP,0x4c                        ; 00584deb
        ;   Label: LAB_00584deb
    POP EBP                             ; 00584dee
    POP ESI                             ; 00584def
    POP EBX                             ; 00584df0
    RET                                 ; 00584df1

