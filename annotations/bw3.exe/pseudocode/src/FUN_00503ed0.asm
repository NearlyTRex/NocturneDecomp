; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503ed0(int param_1)
;
;
; XREF[1]:
;   FUN_004e4c70 at 004e4c7f
;
; Called Functions:
;   FUN_005043b0
;   FUN_0056fc30
;   FUN_00571f10
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00503ed0
        ;   Label: FUN_00503ed0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00503ed2
    PUSH EDX                            ; 00503ed6
    CALL FUN_005043b0                   ; 00503ed7
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    ADD ESP,0x8                         ; 00503edc
    MOV EAX,dword ptr [ESP + 0x4]       ; 00503edf
    ADD EAX,0x180                       ; 00503ee3
    PUSH EAX                            ; 00503ee8
    CALL FUN_0056fc30                   ; 00503ee9
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fc30()
    ADD ESP,0x4                         ; 00503eee
    JMP 0x00571f10                      ; 00503ef1
        ;   XREF to: 00571f10 (UNCONDITIONAL_CALL)

