; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a98f0(int param_1)
;
;
; XREF[1]:
;   FUN_004a9c80 at 004a9cab
;
; Called Functions:
;   FUN_00481f20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a98f0
        ;   Label: FUN_004a98f0
    ADD EAX,0x148                       ; 004a98f4
    PUSH EAX                            ; 004a98f9
    CALL FUN_00481f20                   ; 004a98fa
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00481f20()
    SUB EAX,0x148                       ; 004a98ff
    MOV byte ptr [EAX + 0x40],0x0       ; 004a9904
    MOV dword ptr [EAX + 0x144],0x0     ; 004a9908
    MOV dword ptr [EAX + 0x140],0xffffffff ; 004a9912
    MOV dword ptr [EAX + 0x158],0xffffffff ; 004a991c
    ADD ESP,0x4                         ; 004a9926
    MOV byte ptr [EAX],0x0              ; 004a9929
    RET                                 ; 004a992c

