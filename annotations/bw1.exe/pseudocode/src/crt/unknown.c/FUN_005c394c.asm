; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c394c(short *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3c08 at 005c3f37
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005ca4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c394c
        ;   Label: crt_unknown.c_FUN_005c394c
    PUSH ESI                            ; 005c394d
    PUSH EDI                            ; 005c394e
    PUSH ES                             ; 005c394f
    SUB ESP,0x4                         ; 005c3950
    MOV EDI,dword ptr [ESP + 0x20]      ; 005c3953
    LES EBX,[ESP + 0x18]                ; 005c3957
    XOR ESI,ESI                         ; 005c395b
    CMP EDI,-0x1                        ; 005c395d
    JNZ 0x005c398a                      ; 005c3960
        ;   XREF to: 005c398a (CONDITIONAL_JUMP)  ; LAB_005c398a
    MOV CX,word ptr ES:[EBX]            ; 005c3962
        ;   Label: LAB_005c3962
    TEST CX,CX                          ; 005c3966
    JZ 0x005c39ba                       ; 005c3969
        ;   XREF to: 005c39ba (CONDITIONAL_JUMP)  ; LAB_005c39ba
    XOR EAX,EAX                         ; 005c396b
    MOV AX,CX                           ; 005c396d
    PUSH EAX                            ; 005c3970
    LEA EAX,[ESP + 0x4]                 ; 005c3971
    PUSH EAX                            ; 005c3975
    ADD EBX,0x2                         ; 005c3976
    CALL unkafter_zombie.cpp_FUN_005ca4b0 ; 005c3979
        ;   XREF to: 005ca4b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca4b0()
    ADD ESP,0x8                         ; 005c397e
    CMP EAX,-0x1                        ; 005c3981
    JZ 0x005c3962                       ; 005c3984
        ;   XREF to: 005c3962 (CONDITIONAL_JUMP)  ; LAB_005c3962
    ADD ESI,EAX                         ; 005c3986
    JMP 0x005c3962                      ; 005c3988
        ;   XREF to: 005c3962 (UNCONDITIONAL_JUMP)  ; LAB_005c3962
    MOV DX,word ptr ES:[EBX]            ; 005c398a
        ;   Label: LAB_005c398a
    TEST DX,DX                          ; 005c398e
    JZ 0x005c39b6                       ; 005c3991
        ;   XREF to: 005c39b6 (CONDITIONAL_JUMP)  ; LAB_005c39b6
    CMP ESI,EDI                         ; 005c3993
    JG 0x005c39b6                       ; 005c3995
        ;   XREF to: 005c39b6 (CONDITIONAL_JUMP)  ; LAB_005c39b6
    XOR EAX,EAX                         ; 005c3997
    MOV AX,DX                           ; 005c3999
    PUSH EAX                            ; 005c399c
    LEA EAX,[ESP + 0x4]                 ; 005c399d
    PUSH EAX                            ; 005c39a1
    ADD EBX,0x2                         ; 005c39a2
    CALL unkafter_zombie.cpp_FUN_005ca4b0 ; 005c39a5
        ;   XREF to: 005ca4b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca4b0()
    ADD ESP,0x8                         ; 005c39aa
    CMP EAX,-0x1                        ; 005c39ad
    JZ 0x005c398a                       ; 005c39b0
        ;   XREF to: 005c398a (CONDITIONAL_JUMP)  ; LAB_005c398a
    ADD ESI,EAX                         ; 005c39b2
    JMP 0x005c398a                      ; 005c39b4
        ;   XREF to: 005c398a (UNCONDITIONAL_JUMP)  ; LAB_005c398a
    CMP ESI,EDI                         ; 005c39b6
        ;   Label: LAB_005c39b6
    JG 0x005c39be                       ; 005c39b8
        ;   XREF to: 005c39be (CONDITIONAL_JUMP)  ; LAB_005c39be
    MOV EAX,ESI                         ; 005c39ba
        ;   Label: LAB_005c39ba
    JMP 0x005c39c0                      ; 005c39bc
        ;   XREF to: 005c39c0 (UNCONDITIONAL_JUMP)  ; LAB_005c39c0
    MOV EAX,EDI                         ; 005c39be
        ;   Label: LAB_005c39be
    ADD ESP,0x4                         ; 005c39c0
        ;   Label: LAB_005c39c0
    POP ES                              ; 005c39c3
    POP EDI                             ; 005c39c4
    POP ESI                             ; 005c39c5
    POP EBX                             ; 005c39c6
    RET                                 ; 005c39c7

