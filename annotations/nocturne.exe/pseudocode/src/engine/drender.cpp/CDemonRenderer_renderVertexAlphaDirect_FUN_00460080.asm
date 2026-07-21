; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(int *param_1,int param_2)
;
;
; XREF[11]:
;   FUN_00489990 at 00489cc0
;   FUN_0048d5d0 at 0048daa7
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430 at 0044f94e
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520 at 00450c4d
;   core_dlight.cpp_renderConeLightGeometry_FUN_00451b70 at 00452030
;   core_fire.cpp_CFireball_render_FUN_00484390 at 00484759
;   core_fire.cpp_CGunFlame_render_FUN_00488580 at 00488a9a
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90 at 00486207
;   core_fire.cpp_CRainDrop_render_FUN_00489d00 at 0048a06d
;   core_fire.cpp_CSpark_render_FUN_004838c0 at 004839f3
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460080
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
    PUSH ESI                            ; 00460081
    PUSH EDI                            ; 00460082
    PUSH EBP                            ; 00460083
    MOV EBP,dword ptr [ESP + 0x14]      ; 00460084
    MOV ESI,dword ptr [ESP + 0x18]      ; 00460088
    CMP dword ptr [EBP + 0xc],0x0       ; 0046008c
    JNZ 0x00460101                      ; 00460090
        ;   XREF to: 00460101 (CONDITIONAL_JUMP)  ; LAB_00460101
    MOV ECX,0xffffffff                  ; 00460096
        ;   Label: LAB_00460096
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046009b
    XOR EDX,EDX                         ; 0046009e
    TEST EBX,EBX                        ; 004600a0
    JLE 0x004600c0                      ; 004600a2
        ;   XREF to: 004600c0 (CONDITIONAL_JUMP)  ; LAB_004600c0
    MOV EAX,ESI                         ; 004600a4
    MOV EDI,dword ptr [EBP]             ; 004600a6
    MOV EBX,dword ptr [EAX + 0x18]      ; 004600a9
        ;   Label: LAB_004600a9
    IMUL EBX,EBX,0x30                   ; 004600ac
    INC EDX                             ; 004600af
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 004600b0
    MOV EBX,dword ptr [ESI + 0x4]       ; 004600b4
    ADD EAX,0x4                         ; 004600b7
    CMP EDX,EBX                         ; 004600ba
    JL 0x004600a9                       ; 004600bc
        ;   XREF to: 004600a9 (CONDITIONAL_JUMP)  ; LAB_004600a9
    MOV EAX,EAX                         ; 004600be
    TEST ECX,0x80000000                 ; 004600c0
        ;   Label: LAB_004600c0
    JZ 0x004600cd                       ; 004600c6
        ;   XREF to: 004600cd (CONDITIONAL_JUMP)  ; LAB_004600cd
    TEST CL,0x1f                        ; 004600c8
    JNZ 0x004600fc                      ; 004600cb
        ;   XREF to: 004600fc (CONDITIONAL_JUMP)  ; LAB_004600fc
    CMP dword ptr [EBP + 0x4],0x0       ; 004600cd
        ;   Label: LAB_004600cd
    JZ 0x00460113                       ; 004600d1
        ;   XREF to: 00460113 (CONDITIONAL_JUMP)  ; LAB_00460113
    XOR EDX,EDX                         ; 004600d3
    MOV EAX,0x463a79                    ; 004600d5 | LAB_00463a79
    MOV dword ptr [0x01c039a0],EDX      ; 004600da | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 004600e0 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 004600e6 | DAT_01c00c7c
    LEA EAX,[ESI + 0x18]                ; 004600eb
        ;   Label: LAB_004600eb
    PUSH EAX                            ; 004600ee
    MOV EBX,dword ptr [ESI + 0x4]       ; 004600ef
    PUSH EBX                            ; 004600f2
    PUSH EBP                            ; 004600f3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 004600f4
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 004600f9
    POP EBP                             ; 004600fc
        ;   Label: LAB_004600fc
    POP EDI                             ; 004600fd
    POP ESI                             ; 004600fe
    POP EBX                             ; 004600ff
    RET                                 ; 00460100
    LEA EAX,[ESI + 0x8]                 ; 00460101
        ;   Label: LAB_00460101
    PUSH EAX                            ; 00460104
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00460105
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0046010a
    TEST EAX,EAX                        ; 0046010d
    JZ 0x004600fc                       ; 0046010f
        ;   XREF to: 004600fc (CONDITIONAL_JUMP)  ; LAB_004600fc
    JMP 0x00460096                      ; 00460111
        ;   XREF to: 00460096 (UNCONDITIONAL_JUMP)  ; LAB_00460096
    CMP dword ptr [0x005b7624],0x20     ; 00460113 | DAT_005b7624
        ;   Label: LAB_00460113
    JNZ 0x0046013e                      ; 0046011a
        ;   XREF to: 0046013e (CONDITIONAL_JUMP)  ; LAB_0046013e
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0046011c | DAT_01c00c7c | LAB_0052f031
    MOV EDI,0x6                         ; 00460126
        ;   Label: LAB_00460126
    MOV EBX,0x367                       ; 0046012b
    MOV dword ptr [0x01c039a4],EDI      ; 00460130 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EBX      ; 00460136 | DAT_01c039a0
    JMP 0x004600eb                      ; 0046013c
        ;   XREF to: 004600eb (UNCONDITIONAL_JUMP)  ; LAB_004600eb
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0046013e | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0046013e
    JMP 0x00460126                      ; 00460148
        ;   XREF to: 00460126 (UNCONDITIONAL_JUMP)  ; LAB_00460126

