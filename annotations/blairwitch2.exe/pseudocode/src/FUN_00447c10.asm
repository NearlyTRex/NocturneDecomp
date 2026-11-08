; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00447c10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00447c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447c10
        ;   Label: FUN_00447c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447c11
    PUSH EBX                            ; 00447c15
    CALL FUN_00447c30                   ; 00447c16
        ;   XREF to: 00447c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00447c30()
    ADD ESP,0x4                         ; 00447c1b
    MOV EAX,EBX                         ; 00447c1e
    POP EBX                             ; 00447c20
    RET                                 ; 00447c21

