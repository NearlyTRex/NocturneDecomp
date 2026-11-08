; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cc10(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[6]:
;   FUN_00412c50 at 00412da1
;   FUN_004dbe70 at 004dc102
;   FUN_005365c0 at 0053691a
;   FUN_0053af20 at 0053af58
;   FUN_0053f940 at 0054035a
;   FUN_00540cf0 at 00540dac
;
; Called Functions:
;   FUN_0045b550
;   FUN_0046cc40
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 0046cc10
        ;   Label: FUN_0046cc10
    MOV EDX,dword ptr [ESP + 0x30]      ; 0046cc13
    PUSH EDX                            ; 0046cc17
    LEA EAX,[ESP + 0x4]                 ; 0046cc18
    PUSH EAX                            ; 0046cc1c
    CALL FUN_0045b550                   ; 0046cc1d
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    ADD ESP,0x8                         ; 0046cc22
    MOV EAX,ESP                         ; 0046cc25
    PUSH EAX                            ; 0046cc27
    MOV ECX,dword ptr [ESP + 0x30]      ; 0046cc28
    PUSH ECX                            ; 0046cc2c
    CALL FUN_0046cc40                   ; 0046cc2d
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cc40()
    ADD ESP,0x8                         ; 0046cc32
    ADD ESP,0x28                        ; 0046cc35
    RET                                 ; 0046cc38

