; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60(CDemonRenderer *this_ptr,CVector3i *input_point)
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
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070 at 004765f4
;   core_dtrace.cpp_FUN_00475090 at 00475125
;   core_setdir.cpp_FUN_00540cf0 at 00540dc0
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0046ce60
        ;   Label: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046ce63
    MOV EAX,dword ptr [EDX]             ; 0046ce67
    MOV dword ptr [ESP + 0x4],EAX       ; 0046ce69
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046ce6d
    MOV dword ptr [ESP + 0x8],EAX       ; 0046ce70
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046ce74
    MOV dword ptr [ESP + 0xc],EAX       ; 0046ce77
    MOV EAX,ESP                         ; 0046ce7b
    PUSH EAX                            ; 0046ce7d
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 0046ce7e
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint * block)
    ADD ESP,0x4                         ; 0046ce83
    ADD ESP,0x10                        ; 0046ce86
    RET                                 ; 0046ce89

