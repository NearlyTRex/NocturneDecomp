; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f49f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_004f4c00 at 004f4c2c
;
; Called Functions:
;   FUN_004f4370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f49f0
        ;   Label: FUN_004f49f0
    PUSH ESI                            ; 004f49f1
    PUSH EDI                            ; 004f49f2
    PUSH EBP                            ; 004f49f3
    MOV EDX,dword ptr [ESP + 0x28]      ; 004f49f4
    PUSH EDX                            ; 004f49f8
    MOV ECX,dword ptr [ESP + 0x28]      ; 004f49f9
    PUSH ECX                            ; 004f49fd
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f49fe
    PUSH EBX                            ; 004f4a02
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f4a03
    PUSH ESI                            ; 004f4a07
    MOV EDI,dword ptr [ESP + 0x28]      ; 004f4a08
    PUSH EDI                            ; 004f4a0c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f4a0d
    PUSH EBP                            ; 004f4a11
    PUSH 0x1d06d64                      ; 004f4a12
    CALL FUN_004f4370                   ; 004f4a17
        ;   XREF to: 004f4370 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4370()
    ADD ESP,0x1c                        ; 004f4a1c
    POP EBP                             ; 004f4a1f
    POP EDI                             ; 004f4a20
    POP ESI                             ; 004f4a21
    POP EBX                             ; 004f4a22
    RET                                 ; 004f4a23

