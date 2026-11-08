; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041b130(int param_1)
;
;
; Called Functions:
;   FUN_004b7a30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b130
        ;   Label: FUN_0041b130
    ADD EAX,0xc                         ; 0041b134
    PUSH EAX                            ; 0041b137
    CALL FUN_004b7a30                   ; 0041b138
        ;   XREF to: 004b7a30 (UNCONDITIONAL_CALL)  ; undefined FUN_004b7a30()
    ADD ESP,0x4                         ; 0041b13d
    SUB EAX,0xc                         ; 0041b140
    RET                                 ; 0041b143

