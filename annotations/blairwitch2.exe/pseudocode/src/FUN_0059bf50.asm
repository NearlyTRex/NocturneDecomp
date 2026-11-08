; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059bf50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059ab30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059bf50
        ;   Label: FUN_0059bf50
    PUSH EDX                            ; 0059bf54
    CALL FUN_0059ab30                   ; 0059bf55
        ;   XREF to: 0059ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ab30()
    ADD ESP,0x4                         ; 0059bf5a
    MOV dword ptr [EAX],0x5fe584        ; 0059bf5d
    RET                                 ; 0059bf63

