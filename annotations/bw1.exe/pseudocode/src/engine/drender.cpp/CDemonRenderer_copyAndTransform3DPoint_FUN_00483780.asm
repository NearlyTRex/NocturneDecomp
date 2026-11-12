; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780(CDemonRenderer *this_ptr,CVector3i *input_point)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_point
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0 at 0048da74
;   core_dtrace.cpp_FUN_0048c510 at 0048c5a5
;   core_setdir.cpp_FUN_0055b330 at 0055b400
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00483780
        ;   Label: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
    MOV EDX,dword ptr [ESP + 0x18]      ; 00483783
    MOV EAX,dword ptr [EDX]             ; 00483787
    MOV dword ptr [ESP + 0x4],EAX       ; 00483789
    MOV EAX,dword ptr [EDX + 0x4]       ; 0048378d
    MOV dword ptr [ESP + 0x8],EAX       ; 00483790
    MOV EAX,dword ptr [EDX + 0x8]       ; 00483794
    MOV dword ptr [ESP + 0xc],EAX       ; 00483797
    MOV EAX,ESP                         ; 0048379b
    PUSH EAX                            ; 0048379d
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 0048379e
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint * block)
    ADD ESP,0x4                         ; 004837a3
    ADD ESP,0x10                        ; 004837a6
    RET                                 ; 004837a9

