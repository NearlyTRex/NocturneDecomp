; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; CustomScanlineFunc * Stack[0xc]:4   scanline_renderer
;
; XREF[4]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0 at 0045ad7b
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170 at 0045d45f
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70 at 0045f41b
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80 at 0053ac1b
;
; Referenced Globals:
;   undefined4 DAT_007e3e88
;   undefined4 DAT_007e3e8c
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   core_asgaya.cpp_FUN_005a23c0
;   core_xform.cpp_transformAndClipGeometry_FUN_00587cd0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d330
        ;   Label: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
    PUSH ESI                            ; 0046d331
    PUSH EDI                            ; 0046d332
    PUSH EBP                            ; 0046d333
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046d334
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046d338
    CMP dword ptr [EAX + 0xc],0x0       ; 0046d33c
    JNZ 0x0046d351                      ; 0046d340
        ;   XREF to: 0046d351 (CONDITIONAL_JUMP)  ; LAB_0046d351
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046d342
    CMP dword ptr [EAX + 0x4],0x0       ; 0046d346
    JZ 0x0046d370                       ; 0046d34a
        ;   XREF to: 0046d370 (CONDITIONAL_JUMP)  ; LAB_0046d370
    POP EBP                             ; 0046d34c
        ;   Label: LAB_0046d34c
    POP EDI                             ; 0046d34d
    POP ESI                             ; 0046d34e
    POP EBX                             ; 0046d34f
    RET                                 ; 0046d350
    LEA EAX,[EBX + 0x8]                 ; 0046d351
        ;   Label: LAB_0046d351
    PUSH EAX                            ; 0046d354
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046d355
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046d35a
    TEST EAX,EAX                        ; 0046d35d
    JZ 0x0046d34c                       ; 0046d35f
        ;   XREF to: 0046d34c (CONDITIONAL_JUMP)  ; LAB_0046d34c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046d361
    CMP dword ptr [EAX + 0x4],0x0       ; 0046d365
    JZ 0x0046d370                       ; 0046d369
        ;   XREF to: 0046d370 (CONDITIONAL_JUMP)  ; LAB_0046d370
    POP EBP                             ; 0046d36b
    POP EDI                             ; 0046d36c
    POP ESI                             ; 0046d36d
    POP EBX                             ; 0046d36e
    RET                                 ; 0046d36f
    LEA EAX,[EBX + 0x18]                ; 0046d370
        ;   Label: LAB_0046d370
    MOV ESI,0xc4                        ; 0046d373
    PUSH EAX                            ; 0046d378
    MOV EBP,dword ptr [EBX + 0x4]       ; 0046d379
    MOV EDI,0x6                         ; 0046d37c
    PUSH EBP                            ; 0046d381
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046d382 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046d388 | DAT_01c6e2b8
    CALL core_xform.cpp_transformAndClipGeometry_FUN_00587cd0 ; 0046d38e
        ;   XREF to: 00587cd0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_00587cd0(int vertex_count, int * vertex_indices)
    MOV EAX,[0x007e3e88]                ; 0046d393 | DAT_007e3e88
    ADD ESP,0x8                         ; 0046d398
    CMP EAX,0x2                         ; 0046d39b
    JLE 0x0046d34c                      ; 0046d39e
        ;   XREF to: 0046d34c (CONDITIONAL_JUMP)  ; LAB_0046d34c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046d3a0
    PUSH EDX                            ; 0046d3a4
    PUSH EAX                            ; 0046d3a5
    PUSH 0x7e3e8c                       ; 0046d3a6 | DAT_007e3e8c
    CALL core_asgaya.cpp_FUN_005a23c0   ; 0046d3ab
        ;   XREF to: 005a23c0 (UNCONDITIONAL_CALL)  ; undefined core_asgaya.cpp_FUN_005a23c0()
    ADD ESP,0xc                         ; 0046d3b0
    POP EBP                             ; 0046d3b3
    POP EDI                             ; 0046d3b4
    POP ESI                             ; 0046d3b5
    POP EBX                             ; 0046d3b6
    RET                                 ; 0046d3b7

