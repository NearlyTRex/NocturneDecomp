; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a6140(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005f068b
;   undefined4 DAT_005ffc9c
;
; Called Functions:
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_00503e60
;   FUN_0059d8e0
;   FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6140
        ;   Label: FUN_005a6140
    SUB ESP,0x8                         ; 005a6141
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a6144
    PUSH EBX                            ; 005a6148
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a6149
    CALL dword ptr [EAX + 0x17c]        ; 005a614f
    ADD ESP,0x4                         ; 005a6155
    TEST EAX,EAX                        ; 005a6158
    JZ 0x005a61b4                       ; 005a615a
        ;   XREF to: 005a61b4 (CONDITIONAL_JUMP)  ; LAB_005a61b4
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005a615c
    LEA EAX,[EBX + 0x20]                ; 005a6162
    FLD float ptr [EDX + 0x20]          ; 005a6165
    FSUB float ptr [EAX]                ; 005a6168
    FMUL ST0                            ; 005a616a
    FLD float ptr [EDX + 0x28]          ; 005a616c
    FSUB float ptr [EAX + 0x8]          ; 005a616f
    FMUL ST0                            ; 005a6172
    FADDP                               ; 005a6174
    FSQRT                               ; 005a6176
    ADD EDX,0x20                        ; 005a6178
    FCOMP float ptr [0x005ffc9c]        ; 005a617b | DAT_005ffc9c
    FNSTSW AX                           ; 005a6181
    SAHF                                ; 005a6183
    JA 0x005a61b9                       ; 005a6184
        ;   XREF to: 005a61b9 (CONDITIONAL_JUMP)  ; LAB_005a61b9
    PUSH EDX                            ; 005a6186
    PUSH EBX                            ; 005a6187
    CALL FUN_00423850                   ; 005a6188
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    ADD ESP,0x8                         ; 005a618d
    PUSH 0x1                            ; 005a6190
    PUSH 0x5                            ; 005a6192
    ADD EBX,0x2b4                       ; 005a6194
    PUSH EBX                            ; 005a619a
    CALL FUN_00503620                   ; 005a619b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a61a0
    PUSH EBX                            ; 005a61a3
    CALL FUN_005035c0                   ; 005a61a4
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a61a9
    ADD ESP,0x4                         ; 005a61ac
    CMP EAX,0x5                         ; 005a61af
    JZ 0x005a61e0                       ; 005a61b2
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    ADD ESP,0x8                         ; 005a61b4
        ;   Label: LAB_005a61b4
    POP EBX                             ; 005a61b7
    RET                                 ; 005a61b8
    ADD EBX,0x10af8                     ; 005a61b9
        ;   Label: LAB_005a61b9
    PUSH 0x3f800000                     ; 005a61bf
    PUSH EBX                            ; 005a61c4
    CALL FUN_0059dcb0                   ; 005a61c5
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a61ca
    PUSH 0x5f068b                       ; 005a61cd | = "Chasing"
    PUSH EBX                            ; 005a61d2
    CALL FUN_0059d8e0                   ; 005a61d3
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a61d8
    ADD ESP,0x8                         ; 005a61db
    POP EBX                             ; 005a61de
    RET                                 ; 005a61df
    PUSH EBX                            ; 005a61e0
        ;   Label: LAB_005a61e0
    CALL FUN_00503e60                   ; 005a61e1
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00503e60()
    ADD ESP,0x4                         ; 005a61e6
    ADD ESP,0x8                         ; 005a61e9
    POP EBX                             ; 005a61ec
    RET                                 ; 005a61ed

