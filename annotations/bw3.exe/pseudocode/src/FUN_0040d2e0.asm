; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d2e0(undefined4 *param_1)
;
;
; XREF[20]:
;   FUN_00411b50 at 00411b61
;   FUN_00413200 at 00413211
;   FUN_00414460 at 00414465
;   FUN_00414480 at 00414485
;   FUN_004a76f0 at 004a7737
;   FUN_004a8650 at 004a8661
;   FUN_004a8680 at 004a869c
;   FUN_004a9e10 at 004a9e19
;   FUN_004b7ee0 at 004b7f29
;   FUN_004bfb50 at 004bfb62
;   ... and 10 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d2e0
        ;   Label: FUN_0040d2e0
    MOV dword ptr [EAX + 0x4],0x0       ; 0040d2e4
    MOV dword ptr [EAX + 0x8],0x0       ; 0040d2eb
    MOV dword ptr [EAX],0x0             ; 0040d2f2
    RET                                 ; 0040d2f8

