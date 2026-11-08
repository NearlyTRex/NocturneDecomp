; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049c9b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0049a710 at 0049a753
;
; Called Functions:
;   FUN_0049c9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c9b0
        ;   Label: FUN_0049c9b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049c9b1
    PUSH EBX                            ; 0049c9b5
    CALL FUN_0049c9d0                   ; 0049c9b6
        ;   XREF to: 0049c9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c9d0()
    ADD ESP,0x4                         ; 0049c9bb
    MOV EAX,EBX                         ; 0049c9be
    POP EBX                             ; 0049c9c0
    RET                                 ; 0049c9c1

