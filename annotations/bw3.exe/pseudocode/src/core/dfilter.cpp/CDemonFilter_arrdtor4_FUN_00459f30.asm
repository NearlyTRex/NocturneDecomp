; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_arrdtor4_FUN_00459f30(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dcb50                       ; 00459f30
        ;   Label: core_dfilter.cpp_CDemonFilter_arrdtor4_FUN_00459f30
    PUSH 0x4                            ; 00459f35
    MOV EDX,dword ptr [ESP + 0xc]       ; 00459f37
    PUSH EDX                            ; 00459f3b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 00459f3c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00459f41
    RET                                 ; 00459f44

