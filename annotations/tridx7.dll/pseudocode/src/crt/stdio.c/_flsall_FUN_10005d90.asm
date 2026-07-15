; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__flsall_FUN_10005d90(int flag)
;
; Parameters:
; int              Stack[0x4]:4   flag
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_stdio.c_fflush_FUN_10005c90 at 10005c9c
;
; Referenced Globals:
;   undefined4 DAT_1024085c
;   undefined4 DAT_10241860
;
; Called Functions:
;   crt_stdio.c__fflush_lk_FUN_10005cd0
;   crt_stdio.c__lock_file2_FUN_10005a70
;   crt_stdio.c__unlock_file2_FUN_10005ae0
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10005d90
        ;   Label: crt_stdio.c__flsall_FUN_10005d90
    PUSH EBX                            ; 10005d93
    PUSH ESI                            ; 10005d94
    PUSH EDI                            ; 10005d95
    XOR EBX,EBX                         ; 10005d96
    PUSH EBP                            ; 10005d98
    XOR EDI,EDI                         ; 10005d99
    MOV dword ptr [ESP + 0x10],EBX      ; 10005d9b
    PUSH 0x2                            ; 10005d9f
    CALL crt_thread.c__lock_FUN_100059a0 ; 10005da1
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    ADD ESP,0x4                         ; 10005da6
    CMP dword ptr [0x10241860],EBX      ; 10005da9 | DAT_10241860
    JLE 0x10005e3a                      ; 10005daf
        ;   XREF to: 10005e3a (CONDITIONAL_JUMP)  ; LAB_10005e3a
    XOR EBP,EBP                         ; 10005db5
    MOV ESI,dword ptr [ESP + 0x18]      ; 10005db7
    MOV EAX,[0x1024085c]                ; 10005dbb | DAT_1024085c
        ;   Label: LAB_10005dbb
    MOV EAX,dword ptr [EAX + EBP*0x1]   ; 10005dc0
    TEST EAX,EAX                        ; 10005dc3
    JZ 0x10005e2c                       ; 10005dc5
        ;   XREF to: 10005e2c (CONDITIONAL_JUMP)  ; LAB_10005e2c
    TEST byte ptr [EAX + 0xc],0x83      ; 10005dc7
    JZ 0x10005e2c                       ; 10005dcb
        ;   XREF to: 10005e2c (CONDITIONAL_JUMP)  ; LAB_10005e2c
    PUSH EAX                            ; 10005dcd
    PUSH EDI                            ; 10005dce
    CALL crt_stdio.c__lock_file2_FUN_10005a70 ; 10005dcf
        ;   XREF to: 10005a70 (UNCONDITIONAL_CALL)  ; void crt_stdio.c__lock_file2_FUN_10005a70(int index, void * stream)
    ADD ESP,0x8                         ; 10005dd4
    MOV EAX,[0x1024085c]                ; 10005dd7 | DAT_1024085c
    MOV ECX,dword ptr [EAX + EBP*0x1]   ; 10005ddc
    MOV EAX,dword ptr [ECX + 0xc]       ; 10005ddf
    TEST AL,0x83                        ; 10005de2
    JZ 0x10005e1a                       ; 10005de4
        ;   XREF to: 10005e1a (CONDITIONAL_JUMP)  ; LAB_10005e1a
    CMP ESI,0x1                         ; 10005de6
    JNZ 0x10005dfc                      ; 10005de9
        ;   XREF to: 10005dfc (CONDITIONAL_JUMP)  ; LAB_10005dfc
    PUSH ECX                            ; 10005deb
    CALL crt_stdio.c__fflush_lk_FUN_10005cd0 ; 10005dec
        ;   XREF to: 10005cd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fflush_lk_FUN_10005cd0(FILE * file)
    ADD ESP,0x4                         ; 10005df1
    CMP EAX,-0x1                        ; 10005df4
    JZ 0x10005e1a                       ; 10005df7
        ;   XREF to: 10005e1a (CONDITIONAL_JUMP)  ; LAB_10005e1a
    INC EBX                             ; 10005df9
    JMP 0x10005e1a                      ; 10005dfa
        ;   XREF to: 10005e1a (UNCONDITIONAL_JUMP)  ; LAB_10005e1a
    TEST ESI,ESI                        ; 10005dfc
        ;   Label: LAB_10005dfc
    JNZ 0x10005e1a                      ; 10005dfe
        ;   XREF to: 10005e1a (CONDITIONAL_JUMP)  ; LAB_10005e1a
    TEST AL,0x2                         ; 10005e00
    JZ 0x10005e1a                       ; 10005e02
        ;   XREF to: 10005e1a (CONDITIONAL_JUMP)  ; LAB_10005e1a
    PUSH ECX                            ; 10005e04
    CALL crt_stdio.c__fflush_lk_FUN_10005cd0 ; 10005e05
        ;   XREF to: 10005cd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fflush_lk_FUN_10005cd0(FILE * file)
    ADD ESP,0x4                         ; 10005e0a
    CMP EAX,-0x1                        ; 10005e0d
    JNZ 0x10005e1a                      ; 10005e10
        ;   XREF to: 10005e1a (CONDITIONAL_JUMP)  ; LAB_10005e1a
    MOV dword ptr [ESP + 0x10],0xffffffff ; 10005e12
    MOV EAX,[0x1024085c]                ; 10005e1a | DAT_1024085c
        ;   Label: LAB_10005e1a
    MOV ECX,dword ptr [EAX + EBP*0x1]   ; 10005e1f
    PUSH ECX                            ; 10005e22
    PUSH EDI                            ; 10005e23
    CALL crt_stdio.c__unlock_file2_FUN_10005ae0 ; 10005e24
        ;   XREF to: 10005ae0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c__unlock_file2_FUN_10005ae0(int index, void * stream)
    ADD ESP,0x8                         ; 10005e29
    ADD EBP,0x4                         ; 10005e2c
        ;   Label: LAB_10005e2c
    INC EDI                             ; 10005e2f
    CMP EDI,dword ptr [0x10241860]      ; 10005e30 | DAT_10241860
    JL 0x10005dbb                       ; 10005e36
        ;   XREF to: 10005dbb (CONDITIONAL_JUMP)  ; LAB_10005dbb
    JMP 0x10005e3e                      ; 10005e38
        ;   XREF to: 10005e3e (UNCONDITIONAL_JUMP)  ; LAB_10005e3e
    MOV ESI,dword ptr [ESP + 0x18]      ; 10005e3a
        ;   Label: LAB_10005e3a
    PUSH 0x2                            ; 10005e3e
        ;   Label: LAB_10005e3e
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10005e40
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10005e45
    MOV EAX,EBX                         ; 10005e48
    CMP ESI,0x1                         ; 10005e4a
    JZ 0x10005e53                       ; 10005e4d
        ;   XREF to: 10005e53 (CONDITIONAL_JUMP)  ; LAB_10005e53
    MOV EAX,dword ptr [ESP + 0x10]      ; 10005e4f
    POP EBP                             ; 10005e53
        ;   Label: LAB_10005e53
    POP EDI                             ; 10005e54
    POP ESI                             ; 10005e55
    POP EBX                             ; 10005e56
    ADD ESP,0x4                         ; 10005e57
    RET                                 ; 10005e5a

