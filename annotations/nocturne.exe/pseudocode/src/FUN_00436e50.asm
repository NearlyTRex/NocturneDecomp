; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00436e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_00438550 at 00438584
;   FUN_004d4f30 at 004d5726
;
; Called Functions:
;   FUN_00436e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436e50
        ;   Label: FUN_00436e50
    PUSH ESI                            ; 00436e51
    MOV EDX,dword ptr [ESP + 0x20]      ; 00436e52
    PUSH EDX                            ; 00436e56
    PUSH dword ptr [ESP + 0x20]         ; 00436e57
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00436e5b
    PUSH dword ptr [ESP + 0x20]         ; 00436e5f
    PUSH ECX                            ; 00436e63
    MOV EBX,dword ptr [ESP + 0x20]      ; 00436e64
    PUSH EBX                            ; 00436e68
    MOV ESI,dword ptr [ESP + 0x20]      ; 00436e69
    PUSH ESI                            ; 00436e6d
    CALL FUN_00436e80                   ; 00436e6e
        ;   XREF to: 00436e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00436e80()
    ADD ESP,0x18                        ; 00436e73
    POP ESI                             ; 00436e76
    POP EBX                             ; 00436e77
    RET                                 ; 00436e78

