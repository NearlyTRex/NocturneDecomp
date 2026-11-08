; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481a20(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00481a10 at 00481a15
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481a20
        ;   Label: FUN_00481a20
    MOV dword ptr [EAX + 0x8],0x0       ; 00481a24
    MOV dword ptr [EAX],0x629014        ; 00481a2b
    MOV dword ptr [EAX + 0xc],0x1       ; 00481a31
    MOV dword ptr [EAX + 0x10],0x1      ; 00481a38
    MOV dword ptr [EAX + 0x14],0x0      ; 00481a3f
    MOV dword ptr [EAX + 0x1c],0x0      ; 00481a46
    MOV dword ptr [EAX + 0x20],0x0      ; 00481a4d
    MOV dword ptr [EAX + 0x4],0x0       ; 00481a54
    RET                                 ; 00481a5b

