; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574470(int *param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574470
        ;   Label: FUN_00574470
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574471
    PUSH EBX                            ; 00574475
    MOV EAX,dword ptr [EBX]             ; 00574476
    CALL dword ptr [EAX + 0x24]         ; 00574478
    MOV dword ptr [EBX + 0xc],0x0       ; 0057447b
    ADD ESP,0x4                         ; 00574482
    MOV dword ptr [EBX + 0x10],0x1      ; 00574485
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057448c
    MOV dword ptr [EBX + 0x4],EAX       ; 00574490
    MOV EAX,dword ptr [ESP + 0x10]      ; 00574493
    MOV dword ptr [EBX + 0x8],EAX       ; 00574497
    POP EBX                             ; 0057449a
    RET                                 ; 0057449b

