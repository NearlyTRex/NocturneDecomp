; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004bb1a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004bb1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb1a0
        ;   Label: FUN_004bb1a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bb1a1
    PUSH EBX                            ; 004bb1a5
    CALL FUN_004bb1c0                   ; 004bb1a6
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb1c0()
    ADD ESP,0x4                         ; 004bb1ab
    MOV EAX,EBX                         ; 004bb1ae
    POP EBX                             ; 004bb1b0
    RET                                 ; 004bb1b1

