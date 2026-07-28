; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_time_c_get_local_time_FUN_00572b00(_tm *tm_output)
;
; Parameters:
; _tm *            Stack[0x4]:4   tm_output
;
; XREF[1]:
;   crt_time.c__time_FUN_00570a30 at 00570a3b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572b00
        ;   Label: crt_time.c_get_local_time_FUN_00572b00
    SUB ESP,0x10                        ; 00572b01
    MOV EBX,dword ptr [ESP + 0x18]      ; 00572b04
    MOV EAX,ESP                         ; 00572b08
    PUSH EAX                            ; 00572b0a
    CALL dword ptr CS:[0x575520]        ; 00572b0b
    XOR EAX,EAX                         ; 00572b12
    MOV AX,word ptr [ESP]               ; 00572b14
    SUB EAX,0x76c                       ; 00572b18
    MOV dword ptr [EBX + 0x14],EAX      ; 00572b1d
    XOR EAX,EAX                         ; 00572b20
    MOV AX,word ptr [ESP + 0x2]         ; 00572b22
    DEC EAX                             ; 00572b27
    MOV dword ptr [EBX + 0x10],EAX      ; 00572b28
    XOR EAX,EAX                         ; 00572b2b
    MOV AX,word ptr [ESP + 0x6]         ; 00572b2d
    MOV dword ptr [EBX + 0xc],EAX       ; 00572b32
    XOR EAX,EAX                         ; 00572b35
    MOV AX,word ptr [ESP + 0x8]         ; 00572b37
    MOV dword ptr [EBX + 0x8],EAX       ; 00572b3c
    XOR EAX,EAX                         ; 00572b3f
    MOV AX,word ptr [ESP + 0xa]         ; 00572b41
    MOV dword ptr [EBX + 0x4],EAX       ; 00572b46
    XOR EAX,EAX                         ; 00572b49
    MOV AX,word ptr [ESP + 0xc]         ; 00572b4b
    MOV dword ptr [EBX + 0x20],0xffffffff ; 00572b50
    MOV dword ptr [EBX],EAX             ; 00572b57
    XOR EAX,EAX                         ; 00572b59
    MOV AX,word ptr [ESP + 0xe]         ; 00572b5b
    ADD ESP,0x10                        ; 00572b60
    POP EBX                             ; 00572b63
    RET                                 ; 00572b64

