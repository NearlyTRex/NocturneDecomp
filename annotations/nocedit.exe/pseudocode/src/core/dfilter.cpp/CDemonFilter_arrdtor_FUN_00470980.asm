; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_arrdtor_FUN_00470980(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonFilterTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65b390                       ; 00470980 | g_CDemonFilterTypeInfo
        ;   Label: core_dfilter.cpp_CDemonFilter_arrdtor_FUN_00470980
    PUSH 0x4                            ; 00470985
    MOV EDX,dword ptr [ESP + 0xc]       ; 00470987
    PUSH EDX                            ; 0047098b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0047098c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00470991
    RET                                 ; 00470994

