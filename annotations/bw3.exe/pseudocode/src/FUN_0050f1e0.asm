; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050f1e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0050f230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f1e0
        ;   Label: FUN_0050f1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f1e1
    PUSH EBX                            ; 0050f1e5
    CALL FUN_0050f230                   ; 0050f1e6
        ;   XREF to: 0050f230 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f230()
    ADD ESP,0x4                         ; 0050f1eb
    MOV EAX,EBX                         ; 0050f1ee
    POP EBX                             ; 0050f1f0
    RET                                 ; 0050f1f1

