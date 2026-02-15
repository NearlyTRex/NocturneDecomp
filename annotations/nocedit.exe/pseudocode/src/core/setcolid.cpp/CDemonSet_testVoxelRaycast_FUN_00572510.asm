; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
;
; XREF[2]:
;   core_enemy.cpp_CEnemy_FUN_004a9a50 at 004a9ae3
;   core_mimic.cpp_CMimic_FUN_0051fcc0 at 0051ffc2
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00572510
        ;   Label: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
    PUSH EDX                            ; 00572514
    MOV ECX,dword ptr [ESP + 0xc]       ; 00572515
    PUSH ECX                            ; 00572519
    PUSH 0x3277d14                      ; 0057251a | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330 ; 0057251f
        ;   XREF to: 00499330 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)
    ADD ESP,0xc                         ; 00572524
    RET                                 ; 00572527

