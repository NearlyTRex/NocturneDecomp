; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00440bf0(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_00441e70 at 00441e82
;   FUN_00441ed0 at 00441ee2
;   FUN_0044f750 at 0044fd02
;   FUN_004bda10 at 004bde0f
;   FUN_004bdfb0 at 004be391
;
; Called Functions:
;   FUN_00440c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440bf0
        ;   Label: FUN_00440bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00440bf1
    PUSH EBX                            ; 00440bf5
    CALL FUN_00440c10                   ; 00440bf6
        ;   XREF to: 00440c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00440c10()
    ADD ESP,0x4                         ; 00440bfb
    MOV EAX,EBX                         ; 00440bfe
    POP EBX                             ; 00440c00
    RET                                 ; 00440c01

