; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * core_path_cpp_CPathMap_arrdtor12_FUN_005145d0(CPathMap *this_ptr,uint flags)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5faac0                       ; 005145d0
        ;   Label: core_path.cpp_CPathMap_arrdtor12_FUN_005145d0
    PUSH 0xc                            ; 005145d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005145d7
    PUSH EDX                            ; 005145db
    CALL crt_memory.c___arrfini_FUN_005b854f ; 005145dc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005145e1
    RET                                 ; 005145e4

