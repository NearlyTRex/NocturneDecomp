; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0 at 0048de22
;
; Referenced Globals:
;   undefined4 DAT_0061255c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bef218
;   undefined4 DAT_01c02aa0
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
;   engine_special.cpp_sync_FUN_00582920
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048e770
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770
    PUSH EBP                            ; 0048e771
    PUSH 0xff                           ; 0048e772
    PUSH 0xff                           ; 0048e777
    PUSH 0xff                           ; 0048e77c
    MOV EDX,dword ptr [0x0061255c]      ; 0048e781 | DAT_0061255c
    PUSH EDX                            ; 0048e787 | DAT_01bc120c
    XOR ESI,ESI                         ; 0048e788
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0 ; 0048e78a
        ;   XREF to: 00483cf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV ECX,dword ptr [0x01bef218]      ; 0048e78f | DAT_01bef218
    ADD ESP,0x10                        ; 0048e795
    TEST ECX,ECX                        ; 0048e798
    JLE 0x0048e7de                      ; 0048e79a
        ;   XREF to: 0048e7de (CONDITIONAL_JUMP)  ; LAB_0048e7de
    PUSH EDI                            ; 0048e79c
    PUSH EBX                            ; 0048e79d
    MOV EBX,0x1c02aa0                   ; 0048e79e
    XOR EDI,EDI                         ; 0048e7a3
    PUSH EBX                            ; 0048e7a5 | DAT_01c02aa0
        ;   Label: LAB_0048e7a5
    MOV EBP,dword ptr [0x0061255c]      ; 0048e7a6 | DAT_0061255c
    PUSH EBP                            ; 0048e7ac | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0048e7ad
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048e7b2
    PUSH 0x0                            ; 0048e7b5
    MOV EAX,dword ptr [EDI + 0x1bef220] ; 0048e7b7
    PUSH EAX                            ; 0048e7bd
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70 ; 0048e7be
        ;   XREF to: 00457f70 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70(CDemonCube * this_ptr, uint rendering_mode)
    ADD ESP,0x8                         ; 0048e7c3
    ADD EDI,0x4                         ; 0048e7c6
    INC ESI                             ; 0048e7c9
    CALL engine_special.cpp_sync_FUN_00582920 ; 0048e7ca
        ;   XREF to: 00582920 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_sync_FUN_00582920()
    MOV EDX,dword ptr [0x01bef218]      ; 0048e7cf | DAT_01bef218
    ADD EBX,0xc                         ; 0048e7d5
    CMP ESI,EDX                         ; 0048e7d8
    JL 0x0048e7a5                       ; 0048e7da
        ;   XREF to: 0048e7a5 (CONDITIONAL_JUMP)  ; LAB_0048e7a5
    POP EBX                             ; 0048e7dc
    POP EDI                             ; 0048e7dd
    POP EBP                             ; 0048e7de
        ;   Label: LAB_0048e7de
    POP ESI                             ; 0048e7df
    RET                                 ; 0048e7e0

