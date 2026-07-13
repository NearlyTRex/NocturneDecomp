; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005459d0(int param_1)
;
;
; Called Functions:
;   FUN_00545920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005459d0
        ;   Label: FUN_005459d0
    PUSH EDX                            ; 005459d4
    CALL FUN_00545920                   ; 005459d5
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; undefined FUN_00545920()
    ADD ESP,0x4                         ; 005459da
    MOV EAX,dword ptr [ESP + 0x4]       ; 005459dd
    ADD EAX,0x48                        ; 005459e1
    RET                                 ; 005459e4

