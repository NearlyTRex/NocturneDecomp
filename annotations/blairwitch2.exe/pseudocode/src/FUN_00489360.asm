; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00489360(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00488b30 at 00488b35
;
; Called Functions:
;   FUN_00489380
;   FUN_004910b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489360
        ;   Label: FUN_00489360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00489361
    PUSH EBX                            ; 00489365
    CALL FUN_00489380                   ; 00489366
        ;   XREF to: 00489380 (UNCONDITIONAL_CALL)  ; undefined FUN_00489380()
    ADD ESP,0x4                         ; 0048936b
    PUSH EBX                            ; 0048936e
    CALL FUN_004910b0                   ; 0048936f
        ;   XREF to: 004910b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004910b0()
    ADD ESP,0x4                         ; 00489374
    MOV EAX,EBX                         ; 00489377
    POP EBX                             ; 00489379
    RET                                 ; 0048937a

