; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00452590(undefined1 *param_1)
;
;
; XREF[1]:
;   FUN_00435100 at 00435105
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00452590
        ;   Label: FUN_00452590
    MOV dword ptr [EAX + 0x104],0x0     ; 00452594
    MOV dword ptr [EAX + 0x10c],0x0     ; 0045259e
    MOV dword ptr [EAX + 0x108],0x0     ; 004525a8
    MOV dword ptr [EAX + 0x110],0x0     ; 004525b2
    MOV dword ptr [EAX + 0x114],0x0     ; 004525bc
    MOV dword ptr [EAX + 0x118],0x0     ; 004525c6
    MOV dword ptr [EAX + 0x11c],0x0     ; 004525d0
    MOV dword ptr [EAX + 0x120],0x0     ; 004525da
    MOV dword ptr [EAX + 0x244],0x0     ; 004525e4
    MOV dword ptr [EAX + 0x350],0x0     ; 004525ee
    MOV dword ptr [EAX + 0x100],0x0     ; 004525f8
    MOV dword ptr [EAX + 0x354],0x0     ; 00452602
    MOV dword ptr [EAX + 0x358],0x0     ; 0045260c
    MOV dword ptr [EAX + 0x35c],0x0     ; 00452616
    MOV dword ptr [EAX + 0x360],0x0     ; 00452620
    MOV byte ptr [EAX],0x0              ; 0045262a
    RET                                 ; 0045262d

