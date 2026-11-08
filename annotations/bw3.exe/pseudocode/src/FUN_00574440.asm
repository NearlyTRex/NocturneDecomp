; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574440(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00574150 at 0057418e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574440
        ;   Label: FUN_00574440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574441
    PUSH EBX                            ; 00574445
    MOV EAX,dword ptr [EBX]             ; 00574446
    CALL dword ptr [EAX + 0x24]         ; 00574448
    MOV dword ptr [EBX + 0xc],0x0       ; 0057444b
    ADD ESP,0x4                         ; 00574452
    MOV dword ptr [EBX + 0x10],0x0      ; 00574455
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057445c
    MOV dword ptr [EBX + 0x4],EAX       ; 00574460
    MOV EAX,dword ptr [ESP + 0x10]      ; 00574463
    MOV dword ptr [EBX + 0x8],EAX       ; 00574467
    POP EBX                             ; 0057446a
    RET                                 ; 0057446b

