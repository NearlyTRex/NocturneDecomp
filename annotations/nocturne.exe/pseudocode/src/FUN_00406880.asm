; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406880(int param_1)
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

    PUSH EBX                            ; 00406880
        ;   Label: FUN_00406880
    PUSH ESI                            ; 00406881
    PUSH EBP                            ; 00406882
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406883
    LEA ESI,[EBX + 0x18]                ; 00406887
    LEA EAX,[EBX + 0x8]                 ; 0040688a
    PUSH EAX                            ; 0040688d
    CALL FUN_00404610                   ; 0040688e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 00406893
    TEST EAX,EAX                        ; 00406896
    JZ 0x004068d8                       ; 00406898
        ;   XREF to: 004068d8 (CONDITIONAL_JUMP)  ; LAB_004068d8
    CMP dword ptr [0x01c03948],0x0      ; 0040689a | DAT_01c03948
    JNZ 0x004068f3                      ; 004068a1
        ;   XREF to: 004068f3 (CONDITIONAL_JUMP)  ; LAB_004068f3
    CMP dword ptr [0x005b7624],0x20     ; 004068a3 | DAT_005b7624
    JNZ 0x004068e7                      ; 004068aa
        ;   XREF to: 004068e7 (CONDITIONAL_JUMP)  ; LAB_004068e7
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004068ac | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 004068b6
        ;   Label: LAB_004068b6
    MOV EDI,0x23                        ; 004068b7
    PUSH ESI                            ; 004068bc
    MOV EAX,dword ptr [EBX + 0x4]       ; 004068bd
    XOR EBP,EBP                         ; 004068c0
    PUSH EAX                            ; 004068c2
    MOV dword ptr [0x01c039a0],EDI      ; 004068c3 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 004068c9 | DAT_01c039a4
    CALL FUN_00432cd0                   ; 004068cf
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 004068d4
    POP EDI                             ; 004068d7
    MOV EAX,dword ptr [EBX + 0x4]       ; 004068d8
        ;   Label: LAB_004068d8
    ADD EBX,0x18                        ; 004068db
    SHL EAX,0x2                         ; 004068de
    ADD EAX,EBX                         ; 004068e1
    POP EBP                             ; 004068e3
    POP ESI                             ; 004068e4
    POP EBX                             ; 004068e5
    RET                                 ; 004068e6
    MOV dword ptr [0x01c00c7c],0x530322 ; 004068e7 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_004068e7
    JMP 0x004068b6                      ; 004068f1
        ;   XREF to: 004068b6 (UNCONDITIONAL_JUMP)  ; LAB_004068b6
    CMP dword ptr [0x005b7624],0x20     ; 004068f3 | DAT_005b7624
        ;   Label: LAB_004068f3
    JNZ 0x00406908                      ; 004068fa
        ;   XREF to: 00406908 (CONDITIONAL_JUMP)  ; LAB_00406908
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004068fc | DAT_01c00c7c | LAB_0052f031
    JMP 0x004068b6                      ; 00406906
        ;   XREF to: 004068b6 (UNCONDITIONAL_JUMP)  ; LAB_004068b6
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406908 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00406908
    JMP 0x004068b6                      ; 00406912
        ;   XREF to: 004068b6 (UNCONDITIONAL_JUMP)  ; LAB_004068b6

