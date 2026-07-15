; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c__strdup_FUN_100117b0(char *s)
;
; Parameters:
; char *           Stack[0x4]:4   s
;
; XREF[1]:
;   crt_env.c_copy_environ_FUN_10011610 at 10011662
;
; Called Functions:
;   crt_heap.c_malloc_FUN_10008830
;   crt_string.c_strcpy_FUN_10011930
;   crt_string.c_strlen_FUN_100118b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 100117b0
        ;   Label: crt_string.c__strdup_FUN_100117b0
    MOV EBP,ESP                         ; 100117b1
    PUSH EDI                            ; 100117b3
    MOV EDI,dword ptr [EBP + 0x8]       ; 100117b4
    PUSH EDI                            ; 100117b7
    CALL crt_string.c_strlen_FUN_100118b0 ; 100117b8
        ;   XREF to: 100118b0 (UNCONDITIONAL_CALL)  ; size_t crt_string.c_strlen_FUN_100118b0(char * s)
    POP EDX                             ; 100117bd
    INC EAX                             ; 100117be
    PUSH EAX                            ; 100117bf
    CALL crt_heap.c_malloc_FUN_10008830 ; 100117c0
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    POP EDX                             ; 100117c5
    OR EAX,EAX                          ; 100117c6
    JZ 0x100117d3                       ; 100117c8
        ;   XREF to: 100117d3 (CONDITIONAL_JUMP)  ; LAB_100117d3
    PUSH EDI                            ; 100117ca
    PUSH EAX                            ; 100117cb
    CALL crt_string.c_strcpy_FUN_10011930 ; 100117cc
        ;   XREF to: 10011930 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_FUN_10011930(char * dst, char * src)
    POP EDX                             ; 100117d1
    POP EDX                             ; 100117d2
    POP EDI                             ; 100117d3
        ;   Label: LAB_100117d3
    LEAVE                               ; 100117d4
    RET                                 ; 100117d5

