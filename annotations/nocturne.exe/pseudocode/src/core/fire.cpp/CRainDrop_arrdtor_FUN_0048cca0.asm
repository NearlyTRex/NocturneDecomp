; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_arrdtor_FUN_0048cca0(CRainDrop *this_ptr,uint flags)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d540                       ; 0048cca0
        ;   Label: core_fire.cpp_CRainDrop_arrdtor_FUN_0048cca0
    PUSH 0x100                          ; 0048cca5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ccaa
    PUSH EDX                            ; 0048ccae
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ccaf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ccb4
    RET                                 ; 0048ccb7

