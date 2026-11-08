; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00555d20(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   FUN_004d6420 at 004d6691
;
; Referenced Globals:
;   undefined4 s_Set_state_version_005f0bfd+1
;   undefined4 DAT_005f0c14
;   TerminatedCString s_Camera_count_enabled_lis_005f0c18
;   undefined4 DAT_005f0c37
;   undefined4 DAT_005f0c3b
;   TerminatedCString s_Camera_ambient_light_005f0c3f
;   undefined4 DAT_005f0c58
;   TerminatedCString s_Camera_groups_005f0c5c
;   undefined4 DAT_005f0c6e
;
; Called Functions:
;   FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555d20
        ;   Label: FUN_00555d20
    PUSH ESI                            ; 00555d21
    PUSH EDI                            ; 00555d22
    PUSH EBP                            ; 00555d23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00555d24
    MOV ESI,dword ptr [ESP + 0x18]      ; 00555d28
    PUSH 0x5f0bfe                       ; 00555d2c | s_Set_state_version_005f0bfd+1
    PUSH ESI                            ; 00555d31
    CALL FUN_005c03c0                   ; 00555d32
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 00555d37
    PUSH 0x3                            ; 00555d3a
    PUSH 0x5f0c14                       ; 00555d3c | DAT_005f0c14
    PUSH ESI                            ; 00555d41
    CALL FUN_005c03c0                   ; 00555d42
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 00555d47
    PUSH 0x5f0c18                       ; 00555d4a | = "// Camera count, enabled list\n"
    PUSH ESI                            ; 00555d4f
    CALL FUN_005c03c0                   ; 00555d50
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 00555d55
    MOV EDX,dword ptr [EBX]             ; 00555d58
    PUSH EDX                            ; 00555d5a
    PUSH 0x5f0c37                       ; 00555d5b | DAT_005f0c37
    PUSH ESI                            ; 00555d60
    XOR EBP,EBP                         ; 00555d61
    CALL FUN_005c03c0                   ; 00555d63
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV ECX,dword ptr [EBX]             ; 00555d68
    ADD ESP,0xc                         ; 00555d6a
    TEST ECX,ECX                        ; 00555d6d
    JLE 0x00555da0                      ; 00555d6f
        ;   XREF to: 00555da0 (CONDITIONAL_JUMP)  ; LAB_00555da0
    MOV EDI,EBX                         ; 00555d71
    MOV EAX,dword ptr [EDI + 0x1a4]     ; 00555d73
        ;   Label: LAB_00555d73
    PUSH EAX                            ; 00555d79
    PUSH 0x5f0c3b                       ; 00555d7a | DAT_005f0c3b
    PUSH ESI                            ; 00555d7f
    ADD EDI,0x1a4                       ; 00555d80
    INC EBP                             ; 00555d86
    CALL FUN_005c03c0                   ; 00555d87
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EDX,dword ptr [EBX]             ; 00555d8c
    ADD ESP,0xc                         ; 00555d8e
    CMP EBP,EDX                         ; 00555d91
    JL 0x00555d73                       ; 00555d93
        ;   XREF to: 00555d73 (CONDITIONAL_JUMP)  ; LAB_00555d73
    LEA EAX,[EAX]                       ; 00555d95
    LEA EDX,[EDX]                       ; 00555d9b
    MOV EBX,EBX                         ; 00555d9e
    PUSH 0x5f0c3f                       ; 00555da0 | = "// Camera ambient light\n"
        ;   Label: LAB_00555da0
    PUSH ESI                            ; 00555da5
    XOR EDI,EDI                         ; 00555da6
    CALL FUN_005c03c0                   ; 00555da8
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV ECX,dword ptr [EBX]             ; 00555dad
    ADD ESP,0x8                         ; 00555daf
    TEST ECX,ECX                        ; 00555db2
    JLE 0x00555de0                      ; 00555db4
        ;   XREF to: 00555de0 (CONDITIONAL_JUMP)  ; LAB_00555de0
    MOV EBP,EBX                         ; 00555db6
    SUB ESP,0x8                         ; 00555db8
        ;   Label: LAB_00555db8
    FLD float ptr [EBP + 0x14c]         ; 00555dbb
    FSTP double ptr [ESP]               ; 00555dc1
    PUSH 0x5f0c58                       ; 00555dc4 | DAT_005f0c58
    PUSH ESI                            ; 00555dc9
    ADD EBP,0x1a4                       ; 00555dca
    INC EDI                             ; 00555dd0
    CALL FUN_005c03c0                   ; 00555dd1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,dword ptr [EBX]             ; 00555dd6
    ADD ESP,0x10                        ; 00555dd8
    CMP EDI,EAX                         ; 00555ddb
    JL 0x00555db8                       ; 00555ddd
        ;   XREF to: 00555db8 (CONDITIONAL_JUMP)  ; LAB_00555db8
    NOP                                 ; 00555ddf
    PUSH 0x5f0c5c                       ; 00555de0 | = "// Camera groups\n"
        ;   Label: LAB_00555de0
    PUSH ESI                            ; 00555de5
    XOR EBP,EBP                         ; 00555de6
    CALL FUN_005c03c0                   ; 00555de8
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EDX,dword ptr [EBX]             ; 00555ded
    ADD ESP,0x8                         ; 00555def
    TEST EDX,EDX                        ; 00555df2
    JLE 0x00555e20                      ; 00555df4
        ;   XREF to: 00555e20 (CONDITIONAL_JUMP)  ; LAB_00555e20
    MOV EDI,EBX                         ; 00555df6
    MOV ECX,dword ptr [EDI + 0x150]     ; 00555df8
        ;   Label: LAB_00555df8
    PUSH ECX                            ; 00555dfe
    PUSH 0x5f0c6e                       ; 00555dff | DAT_005f0c6e
    PUSH ESI                            ; 00555e04
    ADD EDI,0x1a4                       ; 00555e05
    INC EBP                             ; 00555e0b
    CALL FUN_005c03c0                   ; 00555e0c
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,dword ptr [EBX]             ; 00555e11
    ADD ESP,0xc                         ; 00555e13
    CMP EBP,EAX                         ; 00555e16
    JL 0x00555df8                       ; 00555e18
        ;   XREF to: 00555df8 (CONDITIONAL_JUMP)  ; LAB_00555df8
    LEA EAX,[EAX]                       ; 00555e1a
    POP EBP                             ; 00555e20
        ;   Label: LAB_00555e20
    POP EDI                             ; 00555e21
    POP ESI                             ; 00555e22
    POP EBX                             ; 00555e23
    RET                                 ; 00555e24

