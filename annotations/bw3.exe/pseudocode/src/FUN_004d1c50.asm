; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1c50(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0057b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1c50
        ;   Label: FUN_004d1c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d1c51
    PUSH dword ptr [ESP + 0xc]          ; 004d1c55
    PUSH EBX                            ; 004d1c59
    CALL FUN_0057b160                   ; 004d1c5a
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b160()
    MOV EAX,dword ptr [EBX + 0x594]     ; 004d1c5f
    MOV dword ptr [EBX + 0x594],0x0     ; 004d1c65
    ADD ESP,0x8                         ; 004d1c6f
    MOV dword ptr [EBX + 0x598],EAX     ; 004d1c72
    POP EBX                             ; 004d1c78
    RET                                 ; 004d1c79

