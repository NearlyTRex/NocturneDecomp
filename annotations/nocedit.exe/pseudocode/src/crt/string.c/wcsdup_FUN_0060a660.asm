; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister WCHAR * crt_string.c_wcsdup_FUN_0060a660(WCHAR * str)
;
;
; XREF[1]:
;   crt_startup.c_initialize_runtime_FUN_0060245c at 006025d0
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_string.c_memcpy_FUN_0060cd60
;   crt_string.c_wcslen_FUN_0060cd30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a660
        ;   Label: crt_string.c_wcsdup_FUN_0060a660
    PUSH ESI                            ; 0060a661
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060a662
    PUSH EDX                            ; 0060a666
    CALL crt_string.c_wcslen_FUN_0060cd30 ; 0060a667 | ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
        ;   XREF to: 0060cd30 (UNCONDITIONAL_CALL)
    INC EAX                             ; 0060a66c
    ADD ESP,0x4                         ; 0060a66d
    LEA ESI,[EAX*0x2 + 0x0]             ; 0060a670
    PUSH ESI                            ; 0060a677
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060a678 | void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060a67d
    MOV EBX,EAX                         ; 0060a680
    TEST EAX,EAX                        ; 0060a682
    JZ 0x0060a695                       ; 0060a684 | LAB_0060a695
        ;   XREF to: 0060a695 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0060a686
    MOV ECX,dword ptr [ESP + 0x10]      ; 0060a687
    PUSH ECX                            ; 0060a68b
    PUSH EAX                            ; 0060a68c
    CALL crt_string.c_memcpy_FUN_0060cd60 ; 0060a68d | void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
        ;   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060a692
    MOV EAX,EBX                         ; 0060a695
        ;   Label: LAB_0060a695
    POP ESI                             ; 0060a697
    POP EBX                             ; 0060a698
    RET                                 ; 0060a699

