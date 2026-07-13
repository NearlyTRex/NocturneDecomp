; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004057a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   FUN_00404610
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004057a0
        ;   Label: FUN_004057a0
    PUSH ESI                            ; 004057a1
    PUSH EBP                            ; 004057a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004057a3
    LEA ESI,[EBX + 0x18]                ; 004057a7
    LEA EAX,[EBX + 0x8]                 ; 004057aa
    PUSH EAX                            ; 004057ad
    CALL FUN_00404610                   ; 004057ae
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 004057b3
    TEST EAX,EAX                        ; 004057b6
    JZ 0x004057fb                       ; 004057b8
        ;   XREF to: 004057fb (CONDITIONAL_JUMP)  ; LAB_004057fb
    CMP dword ptr [0x01c03948],0x0      ; 004057ba | DAT_01c03948
    JNZ 0x00405816                      ; 004057c1
        ;   XREF to: 00405816 (CONDITIONAL_JUMP)  ; LAB_00405816
    CMP dword ptr [0x005b7624],0x20     ; 004057c3 | DAT_005b7624
    JNZ 0x0040580a                      ; 004057ca
        ;   XREF to: 0040580a (CONDITIONAL_JUMP)  ; LAB_0040580a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004057cc | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 004057d6
        ;   Label: LAB_004057d6
    MOV EDI,0x1                         ; 004057d7
    PUSH ESI                            ; 004057dc
    MOV EAX,dword ptr [EBX + 0x4]       ; 004057dd
    MOV EBP,0x2                         ; 004057e0
    PUSH EAX                            ; 004057e5
    MOV dword ptr [0x01c039a0],EDI      ; 004057e6 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 004057ec | DAT_01c039a4
    CALL FUN_00432cd0                   ; 004057f2
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 004057f7
    POP EDI                             ; 004057fa
    MOV EAX,dword ptr [EBX + 0x4]       ; 004057fb
        ;   Label: LAB_004057fb
    ADD EBX,0x18                        ; 004057fe
    SHL EAX,0x2                         ; 00405801
    ADD EAX,EBX                         ; 00405804
    POP EBP                             ; 00405806
    POP ESI                             ; 00405807
    POP EBX                             ; 00405808
    RET                                 ; 00405809
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040580a | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_0040580a
    JMP 0x004057d6                      ; 00405814
        ;   XREF to: 004057d6 (UNCONDITIONAL_JUMP)  ; LAB_004057d6
    CMP dword ptr [0x005b7624],0x20     ; 00405816 | DAT_005b7624
        ;   Label: LAB_00405816
    JNZ 0x0040582b                      ; 0040581d
        ;   XREF to: 0040582b (CONDITIONAL_JUMP)  ; LAB_0040582b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040581f | DAT_01c00c7c | LAB_0052f031
    JMP 0x004057d6                      ; 00405829
        ;   XREF to: 004057d6 (UNCONDITIONAL_JUMP)  ; LAB_004057d6
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040582b | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0040582b
    JMP 0x004057d6                      ; 00405835
        ;   XREF to: 004057d6 (UNCONDITIONAL_JUMP)  ; LAB_004057d6

