; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526050(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00528410 at 00528a4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526050
        ;   Label: FUN_00526050
    PUSH EBP                            ; 00526051
    MOV EAX,dword ptr [ESP + 0xc]       ; 00526052
    MOV EDX,dword ptr [ESP + 0x10]      ; 00526056
    MOV EBX,dword ptr [EAX + 0x531c]    ; 0052605a
    MOV ECX,dword ptr [EAX + 0x1314]    ; 00526060
    ADD EBX,EDX                         ; 00526066
    SUB ECX,EDX                         ; 00526068
    MOV dword ptr [EAX + 0x531c],EBX    ; 0052606a
    MOV dword ptr [EAX + 0x1314],ECX    ; 00526070
    CMP EBX,0x8                         ; 00526076
    JC 0x005260a4                       ; 00526079
        ;   XREF to: 005260a4 (CONDITIONAL_JUMP)  ; LAB_005260a4
    PUSH EDI                            ; 0052607b
    MOV EDI,dword ptr [EAX + 0x531c]    ; 0052607c
        ;   Label: LAB_0052607c
    SUB EDI,0x8                         ; 00526082
    MOV EBP,dword ptr [EAX + 0x1318]    ; 00526085
    MOV dword ptr [EAX + 0x531c],EDI    ; 0052608b
    DEC EBP                             ; 00526091
    MOV EDX,dword ptr [EAX + 0x531c]    ; 00526092
    MOV dword ptr [EAX + 0x1318],EBP    ; 00526098
    CMP EDX,0x8                         ; 0052609e
    JNC 0x0052607c                      ; 005260a1
        ;   XREF to: 0052607c (CONDITIONAL_JUMP)  ; LAB_0052607c
    POP EDI                             ; 005260a3
    POP EBP                             ; 005260a4
        ;   Label: LAB_005260a4
    POP EBX                             ; 005260a5
    RET                                 ; 005260a6

