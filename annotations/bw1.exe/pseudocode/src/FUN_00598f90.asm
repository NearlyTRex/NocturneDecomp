; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00598f90(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00573a80
;   FUN_005add50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598f90
        ;   Label: FUN_00598f90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00598f91
    MOV EDX,dword ptr [EAX + 0x57c]     ; 00598f95
    PUSH EDX                            ; 00598f9b
    CALL FUN_00573a80                   ; 00598f9c
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 00598fa1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00598fa4
    PUSH ECX                            ; 00598fa8
    MOV EBX,dword ptr [ESP + 0xc]       ; 00598fa9
    PUSH EBX                            ; 00598fad
    CALL FUN_005add50                   ; 00598fae
        ;   XREF to: 005add50 (UNCONDITIONAL_CALL)  ; undefined FUN_005add50()
    ADD ESP,0x8                         ; 00598fb3
    POP EBX                             ; 00598fb6
    RET                                 ; 00598fb7

