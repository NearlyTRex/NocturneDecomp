; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005b19a0(undefined2 *param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b12a0 at 005b1438
;
; Called Functions:
;   crt_unknown.c_FUN_005aca00
;   unkafter_asgaya.cpp_FUN_005ae560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b19a0
        ;   Label: unkafter_2d.cpp_FUN_005b19a0
    PUSH ESI                            ; 005b19a1
    PUSH EDI                            ; 005b19a2
    PUSH EBP                            ; 005b19a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b19a4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b19a8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005b19ac
    XOR ESI,ESI                         ; 005b19b0
    TEST EDI,EDI                        ; 005b19b2
    JZ 0x005b19ee                       ; 005b19b4
        ;   XREF to: 005b19ee (CONDITIONAL_JUMP)  ; LAB_005b19ee
    TEST EBP,EBP                        ; 005b19b6
        ;   Label: LAB_005b19b6
    JBE 0x005b1a13                      ; 005b19b8
        ;   XREF to: 005b1a13 (CONDITIONAL_JUMP)  ; LAB_005b1a13
    CMP byte ptr [EBX],0x0              ; 005b19ba
    JZ 0x005b19d5                       ; 005b19bd
        ;   XREF to: 005b19d5 (CONDITIONAL_JUMP)  ; LAB_005b19d5
    PUSH 0x2                            ; 005b19bf
    PUSH EBX                            ; 005b19c1
    PUSH EDI                            ; 005b19c2
    CALL unkafter_asgaya.cpp_FUN_005ae560 ; 005b19c3
        ;   XREF to: 005ae560 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae560()
    ADD ESP,0xc                         ; 005b19c8
    CMP EAX,-0x1                        ; 005b19cb
    JNZ 0x005b19dc                      ; 005b19ce
        ;   XREF to: 005b19dc (CONDITIONAL_JUMP)  ; LAB_005b19dc
    POP EBP                             ; 005b19d0
    POP EDI                             ; 005b19d1
    POP ESI                             ; 005b19d2
    POP EBX                             ; 005b19d3
    RET                                 ; 005b19d4
    MOV word ptr [EDI],0x0              ; 005b19d5
        ;   Label: LAB_005b19d5
    JMP 0x005b1a13                      ; 005b19da
        ;   XREF to: 005b1a13 (UNCONDITIONAL_JUMP)  ; LAB_005b1a13
    PUSH EBX                            ; 005b19dc
        ;   Label: LAB_005b19dc
    DEC EBP                             ; 005b19dd
    CALL crt_unknown.c_FUN_005aca00     ; 005b19de
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD EDI,0x2                         ; 005b19e3
    INC ESI                             ; 005b19e6
    ADD ESP,0x4                         ; 005b19e7
    MOV EBX,EAX                         ; 005b19ea
    JMP 0x005b19b6                      ; 005b19ec
        ;   XREF to: 005b19b6 (UNCONDITIONAL_JUMP)  ; LAB_005b19b6
    CMP byte ptr [EBX],0x0              ; 005b19ee
        ;   Label: LAB_005b19ee
    JZ 0x005b1a13                       ; 005b19f1
        ;   XREF to: 005b1a13 (CONDITIONAL_JUMP)  ; LAB_005b1a13
    PUSH 0x2                            ; 005b19f3
    PUSH EBX                            ; 005b19f5
    PUSH 0x0                            ; 005b19f6
    CALL unkafter_asgaya.cpp_FUN_005ae560 ; 005b19f8
        ;   XREF to: 005ae560 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae560()
    ADD ESP,0xc                         ; 005b19fd
    CMP EAX,-0x1                        ; 005b1a00
    JZ 0x005b1a15                       ; 005b1a03
        ;   XREF to: 005b1a15 (CONDITIONAL_JUMP)  ; LAB_005b1a15
    PUSH EBX                            ; 005b1a05
    CALL crt_unknown.c_FUN_005aca00     ; 005b1a06
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    INC ESI                             ; 005b1a0b
    ADD ESP,0x4                         ; 005b1a0c
    MOV EBX,EAX                         ; 005b1a0f
    JMP 0x005b19ee                      ; 005b1a11
        ;   XREF to: 005b19ee (UNCONDITIONAL_JUMP)  ; LAB_005b19ee
    MOV EAX,ESI                         ; 005b1a13
        ;   Label: LAB_005b1a13
    POP EBP                             ; 005b1a15
        ;   Label: LAB_005b1a15
    POP EDI                             ; 005b1a16
    POP ESI                             ; 005b1a17
    POP EBX                             ; 005b1a18
    RET                                 ; 005b1a19

