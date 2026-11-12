; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280(CDemonRenderer *this_ptr,CVector3i *input_point)
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
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000 at 00475584
;   core_dtrace.cpp_FUN_00474020 at 004740b5
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 at 0053859e
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_00403830
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0046b280
        ;   Label: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046b283
    MOV EAX,dword ptr [EDX]             ; 0046b287
    MOV dword ptr [ESP + 0x4],EAX       ; 0046b289
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046b28d
    MOV dword ptr [ESP + 0x8],EAX       ; 0046b290
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046b294
    MOV dword ptr [ESP + 0xc],EAX       ; 0046b297
    MOV EAX,ESP                         ; 0046b29b
    PUSH EAX                            ; 0046b29d
    CALL engine_3d.c_processCameraRelativePoint_FUN_00403830 ; 0046b29e
        ;   XREF to: 00403830 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_00403830(SMRGLPoint * block)
    ADD ESP,0x4                         ; 0046b2a3
    ADD ESP,0x10                        ; 0046b2a6
    RET                                 ; 0046b2a9

