; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a60(int *param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574a60
        ;   Label: FUN_00574a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574a61
    PUSH EBX                            ; 00574a65
    MOV EAX,dword ptr [EBX]             ; 00574a66
    CALL dword ptr [EAX + 0x18]         ; 00574a68
    ADD ESP,0x4                         ; 00574a6b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574a6e
    MOV dword ptr [EBX + 0x4],EAX       ; 00574a72
    PUSH EBX                            ; 00574a75
    MOV EAX,dword ptr [EBX]             ; 00574a76
    CALL dword ptr [EAX + 0x14]         ; 00574a78
    ADD ESP,0x4                         ; 00574a7b
    POP EBX                             ; 00574a7e
    RET                                 ; 00574a7f

