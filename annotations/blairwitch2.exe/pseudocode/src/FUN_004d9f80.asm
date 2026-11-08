; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d9f80(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_004dadb0 at 004dae94
;   FUN_004dd9b0 at 004ddbdb
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_005db3d9
;   undefined4 DAT_01cf0200
;
; Called Functions:
;   FUN_004d9db0
;   FUN_005b7790
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9f80
        ;   Label: FUN_004d9f80
    PUSH ESI                            ; 004d9f81
    PUSH EDI                            ; 004d9f82
    PUSH EBP                            ; 004d9f83
    MOV EBP,ESP                         ; 004d9f84
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d9f86
    PUSH EDX                            ; 004d9f89
    MOV EBX,0x1cf0208                   ; 004d9f8a
    XOR ESI,ESI                         ; 004d9f8f
    CALL FUN_004d9db0                   ; 004d9f91
        ;   XREF to: 004d9db0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9db0()
    MOV ECX,dword ptr [0x01cf0200]      ; 004d9f96 | DAT_01cf0200
    ADD ESP,0x4                         ; 004d9f9c
    LEA EDI,[EAX + 0x78]                ; 004d9f9f
    TEST ECX,ECX                        ; 004d9fa2
    JLE 0x004d9fc4                      ; 004d9fa4
        ;   XREF to: 004d9fc4 (CONDITIONAL_JUMP)  ; LAB_004d9fc4
    PUSH EBX                            ; 004d9fa6
        ;   Label: LAB_004d9fa6
    PUSH EDI                            ; 004d9fa7
    CALL FUN_005b8130                   ; 004d9fa8
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004d9fad
    TEST EAX,EAX                        ; 004d9fb0
    JZ 0x004d9fe1                       ; 004d9fb2
        ;   XREF to: 004d9fe1 (CONDITIONAL_JUMP)  ; LAB_004d9fe1
    MOV EAX,[0x01cf0200]                ; 004d9fb4 | DAT_01cf0200
    INC ESI                             ; 004d9fb9
    ADD EBX,0x300                       ; 004d9fba
    CMP ESI,EAX                         ; 004d9fc0
    JL 0x004d9fa6                       ; 004d9fc2
        ;   XREF to: 004d9fa6 (CONDITIONAL_JUMP)  ; LAB_004d9fa6
    PUSH EDI                            ; 004d9fc4
        ;   Label: LAB_004d9fc4
    PUSH 0x5db3d9                       ; 004d9fc5 | = "Add to dict: %s"
    PUSH 0x1cee2b0                      ; 004d9fca
    CALL FUN_005b7790                   ; 004d9fcf
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EAX,0x1cee2b0                   ; 004d9fd4
    ADD ESP,0xc                         ; 004d9fd9
    POP EBP                             ; 004d9fdc
    POP EDI                             ; 004d9fdd
    POP ESI                             ; 004d9fde
    POP EBX                             ; 004d9fdf
    RET                                 ; 004d9fe0
    LEA EAX,[EBX + 0x200]               ; 004d9fe1
        ;   Label: LAB_004d9fe1
    POP EBP                             ; 004d9fe7
    POP EDI                             ; 004d9fe8
    POP ESI                             ; 004d9fe9
    POP EBX                             ; 004d9fea
    RET                                 ; 004d9feb

