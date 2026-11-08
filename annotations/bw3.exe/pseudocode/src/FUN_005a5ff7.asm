; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a5ff7(void)
;
;
; XREF[2]:
;   FUN_005479f0 at 005479f5
;   FUN_00547a50 at 00547a55
;
; Called Functions:
;   FUN_005a6007
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005a5ff7
        ;   Label: FUN_005a5ff7
    CALL FUN_005a6007                   ; 005a5ffb
        ;   XREF to: 005a6007 (UNCONDITIONAL_CALL)  ; undefined FUN_005a6007()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a6000
    RET 0x4                             ; 005a6004

