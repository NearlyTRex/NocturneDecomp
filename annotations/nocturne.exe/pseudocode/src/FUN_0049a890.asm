; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a890(int param_1)
;
;
; XREF[10]:
;   FUN_0049da10 at 0049dd87
;   FUN_004a57c0 at 004a5d4b
;   FUN_004a6010 at 004a6505
;   FUN_004a6a10 at 004a6a58
;   FUN_004a6e90 at 004a6fc7
;   FUN_004d0080 at 004d009a
;   FUN_004d0d20 at 004d0d3f
;   FUN_004d12e0 at 004d12ff
;   FUN_004d21c0 at 004d21e4
;   FUN_004d23d0 at 004d2498
;
; Called Functions:
;   FUN_00558a30
;
; *****************************************************************************

section .text

    CALL FUN_00558a30                   ; 0049a890
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00558a30()
        ;   Label: FUN_0049a890
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049a895
    MOV dword ptr [EDX + 0x25c],EAX     ; 0049a899
    RET                                 ; 0049a89f

