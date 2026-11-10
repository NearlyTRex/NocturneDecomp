; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer *this_ptr,int state_flag)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   state_flag
;
; XREF[23]:
;   core_box.cpp_FUN_00421670 at 00421725
;   core_chain.cpp_CChain_renderTransparent_FUN_00436600 at 004366ae
;   core_cloth.cpp_CCloth_render_FUN_00441800 at 00441835
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20 at 0044c040
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004551a0 at 0045521c
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70 at 00457fbb
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 at 004635ca
;   core_dlight.cpp_CDemonLight_testVisibility_FUN_004665c0 at 004665f2
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_004673a0 at 004673df
;   core_dpart.cpp_FUN_00479f5e at 00479f74
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
;   engine_prim.c_FUN_0053d7a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00483d80
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
    MOV EDX,dword ptr [ESP + 0xc]       ; 00483d81
    TEST EDX,EDX                        ; 00483d85
    JZ 0x00483dbe                       ; 00483d87
        ;   XREF to: 00483dbe (CONDITIONAL_JUMP)  ; LAB_00483dbe
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483d89
    CMP dword ptr [EAX + 0x18],0x0      ; 00483d8d
    JZ 0x00483dba                       ; 00483d91
        ;   XREF to: 00483dba (CONDITIONAL_JUMP)  ; LAB_00483dba
    PUSH 0x2                            ; 00483d93
    CALL engine_prim.c_FUN_0053d7a0     ; 00483d95
        ;   XREF to: 0053d7a0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_FUN_0053d7a0(int culling_mode)
        ;   Label: LAB_00483d95
    ADD ESP,0x4                         ; 00483d9a
    CMP dword ptr [ESP + 0xc],0x0       ; 00483d9d
    SETZ AL                             ; 00483da2
    AND EAX,0xff                        ; 00483da5
    PUSH EAX                            ; 00483daa
    MOV ESI,dword ptr [ESP + 0xc]       ; 00483dab
    PUSH ESI                            ; 00483daf
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 00483db0
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00483db5
    POP ESI                             ; 00483db8
    RET                                 ; 00483db9
    PUSH 0x1                            ; 00483dba
        ;   Label: LAB_00483dba
    JMP 0x00483d95                      ; 00483dbc
        ;   XREF to: 00483d95 (UNCONDITIONAL_JUMP)  ; LAB_00483d95
    PUSH EDX                            ; 00483dbe
        ;   Label: LAB_00483dbe
    JMP 0x00483d95                      ; 00483dbf
        ;   XREF to: 00483d95 (UNCONDITIONAL_JUMP)  ; LAB_00483d95

