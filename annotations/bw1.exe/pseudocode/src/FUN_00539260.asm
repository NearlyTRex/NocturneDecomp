; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00539260(int *param_1)
;
;
; Called Functions:
;   FUN_005375a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539260
        ;   Label: FUN_00539260
    PUSH EDI                            ; 00539261
    PUSH EBP                            ; 00539262
    MOV EBP,dword ptr [ESP + 0x10]      ; 00539263
    MOV EAX,dword ptr [EBP]             ; 00539267
    LEA EDI,[EAX*0x8 + 0x0]             ; 0053926a
    ADD EDI,EAX                         ; 00539271
    XOR EBX,EBX                         ; 00539273
    SHL EDI,0x2                         ; 00539275
    TEST EAX,EAX                        ; 00539278
    JLE 0x0053929b                      ; 0053927a
        ;   XREF to: 0053929b (CONDITIONAL_JUMP)  ; LAB_0053929b
    PUSH ESI                            ; 0053927c
    XOR ESI,ESI                         ; 0053927d
    MOV EAX,dword ptr [EBP + 0x4]       ; 0053927f
        ;   Label: LAB_0053927f
    ADD EAX,ESI                         ; 00539282
    PUSH EAX                            ; 00539284
    INC EBX                             ; 00539285
    CALL FUN_005375a0                   ; 00539286
        ;   XREF to: 005375a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005375a0()
    ADD ESI,0x24                        ; 0053928b
    ADD ESP,0x4                         ; 0053928e
    MOV ECX,dword ptr [EBP]             ; 00539291
    ADD EDI,EAX                         ; 00539294
    CMP EBX,ECX                         ; 00539296
    JL 0x0053927f                       ; 00539298
        ;   XREF to: 0053927f (CONDITIONAL_JUMP)  ; LAB_0053927f
    POP ESI                             ; 0053929a
    MOV EAX,EDI                         ; 0053929b
        ;   Label: LAB_0053929b
    POP EBP                             ; 0053929d
    POP EDI                             ; 0053929e
    POP EBX                             ; 0053929f
    RET                                 ; 005392a0

