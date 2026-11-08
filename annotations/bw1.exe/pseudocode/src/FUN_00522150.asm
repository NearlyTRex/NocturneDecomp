; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00522150(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00522170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522150
        ;   Label: FUN_00522150
    MOV EBX,dword ptr [ESP + 0x8]       ; 00522151
    PUSH EBX                            ; 00522155
    CALL FUN_00522170                   ; 00522156
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; undefined FUN_00522170()
    ADD ESP,0x4                         ; 0052215b
    MOV EAX,EBX                         ; 0052215e
    POP EBX                             ; 00522160
    RET                                 ; 00522161

