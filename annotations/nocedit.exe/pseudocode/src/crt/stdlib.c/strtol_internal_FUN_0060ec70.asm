; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; long __cdecl crt_stdlib_c_strtol_internal_FUN_0060ec70(char *str,char **endptr,int base,int is_signed)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char * *         Stack[0x8]:4   endptr
; int              Stack[0xc]:4   base
; int              Stack[0x10]:4   is_signed
;
; XREF[2]:
;   crt_stdlib.c_strtol_FUN_0060edfc at 0060ee0e
;   crt_stdlib.c_strtoul_FUN_0060ede0 at 0060edf2
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;   int INT_006855d8 = 0xfffffff
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdlib.c_charToDigit_FUN_0060ee18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ec70
        ;   Label: crt_stdlib.c_strtol_internal_FUN_0060ec70
    PUSH ESI                            ; 0060ec71
    PUSH EDI                            ; 0060ec72
    PUSH EBP                            ; 0060ec73
    SUB ESP,0xc                         ; 0060ec74
    MOV EDI,dword ptr [ESP + 0x28]      ; 0060ec77
    MOV EDX,dword ptr [ESP + 0x24]      ; 0060ec7b
    TEST EDX,EDX                        ; 0060ec7f
    JZ 0x0060ec89                       ; 0060ec81
        ;   XREF to: 0060ec89 (CONDITIONAL_JUMP)  ; LAB_0060ec89
    MOV EAX,dword ptr [ESP + 0x20]      ; 0060ec83
    MOV dword ptr [EDX],EAX             ; 0060ec87
    MOV EBX,dword ptr [ESP + 0x20]      ; 0060ec89
        ;   Label: LAB_0060ec89
    MOV AL,byte ptr [EBX]               ; 0060ec8d
        ;   Label: LAB_0060ec8d
    INC AL                              ; 0060ec8f
    AND EAX,0xff                        ; 0060ec91
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0060ec96 | g_CharacterClassificationTable
    JZ 0x0060eca2                       ; 0060ec9d
        ;   XREF to: 0060eca2 (CONDITIONAL_JUMP)  ; LAB_0060eca2
    INC EBX                             ; 0060ec9f
    JMP 0x0060ec8d                      ; 0060eca0
        ;   XREF to: 0060ec8d (UNCONDITIONAL_JUMP)  ; LAB_0060ec8d
    MOV AL,byte ptr [EBX]               ; 0060eca2
        ;   Label: LAB_0060eca2
    MOV byte ptr [ESP + 0x8],AL         ; 0060eca4
    CMP AL,0x2b                         ; 0060eca8
    JZ 0x0060ecb0                       ; 0060ecaa
        ;   XREF to: 0060ecb0 (CONDITIONAL_JUMP)  ; LAB_0060ecb0
    CMP AL,0x2d                         ; 0060ecac
    JNZ 0x0060ecb1                      ; 0060ecae
        ;   XREF to: 0060ecb1 (CONDITIONAL_JUMP)  ; LAB_0060ecb1
    INC EBX                             ; 0060ecb0
        ;   Label: LAB_0060ecb0
    TEST EDI,EDI                        ; 0060ecb1
        ;   Label: LAB_0060ecb1
    JNZ 0x0060ecdf                      ; 0060ecb3
        ;   XREF to: 0060ecdf (CONDITIONAL_JUMP)  ; LAB_0060ecdf
    CMP byte ptr [EBX],0x30             ; 0060ecb5
    JNZ 0x0060eccc                      ; 0060ecb8
        ;   XREF to: 0060eccc (CONDITIONAL_JUMP)  ; LAB_0060eccc
    MOV AL,byte ptr [EBX + 0x1]         ; 0060ecba
    CMP AL,0x78                         ; 0060ecbd
    JZ 0x0060ecc5                       ; 0060ecbf
        ;   XREF to: 0060ecc5 (CONDITIONAL_JUMP)  ; LAB_0060ecc5
    CMP AL,0x58                         ; 0060ecc1
    JNZ 0x0060eccc                      ; 0060ecc3
        ;   XREF to: 0060eccc (CONDITIONAL_JUMP)  ; LAB_0060eccc
    MOV EDI,0x10                        ; 0060ecc5
        ;   Label: LAB_0060ecc5
    JMP 0x0060ecff                      ; 0060ecca
        ;   XREF to: 0060ecff (UNCONDITIONAL_JUMP)  ; LAB_0060ecff
    CMP byte ptr [EBX],0x30             ; 0060eccc
        ;   Label: LAB_0060eccc
    JNZ 0x0060ecd8                      ; 0060eccf
        ;   XREF to: 0060ecd8 (CONDITIONAL_JUMP)  ; LAB_0060ecd8
    MOV EDI,0x8                         ; 0060ecd1
    JMP 0x0060ed14                      ; 0060ecd6
        ;   XREF to: 0060ed14 (UNCONDITIONAL_JUMP)  ; LAB_0060ed14
    MOV EDI,0xa                         ; 0060ecd8
        ;   Label: LAB_0060ecd8
    JMP 0x0060ed14                      ; 0060ecdd
        ;   XREF to: 0060ed14 (UNCONDITIONAL_JUMP)  ; LAB_0060ed14
    CMP EDI,0x2                         ; 0060ecdf
        ;   Label: LAB_0060ecdf
    JL 0x0060ece9                       ; 0060ece2
        ;   XREF to: 0060ece9 (CONDITIONAL_JUMP)  ; LAB_0060ece9
    CMP EDI,0x24                        ; 0060ece4
    JLE 0x0060ecfa                      ; 0060ece7
        ;   XREF to: 0060ecfa (CONDITIONAL_JUMP)  ; LAB_0060ecfa
    PUSH 0xd                            ; 0060ece9
        ;   Label: LAB_0060ece9
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060eceb
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060ecf0
    XOR EAX,EAX                         ; 0060ecf3
    JMP 0x0060edd6                      ; 0060ecf5
        ;   XREF to: 0060edd6 (UNCONDITIONAL_JUMP)  ; LAB_0060edd6
    CMP EDI,0x10                        ; 0060ecfa
        ;   Label: LAB_0060ecfa
    JNZ 0x0060ed14                      ; 0060ecfd
        ;   XREF to: 0060ed14 (CONDITIONAL_JUMP)  ; LAB_0060ed14
    CMP byte ptr [EBX],0x30             ; 0060ecff
        ;   Label: LAB_0060ecff
    JNZ 0x0060ed14                      ; 0060ed02
        ;   XREF to: 0060ed14 (CONDITIONAL_JUMP)  ; LAB_0060ed14
    MOV CL,byte ptr [EBX + 0x1]         ; 0060ed04
    CMP CL,0x78                         ; 0060ed07
    JZ 0x0060ed11                       ; 0060ed0a
        ;   XREF to: 0060ed11 (CONDITIONAL_JUMP)  ; LAB_0060ed11
    CMP CL,0x58                         ; 0060ed0c
    JNZ 0x0060ed14                      ; 0060ed0f
        ;   XREF to: 0060ed14 (CONDITIONAL_JUMP)  ; LAB_0060ed14
    ADD EBX,0x2                         ; 0060ed11
        ;   Label: LAB_0060ed11
    MOV dword ptr [ESP],EBX             ; 0060ed14
        ;   Label: LAB_0060ed14
    LEA EBP,[EDI*0x4 + 0x0]             ; 0060ed17
    XOR AL,AL                           ; 0060ed1e
    XOR ESI,ESI                         ; 0060ed20
    MOV byte ptr [ESP + 0x4],AL         ; 0060ed22
    XOR EAX,EAX                         ; 0060ed26
        ;   Label: LAB_0060ed26
    MOV AL,byte ptr [EBX]               ; 0060ed28
    PUSH EAX                            ; 0060ed2a
    CALL crt_stdlib.c_charToDigit_FUN_0060ee18 ; 0060ed2b
        ;   XREF to: 0060ee18 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_charToDigit_FUN_0060ee18(char ch)
    ADD ESP,0x4                         ; 0060ed30
    MOV EDX,EAX                         ; 0060ed33
    CMP EAX,EDI                         ; 0060ed35
    JGE 0x0060ed59                      ; 0060ed37
        ;   XREF to: 0060ed59 (CONDITIONAL_JUMP)  ; LAB_0060ed59
    CMP ESI,dword ptr [EBP + 0x685598]  ; 0060ed39 | INT_006855d8
    JBE 0x0060ed46                      ; 0060ed3f
        ;   XREF to: 0060ed46 (CONDITIONAL_JUMP)  ; LAB_0060ed46
    MOV byte ptr [ESP + 0x4],0x1        ; 0060ed41
    MOV EAX,ESI                         ; 0060ed46
        ;   Label: LAB_0060ed46
    IMUL ESI,EDI                        ; 0060ed48
    ADD ESI,EDX                         ; 0060ed4b
    CMP ESI,EAX                         ; 0060ed4d
    JNC 0x0060ed56                      ; 0060ed4f
        ;   XREF to: 0060ed56 (CONDITIONAL_JUMP)  ; LAB_0060ed56
    MOV byte ptr [ESP + 0x4],0x1        ; 0060ed51
    INC EBX                             ; 0060ed56
        ;   Label: LAB_0060ed56
    JMP 0x0060ed26                      ; 0060ed57
        ;   XREF to: 0060ed26 (UNCONDITIONAL_JUMP)  ; LAB_0060ed26
    CMP EBX,dword ptr [ESP]             ; 0060ed59
        ;   Label: LAB_0060ed59
    JNZ 0x0060ed62                      ; 0060ed5c
        ;   XREF to: 0060ed62 (CONDITIONAL_JUMP)  ; LAB_0060ed62
    MOV EBX,dword ptr [ESP + 0x20]      ; 0060ed5e
    MOV EBP,dword ptr [ESP + 0x24]      ; 0060ed62
        ;   Label: LAB_0060ed62
    TEST EBP,EBP                        ; 0060ed66
    JZ 0x0060ed6d                       ; 0060ed68
        ;   XREF to: 0060ed6d (CONDITIONAL_JUMP)  ; LAB_0060ed6d
    MOV dword ptr [EBP],EBX             ; 0060ed6a
    CMP dword ptr [ESP + 0x2c],0x1      ; 0060ed6d
        ;   Label: LAB_0060ed6d
    JNZ 0x0060ed85                      ; 0060ed72
        ;   XREF to: 0060ed85 (CONDITIONAL_JUMP)  ; LAB_0060ed85
    CMP ESI,0x80000000                  ; 0060ed74
    JC 0x0060ed85                       ; 0060ed7a
        ;   XREF to: 0060ed85 (CONDITIONAL_JUMP)  ; LAB_0060ed85
    JNZ 0x0060ed8c                      ; 0060ed7c
        ;   XREF to: 0060ed8c (CONDITIONAL_JUMP)  ; LAB_0060ed8c
    CMP byte ptr [ESP + 0x8],0x2d       ; 0060ed7e
    JNZ 0x0060ed8c                      ; 0060ed83
        ;   XREF to: 0060ed8c (CONDITIONAL_JUMP)  ; LAB_0060ed8c
    CMP byte ptr [ESP + 0x4],0x0        ; 0060ed85
        ;   Label: LAB_0060ed85
    JZ 0x0060edcb                       ; 0060ed8a
        ;   XREF to: 0060edcb (CONDITIONAL_JUMP)  ; LAB_0060edcb
    PUSH 0xe                            ; 0060ed8c
        ;   Label: LAB_0060ed8c
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060ed8e
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060ed93
    CMP dword ptr [ESP + 0x2c],0x0      ; 0060ed96
    JNZ 0x0060edaa                      ; 0060ed9b
        ;   XREF to: 0060edaa (CONDITIONAL_JUMP)  ; LAB_0060edaa
    MOV EAX,0xffffffff                  ; 0060ed9d
    ADD ESP,0xc                         ; 0060eda2
    POP EBP                             ; 0060eda5
    POP EDI                             ; 0060eda6
    POP ESI                             ; 0060eda7
    POP EBX                             ; 0060eda8
    RET                                 ; 0060eda9
    CMP byte ptr [ESP + 0x8],0x2d       ; 0060edaa
        ;   Label: LAB_0060edaa
    JNZ 0x0060edbe                      ; 0060edaf
        ;   XREF to: 0060edbe (CONDITIONAL_JUMP)  ; LAB_0060edbe
    MOV EAX,0x80000000                  ; 0060edb1
    ADD ESP,0xc                         ; 0060edb6
    POP EBP                             ; 0060edb9
    POP EDI                             ; 0060edba
    POP ESI                             ; 0060edbb
    POP EBX                             ; 0060edbc
    RET                                 ; 0060edbd
    MOV EAX,0x7fffffff                  ; 0060edbe
        ;   Label: LAB_0060edbe
    ADD ESP,0xc                         ; 0060edc3
    POP EBP                             ; 0060edc6
    POP EDI                             ; 0060edc7
    POP ESI                             ; 0060edc8
    POP EBX                             ; 0060edc9
    RET                                 ; 0060edca
    CMP byte ptr [ESP + 0x8],0x2d       ; 0060edcb
        ;   Label: LAB_0060edcb
    JNZ 0x0060edd4                      ; 0060edd0
        ;   XREF to: 0060edd4 (CONDITIONAL_JUMP)  ; LAB_0060edd4
    NEG ESI                             ; 0060edd2
    MOV EAX,ESI                         ; 0060edd4
        ;   Label: LAB_0060edd4
    ADD ESP,0xc                         ; 0060edd6
        ;   Label: LAB_0060edd6
    POP EBP                             ; 0060edd9
    POP EDI                             ; 0060edda
    POP ESI                             ; 0060eddb
    POP EBX                             ; 0060eddc
    RET                                 ; 0060eddd

