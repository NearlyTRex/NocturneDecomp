; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a67bc(short *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_005a6a78 at 005a6da7
;
; Called Functions:
;   FUN_005ad320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a67bc
        ;   Label: FUN_005a67bc
    PUSH ESI                            ; 005a67bd
    PUSH EDI                            ; 005a67be
    PUSH ES                             ; 005a67bf
    SUB ESP,0x4                         ; 005a67c0
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a67c3
    LES EBX,[ESP + 0x18]                ; 005a67c7
    XOR ESI,ESI                         ; 005a67cb
    CMP EDI,-0x1                        ; 005a67cd
    JNZ 0x005a67fa                      ; 005a67d0
        ;   XREF to: 005a67fa (CONDITIONAL_JUMP)  ; LAB_005a67fa
    MOV CX,word ptr ES:[EBX]            ; 005a67d2
        ;   Label: LAB_005a67d2
    TEST CX,CX                          ; 005a67d6
    JZ 0x005a682a                       ; 005a67d9
        ;   XREF to: 005a682a (CONDITIONAL_JUMP)  ; LAB_005a682a
    XOR EAX,EAX                         ; 005a67db
    MOV AX,CX                           ; 005a67dd
    PUSH EAX                            ; 005a67e0
    LEA EAX,[ESP + 0x4]                 ; 005a67e1
    PUSH EAX                            ; 005a67e5
    ADD EBX,0x2                         ; 005a67e6
    CALL FUN_005ad320                   ; 005a67e9
        ;   XREF to: 005ad320 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad320()
    ADD ESP,0x8                         ; 005a67ee
    CMP EAX,-0x1                        ; 005a67f1
    JZ 0x005a67d2                       ; 005a67f4
        ;   XREF to: 005a67d2 (CONDITIONAL_JUMP)  ; LAB_005a67d2
    ADD ESI,EAX                         ; 005a67f6
    JMP 0x005a67d2                      ; 005a67f8
        ;   XREF to: 005a67d2 (UNCONDITIONAL_JUMP)  ; LAB_005a67d2
    MOV DX,word ptr ES:[EBX]            ; 005a67fa
        ;   Label: LAB_005a67fa
    TEST DX,DX                          ; 005a67fe
    JZ 0x005a6826                       ; 005a6801
        ;   XREF to: 005a6826 (CONDITIONAL_JUMP)  ; LAB_005a6826
    CMP ESI,EDI                         ; 005a6803
    JG 0x005a6826                       ; 005a6805
        ;   XREF to: 005a6826 (CONDITIONAL_JUMP)  ; LAB_005a6826
    XOR EAX,EAX                         ; 005a6807
    MOV AX,DX                           ; 005a6809
    PUSH EAX                            ; 005a680c
    LEA EAX,[ESP + 0x4]                 ; 005a680d
    PUSH EAX                            ; 005a6811
    ADD EBX,0x2                         ; 005a6812
    CALL FUN_005ad320                   ; 005a6815
        ;   XREF to: 005ad320 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad320()
    ADD ESP,0x8                         ; 005a681a
    CMP EAX,-0x1                        ; 005a681d
    JZ 0x005a67fa                       ; 005a6820
        ;   XREF to: 005a67fa (CONDITIONAL_JUMP)  ; LAB_005a67fa
    ADD ESI,EAX                         ; 005a6822
    JMP 0x005a67fa                      ; 005a6824
        ;   XREF to: 005a67fa (UNCONDITIONAL_JUMP)  ; LAB_005a67fa
    CMP ESI,EDI                         ; 005a6826
        ;   Label: LAB_005a6826
    JG 0x005a682e                       ; 005a6828
        ;   XREF to: 005a682e (CONDITIONAL_JUMP)  ; LAB_005a682e
    MOV EAX,ESI                         ; 005a682a
        ;   Label: LAB_005a682a
    JMP 0x005a6830                      ; 005a682c
        ;   XREF to: 005a6830 (UNCONDITIONAL_JUMP)  ; LAB_005a6830
    MOV EAX,EDI                         ; 005a682e
        ;   Label: LAB_005a682e
    ADD ESP,0x4                         ; 005a6830
        ;   Label: LAB_005a6830
    POP ES                              ; 005a6833
    POP EDI                             ; 005a6834
    POP ESI                             ; 005a6835
    POP EBX                             ; 005a6836
    RET                                 ; 005a6837

