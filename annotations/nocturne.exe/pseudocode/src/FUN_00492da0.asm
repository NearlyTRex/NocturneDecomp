; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00492da0(int param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[25]:
;   FUN_0046f5c0 at 0046f639
;   FUN_0046fb40 at 0046fbcb
;   FUN_0046fcd0 at 0046fd5b
;   FUN_0046fe60 at 0046feeb
;   FUN_00470eb0 at 004710bb
;   FUN_00471660 at 0047173a
;   FUN_00471a80 at 00471b39
;   FUN_004722b0 at 0047240e
;   FUN_00475470 at 00475517
;   FUN_00477080 at 004770e6
;   ... and 15 more
;
; Called Functions:
;   FUN_004930b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492da0
        ;   Label: FUN_00492da0
    PUSH ESI                            ; 00492da1
    PUSH EDI                            ; 00492da2
    PUSH EBP                            ; 00492da3
    SUB ESP,0x4                         ; 00492da4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00492da7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00492dab
    MOV EDX,dword ptr [EDI + 0x3190]    ; 00492daf
    XOR EBP,EBP                         ; 00492db5
    TEST EDX,EDX                        ; 00492db7
    JZ 0x00492e08                       ; 00492db9
        ;   XREF to: 00492e08 (CONDITIONAL_JUMP)  ; LAB_00492e08
    MOV EBX,ESI                         ; 00492dbb
    MOV DL,0xa                          ; 00492dbd
        ;   Label: LAB_00492dbd
    MOV ESI,EBX                         ; 00492dbf
    MOV AL,byte ptr [ESI]               ; 00492dc1
        ;   Label: LAB_00492dc1
    CMP AL,DL                           ; 00492dc3
    JZ 0x00492dd9                       ; 00492dc5
        ;   XREF to: 00492dd9 (CONDITIONAL_JUMP)  ; LAB_00492dd9
    CMP AL,0x0                          ; 00492dc7
    JZ 0x00492dd7                       ; 00492dc9
        ;   XREF to: 00492dd7 (CONDITIONAL_JUMP)  ; LAB_00492dd7
    INC ESI                             ; 00492dcb
    MOV AL,byte ptr [ESI]               ; 00492dcc
    CMP AL,DL                           ; 00492dce
    JZ 0x00492dd9                       ; 00492dd0
        ;   XREF to: 00492dd9 (CONDITIONAL_JUMP)  ; LAB_00492dd9
    INC ESI                             ; 00492dd2
    CMP AL,0x0                          ; 00492dd3
    JNZ 0x00492dc1                      ; 00492dd5
        ;   XREF to: 00492dc1 (CONDITIONAL_JUMP)  ; LAB_00492dc1
    SUB ESI,ESI                         ; 00492dd7
        ;   Label: LAB_00492dd7
    MOV dword ptr [ESP],ESI             ; 00492dd9
        ;   Label: LAB_00492dd9
    TEST ESI,ESI                        ; 00492ddc
    JZ 0x00492de3                       ; 00492dde
        ;   XREF to: 00492de3 (CONDITIONAL_JUMP)  ; LAB_00492de3
    MOV byte ptr [ESI],0x0              ; 00492de0
    PUSH EBX                            ; 00492de3
        ;   Label: LAB_00492de3
    MOV EAX,dword ptr [EDI + 0x3194]    ; 00492de4
    PUSH EAX                            ; 00492dea
    MOV ESI,dword ptr [EAX]             ; 00492deb
    CALL dword ptr [ESI + 0x8]          ; 00492ded
    ADD ESP,0x8                         ; 00492df0
    CMP EAX,EBP                         ; 00492df3
    JLE 0x00492df9                      ; 00492df5
        ;   XREF to: 00492df9 (CONDITIONAL_JUMP)  ; LAB_00492df9
    MOV EBP,EAX                         ; 00492df7
    MOV ECX,dword ptr [ESP]             ; 00492df9
        ;   Label: LAB_00492df9
    TEST ECX,ECX                        ; 00492dfc
    JZ 0x00492e47                       ; 00492dfe
        ;   XREF to: 00492e47 (CONDITIONAL_JUMP)  ; LAB_00492e47
    LEA EBX,[ECX + 0x1]                 ; 00492e00
    MOV byte ptr [ECX],0xa              ; 00492e03
    JMP 0x00492dbd                      ; 00492e06
        ;   XREF to: 00492dbd (UNCONDITIONAL_JUMP)  ; LAB_00492dbd
    CMP byte ptr [ESI],0x0              ; 00492e08
        ;   Label: LAB_00492e08
    JZ 0x00492e47                       ; 00492e0b
        ;   XREF to: 00492e47 (CONDITIONAL_JUMP)  ; LAB_00492e47
    XOR EBX,EBX                         ; 00492e0d
    XOR EAX,EAX                         ; 00492e0f
        ;   Label: LAB_00492e0f
    MOV AL,byte ptr [ESI]               ; 00492e11
    INC ESI                             ; 00492e13
    CMP EAX,0xa                         ; 00492e14
    JNZ 0x00492e2b                      ; 00492e17
        ;   XREF to: 00492e2b (CONDITIONAL_JUMP)  ; LAB_00492e2b
    TEST EBX,EBX                        ; 00492e19
        ;   Label: LAB_00492e19
    JLE 0x00492e23                      ; 00492e1b
        ;   XREF to: 00492e23 (CONDITIONAL_JUMP)  ; LAB_00492e23
    SUB EBX,dword ptr [EDI + 0x3174]    ; 00492e1d
    CMP EBX,EBP                         ; 00492e23
        ;   Label: LAB_00492e23
    JLE 0x00492e08                      ; 00492e25
        ;   XREF to: 00492e08 (CONDITIONAL_JUMP)  ; LAB_00492e08
    MOV EBP,EBX                         ; 00492e27
    JMP 0x00492e08                      ; 00492e29
        ;   XREF to: 00492e08 (UNCONDITIONAL_JUMP)  ; LAB_00492e08
    PUSH EAX                            ; 00492e2b
        ;   Label: LAB_00492e2b
    PUSH EDI                            ; 00492e2c
    CALL FUN_004930b0                   ; 00492e2d
        ;   XREF to: 004930b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004930b0()
    MOV EDX,dword ptr [EDI + 0x3174]    ; 00492e32
    ADD ESP,0x8                         ; 00492e38
    ADD EAX,EDX                         ; 00492e3b
    MOV DL,byte ptr [ESI]               ; 00492e3d
    ADD EBX,EAX                         ; 00492e3f
    TEST DL,DL                          ; 00492e41
    JNZ 0x00492e0f                      ; 00492e43
        ;   XREF to: 00492e0f (CONDITIONAL_JUMP)  ; LAB_00492e0f
    JMP 0x00492e19                      ; 00492e45
        ;   XREF to: 00492e19 (UNCONDITIONAL_JUMP)  ; LAB_00492e19
    MOV EAX,EBP                         ; 00492e47
        ;   Label: LAB_00492e47
    ADD ESP,0x4                         ; 00492e49
    POP EBP                             ; 00492e4c
    POP EDI                             ; 00492e4d
    POP ESI                             ; 00492e4e
    POP EBX                             ; 00492e4f
    RET                                 ; 00492e50

