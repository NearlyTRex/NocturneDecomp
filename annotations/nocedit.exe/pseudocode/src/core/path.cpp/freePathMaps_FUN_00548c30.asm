; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_path.cpp_freePathMaps_FUN_00548c30(CPathMap * * array)
;
; Parameters:
; CPathMap * *     Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CPathMapTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x662110                       ; 00548c30 | g_CPathMapTypeInfo
        ;   Label: core_path.cpp_freePathMaps_FUN_00548c30
    PUSH 0xc                            ; 00548c35
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548c37
    PUSH EDX                            ; 00548c3b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 00548c3c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00548c41
    RET                                 ; 00548c44

