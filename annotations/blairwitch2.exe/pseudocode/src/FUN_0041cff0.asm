; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041cff0(int param_1)
;
;
; Called Functions:
;   FUN_0041be70
;   FUN_0041d350
;   FUN_00449d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cff0
        ;   Label: FUN_0041cff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041cff1
    PUSH EBX                            ; 0041cff5
    CALL FUN_0041d350                   ; 0041cff6
        ;   XREF to: 0041d350 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d350()
    ADD ESP,0x4                         ; 0041cffb
    PUSH EBX                            ; 0041cffe
    CALL FUN_0041be70                   ; 0041cfff
        ;   XREF to: 0041be70 (UNCONDITIONAL_CALL)  ; undefined FUN_0041be70()
    ADD ESP,0x4                         ; 0041d004
    LEA EAX,[EBX + 0x7d8]               ; 0041d007
    PUSH EAX                            ; 0041d00d
    CALL FUN_00449d90                   ; 0041d00e
        ;   XREF to: 00449d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00449d90()
    ADD ESP,0x4                         ; 0041d013
    POP EBX                             ; 0041d016
    RET                                 ; 0041d017

