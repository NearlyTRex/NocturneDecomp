; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a9bc0(undefined4 *param_1)
;
;
; XREF[8]:
;   crt_stdio.c_fclose_FUN_005a3bc0 at 005a3bec
;   crt_stdio.c_fputc_FUN_005a5d70 at 005a5e31
;   crt_stdio.c_fseek_FUN_005a457c at 005a45ac
;   crt_stdio.c_fwrite_FUN_005a48e0 at 005a4a28
;   crt_unknown.c_FUN_005a7e50 at 005a7eff
;   crt_unknown.c_FUN_005a93bc at 005a93e7
;   crt_unknown.c_FUN_005accf0 at 005acd01
;   unkafter_2d.cpp_FUN_005b0ee0 at 005b0f67
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9cf0
;   crt_unknown.c_FUN_005aac30
;   unkafter_asgaya.cpp_FUN_005ae9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9bc0
        ;   Label: crt_unknown.c_FUN_005a9bc0
    PUSH ESI                            ; 005a9bc1
    PUSH EDI                            ; 005a9bc2
    PUSH EBP                            ; 005a9bc3
    SUB ESP,0x4                         ; 005a9bc4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a9bc7
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a9bcb
    PUSH EDX                            ; 005a9bce
    XOR EDI,EDI                         ; 005a9bcf
    CALL dword ptr [0x006079a4]         ; 005a9bd1 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV AH,byte ptr [EBX + 0xd]         ; 005a9bd7
    ADD ESP,0x4                         ; 005a9bda
    TEST AH,0x10                        ; 005a9bdd
    JZ 0x005a9c66                       ; 005a9be0
        ;   XREF to: 005a9c66 (CONDITIONAL_JUMP)  ; LAB_005a9c66
    MOV CH,AH                           ; 005a9be6
    AND CH,0xef                         ; 005a9be8
    MOV AL,byte ptr [EBX + 0xc]         ; 005a9beb
    MOV byte ptr [EBX + 0xd],CH         ; 005a9bee
    TEST AL,0x2                         ; 005a9bf1
    JZ 0x005a9ca1                       ; 005a9bf3
        ;   XREF to: 005a9ca1 (CONDITIONAL_JUMP)  ; LAB_005a9ca1
    MOV EBP,dword ptr [EBX + 0x8]       ; 005a9bf9
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a9bfc
    TEST EAX,EAX                        ; 005a9bff
    JZ 0x005a9ca1                       ; 005a9c01
        ;   XREF to: 005a9ca1 (CONDITIONAL_JUMP)  ; LAB_005a9ca1
    MOV ESI,dword ptr [EBX + 0x4]       ; 005a9c07
    MOV EBP,EAX                         ; 005a9c0a
    TEST ESI,ESI                        ; 005a9c0c
    JZ 0x005a9ca1                       ; 005a9c0e
        ;   XREF to: 005a9ca1 (CONDITIONAL_JUMP)  ; LAB_005a9ca1
    TEST EDI,EDI                        ; 005a9c14
        ;   Label: LAB_005a9c14
    JNZ 0x005a9ca1                      ; 005a9c16
        ;   XREF to: 005a9ca1 (CONDITIONAL_JUMP)  ; LAB_005a9ca1
    PUSH ESI                            ; 005a9c1c
    PUSH EBP                            ; 005a9c1d
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a9c1e
    PUSH EAX                            ; 005a9c21
    CALL crt_unknown.c_FUN_005aac30     ; 005a9c22
        ;   XREF to: 005aac30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aac30()
    ADD ESP,0xc                         ; 005a9c27
    MOV dword ptr [ESP],EAX             ; 005a9c2a
    CMP EAX,-0x1                        ; 005a9c2d
    JNZ 0x005a9c3f                      ; 005a9c30
        ;   XREF to: 005a9c3f (CONDITIONAL_JUMP)  ; LAB_005a9c3f
    MOV DL,byte ptr [EBX + 0xc]         ; 005a9c32
    OR DL,0x20                          ; 005a9c35
    MOV EDI,EAX                         ; 005a9c38
    MOV byte ptr [EBX + 0xc],DL         ; 005a9c3a
    JMP 0x005a9c5b                      ; 005a9c3d
        ;   XREF to: 005a9c5b (UNCONDITIONAL_JUMP)  ; LAB_005a9c5b
    TEST EAX,EAX                        ; 005a9c3f
        ;   Label: LAB_005a9c3f
    JNZ 0x005a9c5b                      ; 005a9c41
        ;   XREF to: 005a9c5b (CONDITIONAL_JUMP)  ; LAB_005a9c5b
    PUSH 0xc                            ; 005a9c43
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a9c45
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV AH,byte ptr [EBX + 0xc]         ; 005a9c4a
    MOV EDI,0xffffffff                  ; 005a9c4d
    OR AH,0x20                          ; 005a9c52
    ADD ESP,0x4                         ; 005a9c55
    MOV byte ptr [EBX + 0xc],AH         ; 005a9c58
    MOV EDX,dword ptr [ESP]             ; 005a9c5b
        ;   Label: LAB_005a9c5b
    ADD EBP,EDX                         ; 005a9c5e
    SUB ESI,EDX                         ; 005a9c60
    JNZ 0x005a9c14                      ; 005a9c62
        ;   XREF to: 005a9c14 (CONDITIONAL_JUMP)  ; LAB_005a9c14
    JMP 0x005a9ca1                      ; 005a9c64
        ;   XREF to: 005a9ca1 (UNCONDITIONAL_JUMP)  ; LAB_005a9ca1
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a9c66
        ;   Label: LAB_005a9c66
    CMP dword ptr [EAX + 0x8],0x0       ; 005a9c69
    JZ 0x005a9ca1                       ; 005a9c6d
        ;   XREF to: 005a9ca1 (CONDITIONAL_JUMP)  ; LAB_005a9ca1
    AND byte ptr [EBX + 0xc],0xef       ; 005a9c6f
    TEST byte ptr [EBX + 0xd],0x20      ; 005a9c73
    JNZ 0x005a9ca1                      ; 005a9c77
        ;   XREF to: 005a9ca1 (CONDITIONAL_JUMP)  ; LAB_005a9ca1
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a9c79
    TEST EAX,EAX                        ; 005a9c7c
    JZ 0x005a9c91                       ; 005a9c7e
        ;   XREF to: 005a9c91 (CONDITIONAL_JUMP)  ; LAB_005a9c91
    PUSH 0x1                            ; 005a9c80
    NEG EAX                             ; 005a9c82
    PUSH EAX                            ; 005a9c84
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a9c85
    PUSH ESI                            ; 005a9c88
    CALL crt_unknown.c_FUN_005a9cf0     ; 005a9c89
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9cf0()
    ADD ESP,0xc                         ; 005a9c8e
    CMP EAX,-0x1                        ; 005a9c91
        ;   Label: LAB_005a9c91
    JNZ 0x005a9ca1                      ; 005a9c94
        ;   XREF to: 005a9ca1 (CONDITIONAL_JUMP)  ; LAB_005a9ca1
    MOV CL,byte ptr [EBX + 0xc]         ; 005a9c96
    OR CL,0x20                          ; 005a9c99
    MOV EDI,EAX                         ; 005a9c9c
    MOV byte ptr [EBX + 0xc],CL         ; 005a9c9e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a9ca1
        ;   Label: LAB_005a9ca1
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a9ca4
    MOV dword ptr [EBX + 0x4],0x0       ; 005a9ca7
    MOV dword ptr [EBX],EAX             ; 005a9cae
    TEST EDI,EDI                        ; 005a9cb0
    JNZ 0x005a9cd0                      ; 005a9cb2
        ;   XREF to: 005a9cd0 (CONDITIONAL_JUMP)  ; LAB_005a9cd0
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a9cb4
    TEST byte ptr [EAX + 0x10],0x1      ; 005a9cb7
    JZ 0x005a9cd0                       ; 005a9cbb
        ;   XREF to: 005a9cd0 (CONDITIONAL_JUMP)  ; LAB_005a9cd0
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a9cbd
    PUSH EDX                            ; 005a9cc0
    CALL unkafter_asgaya.cpp_FUN_005ae9e0 ; 005a9cc1
        ;   XREF to: 005ae9e0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae9e0()
    ADD ESP,0x4                         ; 005a9cc6
    CMP EAX,-0x1                        ; 005a9cc9
    JNZ 0x005a9cd0                      ; 005a9ccc
        ;   XREF to: 005a9cd0 (CONDITIONAL_JUMP)  ; LAB_005a9cd0
    MOV EDI,EAX                         ; 005a9cce
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a9cd0
        ;   Label: LAB_005a9cd0
    PUSH ECX                            ; 005a9cd3
    CALL dword ptr [0x006079a8]         ; 005a9cd4 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a9cda
    MOV EAX,EDI                         ; 005a9cdd
    ADD ESP,0x4                         ; 005a9cdf
    POP EBP                             ; 005a9ce2
    POP EDI                             ; 005a9ce3
    POP ESI                             ; 005a9ce4
    POP EBX                             ; 005a9ce5
    RET                                 ; 005a9ce6

