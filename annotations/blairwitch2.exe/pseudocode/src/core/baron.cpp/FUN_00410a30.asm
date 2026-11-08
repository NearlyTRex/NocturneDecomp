; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410a30(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_core_baron_cpp_005cb5b1
;   TerminatedCString s_CBaronWeapon_setWeaponSt_005cb5c3
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0040fef0
;   FUN_00410040
;   FUN_00410ac0
;   FUN_004e4500
;   FUN_0058a200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410a30
        ;   Label: FUN_00410a30
    PUSH ESI                            ; 00410a31
    PUSH EBP                            ; 00410a32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410a33
    MOV EDX,dword ptr [ESP + 0x14]      ; 00410a37
    PUSH EDX                            ; 00410a3b
    PUSH EBX                            ; 00410a3c
    CALL FUN_0058a200                   ; 00410a3d
        ;   XREF to: 0058a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0058a200()
    ADD ESP,0x8                         ; 00410a42
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00410a45
    PUSH EBX                            ; 00410a4b
    CALL dword ptr [EAX + 0x9c]         ; 00410a4c
    ADD ESP,0x4                         ; 00410a52
    MOV ECX,dword ptr [EBX + 0x430]     ; 00410a55
    MOV ESI,EAX                         ; 00410a5b
    CMP ECX,0x2                         ; 00410a5d
    JNZ 0x00410aa5                      ; 00410a60
        ;   XREF to: 00410aa5 (CONDITIONAL_JUMP)  ; LAB_00410aa5
    TEST EAX,EAX                        ; 00410a62
    JNZ 0x00410a88                      ; 00410a64
        ;   XREF to: 00410a88 (CONDITIONAL_JUMP)  ; LAB_00410a88
    MOV EBP,0x5cb5b1                    ; 00410a66 | = "..\\core\\baron.cpp"
    MOV EAX,0x320                       ; 00410a6b
    PUSH 0x5cb5c3                       ; 00410a70 | = "CBaronWeapon::setWeaponState - I'm dr..."
    MOV dword ptr [0x01d046a0],EBP      ; 00410a75 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00410a7b | DAT_01d046a4
    CALL FUN_004e4500                   ; 00410a80
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00410a85
    PUSH EBX                            ; 00410a88
        ;   Label: LAB_00410a88
    CALL FUN_00410ac0                   ; 00410a89
        ;   XREF to: 00410ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00410ac0()
    ADD ESP,0x4                         ; 00410a8e
    PUSH ESI                            ; 00410a91
    MOV EDX,dword ptr [EBX + 0x6d4]     ; 00410a92
    PUSH EDX                            ; 00410a98
    CALL FUN_0040fef0                   ; 00410a99
        ;   XREF to: 0040fef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fef0()
    ADD ESP,0x8                         ; 00410a9e
    POP EBP                             ; 00410aa1
        ;   Label: LAB_00410aa1
    POP ESI                             ; 00410aa2
    POP EBX                             ; 00410aa3
    RET                                 ; 00410aa4
    MOV ESI,dword ptr [EBX + 0x6d4]     ; 00410aa5
        ;   Label: LAB_00410aa5
    TEST ESI,ESI                        ; 00410aab
    JZ 0x00410aa1                       ; 00410aad
        ;   XREF to: 00410aa1 (CONDITIONAL_JUMP)  ; LAB_00410aa1
    PUSH EAX                            ; 00410aaf
    PUSH ESI                            ; 00410ab0
    CALL FUN_00410040                   ; 00410ab1
        ;   XREF to: 00410040 (UNCONDITIONAL_CALL)  ; undefined FUN_00410040()
    ADD ESP,0x8                         ; 00410ab6
    POP EBP                             ; 00410ab9
    POP ESI                             ; 00410aba
    POP EBX                             ; 00410abb
    RET                                 ; 00410abc

