; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_005c90c0(byte *param_1)
;
;
; XREF[10]:
;   FUN_005c2238 at 005c2291
;   FUN_005c232c at 005c23e3
;   FUN_005c8094 at 005c8146
;   FUN_005c9020 at 005c906d
;   FUN_005c9ea0 at 005c9ee1
;   FUN_005cc170 at 005cc1a4
;   FUN_005cdb10 at 005cdb56
;   FUN_005cdf00 at 005cdf53
;   FUN_005cebe0 at 005cebf6
;   FUN_005cec10 at 005cec4e
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c90c0
        ;   Label: FUN_005c90c0
    CMP dword ptr [0x02c9f6e0],0x0      ; 005c90c4 | DAT_02c9f6e0
    JZ 0x005c90ec                       ; 005c90cb
        ;   XREF to: 005c90ec (CONDITIONAL_JUMP)  ; LAB_005c90ec
    XOR EDX,EDX                         ; 005c90cd
    MOV DL,byte ptr [EAX]               ; 005c90cf
    MOV DL,byte ptr [EDX + 0x2c9f6f1]   ; 005c90d1
    AND DL,0x1                          ; 005c90d7
    AND EDX,0xff                        ; 005c90da
    JZ 0x005c90ec                       ; 005c90e0
        ;   XREF to: 005c90ec (CONDITIONAL_JUMP)  ; LAB_005c90ec
    CMP byte ptr [EAX + 0x1],0x0        ; 005c90e2
    JZ 0x005c90ec                       ; 005c90e6
        ;   XREF to: 005c90ec (CONDITIONAL_JUMP)  ; LAB_005c90ec
    ADD EAX,0x2                         ; 005c90e8
    RET                                 ; 005c90eb
    INC EAX                             ; 005c90ec
        ;   Label: LAB_005c90ec
    RET                                 ; 005c90ed

