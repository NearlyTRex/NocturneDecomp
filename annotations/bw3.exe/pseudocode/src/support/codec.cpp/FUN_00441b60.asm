; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_00441b60(int param_1)
;
;
; XREF[2]:
;   support_codec.cpp_CInStreamPipe_dtor_FUN_004418c0 at 004418d3
;   support_codec.cpp_FUN_00441bf0 at 00441bf7
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441b60
        ;   Label: support_codec.cpp_FUN_00441b60
    PUSH ESI                            ; 00441b61
    PUSH EBP                            ; 00441b62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00441b63
    MOV EDX,dword ptr [EBX + 0x4]       ; 00441b67
    TEST EDX,EDX                        ; 00441b6a
    JZ 0x00441b8b                       ; 00441b6c
        ;   XREF to: 00441b8b (CONDITIONAL_JUMP)  ; LAB_00441b8b
    CMP dword ptr [EBX + 0xc],0x0       ; 00441b6e
    JZ 0x00441b84                       ; 00441b72
        ;   XREF to: 00441b84 (CONDITIONAL_JUMP)  ; LAB_00441b84
    MOV EAX,EDX                         ; 00441b74
    TEST EDX,EDX                        ; 00441b76
    JZ 0x00441b84                       ; 00441b78
        ;   XREF to: 00441b84 (CONDITIONAL_JUMP)  ; LAB_00441b84
    PUSH 0x2                            ; 00441b7a
    MOV EDX,dword ptr [EDX]             ; 00441b7c
    PUSH EAX                            ; 00441b7e
    CALL dword ptr [EDX]                ; 00441b7f
    ADD ESP,0x8                         ; 00441b81
    MOV dword ptr [EBX + 0x4],0x0       ; 00441b84
        ;   Label: LAB_00441b84
    MOV ESI,dword ptr [EBX + 0x8]       ; 00441b8b
        ;   Label: LAB_00441b8b
    TEST ESI,ESI                        ; 00441b8e
    JZ 0x00441baf                       ; 00441b90
        ;   XREF to: 00441baf (CONDITIONAL_JUMP)  ; LAB_00441baf
    CMP dword ptr [EBX + 0xc],0x0       ; 00441b92
    JZ 0x00441ba8                       ; 00441b96
        ;   XREF to: 00441ba8 (CONDITIONAL_JUMP)  ; LAB_00441ba8
    MOV EAX,ESI                         ; 00441b98
    TEST ESI,ESI                        ; 00441b9a
    JZ 0x00441ba8                       ; 00441b9c
        ;   XREF to: 00441ba8 (CONDITIONAL_JUMP)  ; LAB_00441ba8
    PUSH 0x2                            ; 00441b9e
    MOV EDX,dword ptr [ESI]             ; 00441ba0
    PUSH ESI                            ; 00441ba2
    CALL dword ptr [EDX]                ; 00441ba3
    ADD ESP,0x8                         ; 00441ba5
    MOV dword ptr [EBX + 0x8],0x0       ; 00441ba8
        ;   Label: LAB_00441ba8
    MOV EBP,dword ptr [EBX + 0x10]      ; 00441baf
        ;   Label: LAB_00441baf
    TEST EBP,EBP                        ; 00441bb2
    JNZ 0x00441bdd                      ; 00441bb4
        ;   XREF to: 00441bdd (CONDITIONAL_JUMP)  ; LAB_00441bdd
    MOV dword ptr [EBX + 0x14],0x0      ; 00441bb6
        ;   Label: LAB_00441bb6
    MOV dword ptr [EBX + 0x18],0x0      ; 00441bbd
    MOV dword ptr [EBX + 0x1c],0x0      ; 00441bc4
    MOV dword ptr [EBX + 0x20],0x0      ; 00441bcb
    MOV dword ptr [EBX + 0xc],0x0       ; 00441bd2
    POP EBP                             ; 00441bd9
    POP ESI                             ; 00441bda
    POP EBX                             ; 00441bdb
    RET                                 ; 00441bdc
    PUSH EBP                            ; 00441bdd
        ;   Label: LAB_00441bdd
    CALL crt_unknown.c_FUN_005a3770     ; 00441bde
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00441be3
    MOV dword ptr [EBX + 0x10],0x0      ; 00441be6
    JMP 0x00441bb6                      ; 00441bed
        ;   XREF to: 00441bb6 (UNCONDITIONAL_JUMP)  ; LAB_00441bb6

