; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b360(int *param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052c72f
;
; Called Functions:
;   FUN_0053b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b360
        ;   Label: FUN_0053b360
    PUSH ESI                            ; 0053b361
    PUSH EDI                            ; 0053b362
    PUSH EBP                            ; 0053b363
    MOV EDI,dword ptr [ESP + 0x14]      ; 0053b364
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053b368
    MOV EDX,dword ptr [EDI]             ; 0053b36c
    XOR EBX,EBX                         ; 0053b36e
    TEST EDX,EDX                        ; 0053b370
    JLE 0x0053b38b                      ; 0053b372
        ;   XREF to: 0053b38b (CONDITIONAL_JUMP)  ; LAB_0053b38b
    MOV ESI,EDI                         ; 0053b374
    CMP EBP,dword ptr [ESI + 0x150]     ; 0053b376
        ;   Label: LAB_0053b376
    JZ 0x0053b390                       ; 0053b37c
        ;   XREF to: 0053b390 (CONDITIONAL_JUMP)  ; LAB_0053b390
    INC EBX                             ; 0053b37e
        ;   Label: LAB_0053b37e
    MOV ECX,dword ptr [EDI]             ; 0053b37f
    ADD ESI,0x1a4                       ; 0053b381
    CMP EBX,ECX                         ; 0053b387
    JL 0x0053b376                       ; 0053b389
        ;   XREF to: 0053b376 (CONDITIONAL_JUMP)  ; LAB_0053b376
    POP EBP                             ; 0053b38b
        ;   Label: LAB_0053b38b
    POP EDI                             ; 0053b38c
    POP ESI                             ; 0053b38d
    POP EBX                             ; 0053b38e
    RET                                 ; 0053b38f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053b390
        ;   Label: LAB_0053b390
    PUSH EDX                            ; 0053b394
    PUSH EBX                            ; 0053b395
    PUSH EDI                            ; 0053b396
    CALL FUN_0053b340                   ; 0053b397
        ;   XREF to: 0053b340 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b340()
    ADD ESP,0xc                         ; 0053b39c
    JMP 0x0053b37e                      ; 0053b39f
        ;   XREF to: 0053b37e (UNCONDITIONAL_JUMP)  ; LAB_0053b37e

