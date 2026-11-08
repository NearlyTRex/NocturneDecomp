; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc090(int param_1)
;
;
; XREF[1]:
;   FUN_004fbad0 at 004fbae7
;
; Called Functions:
;   FUN_004fc480
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc090
        ;   Label: FUN_004fc090
    MOV dword ptr [EAX + 0x4],0x0       ; 004fc094
    MOV dword ptr [EAX + 0x8],0x0       ; 004fc09b
    MOV dword ptr [EAX + 0x2c],0x0      ; 004fc0a2
    PUSH EAX                            ; 004fc0a9
    MOV dword ptr [EAX + 0x28],0xffffffff ; 004fc0aa
    CALL FUN_004fc480                   ; 004fc0b1
        ;   XREF to: 004fc480 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc480()
    ADD ESP,0x4                         ; 004fc0b6
    RET                                 ; 004fc0b9

