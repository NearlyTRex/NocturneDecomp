; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00584e50(int param_1)
;
;
; Called Functions:
;   FUN_0044fc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00584e50
        ;   Label: FUN_00584e50
    ADD EAX,0x14                        ; 00584e54
    PUSH EAX                            ; 00584e57
    CALL FUN_0044fc80                   ; 00584e58
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00584e5d
    SUB EAX,0x14                        ; 00584e60
    RET                                 ; 00584e63

