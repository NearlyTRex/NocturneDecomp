; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499380(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_00494d20 at 00494d63
;   FUN_0049a620 at 0049a628
;   FUN_004bbcb0 at 004bbcba
;   FUN_005436d0 at 005436d8
;   FUN_0057b670 at 0057b682
;
; Referenced Globals:
;   undefined1* PTR_FUN_005ff814 = 004993a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00499380
        ;   Label: FUN_00499380
    MOV dword ptr [EAX],0x0             ; 00499384
    MOV dword ptr [EAX + 0x8],0x0       ; 0049938a
    MOV dword ptr [EAX + 0x4],0x0       ; 00499391
    MOV dword ptr [EAX + 0xc],0x5ff814  ; 00499398 | PTR_FUN_005ff814
    RET                                 ; 0049939f

