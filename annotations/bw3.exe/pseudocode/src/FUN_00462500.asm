; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00462500(int param_1)
;
;
; XREF[36]:
;   FUN_0040de60 at 0040de76
;   FUN_0040e5c0 at 0040e5d6
;   FUN_0040ede0 at 0040ee02
;   FUN_0040f4a0 at 0040f4b4
;   FUN_00411b50 at 00411b82
;   FUN_00416da0 at 00416da8
;   FUN_0041efe0 at 0041eff4
;   FUN_0042ab80 at 0042ab85
;   FUN_00445bd0 at 00445be4
;   FUN_00463ab0 at 00463ac6
;   ... and 26 more
;
; Called Functions:
;   FUN_00462520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462500
        ;   Label: FUN_00462500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00462501
    MOV byte ptr [EBX + 0x78],0x0       ; 00462505
    PUSH EBX                            ; 00462509
    MOV dword ptr [EBX + 0x178],0x0     ; 0046250a
    CALL FUN_00462520                   ; 00462514
        ;   XREF to: 00462520 (UNCONDITIONAL_CALL)  ; undefined FUN_00462520()
    ADD ESP,0x4                         ; 00462519
    MOV EAX,EBX                         ; 0046251c
    POP EBX                             ; 0046251e
    RET                                 ; 0046251f

