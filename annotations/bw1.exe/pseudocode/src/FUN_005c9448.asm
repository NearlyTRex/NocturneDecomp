; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c9448(byte *param_1,int *param_2)
;
;
; XREF[2]:
;   FUN_005c9478 at 005c951e
;   FUN_005c9594 at 005c95c5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9448
        ;   Label: FUN_005c9448
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c9449
    MOV BL,byte ptr [EAX]               ; 005c944d
    XOR EDX,EDX                         ; 005c944f
    CMP BL,0x30                         ; 005c9451
    JC 0x005c946f                       ; 005c9454
        ;   XREF to: 005c946f (CONDITIONAL_JUMP)  ; LAB_005c946f
    CMP byte ptr [EAX],0x39             ; 005c9456
        ;   Label: LAB_005c9456
    JA 0x005c946f                       ; 005c9459
        ;   XREF to: 005c946f (CONDITIONAL_JUMP)  ; LAB_005c946f
    IMUL EDX,EDX,0xa                    ; 005c945b
    XOR EBX,EBX                         ; 005c945e
    MOV BL,byte ptr [EAX]               ; 005c9460
    INC EAX                             ; 005c9462
    ADD EDX,EBX                         ; 005c9463
    MOV BH,byte ptr [EAX]               ; 005c9465
    SUB EDX,0x30                        ; 005c9467
    CMP BH,0x30                         ; 005c946a
    JNC 0x005c9456                      ; 005c946d
        ;   XREF to: 005c9456 (CONDITIONAL_JUMP)  ; LAB_005c9456
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c946f
        ;   Label: LAB_005c946f
    MOV dword ptr [EBX],EDX             ; 005c9473
    POP EBX                             ; 005c9475
    RET                                 ; 005c9476

