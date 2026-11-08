; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1a70(int *param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1a70
        ;   Label: FUN_005a1a70
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1a71
    PUSH EBX                            ; 005a1a75
    MOV EAX,dword ptr [EBX]             ; 005a1a76
    CALL dword ptr [EAX + 0x18]         ; 005a1a78
    ADD ESP,0x4                         ; 005a1a7b
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a1a7e
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1a82
    PUSH EBX                            ; 005a1a85
    MOV EAX,dword ptr [EBX]             ; 005a1a86
    CALL dword ptr [EAX + 0x14]         ; 005a1a88
    ADD ESP,0x4                         ; 005a1a8b
    POP EBX                             ; 005a1a8e
    RET                                 ; 005a1a8f

