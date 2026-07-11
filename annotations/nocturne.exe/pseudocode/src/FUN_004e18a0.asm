; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e18a0(int *param_1)
;
;
; XREF[2]:
;   FUN_00428710 at 0042872f
;   FUN_004e22b0 at 004e23d4
;
; Called Functions:
;   FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e18a0
        ;   Label: FUN_004e18a0
    PUSH EDX                            ; 004e18a4
    CALL FUN_004e1660                   ; 004e18a5
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e18aa
    ADD EAX,EAX                         ; 004e18ad
    MOV EDX,EAX                         ; 004e18af
    SHL EAX,0x4                         ; 004e18b1
    ADD ESP,0x4                         ; 004e18b4
    SUB EAX,EDX                         ; 004e18b7
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e18b9
    MOV EDX,dword ptr [EDX]             ; 004e18bd
    ADD EDX,0x4                         ; 004e18bf
    ADD EAX,EDX                         ; 004e18c2
    RET                                 ; 004e18c4

