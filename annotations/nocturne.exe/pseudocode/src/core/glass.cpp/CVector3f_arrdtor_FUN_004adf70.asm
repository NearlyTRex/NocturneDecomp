; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_glass_cpp_CVector3f_arrdtor_FUN_004adf70(CVector3f *objs,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_glass.cpp_CGlass_dtor_FUN_004adef0 at 004adf05
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004adf70 | g_CVectorTypeInfo_005993b0
        ;   Label: core_glass.cpp_CVector3f_arrdtor_FUN_004adf70
    PUSH 0x19                           ; 004adf75
    MOV EDX,dword ptr [ESP + 0xc]       ; 004adf77
    PUSH EDX                            ; 004adf7b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004adf7c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004adf81
    RET                                 ; 004adf84

