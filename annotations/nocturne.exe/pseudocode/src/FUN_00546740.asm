; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546740(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00527230
;   FUN_00554560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546740
        ;   Label: FUN_00546740
    MOV EAX,dword ptr [ESP + 0x8]       ; 00546741
    MOV EDX,dword ptr [EAX + 0x574]     ; 00546745
    PUSH EDX                            ; 0054674b
    CALL FUN_00527230                   ; 0054674c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 00546751
    MOV ECX,dword ptr [ESP + 0xc]       ; 00546754
    PUSH ECX                            ; 00546758
    MOV EBX,dword ptr [ESP + 0xc]       ; 00546759
    PUSH EBX                            ; 0054675d
    CALL FUN_00554560                   ; 0054675e
        ;   XREF to: 00554560 (UNCONDITIONAL_CALL)  ; undefined FUN_00554560()
    ADD ESP,0x8                         ; 00546763
    POP EBX                             ; 00546766
    RET                                 ; 00546767

