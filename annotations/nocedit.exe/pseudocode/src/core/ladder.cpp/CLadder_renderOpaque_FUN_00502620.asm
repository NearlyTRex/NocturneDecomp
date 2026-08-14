; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_00502620(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; Local Variables:
; SRenderVertex    Stack[-0x74]:48  local_74
;
; Referenced Globals:
;   double DOUBLE_00630e18 = 0.5
;   double DOUBLE_00630e20 = 0.00100000000000000
;   float FLOAT_006605d0 = 256
;   float FLOAT_006605e8 = 1
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;   CDemonMission g_CDemonMissionInstance
;   undefined4 g_CDemonMissionInstance.is_in_editor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502620
        ;   Label: core_ladder.cpp_CLadder_renderOpaque_FUN_00502620
    PUSH ESI                            ; 00502621
    PUSH EDI                            ; 00502622
    PUSH EBP                            ; 00502623
    MOV EBP,ESP                         ; 00502624
    SUB ESP,0x70                        ; 00502626
    AND ESP,0xfffffff8                  ; 00502629
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050262c
    PUSH EDX                            ; 0050262f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00502630
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00502635
    LEA EBX,[ESP + 0xc]                 ; 00502638
    PUSH EBX                            ; 0050263c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050263d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502640
    PUSH ECX                            ; 00502643
    MOV EAX,dword ptr [EAX + 0x154]     ; 00502644
    CALL dword ptr [EAX + 0x14]         ; 0050264a
    ADD ESP,0x8                         ; 0050264d
    PUSH EAX                            ; 00502650
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00502651
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00502656
    MOV dword ptr [ESP + 0x6c],EAX      ; 00502659
    TEST EAX,EAX                        ; 0050265d
    JZ 0x0050287f                       ; 0050265f
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    MOV EAX,[0x0067d550]                ; 00502665 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0050266a | g_CDemonMissionInstance.is_in_editor
    JZ 0x0050287f                       ; 0050266e
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    MOV ESI,dword ptr [0x006703ec]      ; 00502674 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0050267a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0050267b
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00502680
    TEST EAX,EAX                        ; 00502683
    JNZ 0x0050287f                      ; 00502685
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    MOV EDI,0xfb                        ; 0050268b
    MOV dword ptr [ESP + 0x8],EAX       ; 00502690
    MOV dword ptr [0x02d02570],EDI      ; 00502694 | g_ActiveRenderColor
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050269a
        ;   Label: LAB_0050269a
    FLD float ptr [EAX + 0x2d8]         ; 0050269d
    FADD double ptr [0x00630e20]        ; 005026a3 | DOUBLE_00630e20
    FLD float ptr [ESP + 0x8]           ; 005026a9
    FSTP double ptr [ESP]               ; 005026ad
    FCOMP double ptr [ESP]              ; 005026b0
    FNSTSW AX                           ; 005026b3
    SAHF                                ; 005026b5
    JBE 0x0050287f                      ; 005026b6
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    FLDZ                                ; 005026bc
    FCOMP double ptr [ESP]              ; 005026be
    FNSTSW AX                           ; 005026c1
    SAHF                                ; 005026c3
    JC 0x005027cc                       ; 005026c4
        ;   XREF to: 005027cc (CONDITIONAL_JUMP)  ; LAB_005027cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005026ca
        ;   Label: LAB_005026ca
    FLD float ptr [EAX + 0x2d4]         ; 005026cd
    FCHS                                ; 005026d3
    FLD double ptr [0x00630e18]         ; 005026d5 | DOUBLE_00630e18
    FXCH                                ; 005026db
    FMUL ST1                            ; 005026dd
    XOR EBX,EBX                         ; 005026df
    MOV EAX,dword ptr [ESP + 0x8]       ; 005026e1
    MOV dword ptr [ESP + 0x44],EBX      ; 005026e5
    MOV dword ptr [ESP + 0x40],EAX      ; 005026e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005026ed
    FSTP float ptr [ESP + 0x3c]         ; 005026f0
    FMUL float ptr [EAX + 0x2d4]        ; 005026f4
    MOV EDI,dword ptr [0x006703ec]      ; 005026fa | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESP + 0x8]       ; 00502700
    MOV dword ptr [ESP + 0x5c],EBX      ; 00502704
    LEA EBX,[ESP + 0x48]                ; 00502708
    MOV dword ptr [ESP + 0x58],EAX      ; 0050270c
    LEA EAX,[ESP + 0x3c]                ; 00502710
    FSTP float ptr [ESP + 0x54]         ; 00502714
    FLD float ptr [EAX]                 ; 00502718
    FMUL float ptr [0x006605d0]         ; 0050271a | FLOAT_006605d0
    FISTP dword ptr [EBX]               ; 00502720
    FLD float ptr [EAX + 0x4]           ; 00502722
    FMUL float ptr [0x006605d0]         ; 00502725 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x4]         ; 0050272b
    FLD float ptr [EAX + 0x8]           ; 0050272e
    FMUL float ptr [0x006605d0]         ; 00502731 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x8]         ; 00502737
    LEA EAX,[ESP + 0x48]                ; 0050273a
    PUSH EAX                            ; 0050273e
    MOV EAX,dword ptr [EDI]             ; 0050273f | g_CDemonRendererInstance
    PUSH EAX                            ; 00502741
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00502742
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x2c]                ; 00502747
    ADD ESP,0x8                         ; 0050274b
    LEA EAX,[ESP + 0x54]                ; 0050274e
    MOV EDI,dword ptr [0x006703ec]      ; 00502752 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00502758
    FMUL float ptr [0x006605d0]         ; 0050275a | FLOAT_006605d0
    FISTP dword ptr [EBX]               ; 00502760
    FLD float ptr [EAX + 0x4]           ; 00502762
    FMUL float ptr [0x006605d0]         ; 00502765 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x4]         ; 0050276b
    FLD float ptr [EAX + 0x8]           ; 0050276e
    FMUL float ptr [0x006605d0]         ; 00502771 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x8]         ; 00502777
    LEA EAX,[ESP + 0x24]                ; 0050277a
    PUSH EAX                            ; 0050277e
    MOV EAX,dword ptr [EDI]             ; 0050277f | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00502781
    PUSH EAX                            ; 00502784
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00502785
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050278a
    MOV EAX,[0x006703ec]                ; 0050278d | g_CDemonRendererPtr2
    JMP 0x00602e34                      ; 00502792
        ;   XREF to: 00602e34 (UNCONDITIONAL_JUMP)  ; LAB_00602e34
    MOVSD.REP ES:EDI,ESI                ; 005027a1
        ;   Label: LAB_005027a1
    JMP 0x00602e8e                      ; 005027a3
        ;   XREF to: 00602e8e (UNCONDITIONAL_JUMP)  ; LAB_00602e8e
    MOVSD.REP ES:EDI,ESI                ; 005027af
        ;   Label: LAB_005027af
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005027b1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 005027b6
    FLD float ptr [ESP + 0x8]           ; 005027b9
    FADD float ptr [0x006605e8]         ; 005027bd | FLOAT_006605e8
    FSTP float ptr [ESP + 0x8]          ; 005027c3
    JMP 0x0050269a                      ; 005027c7
        ;   XREF to: 0050269a (UNCONDITIONAL_JUMP)  ; LAB_0050269a
    MOV EAX,dword ptr [ESP + 0x8]       ; 005027cc
        ;   Label: LAB_005027cc
    LEA EBX,[ESP + 0x30]                ; 005027d0
    XOR EDX,EDX                         ; 005027d4
    MOV EDI,dword ptr [0x006703ec]      ; 005027d6 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x60],EDX      ; 005027dc
    MOV dword ptr [ESP + 0x64],EAX      ; 005027e0
    LEA EAX,[ESP + 0x60]                ; 005027e4
    MOV dword ptr [ESP + 0x68],EDX      ; 005027e8
    FLD float ptr [EAX]                 ; 005027ec
    FMUL float ptr [0x006605d0]         ; 005027ee | FLOAT_006605d0
    FISTP dword ptr [EBX]               ; 005027f4
    FLD float ptr [EAX + 0x4]           ; 005027f6
    FMUL float ptr [0x006605d0]         ; 005027f9 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x4]         ; 005027ff
    FLD float ptr [EAX + 0x8]           ; 00502802
    FMUL float ptr [0x006605d0]         ; 00502805 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x8]         ; 0050280b
    LEA EAX,[ESP + 0x30]                ; 0050280e
    PUSH EAX                            ; 00502812
    MOV EAX,dword ptr [EDI]             ; 00502813 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00502815
    PUSH EAX                            ; 00502818
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00502819
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050281e
    MOV EAX,[0x006703ec]                ; 00502821 | g_CDemonRendererPtr2
    JMP 0x00602ee5                      ; 00502826
        ;   XREF to: 00602ee5 (UNCONDITIONAL_JUMP)  ; LAB_00602ee5
    MOVSD.REP ES:EDI,ESI                ; 00502835
        ;   Label: LAB_00502835
    JMP 0x00602f3f                      ; 00502837
        ;   XREF to: 00602f3f (UNCONDITIONAL_JUMP)  ; LAB_00602f3f
    MOVSD.REP ES:EDI,ESI                ; 00502843
        ;   Label: LAB_00502843
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00502845
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0050284a
    MOV EAX,[0x006703ec]                ; 0050284d | g_CDemonRendererPtr2
    JMP 0x00602f96                      ; 00502852
        ;   XREF to: 00602f96 (UNCONDITIONAL_JUMP)  ; LAB_00602f96
    MOVSD.REP ES:EDI,ESI                ; 00502861
        ;   Label: LAB_00502861
    JMP 0x00602ff0                      ; 00502863
        ;   XREF to: 00602ff0 (UNCONDITIONAL_JUMP)  ; LAB_00602ff0
    MOVSD.REP ES:EDI,ESI                ; 00502870
        ;   Label: LAB_00502870
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00502872
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00502877
    JMP 0x005026ca                      ; 0050287a
        ;   XREF to: 005026ca (UNCONDITIONAL_JUMP)  ; LAB_005026ca
    CMP dword ptr [ESP + 0x6c],0x0      ; 0050287f
        ;   Label: LAB_0050287f
    JNZ 0x0050289d                      ; 00502884
        ;   XREF to: 0050289d (CONDITIONAL_JUMP)  ; LAB_0050289d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502886
        ;   Label: LAB_00502886
    PUSH EAX                            ; 00502889
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0050288a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050288f
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00502892
    MOV ESP,EBP                         ; 00502896
    POP EBP                             ; 00502898
    POP EDI                             ; 00502899
    POP ESI                             ; 0050289a
    POP EBX                             ; 0050289b
    RET                                 ; 0050289c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050289d
        ;   Label: LAB_0050289d
    PUSH -0x1                           ; 005028a0
    ADD EAX,0x158                       ; 005028a2
    PUSH 0x0                            ; 005028a7
    PUSH EAX                            ; 005028a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005028aa
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005028af
    JMP 0x00502886                      ; 005028b2
        ;   XREF to: 00502886 (UNCONDITIONAL_JUMP)  ; LAB_00502886
    SUB ESP,0x30                        ; 00602e34
        ;   Label: LAB_00602e34
    MOV EAX,dword ptr [EAX]             ; 00602e37
    MOV ECX,0xc                         ; 00602e39
    MOV EDI,ESP                         ; 00602e3e
    LEA ESI,[EAX + 0x30]                ; 00602e40
    MOV ECX,dword ptr [ESI]             ; 00602e43
    MOV dword ptr [EDI],ECX             ; 00602e45
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602e47
    MOV dword ptr [EDI + 0x4],ECX       ; 00602e4a
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602e4d
    MOV dword ptr [EDI + 0x8],ECX       ; 00602e50
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602e53
    MOV dword ptr [EDI + 0xc],ECX       ; 00602e56
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602e59
    MOV dword ptr [EDI + 0x10],ECX      ; 00602e5c
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602e5f
    MOV dword ptr [EDI + 0x14],ECX      ; 00602e62
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602e65
    MOV dword ptr [EDI + 0x18],ECX      ; 00602e68
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602e6b
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602e6e
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602e71
    MOV dword ptr [EDI + 0x20],ECX      ; 00602e74
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602e77
    MOV dword ptr [EDI + 0x24],ECX      ; 00602e7a
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602e7d
    MOV dword ptr [EDI + 0x28],ECX      ; 00602e80
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602e83
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602e86
    JMP 0x005027a1                      ; 00602e89
        ;   XREF to: 005027a1 (UNCONDITIONAL_JUMP)  ; LAB_005027a1
    SUB ESP,0x30                        ; 00602e8e
        ;   Label: LAB_00602e8e
    MOV ECX,0xc                         ; 00602e91
    MOV EDI,ESP                         ; 00602e96
    MOV ESI,EAX                         ; 00602e98
    MOV ECX,dword ptr [ESI]             ; 00602e9a
    MOV dword ptr [EDI],ECX             ; 00602e9c
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602e9e
    MOV dword ptr [EDI + 0x4],ECX       ; 00602ea1
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602ea4
    MOV dword ptr [EDI + 0x8],ECX       ; 00602ea7
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602eaa
    MOV dword ptr [EDI + 0xc],ECX       ; 00602ead
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602eb0
    MOV dword ptr [EDI + 0x10],ECX      ; 00602eb3
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602eb6
    MOV dword ptr [EDI + 0x14],ECX      ; 00602eb9
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602ebc
    MOV dword ptr [EDI + 0x18],ECX      ; 00602ebf
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602ec2
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602ec5
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602ec8
    MOV dword ptr [EDI + 0x20],ECX      ; 00602ecb
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602ece
    MOV dword ptr [EDI + 0x24],ECX      ; 00602ed1
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602ed4
    MOV dword ptr [EDI + 0x28],ECX      ; 00602ed7
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602eda
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602edd
    JMP 0x005027af                      ; 00602ee0
        ;   XREF to: 005027af (UNCONDITIONAL_JUMP)  ; LAB_005027af
    SUB ESP,0x30                        ; 00602ee5
        ;   Label: LAB_00602ee5
    MOV EAX,dword ptr [EAX]             ; 00602ee8
    MOV ECX,0xc                         ; 00602eea
    MOV EDI,ESP                         ; 00602eef
    LEA ESI,[EAX + 0x60]                ; 00602ef1
    MOV ECX,dword ptr [ESI]             ; 00602ef4
    MOV dword ptr [EDI],ECX             ; 00602ef6
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602ef8
    MOV dword ptr [EDI + 0x4],ECX       ; 00602efb
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602efe
    MOV dword ptr [EDI + 0x8],ECX       ; 00602f01
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602f04
    MOV dword ptr [EDI + 0xc],ECX       ; 00602f07
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602f0a
    MOV dword ptr [EDI + 0x10],ECX      ; 00602f0d
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602f10
    MOV dword ptr [EDI + 0x14],ECX      ; 00602f13
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602f16
    MOV dword ptr [EDI + 0x18],ECX      ; 00602f19
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602f1c
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602f1f
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602f22
    MOV dword ptr [EDI + 0x20],ECX      ; 00602f25
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602f28
    MOV dword ptr [EDI + 0x24],ECX      ; 00602f2b
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602f2e
    MOV dword ptr [EDI + 0x28],ECX      ; 00602f31
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602f34
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602f37
    JMP 0x00502835                      ; 00602f3a
        ;   XREF to: 00502835 (UNCONDITIONAL_JUMP)  ; LAB_00502835
    SUB ESP,0x30                        ; 00602f3f
        ;   Label: LAB_00602f3f
    MOV ECX,0xc                         ; 00602f42
    MOV EDI,ESP                         ; 00602f47
    MOV ESI,EAX                         ; 00602f49
    MOV ECX,dword ptr [ESI]             ; 00602f4b
    MOV dword ptr [EDI],ECX             ; 00602f4d
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602f4f
    MOV dword ptr [EDI + 0x4],ECX       ; 00602f52
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602f55
    MOV dword ptr [EDI + 0x8],ECX       ; 00602f58
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602f5b
    MOV dword ptr [EDI + 0xc],ECX       ; 00602f5e
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602f61
    MOV dword ptr [EDI + 0x10],ECX      ; 00602f64
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602f67
    MOV dword ptr [EDI + 0x14],ECX      ; 00602f6a
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602f6d
    MOV dword ptr [EDI + 0x18],ECX      ; 00602f70
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602f73
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602f76
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602f79
    MOV dword ptr [EDI + 0x20],ECX      ; 00602f7c
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602f7f
    MOV dword ptr [EDI + 0x24],ECX      ; 00602f82
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602f85
    MOV dword ptr [EDI + 0x28],ECX      ; 00602f88
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602f8b
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602f8e
    JMP 0x00502843                      ; 00602f91
        ;   XREF to: 00502843 (UNCONDITIONAL_JUMP)  ; LAB_00502843
    SUB ESP,0x30                        ; 00602f96
        ;   Label: LAB_00602f96
    MOV EAX,dword ptr [EAX]             ; 00602f99
    MOV ECX,0xc                         ; 00602f9b
    MOV EDI,ESP                         ; 00602fa0
    LEA ESI,[EAX + 0x60]                ; 00602fa2
    MOV ECX,dword ptr [ESI]             ; 00602fa5
    MOV dword ptr [EDI],ECX             ; 00602fa7
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602fa9
    MOV dword ptr [EDI + 0x4],ECX       ; 00602fac
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602faf
    MOV dword ptr [EDI + 0x8],ECX       ; 00602fb2
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602fb5
    MOV dword ptr [EDI + 0xc],ECX       ; 00602fb8
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602fbb
    MOV dword ptr [EDI + 0x10],ECX      ; 00602fbe
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602fc1
    MOV dword ptr [EDI + 0x14],ECX      ; 00602fc4
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602fc7
    MOV dword ptr [EDI + 0x18],ECX      ; 00602fca
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602fcd
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602fd0
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602fd3
    MOV dword ptr [EDI + 0x20],ECX      ; 00602fd6
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602fd9
    MOV dword ptr [EDI + 0x24],ECX      ; 00602fdc
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602fdf
    MOV dword ptr [EDI + 0x28],ECX      ; 00602fe2
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602fe5
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602fe8
    JMP 0x00502861                      ; 00602feb
        ;   XREF to: 00502861 (UNCONDITIONAL_JUMP)  ; LAB_00502861
    SUB ESP,0x30                        ; 00602ff0
        ;   Label: LAB_00602ff0
    MOV ECX,0xc                         ; 00602ff3
    MOV EDI,ESP                         ; 00602ff8
    LEA ESI,[EAX + 0x30]                ; 00602ffa
    MOV ECX,dword ptr [ESI]             ; 00602ffd
    MOV dword ptr [EDI],ECX             ; 00602fff
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603001
    MOV dword ptr [EDI + 0x4],ECX       ; 00603004
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603007
    MOV dword ptr [EDI + 0x8],ECX       ; 0060300a
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060300d
    MOV dword ptr [EDI + 0xc],ECX       ; 00603010
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603013
    MOV dword ptr [EDI + 0x10],ECX      ; 00603016
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603019
    MOV dword ptr [EDI + 0x14],ECX      ; 0060301c
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060301f
    MOV dword ptr [EDI + 0x18],ECX      ; 00603022
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603025
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603028
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060302b
    MOV dword ptr [EDI + 0x20],ECX      ; 0060302e
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603031
    MOV dword ptr [EDI + 0x24],ECX      ; 00603034
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603037
    MOV dword ptr [EDI + 0x28],ECX      ; 0060303a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060303d
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603040
    JMP 0x00502870                      ; 00603043
        ;   XREF to: 00502870 (UNCONDITIONAL_JUMP)  ; LAB_00502870

