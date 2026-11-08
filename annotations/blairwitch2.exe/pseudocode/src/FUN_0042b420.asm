; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b420(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_004287f0 at 00428a6e
;   FUN_00429f20 at 0042a042
;   FUN_0042b300 at 0042b3fd
;
; Called Functions:
;   FUN_005882d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b420
        ;   Label: FUN_0042b420
    MOV EDX,dword ptr [EAX + 0x2814]    ; 0042b424
    PUSH EDX                            ; 0042b42a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042b42b
    PUSH ECX                            ; 0042b42f
    ADD EAX,0x20                        ; 0042b430
    PUSH EAX                            ; 0042b433
    CALL FUN_005882d0                   ; 0042b434
        ;   XREF to: 005882d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005882d0()
    ADD ESP,0xc                         ; 0042b439
    RET                                 ; 0042b43c

