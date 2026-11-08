; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_00468880 at 004688eb
;   FUN_00468a70 at 00468a87
;
; Called Functions:
;   FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468810
        ;   Label: FUN_00468810
    PUSH ESI                            ; 00468811
    PUSH EDI                            ; 00468812
    PUSH EBP                            ; 00468813
    PUSH 0x7                            ; 00468814
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00468816
    PUSH EDX                            ; 0046881a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0046881b
    PUSH ECX                            ; 0046881f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00468820
    PUSH EBX                            ; 00468824
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00468825
    PUSH ESI                            ; 00468829
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0046882a
    PUSH EDI                            ; 0046882e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0046882f
    PUSH EBP                            ; 00468833
    CALL FUN_00467f70                   ; 00468834
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00467f70()
    ADD ESP,0x1c                        ; 00468839
    POP EBP                             ; 0046883c
    POP EDI                             ; 0046883d
    POP ESI                             ; 0046883e
    POP EBX                             ; 0046883f
    RET                                 ; 00468840

