; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00422d10(int param_1)
;
; Local Variables:
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_00422ab0 at 00422c16
;
; Called Functions:
;   FUN_00408b40
;   FUN_00408bb0
;   FUN_00421af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422d10
        ;   Label: FUN_00422d10
    SUB ESP,0x78                        ; 00422d11
    MOV EBX,dword ptr [ESP + 0x80]      ; 00422d14
    MOV EDX,dword ptr [EBX + 0x324]     ; 00422d1b
    TEST EDX,EDX                        ; 00422d21
    JNZ 0x00422d2a                      ; 00422d23
        ;   XREF to: 00422d2a (CONDITIONAL_JUMP)  ; LAB_00422d2a
    ADD ESP,0x78                        ; 00422d25
    POP EBX                             ; 00422d28
    RET                                 ; 00422d29
    PUSH EDI                            ; 00422d2a
        ;   Label: LAB_00422d2a
    PUSH ESI                            ; 00422d2b
    LEA EAX,[EBX + 0x20]                ; 00422d2c
    PUSH EAX                            ; 00422d2f
    PUSH EDX                            ; 00422d30
    LEA ESI,[ESP + 0x7c]                ; 00422d31
    LEA EDI,[ESP + 0x40]                ; 00422d35
    CALL FUN_00408bb0                   ; 00422d39
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x7c]                ; 00422d3e
    ADD ESP,0x8                         ; 00422d42
    LEA EAX,[ESP + 0x38]                ; 00422d45
    MOVSD ES:EDI,ESI                    ; 00422d49
    MOVSD ES:EDI,ESI                    ; 00422d4a
    MOVSD ES:EDI,ESI                    ; 00422d4b
    PUSH EAX                            ; 00422d4c
    MOV EAX,dword ptr [EBX + 0x324]     ; 00422d4d
    PUSH EAX                            ; 00422d53
    MOV EDX,dword ptr [EAX + 0x154]     ; 00422d54
    LEA ESI,[ESP + 0x28]                ; 00422d5a
    LEA EDI,[ESP + 0x10]                ; 00422d5e
    CALL dword ptr [EDX + 0x1c]         ; 00422d62
    MOV ECX,0x6                         ; 00422d65
    LEA ESI,[ESP + 0x28]                ; 00422d6a
    ADD ESP,0x4                         ; 00422d6e
    LEA EAX,[ESP + 0xc]                 ; 00422d71
    MOVSD.REP ES:EDI,ESI                ; 00422d75
    PUSH EAX                            ; 00422d77
    LEA ESI,[ESP + 0x64]                ; 00422d78
    LEA EDI,[ESP + 0x4c]                ; 00422d7c
    CALL FUN_00421af0                   ; 00422d80
        ;   XREF to: 00421af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421af0()
    LEA ESI,[ESP + 0x64]                ; 00422d85
    LEA EAX,[ESP + 0x4c]                ; 00422d89
    ADD ESP,0x8                         ; 00422d8d
    LEA EDX,[ESP + 0x38]                ; 00422d90
    MOVSD ES:EDI,ESI                    ; 00422d94
    MOVSD ES:EDI,ESI                    ; 00422d95
    MOVSD ES:EDI,ESI                    ; 00422d96
    CMP EDX,EAX                         ; 00422d97
    JZ 0x00422db3                       ; 00422d99
        ;   XREF to: 00422db3 (CONDITIONAL_JUMP)  ; LAB_00422db3
    MOV EAX,dword ptr [ESP + 0x44]      ; 00422d9b
    MOV dword ptr [ESP + 0x38],EAX      ; 00422d9f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00422da3
    MOV dword ptr [ESP + 0x3c],EAX      ; 00422da7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00422dab
    MOV dword ptr [ESP + 0x40],EAX      ; 00422daf
    LEA EAX,[ESP + 0x38]                ; 00422db3
        ;   Label: LAB_00422db3
    PUSH EAX                            ; 00422db7
    MOV ESI,dword ptr [EBX + 0x324]     ; 00422db8
    PUSH ESI                            ; 00422dbe
    LEA ESI,[ESP + 0x58]                ; 00422dbf
    LEA EDI,[ESP + 0x70]                ; 00422dc3
    CALL FUN_00408b40                   ; 00422dc7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x58]                ; 00422dcc
    ADD ESP,0x8                         ; 00422dd0
    MOVSD ES:EDI,ESI                    ; 00422dd3
    MOVSD ES:EDI,ESI                    ; 00422dd4
    MOVSD ES:EDI,ESI                    ; 00422dd5
    MOV EAX,dword ptr [ESP + 0x68]      ; 00422dd6
    MOV dword ptr [EBX + 0x20],EAX      ; 00422dda
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00422ddd
    MOV dword ptr [EBX + 0x24],EAX      ; 00422de1
    MOV EAX,dword ptr [ESP + 0x70]      ; 00422de4
    MOV dword ptr [EBX + 0x28],EAX      ; 00422de8
    POP ESI                             ; 00422deb
    POP EDI                             ; 00422dec
    ADD ESP,0x78                        ; 00422ded
    POP EBX                             ; 00422df0
    RET                                 ; 00422df1

