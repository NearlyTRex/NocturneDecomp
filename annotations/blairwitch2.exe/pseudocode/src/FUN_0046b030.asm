; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b030(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[6]:
;   FUN_004dbd80 at 004dbfe1
;   FUN_004e1600 at 004e1710
;   FUN_0052fad0 at 0052fe2a
;   FUN_005342e0 at 00534318
;   FUN_005389b0 at 00538a23
;   FUN_0059bb60 at 0059bcb1
;
; Called Functions:
;   FUN_00449280
;   FUN_0046b060
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 0046b030
        ;   Label: FUN_0046b030
    MOV EDX,dword ptr [ESP + 0x30]      ; 0046b033
    PUSH EDX                            ; 0046b037
    LEA EAX,[ESP + 0x4]                 ; 0046b038
    PUSH EAX                            ; 0046b03c
    CALL FUN_00449280                   ; 0046b03d
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0046b042
    MOV EAX,ESP                         ; 0046b045
    PUSH EAX                            ; 0046b047
    MOV ECX,dword ptr [ESP + 0x30]      ; 0046b048
    PUSH ECX                            ; 0046b04c
    CALL FUN_0046b060                   ; 0046b04d
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b060()
    ADD ESP,0x8                         ; 0046b052
    ADD ESP,0x28                        ; 0046b055
    RET                                 ; 0046b058

