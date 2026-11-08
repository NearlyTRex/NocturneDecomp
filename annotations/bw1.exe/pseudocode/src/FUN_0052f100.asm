; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052f100(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4,char *param_5)
;
;
; XREF[2]:
;   FUN_0052d450 at 0052d915
;   FUN_0052ebd0 at 0052ecfc
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01d51db4
;
; Called Functions:
;   FUN_004cc190
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f100
        ;   Label: FUN_0052f100
    PUSH ESI                            ; 0052f101
    PUSH EDI                            ; 0052f102
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052f103
    MOV EDX,dword ptr [0x01d51db4]      ; 0052f107 | DAT_01d51db4
    CMP EDX,0x190                       ; 0052f10d
    JGE 0x0052f1c5                      ; 0052f113
        ;   XREF to: 0052f1c5 (CONDITIONAL_JUMP)  ; LAB_0052f1c5
    MOV EDX,dword ptr [0x01d51db4]      ; 0052f119 | DAT_01d51db4
        ;   Label: LAB_0052f119
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052f11f
    ADD EAX,EDX                         ; 0052f126
    SHL EAX,0x5                         ; 0052f128
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052f12b
    LEA EDI,[EAX + 0x1d51db8]           ; 0052f12f
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052f135
    MOVSD ES:EDI,ESI                    ; 0052f139
    MOVSD ES:EDI,ESI                    ; 0052f13a
    MOV dword ptr [EAX + 0x1d51dc0],EDX ; 0052f13b
    ADD EAX,0x1d51db8                   ; 0052f141
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052f146
    LEA EDI,[EAX + 0xc]                 ; 0052f14a
    PUSH EDI                            ; 0052f14d
    MOV AL,byte ptr [ESI]               ; 0052f14e
        ;   Label: LAB_0052f14e
    MOV byte ptr [EDI],AL               ; 0052f150
    CMP AL,0x0                          ; 0052f152
    JZ 0x0052f166                       ; 0052f154
        ;   XREF to: 0052f166 (CONDITIONAL_JUMP)  ; LAB_0052f166
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f156
    ADD ESI,0x2                         ; 0052f159
    MOV byte ptr [EDI + 0x1],AL         ; 0052f15c
    ADD EDI,0x2                         ; 0052f15f
    CMP AL,0x0                          ; 0052f162
    JNZ 0x0052f14e                      ; 0052f164
        ;   XREF to: 0052f14e (CONDITIONAL_JUMP)  ; LAB_0052f14e
    POP EDI                             ; 0052f166
        ;   Label: LAB_0052f166
    MOV EDX,dword ptr [0x01d51db4]      ; 0052f167 | DAT_01d51db4
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052f16d
    ADD EAX,EDX                         ; 0052f174
    MOV EDI,0x1d51db8                   ; 0052f176
    SHL EAX,0x5                         ; 0052f17b
    ADD EDI,EAX                         ; 0052f17e
    MOV ESI,EBX                         ; 0052f180
    ADD EDI,0x20                        ; 0052f182
    PUSH EDI                            ; 0052f185
    MOV AL,byte ptr [ESI]               ; 0052f186
        ;   Label: LAB_0052f186
    MOV byte ptr [EDI],AL               ; 0052f188
    CMP AL,0x0                          ; 0052f18a
    JZ 0x0052f19e                       ; 0052f18c
        ;   XREF to: 0052f19e (CONDITIONAL_JUMP)  ; LAB_0052f19e
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f18e
    ADD ESI,0x2                         ; 0052f191
    MOV byte ptr [EDI + 0x1],AL         ; 0052f194
    ADD EDI,0x2                         ; 0052f197
    CMP AL,0x0                          ; 0052f19a
    JNZ 0x0052f186                      ; 0052f19c
        ;   XREF to: 0052f186 (CONDITIONAL_JUMP)  ; LAB_0052f186
    POP EDI                             ; 0052f19e
        ;   Label: LAB_0052f19e
    PUSH 0x40a00000                     ; 0052f19f
    MOV ESI,dword ptr [0x01d51db4]      ; 0052f1a4 | DAT_01d51db4
    PUSH EBX                            ; 0052f1aa
    MOV EBX,dword ptr [0x0061d95c]      ; 0052f1ab | DAT_0061d95c
    INC ESI                             ; 0052f1b1
    PUSH EBX                            ; 0052f1b2 | DAT_01ccf390
    MOV dword ptr [0x01d51db4],ESI      ; 0052f1b3 | DAT_01d51db4
    CALL FUN_004cc190                   ; 0052f1b9
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc190()
    ADD ESP,0xc                         ; 0052f1be
    POP EDI                             ; 0052f1c1
    POP ESI                             ; 0052f1c2
    POP EBX                             ; 0052f1c3
    RET                                 ; 0052f1c4
    LEA ECX,[EDX + -0x1]                ; 0052f1c5
        ;   Label: LAB_0052f1c5
    MOV dword ptr [0x01d51db4],ECX      ; 0052f1c8 | DAT_01d51db4
    LEA EAX,[ECX*0x8 + 0x0]             ; 0052f1ce
    ADD EAX,ECX                         ; 0052f1d5
    SHL EAX,0x5                         ; 0052f1d7
    PUSH EAX                            ; 0052f1da
    PUSH 0x1d51ed8                      ; 0052f1db
    PUSH 0x1d51db8                      ; 0052f1e0
    CALL FUN_005c25d0                   ; 0052f1e5
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 0052f1ea
    JMP 0x0052f119                      ; 0052f1ed
        ;   XREF to: 0052f119 (UNCONDITIONAL_JUMP)  ; LAB_0052f119

