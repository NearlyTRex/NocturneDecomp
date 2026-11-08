; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00556040(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_004b54a0
;   FUN_004e5cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556040
        ;   Label: FUN_00556040
    PUSH ESI                            ; 00556041
    MOV EDX,dword ptr [ESP + 0x10]      ; 00556042
    PUSH EDX                            ; 00556046
    PUSH 0x0                            ; 00556047
    MOV ECX,dword ptr [0x0061dca4]      ; 00556049 | DAT_0061dca4
    PUSH ECX                            ; 0055604f
    CALL FUN_004e5cd0                   ; 00556050
        ;   XREF to: 004e5cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5cd0()
    ADD ESP,0xc                         ; 00556055
    MOV EBX,dword ptr [ESP + 0x10]      ; 00556058
    PUSH EBX                            ; 0055605c
    PUSH 0x0                            ; 0055605d
    MOV ESI,dword ptr [0x0061c010]      ; 0055605f | DAT_0061c010
    PUSH ESI                            ; 00556065
    CALL FUN_004b54a0                   ; 00556066
        ;   XREF to: 004b54a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b54a0()
    ADD ESP,0xc                         ; 0055606b
    POP ESI                             ; 0055606e
    POP EBX                             ; 0055606f
    RET                                 ; 00556070

