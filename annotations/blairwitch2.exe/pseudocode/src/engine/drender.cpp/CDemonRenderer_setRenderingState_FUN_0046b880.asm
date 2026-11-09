; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer *this_ptr,int state_flag)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   state_flag
;
; XREF[22]:
;   core_box.cpp_CBoundingBox3D_render_FUN_0041b700 at 0041b7b5
;   core_chain.cpp_FUN_005b56c0 at 005b576e
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0 at 005b1015
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_00443af0 at 00443b6c
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0 at 0044690b
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 at 0044adca
;   core_dlight.cpp_CDemonLight_testVisibility_FUN_0044d9f0 at 0044da22
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0 at 0044e80f
;   core_dpart.cpp_FUN_00461a4e at 00461a64
;   core_dtrace.cpp_FUN_00474020 at 004743ff
;   ... and 12 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
;   engine_prim.c_FUN_0051c1a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046b880
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046b881
    TEST EDX,EDX                        ; 0046b885
    JZ 0x0046b8be                       ; 0046b887
        ;   XREF to: 0046b8be (CONDITIONAL_JUMP)  ; LAB_0046b8be
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b889
    CMP dword ptr [EAX + 0x18],0x0      ; 0046b88d
    JZ 0x0046b8ba                       ; 0046b891
        ;   XREF to: 0046b8ba (CONDITIONAL_JUMP)  ; LAB_0046b8ba
    PUSH 0x2                            ; 0046b893
    CALL engine_prim.c_FUN_0051c1a0     ; 0046b895
        ;   XREF to: 0051c1a0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_FUN_0051c1a0(int culling_mode)
        ;   Label: LAB_0046b895
    ADD ESP,0x4                         ; 0046b89a
    CMP dword ptr [ESP + 0xc],0x0       ; 0046b89d
    SETZ AL                             ; 0046b8a2
    AND EAX,0xff                        ; 0046b8a5
    PUSH EAX                            ; 0046b8aa
    MOV ESI,dword ptr [ESP + 0xc]       ; 0046b8ab
    PUSH ESI                            ; 0046b8af
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 0046b8b0
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0046b8b5
    POP ESI                             ; 0046b8b8
    RET                                 ; 0046b8b9
    PUSH 0x1                            ; 0046b8ba
        ;   Label: LAB_0046b8ba
    JMP 0x0046b895                      ; 0046b8bc
        ;   XREF to: 0046b895 (UNCONDITIONAL_JUMP)  ; LAB_0046b895
    PUSH EDX                            ; 0046b8be
        ;   Label: LAB_0046b8be
    JMP 0x0046b895                      ; 0046b8bf
        ;   XREF to: 0046b895 (UNCONDITIONAL_JUMP)  ; LAB_0046b895

