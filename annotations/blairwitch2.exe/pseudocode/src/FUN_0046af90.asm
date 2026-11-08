; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046af90(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0057b860 at 0057b935
;
; Called Functions:
;   FUN_004ea360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046af90
        ;   Label: FUN_0046af90
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046af91
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046af95
    PUSH EDX                            ; 0046af98
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046af99
    PUSH ECX                            ; 0046af9c
    MOV EBX,dword ptr [EAX]             ; 0046af9d
    PUSH EBX                            ; 0046af9f
    CALL FUN_004ea360                   ; 0046afa0
        ;   XREF to: 004ea360 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea360()
    ADD ESP,0xc                         ; 0046afa5
    POP EBX                             ; 0046afa8
    RET                                 ; 0046afa9

