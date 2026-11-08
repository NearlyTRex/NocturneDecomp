; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00459f50 at 00459f8e
;
; Called Functions:
;   FUN_004b0190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af8f0
        ;   Label: FUN_004af8f0
    PUSH ESI                            ; 004af8f1
    PUSH EDI                            ; 004af8f2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004af8f3
    PUSH EDX                            ; 004af8f7
    PUSH 0xff                           ; 004af8f8
    PUSH 0x21                           ; 004af8fd
    MOV ECX,dword ptr [ESP + 0x28]      ; 004af8ff
    PUSH ECX                            ; 004af903
    MOV EBX,dword ptr [ESP + 0x28]      ; 004af904
    PUSH EBX                            ; 004af908
    MOV ESI,dword ptr [ESP + 0x28]      ; 004af909
    PUSH ESI                            ; 004af90d
    MOV EDI,dword ptr [ESP + 0x28]      ; 004af90e
    PUSH EDI                            ; 004af912
    CALL FUN_004b0190                   ; 004af913
        ;   XREF to: 004b0190 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0190()
    ADD ESP,0x1c                        ; 004af918
    POP EDI                             ; 004af91b
    POP ESI                             ; 004af91c
    POP EBX                             ; 004af91d
    RET                                 ; 004af91e

