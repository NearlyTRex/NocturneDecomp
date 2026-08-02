; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00572d50(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005710a0 at 005710af
;   crt_unknown.c_FUN_00572d90 at 00572dda
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572d50
        ;   Label: crt_unknown.c_FUN_00572d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572d51
    MOV EAX,dword ptr [ESP + 0xc]       ; 00572d55
    CMP dword ptr [0x02de5c30],0x0      ; 00572d59 | DAT_02de5c30
    JZ 0x00572d83                       ; 00572d60
        ;   XREF to: 00572d83 (CONDITIONAL_JUMP)  ; LAB_00572d83
    XOR EDX,EDX                         ; 00572d62
    MOV DL,byte ptr [EAX]               ; 00572d64
    MOV DL,byte ptr [EDX + 0x2de5c41]   ; 00572d66
    AND DL,0x1                          ; 00572d6c
    AND EDX,0xff                        ; 00572d6f
    JZ 0x00572d83                       ; 00572d75
        ;   XREF to: 00572d83 (CONDITIONAL_JUMP)  ; LAB_00572d83
    MOV DL,byte ptr [EAX]               ; 00572d77
    MOV byte ptr [EBX],DL               ; 00572d79
    MOV AL,byte ptr [EAX + 0x1]         ; 00572d7b
    MOV byte ptr [EBX + 0x1],AL         ; 00572d7e
    POP EBX                             ; 00572d81
    RET                                 ; 00572d82
    MOV AL,byte ptr [EAX]               ; 00572d83
        ;   Label: LAB_00572d83
    MOV byte ptr [EBX],AL               ; 00572d85
    POP EBX                             ; 00572d87
    RET                                 ; 00572d88

