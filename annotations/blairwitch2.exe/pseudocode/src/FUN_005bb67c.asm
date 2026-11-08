; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005bb67c(short *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_005bb938 at 005bbc67
;
; Called Functions:
;   FUN_005c21b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb67c
        ;   Label: FUN_005bb67c
    PUSH ESI                            ; 005bb67d
    PUSH EDI                            ; 005bb67e
    PUSH ES                             ; 005bb67f
    SUB ESP,0x4                         ; 005bb680
    MOV EDI,dword ptr [ESP + 0x20]      ; 005bb683
    LES EBX,[ESP + 0x18]                ; 005bb687
    XOR ESI,ESI                         ; 005bb68b
    CMP EDI,-0x1                        ; 005bb68d
    JNZ 0x005bb6ba                      ; 005bb690
        ;   XREF to: 005bb6ba (CONDITIONAL_JUMP)  ; LAB_005bb6ba
    MOV CX,word ptr ES:[EBX]            ; 005bb692
        ;   Label: LAB_005bb692
    TEST CX,CX                          ; 005bb696
    JZ 0x005bb6ea                       ; 005bb699
        ;   XREF to: 005bb6ea (CONDITIONAL_JUMP)  ; LAB_005bb6ea
    XOR EAX,EAX                         ; 005bb69b
    MOV AX,CX                           ; 005bb69d
    PUSH EAX                            ; 005bb6a0
    LEA EAX,[ESP + 0x4]                 ; 005bb6a1
    PUSH EAX                            ; 005bb6a5
    ADD EBX,0x2                         ; 005bb6a6
    CALL FUN_005c21b0                   ; 005bb6a9
        ;   XREF to: 005c21b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c21b0()
    ADD ESP,0x8                         ; 005bb6ae
    CMP EAX,-0x1                        ; 005bb6b1
    JZ 0x005bb692                       ; 005bb6b4
        ;   XREF to: 005bb692 (CONDITIONAL_JUMP)  ; LAB_005bb692
    ADD ESI,EAX                         ; 005bb6b6
    JMP 0x005bb692                      ; 005bb6b8
        ;   XREF to: 005bb692 (UNCONDITIONAL_JUMP)  ; LAB_005bb692
    MOV DX,word ptr ES:[EBX]            ; 005bb6ba
        ;   Label: LAB_005bb6ba
    TEST DX,DX                          ; 005bb6be
    JZ 0x005bb6e6                       ; 005bb6c1
        ;   XREF to: 005bb6e6 (CONDITIONAL_JUMP)  ; LAB_005bb6e6
    CMP ESI,EDI                         ; 005bb6c3
    JG 0x005bb6e6                       ; 005bb6c5
        ;   XREF to: 005bb6e6 (CONDITIONAL_JUMP)  ; LAB_005bb6e6
    XOR EAX,EAX                         ; 005bb6c7
    MOV AX,DX                           ; 005bb6c9
    PUSH EAX                            ; 005bb6cc
    LEA EAX,[ESP + 0x4]                 ; 005bb6cd
    PUSH EAX                            ; 005bb6d1
    ADD EBX,0x2                         ; 005bb6d2
    CALL FUN_005c21b0                   ; 005bb6d5
        ;   XREF to: 005c21b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c21b0()
    ADD ESP,0x8                         ; 005bb6da
    CMP EAX,-0x1                        ; 005bb6dd
    JZ 0x005bb6ba                       ; 005bb6e0
        ;   XREF to: 005bb6ba (CONDITIONAL_JUMP)  ; LAB_005bb6ba
    ADD ESI,EAX                         ; 005bb6e2
    JMP 0x005bb6ba                      ; 005bb6e4
        ;   XREF to: 005bb6ba (UNCONDITIONAL_JUMP)  ; LAB_005bb6ba
    CMP ESI,EDI                         ; 005bb6e6
        ;   Label: LAB_005bb6e6
    JG 0x005bb6ee                       ; 005bb6e8
        ;   XREF to: 005bb6ee (CONDITIONAL_JUMP)  ; LAB_005bb6ee
    MOV EAX,ESI                         ; 005bb6ea
        ;   Label: LAB_005bb6ea
    JMP 0x005bb6f0                      ; 005bb6ec
        ;   XREF to: 005bb6f0 (UNCONDITIONAL_JUMP)  ; LAB_005bb6f0
    MOV EAX,EDI                         ; 005bb6ee
        ;   Label: LAB_005bb6ee
    ADD ESP,0x4                         ; 005bb6f0
        ;   Label: LAB_005bb6f0
    POP ES                              ; 005bb6f3
    POP EDI                             ; 005bb6f4
    POP ESI                             ; 005bb6f5
    POP EBX                             ; 005bb6f6
    RET                                 ; 005bb6f7

