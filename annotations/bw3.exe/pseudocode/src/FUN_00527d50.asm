; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527d50(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0057b160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00527d50
        ;   Label: FUN_00527d50
    PUSH dword ptr [ESP + 0x8]          ; 00527d54
    PUSH EAX                            ; 00527d58
    MOV dword ptr [EAX + 0x598],0x1     ; 00527d59
    CALL FUN_0057b160                   ; 00527d63
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b160()
    ADD ESP,0x8                         ; 00527d68
    RET                                 ; 00527d6b

