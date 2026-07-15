; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__free_osfhnd_FUN_10008c30(int fh)
;
; Parameters:
; int              Stack[0x4]:4   fh
;
; XREF[1]:
;   crt_io.c__close_lk_FUN_10005bc0 at 10005c0b
;
; Referenced Globals:
;   undefined4 DAT_10016c74
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;   void* PTR_SetStdHandle_1024223c = 0024260a
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__errno_FUN_10008a20
;   SetStdHandle
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10008c30
        ;   Label: crt_io.c__free_osfhnd_FUN_10008c30
    PUSH ESI                            ; 10008c34
    PUSH EDI                            ; 10008c35
    CMP ECX,dword ptr [0x10241970]      ; 10008c36 | DAT_10241970
    JNC 0x10008ca3                      ; 10008c3c
        ;   XREF to: 10008ca3 (CONDITIONAL_JUMP)  ; LAB_10008ca3
    MOV EAX,ECX                         ; 10008c3e
    AND EAX,0xffffffe7                  ; 10008c40
    SAR EAX,0x3                         ; 10008c43
    LEA EDI,[EAX + 0x10241870]          ; 10008c46 | DAT_10241870
    MOV EAX,ECX                         ; 10008c4c
    AND EAX,0x1f                        ; 10008c4e
    SHL EAX,0x2                         ; 10008c51
    LEA ESI,[EAX + EAX*0x8]             ; 10008c54
    MOV EAX,dword ptr [EDI]             ; 10008c57 | DAT_10241870
    ADD EAX,ESI                         ; 10008c59
    TEST byte ptr [EAX + 0x4],0x1       ; 10008c5b
    JZ 0x10008ca3                       ; 10008c5f
        ;   XREF to: 10008ca3 (CONDITIONAL_JUMP)  ; LAB_10008ca3
    CMP dword ptr [EAX],-0x1            ; 10008c61
    JZ 0x10008ca3                       ; 10008c64
        ;   XREF to: 10008ca3 (CONDITIONAL_JUMP)  ; LAB_10008ca3
    CMP dword ptr [0x10016c74],0x1      ; 10008c66 | DAT_10016c74
    JNZ 0x10008c95                      ; 10008c6d
        ;   XREF to: 10008c95 (CONDITIONAL_JUMP)  ; LAB_10008c95
    TEST ECX,ECX                        ; 10008c6f
    JZ 0x10008c7f                       ; 10008c71
        ;   XREF to: 10008c7f (CONDITIONAL_JUMP)  ; LAB_10008c7f
    CMP ECX,0x1                         ; 10008c73
    JZ 0x10008c85                       ; 10008c76
        ;   XREF to: 10008c85 (CONDITIONAL_JUMP)  ; LAB_10008c85
    CMP ECX,0x2                         ; 10008c78
    JZ 0x10008c8b                       ; 10008c7b
        ;   XREF to: 10008c8b (CONDITIONAL_JUMP)  ; LAB_10008c8b
    JMP 0x10008c95                      ; 10008c7d
        ;   XREF to: 10008c95 (UNCONDITIONAL_JUMP)  ; LAB_10008c95
    PUSH 0x0                            ; 10008c7f
        ;   Label: LAB_10008c7f
    PUSH -0xa                           ; 10008c81
    JMP 0x10008c8f                      ; 10008c83
        ;   XREF to: 10008c8f (UNCONDITIONAL_JUMP)  ; LAB_10008c8f
    PUSH 0x0                            ; 10008c85
        ;   Label: LAB_10008c85
    PUSH -0xb                           ; 10008c87
    JMP 0x10008c8f                      ; 10008c89
        ;   XREF to: 10008c8f (UNCONDITIONAL_JUMP)  ; LAB_10008c8f
    PUSH 0x0                            ; 10008c8b
        ;   Label: LAB_10008c8b
    PUSH -0xc                           ; 10008c8d
    CALL dword ptr [0x1024223c]         ; 10008c8f | PTR_SetStdHandle_1024223c
        ;   Label: LAB_10008c8f
    MOV EAX,dword ptr [EDI]             ; 10008c95 | DAT_10241870
        ;   Label: LAB_10008c95
    POP EDI                             ; 10008c97
    MOV dword ptr [EAX + ESI*0x1],0xffffffff ; 10008c98
    XOR EAX,EAX                         ; 10008c9f
    POP ESI                             ; 10008ca1
    RET                                 ; 10008ca2
    CALL crt_errno.c__errno_FUN_10008a20 ; 10008ca3
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10008ca3
    MOV dword ptr [EAX],0x9             ; 10008ca8
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 10008cae
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    POP EDI                             ; 10008cb3
    MOV dword ptr [EAX],0x0             ; 10008cb4
    MOV EAX,0xffffffff                  ; 10008cba
    POP ESI                             ; 10008cbf
    RET                                 ; 10008cc0

