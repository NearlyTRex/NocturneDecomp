; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408ae0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   FUN_00408790 at 00408817
;   FUN_00408a80 at 00408a9a
;   FUN_00409e70 at 00409ea9
;   FUN_004154f0 at 00415571
;   FUN_004162b0 at 004163ff
;   FUN_00416d70 at 00417055
;   FUN_0041c090 at 0041c368
;   FUN_0041ce90 at 0041ceca
;   FUN_0041dbe0 at 0041e613
;   FUN_00423a60 at 00424102
;   ... and 29 more
;
; Called Functions:
;   FUN_0040d0c0
;   FUN_00449280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ae0
        ;   Label: FUN_00408ae0
    SUB ESP,0x4                         ; 00408ae1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00408ae4
    PUSH dword ptr [EBX + 0x30]         ; 00408ae8
    CALL FUN_0040d0c0                   ; 00408aeb
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x4],EAX       ; 00408af0
    FLD float ptr [ESP + 0x4]           ; 00408af4
    ADD ESP,0x4                         ; 00408af8
    PUSH dword ptr [EBX + 0x38]         ; 00408afb
    FSTP float ptr [EBX + 0x30]         ; 00408afe
    CALL FUN_0040d0c0                   ; 00408b01
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x4],EAX       ; 00408b06
    FLD float ptr [ESP + 0x4]           ; 00408b0a
    ADD ESP,0x4                         ; 00408b0e
    PUSH dword ptr [EBX + 0x34]         ; 00408b11
    FSTP float ptr [EBX + 0x38]         ; 00408b14
    CALL FUN_0040d0c0                   ; 00408b17
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x4],EAX       ; 00408b1c
    FLD float ptr [ESP + 0x4]           ; 00408b20
    ADD ESP,0x4                         ; 00408b24
    LEA EAX,[EBX + 0x30]                ; 00408b27
    PUSH EAX                            ; 00408b2a
    ADD EBX,0x3c                        ; 00408b2b
    PUSH EBX                            ; 00408b2e
    FSTP float ptr [EBX + -0x8]         ; 00408b2f
    CALL FUN_00449280                   ; 00408b32
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 00408b37
    ADD ESP,0x4                         ; 00408b3a
    POP EBX                             ; 00408b3d
    RET                                 ; 00408b3e

