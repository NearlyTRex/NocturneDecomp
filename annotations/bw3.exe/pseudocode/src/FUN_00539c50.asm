; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539c50(int param_1)
;
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004bf4b0 at 004bf649
;   FUN_00534890 at 00535139
;
; Referenced Globals:
;   undefined4 DAT_005d0803
;   TerminatedCString s_soff_005d0808
;   undefined4 DAT_005d080e
;   undefined4 DAT_005fba60
;   undefined4 DAT_0203a418
;   undefined4 DAT_0203a598
;   undefined4 DAT_0203a59c
;
; Called Functions:
;   FUN_00491aa0
;   FUN_00542b60
;   FUN_005a28c0
;   FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539c50
        ;   Label: FUN_00539c50
    PUSH ESI                            ; 00539c51
    PUSH EDI                            ; 00539c52
    PUSH EBP                            ; 00539c53
    SUB ESP,0x108                       ; 00539c54
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00539c5a
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 00539c61
    XOR EBP,EBP                         ; 00539c67
    TEST EDX,EDX                        ; 00539c69
    JLE 0x00539c9a                      ; 00539c6b
        ;   XREF to: 00539c9a (CONDITIONAL_JUMP)  ; LAB_00539c9a
    MOV dword ptr [ESP + 0x104],EBP     ; 00539c6d
    LEA EDI,[EAX + 0x19a30]             ; 00539c74
    MOV EAX,dword ptr [EDI]             ; 00539c7a
        ;   Label: LAB_00539c7a
    MOV ESI,EDI                         ; 00539c7c
    TEST EAX,EAX                        ; 00539c7e
    JZ 0x00539ca5                       ; 00539c80
        ;   XREF to: 00539ca5 (CONDITIONAL_JUMP)  ; LAB_00539ca5
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00539c82
        ;   Label: LAB_00539c82
    INC EBP                             ; 00539c89
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 00539c8a
    ADD EDI,0x1898                      ; 00539c90
    CMP EBP,ECX                         ; 00539c96
    JL 0x00539c7a                       ; 00539c98
        ;   XREF to: 00539c7a (CONDITIONAL_JUMP)  ; LAB_00539c7a
    ADD ESP,0x108                       ; 00539c9a
        ;   Label: LAB_00539c9a
    POP EBP                             ; 00539ca0
    POP EDI                             ; 00539ca1
    POP ESI                             ; 00539ca2
    POP EBX                             ; 00539ca3
    RET                                 ; 00539ca4
    MOV EBX,dword ptr [ESP + 0x104]     ; 00539ca5
        ;   Label: LAB_00539ca5
    MOV EBX,dword ptr [EBX + 0x203a418] ; 00539cac | DAT_0203a418
    TEST EBX,EBX                        ; 00539cb2
    JZ 0x00539c9a                       ; 00539cb4
        ;   XREF to: 00539c9a (CONDITIONAL_JUMP)  ; LAB_00539c9a
    MOV ECX,dword ptr [0x0203a598]      ; 00539cb6 | DAT_0203a598
    MOV dword ptr [ESP + 0x100],EAX     ; 00539cbc
    TEST ECX,ECX                        ; 00539cc3
    JLE 0x00539ce5                      ; 00539cc5
        ;   XREF to: 00539ce5 (CONDITIONAL_JUMP)  ; LAB_00539ce5
    LEA EDX,[ECX*0x4 + 0x0]             ; 00539cc7
    CMP EBX,dword ptr [EAX + 0x203a59c] ; 00539cce | DAT_0203a59c
        ;   Label: LAB_00539cce
    JNZ 0x00539da1                      ; 00539cd4
        ;   XREF to: 00539da1 (CONDITIONAL_JUMP)  ; LAB_00539da1
    MOV dword ptr [ESP + 0x100],0x1     ; 00539cda
    MOV EDX,dword ptr [ESP + 0x100]     ; 00539ce5
        ;   Label: LAB_00539ce5
    PUSH EDX                            ; 00539cec
    PUSH EBX                            ; 00539ced
    PUSH ESI                            ; 00539cee
    CALL FUN_00542b60                   ; 00539cef
        ;   XREF to: 00542b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00542b60()
    ADD ESP,0xc                         ; 00539cf4
    LEA EAX,[ESI + 0x4]                 ; 00539cf7
    PUSH EAX                            ; 00539cfa
    PUSH 0x5d0803                       ; 00539cfb | DAT_005d0803
    LEA EAX,[ESP + 0x8]                 ; 00539d00
    PUSH EAX                            ; 00539d04
    CALL FUN_005a28c0                   ; 00539d05
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00539d0a
    MOV EAX,ESP                         ; 00539d0d
    PUSH EAX                            ; 00539d0f
    MOV ECX,dword ptr [0x005fba60]      ; 00539d10 | DAT_005fba60
    PUSH ECX                            ; 00539d16
    CALL FUN_00491aa0                   ; 00539d17
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 00539d1c
    TEST EAX,EAX                        ; 00539d1f
    JZ 0x00539d2d                       ; 00539d21
        ;   XREF to: 00539d2d (CONDITIONAL_JUMP)  ; LAB_00539d2d
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 00539d23
    LEA EAX,[ESI + 0x4]                 ; 00539d2d
        ;   Label: LAB_00539d2d
    PUSH EAX                            ; 00539d30
    PUSH 0x5d0808                       ; 00539d31 | = "%soff"
    LEA EAX,[ESP + 0x8]                 ; 00539d36
    PUSH EAX                            ; 00539d3a
    CALL FUN_005a28c0                   ; 00539d3b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00539d40
    MOV EAX,ESP                         ; 00539d43
    PUSH EAX                            ; 00539d45
    MOV EAX,[0x005fba60]                ; 00539d46 | DAT_005fba60
    PUSH EAX                            ; 00539d4b
    CALL FUN_00491aa0                   ; 00539d4c
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 00539d51
    TEST EAX,EAX                        ; 00539d54
    JZ 0x00539d62                       ; 00539d56
        ;   XREF to: 00539d62 (CONDITIONAL_JUMP)  ; LAB_00539d62
    MOV dword ptr [EBX + 0x1cb4],0x0    ; 00539d58
    PUSH 0x4                            ; 00539d62
        ;   Label: LAB_00539d62
    PUSH 0x5d080e                       ; 00539d64 | DAT_005d080e
    ADD ESI,0x4                         ; 00539d69
    PUSH ESI                            ; 00539d6c
    CALL FUN_005a3f90                   ; 00539d6d
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 00539d72
    TEST EAX,EAX                        ; 00539d75
    JNZ 0x00539d94                      ; 00539d77
        ;   XREF to: 00539d94 (CONDITIONAL_JUMP)  ; LAB_00539d94
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00539d79
    MOV EDX,dword ptr [EAX + 0x15ae5c]  ; 00539d80
    TEST EDX,EDX                        ; 00539d86
    JZ 0x00539db1                       ; 00539d88
        ;   XREF to: 00539db1 (CONDITIONAL_JUMP)  ; LAB_00539db1
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 00539d8a
    ADD dword ptr [ESP + 0x104],0x4     ; 00539d94
        ;   Label: LAB_00539d94
    JMP 0x00539c82                      ; 00539d9c
        ;   XREF to: 00539c82 (UNCONDITIONAL_JUMP)  ; LAB_00539c82
    ADD EAX,0x4                         ; 00539da1
        ;   Label: LAB_00539da1
    CMP EAX,EDX                         ; 00539da4
    JL 0x00539cce                       ; 00539da6
        ;   XREF to: 00539cce (CONDITIONAL_JUMP)  ; LAB_00539cce
    JMP 0x00539ce5                      ; 00539dac
        ;   XREF to: 00539ce5 (UNCONDITIONAL_JUMP)  ; LAB_00539ce5
    MOV dword ptr [EBX + 0x1cb4],EDX    ; 00539db1
        ;   Label: LAB_00539db1
    ADD dword ptr [ESP + 0x104],0x4     ; 00539db7
    JMP 0x00539c82                      ; 00539dbf
        ;   XREF to: 00539c82 (UNCONDITIONAL_JUMP)  ; LAB_00539c82

