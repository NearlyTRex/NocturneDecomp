; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00565730(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00563bb0 at 00563bce
;
; Called Functions:
;   FUN_00566fd0
;   FUN_00567180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565730
        ;   Label: FUN_00565730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00565731
    MOV EAX,dword ptr [ESP + 0xc]       ; 00565735
    PUSH EBX                            ; 00565739
    MOV dword ptr [EBX + 0x35ac],EAX    ; 0056573a
    CALL FUN_00566fd0                   ; 00565740
        ;   XREF to: 00566fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00566fd0()
    ADD ESP,0x4                         ; 00565745
    PUSH EBX                            ; 00565748
    CALL FUN_00567180                   ; 00565749
        ;   XREF to: 00567180 (UNCONDITIONAL_CALL)  ; undefined FUN_00567180()
    ADD ESP,0x4                         ; 0056574e
    POP EBX                             ; 00565751
    RET                                 ; 00565752

