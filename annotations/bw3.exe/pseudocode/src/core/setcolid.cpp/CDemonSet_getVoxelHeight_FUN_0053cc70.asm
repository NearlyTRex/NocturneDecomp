; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0053cc70(CDemonSet *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0053cc70
        ;   Label: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0053cc70
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053cc73
    PUSH EDX                            ; 0053cc77
    PUSH 0x203b37c                      ; 0053cc78
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370 ; 0053cc7d
        ;   XREF to: 00477370 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370(CDemonRaytrace * this_ptr, CVector3f * world_position)
    MOV dword ptr [ESP + 0xc],EAX       ; 0053cc82
    FLD float ptr [ESP + 0xc]           ; 0053cc86
    ADD ESP,0x8                         ; 0053cc8a
    FSTP float ptr [ESP]                ; 0053cc8d
    MOV EAX,dword ptr [ESP]             ; 0053cc90
    ADD ESP,0x8                         ; 0053cc93
    RET                                 ; 0053cc96

