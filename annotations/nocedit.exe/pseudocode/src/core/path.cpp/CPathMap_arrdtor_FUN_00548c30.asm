; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPathMap * __cdecl core_path_cpp_CPathMap_arrdtor_FUN_00548c30(CPathMap *objs,uint flags)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CPathMapTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x662110                       ; 00548c30 | g_CPathMapTypeInfo
        ;   Label: core_path.cpp_CPathMap_arrdtor_FUN_00548c30
    PUSH 0xc                            ; 00548c35
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548c37
    PUSH EDX                            ; 00548c3b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 00548c3c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00548c41
    RET                                 ; 00548c44

