; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00427770(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[10]:
;   FUN_00412500 at 004126c4
;   FUN_00413f40 at 00414081
;   FUN_00427360 at 004273fe
;   FUN_004398b0 at 0043998d
;   FUN_004c0c00 at 004c0d31
;   FUN_004c3e30 at 004c3f6c
;   FUN_004d7ab0 at 004d7bf1
;   FUN_004ffcc0 at 004ffe44
;   FUN_0054a790 at 0054a8eb
;   FUN_00599400 at 0059953c
;
; Called Functions:
;   FUN_004154f0
;   FUN_00416700
;   FUN_004277e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427770
        ;   Label: FUN_00427770
    PUSH ESI                            ; 00427771
    PUSH EBP                            ; 00427772
    MOV EBX,dword ptr [ESP + 0x10]      ; 00427773
    LEA ESI,[EBX + 0x2514]              ; 00427777
    CMP byte ptr [ESI],0x0              ; 0042777d
    JZ 0x00427790                       ; 00427780
        ;   XREF to: 00427790 (CONDITIONAL_JUMP)  ; LAB_00427790
    MOV ESI,dword ptr [ESP + 0x14]      ; 00427782
    CMP dword ptr [EBX + ESI*0x4 + 0x23f4],0x0 ; 00427786
    JNZ 0x00427794                      ; 0042778e
        ;   XREF to: 00427794 (CONDITIONAL_JUMP)  ; LAB_00427794
    POP EBP                             ; 00427790
        ;   Label: LAB_00427790
    POP ESI                             ; 00427791
    POP EBX                             ; 00427792
    RET                                 ; 00427793
    PUSH EDI                            ; 00427794
        ;   Label: LAB_00427794
    MOV ECX,dword ptr [EBX + 0x280c]    ; 00427795
    PUSH ECX                            ; 0042779b
    PUSH 0x0                            ; 0042779c
    PUSH 0x0                            ; 0042779e
    PUSH EBX                            ; 004277a0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004277a1
    PUSH ESI                            ; 004277a5
    LEA ESI,[EBX + 0x30]                ; 004277a6
    PUSH ESI                            ; 004277a9
    LEA ESI,[EBX + 0x20]                ; 004277aa
    PUSH ESI                            ; 004277ad
    CALL FUN_004154f0                   ; 004277ae
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004154f0()
    ADD ESP,0x1c                        ; 004277b3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004277b6
    PUSH EDI                            ; 004277ba
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004277bb
    PUSH EBP                            ; 004277bf
    PUSH EAX                            ; 004277c0
    PUSH EBX                            ; 004277c1
    MOV ESI,EAX                         ; 004277c2
    CALL FUN_004277e0                   ; 004277c4
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 004277c9
    PUSH ESI                            ; 004277cc
    CALL FUN_00416700                   ; 004277cd
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; undefined FUN_00416700()
    ADD ESP,0x4                         ; 004277d2
    POP EDI                             ; 004277d5
    POP EBP                             ; 004277d6
    POP ESI                             ; 004277d7
    POP EBX                             ; 004277d8
    RET                                 ; 004277d9

