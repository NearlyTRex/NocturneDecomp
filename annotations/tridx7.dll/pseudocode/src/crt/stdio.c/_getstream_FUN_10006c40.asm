; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FILE * __cdecl crt_stdio_c__getstream_FUN_10006c40(void)
;
;
; XREF[1]:
;   crt_stdio.c__fsopen_FUN_10005520 at 10005522
;
; Referenced Globals:
;   undefined4 DAT_1024085c
;   undefined4 DAT_10241860
;   void* PTR_InitializeCriticalSection_102421b0 = 00242398
;   void* PTR_EnterCriticalSection_102421b8 = 002423cc
;
; Called Functions:
;   crt_heap.c_malloc_FUN_10008830
;   crt_stdio.c__lock_file2_FUN_10005a70
;   crt_stdio.c__unlock_file2_FUN_10005ae0
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;   EnterCriticalSection
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10006c40
        ;   Label: crt_stdio.c__getstream_FUN_10006c40
    PUSH ESI                            ; 10006c41
    PUSH EDI                            ; 10006c42
    XOR ESI,ESI                         ; 10006c43
    PUSH EBP                            ; 10006c45
    XOR EDI,EDI                         ; 10006c46
    PUSH 0x2                            ; 10006c48
    CALL crt_thread.c__lock_FUN_100059a0 ; 10006c4a
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    ADD ESP,0x4                         ; 10006c4f
    CMP dword ptr [0x10241860],EDI      ; 10006c52 | DAT_10241860
    JLE 0x10006cf5                      ; 10006c58
        ;   XREF to: 10006cf5 (CONDITIONAL_JUMP)  ; LAB_10006cf5
    XOR EBX,EBX                         ; 10006c5e
    MOV EBP,0x83                        ; 10006c60
    MOV EAX,[0x1024085c]                ; 10006c65 | DAT_1024085c
        ;   Label: LAB_10006c65
    MOV EAX,dword ptr [EAX + EBX*0x1]   ; 10006c6a
    TEST EAX,EAX                        ; 10006c6d
    JZ 0x10006caf                       ; 10006c6f
        ;   XREF to: 10006caf (CONDITIONAL_JUMP)  ; LAB_10006caf
    TEST dword ptr [EAX + 0xc],EBP      ; 10006c71
    JNZ 0x10006c97                      ; 10006c74
        ;   XREF to: 10006c97 (CONDITIONAL_JUMP)  ; LAB_10006c97
    PUSH EAX                            ; 10006c76
    PUSH ESI                            ; 10006c77
    CALL crt_stdio.c__lock_file2_FUN_10005a70 ; 10006c78
        ;   XREF to: 10005a70 (UNCONDITIONAL_CALL)  ; void crt_stdio.c__lock_file2_FUN_10005a70(int index, void * stream)
    ADD ESP,0x8                         ; 10006c7d
    MOV EAX,[0x1024085c]                ; 10006c80 | DAT_1024085c
    MOV EAX,dword ptr [EAX + EBX*0x1]   ; 10006c85
    TEST dword ptr [EAX + 0xc],EBP      ; 10006c88
    JZ 0x10006ca5                       ; 10006c8b
        ;   XREF to: 10006ca5 (CONDITIONAL_JUMP)  ; LAB_10006ca5
    PUSH EAX                            ; 10006c8d
    PUSH ESI                            ; 10006c8e
    CALL crt_stdio.c__unlock_file2_FUN_10005ae0 ; 10006c8f
        ;   XREF to: 10005ae0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c__unlock_file2_FUN_10005ae0(int index, void * stream)
    ADD ESP,0x8                         ; 10006c94
    ADD EBX,0x4                         ; 10006c97
        ;   Label: LAB_10006c97
    INC ESI                             ; 10006c9a
    CMP dword ptr [0x10241860],ESI      ; 10006c9b | DAT_10241860
    JG 0x10006c65                       ; 10006ca1
        ;   XREF to: 10006c65 (CONDITIONAL_JUMP)  ; LAB_10006c65
    JMP 0x10006cf5                      ; 10006ca3
        ;   XREF to: 10006cf5 (UNCONDITIONAL_JUMP)  ; LAB_10006cf5
    MOV EAX,[0x1024085c]                ; 10006ca5 | DAT_1024085c
        ;   Label: LAB_10006ca5
    MOV EDI,dword ptr [EAX + ESI*0x4]   ; 10006caa
    JMP 0x10006cf5                      ; 10006cad
        ;   XREF to: 10006cf5 (UNCONDITIONAL_JUMP)  ; LAB_10006cf5
    PUSH 0x38                           ; 10006caf
        ;   Label: LAB_10006caf
    CALL crt_heap.c_malloc_FUN_10008830 ; 10006cb1
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 10006cb6
    MOV ECX,dword ptr [0x1024085c]      ; 10006cb9 | DAT_1024085c
    MOV dword ptr [ECX + ESI*0x4],EAX   ; 10006cbf
    MOV ECX,dword ptr [0x1024085c]      ; 10006cc2 | DAT_1024085c
    MOV EAX,dword ptr [ECX + ESI*0x4]   ; 10006cc8
    TEST EAX,EAX                        ; 10006ccb
    JZ 0x10006cf5                       ; 10006ccd
        ;   XREF to: 10006cf5 (CONDITIONAL_JUMP)  ; LAB_10006cf5
    ADD EAX,0x20                        ; 10006ccf
    PUSH EAX                            ; 10006cd2
    CALL dword ptr [0x102421b0]         ; 10006cd3 | PTR_InitializeCriticalSection_102421b0
    MOV ECX,dword ptr [0x1024085c]      ; 10006cd9 | DAT_1024085c
    MOV EAX,dword ptr [ECX + ESI*0x4]   ; 10006cdf
    ADD EAX,0x20                        ; 10006ce2
    PUSH EAX                            ; 10006ce5
    CALL dword ptr [0x102421b8]         ; 10006ce6 | PTR_EnterCriticalSection_102421b8
    MOV ECX,dword ptr [0x1024085c]      ; 10006cec | DAT_1024085c
    MOV EDI,dword ptr [ECX + ESI*0x4]   ; 10006cf2
    XOR EAX,EAX                         ; 10006cf5
        ;   Label: LAB_10006cf5
    TEST EDI,EDI                        ; 10006cf7
    JZ 0x10006d10                       ; 10006cf9
        ;   XREF to: 10006d10 (CONDITIONAL_JUMP)  ; LAB_10006d10
    MOV dword ptr [EDI + 0x4],EAX       ; 10006cfb
    MOV dword ptr [EDI + 0xc],EAX       ; 10006cfe
    MOV dword ptr [EDI + 0x8],EAX       ; 10006d01
    MOV dword ptr [EDI],EAX             ; 10006d04
    MOV dword ptr [EDI + 0x1c],EAX      ; 10006d06
    MOV dword ptr [EDI + 0x10],0xffffffff ; 10006d09
    PUSH 0x2                            ; 10006d10
        ;   Label: LAB_10006d10
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10006d12
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10006d17
    MOV EAX,EDI                         ; 10006d1a
    POP EBP                             ; 10006d1c
    POP EDI                             ; 10006d1d
    POP ESI                             ; 10006d1e
    POP EBX                             ; 10006d1f
    RET                                 ; 10006d20

