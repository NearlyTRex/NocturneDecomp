; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_mirror_cpp_CVector3f_arrdtor_FUN_004d7db0(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004d7db0 | g_CVectorTypeInfo_005993b0
        ;   Label: core_mirror.cpp_CVector3f_arrdtor_FUN_004d7db0
    PUSH 0x20                           ; 004d7db5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d7db7
    PUSH EDX                            ; 004d7dbb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004d7dbc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004d7dc1
    RET                                 ; 004d7dc4

