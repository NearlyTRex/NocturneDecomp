; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004fd780(int param_1,uint param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00502890 at 00502964
;   FUN_00502d60 at 00502dbf
;
; Called Functions:
;   FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd780
        ;   Label: FUN_004fd780
    PUSH ESI                            ; 004fd781
    PUSH EDI                            ; 004fd782
    PUSH EBP                            ; 004fd783
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fd784
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fd788
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004fd78c
    MOV EDI,0x2                         ; 004fd790
    MOV CL,BL                           ; 004fd795
    SHL EDI,CL                          ; 004fd797
    MOV EAX,dword ptr [ESI + 0xc]       ; 004fd799
    DEC EDI                             ; 004fd79c
    AND EAX,0x7                         ; 004fd79d
    JNZ 0x004fd7cf                      ; 004fd7a0
        ;   XREF to: 004fd7cf (CONDITIONAL_JUMP)  ; LAB_004fd7cf
    PUSH EBX                            ; 004fd7a2
        ;   Label: LAB_004fd7a2
    PUSH ESI                            ; 004fd7a3
    CALL FUN_004fd5e0                   ; 004fd7a4
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fd7a9
    MOV EBX,EAX                         ; 004fd7ac
    MOV EAX,EBX                         ; 004fd7ae
        ;   Label: LAB_004fd7ae
    AND EAX,EDI                         ; 004fd7b0
    CMP EAX,EBP                         ; 004fd7b2
    JZ 0x004fd7bd                       ; 004fd7b4
        ;   XREF to: 004fd7bd (CONDITIONAL_JUMP)  ; LAB_004fd7bd
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004fd7b6
    TEST EAX,EAX                        ; 004fd7b9
    JZ 0x004fd7e2                       ; 004fd7bb
        ;   XREF to: 004fd7e2 (CONDITIONAL_JUMP)  ; LAB_004fd7e2
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004fd7bd
        ;   Label: LAB_004fd7bd
    TEST EAX,EAX                        ; 004fd7c0
    SETZ AL                             ; 004fd7c2
    AND EAX,0xff                        ; 004fd7c5
    POP EBP                             ; 004fd7ca
    POP EDI                             ; 004fd7cb
    POP ESI                             ; 004fd7cc
    POP EBX                             ; 004fd7cd
    RET                                 ; 004fd7ce
    MOV EDX,0x8                         ; 004fd7cf
        ;   Label: LAB_004fd7cf
    SUB EDX,EAX                         ; 004fd7d4
    PUSH EDX                            ; 004fd7d6
    PUSH ESI                            ; 004fd7d7
    CALL FUN_004fd5e0                   ; 004fd7d8
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fd7dd
    JMP 0x004fd7a2                      ; 004fd7e0
        ;   XREF to: 004fd7a2 (UNCONDITIONAL_JUMP)  ; LAB_004fd7a2
    PUSH 0x8                            ; 004fd7e2
        ;   Label: LAB_004fd7e2
    PUSH ESI                            ; 004fd7e4
    SHL EBX,0x8                         ; 004fd7e5
    CALL FUN_004fd5e0                   ; 004fd7e8
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fd7ed
    OR EBX,EAX                          ; 004fd7f0
    JMP 0x004fd7ae                      ; 004fd7f2
        ;   XREF to: 004fd7ae (UNCONDITIONAL_JUMP)  ; LAB_004fd7ae

