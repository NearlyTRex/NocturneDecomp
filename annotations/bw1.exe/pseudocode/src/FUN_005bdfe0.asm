; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bdfe0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   FUN_0042f240
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bdfe0
        ;   Label: FUN_005bdfe0
    ADD EAX,0x158                       ; 005bdfe4
    PUSH EAX                            ; 005bdfe9
    CALL FUN_00524770                   ; 005bdfea
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bdfef
    ADD ESP,0x4                         ; 005bdff2
    CMP EAX,0xe                         ; 005bdff5
    JNZ 0x005be00b                      ; 005bdff8
        ;   XREF to: 005be00b (CONDITIONAL_JUMP)  ; LAB_005be00b
    MOV EAX,[0x0061f650]                ; 005bdffa | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 005bdfff | DAT_01d2d908
    JNZ 0x005be00b                      ; 005be006
        ;   XREF to: 005be00b (CONDITIONAL_JUMP)  ; LAB_005be00b
    XOR EAX,EAX                         ; 005be008
    RET                                 ; 005be00a
    MOV ECX,dword ptr [ESP + 0x4]       ; 005be00b
        ;   Label: LAB_005be00b
    PUSH ECX                            ; 005be00f
    CALL FUN_0042f240                   ; 005be010
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 005be015
    RET                                 ; 005be018

