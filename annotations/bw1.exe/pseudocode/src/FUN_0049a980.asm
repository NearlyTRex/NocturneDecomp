; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0049a8b0 at 0049a92d
;   FUN_004cf5e0 at 004d01ca
;
; Called Functions:
;   FUN_0049b060
;   FUN_0049be50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a980
        ;   Label: FUN_0049a980
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a981
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049a985
    PUSH EDX                            ; 0049a989
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049a98a
    PUSH ECX                            ; 0049a98e
    PUSH EBX                            ; 0049a98f
    CALL FUN_0049b060                   ; 0049a990
        ;   XREF to: 0049b060 (UNCONDITIONAL_CALL)  ; undefined FUN_0049b060()
    ADD ESP,0xc                         ; 0049a995
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049a998
    PUSH EBX                            ; 0049a99c
    MOV dword ptr [EBX + 0x194],EAX     ; 0049a99d
    CALL FUN_0049be50                   ; 0049a9a3
        ;   XREF to: 0049be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0049be50()
    ADD ESP,0x4                         ; 0049a9a8
    POP EBX                             ; 0049a9ab
    RET                                 ; 0049a9ac

