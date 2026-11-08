; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004596a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004596c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004596a0
        ;   Label: FUN_004596a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004596a1
    PUSH EBX                            ; 004596a5
    CALL FUN_004596c0                   ; 004596a6
        ;   XREF to: 004596c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004596c0()
    ADD ESP,0x4                         ; 004596ab
    MOV EAX,EBX                         ; 004596ae
    POP EBX                             ; 004596b0
    RET                                 ; 004596b1

