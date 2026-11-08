; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460490(undefined1 *param_1)
;
;
; XREF[3]:
;   FUN_0043c220 at 0043c225
;   FUN_004f9410 at 004f9418
;   FUN_005325b0 at 00532603
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00460490
        ;   Label: FUN_00460490
    MOV dword ptr [EAX + 0x104],0x0     ; 00460494
    MOV dword ptr [EAX + 0x10c],0x0     ; 0046049e
    MOV dword ptr [EAX + 0x108],0x0     ; 004604a8
    MOV dword ptr [EAX + 0x110],0x0     ; 004604b2
    MOV dword ptr [EAX + 0x114],0x0     ; 004604bc
    MOV dword ptr [EAX + 0x118],0x0     ; 004604c6
    MOV dword ptr [EAX + 0x11c],0x0     ; 004604d0
    MOV dword ptr [EAX + 0x120],0x0     ; 004604da
    MOV dword ptr [EAX + 0x244],0x0     ; 004604e4
    MOV dword ptr [EAX + 0x350],0x0     ; 004604ee
    MOV dword ptr [EAX + 0x100],0x0     ; 004604f8
    MOV dword ptr [EAX + 0x354],0x0     ; 00460502
    MOV dword ptr [EAX + 0x358],0x0     ; 0046050c
    MOV dword ptr [EAX + 0x35c],0x0     ; 00460516
    MOV dword ptr [EAX + 0x360],0x0     ; 00460520
    MOV byte ptr [EAX],0x0              ; 0046052a
    RET                                 ; 0046052d

