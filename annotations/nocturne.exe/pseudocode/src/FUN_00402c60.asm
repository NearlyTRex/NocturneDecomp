; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402c60(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00402c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402c60
        ;   Label: FUN_00402c60
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402c61
    PUSH EDX                            ; 00402c65
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402c66
    PUSH ECX                            ; 00402c6a
    MOV EBX,dword ptr [ESP + 0x18]      ; 00402c6b
    PUSH EBX                            ; 00402c6f
    CALL FUN_00402c20                   ; 00402c70
        ;   XREF to: 00402c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00402c20()
    ADD ESP,0xc                         ; 00402c75
    POP EBX                             ; 00402c78
    RET                                 ; 00402c79

