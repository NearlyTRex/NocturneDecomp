; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477190(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00477190
        ;   Label: FUN_00477190
    MOV dword ptr [EAX + 0x4],0x0       ; 00477194
    MOV dword ptr [EAX + 0x8],0x0       ; 0047719b
    MOV byte ptr [EAX + 0x24],0x0       ; 004771a2
    MOV dword ptr [EAX + 0x1c],0x0      ; 004771a6
    MOV dword ptr [EAX + 0x20],0x0      ; 004771ad
    MOV dword ptr [EAX + 0xc],0x0       ; 004771b4
    MOV dword ptr [EAX],0x0             ; 004771bb
    MOV EDX,dword ptr [EAX + 0x1c]      ; 004771c1
    MOV dword ptr [EAX + 0x18],EDX      ; 004771c4
    MOV dword ptr [EAX + 0x14],EDX      ; 004771c7
    MOV dword ptr [EAX + 0x10],EDX      ; 004771ca
    RET                                 ; 004771cd

