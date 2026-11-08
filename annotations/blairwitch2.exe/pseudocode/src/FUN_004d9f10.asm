; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d9f10(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004dadb0 at 004dae7d
;   FUN_004dc8c0 at 004dcb52
;   FUN_004dd9b0 at 004ddbf2
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_005db3c9
;   undefined4 DAT_01cf0200
;
; Called Functions:
;   FUN_004d9db0
;   FUN_005b7790
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9f10
        ;   Label: FUN_004d9f10
    PUSH ESI                            ; 004d9f11
    PUSH EDI                            ; 004d9f12
    PUSH EBP                            ; 004d9f13
    MOV EBP,ESP                         ; 004d9f14
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d9f16
    PUSH EDX                            ; 004d9f19
    MOV EBX,0x1cf0208                   ; 004d9f1a
    XOR ESI,ESI                         ; 004d9f1f
    CALL FUN_004d9db0                   ; 004d9f21
        ;   XREF to: 004d9db0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9db0()
    MOV ECX,dword ptr [0x01cf0200]      ; 004d9f26 | DAT_01cf0200
    ADD ESP,0x4                         ; 004d9f2c
    LEA EDI,[EAX + 0x78]                ; 004d9f2f
    TEST ECX,ECX                        ; 004d9f32
    JLE 0x004d9f54                      ; 004d9f34
        ;   XREF to: 004d9f54 (CONDITIONAL_JUMP)  ; LAB_004d9f54
    PUSH EBX                            ; 004d9f36
        ;   Label: LAB_004d9f36
    PUSH EDI                            ; 004d9f37
    CALL FUN_005b8130                   ; 004d9f38
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004d9f3d
    TEST EAX,EAX                        ; 004d9f40
    JZ 0x004d9f71                       ; 004d9f42
        ;   XREF to: 004d9f71 (CONDITIONAL_JUMP)  ; LAB_004d9f71
    MOV EAX,[0x01cf0200]                ; 004d9f44 | DAT_01cf0200
    INC ESI                             ; 004d9f49
    ADD EBX,0x300                       ; 004d9f4a
    CMP ESI,EAX                         ; 004d9f50
    JL 0x004d9f36                       ; 004d9f52
        ;   XREF to: 004d9f36 (CONDITIONAL_JUMP)  ; LAB_004d9f36
    PUSH EDI                            ; 004d9f54
        ;   Label: LAB_004d9f54
    PUSH 0x5db3c9                       ; 004d9f55 | = "Add to dict: %s"
    PUSH 0x1cee1b0                      ; 004d9f5a
    CALL FUN_005b7790                   ; 004d9f5f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EAX,0x1cee1b0                   ; 004d9f64
    ADD ESP,0xc                         ; 004d9f69
    POP EBP                             ; 004d9f6c
    POP EDI                             ; 004d9f6d
    POP ESI                             ; 004d9f6e
    POP EBX                             ; 004d9f6f
    RET                                 ; 004d9f70
    LEA EAX,[EBX + 0x100]               ; 004d9f71
        ;   Label: LAB_004d9f71
    POP EBP                             ; 004d9f77
    POP EDI                             ; 004d9f78
    POP ESI                             ; 004d9f79
    POP EBX                             ; 004d9f7a
    RET                                 ; 004d9f7b

