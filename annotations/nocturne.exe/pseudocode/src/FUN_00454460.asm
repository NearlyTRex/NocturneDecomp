; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454460(void)
;
;
; XREF[2]:
;   FUN_004c90e0 at 004c9352
;   FUN_004d9900 at 004d9905
;
; Referenced Globals:
;   undefined4 DAT_01abb658
;
; Called Functions:
;   FUN_00452f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454460
        ;   Label: FUN_00454460
    PUSH ESI                            ; 00454461
    MOV EBX,0x1abb65c                   ; 00454462
    LEA ESI,[EBX + 0x39800]             ; 00454467
    PUSH EBX                            ; 0045446d
        ;   Label: LAB_0045446d
    CALL FUN_00452f10                   ; 0045446e
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00452f10()
    ADD EBX,0x398                       ; 00454473
    ADD ESP,0x4                         ; 00454479
    CMP EBX,ESI                         ; 0045447c
    JNZ 0x0045446d                      ; 0045447e
        ;   XREF to: 0045446d (CONDITIONAL_JUMP)  ; LAB_0045446d
    XOR EDX,EDX                         ; 00454480
    MOV dword ptr [0x01abb658],EDX      ; 00454482 | DAT_01abb658
    POP ESI                             ; 00454488
    POP EBX                             ; 00454489
    RET                                 ; 0045448a

