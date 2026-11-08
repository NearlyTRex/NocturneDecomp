; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004048e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004048e0
        ;   Label: FUN_004048e0
    PUSH ESI                            ; 004048e1
    PUSH EBP                            ; 004048e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004048e3
    LEA ESI,[EBX + 0x18]                ; 004048e7
    LEA EAX,[EBX + 0x8]                 ; 004048ea
    PUSH EAX                            ; 004048ed
    CALL FUN_00403920                   ; 004048ee
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004048f3
    TEST EAX,EAX                        ; 004048f6
    JZ 0x00404944                       ; 004048f8
        ;   XREF to: 00404944 (CONDITIONAL_JUMP)  ; LAB_00404944
    CMP dword ptr [0x01c6e2a0],0x0      ; 004048fa | DAT_01c6e2a0
    JNZ 0x0040495f                      ; 00404901
        ;   XREF to: 0040495f (CONDITIONAL_JUMP)  ; LAB_0040495f
    CMP dword ptr [0x005fba20],0x20     ; 00404903 | DAT_005fba20
    JNZ 0x00404953                      ; 0040490a
        ;   XREF to: 00404953 (CONDITIONAL_JUMP)  ; LAB_00404953
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040490c | DAT_01c6b5cc
    PUSH EDI                            ; 00404916
        ;   Label: LAB_00404916
    MOV EDI,0xd1                        ; 00404917
    MOV EBP,0x3                         ; 0040491c
    PUSH EBX                            ; 00404921
    MOV dword ptr [0x01c6e2b4],EDI      ; 00404922 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00404928 | DAT_01c6e2b8
    CALL FUN_004039d0                   ; 0040492e
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 00404933
    PUSH ESI                            ; 00404936
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404937
    PUSH EAX                            ; 0040493a
    CALL FUN_0043a840                   ; 0040493b
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 00404940
    POP EDI                             ; 00404943
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404944
        ;   Label: LAB_00404944
    ADD EBX,0x18                        ; 00404947
    SHL EAX,0x2                         ; 0040494a
    ADD EAX,EBX                         ; 0040494d
    POP EBP                             ; 0040494f
    POP ESI                             ; 00404950
    POP EBX                             ; 00404951
    RET                                 ; 00404952
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404953 | DAT_01c6b5cc
        ;   Label: LAB_00404953
    JMP 0x00404916                      ; 0040495d
        ;   XREF to: 00404916 (UNCONDITIONAL_JUMP)  ; LAB_00404916
    CMP dword ptr [0x005fba20],0x20     ; 0040495f | DAT_005fba20
        ;   Label: LAB_0040495f
    JNZ 0x00404974                      ; 00404966
        ;   XREF to: 00404974 (CONDITIONAL_JUMP)  ; LAB_00404974
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404968 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00404916                      ; 00404972
        ;   XREF to: 00404916 (UNCONDITIONAL_JUMP)  ; LAB_00404916
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404974 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00404974
    JMP 0x00404916                      ; 0040497e
        ;   XREF to: 00404916 (UNCONDITIONAL_JUMP)  ; LAB_00404916

