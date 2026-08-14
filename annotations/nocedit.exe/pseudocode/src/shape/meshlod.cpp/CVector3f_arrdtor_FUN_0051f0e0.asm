; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl shape_meshlod_cpp_CVector3f_arrdtor_FUN_0051f0e0(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 0051f0e0 | g_CVectorTypeInfo
        ;   Label: shape_meshlod.cpp_CVector3f_arrdtor_FUN_0051f0e0
    PUSH 0x190                          ; 0051f0e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f0ea
    PUSH EDX                            ; 0051f0ee
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0051f0ef
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051f0f4
    RET                                 ; 0051f0f7

