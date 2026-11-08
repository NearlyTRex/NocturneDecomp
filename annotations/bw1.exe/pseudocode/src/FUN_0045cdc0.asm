; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045cdc0(int param_1)
;
;
; Called Functions:
;   FUN_0040c5a0
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045cdc0
        ;   Label: FUN_0045cdc0
    ADD EAX,0x158                       ; 0045cdc4
    PUSH EAX                            ; 0045cdc9
    CALL FUN_00524770                   ; 0045cdca
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045cdcf
    ADD ESP,0x4                         ; 0045cdd2
    CMP EAX,0x24                        ; 0045cdd5
    JNZ 0x0045cde0                      ; 0045cdd8
        ;   XREF to: 0045cde0 (CONDITIONAL_JUMP)  ; LAB_0045cde0
    MOV EAX,0x1                         ; 0045cdda
    RET                                 ; 0045cddf
    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cde0
        ;   Label: LAB_0045cde0
    PUSH EDX                            ; 0045cde4
    CALL FUN_0040c5a0                   ; 0045cde5
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 0045cdea
    RET                                 ; 0045cded

