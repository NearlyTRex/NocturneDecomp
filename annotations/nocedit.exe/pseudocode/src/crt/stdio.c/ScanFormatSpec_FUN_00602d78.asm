; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_stdio.c_ScanFormatSpec_FUN_00602d78(char * format, va_list_t * args, FormatSpec * spec_info)
;
; Parameters:
; char *           Stack[0x4]:4   format
; va_list_t *      Stack[0x8]:4   args
; FormatSpec *     Stack[0xc]:4   spec_info
;
; XREF[1]:
;   crt_stdio.c_FormatEngine_FUN_00602950 at 006029d0
;
; Called Functions:
;   crt_stdio.c_ParseFormatFlags_FUN_00602edc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602d78
        ;   Label: crt_stdio.c_ScanFormatSpec_FUN_00602d78
    PUSH ESI                            ; 00602d79
    PUSH EDI                            ; 00602d7a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602d7b
    MOV ESI,dword ptr [ESP + 0x14]      ; 00602d7f
    MOV EBX,dword ptr [ESP + 0x18]      ; 00602d83
    PUSH EBX                            ; 00602d87
    PUSH EAX                            ; 00602d88
    MOV byte ptr [EBX + 0x16],0x20      ; 00602d89
    CALL crt_stdio.c_ParseFormatFlags_FUN_00602edc ; 00602d8d | char * crt_stdio.c_ParseFormatFlags_FUN_00602edc(char * format, FormatSpec * spec_info)
        ;   XREF to: 00602edc (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x4],0x0       ; 00602d92
    MOV CL,byte ptr [EAX]               ; 00602d99
    ADD ESP,0x8                         ; 00602d9b
    CMP CL,0x2a                         ; 00602d9e
    JNZ 0x00602dc7                      ; 00602da1 | LAB_00602dc7
        ;   XREF to: 00602dc7 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI]             ; 00602da3
    ADD EDX,0x4                         ; 00602da5
    MOV dword ptr [ESI],EDX             ; 00602da8
    MOV EDX,dword ptr [EDX + -0x4]      ; 00602daa
    MOV dword ptr [EBX + 0x4],EDX       ; 00602dad
    TEST EDX,EDX                        ; 00602db0
    JGE 0x00602dc4                      ; 00602db2 | LAB_00602dc4
        ;   XREF to: 00602dc4 (CONDITIONAL_JUMP)
    MOV EDI,EDX                         ; 00602db4
    MOV CH,byte ptr [EBX + 0x1e]        ; 00602db6
    NEG EDI                             ; 00602db9
    OR CH,0x8                           ; 00602dbb
    MOV dword ptr [EBX + 0x4],EDI       ; 00602dbe
    MOV byte ptr [EBX + 0x1e],CH        ; 00602dc1
    INC EAX                             ; 00602dc4
        ;   Label: LAB_00602dc4
    JMP 0x00602de6                      ; 00602dc5 | LAB_00602de6
        ;   XREF to: 00602de6 (UNCONDITIONAL_JUMP)
    MOV DL,byte ptr [EAX]               ; 00602dc7
        ;   Label: LAB_00602dc7
    CMP DL,0x30                         ; 00602dc9
    JC 0x00602de6                       ; 00602dcc | LAB_00602de6
        ;   XREF to: 00602de6 (CONDITIONAL_JUMP)
    CMP DL,0x39                         ; 00602dce
    JA 0x00602de6                       ; 00602dd1 | LAB_00602de6
        ;   XREF to: 00602de6 (CONDITIONAL_JUMP)
    IMUL ECX,dword ptr [EBX + 0x4],0xa  ; 00602dd3
    XOR EDX,EDX                         ; 00602dd7
    MOV DL,byte ptr [EAX]               ; 00602dd9
    SUB EDX,0x30                        ; 00602ddb
    ADD ECX,EDX                         ; 00602dde
    INC EAX                             ; 00602de0
    MOV dword ptr [EBX + 0x4],ECX       ; 00602de1
    JMP 0x00602dc7                      ; 00602de4 | LAB_00602dc7
        ;   XREF to: 00602dc7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x8],0xffffffff ; 00602de6
        ;   Label: LAB_00602de6
    CMP byte ptr [EAX],0x2e             ; 00602ded
    JNZ 0x00602e46                      ; 00602df0 | LAB_00602e46
        ;   XREF to: 00602e46 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x8],0x0       ; 00602df2
    MOV CH,byte ptr [EAX + 0x1]         ; 00602df9
    INC EAX                             ; 00602dfc
    CMP CH,0x2a                         ; 00602dfd
    JNZ 0x00602e1d                      ; 00602e00 | LAB_00602e1d
        ;   XREF to: 00602e1d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI]             ; 00602e02
    ADD EDX,0x4                         ; 00602e04
    MOV dword ptr [ESI],EDX             ; 00602e07
    MOV EDX,dword ptr [EDX + -0x4]      ; 00602e09
    MOV dword ptr [EBX + 0x8],EDX       ; 00602e0c
    TEST EDX,EDX                        ; 00602e0f
    JGE 0x00602e1a                      ; 00602e11 | LAB_00602e1a
        ;   XREF to: 00602e1a (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x8],0xffffffff ; 00602e13
    INC EAX                             ; 00602e1a
        ;   Label: LAB_00602e1a
    JMP 0x00602e3c                      ; 00602e1b | LAB_00602e3c
        ;   XREF to: 00602e3c (UNCONDITIONAL_JUMP)
    MOV DL,byte ptr [EAX]               ; 00602e1d
        ;   Label: LAB_00602e1d
    CMP DL,0x30                         ; 00602e1f
    JC 0x00602e3c                       ; 00602e22 | LAB_00602e3c
        ;   XREF to: 00602e3c (CONDITIONAL_JUMP)
    CMP DL,0x39                         ; 00602e24
    JA 0x00602e3c                       ; 00602e27 | LAB_00602e3c
        ;   XREF to: 00602e3c (CONDITIONAL_JUMP)
    IMUL ECX,dword ptr [EBX + 0x8],0xa  ; 00602e29
    XOR EDX,EDX                         ; 00602e2d
    MOV DL,byte ptr [EAX]               ; 00602e2f
    SUB EDX,0x30                        ; 00602e31
    ADD ECX,EDX                         ; 00602e34
    INC EAX                             ; 00602e36
    MOV dword ptr [EBX + 0x8],ECX       ; 00602e37
    JMP 0x00602e1d                      ; 00602e3a | LAB_00602e1d
        ;   XREF to: 00602e1d (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x8],-0x1      ; 00602e3c
        ;   Label: LAB_00602e3c
    JZ 0x00602e46                       ; 00602e40 | LAB_00602e46
        ;   XREF to: 00602e46 (CONDITIONAL_JUMP)
    MOV byte ptr [EBX + 0x16],0x20      ; 00602e42
    MOV DL,byte ptr [EAX]               ; 00602e46
        ;   Label: LAB_00602e46
    LEA ECX,[EAX + 0x1]                 ; 00602e48
    CMP DL,0x4e                         ; 00602e4b
    JC 0x00602e6f                       ; 00602e4e | LAB_00602e6f
        ;   XREF to: 00602e6f (CONDITIONAL_JUMP)
    JBE 0x00602ed1                      ; 00602e50 | LAB_00602ed1
        ;   XREF to: 00602ed1 (CONDITIONAL_JUMP)
    CMP DL,0x6c                         ; 00602e56
    JC 0x00602e66                       ; 00602e59 | LAB_00602e66
        ;   XREF to: 00602e66 (CONDITIONAL_JUMP)
    JBE 0x00602e88                      ; 00602e5b | LAB_00602e88
        ;   XREF to: 00602e88 (CONDITIONAL_JUMP)
    CMP DL,0x77                         ; 00602e5d
    JZ 0x00602e88                       ; 00602e60 | LAB_00602e88
        ;   XREF to: 00602e88 (CONDITIONAL_JUMP)
    POP EDI                             ; 00602e62
    POP ESI                             ; 00602e63
    POP EBX                             ; 00602e64
    RET                                 ; 00602e65
    CMP DL,0x68                         ; 00602e66
        ;   Label: LAB_00602e66
    JZ 0x00602e96                       ; 00602e69 | LAB_00602e96
        ;   XREF to: 00602e96 (CONDITIONAL_JUMP)
    POP EDI                             ; 00602e6b
    POP ESI                             ; 00602e6c
    POP EBX                             ; 00602e6d
    RET                                 ; 00602e6e
    CMP DL,0x49                         ; 00602e6f
        ;   Label: LAB_00602e6f
    JC 0x00602e7f                       ; 00602e72 | LAB_00602e7f
        ;   XREF to: 00602e7f (CONDITIONAL_JUMP)
    JBE 0x00602e9c                      ; 00602e74 | LAB_00602e9c
        ;   XREF to: 00602e9c (CONDITIONAL_JUMP)
    CMP DL,0x4c                         ; 00602e76
    JZ 0x00602eb8                       ; 00602e79 | LAB_00602eb8
        ;   XREF to: 00602eb8 (CONDITIONAL_JUMP)
    POP EDI                             ; 00602e7b
    POP ESI                             ; 00602e7c
    POP EBX                             ; 00602e7d
    RET                                 ; 00602e7e
    CMP DL,0x46                         ; 00602e7f
        ;   Label: LAB_00602e7f
    JZ 0x00602ec7                       ; 00602e82 | LAB_00602ec7
        ;   XREF to: 00602ec7 (CONDITIONAL_JUMP)
    POP EDI                             ; 00602e84
    POP ESI                             ; 00602e85
    POP EBX                             ; 00602e86
    RET                                 ; 00602e87
    MOV CL,byte ptr [EBX + 0x1e]        ; 00602e88
        ;   Label: LAB_00602e88
    OR CL,0x20                          ; 00602e8b
    INC EAX                             ; 00602e8e
    MOV byte ptr [EBX + 0x1e],CL        ; 00602e8f
    POP EDI                             ; 00602e92
    POP ESI                             ; 00602e93
    POP EBX                             ; 00602e94
    RET                                 ; 00602e95
    OR byte ptr [EBX + 0x1e],0x10       ; 00602e96
        ;   Label: LAB_00602e96
    JMP 0x00602ed5                      ; 00602e9a | LAB_00602ed5
        ;   XREF to: 00602ed5 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x1],0x36       ; 00602e9c
        ;   Label: LAB_00602e9c
    JNZ 0x00602ed7                      ; 00602ea0 | LAB_00602ed7
        ;   XREF to: 00602ed7 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x2],0x34       ; 00602ea2
    JNZ 0x00602ed7                      ; 00602ea6 | LAB_00602ed7
        ;   XREF to: 00602ed7 (CONDITIONAL_JUMP)
    MOV CH,byte ptr [EBX + 0x1f]        ; 00602ea8
    OR CH,0x1                           ; 00602eab
    ADD EAX,0x3                         ; 00602eae
    MOV byte ptr [EBX + 0x1f],CH        ; 00602eb1
    POP EDI                             ; 00602eb4
    POP ESI                             ; 00602eb5
    POP EBX                             ; 00602eb6
    RET                                 ; 00602eb7
    MOV DL,byte ptr [EBX + 0x1f]        ; 00602eb8
        ;   Label: LAB_00602eb8
    OR DL,0x1                           ; 00602ebb
    MOV EAX,ECX                         ; 00602ebe
    MOV byte ptr [EBX + 0x1f],DL        ; 00602ec0
    POP EDI                             ; 00602ec3
    POP ESI                             ; 00602ec4
    POP EBX                             ; 00602ec5
    RET                                 ; 00602ec6
    OR byte ptr [EBX + 0x1e],0x80       ; 00602ec7
        ;   Label: LAB_00602ec7
    MOV EAX,ECX                         ; 00602ecb
    POP EDI                             ; 00602ecd
    POP ESI                             ; 00602ece
    POP EBX                             ; 00602ecf
    RET                                 ; 00602ed0
    OR byte ptr [EBX + 0x1e],0x40       ; 00602ed1
        ;   Label: LAB_00602ed1
    MOV EAX,ECX                         ; 00602ed5
        ;   Label: LAB_00602ed5
    POP EDI                             ; 00602ed7
        ;   Label: LAB_00602ed7
    POP ESI                             ; 00602ed8
    POP EBX                             ; 00602ed9
    RET                                 ; 00602eda

