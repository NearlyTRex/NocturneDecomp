; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a19d0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004a11a0 at 004a11a5
;
; Called Functions:
;   FUN_004a19f0
;   FUN_004a9a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a19d0
        ;   Label: FUN_004a19d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a19d1
    PUSH EBX                            ; 004a19d5
    CALL FUN_004a19f0                   ; 004a19d6
        ;   XREF to: 004a19f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a19f0()
    ADD ESP,0x4                         ; 004a19db
    PUSH EBX                            ; 004a19de
    CALL FUN_004a9a00                   ; 004a19df
        ;   XREF to: 004a9a00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9a00()
    ADD ESP,0x4                         ; 004a19e4
    MOV EAX,EBX                         ; 004a19e7
    POP EBX                             ; 004a19e9
    RET                                 ; 004a19ea

