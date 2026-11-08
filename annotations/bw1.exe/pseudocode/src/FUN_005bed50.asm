; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bed50(int param_1)
;
;
; Called Functions:
;   FUN_0040c5a0
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bed50
        ;   Label: FUN_005bed50
    ADD EAX,0x158                       ; 005bed54
    PUSH EAX                            ; 005bed59
    CALL FUN_00524770                   ; 005bed5a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bed5f
    ADD ESP,0x4                         ; 005bed62
    CMP EAX,0xe                         ; 005bed65
    JNZ 0x005bed70                      ; 005bed68
        ;   XREF to: 005bed70 (CONDITIONAL_JUMP)  ; LAB_005bed70
    MOV EAX,0x1                         ; 005bed6a
    RET                                 ; 005bed6f
    MOV EDX,dword ptr [ESP + 0x4]       ; 005bed70
        ;   Label: LAB_005bed70
    PUSH EDX                            ; 005bed74
    CALL FUN_0040c5a0                   ; 005bed75
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 005bed7a
    RET                                 ; 005bed7d

