; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d9e40(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004da880 at 004da94b
;   FUN_004dcb40 at 004dcc9c
;   FUN_004dda90 at 004ddbea
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_005c5e84
;   undefined4 DAT_01d5dc88
;
; Called Functions:
;   FUN_004d9d20
;   FUN_005a28c0
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9e40
        ;   Label: FUN_004d9e40
    PUSH ESI                            ; 004d9e41
    PUSH EDI                            ; 004d9e42
    PUSH EBP                            ; 004d9e43
    MOV EBP,ESP                         ; 004d9e44
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d9e46
    PUSH EDX                            ; 004d9e49
    MOV EBX,0x1d5dc90                   ; 004d9e4a
    XOR ESI,ESI                         ; 004d9e4f
    CALL FUN_004d9d20                   ; 004d9e51
        ;   XREF to: 004d9d20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9d20()
    MOV ECX,dword ptr [0x01d5dc88]      ; 004d9e56 | DAT_01d5dc88
    ADD ESP,0x4                         ; 004d9e5c
    LEA EDI,[EAX + 0x78]                ; 004d9e5f
    TEST ECX,ECX                        ; 004d9e62
    JLE 0x004d9e84                      ; 004d9e64
        ;   XREF to: 004d9e84 (CONDITIONAL_JUMP)  ; LAB_004d9e84
    PUSH EBX                            ; 004d9e66
        ;   Label: LAB_004d9e66
    PUSH EDI                            ; 004d9e67
    CALL FUN_005a3260                   ; 004d9e68
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004d9e6d
    TEST EAX,EAX                        ; 004d9e70
    JZ 0x004d9ea1                       ; 004d9e72
        ;   XREF to: 004d9ea1 (CONDITIONAL_JUMP)  ; LAB_004d9ea1
    MOV EAX,[0x01d5dc88]                ; 004d9e74 | DAT_01d5dc88
    INC ESI                             ; 004d9e79
    ADD EBX,0x300                       ; 004d9e7a
    CMP ESI,EAX                         ; 004d9e80
    JL 0x004d9e66                       ; 004d9e82
        ;   XREF to: 004d9e66 (CONDITIONAL_JUMP)  ; LAB_004d9e66
    PUSH EDI                            ; 004d9e84
        ;   Label: LAB_004d9e84
    PUSH 0x5c5e84                       ; 004d9e85 | = "Add to dict: %s"
    PUSH 0x1d5bc80                      ; 004d9e8a
    CALL FUN_005a28c0                   ; 004d9e8f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    MOV EAX,0x1d5bc80                   ; 004d9e94
    ADD ESP,0xc                         ; 004d9e99
    POP EBP                             ; 004d9e9c
    POP EDI                             ; 004d9e9d
    POP ESI                             ; 004d9e9e
    POP EBX                             ; 004d9e9f
    RET                                 ; 004d9ea0
    LEA EAX,[EBX + 0x100]               ; 004d9ea1
        ;   Label: LAB_004d9ea1
    POP EBP                             ; 004d9ea7
    POP EDI                             ; 004d9ea8
    POP ESI                             ; 004d9ea9
    POP EBX                             ; 004d9eaa
    RET                                 ; 004d9eab

