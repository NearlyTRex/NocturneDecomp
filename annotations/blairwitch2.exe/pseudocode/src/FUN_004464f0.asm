; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004464f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004466c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004464f0
        ;   Label: FUN_004464f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004464f1
    PUSH EBX                            ; 004464f5
    CALL FUN_004466c0                   ; 004464f6
        ;   XREF to: 004466c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004466c0()
    ADD ESP,0x4                         ; 004464fb
    MOV EAX,EBX                         ; 004464fe
    POP EBX                             ; 00446500
    RET                                 ; 00446501

