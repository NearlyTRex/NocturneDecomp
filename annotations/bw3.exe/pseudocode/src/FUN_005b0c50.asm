; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b0c50(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   FUN_005af6a0 at 005af6af
;   FUN_005b0c90 at 005b0cda
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0c50
        ;   Label: FUN_005b0c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b0c51
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b0c55
    CMP dword ptr [0x02d25930],0x0      ; 005b0c59 | DAT_02d25930
    JZ 0x005b0c83                       ; 005b0c60
        ;   XREF to: 005b0c83 (CONDITIONAL_JUMP)  ; LAB_005b0c83
    XOR EDX,EDX                         ; 005b0c62
    MOV DL,byte ptr [EAX]               ; 005b0c64
    MOV DL,byte ptr [EDX + 0x2d25941]   ; 005b0c66
    AND DL,0x1                          ; 005b0c6c
    AND EDX,0xff                        ; 005b0c6f
    JZ 0x005b0c83                       ; 005b0c75
        ;   XREF to: 005b0c83 (CONDITIONAL_JUMP)  ; LAB_005b0c83
    MOV DL,byte ptr [EAX]               ; 005b0c77
    MOV byte ptr [EBX],DL               ; 005b0c79
    MOV AL,byte ptr [EAX + 0x1]         ; 005b0c7b
    MOV byte ptr [EBX + 0x1],AL         ; 005b0c7e
    POP EBX                             ; 005b0c81
    RET                                 ; 005b0c82
    MOV AL,byte ptr [EAX]               ; 005b0c83
        ;   Label: LAB_005b0c83
    MOV byte ptr [EBX],AL               ; 005b0c85
    POP EBX                             ; 005b0c87
    RET                                 ; 005b0c88

