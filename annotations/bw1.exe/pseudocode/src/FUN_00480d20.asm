; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_00480d90 at 00480dfb
;   FUN_00480f80 at 00480f97
;
; Called Functions:
;   FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d20
        ;   Label: FUN_00480d20
    PUSH ESI                            ; 00480d21
    PUSH EDI                            ; 00480d22
    PUSH EBP                            ; 00480d23
    PUSH 0x7                            ; 00480d24
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00480d26
    PUSH EDX                            ; 00480d2a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00480d2b
    PUSH ECX                            ; 00480d2f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00480d30
    PUSH EBX                            ; 00480d34
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00480d35
    PUSH ESI                            ; 00480d39
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00480d3a
    PUSH EDI                            ; 00480d3e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00480d3f
    PUSH EBP                            ; 00480d43
    CALL FUN_00480480                   ; 00480d44
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; undefined FUN_00480480()
    ADD ESP,0x1c                        ; 00480d49
    POP EBP                             ; 00480d4c
    POP EDI                             ; 00480d4d
    POP ESI                             ; 00480d4e
    POP EBX                             ; 00480d4f
    RET                                 ; 00480d50

