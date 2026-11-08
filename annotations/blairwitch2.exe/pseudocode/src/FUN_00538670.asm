; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00538670(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00539c30 at 00539c98
;
; Called Functions:
;   FUN_005b9690
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00538670
        ;   Label: FUN_00538670
    MOV EDX,dword ptr [ESP + 0x8]       ; 00538671
    MOV EAX,dword ptr [EDX]             ; 00538675
    IMUL EAX,dword ptr [EDX + 0x4]      ; 00538677
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053867b
    PUSH ECX                            ; 0053867f
    PUSH 0x4                            ; 00538680
    PUSH EAX                            ; 00538682
    MOV ESI,dword ptr [EDX + 0x24]      ; 00538683
    PUSH ESI                            ; 00538686
    CALL FUN_005b9690                   ; 00538687
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9690()
    ADD ESP,0x10                        ; 0053868c
    POP ESI                             ; 0053868f
    RET                                 ; 00538690

