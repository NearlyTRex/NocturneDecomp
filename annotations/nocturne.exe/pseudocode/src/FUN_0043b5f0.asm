; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043b5f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0043b7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b5f0
        ;   Label: FUN_0043b5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b5f1
    PUSH EBX                            ; 0043b5f5
    CALL FUN_0043b7c0                   ; 0043b5f6
        ;   XREF to: 0043b7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b7c0()
    ADD ESP,0x4                         ; 0043b5fb
    MOV EAX,EBX                         ; 0043b5fe
    POP EBX                             ; 0043b600
    RET                                 ; 0043b601

