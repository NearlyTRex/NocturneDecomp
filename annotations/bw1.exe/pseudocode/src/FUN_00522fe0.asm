; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522fe0(int param_1)
;
;
; XREF[1]:
;   FUN_00522fc0 at 00522fc5
;
; Called Functions:
;   FUN_00522170
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00522fe0
        ;   Label: FUN_00522fe0
    PUSH EDX                            ; 00522fe4
    CALL FUN_00522170                   ; 00522fe5
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; undefined FUN_00522170()
    ADD ESP,0x4                         ; 00522fea
    MOV EAX,dword ptr [ESP + 0x4]       ; 00522fed
    ADD EAX,0x608                       ; 00522ff1
    PUSH EAX                            ; 00522ff6
    CALL FUN_00522170                   ; 00522ff7
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; undefined FUN_00522170()
    ADD ESP,0x4                         ; 00522ffc
    RET                                 ; 00522fff

