; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dcube_cpp_CVector3f_arrdtor16_FUN_0044b640(CVector3f *this_ptr,uint flags)
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

    PUSH 0x5993b0                       ; 0044b640 | g_CVectorTypeInfo_005993b0
        ;   Label: core_dcube.cpp_CVector3f_arrdtor16_FUN_0044b640
    PUSH 0x10                           ; 0044b645
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044b647
    PUSH EDX                            ; 0044b64b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0044b64c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044b651
    RET                                 ; 0044b654

