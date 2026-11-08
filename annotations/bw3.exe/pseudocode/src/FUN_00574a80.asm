; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a80(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574a80
        ;   Label: FUN_00574a80
    PUSH EDX                            ; 00574a84
    CALL FUN_005744a0                   ; 00574a85
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    MOV dword ptr [EAX],0x5e5b54        ; 00574a8a
    MOV dword ptr [EAX + 0x4],0x0       ; 00574a90
    MOV dword ptr [EAX + 0x8],0x0       ; 00574a97
    MOV dword ptr [EAX + 0xc],0x0       ; 00574a9e
    MOV dword ptr [EAX + 0x10],0x0      ; 00574aa5
    ADD ESP,0x4                         ; 00574aac
    MOV dword ptr [EAX + 0x14],0x1      ; 00574aaf
    RET                                 ; 00574ab6

