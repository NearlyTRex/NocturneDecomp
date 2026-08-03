; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_boxactor_cpp_CDemonFilter_arrdtor_FUN_0041fb00(CDemonFilter *this_ptr,uint flags)
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

    PUSH 0x59ac90                       ; 0041fb00
        ;   Label: core_boxactor.cpp_CDemonFilter_arrdtor_FUN_0041fb00
    PUSH 0x8                            ; 0041fb05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041fb07
    PUSH EDX                            ; 0041fb0b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0041fb0c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041fb11
    RET                                 ; 0041fb14

