; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_quantize_cpp_freeMemory_FUN_00556d40(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640ab5
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH 0x79                           ; 00556d40
        ;   Label: shape_quantize.cpp_freeMemory_FUN_00556d40
    PUSH 0x640ab5                       ; 00556d42 | = "..\\shape\\quantize.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 00556d47
    PUSH EDX                            ; 00556d4b
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00556d4c
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00556d51
    RET                                 ; 00556d54

