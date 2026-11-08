; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d3210(int param_1)
;
;
; XREF[5]:
;   FUN_004c07b0 at 004c2845
;   FUN_004d4520 at 004d453b
;   FUN_004d4900 at 004d491f
;   FUN_00518cd0 at 0051b530
;   FUN_00525a20 at 00525a44
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d3210
        ;   Label: FUN_004d3210
    MOV dword ptr [EAX + 0x20b6c],0x0   ; 004d3214
    MOV dword ptr [EAX + 0x20b70],0x0   ; 004d321e
    MOV dword ptr [EAX + 0x20b7c],0x7149f2ca ; 004d3228
    MOV dword ptr [EAX + 0x20b78],0x0   ; 004d3232
    MOV dword ptr [EAX + 0x20b68],0x0   ; 004d323c
    RET                                 ; 004d3246

