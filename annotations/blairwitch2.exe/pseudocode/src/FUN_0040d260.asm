; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d260(undefined4 param_1,undefined1 *param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0040d2a0 at 0040d2ac
;   FUN_0040d2c0 at 0040d2cc
;
; Called Functions:
;   FUN_0040d180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d260
        ;   Label: FUN_0040d260
    PUSH ESI                            ; 0040d261
    PUSH EDI                            ; 0040d262
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040d263
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040d267
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d26b
    TEST ESI,ESI                        ; 0040d26f
    JLE 0x0040d290                      ; 0040d271
        ;   XREF to: 0040d290 (CONDITIONAL_JUMP)  ; LAB_0040d290
    XOR EAX,EAX                         ; 0040d273
        ;   Label: LAB_0040d273
    MOV AL,byte ptr [EBX]               ; 0040d275
    PUSH EAX                            ; 0040d277
    PUSH EDI                            ; 0040d278
    INC EBX                             ; 0040d279
    DEC ESI                             ; 0040d27a
    CALL FUN_0040d180                   ; 0040d27b
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d180()
    ADD ESP,0x8                         ; 0040d280
    TEST ESI,ESI                        ; 0040d283
    JG 0x0040d273                       ; 0040d285
        ;   XREF to: 0040d273 (CONDITIONAL_JUMP)  ; LAB_0040d273
    LEA EAX,[EAX]                       ; 0040d287
    LEA EDX,[EDX]                       ; 0040d28d
    POP EDI                             ; 0040d290
        ;   Label: LAB_0040d290
    POP ESI                             ; 0040d291
    POP EBX                             ; 0040d292
    RET                                 ; 0040d293

