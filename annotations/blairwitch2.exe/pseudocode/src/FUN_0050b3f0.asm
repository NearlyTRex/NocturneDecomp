; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050b3f0(int param_1)
;
;
; XREF[1]:
;   FUN_004e4e20 at 004e4e2f
;
; Called Functions:
;   FUN_0050b8d0
;   FUN_00579360
;   Ordinal_116
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0050b3f0
        ;   Label: FUN_0050b3f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050b3f2
    PUSH EDX                            ; 0050b3f6
    CALL FUN_0050b8d0                   ; 0050b3f7
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b8d0()
    ADD ESP,0x8                         ; 0050b3fc
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b3ff
    ADD EAX,0x180                       ; 0050b403
    PUSH EAX                            ; 0050b408
    CALL FUN_00579360                   ; 0050b409
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; undefined FUN_00579360()
    ADD ESP,0x4                         ; 0050b40e
    JMP 0x00579520                      ; 0050b411
        ;   XREF to: 00579520 (UNCONDITIONAL_CALL)

