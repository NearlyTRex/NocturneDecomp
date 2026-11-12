; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_00423810(CDemonFilter *this_ptr,uint flags)
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

    PUSH 0x5fd010                       ; 00423810
        ;   Label: core_boxactor.cpp_CDemonFilter_arrdtor8_FUN_00423810
    PUSH 0x8                            ; 00423815
    MOV EDX,dword ptr [ESP + 0xc]       ; 00423817
    PUSH EDX                            ; 0042381b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0042381c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00423821
    RET                                 ; 00423824

