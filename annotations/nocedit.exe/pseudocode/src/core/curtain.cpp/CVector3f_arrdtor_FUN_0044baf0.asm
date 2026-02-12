; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_curtain_cpp_CVector3f_arrdtor_FUN_0044baf0(CVector3f *objs,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 at 0059de62
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 at 0059a297
;   core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0 at 00599901
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 0044baf0 | g_CVectorTypeInfo
        ;   Label: core_curtain.cpp_CVector3f_arrdtor_FUN_0044baf0
    PUSH 0x64                           ; 0044baf5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044baf7
    PUSH EDX                            ; 0044bafb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0044bafc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044bb01
    RET                                 ; 0044bb04

