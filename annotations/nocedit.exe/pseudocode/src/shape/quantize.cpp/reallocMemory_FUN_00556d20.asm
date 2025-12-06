; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_quantize.cpp_reallocMemory_FUN_00556d20(void * ptr, int new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; int              Stack[0x8]:4   new_size
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640a9f
;
; Called Functions:
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH 0x73                           ; 00556d20
        ;   Label: shape_quantize.cpp_reallocMemory_FUN_00556d20
    PUSH 0x640a9f                       ; 00556d22 | = "..\\shape\\quantize.cpp" | s_shape_quantize_cpp_00640a9f = ..\shape\quantize.cpp
    MOV EDX,dword ptr [ESP + 0x10]      ; 00556d27
    PUSH EDX                            ; 00556d2b
    MOV ECX,dword ptr [ESP + 0x10]      ; 00556d2c
    PUSH ECX                            ; 00556d30
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00556d31 | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00556d36
    RET                                 ; 00556d39

