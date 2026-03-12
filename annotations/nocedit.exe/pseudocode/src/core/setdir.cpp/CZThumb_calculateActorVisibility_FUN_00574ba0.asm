; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int apply_scaling)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3i *      Stack[0xc]:4   bounding_box_vertices
; SMRGLHeaderPrimitive * Stack[0x10]:4   primitives
; int              Stack[0x14]:4   apply_scaling
; Local Variables:
; float            Stack[-0x50]:4  local_50
; int[6]           Stack[-0x4c]:24  aiStack_4c
; CVector3i        Stack[-0x34]:12  local_34
; undefined4       Stack[-0x28]:4  local_28
; uint             Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; uint             Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 at 00575a6b
;   core_setdir.cpp_testCameraVisibility_FUN_005750a0 at 005751a1
;
; Referenced Globals:
;   double DOUBLE_006464ae = 0.5
;   double DOUBLE_006464b6 = 0.0625
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
;   core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574ba0
        ;   Label: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
    PUSH ESI                            ; 00574ba1
    PUSH EDI                            ; 00574ba2
    PUSH EBP                            ; 00574ba3
    MOV EBP,ESP                         ; 00574ba4
    SUB ESP,0x3c                        ; 00574ba6
    AND ESP,0xfffffff8                  ; 00574ba9
    MOV EDX,dword ptr [EBP + 0x14]      ; 00574bac
    PUSH EDX                            ; 00574baf
    CALL core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 ; 00574bb0
        ;   XREF to: 00574e70 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00574bb5
    MOV EAX,dword ptr [EBP + 0x18]      ; 00574bb8
    ADD EAX,0x20                        ; 00574bbb
    XOR EBX,EBX                         ; 00574bbe
    PUSH EAX                            ; 00574bc0
    MOV ESI,dword ptr [0x006703ec]      ; 00574bc1 | g_CDemonRendererPtr2
    MOV ECX,0x800000ff                  ; 00574bc7
    PUSH ESI                            ; 00574bcc | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x3c],ECX      ; 00574bcd
    MOV dword ptr [ESP + 0x34],EBX      ; 00574bd1
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00574bd5
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00574bda
    MOV EAX,dword ptr [EBP + 0x18]      ; 00574bdd
    MOV EAX,dword ptr [EAX + 0x30]      ; 00574be0
    MOV dword ptr [ESP + 0x1c],EAX      ; 00574be3
    MOV EAX,dword ptr [EBP + 0x18]      ; 00574be7
    MOV EAX,dword ptr [EAX + 0x38]      ; 00574bea
    MOV dword ptr [ESP + 0x24],EAX      ; 00574bed
    MOV EAX,dword ptr [EBP + 0x14]      ; 00574bf1
    MOV EAX,dword ptr [EAX + 0x18]      ; 00574bf4
    PUSH EBX                            ; 00574bf7
    MOV dword ptr [ESP + 0x24],EAX      ; 00574bf8
    LEA EAX,[ESP + 0x20]                ; 00574bfc
    PUSH EAX                            ; 00574c00
    MOV EDI,dword ptr [0x006703ec]      ; 00574c01 | g_CDemonRendererPtr2
    PUSH EDI                            ; 00574c07 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00574c08
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00574c0d
    XOR ESI,ESI                         ; 00574c10
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00574c12
    MOV EAX,[0x006703ec]                ; 00574c15 | g_CDemonRendererPtr2
        ;   Label: LAB_00574c15
    MOV EAX,dword ptr [EAX]             ; 00574c1a | g_CDemonRendererInstance
    PUSH EDI                            ; 00574c1c
    ADD EAX,ESI                         ; 00574c1d
    PUSH EAX                            ; 00574c1f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00574c20
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00574c25 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 00574c2a | g_CDemonRendererInstance
    ADD EDI,0xc                         ; 00574c2c
    ADD ESP,0x8                         ; 00574c2f
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x10] ; 00574c32
    MOV EDX,dword ptr [ESP + 0x34]      ; 00574c36
    MOV EAX,ECX                         ; 00574c3a
    AND EDX,ECX                         ; 00574c3c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00574c3e
    ADD ESI,0x30                        ; 00574c42
    OR ECX,EAX                          ; 00574c45
    MOV dword ptr [ESP + 0x34],EDX      ; 00574c47
    MOV dword ptr [ESP + 0x2c],ECX      ; 00574c4b
    CMP ESI,0x180                       ; 00574c4f
    JNZ 0x00574c15                      ; 00574c55
        ;   XREF to: 00574c15 (CONDITIONAL_JUMP)  ; LAB_00574c15
    TEST byte ptr [ESP + 0x37],0x80     ; 00574c57
    JZ 0x00574c69                       ; 00574c5c
        ;   XREF to: 00574c69 (CONDITIONAL_JUMP)  ; LAB_00574c69
    TEST byte ptr [ESP + 0x34],0xff     ; 00574c5e
    JNZ 0x00574df8                      ; 00574c63
        ;   XREF to: 00574df8 (CONDITIONAL_JUMP)  ; LAB_00574df8
    MOV EAX,dword ptr [EBP + 0x20]      ; 00574c69
        ;   Label: LAB_00574c69
    XOR EBX,EBX                         ; 00574c6c
    XOR ECX,ECX                         ; 00574c6e
    MOV dword ptr [ESP + 0x30],EBX      ; 00574c70
    LEA EBX,[EAX + 0x1b0]               ; 00574c74
    MOV EDX,dword ptr [ESP + 0x30]      ; 00574c7a
        ;   Label: LAB_00574c7a
    MOV dword ptr [ESP + ECX*0x1 + 0x4],EAX ; 00574c7e
    ADD ECX,0x4                         ; 00574c82
    INC EDX                             ; 00574c85
    ADD EAX,0x48                        ; 00574c86
    MOV dword ptr [ESP + 0x30],EDX      ; 00574c89
    CMP EAX,EBX                         ; 00574c8d
    JNZ 0x00574c7a                      ; 00574c8f
        ;   XREF to: 00574c7a (CONDITIONAL_JUMP)  ; LAB_00574c7a
    MOV ECX,dword ptr [EBP + 0x18]      ; 00574c91
    PUSH ECX                            ; 00574c94
    XOR EDI,EDI                         ; 00574c95
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00574c97
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00574c9c
    MOV ECX,dword ptr [0x006703ec]      ; 00574c9f | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_00574c9f
    MOV ECX,dword ptr [ECX]             ; 00574ca5 | g_CDemonRendererInstance
    ADD ECX,EDI                         ; 00574ca7
    MOV EBX,dword ptr [ECX + 0x8]       ; 00574ca9
    TEST EBX,EBX                        ; 00574cac
    JLE 0x00574cdb                      ; 00574cae
        ;   XREF to: 00574cdb (CONDITIONAL_JUMP)  ; LAB_00574cdb
    LEA ESI,[EBX + 0x80]                ; 00574cb0
    MOV EAX,dword ptr [ECX]             ; 00574cb6
    MOV EDX,ESI                         ; 00574cb8
    IMUL EDX                            ; 00574cba
    IDIV EBX                            ; 00574cbc
    MOV dword ptr [ECX],EAX             ; 00574cbe
    MOV EDX,ESI                         ; 00574cc0
    MOV EBX,dword ptr [ECX + 0x8]       ; 00574cc2
    MOV EAX,dword ptr [ECX + 0x4]       ; 00574cc5
    IMUL EDX                            ; 00574cc8
    IDIV EBX                            ; 00574cca
    MOV dword ptr [ECX + 0x4],EAX       ; 00574ccc
    PUSH ECX                            ; 00574ccf
    MOV dword ptr [ECX + 0x8],ESI       ; 00574cd0
    CALL engine_matrix.c_projectTransformedPoint_FUN_0050cdc0 ; 00574cd3
        ;   XREF to: 0050cdc0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex * point)
    ADD ESP,0x4                         ; 00574cd8
    ADD EDI,0x30                        ; 00574cdb
        ;   Label: LAB_00574cdb
    CMP EDI,0x180                       ; 00574cde
    JNZ 0x00574c9f                      ; 00574ce4
        ;   XREF to: 00574c9f (CONDITIONAL_JUMP)  ; LAB_00574c9f
    MOV ESI,0x3f800000                  ; 00574ce6
    MOV EDI,dword ptr [EBP + 0x24]      ; 00574ceb
    MOV dword ptr [ESP],ESI             ; 00574cee
    TEST EDI,EDI                        ; 00574cf1
    JZ 0x00574d27                       ; 00574cf3
        ;   XREF to: 00574d27 (CONDITIONAL_JUMP)  ; LAB_00574d27
    XOR EAX,EAX                         ; 00574cf5
    MOV ECX,dword ptr [0x006703ec]      ; 00574cf7 | g_CDemonRendererPtr2
        ;   Label: LAB_00574cf7
    MOV ECX,dword ptr [ECX]             ; 00574cfd | g_CDemonRendererInstance
    ADD ECX,EAX                         ; 00574cff
    TEST byte ptr [ECX + 0x13],0x80     ; 00574d01
    JZ 0x00574d1d                       ; 00574d05
        ;   XREF to: 00574d1d (CONDITIONAL_JUMP)  ; LAB_00574d1d
    CMP dword ptr [ECX + 0x8],0x0       ; 00574d07
    JLE 0x00574e21                      ; 00574d0b
        ;   XREF to: 00574e21 (CONDITIONAL_JUMP)  ; LAB_00574e21
    FLD float ptr [ESP]                 ; 00574d11
    FMUL double ptr [0x006464ae]        ; 00574d14 | DOUBLE_006464ae
    FSTP float ptr [ESP]                ; 00574d1a
        ;   Label: LAB_00574d1a
    ADD EAX,0x30                        ; 00574d1d
        ;   Label: LAB_00574d1d
    CMP EAX,0x180                       ; 00574d20
    JNZ 0x00574cf7                      ; 00574d25
        ;   XREF to: 00574cf7 (CONDITIONAL_JUMP)  ; LAB_00574cf7
    PUSH 0x0                            ; 00574d27
        ;   Label: LAB_00574d27
    MOV ECX,dword ptr [0x006703ec]      ; 00574d29 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00574d2f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00574d30
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00574d35
    MOV EBX,dword ptr [EBP + 0x14]      ; 00574d38
    PUSH EBX                            ; 00574d3b
    CALL core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30 ; 00574d3c
        ;   XREF to: 00574e30 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00574d41
    PUSH 0x1                            ; 00574d44
    MOV ESI,dword ptr [0x006703ec]      ; 00574d46 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00574d4c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00574d4d
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00574d52
    TEST byte ptr [ESP + 0x2f],0x80     ; 00574d55
    SETNZ AL                            ; 00574d5a
    AND EAX,0xff                        ; 00574d5d
    PUSH EAX                            ; 00574d62
    MOV EDI,dword ptr [0x006703ec]      ; 00574d63 | g_CDemonRendererPtr2
    PUSH EDI                            ; 00574d69 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 00574d6a
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00574d6f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00574d72
    XOR EBX,EBX                         ; 00574d76
    TEST EAX,EAX                        ; 00574d78
    JLE 0x00574db0                      ; 00574d7a
        ;   XREF to: 00574db0 (CONDITIONAL_JUMP)  ; LAB_00574db0
    LEA EDI,[EAX*0x4 + 0x0]             ; 00574d7c
    XOR ESI,ESI                         ; 00574d83
    MOV EDX,dword ptr [ESP + ESI*0x1 + 0x4] ; 00574d85
        ;   Label: LAB_00574d85
    PUSH EDX                            ; 00574d89
    MOV ECX,dword ptr [0x006703ec]      ; 00574d8a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00574d90 | g_CDemonRendererInstance
    ADD ESI,0x4                         ; 00574d91
    CALL engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 ; 00574d94
        ;   XREF to: 0048aa50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00574d99
    ADD EBX,EAX                         ; 00574d9c
    CMP ESI,EDI                         ; 00574d9e
    JL 0x00574d85                       ; 00574da0
        ;   XREF to: 00574d85 (CONDITIONAL_JUMP)  ; LAB_00574d85
    LEA EAX,[EAX]                       ; 00574da2
    LEA EDX,[EDX]                       ; 00574da8
    MOV EAX,EAX                         ; 00574dae
    PUSH 0x1                            ; 00574db0
        ;   Label: LAB_00574db0
    MOV ESI,dword ptr [0x006703ec]      ; 00574db2 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00574db8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 00574db9
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00574dbe
    PUSH 0x0                            ; 00574dc1
    MOV EDI,dword ptr [0x006703ec]      ; 00574dc3 | g_CDemonRendererPtr2
    PUSH EDI                            ; 00574dc9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00574dca
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00574dcf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00574dd2
    PUSH EAX                            ; 00574dd5
    CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0 ; 00574dd6
        ;   XREF to: 00574ef0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00574ddb
    MOV dword ptr [ESP + 0x38],EBX      ; 00574dde
    FILD dword ptr [ESP + 0x38]         ; 00574de2
    FMUL float ptr [ESP]                ; 00574de6
    FSTP float ptr [ESP + 0x28]         ; 00574de9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00574ded
    MOV ESP,EBP                         ; 00574df1
    POP EBP                             ; 00574df3
    POP EDI                             ; 00574df4
    POP ESI                             ; 00574df5
    POP EBX                             ; 00574df6
    RET                                 ; 00574df7
    MOV ESI,dword ptr [EBP + 0x18]      ; 00574df8
        ;   Label: LAB_00574df8
    PUSH ESI                            ; 00574dfb
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00574dfc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00574e01
    MOV EDI,dword ptr [EBP + 0x14]      ; 00574e04
    PUSH EDI                            ; 00574e07
    CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0 ; 00574e08
        ;   XREF to: 00574ef0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00574e0d
    XOR EAX,EAX                         ; 00574e10
    MOV dword ptr [ESP + 0x28],EAX      ; 00574e12
    MOV EAX,dword ptr [ESP + 0x28]      ; 00574e16
    MOV ESP,EBP                         ; 00574e1a
    POP EBP                             ; 00574e1c
    POP EDI                             ; 00574e1d
    POP ESI                             ; 00574e1e
    POP EBX                             ; 00574e1f
    RET                                 ; 00574e20
    FLD float ptr [ESP]                 ; 00574e21
        ;   Label: LAB_00574e21
    FMUL double ptr [0x006464b6]        ; 00574e24 | DOUBLE_006464b6
    JMP 0x00574d1a                      ; 00574e2a
        ;   XREF to: 00574d1a (UNCONDITIONAL_JUMP)  ; LAB_00574d1a

