; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046ea40(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; Called Functions:
;   FUN_0042cbe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ea40
        ;   Label: FUN_0046ea40
    PUSH ESI                            ; 0046ea41
    PUSH EDI                            ; 0046ea42
    SUB ESP,0xc                         ; 0046ea43
    MOV EDI,ESP                         ; 0046ea46
    MOV ESI,dword ptr [ESP + 0x24]      ; 0046ea48
    MOV EAX,ESP                         ; 0046ea4c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046ea4e
    PUSH EAX                            ; 0046ea52
    MOVSD ES:EDI,ESI                    ; 0046ea53
    MOVSD ES:EDI,ESI                    ; 0046ea54
    MOVSD ES:EDI,ESI                    ; 0046ea55
    PUSH EBX                            ; 0046ea56
    MOV ESI,dword ptr [ESP + 0x24]      ; 0046ea57
    XOR EDX,EDX                         ; 0046ea5b
    PUSH ESI                            ; 0046ea5d
    MOV dword ptr [ESP + 0xc],EDX       ; 0046ea5e
    MOV dword ptr [ESP + 0x14],EDX      ; 0046ea62
    CALL FUN_0042cbe0                   ; 0046ea66
        ;   XREF to: 0042cbe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042cbe0()
    ADD ESP,0xc                         ; 0046ea6b
    ADD ESP,0xc                         ; 0046ea6e
    POP EDI                             ; 0046ea71
    POP ESI                             ; 0046ea72
    POP EBX                             ; 0046ea73
    RET                                 ; 0046ea74

