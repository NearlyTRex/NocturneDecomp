; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_CPathMap_arrdtor_FUN_004f2530(CPathMap *this_ptr,uint flags)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1200                       ; 004f2530
        ;   Label: core_path.cpp_CPathMap_arrdtor_FUN_004f2530
    PUSH 0xc                            ; 004f2535
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f2537
    PUSH EDX                            ; 004f253b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004f253c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f2541
    RET                                 ; 004f2544

