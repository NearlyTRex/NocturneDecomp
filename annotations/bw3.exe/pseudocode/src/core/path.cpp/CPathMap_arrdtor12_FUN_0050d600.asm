; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_CPathMap_arrdtor12_FUN_0050d600(CPathMap *this_ptr,uint flags)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e3180                       ; 0050d600
        ;   Label: core_path.cpp_CPathMap_arrdtor12_FUN_0050d600
    PUSH 0xc                            ; 0050d605
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050d607
    PUSH EDX                            ; 0050d60b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0050d60c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050d611
    RET                                 ; 0050d614

