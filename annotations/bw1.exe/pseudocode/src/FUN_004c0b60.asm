; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c0b60(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0045e7a0 at 0045e7c6
;
; Called Functions:
;   FUN_004c1830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0b60
        ;   Label: FUN_004c0b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c0b61
    PUSH EBX                            ; 004c0b65
    CALL FUN_004c1830                   ; 004c0b66
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1830()
    ADD ESP,0x4                         ; 004c0b6b
    MOV EAX,EBX                         ; 004c0b6e
    POP EBX                             ; 004c0b70
    RET                                 ; 004c0b71

