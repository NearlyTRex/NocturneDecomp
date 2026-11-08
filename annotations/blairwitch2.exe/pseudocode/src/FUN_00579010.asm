; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00579010(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0050b320 at 0050b32c
;
; Called Functions:
;   FUN_00579360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579010
        ;   Label: FUN_00579010
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579011
    PUSH EBX                            ; 00579015
    CALL FUN_00579360                   ; 00579016
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; undefined FUN_00579360()
    ADD ESP,0x4                         ; 0057901b
    MOV EAX,EBX                         ; 0057901e
    POP EBX                             ; 00579020
    RET                                 ; 00579021

