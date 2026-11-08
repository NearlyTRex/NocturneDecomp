; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00469e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00529210 at 00529353
;
; Called Functions:
;   FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469e10
        ;   Label: FUN_00469e10
    PUSH ESI                            ; 00469e11
    PUSH 0x0                            ; 00469e12
    PUSH 0x0                            ; 00469e14
    MOV EDX,dword ptr [ESP + 0x20]      ; 00469e16
    PUSH EDX                            ; 00469e1a
    PUSH 0x0                            ; 00469e1b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00469e1d
    PUSH ECX                            ; 00469e21
    MOV EBX,dword ptr [ESP + 0x24]      ; 00469e22
    PUSH EBX                            ; 00469e26
    MOV ESI,dword ptr [ESP + 0x24]      ; 00469e27
    PUSH ESI                            ; 00469e2b
    CALL FUN_00469b40                   ; 00469e2c
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00469b40()
    ADD ESP,0x1c                        ; 00469e31
    POP ESI                             ; 00469e34
    POP EBX                             ; 00469e35
    RET                                 ; 00469e36

