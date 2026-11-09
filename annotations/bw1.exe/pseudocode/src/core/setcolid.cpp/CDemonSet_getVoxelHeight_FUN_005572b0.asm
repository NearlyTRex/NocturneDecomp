; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_005572b0(CDemonSet *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0048e7f0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005572b0
        ;   Label: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005572b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005572b3
    PUSH EDX                            ; 005572b7
    PUSH 0x1fe5c1c                      ; 005572b8
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0048e7f0 ; 005572bd
        ;   XREF to: 0048e7f0 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0048e7f0(CDemonRaytrace * this_ptr, CVector3f * world_position)
    MOV dword ptr [ESP + 0xc],EAX       ; 005572c2
    FLD float ptr [ESP + 0xc]           ; 005572c6
    ADD ESP,0x8                         ; 005572ca
    FSTP float ptr [ESP]                ; 005572cd
    MOV EAX,dword ptr [ESP]             ; 005572d0
    ADD ESP,0x8                         ; 005572d3
    RET                                 ; 005572d6

