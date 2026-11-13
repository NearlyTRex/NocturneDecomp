; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_CPathMap_arrdtor12_FUN_00535920(CPathMap *this_ptr,uint flags)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6047b0                       ; 00535920
        ;   Label: core_path.cpp_CPathMap_arrdtor12_FUN_00535920
    PUSH 0xc                            ; 00535925
    MOV EDX,dword ptr [ESP + 0xc]       ; 00535927
    PUSH EDX                            ; 0053592b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0053592c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00535931
    RET                                 ; 00535934

