; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort FUN_005ac9c0(byte *param_1)
;
;
; XREF[5]:
;   FUN_005a5128 at 005a516c
;   FUN_005a521c at 005a52aa
;   FUN_005aede0 at 005aedf8
;   FUN_005b0c90 at 005b0ca9
;   FUN_005b1720 at 005b178d
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ac9c0
        ;   Label: FUN_005ac9c0
    CMP dword ptr [0x02d25930],0x0      ; 005ac9c4 | DAT_02d25930
    JZ 0x005ac9f4                       ; 005ac9cb
        ;   XREF to: 005ac9f4 (CONDITIONAL_JUMP)  ; LAB_005ac9f4
    XOR EDX,EDX                         ; 005ac9cd
    MOV DL,byte ptr [EAX]               ; 005ac9cf
    MOV DL,byte ptr [EDX + 0x2d25941]   ; 005ac9d1
    AND DL,0x1                          ; 005ac9d7
    AND EDX,0xff                        ; 005ac9da
    JZ 0x005ac9f4                       ; 005ac9e0
        ;   XREF to: 005ac9f4 (CONDITIONAL_JUMP)  ; LAB_005ac9f4
    XOR EDX,EDX                         ; 005ac9e2
    MOV DL,byte ptr [EAX]               ; 005ac9e4
    SHL EDX,0x8                         ; 005ac9e6
    MOV AL,byte ptr [EAX + 0x1]         ; 005ac9e9
    AND EAX,0xff                        ; 005ac9ec
    OR EAX,EDX                          ; 005ac9f1
    RET                                 ; 005ac9f3
    MOV AL,byte ptr [EAX]               ; 005ac9f4
        ;   Label: LAB_005ac9f4
    AND EAX,0xff                        ; 005ac9f6
    RET                                 ; 005ac9fb

