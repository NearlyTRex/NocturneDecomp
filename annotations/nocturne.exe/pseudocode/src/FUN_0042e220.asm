; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042e220(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   FUN_0042d150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e220
        ;   Label: FUN_0042e220
    PUSH ESI                            ; 0042e221
    PUSH EDI                            ; 0042e222
    PUSH EBP                            ; 0042e223
    SUB ESP,0x4                         ; 0042e224
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042e227
    MOV EDI,dword ptr [ESP + 0x24]      ; 0042e22b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0042e22f
    TEST EDI,EDI                        ; 0042e233
    JZ 0x0042e240                       ; 0042e235
        ;   XREF to: 0042e240 (CONDITIONAL_JUMP)  ; LAB_0042e240
    TEST EBX,EBX                        ; 0042e237
    JNZ 0x0042e248                      ; 0042e239
        ;   XREF to: 0042e248 (CONDITIONAL_JUMP)  ; LAB_0042e248
    LEA EAX,[EAX]                       ; 0042e23b
    MOV ECX,ECX                         ; 0042e23e
    ADD ESP,0x4                         ; 0042e240
        ;   Label: LAB_0042e240
    POP EBP                             ; 0042e243
    POP EDI                             ; 0042e244
    POP ESI                             ; 0042e245
    POP EBX                             ; 0042e246
    RET                                 ; 0042e247
    CALL FUN_0042d150                   ; 0042e248
        ;   XREF to: 0042d150 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d150()
        ;   Label: LAB_0042e248
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042e24d
    MOV dword ptr [ESP],EAX             ; 0042e251
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042e254
    IMUL EAX,EDX                        ; 0042e258
    ADD EAX,dword ptr [ESP + 0x30]      ; 0042e25b
    ADD EBX,EAX                         ; 0042e25f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e261
    XOR ESI,ESI                         ; 0042e265
    TEST EAX,EAX                        ; 0042e267
    JLE 0x0042e240                      ; 0042e269
        ;   XREF to: 0042e240 (CONDITIONAL_JUMP)  ; LAB_0042e240
    PUSH EBP                            ; 0042e26b
        ;   Label: LAB_0042e26b
    PUSH EDI                            ; 0042e26c
    PUSH EBX                            ; 0042e26d
    INC ESI                             ; 0042e26e
    CALL dword ptr [ESP + 0xc]          ; 0042e26f
    ADD ESP,0xc                         ; 0042e273
    ADD EDI,EBP                         ; 0042e276
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042e278
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042e27c
    ADD EBX,EDX                         ; 0042e280
    CMP ESI,ECX                         ; 0042e282
    JL 0x0042e26b                       ; 0042e284
        ;   XREF to: 0042e26b (CONDITIONAL_JUMP)  ; LAB_0042e26b
    ADD ESP,0x4                         ; 0042e286
    POP EBP                             ; 0042e289
    POP EDI                             ; 0042e28a
    POP ESI                             ; 0042e28b
    POP EBX                             ; 0042e28c
    RET                                 ; 0042e28d

