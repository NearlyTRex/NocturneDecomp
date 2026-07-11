; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b880(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004359e0 at 0043628d
;   FUN_004df770 at 004df777
;   FUN_0051dd00 at 0051de1d
;
; Called Functions:
;   FUN_0051b8a0
;   FUN_0051d3c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051b880
        ;   Label: FUN_0051b880
    PUSH EDX                            ; 0051b884
    CALL FUN_0051b8a0                   ; 0051b885
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b8a0()
    ADD ESP,0x4                         ; 0051b88a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051b88d
    PUSH ECX                            ; 0051b891
    CALL FUN_0051d3c0                   ; 0051b892
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d3c0()
    ADD ESP,0x4                         ; 0051b897
    RET                                 ; 0051b89a

