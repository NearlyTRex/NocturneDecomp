; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00541bc0(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00541b90 = 00541c16
;   undefined4 DAT_005ede97
;
; Called Functions:
;   FUN_0042f240
;   FUN_00434590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541bc0
        ;   Label: FUN_00541bc0
    SUB ESP,0x4                         ; 00541bc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00541bc4
    PUSH EBX                            ; 00541bc8
    CALL FUN_0042f240                   ; 00541bc9
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 00541bce
    TEST EAX,EAX                        ; 00541bd1
    JZ 0x00541be6                       ; 00541bd3
        ;   XREF to: 00541be6 (CONDITIONAL_JUMP)  ; LAB_00541be6
    PUSH ESI                            ; 00541bd5
    MOV EDX,dword ptr [EBX + 0x1ffc0]   ; 00541bd6
    TEST EDX,EDX                        ; 00541bdc
    JNZ 0x00541beb                      ; 00541bde
        ;   XREF to: 00541beb (CONDITIONAL_JUMP)  ; LAB_00541beb
    MOV EAX,0x1                         ; 00541be0
    POP ESI                             ; 00541be5
    ADD ESP,0x4                         ; 00541be6
        ;   Label: LAB_00541be6
    POP EBX                             ; 00541be9
    RET                                 ; 00541bea
    PUSH EDX                            ; 00541beb
        ;   Label: LAB_00541beb
    MOV ESI,dword ptr [EDX + 0x154]     ; 00541bec
    CALL dword ptr [ESI + 0x10]         ; 00541bf2
    ADD ESP,0x4                         ; 00541bf5
    MOV EAX,dword ptr [EBX + 0x1ffc0]   ; 00541bf8
    XOR ESI,ESI                         ; 00541bfe
    TEST EAX,EAX                        ; 00541c00
    JZ 0x00541c1b                       ; 00541c02
        ;   XREF to: 00541c1b (CONDITIONAL_JUMP)  ; LAB_00541c1b
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00541c04
    CMP EAX,0x8                         ; 00541c0a
    JA 0x00541c16                       ; 00541c0d
        ;   XREF to: 00541c16 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x541b90]  ; 00541c0f | caseD_7 | caseD_8 | switchdataD_00541b90
        ;   Label: switchD
    MOV EAX,0x2                         ; 00541c16
        ;   Label: caseD_0
    PUSH EAX                            ; 00541c1b
        ;   Label: LAB_00541c1b
    PUSH EBX                            ; 00541c1c
    CALL FUN_00434590                   ; 00541c1d
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; undefined FUN_00434590()
    MOV dword ptr [ESP + 0xc],EAX       ; 00541c22
    FLD float ptr [ESP + 0xc]           ; 00541c26
    ADD ESP,0x8                         ; 00541c2a
    FCOMP double ptr [0x005ede97]       ; 00541c2d | DAT_005ede97
    FNSTSW AX                           ; 00541c33
    SAHF                                ; 00541c35
    JBE 0x00541c5d                      ; 00541c36
        ;   XREF to: 00541c5d (CONDITIONAL_JUMP)  ; LAB_00541c5d
    MOV EAX,dword ptr [EBX + 0x1ffc0]   ; 00541c38
        ;   Label: LAB_00541c38
    PUSH EAX                            ; 00541c3e
    MOV EBX,dword ptr [EAX + 0x154]     ; 00541c3f
    CALL dword ptr [EBX + 0xf0]         ; 00541c45
    ADD ESP,0x4                         ; 00541c4b
    MOV EAX,0x1                         ; 00541c4e
    POP ESI                             ; 00541c53
    ADD ESP,0x4                         ; 00541c54
    POP EBX                             ; 00541c57
    RET                                 ; 00541c58
    XOR EAX,EAX                         ; 00541c59
        ;   Label: caseD_8
    JMP 0x00541c1b                      ; 00541c5b
        ;   XREF to: 00541c1b (UNCONDITIONAL_JUMP)  ; LAB_00541c1b
    TEST ESI,ESI                        ; 00541c5d
        ;   Label: LAB_00541c5d
    JNZ 0x00541c38                      ; 00541c5f
        ;   XREF to: 00541c38 (CONDITIONAL_JUMP)  ; LAB_00541c38
    MOV EAX,0x1                         ; 00541c61
    POP ESI                             ; 00541c66
    ADD ESP,0x4                         ; 00541c67
    POP EBX                             ; 00541c6a
    RET                                 ; 00541c6b

