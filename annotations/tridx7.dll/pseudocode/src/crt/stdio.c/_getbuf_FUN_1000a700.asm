; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__getbuf_FUN_1000a700(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[1]:
;   crt_stdio.c__flsbuf_FUN_10007420 at 1000749c
;
; Referenced Globals:
;   undefined4 DAT_10017308
;
; Called Functions:
;   crt_heap.c_malloc_FUN_10008830
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000a700
        ;   Label: crt_stdio.c__getbuf_FUN_1000a700
    INC dword ptr [0x10017308]          ; 1000a701 | DAT_10017308
    MOV ESI,dword ptr [ESP + 0x8]       ; 1000a707
    PUSH 0x1000                         ; 1000a70b
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000a710
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000a715
    MOV dword ptr [ESI + 0x8],EAX       ; 1000a718
    TEST EAX,EAX                        ; 1000a71b
    JZ 0x1000a72c                       ; 1000a71d
        ;   XREF to: 1000a72c (CONDITIONAL_JUMP)  ; LAB_1000a72c
    OR dword ptr [ESI + 0xc],0x8        ; 1000a71f
    MOV dword ptr [ESI + 0x18],0x1000   ; 1000a723
    JMP 0x1000a73d                      ; 1000a72a
        ;   XREF to: 1000a73d (UNCONDITIONAL_JUMP)  ; LAB_1000a73d
    OR dword ptr [ESI + 0xc],0x4        ; 1000a72c
        ;   Label: LAB_1000a72c
    LEA EAX,[ESI + 0x14]                ; 1000a730
    MOV dword ptr [ESI + 0x8],EAX       ; 1000a733
    MOV dword ptr [ESI + 0x18],0x2      ; 1000a736
    MOV EAX,dword ptr [ESI + 0x8]       ; 1000a73d
        ;   Label: LAB_1000a73d
    MOV dword ptr [ESI],EAX             ; 1000a740
    MOV dword ptr [ESI + 0x4],0x0       ; 1000a742
    POP ESI                             ; 1000a749
    RET                                 ; 1000a74a

