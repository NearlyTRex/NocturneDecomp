; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_moon_cpp_CCourse_arrdtor_FUN_004df1d0(CCourse *this_ptr,uint flags)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0c80                       ; 004df1d0
        ;   Label: core_moon.cpp_CCourse_arrdtor_FUN_004df1d0
    PUSH 0x3                            ; 004df1d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df1d7
    PUSH EDX                            ; 004df1db
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004df1dc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004df1e1
    RET                                 ; 004df1e4

