; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc2e0(int param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;   FUN_0043b690
;   FUN_004cc1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc2e0
        ;   Label: FUN_004cc2e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc2e1
    PUSH EBX                            ; 004cc2e5
    CALL FUN_00409fc0                   ; 004cc2e6
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 004cc2eb
    LEA EAX,[EBX + 0x150]               ; 004cc2ee
    PUSH EAX                            ; 004cc2f4
    LEA EAX,[EBX + 0x19c]               ; 004cc2f5
    PUSH EAX                            ; 004cc2fb
    CALL FUN_0043b690                   ; 004cc2fc
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b690()
    ADD ESP,0x8                         ; 004cc301
    PUSH EBX                            ; 004cc304
    CALL FUN_004cc1b0                   ; 004cc305
        ;   XREF to: 004cc1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc1b0()
    ADD ESP,0x4                         ; 004cc30a
    MOV dword ptr [EBX + 0x174],0x0     ; 004cc30d
    POP EBX                             ; 004cc317
    RET                                 ; 004cc318

