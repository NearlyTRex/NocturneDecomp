; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547170(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)
;
;
; XREF[10]:
;   FUN_00410670 at 004107f0
;   FUN_00413c70 at 00413e01
;   FUN_00424bd0 at 00424c4e
;   FUN_004264d0 at 00426690
;   FUN_00464ac0 at 00464c60
;   FUN_004f1890 at 004f19a8
;   FUN_004f1b80 at 004f1bf3
;   FUN_0053e6c0 at 0053e7b1
;   FUN_0056fe50 at 0056feea
;   FUN_00582ec0 at 00582f48
;
; Called Functions:
;   FUN_00543d00
;   FUN_00547280
;   FUN_005472d0
;   FUN_00547320
;   FUN_00547370
;   FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547170
        ;   Label: FUN_00547170
    PUSH ESI                            ; 00547171
    PUSH EDI                            ; 00547172
    MOV EBX,dword ptr [ESP + 0x10]      ; 00547173
    MOV EAX,dword ptr [ESP + 0x14]      ; 00547177
    MOV ESI,EAX                         ; 0054717b
    TEST EAX,EAX                        ; 0054717d
    JL 0x005471b7                       ; 0054717f
        ;   XREF to: 005471b7 (CONDITIONAL_JUMP)  ; LAB_005471b7
    PUSH ESI                            ; 00547181
        ;   Label: LAB_00547181
    PUSH EBX                            ; 00547182
    CALL FUN_00547280                   ; 00547183
        ;   XREF to: 00547280 (UNCONDITIONAL_CALL)  ; undefined FUN_00547280()
    ADD ESP,0x8                         ; 00547188
    CMP dword ptr [ESP + 0x1c],0x0      ; 0054718b
    JNZ 0x005471d4                      ; 00547190
        ;   XREF to: 005471d4 (CONDITIONAL_JUMP)  ; LAB_005471d4
    CMP dword ptr [ESP + 0x18],0x0      ; 00547192
    JL 0x005471e0                       ; 00547197
        ;   XREF to: 005471e0 (CONDITIONAL_JUMP)  ; LAB_005471e0
    TEST byte ptr [ESP + 0x19],0x1      ; 00547199
    JZ 0x005471e0                       ; 0054719e
        ;   XREF to: 005471e0 (CONDITIONAL_JUMP)  ; LAB_005471e0
    MOV ESI,dword ptr [ESP + 0x20]      ; 005471a0
        ;   Label: LAB_005471a0
    PUSH ESI                            ; 005471a4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005471a5
    PUSH EDI                            ; 005471a9
    PUSH EBX                            ; 005471aa
    CALL FUN_00547370                   ; 005471ab
        ;   XREF to: 00547370 (UNCONDITIONAL_CALL)  ; undefined FUN_00547370()
    ADD ESP,0xc                         ; 005471b0
    POP EDI                             ; 005471b3
    POP ESI                             ; 005471b4
    POP EBX                             ; 005471b5
    RET                                 ; 005471b6
    LEA EAX,[EBX + 0x2238]              ; 005471b7
        ;   Label: LAB_005471b7
    PUSH EAX                            ; 005471bd
    PUSH EBX                            ; 005471be
    CALL FUN_00547810                   ; 005471bf
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 005471c4
    PUSH EAX                            ; 005471c7
    CALL FUN_00543d00                   ; 005471c8
        ;   XREF to: 00543d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00543d00()
    ADD ESP,0x8                         ; 005471cd
    MOV ESI,EAX                         ; 005471d0
    JMP 0x00547181                      ; 005471d2
        ;   XREF to: 00547181 (UNCONDITIONAL_JUMP)  ; LAB_00547181
    PUSH ESI                            ; 005471d4
        ;   Label: LAB_005471d4
    PUSH EBX                            ; 005471d5
    CALL FUN_005472d0                   ; 005471d6
        ;   XREF to: 005472d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005472d0()
    ADD ESP,0x8                         ; 005471db
    JMP 0x005471a0                      ; 005471de
        ;   XREF to: 005471a0 (UNCONDITIONAL_JUMP)  ; LAB_005471a0
    PUSH ESI                            ; 005471e0
        ;   Label: LAB_005471e0
    PUSH EBX                            ; 005471e1
    CALL FUN_00547320                   ; 005471e2
        ;   XREF to: 00547320 (UNCONDITIONAL_CALL)  ; undefined FUN_00547320()
    ADD ESP,0x8                         ; 005471e7
    JMP 0x005471a0                      ; 005471ea
        ;   XREF to: 005471a0 (UNCONDITIONAL_JUMP)  ; LAB_005471a0

