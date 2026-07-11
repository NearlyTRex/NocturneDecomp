; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00456c00(int param_1)
;
;
; XREF[2]:
;   FUN_004746b0 at 004747e9
;   FUN_004748b0 at 004749dc
;
; Called Functions:
;   FUN_00456d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456c00
        ;   Label: FUN_00456c00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456c01
    PUSH EBX                            ; 00456c05
    MOV dword ptr [EBX + 0x10c],0x0     ; 00456c06
    CALL FUN_00456d80                   ; 00456c10
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00456d80()
    ADD ESP,0x4                         ; 00456c15
    MOV EAX,EBX                         ; 00456c18
    POP EBX                             ; 00456c1a
    RET                                 ; 00456c1b

