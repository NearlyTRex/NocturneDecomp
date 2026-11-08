; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521600(int param_1)
;
;
; Called Functions:
;   FUN_00480d40
;   FUN_00521630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521600
        ;   Label: FUN_00521600
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521601
    PUSH EBX                            ; 00521605
    CALL FUN_00521630                   ; 00521606
        ;   XREF to: 00521630 (UNCONDITIONAL_CALL)  ; undefined FUN_00521630()
    ADD ESP,0x4                         ; 0052160b
    PUSH 0x0                            ; 0052160e
    ADD EBX,0x34                        ; 00521610
    PUSH EBX                            ; 00521613
    CALL FUN_00480d40                   ; 00521614
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d40()
    ADD ESP,0x8                         ; 00521619
    SUB EAX,0x34                        ; 0052161c
    POP EBX                             ; 0052161f
    RET                                 ; 00521620

