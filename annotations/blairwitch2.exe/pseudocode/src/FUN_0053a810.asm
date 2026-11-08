; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053a810(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0053a830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a810
        ;   Label: FUN_0053a810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053a811
    PUSH EBX                            ; 0053a815
    CALL FUN_0053a830                   ; 0053a816
        ;   XREF to: 0053a830 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a830()
    ADD ESP,0x4                         ; 0053a81b
    MOV EAX,EBX                         ; 0053a81e
    POP EBX                             ; 0053a820
    RET                                 ; 0053a821

