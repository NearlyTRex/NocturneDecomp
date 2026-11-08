; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045bfe0(int param_1)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045bfe0
        ;   Label: FUN_0045bfe0
    ADD EAX,0x158                       ; 0045bfe4
    PUSH EAX                            ; 0045bfe9
    CALL FUN_00524770                   ; 0045bfea
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045bfef
    ADD ESP,0x4                         ; 0045bff2
    CMP EAX,0x24                        ; 0045bff5
    JNZ 0x0045c00b                      ; 0045bff8
        ;   XREF to: 0045c00b (CONDITIONAL_JUMP)  ; LAB_0045c00b
    MOV EAX,[0x0061f650]                ; 0045bffa | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 0045bfff | DAT_01d2d908
    JNZ 0x0045c00b                      ; 0045c006
        ;   XREF to: 0045c00b (CONDITIONAL_JUMP)  ; LAB_0045c00b
    XOR EAX,EAX                         ; 0045c008
    RET                                 ; 0045c00a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0045c00b
        ;   Label: LAB_0045c00b
    PUSH ECX                            ; 0045c00f
    CALL FUN_0042f240                   ; 0045c010
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 0045c015
    RET                                 ; 0045c018

