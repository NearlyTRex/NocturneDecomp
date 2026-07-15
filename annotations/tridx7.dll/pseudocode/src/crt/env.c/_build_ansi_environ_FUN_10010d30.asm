; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c__build_ansi_environ_FUN_10010d30(void)
;
;
; XREF[2]:
;   crt_env.c___crtsetenv_FUN_10011360 at 100113da
;   crt_env.c_getenv_FUN_10010c50 at 10010c67
;
; Referenced Globals:
;   undefined4 DAT_10016d88
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;
; Called Functions:
;   crt_env.c___crtsetenv_FUN_10011360
;   crt_heap.c_malloc_FUN_10008830
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10010d30
        ;   Label: crt_env.c__build_ansi_environ_FUN_10010d30
    PUSH ESI                            ; 10010d31
    PUSH EDI                            ; 10010d32
    MOV ESI,dword ptr [0x10016d88]      ; 10010d33 | DAT_10016d88
    PUSH EBP                            ; 10010d39
    CMP dword ptr [ESI],0x0             ; 10010d3a
    JZ 0x10010d95                       ; 10010d3d
        ;   XREF to: 10010d95 (CONDITIONAL_JUMP)  ; LAB_10010d95
    MOV EDI,dword ptr [0x10242230]      ; 10010d3f | PTR_WideCharToMultiByte_10242230
    PUSH 0x0                            ; 10010d45
        ;   Label: LAB_10010d45
    MOV EAX,dword ptr [ESI]             ; 10010d47
    PUSH 0x0                            ; 10010d49
    PUSH 0x0                            ; 10010d4b
    PUSH 0x0                            ; 10010d4d
    PUSH -0x1                           ; 10010d4f
    PUSH EAX                            ; 10010d51
    PUSH 0x0                            ; 10010d52
    PUSH 0x1                            ; 10010d54
    CALL EDI                            ; 10010d56 | int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, ...)
    MOV EBP,EAX                         ; 10010d58
    TEST EBP,EBP                        ; 10010d5a
    JZ 0x10010d9c                       ; 10010d5c
        ;   XREF to: 10010d9c (CONDITIONAL_JUMP)  ; LAB_10010d9c
    PUSH EBP                            ; 10010d5e
    CALL crt_heap.c_malloc_FUN_10008830 ; 10010d5f
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 10010d64
    MOV EBX,EAX                         ; 10010d67
    TEST EBX,EBX                        ; 10010d69
    JZ 0x10010da6                       ; 10010d6b
        ;   XREF to: 10010da6 (CONDITIONAL_JUMP)  ; LAB_10010da6
    PUSH 0x0                            ; 10010d6d
    MOV EAX,dword ptr [ESI]             ; 10010d6f
    PUSH 0x0                            ; 10010d71
    PUSH EBP                            ; 10010d73
    PUSH EBX                            ; 10010d74
    PUSH -0x1                           ; 10010d75
    PUSH EAX                            ; 10010d77
    PUSH 0x0                            ; 10010d78
    PUSH 0x1                            ; 10010d7a
    CALL EDI                            ; 10010d7c | int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, ...)
    TEST EAX,EAX                        ; 10010d7e
    JZ 0x10010db0                       ; 10010d80
        ;   XREF to: 10010db0 (CONDITIONAL_JUMP)  ; LAB_10010db0
    PUSH 0x0                            ; 10010d82
    ADD ESI,0x4                         ; 10010d84
    PUSH EBX                            ; 10010d87
    CALL crt_env.c___crtsetenv_FUN_10011360 ; 10010d88
        ;   XREF to: 10011360 (UNCONDITIONAL_CALL)  ; int crt_env.c___crtsetenv_FUN_10011360(char * option, int primary)
    ADD ESP,0x8                         ; 10010d8d
    CMP dword ptr [ESI],0x0             ; 10010d90
    JNZ 0x10010d45                      ; 10010d93
        ;   XREF to: 10010d45 (CONDITIONAL_JUMP)  ; LAB_10010d45
    XOR EAX,EAX                         ; 10010d95
        ;   Label: LAB_10010d95
    POP EBP                             ; 10010d97
    POP EDI                             ; 10010d98
    POP ESI                             ; 10010d99
    POP EBX                             ; 10010d9a
    RET                                 ; 10010d9b
    MOV EAX,0xffffffff                  ; 10010d9c
        ;   Label: LAB_10010d9c
    POP EBP                             ; 10010da1
    POP EDI                             ; 10010da2
    POP ESI                             ; 10010da3
    POP EBX                             ; 10010da4
    RET                                 ; 10010da5
    MOV EAX,0xffffffff                  ; 10010da6
        ;   Label: LAB_10010da6
    POP EBP                             ; 10010dab
    POP EDI                             ; 10010dac
    POP ESI                             ; 10010dad
    POP EBX                             ; 10010dae
    RET                                 ; 10010daf
    MOV EAX,0xffffffff                  ; 10010db0
        ;   Label: LAB_10010db0
    POP EBP                             ; 10010db5
    POP EDI                             ; 10010db6
    POP ESI                             ; 10010db7
    POP EBX                             ; 10010db8
    RET                                 ; 10010db9

