; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0170(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_00415430 at 00415468
;   FUN_004d4650 at 004d48c3
;   FUN_004dda70 at 004ddadb
;   FUN_004ddb20 at 004de130
;   FUN_004ef6d0 at 004ef741
;   FUN_00540c20 at 00540e89
;   FUN_0054c3e0 at 0054c4d0
;
; Called Functions:
;   FUN_004df290
;   FUN_004df5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0170
        ;   Label: FUN_004e0170
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e0171
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e0175
    SUB EAX,EDX                         ; 004e017c
    SHL EAX,0x6                         ; 004e017e
    ADD EAX,EDX                         ; 004e0181
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0183
    SHL EAX,0x3                         ; 004e0187
    ADD EBX,EAX                         ; 004e018a
    PUSH EBX                            ; 004e018c
    CALL FUN_004df290                   ; 004e018d
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; undefined FUN_004df290()
    ADD ESP,0x4                         ; 004e0192
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e0195
    PUSH EDX                            ; 004e0199
    PUSH EBX                            ; 004e019a
    CALL FUN_004df5b0                   ; 004e019b
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df5b0()
    ADD ESP,0x8                         ; 004e01a0
    POP EBX                             ; 004e01a3
    RET                                 ; 004e01a4

