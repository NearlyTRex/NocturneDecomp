; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_005c0e00(byte *param_1)
;
;
; XREF[10]:
;   FUN_005b9e58 at 005b9eb1
;   FUN_005b9f4c at 005ba003
;   FUN_005bfdd4 at 005bfe86
;   FUN_005c0d60 at 005c0dad
;   FUN_005c1b50 at 005c1b91
;   FUN_005c3e70 at 005c3ea4
;   FUN_005c5810 at 005c5856
;   FUN_005c5c00 at 005c5c53
;   FUN_005c68e0 at 005c68f6
;   FUN_005c6910 at 005c694e
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c0e00
        ;   Label: FUN_005c0e00
    CMP dword ptr [0x026807f0],0x0      ; 005c0e04 | DAT_026807f0
    JZ 0x005c0e2c                       ; 005c0e0b
        ;   XREF to: 005c0e2c (CONDITIONAL_JUMP)  ; LAB_005c0e2c
    XOR EDX,EDX                         ; 005c0e0d
    MOV DL,byte ptr [EAX]               ; 005c0e0f
    MOV DL,byte ptr [EDX + 0x2680801]   ; 005c0e11
    AND DL,0x1                          ; 005c0e17
    AND EDX,0xff                        ; 005c0e1a
    JZ 0x005c0e2c                       ; 005c0e20
        ;   XREF to: 005c0e2c (CONDITIONAL_JUMP)  ; LAB_005c0e2c
    CMP byte ptr [EAX + 0x1],0x0        ; 005c0e22
    JZ 0x005c0e2c                       ; 005c0e26
        ;   XREF to: 005c0e2c (CONDITIONAL_JUMP)  ; LAB_005c0e2c
    ADD EAX,0x2                         ; 005c0e28
    RET                                 ; 005c0e2b
    INC EAX                             ; 005c0e2c
        ;   Label: LAB_005c0e2c
    RET                                 ; 005c0e2d

