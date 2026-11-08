; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a39a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0040f840 at 0040f86a
;
; Called Functions:
;   FUN_004a3a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a39a0
        ;   Label: FUN_004a39a0
    PUSH ESI                            ; 004a39a1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a39a2
    PUSH 0x40000000                     ; 004a39a6
    PUSH EDX                            ; 004a39ab
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a39ac
    PUSH ECX                            ; 004a39b0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a39b1
    PUSH EBX                            ; 004a39b5
    PUSH 0x1                            ; 004a39b6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a39b8
    PUSH ESI                            ; 004a39bc
    CALL FUN_004a3a30                   ; 004a39bd
        ;   XREF to: 004a3a30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3a30()
    ADD ESP,0x18                        ; 004a39c2
    POP ESI                             ; 004a39c5
    POP EBX                             ; 004a39c6
    RET                                 ; 004a39c7

