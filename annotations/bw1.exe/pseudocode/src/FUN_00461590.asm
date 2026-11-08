; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461590(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004615b0
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 00461590
        ;   Label: FUN_00461590
    MOV EAX,ESP                         ; 00461593
    PUSH EAX                            ; 00461595
    MOV EDX,dword ptr [ESP + 0x34]      ; 00461596
    PUSH EDX                            ; 0046159a
    MOV ECX,dword ptr [ESP + 0x34]      ; 0046159b
    PUSH ECX                            ; 0046159f
    CALL FUN_004615b0                   ; 004615a0
        ;   XREF to: 004615b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004615b0()
    ADD ESP,0xc                         ; 004615a5
    ADD ESP,0x28                        ; 004615a8
    RET                                 ; 004615ab

