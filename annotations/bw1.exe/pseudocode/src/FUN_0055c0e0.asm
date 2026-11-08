; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055c0e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0055c100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c0e0
        ;   Label: FUN_0055c0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055c0e1
    PUSH EBX                            ; 0055c0e5
    CALL FUN_0055c100                   ; 0055c0e6
        ;   XREF to: 0055c100 (UNCONDITIONAL_CALL)  ; undefined FUN_0055c100()
    ADD ESP,0x4                         ; 0055c0eb
    MOV EAX,EBX                         ; 0055c0ee
    POP EBX                             ; 0055c0f0
    RET                                 ; 0055c0f1

