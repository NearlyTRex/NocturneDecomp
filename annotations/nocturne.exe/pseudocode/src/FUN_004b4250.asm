; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4250(int param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00454510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b4250
        ;   Label: FUN_004b4250
    ADD EAX,0x150                       ; 004b4254
    PUSH EAX                            ; 004b4259
    CALL FUN_00454510                   ; 004b425a
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 004b425f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b4262
    PUSH EDX                            ; 004b4266
    CALL FUN_00409fc0                   ; 004b4267
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 004b426c
    NOP                                 ; 004b426f

