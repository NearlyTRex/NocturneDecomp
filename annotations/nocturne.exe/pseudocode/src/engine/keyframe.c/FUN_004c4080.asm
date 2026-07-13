; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4080(uint *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c3760
;   FUN_004c3920
;   FUN_004c8440
;   FUN_004dd520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4080
        ;   Label: FUN_004c4080
    PUSH ESI                            ; 004c4081
    PUSH EDI                            ; 004c4082
    PUSH EBP                            ; 004c4083
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c4084
    MOV EBX,EAX                         ; 004c4088
    MOV EDX,dword ptr [EAX]             ; 004c408a
    XOR ESI,ESI                         ; 004c408c
    XOR EDI,EDI                         ; 004c408e
    TEST EDX,EDX                        ; 004c4090
    JZ 0x004c40a5                       ; 004c4092
        ;   XREF to: 004c40a5 (CONDITIONAL_JUMP)  ; LAB_004c40a5
    CMP dword ptr [EBX],0x2             ; 004c4094
        ;   Label: LAB_004c4094
    JNZ 0x004c409c                      ; 004c4097
        ;   XREF to: 004c409c (CONDITIONAL_JUMP)  ; LAB_004c409c
    LEA ESI,[EBX + 0xc]                 ; 004c4099
    MOV EAX,dword ptr [EBX]             ; 004c409c
        ;   Label: LAB_004c409c
    CMP EAX,0x18                        ; 004c409e
    JNZ 0x004c4105                      ; 004c40a1
        ;   XREF to: 004c4105 (CONDITIONAL_JUMP)  ; LAB_004c4105
    MOV EDI,EBX                         ; 004c40a3
        ;   Label: LAB_004c40a3
    TEST ESI,ESI                        ; 004c40a5
        ;   Label: LAB_004c40a5
    JNZ 0x004c40cb                      ; 004c40a7
        ;   XREF to: 004c40cb (CONDITIONAL_JUMP)  ; LAB_004c40cb
    MOV EBP,0x5876a4                    ; 004c40a9
    MOV EAX,0x1f5                       ; 004c40ae
    PUSH 0x5876b9                       ; 004c40b3
    MOV dword ptr [0x01cc4800],EBP      ; 004c40b8 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004c40be | DAT_01cc4804
    CALL FUN_004c8440                   ; 004c40c3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004c40c8
    TEST EDI,EDI                        ; 004c40cb
        ;   Label: LAB_004c40cb
    JZ 0x004c412f                       ; 004c40cd
        ;   XREF to: 004c412f (CONDITIONAL_JUMP)  ; LAB_004c412f
    MOV EAX,dword ptr [EBX]             ; 004c40cf
        ;   Label: LAB_004c40cf
    CMP EAX,0x19                        ; 004c40d1
    JNC 0x004c4160                      ; 004c40d4
        ;   XREF to: 004c4160 (CONDITIONAL_JUMP)  ; LAB_004c4160
    CMP EAX,0x18                        ; 004c40da
    JNZ 0x004c40e9                      ; 004c40dd
        ;   XREF to: 004c40e9 (CONDITIONAL_JUMP)  ; LAB_004c40e9
    PUSH EBX                            ; 004c40df
        ;   Label: LAB_004c40df
    PUSH ESI                            ; 004c40e0
    CALL FUN_004c3920                   ; 004c40e1
        ;   XREF to: 004c3920 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3920()
    ADD ESP,0x8                         ; 004c40e6
        ;   Label: LAB_004c40e6
    PUSH EBX                            ; 004c40e9
        ;   Label: LAB_004c40e9
    CALL FUN_004dd520                   ; 004c40ea
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd520()
    SHR EAX,0x2                         ; 004c40ef
    SHL EAX,0x2                         ; 004c40f2
    ADD EBX,EAX                         ; 004c40f5
    MOV EBP,dword ptr [EBX]             ; 004c40f7
    ADD ESP,0x4                         ; 004c40f9
    TEST EBP,EBP                        ; 004c40fc
    JNZ 0x004c40cf                      ; 004c40fe
        ;   XREF to: 004c40cf (CONDITIONAL_JUMP)  ; LAB_004c40cf
    POP EBP                             ; 004c4100
    POP EDI                             ; 004c4101
    POP ESI                             ; 004c4102
    POP EBX                             ; 004c4103
    RET                                 ; 004c4104
    CMP EAX,0x29                        ; 004c4105
        ;   Label: LAB_004c4105
    JZ 0x004c40a3                       ; 004c4108
        ;   XREF to: 004c40a3 (CONDITIONAL_JUMP)  ; LAB_004c40a3
    CMP EAX,0x19                        ; 004c410a
    JZ 0x004c40a3                       ; 004c410d
        ;   XREF to: 004c40a3 (CONDITIONAL_JUMP)  ; LAB_004c40a3
    PUSH EBX                            ; 004c410f
    CALL FUN_004dd520                   ; 004c4110
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd520()
    SHR EAX,0x2                         ; 004c4115
    SHL EAX,0x2                         ; 004c4118
    ADD EBX,EAX                         ; 004c411b
    MOV ECX,dword ptr [EBX]             ; 004c411d
    ADD ESP,0x4                         ; 004c411f
    TEST ECX,ECX                        ; 004c4122
    JNZ 0x004c4094                      ; 004c4124
        ;   XREF to: 004c4094 (CONDITIONAL_JUMP)  ; LAB_004c4094
    JMP 0x004c40a5                      ; 004c412a
        ;   XREF to: 004c40a5 (UNCONDITIONAL_JUMP)  ; LAB_004c40a5
    MOV EDX,0x5876e4                    ; 004c412f
        ;   Label: LAB_004c412f
    MOV ECX,0x1f6                       ; 004c4134
    PUSH 0x5876f9                       ; 004c4139
    MOV dword ptr [0x01cc4800],EDX      ; 004c413e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004c4144 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004c414a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004c414f
    JMP 0x004c40cf                      ; 004c4152
        ;   XREF to: 004c40cf (UNCONDITIONAL_JUMP)  ; LAB_004c40cf
    PUSH EBX                            ; 004c4157
        ;   Label: LAB_004c4157
    PUSH ESI                            ; 004c4158
    CALL FUN_004c3760                   ; 004c4159
        ;   XREF to: 004c3760 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3760()
    JMP 0x004c40e6                      ; 004c415e
        ;   XREF to: 004c40e6 (UNCONDITIONAL_JUMP)  ; LAB_004c40e6
    JBE 0x004c4157                      ; 004c4160
        ;   XREF to: 004c4157 (CONDITIONAL_JUMP)  ; LAB_004c4157
        ;   Label: LAB_004c4160
    CMP EAX,0x29                        ; 004c4162
    JZ 0x004c40df                       ; 004c4165
        ;   XREF to: 004c40df (CONDITIONAL_JUMP)  ; LAB_004c40df
    JMP 0x004c40e9                      ; 004c416b
        ;   XREF to: 004c40e9 (UNCONDITIONAL_JUMP)  ; LAB_004c40e9

