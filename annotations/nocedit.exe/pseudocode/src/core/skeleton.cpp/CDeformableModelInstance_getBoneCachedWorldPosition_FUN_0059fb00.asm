; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_position
; int              Stack[0xc]:4   bone_index
;
; XREF[44]:
;   core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00416240 at 00416264
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 00416084
;   core_batman.cpp_CBatman_getTargetPoints_FUN_00417bb0 at 00417c06
;   core_batman.cpp_CBatman_processDamage_FUN_004179a0 at 004179f4
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416b79
;   core_beast.cpp_CBeast_getTargetPoints_FUN_004183b0 at 004183c9
;   core_biggs.cpp_CBiggs_getTargetPoints_FUN_00418c10 at 00418c29
;   core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_0041d550 at 0041d583
;   core_bride.cpp_CBride_getTargetPoints_FUN_00424a10 at 00424a45
;   core_bride.cpp_CBride_processDamage_FUN_00424830 at 00424873
;   ... and 34 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059fb00
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
    MOV ECX,dword ptr [ESP + 0xc]       ; 0059fb04
    LEA EAX,[ECX*0x4 + 0x0]             ; 0059fb08
    SUB EAX,ECX                         ; 0059fb0f
    MOV ECX,dword ptr [ESP + 0x4]       ; 0059fb11
    SHL EAX,0x4                         ; 0059fb15
    ADD EAX,ECX                         ; 0059fb18
    MOV ECX,dword ptr [EAX + 0xe8c]     ; 0059fb1a
    MOV dword ptr [EDX],ECX             ; 0059fb20
    MOV ECX,dword ptr [EAX + 0xe9c]     ; 0059fb22
    MOV dword ptr [EDX + 0x4],ECX       ; 0059fb28
    MOV ECX,dword ptr [EAX + 0xeac]     ; 0059fb2b
    MOV dword ptr [EDX + 0x8],ECX       ; 0059fb31
    MOV EAX,EDX                         ; 0059fb34
    RET                                 ; 0059fb36

