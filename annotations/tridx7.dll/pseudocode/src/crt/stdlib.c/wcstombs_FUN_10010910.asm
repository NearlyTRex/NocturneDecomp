; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t __cdecl crt_stdlib_c_wcstombs_FUN_10010910(char *mbstr,wchar_t *wcstr,size_t count)
;
; Parameters:
; char *           Stack[0x4]:4   mbstr
; wchar_t *        Stack[0x8]:4   wcstr
; size_t           Stack[0xc]:4   count
;
; XREF[1]:
;   crt_time.c__tzset_FUN_10010050 at 10010134
;
; Referenced Globals:
;   undefined4 DAT_10240854
;   undefined4 DAT_10240858
;
; Called Functions:
;   crt_stdlib.c__wcstombs_lk_FUN_10010970
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10240854],0x0      ; 10010910 | DAT_10240854
        ;   Label: crt_stdlib.c_wcstombs_FUN_10010910
    PUSH ESI                            ; 10010917
    PUSH EDI                            ; 10010918
    JZ 0x1001092c                       ; 10010919
        ;   XREF to: 1001092c (CONDITIONAL_JUMP)  ; LAB_1001092c
    PUSH 0x13                           ; 1001091b
    MOV ESI,0x1                         ; 1001091d
    CALL crt_thread.c__lock_FUN_100059a0 ; 10010922
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    ADD ESP,0x4                         ; 10010927
    JMP 0x10010934                      ; 1001092a
        ;   XREF to: 10010934 (UNCONDITIONAL_JUMP)  ; LAB_10010934
    XOR ESI,ESI                         ; 1001092c
        ;   Label: LAB_1001092c
    INC dword ptr [0x10240858]          ; 1001092e | DAT_10240858
    MOV EAX,dword ptr [ESP + 0x14]      ; 10010934
        ;   Label: LAB_10010934
    MOV ECX,dword ptr [ESP + 0x10]      ; 10010938
    MOV EDX,dword ptr [ESP + 0xc]       ; 1001093c
    PUSH EAX                            ; 10010940
    PUSH ECX                            ; 10010941
    PUSH EDX                            ; 10010942
    CALL crt_stdlib.c__wcstombs_lk_FUN_10010970 ; 10010943
        ;   XREF to: 10010970 (UNCONDITIONAL_CALL)  ; size_t crt_stdlib.c__wcstombs_lk_FUN_10010970(char * mbstr, wchar_t * wcstr, size_t count)
    ADD ESP,0xc                         ; 10010948
    MOV EDI,EAX                         ; 1001094b
    TEST ESI,ESI                        ; 1001094d
    JZ 0x10010960                       ; 1001094f
        ;   XREF to: 10010960 (CONDITIONAL_JUMP)  ; LAB_10010960
    PUSH 0x13                           ; 10010951
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10010953
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10010958
    MOV EAX,EDI                         ; 1001095b
    POP EDI                             ; 1001095d
    POP ESI                             ; 1001095e
    RET                                 ; 1001095f
    MOV EAX,EDI                         ; 10010960
        ;   Label: LAB_10010960
    DEC dword ptr [0x10240858]          ; 10010962 | DAT_10240858
    POP EDI                             ; 10010968
    POP ESI                             ; 10010969
    RET                                 ; 1001096a

