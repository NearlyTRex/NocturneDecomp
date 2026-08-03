; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_arrdtor_FUN_0044c540(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59ac90                       ; 0044c540
        ;   Label: core_dfilter.cpp_CDemonFilter_arrdtor_FUN_0044c540
    PUSH 0x4                            ; 0044c545
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044c547
    PUSH EDX                            ; 0044c54b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0044c54c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044c551
    RET                                 ; 0044c554

