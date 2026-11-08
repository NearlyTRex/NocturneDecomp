; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[8]:
;   FUN_00416fa0 at 004170a2
;   FUN_0044ceb0 at 0044d01a
;   FUN_0044d700 at 0044d80b
;   FUN_00462820 at 00462868
;   FUN_004f90d0 at 004f9215
;   FUN_004fe9c0 at 004fea22
;   FUN_00559f80 at 0055a046
;   FUN_0055b330 at 0055b36a
;
; Called Functions:
;   FUN_005090b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483c10
        ;   Label: FUN_00483c10
    PUSH ESI                            ; 00483c11
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00483c12
    PUSH EDX                            ; 00483c16
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00483c17
    PUSH ECX                            ; 00483c1b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00483c1c
    PUSH EBX                            ; 00483c20
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00483c21
    PUSH ESI                            ; 00483c25
    CALL FUN_005090b0                   ; 00483c26
        ;   XREF to: 005090b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005090b0()
    ADD ESP,0x10                        ; 00483c2b
    POP ESI                             ; 00483c2e
    POP EBX                             ; 00483c2f
    RET                                 ; 00483c30

