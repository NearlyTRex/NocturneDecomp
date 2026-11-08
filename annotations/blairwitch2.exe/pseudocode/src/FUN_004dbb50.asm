; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dbb50(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004b76c0 at 004b7a5a
;   FUN_004be8a0 at 004beb50
;   FUN_00522350 at 00527fb7
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_005db740
;   TerminatedCString s_CWeapon_005db748
;
; Called Functions:
;   FUN_0040c840
;   FUN_004dd2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbb50
        ;   Label: FUN_004dbb50
    PUSH ESI                            ; 004dbb51
    PUSH EDI                            ; 004dbb52
    PUSH EBP                            ; 004dbb53
    MOV ESI,dword ptr [ESP + 0x14]      ; 004dbb54
    PUSH ESI                            ; 004dbb58
    CALL FUN_004dd2c0                   ; 004dbb59
        ;   XREF to: 004dd2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd2c0()
    MOV EBP,dword ptr [ESI + 0x468]     ; 004dbb5e
    SHL EBP,0x2                         ; 004dbb64
    ADD EBP,ESI                         ; 004dbb67
    MOV EDX,dword ptr [EBP + 0x5fc]     ; 004dbb69
    ADD ESP,0x4                         ; 004dbb6f
    TEST EDX,EDX                        ; 004dbb72
    JNZ 0x004dbbcb                      ; 004dbb74
        ;   XREF to: 004dbbcb (CONDITIONAL_JUMP)  ; LAB_004dbbcb
    MOV EBX,dword ptr [ESI + 0x10]      ; 004dbb76
    XOR EDI,EDI                         ; 004dbb79
    TEST EBX,EBX                        ; 004dbb7b
    JLE 0x004dbba1                      ; 004dbb7d
        ;   XREF to: 004dbba1 (CONDITIONAL_JUMP)  ; LAB_004dbba1
    MOV EBX,ESI                         ; 004dbb7f
    PUSH 0x5db740                       ; 004dbb81 | = "CWeapon"
        ;   Label: LAB_004dbb81
    MOV EBP,dword ptr [EBX + 0x14]      ; 004dbb86
    PUSH EBP                            ; 004dbb89
    CALL FUN_0040c840                   ; 004dbb8a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004dbb8f
    TEST EAX,EAX                        ; 004dbb92
    JZ 0x004dbba6                       ; 004dbb94
        ;   XREF to: 004dbba6 (CONDITIONAL_JUMP)  ; LAB_004dbba6
    INC EDI                             ; 004dbb96
        ;   Label: LAB_004dbb96
    MOV ECX,dword ptr [ESI + 0x10]      ; 004dbb97
    ADD EBX,0x4                         ; 004dbb9a
    CMP EDI,ECX                         ; 004dbb9d
    JL 0x004dbb81                       ; 004dbb9f
        ;   XREF to: 004dbb81 (CONDITIONAL_JUMP)  ; LAB_004dbb81
    POP EBP                             ; 004dbba1
        ;   Label: LAB_004dbba1
    POP EDI                             ; 004dbba2
    POP ESI                             ; 004dbba3
    POP EBX                             ; 004dbba4
    RET                                 ; 004dbba5
    MOV EDX,dword ptr [ESI + 0x468]     ; 004dbba6
        ;   Label: LAB_004dbba6
    CMP EDX,dword ptr [EBX + 0x46c]     ; 004dbbac
    JNZ 0x004dbb96                      ; 004dbbb2
        ;   XREF to: 004dbb96 (CONDITIONAL_JUMP)  ; LAB_004dbb96
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dbbb4
    ADD ESI,EAX                         ; 004dbbbb
    MOV EAX,dword ptr [EBX + 0x14]      ; 004dbbbd
    MOV dword ptr [ESI + 0x5fc],EAX     ; 004dbbc0
    POP EBP                             ; 004dbbc6
    POP EDI                             ; 004dbbc7
    POP ESI                             ; 004dbbc8
    POP EBX                             ; 004dbbc9
    RET                                 ; 004dbbca
    MOV ECX,dword ptr [ESI + 0x10]      ; 004dbbcb
        ;   Label: LAB_004dbbcb
    XOR EDI,EDI                         ; 004dbbce
    TEST ECX,ECX                        ; 004dbbd0
    JLE 0x004dbbe1                      ; 004dbbd2
        ;   XREF to: 004dbbe1 (CONDITIONAL_JUMP)  ; LAB_004dbbe1
    MOV EBX,ESI                         ; 004dbbd4
    MOV EDX,dword ptr [EBP + 0x5fc]     ; 004dbbd6
        ;   Label: LAB_004dbbd6
    CMP EDX,dword ptr [EBX + 0x14]      ; 004dbbdc
    JNZ 0x004dbc19                      ; 004dbbdf
        ;   XREF to: 004dbc19 (CONDITIONAL_JUMP)  ; LAB_004dbc19
    MOV EBX,EDI                         ; 004dbbe1
        ;   Label: LAB_004dbbe1
    MOV ECX,dword ptr [ESP + 0x18]      ; 004dbbe3
        ;   Label: LAB_004dbbe3
    MOV EBP,dword ptr [ESI + 0x10]      ; 004dbbe7
    ADD EBX,ECX                         ; 004dbbea
    CMP EBX,EBP                         ; 004dbbec
    JL 0x004dbc26                       ; 004dbbee
        ;   XREF to: 004dbc26 (CONDITIONAL_JUMP)  ; LAB_004dbc26
    XOR EBX,EBX                         ; 004dbbf0
    LEA EBP,[EBX*0x4 + 0x0]             ; 004dbbf2
        ;   Label: LAB_004dbbf2
    ADD EBP,ESI                         ; 004dbbf9
    PUSH 0x5db748                       ; 004dbbfb | = "CWeapon"
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbc00
    PUSH EAX                            ; 004dbc03
    CALL FUN_0040c840                   ; 004dbc04
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004dbc09
    TEST EAX,EAX                        ; 004dbc0c
    JZ 0x004dbc2f                       ; 004dbc0e
        ;   XREF to: 004dbc2f (CONDITIONAL_JUMP)  ; LAB_004dbc2f
    CMP EBX,EDI                         ; 004dbc10
        ;   Label: LAB_004dbc10
    JNZ 0x004dbbe3                      ; 004dbc12
        ;   XREF to: 004dbbe3 (CONDITIONAL_JUMP)  ; LAB_004dbbe3
    POP EBP                             ; 004dbc14
    POP EDI                             ; 004dbc15
    POP ESI                             ; 004dbc16
    POP EBX                             ; 004dbc17
    RET                                 ; 004dbc18
    INC EDI                             ; 004dbc19
        ;   Label: LAB_004dbc19
    MOV EAX,dword ptr [ESI + 0x10]      ; 004dbc1a
    ADD EBX,0x4                         ; 004dbc1d
    CMP EDI,EAX                         ; 004dbc20
    JL 0x004dbbd6                       ; 004dbc22
        ;   XREF to: 004dbbd6 (CONDITIONAL_JUMP)  ; LAB_004dbbd6
    JMP 0x004dbbe1                      ; 004dbc24
        ;   XREF to: 004dbbe1 (UNCONDITIONAL_JUMP)  ; LAB_004dbbe1
    TEST EBX,EBX                        ; 004dbc26
        ;   Label: LAB_004dbc26
    JGE 0x004dbbf2                      ; 004dbc28
        ;   XREF to: 004dbbf2 (CONDITIONAL_JUMP)  ; LAB_004dbbf2
    LEA EBX,[EBP + -0x1]                ; 004dbc2a
    JMP 0x004dbbf2                      ; 004dbc2d
        ;   XREF to: 004dbbf2 (UNCONDITIONAL_JUMP)  ; LAB_004dbbf2
    MOV EDX,dword ptr [ESI + 0x468]     ; 004dbc2f
        ;   Label: LAB_004dbc2f
    CMP EDX,dword ptr [EBP + 0x46c]     ; 004dbc35
    JNZ 0x004dbc10                      ; 004dbc3b
        ;   XREF to: 004dbc10 (CONDITIONAL_JUMP)  ; LAB_004dbc10
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dbc3d
    ADD ESI,EAX                         ; 004dbc44
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbc46
    MOV dword ptr [ESI + 0x5fc],EAX     ; 004dbc49
    POP EBP                             ; 004dbc4f
    POP EDI                             ; 004dbc50
    POP ESI                             ; 004dbc51
    POP EBX                             ; 004dbc52
    RET                                 ; 004dbc53

