; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor_FUN_0051f880(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1f40                       ; 0051f880
        ;   Label: core_skeleton.cpp_CSkeleton_arrdtor_FUN_0051f880
    PUSH 0x28                           ; 0051f885
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f887
    PUSH EDX                            ; 0051f88b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0051f88c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051f891
    RET                                 ; 0051f894

