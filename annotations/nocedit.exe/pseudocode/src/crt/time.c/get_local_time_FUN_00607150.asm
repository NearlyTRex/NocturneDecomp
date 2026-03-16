; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_time_c_get_local_time_FUN_00607150(_tm *tm_output)
;
; Parameters:
; _tm *            Stack[0x4]:4   tm_output
;
; XREF[1]:
;   crt_time.c__time_FUN_006001f0 at 006001fb
;
; Referenced Globals:
;   GET_LOCAL_TIME_FUNC* g_GetLocalTimeFunc = 00211f32
;
; Called Functions:
;   GetLocalTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607150
        ;   Label: crt_time.c_get_local_time_FUN_00607150
    SUB ESP,0x10                        ; 00607151
    MOV EBX,dword ptr [ESP + 0x18]      ; 00607154
    MOV EAX,ESP                         ; 00607158
    PUSH EAX                            ; 0060715a
    CALL dword ptr CS:[0x6115a8]        ; 0060715b | g_GetLocalTimeFunc
    XOR EAX,EAX                         ; 00607162
    MOV AX,word ptr [ESP]               ; 00607164
    SUB EAX,0x76c                       ; 00607168
    MOV dword ptr [EBX + 0x14],EAX      ; 0060716d
    XOR EAX,EAX                         ; 00607170
    MOV AX,word ptr [ESP + 0x2]         ; 00607172
    DEC EAX                             ; 00607177
    MOV dword ptr [EBX + 0x10],EAX      ; 00607178
    XOR EAX,EAX                         ; 0060717b
    MOV AX,word ptr [ESP + 0x6]         ; 0060717d
    MOV dword ptr [EBX + 0xc],EAX       ; 00607182
    XOR EAX,EAX                         ; 00607185
    MOV AX,word ptr [ESP + 0x8]         ; 00607187
    MOV dword ptr [EBX + 0x8],EAX       ; 0060718c
    XOR EAX,EAX                         ; 0060718f
    MOV AX,word ptr [ESP + 0xa]         ; 00607191
    MOV dword ptr [EBX + 0x4],EAX       ; 00607196
    XOR EAX,EAX                         ; 00607199
    MOV AX,word ptr [ESP + 0xc]         ; 0060719b
    MOV dword ptr [EBX + 0x20],0xffffffff ; 006071a0
    MOV dword ptr [EBX],EAX             ; 006071a7
    XOR EAX,EAX                         ; 006071a9
    MOV AX,word ptr [ESP + 0xe]         ; 006071ab
    ADD ESP,0x10                        ; 006071b0
    POP EBX                             ; 006071b3
    RET                                 ; 006071b4

