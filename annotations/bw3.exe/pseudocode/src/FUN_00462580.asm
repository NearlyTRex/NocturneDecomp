; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462580(int param_1)
;
;
; XREF[40]:
;   FUN_0040def0 at 0040defa
;   FUN_0040e670 at 0040e67c
;   FUN_0040eeb0 at 0040eebf
;   FUN_0040f500 at 0040f515
;   FUN_00411d70 at 00411d8e
;   FUN_004166d0 at 0041672e
;   FUN_0041f130 at 0041f149
;   FUN_004208d0 at 0042092e
;   FUN_00421060 at 004212cf
;   FUN_0042b0e0 at 0042b12e
;   ... and 30 more
;
; Called Functions:
;   FUN_00462420
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00462580
        ;   Label: FUN_00462580
    ADD EAX,0x78                        ; 00462584
    PUSH EAX                            ; 00462587
    CALL FUN_00462420                   ; 00462588
        ;   XREF to: 00462420 (UNCONDITIONAL_CALL)  ; undefined FUN_00462420()
    ADD ESP,0x4                         ; 0046258d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00462590
    MOV dword ptr [EDX + 0x178],EAX     ; 00462594
    RET                                 ; 0046259a

