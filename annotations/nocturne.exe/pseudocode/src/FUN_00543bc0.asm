; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543bc0(int param_1)
;
;
; Referenced Globals:
;   string s_bipp02_0059651f
;   string s_bipp05_00596526
;   string s_bipp06_0059652d
;   string s_bipp09_00596534
;   undefined4 DAT_02dca1d0
;   undefined4 DAT_02dca1d4
;   undefined4 DAT_02dca1d8
;   undefined4 DAT_02dca1dc
;
; Called Functions:
;   FUN_004796b0
;   FUN_005179d0
;   FUN_0051dcd0
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543bc0
        ;   Label: FUN_00543bc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543bc1
    ADD EBX,0x150                       ; 00543bc5
    PUSH EBX                            ; 00543bcb
    CALL FUN_0051dcd0                   ; 00543bcc
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 00543bd1
    MOV EDX,dword ptr [ESP + 0x8]       ; 00543bd4
    PUSH EDX                            ; 00543bd8
    CALL FUN_004796b0                   ; 00543bd9
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 00543bde
    PUSH EBX                            ; 00543be1
    CALL FUN_0051e0a0                   ; 00543be2
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 00543be7
    PUSH 0x1                            ; 00543bea
    PUSH 0x59651f                       ; 00543bec | = "bipp02"
    PUSH EAX                            ; 00543bf1
    MOV EBX,EAX                         ; 00543bf2
    CALL FUN_005179d0                   ; 00543bf4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00543bf9
    PUSH 0x1                            ; 00543bfc
    PUSH 0x596526                       ; 00543bfe | = "bipp05"
    PUSH EBX                            ; 00543c03
    MOV [0x02dca1d0],EAX                ; 00543c04 | DAT_02dca1d0
    CALL FUN_005179d0                   ; 00543c09
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00543c0e
    PUSH 0x1                            ; 00543c11
    PUSH 0x59652d                       ; 00543c13 | = "bipp06"
    PUSH EBX                            ; 00543c18
    MOV [0x02dca1d4],EAX                ; 00543c19 | DAT_02dca1d4
    CALL FUN_005179d0                   ; 00543c1e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00543c23
    PUSH 0x1                            ; 00543c26
    PUSH 0x596534                       ; 00543c28 | = "bipp09"
    PUSH EBX                            ; 00543c2d
    MOV [0x02dca1d8],EAX                ; 00543c2e | DAT_02dca1d8
    CALL FUN_005179d0                   ; 00543c33
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00543c38
    MOV [0x02dca1dc],EAX                ; 00543c3b | DAT_02dca1dc
    POP EBX                             ; 00543c40
    RET                                 ; 00543c41

