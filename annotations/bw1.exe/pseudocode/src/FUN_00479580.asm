; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[22]:
;   FUN_004795e0 at 00479612
;   FUN_004796b0 at 004796d6
;   FUN_00479770 at 004797a8
;   FUN_00499c80 at 00499dbc
;   FUN_00499ed0 at 00499f5c
;   FUN_0049a0d0 at 0049a15c
;   FUN_0049a480 at 0049a4b6
;   FUN_004a70d0 at 004a80d8
;   FUN_004ba130 at 004ba200
;   FUN_004baa40 at 004baa81
;   ... and 12 more
;
; Called Functions:
;   FUN_005c2238
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479580
        ;   Label: FUN_00479580
    PUSH ESI                            ; 00479581
    PUSH EDI                            ; 00479582
    MOV EDX,dword ptr [ESP + 0x20]      ; 00479583
    PUSH EDX                            ; 00479587
    MOV ECX,dword ptr [ESP + 0x20]      ; 00479588
    PUSH ECX                            ; 0047958c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047958d
    PUSH EBX                            ; 00479591
    MOV ESI,dword ptr [ESP + 0x20]      ; 00479592
    PUSH ESI                            ; 00479596
    MOV EDI,dword ptr [ESP + 0x20]      ; 00479597
    PUSH EDI                            ; 0047959b
    CALL FUN_005c2238                   ; 0047959c
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2238()
    ADD ESP,0x14                        ; 004795a1
    POP EDI                             ; 004795a4
    POP ESI                             ; 004795a5
    POP EBX                             ; 004795a6
    RET                                 ; 004795a7

