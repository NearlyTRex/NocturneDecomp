; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9d90(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004fa9c0 at 004fa9eb
;
; Called Functions:
;   FUN_004f9c40
;   FUN_0054e420
;   FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9d90
        ;   Label: FUN_004f9d90
    PUSH ESI                            ; 004f9d91
    PUSH EDI                            ; 004f9d92
    PUSH EBP                            ; 004f9d93
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f9d94
    PUSH 0x0                            ; 004f9d98
    PUSH EBX                            ; 004f9d9a
    CALL FUN_0054e420                   ; 004f9d9b
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e420()
    ADD ESP,0x8                         ; 004f9da0
    PUSH EBX                            ; 004f9da3
    CALL FUN_0054ea40                   ; 004f9da4
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    MOV EDX,EAX                         ; 004f9da9
    MOV EAX,dword ptr [EBX + 0x2320]    ; 004f9dab
    SHL EAX,0x2                         ; 004f9db1
    ADD EAX,EDX                         ; 004f9db4
    ADD ESP,0x4                         ; 004f9db6
    MOV ECX,dword ptr [EAX + 0x90]      ; 004f9db9
    PUSH ECX                            ; 004f9dbf
    ADD EDX,0xc0                        ; 004f9dc0
    PUSH EDX                            ; 004f9dc6
    MOV ESI,dword ptr [EAX + 0x7c]      ; 004f9dc7
    PUSH ESI                            ; 004f9dca
    MOV EDI,dword ptr [EAX + 0x54]      ; 004f9dcb
    PUSH EDI                            ; 004f9dce
    MOV EBP,dword ptr [EBX + 0x2324]    ; 004f9dcf
    PUSH EBP                            ; 004f9dd5
    MOV EDX,dword ptr [EAX + 0x2c]      ; 004f9dd6
    PUSH EDX                            ; 004f9dd9
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004f9dda
    PUSH ECX                            ; 004f9dde
    CALL FUN_004f9c40                   ; 004f9ddf
        ;   XREF to: 004f9c40 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9c40()
    ADD ESP,0x1c                        ; 004f9de4
    POP EBP                             ; 004f9de7
    POP EDI                             ; 004f9de8
    POP ESI                             ; 004f9de9
    POP EBX                             ; 004f9dea
    RET                                 ; 004f9deb

