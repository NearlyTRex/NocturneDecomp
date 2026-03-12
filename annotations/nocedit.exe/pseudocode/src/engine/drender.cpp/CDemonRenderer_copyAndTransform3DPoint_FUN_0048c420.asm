; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420(CDemonRenderer *this_ptr,CVector3f *input_point)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_point
; Local Variables:
; CQuaternion4f    Stack[-0x10]:16  CStack_10
;
; XREF[3]:
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 at 004983e2
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 at 00496f00
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 at 00574a4e
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0048c420
        ;   Label: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048c423
    MOV EAX,dword ptr [EDX]             ; 0048c427
    MOV dword ptr [ESP + 0x4],EAX       ; 0048c429
    MOV EAX,dword ptr [EDX + 0x4]       ; 0048c42d
    MOV dword ptr [ESP + 0x8],EAX       ; 0048c430
    MOV EAX,dword ptr [EDX + 0x8]       ; 0048c434
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c437
    MOV EAX,ESP                         ; 0048c43b
    PUSH EAX                            ; 0048c43d
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 0048c43e
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f * input_point)
    ADD ESP,0x4                         ; 0048c443
    ADD ESP,0x10                        ; 0048c446
    RET                                 ; 0048c449

