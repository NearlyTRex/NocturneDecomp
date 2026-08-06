; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_getTranslation_FUN_0055bc00(CMatrix3x4f *matrix_in,CVector3f *vector_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
; CVector3f *      Stack[0x8]:4   vector_out
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[15]:
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220 at 00429354
;   core_fire.cpp_CBulletHole_init_FUN_00482c80 at 00482dff
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004980d0 at 00498264
;   core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004c9580 at 004c98d1
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d5a21
;   core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_004f7700 at 004f77b1
;   core_scat.cpp_CScat_FUN_004fdd00 at 004fde0a
;   core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120 at 0051915c
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60 at 00518fa8
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100 at 0053d46c
;   ... and 5 more
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0055bc00
        ;   Label: core_xform.cpp_getTranslation_FUN_0055bc00
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055bc03
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055bc07
    MOV ECX,dword ptr [EDX + 0xc]       ; 0055bc0b
    MOV dword ptr [ESP],ECX             ; 0055bc0e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0055bc11
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0055bc14
    MOV dword ptr [ESP + 0x4],EDX       ; 0055bc17
    MOV dword ptr [EAX + 0x4],ECX       ; 0055bc1b
    MOV EDX,dword ptr [ESP]             ; 0055bc1e
    MOV dword ptr [EAX],EDX             ; 0055bc21
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055bc23
    MOV dword ptr [EAX + 0x8],EDX       ; 0055bc27
    ADD ESP,0x8                         ; 0055bc2a
    RET                                 ; 0055bc2d

