; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c0b40(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0045e000 at 0045e0c4
;
; Called Functions:
;   FUN_004c0b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0b40
        ;   Label: FUN_004c0b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c0b41
    PUSH EBX                            ; 004c0b45
    CALL FUN_004c0b80                   ; 004c0b46
        ;   XREF to: 004c0b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004c0b80()
    ADD ESP,0x4                         ; 004c0b4b
    MOV EAX,EBX                         ; 004c0b4e
    POP EBX                             ; 004c0b50
    RET                                 ; 004c0b51

