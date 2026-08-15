; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CVector3f_arrdtor10_FUN_0040e300(CVector3f *this_ptr,uint flags)
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

    PUSH 0x5993b0                       ; 0040e300 | g_CVectorTypeInfo_005993b0
        ;   Label: core_actor.cpp_CVector3f_arrdtor10_FUN_0040e300
    PUSH 0xa                            ; 0040e305
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e307
    PUSH EDX                            ; 0040e30b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0040e30c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0040e311
    RET                                 ; 0040e314

