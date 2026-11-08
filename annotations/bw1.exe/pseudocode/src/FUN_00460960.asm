; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460960(int param_1)
;
;
; XREF[1]:
;   FUN_00460230 at 00460871
;
; Called Functions:
;   FUN_0040cd00
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460960
        ;   Label: FUN_00460960
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460961
    MOV dword ptr [EBX + 0xc2f0],0x0    ; 00460965
    PUSH 0x3ecccccd                     ; 0046096f
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 00460974
    CALL FUN_0040cd00                   ; 0046097e
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 00460983
    TEST EAX,EAX                        ; 00460986
    JZ 0x004609a9                       ; 00460988
        ;   XREF to: 004609a9 (CONDITIONAL_JUMP)  ; LAB_004609a9
    MOV dword ptr [EBX + 0xc9c4],0x40400000 ; 0046098a
    PUSH 0x1                            ; 00460994
        ;   Label: LAB_00460994
    PUSH 0x0                            ; 00460996
    ADD EBX,0x158                       ; 00460998
    PUSH EBX                            ; 0046099e
    CALL FUN_005247c0                   ; 0046099f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004609a4
    POP EBX                             ; 004609a7
    RET                                 ; 004609a8
    MOV dword ptr [EBX + 0xc9c4],EAX    ; 004609a9
        ;   Label: LAB_004609a9
    JMP 0x00460994                      ; 004609af
        ;   XREF to: 00460994 (UNCONDITIONAL_JUMP)  ; LAB_00460994

