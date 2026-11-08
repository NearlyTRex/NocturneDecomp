; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055ae80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[5]:
;   FUN_00408e70 at 00408e86
;   FUN_005156d0 at 00515c01
;   FUN_0055a3c0 at 0055ab7b
;   FUN_00584d90 at 00584dc4
;   FUN_005b4d30 at 005b5614
;
; Called Functions:
;   FUN_005594c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ae80
        ;   Label: FUN_0055ae80
    PUSH 0x0                            ; 0055ae81
    MOV EDX,dword ptr [ESP + 0x18]      ; 0055ae83
    PUSH EDX                            ; 0055ae87
    PUSH 0x0                            ; 0055ae88
    PUSH 0x0                            ; 0055ae8a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055ae8c
    PUSH 0x0                            ; 0055ae90
    PUSH ECX                            ; 0055ae92
    MOV EBX,dword ptr [ESP + 0x24]      ; 0055ae93
    PUSH EBX                            ; 0055ae97
    CALL FUN_005594c0                   ; 0055ae98
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005594c0()
    ADD ESP,0x1c                        ; 0055ae9d
    POP EBX                             ; 0055aea0
    RET                                 ; 0055aea1

