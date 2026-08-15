; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dtrace_cpp_CVector3f_arrdtor20000_FUN_0046c230(CVector3f *this_ptr,uint flags)
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

    PUSH 0x5993b0                       ; 0046c230 | g_CVectorTypeInfo_005993b0
        ;   Label: core_dtrace.cpp_CVector3f_arrdtor20000_FUN_0046c230
    PUSH 0x4e20                         ; 0046c235
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046c23a
    PUSH EDX                            ; 0046c23e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0046c23f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0046c244
    RET                                 ; 0046c247

