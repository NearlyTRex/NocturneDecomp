; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_arrdtor4_FUN_0045dfe0(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fd010                       ; 0045dfe0
        ;   Label: core_dfilter.cpp_CDemonFilter_arrdtor4_FUN_0045dfe0
    PUSH 0x4                            ; 0045dfe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045dfe7
    PUSH EDX                            ; 0045dfeb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0045dfec
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0045dff1
    RET                                 ; 0045dff4

