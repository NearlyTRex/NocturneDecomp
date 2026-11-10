; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b08a0(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005aede0 at 005aee02
;   crt_unknown.c_FUN_005b12a0 at 005b12c0
;
; Called Functions:
;   crt_unknown.c_FUN_005aca00
;   crt_unknown.c_FUN_005aca30
;   crt_unknown.c_FUN_005aca50
;   crt_unknown.c_FUN_005af2a0
;   crt_unknown.c_FUN_005b0d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b08a0
        ;   Label: crt_unknown.c_FUN_005b08a0
    SUB ESP,0x4                         ; 005b08a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b08a4
    MOV EAX,ESP                         ; 005b08a8
    PUSH EAX                            ; 005b08aa
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b08ab
    PUSH EDX                            ; 005b08af
    CALL crt_unknown.c_FUN_005aca30     ; 005b08b0
        ;   XREF to: 005aca30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca30()
    ADD ESP,0x8                         ; 005b08b5
    MOV EAX,ESP                         ; 005b08b8
    PUSH EAX                            ; 005b08ba
    CALL crt_unknown.c_FUN_005aca50     ; 005b08bb
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca50()
    ADD ESP,0x4                         ; 005b08c0
    XOR DL,DL                           ; 005b08c3
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005b08c5
    PUSH EBX                            ; 005b08c8
        ;   Label: LAB_005b08c8
    CALL crt_unknown.c_FUN_005af2a0     ; 005b08c9
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af2a0()
    ADD ESP,0x4                         ; 005b08ce
    TEST EAX,EAX                        ; 005b08d1
    JNZ 0x005b08f2                      ; 005b08d3
        ;   XREF to: 005b08f2 (CONDITIONAL_JUMP)  ; LAB_005b08f2
    MOV EAX,ESP                         ; 005b08d5
    PUSH EAX                            ; 005b08d7
    PUSH EBX                            ; 005b08d8
    CALL crt_unknown.c_FUN_005b0d00     ; 005b08d9
        ;   XREF to: 005b0d00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0d00()
    ADD ESP,0x8                         ; 005b08de
    TEST EAX,EAX                        ; 005b08e1
    JZ 0x005b08f2                       ; 005b08e3
        ;   XREF to: 005b08f2 (CONDITIONAL_JUMP)  ; LAB_005b08f2
    PUSH EBX                            ; 005b08e5
    CALL crt_unknown.c_FUN_005aca00     ; 005b08e6
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    MOV EBX,EAX                         ; 005b08eb
    ADD ESP,0x4                         ; 005b08ed
    JMP 0x005b08c8                      ; 005b08f0
        ;   XREF to: 005b08c8 (UNCONDITIONAL_JUMP)  ; LAB_005b08c8
    PUSH EBX                            ; 005b08f2
        ;   Label: LAB_005b08f2
    CALL crt_unknown.c_FUN_005af2a0     ; 005b08f3
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af2a0()
    ADD ESP,0x4                         ; 005b08f8
    TEST EAX,EAX                        ; 005b08fb
    JZ 0x005b0908                       ; 005b08fd
        ;   XREF to: 005b0908 (CONDITIONAL_JUMP)  ; LAB_005b0908
    CMP dword ptr [ESP + 0x10],0x0      ; 005b08ff
    JZ 0x005b0908                       ; 005b0904
        ;   XREF to: 005b0908 (CONDITIONAL_JUMP)  ; LAB_005b0908
    XOR EBX,EBX                         ; 005b0906
    MOV EAX,EBX                         ; 005b0908
        ;   Label: LAB_005b0908
    ADD ESP,0x4                         ; 005b090a
    POP EBX                             ; 005b090d
    RET                                 ; 005b090e

