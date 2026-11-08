; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059ccc0(int param_1)
;
;
; Called Functions:
;   FUN_00589b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059ccc0
        ;   Label: FUN_0059ccc0
    PUSH EDX                            ; 0059ccc4
    CALL FUN_00589b50                   ; 0059ccc5
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00589b50()
    ADD ESP,0x4                         ; 0059ccca
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059cccd
    MOV dword ptr [EAX + 0xfc],0x1      ; 0059ccd1
    RET                                 ; 0059ccdb

