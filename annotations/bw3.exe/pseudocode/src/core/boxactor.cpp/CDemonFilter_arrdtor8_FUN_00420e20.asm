; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_00420e20(CDemonFilter *this_ptr,uint flags)
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

    PUSH 0x5dcb50                       ; 00420e20
        ;   Label: core_boxactor.cpp_CDemonFilter_arrdtor8_FUN_00420e20
    PUSH 0x8                            ; 00420e25
    MOV EDX,dword ptr [ESP + 0xc]       ; 00420e27
    PUSH EDX                            ; 00420e2b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 00420e2c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00420e31
    RET                                 ; 00420e34

