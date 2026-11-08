; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a27c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004a27e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a27c0
        ;   Label: FUN_004a27c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a27c1
    PUSH EBX                            ; 004a27c5
    CALL FUN_004a27e0                   ; 004a27c6
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a27e0()
    ADD ESP,0x4                         ; 004a27cb
    MOV EAX,EBX                         ; 004a27ce
    POP EBX                             ; 004a27d0
    RET                                 ; 004a27d1

