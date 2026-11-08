; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522170(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_00522150 at 00522156
;   FUN_00522fe0 at 00522fe5
;   FUN_00523000 at 00523020
;   FUN_005230c0 at 005230dd
;   FUN_00523100 at 0052311d
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522170
        ;   Label: FUN_00522170
    PUSH ESI                            ; 00522171
    MOV EBX,dword ptr [ESP + 0xc]       ; 00522172
    MOV EDX,dword ptr [EBX + 0x58]      ; 00522176
    TEST EDX,EDX                        ; 00522179
    JNZ 0x005221a2                      ; 0052217b
        ;   XREF to: 005221a2 (CONDITIONAL_JUMP)  ; LAB_005221a2
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052217d
        ;   Label: LAB_0052217d
    TEST ESI,ESI                        ; 00522180
    JNZ 0x005221b4                      ; 00522182
        ;   XREF to: 005221b4 (CONDITIONAL_JUMP)  ; LAB_005221b4
    MOV dword ptr [EBX + 0x5c],0x0      ; 00522184
        ;   Label: LAB_00522184
    MOV dword ptr [EBX + 0x64],0x0      ; 0052218b
    MOV dword ptr [EBX],0x0             ; 00522192
    MOV dword ptr [EBX + 0x54],0x0      ; 00522198
    POP ESI                             ; 0052219f
    POP EBX                             ; 005221a0
    RET                                 ; 005221a1
    PUSH EDX                            ; 005221a2
        ;   Label: LAB_005221a2
    CALL FUN_005c09f0                   ; 005221a3
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005221a8
    MOV dword ptr [EBX + 0x58],0x0      ; 005221ab
    JMP 0x0052217d                      ; 005221b2
        ;   XREF to: 0052217d (UNCONDITIONAL_JUMP)  ; LAB_0052217d
    PUSH ESI                            ; 005221b4
        ;   Label: LAB_005221b4
    CALL FUN_005c09f0                   ; 005221b5
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005221ba
    MOV dword ptr [EBX + 0x60],0x0      ; 005221bd
    JMP 0x00522184                      ; 005221c4
        ;   XREF to: 00522184 (UNCONDITIONAL_JUMP)  ; LAB_00522184

