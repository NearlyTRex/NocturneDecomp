; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_boxactor_cpp_freeFilters_FUN_004236e0(CDemonFilter **objs)
;
; Parameters:
; CDemonFilter * * Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonFilterTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65b390                       ; 004236e0 | g_CDemonFilterTypeInfo
        ;   Label: core_boxactor.cpp_freeFilters_FUN_004236e0
    PUSH 0x8                            ; 004236e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004236e7
    PUSH EDX                            ; 004236eb
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004236ec
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004236f1
    RET                                 ; 004236f4

