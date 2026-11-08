; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c59f0(int param_1,float param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc90b0
;
; Called Functions:
;   FUN_005727e0
;   FUN_00572ac0
;   FUN_00572b40
;   FUN_00572d20
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004c59f0
        ;   Label: FUN_004c59f0
    FCOMP float ptr [0x01cc90b0]        ; 004c59f4 | DAT_01cc90b0
    FNSTSW AX                           ; 004c59fa
    SAHF                                ; 004c59fc
    JC 0x004c5a12                       ; 004c59fd
        ;   XREF to: 004c5a12 (CONDITIONAL_JUMP)  ; LAB_004c5a12
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c59ff
    FLD float ptr [ESP + 0x8]           ; 004c5a03
    FCOMP float ptr [EAX + 0x15c]       ; 004c5a07
    FNSTSW AX                           ; 004c5a0d
    SAHF                                ; 004c5a0f
    JC 0x004c5a13                       ; 004c5a10
        ;   XREF to: 004c5a13 (CONDITIONAL_JUMP)  ; LAB_004c5a13
    RET                                 ; 004c5a12
        ;   Label: LAB_004c5a12
    CALL FUN_00572ac0                   ; 004c5a13
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
        ;   Label: LAB_004c5a13
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5a18
    ADD EAX,0x490                       ; 004c5a1c
    PUSH EAX                            ; 004c5a21
    CALL FUN_005727e0                   ; 004c5a22
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005727e0()
    ADD ESP,0x4                         ; 004c5a27
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c5a2a
    PUSH EDX                            ; 004c5a2e
    CALL FUN_00572d20                   ; 004c5a2f
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d20()
    ADD ESP,0x4                         ; 004c5a34
    JMP 0x00572b40                      ; 004c5a37
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)

