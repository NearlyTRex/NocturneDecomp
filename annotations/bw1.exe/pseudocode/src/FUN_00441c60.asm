; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00441c60(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_0042c080 at 0042c0a8
;   FUN_00591f10 at 00591f34
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441c60
        ;   Label: FUN_00441c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441c61
    PUSH 0x190                          ; 00441c65
    PUSH 0x0                            ; 00441c6a
    LEA EAX,[EBX + 0x4]                 ; 00441c6c
    PUSH EAX                            ; 00441c6f
    MOV dword ptr [EBX],0x0             ; 00441c70
    CALL FUN_005bfb70                   ; 00441c76
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 00441c7b
    PUSH 0x28                           ; 00441c7e
    PUSH 0x0                            ; 00441c80
    LEA EAX,[EBX + 0x194]               ; 00441c82
    PUSH EAX                            ; 00441c88
    CALL FUN_005bfb70                   ; 00441c89
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 00441c8e
    MOV EAX,EBX                         ; 00441c91
    POP EBX                             ; 00441c93
    RET                                 ; 00441c94

