; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004028f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_004028b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004028f0
        ;   Label: FUN_004028f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004028f1
    PUSH EDX                            ; 004028f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004028f6
    PUSH ECX                            ; 004028fa
    MOV EBX,dword ptr [ESP + 0x18]      ; 004028fb
    PUSH EBX                            ; 004028ff
    CALL FUN_004028b0                   ; 00402900
        ;   XREF to: 004028b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004028b0()
    ADD ESP,0xc                         ; 00402905
    POP EBX                             ; 00402908
    RET                                 ; 00402909

