; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00457ba0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00457d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457ba0
        ;   Label: FUN_00457ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00457ba1
    PUSH EBX                            ; 00457ba5
    CALL FUN_00457d70                   ; 00457ba6
        ;   XREF to: 00457d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00457d70()
    ADD ESP,0x4                         ; 00457bab
    MOV EAX,EBX                         ; 00457bae
    POP EBX                             ; 00457bb0
    RET                                 ; 00457bb1

