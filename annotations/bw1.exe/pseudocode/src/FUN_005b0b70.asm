; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b0b70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00432050
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b0b70
        ;   Label: FUN_005b0b70
    ADD EAX,0x158                       ; 005b0b74
    PUSH EAX                            ; 005b0b79
    CALL FUN_00524770                   ; 005b0b7a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b0b7f
    ADD ESP,0x4                         ; 005b0b82
    CMP EAX,0x13                        ; 005b0b85
    JNZ 0x005b0b8b                      ; 005b0b88
        ;   XREF to: 005b0b8b (CONDITIONAL_JUMP)  ; LAB_005b0b8b
    RET                                 ; 005b0b8a
    PUSH dword ptr [ESP + 0x10]         ; 005b0b8b
        ;   Label: LAB_005b0b8b
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b0b8f
    PUSH dword ptr [ESP + 0x10]         ; 005b0b93
    PUSH EDX                            ; 005b0b97
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b0b98
    PUSH ECX                            ; 005b0b9c
    CALL FUN_00432050                   ; 005b0b9d
        ;   XREF to: 00432050 (UNCONDITIONAL_CALL)  ; undefined FUN_00432050()
    ADD ESP,0x10                        ; 005b0ba2
    RET                                 ; 005b0ba5

