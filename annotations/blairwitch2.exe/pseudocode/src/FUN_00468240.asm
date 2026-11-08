; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00521af0 at 00521c33
;
; Called Functions:
;   FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468240
        ;   Label: FUN_00468240
    PUSH ESI                            ; 00468241
    PUSH 0x0                            ; 00468242
    PUSH 0x0                            ; 00468244
    MOV EDX,dword ptr [ESP + 0x20]      ; 00468246
    PUSH EDX                            ; 0046824a
    PUSH 0x0                            ; 0046824b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046824d
    PUSH ECX                            ; 00468251
    MOV EBX,dword ptr [ESP + 0x24]      ; 00468252
    PUSH EBX                            ; 00468256
    MOV ESI,dword ptr [ESP + 0x24]      ; 00468257
    PUSH ESI                            ; 0046825b
    CALL FUN_00467f70                   ; 0046825c
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00467f70()
    ADD ESP,0x1c                        ; 00468261
    POP ESI                             ; 00468264
    POP EBX                             ; 00468265
    RET                                 ; 00468266

