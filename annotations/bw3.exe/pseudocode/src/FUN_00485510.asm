; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00485510(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004831c0 at 004831d6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00485510
        ;   Label: FUN_00485510
    MOV dword ptr [EAX + 0x4],0x1       ; 00485514
    MOV dword ptr [EAX],0x0             ; 0048551b
    MOV dword ptr [EAX + 0x8],0x1       ; 00485521
    MOV dword ptr [EAX + 0x20],0x0      ; 00485528
    MOV dword ptr [EAX + 0xc],0x1       ; 0048552f
    MOV dword ptr [EAX + 0x10],0x0      ; 00485536
    MOV EDX,dword ptr [EAX + 0x20]      ; 0048553d
    MOV dword ptr [EAX + 0x1c],EDX      ; 00485540
    MOV dword ptr [EAX + 0x18],EDX      ; 00485543
    MOV dword ptr [EAX + 0x14],EDX      ; 00485546
    RET                                 ; 00485549

