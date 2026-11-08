; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d88e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004d8aa0 at 004d8ac6
;
; Called Functions:
;   FUN_004d8530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d88e0
        ;   Label: FUN_004d88e0
    PUSH ESI                            ; 004d88e1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004d88e2
    PUSH EDX                            ; 004d88e6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d88e7
    PUSH ECX                            ; 004d88eb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d88ec
    PUSH EBX                            ; 004d88f0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d88f1
    PUSH ESI                            ; 004d88f5
    PUSH 0x1cee1a4                      ; 004d88f6
    CALL FUN_004d8530                   ; 004d88fb
        ;   XREF to: 004d8530 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8530()
    ADD ESP,0x14                        ; 004d8900
    POP ESI                             ; 004d8903
    POP EBX                             ; 004d8904
    RET                                 ; 004d8905

