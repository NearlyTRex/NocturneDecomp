; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005afdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[5]:
;   FUN_004ad640 at 004adf10
;   FUN_004f0e10 at 004f1753
;   FUN_00570510 at 005708c5
;   FUN_00581910 at 00582714
;   FUN_005b1780 at 005b17b4
;
; Called Functions:
;   FUN_005afe20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afdf0
        ;   Label: FUN_005afdf0
    PUSH ESI                            ; 005afdf1
    MOV EDX,dword ptr [ESP + 0x20]      ; 005afdf2
    PUSH EDX                            ; 005afdf6
    PUSH dword ptr [ESP + 0x20]         ; 005afdf7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005afdfb
    PUSH dword ptr [ESP + 0x20]         ; 005afdff
    PUSH ECX                            ; 005afe03
    MOV EBX,dword ptr [ESP + 0x20]      ; 005afe04
    PUSH EBX                            ; 005afe08
    MOV ESI,dword ptr [ESP + 0x20]      ; 005afe09
    PUSH ESI                            ; 005afe0d
    CALL FUN_005afe20                   ; 005afe0e
        ;   XREF to: 005afe20 (UNCONDITIONAL_CALL)  ; undefined FUN_005afe20()
    ADD ESP,0x18                        ; 005afe13
    POP ESI                             ; 005afe16
    POP EBX                             ; 005afe17
    RET                                 ; 005afe18

