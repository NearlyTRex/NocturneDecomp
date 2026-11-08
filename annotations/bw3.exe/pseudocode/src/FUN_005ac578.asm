; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ac578(byte *param_1,int *param_2)
;
;
; XREF[2]:
;   FUN_005ac5a8 at 005ac64e
;   FUN_005ac6c4 at 005ac6f5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac578
        ;   Label: FUN_005ac578
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ac579
    MOV BL,byte ptr [EAX]               ; 005ac57d
    XOR EDX,EDX                         ; 005ac57f
    CMP BL,0x30                         ; 005ac581
    JC 0x005ac59f                       ; 005ac584
        ;   XREF to: 005ac59f (CONDITIONAL_JUMP)  ; LAB_005ac59f
    CMP byte ptr [EAX],0x39             ; 005ac586
        ;   Label: LAB_005ac586
    JA 0x005ac59f                       ; 005ac589
        ;   XREF to: 005ac59f (CONDITIONAL_JUMP)  ; LAB_005ac59f
    IMUL EDX,EDX,0xa                    ; 005ac58b
    XOR EBX,EBX                         ; 005ac58e
    MOV BL,byte ptr [EAX]               ; 005ac590
    INC EAX                             ; 005ac592
    ADD EDX,EBX                         ; 005ac593
    MOV BH,byte ptr [EAX]               ; 005ac595
    SUB EDX,0x30                        ; 005ac597
    CMP BH,0x30                         ; 005ac59a
    JNC 0x005ac586                      ; 005ac59d
        ;   XREF to: 005ac586 (CONDITIONAL_JUMP)  ; LAB_005ac586
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ac59f
        ;   Label: LAB_005ac59f
    MOV dword ptr [EBX],EDX             ; 005ac5a3
    POP EBX                             ; 005ac5a5
    RET                                 ; 005ac5a6

