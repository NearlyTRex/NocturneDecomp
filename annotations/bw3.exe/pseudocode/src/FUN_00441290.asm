; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00441290(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0044f750 at 0044fcf0
;   FUN_004bda10 at 004bdddd
;
; Called Functions:
;   FUN_00440440
;   FUN_00440ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441290
        ;   Label: FUN_00441290
    PUSH EDI                            ; 00441291
    MOV EBX,dword ptr [ESP + 0xc]       ; 00441292
    MOV EDX,dword ptr [EBX + 0x30]      ; 00441296
    TEST EDX,EDX                        ; 00441299
    JL 0x004412dd                       ; 0044129b
        ;   XREF to: 004412dd (CONDITIONAL_JUMP)  ; LAB_004412dd
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044129d
    PUSH ECX                            ; 004412a1
    LEA EAX,[EBX + 0x18]                ; 004412a2
    PUSH EAX                            ; 004412a5
    PUSH EDX                            ; 004412a6
    LEA EAX,[EBX + 0x4]                 ; 004412a7
    PUSH EAX                            ; 004412aa
    CALL FUN_00440ef0                   ; 004412ab
        ;   XREF to: 00440ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00440ef0()
    ADD ESP,0x10                        ; 004412b0
    TEST EAX,EAX                        ; 004412b3
    JZ 0x004412dd                       ; 004412b5
        ;   XREF to: 004412dd (CONDITIONAL_JUMP)  ; LAB_004412dd
    CMP EAX,-0x1                        ; 004412b7
    JZ 0x004412d0                       ; 004412ba
        ;   XREF to: 004412d0 (CONDITIONAL_JUMP)  ; LAB_004412d0
    CMP EAX,-0x2                        ; 004412bc
    JNZ 0x004412d8                      ; 004412bf
        ;   XREF to: 004412d8 (CONDITIONAL_JUMP)  ; LAB_004412d8
    MOV EAX,0x2                         ; 004412c1
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004412c6
    POP EDI                             ; 004412cd
    POP EBX                             ; 004412ce
    RET                                 ; 004412cf
    MOV EAX,0x2                         ; 004412d0
        ;   Label: LAB_004412d0
    POP EDI                             ; 004412d5
    POP EBX                             ; 004412d6
    RET                                 ; 004412d7
    XOR EAX,EAX                         ; 004412d8
        ;   Label: LAB_004412d8
    POP EDI                             ; 004412da
    POP EBX                             ; 004412db
    RET                                 ; 004412dc
    MOV EDI,dword ptr [ESP + 0x10]      ; 004412dd
        ;   Label: LAB_004412dd
    PUSH EDI                            ; 004412e1
    ADD EBX,0x18                        ; 004412e2
    PUSH EBX                            ; 004412e5
    CALL FUN_00440440                   ; 004412e6
        ;   XREF to: 00440440 (UNCONDITIONAL_CALL)  ; undefined FUN_00440440()
    ADD ESP,0x8                         ; 004412eb
    TEST EAX,EAX                        ; 004412ee
    JZ 0x004412ff                       ; 004412f0
        ;   XREF to: 004412ff (CONDITIONAL_JUMP)  ; LAB_004412ff
    CMP EAX,-0x1                        ; 004412f2
    JNZ 0x004412ff                      ; 004412f5
        ;   XREF to: 004412ff (CONDITIONAL_JUMP)  ; LAB_004412ff
    MOV EAX,0x2                         ; 004412f7
    POP EDI                             ; 004412fc
    POP EBX                             ; 004412fd
    RET                                 ; 004412fe
    MOV EAX,0x1                         ; 004412ff
        ;   Label: LAB_004412ff
    POP EDI                             ; 00441304
    POP EBX                             ; 00441305
    RET                                 ; 00441306

