; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[15]:
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045ec60 at 0045edd2
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190 at 00464944
;   core_dlight.cpp_FUN_00463820 at 00463d90
;   core_dlight.cpp_FUN_00464990 at 00464fd1
;   core_dlight.cpp_renderConeLightGeometry_FUN_00465890 at 00465d50
;   core_fire.cpp_CFirefly_render_FUN_004adaf0 at 004adc2f
;   core_fire.cpp_CGunFlame_render_FUN_004b2ea0 at 004b341b
;   core_fire.cpp_CLaserBeam_render_FUN_004b01a0 at 004b09c4
;   core_fire.cpp_CPopcorn_render_FUN_004b4370 at 004b46a4
;   core_fire.cpp_CRainDrop_render_FUN_004b46e0 at 004b4a4e
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482e30
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
    PUSH ESI                            ; 00482e31
    PUSH EDI                            ; 00482e32
    PUSH EBP                            ; 00482e33
    MOV EBP,dword ptr [ESP + 0x14]      ; 00482e34
    MOV ESI,dword ptr [ESP + 0x18]      ; 00482e38
    CMP dword ptr [EBP + 0xc],0x0       ; 00482e3c
    JNZ 0x00482eb1                      ; 00482e40
        ;   XREF to: 00482eb1 (CONDITIONAL_JUMP)  ; LAB_00482eb1
    MOV ECX,0xffffffff                  ; 00482e46
        ;   Label: LAB_00482e46
    MOV EBX,dword ptr [ESI + 0x4]       ; 00482e4b
    XOR EDX,EDX                         ; 00482e4e
    TEST EBX,EBX                        ; 00482e50
    JLE 0x00482e70                      ; 00482e52
        ;   XREF to: 00482e70 (CONDITIONAL_JUMP)  ; LAB_00482e70
    MOV EAX,ESI                         ; 00482e54
    MOV EDI,dword ptr [EBP]             ; 00482e56
    MOV EBX,dword ptr [EAX + 0x18]      ; 00482e59
        ;   Label: LAB_00482e59
    IMUL EBX,EBX,0x30                   ; 00482e5c
    INC EDX                             ; 00482e5f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 00482e60
    MOV EBX,dword ptr [ESI + 0x4]       ; 00482e64
    ADD EAX,0x4                         ; 00482e67
    CMP EDX,EBX                         ; 00482e6a
    JL 0x00482e59                       ; 00482e6c
        ;   XREF to: 00482e59 (CONDITIONAL_JUMP)  ; LAB_00482e59
    MOV EAX,EAX                         ; 00482e6e
    TEST ECX,0x80000000                 ; 00482e70
        ;   Label: LAB_00482e70
    JZ 0x00482e7d                       ; 00482e76
        ;   XREF to: 00482e7d (CONDITIONAL_JUMP)  ; LAB_00482e7d
    TEST CL,0x1f                        ; 00482e78
    JNZ 0x00482eac                      ; 00482e7b
        ;   XREF to: 00482eac (CONDITIONAL_JUMP)  ; LAB_00482eac
    CMP dword ptr [EBP + 0x4],0x0       ; 00482e7d
        ;   Label: LAB_00482e7d
    JZ 0x00482ec3                       ; 00482e81
        ;   XREF to: 00482ec3 (CONDITIONAL_JUMP)  ; LAB_00482ec3
    XOR EDX,EDX                         ; 00482e83
    MOV EAX,0x486e26                    ; 00482e85
    MOV dword ptr [0x01c51d14],EDX      ; 00482e8a | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 00482e90 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 00482e96 | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 00482e9b
        ;   Label: LAB_00482e9b
    PUSH EAX                            ; 00482e9e
    MOV EBX,dword ptr [ESI + 0x4]       ; 00482e9f
    PUSH EBX                            ; 00482ea2
    PUSH EBP                            ; 00482ea3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482ea4
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482ea9
    POP EBP                             ; 00482eac
        ;   Label: LAB_00482eac
    POP EDI                             ; 00482ead
    POP ESI                             ; 00482eae
    POP EBX                             ; 00482eaf
    RET                                 ; 00482eb0
    LEA EAX,[ESI + 0x8]                 ; 00482eb1
        ;   Label: LAB_00482eb1
    PUSH EAX                            ; 00482eb4
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482eb5
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00482eba
    TEST EAX,EAX                        ; 00482ebd
    JZ 0x00482eac                       ; 00482ebf
        ;   XREF to: 00482eac (CONDITIONAL_JUMP)  ; LAB_00482eac
    JMP 0x00482e46                      ; 00482ec1
        ;   XREF to: 00482e46 (UNCONDITIONAL_JUMP)  ; LAB_00482e46
    CMP dword ptr [0x0061b4a0],0x20     ; 00482ec3 | DAT_0061b4a0
        ;   Label: LAB_00482ec3
    JNZ 0x00482eee                      ; 00482eca
        ;   XREF to: 00482eee (CONDITIONAL_JUMP)  ; LAB_00482eee
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482ecc | DAT_01c4f02c
    MOV EDI,0x6                         ; 00482ed6
        ;   Label: LAB_00482ed6
    MOV EBX,0x367                       ; 00482edb
    MOV dword ptr [0x01c51d18],EDI      ; 00482ee0 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EBX      ; 00482ee6 | DAT_01c51d14
    JMP 0x00482e9b                      ; 00482eec
        ;   XREF to: 00482e9b (UNCONDITIONAL_JUMP)  ; LAB_00482e9b
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482eee | DAT_01c4f02c
        ;   Label: LAB_00482eee
    JMP 0x00482ed6                      ; 00482ef8
        ;   XREF to: 00482ed6 (UNCONDITIONAL_JUMP)  ; LAB_00482ed6

