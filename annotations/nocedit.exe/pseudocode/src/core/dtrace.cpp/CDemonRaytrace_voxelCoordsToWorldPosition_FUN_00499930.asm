; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930(CDemonRaytrace * raytrace_ptr, CVector3f * output_position, CVector3i * voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   raytrace_ptr
; CVector3f *      Stack[0x8]:4   output_position
; CVector3i *      Stack[0xc]:4   voxel_coords
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00499930
        ;   Label: core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930
    MOV EDX,dword ptr [ESP + 0x8]       ; 00499934
    MOV ECX,dword ptr [ESP + 0xc]       ; 00499938
    FILD dword ptr [ECX]                ; 0049993c
    FMUL float ptr [EAX + 0x34]         ; 0049993e
    FADD float ptr [EAX + 0x10]         ; 00499941
    FSTP float ptr [EDX]                ; 00499944
    FILD dword ptr [ECX + 0x4]          ; 00499946
    FMUL float ptr [EAX + 0x38]         ; 00499949
    FADD float ptr [EAX + 0x14]         ; 0049994c
    FSTP float ptr [EDX + 0x4]          ; 0049994f
    FILD dword ptr [ECX + 0x8]          ; 00499952
    FMUL float ptr [EAX + 0x3c]         ; 00499955
    FADD float ptr [EAX + 0x18]         ; 00499958
    MOV EAX,EDX                         ; 0049995b
    FSTP float ptr [EDX + 0x8]          ; 0049995d
    RET                                 ; 00499960

