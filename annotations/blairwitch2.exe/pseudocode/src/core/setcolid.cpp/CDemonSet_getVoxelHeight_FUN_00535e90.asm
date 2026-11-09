; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_00535e90(CDemonSet *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00535e90
        ;   Label: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_00535e90
    MOV EDX,dword ptr [ESP + 0x10]      ; 00535e93
    PUSH EDX                            ; 00535e97
    PUSH 0x1fc9c68                      ; 00535e98
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300 ; 00535e9d
        ;   XREF to: 00476300 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300(CDemonRaytrace * this_ptr, CVector3f * world_position)
    MOV dword ptr [ESP + 0xc],EAX       ; 00535ea2
    FLD float ptr [ESP + 0xc]           ; 00535ea6
    ADD ESP,0x8                         ; 00535eaa
    FSTP float ptr [ESP]                ; 00535ead
    MOV EAX,dword ptr [ESP]             ; 00535eb0
    ADD ESP,0x8                         ; 00535eb3
    RET                                 ; 00535eb6

