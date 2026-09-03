; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
;
; XREF[2]:
;   core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0 at 00479b43
;   core_mimic.cpp_CMimic_processAnimation_FUN_004d4f30 at 004d5232
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytrace_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0050fae0
        ;   Label: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
    PUSH EDX                            ; 0050fae4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050fae5
    PUSH ECX                            ; 0050fae9
    PUSH 0x1fba938                      ; 0050faea | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0 ; 0050faef
        ;   XREF to: 0046b1b0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)
    ADD ESP,0xc                         ; 0050faf4
    RET                                 ; 0050faf7

