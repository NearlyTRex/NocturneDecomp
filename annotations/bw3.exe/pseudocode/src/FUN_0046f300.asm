; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0046f300(int param_1)
;
;
; XREF[1]:
;   FUN_0046f2d0 at 0046f2d5
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046f300
        ;   Label: FUN_0046f300
    PUSH EDI                            ; 0046f301
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046f302
    MOV ESI,0x5bc7a9                    ; 0046f306
    LEA EDI,[EDX + 0xc]                 ; 0046f30b
    MOV dword ptr [EDX + 0x8],0x0       ; 0046f30e
    PUSH EDI                            ; 0046f315
    MOV AL,byte ptr [ESI]               ; 0046f316
        ;   Label: LAB_0046f316
    MOV byte ptr [EDI],AL               ; 0046f318
    CMP AL,0x0                          ; 0046f31a
    JZ 0x0046f32e                       ; 0046f31c
        ;   XREF to: 0046f32e (CONDITIONAL_JUMP)  ; LAB_0046f32e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046f31e
    ADD ESI,0x2                         ; 0046f321
    MOV byte ptr [EDI + 0x1],AL         ; 0046f324
    ADD EDI,0x2                         ; 0046f327
    CMP AL,0x0                          ; 0046f32a
    JNZ 0x0046f316                      ; 0046f32c
        ;   XREF to: 0046f316 (CONDITIONAL_JUMP)  ; LAB_0046f316
    POP EDI                             ; 0046f32e
        ;   Label: LAB_0046f32e
    MOV EAX,EDX                         ; 0046f32f
    POP EDI                             ; 0046f331
    POP ESI                             ; 0046f332
    RET                                 ; 0046f333

