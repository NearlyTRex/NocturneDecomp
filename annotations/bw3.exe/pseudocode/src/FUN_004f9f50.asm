; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9f50(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004fab90 at 004fabb7
;
; Called Functions:
;   FUN_004f9e40
;   FUN_0054c110
;   FUN_0054e420
;   FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9f50
        ;   Label: FUN_004f9f50
    PUSH ESI                            ; 004f9f51
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f9f52
    PUSH EBX                            ; 004f9f56
    CALL FUN_0054c110                   ; 004f9f57
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c110()
    ADD ESP,0x4                         ; 004f9f5c
    PUSH 0x0                            ; 004f9f5f
    PUSH EBX                            ; 004f9f61
    CALL FUN_0054e420                   ; 004f9f62
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e420()
    ADD ESP,0x8                         ; 004f9f67
    PUSH EBX                            ; 004f9f6a
    MOV ESI,dword ptr [EBX + 0x2320]    ; 004f9f6b
    CALL FUN_0054ea40                   ; 004f9f71
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 004f9f76
    MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c] ; 004f9f79
    PUSH EDX                            ; 004f9f7d
    PUSH 0x0                            ; 004f9f7e
    MOV ECX,dword ptr [EBX + 0x2324]    ; 004f9f80
    PUSH ECX                            ; 004f9f86
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f9f87
    PUSH EBX                            ; 004f9f8b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004f9f8c
    PUSH ESI                            ; 004f9f90
    CALL FUN_004f9e40                   ; 004f9f91
        ;   XREF to: 004f9e40 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9e40()
    ADD ESP,0x14                        ; 004f9f96
    POP ESI                             ; 004f9f99
    POP EBX                             ; 004f9f9a
    RET                                 ; 004f9f9b

