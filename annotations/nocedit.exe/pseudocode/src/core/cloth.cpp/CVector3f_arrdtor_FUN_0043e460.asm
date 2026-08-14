; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_cloth.cpp_SClothVertex_dtor_FUN_0043e440 at 0043e44c
;   core_fire.cpp_CCrater_dtor_FUN_004c95a0 at 004c95aa
;   core_fire.cpp_CGlassParticle_dtor_FUN_004c9660 at 004c966a
;   core_skeleton.cpp_SVert_dtor_FUN_005a1f90 at 005a1f9a
;   shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0 at 0051efca
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 at 0051c05c
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 0043e460 | g_CVectorTypeInfo
        ;   Label: core_cloth.cpp_CVector3f_arrdtor_FUN_0043e460
    PUSH 0x3                            ; 0043e465
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043e467
    PUSH EDX                            ; 0043e46b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0043e46c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0043e471
    RET                                 ; 0043e474

