; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a8de0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004a8e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8de0
        ;   Label: FUN_004a8de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8de1
    PUSH EBX                            ; 004a8de5
    CALL FUN_004a8e00                   ; 004a8de6
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8e00()
    ADD ESP,0x4                         ; 004a8deb
    MOV EAX,EBX                         ; 004a8dee
    POP EBX                             ; 004a8df0
    RET                                 ; 004a8df1

