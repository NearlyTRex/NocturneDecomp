; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516d60(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_005168e0 at 00516944
;   FUN_00516960 at 005169a1
;   FUN_00517130 at 005171c4
;
; Called Functions:
;   FUN_00516cb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00516d60
        ;   Label: FUN_00516d60
    PUSH EAX                            ; 00516d64
    PUSH EAX                            ; 00516d65
    CALL FUN_00516cb0                   ; 00516d66
        ;   XREF to: 00516cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00516cb0()
    ADD ESP,0x8                         ; 00516d6b
    RET                                 ; 00516d6e

