; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dracbrid_cpp_CVector3f_arrdtor_FUN_0045b410(CVector3f *objs,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   core_dracbrid.cpp_SFreaky_dtor_FUN_0045b330 at 0045b33a
;   core_flies.cpp_SFly_dtor_FUN_0048fcc0 at 0048fcca
;   core_gore.cpp_CFootstep_dtor_FUN_004b09d0 at 004b09da
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0045b410 | g_CVectorTypeInfo_005993b0
        ;   Label: core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410
    PUSH 0x4                            ; 0045b415
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045b417
    PUSH EDX                            ; 0045b41b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0045b41c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0045b421
    RET                                 ; 0045b424

