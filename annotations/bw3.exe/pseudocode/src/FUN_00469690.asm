; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00469690(int *param_1)
;
;
; XREF[1]:
;   FUN_00529210 at 00529265
;
; Called Functions:
;   FUN_004694f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00469690
        ;   Label: FUN_00469690
    MOV EAX,dword ptr [EDX + 0x4]       ; 00469694
    DEC EAX                             ; 00469697
    PUSH EAX                            ; 00469698
    MOV EAX,dword ptr [EDX]             ; 00469699
    DEC EAX                             ; 0046969b
    PUSH EAX                            ; 0046969c
    PUSH 0x0                            ; 0046969d
    PUSH 0x0                            ; 0046969f
    PUSH EDX                            ; 004696a1
    CALL FUN_004694f0                   ; 004696a2
        ;   XREF to: 004694f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004694f0()
    ADD ESP,0x14                        ; 004696a7
    RET                                 ; 004696aa

