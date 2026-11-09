; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
;
; XREF[1]:
;   core_enemy.cpp_FUN_00489600 at 0048970a
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00477530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0053cca0
        ;   Label: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0
    PUSH EDX                            ; 0053cca4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053cca5
    PUSH ECX                            ; 0053cca9
    PUSH 0x203b37c                      ; 0053ccaa | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00477530 ; 0053ccaf
        ;   XREF to: 00477530 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00477530(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)
    ADD ESP,0xc                         ; 0053ccb4
    RET                                 ; 0053ccb7

