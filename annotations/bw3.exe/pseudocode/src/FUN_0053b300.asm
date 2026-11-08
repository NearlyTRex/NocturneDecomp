; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b300(int *param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0048c2e0 at 0048feb5
;
; Called Functions:
;   FUN_0053b280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b300
        ;   Label: FUN_0053b300
    PUSH ESI                            ; 0053b301
    PUSH EDI                            ; 0053b302
    PUSH EBP                            ; 0053b303
    MOV EDI,dword ptr [ESP + 0x14]      ; 0053b304
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053b308
    MOV EDX,dword ptr [EDI]             ; 0053b30c
    XOR EBX,EBX                         ; 0053b30e
    TEST EDX,EDX                        ; 0053b310
    JLE 0x0053b32b                      ; 0053b312
        ;   XREF to: 0053b32b (CONDITIONAL_JUMP)  ; LAB_0053b32b
    MOV ESI,EDI                         ; 0053b314
    CMP EBP,dword ptr [ESI + 0x150]     ; 0053b316
        ;   Label: LAB_0053b316
    JZ 0x0053b330                       ; 0053b31c
        ;   XREF to: 0053b330 (CONDITIONAL_JUMP)  ; LAB_0053b330
    INC EBX                             ; 0053b31e
        ;   Label: LAB_0053b31e
    MOV ECX,dword ptr [EDI]             ; 0053b31f
    ADD ESI,0x1a4                       ; 0053b321
    CMP EBX,ECX                         ; 0053b327
    JL 0x0053b316                       ; 0053b329
        ;   XREF to: 0053b316 (CONDITIONAL_JUMP)  ; LAB_0053b316
    POP EBP                             ; 0053b32b
        ;   Label: LAB_0053b32b
    POP EDI                             ; 0053b32c
    POP ESI                             ; 0053b32d
    POP EBX                             ; 0053b32e
    RET                                 ; 0053b32f
    PUSH dword ptr [ESP + 0x1c]         ; 0053b330
        ;   Label: LAB_0053b330
    PUSH EBX                            ; 0053b334
    PUSH EDI                            ; 0053b335
    CALL FUN_0053b280                   ; 0053b336
        ;   XREF to: 0053b280 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b280()
    ADD ESP,0xc                         ; 0053b33b
    JMP 0x0053b31e                      ; 0053b33e
        ;   XREF to: 0053b31e (UNCONDITIONAL_JUMP)  ; LAB_0053b31e

