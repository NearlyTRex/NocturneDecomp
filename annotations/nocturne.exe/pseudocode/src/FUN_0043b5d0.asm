; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043b5d0(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_00411a10 at 00411a26
;   FUN_00494630 at 00494651
;   FUN_004cc0e0 at 004cc0f5
;   FUN_004f5d90 at 004f5db7
;   FUN_0054e5a0 at 0054e5ee
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043b5d0
        ;   Label: FUN_0043b5d0
    MOV dword ptr [EAX + 0x4],0x0       ; 0043b5d4
    MOV dword ptr [EAX + 0x8],0x1       ; 0043b5db
    MOV dword ptr [EAX],0x0             ; 0043b5e2
    RET                                 ; 0043b5e8

