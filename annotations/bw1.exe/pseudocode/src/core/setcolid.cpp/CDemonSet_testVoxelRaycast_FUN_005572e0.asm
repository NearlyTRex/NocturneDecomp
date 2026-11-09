; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
;
; XREF[2]:
;   core_enemy.cpp_FUN_004a0980 at 004a0a8a
;   core_mimic.cpp_FUN_0050fba0 at 0050ff4c
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 005572e0
        ;   Label: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_005572e0
    PUSH EDX                            ; 005572e4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005572e5
    PUSH ECX                            ; 005572e9
    PUSH 0x1fe5c1c                      ; 005572ea | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0 ; 005572ef
        ;   XREF to: 0048e9b0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)
    ADD ESP,0xc                         ; 005572f4
    RET                                 ; 005572f7

