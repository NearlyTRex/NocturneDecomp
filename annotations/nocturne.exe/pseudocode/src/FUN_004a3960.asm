; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3960(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cc10 at 0049d08a
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c78b04
;   undefined4 DAT_01c78b08
;   undefined4 DAT_01c78b0c
;   undefined4 DAT_01c78b10
;
; Called Functions:
;   FUN_00403e60
;   FUN_004a3860
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3960
        ;   Label: FUN_004a3960
    PUSH ESI                            ; 004a3961
    PUSH EDI                            ; 004a3962
    PUSH EBP                            ; 004a3963
    SUB ESP,0x4                         ; 004a3964
    MOV EDI,dword ptr [0x005b761c]      ; 004a3967 | DAT_005b761c
    MOV EDX,dword ptr [0x01c78b04]      ; 004a396d | DAT_01c78b04
    TEST EDX,EDX                        ; 004a3973
    JZ 0x004a3a13                       ; 004a3975
        ;   XREF to: 004a3a13 (CONDITIONAL_JUMP)  ; LAB_004a3a13
    CMP EDX,0x4                         ; 004a397b
    JGE 0x004a3a21                      ; 004a397e
        ;   XREF to: 004a3a21 (CONDITIONAL_JUMP)  ; LAB_004a3a21
    CMP EDX,0x1                         ; 004a3984
    JZ 0x004a3a21                       ; 004a3987
        ;   XREF to: 004a3a21 (CONDITIONAL_JUMP)  ; LAB_004a3a21
    CMP dword ptr [0x01c78b08],0x3f800000 ; 004a398d | DAT_01c78b08
    JL 0x004a3a21                       ; 004a3997
        ;   XREF to: 004a3a21 (CONDITIONAL_JUMP)  ; LAB_004a3a21
    CALL FUN_004a3860                   ; 004a399d
        ;   XREF to: 004a3860 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3860()
    CMP dword ptr [0x005b7624],0x20     ; 004a39a2 | DAT_005b7624
    JNZ 0x004a3a13                      ; 004a39a9
        ;   XREF to: 004a3a13 (CONDITIONAL_JUMP)  ; LAB_004a3a13
    FLD float ptr [0x01c78b08]          ; 004a39ab | DAT_01c78b08
    FMUL ST0                            ; 004a39b1
    MOV EAX,[0x005b7620]                ; 004a39b3 | DAT_005b7620
    XOR ESI,ESI                         ; 004a39b8
    CALL FUN_00563a30                   ; 004a39ba
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP]               ; 004a39bf
    TEST EAX,EAX                        ; 004a39c2
    JLE 0x004a3a13                      ; 004a39c4
        ;   XREF to: 004a3a13 (CONDITIONAL_JUMP)  ; LAB_004a3a13
    XOR EBP,EBP                         ; 004a39c6
    MOV EDI,dword ptr [0x005b761c]      ; 004a39c8 | DAT_005b761c
        ;   Label: LAB_004a39c8
    MOV EDX,dword ptr [EBP + 0x1bd2fa0] ; 004a39ce | DAT_01bd2fa0 | DAT_01bd2fa4
    XOR EAX,EAX                         ; 004a39d4
    TEST EDI,EDI                        ; 004a39d6
    JLE 0x004a39ff                      ; 004a39d8
        ;   XREF to: 004a39ff (CONDITIONAL_JUMP)  ; LAB_004a39ff
    MOV EBX,dword ptr [0x01c78b0c]      ; 004a39da | DAT_01c78b0c
        ;   Label: LAB_004a39da
    SUB EBX,EAX                         ; 004a39e0
    IMUL EBX,EBX                        ; 004a39e2
    MOV ECX,dword ptr [0x01c78b10]      ; 004a39e5 | DAT_01c78b10
    SUB ECX,ESI                         ; 004a39eb
    IMUL ECX,ECX                        ; 004a39ed
    ADD ECX,EBX                         ; 004a39f0
    CMP ECX,dword ptr [ESP]             ; 004a39f2
    JG 0x004a3a48                       ; 004a39f5
        ;   XREF to: 004a3a48 (CONDITIONAL_JUMP)  ; LAB_004a3a48
    INC EAX                             ; 004a39f7
        ;   Label: LAB_004a39f7
    ADD EDX,0x4                         ; 004a39f8
    CMP EAX,EDI                         ; 004a39fb
    JL 0x004a39da                       ; 004a39fd
        ;   XREF to: 004a39da (CONDITIONAL_JUMP)  ; LAB_004a39da
    MOV EDX,dword ptr [0x005b7620]      ; 004a39ff | DAT_005b7620
        ;   Label: LAB_004a39ff
    ADD EBP,0x4                         ; 004a3a05
    INC ESI                             ; 004a3a08
    MOV dword ptr [0x005b761c],EDI      ; 004a3a09 | DAT_005b761c
    CMP ESI,EDX                         ; 004a3a0f
    JL 0x004a39c8                       ; 004a3a11
        ;   XREF to: 004a39c8 (CONDITIONAL_JUMP)  ; LAB_004a39c8
    MOV EDI,dword ptr [0x005b761c]      ; 004a3a13 | DAT_005b761c
        ;   Label: LAB_004a3a13
    ADD ESP,0x4                         ; 004a3a19
    POP EBP                             ; 004a3a1c
    POP EDI                             ; 004a3a1d
    POP ESI                             ; 004a3a1e
    POP EBX                             ; 004a3a1f
    RET                                 ; 004a3a20
    MOV EAX,[0x005b7620]                ; 004a3a21 | DAT_005b7620
        ;   Label: LAB_004a3a21
    PUSH 0x0                            ; 004a3a26
    DEC EAX                             ; 004a3a28
    MOV EDI,dword ptr [0x005b761c]      ; 004a3a29 | DAT_005b761c
    PUSH EAX                            ; 004a3a2f
    LEA EAX,[EDI + -0x1]                ; 004a3a30
    PUSH EAX                            ; 004a3a33
    PUSH 0x0                            ; 004a3a34
    PUSH 0x0                            ; 004a3a36
    CALL FUN_00403e60                   ; 004a3a38
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00403e60()
    MOV EDI,dword ptr [0x005b761c]      ; 004a3a3d | DAT_005b761c
    ADD ESP,0x14                        ; 004a3a43
    JMP 0x004a3a13                      ; 004a3a46
        ;   XREF to: 004a3a13 (UNCONDITIONAL_JUMP)  ; LAB_004a3a13
    MOV dword ptr [EDX],0x0             ; 004a3a48
        ;   Label: LAB_004a3a48
    JMP 0x004a39f7                      ; 004a3a4e
        ;   XREF to: 004a39f7 (UNCONDITIONAL_JUMP)  ; LAB_004a39f7

