; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort FUN_005c0dc0(byte *param_1)
;
;
; XREF[5]:
;   FUN_005b9e58 at 005b9e9c
;   FUN_005b9f4c at 005b9fda
;   FUN_005c3e70 at 005c3e88
;   FUN_005c5c00 at 005c5c19
;   FUN_005c6690 at 005c66fd
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c0dc0
        ;   Label: FUN_005c0dc0
    CMP dword ptr [0x026807f0],0x0      ; 005c0dc4 | DAT_026807f0
    JZ 0x005c0df4                       ; 005c0dcb
        ;   XREF to: 005c0df4 (CONDITIONAL_JUMP)  ; LAB_005c0df4
    XOR EDX,EDX                         ; 005c0dcd
    MOV DL,byte ptr [EAX]               ; 005c0dcf
    MOV DL,byte ptr [EDX + 0x2680801]   ; 005c0dd1
    AND DL,0x1                          ; 005c0dd7
    AND EDX,0xff                        ; 005c0dda
    JZ 0x005c0df4                       ; 005c0de0
        ;   XREF to: 005c0df4 (CONDITIONAL_JUMP)  ; LAB_005c0df4
    XOR EDX,EDX                         ; 005c0de2
    MOV DL,byte ptr [EAX]               ; 005c0de4
    SHL EDX,0x8                         ; 005c0de6
    MOV AL,byte ptr [EAX + 0x1]         ; 005c0de9
    AND EAX,0xff                        ; 005c0dec
    OR EAX,EDX                          ; 005c0df1
    RET                                 ; 005c0df3
    MOV AL,byte ptr [EAX]               ; 005c0df4
        ;   Label: LAB_005c0df4
    AND EAX,0xff                        ; 005c0df6
    RET                                 ; 005c0dfb

