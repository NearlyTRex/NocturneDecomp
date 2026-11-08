; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f8e0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00503e00 at 00503e0c
;
; Called Functions:
;   FUN_0056fc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f8e0
        ;   Label: FUN_0056f8e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f8e1
    PUSH EBX                            ; 0056f8e5
    CALL FUN_0056fc30                   ; 0056f8e6
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fc30()
    ADD ESP,0x4                         ; 0056f8eb
    MOV EAX,EBX                         ; 0056f8ee
    POP EBX                             ; 0056f8f0
    RET                                 ; 0056f8f1

