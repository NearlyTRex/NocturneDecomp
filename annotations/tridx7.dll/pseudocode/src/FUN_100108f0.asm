; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100108f0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_10010870
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 100108f0
        ;   Label: FUN_100108f0
    MOV ECX,dword ptr [ESP + 0x4]       ; 100108f4
    PUSH EAX                            ; 100108f8
    PUSH ECX                            ; 100108f9
    CALL FUN_10010870                   ; 100108fa
        ;   XREF to: 10010870 (UNCONDITIONAL_CALL)  ; undefined FUN_10010870()
    ADD ESP,0x8                         ; 100108ff
    RET                                 ; 10010902

