; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c6d50(undefined4 *param_1)
;
;
; XREF[8]:
;   crt_stdio.c_fclose_FUN_005c0e40 at 005c0e6c
;   crt_stdio.c_fputc_FUN_005c2f00 at 005c2fc1
;   crt_stdio.c_fseek_FUN_005c170c at 005c173c
;   crt_stdio.c_fwrite_FUN_005c1a70 at 005c1bb8
;   crt_unknown.c_FUN_005c4fe0 at 005c508f
;   crt_unknown.c_FUN_005c654c at 005c6577
;   crt_unknown.c_FUN_005c9e80 at 005c9e91
;   unkafter_2d.cpp_FUN_005ce150 at 005ce1d7
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c6e80
;   crt_unknown.c_FUN_005c7dc0
;   unkafter_zombie.cpp_FUN_005cbb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6d50
        ;   Label: crt_unknown.c_FUN_005c6d50
    PUSH ESI                            ; 005c6d51
    PUSH EDI                            ; 005c6d52
    PUSH EBP                            ; 005c6d53
    SUB ESP,0x4                         ; 005c6d54
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c6d57
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c6d5b
    PUSH EDX                            ; 005c6d5e
    XOR EDI,EDI                         ; 005c6d5f
    CALL dword ptr [0x00626600]         ; 005c6d61 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV AH,byte ptr [EBX + 0xd]         ; 005c6d67
    ADD ESP,0x4                         ; 005c6d6a
    TEST AH,0x10                        ; 005c6d6d
    JZ 0x005c6df6                       ; 005c6d70
        ;   XREF to: 005c6df6 (CONDITIONAL_JUMP)  ; LAB_005c6df6
    MOV CH,AH                           ; 005c6d76
    AND CH,0xef                         ; 005c6d78
    MOV AL,byte ptr [EBX + 0xc]         ; 005c6d7b
    MOV byte ptr [EBX + 0xd],CH         ; 005c6d7e
    TEST AL,0x2                         ; 005c6d81
    JZ 0x005c6e31                       ; 005c6d83
        ;   XREF to: 005c6e31 (CONDITIONAL_JUMP)  ; LAB_005c6e31
    MOV EBP,dword ptr [EBX + 0x8]       ; 005c6d89
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c6d8c
    TEST EAX,EAX                        ; 005c6d8f
    JZ 0x005c6e31                       ; 005c6d91
        ;   XREF to: 005c6e31 (CONDITIONAL_JUMP)  ; LAB_005c6e31
    MOV ESI,dword ptr [EBX + 0x4]       ; 005c6d97
    MOV EBP,EAX                         ; 005c6d9a
    TEST ESI,ESI                        ; 005c6d9c
    JZ 0x005c6e31                       ; 005c6d9e
        ;   XREF to: 005c6e31 (CONDITIONAL_JUMP)  ; LAB_005c6e31
    TEST EDI,EDI                        ; 005c6da4
        ;   Label: LAB_005c6da4
    JNZ 0x005c6e31                      ; 005c6da6
        ;   XREF to: 005c6e31 (CONDITIONAL_JUMP)  ; LAB_005c6e31
    PUSH ESI                            ; 005c6dac
    PUSH EBP                            ; 005c6dad
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c6dae
    PUSH EAX                            ; 005c6db1
    CALL crt_unknown.c_FUN_005c7dc0     ; 005c6db2
        ;   XREF to: 005c7dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7dc0()
    ADD ESP,0xc                         ; 005c6db7
    MOV dword ptr [ESP],EAX             ; 005c6dba
    CMP EAX,-0x1                        ; 005c6dbd
    JNZ 0x005c6dcf                      ; 005c6dc0
        ;   XREF to: 005c6dcf (CONDITIONAL_JUMP)  ; LAB_005c6dcf
    MOV DL,byte ptr [EBX + 0xc]         ; 005c6dc2
    OR DL,0x20                          ; 005c6dc5
    MOV EDI,EAX                         ; 005c6dc8
    MOV byte ptr [EBX + 0xc],DL         ; 005c6dca
    JMP 0x005c6deb                      ; 005c6dcd
        ;   XREF to: 005c6deb (UNCONDITIONAL_JUMP)  ; LAB_005c6deb
    TEST EAX,EAX                        ; 005c6dcf
        ;   Label: LAB_005c6dcf
    JNZ 0x005c6deb                      ; 005c6dd1
        ;   XREF to: 005c6deb (CONDITIONAL_JUMP)  ; LAB_005c6deb
    PUSH 0xc                            ; 005c6dd3
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c6dd5
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV AH,byte ptr [EBX + 0xc]         ; 005c6dda
    MOV EDI,0xffffffff                  ; 005c6ddd
    OR AH,0x20                          ; 005c6de2
    ADD ESP,0x4                         ; 005c6de5
    MOV byte ptr [EBX + 0xc],AH         ; 005c6de8
    MOV EDX,dword ptr [ESP]             ; 005c6deb
        ;   Label: LAB_005c6deb
    ADD EBP,EDX                         ; 005c6dee
    SUB ESI,EDX                         ; 005c6df0
    JNZ 0x005c6da4                      ; 005c6df2
        ;   XREF to: 005c6da4 (CONDITIONAL_JUMP)  ; LAB_005c6da4
    JMP 0x005c6e31                      ; 005c6df4
        ;   XREF to: 005c6e31 (UNCONDITIONAL_JUMP)  ; LAB_005c6e31
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c6df6
        ;   Label: LAB_005c6df6
    CMP dword ptr [EAX + 0x8],0x0       ; 005c6df9
    JZ 0x005c6e31                       ; 005c6dfd
        ;   XREF to: 005c6e31 (CONDITIONAL_JUMP)  ; LAB_005c6e31
    AND byte ptr [EBX + 0xc],0xef       ; 005c6dff
    TEST byte ptr [EBX + 0xd],0x20      ; 005c6e03
    JNZ 0x005c6e31                      ; 005c6e07
        ;   XREF to: 005c6e31 (CONDITIONAL_JUMP)  ; LAB_005c6e31
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c6e09
    TEST EAX,EAX                        ; 005c6e0c
    JZ 0x005c6e21                       ; 005c6e0e
        ;   XREF to: 005c6e21 (CONDITIONAL_JUMP)  ; LAB_005c6e21
    PUSH 0x1                            ; 005c6e10
    NEG EAX                             ; 005c6e12
    PUSH EAX                            ; 005c6e14
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c6e15
    PUSH ESI                            ; 005c6e18
    CALL crt_unknown.c_FUN_005c6e80     ; 005c6e19
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c6e1e
    CMP EAX,-0x1                        ; 005c6e21
        ;   Label: LAB_005c6e21
    JNZ 0x005c6e31                      ; 005c6e24
        ;   XREF to: 005c6e31 (CONDITIONAL_JUMP)  ; LAB_005c6e31
    MOV CL,byte ptr [EBX + 0xc]         ; 005c6e26
    OR CL,0x20                          ; 005c6e29
    MOV EDI,EAX                         ; 005c6e2c
    MOV byte ptr [EBX + 0xc],CL         ; 005c6e2e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c6e31
        ;   Label: LAB_005c6e31
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c6e34
    MOV dword ptr [EBX + 0x4],0x0       ; 005c6e37
    MOV dword ptr [EBX],EAX             ; 005c6e3e
    TEST EDI,EDI                        ; 005c6e40
    JNZ 0x005c6e60                      ; 005c6e42
        ;   XREF to: 005c6e60 (CONDITIONAL_JUMP)  ; LAB_005c6e60
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c6e44
    TEST byte ptr [EAX + 0x10],0x1      ; 005c6e47
    JZ 0x005c6e60                       ; 005c6e4b
        ;   XREF to: 005c6e60 (CONDITIONAL_JUMP)  ; LAB_005c6e60
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c6e4d
    PUSH EDX                            ; 005c6e50
    CALL unkafter_zombie.cpp_FUN_005cbb70 ; 005c6e51
        ;   XREF to: 005cbb70 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cbb70()
    ADD ESP,0x4                         ; 005c6e56
    CMP EAX,-0x1                        ; 005c6e59
    JNZ 0x005c6e60                      ; 005c6e5c
        ;   XREF to: 005c6e60 (CONDITIONAL_JUMP)  ; LAB_005c6e60
    MOV EDI,EAX                         ; 005c6e5e
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c6e60
        ;   Label: LAB_005c6e60
    PUSH ECX                            ; 005c6e63
    CALL dword ptr [0x00626604]         ; 005c6e64 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c6e6a
    MOV EAX,EDI                         ; 005c6e6d
    ADD ESP,0x4                         ; 005c6e6f
    POP EBP                             ; 005c6e72
    POP EDI                             ; 005c6e73
    POP ESI                             ; 005c6e74
    POP EBX                             ; 005c6e75
    RET                                 ; 005c6e76

