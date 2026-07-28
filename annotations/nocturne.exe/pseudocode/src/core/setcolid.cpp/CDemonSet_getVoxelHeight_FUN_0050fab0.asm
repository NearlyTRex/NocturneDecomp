; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0050fab0(undefined4 param_1,CVector3f *param_2)
;
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0050fab0
        ;   Label: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0050fab0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050fab3
    PUSH EDX                            ; 0050fab7
    PUSH 0x1fba938                      ; 0050fab8
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0 ; 0050fabd
        ;   XREF to: 0046aff0 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0(CDemonRaytrace * this_ptr, CVector3f * world_position)
    MOV dword ptr [ESP + 0xc],EAX       ; 0050fac2
    FLD float ptr [ESP + 0xc]           ; 0050fac6
    ADD ESP,0x8                         ; 0050faca
    FSTP float ptr [ESP]                ; 0050facd
    MOV EAX,dword ptr [ESP]             ; 0050fad0
    ADD ESP,0x8                         ; 0050fad3
    RET                                 ; 0050fad6

