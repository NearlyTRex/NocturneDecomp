; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a7cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00447ea0 at 00447ede
;
; Called Functions:
;   FUN_004a8560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7cd0
        ;   Label: FUN_004a7cd0
    PUSH ESI                            ; 004a7cd1
    PUSH EDI                            ; 004a7cd2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a7cd3
    PUSH EDX                            ; 004a7cd7
    PUSH 0xff                           ; 004a7cd8
    PUSH 0x21                           ; 004a7cdd
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a7cdf
    PUSH ECX                            ; 004a7ce3
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a7ce4
    PUSH EBX                            ; 004a7ce8
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a7ce9
    PUSH ESI                            ; 004a7ced
    MOV EDI,dword ptr [ESP + 0x28]      ; 004a7cee
    PUSH EDI                            ; 004a7cf2
    CALL FUN_004a8560                   ; 004a7cf3
        ;   XREF to: 004a8560 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8560()
    ADD ESP,0x1c                        ; 004a7cf8
    POP EDI                             ; 004a7cfb
    POP ESI                             ; 004a7cfc
    POP EBX                             ; 004a7cfd
    RET                                 ; 004a7cfe

