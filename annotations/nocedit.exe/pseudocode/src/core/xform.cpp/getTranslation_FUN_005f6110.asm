; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_xform_cpp_getTranslation_FUN_005f6110(CMatrix3x4f *matrix_in,CVector3f *vector_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
; CVector3f *      Stack[0x8]:4   vector_out
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[15]:
;   core_charactr.cpp_CCharacter_FUN_0042d090 at 0042d1c4
;   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 at 004bf96f
;   core_gabriela.cpp_CGabriella_FUN_004d5550 at 004d56e4
;   core_mimic.cpp_CMimic_FUN_005205f0 at 005207af
;   core_platfrm.cpp_CPlatform_FUN_0054e320 at 0054e3d1
;   core_scat.cpp_CScat_FUN_00558fd0 at 005590da
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005978ca
;   core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800 at 0059b83c
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 at 0059b688
;   core_stranger.cpp_CStranger_FUN_005c06b0 at 005c0792
;   ... and 5 more
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005f6110
        ;   Label: core_xform.cpp_getTranslation_FUN_005f6110
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f6113
    MOV EAX,dword ptr [ESP + 0x10]      ; 005f6117
    MOV ECX,dword ptr [EDX + 0xc]       ; 005f611b
    MOV dword ptr [ESP],ECX             ; 005f611e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 005f6121
    MOV EDX,dword ptr [EDX + 0x2c]      ; 005f6124
    MOV dword ptr [ESP + 0x4],EDX       ; 005f6127
    MOV dword ptr [EAX + 0x4],ECX       ; 005f612b
    MOV EDX,dword ptr [ESP]             ; 005f612e
    MOV dword ptr [EAX],EDX             ; 005f6131
    MOV EDX,dword ptr [ESP + 0x4]       ; 005f6133
    MOV dword ptr [EAX + 0x8],EDX       ; 005f6137
    ADD ESP,0x8                         ; 005f613a
    RET                                 ; 005f613d

