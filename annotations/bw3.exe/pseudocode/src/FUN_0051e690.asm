; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051e690(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; Called Functions:
;   FUN_0042b8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e690
        ;   Label: FUN_0051e690
    PUSH ESI                            ; 0051e691
    PUSH EDI                            ; 0051e692
    SUB ESP,0xc                         ; 0051e693
    MOV EDI,ESP                         ; 0051e696
    MOV ESI,dword ptr [ESP + 0x24]      ; 0051e698
    MOV EAX,ESP                         ; 0051e69c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0051e69e
    PUSH EAX                            ; 0051e6a2
    MOVSD ES:EDI,ESI                    ; 0051e6a3
    MOVSD ES:EDI,ESI                    ; 0051e6a4
    MOVSD ES:EDI,ESI                    ; 0051e6a5
    PUSH EBX                            ; 0051e6a6
    MOV ESI,dword ptr [ESP + 0x24]      ; 0051e6a7
    XOR EDX,EDX                         ; 0051e6ab
    PUSH ESI                            ; 0051e6ad
    MOV dword ptr [ESP + 0xc],EDX       ; 0051e6ae
    MOV dword ptr [ESP + 0x14],EDX      ; 0051e6b2
    CALL FUN_0042b8d0                   ; 0051e6b6
        ;   XREF to: 0042b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b8d0()
    ADD ESP,0xc                         ; 0051e6bb
    ADD ESP,0xc                         ; 0051e6be
    POP EDI                             ; 0051e6c1
    POP ESI                             ; 0051e6c2
    POP EBX                             ; 0051e6c3
    RET                                 ; 0051e6c4

