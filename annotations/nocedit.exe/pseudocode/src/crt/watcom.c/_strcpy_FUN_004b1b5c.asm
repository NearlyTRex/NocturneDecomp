; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_watcom_c__strcpy_FUN_004b1b5c(char *dest,char *src)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1b5c
        ;   Label: crt_watcom.c__strcpy_FUN_004b1b5c
    MOV AL,byte ptr [EDX]               ; 004b1b5d
    TEST ECX,0x7                        ; 004b1b5f
    JZ 0x004b1b7f                       ; 004b1b65
        ;   XREF to: 004b1b7f (CONDITIONAL_JUMP)  ; LAB_004b1b7f
    TEST AL,AL                          ; 004b1b67
        ;   Label: LAB_004b1b67
    MOV byte ptr [ECX],AL               ; 004b1b69
    JZ 0x004b1bcb                       ; 004b1b6b
        ;   XREF to: 004b1bcb (CONDITIONAL_JUMP)  ; LAB_004b1bcb
    MOV AL,byte ptr [EDX + 0x1]         ; 004b1b6d
    INC ECX                             ; 004b1b70
    INC EDX                             ; 004b1b71
    TEST ECX,0x7                        ; 004b1b72
    JNZ 0x004b1b67                      ; 004b1b78
        ;   XREF to: 004b1b67 (CONDITIONAL_JUMP)  ; LAB_004b1b67
    JMP 0x004b1b7f                      ; 004b1b7a
        ;   XREF to: 004b1b7f (UNCONDITIONAL_JUMP)  ; LAB_004b1b7f
    FISTP qword ptr [ECX + -0x8]        ; 004b1b7c
        ;   Label: LAB_004b1b7c
    FILD qword ptr [EDX]                ; 004b1b7f
        ;   Label: LAB_004b1b7f
    MOV EAX,dword ptr [EDX]             ; 004b1b81
    ADD ECX,0x8                         ; 004b1b83
    TEST EAX,0xff                       ; 004b1b86
    JZ 0x004b1bf8                       ; 004b1b8b
        ;   XREF to: 004b1bf8 (CONDITIONAL_JUMP)  ; LAB_004b1bf8
    TEST EAX,0xff00                     ; 004b1b8d
    JZ 0x004b1bf0                       ; 004b1b92
        ;   XREF to: 004b1bf0 (CONDITIONAL_JUMP)  ; LAB_004b1bf0
    TEST EAX,0xff0000                   ; 004b1b94
    JZ 0x004b1bec                       ; 004b1b99
        ;   XREF to: 004b1bec (CONDITIONAL_JUMP)  ; LAB_004b1bec
    TEST EAX,0xff000000                 ; 004b1b9b
    JZ 0x004b1be3                       ; 004b1ba0
        ;   XREF to: 004b1be3 (CONDITIONAL_JUMP)  ; LAB_004b1be3
    MOV EBX,dword ptr [EDX + 0x4]       ; 004b1ba2
    ADD EDX,0x8                         ; 004b1ba5
    TEST EBX,0xff                       ; 004b1ba8
    JZ 0x004b1be0                       ; 004b1bae
        ;   XREF to: 004b1be0 (CONDITIONAL_JUMP)  ; LAB_004b1be0
    TEST EBX,0xff00                     ; 004b1bb0
    JZ 0x004b1bd4                       ; 004b1bb6
        ;   XREF to: 004b1bd4 (CONDITIONAL_JUMP)  ; LAB_004b1bd4
    TEST EBX,0xff0000                   ; 004b1bb8
    JZ 0x004b1bd0                       ; 004b1bbe
        ;   XREF to: 004b1bd0 (CONDITIONAL_JUMP)  ; LAB_004b1bd0
    TEST EBX,0xff000000                 ; 004b1bc0
    JNZ 0x004b1b7c                      ; 004b1bc6
        ;   XREF to: 004b1b7c (CONDITIONAL_JUMP)  ; LAB_004b1b7c
    FISTP qword ptr [ECX + -0x8]        ; 004b1bc8
    POP EBX                             ; 004b1bcb
        ;   Label: LAB_004b1bcb
    RET                                 ; 004b1bcc
    MOV byte ptr [ECX + -0x2],0x0       ; 004b1bd0
        ;   Label: LAB_004b1bd0
    MOV word ptr [ECX + -0x4],BX        ; 004b1bd4
        ;   Label: LAB_004b1bd4
    MOV dword ptr [ECX + -0x8],EAX      ; 004b1bd8
    FMULP ST0                           ; 004b1bdb
    POP EBX                             ; 004b1bdd
    RET                                 ; 004b1bde
    MOV byte ptr [ECX + -0x4],BL        ; 004b1be0
        ;   Label: LAB_004b1be0
    MOV dword ptr [ECX + -0x8],EAX      ; 004b1be3
        ;   Label: LAB_004b1be3
    POP EBX                             ; 004b1be6
    FMULP ST0                           ; 004b1be7
    RET                                 ; 004b1be9
    MOV byte ptr [ECX + -0x6],0x0       ; 004b1bec
        ;   Label: LAB_004b1bec
    MOV word ptr [ECX + -0x8],AX        ; 004b1bf0
        ;   Label: LAB_004b1bf0
    POP EBX                             ; 004b1bf4
    FMULP ST0                           ; 004b1bf5
    RET                                 ; 004b1bf7
    MOV byte ptr [ECX + -0x8],AL        ; 004b1bf8
        ;   Label: LAB_004b1bf8
    POP EBX                             ; 004b1bfb
    FMULP ST0                           ; 004b1bfc
    RET                                 ; 004b1bfe

