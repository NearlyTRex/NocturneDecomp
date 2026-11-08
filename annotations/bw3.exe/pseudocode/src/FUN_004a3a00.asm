; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00568b50 at 00568c01
;
; Called Functions:
;   FUN_004a3a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3a00
        ;   Label: FUN_004a3a00
    PUSH ESI                            ; 004a3a01
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a3a02
    PUSH 0x40000000                     ; 004a3a06
    PUSH EDX                            ; 004a3a0b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a3a0c
    PUSH ECX                            ; 004a3a10
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a3a11
    PUSH EBX                            ; 004a3a15
    PUSH 0x3                            ; 004a3a16
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a3a18
    PUSH ESI                            ; 004a3a1c
    CALL FUN_004a3a30                   ; 004a3a1d
        ;   XREF to: 004a3a30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3a30()
    ADD ESP,0x18                        ; 004a3a22
    POP ESI                             ; 004a3a25
    POP EBX                             ; 004a3a26
    RET                                 ; 004a3a27

