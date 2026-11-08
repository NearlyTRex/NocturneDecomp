; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00493150(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004931b0 at 004932f7
;
; Referenced Globals:
;   undefined4 DAT_0061abc0
;   undefined4 DAT_00626114
;
; Called Functions:
;   FUN_00492f50
;   FUN_00492f70
;   FUN_00498210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493150
        ;   Label: FUN_00493150
    PUSH ESI                            ; 00493151
    MOV ESI,dword ptr [ESP + 0xc]       ; 00493152
    MOV EDX,dword ptr [0x0061abc0]      ; 00493156 | DAT_0061abc0
    PUSH EDX                            ; 0049315c
    CALL FUN_00498210                   ; 0049315d
        ;   XREF to: 00498210 (UNCONDITIONAL_CALL)  ; undefined FUN_00498210()
    ADD ESP,0x4                         ; 00493162
    MOV EBX,EAX                         ; 00493165
    XOR EAX,EAX                         ; 00493167
        ;   Label: LAB_00493167
    MOV AL,byte ptr [EBX]               ; 00493169
    TEST EAX,EAX                        ; 0049316b
    JLE 0x0049319d                      ; 0049316d
        ;   XREF to: 0049319d (CONDITIONAL_JUMP)  ; LAB_0049319d
    MOV DL,AL                           ; 0049316f
    INC DL                              ; 00493171
    AND EDX,0xff                        ; 00493173
    TEST byte ptr [EDX + 0x626114],0x8  ; 00493179 | DAT_00626114
    JNZ 0x00493185                      ; 00493180
        ;   XREF to: 00493185 (CONDITIONAL_JUMP)  ; LAB_00493185
    INC EBX                             ; 00493182
        ;   Label: LAB_00493182
    JMP 0x00493167                      ; 00493183
        ;   XREF to: 00493167 (UNCONDITIONAL_JUMP)  ; LAB_00493167
    CMP EAX,0x9                         ; 00493185
        ;   Label: LAB_00493185
    JNZ 0x0049318f                      ; 00493188
        ;   XREF to: 0049318f (CONDITIONAL_JUMP)  ; LAB_0049318f
    MOV EAX,0x20                        ; 0049318a
    PUSH 0x1                            ; 0049318f
        ;   Label: LAB_0049318f
    PUSH EAX                            ; 00493191
    PUSH ESI                            ; 00493192
    CALL FUN_00492f70                   ; 00493193
        ;   XREF to: 00492f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00492f70()
    ADD ESP,0xc                         ; 00493198
    JMP 0x00493182                      ; 0049319b
        ;   XREF to: 00493182 (UNCONDITIONAL_JUMP)  ; LAB_00493182
    PUSH ESI                            ; 0049319d
        ;   Label: LAB_0049319d
    CALL FUN_00492f50                   ; 0049319e
        ;   XREF to: 00492f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00492f50()
    ADD ESP,0x4                         ; 004931a3
    POP ESI                             ; 004931a6
    POP EBX                             ; 004931a7
    RET                                 ; 004931a8

