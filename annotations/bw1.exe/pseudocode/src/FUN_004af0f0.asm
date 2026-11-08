; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af0f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004b5f00 at 004b5f44
;
; Called Functions:
;   FUN_00532160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af0f0
        ;   Label: FUN_004af0f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af0f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004af0f5
    PUSH EDX                            ; 004af0f9
    MOV ECX,dword ptr [ESP + 0x10]      ; 004af0fa
    PUSH ECX                            ; 004af0fe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004af0ff
    PUSH EBX                            ; 004af103
    MOV dword ptr [EBX + 0x50],EAX      ; 004af104
    CALL FUN_00532160                   ; 004af107
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; undefined FUN_00532160()
    ADD ESP,0xc                         ; 004af10c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004af10f
    MOV dword ptr [EBX + 0x40],EAX      ; 004af113
    POP EBX                             ; 004af116
    RET                                 ; 004af117

