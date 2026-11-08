; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00510f40(int *param_1)
;
;
; Called Functions:
;   FUN_0050f280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510f40
        ;   Label: FUN_00510f40
    PUSH EDI                            ; 00510f41
    PUSH EBP                            ; 00510f42
    MOV EBP,dword ptr [ESP + 0x10]      ; 00510f43
    MOV EAX,dword ptr [EBP]             ; 00510f47
    LEA EDI,[EAX*0x8 + 0x0]             ; 00510f4a
    ADD EDI,EAX                         ; 00510f51
    XOR EBX,EBX                         ; 00510f53
    SHL EDI,0x2                         ; 00510f55
    TEST EAX,EAX                        ; 00510f58
    JLE 0x00510f7b                      ; 00510f5a
        ;   XREF to: 00510f7b (CONDITIONAL_JUMP)  ; LAB_00510f7b
    PUSH ESI                            ; 00510f5c
    XOR ESI,ESI                         ; 00510f5d
    MOV EAX,dword ptr [EBP + 0x4]       ; 00510f5f
        ;   Label: LAB_00510f5f
    ADD EAX,ESI                         ; 00510f62
    PUSH EAX                            ; 00510f64
    INC EBX                             ; 00510f65
    CALL FUN_0050f280                   ; 00510f66
        ;   XREF to: 0050f280 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f280()
    ADD ESI,0x24                        ; 00510f6b
    ADD ESP,0x4                         ; 00510f6e
    MOV ECX,dword ptr [EBP]             ; 00510f71
    ADD EDI,EAX                         ; 00510f74
    CMP EBX,ECX                         ; 00510f76
    JL 0x00510f5f                       ; 00510f78
        ;   XREF to: 00510f5f (CONDITIONAL_JUMP)  ; LAB_00510f5f
    POP ESI                             ; 00510f7a
    MOV EAX,EDI                         ; 00510f7b
        ;   Label: LAB_00510f7b
    POP EBP                             ; 00510f7d
    POP EDI                             ; 00510f7e
    POP EBX                             ; 00510f7f
    RET                                 ; 00510f80

