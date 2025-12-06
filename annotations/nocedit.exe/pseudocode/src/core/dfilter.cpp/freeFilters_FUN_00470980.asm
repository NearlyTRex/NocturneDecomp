; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_freeFilters_FUN_00470980(CDemonFilter * * array)
;
; Parameters:
; CDemonFilter * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonFilterTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65b390                       ; 00470980 | WatcomTypeInfo g_CDemonFilterTypeInfo
        ;   Label: core_dfilter.cpp_freeFilters_FUN_00470980
    PUSH 0x4                            ; 00470985
    MOV EDX,dword ptr [ESP + 0xc]       ; 00470987
    PUSH EDX                            ; 0047098b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0047098c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00470991
    RET                                 ; 00470994

