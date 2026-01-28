; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_005724e0 (CDemonSet *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005724e0
        ;   Label: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005724e3
    PUSH EDX                            ; 005724e7
    PUSH 0x3277d14                      ; 005724e8 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170 ; 005724ed
        ;   XREF to: 00499170 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace * this_ptr, CVector3f * world_position)
    MOV dword ptr [ESP + 0xc],EAX       ; 005724f2
    FLD float ptr [ESP + 0xc]           ; 005724f6
    ADD ESP,0x8                         ; 005724fa
    FSTP float ptr [ESP]                ; 005724fd
    MOV EAX,dword ptr [ESP]             ; 00572500
    ADD ESP,0x8                         ; 00572503
    RET                                 ; 00572506

