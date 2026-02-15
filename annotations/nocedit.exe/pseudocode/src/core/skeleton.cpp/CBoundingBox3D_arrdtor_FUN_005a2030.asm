; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_skeleton_cpp_CBoundingBox3D_arrdtor_FUN_005a2030(CBoundingBox3D *objs,uint flags)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 at 0059a287
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x659900                       ; 005a2030 | g_CBoundingBox3DTypeInfo
        ;   Label: core_skeleton.cpp_CBoundingBox3D_arrdtor_FUN_005a2030
    PUSH 0x64                           ; 005a2035
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a2037
    PUSH EDX                            ; 005a203b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005a203c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a2041
    RET                                 ; 005a2044

