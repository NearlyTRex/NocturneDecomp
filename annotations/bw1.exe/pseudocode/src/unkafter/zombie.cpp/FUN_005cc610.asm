; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_zombie_cpp_FUN_005cc610(undefined4 *param_1,short *param_2,uint param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c9428 at 005c93d0
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005ca4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc610
        ;   Label: unkafter_zombie.cpp_FUN_005cc610
    PUSH ESI                            ; 005cc611
    PUSH EDI                            ; 005cc612
    PUSH EBP                            ; 005cc613
    SUB ESP,0x4                         ; 005cc614
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005cc617
    MOV EDX,dword ptr [ESP + 0x18]      ; 005cc61b
    XOR EBP,EBP                         ; 005cc61f
    TEST EDX,EDX                        ; 005cc621
    JZ 0x005cc6a0                       ; 005cc623
        ;   XREF to: 005cc6a0 (CONDITIONAL_JUMP)  ; LAB_005cc6a0
    CMP dword ptr [ESP + 0x20],0x0      ; 005cc629
        ;   Label: LAB_005cc629
    JBE 0x005cc6c7                      ; 005cc62e
        ;   XREF to: 005cc6c7 (CONDITIONAL_JUMP)  ; LAB_005cc6c7
    MOV CX,word ptr [EBX]               ; 005cc634
    TEST CX,CX                          ; 005cc637
    JZ 0x005cc662                       ; 005cc63a
        ;   XREF to: 005cc662 (CONDITIONAL_JUMP)  ; LAB_005cc662
    XOR EAX,EAX                         ; 005cc63c
    MOV AX,CX                           ; 005cc63e
    PUSH EAX                            ; 005cc641
    LEA EAX,[ESP + 0x4]                 ; 005cc642
    PUSH EAX                            ; 005cc646
    CALL unkafter_zombie.cpp_FUN_005ca4b0 ; 005cc647
        ;   XREF to: 005ca4b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca4b0()
    MOV EDX,EAX                         ; 005cc64c
    ADD ESP,0x8                         ; 005cc64e
    CMP EAX,-0x1                        ; 005cc651
    JZ 0x005cc6c9                       ; 005cc654
        ;   XREF to: 005cc6c9 (CONDITIONAL_JUMP)  ; LAB_005cc6c9
    CMP EAX,dword ptr [ESP + 0x20]      ; 005cc65a
    JA 0x005cc6c7                       ; 005cc65e
        ;   XREF to: 005cc6c7 (CONDITIONAL_JUMP)  ; LAB_005cc6c7
    JMP 0x005cc66b                      ; 005cc660
        ;   XREF to: 005cc66b (UNCONDITIONAL_JUMP)  ; LAB_005cc66b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005cc662
        ;   Label: LAB_005cc662
    MOV byte ptr [EAX],0x0              ; 005cc666
    JMP 0x005cc6c7                      ; 005cc669
        ;   XREF to: 005cc6c7 (UNCONDITIONAL_JUMP)  ; LAB_005cc6c7
    MOV ESI,ESP                         ; 005cc66b
        ;   Label: LAB_005cc66b
    MOV EDI,dword ptr [ESP + 0x18]      ; 005cc66d
    MOV ECX,EAX                         ; 005cc671
    PUSH ES                             ; 005cc673
    MOV AX,DS                           ; 005cc674
    MOV ES,AX                           ; 005cc676
    PUSH EDI                            ; 005cc678
    MOV EAX,ECX                         ; 005cc679
    SHR ECX,0x2                         ; 005cc67b
    MOVSD.REP ES:EDI,ESI                ; 005cc67e
    MOV CL,AL                           ; 005cc680
    AND CL,0x3                          ; 005cc682
    MOVSB.REP ES:EDI,ESI                ; 005cc685
    POP EDI                             ; 005cc687
    POP ES                              ; 005cc688
    ADD EBX,0x2                         ; 005cc689
    ADD EBP,EDX                         ; 005cc68c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005cc68e
    ADD EDI,EDX                         ; 005cc692
    SUB EAX,EDX                         ; 005cc694
    MOV dword ptr [ESP + 0x18],EDI      ; 005cc696
    MOV dword ptr [ESP + 0x20],EAX      ; 005cc69a
    JMP 0x005cc629                      ; 005cc69e
        ;   XREF to: 005cc629 (UNCONDITIONAL_JUMP)  ; LAB_005cc629
    MOV DX,word ptr [EBX]               ; 005cc6a0
        ;   Label: LAB_005cc6a0
    TEST DX,DX                          ; 005cc6a3
    JZ 0x005cc6c7                       ; 005cc6a6
        ;   XREF to: 005cc6c7 (CONDITIONAL_JUMP)  ; LAB_005cc6c7
    XOR EAX,EAX                         ; 005cc6a8
    MOV AX,DX                           ; 005cc6aa
    PUSH EAX                            ; 005cc6ad
    LEA EAX,[ESP + 0x4]                 ; 005cc6ae
    PUSH EAX                            ; 005cc6b2
    CALL unkafter_zombie.cpp_FUN_005ca4b0 ; 005cc6b3
        ;   XREF to: 005ca4b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca4b0()
    ADD ESP,0x8                         ; 005cc6b8
    CMP EAX,-0x1                        ; 005cc6bb
    JZ 0x005cc6c9                       ; 005cc6be
        ;   XREF to: 005cc6c9 (CONDITIONAL_JUMP)  ; LAB_005cc6c9
    ADD EBX,0x2                         ; 005cc6c0
    ADD EBP,EAX                         ; 005cc6c3
    JMP 0x005cc6a0                      ; 005cc6c5
        ;   XREF to: 005cc6a0 (UNCONDITIONAL_JUMP)  ; LAB_005cc6a0
    MOV EAX,EBP                         ; 005cc6c7
        ;   Label: LAB_005cc6c7
    ADD ESP,0x4                         ; 005cc6c9
        ;   Label: LAB_005cc6c9
    POP EBP                             ; 005cc6cc
    POP EDI                             ; 005cc6cd
    POP ESI                             ; 005cc6ce
    POP EBX                             ; 005cc6cf
    RET                                 ; 005cc6d0

