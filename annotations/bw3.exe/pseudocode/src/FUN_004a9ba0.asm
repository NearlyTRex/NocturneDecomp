; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a9ba0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004a9bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9ba0
        ;   Label: FUN_004a9ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9ba1
    PUSH EBX                            ; 004a9ba5
    CALL FUN_004a9bc0                   ; 004a9ba6
        ;   XREF to: 004a9bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9bc0()
    ADD ESP,0x4                         ; 004a9bab
    MOV EAX,EBX                         ; 004a9bae
    POP EBX                             ; 004a9bb0
    RET                                 ; 004a9bb1

