; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f93b0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_0047dc40 at 0047df00
;   FUN_0047e870 at 0047eaa2
;   FUN_00483ea0 at 00483f3e
;   FUN_004840f0 at 004842a6
;   FUN_004f9340 at 004f936d
;
; Called Functions:
;   FUN_004f90d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f93b0
        ;   Label: FUN_004f93b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f93b1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f93b5
    PUSH ECX                            ; 004f93b9
    LEA EAX,[EDX + 0x1]                 ; 004f93ba
    PUSH EAX                            ; 004f93bd
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f93be
    PUSH EBX                            ; 004f93c2
    PUSH EDX                            ; 004f93c3
    CALL FUN_004f90d0                   ; 004f93c4
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f90d0()
    ADD ESP,0x10                        ; 004f93c9
    POP EBX                             ; 004f93cc
    RET                                 ; 004f93cd

