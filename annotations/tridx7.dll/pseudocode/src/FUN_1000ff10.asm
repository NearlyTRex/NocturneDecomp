; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000ff10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_1000e350 at 1000e466
;
; Called Functions:
;   FUN_1000fe60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 1000ff10
        ;   Label: FUN_1000ff10
    PUSH EAX                            ; 1000ff14
    CALL FUN_1000fe60                   ; 1000ff15
        ;   XREF to: 1000fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_1000fe60()
    ADD ESP,0x4                         ; 1000ff1a
    RET                                 ; 1000ff1d

