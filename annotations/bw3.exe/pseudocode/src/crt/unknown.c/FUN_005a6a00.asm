; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a6a00(undefined2 *param_1,undefined4 param_2,int param_3,code *param_4)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005a6190 at 005a64a2
;
; Called Functions:
;   crt_unknown.c_FUN_005ad320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6a00
        ;   Label: crt_unknown.c_FUN_005a6a00
    PUSH ESI                            ; 005a6a01
    PUSH EDI                            ; 005a6a02
    PUSH ES                             ; 005a6a03
    PUSH EBP                            ; 005a6a04
    SUB ESP,0x4                         ; 005a6a05
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a6a08
    MOV ES,word ptr [ESP + 0x20]        ; 005a6a0c
    MOV EDX,dword ptr [EBX + 0x28]      ; 005a6a10
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a6a13
    TEST EDX,EDX                        ; 005a6a17
    JLE 0x005a6a6d                      ; 005a6a19
        ;   XREF to: 005a6a6d (CONDITIONAL_JUMP)  ; LAB_005a6a6d
    XOR EAX,EAX                         ; 005a6a1b
        ;   Label: LAB_005a6a1b
    MOV AX,word ptr ES:[EBP]            ; 005a6a1d
    PUSH EAX                            ; 005a6a22
    LEA EAX,[ESP + 0x4]                 ; 005a6a23
    PUSH EAX                            ; 005a6a27
    ADD EBP,0x2                         ; 005a6a28
    CALL crt_unknown.c_FUN_005ad320     ; 005a6a2b
        ;   XREF to: 005ad320 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad320()
    ADD ESP,0x8                         ; 005a6a30
    MOV ESI,EAX                         ; 005a6a33
    CMP EAX,-0x1                        ; 005a6a35
    JZ 0x005a6a47                       ; 005a6a38
        ;   XREF to: 005a6a47 (CONDITIONAL_JUMP)  ; LAB_005a6a47
    CMP EAX,dword ptr [EBX + 0x28]      ; 005a6a3a
    JG 0x005a6a66                       ; 005a6a3d
        ;   XREF to: 005a6a66 (CONDITIONAL_JUMP)  ; LAB_005a6a66
    MOV EDI,ESP                         ; 005a6a3f
    DEC ESI                             ; 005a6a41
        ;   Label: LAB_005a6a41
    CMP ESI,-0x1                        ; 005a6a42
    JNZ 0x005a6a4f                      ; 005a6a45
        ;   XREF to: 005a6a4f (CONDITIONAL_JUMP)  ; LAB_005a6a4f
    CMP dword ptr [EBX + 0x28],0x0      ; 005a6a47
        ;   Label: LAB_005a6a47
    JG 0x005a6a1b                       ; 005a6a4b
        ;   XREF to: 005a6a1b (CONDITIONAL_JUMP)  ; LAB_005a6a1b
    JMP 0x005a6a6d                      ; 005a6a4d
        ;   XREF to: 005a6a6d (UNCONDITIONAL_JUMP)  ; LAB_005a6a6d
    XOR EAX,EAX                         ; 005a6a4f
        ;   Label: LAB_005a6a4f
    MOV AL,byte ptr [EDI]               ; 005a6a51
    PUSH EAX                            ; 005a6a53
    PUSH EBX                            ; 005a6a54
    CALL dword ptr [ESP + 0x30]         ; 005a6a55
    MOV EAX,dword ptr [EBX + 0x28]      ; 005a6a59
    INC EDI                             ; 005a6a5c
    DEC EAX                             ; 005a6a5d
    ADD ESP,0x8                         ; 005a6a5e
    MOV dword ptr [EBX + 0x28],EAX      ; 005a6a61
    JMP 0x005a6a41                      ; 005a6a64
        ;   XREF to: 005a6a41 (UNCONDITIONAL_JUMP)  ; LAB_005a6a41
    MOV dword ptr [EBX + 0x28],0x0      ; 005a6a66
        ;   Label: LAB_005a6a66
    ADD ESP,0x4                         ; 005a6a6d
        ;   Label: LAB_005a6a6d
    POP EBP                             ; 005a6a70
    POP ES                              ; 005a6a71
    POP EDI                             ; 005a6a72
    POP ESI                             ; 005a6a73
    POP EBX                             ; 005a6a74
    RET                                 ; 005a6a75

