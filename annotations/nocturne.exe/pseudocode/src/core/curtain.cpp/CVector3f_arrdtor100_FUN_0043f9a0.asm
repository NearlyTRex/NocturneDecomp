; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_curtain_cpp_CVector3f_arrdtor100_FUN_0043f9a0(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 at 0051b702
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80 at 00517ca7
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0043f9a0 | g_CVectorTypeInfo_005993b0
        ;   Label: core_curtain.cpp_CVector3f_arrdtor100_FUN_0043f9a0
    PUSH 0x64                           ; 0043f9a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043f9a7
    PUSH EDX                            ; 0043f9ab
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0043f9ac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0043f9b1
    RET                                 ; 0043f9b4

