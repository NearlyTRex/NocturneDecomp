; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00473cd0(void)
;
;
; Called Functions:
;   FUN_00473e90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00473cd0
        ;   Label: FUN_00473cd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00473cd4
    PUSH EDX                            ; 00473cd8
    MOV ECX,dword ptr [EAX]             ; 00473cd9
    PUSH ECX                            ; 00473cdb
    PUSH EAX                            ; 00473cdc
    CALL FUN_00473e90                   ; 00473cdd
        ;   XREF to: 00473e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00473e90()
    ADD ESP,0xc                         ; 00473ce2
    RET                                 ; 00473ce5

