; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
;
; XREF[2]:
;   core_enemy.cpp_FUN_00488320 at 0048842a
;   core_mimic.cpp_FUN_004f0e10 at 004f11bc
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_004764c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00535ec0
        ;   Label: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0
    PUSH EDX                            ; 00535ec4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00535ec5
    PUSH ECX                            ; 00535ec9
    PUSH 0x1fc9c68                      ; 00535eca | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_004764c0 ; 00535ecf
        ;   XREF to: 004764c0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_004764c0(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)
    ADD ESP,0xc                         ; 00535ed4
    RET                                 ; 00535ed7

