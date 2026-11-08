; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00519ba0(int param_1)
;
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005184c0 at 00518fd6
;
; Called Functions:
;   FUN_005916b0
;   FUN_00591c10
;   FUN_00591de0
;   FUN_00592720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519ba0
        ;   Label: FUN_00519ba0
    PUSH ESI                            ; 00519ba1
    PUSH EDI                            ; 00519ba2
    PUSH EBP                            ; 00519ba3
    SUB ESP,0xcc                        ; 00519ba4
    MOV EBP,dword ptr [ESP + 0xe0]      ; 00519baa
    LEA EAX,[EBP + 0x30]                ; 00519bb1
    PUSH EAX                            ; 00519bb4
    LEA EAX,[EBP + 0x20]                ; 00519bb5
    PUSH EAX                            ; 00519bb8
    LEA EAX,[ESP + 0x8]                 ; 00519bb9
    PUSH EAX                            ; 00519bbd
    CALL FUN_00591c10                   ; 00519bbe
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 00519bc3
    LEA EAX,[EBP + 0x678]               ; 00519bc6
    XOR EBX,EBX                         ; 00519bcc
    MOV dword ptr [ESP + 0xc8],EAX      ; 00519bce
    IMUL EAX,EBX,0x34                   ; 00519bd5
        ;   Label: LAB_00519bd5
    CMP dword ptr [EBP + 0x678],0x0     ; 00519bd8
    JNZ 0x00519bf5                      ; 00519bdf
        ;   XREF to: 00519bf5 (CONDITIONAL_JUMP)  ; LAB_00519bf5
    INC EBX                             ; 00519be1
        ;   Label: LAB_00519be1
    ADD EBP,0x34                        ; 00519be2
    CMP EBX,0xa                         ; 00519be5
    JL 0x00519bd5                       ; 00519be8
        ;   XREF to: 00519bd5 (CONDITIONAL_JUMP)  ; LAB_00519bd5
    ADD ESP,0xcc                        ; 00519bea
    POP EBP                             ; 00519bf0
    POP EDI                             ; 00519bf1
    POP ESI                             ; 00519bf2
    POP EBX                             ; 00519bf3
    RET                                 ; 00519bf4
    MOV ESI,ESP                         ; 00519bf5
        ;   Label: LAB_00519bf5
    PUSH ESI                            ; 00519bf7
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00519bf8
    ADD ESI,EAX                         ; 00519bff
    ADD ESI,0x4                         ; 00519c01
    PUSH ESI                            ; 00519c04
    LEA ESI,[ESP + 0x38]                ; 00519c05
    LEA EDI,[ESP + 0x68]                ; 00519c09
    CALL FUN_005916b0                   ; 00519c0d
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 00519c12
    LEA ESI,[ESP + 0x38]                ; 00519c17
    ADD ESP,0x8                         ; 00519c1b
    MOVSD.REP ES:EDI,ESI                ; 00519c1e
    LEA ESI,[ESP + 0x60]                ; 00519c20
    MOV EAX,dword ptr [EBP + 0x678]     ; 00519c24
    LEA EDI,[ESP + 0xa8]                ; 00519c2a
    MOV dword ptr [ESP + 0xc0],EAX      ; 00519c31
    PUSH ESI                            ; 00519c38
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00519c39
    LEA ESI,[ESP + 0xa0]                ; 00519c3f
    MOV dword ptr [ESP + 0xc8],EAX      ; 00519c46
    CALL FUN_00591de0                   ; 00519c4d
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    LEA ESI,[ESP + 0xa0]                ; 00519c52
    ADD ESP,0x4                         ; 00519c59
    MOVSD ES:EDI,ESI                    ; 00519c5c
    MOVSD ES:EDI,ESI                    ; 00519c5d
    MOVSD ES:EDI,ESI                    ; 00519c5e
    LEA ESI,[ESP + 0xa8]                ; 00519c5f
    PUSH ESI                            ; 00519c66
    LEA ESI,[ESP + 0x64]                ; 00519c67
    PUSH ESI                            ; 00519c6b
    LEA ESI,[ESP + 0x98]                ; 00519c6c
    LEA EDI,[ESP + 0xbc]                ; 00519c73
    CALL FUN_00592720                   ; 00519c7a
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined FUN_00592720()
    LEA ESI,[ESP + 0x98]                ; 00519c7f
    ADD ESP,0x4                         ; 00519c86
    MOVSD ES:EDI,ESI                    ; 00519c89
    MOVSD ES:EDI,ESI                    ; 00519c8a
    MOVSD ES:EDI,ESI                    ; 00519c8b
    LEA ESI,[ESP + 0xb8]                ; 00519c8c
    PUSH ESI                            ; 00519c93
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00519c94
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00519c9b
    PUSH ECX                            ; 00519ca2
    CALL dword ptr [EAX + 0x70]         ; 00519ca3
    ADD ESP,0xc                         ; 00519ca6
    JMP 0x00519be1                      ; 00519ca9
        ;   XREF to: 00519be1 (UNCONDITIONAL_JUMP)  ; LAB_00519be1

