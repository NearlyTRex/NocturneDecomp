; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_memory_c_calloc_FUN_0060ca90(ulong count,ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   count
; ulong            Stack[0x8]:4   size
;
; XREF[4]:
;   crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c at 0060a24e
;   crt_sync.c_allocate_critical_section_FUN_00609f24 at 00609f54
;   crt_tls.c_getThreadLocalData_FUN_0060caf8 at 0060cb57
;   crt_tls.c_register_thread_data_FUN_0060cbd0 at 0060cbe5
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ca90
        ;   Label: crt_memory.c_calloc_FUN_0060ca90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060ca91
    IMUL EBX,dword ptr [ESP + 0xc]      ; 0060ca95
    PUSH EBX                            ; 0060ca9a
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060ca9b
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060caa0
    TEST EAX,EAX                        ; 0060caa3
    JZ 0x0060cab3                       ; 0060caa5
        ;   XREF to: 0060cab3 (CONDITIONAL_JUMP)  ; LAB_0060cab3
    PUSH EBX                            ; 0060caa7
    PUSH 0x0                            ; 0060caa8
    PUSH EAX                            ; 0060caaa
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060caab
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0060cab0
    POP EBX                             ; 0060cab3
        ;   Label: LAB_0060cab3
    RET                                 ; 0060cab4

