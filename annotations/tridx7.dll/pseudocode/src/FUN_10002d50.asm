; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10002d50(void)
;
;
; XREF[2]:
;   APIDLLendScene at 10002d1c
;   FUN_100035b0 at 100037c6
;
; Referenced Globals:
;   undefined4 DAT_102268dc
;   undefined4 DAT_102268e4
;
; Called Functions:
;   FUN_10003f10
;
; *****************************************************************************

section .text

    MOV EAX,[0x102268e4]                ; 10002d50 | DAT_102268e4
        ;   Label: FUN_10002d50
    PUSH 0x226                          ; 10002d55
    MOV dword ptr [EAX],0x0             ; 10002d5a
    MOV ECX,dword ptr [0x102268dc]      ; 10002d60 | DAT_102268dc
    MOV dword ptr [ECX],0x1             ; 10002d66
    CALL FUN_10003f10                   ; 10002d6c
        ;   XREF to: 10003f10 (UNCONDITIONAL_CALL)  ; undefined FUN_10003f10()
    ADD ESP,0x4                         ; 10002d71
    MOV ECX,dword ptr [0x102268e4]      ; 10002d74 | DAT_102268e4
    MOV dword ptr [ECX],0xff            ; 10002d7a
    MOV EDX,dword ptr [0x102268dc]      ; 10002d80 | DAT_102268dc
    MOV dword ptr [EDX],0x0             ; 10002d86
    RET                                 ; 10002d8c

