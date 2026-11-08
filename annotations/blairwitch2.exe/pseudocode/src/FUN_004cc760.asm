; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cc760(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ce240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc760
        ;   Label: FUN_004cc760
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cc761
    PUSH EDX                            ; 004cc765
    CALL FUN_004ce240                   ; 004cc766
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce240()
    MOV EBX,EAX                         ; 004cc76b
    ADD EAX,0x2b4                       ; 004cc76d
    ADD ESP,0x4                         ; 004cc772
    MOV dword ptr [EAX + -0x4],0x5f7f84 ; 004cc775
    PUSH 0x5d9808                       ; 004cc77c
    MOV dword ptr [EAX + 0x2538c],0x0   ; 004cc781
    PUSH EAX                            ; 004cc78b

