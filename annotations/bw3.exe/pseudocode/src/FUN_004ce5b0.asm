; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce5b0(void)
;
;
; XREF[4]:
;   FUN_00535a80 at 00535c63
;   FUN_00535da0 at 005360cc
;   FUN_005365c0 at 005367d6
;   FUN_00536990 at 00536b97
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d21320
;   undefined4 DAT_01d22ed8
;   undefined4 DAT_01d22ef0
;   undefined4 DAT_01d22f20
;   undefined4 DAT_01d22f38
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0046d540
;   FUN_004ccaf0
;   FUN_005375c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce5b0
        ;   Label: FUN_004ce5b0
    PUSH ESI                            ; 004ce5b1
    PUSH EBP                            ; 004ce5b2
    MOV EBP,ESP                         ; 004ce5b3
    AND ESP,0xfffffff8                  ; 004ce5b5
    MOV EAX,[0x005fe9dc]                ; 004ce5b8 | DAT_005fe9dc | DAT_01d2130c
    CMP dword ptr [EAX + 0x14],0x0      ; 004ce5bd | DAT_01d21320
    JNZ 0x004ce5c9                      ; 004ce5c1
        ;   XREF to: 004ce5c9 (CONDITIONAL_JUMP)  ; LAB_004ce5c9
    MOV ESP,EBP                         ; 004ce5c3
        ;   Label: LAB_004ce5c3
    POP EBP                             ; 004ce5c5
    POP ESI                             ; 004ce5c6
    POP EBX                             ; 004ce5c7
    RET                                 ; 004ce5c8
    MOV ECX,dword ptr [0x005f2afc]      ; 004ce5c9 | DAT_005f2afc
        ;   Label: LAB_004ce5c9
    PUSH ECX                            ; 004ce5cf | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 004ce5d0
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 004ce5d5
    TEST EAX,EAX                        ; 004ce5d8
    JNZ 0x004ce5c3                      ; 004ce5da
        ;   XREF to: 004ce5c3 (CONDITIONAL_JUMP)  ; LAB_004ce5c3
    PUSH EAX                            ; 004ce5dc
    PUSH EAX                            ; 004ce5dd
    PUSH EAX                            ; 004ce5de
    PUSH EAX                            ; 004ce5df
    PUSH EAX                            ; 004ce5e0
    MOV EBX,dword ptr [0x00603b28]      ; 004ce5e1 | DAT_00603b28
    PUSH EBX                            ; 004ce5e7 | DAT_01ed78c8
    CALL FUN_005375c0                   ; 004ce5e8
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005375c0()
    ADD ESP,0x18                        ; 004ce5ed
    PUSH 0x1d22eb4                      ; 004ce5f0
    MOV EBX,0x1d22eb4                   ; 004ce5f5
    CALL FUN_004ccaf0                   ; 004ce5fa
        ;   XREF to: 004ccaf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ccaf0()
    LEA ESI,[EBX + 0x4800]              ; 004ce5ff
    ADD ESP,0x4                         ; 004ce605
    FLD float ptr [EBX + 0x24]          ; 004ce608 | DAT_01d22ed8 | DAT_01d22f20
        ;   Label: LAB_004ce608
    FLDZ                                ; 004ce60b
    FCOMPP                              ; 004ce60d
    FNSTSW AX                           ; 004ce60f
    SAHF                                ; 004ce611
    JNC 0x004ce61e                      ; 004ce612
        ;   XREF to: 004ce61e (CONDITIONAL_JUMP)  ; LAB_004ce61e
    PUSH EBX                            ; 004ce614
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004ce615 | DAT_01d22ef0 | DAT_01d22f38
    CALL dword ptr [EAX + 0x8]          ; 004ce618
    ADD ESP,0x4                         ; 004ce61b
    ADD EBX,0x48                        ; 004ce61e
        ;   Label: LAB_004ce61e
    CMP EBX,ESI                         ; 004ce621
    JZ 0x004ce5c3                       ; 004ce623
        ;   XREF to: 004ce5c3 (CONDITIONAL_JUMP)  ; LAB_004ce5c3
    JMP 0x004ce608                      ; 004ce625
        ;   XREF to: 004ce608 (UNCONDITIONAL_JUMP)  ; LAB_004ce608

